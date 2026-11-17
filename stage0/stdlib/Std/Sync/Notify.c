// Lean compiler output
// Module: Std.Sync.Notify
// Imports: public import Init.Data.Queue public import Std.Sync.Mutex public import Std.Async.Select
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
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* lean_io_basemutex_unlock(lean_object*);
lean_object* lean_io_basemutex_lock(lean_object*);
lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* lean_io_promise_new();
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Std_Queue_enqueue___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_io_promise_result_opt(lean_object*);
lean_object* lean_io_bind_task(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_Queue_dequeue_x3f___redArg(lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* l_Std_Queue_empty___redArg();
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* l_Std_Mutex_new___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_ctorIdx___impl___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_ctorIdx___impl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_ctorIdx___impl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_ctorIdx___impl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_normal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_normal_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_select_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_select_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Async_Waiter_race___at___00__private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Async_Waiter_race___at___00__private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve___redArg___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve___redArg___closed__0_value;
LEAN_EXPORT uint8_t l___private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Notify_new___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Notify_new___closed__0;
LEAN_EXPORT lean_object* l_Std_Notify_new();
LEAN_EXPORT lean_object* l_Std_Notify_new___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_notify_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_notify_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_notify_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_notify_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notify_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notify_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Notify_notify___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Notify_notify___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Notify_notify___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Notify_notify___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Notify_notify___closed__0 = (const lean_object*)&l_Std_Notify_notify___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Notify_notify(lean_object*);
LEAN_EXPORT lean_object* l_Std_Notify_notify___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notify_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notify_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notifyOne_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notifyOne_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notifyOne_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notifyOne_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notifyOne_spec__0___redArg___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notifyOne_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notifyOne_spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notifyOne_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notifyOne_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Notify_notifyOne___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Notify_notifyOne___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Notify_notifyOne___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Notify_notifyOne___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Notify_notifyOne___closed__0 = (const lean_object*)&l_Std_Notify_notifyOne___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Notify_notifyOne(lean_object*);
LEAN_EXPORT lean_object* l_Std_Notify_notifyOne___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notifyOne_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notifyOne_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_wait_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_wait_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_wait_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_wait_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Notify_wait___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "notify dropped"};
static const lean_object* l_Std_Notify_wait___lam__0___closed__0 = (const lean_object*)&l_Std_Notify_wait___lam__0___closed__0_value;
static lean_once_cell_t l_Std_Notify_wait___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Notify_wait___lam__0___closed__1;
static lean_once_cell_t l_Std_Notify_wait___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Notify_wait___lam__0___closed__2;
static lean_once_cell_t l_Std_Notify_wait___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Notify_wait___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Std_Notify_wait___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Notify_wait___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Notify_wait___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Notify_wait___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Notify_wait___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Notify_wait___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Notify_wait___closed__0 = (const lean_object*)&l_Std_Notify_wait___closed__0_value;
static const lean_closure_object l_Std_Notify_wait___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Notify_wait___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Notify_wait___closed__0_value)} };
static const lean_object* l_Std_Notify_wait___closed__1 = (const lean_object*)&l_Std_Notify_wait___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Notify_wait(lean_object*);
LEAN_EXPORT lean_object* l_Std_Notify_wait___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___closed__0 = (const lean_object*)&l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Notify_selector___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Notify_selector___lam__0___closed__0 = (const lean_object*)&l_Std_Notify_selector___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Notify_selector___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Notify_selector___lam__0___closed__0_value)}};
static const lean_object* l_Std_Notify_selector___lam__0___closed__1 = (const lean_object*)&l_Std_Notify_selector___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Notify_selector___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Notify_selector___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg___closed__0 = (const lean_object*)&l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg___closed__0_value)}};
static const lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg___closed__1 = (const lean_object*)&l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg___closed__1_value;
static const lean_closure_object l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg___closed__2 = (const lean_object*)&l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1___closed__0 = (const lean_object*)&l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Notify_selector___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Notify_selector___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Notify_selector___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Std_Notify_selector___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Notify_selector___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Notify_selector___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Notify_selector___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Notify_selector___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Notify_selector___lam__5(lean_object*);
LEAN_EXPORT lean_object* l_Std_Notify_selector___lam__5___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Notify_selector___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Notify_selector___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Notify_selector___closed__0 = (const lean_object*)&l_Std_Notify_selector___closed__0_value;
static const lean_closure_object l_Std_Notify_selector___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Notify_selector___lam__5___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Notify_selector___closed__1 = (const lean_object*)&l_Std_Notify_selector___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Notify_selector(lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_ctorIdx___impl___redArg(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_ctorIdx___impl___redArg___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l___private_Std_Sync_Notify_0__Std_Notify_Consumer_ctorIdx___impl___redArg(v_x_3_);
lean_dec_ref(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_ctorIdx___impl(lean_object* v_00_u03b1_5_, lean_object* v_x_6_){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_obj_tag_nat(v_x_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_ctorIdx___impl___boxed(lean_object* v_00_u03b1_8_, lean_object* v_x_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l___private_Std_Sync_Notify_0__Std_Notify_Consumer_ctorIdx___impl(v_00_u03b1_8_, v_x_9_);
lean_dec_ref(v_x_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_ctorElim___redArg(lean_object* v_t_11_, lean_object* v_k_12_){
_start:
{
if (lean_obj_tag(v_t_11_) == 0)
{
lean_object* v_promise_13_; lean_object* v___x_14_; 
v_promise_13_ = lean_ctor_get(v_t_11_, 0);
lean_inc(v_promise_13_);
lean_dec_ref_known(v_t_11_, 1);
v___x_14_ = lean_apply_1(v_k_12_, v_promise_13_);
return v___x_14_;
}
else
{
lean_object* v_finished_15_; lean_object* v___x_16_; 
v_finished_15_ = lean_ctor_get(v_t_11_, 0);
lean_inc_ref(v_finished_15_);
lean_dec_ref_known(v_t_11_, 1);
v___x_16_ = lean_apply_1(v_k_12_, v_finished_15_);
return v___x_16_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_ctorElim(lean_object* v_00_u03b1_17_, lean_object* v_motive_18_, lean_object* v_ctorIdx_19_, lean_object* v_t_20_, lean_object* v_h_21_, lean_object* v_k_22_){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = l___private_Std_Sync_Notify_0__Std_Notify_Consumer_ctorElim___redArg(v_t_20_, v_k_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_ctorElim___boxed(lean_object* v_00_u03b1_24_, lean_object* v_motive_25_, lean_object* v_ctorIdx_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_k_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l___private_Std_Sync_Notify_0__Std_Notify_Consumer_ctorElim(v_00_u03b1_24_, v_motive_25_, v_ctorIdx_26_, v_t_27_, v_h_28_, v_k_29_);
lean_dec(v_ctorIdx_26_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_normal_elim___redArg(lean_object* v_t_31_, lean_object* v_normal_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l___private_Std_Sync_Notify_0__Std_Notify_Consumer_ctorElim___redArg(v_t_31_, v_normal_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_normal_elim(lean_object* v_00_u03b1_34_, lean_object* v_motive_35_, lean_object* v_t_36_, lean_object* v_h_37_, lean_object* v_normal_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l___private_Std_Sync_Notify_0__Std_Notify_Consumer_ctorElim___redArg(v_t_36_, v_normal_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_select_elim___redArg(lean_object* v_t_40_, lean_object* v_select_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l___private_Std_Sync_Notify_0__Std_Notify_Consumer_ctorElim___redArg(v_t_40_, v_select_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_select_elim(lean_object* v_00_u03b1_43_, lean_object* v_motive_44_, lean_object* v_t_45_, lean_object* v_h_46_, lean_object* v_select_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l___private_Std_Sync_Notify_0__Std_Notify_Consumer_ctorElim___redArg(v_t_45_, v_select_47_);
return v___x_48_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_Waiter_race___at___00__private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve_spec__0___redArg(lean_object* v_x_49_, lean_object* v_w_50_, lean_object* v_lose_51_){
_start:
{
lean_object* v_finished_53_; lean_object* v_promise_54_; lean_object* v___x_55_; uint8_t v___y_57_; uint8_t v___x_65_; 
v_finished_53_ = lean_ctor_get(v_w_50_, 0);
v_promise_54_ = lean_ctor_get(v_w_50_, 1);
v___x_55_ = lean_st_ref_take(v_finished_53_);
v___x_65_ = lean_unbox(v___x_55_);
lean_dec(v___x_55_);
if (v___x_65_ == 0)
{
uint8_t v___x_66_; 
v___x_66_ = 1;
v___y_57_ = v___x_66_;
goto v___jp_56_;
}
else
{
uint8_t v___x_67_; 
v___x_67_ = 0;
v___y_57_ = v___x_67_;
goto v___jp_56_;
}
v___jp_56_:
{
uint8_t v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_58_ = 1;
v___x_59_ = lean_box(v___x_58_);
v___x_60_ = lean_st_ref_put(v_finished_53_, v___x_59_);
if (v___y_57_ == 0)
{
lean_object* v___x_61_; uint8_t v___x_62_; 
lean_dec(v_x_49_);
v___x_61_ = lean_apply_1(v_lose_51_, lean_box(0));
v___x_62_ = lean_unbox(v___x_61_);
return v___x_62_;
}
else
{
lean_object* v___x_63_; lean_object* v___x_64_; 
lean_dec_ref(v_lose_51_);
v___x_63_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_63_, 0, v_x_49_);
v___x_64_ = lean_io_promise_resolve(v___x_63_, v_promise_54_);
return v___y_57_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve_spec__0___redArg___boxed(lean_object* v_x_68_, lean_object* v_w_69_, lean_object* v_lose_70_, lean_object* v___y_71_){
_start:
{
uint8_t v_res_72_; lean_object* v_r_73_; 
v_res_72_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve_spec__0___redArg(v_x_68_, v_w_69_, v_lose_70_);
lean_dec_ref(v_w_69_);
v_r_73_ = lean_box(v_res_72_);
return v_r_73_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_Waiter_race___at___00__private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve_spec__0(lean_object* v_00_u03b1_74_, lean_object* v_x_75_, lean_object* v_w_76_, lean_object* v_lose_77_){
_start:
{
uint8_t v___x_79_; 
v___x_79_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve_spec__0___redArg(v_x_75_, v_w_76_, v_lose_77_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve_spec__0___boxed(lean_object* v_00_u03b1_80_, lean_object* v_x_81_, lean_object* v_w_82_, lean_object* v_lose_83_, lean_object* v___y_84_){
_start:
{
uint8_t v_res_85_; lean_object* v_r_86_; 
v_res_85_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve_spec__0(v_00_u03b1_80_, v_x_81_, v_w_82_, v_lose_83_);
lean_dec_ref(v_w_82_);
v_r_86_ = lean_box(v_res_85_);
return v_r_86_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve___redArg___lam__0(uint8_t v___x_87_){
_start:
{
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve___redArg___lam__0___boxed(lean_object* v___x_89_, lean_object* v___y_90_){
_start:
{
uint8_t v___x_372__boxed_91_; uint8_t v_res_92_; lean_object* v_r_93_; 
v___x_372__boxed_91_ = lean_unbox(v___x_89_);
v_res_92_ = l___private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve___redArg___lam__0(v___x_372__boxed_91_);
v_r_93_ = lean_box(v_res_92_);
return v_r_93_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve___redArg(lean_object* v_c_97_, lean_object* v_x_98_){
_start:
{
if (lean_obj_tag(v_c_97_) == 0)
{
lean_object* v_promise_100_; lean_object* v___x_101_; uint8_t v___x_102_; 
v_promise_100_ = lean_ctor_get(v_c_97_, 0);
v___x_101_ = lean_io_promise_resolve(v_x_98_, v_promise_100_);
v___x_102_ = 1;
return v___x_102_;
}
else
{
lean_object* v_finished_103_; lean_object* v_lose_104_; uint8_t v___x_105_; 
v_finished_103_ = lean_ctor_get(v_c_97_, 0);
v_lose_104_ = ((lean_object*)(l___private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve___redArg___closed__0));
v___x_105_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve_spec__0___redArg(v_x_98_, v_finished_103_, v_lose_104_);
return v___x_105_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve___redArg___boxed(lean_object* v_c_106_, lean_object* v_x_107_, lean_object* v_a_108_){
_start:
{
uint8_t v_res_109_; lean_object* v_r_110_; 
v_res_109_ = l___private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve___redArg(v_c_106_, v_x_107_);
lean_dec_ref(v_c_106_);
v_r_110_ = lean_box(v_res_109_);
return v_r_110_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve(lean_object* v_00_u03b1_111_, lean_object* v_c_112_, lean_object* v_x_113_){
_start:
{
uint8_t v___x_115_; 
v___x_115_ = l___private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve___redArg(v_c_112_, v_x_113_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve___boxed(lean_object* v_00_u03b1_116_, lean_object* v_c_117_, lean_object* v_x_118_, lean_object* v_a_119_){
_start:
{
uint8_t v_res_120_; lean_object* v_r_121_; 
v_res_120_ = l___private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve(v_00_u03b1_116_, v_c_117_, v_x_118_);
lean_dec_ref(v_c_117_);
v_r_121_ = lean_box(v_res_120_);
return v_r_121_;
}
}
static lean_object* _init_l_Std_Notify_new___closed__0(void){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = l_Std_Queue_empty___redArg();
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Std_Notify_new(){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_124_ = lean_obj_once(&l_Std_Notify_new___closed__0, &l_Std_Notify_new___closed__0_once, _init_l_Std_Notify_new___closed__0);
v___x_125_ = l_Std_Mutex_new___redArg(v___x_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Std_Notify_new___boxed(lean_object* v_a_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = l_Std_Notify_new();
return v_res_127_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_notify_spec__1___redArg(lean_object* v_mutex_128_, lean_object* v_k_129_){
_start:
{
lean_object* v_ref_131_; lean_object* v_mutex_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; 
v_ref_131_ = lean_ctor_get(v_mutex_128_, 0);
lean_inc(v_ref_131_);
v_mutex_132_ = lean_ctor_get(v_mutex_128_, 1);
lean_inc(v_mutex_132_);
lean_dec_ref(v_mutex_128_);
v___x_133_ = lean_io_basemutex_lock(v_mutex_132_);
v___x_134_ = lean_apply_2(v_k_129_, v_ref_131_, lean_box(0));
v___x_135_ = lean_io_basemutex_unlock(v_mutex_132_);
lean_dec(v_mutex_132_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_notify_spec__1___redArg___boxed(lean_object* v_mutex_136_, lean_object* v_k_137_, lean_object* v___y_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l_Std_Mutex_atomically___at___00Std_Notify_notify_spec__1___redArg(v_mutex_136_, v_k_137_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_notify_spec__1(lean_object* v_00_u03b1_140_, lean_object* v_00_u03b2_141_, lean_object* v_mutex_142_, lean_object* v_k_143_){
_start:
{
lean_object* v___x_145_; 
v___x_145_ = l_Std_Mutex_atomically___at___00Std_Notify_notify_spec__1___redArg(v_mutex_142_, v_k_143_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_notify_spec__1___boxed(lean_object* v_00_u03b1_146_, lean_object* v_00_u03b2_147_, lean_object* v_mutex_148_, lean_object* v_k_149_, lean_object* v___y_150_){
_start:
{
lean_object* v_res_151_; 
v_res_151_ = l_Std_Mutex_atomically___at___00Std_Notify_notify_spec__1(v_00_u03b1_146_, v_00_u03b2_147_, v_mutex_148_, v_k_149_);
return v_res_151_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notify_spec__0___redArg(lean_object* v_a_152_){
_start:
{
lean_object* v___x_154_; 
lean_inc_ref(v_a_152_);
v___x_154_ = l_Std_Queue_dequeue_x3f___redArg(v_a_152_);
if (lean_obj_tag(v___x_154_) == 1)
{
lean_object* v_val_155_; lean_object* v_fst_156_; lean_object* v_snd_157_; lean_object* v___x_158_; uint8_t v___x_159_; 
lean_dec_ref(v_a_152_);
v_val_155_ = lean_ctor_get(v___x_154_, 0);
lean_inc(v_val_155_);
lean_dec_ref_known(v___x_154_, 1);
v_fst_156_ = lean_ctor_get(v_val_155_, 0);
lean_inc(v_fst_156_);
v_snd_157_ = lean_ctor_get(v_val_155_, 1);
lean_inc(v_snd_157_);
lean_dec(v_val_155_);
v___x_158_ = lean_box(0);
v___x_159_ = l___private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve___redArg(v_fst_156_, v___x_158_);
lean_dec(v_fst_156_);
v_a_152_ = v_snd_157_;
goto _start;
}
else
{
lean_dec(v___x_154_);
return v_a_152_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notify_spec__0___redArg___boxed(lean_object* v_a_161_, lean_object* v___y_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notify_spec__0___redArg(v_a_161_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* l_Std_Notify_notify___lam__0(lean_object* v___y_164_){
_start:
{
lean_object* v___x_166_; lean_object* v_st_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_166_ = lean_st_ref_get(v___y_164_);
v_st_167_ = lean_obj_once(&l_Std_Notify_new___closed__0, &l_Std_Notify_new___closed__0_once, _init_l_Std_Notify_new___closed__0);
v___x_168_ = l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notify_spec__0___redArg(v___x_166_);
lean_dec_ref(v___x_168_);
v___x_169_ = lean_box(0);
v___x_170_ = lean_st_ref_swap(v___y_164_, v_st_167_);
lean_dec(v___x_170_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l_Std_Notify_notify___lam__0___boxed(lean_object* v___y_171_, lean_object* v___y_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = l_Std_Notify_notify___lam__0(v___y_171_);
lean_dec(v___y_171_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l_Std_Notify_notify(lean_object* v_x_175_){
_start:
{
lean_object* v___f_177_; lean_object* v___x_178_; 
v___f_177_ = ((lean_object*)(l_Std_Notify_notify___closed__0));
v___x_178_ = l_Std_Mutex_atomically___at___00Std_Notify_notify_spec__1___redArg(v_x_175_, v___f_177_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_Std_Notify_notify___boxed(lean_object* v_x_179_, lean_object* v_a_180_){
_start:
{
lean_object* v_res_181_; 
v_res_181_ = l_Std_Notify_notify(v_x_179_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notify_spec__0(lean_object* v_inst_182_, lean_object* v_a_183_, lean_object* v___y_184_){
_start:
{
lean_object* v___x_186_; 
v___x_186_ = l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notify_spec__0___redArg(v_a_183_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notify_spec__0___boxed(lean_object* v_inst_187_, lean_object* v_a_188_, lean_object* v___y_189_, lean_object* v___y_190_){
_start:
{
lean_object* v_res_191_; 
v_res_191_ = l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notify_spec__0(v_inst_187_, v_a_188_, v___y_189_);
lean_dec(v___y_189_);
return v_res_191_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notifyOne_spec__0___redArg(lean_object* v___y_198_){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_200_ = lean_box(0);
v___x_201_ = lean_st_ref_get(v___y_198_);
v___x_202_ = l_Std_Queue_dequeue_x3f___redArg(v___x_201_);
if (lean_obj_tag(v___x_202_) == 1)
{
lean_object* v_val_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_223_; 
v_val_203_ = lean_ctor_get(v___x_202_, 0);
v_isSharedCheck_223_ = !lean_is_exclusive(v___x_202_);
if (v_isSharedCheck_223_ == 0)
{
v___x_205_ = v___x_202_;
v_isShared_206_ = v_isSharedCheck_223_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_val_203_);
lean_dec(v___x_202_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_223_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v_fst_207_; lean_object* v_snd_208_; lean_object* v___x_210_; uint8_t v_isShared_211_; uint8_t v_isSharedCheck_222_; 
v_fst_207_ = lean_ctor_get(v_val_203_, 0);
v_snd_208_ = lean_ctor_get(v_val_203_, 1);
v_isSharedCheck_222_ = !lean_is_exclusive(v_val_203_);
if (v_isSharedCheck_222_ == 0)
{
v___x_210_ = v_val_203_;
v_isShared_211_ = v_isSharedCheck_222_;
goto v_resetjp_209_;
}
else
{
lean_inc(v_snd_208_);
lean_inc(v_fst_207_);
lean_dec(v_val_203_);
v___x_210_ = lean_box(0);
v_isShared_211_ = v_isSharedCheck_222_;
goto v_resetjp_209_;
}
v_resetjp_209_:
{
lean_object* v___x_212_; uint8_t v___x_213_; 
v___x_212_ = lean_st_ref_swap(v___y_198_, v_snd_208_);
lean_dec(v___x_212_);
v___x_213_ = l___private_Std_Sync_Notify_0__Std_Notify_Consumer_resolve___redArg(v_fst_207_, v___x_200_);
lean_dec(v_fst_207_);
if (v___x_213_ == 0)
{
lean_del_object(v___x_210_);
lean_del_object(v___x_205_);
goto _start;
}
else
{
lean_object* v___x_215_; lean_object* v___x_217_; 
v___x_215_ = lean_box(v___x_213_);
if (v_isShared_206_ == 0)
{
lean_ctor_set(v___x_205_, 0, v___x_215_);
v___x_217_ = v___x_205_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v___x_215_);
v___x_217_ = v_reuseFailAlloc_221_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
lean_object* v___x_219_; 
if (v_isShared_211_ == 0)
{
lean_ctor_set(v___x_210_, 1, v___x_200_);
lean_ctor_set(v___x_210_, 0, v___x_217_);
v___x_219_ = v___x_210_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v___x_217_);
lean_ctor_set(v_reuseFailAlloc_220_, 1, v___x_200_);
v___x_219_ = v_reuseFailAlloc_220_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
return v___x_219_;
}
}
}
}
}
}
else
{
lean_object* v___x_224_; 
lean_dec(v___x_202_);
v___x_224_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notifyOne_spec__0___redArg___closed__1));
return v___x_224_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notifyOne_spec__0___redArg___boxed(lean_object* v___y_225_, lean_object* v___y_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notifyOne_spec__0___redArg(v___y_225_);
lean_dec(v___y_225_);
return v_res_227_;
}
}
LEAN_EXPORT uint8_t l_Std_Notify_notifyOne___lam__0(lean_object* v___y_228_){
_start:
{
lean_object* v___x_230_; lean_object* v_fst_231_; 
v___x_230_ = l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notifyOne_spec__0___redArg(v___y_228_);
v_fst_231_ = lean_ctor_get(v___x_230_, 0);
lean_inc(v_fst_231_);
lean_dec_ref(v___x_230_);
if (lean_obj_tag(v_fst_231_) == 0)
{
uint8_t v___x_232_; 
v___x_232_ = 0;
return v___x_232_;
}
else
{
lean_object* v_val_233_; uint8_t v___x_234_; 
v_val_233_ = lean_ctor_get(v_fst_231_, 0);
lean_inc(v_val_233_);
lean_dec_ref_known(v_fst_231_, 1);
v___x_234_ = lean_unbox(v_val_233_);
lean_dec(v_val_233_);
return v___x_234_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Notify_notifyOne___lam__0___boxed(lean_object* v___y_235_, lean_object* v___y_236_){
_start:
{
uint8_t v_res_237_; lean_object* v_r_238_; 
v_res_237_ = l_Std_Notify_notifyOne___lam__0(v___y_235_);
lean_dec(v___y_235_);
v_r_238_ = lean_box(v_res_237_);
return v_r_238_;
}
}
LEAN_EXPORT uint8_t l_Std_Notify_notifyOne(lean_object* v_x_240_){
_start:
{
lean_object* v___f_242_; lean_object* v___x_243_; uint8_t v___x_244_; 
v___f_242_ = ((lean_object*)(l_Std_Notify_notifyOne___closed__0));
v___x_243_ = l_Std_Mutex_atomically___at___00Std_Notify_notify_spec__1___redArg(v_x_240_, v___f_242_);
v___x_244_ = lean_unbox(v___x_243_);
lean_dec(v___x_243_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Std_Notify_notifyOne___boxed(lean_object* v_x_245_, lean_object* v_a_246_){
_start:
{
uint8_t v_res_247_; lean_object* v_r_248_; 
v_res_247_ = l_Std_Notify_notifyOne(v_x_245_);
v_r_248_ = lean_box(v_res_247_);
return v_r_248_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notifyOne_spec__0(lean_object* v_inst_249_, lean_object* v_a_250_, lean_object* v___y_251_){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notifyOne_spec__0___redArg(v___y_251_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notifyOne_spec__0___boxed(lean_object* v_inst_254_, lean_object* v_a_255_, lean_object* v___y_256_, lean_object* v___y_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l___private_Init_While_0__repeatM_erased___at___00Std_Notify_notifyOne_spec__0(v_inst_254_, v_a_255_, v___y_256_);
lean_dec(v___y_256_);
lean_dec_ref(v_a_255_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_wait_spec__0___redArg(lean_object* v_mutex_259_, lean_object* v_k_260_){
_start:
{
lean_object* v_ref_262_; lean_object* v_mutex_263_; lean_object* v___x_264_; lean_object* v_r_265_; 
v_ref_262_ = lean_ctor_get(v_mutex_259_, 0);
lean_inc(v_ref_262_);
v_mutex_263_ = lean_ctor_get(v_mutex_259_, 1);
lean_inc(v_mutex_263_);
lean_dec_ref(v_mutex_259_);
v___x_264_ = lean_io_basemutex_lock(v_mutex_263_);
v_r_265_ = lean_apply_2(v_k_260_, v_ref_262_, lean_box(0));
if (lean_obj_tag(v_r_265_) == 0)
{
lean_object* v_a_266_; lean_object* v___x_268_; uint8_t v_isShared_269_; uint8_t v_isSharedCheck_274_; 
v_a_266_ = lean_ctor_get(v_r_265_, 0);
v_isSharedCheck_274_ = !lean_is_exclusive(v_r_265_);
if (v_isSharedCheck_274_ == 0)
{
v___x_268_ = v_r_265_;
v_isShared_269_ = v_isSharedCheck_274_;
goto v_resetjp_267_;
}
else
{
lean_inc(v_a_266_);
lean_dec(v_r_265_);
v___x_268_ = lean_box(0);
v_isShared_269_ = v_isSharedCheck_274_;
goto v_resetjp_267_;
}
v_resetjp_267_:
{
lean_object* v___x_270_; lean_object* v___x_272_; 
v___x_270_ = lean_io_basemutex_unlock(v_mutex_263_);
lean_dec(v_mutex_263_);
if (v_isShared_269_ == 0)
{
v___x_272_ = v___x_268_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v_a_266_);
v___x_272_ = v_reuseFailAlloc_273_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
return v___x_272_;
}
}
}
else
{
lean_object* v_a_275_; lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_283_; 
v_a_275_ = lean_ctor_get(v_r_265_, 0);
v_isSharedCheck_283_ = !lean_is_exclusive(v_r_265_);
if (v_isSharedCheck_283_ == 0)
{
v___x_277_ = v_r_265_;
v_isShared_278_ = v_isSharedCheck_283_;
goto v_resetjp_276_;
}
else
{
lean_inc(v_a_275_);
lean_dec(v_r_265_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_283_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
lean_object* v___x_279_; lean_object* v___x_281_; 
v___x_279_ = lean_io_basemutex_unlock(v_mutex_263_);
lean_dec(v_mutex_263_);
if (v_isShared_278_ == 0)
{
v___x_281_ = v___x_277_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v_a_275_);
v___x_281_ = v_reuseFailAlloc_282_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
return v___x_281_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_wait_spec__0___redArg___boxed(lean_object* v_mutex_284_, lean_object* v_k_285_, lean_object* v___y_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_Std_Mutex_atomically___at___00Std_Notify_wait_spec__0___redArg(v_mutex_284_, v_k_285_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_wait_spec__0(lean_object* v_00_u03b1_288_, lean_object* v_00_u03b2_289_, lean_object* v_mutex_290_, lean_object* v_k_291_){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = l_Std_Mutex_atomically___at___00Std_Notify_wait_spec__0___redArg(v_mutex_290_, v_k_291_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_wait_spec__0___boxed(lean_object* v_00_u03b1_294_, lean_object* v_00_u03b2_295_, lean_object* v_mutex_296_, lean_object* v_k_297_, lean_object* v___y_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l_Std_Mutex_atomically___at___00Std_Notify_wait_spec__0(v_00_u03b1_294_, v_00_u03b2_295_, v_mutex_296_, v_k_297_);
return v_res_299_;
}
}
static lean_object* _init_l_Std_Notify_wait___lam__0___closed__1(void){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_301_ = ((lean_object*)(l_Std_Notify_wait___lam__0___closed__0));
v___x_302_ = lean_mk_io_user_error(v___x_301_);
return v___x_302_;
}
}
static lean_object* _init_l_Std_Notify_wait___lam__0___closed__2(void){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_303_ = lean_obj_once(&l_Std_Notify_wait___lam__0___closed__1, &l_Std_Notify_wait___lam__0___closed__1_once, _init_l_Std_Notify_wait___lam__0___closed__1);
v___x_304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_304_, 0, v___x_303_);
return v___x_304_;
}
}
static lean_object* _init_l_Std_Notify_wait___lam__0___closed__3(void){
_start:
{
lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_305_ = lean_obj_once(&l_Std_Notify_wait___lam__0___closed__2, &l_Std_Notify_wait___lam__0___closed__2_once, _init_l_Std_Notify_wait___lam__0___closed__2);
v___x_306_ = lean_task_pure(v___x_305_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l_Std_Notify_wait___lam__0(lean_object* v_a_307_){
_start:
{
if (lean_obj_tag(v_a_307_) == 0)
{
lean_object* v___x_309_; 
v___x_309_ = lean_obj_once(&l_Std_Notify_wait___lam__0___closed__3, &l_Std_Notify_wait___lam__0___closed__3_once, _init_l_Std_Notify_wait___lam__0___closed__3);
return v___x_309_;
}
else
{
lean_object* v_val_310_; lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_318_; 
v_val_310_ = lean_ctor_get(v_a_307_, 0);
v_isSharedCheck_318_ = !lean_is_exclusive(v_a_307_);
if (v_isSharedCheck_318_ == 0)
{
v___x_312_ = v_a_307_;
v_isShared_313_ = v_isSharedCheck_318_;
goto v_resetjp_311_;
}
else
{
lean_inc(v_val_310_);
lean_dec(v_a_307_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_318_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
lean_object* v___x_315_; 
if (v_isShared_313_ == 0)
{
v___x_315_ = v___x_312_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v_val_310_);
v___x_315_ = v_reuseFailAlloc_317_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
lean_object* v___x_316_; 
v___x_316_ = lean_task_pure(v___x_315_);
return v___x_316_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Notify_wait___lam__0___boxed(lean_object* v_a_319_, lean_object* v___y_320_){
_start:
{
lean_object* v_res_321_; 
v_res_321_ = l_Std_Notify_wait___lam__0(v_a_319_);
return v_res_321_;
}
}
LEAN_EXPORT lean_object* l_Std_Notify_wait___lam__1(lean_object* v___f_322_, lean_object* v___y_323_){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; uint8_t v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_325_ = lean_io_promise_new();
v___x_326_ = lean_st_ref_take(v___y_323_);
lean_inc(v___x_325_);
v___x_327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_327_, 0, v___x_325_);
v___x_328_ = l_Std_Queue_enqueue___redArg(v___x_327_, v___x_326_);
v___x_329_ = lean_st_ref_put(v___y_323_, v___x_328_);
v___x_330_ = lean_io_promise_result_opt(v___x_325_);
lean_dec(v___x_325_);
v___x_331_ = lean_unsigned_to_nat(0u);
v___x_332_ = 0;
v___x_333_ = lean_io_bind_task(v___x_330_, v___f_322_, v___x_331_, v___x_332_);
v___x_334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l_Std_Notify_wait___lam__1___boxed(lean_object* v___f_335_, lean_object* v___y_336_, lean_object* v___y_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l_Std_Notify_wait___lam__1(v___f_335_, v___y_336_);
lean_dec(v___y_336_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* l_Std_Notify_wait(lean_object* v_x_342_){
_start:
{
lean_object* v___f_344_; lean_object* v___x_345_; 
v___f_344_ = ((lean_object*)(l_Std_Notify_wait___closed__1));
v___x_345_ = l_Std_Mutex_atomically___at___00Std_Notify_wait_spec__0___redArg(v_x_342_, v___f_344_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_Std_Notify_wait___boxed(lean_object* v_x_346_, lean_object* v_a_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l_Std_Notify_wait(v_x_346_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___lam__0(lean_object* v___y_349_){
_start:
{
if (lean_obj_tag(v___y_349_) == 0)
{
lean_object* v_a_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_357_; 
v_a_350_ = lean_ctor_get(v___y_349_, 0);
v_isSharedCheck_357_ = !lean_is_exclusive(v___y_349_);
if (v_isSharedCheck_357_ == 0)
{
v___x_352_ = v___y_349_;
v_isShared_353_ = v_isSharedCheck_357_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_a_350_);
lean_dec(v___y_349_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_357_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v___x_355_; 
if (v_isShared_353_ == 0)
{
v___x_355_ = v___x_352_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v_a_350_);
v___x_355_ = v_reuseFailAlloc_356_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
return v___x_355_;
}
}
}
else
{
lean_object* v_a_358_; lean_object* v___x_360_; uint8_t v_isShared_361_; uint8_t v_isSharedCheck_366_; 
v_a_358_ = lean_ctor_get(v___y_349_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v___y_349_);
if (v_isSharedCheck_366_ == 0)
{
v___x_360_ = v___y_349_;
v_isShared_361_ = v_isSharedCheck_366_;
goto v_resetjp_359_;
}
else
{
lean_inc(v_a_358_);
lean_dec(v___y_349_);
v___x_360_ = lean_box(0);
v_isShared_361_ = v_isSharedCheck_366_;
goto v_resetjp_359_;
}
v_resetjp_359_:
{
lean_object* v_fst_362_; lean_object* v___x_364_; 
v_fst_362_ = lean_ctor_get(v_a_358_, 0);
lean_inc(v_fst_362_);
lean_dec(v_a_358_);
if (v_isShared_361_ == 0)
{
lean_ctor_set(v___x_360_, 0, v_fst_362_);
v___x_364_ = v___x_360_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_fst_362_);
v___x_364_ = v_reuseFailAlloc_365_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
return v___x_364_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___lam__1(lean_object* v_mutex_367_, lean_object* v_x_368_){
_start:
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_370_ = lean_io_basemutex_unlock(v_mutex_367_);
v___x_371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_371_, 0, v___x_370_);
v___x_372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_372_, 0, v___x_371_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___lam__1___boxed(lean_object* v_mutex_373_, lean_object* v_x_374_, lean_object* v___y_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___lam__1(v_mutex_373_, v_x_374_);
lean_dec(v_x_374_);
lean_dec(v_mutex_373_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___lam__2(lean_object* v_k_377_, lean_object* v_ref_378_, lean_object* v_x_379_){
_start:
{
if (lean_obj_tag(v_x_379_) == 0)
{
lean_object* v_a_381_; lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_389_; 
lean_dec(v_ref_378_);
lean_dec_ref(v_k_377_);
v_a_381_ = lean_ctor_get(v_x_379_, 0);
v_isSharedCheck_389_ = !lean_is_exclusive(v_x_379_);
if (v_isSharedCheck_389_ == 0)
{
v___x_383_ = v_x_379_;
v_isShared_384_ = v_isSharedCheck_389_;
goto v_resetjp_382_;
}
else
{
lean_inc(v_a_381_);
lean_dec(v_x_379_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_389_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
lean_object* v___x_386_; 
if (v_isShared_384_ == 0)
{
v___x_386_ = v___x_383_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v_a_381_);
v___x_386_ = v_reuseFailAlloc_388_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
lean_object* v___x_387_; 
v___x_387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_387_, 0, v___x_386_);
return v___x_387_;
}
}
}
else
{
lean_object* v___x_390_; 
lean_dec_ref_known(v_x_379_, 1);
v___x_390_ = lean_apply_2(v_k_377_, v_ref_378_, lean_box(0));
return v___x_390_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___lam__2___boxed(lean_object* v_k_391_, lean_object* v_ref_392_, lean_object* v_x_393_, lean_object* v___y_394_){
_start:
{
lean_object* v_res_395_; 
v_res_395_ = l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___lam__2(v_k_391_, v_ref_392_, v_x_393_);
return v_res_395_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___lam__3(lean_object* v_mutex_396_, lean_object* v___f_397_){
_start:
{
lean_object* v___x_399_; uint8_t v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_399_ = lean_unsigned_to_nat(0u);
v___x_400_ = 0;
v___x_401_ = lean_io_basemutex_lock(v_mutex_396_);
v___x_402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_402_, 0, v___x_401_);
v___x_403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_403_, 0, v___x_402_);
v___x_404_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_399_, v___x_400_, v___x_403_, v___f_397_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___lam__3___boxed(lean_object* v_mutex_405_, lean_object* v___f_406_, lean_object* v___y_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___lam__3(v_mutex_405_, v___f_406_);
lean_dec(v_mutex_405_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg(lean_object* v_mutex_410_, lean_object* v_k_411_){
_start:
{
lean_object* v_ref_413_; lean_object* v_mutex_414_; lean_object* v___f_415_; lean_object* v___f_416_; lean_object* v___f_417_; lean_object* v___f_418_; lean_object* v___x_419_; uint8_t v___x_420_; lean_object* v___x_421_; lean_object* v___y_423_; 
v_ref_413_ = lean_ctor_get(v_mutex_410_, 0);
lean_inc(v_ref_413_);
v_mutex_414_ = lean_ctor_get(v_mutex_410_, 1);
lean_inc_n(v_mutex_414_, 2);
lean_dec_ref(v_mutex_410_);
v___f_415_ = ((lean_object*)(l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___closed__0));
v___f_416_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_416_, 0, v_mutex_414_);
v___f_417_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_417_, 0, v_k_411_);
lean_closure_set(v___f_417_, 1, v_ref_413_);
v___f_418_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_418_, 0, v_mutex_414_);
lean_closure_set(v___f_418_, 1, v___f_417_);
v___x_419_ = lean_unsigned_to_nat(0u);
v___x_420_ = 0;
v___x_421_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v___f_418_, v___f_416_, v___x_419_, v___x_420_);
if (lean_obj_tag(v___x_421_) == 0)
{
lean_object* v_a_425_; 
v_a_425_ = lean_ctor_get(v___x_421_, 0);
lean_inc(v_a_425_);
lean_dec_ref_known(v___x_421_, 1);
if (lean_obj_tag(v_a_425_) == 0)
{
lean_object* v_a_426_; lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_433_; 
v_a_426_ = lean_ctor_get(v_a_425_, 0);
v_isSharedCheck_433_ = !lean_is_exclusive(v_a_425_);
if (v_isSharedCheck_433_ == 0)
{
v___x_428_ = v_a_425_;
v_isShared_429_ = v_isSharedCheck_433_;
goto v_resetjp_427_;
}
else
{
lean_inc(v_a_426_);
lean_dec(v_a_425_);
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
v___y_423_ = v___x_431_;
goto v___jp_422_;
}
}
}
else
{
lean_object* v_a_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_442_; 
v_a_434_ = lean_ctor_get(v_a_425_, 0);
v_isSharedCheck_442_ = !lean_is_exclusive(v_a_425_);
if (v_isSharedCheck_442_ == 0)
{
v___x_436_ = v_a_425_;
v_isShared_437_ = v_isSharedCheck_442_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_a_434_);
lean_dec(v_a_425_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_442_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v_fst_438_; lean_object* v___x_440_; 
v_fst_438_ = lean_ctor_get(v_a_434_, 0);
lean_inc(v_fst_438_);
lean_dec(v_a_434_);
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 0, v_fst_438_);
v___x_440_ = v___x_436_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v_fst_438_);
v___x_440_ = v_reuseFailAlloc_441_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
v___y_423_ = v___x_440_;
goto v___jp_422_;
}
}
}
}
else
{
lean_object* v_a_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_451_; 
v_a_443_ = lean_ctor_get(v___x_421_, 0);
v_isSharedCheck_451_ = !lean_is_exclusive(v___x_421_);
if (v_isSharedCheck_451_ == 0)
{
v___x_445_ = v___x_421_;
v_isShared_446_ = v_isSharedCheck_451_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_a_443_);
lean_dec(v___x_421_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_451_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___x_447_; lean_object* v___x_449_; 
v___x_447_ = lean_task_map(v___f_415_, v_a_443_, v___x_419_, v___x_420_);
if (v_isShared_446_ == 0)
{
lean_ctor_set(v___x_445_, 0, v___x_447_);
v___x_449_ = v___x_445_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v___x_447_);
v___x_449_ = v_reuseFailAlloc_450_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
return v___x_449_;
}
}
}
v___jp_422_:
{
lean_object* v___x_424_; 
v___x_424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_424_, 0, v___y_423_);
return v___x_424_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg___boxed(lean_object* v_mutex_452_, lean_object* v_k_453_, lean_object* v___y_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg(v_mutex_452_, v_k_453_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0(lean_object* v_00_u03b1_456_, lean_object* v_00_u03b2_457_, lean_object* v_mutex_458_, lean_object* v_k_459_){
_start:
{
lean_object* v___x_461_; 
v___x_461_ = l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg(v_mutex_458_, v_k_459_);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___boxed(lean_object* v_00_u03b1_462_, lean_object* v_00_u03b2_463_, lean_object* v_mutex_464_, lean_object* v_k_465_, lean_object* v___y_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0(v_00_u03b1_462_, v_00_u03b2_463_, v_mutex_464_, v_k_465_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_Std_Notify_selector___lam__0(lean_object* v___y_472_, lean_object* v_x_473_){
_start:
{
if (lean_obj_tag(v_x_473_) == 0)
{
lean_object* v_a_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_483_; 
v_a_475_ = lean_ctor_get(v_x_473_, 0);
v_isSharedCheck_483_ = !lean_is_exclusive(v_x_473_);
if (v_isSharedCheck_483_ == 0)
{
v___x_477_ = v_x_473_;
v_isShared_478_ = v_isSharedCheck_483_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_a_475_);
lean_dec(v_x_473_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_483_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_480_; 
if (v_isShared_478_ == 0)
{
v___x_480_ = v___x_477_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v_a_475_);
v___x_480_ = v_reuseFailAlloc_482_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
lean_object* v___x_481_; 
v___x_481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_481_, 0, v___x_480_);
return v___x_481_;
}
}
}
else
{
lean_object* v_a_484_; lean_object* v___x_485_; lean_object* v___x_486_; 
v_a_484_ = lean_ctor_get(v_x_473_, 0);
lean_inc(v_a_484_);
lean_dec_ref_known(v_x_473_, 1);
v___x_485_ = lean_st_ref_swap(v___y_472_, v_a_484_);
lean_dec(v___x_485_);
v___x_486_ = ((lean_object*)(l_Std_Notify_selector___lam__0___closed__1));
return v___x_486_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Notify_selector___lam__0___boxed(lean_object* v___y_487_, lean_object* v_x_488_, lean_object* v___y_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l_Std_Notify_selector___lam__0(v___y_487_, v_x_488_);
lean_dec(v___y_487_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg___lam__1(lean_object* v_x_491_){
_start:
{
uint8_t v___y_494_; 
if (lean_obj_tag(v_x_491_) == 0)
{
lean_object* v___x_498_; 
v___x_498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_498_, 0, v_x_491_);
return v___x_498_;
}
else
{
lean_object* v_a_499_; uint8_t v___x_500_; 
v_a_499_ = lean_ctor_get(v_x_491_, 0);
lean_inc(v_a_499_);
lean_dec_ref_known(v_x_491_, 1);
v___x_500_ = lean_unbox(v_a_499_);
lean_dec(v_a_499_);
if (v___x_500_ == 0)
{
uint8_t v___x_501_; 
v___x_501_ = 1;
v___y_494_ = v___x_501_;
goto v___jp_493_;
}
else
{
uint8_t v___x_502_; 
v___x_502_ = 0;
v___y_494_ = v___x_502_;
goto v___jp_493_;
}
}
v___jp_493_:
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_495_ = lean_box(v___y_494_);
v___x_496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_496_, 0, v___x_495_);
v___x_497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_497_, 0, v___x_496_);
return v___x_497_;
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg___lam__1___boxed(lean_object* v_x_503_, lean_object* v___y_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg___lam__1(v_x_503_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg___lam__0___boxed(lean_object* v_tail_506_, lean_object* v_x_507_, lean_object* v_head_508_, lean_object* v_x_509_, lean_object* v___y_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg___lam__0(v_tail_506_, v_x_507_, v_head_508_, v_x_509_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg(lean_object* v_x_518_, lean_object* v_x_519_){
_start:
{
if (lean_obj_tag(v_x_518_) == 0)
{
lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_521_, 0, v_x_519_);
v___x_522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_522_, 0, v___x_521_);
return v___x_522_;
}
else
{
lean_object* v_head_523_; lean_object* v_tail_524_; lean_object* v___f_525_; lean_object* v___x_526_; uint8_t v___x_527_; 
v_head_523_ = lean_ctor_get(v_x_518_, 0);
lean_inc_n(v_head_523_, 2);
v_tail_524_ = lean_ctor_get(v_x_518_, 1);
lean_inc(v_tail_524_);
lean_dec_ref_known(v_x_518_, 2);
v___f_525_ = lean_alloc_closure((void*)(l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_525_, 0, v_tail_524_);
lean_closure_set(v___f_525_, 1, v_x_519_);
lean_closure_set(v___f_525_, 2, v_head_523_);
v___x_526_ = lean_unsigned_to_nat(0u);
v___x_527_ = 0;
if (lean_obj_tag(v_head_523_) == 0)
{
lean_object* v___x_528_; lean_object* v___x_529_; 
lean_dec_ref_known(v_head_523_, 1);
v___x_528_ = ((lean_object*)(l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg___closed__1));
v___x_529_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_526_, v___x_527_, v___x_528_, v___f_525_);
return v___x_529_;
}
else
{
lean_object* v_finished_530_; lean_object* v___x_532_; uint8_t v_isShared_533_; uint8_t v_isSharedCheck_543_; 
v_finished_530_ = lean_ctor_get(v_head_523_, 0);
v_isSharedCheck_543_ = !lean_is_exclusive(v_head_523_);
if (v_isSharedCheck_543_ == 0)
{
v___x_532_ = v_head_523_;
v_isShared_533_ = v_isSharedCheck_543_;
goto v_resetjp_531_;
}
else
{
lean_inc(v_finished_530_);
lean_dec(v_head_523_);
v___x_532_ = lean_box(0);
v_isShared_533_ = v_isSharedCheck_543_;
goto v_resetjp_531_;
}
v_resetjp_531_:
{
lean_object* v_finished_534_; lean_object* v___f_535_; lean_object* v___x_536_; lean_object* v___x_538_; 
v_finished_534_ = lean_ctor_get(v_finished_530_, 0);
lean_inc(v_finished_534_);
lean_dec_ref(v_finished_530_);
v___f_535_ = ((lean_object*)(l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg___closed__2));
v___x_536_ = lean_st_ref_get(v_finished_534_);
lean_dec(v_finished_534_);
if (v_isShared_533_ == 0)
{
lean_ctor_set(v___x_532_, 0, v___x_536_);
v___x_538_ = v___x_532_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v___x_536_);
v___x_538_ = v_reuseFailAlloc_542_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_539_, 0, v___x_538_);
v___x_540_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_526_, v___x_527_, v___x_539_, v___f_535_);
v___x_541_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_526_, v___x_527_, v___x_540_, v___f_525_);
return v___x_541_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg___lam__0(lean_object* v_tail_544_, lean_object* v_x_545_, lean_object* v_head_546_, lean_object* v_x_547_){
_start:
{
if (lean_obj_tag(v_x_547_) == 0)
{
lean_object* v_a_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_557_; 
lean_dec_ref(v_head_546_);
lean_dec(v_x_545_);
lean_dec(v_tail_544_);
v_a_549_ = lean_ctor_get(v_x_547_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v_x_547_);
if (v_isSharedCheck_557_ == 0)
{
v___x_551_ = v_x_547_;
v_isShared_552_ = v_isSharedCheck_557_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_a_549_);
lean_dec(v_x_547_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_557_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_554_; 
if (v_isShared_552_ == 0)
{
v___x_554_ = v___x_551_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v_a_549_);
v___x_554_ = v_reuseFailAlloc_556_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
lean_object* v___x_555_; 
v___x_555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_555_, 0, v___x_554_);
return v___x_555_;
}
}
}
else
{
lean_object* v_a_558_; uint8_t v___x_559_; 
v_a_558_ = lean_ctor_get(v_x_547_, 0);
lean_inc(v_a_558_);
lean_dec_ref_known(v_x_547_, 1);
v___x_559_ = lean_unbox(v_a_558_);
lean_dec(v_a_558_);
if (v___x_559_ == 0)
{
lean_object* v___x_560_; 
lean_dec_ref(v_head_546_);
v___x_560_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg(v_tail_544_, v_x_545_);
return v___x_560_;
}
else
{
lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_561_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_561_, 0, v_head_546_);
lean_ctor_set(v___x_561_, 1, v_x_545_);
v___x_562_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg(v_tail_544_, v___x_561_);
return v___x_562_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg___boxed(lean_object* v_x_563_, lean_object* v_x_564_, lean_object* v___y_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg(v_x_563_, v_x_564_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1___lam__0(lean_object* v_x_567_){
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
lean_object* v_a_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_579_; 
v_a_570_ = lean_ctor_get(v_x_567_, 0);
v_isSharedCheck_579_ = !lean_is_exclusive(v_x_567_);
if (v_isSharedCheck_579_ == 0)
{
v___x_572_ = v_x_567_;
v_isShared_573_ = v_isSharedCheck_579_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_a_570_);
lean_dec(v_x_567_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_579_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v___x_574_; lean_object* v___x_576_; 
v___x_574_ = l_List_reverse___redArg(v_a_570_);
if (v_isShared_573_ == 0)
{
lean_ctor_set(v___x_572_, 0, v___x_574_);
v___x_576_ = v___x_572_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v___x_574_);
v___x_576_ = v_reuseFailAlloc_578_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
lean_object* v___x_577_; 
v___x_577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_577_, 0, v___x_576_);
return v___x_577_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1___lam__0___boxed(lean_object* v_x_580_, lean_object* v___y_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1___lam__0(v_x_580_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1___lam__2(lean_object* v_a_583_, lean_object* v___x_584_, lean_object* v_x_585_){
_start:
{
if (lean_obj_tag(v_x_585_) == 0)
{
lean_object* v_a_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_595_; 
lean_dec(v___x_584_);
lean_dec(v_a_583_);
v_a_587_ = lean_ctor_get(v_x_585_, 0);
v_isSharedCheck_595_ = !lean_is_exclusive(v_x_585_);
if (v_isSharedCheck_595_ == 0)
{
v___x_589_ = v_x_585_;
v_isShared_590_ = v_isSharedCheck_595_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_a_587_);
lean_dec(v_x_585_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_595_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v___x_592_; 
if (v_isShared_590_ == 0)
{
v___x_592_ = v___x_589_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_594_; 
v_reuseFailAlloc_594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_594_, 0, v_a_587_);
v___x_592_ = v_reuseFailAlloc_594_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
lean_object* v___x_593_; 
v___x_593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_593_, 0, v___x_592_);
return v___x_593_;
}
}
}
else
{
lean_object* v_a_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_612_; 
v_a_596_ = lean_ctor_get(v_x_585_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v_x_585_);
if (v_isSharedCheck_612_ == 0)
{
v___x_598_ = v_x_585_;
v_isShared_599_ = v_isSharedCheck_612_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_a_596_);
lean_dec(v_x_585_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_612_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
uint8_t v___x_600_; 
v___x_600_ = l_List_isEmpty___redArg(v_a_583_);
if (v___x_600_ == 0)
{
lean_object* v___x_601_; lean_object* v___x_603_; 
lean_dec(v___x_584_);
v___x_601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_601_, 0, v_a_596_);
lean_ctor_set(v___x_601_, 1, v_a_583_);
if (v_isShared_599_ == 0)
{
lean_ctor_set(v___x_598_, 0, v___x_601_);
v___x_603_ = v___x_598_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v___x_601_);
v___x_603_ = v_reuseFailAlloc_605_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
lean_object* v___x_604_; 
v___x_604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_604_, 0, v___x_603_);
return v___x_604_;
}
}
else
{
lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_609_; 
lean_dec(v_a_583_);
v___x_606_ = l_List_reverse___redArg(v_a_596_);
v___x_607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_607_, 0, v___x_584_);
lean_ctor_set(v___x_607_, 1, v___x_606_);
if (v_isShared_599_ == 0)
{
lean_ctor_set(v___x_598_, 0, v___x_607_);
v___x_609_ = v___x_598_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v___x_607_);
v___x_609_ = v_reuseFailAlloc_611_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
lean_object* v___x_610_; 
v___x_610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_610_, 0, v___x_609_);
return v___x_610_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1___lam__2___boxed(lean_object* v_a_613_, lean_object* v___x_614_, lean_object* v_x_615_, lean_object* v___y_616_){
_start:
{
lean_object* v_res_617_; 
v_res_617_ = l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1___lam__2(v_a_613_, v___x_614_, v_x_615_);
return v_res_617_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1___lam__1(lean_object* v___x_618_, lean_object* v_eList_619_, lean_object* v___f_620_, lean_object* v_x_621_){
_start:
{
if (lean_obj_tag(v_x_621_) == 0)
{
lean_object* v_a_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_631_; 
lean_dec_ref(v___f_620_);
lean_dec(v_eList_619_);
lean_dec(v___x_618_);
v_a_623_ = lean_ctor_get(v_x_621_, 0);
v_isSharedCheck_631_ = !lean_is_exclusive(v_x_621_);
if (v_isSharedCheck_631_ == 0)
{
v___x_625_ = v_x_621_;
v_isShared_626_ = v_isSharedCheck_631_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_a_623_);
lean_dec(v_x_621_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_631_;
goto v_resetjp_624_;
}
v_resetjp_624_:
{
lean_object* v___x_628_; 
if (v_isShared_626_ == 0)
{
v___x_628_ = v___x_625_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v_a_623_);
v___x_628_ = v_reuseFailAlloc_630_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
lean_object* v___x_629_; 
v___x_629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_629_, 0, v___x_628_);
return v___x_629_;
}
}
}
else
{
lean_object* v_a_632_; lean_object* v___f_633_; lean_object* v___x_634_; uint8_t v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v_a_632_ = lean_ctor_get(v_x_621_, 0);
lean_inc(v_a_632_);
lean_dec_ref_known(v_x_621_, 1);
lean_inc(v___x_618_);
v___f_633_ = lean_alloc_closure((void*)(l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1___lam__2___boxed), 4, 2);
lean_closure_set(v___f_633_, 0, v_a_632_);
lean_closure_set(v___f_633_, 1, v___x_618_);
v___x_634_ = lean_unsigned_to_nat(0u);
v___x_635_ = 0;
v___x_636_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg(v_eList_619_, v___x_618_);
v___x_637_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_634_, v___x_635_, v___x_636_, v___f_620_);
v___x_638_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_634_, v___x_635_, v___x_637_, v___f_633_);
return v___x_638_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1___lam__1___boxed(lean_object* v___x_639_, lean_object* v_eList_640_, lean_object* v___f_641_, lean_object* v_x_642_, lean_object* v___y_643_){
_start:
{
lean_object* v_res_644_; 
v_res_644_ = l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1___lam__1(v___x_639_, v_eList_640_, v___f_641_, v_x_642_);
return v_res_644_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1(lean_object* v_q_646_, lean_object* v___y_647_){
_start:
{
lean_object* v_eList_649_; lean_object* v_dList_650_; lean_object* v___f_651_; lean_object* v___x_652_; lean_object* v___f_653_; lean_object* v___x_654_; uint8_t v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
v_eList_649_ = lean_ctor_get(v_q_646_, 0);
lean_inc(v_eList_649_);
v_dList_650_ = lean_ctor_get(v_q_646_, 1);
lean_inc(v_dList_650_);
lean_dec_ref(v_q_646_);
v___f_651_ = ((lean_object*)(l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1___closed__0));
v___x_652_ = lean_box(0);
v___f_653_ = lean_alloc_closure((void*)(l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1___lam__1___boxed), 5, 3);
lean_closure_set(v___f_653_, 0, v___x_652_);
lean_closure_set(v___f_653_, 1, v_eList_649_);
lean_closure_set(v___f_653_, 2, v___f_651_);
v___x_654_ = lean_unsigned_to_nat(0u);
v___x_655_ = 0;
v___x_656_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg(v_dList_650_, v___x_652_);
v___x_657_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_654_, v___x_655_, v___x_656_, v___f_651_);
v___x_658_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_654_, v___x_655_, v___x_657_, v___f_653_);
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1___boxed(lean_object* v_q_659_, lean_object* v___y_660_, lean_object* v___y_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1(v_q_659_, v___y_660_);
lean_dec(v___y_660_);
return v_res_662_;
}
}
LEAN_EXPORT lean_object* l_Std_Notify_selector___lam__1(lean_object* v___y_663_, lean_object* v___f_664_, lean_object* v_x_665_){
_start:
{
if (lean_obj_tag(v_x_665_) == 0)
{
lean_object* v_a_667_; lean_object* v___x_669_; uint8_t v_isShared_670_; uint8_t v_isSharedCheck_675_; 
lean_dec_ref(v___f_664_);
v_a_667_ = lean_ctor_get(v_x_665_, 0);
v_isSharedCheck_675_ = !lean_is_exclusive(v_x_665_);
if (v_isSharedCheck_675_ == 0)
{
v___x_669_ = v_x_665_;
v_isShared_670_ = v_isSharedCheck_675_;
goto v_resetjp_668_;
}
else
{
lean_inc(v_a_667_);
lean_dec(v_x_665_);
v___x_669_ = lean_box(0);
v_isShared_670_ = v_isSharedCheck_675_;
goto v_resetjp_668_;
}
v_resetjp_668_:
{
lean_object* v___x_672_; 
if (v_isShared_670_ == 0)
{
v___x_672_ = v___x_669_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v_a_667_);
v___x_672_ = v_reuseFailAlloc_674_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
lean_object* v___x_673_; 
v___x_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_673_, 0, v___x_672_);
return v___x_673_;
}
}
}
else
{
lean_object* v_a_676_; lean_object* v___x_677_; uint8_t v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
v_a_676_ = lean_ctor_get(v_x_665_, 0);
lean_inc(v_a_676_);
lean_dec_ref_known(v_x_665_, 1);
v___x_677_ = lean_unsigned_to_nat(0u);
v___x_678_ = 0;
v___x_679_ = l_Std_Queue_filterM___at___00Std_Notify_selector_spec__1(v_a_676_, v___y_663_);
v___x_680_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_677_, v___x_678_, v___x_679_, v___f_664_);
return v___x_680_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Notify_selector___lam__1___boxed(lean_object* v___y_681_, lean_object* v___f_682_, lean_object* v_x_683_, lean_object* v___y_684_){
_start:
{
lean_object* v_res_685_; 
v_res_685_ = l_Std_Notify_selector___lam__1(v___y_681_, v___f_682_, v_x_683_);
lean_dec(v___y_681_);
return v_res_685_;
}
}
LEAN_EXPORT lean_object* l_Std_Notify_selector___lam__2(lean_object* v___y_686_){
_start:
{
lean_object* v___f_688_; lean_object* v___f_689_; lean_object* v___x_690_; uint8_t v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; 
lean_inc_n(v___y_686_, 2);
v___f_688_ = lean_alloc_closure((void*)(l_Std_Notify_selector___lam__0___boxed), 3, 1);
lean_closure_set(v___f_688_, 0, v___y_686_);
v___f_689_ = lean_alloc_closure((void*)(l_Std_Notify_selector___lam__1___boxed), 4, 2);
lean_closure_set(v___f_689_, 0, v___y_686_);
lean_closure_set(v___f_689_, 1, v___f_688_);
v___x_690_ = lean_unsigned_to_nat(0u);
v___x_691_ = 0;
v___x_692_ = lean_st_ref_get(v___y_686_);
v___x_693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_693_, 0, v___x_692_);
v___x_694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_694_, 0, v___x_693_);
v___x_695_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_690_, v___x_691_, v___x_694_, v___f_689_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* l_Std_Notify_selector___lam__2___boxed(lean_object* v___y_696_, lean_object* v___y_697_){
_start:
{
lean_object* v_res_698_; 
v_res_698_ = l_Std_Notify_selector___lam__2(v___y_696_);
lean_dec(v___y_696_);
return v_res_698_;
}
}
LEAN_EXPORT lean_object* l_Std_Notify_selector___lam__3(lean_object* v_waiter_699_, lean_object* v___y_700_){
_start:
{
lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_702_ = lean_st_ref_take(v___y_700_);
v___x_703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_703_, 0, v_waiter_699_);
v___x_704_ = l_Std_Queue_enqueue___redArg(v___x_703_, v___x_702_);
v___x_705_ = lean_st_ref_put(v___y_700_, v___x_704_);
v___x_706_ = ((lean_object*)(l_Std_Notify_selector___lam__0___closed__1));
return v___x_706_;
}
}
LEAN_EXPORT lean_object* l_Std_Notify_selector___lam__3___boxed(lean_object* v_waiter_707_, lean_object* v___y_708_, lean_object* v___y_709_){
_start:
{
lean_object* v_res_710_; 
v_res_710_ = l_Std_Notify_selector___lam__3(v_waiter_707_, v___y_708_);
lean_dec(v___y_708_);
return v_res_710_;
}
}
LEAN_EXPORT lean_object* l_Std_Notify_selector___lam__4(lean_object* v_notify_711_, lean_object* v_waiter_712_){
_start:
{
lean_object* v___f_714_; lean_object* v___x_715_; 
v___f_714_ = lean_alloc_closure((void*)(l_Std_Notify_selector___lam__3___boxed), 3, 1);
lean_closure_set(v___f_714_, 0, v_waiter_712_);
v___x_715_ = l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___redArg(v_notify_711_, v___f_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Std_Notify_selector___lam__4___boxed(lean_object* v_notify_716_, lean_object* v_waiter_717_, lean_object* v___y_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = l_Std_Notify_selector___lam__4(v_notify_716_, v_waiter_717_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* l_Std_Notify_selector___lam__5(lean_object* v___x_720_){
_start:
{
lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_722_, 0, v___x_720_);
v___x_723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_723_, 0, v___x_722_);
return v___x_723_;
}
}
LEAN_EXPORT lean_object* l_Std_Notify_selector___lam__5___boxed(lean_object* v___x_724_, lean_object* v___y_725_){
_start:
{
lean_object* v_res_726_; 
v_res_726_ = l_Std_Notify_selector___lam__5(v___x_724_);
return v_res_726_;
}
}
LEAN_EXPORT lean_object* l_Std_Notify_selector(lean_object* v_notify_730_){
_start:
{
lean_object* v___f_731_; lean_object* v___f_732_; lean_object* v___f_733_; lean_object* v___x_734_; lean_object* v___x_735_; 
v___f_731_ = ((lean_object*)(l_Std_Notify_selector___closed__0));
lean_inc_ref(v_notify_730_);
v___f_732_ = lean_alloc_closure((void*)(l_Std_Notify_selector___lam__4___boxed), 3, 1);
lean_closure_set(v___f_732_, 0, v_notify_730_);
v___f_733_ = ((lean_object*)(l_Std_Notify_selector___closed__1));
v___x_734_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Notify_selector_spec__0___boxed), 5, 4);
lean_closure_set(v___x_734_, 0, lean_box(0));
lean_closure_set(v___x_734_, 1, lean_box(0));
lean_closure_set(v___x_734_, 2, v_notify_730_);
lean_closure_set(v___x_734_, 3, v___f_731_);
v___x_735_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_735_, 0, v___f_733_);
lean_ctor_set(v___x_735_, 1, v___f_732_);
lean_ctor_set(v___x_735_, 2, v___x_734_);
return v___x_735_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1(lean_object* v_x_736_, lean_object* v_x_737_, lean_object* v___y_738_){
_start:
{
lean_object* v___x_740_; 
v___x_740_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___redArg(v_x_736_, v_x_737_);
return v___x_740_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1___boxed(lean_object* v_x_741_, lean_object* v_x_742_, lean_object* v___y_743_, lean_object* v___y_744_){
_start:
{
lean_object* v_res_745_; 
v_res_745_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_Notify_selector_spec__1_spec__1(v_x_741_, v_x_742_, v___y_743_);
lean_dec(v___y_743_);
return v_res_745_;
}
}
lean_object* runtime_initialize_Init_Data_Queue(uint8_t builtin);
lean_object* runtime_initialize_Std_Sync_Mutex(uint8_t builtin);
lean_object* runtime_initialize_Std_Async_Select(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Sync_Notify(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Queue(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Sync_Mutex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_Select(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Sync_Notify(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Queue(uint8_t builtin);
lean_object* initialize_Std_Sync_Mutex(uint8_t builtin);
lean_object* initialize_Std_Async_Select(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Sync_Notify(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Queue(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Sync_Mutex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async_Select(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Sync_Notify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Sync_Notify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Sync_Notify(builtin);
}
#ifdef __cplusplus
}
#endif
