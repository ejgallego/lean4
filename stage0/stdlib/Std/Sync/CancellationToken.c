// Lean compiler output
// Module: Std.Sync.CancellationToken
// Imports: public import Std.Data public import Init.Data.Queue public import Std.Sync.Mutex public import Std.Async.Select public import Init.Data.ToString.Macro
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
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_io_basemutex_unlock(lean_object*);
lean_object* lean_io_basemutex_lock(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_Queue_empty___redArg();
lean_object* l_Std_Queue_dequeue_x3f___redArg(lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l_Std_Queue_enqueue___redArg(lean_object*, lean_object*);
lean_object* lean_io_promise_result_opt(lean_object*);
lean_object* lean_io_bind_task(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_Mutex_new___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_deadline_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_deadline_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_shutdown_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_shutdown_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_cancel_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_cancel_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_custom_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_custom_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_instReprCancellationReason_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Std.CancellationReason.cancel"};
static const lean_object* l_Std_instReprCancellationReason_repr___closed__0 = (const lean_object*)&l_Std_instReprCancellationReason_repr___closed__0_value;
static const lean_ctor_object l_Std_instReprCancellationReason_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_instReprCancellationReason_repr___closed__0_value)}};
static const lean_object* l_Std_instReprCancellationReason_repr___closed__1 = (const lean_object*)&l_Std_instReprCancellationReason_repr___closed__1_value;
static const lean_string_object l_Std_instReprCancellationReason_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Std.CancellationReason.shutdown"};
static const lean_object* l_Std_instReprCancellationReason_repr___closed__2 = (const lean_object*)&l_Std_instReprCancellationReason_repr___closed__2_value;
static const lean_ctor_object l_Std_instReprCancellationReason_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_instReprCancellationReason_repr___closed__2_value)}};
static const lean_object* l_Std_instReprCancellationReason_repr___closed__3 = (const lean_object*)&l_Std_instReprCancellationReason_repr___closed__3_value;
static const lean_string_object l_Std_instReprCancellationReason_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Std.CancellationReason.deadline"};
static const lean_object* l_Std_instReprCancellationReason_repr___closed__4 = (const lean_object*)&l_Std_instReprCancellationReason_repr___closed__4_value;
static const lean_ctor_object l_Std_instReprCancellationReason_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_instReprCancellationReason_repr___closed__4_value)}};
static const lean_object* l_Std_instReprCancellationReason_repr___closed__5 = (const lean_object*)&l_Std_instReprCancellationReason_repr___closed__5_value;
static lean_once_cell_t l_Std_instReprCancellationReason_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_instReprCancellationReason_repr___closed__6;
static lean_once_cell_t l_Std_instReprCancellationReason_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_instReprCancellationReason_repr___closed__7;
static const lean_string_object l_Std_instReprCancellationReason_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Std.CancellationReason.custom"};
static const lean_object* l_Std_instReprCancellationReason_repr___closed__8 = (const lean_object*)&l_Std_instReprCancellationReason_repr___closed__8_value;
static const lean_ctor_object l_Std_instReprCancellationReason_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_instReprCancellationReason_repr___closed__8_value)}};
static const lean_object* l_Std_instReprCancellationReason_repr___closed__9 = (const lean_object*)&l_Std_instReprCancellationReason_repr___closed__9_value;
static const lean_ctor_object l_Std_instReprCancellationReason_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_instReprCancellationReason_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_instReprCancellationReason_repr___closed__10 = (const lean_object*)&l_Std_instReprCancellationReason_repr___closed__10_value;
LEAN_EXPORT lean_object* l_Std_instReprCancellationReason_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_instReprCancellationReason_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_instReprCancellationReason___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_instReprCancellationReason_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_instReprCancellationReason___closed__0 = (const lean_object*)&l_Std_instReprCancellationReason___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_instReprCancellationReason = (const lean_object*)&l_Std_instReprCancellationReason___closed__0_value;
LEAN_EXPORT uint8_t l_Std_instBEqCancellationReason_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_instBEqCancellationReason_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_instBEqCancellationReason___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_instBEqCancellationReason_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_instBEqCancellationReason___closed__0 = (const lean_object*)&l_Std_instBEqCancellationReason___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_instBEqCancellationReason = (const lean_object*)&l_Std_instBEqCancellationReason___closed__0_value;
static const lean_string_object l_Std_instToStringCancellationReason___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "deadline"};
static const lean_object* l_Std_instToStringCancellationReason___lam__0___closed__0 = (const lean_object*)&l_Std_instToStringCancellationReason___lam__0___closed__0_value;
static const lean_string_object l_Std_instToStringCancellationReason___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "shutdown"};
static const lean_object* l_Std_instToStringCancellationReason___lam__0___closed__1 = (const lean_object*)&l_Std_instToStringCancellationReason___lam__0___closed__1_value;
static const lean_string_object l_Std_instToStringCancellationReason___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "cancel"};
static const lean_object* l_Std_instToStringCancellationReason___lam__0___closed__2 = (const lean_object*)&l_Std_instToStringCancellationReason___lam__0___closed__2_value;
static const lean_string_object l_Std_instToStringCancellationReason___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "custom(\""};
static const lean_object* l_Std_instToStringCancellationReason___lam__0___closed__3 = (const lean_object*)&l_Std_instToStringCancellationReason___lam__0___closed__3_value;
static const lean_string_object l_Std_instToStringCancellationReason___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\")"};
static const lean_object* l_Std_instToStringCancellationReason___lam__0___closed__4 = (const lean_object*)&l_Std_instToStringCancellationReason___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l_Std_instToStringCancellationReason___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_instToStringCancellationReason___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_instToStringCancellationReason___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_instToStringCancellationReason___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_instToStringCancellationReason___closed__0 = (const lean_object*)&l_Std_instToStringCancellationReason___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_instToStringCancellationReason = (const lean_object*)&l_Std_instToStringCancellationReason___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_normal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_normal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_select_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_select_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Async_Waiter_race___at___00__private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve_spec__0___closed__0 = (const lean_object*)&l_Std_Async_Waiter_race___at___00__private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve_spec__0___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Async_Waiter_race___at___00__private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve___closed__0 = (const lean_object*)&l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve___closed__0_value;
LEAN_EXPORT uint8_t l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_CancellationToken_new___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_CancellationToken_new___closed__0;
static lean_once_cell_t l_Std_CancellationToken_new___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_CancellationToken_new___closed__1;
LEAN_EXPORT lean_object* l_Std_CancellationToken_new();
LEAN_EXPORT lean_object* l_Std_CancellationToken_new___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_CancellationToken_cancel_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_CancellationToken_cancel_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_cancel___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_cancel___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_cancel(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_cancel___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_CancellationToken_cancel_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_CancellationToken_cancel_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_CancellationToken_isCancelled___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_isCancelled___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_CancellationToken_isCancelled___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CancellationToken_isCancelled___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_CancellationToken_isCancelled___closed__0 = (const lean_object*)&l_Std_CancellationToken_isCancelled___closed__0_value;
LEAN_EXPORT uint8_t l_Std_CancellationToken_isCancelled(lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_isCancelled___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_getCancellationReason___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_getCancellationReason___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_CancellationToken_getCancellationReason___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CancellationToken_getCancellationReason___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_CancellationToken_getCancellationReason___closed__0 = (const lean_object*)&l_Std_CancellationToken_getCancellationReason___closed__0_value;
LEAN_EXPORT lean_object* l_Std_CancellationToken_getCancellationReason(lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_getCancellationReason___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_CancellationToken_wait___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "cancellation token dropped"};
static const lean_object* l_Std_CancellationToken_wait___lam__0___closed__0 = (const lean_object*)&l_Std_CancellationToken_wait___lam__0___closed__0_value;
static lean_once_cell_t l_Std_CancellationToken_wait___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_CancellationToken_wait___lam__0___closed__1;
static lean_once_cell_t l_Std_CancellationToken_wait___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_CancellationToken_wait___lam__0___closed__2;
static lean_once_cell_t l_Std_CancellationToken_wait___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_CancellationToken_wait___lam__0___closed__3;
static lean_once_cell_t l_Std_CancellationToken_wait___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_CancellationToken_wait___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Std_CancellationToken_wait___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_wait___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_wait___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_wait___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_CancellationToken_wait___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CancellationToken_wait___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_CancellationToken_wait___closed__0 = (const lean_object*)&l_Std_CancellationToken_wait___closed__0_value;
static const lean_closure_object l_Std_CancellationToken_wait___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CancellationToken_wait___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_CancellationToken_wait___closed__0_value)} };
static const lean_object* l_Std_CancellationToken_wait___closed__1 = (const lean_object*)&l_Std_CancellationToken_wait___closed__1_value;
LEAN_EXPORT lean_object* l_Std_CancellationToken_wait(lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_wait___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__0___closed__0 = (const lean_object*)&l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__0___closed__0_value)}};
static const lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__0___closed__1 = (const lean_object*)&l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___closed__0 = (const lean_object*)&l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___closed__0 = (const lean_object*)&l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__1(lean_object*, lean_object*);
static const lean_ctor_object l_Std_CancellationToken_selector___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_Waiter_race___at___00__private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve_spec__0___closed__0_value)}};
static const lean_object* l_Std_CancellationToken_selector___lam__2___closed__0 = (const lean_object*)&l_Std_CancellationToken_selector___lam__2___closed__0_value;
static const lean_closure_object l_Std_CancellationToken_selector___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CancellationToken_selector___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_CancellationToken_selector___lam__2___closed__1 = (const lean_object*)&l_Std_CancellationToken_selector___lam__2___closed__1_value;
static const lean_closure_object l_Std_CancellationToken_selector___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CancellationToken_selector___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_CancellationToken_selector___lam__2___closed__2 = (const lean_object*)&l_Std_CancellationToken_selector___lam__2___closed__2_value;
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_CancellationToken_selector___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_CancellationToken_selector___lam__5___closed__0 = (const lean_object*)&l_Std_CancellationToken_selector___lam__5___closed__0_value;
static const lean_ctor_object l_Std_CancellationToken_selector___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_CancellationToken_selector___lam__5___closed__0_value)}};
static const lean_object* l_Std_CancellationToken_selector___lam__5___closed__1 = (const lean_object*)&l_Std_CancellationToken_selector___lam__5___closed__1_value;
static const lean_ctor_object l_Std_CancellationToken_selector___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_CancellationToken_selector___lam__5___closed__2 = (const lean_object*)&l_Std_CancellationToken_selector___lam__5___closed__2_value;
static const lean_ctor_object l_Std_CancellationToken_selector___lam__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_CancellationToken_selector___lam__5___closed__2_value)}};
static const lean_object* l_Std_CancellationToken_selector___lam__5___closed__3 = (const lean_object*)&l_Std_CancellationToken_selector___lam__5___closed__3_value;
static const lean_ctor_object l_Std_CancellationToken_selector___lam__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_CancellationToken_selector___lam__5___closed__3_value)}};
static const lean_object* l_Std_CancellationToken_selector___lam__5___closed__4 = (const lean_object*)&l_Std_CancellationToken_selector___lam__5___closed__4_value;
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__5(lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___closed__0 = (const lean_object*)&l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___closed__0 = (const lean_object*)&l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__9(lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__9___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_CancellationToken_selector___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CancellationToken_selector___lam__5___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_CancellationToken_selector___closed__0 = (const lean_object*)&l_Std_CancellationToken_selector___closed__0_value;
static const lean_closure_object l_Std_CancellationToken_selector___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CancellationToken_selector___lam__9___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_CancellationToken_selector___closed__1 = (const lean_object*)&l_Std_CancellationToken_selector___closed__1_value;
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector(lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationReason_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Std_CancellationReason_ctorIdx___impl(v_x_3_);
lean_dec(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationReason_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
if (lean_obj_tag(v_t_5_) == 3)
{
lean_object* v_msg_7_; lean_object* v___x_8_; 
v_msg_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_msg_7_);
lean_dec_ref_known(v_t_5_, 1);
v___x_8_ = lean_apply_1(v_k_6_, v_msg_7_);
return v___x_8_;
}
else
{
lean_dec(v_t_5_);
return v_k_6_;
}
}
}
LEAN_EXPORT lean_object* l_Std_CancellationReason_ctorElim(lean_object* v_motive_9_, lean_object* v_ctorIdx_10_, lean_object* v_t_11_, lean_object* v_h_12_, lean_object* v_k_13_){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = l_Std_CancellationReason_ctorElim___redArg(v_t_11_, v_k_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationReason_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Std_CancellationReason_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_17_, v_h_18_, v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationReason_deadline_elim___redArg(lean_object* v_t_21_, lean_object* v_deadline_22_){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = l_Std_CancellationReason_ctorElim___redArg(v_t_21_, v_deadline_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationReason_deadline_elim(lean_object* v_motive_24_, lean_object* v_t_25_, lean_object* v_h_26_, lean_object* v_deadline_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = l_Std_CancellationReason_ctorElim___redArg(v_t_25_, v_deadline_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationReason_shutdown_elim___redArg(lean_object* v_t_29_, lean_object* v_shutdown_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Std_CancellationReason_ctorElim___redArg(v_t_29_, v_shutdown_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationReason_shutdown_elim(lean_object* v_motive_32_, lean_object* v_t_33_, lean_object* v_h_34_, lean_object* v_shutdown_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Std_CancellationReason_ctorElim___redArg(v_t_33_, v_shutdown_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationReason_cancel_elim___redArg(lean_object* v_t_37_, lean_object* v_cancel_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Std_CancellationReason_ctorElim___redArg(v_t_37_, v_cancel_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationReason_cancel_elim(lean_object* v_motive_40_, lean_object* v_t_41_, lean_object* v_h_42_, lean_object* v_cancel_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l_Std_CancellationReason_ctorElim___redArg(v_t_41_, v_cancel_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationReason_custom_elim___redArg(lean_object* v_t_45_, lean_object* v_custom_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Std_CancellationReason_ctorElim___redArg(v_t_45_, v_custom_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationReason_custom_elim(lean_object* v_motive_48_, lean_object* v_t_49_, lean_object* v_h_50_, lean_object* v_custom_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Std_CancellationReason_ctorElim___redArg(v_t_49_, v_custom_51_);
return v___x_52_;
}
}
static lean_object* _init_l_Std_instReprCancellationReason_repr___closed__6(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = lean_unsigned_to_nat(2u);
v___x_63_ = lean_nat_to_int(v___x_62_);
return v___x_63_;
}
}
static lean_object* _init_l_Std_instReprCancellationReason_repr___closed__7(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = lean_unsigned_to_nat(1u);
v___x_65_ = lean_nat_to_int(v___x_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Std_instReprCancellationReason_repr(lean_object* v_x_72_, lean_object* v_prec_73_){
_start:
{
lean_object* v___y_75_; lean_object* v___y_82_; lean_object* v___y_89_; 
switch(lean_obj_tag(v_x_72_))
{
case 0:
{
lean_object* v___x_95_; uint8_t v___x_96_; 
v___x_95_ = lean_unsigned_to_nat(1024u);
v___x_96_ = lean_nat_dec_le(v___x_95_, v_prec_73_);
if (v___x_96_ == 0)
{
lean_object* v___x_97_; 
v___x_97_ = lean_obj_once(&l_Std_instReprCancellationReason_repr___closed__6, &l_Std_instReprCancellationReason_repr___closed__6_once, _init_l_Std_instReprCancellationReason_repr___closed__6);
v___y_89_ = v___x_97_;
goto v___jp_88_;
}
else
{
lean_object* v___x_98_; 
v___x_98_ = lean_obj_once(&l_Std_instReprCancellationReason_repr___closed__7, &l_Std_instReprCancellationReason_repr___closed__7_once, _init_l_Std_instReprCancellationReason_repr___closed__7);
v___y_89_ = v___x_98_;
goto v___jp_88_;
}
}
case 1:
{
lean_object* v___x_99_; uint8_t v___x_100_; 
v___x_99_ = lean_unsigned_to_nat(1024u);
v___x_100_ = lean_nat_dec_le(v___x_99_, v_prec_73_);
if (v___x_100_ == 0)
{
lean_object* v___x_101_; 
v___x_101_ = lean_obj_once(&l_Std_instReprCancellationReason_repr___closed__6, &l_Std_instReprCancellationReason_repr___closed__6_once, _init_l_Std_instReprCancellationReason_repr___closed__6);
v___y_82_ = v___x_101_;
goto v___jp_81_;
}
else
{
lean_object* v___x_102_; 
v___x_102_ = lean_obj_once(&l_Std_instReprCancellationReason_repr___closed__7, &l_Std_instReprCancellationReason_repr___closed__7_once, _init_l_Std_instReprCancellationReason_repr___closed__7);
v___y_82_ = v___x_102_;
goto v___jp_81_;
}
}
case 2:
{
lean_object* v___x_103_; uint8_t v___x_104_; 
v___x_103_ = lean_unsigned_to_nat(1024u);
v___x_104_ = lean_nat_dec_le(v___x_103_, v_prec_73_);
if (v___x_104_ == 0)
{
lean_object* v___x_105_; 
v___x_105_ = lean_obj_once(&l_Std_instReprCancellationReason_repr___closed__6, &l_Std_instReprCancellationReason_repr___closed__6_once, _init_l_Std_instReprCancellationReason_repr___closed__6);
v___y_75_ = v___x_105_;
goto v___jp_74_;
}
else
{
lean_object* v___x_106_; 
v___x_106_ = lean_obj_once(&l_Std_instReprCancellationReason_repr___closed__7, &l_Std_instReprCancellationReason_repr___closed__7_once, _init_l_Std_instReprCancellationReason_repr___closed__7);
v___y_75_ = v___x_106_;
goto v___jp_74_;
}
}
default: 
{
lean_object* v_msg_107_; lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_127_; 
v_msg_107_ = lean_ctor_get(v_x_72_, 0);
v_isSharedCheck_127_ = !lean_is_exclusive(v_x_72_);
if (v_isSharedCheck_127_ == 0)
{
v___x_109_ = v_x_72_;
v_isShared_110_ = v_isSharedCheck_127_;
goto v_resetjp_108_;
}
else
{
lean_inc(v_msg_107_);
lean_dec(v_x_72_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_127_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v___y_112_; lean_object* v___x_123_; uint8_t v___x_124_; 
v___x_123_ = lean_unsigned_to_nat(1024u);
v___x_124_ = lean_nat_dec_le(v___x_123_, v_prec_73_);
if (v___x_124_ == 0)
{
lean_object* v___x_125_; 
v___x_125_ = lean_obj_once(&l_Std_instReprCancellationReason_repr___closed__6, &l_Std_instReprCancellationReason_repr___closed__6_once, _init_l_Std_instReprCancellationReason_repr___closed__6);
v___y_112_ = v___x_125_;
goto v___jp_111_;
}
else
{
lean_object* v___x_126_; 
v___x_126_ = lean_obj_once(&l_Std_instReprCancellationReason_repr___closed__7, &l_Std_instReprCancellationReason_repr___closed__7_once, _init_l_Std_instReprCancellationReason_repr___closed__7);
v___y_112_ = v___x_126_;
goto v___jp_111_;
}
v___jp_111_:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_116_; 
v___x_113_ = ((lean_object*)(l_Std_instReprCancellationReason_repr___closed__10));
v___x_114_ = l_String_quote(v_msg_107_);
if (v_isShared_110_ == 0)
{
lean_ctor_set(v___x_109_, 0, v___x_114_);
v___x_116_ = v___x_109_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v___x_114_);
v___x_116_ = v_reuseFailAlloc_122_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
lean_object* v___x_117_; lean_object* v___x_118_; uint8_t v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_117_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_117_, 0, v___x_113_);
lean_ctor_set(v___x_117_, 1, v___x_116_);
lean_inc(v___y_112_);
v___x_118_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_118_, 0, v___y_112_);
lean_ctor_set(v___x_118_, 1, v___x_117_);
v___x_119_ = 0;
v___x_120_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_120_, 0, v___x_118_);
lean_ctor_set_uint8(v___x_120_, sizeof(void*)*1, v___x_119_);
v___x_121_ = l_Repr_addAppParen(v___x_120_, v_prec_73_);
return v___x_121_;
}
}
}
}
}
v___jp_74_:
{
lean_object* v___x_76_; lean_object* v___x_77_; uint8_t v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_76_ = ((lean_object*)(l_Std_instReprCancellationReason_repr___closed__1));
lean_inc(v___y_75_);
v___x_77_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_77_, 0, v___y_75_);
lean_ctor_set(v___x_77_, 1, v___x_76_);
v___x_78_ = 0;
v___x_79_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_79_, 0, v___x_77_);
lean_ctor_set_uint8(v___x_79_, sizeof(void*)*1, v___x_78_);
v___x_80_ = l_Repr_addAppParen(v___x_79_, v_prec_73_);
return v___x_80_;
}
v___jp_81_:
{
lean_object* v___x_83_; lean_object* v___x_84_; uint8_t v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_83_ = ((lean_object*)(l_Std_instReprCancellationReason_repr___closed__3));
lean_inc(v___y_82_);
v___x_84_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_84_, 0, v___y_82_);
lean_ctor_set(v___x_84_, 1, v___x_83_);
v___x_85_ = 0;
v___x_86_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_86_, 0, v___x_84_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*1, v___x_85_);
v___x_87_ = l_Repr_addAppParen(v___x_86_, v_prec_73_);
return v___x_87_;
}
v___jp_88_:
{
lean_object* v___x_90_; lean_object* v___x_91_; uint8_t v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_90_ = ((lean_object*)(l_Std_instReprCancellationReason_repr___closed__5));
lean_inc(v___y_89_);
v___x_91_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_91_, 0, v___y_89_);
lean_ctor_set(v___x_91_, 1, v___x_90_);
v___x_92_ = 0;
v___x_93_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_93_, 0, v___x_91_);
lean_ctor_set_uint8(v___x_93_, sizeof(void*)*1, v___x_92_);
v___x_94_ = l_Repr_addAppParen(v___x_93_, v_prec_73_);
return v___x_94_;
}
}
}
LEAN_EXPORT lean_object* l_Std_instReprCancellationReason_repr___boxed(lean_object* v_x_128_, lean_object* v_prec_129_){
_start:
{
lean_object* v_res_130_; 
v_res_130_ = l_Std_instReprCancellationReason_repr(v_x_128_, v_prec_129_);
lean_dec(v_prec_129_);
return v_res_130_;
}
}
LEAN_EXPORT uint8_t l_Std_instBEqCancellationReason_beq(lean_object* v_x_133_, lean_object* v_x_134_){
_start:
{
switch(lean_obj_tag(v_x_133_))
{
case 0:
{
if (lean_obj_tag(v_x_134_) == 0)
{
uint8_t v___x_135_; 
v___x_135_ = 1;
return v___x_135_;
}
else
{
uint8_t v___x_136_; 
v___x_136_ = 0;
return v___x_136_;
}
}
case 1:
{
if (lean_obj_tag(v_x_134_) == 1)
{
uint8_t v___x_137_; 
v___x_137_ = 1;
return v___x_137_;
}
else
{
uint8_t v___x_138_; 
v___x_138_ = 0;
return v___x_138_;
}
}
case 2:
{
if (lean_obj_tag(v_x_134_) == 2)
{
uint8_t v___x_139_; 
v___x_139_ = 1;
return v___x_139_;
}
else
{
uint8_t v___x_140_; 
v___x_140_ = 0;
return v___x_140_;
}
}
default: 
{
if (lean_obj_tag(v_x_134_) == 3)
{
lean_object* v_msg_141_; lean_object* v_msg_142_; uint8_t v___x_143_; 
v_msg_141_ = lean_ctor_get(v_x_133_, 0);
v_msg_142_ = lean_ctor_get(v_x_134_, 0);
v___x_143_ = lean_string_dec_eq(v_msg_141_, v_msg_142_);
return v___x_143_;
}
else
{
uint8_t v___x_144_; 
v___x_144_ = 0;
return v___x_144_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_instBEqCancellationReason_beq___boxed(lean_object* v_x_145_, lean_object* v_x_146_){
_start:
{
uint8_t v_res_147_; lean_object* v_r_148_; 
v_res_147_ = l_Std_instBEqCancellationReason_beq(v_x_145_, v_x_146_);
lean_dec(v_x_146_);
lean_dec(v_x_145_);
v_r_148_ = lean_box(v_res_147_);
return v_r_148_;
}
}
LEAN_EXPORT lean_object* l_Std_instToStringCancellationReason___lam__0(lean_object* v_x_156_){
_start:
{
switch(lean_obj_tag(v_x_156_))
{
case 0:
{
lean_object* v___x_157_; 
v___x_157_ = ((lean_object*)(l_Std_instToStringCancellationReason___lam__0___closed__0));
return v___x_157_;
}
case 1:
{
lean_object* v___x_158_; 
v___x_158_ = ((lean_object*)(l_Std_instToStringCancellationReason___lam__0___closed__1));
return v___x_158_;
}
case 2:
{
lean_object* v___x_159_; 
v___x_159_ = ((lean_object*)(l_Std_instToStringCancellationReason___lam__0___closed__2));
return v___x_159_;
}
default: 
{
lean_object* v_msg_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v_msg_160_ = lean_ctor_get(v_x_156_, 0);
v___x_161_ = ((lean_object*)(l_Std_instToStringCancellationReason___lam__0___closed__3));
v___x_162_ = lean_string_append(v___x_161_, v_msg_160_);
v___x_163_ = ((lean_object*)(l_Std_instToStringCancellationReason___lam__0___closed__4));
v___x_164_ = lean_string_append(v___x_162_, v___x_163_);
return v___x_164_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_instToStringCancellationReason___lam__0___boxed(lean_object* v_x_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l_Std_instToStringCancellationReason___lam__0(v_x_165_);
lean_dec(v_x_165_);
return v_res_166_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_ctorIdx___impl(lean_object* v_x_169_){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = lean_obj_tag_nat(v_x_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_ctorIdx___impl___boxed(lean_object* v_x_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_ctorIdx___impl(v_x_171_);
lean_dec_ref(v_x_171_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_ctorElim___redArg(lean_object* v_t_173_, lean_object* v_k_174_){
_start:
{
if (lean_obj_tag(v_t_173_) == 0)
{
lean_object* v_promise_175_; lean_object* v___x_176_; 
v_promise_175_ = lean_ctor_get(v_t_173_, 0);
lean_inc(v_promise_175_);
lean_dec_ref_known(v_t_173_, 1);
v___x_176_ = lean_apply_1(v_k_174_, v_promise_175_);
return v___x_176_;
}
else
{
lean_object* v_finished_177_; lean_object* v___x_178_; 
v_finished_177_ = lean_ctor_get(v_t_173_, 0);
lean_inc_ref(v_finished_177_);
lean_dec_ref_known(v_t_173_, 1);
v___x_178_ = lean_apply_1(v_k_174_, v_finished_177_);
return v___x_178_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_ctorElim(lean_object* v_motive_179_, lean_object* v_ctorIdx_180_, lean_object* v_t_181_, lean_object* v_h_182_, lean_object* v_k_183_){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_ctorElim___redArg(v_t_181_, v_k_183_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_ctorElim___boxed(lean_object* v_motive_185_, lean_object* v_ctorIdx_186_, lean_object* v_t_187_, lean_object* v_h_188_, lean_object* v_k_189_){
_start:
{
lean_object* v_res_190_; 
v_res_190_ = l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_ctorElim(v_motive_185_, v_ctorIdx_186_, v_t_187_, v_h_188_, v_k_189_);
lean_dec(v_ctorIdx_186_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_normal_elim___redArg(lean_object* v_t_191_, lean_object* v_normal_192_){
_start:
{
lean_object* v___x_193_; 
v___x_193_ = l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_ctorElim___redArg(v_t_191_, v_normal_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_normal_elim(lean_object* v_motive_194_, lean_object* v_t_195_, lean_object* v_h_196_, lean_object* v_normal_197_){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_ctorElim___redArg(v_t_195_, v_normal_197_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_select_elim___redArg(lean_object* v_t_199_, lean_object* v_select_200_){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_ctorElim___redArg(v_t_199_, v_select_200_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_select_elim(lean_object* v_motive_202_, lean_object* v_t_203_, lean_object* v_h_204_, lean_object* v_select_205_){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_ctorElim___redArg(v_t_203_, v_select_205_);
return v___x_206_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_Waiter_race___at___00__private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve_spec__0(lean_object* v_w_209_, lean_object* v_lose_210_){
_start:
{
lean_object* v_finished_212_; lean_object* v_promise_213_; lean_object* v___x_214_; uint8_t v___y_216_; uint8_t v___x_224_; 
v_finished_212_ = lean_ctor_get(v_w_209_, 0);
v_promise_213_ = lean_ctor_get(v_w_209_, 1);
v___x_214_ = lean_st_ref_take(v_finished_212_);
v___x_224_ = lean_unbox(v___x_214_);
lean_dec(v___x_214_);
if (v___x_224_ == 0)
{
uint8_t v___x_225_; 
v___x_225_ = 1;
v___y_216_ = v___x_225_;
goto v___jp_215_;
}
else
{
uint8_t v___x_226_; 
v___x_226_ = 0;
v___y_216_ = v___x_226_;
goto v___jp_215_;
}
v___jp_215_:
{
uint8_t v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_217_ = 1;
v___x_218_ = lean_box(v___x_217_);
v___x_219_ = lean_st_ref_put(v_finished_212_, v___x_218_);
if (v___y_216_ == 0)
{
lean_object* v___x_220_; uint8_t v___x_221_; 
v___x_220_ = lean_apply_1(v_lose_210_, lean_box(0));
v___x_221_ = lean_unbox(v___x_220_);
return v___x_221_;
}
else
{
lean_object* v___x_222_; lean_object* v___x_223_; 
lean_dec_ref(v_lose_210_);
v___x_222_ = ((lean_object*)(l_Std_Async_Waiter_race___at___00__private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve_spec__0___closed__0));
v___x_223_ = lean_io_promise_resolve(v___x_222_, v_promise_213_);
return v___y_216_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve_spec__0___boxed(lean_object* v_w_227_, lean_object* v_lose_228_, lean_object* v___y_229_){
_start:
{
uint8_t v_res_230_; lean_object* v_r_231_; 
v_res_230_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve_spec__0(v_w_227_, v_lose_228_);
lean_dec_ref(v_w_227_);
v_r_231_ = lean_box(v_res_230_);
return v_r_231_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve___lam__0(uint8_t v___x_232_){
_start:
{
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve___lam__0___boxed(lean_object* v___x_234_, lean_object* v___y_235_){
_start:
{
uint8_t v___x_380__boxed_236_; uint8_t v_res_237_; lean_object* v_r_238_; 
v___x_380__boxed_236_ = lean_unbox(v___x_234_);
v_res_237_ = l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve___lam__0(v___x_380__boxed_236_);
v_r_238_ = lean_box(v_res_237_);
return v_r_238_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve(lean_object* v_c_242_){
_start:
{
if (lean_obj_tag(v_c_242_) == 0)
{
lean_object* v_promise_244_; lean_object* v___x_245_; lean_object* v___x_246_; uint8_t v___x_247_; 
v_promise_244_ = lean_ctor_get(v_c_242_, 0);
v___x_245_ = lean_box(0);
v___x_246_ = lean_io_promise_resolve(v___x_245_, v_promise_244_);
v___x_247_ = 1;
return v___x_247_;
}
else
{
lean_object* v_finished_248_; lean_object* v_lose_249_; uint8_t v___x_250_; 
v_finished_248_ = lean_ctor_get(v_c_242_, 0);
v_lose_249_ = ((lean_object*)(l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve___closed__0));
v___x_250_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve_spec__0(v_finished_248_, v_lose_249_);
return v___x_250_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve___boxed(lean_object* v_c_251_, lean_object* v_a_252_){
_start:
{
uint8_t v_res_253_; lean_object* v_r_254_; 
v_res_253_ = l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve(v_c_251_);
lean_dec_ref(v_c_251_);
v_r_254_ = lean_box(v_res_253_);
return v_r_254_;
}
}
static lean_object* _init_l_Std_CancellationToken_new___closed__0(void){
_start:
{
lean_object* v___x_255_; 
v___x_255_ = l_Std_Queue_empty___redArg();
return v___x_255_;
}
}
static lean_object* _init_l_Std_CancellationToken_new___closed__1(void){
_start:
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_256_ = lean_obj_once(&l_Std_CancellationToken_new___closed__0, &l_Std_CancellationToken_new___closed__0_once, _init_l_Std_CancellationToken_new___closed__0);
v___x_257_ = lean_box(0);
v___x_258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_258_, 0, v___x_257_);
lean_ctor_set(v___x_258_, 1, v___x_256_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_new(){
_start:
{
lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_260_ = lean_obj_once(&l_Std_CancellationToken_new___closed__1, &l_Std_CancellationToken_new___closed__1_once, _init_l_Std_CancellationToken_new___closed__1);
v___x_261_ = l_Std_Mutex_new___redArg(v___x_260_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_new___boxed(lean_object* v_a_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = l_Std_CancellationToken_new();
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1___redArg(lean_object* v_mutex_264_, lean_object* v_k_265_){
_start:
{
lean_object* v_ref_267_; lean_object* v_mutex_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v_ref_267_ = lean_ctor_get(v_mutex_264_, 0);
lean_inc(v_ref_267_);
v_mutex_268_ = lean_ctor_get(v_mutex_264_, 1);
lean_inc(v_mutex_268_);
lean_dec_ref(v_mutex_264_);
v___x_269_ = lean_io_basemutex_lock(v_mutex_268_);
v___x_270_ = lean_apply_2(v_k_265_, v_ref_267_, lean_box(0));
v___x_271_ = lean_io_basemutex_unlock(v_mutex_268_);
lean_dec(v_mutex_268_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1___redArg___boxed(lean_object* v_mutex_272_, lean_object* v_k_273_, lean_object* v___y_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1___redArg(v_mutex_272_, v_k_273_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1(lean_object* v_00_u03b1_276_, lean_object* v_00_u03b2_277_, lean_object* v_mutex_278_, lean_object* v_k_279_){
_start:
{
lean_object* v___x_281_; 
v___x_281_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1___redArg(v_mutex_278_, v_k_279_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1___boxed(lean_object* v_00_u03b1_282_, lean_object* v_00_u03b2_283_, lean_object* v_mutex_284_, lean_object* v_k_285_, lean_object* v___y_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1(v_00_u03b1_282_, v_00_u03b2_283_, v_mutex_284_, v_k_285_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_CancellationToken_cancel_spec__0___redArg(lean_object* v_a_288_){
_start:
{
lean_object* v___x_290_; 
lean_inc_ref(v_a_288_);
v___x_290_ = l_Std_Queue_dequeue_x3f___redArg(v_a_288_);
if (lean_obj_tag(v___x_290_) == 1)
{
lean_object* v_val_291_; lean_object* v_fst_292_; lean_object* v_snd_293_; uint8_t v___x_294_; 
lean_dec_ref(v_a_288_);
v_val_291_ = lean_ctor_get(v___x_290_, 0);
lean_inc(v_val_291_);
lean_dec_ref_known(v___x_290_, 1);
v_fst_292_ = lean_ctor_get(v_val_291_, 0);
lean_inc(v_fst_292_);
v_snd_293_ = lean_ctor_get(v_val_291_, 1);
lean_inc(v_snd_293_);
lean_dec(v_val_291_);
v___x_294_ = l___private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve(v_fst_292_);
lean_dec(v_fst_292_);
v_a_288_ = v_snd_293_;
goto _start;
}
else
{
lean_dec(v___x_290_);
return v_a_288_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_CancellationToken_cancel_spec__0___redArg___boxed(lean_object* v_a_296_, lean_object* v___y_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l___private_Init_While_0__repeatM_erased___at___00Std_CancellationToken_cancel_spec__0___redArg(v_a_296_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_cancel___lam__0(lean_object* v_reason_299_, lean_object* v___y_300_){
_start:
{
lean_object* v___x_302_; lean_object* v_reason_303_; 
v___x_302_ = lean_st_ref_get(v___y_300_);
v_reason_303_ = lean_ctor_get(v___x_302_, 0);
if (lean_obj_tag(v_reason_303_) == 0)
{
lean_object* v_consumers_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_316_; 
v_consumers_304_ = lean_ctor_get(v___x_302_, 1);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_302_);
if (v_isSharedCheck_316_ == 0)
{
lean_object* v_unused_317_; 
v_unused_317_ = lean_ctor_get(v___x_302_, 0);
lean_dec(v_unused_317_);
v___x_306_ = v___x_302_;
v_isShared_307_ = v_isSharedCheck_316_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_consumers_304_);
lean_dec(v___x_302_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_316_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v_st_311_; 
v___x_308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_308_, 0, v_reason_299_);
v___x_309_ = lean_obj_once(&l_Std_CancellationToken_new___closed__0, &l_Std_CancellationToken_new___closed__0_once, _init_l_Std_CancellationToken_new___closed__0);
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 1, v___x_309_);
lean_ctor_set(v___x_306_, 0, v___x_308_);
v_st_311_ = v___x_306_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v___x_308_);
lean_ctor_set(v_reuseFailAlloc_315_, 1, v___x_309_);
v_st_311_ = v_reuseFailAlloc_315_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_312_ = l___private_Init_While_0__repeatM_erased___at___00Std_CancellationToken_cancel_spec__0___redArg(v_consumers_304_);
lean_dec_ref(v___x_312_);
v___x_313_ = lean_box(0);
v___x_314_ = lean_st_ref_swap(v___y_300_, v_st_311_);
lean_dec(v___x_314_);
return v___x_313_;
}
}
}
else
{
lean_object* v___x_318_; 
lean_dec(v___x_302_);
lean_dec(v_reason_299_);
v___x_318_ = lean_box(0);
return v___x_318_;
}
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_cancel___lam__0___boxed(lean_object* v_reason_319_, lean_object* v___y_320_, lean_object* v___y_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = l_Std_CancellationToken_cancel___lam__0(v_reason_319_, v___y_320_);
lean_dec(v___y_320_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_cancel(lean_object* v_x_323_, lean_object* v_reason_324_){
_start:
{
lean_object* v___f_326_; lean_object* v___x_327_; 
v___f_326_ = lean_alloc_closure((void*)(l_Std_CancellationToken_cancel___lam__0___boxed), 3, 1);
lean_closure_set(v___f_326_, 0, v_reason_324_);
v___x_327_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1___redArg(v_x_323_, v___f_326_);
return v___x_327_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_cancel___boxed(lean_object* v_x_328_, lean_object* v_reason_329_, lean_object* v_a_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l_Std_CancellationToken_cancel(v_x_328_, v_reason_329_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_CancellationToken_cancel_spec__0(lean_object* v_inst_332_, lean_object* v_a_333_, lean_object* v___y_334_){
_start:
{
lean_object* v___x_336_; 
v___x_336_ = l___private_Init_While_0__repeatM_erased___at___00Std_CancellationToken_cancel_spec__0___redArg(v_a_333_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_CancellationToken_cancel_spec__0___boxed(lean_object* v_inst_337_, lean_object* v_a_338_, lean_object* v___y_339_, lean_object* v___y_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l___private_Init_While_0__repeatM_erased___at___00Std_CancellationToken_cancel_spec__0(v_inst_337_, v_a_338_, v___y_339_);
lean_dec(v___y_339_);
return v_res_341_;
}
}
LEAN_EXPORT uint8_t l_Std_CancellationToken_isCancelled___lam__0(lean_object* v___y_342_){
_start:
{
lean_object* v___x_344_; lean_object* v_reason_345_; 
v___x_344_ = lean_st_ref_get(v___y_342_);
v_reason_345_ = lean_ctor_get(v___x_344_, 0);
lean_inc(v_reason_345_);
lean_dec(v___x_344_);
if (lean_obj_tag(v_reason_345_) == 0)
{
uint8_t v___x_346_; 
v___x_346_ = 0;
return v___x_346_;
}
else
{
uint8_t v___x_347_; 
lean_dec_ref_known(v_reason_345_, 1);
v___x_347_ = 1;
return v___x_347_;
}
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_isCancelled___lam__0___boxed(lean_object* v___y_348_, lean_object* v___y_349_){
_start:
{
uint8_t v_res_350_; lean_object* v_r_351_; 
v_res_350_ = l_Std_CancellationToken_isCancelled___lam__0(v___y_348_);
lean_dec(v___y_348_);
v_r_351_ = lean_box(v_res_350_);
return v_r_351_;
}
}
LEAN_EXPORT uint8_t l_Std_CancellationToken_isCancelled(lean_object* v_x_353_){
_start:
{
lean_object* v___f_355_; lean_object* v___x_356_; uint8_t v___x_357_; 
v___f_355_ = ((lean_object*)(l_Std_CancellationToken_isCancelled___closed__0));
v___x_356_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1___redArg(v_x_353_, v___f_355_);
v___x_357_ = lean_unbox(v___x_356_);
lean_dec(v___x_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_isCancelled___boxed(lean_object* v_x_358_, lean_object* v_a_359_){
_start:
{
uint8_t v_res_360_; lean_object* v_r_361_; 
v_res_360_ = l_Std_CancellationToken_isCancelled(v_x_358_);
v_r_361_ = lean_box(v_res_360_);
return v_r_361_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_getCancellationReason___lam__0(lean_object* v___y_362_){
_start:
{
lean_object* v___x_364_; lean_object* v_reason_365_; 
v___x_364_ = lean_st_ref_get(v___y_362_);
v_reason_365_ = lean_ctor_get(v___x_364_, 0);
lean_inc(v_reason_365_);
lean_dec(v___x_364_);
return v_reason_365_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_getCancellationReason___lam__0___boxed(lean_object* v___y_366_, lean_object* v___y_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = l_Std_CancellationToken_getCancellationReason___lam__0(v___y_366_);
lean_dec(v___y_366_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_getCancellationReason(lean_object* v_x_370_){
_start:
{
lean_object* v___f_372_; lean_object* v___x_373_; 
v___f_372_ = ((lean_object*)(l_Std_CancellationToken_getCancellationReason___closed__0));
v___x_373_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1___redArg(v_x_370_, v___f_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_getCancellationReason___boxed(lean_object* v_x_374_, lean_object* v_a_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_Std_CancellationToken_getCancellationReason(v_x_374_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0___redArg(lean_object* v_mutex_377_, lean_object* v_k_378_){
_start:
{
lean_object* v_ref_380_; lean_object* v_mutex_381_; lean_object* v___x_382_; lean_object* v_r_383_; 
v_ref_380_ = lean_ctor_get(v_mutex_377_, 0);
lean_inc(v_ref_380_);
v_mutex_381_ = lean_ctor_get(v_mutex_377_, 1);
lean_inc(v_mutex_381_);
lean_dec_ref(v_mutex_377_);
v___x_382_ = lean_io_basemutex_lock(v_mutex_381_);
v_r_383_ = lean_apply_2(v_k_378_, v_ref_380_, lean_box(0));
if (lean_obj_tag(v_r_383_) == 0)
{
lean_object* v_a_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_392_; 
v_a_384_ = lean_ctor_get(v_r_383_, 0);
v_isSharedCheck_392_ = !lean_is_exclusive(v_r_383_);
if (v_isSharedCheck_392_ == 0)
{
v___x_386_ = v_r_383_;
v_isShared_387_ = v_isSharedCheck_392_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_a_384_);
lean_dec(v_r_383_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_392_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_388_; lean_object* v___x_390_; 
v___x_388_ = lean_io_basemutex_unlock(v_mutex_381_);
lean_dec(v_mutex_381_);
if (v_isShared_387_ == 0)
{
v___x_390_ = v___x_386_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_a_384_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
}
else
{
lean_object* v_a_393_; lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_401_; 
v_a_393_ = lean_ctor_get(v_r_383_, 0);
v_isSharedCheck_401_ = !lean_is_exclusive(v_r_383_);
if (v_isSharedCheck_401_ == 0)
{
v___x_395_ = v_r_383_;
v_isShared_396_ = v_isSharedCheck_401_;
goto v_resetjp_394_;
}
else
{
lean_inc(v_a_393_);
lean_dec(v_r_383_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_401_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
lean_object* v___x_397_; lean_object* v___x_399_; 
v___x_397_ = lean_io_basemutex_unlock(v_mutex_381_);
lean_dec(v_mutex_381_);
if (v_isShared_396_ == 0)
{
v___x_399_ = v___x_395_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v_a_393_);
v___x_399_ = v_reuseFailAlloc_400_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
return v___x_399_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0___redArg___boxed(lean_object* v_mutex_402_, lean_object* v_k_403_, lean_object* v___y_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0___redArg(v_mutex_402_, v_k_403_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0(lean_object* v_00_u03b1_406_, lean_object* v_00_u03b2_407_, lean_object* v_mutex_408_, lean_object* v_k_409_){
_start:
{
lean_object* v___x_411_; 
v___x_411_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0___redArg(v_mutex_408_, v_k_409_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0___boxed(lean_object* v_00_u03b1_412_, lean_object* v_00_u03b2_413_, lean_object* v_mutex_414_, lean_object* v_k_415_, lean_object* v___y_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0(v_00_u03b1_412_, v_00_u03b2_413_, v_mutex_414_, v_k_415_);
return v_res_417_;
}
}
static lean_object* _init_l_Std_CancellationToken_wait___lam__0___closed__1(void){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_419_ = ((lean_object*)(l_Std_CancellationToken_wait___lam__0___closed__0));
v___x_420_ = lean_mk_io_user_error(v___x_419_);
return v___x_420_;
}
}
static lean_object* _init_l_Std_CancellationToken_wait___lam__0___closed__2(void){
_start:
{
lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_421_ = lean_obj_once(&l_Std_CancellationToken_wait___lam__0___closed__1, &l_Std_CancellationToken_wait___lam__0___closed__1_once, _init_l_Std_CancellationToken_wait___lam__0___closed__1);
v___x_422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_422_, 0, v___x_421_);
return v___x_422_;
}
}
static lean_object* _init_l_Std_CancellationToken_wait___lam__0___closed__3(void){
_start:
{
lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_423_ = lean_obj_once(&l_Std_CancellationToken_wait___lam__0___closed__2, &l_Std_CancellationToken_wait___lam__0___closed__2_once, _init_l_Std_CancellationToken_wait___lam__0___closed__2);
v___x_424_ = lean_task_pure(v___x_423_);
return v___x_424_;
}
}
static lean_object* _init_l_Std_CancellationToken_wait___lam__0___closed__4(void){
_start:
{
lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_425_ = ((lean_object*)(l_Std_Async_Waiter_race___at___00__private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve_spec__0___closed__0));
v___x_426_ = lean_task_pure(v___x_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_wait___lam__0(lean_object* v_a_427_){
_start:
{
if (lean_obj_tag(v_a_427_) == 0)
{
lean_object* v___x_429_; 
v___x_429_ = lean_obj_once(&l_Std_CancellationToken_wait___lam__0___closed__3, &l_Std_CancellationToken_wait___lam__0___closed__3_once, _init_l_Std_CancellationToken_wait___lam__0___closed__3);
return v___x_429_;
}
else
{
lean_object* v___x_430_; 
v___x_430_ = lean_obj_once(&l_Std_CancellationToken_wait___lam__0___closed__4, &l_Std_CancellationToken_wait___lam__0___closed__4_once, _init_l_Std_CancellationToken_wait___lam__0___closed__4);
return v___x_430_;
}
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_wait___lam__0___boxed(lean_object* v_a_431_, lean_object* v___y_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_Std_CancellationToken_wait___lam__0(v_a_431_);
lean_dec(v_a_431_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_wait___lam__1(lean_object* v___f_434_, lean_object* v___y_435_){
_start:
{
lean_object* v___x_437_; lean_object* v_reason_438_; 
v___x_437_ = lean_st_ref_get(v___y_435_);
v_reason_438_ = lean_ctor_get(v___x_437_, 0);
lean_inc(v_reason_438_);
lean_dec(v___x_437_);
if (lean_obj_tag(v_reason_438_) == 0)
{
lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v_reason_441_; lean_object* v_consumers_442_; lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_457_; 
v___x_439_ = lean_io_promise_new();
v___x_440_ = lean_st_ref_take(v___y_435_);
v_reason_441_ = lean_ctor_get(v___x_440_, 0);
v_consumers_442_ = lean_ctor_get(v___x_440_, 1);
v_isSharedCheck_457_ = !lean_is_exclusive(v___x_440_);
if (v_isSharedCheck_457_ == 0)
{
v___x_444_ = v___x_440_;
v_isShared_445_ = v_isSharedCheck_457_;
goto v_resetjp_443_;
}
else
{
lean_inc(v_consumers_442_);
lean_inc(v_reason_441_);
lean_dec(v___x_440_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_457_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_449_; 
lean_inc(v___x_439_);
v___x_446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_446_, 0, v___x_439_);
v___x_447_ = l_Std_Queue_enqueue___redArg(v___x_446_, v_consumers_442_);
if (v_isShared_445_ == 0)
{
lean_ctor_set(v___x_444_, 1, v___x_447_);
v___x_449_ = v___x_444_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_reason_441_);
lean_ctor_set(v_reuseFailAlloc_456_, 1, v___x_447_);
v___x_449_ = v_reuseFailAlloc_456_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; uint8_t v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_450_ = lean_st_ref_put(v___y_435_, v___x_449_);
v___x_451_ = lean_io_promise_result_opt(v___x_439_);
lean_dec(v___x_439_);
v___x_452_ = lean_unsigned_to_nat(0u);
v___x_453_ = 0;
v___x_454_ = lean_io_bind_task(v___x_451_, v___f_434_, v___x_452_, v___x_453_);
v___x_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
return v___x_455_;
}
}
}
else
{
lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_465_; 
lean_dec_ref(v___f_434_);
v_isSharedCheck_465_ = !lean_is_exclusive(v_reason_438_);
if (v_isSharedCheck_465_ == 0)
{
lean_object* v_unused_466_; 
v_unused_466_ = lean_ctor_get(v_reason_438_, 0);
lean_dec(v_unused_466_);
v___x_459_ = v_reason_438_;
v_isShared_460_ = v_isSharedCheck_465_;
goto v_resetjp_458_;
}
else
{
lean_dec(v_reason_438_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_465_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_461_; lean_object* v___x_463_; 
v___x_461_ = lean_obj_once(&l_Std_CancellationToken_wait___lam__0___closed__4, &l_Std_CancellationToken_wait___lam__0___closed__4_once, _init_l_Std_CancellationToken_wait___lam__0___closed__4);
if (v_isShared_460_ == 0)
{
lean_ctor_set_tag(v___x_459_, 0);
lean_ctor_set(v___x_459_, 0, v___x_461_);
v___x_463_ = v___x_459_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v___x_461_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_wait___lam__1___boxed(lean_object* v___f_467_, lean_object* v___y_468_, lean_object* v___y_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = l_Std_CancellationToken_wait___lam__1(v___f_467_, v___y_468_);
lean_dec(v___y_468_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_wait(lean_object* v_x_474_){
_start:
{
lean_object* v___f_476_; lean_object* v___x_477_; 
v___f_476_ = ((lean_object*)(l_Std_CancellationToken_wait___closed__1));
v___x_477_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0___redArg(v_x_474_, v___f_476_);
return v___x_477_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_wait___boxed(lean_object* v_x_478_, lean_object* v_a_479_){
_start:
{
lean_object* v_res_480_; 
v_res_480_ = l_Std_CancellationToken_wait(v_x_478_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__0(lean_object* v_x_486_){
_start:
{
if (lean_obj_tag(v_x_486_) == 0)
{
lean_object* v_a_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_496_; 
v_a_488_ = lean_ctor_get(v_x_486_, 0);
v_isSharedCheck_496_ = !lean_is_exclusive(v_x_486_);
if (v_isSharedCheck_496_ == 0)
{
v___x_490_ = v_x_486_;
v_isShared_491_ = v_isSharedCheck_496_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_a_488_);
lean_dec(v_x_486_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_496_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___x_493_; 
if (v_isShared_491_ == 0)
{
v___x_493_ = v___x_490_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_a_488_);
v___x_493_ = v_reuseFailAlloc_495_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
lean_object* v___x_494_; 
v___x_494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_494_, 0, v___x_493_);
return v___x_494_;
}
}
}
else
{
lean_object* v___x_497_; 
lean_dec_ref_known(v_x_486_, 1);
v___x_497_ = ((lean_object*)(l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__0___closed__1));
return v___x_497_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__0___boxed(lean_object* v_x_498_, lean_object* v___y_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__0(v_x_498_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__1(lean_object* v_lose_501_, lean_object* v___y_502_, lean_object* v_promise_503_, lean_object* v___f_504_, lean_object* v_x_505_){
_start:
{
if (lean_obj_tag(v_x_505_) == 0)
{
lean_object* v___x_507_; 
lean_dec_ref(v___f_504_);
lean_dec_ref(v_lose_501_);
v___x_507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_507_, 0, v_x_505_);
return v___x_507_;
}
else
{
lean_object* v_a_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_523_; 
v_a_508_ = lean_ctor_get(v_x_505_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v_x_505_);
if (v_isSharedCheck_523_ == 0)
{
v___x_510_ = v_x_505_;
v_isShared_511_ = v_isSharedCheck_523_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_a_508_);
lean_dec(v_x_505_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_523_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
uint8_t v___x_512_; 
v___x_512_ = lean_unbox(v_a_508_);
lean_dec(v_a_508_);
if (v___x_512_ == 0)
{
lean_object* v___x_513_; 
lean_del_object(v___x_510_);
lean_dec_ref(v___f_504_);
lean_inc(v___y_502_);
v___x_513_ = lean_apply_2(v_lose_501_, v___y_502_, lean_box(0));
return v___x_513_;
}
else
{
lean_object* v___x_514_; lean_object* v___x_515_; uint8_t v___x_516_; lean_object* v___x_517_; lean_object* v___x_519_; 
lean_dec_ref(v_lose_501_);
v___x_514_ = ((lean_object*)(l_Std_Async_Waiter_race___at___00__private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve_spec__0___closed__0));
v___x_515_ = lean_unsigned_to_nat(0u);
v___x_516_ = 0;
v___x_517_ = lean_io_promise_resolve(v___x_514_, v_promise_503_);
if (v_isShared_511_ == 0)
{
lean_ctor_set(v___x_510_, 0, v___x_517_);
v___x_519_ = v___x_510_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v___x_517_);
v___x_519_ = v_reuseFailAlloc_522_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_520_, 0, v___x_519_);
v___x_521_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_515_, v___x_516_, v___x_520_, v___f_504_);
return v___x_521_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__1___boxed(lean_object* v_lose_524_, lean_object* v___y_525_, lean_object* v_promise_526_, lean_object* v___f_527_, lean_object* v_x_528_, lean_object* v___y_529_){
_start:
{
lean_object* v_res_530_; 
v_res_530_ = l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__1(v_lose_524_, v___y_525_, v_promise_526_, v___f_527_, v_x_528_);
lean_dec(v_promise_526_);
lean_dec(v___y_525_);
return v_res_530_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0(lean_object* v_w_532_, lean_object* v_lose_533_, lean_object* v___y_534_){
_start:
{
lean_object* v_finished_536_; lean_object* v_promise_537_; lean_object* v___f_538_; lean_object* v___f_539_; lean_object* v___x_540_; uint8_t v___x_541_; lean_object* v___x_542_; uint8_t v___y_544_; uint8_t v___x_552_; 
v_finished_536_ = lean_ctor_get(v_w_532_, 0);
lean_inc(v_finished_536_);
v_promise_537_ = lean_ctor_get(v_w_532_, 1);
lean_inc(v_promise_537_);
lean_dec_ref(v_w_532_);
v___f_538_ = ((lean_object*)(l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___closed__0));
lean_inc(v___y_534_);
v___f_539_ = lean_alloc_closure((void*)(l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__1___boxed), 6, 4);
lean_closure_set(v___f_539_, 0, v_lose_533_);
lean_closure_set(v___f_539_, 1, v___y_534_);
lean_closure_set(v___f_539_, 2, v_promise_537_);
lean_closure_set(v___f_539_, 3, v___f_538_);
v___x_540_ = lean_unsigned_to_nat(0u);
v___x_541_ = 0;
v___x_542_ = lean_st_ref_take(v_finished_536_);
v___x_552_ = lean_unbox(v___x_542_);
lean_dec(v___x_542_);
if (v___x_552_ == 0)
{
uint8_t v___x_553_; 
v___x_553_ = 1;
v___y_544_ = v___x_553_;
goto v___jp_543_;
}
else
{
v___y_544_ = v___x_541_;
goto v___jp_543_;
}
v___jp_543_:
{
uint8_t v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_545_ = 1;
v___x_546_ = lean_box(v___x_545_);
v___x_547_ = lean_st_ref_put(v_finished_536_, v___x_546_);
lean_dec(v_finished_536_);
v___x_548_ = lean_box(v___y_544_);
v___x_549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_549_, 0, v___x_548_);
v___x_550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_550_, 0, v___x_549_);
v___x_551_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_540_, v___x_541_, v___x_550_, v___f_539_);
return v___x_551_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___boxed(lean_object* v_w_554_, lean_object* v_lose_555_, lean_object* v___y_556_, lean_object* v___y_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0(v_w_554_, v_lose_555_, v___y_556_);
lean_dec(v___y_556_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__0(lean_object* v___y_559_){
_start:
{
if (lean_obj_tag(v___y_559_) == 0)
{
lean_object* v_a_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_567_; 
v_a_560_ = lean_ctor_get(v___y_559_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v___y_559_);
if (v_isSharedCheck_567_ == 0)
{
v___x_562_ = v___y_559_;
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_a_560_);
lean_dec(v___y_559_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v___x_565_; 
if (v_isShared_563_ == 0)
{
v___x_565_ = v___x_562_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v_a_560_);
v___x_565_ = v_reuseFailAlloc_566_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
return v___x_565_;
}
}
}
else
{
lean_object* v_a_568_; lean_object* v___x_570_; uint8_t v_isShared_571_; uint8_t v_isSharedCheck_576_; 
v_a_568_ = lean_ctor_get(v___y_559_, 0);
v_isSharedCheck_576_ = !lean_is_exclusive(v___y_559_);
if (v_isSharedCheck_576_ == 0)
{
v___x_570_ = v___y_559_;
v_isShared_571_ = v_isSharedCheck_576_;
goto v_resetjp_569_;
}
else
{
lean_inc(v_a_568_);
lean_dec(v___y_559_);
v___x_570_ = lean_box(0);
v_isShared_571_ = v_isSharedCheck_576_;
goto v_resetjp_569_;
}
v_resetjp_569_:
{
lean_object* v_fst_572_; lean_object* v___x_574_; 
v_fst_572_ = lean_ctor_get(v_a_568_, 0);
lean_inc(v_fst_572_);
lean_dec(v_a_568_);
if (v_isShared_571_ == 0)
{
lean_ctor_set(v___x_570_, 0, v_fst_572_);
v___x_574_ = v___x_570_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v_fst_572_);
v___x_574_ = v_reuseFailAlloc_575_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
return v___x_574_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__1(lean_object* v_mutex_577_, lean_object* v_x_578_){
_start:
{
lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_580_ = lean_io_basemutex_unlock(v_mutex_577_);
v___x_581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_581_, 0, v___x_580_);
v___x_582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_582_, 0, v___x_581_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__1___boxed(lean_object* v_mutex_583_, lean_object* v_x_584_, lean_object* v___y_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__1(v_mutex_583_, v_x_584_);
lean_dec(v_x_584_);
lean_dec(v_mutex_583_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__2(lean_object* v_k_587_, lean_object* v_ref_588_, lean_object* v_x_589_){
_start:
{
if (lean_obj_tag(v_x_589_) == 0)
{
lean_object* v_a_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_599_; 
lean_dec(v_ref_588_);
lean_dec_ref(v_k_587_);
v_a_591_ = lean_ctor_get(v_x_589_, 0);
v_isSharedCheck_599_ = !lean_is_exclusive(v_x_589_);
if (v_isSharedCheck_599_ == 0)
{
v___x_593_ = v_x_589_;
v_isShared_594_ = v_isSharedCheck_599_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_a_591_);
lean_dec(v_x_589_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_599_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_596_; 
if (v_isShared_594_ == 0)
{
v___x_596_ = v___x_593_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_a_591_);
v___x_596_ = v_reuseFailAlloc_598_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
lean_object* v___x_597_; 
v___x_597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_597_, 0, v___x_596_);
return v___x_597_;
}
}
}
else
{
lean_object* v___x_600_; 
lean_dec_ref_known(v_x_589_, 1);
v___x_600_ = lean_apply_2(v_k_587_, v_ref_588_, lean_box(0));
return v___x_600_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__2___boxed(lean_object* v_k_601_, lean_object* v_ref_602_, lean_object* v_x_603_, lean_object* v___y_604_){
_start:
{
lean_object* v_res_605_; 
v_res_605_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__2(v_k_601_, v_ref_602_, v_x_603_);
return v_res_605_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__3(lean_object* v_mutex_606_, lean_object* v___f_607_){
_start:
{
lean_object* v___x_609_; uint8_t v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; 
v___x_609_ = lean_unsigned_to_nat(0u);
v___x_610_ = 0;
v___x_611_ = lean_io_basemutex_lock(v_mutex_606_);
v___x_612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_612_, 0, v___x_611_);
v___x_613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_613_, 0, v___x_612_);
v___x_614_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_609_, v___x_610_, v___x_613_, v___f_607_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__3___boxed(lean_object* v_mutex_615_, lean_object* v___f_616_, lean_object* v___y_617_){
_start:
{
lean_object* v_res_618_; 
v_res_618_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__3(v_mutex_615_, v___f_616_);
lean_dec(v_mutex_615_);
return v_res_618_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg(lean_object* v_mutex_620_, lean_object* v_k_621_){
_start:
{
lean_object* v_ref_623_; lean_object* v_mutex_624_; lean_object* v___f_625_; lean_object* v___f_626_; lean_object* v___f_627_; lean_object* v___f_628_; lean_object* v___x_629_; uint8_t v___x_630_; lean_object* v___x_631_; lean_object* v___y_633_; 
v_ref_623_ = lean_ctor_get(v_mutex_620_, 0);
lean_inc(v_ref_623_);
v_mutex_624_ = lean_ctor_get(v_mutex_620_, 1);
lean_inc_n(v_mutex_624_, 2);
lean_dec_ref(v_mutex_620_);
v___f_625_ = ((lean_object*)(l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___closed__0));
v___f_626_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_626_, 0, v_mutex_624_);
v___f_627_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_627_, 0, v_k_621_);
lean_closure_set(v___f_627_, 1, v_ref_623_);
v___f_628_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_628_, 0, v_mutex_624_);
lean_closure_set(v___f_628_, 1, v___f_627_);
v___x_629_ = lean_unsigned_to_nat(0u);
v___x_630_ = 0;
v___x_631_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v___f_628_, v___f_626_, v___x_629_, v___x_630_);
if (lean_obj_tag(v___x_631_) == 0)
{
lean_object* v_a_635_; 
v_a_635_ = lean_ctor_get(v___x_631_, 0);
lean_inc(v_a_635_);
lean_dec_ref_known(v___x_631_, 1);
if (lean_obj_tag(v_a_635_) == 0)
{
lean_object* v_a_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_643_; 
v_a_636_ = lean_ctor_get(v_a_635_, 0);
v_isSharedCheck_643_ = !lean_is_exclusive(v_a_635_);
if (v_isSharedCheck_643_ == 0)
{
v___x_638_ = v_a_635_;
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_a_636_);
lean_dec(v_a_635_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_643_;
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
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_a_636_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
v___y_633_ = v___x_641_;
goto v___jp_632_;
}
}
}
else
{
lean_object* v_a_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_652_; 
v_a_644_ = lean_ctor_get(v_a_635_, 0);
v_isSharedCheck_652_ = !lean_is_exclusive(v_a_635_);
if (v_isSharedCheck_652_ == 0)
{
v___x_646_ = v_a_635_;
v_isShared_647_ = v_isSharedCheck_652_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_a_644_);
lean_dec(v_a_635_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_652_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
lean_object* v_fst_648_; lean_object* v___x_650_; 
v_fst_648_ = lean_ctor_get(v_a_644_, 0);
lean_inc(v_fst_648_);
lean_dec(v_a_644_);
if (v_isShared_647_ == 0)
{
lean_ctor_set(v___x_646_, 0, v_fst_648_);
v___x_650_ = v___x_646_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v_fst_648_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
v___y_633_ = v___x_650_;
goto v___jp_632_;
}
}
}
}
else
{
lean_object* v_a_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_661_; 
v_a_653_ = lean_ctor_get(v___x_631_, 0);
v_isSharedCheck_661_ = !lean_is_exclusive(v___x_631_);
if (v_isSharedCheck_661_ == 0)
{
v___x_655_ = v___x_631_;
v_isShared_656_ = v_isSharedCheck_661_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_a_653_);
lean_dec(v___x_631_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_661_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v___x_657_; lean_object* v___x_659_; 
v___x_657_ = lean_task_map(v___f_625_, v_a_653_, v___x_629_, v___x_630_);
if (v_isShared_656_ == 0)
{
lean_ctor_set(v___x_655_, 0, v___x_657_);
v___x_659_ = v___x_655_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v___x_657_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
}
v___jp_632_:
{
lean_object* v___x_634_; 
v___x_634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_634_, 0, v___y_633_);
return v___x_634_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___boxed(lean_object* v_mutex_662_, lean_object* v_k_663_, lean_object* v___y_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg(v_mutex_662_, v_k_663_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1(lean_object* v_00_u03b1_666_, lean_object* v_00_u03b2_667_, lean_object* v_mutex_668_, lean_object* v_k_669_){
_start:
{
lean_object* v___x_671_; 
v___x_671_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg(v_mutex_668_, v_k_669_);
return v___x_671_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___boxed(lean_object* v_00_u03b1_672_, lean_object* v_00_u03b2_673_, lean_object* v_mutex_674_, lean_object* v_k_675_, lean_object* v___y_676_){
_start:
{
lean_object* v_res_677_; 
v_res_677_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1(v_00_u03b1_672_, v_00_u03b2_673_, v_mutex_674_, v_k_675_);
return v_res_677_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__0(uint8_t v___x_678_, lean_object* v___y_679_){
_start:
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_681_ = lean_box(v___x_678_);
v___x_682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_682_, 0, v___x_681_);
v___x_683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_683_, 0, v___x_682_);
return v___x_683_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__0___boxed(lean_object* v___x_684_, lean_object* v___y_685_, lean_object* v___y_686_){
_start:
{
uint8_t v___x_6973__boxed_687_; lean_object* v_res_688_; 
v___x_6973__boxed_687_ = lean_unbox(v___x_684_);
v_res_688_ = l_Std_CancellationToken_selector___lam__0(v___x_6973__boxed_687_, v___y_685_);
lean_dec(v___y_685_);
return v_res_688_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__1(lean_object* v___x_689_, lean_object* v___y_690_){
_start:
{
if (lean_obj_tag(v___y_690_) == 0)
{
lean_object* v_a_691_; lean_object* v___x_693_; uint8_t v_isShared_694_; uint8_t v_isSharedCheck_698_; 
v_a_691_ = lean_ctor_get(v___y_690_, 0);
v_isSharedCheck_698_ = !lean_is_exclusive(v___y_690_);
if (v_isSharedCheck_698_ == 0)
{
v___x_693_ = v___y_690_;
v_isShared_694_ = v_isSharedCheck_698_;
goto v_resetjp_692_;
}
else
{
lean_inc(v_a_691_);
lean_dec(v___y_690_);
v___x_693_ = lean_box(0);
v_isShared_694_ = v_isSharedCheck_698_;
goto v_resetjp_692_;
}
v_resetjp_692_:
{
lean_object* v___x_696_; 
if (v_isShared_694_ == 0)
{
v___x_696_ = v___x_693_;
goto v_reusejp_695_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v_a_691_);
v___x_696_ = v_reuseFailAlloc_697_;
goto v_reusejp_695_;
}
v_reusejp_695_:
{
return v___x_696_;
}
}
}
else
{
lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_705_; 
v_isSharedCheck_705_ = !lean_is_exclusive(v___y_690_);
if (v_isSharedCheck_705_ == 0)
{
lean_object* v_unused_706_; 
v_unused_706_ = lean_ctor_get(v___y_690_, 0);
lean_dec(v_unused_706_);
v___x_700_ = v___y_690_;
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
else
{
lean_dec(v___y_690_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v___x_703_; 
if (v_isShared_701_ == 0)
{
lean_ctor_set(v___x_700_, 0, v___x_689_);
v___x_703_ = v___x_700_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v___x_689_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
return v___x_703_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__2(lean_object* v___y_714_, lean_object* v_waiter_715_, lean_object* v_x_716_){
_start:
{
if (lean_obj_tag(v_x_716_) == 0)
{
lean_object* v_a_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_726_; 
lean_dec_ref(v_waiter_715_);
v_a_718_ = lean_ctor_get(v_x_716_, 0);
v_isSharedCheck_726_ = !lean_is_exclusive(v_x_716_);
if (v_isSharedCheck_726_ == 0)
{
v___x_720_ = v_x_716_;
v_isShared_721_ = v_isSharedCheck_726_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_a_718_);
lean_dec(v_x_716_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_726_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
lean_object* v___x_723_; 
if (v_isShared_721_ == 0)
{
v___x_723_ = v___x_720_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v_a_718_);
v___x_723_ = v_reuseFailAlloc_725_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
lean_object* v___x_724_; 
v___x_724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_724_, 0, v___x_723_);
return v___x_724_;
}
}
}
else
{
lean_object* v_a_727_; lean_object* v_reason_728_; 
v_a_727_ = lean_ctor_get(v_x_716_, 0);
lean_inc(v_a_727_);
lean_dec_ref_known(v_x_716_, 1);
v_reason_728_ = lean_ctor_get(v_a_727_, 0);
lean_inc(v_reason_728_);
lean_dec(v_a_727_);
if (lean_obj_tag(v_reason_728_) == 0)
{
lean_object* v___x_729_; lean_object* v_reason_730_; lean_object* v_consumers_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_742_; 
v___x_729_ = lean_st_ref_take(v___y_714_);
v_reason_730_ = lean_ctor_get(v___x_729_, 0);
v_consumers_731_ = lean_ctor_get(v___x_729_, 1);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_729_);
if (v_isSharedCheck_742_ == 0)
{
v___x_733_ = v___x_729_;
v_isShared_734_ = v_isSharedCheck_742_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_consumers_731_);
lean_inc(v_reason_730_);
lean_dec(v___x_729_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_742_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_738_; 
v___x_735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_735_, 0, v_waiter_715_);
v___x_736_ = l_Std_Queue_enqueue___redArg(v___x_735_, v_consumers_731_);
if (v_isShared_734_ == 0)
{
lean_ctor_set(v___x_733_, 1, v___x_736_);
v___x_738_ = v___x_733_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_reason_730_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v___x_736_);
v___x_738_ = v_reuseFailAlloc_741_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
lean_object* v___x_739_; lean_object* v___x_740_; 
v___x_739_ = lean_st_ref_put(v___y_714_, v___x_738_);
v___x_740_ = ((lean_object*)(l_Std_CancellationToken_selector___lam__2___closed__0));
return v___x_740_;
}
}
}
else
{
lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_775_; 
v_isSharedCheck_775_ = !lean_is_exclusive(v_reason_728_);
if (v_isSharedCheck_775_ == 0)
{
lean_object* v_unused_776_; 
v_unused_776_ = lean_ctor_get(v_reason_728_, 0);
lean_dec(v_unused_776_);
v___x_744_ = v_reason_728_;
v_isShared_745_ = v_isSharedCheck_775_;
goto v_resetjp_743_;
}
else
{
lean_dec(v_reason_728_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_775_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
uint8_t v___x_746_; lean_object* v___f_747_; lean_object* v___f_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___y_752_; 
v___x_746_ = 0;
v___f_747_ = ((lean_object*)(l_Std_CancellationToken_selector___lam__2___closed__1));
v___f_748_ = ((lean_object*)(l_Std_CancellationToken_selector___lam__2___closed__2));
v___x_749_ = lean_unsigned_to_nat(0u);
v___x_750_ = l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0(v_waiter_715_, v___f_747_, v___y_714_);
if (lean_obj_tag(v___x_750_) == 0)
{
lean_object* v_a_756_; 
v_a_756_ = lean_ctor_get(v___x_750_, 0);
lean_inc(v_a_756_);
lean_dec_ref_known(v___x_750_, 1);
if (lean_obj_tag(v_a_756_) == 0)
{
lean_object* v_a_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_764_; 
v_a_757_ = lean_ctor_get(v_a_756_, 0);
v_isSharedCheck_764_ = !lean_is_exclusive(v_a_756_);
if (v_isSharedCheck_764_ == 0)
{
v___x_759_ = v_a_756_;
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_a_757_);
lean_dec(v_a_756_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v___x_762_; 
if (v_isShared_760_ == 0)
{
v___x_762_ = v___x_759_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_a_757_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
v___y_752_ = v___x_762_;
goto v___jp_751_;
}
}
}
else
{
lean_object* v___x_765_; 
lean_dec_ref_known(v_a_756_, 1);
v___x_765_ = ((lean_object*)(l_Std_Async_Waiter_race___at___00__private_Std_Sync_CancellationToken_0__Std_CancellationToken_Consumer_resolve_spec__0___closed__0));
v___y_752_ = v___x_765_;
goto v___jp_751_;
}
}
else
{
lean_object* v_a_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_774_; 
lean_del_object(v___x_744_);
v_a_766_ = lean_ctor_get(v___x_750_, 0);
v_isSharedCheck_774_ = !lean_is_exclusive(v___x_750_);
if (v_isSharedCheck_774_ == 0)
{
v___x_768_ = v___x_750_;
v_isShared_769_ = v_isSharedCheck_774_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_a_766_);
lean_dec(v___x_750_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_774_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
lean_object* v___x_770_; lean_object* v___x_772_; 
v___x_770_ = lean_task_map(v___f_748_, v_a_766_, v___x_749_, v___x_746_);
if (v_isShared_769_ == 0)
{
lean_ctor_set(v___x_768_, 0, v___x_770_);
v___x_772_ = v___x_768_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v___x_770_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
return v___x_772_;
}
}
}
v___jp_751_:
{
lean_object* v___x_754_; 
if (v_isShared_745_ == 0)
{
lean_ctor_set_tag(v___x_744_, 0);
lean_ctor_set(v___x_744_, 0, v___y_752_);
v___x_754_ = v___x_744_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v___y_752_);
v___x_754_ = v_reuseFailAlloc_755_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
return v___x_754_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__2___boxed(lean_object* v___y_777_, lean_object* v_waiter_778_, lean_object* v_x_779_, lean_object* v___y_780_){
_start:
{
lean_object* v_res_781_; 
v_res_781_ = l_Std_CancellationToken_selector___lam__2(v___y_777_, v_waiter_778_, v_x_779_);
lean_dec(v___y_777_);
return v_res_781_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__3(lean_object* v_waiter_782_, lean_object* v___y_783_){
_start:
{
lean_object* v___f_785_; lean_object* v___x_786_; uint8_t v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; 
lean_inc(v___y_783_);
v___f_785_ = lean_alloc_closure((void*)(l_Std_CancellationToken_selector___lam__2___boxed), 4, 2);
lean_closure_set(v___f_785_, 0, v___y_783_);
lean_closure_set(v___f_785_, 1, v_waiter_782_);
v___x_786_ = lean_unsigned_to_nat(0u);
v___x_787_ = 0;
v___x_788_ = lean_st_ref_get(v___y_783_);
v___x_789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_789_, 0, v___x_788_);
v___x_790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_790_, 0, v___x_789_);
v___x_791_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_786_, v___x_787_, v___x_790_, v___f_785_);
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__3___boxed(lean_object* v_waiter_792_, lean_object* v___y_793_, lean_object* v___y_794_){
_start:
{
lean_object* v_res_795_; 
v_res_795_ = l_Std_CancellationToken_selector___lam__3(v_waiter_792_, v___y_793_);
lean_dec(v___y_793_);
return v_res_795_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__4(lean_object* v_token_796_, lean_object* v_waiter_797_){
_start:
{
lean_object* v___f_799_; lean_object* v___x_800_; 
v___f_799_ = lean_alloc_closure((void*)(l_Std_CancellationToken_selector___lam__3___boxed), 3, 1);
lean_closure_set(v___f_799_, 0, v_waiter_797_);
v___x_800_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg(v_token_796_, v___f_799_);
return v___x_800_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__4___boxed(lean_object* v_token_801_, lean_object* v_waiter_802_, lean_object* v___y_803_){
_start:
{
lean_object* v_res_804_; 
v_res_804_ = l_Std_CancellationToken_selector___lam__4(v_token_801_, v_waiter_802_);
return v_res_804_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__5(lean_object* v_x_815_){
_start:
{
if (lean_obj_tag(v_x_815_) == 0)
{
lean_object* v_a_817_; lean_object* v___x_819_; uint8_t v_isShared_820_; uint8_t v_isSharedCheck_825_; 
v_a_817_ = lean_ctor_get(v_x_815_, 0);
v_isSharedCheck_825_ = !lean_is_exclusive(v_x_815_);
if (v_isSharedCheck_825_ == 0)
{
v___x_819_ = v_x_815_;
v_isShared_820_ = v_isSharedCheck_825_;
goto v_resetjp_818_;
}
else
{
lean_inc(v_a_817_);
lean_dec(v_x_815_);
v___x_819_ = lean_box(0);
v_isShared_820_ = v_isSharedCheck_825_;
goto v_resetjp_818_;
}
v_resetjp_818_:
{
lean_object* v___x_822_; 
if (v_isShared_820_ == 0)
{
v___x_822_ = v___x_819_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v_a_817_);
v___x_822_ = v_reuseFailAlloc_824_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
lean_object* v___x_823_; 
v___x_823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_823_, 0, v___x_822_);
return v___x_823_;
}
}
}
else
{
lean_object* v_a_826_; uint8_t v___x_827_; 
v_a_826_ = lean_ctor_get(v_x_815_, 0);
lean_inc(v_a_826_);
lean_dec_ref_known(v_x_815_, 1);
v___x_827_ = lean_unbox(v_a_826_);
lean_dec(v_a_826_);
if (v___x_827_ == 0)
{
lean_object* v___x_828_; 
v___x_828_ = ((lean_object*)(l_Std_CancellationToken_selector___lam__5___closed__1));
return v___x_828_;
}
else
{
lean_object* v___x_829_; 
v___x_829_ = ((lean_object*)(l_Std_CancellationToken_selector___lam__5___closed__4));
return v___x_829_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__5___boxed(lean_object* v_x_830_, lean_object* v___y_831_){
_start:
{
lean_object* v_res_832_; 
v_res_832_ = l_Std_CancellationToken_selector___lam__5(v_x_830_);
return v_res_832_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__6(lean_object* v_token_833_, lean_object* v___f_834_){
_start:
{
lean_object* v___x_836_; uint8_t v___x_837_; uint8_t v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_836_ = lean_unsigned_to_nat(0u);
v___x_837_ = 0;
v___x_838_ = l_Std_CancellationToken_isCancelled(v_token_833_);
v___x_839_ = lean_box(v___x_838_);
v___x_840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_840_, 0, v___x_839_);
v___x_841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_841_, 0, v___x_840_);
v___x_842_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_836_, v___x_837_, v___x_841_, v___f_834_);
return v___x_842_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__6___boxed(lean_object* v_token_843_, lean_object* v___f_844_, lean_object* v___y_845_){
_start:
{
lean_object* v_res_846_; 
v_res_846_ = l_Std_CancellationToken_selector___lam__6(v_token_843_, v___f_844_);
return v_res_846_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__7(lean_object* v_reason_847_, lean_object* v___y_848_, lean_object* v_x_849_){
_start:
{
if (lean_obj_tag(v_x_849_) == 0)
{
lean_object* v_a_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_859_; 
lean_dec(v_reason_847_);
v_a_851_ = lean_ctor_get(v_x_849_, 0);
v_isSharedCheck_859_ = !lean_is_exclusive(v_x_849_);
if (v_isSharedCheck_859_ == 0)
{
v___x_853_ = v_x_849_;
v_isShared_854_ = v_isSharedCheck_859_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_a_851_);
lean_dec(v_x_849_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_859_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___x_856_; 
if (v_isShared_854_ == 0)
{
v___x_856_ = v___x_853_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v_a_851_);
v___x_856_ = v_reuseFailAlloc_858_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
lean_object* v___x_857_; 
v___x_857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_857_, 0, v___x_856_);
return v___x_857_;
}
}
}
else
{
lean_object* v_a_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; 
v_a_860_ = lean_ctor_get(v_x_849_, 0);
lean_inc(v_a_860_);
lean_dec_ref_known(v_x_849_, 1);
v___x_861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_861_, 0, v_reason_847_);
lean_ctor_set(v___x_861_, 1, v_a_860_);
v___x_862_ = lean_st_ref_swap(v___y_848_, v___x_861_);
lean_dec(v___x_862_);
v___x_863_ = ((lean_object*)(l_Std_CancellationToken_selector___lam__2___closed__0));
return v___x_863_;
}
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__7___boxed(lean_object* v_reason_864_, lean_object* v___y_865_, lean_object* v_x_866_, lean_object* v___y_867_){
_start:
{
lean_object* v_res_868_; 
v_res_868_ = l_Std_CancellationToken_selector___lam__7(v_reason_864_, v___y_865_, v_x_866_);
lean_dec(v___y_865_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__0(lean_object* v_x_869_){
_start:
{
if (lean_obj_tag(v_x_869_) == 0)
{
lean_object* v___x_871_; 
v___x_871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_871_, 0, v_x_869_);
return v___x_871_;
}
else
{
lean_object* v_a_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_881_; 
v_a_872_ = lean_ctor_get(v_x_869_, 0);
v_isSharedCheck_881_ = !lean_is_exclusive(v_x_869_);
if (v_isSharedCheck_881_ == 0)
{
v___x_874_ = v_x_869_;
v_isShared_875_ = v_isSharedCheck_881_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_a_872_);
lean_dec(v_x_869_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_881_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_876_; lean_object* v___x_878_; 
v___x_876_ = l_List_reverse___redArg(v_a_872_);
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 0, v___x_876_);
v___x_878_ = v___x_874_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v___x_876_);
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
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__0___boxed(lean_object* v_x_882_, lean_object* v___y_883_){
_start:
{
lean_object* v_res_884_; 
v_res_884_ = l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__0(v_x_882_);
return v_res_884_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___lam__1(lean_object* v_x_885_){
_start:
{
uint8_t v___y_888_; 
if (lean_obj_tag(v_x_885_) == 0)
{
lean_object* v___x_892_; 
v___x_892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_892_, 0, v_x_885_);
return v___x_892_;
}
else
{
lean_object* v_a_893_; uint8_t v___x_894_; 
v_a_893_ = lean_ctor_get(v_x_885_, 0);
lean_inc(v_a_893_);
lean_dec_ref_known(v_x_885_, 1);
v___x_894_ = lean_unbox(v_a_893_);
lean_dec(v_a_893_);
if (v___x_894_ == 0)
{
uint8_t v___x_895_; 
v___x_895_ = 1;
v___y_888_ = v___x_895_;
goto v___jp_887_;
}
else
{
uint8_t v___x_896_; 
v___x_896_ = 0;
v___y_888_ = v___x_896_;
goto v___jp_887_;
}
}
v___jp_887_:
{
lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_889_ = lean_box(v___y_888_);
v___x_890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_890_, 0, v___x_889_);
v___x_891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_891_, 0, v___x_890_);
return v___x_891_;
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___lam__1___boxed(lean_object* v_x_897_, lean_object* v___y_898_){
_start:
{
lean_object* v_res_899_; 
v_res_899_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___lam__1(v_x_897_);
return v_res_899_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___lam__0___boxed(lean_object* v_tail_900_, lean_object* v_x_901_, lean_object* v_head_902_, lean_object* v_x_903_, lean_object* v___y_904_){
_start:
{
lean_object* v_res_905_; 
v_res_905_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___lam__0(v_tail_900_, v_x_901_, v_head_902_, v_x_903_);
return v_res_905_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg(lean_object* v_x_907_, lean_object* v_x_908_){
_start:
{
if (lean_obj_tag(v_x_907_) == 0)
{
lean_object* v___x_910_; lean_object* v___x_911_; 
v___x_910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_910_, 0, v_x_908_);
v___x_911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_911_, 0, v___x_910_);
return v___x_911_;
}
else
{
lean_object* v_head_912_; lean_object* v_tail_913_; lean_object* v___f_914_; lean_object* v___x_915_; uint8_t v___x_916_; 
v_head_912_ = lean_ctor_get(v_x_907_, 0);
lean_inc_n(v_head_912_, 2);
v_tail_913_ = lean_ctor_get(v_x_907_, 1);
lean_inc(v_tail_913_);
lean_dec_ref_known(v_x_907_, 2);
v___f_914_ = lean_alloc_closure((void*)(l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_914_, 0, v_tail_913_);
lean_closure_set(v___f_914_, 1, v_x_908_);
lean_closure_set(v___f_914_, 2, v_head_912_);
v___x_915_ = lean_unsigned_to_nat(0u);
v___x_916_ = 0;
if (lean_obj_tag(v_head_912_) == 0)
{
lean_object* v___x_917_; lean_object* v___x_918_; 
lean_dec_ref_known(v_head_912_, 1);
v___x_917_ = ((lean_object*)(l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__0___closed__1));
v___x_918_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_915_, v___x_916_, v___x_917_, v___f_914_);
return v___x_918_;
}
else
{
lean_object* v_finished_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_932_; 
v_finished_919_ = lean_ctor_get(v_head_912_, 0);
v_isSharedCheck_932_ = !lean_is_exclusive(v_head_912_);
if (v_isSharedCheck_932_ == 0)
{
v___x_921_ = v_head_912_;
v_isShared_922_ = v_isSharedCheck_932_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_finished_919_);
lean_dec(v_head_912_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_932_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
lean_object* v_finished_923_; lean_object* v___f_924_; lean_object* v___x_925_; lean_object* v___x_927_; 
v_finished_923_ = lean_ctor_get(v_finished_919_, 0);
lean_inc(v_finished_923_);
lean_dec_ref(v_finished_919_);
v___f_924_ = ((lean_object*)(l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___closed__0));
v___x_925_ = lean_st_ref_get(v_finished_923_);
lean_dec(v_finished_923_);
if (v_isShared_922_ == 0)
{
lean_ctor_set(v___x_921_, 0, v___x_925_);
v___x_927_ = v___x_921_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v___x_925_);
v___x_927_ = v_reuseFailAlloc_931_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; 
v___x_928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_928_, 0, v___x_927_);
v___x_929_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_915_, v___x_916_, v___x_928_, v___f_924_);
v___x_930_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_915_, v___x_916_, v___x_929_, v___f_914_);
return v___x_930_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___lam__0(lean_object* v_tail_933_, lean_object* v_x_934_, lean_object* v_head_935_, lean_object* v_x_936_){
_start:
{
if (lean_obj_tag(v_x_936_) == 0)
{
lean_object* v_a_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_946_; 
lean_dec_ref(v_head_935_);
lean_dec(v_x_934_);
lean_dec(v_tail_933_);
v_a_938_ = lean_ctor_get(v_x_936_, 0);
v_isSharedCheck_946_ = !lean_is_exclusive(v_x_936_);
if (v_isSharedCheck_946_ == 0)
{
v___x_940_ = v_x_936_;
v_isShared_941_ = v_isSharedCheck_946_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_a_938_);
lean_dec(v_x_936_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_946_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
lean_object* v___x_943_; 
if (v_isShared_941_ == 0)
{
v___x_943_ = v___x_940_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v_a_938_);
v___x_943_ = v_reuseFailAlloc_945_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
lean_object* v___x_944_; 
v___x_944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_944_, 0, v___x_943_);
return v___x_944_;
}
}
}
else
{
lean_object* v_a_947_; uint8_t v___x_948_; 
v_a_947_ = lean_ctor_get(v_x_936_, 0);
lean_inc(v_a_947_);
lean_dec_ref_known(v_x_936_, 1);
v___x_948_ = lean_unbox(v_a_947_);
lean_dec(v_a_947_);
if (v___x_948_ == 0)
{
lean_object* v___x_949_; 
lean_dec_ref(v_head_935_);
v___x_949_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg(v_tail_933_, v_x_934_);
return v___x_949_;
}
else
{
lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_950_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_950_, 0, v_head_935_);
lean_ctor_set(v___x_950_, 1, v_x_934_);
v___x_951_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg(v_tail_933_, v___x_950_);
return v___x_951_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___boxed(lean_object* v_x_952_, lean_object* v_x_953_, lean_object* v___y_954_){
_start:
{
lean_object* v_res_955_; 
v_res_955_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg(v_x_952_, v_x_953_);
return v_res_955_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__2(lean_object* v_a_956_, lean_object* v___x_957_, lean_object* v_x_958_){
_start:
{
if (lean_obj_tag(v_x_958_) == 0)
{
lean_object* v_a_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_968_; 
lean_dec(v___x_957_);
lean_dec(v_a_956_);
v_a_960_ = lean_ctor_get(v_x_958_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v_x_958_);
if (v_isSharedCheck_968_ == 0)
{
v___x_962_ = v_x_958_;
v_isShared_963_ = v_isSharedCheck_968_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_a_960_);
lean_dec(v_x_958_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_968_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v___x_965_; 
if (v_isShared_963_ == 0)
{
v___x_965_ = v___x_962_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v_a_960_);
v___x_965_ = v_reuseFailAlloc_967_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
lean_object* v___x_966_; 
v___x_966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_966_, 0, v___x_965_);
return v___x_966_;
}
}
}
else
{
lean_object* v_a_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_985_; 
v_a_969_ = lean_ctor_get(v_x_958_, 0);
v_isSharedCheck_985_ = !lean_is_exclusive(v_x_958_);
if (v_isSharedCheck_985_ == 0)
{
v___x_971_ = v_x_958_;
v_isShared_972_ = v_isSharedCheck_985_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_a_969_);
lean_dec(v_x_958_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_985_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
uint8_t v___x_973_; 
v___x_973_ = l_List_isEmpty___redArg(v_a_956_);
if (v___x_973_ == 0)
{
lean_object* v___x_974_; lean_object* v___x_976_; 
lean_dec(v___x_957_);
v___x_974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_974_, 0, v_a_969_);
lean_ctor_set(v___x_974_, 1, v_a_956_);
if (v_isShared_972_ == 0)
{
lean_ctor_set(v___x_971_, 0, v___x_974_);
v___x_976_ = v___x_971_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v___x_974_);
v___x_976_ = v_reuseFailAlloc_978_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
lean_object* v___x_977_; 
v___x_977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_977_, 0, v___x_976_);
return v___x_977_;
}
}
else
{
lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_982_; 
lean_dec(v_a_956_);
v___x_979_ = l_List_reverse___redArg(v_a_969_);
v___x_980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_980_, 0, v___x_957_);
lean_ctor_set(v___x_980_, 1, v___x_979_);
if (v_isShared_972_ == 0)
{
lean_ctor_set(v___x_971_, 0, v___x_980_);
v___x_982_ = v___x_971_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v___x_980_);
v___x_982_ = v_reuseFailAlloc_984_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
lean_object* v___x_983_; 
v___x_983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_983_, 0, v___x_982_);
return v___x_983_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__2___boxed(lean_object* v_a_986_, lean_object* v___x_987_, lean_object* v_x_988_, lean_object* v___y_989_){
_start:
{
lean_object* v_res_990_; 
v_res_990_ = l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__2(v_a_986_, v___x_987_, v_x_988_);
return v_res_990_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__1(lean_object* v___x_991_, lean_object* v_eList_992_, lean_object* v___f_993_, lean_object* v_x_994_){
_start:
{
if (lean_obj_tag(v_x_994_) == 0)
{
lean_object* v_a_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1004_; 
lean_dec_ref(v___f_993_);
lean_dec(v_eList_992_);
lean_dec(v___x_991_);
v_a_996_ = lean_ctor_get(v_x_994_, 0);
v_isSharedCheck_1004_ = !lean_is_exclusive(v_x_994_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_998_ = v_x_994_;
v_isShared_999_ = v_isSharedCheck_1004_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_a_996_);
lean_dec(v_x_994_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1004_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v___x_1001_; 
if (v_isShared_999_ == 0)
{
v___x_1001_ = v___x_998_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v_a_996_);
v___x_1001_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
lean_object* v___x_1002_; 
v___x_1002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1002_, 0, v___x_1001_);
return v___x_1002_;
}
}
}
else
{
lean_object* v_a_1005_; lean_object* v___f_1006_; lean_object* v___x_1007_; uint8_t v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; 
v_a_1005_ = lean_ctor_get(v_x_994_, 0);
lean_inc(v_a_1005_);
lean_dec_ref_known(v_x_994_, 1);
lean_inc(v___x_991_);
v___f_1006_ = lean_alloc_closure((void*)(l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__2___boxed), 4, 2);
lean_closure_set(v___f_1006_, 0, v_a_1005_);
lean_closure_set(v___f_1006_, 1, v___x_991_);
v___x_1007_ = lean_unsigned_to_nat(0u);
v___x_1008_ = 0;
v___x_1009_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg(v_eList_992_, v___x_991_);
v___x_1010_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1007_, v___x_1008_, v___x_1009_, v___f_993_);
v___x_1011_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1007_, v___x_1008_, v___x_1010_, v___f_1006_);
return v___x_1011_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__1___boxed(lean_object* v___x_1012_, lean_object* v_eList_1013_, lean_object* v___f_1014_, lean_object* v_x_1015_, lean_object* v___y_1016_){
_start:
{
lean_object* v_res_1017_; 
v_res_1017_ = l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__1(v___x_1012_, v_eList_1013_, v___f_1014_, v_x_1015_);
return v_res_1017_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2(lean_object* v_q_1019_, lean_object* v___y_1020_){
_start:
{
lean_object* v_eList_1022_; lean_object* v_dList_1023_; lean_object* v___f_1024_; lean_object* v___x_1025_; lean_object* v___f_1026_; lean_object* v___x_1027_; uint8_t v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; 
v_eList_1022_ = lean_ctor_get(v_q_1019_, 0);
lean_inc(v_eList_1022_);
v_dList_1023_ = lean_ctor_get(v_q_1019_, 1);
lean_inc(v_dList_1023_);
lean_dec_ref(v_q_1019_);
v___f_1024_ = ((lean_object*)(l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___closed__0));
v___x_1025_ = lean_box(0);
v___f_1026_ = lean_alloc_closure((void*)(l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1026_, 0, v___x_1025_);
lean_closure_set(v___f_1026_, 1, v_eList_1022_);
lean_closure_set(v___f_1026_, 2, v___f_1024_);
v___x_1027_ = lean_unsigned_to_nat(0u);
v___x_1028_ = 0;
v___x_1029_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg(v_dList_1023_, v___x_1025_);
v___x_1030_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1027_, v___x_1028_, v___x_1029_, v___f_1024_);
v___x_1031_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1027_, v___x_1028_, v___x_1030_, v___f_1026_);
return v___x_1031_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___boxed(lean_object* v_q_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_){
_start:
{
lean_object* v_res_1035_; 
v_res_1035_ = l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2(v_q_1032_, v___y_1033_);
lean_dec(v___y_1033_);
return v_res_1035_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__8(lean_object* v___y_1036_, lean_object* v_x_1037_){
_start:
{
if (lean_obj_tag(v_x_1037_) == 0)
{
lean_object* v_a_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1047_; 
v_a_1039_ = lean_ctor_get(v_x_1037_, 0);
v_isSharedCheck_1047_ = !lean_is_exclusive(v_x_1037_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_1041_ = v_x_1037_;
v_isShared_1042_ = v_isSharedCheck_1047_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_a_1039_);
lean_dec(v_x_1037_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1047_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
lean_object* v___x_1044_; 
if (v_isShared_1042_ == 0)
{
v___x_1044_ = v___x_1041_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1046_; 
v_reuseFailAlloc_1046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1046_, 0, v_a_1039_);
v___x_1044_ = v_reuseFailAlloc_1046_;
goto v_reusejp_1043_;
}
v_reusejp_1043_:
{
lean_object* v___x_1045_; 
v___x_1045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1045_, 0, v___x_1044_);
return v___x_1045_;
}
}
}
else
{
lean_object* v_a_1048_; lean_object* v_reason_1049_; lean_object* v_consumers_1050_; lean_object* v___f_1051_; lean_object* v___x_1052_; uint8_t v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; 
v_a_1048_ = lean_ctor_get(v_x_1037_, 0);
lean_inc(v_a_1048_);
lean_dec_ref_known(v_x_1037_, 1);
v_reason_1049_ = lean_ctor_get(v_a_1048_, 0);
lean_inc(v_reason_1049_);
v_consumers_1050_ = lean_ctor_get(v_a_1048_, 1);
lean_inc_ref(v_consumers_1050_);
lean_dec(v_a_1048_);
lean_inc(v___y_1036_);
v___f_1051_ = lean_alloc_closure((void*)(l_Std_CancellationToken_selector___lam__7___boxed), 4, 2);
lean_closure_set(v___f_1051_, 0, v_reason_1049_);
lean_closure_set(v___f_1051_, 1, v___y_1036_);
v___x_1052_ = lean_unsigned_to_nat(0u);
v___x_1053_ = 0;
v___x_1054_ = l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2(v_consumers_1050_, v___y_1036_);
v___x_1055_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1052_, v___x_1053_, v___x_1054_, v___f_1051_);
return v___x_1055_;
}
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__8___boxed(lean_object* v___y_1056_, lean_object* v_x_1057_, lean_object* v___y_1058_){
_start:
{
lean_object* v_res_1059_; 
v_res_1059_ = l_Std_CancellationToken_selector___lam__8(v___y_1056_, v_x_1057_);
lean_dec(v___y_1056_);
return v_res_1059_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__9(lean_object* v___y_1060_){
_start:
{
lean_object* v___f_1062_; lean_object* v___x_1063_; uint8_t v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; 
lean_inc(v___y_1060_);
v___f_1062_ = lean_alloc_closure((void*)(l_Std_CancellationToken_selector___lam__8___boxed), 3, 1);
lean_closure_set(v___f_1062_, 0, v___y_1060_);
v___x_1063_ = lean_unsigned_to_nat(0u);
v___x_1064_ = 0;
v___x_1065_ = lean_st_ref_get(v___y_1060_);
v___x_1066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1065_);
v___x_1067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1066_);
v___x_1068_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1063_, v___x_1064_, v___x_1067_, v___f_1062_);
return v___x_1068_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__9___boxed(lean_object* v___y_1069_, lean_object* v___y_1070_){
_start:
{
lean_object* v_res_1071_; 
v_res_1071_ = l_Std_CancellationToken_selector___lam__9(v___y_1069_);
lean_dec(v___y_1069_);
return v_res_1071_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector(lean_object* v_token_1074_){
_start:
{
lean_object* v___f_1075_; lean_object* v___f_1076_; lean_object* v___f_1077_; lean_object* v___f_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; 
lean_inc_ref_n(v_token_1074_, 2);
v___f_1075_ = lean_alloc_closure((void*)(l_Std_CancellationToken_selector___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1075_, 0, v_token_1074_);
v___f_1076_ = ((lean_object*)(l_Std_CancellationToken_selector___closed__0));
v___f_1077_ = lean_alloc_closure((void*)(l_Std_CancellationToken_selector___lam__6___boxed), 3, 2);
lean_closure_set(v___f_1077_, 0, v_token_1074_);
lean_closure_set(v___f_1077_, 1, v___f_1076_);
v___f_1078_ = ((lean_object*)(l_Std_CancellationToken_selector___closed__1));
v___x_1079_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___boxed), 5, 4);
lean_closure_set(v___x_1079_, 0, lean_box(0));
lean_closure_set(v___x_1079_, 1, lean_box(0));
lean_closure_set(v___x_1079_, 2, v_token_1074_);
lean_closure_set(v___x_1079_, 3, v___f_1078_);
v___x_1080_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1080_, 0, v___f_1077_);
lean_ctor_set(v___x_1080_, 1, v___f_1075_);
lean_ctor_set(v___x_1080_, 2, v___x_1079_);
return v___x_1080_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2(lean_object* v_x_1081_, lean_object* v_x_1082_, lean_object* v___y_1083_){
_start:
{
lean_object* v___x_1085_; 
v___x_1085_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg(v_x_1081_, v_x_1082_);
return v___x_1085_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___boxed(lean_object* v_x_1086_, lean_object* v_x_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_){
_start:
{
lean_object* v_res_1090_; 
v_res_1090_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2(v_x_1086_, v_x_1087_, v___y_1088_);
lean_dec(v___y_1088_);
return v_res_1090_;
}
}
lean_object* runtime_initialize_Std_Data(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Queue(uint8_t builtin);
lean_object* runtime_initialize_Std_Sync_Mutex(uint8_t builtin);
lean_object* runtime_initialize_Std_Async_Select(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Sync_CancellationToken(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Queue(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Sync_Mutex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_Select(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Sync_CancellationToken(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Data(uint8_t builtin);
lean_object* initialize_Init_Data_Queue(uint8_t builtin);
lean_object* initialize_Std_Sync_Mutex(uint8_t builtin);
lean_object* initialize_Std_Async_Select(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Sync_CancellationToken(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Queue(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Sync_Mutex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async_Select(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Sync_CancellationToken(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Sync_CancellationToken(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Sync_CancellationToken(builtin);
}
#ifdef __cplusplus
}
#endif
