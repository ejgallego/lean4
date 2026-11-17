// Lean compiler output
// Module: Std.Sync.Broadcast
// Imports: public import Std.Data public import Init.Data.Queue public import Init.Data.Vector public import Std.Sync.Mutex public import Std.Async.IO
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
lean_object* lean_task_pure(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_Queue_dequeue_x3f___redArg(lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* lean_io_promise_new();
lean_object* l_Std_Queue_enqueue___redArg(lean_object*, lean_object*);
lean_object* lean_io_promise_result_opt(lean_object*);
lean_object* lean_io_bind_task(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_io_basemutex_lock(lean_object*);
lean_object* lean_io_basemutex_unlock(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Std_Queue_empty___redArg();
lean_object* l_Std_Queue_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_io_wait(lean_object*);
lean_object* l_IO_ofExcept___redArg(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Std_Mutex_new___redArg(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_EIO_chainTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Option_repr___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_IO_Promise_resolve___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_modifyGetUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Std_Async_EAsync_instMonad___redArg();
lean_object* l_Function_const___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_modify___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_closed_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_closed_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_closed_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_closed_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_alreadyClosed_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_alreadyClosed_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_alreadyClosed_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_alreadyClosed_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_notSubscribed_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_notSubscribed_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_notSubscribed_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_notSubscribed_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Broadcast_instReprError_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Std.Broadcast.Error.closed"};
static const lean_object* l_Std_Broadcast_instReprError_repr___closed__0 = (const lean_object*)&l_Std_Broadcast_instReprError_repr___closed__0_value;
static const lean_ctor_object l_Std_Broadcast_instReprError_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Broadcast_instReprError_repr___closed__0_value)}};
static const lean_object* l_Std_Broadcast_instReprError_repr___closed__1 = (const lean_object*)&l_Std_Broadcast_instReprError_repr___closed__1_value;
static const lean_string_object l_Std_Broadcast_instReprError_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Std.Broadcast.Error.alreadyClosed"};
static const lean_object* l_Std_Broadcast_instReprError_repr___closed__2 = (const lean_object*)&l_Std_Broadcast_instReprError_repr___closed__2_value;
static const lean_ctor_object l_Std_Broadcast_instReprError_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Broadcast_instReprError_repr___closed__2_value)}};
static const lean_object* l_Std_Broadcast_instReprError_repr___closed__3 = (const lean_object*)&l_Std_Broadcast_instReprError_repr___closed__3_value;
static const lean_string_object l_Std_Broadcast_instReprError_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Std.Broadcast.Error.notSubscribed"};
static const lean_object* l_Std_Broadcast_instReprError_repr___closed__4 = (const lean_object*)&l_Std_Broadcast_instReprError_repr___closed__4_value;
static const lean_ctor_object l_Std_Broadcast_instReprError_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Broadcast_instReprError_repr___closed__4_value)}};
static const lean_object* l_Std_Broadcast_instReprError_repr___closed__5 = (const lean_object*)&l_Std_Broadcast_instReprError_repr___closed__5_value;
static lean_once_cell_t l_Std_Broadcast_instReprError_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Broadcast_instReprError_repr___closed__6;
static lean_once_cell_t l_Std_Broadcast_instReprError_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Broadcast_instReprError_repr___closed__7;
LEAN_EXPORT lean_object* l_Std_Broadcast_instReprError_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_instReprError_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Broadcast_instReprError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Broadcast_instReprError_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Broadcast_instReprError___closed__0 = (const lean_object*)&l_Std_Broadcast_instReprError___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Broadcast_instReprError = (const lean_object*)&l_Std_Broadcast_instReprError___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Broadcast_Error_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Broadcast_instDecidableEqError(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Std_Broadcast_instDecidableEqError___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Std_Broadcast_instHashableError_hash(uint8_t);
LEAN_EXPORT lean_object* l_Std_Broadcast_instHashableError_hash___boxed(lean_object*);
static const lean_closure_object l_Std_Broadcast_instHashableError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Broadcast_instHashableError_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Broadcast_instHashableError___closed__0 = (const lean_object*)&l_Std_Broadcast_instHashableError___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Broadcast_instHashableError = (const lean_object*)&l_Std_Broadcast_instHashableError___closed__0_value;
static const lean_string_object l_Std_instToStringBroadcastError___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "attempted to send on an already closed channel"};
static const lean_object* l_Std_instToStringBroadcastError___lam__0___closed__0 = (const lean_object*)&l_Std_instToStringBroadcastError___lam__0___closed__0_value;
static const lean_string_object l_Std_instToStringBroadcastError___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "attempted to close an already closed broadcast channel"};
static const lean_object* l_Std_instToStringBroadcastError___lam__0___closed__1 = (const lean_object*)&l_Std_instToStringBroadcastError___lam__0___closed__1_value;
static const lean_string_object l_Std_instToStringBroadcastError___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "receiver not subscribed in a broadcast channel"};
static const lean_object* l_Std_instToStringBroadcastError___lam__0___closed__2 = (const lean_object*)&l_Std_instToStringBroadcastError___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Std_instToStringBroadcastError___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Std_instToStringBroadcastError___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_instToStringBroadcastError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_instToStringBroadcastError___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_instToStringBroadcastError___closed__0 = (const lean_object*)&l_Std_instToStringBroadcastError___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_instToStringBroadcastError = (const lean_object*)&l_Std_instToStringBroadcastError___closed__0_value;
static const lean_ctor_object l_Std_instMonadLiftBroadcastIO___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Std_instToStringBroadcastError___lam__0___closed__0_value)}};
static const lean_object* l_Std_instMonadLiftBroadcastIO___lam__0___closed__0 = (const lean_object*)&l_Std_instMonadLiftBroadcastIO___lam__0___closed__0_value;
static const lean_ctor_object l_Std_instMonadLiftBroadcastIO___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Std_instToStringBroadcastError___lam__0___closed__1_value)}};
static const lean_object* l_Std_instMonadLiftBroadcastIO___lam__0___closed__1 = (const lean_object*)&l_Std_instMonadLiftBroadcastIO___lam__0___closed__1_value;
static const lean_ctor_object l_Std_instMonadLiftBroadcastIO___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Std_instToStringBroadcastError___lam__0___closed__2_value)}};
static const lean_object* l_Std_instMonadLiftBroadcastIO___lam__0___closed__2 = (const lean_object*)&l_Std_instMonadLiftBroadcastIO___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Std_instMonadLiftBroadcastIO___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_instMonadLiftBroadcastIO___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_instMonadLiftBroadcastIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_instMonadLiftBroadcastIO___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_instMonadLiftBroadcastIO___closed__0 = (const lean_object*)&l_Std_instMonadLiftBroadcastIO___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_instMonadLiftBroadcastIO = (const lean_object*)&l_Std_instMonadLiftBroadcastIO___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve___redArg(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_instInhabitedSlot_default___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_instInhabitedSlot_default___redArg___closed__0 = (const lean_object*)&l_Std_instInhabitedSlot_default___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_instInhabitedSlot_default___redArg();
LEAN_EXPORT lean_object* l_Std_instInhabitedSlot_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_instInhabitedSlot_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_instInhabitedSlot_default___closed__0;
LEAN_EXPORT lean_object* l_Std_instInhabitedSlot_default(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instInhabitedSlot___redArg();
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instInhabitedSlot___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instInhabitedSlot(lean_object*);
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__0_value;
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__1 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__1_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__1_value)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__2 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__2_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__2_value)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__3 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__3_value;
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__4 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__4_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__4_value)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__5 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__5_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__3_value),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__5_value)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__6 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__6_value;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__7;
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__8 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__8_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__8_value)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__9 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__9_value;
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pos"};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__10 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__10_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__10_value)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__11 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__11_value;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__12;
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "remaining"};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__13 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__13_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__13_value)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__14 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__14_value;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__15;
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__16 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__16_value;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__17;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__18;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__0_value)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__19 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__19_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__16_value)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__20 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__20_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__0_value;
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__1 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__1_value;
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__2 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__2_value;
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__3 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__3_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__4_value_aux_0),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__4_value_aux_1),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__4_value_aux_2),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__4 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__4_value;
static const lean_array_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__5 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__5_value;
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__6 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__6_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__7_value_aux_0),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__7_value_aux_1),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__7_value_aux_2),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__7 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__7_value;
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__8 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__8_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__9 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__9_value;
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "decide"};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__10 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__10_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__11_value_aux_0),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__11_value_aux_1),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__11_value_aux_2),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(53, 158, 1, 232, 101, 200, 191, 197)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__11 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__11_value;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__12;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__13;
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__14 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__14_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__15_value_aux_0),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__15_value_aux_1),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__15_value_aux_2),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__15 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__15_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__9_value),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__5_value)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__16 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__16_value;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__17;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__18;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__19;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__20;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__21;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__22;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__23;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__24;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__25;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__26;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_new_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_new_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__0_value;
static const lean_array_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__1 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__1_value;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_new_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_isFull___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isFull___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_isFull(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isFull___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_enqueue___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_enqueue___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_enqueue(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_enqueue___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_dequeue___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_dequeue(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__0_value;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__1;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__2 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__2_value;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__3;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__0___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_close(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_close___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__0(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3___redArg___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___closed__0_value;
static const lean_closure_object l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___closed__1 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_modify___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___closed__0;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___redArg___closed__0 = (const lean_object*)&l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__2(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___closed__0 = (const lean_object*)&l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___closed__0 = (const lean_object*)&l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___closed__0_value;
static const lean_ctor_object l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___closed__0_value)}};
static const lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___closed__1 = (const lean_object*)&l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___closed__1_value;
static const lean_closure_object l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___closed__2 = (const lean_object*)&l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___closed__0 = (const lean_object*)&l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__4(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___redArg___closed__0_value)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__4(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__3(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5___closed__0_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5___closed__0_value)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5___closed__1 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__7(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___closed__0_value;
static const lean_closure_object l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___closed__1 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_new___auto__1;
LEAN_EXPORT lean_object* l_Std_Broadcast_new___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_new___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_new(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_new___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_trySend___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_trySend___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_trySend(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_trySend___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_subscribe___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_subscribe___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_subscribe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_subscribe___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_close___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_close___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_close(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_close___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_send___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_send___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Broadcast_send___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Broadcast_send___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Broadcast_send___redArg___closed__0 = (const lean_object*)&l_Std_Broadcast_send___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Broadcast_send___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_send___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_send(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_tryRecv___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_tryRecv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_tryRecv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_tryRecv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recv___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recv___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recvSelector___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recvSelector(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recvSelector___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_unsubscribe___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_unsubscribe___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_unsubscribe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_unsubscribe___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_forAsync___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_forAsync___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_forAsync(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_forAsync___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___closed__0 = (const lean_object*)&l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___closed__0_value;
static const lean_closure_object l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___closed__1 = (const lean_object*)&l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___closed__1_value;
static const lean_ctor_object l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___closed__0_value),((lean_object*)&l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___closed__1_value)}};
static const lean_object* l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___closed__2 = (const lean_object*)&l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg();
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___closed__0;
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___closed__0 = (const lean_object*)&l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___closed__0_value;
static const lean_closure_object l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___closed__0_value)} };
static const lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___closed__1 = (const lean_object*)&l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___closed__1_value;
static const lean_closure_object l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___closed__1_value)} };
static const lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___closed__2 = (const lean_object*)&l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg();
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___closed__0;
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Function_const___boxed, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__0___closed__0_value;
static const lean_closure_object l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_map, .m_arity = 5, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__0___closed__0_value)} };
static const lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__0___closed__1 = (const lean_object*)&l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__0 = (const lean_object*)&l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__0_value;
static const lean_closure_object l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__2___boxed, .m_arity = 5, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Std_Broadcast_send___redArg___closed__0_value),((lean_object*)&l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__0_value)} };
static const lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__1 = (const lean_object*)&l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__1_value;
static const lean_closure_object l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__2 = (const lean_object*)&l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__2_value;
static lean_once_cell_t l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__3;
static lean_once_cell_t l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__4;
static lean_once_cell_t l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__5;
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg();
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___closed__0;
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_new___auto__3;
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_new___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_new___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_new(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_new___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_trySend___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_trySend___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_trySend(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_trySend___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Broadcast_Sync_send___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lean_io_error_to_string, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Broadcast_Sync_send___redArg___closed__0 = (const lean_object*)&l_Std_Broadcast_Sync_send___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_send___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_send___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_send(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_tryRecv___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_tryRecv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_tryRecv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_tryRecv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_recv___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_recv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_recv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_recv___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_forIn___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_forIn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_forIn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_forIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ctorIdx___impl(uint8_t v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_box(v_x_1_);
v___x_3_ = lean_obj_tag_nat(v___x_2_);
lean_dec(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ctorIdx___impl___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_4__boxed_5_; lean_object* v_res_6_; 
v_x_4__boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = l_Std_Broadcast_Error_ctorIdx___impl(v_x_4__boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Std_Broadcast_Error_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = l_Std_Broadcast_Error_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_closed_elim___redArg(lean_object* v_closed_22_){
_start:
{
lean_inc(v_closed_22_);
return v_closed_22_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_closed_elim___redArg___boxed(lean_object* v_closed_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Std_Broadcast_Error_closed_elim___redArg(v_closed_23_);
lean_dec(v_closed_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_closed_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_closed_28_){
_start:
{
lean_inc(v_closed_28_);
return v_closed_28_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_closed_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_closed_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = l_Std_Broadcast_Error_closed_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_closed_32_);
lean_dec(v_closed_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_alreadyClosed_elim___redArg(lean_object* v_alreadyClosed_35_){
_start:
{
lean_inc(v_alreadyClosed_35_);
return v_alreadyClosed_35_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_alreadyClosed_elim___redArg___boxed(lean_object* v_alreadyClosed_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Std_Broadcast_Error_alreadyClosed_elim___redArg(v_alreadyClosed_36_);
lean_dec(v_alreadyClosed_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_alreadyClosed_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_alreadyClosed_41_){
_start:
{
lean_inc(v_alreadyClosed_41_);
return v_alreadyClosed_41_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_alreadyClosed_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_alreadyClosed_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = l_Std_Broadcast_Error_alreadyClosed_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_alreadyClosed_45_);
lean_dec(v_alreadyClosed_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_notSubscribed_elim___redArg(lean_object* v_notSubscribed_48_){
_start:
{
lean_inc(v_notSubscribed_48_);
return v_notSubscribed_48_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_notSubscribed_elim___redArg___boxed(lean_object* v_notSubscribed_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Std_Broadcast_Error_notSubscribed_elim___redArg(v_notSubscribed_49_);
lean_dec(v_notSubscribed_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_notSubscribed_elim(lean_object* v_motive_51_, uint8_t v_t_52_, lean_object* v_h_53_, lean_object* v_notSubscribed_54_){
_start:
{
lean_inc(v_notSubscribed_54_);
return v_notSubscribed_54_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_notSubscribed_elim___boxed(lean_object* v_motive_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_notSubscribed_58_){
_start:
{
uint8_t v_t_boxed_59_; lean_object* v_res_60_; 
v_t_boxed_59_ = lean_unbox(v_t_56_);
v_res_60_ = l_Std_Broadcast_Error_notSubscribed_elim(v_motive_55_, v_t_boxed_59_, v_h_57_, v_notSubscribed_58_);
lean_dec(v_notSubscribed_58_);
return v_res_60_;
}
}
static lean_object* _init_l_Std_Broadcast_instReprError_repr___closed__6(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_70_ = lean_unsigned_to_nat(2u);
v___x_71_ = lean_nat_to_int(v___x_70_);
return v___x_71_;
}
}
static lean_object* _init_l_Std_Broadcast_instReprError_repr___closed__7(void){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_72_ = lean_unsigned_to_nat(1u);
v___x_73_ = lean_nat_to_int(v___x_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_instReprError_repr(uint8_t v_x_74_, lean_object* v_prec_75_){
_start:
{
lean_object* v___y_77_; lean_object* v___y_84_; lean_object* v___y_91_; 
switch(v_x_74_)
{
case 0:
{
lean_object* v___x_97_; uint8_t v___x_98_; 
v___x_97_ = lean_unsigned_to_nat(1024u);
v___x_98_ = lean_nat_dec_le(v___x_97_, v_prec_75_);
if (v___x_98_ == 0)
{
lean_object* v___x_99_; 
v___x_99_ = lean_obj_once(&l_Std_Broadcast_instReprError_repr___closed__6, &l_Std_Broadcast_instReprError_repr___closed__6_once, _init_l_Std_Broadcast_instReprError_repr___closed__6);
v___y_77_ = v___x_99_;
goto v___jp_76_;
}
else
{
lean_object* v___x_100_; 
v___x_100_ = lean_obj_once(&l_Std_Broadcast_instReprError_repr___closed__7, &l_Std_Broadcast_instReprError_repr___closed__7_once, _init_l_Std_Broadcast_instReprError_repr___closed__7);
v___y_77_ = v___x_100_;
goto v___jp_76_;
}
}
case 1:
{
lean_object* v___x_101_; uint8_t v___x_102_; 
v___x_101_ = lean_unsigned_to_nat(1024u);
v___x_102_ = lean_nat_dec_le(v___x_101_, v_prec_75_);
if (v___x_102_ == 0)
{
lean_object* v___x_103_; 
v___x_103_ = lean_obj_once(&l_Std_Broadcast_instReprError_repr___closed__6, &l_Std_Broadcast_instReprError_repr___closed__6_once, _init_l_Std_Broadcast_instReprError_repr___closed__6);
v___y_84_ = v___x_103_;
goto v___jp_83_;
}
else
{
lean_object* v___x_104_; 
v___x_104_ = lean_obj_once(&l_Std_Broadcast_instReprError_repr___closed__7, &l_Std_Broadcast_instReprError_repr___closed__7_once, _init_l_Std_Broadcast_instReprError_repr___closed__7);
v___y_84_ = v___x_104_;
goto v___jp_83_;
}
}
default: 
{
lean_object* v___x_105_; uint8_t v___x_106_; 
v___x_105_ = lean_unsigned_to_nat(1024u);
v___x_106_ = lean_nat_dec_le(v___x_105_, v_prec_75_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; 
v___x_107_ = lean_obj_once(&l_Std_Broadcast_instReprError_repr___closed__6, &l_Std_Broadcast_instReprError_repr___closed__6_once, _init_l_Std_Broadcast_instReprError_repr___closed__6);
v___y_91_ = v___x_107_;
goto v___jp_90_;
}
else
{
lean_object* v___x_108_; 
v___x_108_ = lean_obj_once(&l_Std_Broadcast_instReprError_repr___closed__7, &l_Std_Broadcast_instReprError_repr___closed__7_once, _init_l_Std_Broadcast_instReprError_repr___closed__7);
v___y_91_ = v___x_108_;
goto v___jp_90_;
}
}
}
v___jp_76_:
{
lean_object* v___x_78_; lean_object* v___x_79_; uint8_t v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_78_ = ((lean_object*)(l_Std_Broadcast_instReprError_repr___closed__1));
lean_inc(v___y_77_);
v___x_79_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_79_, 0, v___y_77_);
lean_ctor_set(v___x_79_, 1, v___x_78_);
v___x_80_ = 0;
v___x_81_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_81_, 0, v___x_79_);
lean_ctor_set_uint8(v___x_81_, sizeof(void*)*1, v___x_80_);
v___x_82_ = l_Repr_addAppParen(v___x_81_, v_prec_75_);
return v___x_82_;
}
v___jp_83_:
{
lean_object* v___x_85_; lean_object* v___x_86_; uint8_t v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_85_ = ((lean_object*)(l_Std_Broadcast_instReprError_repr___closed__3));
lean_inc(v___y_84_);
v___x_86_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_86_, 0, v___y_84_);
lean_ctor_set(v___x_86_, 1, v___x_85_);
v___x_87_ = 0;
v___x_88_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_88_, 0, v___x_86_);
lean_ctor_set_uint8(v___x_88_, sizeof(void*)*1, v___x_87_);
v___x_89_ = l_Repr_addAppParen(v___x_88_, v_prec_75_);
return v___x_89_;
}
v___jp_90_:
{
lean_object* v___x_92_; lean_object* v___x_93_; uint8_t v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_92_ = ((lean_object*)(l_Std_Broadcast_instReprError_repr___closed__5));
lean_inc(v___y_91_);
v___x_93_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_93_, 0, v___y_91_);
lean_ctor_set(v___x_93_, 1, v___x_92_);
v___x_94_ = 0;
v___x_95_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_95_, 0, v___x_93_);
lean_ctor_set_uint8(v___x_95_, sizeof(void*)*1, v___x_94_);
v___x_96_ = l_Repr_addAppParen(v___x_95_, v_prec_75_);
return v___x_96_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_instReprError_repr___boxed(lean_object* v_x_109_, lean_object* v_prec_110_){
_start:
{
uint8_t v_x_255__boxed_111_; lean_object* v_res_112_; 
v_x_255__boxed_111_ = lean_unbox(v_x_109_);
v_res_112_ = l_Std_Broadcast_instReprError_repr(v_x_255__boxed_111_, v_prec_110_);
lean_dec(v_prec_110_);
return v_res_112_;
}
}
LEAN_EXPORT uint8_t l_Std_Broadcast_Error_ofNat(lean_object* v_n_115_){
_start:
{
lean_object* v___x_116_; uint8_t v___x_117_; 
v___x_116_ = lean_unsigned_to_nat(0u);
v___x_117_ = lean_nat_dec_le(v_n_115_, v___x_116_);
if (v___x_117_ == 0)
{
lean_object* v___x_118_; uint8_t v___x_119_; 
v___x_118_ = lean_unsigned_to_nat(1u);
v___x_119_ = lean_nat_dec_le(v_n_115_, v___x_118_);
if (v___x_119_ == 0)
{
uint8_t v___x_120_; 
v___x_120_ = 2;
return v___x_120_;
}
else
{
uint8_t v___x_121_; 
v___x_121_ = 1;
return v___x_121_;
}
}
else
{
uint8_t v___x_122_; 
v___x_122_ = 0;
return v___x_122_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ofNat___boxed(lean_object* v_n_123_){
_start:
{
uint8_t v_res_124_; lean_object* v_r_125_; 
v_res_124_ = l_Std_Broadcast_Error_ofNat(v_n_123_);
lean_dec(v_n_123_);
v_r_125_ = lean_box(v_res_124_);
return v_r_125_;
}
}
LEAN_EXPORT uint8_t l_Std_Broadcast_instDecidableEqError(uint8_t v_x_126_, uint8_t v_y_127_){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; uint8_t v___x_132_; 
v___x_128_ = lean_box(v_x_126_);
v___x_129_ = lean_obj_tag_nat(v___x_128_);
lean_dec(v___x_128_);
v___x_130_ = lean_box(v_y_127_);
v___x_131_ = lean_obj_tag_nat(v___x_130_);
lean_dec(v___x_130_);
v___x_132_ = lean_nat_dec_eq(v___x_129_, v___x_131_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_instDecidableEqError___boxed(lean_object* v_x_133_, lean_object* v_y_134_){
_start:
{
uint8_t v_x_23__boxed_135_; uint8_t v_y_24__boxed_136_; uint8_t v_res_137_; lean_object* v_r_138_; 
v_x_23__boxed_135_ = lean_unbox(v_x_133_);
v_y_24__boxed_136_ = lean_unbox(v_y_134_);
v_res_137_ = l_Std_Broadcast_instDecidableEqError(v_x_23__boxed_135_, v_y_24__boxed_136_);
v_r_138_ = lean_box(v_res_137_);
return v_r_138_;
}
}
LEAN_EXPORT uint64_t l_Std_Broadcast_instHashableError_hash(uint8_t v_x_139_){
_start:
{
switch(v_x_139_)
{
case 0:
{
uint64_t v___x_140_; 
v___x_140_ = 0ULL;
return v___x_140_;
}
case 1:
{
uint64_t v___x_141_; 
v___x_141_ = 1ULL;
return v___x_141_;
}
default: 
{
uint64_t v___x_142_; 
v___x_142_ = 2ULL;
return v___x_142_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_instHashableError_hash___boxed(lean_object* v_x_143_){
_start:
{
uint8_t v_x_40__boxed_144_; uint64_t v_res_145_; lean_object* v_r_146_; 
v_x_40__boxed_144_ = lean_unbox(v_x_143_);
v_res_145_ = l_Std_Broadcast_instHashableError_hash(v_x_40__boxed_144_);
v_r_146_ = lean_box_uint64(v_res_145_);
return v_r_146_;
}
}
LEAN_EXPORT lean_object* l_Std_instToStringBroadcastError___lam__0(uint8_t v_x_152_){
_start:
{
switch(v_x_152_)
{
case 0:
{
lean_object* v___x_153_; 
v___x_153_ = ((lean_object*)(l_Std_instToStringBroadcastError___lam__0___closed__0));
return v___x_153_;
}
case 1:
{
lean_object* v___x_154_; 
v___x_154_ = ((lean_object*)(l_Std_instToStringBroadcastError___lam__0___closed__1));
return v___x_154_;
}
default: 
{
lean_object* v___x_155_; 
v___x_155_ = ((lean_object*)(l_Std_instToStringBroadcastError___lam__0___closed__2));
return v___x_155_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_instToStringBroadcastError___lam__0___boxed(lean_object* v_x_156_){
_start:
{
uint8_t v_x_36__boxed_157_; lean_object* v_res_158_; 
v_x_36__boxed_157_ = lean_unbox(v_x_156_);
v_res_158_ = l_Std_instToStringBroadcastError___lam__0(v_x_36__boxed_157_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l_Std_instMonadLiftBroadcastIO___lam__0(lean_object* v_00_u03b1_167_, lean_object* v_x_168_){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = lean_apply_1(v_x_168_, lean_box(0));
if (lean_obj_tag(v___x_170_) == 0)
{
lean_object* v_a_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_178_; 
v_a_171_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_178_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_178_ == 0)
{
v___x_173_ = v___x_170_;
v_isShared_174_ = v_isSharedCheck_178_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_a_171_);
lean_dec(v___x_170_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_178_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
lean_object* v___x_176_; 
if (v_isShared_174_ == 0)
{
v___x_176_ = v___x_173_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v_a_171_);
v___x_176_ = v_reuseFailAlloc_177_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
return v___x_176_;
}
}
}
else
{
lean_object* v_a_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_196_; 
v_a_179_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_196_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_196_ == 0)
{
v___x_181_ = v___x_170_;
v_isShared_182_ = v_isSharedCheck_196_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_a_179_);
lean_dec(v___x_170_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_196_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
uint8_t v___x_183_; 
v___x_183_ = lean_unbox(v_a_179_);
lean_dec(v_a_179_);
switch(v___x_183_)
{
case 0:
{
lean_object* v___x_184_; lean_object* v___x_186_; 
v___x_184_ = ((lean_object*)(l_Std_instMonadLiftBroadcastIO___lam__0___closed__0));
if (v_isShared_182_ == 0)
{
lean_ctor_set(v___x_181_, 0, v___x_184_);
v___x_186_ = v___x_181_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v___x_184_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
case 1:
{
lean_object* v___x_188_; lean_object* v___x_190_; 
v___x_188_ = ((lean_object*)(l_Std_instMonadLiftBroadcastIO___lam__0___closed__1));
if (v_isShared_182_ == 0)
{
lean_ctor_set(v___x_181_, 0, v___x_188_);
v___x_190_ = v___x_181_;
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
default: 
{
lean_object* v___x_192_; lean_object* v___x_194_; 
v___x_192_ = ((lean_object*)(l_Std_instMonadLiftBroadcastIO___lam__0___closed__2));
if (v_isShared_182_ == 0)
{
lean_ctor_set(v___x_181_, 0, v___x_192_);
v___x_194_ = v___x_181_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v___x_192_);
v___x_194_ = v_reuseFailAlloc_195_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
return v___x_194_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_instMonadLiftBroadcastIO___lam__0___boxed(lean_object* v_00_u03b1_197_, lean_object* v_x_198_, lean_object* v___y_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = l_Std_instMonadLiftBroadcastIO___lam__0(v_00_u03b1_197_, v_x_198_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve___redArg(lean_object* v_c_203_, uint8_t v_b_204_){
_start:
{
lean_object* v_promise_206_; lean_object* v___x_207_; lean_object* v___x_208_; 
v_promise_206_ = lean_ctor_get(v_c_203_, 0);
v___x_207_ = lean_box(v_b_204_);
v___x_208_ = lean_io_promise_resolve(v___x_207_, v_promise_206_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve___redArg___boxed(lean_object* v_c_209_, lean_object* v_b_210_, lean_object* v_a_211_){
_start:
{
uint8_t v_b_boxed_212_; lean_object* v_res_213_; 
v_b_boxed_212_ = lean_unbox(v_b_210_);
v_res_213_ = l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve___redArg(v_c_209_, v_b_boxed_212_);
lean_dec_ref(v_c_209_);
return v_res_213_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve(lean_object* v_00_u03b1_214_, lean_object* v_c_215_, uint8_t v_b_216_){
_start:
{
lean_object* v___x_218_; 
v___x_218_ = l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve___redArg(v_c_215_, v_b_216_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve___boxed(lean_object* v_00_u03b1_219_, lean_object* v_c_220_, lean_object* v_b_221_, lean_object* v_a_222_){
_start:
{
uint8_t v_b_boxed_223_; lean_object* v_res_224_; 
v_b_boxed_223_ = lean_unbox(v_b_221_);
v_res_224_ = l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve(v_00_u03b1_219_, v_c_220_, v_b_boxed_223_);
lean_dec_ref(v_c_220_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l_Std_instInhabitedSlot_default___redArg(){
_start:
{
lean_object* v___x_229_; 
v___x_229_ = ((lean_object*)(l_Std_instInhabitedSlot_default___redArg___closed__0));
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Std_instInhabitedSlot_default___redArg___boxed(lean_object* v___dummy_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l_Std_instInhabitedSlot_default___redArg();
return v_res_231_;
}
}
static lean_object* _init_l_Std_instInhabitedSlot_default___closed__0(void){
_start:
{
lean_object* v___x_232_; 
v___x_232_ = l_Std_instInhabitedSlot_default___redArg();
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_Std_instInhabitedSlot_default(lean_object* v_00_u03b1_233_){
_start:
{
lean_object* v___x_234_; 
v___x_234_ = lean_obj_once(&l_Std_instInhabitedSlot_default___closed__0, &l_Std_instInhabitedSlot_default___closed__0_once, _init_l_Std_instInhabitedSlot_default___closed__0);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instInhabitedSlot___redArg(){
_start:
{
lean_object* v___x_236_; 
v___x_236_ = lean_obj_once(&l_Std_instInhabitedSlot_default___closed__0, &l_Std_instInhabitedSlot_default___closed__0_once, _init_l_Std_instInhabitedSlot_default___closed__0);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instInhabitedSlot___redArg___boxed(lean_object* v___dummy_237_){
_start:
{
lean_object* v_res_238_; 
v_res_238_ = l___private_Std_Sync_Broadcast_0__Std_instInhabitedSlot___redArg();
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instInhabitedSlot(lean_object* v_a_239_){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = lean_obj_once(&l_Std_instInhabitedSlot_default___closed__0, &l_Std_instInhabitedSlot_default___closed__0_once, _init_l_Std_instInhabitedSlot_default___closed__0);
return v___x_240_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_254_ = lean_unsigned_to_nat(9u);
v___x_255_ = lean_nat_to_int(v___x_254_);
return v___x_255_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_262_ = lean_unsigned_to_nat(7u);
v___x_263_ = lean_nat_to_int(v___x_262_);
return v___x_263_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = lean_unsigned_to_nat(13u);
v___x_268_ = lean_nat_to_int(v___x_267_);
return v___x_268_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_270_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__0));
v___x_271_ = lean_string_length(v___x_270_);
return v___x_271_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_272_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__17, &l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__17_once, _init_l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__17);
v___x_273_ = lean_nat_to_int(v___x_272_);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg(lean_object* v_inst_278_, lean_object* v_x_279_){
_start:
{
lean_object* v_value_280_; lean_object* v_pos_281_; lean_object* v_remaining_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; uint8_t v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v_value_280_ = lean_ctor_get(v_x_279_, 0);
lean_inc(v_value_280_);
v_pos_281_ = lean_ctor_get(v_x_279_, 1);
lean_inc(v_pos_281_);
v_remaining_282_ = lean_ctor_get(v_x_279_, 2);
lean_inc(v_remaining_282_);
lean_dec_ref(v_x_279_);
v___x_283_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__5));
v___x_284_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__6));
v___x_285_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__7, &l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__7_once, _init_l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__7);
v___x_286_ = lean_unsigned_to_nat(0u);
v___x_287_ = l_Option_repr___redArg(v_inst_278_, v_value_280_, v___x_286_);
v___x_288_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_288_, 0, v___x_285_);
lean_ctor_set(v___x_288_, 1, v___x_287_);
v___x_289_ = 0;
v___x_290_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_290_, 0, v___x_288_);
lean_ctor_set_uint8(v___x_290_, sizeof(void*)*1, v___x_289_);
v___x_291_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_291_, 0, v___x_284_);
lean_ctor_set(v___x_291_, 1, v___x_290_);
v___x_292_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__9));
v___x_293_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_293_, 0, v___x_291_);
lean_ctor_set(v___x_293_, 1, v___x_292_);
v___x_294_ = lean_box(1);
v___x_295_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_295_, 0, v___x_293_);
lean_ctor_set(v___x_295_, 1, v___x_294_);
v___x_296_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__11));
v___x_297_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_295_);
lean_ctor_set(v___x_297_, 1, v___x_296_);
v___x_298_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
lean_ctor_set(v___x_298_, 1, v___x_283_);
v___x_299_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__12, &l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__12_once, _init_l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__12);
v___x_300_ = l_Nat_reprFast(v_pos_281_);
v___x_301_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_301_, 0, v___x_300_);
v___x_302_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_302_, 0, v___x_299_);
lean_ctor_set(v___x_302_, 1, v___x_301_);
v___x_303_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_303_, 0, v___x_302_);
lean_ctor_set_uint8(v___x_303_, sizeof(void*)*1, v___x_289_);
v___x_304_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_304_, 0, v___x_298_);
lean_ctor_set(v___x_304_, 1, v___x_303_);
v___x_305_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
lean_ctor_set(v___x_305_, 1, v___x_292_);
v___x_306_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_306_, 0, v___x_305_);
lean_ctor_set(v___x_306_, 1, v___x_294_);
v___x_307_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__14));
v___x_308_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_308_, 0, v___x_306_);
lean_ctor_set(v___x_308_, 1, v___x_307_);
v___x_309_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_309_, 0, v___x_308_);
lean_ctor_set(v___x_309_, 1, v___x_283_);
v___x_310_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__15, &l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__15_once, _init_l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__15);
v___x_311_ = l_Nat_reprFast(v_remaining_282_);
v___x_312_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_312_, 0, v___x_311_);
v___x_313_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_313_, 0, v___x_310_);
lean_ctor_set(v___x_313_, 1, v___x_312_);
v___x_314_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_314_, 0, v___x_313_);
lean_ctor_set_uint8(v___x_314_, sizeof(void*)*1, v___x_289_);
v___x_315_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_315_, 0, v___x_309_);
lean_ctor_set(v___x_315_, 1, v___x_314_);
v___x_316_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__18, &l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__18_once, _init_l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__18);
v___x_317_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__19));
v___x_318_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_318_, 0, v___x_317_);
lean_ctor_set(v___x_318_, 1, v___x_315_);
v___x_319_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__20));
v___x_320_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_320_, 0, v___x_318_);
lean_ctor_set(v___x_320_, 1, v___x_319_);
v___x_321_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_321_, 0, v___x_316_);
lean_ctor_set(v___x_321_, 1, v___x_320_);
v___x_322_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_322_, 0, v___x_321_);
lean_ctor_set_uint8(v___x_322_, sizeof(void*)*1, v___x_289_);
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr(lean_object* v_00_u03b1_323_, lean_object* v_inst_324_, lean_object* v_x_325_, lean_object* v_prec_326_){
_start:
{
lean_object* v___x_327_; 
v___x_327_ = l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg(v_inst_324_, v_x_325_);
return v___x_327_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___boxed(lean_object* v_00_u03b1_328_, lean_object* v_inst_329_, lean_object* v_x_330_, lean_object* v_prec_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr(v_00_u03b1_328_, v_inst_329_, v_x_330_, v_prec_331_);
lean_dec(v_prec_331_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot___redArg(lean_object* v_inst_333_){
_start:
{
lean_object* v___x_334_; 
v___x_334_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___boxed), 4, 2);
lean_closure_set(v___x_334_, 0, lean_box(0));
lean_closure_set(v___x_334_, 1, v_inst_333_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot(lean_object* v_00_u03b1_335_, lean_object* v_inst_336_){
_start:
{
lean_object* v___x_337_; 
v___x_337_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___boxed), 4, 2);
lean_closure_set(v___x_337_, 0, lean_box(0));
lean_closure_set(v___x_337_, 1, v_inst_336_);
return v___x_337_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__12(void){
_start:
{
lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_364_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__10));
v___x_365_ = l_Lean_mkAtom(v___x_364_);
return v___x_365_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__13(void){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_366_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__12, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__12_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__12);
v___x_367_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__5));
v___x_368_ = lean_array_push(v___x_367_, v___x_366_);
return v___x_368_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__17(void){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_379_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__16));
v___x_380_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__5));
v___x_381_ = lean_array_push(v___x_380_, v___x_379_);
return v___x_381_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__18(void){
_start:
{
lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_382_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__17, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__17_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__17);
v___x_383_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__15));
v___x_384_ = lean_box(2);
v___x_385_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_385_, 0, v___x_384_);
lean_ctor_set(v___x_385_, 1, v___x_383_);
lean_ctor_set(v___x_385_, 2, v___x_382_);
return v___x_385_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__19(void){
_start:
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_386_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__18, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__18_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__18);
v___x_387_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__13, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__13_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__13);
v___x_388_ = lean_array_push(v___x_387_, v___x_386_);
return v___x_388_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__20(void){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_389_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__19, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__19_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__19);
v___x_390_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__11));
v___x_391_ = lean_box(2);
v___x_392_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_392_, 0, v___x_391_);
lean_ctor_set(v___x_392_, 1, v___x_390_);
lean_ctor_set(v___x_392_, 2, v___x_389_);
return v___x_392_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__21(void){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_393_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__20, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__20_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__20);
v___x_394_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__5));
v___x_395_ = lean_array_push(v___x_394_, v___x_393_);
return v___x_395_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__22(void){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_396_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__21, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__21_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__21);
v___x_397_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__9));
v___x_398_ = lean_box(2);
v___x_399_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_399_, 0, v___x_398_);
lean_ctor_set(v___x_399_, 1, v___x_397_);
lean_ctor_set(v___x_399_, 2, v___x_396_);
return v___x_399_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__23(void){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_400_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__22, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__22_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__22);
v___x_401_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__5));
v___x_402_ = lean_array_push(v___x_401_, v___x_400_);
return v___x_402_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__24(void){
_start:
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_403_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__23, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__23_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__23);
v___x_404_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__7));
v___x_405_ = lean_box(2);
v___x_406_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
lean_ctor_set(v___x_406_, 1, v___x_404_);
lean_ctor_set(v___x_406_, 2, v___x_403_);
return v___x_406_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__25(void){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_407_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__24, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__24_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__24);
v___x_408_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__5));
v___x_409_ = lean_array_push(v___x_408_, v___x_407_);
return v___x_409_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__26(void){
_start:
{
lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_410_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__25, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__25_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__25);
v___x_411_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__4));
v___x_412_ = lean_box(2);
v___x_413_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_413_, 0, v___x_412_);
lean_ctor_set(v___x_413_, 1, v___x_411_);
lean_ctor_set(v___x_413_, 2, v___x_410_);
return v___x_413_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1(void){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__26, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__26_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__26);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___lam__0(lean_object* v_x_415_){
_start:
{
lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_417_ = ((lean_object*)(l_Std_instInhabitedSlot_default___redArg___closed__0));
v___x_418_ = lean_st_mk_ref(v___x_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___lam__0___boxed(lean_object* v_x_419_, lean_object* v___y_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___lam__0(v_x_419_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_new_spec__0___redArg(lean_object* v_n_422_, lean_object* v_f_423_, lean_object* v_xs_424_, lean_object* v_k_425_, lean_object* v_acc_426_){
_start:
{
uint8_t v___x_428_; 
v___x_428_ = lean_nat_dec_lt(v_k_425_, v_n_422_);
if (v___x_428_ == 0)
{
lean_dec(v_k_425_);
lean_dec_ref(v_f_423_);
return v_acc_426_;
}
else
{
lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_429_ = lean_array_fget_borrowed(v_xs_424_, v_k_425_);
lean_inc_ref(v_f_423_);
lean_inc(v___x_429_);
v___x_430_ = lean_apply_2(v_f_423_, v___x_429_, lean_box(0));
v___x_431_ = lean_unsigned_to_nat(1u);
v___x_432_ = lean_nat_add(v_k_425_, v___x_431_);
lean_dec(v_k_425_);
v___x_433_ = lean_array_push(v_acc_426_, v___x_430_);
v_k_425_ = v___x_432_;
v_acc_426_ = v___x_433_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_new_spec__0___redArg___boxed(lean_object* v_n_435_, lean_object* v_f_436_, lean_object* v_xs_437_, lean_object* v_k_438_, lean_object* v_acc_439_, lean_object* v___y_440_){
_start:
{
lean_object* v_res_441_; 
v_res_441_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_new_spec__0___redArg(v_n_435_, v_f_436_, v_xs_437_, v_k_438_, v_acc_439_);
lean_dec_ref(v_xs_437_);
lean_dec(v_n_435_);
return v_res_441_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__2(void){
_start:
{
lean_object* v___x_445_; 
v___x_445_ = l_Std_Queue_empty___redArg();
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg(lean_object* v_capacity_446_){
_start:
{
lean_object* v___f_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; uint8_t v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
v___f_448_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__0));
v___x_449_ = lean_box(0);
lean_inc(v_capacity_446_);
v___x_450_ = lean_mk_array(v_capacity_446_, v___x_449_);
v___x_451_ = lean_unsigned_to_nat(0u);
v___x_452_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__1));
v___x_453_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_new_spec__0___redArg(v_capacity_446_, v___f_448_, v___x_450_, v___x_451_, v___x_452_);
lean_dec_ref(v___x_450_);
v___x_454_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__2, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__2_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__2);
v___x_455_ = lean_box(1);
v___x_456_ = 0;
v___x_457_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_457_, 0, v___x_454_);
lean_ctor_set(v___x_457_, 1, v___x_454_);
lean_ctor_set(v___x_457_, 2, v_capacity_446_);
lean_ctor_set(v___x_457_, 3, v___x_451_);
lean_ctor_set(v___x_457_, 4, v___x_453_);
lean_ctor_set(v___x_457_, 5, v___x_451_);
lean_ctor_set(v___x_457_, 6, v___x_451_);
lean_ctor_set(v___x_457_, 7, v___x_455_);
lean_ctor_set(v___x_457_, 8, v___x_451_);
lean_ctor_set(v___x_457_, 9, v___x_451_);
lean_ctor_set_uint8(v___x_457_, sizeof(void*)*10, v___x_456_);
v___x_458_ = l_Std_Mutex_new___redArg(v___x_457_);
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___boxed(lean_object* v_capacity_459_, lean_object* v_a_460_){
_start:
{
lean_object* v_res_461_; 
v_res_461_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg(v_capacity_459_);
return v_res_461_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new(lean_object* v_00_u03b1_462_, lean_object* v_capacity_463_, lean_object* v_h_464_){
_start:
{
lean_object* v___x_466_; 
v___x_466_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg(v_capacity_463_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___boxed(lean_object* v_00_u03b1_467_, lean_object* v_capacity_468_, lean_object* v_h_469_, lean_object* v_a_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_new(v_00_u03b1_467_, v_capacity_468_, v_h_469_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_new_spec__0(lean_object* v_00_u03b1_472_, lean_object* v_00_u03b2_473_, lean_object* v_n_474_, lean_object* v_f_475_, lean_object* v_xs_476_, lean_object* v_k_477_, lean_object* v_h_478_, lean_object* v_acc_479_){
_start:
{
lean_object* v___x_481_; 
v___x_481_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_new_spec__0___redArg(v_n_474_, v_f_475_, v_xs_476_, v_k_477_, v_acc_479_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_new_spec__0___boxed(lean_object* v_00_u03b1_482_, lean_object* v_00_u03b2_483_, lean_object* v_n_484_, lean_object* v_f_485_, lean_object* v_xs_486_, lean_object* v_k_487_, lean_object* v_h_488_, lean_object* v_acc_489_, lean_object* v___y_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_new_spec__0(v_00_u03b1_482_, v_00_u03b2_483_, v_n_484_, v_f_485_, v_xs_486_, v_k_487_, v_h_488_, v_acc_489_);
lean_dec_ref(v_xs_486_);
lean_dec(v_n_484_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___redArg(lean_object* v_mutex_492_, lean_object* v_k_493_){
_start:
{
lean_object* v_ref_495_; lean_object* v_mutex_496_; lean_object* v___x_497_; lean_object* v_r_498_; 
v_ref_495_ = lean_ctor_get(v_mutex_492_, 0);
lean_inc(v_ref_495_);
v_mutex_496_ = lean_ctor_get(v_mutex_492_, 1);
lean_inc(v_mutex_496_);
lean_dec_ref(v_mutex_492_);
v___x_497_ = lean_io_basemutex_lock(v_mutex_496_);
v_r_498_ = lean_apply_2(v_k_493_, v_ref_495_, lean_box(0));
if (lean_obj_tag(v_r_498_) == 0)
{
lean_object* v_a_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_507_; 
v_a_499_ = lean_ctor_get(v_r_498_, 0);
v_isSharedCheck_507_ = !lean_is_exclusive(v_r_498_);
if (v_isSharedCheck_507_ == 0)
{
v___x_501_ = v_r_498_;
v_isShared_502_ = v_isSharedCheck_507_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_a_499_);
lean_dec(v_r_498_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_507_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v___x_503_; lean_object* v___x_505_; 
v___x_503_ = lean_io_basemutex_unlock(v_mutex_496_);
lean_dec(v_mutex_496_);
if (v_isShared_502_ == 0)
{
v___x_505_ = v___x_501_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v_a_499_);
v___x_505_ = v_reuseFailAlloc_506_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
return v___x_505_;
}
}
}
else
{
lean_object* v_a_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_516_; 
v_a_508_ = lean_ctor_get(v_r_498_, 0);
v_isSharedCheck_516_ = !lean_is_exclusive(v_r_498_);
if (v_isSharedCheck_516_ == 0)
{
v___x_510_ = v_r_498_;
v_isShared_511_ = v_isSharedCheck_516_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_a_508_);
lean_dec(v_r_498_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_516_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_512_; lean_object* v___x_514_; 
v___x_512_ = lean_io_basemutex_unlock(v_mutex_496_);
lean_dec(v_mutex_496_);
if (v_isShared_511_ == 0)
{
v___x_514_ = v___x_510_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v_a_508_);
v___x_514_ = v_reuseFailAlloc_515_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
return v___x_514_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___redArg___boxed(lean_object* v_mutex_517_, lean_object* v_k_518_, lean_object* v___y_519_){
_start:
{
lean_object* v_res_520_; 
v_res_520_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___redArg(v_mutex_517_, v_k_518_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1(lean_object* v_00_u03b1_521_, lean_object* v_00_u03b2_522_, lean_object* v_mutex_523_, lean_object* v_k_524_){
_start:
{
lean_object* v___x_526_; 
v___x_526_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___redArg(v_mutex_523_, v_k_524_);
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___boxed(lean_object* v_00_u03b1_527_, lean_object* v_00_u03b2_528_, lean_object* v_mutex_529_, lean_object* v_k_530_, lean_object* v___y_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1(v_00_u03b1_527_, v_00_u03b2_528_, v_mutex_529_, v_k_530_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__0___redArg(lean_object* v_k_533_, lean_object* v_v_534_, lean_object* v_t_535_){
_start:
{
if (lean_obj_tag(v_t_535_) == 0)
{
lean_object* v_size_536_; lean_object* v_k_537_; lean_object* v_v_538_; lean_object* v_l_539_; lean_object* v_r_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_821_; 
v_size_536_ = lean_ctor_get(v_t_535_, 0);
v_k_537_ = lean_ctor_get(v_t_535_, 1);
v_v_538_ = lean_ctor_get(v_t_535_, 2);
v_l_539_ = lean_ctor_get(v_t_535_, 3);
v_r_540_ = lean_ctor_get(v_t_535_, 4);
v_isSharedCheck_821_ = !lean_is_exclusive(v_t_535_);
if (v_isSharedCheck_821_ == 0)
{
v___x_542_ = v_t_535_;
v_isShared_543_ = v_isSharedCheck_821_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_r_540_);
lean_inc(v_l_539_);
lean_inc(v_v_538_);
lean_inc(v_k_537_);
lean_inc(v_size_536_);
lean_dec(v_t_535_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_821_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
uint8_t v___x_544_; 
v___x_544_ = lean_nat_dec_lt(v_k_533_, v_k_537_);
if (v___x_544_ == 0)
{
uint8_t v___x_545_; 
v___x_545_ = lean_nat_dec_eq(v_k_533_, v_k_537_);
if (v___x_545_ == 0)
{
lean_object* v_impl_546_; lean_object* v___x_547_; 
lean_dec(v_size_536_);
v_impl_546_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__0___redArg(v_k_533_, v_v_534_, v_r_540_);
v___x_547_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_539_) == 0)
{
lean_object* v_size_548_; lean_object* v_size_549_; lean_object* v_k_550_; lean_object* v_v_551_; lean_object* v_l_552_; lean_object* v_r_553_; lean_object* v___x_554_; lean_object* v___x_555_; uint8_t v___x_556_; 
v_size_548_ = lean_ctor_get(v_l_539_, 0);
v_size_549_ = lean_ctor_get(v_impl_546_, 0);
v_k_550_ = lean_ctor_get(v_impl_546_, 1);
v_v_551_ = lean_ctor_get(v_impl_546_, 2);
v_l_552_ = lean_ctor_get(v_impl_546_, 3);
lean_inc(v_l_552_);
v_r_553_ = lean_ctor_get(v_impl_546_, 4);
v___x_554_ = lean_unsigned_to_nat(3u);
v___x_555_ = lean_nat_mul(v___x_554_, v_size_548_);
v___x_556_ = lean_nat_dec_lt(v___x_555_, v_size_549_);
lean_dec(v___x_555_);
if (v___x_556_ == 0)
{
lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_560_; 
lean_dec(v_l_552_);
v___x_557_ = lean_nat_add(v___x_547_, v_size_548_);
v___x_558_ = lean_nat_add(v___x_557_, v_size_549_);
lean_dec(v___x_557_);
if (v_isShared_543_ == 0)
{
lean_ctor_set(v___x_542_, 4, v_impl_546_);
lean_ctor_set(v___x_542_, 0, v___x_558_);
v___x_560_ = v___x_542_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v___x_558_);
lean_ctor_set(v_reuseFailAlloc_561_, 1, v_k_537_);
lean_ctor_set(v_reuseFailAlloc_561_, 2, v_v_538_);
lean_ctor_set(v_reuseFailAlloc_561_, 3, v_l_539_);
lean_ctor_set(v_reuseFailAlloc_561_, 4, v_impl_546_);
v___x_560_ = v_reuseFailAlloc_561_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
return v___x_560_;
}
}
else
{
lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_625_; 
lean_inc(v_r_553_);
lean_inc(v_v_551_);
lean_inc(v_k_550_);
lean_inc(v_size_549_);
v_isSharedCheck_625_ = !lean_is_exclusive(v_impl_546_);
if (v_isSharedCheck_625_ == 0)
{
lean_object* v_unused_626_; lean_object* v_unused_627_; lean_object* v_unused_628_; lean_object* v_unused_629_; lean_object* v_unused_630_; 
v_unused_626_ = lean_ctor_get(v_impl_546_, 4);
lean_dec(v_unused_626_);
v_unused_627_ = lean_ctor_get(v_impl_546_, 3);
lean_dec(v_unused_627_);
v_unused_628_ = lean_ctor_get(v_impl_546_, 2);
lean_dec(v_unused_628_);
v_unused_629_ = lean_ctor_get(v_impl_546_, 1);
lean_dec(v_unused_629_);
v_unused_630_ = lean_ctor_get(v_impl_546_, 0);
lean_dec(v_unused_630_);
v___x_563_ = v_impl_546_;
v_isShared_564_ = v_isSharedCheck_625_;
goto v_resetjp_562_;
}
else
{
lean_dec(v_impl_546_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_625_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v_size_565_; lean_object* v_k_566_; lean_object* v_v_567_; lean_object* v_l_568_; lean_object* v_r_569_; lean_object* v_size_570_; lean_object* v___x_571_; lean_object* v___x_572_; uint8_t v___x_573_; 
v_size_565_ = lean_ctor_get(v_l_552_, 0);
v_k_566_ = lean_ctor_get(v_l_552_, 1);
v_v_567_ = lean_ctor_get(v_l_552_, 2);
v_l_568_ = lean_ctor_get(v_l_552_, 3);
v_r_569_ = lean_ctor_get(v_l_552_, 4);
v_size_570_ = lean_ctor_get(v_r_553_, 0);
v___x_571_ = lean_unsigned_to_nat(2u);
v___x_572_ = lean_nat_mul(v___x_571_, v_size_570_);
v___x_573_ = lean_nat_dec_lt(v_size_565_, v___x_572_);
lean_dec(v___x_572_);
if (v___x_573_ == 0)
{
lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_601_; 
lean_inc(v_r_569_);
lean_inc(v_l_568_);
lean_inc(v_v_567_);
lean_inc(v_k_566_);
v_isSharedCheck_601_ = !lean_is_exclusive(v_l_552_);
if (v_isSharedCheck_601_ == 0)
{
lean_object* v_unused_602_; lean_object* v_unused_603_; lean_object* v_unused_604_; lean_object* v_unused_605_; lean_object* v_unused_606_; 
v_unused_602_ = lean_ctor_get(v_l_552_, 4);
lean_dec(v_unused_602_);
v_unused_603_ = lean_ctor_get(v_l_552_, 3);
lean_dec(v_unused_603_);
v_unused_604_ = lean_ctor_get(v_l_552_, 2);
lean_dec(v_unused_604_);
v_unused_605_ = lean_ctor_get(v_l_552_, 1);
lean_dec(v_unused_605_);
v_unused_606_ = lean_ctor_get(v_l_552_, 0);
lean_dec(v_unused_606_);
v___x_575_ = v_l_552_;
v_isShared_576_ = v_isSharedCheck_601_;
goto v_resetjp_574_;
}
else
{
lean_dec(v_l_552_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_601_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___y_580_; lean_object* v___y_581_; lean_object* v___y_582_; lean_object* v___y_591_; 
v___x_577_ = lean_nat_add(v___x_547_, v_size_548_);
v___x_578_ = lean_nat_add(v___x_577_, v_size_549_);
lean_dec(v_size_549_);
if (lean_obj_tag(v_l_568_) == 0)
{
lean_object* v_size_599_; 
v_size_599_ = lean_ctor_get(v_l_568_, 0);
lean_inc(v_size_599_);
v___y_591_ = v_size_599_;
goto v___jp_590_;
}
else
{
lean_object* v___x_600_; 
v___x_600_ = lean_unsigned_to_nat(0u);
v___y_591_ = v___x_600_;
goto v___jp_590_;
}
v___jp_579_:
{
lean_object* v___x_583_; lean_object* v___x_585_; 
v___x_583_ = lean_nat_add(v___y_580_, v___y_582_);
lean_dec(v___y_582_);
lean_dec(v___y_580_);
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 4, v_r_553_);
lean_ctor_set(v___x_575_, 3, v_r_569_);
lean_ctor_set(v___x_575_, 2, v_v_551_);
lean_ctor_set(v___x_575_, 1, v_k_550_);
lean_ctor_set(v___x_575_, 0, v___x_583_);
v___x_585_ = v___x_575_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v___x_583_);
lean_ctor_set(v_reuseFailAlloc_589_, 1, v_k_550_);
lean_ctor_set(v_reuseFailAlloc_589_, 2, v_v_551_);
lean_ctor_set(v_reuseFailAlloc_589_, 3, v_r_569_);
lean_ctor_set(v_reuseFailAlloc_589_, 4, v_r_553_);
v___x_585_ = v_reuseFailAlloc_589_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
lean_object* v___x_587_; 
if (v_isShared_564_ == 0)
{
lean_ctor_set(v___x_563_, 4, v___x_585_);
lean_ctor_set(v___x_563_, 3, v___y_581_);
lean_ctor_set(v___x_563_, 2, v_v_567_);
lean_ctor_set(v___x_563_, 1, v_k_566_);
lean_ctor_set(v___x_563_, 0, v___x_578_);
v___x_587_ = v___x_563_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v___x_578_);
lean_ctor_set(v_reuseFailAlloc_588_, 1, v_k_566_);
lean_ctor_set(v_reuseFailAlloc_588_, 2, v_v_567_);
lean_ctor_set(v_reuseFailAlloc_588_, 3, v___y_581_);
lean_ctor_set(v_reuseFailAlloc_588_, 4, v___x_585_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
}
v___jp_590_:
{
lean_object* v___x_592_; lean_object* v___x_594_; 
v___x_592_ = lean_nat_add(v___x_577_, v___y_591_);
lean_dec(v___y_591_);
lean_dec(v___x_577_);
if (v_isShared_543_ == 0)
{
lean_ctor_set(v___x_542_, 4, v_l_568_);
lean_ctor_set(v___x_542_, 0, v___x_592_);
v___x_594_ = v___x_542_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v___x_592_);
lean_ctor_set(v_reuseFailAlloc_598_, 1, v_k_537_);
lean_ctor_set(v_reuseFailAlloc_598_, 2, v_v_538_);
lean_ctor_set(v_reuseFailAlloc_598_, 3, v_l_539_);
lean_ctor_set(v_reuseFailAlloc_598_, 4, v_l_568_);
v___x_594_ = v_reuseFailAlloc_598_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
lean_object* v___x_595_; 
v___x_595_ = lean_nat_add(v___x_547_, v_size_570_);
if (lean_obj_tag(v_r_569_) == 0)
{
lean_object* v_size_596_; 
v_size_596_ = lean_ctor_get(v_r_569_, 0);
lean_inc(v_size_596_);
v___y_580_ = v___x_595_;
v___y_581_ = v___x_594_;
v___y_582_ = v_size_596_;
goto v___jp_579_;
}
else
{
lean_object* v___x_597_; 
v___x_597_ = lean_unsigned_to_nat(0u);
v___y_580_ = v___x_595_;
v___y_581_ = v___x_594_;
v___y_582_ = v___x_597_;
goto v___jp_579_;
}
}
}
}
}
else
{
lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_611_; 
lean_del_object(v___x_542_);
v___x_607_ = lean_nat_add(v___x_547_, v_size_548_);
v___x_608_ = lean_nat_add(v___x_607_, v_size_549_);
lean_dec(v_size_549_);
v___x_609_ = lean_nat_add(v___x_607_, v_size_565_);
lean_dec(v___x_607_);
lean_inc_ref(v_l_539_);
if (v_isShared_564_ == 0)
{
lean_ctor_set(v___x_563_, 4, v_l_552_);
lean_ctor_set(v___x_563_, 3, v_l_539_);
lean_ctor_set(v___x_563_, 2, v_v_538_);
lean_ctor_set(v___x_563_, 1, v_k_537_);
lean_ctor_set(v___x_563_, 0, v___x_609_);
v___x_611_ = v___x_563_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v___x_609_);
lean_ctor_set(v_reuseFailAlloc_624_, 1, v_k_537_);
lean_ctor_set(v_reuseFailAlloc_624_, 2, v_v_538_);
lean_ctor_set(v_reuseFailAlloc_624_, 3, v_l_539_);
lean_ctor_set(v_reuseFailAlloc_624_, 4, v_l_552_);
v___x_611_ = v_reuseFailAlloc_624_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_618_; 
v_isSharedCheck_618_ = !lean_is_exclusive(v_l_539_);
if (v_isSharedCheck_618_ == 0)
{
lean_object* v_unused_619_; lean_object* v_unused_620_; lean_object* v_unused_621_; lean_object* v_unused_622_; lean_object* v_unused_623_; 
v_unused_619_ = lean_ctor_get(v_l_539_, 4);
lean_dec(v_unused_619_);
v_unused_620_ = lean_ctor_get(v_l_539_, 3);
lean_dec(v_unused_620_);
v_unused_621_ = lean_ctor_get(v_l_539_, 2);
lean_dec(v_unused_621_);
v_unused_622_ = lean_ctor_get(v_l_539_, 1);
lean_dec(v_unused_622_);
v_unused_623_ = lean_ctor_get(v_l_539_, 0);
lean_dec(v_unused_623_);
v___x_613_ = v_l_539_;
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
else
{
lean_dec(v_l_539_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v___x_616_; 
if (v_isShared_614_ == 0)
{
lean_ctor_set(v___x_613_, 4, v_r_553_);
lean_ctor_set(v___x_613_, 3, v___x_611_);
lean_ctor_set(v___x_613_, 2, v_v_551_);
lean_ctor_set(v___x_613_, 1, v_k_550_);
lean_ctor_set(v___x_613_, 0, v___x_608_);
v___x_616_ = v___x_613_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v___x_608_);
lean_ctor_set(v_reuseFailAlloc_617_, 1, v_k_550_);
lean_ctor_set(v_reuseFailAlloc_617_, 2, v_v_551_);
lean_ctor_set(v_reuseFailAlloc_617_, 3, v___x_611_);
lean_ctor_set(v_reuseFailAlloc_617_, 4, v_r_553_);
v___x_616_ = v_reuseFailAlloc_617_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
return v___x_616_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_631_; 
v_l_631_ = lean_ctor_get(v_impl_546_, 3);
lean_inc(v_l_631_);
if (lean_obj_tag(v_l_631_) == 0)
{
lean_object* v_r_632_; lean_object* v_k_633_; lean_object* v_v_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_657_; 
v_r_632_ = lean_ctor_get(v_impl_546_, 4);
v_k_633_ = lean_ctor_get(v_impl_546_, 1);
v_v_634_ = lean_ctor_get(v_impl_546_, 2);
v_isSharedCheck_657_ = !lean_is_exclusive(v_impl_546_);
if (v_isSharedCheck_657_ == 0)
{
lean_object* v_unused_658_; lean_object* v_unused_659_; 
v_unused_658_ = lean_ctor_get(v_impl_546_, 3);
lean_dec(v_unused_658_);
v_unused_659_ = lean_ctor_get(v_impl_546_, 0);
lean_dec(v_unused_659_);
v___x_636_ = v_impl_546_;
v_isShared_637_ = v_isSharedCheck_657_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_r_632_);
lean_inc(v_v_634_);
lean_inc(v_k_633_);
lean_dec(v_impl_546_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_657_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v_k_638_; lean_object* v_v_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_653_; 
v_k_638_ = lean_ctor_get(v_l_631_, 1);
v_v_639_ = lean_ctor_get(v_l_631_, 2);
v_isSharedCheck_653_ = !lean_is_exclusive(v_l_631_);
if (v_isSharedCheck_653_ == 0)
{
lean_object* v_unused_654_; lean_object* v_unused_655_; lean_object* v_unused_656_; 
v_unused_654_ = lean_ctor_get(v_l_631_, 4);
lean_dec(v_unused_654_);
v_unused_655_ = lean_ctor_get(v_l_631_, 3);
lean_dec(v_unused_655_);
v_unused_656_ = lean_ctor_get(v_l_631_, 0);
lean_dec(v_unused_656_);
v___x_641_ = v_l_631_;
v_isShared_642_ = v_isSharedCheck_653_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_v_639_);
lean_inc(v_k_638_);
lean_dec(v_l_631_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_653_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v___x_643_; lean_object* v___x_645_; 
v___x_643_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_632_, 2);
if (v_isShared_642_ == 0)
{
lean_ctor_set(v___x_641_, 4, v_r_632_);
lean_ctor_set(v___x_641_, 3, v_r_632_);
lean_ctor_set(v___x_641_, 2, v_v_538_);
lean_ctor_set(v___x_641_, 1, v_k_537_);
lean_ctor_set(v___x_641_, 0, v___x_547_);
v___x_645_ = v___x_641_;
goto v_reusejp_644_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v___x_547_);
lean_ctor_set(v_reuseFailAlloc_652_, 1, v_k_537_);
lean_ctor_set(v_reuseFailAlloc_652_, 2, v_v_538_);
lean_ctor_set(v_reuseFailAlloc_652_, 3, v_r_632_);
lean_ctor_set(v_reuseFailAlloc_652_, 4, v_r_632_);
v___x_645_ = v_reuseFailAlloc_652_;
goto v_reusejp_644_;
}
v_reusejp_644_:
{
lean_object* v___x_647_; 
lean_inc(v_r_632_);
if (v_isShared_637_ == 0)
{
lean_ctor_set(v___x_636_, 3, v_r_632_);
lean_ctor_set(v___x_636_, 0, v___x_547_);
v___x_647_ = v___x_636_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v___x_547_);
lean_ctor_set(v_reuseFailAlloc_651_, 1, v_k_633_);
lean_ctor_set(v_reuseFailAlloc_651_, 2, v_v_634_);
lean_ctor_set(v_reuseFailAlloc_651_, 3, v_r_632_);
lean_ctor_set(v_reuseFailAlloc_651_, 4, v_r_632_);
v___x_647_ = v_reuseFailAlloc_651_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
lean_object* v___x_649_; 
if (v_isShared_543_ == 0)
{
lean_ctor_set(v___x_542_, 4, v___x_647_);
lean_ctor_set(v___x_542_, 3, v___x_645_);
lean_ctor_set(v___x_542_, 2, v_v_639_);
lean_ctor_set(v___x_542_, 1, v_k_638_);
lean_ctor_set(v___x_542_, 0, v___x_643_);
v___x_649_ = v___x_542_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v___x_643_);
lean_ctor_set(v_reuseFailAlloc_650_, 1, v_k_638_);
lean_ctor_set(v_reuseFailAlloc_650_, 2, v_v_639_);
lean_ctor_set(v_reuseFailAlloc_650_, 3, v___x_645_);
lean_ctor_set(v_reuseFailAlloc_650_, 4, v___x_647_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
return v___x_649_;
}
}
}
}
}
}
else
{
lean_object* v_r_660_; 
v_r_660_ = lean_ctor_get(v_impl_546_, 4);
lean_inc(v_r_660_);
if (lean_obj_tag(v_r_660_) == 0)
{
lean_object* v_k_661_; lean_object* v_v_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_673_; 
v_k_661_ = lean_ctor_get(v_impl_546_, 1);
v_v_662_ = lean_ctor_get(v_impl_546_, 2);
v_isSharedCheck_673_ = !lean_is_exclusive(v_impl_546_);
if (v_isSharedCheck_673_ == 0)
{
lean_object* v_unused_674_; lean_object* v_unused_675_; lean_object* v_unused_676_; 
v_unused_674_ = lean_ctor_get(v_impl_546_, 4);
lean_dec(v_unused_674_);
v_unused_675_ = lean_ctor_get(v_impl_546_, 3);
lean_dec(v_unused_675_);
v_unused_676_ = lean_ctor_get(v_impl_546_, 0);
lean_dec(v_unused_676_);
v___x_664_ = v_impl_546_;
v_isShared_665_ = v_isSharedCheck_673_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_v_662_);
lean_inc(v_k_661_);
lean_dec(v_impl_546_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_673_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v___x_666_; lean_object* v___x_668_; 
v___x_666_ = lean_unsigned_to_nat(3u);
if (v_isShared_665_ == 0)
{
lean_ctor_set(v___x_664_, 4, v_l_631_);
lean_ctor_set(v___x_664_, 2, v_v_538_);
lean_ctor_set(v___x_664_, 1, v_k_537_);
lean_ctor_set(v___x_664_, 0, v___x_547_);
v___x_668_ = v___x_664_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v___x_547_);
lean_ctor_set(v_reuseFailAlloc_672_, 1, v_k_537_);
lean_ctor_set(v_reuseFailAlloc_672_, 2, v_v_538_);
lean_ctor_set(v_reuseFailAlloc_672_, 3, v_l_631_);
lean_ctor_set(v_reuseFailAlloc_672_, 4, v_l_631_);
v___x_668_ = v_reuseFailAlloc_672_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
lean_object* v___x_670_; 
if (v_isShared_543_ == 0)
{
lean_ctor_set(v___x_542_, 4, v_r_660_);
lean_ctor_set(v___x_542_, 3, v___x_668_);
lean_ctor_set(v___x_542_, 2, v_v_662_);
lean_ctor_set(v___x_542_, 1, v_k_661_);
lean_ctor_set(v___x_542_, 0, v___x_666_);
v___x_670_ = v___x_542_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v___x_666_);
lean_ctor_set(v_reuseFailAlloc_671_, 1, v_k_661_);
lean_ctor_set(v_reuseFailAlloc_671_, 2, v_v_662_);
lean_ctor_set(v_reuseFailAlloc_671_, 3, v___x_668_);
lean_ctor_set(v_reuseFailAlloc_671_, 4, v_r_660_);
v___x_670_ = v_reuseFailAlloc_671_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
return v___x_670_;
}
}
}
}
else
{
lean_object* v___x_677_; lean_object* v___x_679_; 
v___x_677_ = lean_unsigned_to_nat(2u);
if (v_isShared_543_ == 0)
{
lean_ctor_set(v___x_542_, 4, v_impl_546_);
lean_ctor_set(v___x_542_, 3, v_r_660_);
lean_ctor_set(v___x_542_, 0, v___x_677_);
v___x_679_ = v___x_542_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v___x_677_);
lean_ctor_set(v_reuseFailAlloc_680_, 1, v_k_537_);
lean_ctor_set(v_reuseFailAlloc_680_, 2, v_v_538_);
lean_ctor_set(v_reuseFailAlloc_680_, 3, v_r_660_);
lean_ctor_set(v_reuseFailAlloc_680_, 4, v_impl_546_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
}
}
else
{
lean_object* v___x_682_; 
lean_dec(v_v_538_);
lean_dec(v_k_537_);
if (v_isShared_543_ == 0)
{
lean_ctor_set(v___x_542_, 2, v_v_534_);
lean_ctor_set(v___x_542_, 1, v_k_533_);
v___x_682_ = v___x_542_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v_size_536_);
lean_ctor_set(v_reuseFailAlloc_683_, 1, v_k_533_);
lean_ctor_set(v_reuseFailAlloc_683_, 2, v_v_534_);
lean_ctor_set(v_reuseFailAlloc_683_, 3, v_l_539_);
lean_ctor_set(v_reuseFailAlloc_683_, 4, v_r_540_);
v___x_682_ = v_reuseFailAlloc_683_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
return v___x_682_;
}
}
}
else
{
lean_object* v_impl_684_; lean_object* v___x_685_; 
lean_dec(v_size_536_);
v_impl_684_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__0___redArg(v_k_533_, v_v_534_, v_l_539_);
v___x_685_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_540_) == 0)
{
lean_object* v_size_686_; lean_object* v_size_687_; lean_object* v_k_688_; lean_object* v_v_689_; lean_object* v_l_690_; lean_object* v_r_691_; lean_object* v___x_692_; lean_object* v___x_693_; uint8_t v___x_694_; 
v_size_686_ = lean_ctor_get(v_r_540_, 0);
v_size_687_ = lean_ctor_get(v_impl_684_, 0);
v_k_688_ = lean_ctor_get(v_impl_684_, 1);
v_v_689_ = lean_ctor_get(v_impl_684_, 2);
v_l_690_ = lean_ctor_get(v_impl_684_, 3);
v_r_691_ = lean_ctor_get(v_impl_684_, 4);
lean_inc(v_r_691_);
v___x_692_ = lean_unsigned_to_nat(3u);
v___x_693_ = lean_nat_mul(v___x_692_, v_size_686_);
v___x_694_ = lean_nat_dec_lt(v___x_693_, v_size_687_);
lean_dec(v___x_693_);
if (v___x_694_ == 0)
{
lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_698_; 
lean_dec(v_r_691_);
v___x_695_ = lean_nat_add(v___x_685_, v_size_687_);
v___x_696_ = lean_nat_add(v___x_695_, v_size_686_);
lean_dec(v___x_695_);
if (v_isShared_543_ == 0)
{
lean_ctor_set(v___x_542_, 3, v_impl_684_);
lean_ctor_set(v___x_542_, 0, v___x_696_);
v___x_698_ = v___x_542_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v___x_696_);
lean_ctor_set(v_reuseFailAlloc_699_, 1, v_k_537_);
lean_ctor_set(v_reuseFailAlloc_699_, 2, v_v_538_);
lean_ctor_set(v_reuseFailAlloc_699_, 3, v_impl_684_);
lean_ctor_set(v_reuseFailAlloc_699_, 4, v_r_540_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
else
{
lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_765_; 
lean_inc(v_l_690_);
lean_inc(v_v_689_);
lean_inc(v_k_688_);
lean_inc(v_size_687_);
v_isSharedCheck_765_ = !lean_is_exclusive(v_impl_684_);
if (v_isSharedCheck_765_ == 0)
{
lean_object* v_unused_766_; lean_object* v_unused_767_; lean_object* v_unused_768_; lean_object* v_unused_769_; lean_object* v_unused_770_; 
v_unused_766_ = lean_ctor_get(v_impl_684_, 4);
lean_dec(v_unused_766_);
v_unused_767_ = lean_ctor_get(v_impl_684_, 3);
lean_dec(v_unused_767_);
v_unused_768_ = lean_ctor_get(v_impl_684_, 2);
lean_dec(v_unused_768_);
v_unused_769_ = lean_ctor_get(v_impl_684_, 1);
lean_dec(v_unused_769_);
v_unused_770_ = lean_ctor_get(v_impl_684_, 0);
lean_dec(v_unused_770_);
v___x_701_ = v_impl_684_;
v_isShared_702_ = v_isSharedCheck_765_;
goto v_resetjp_700_;
}
else
{
lean_dec(v_impl_684_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_765_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v_size_703_; lean_object* v_size_704_; lean_object* v_k_705_; lean_object* v_v_706_; lean_object* v_l_707_; lean_object* v_r_708_; lean_object* v___x_709_; lean_object* v___x_710_; uint8_t v___x_711_; 
v_size_703_ = lean_ctor_get(v_l_690_, 0);
v_size_704_ = lean_ctor_get(v_r_691_, 0);
v_k_705_ = lean_ctor_get(v_r_691_, 1);
v_v_706_ = lean_ctor_get(v_r_691_, 2);
v_l_707_ = lean_ctor_get(v_r_691_, 3);
v_r_708_ = lean_ctor_get(v_r_691_, 4);
v___x_709_ = lean_unsigned_to_nat(2u);
v___x_710_ = lean_nat_mul(v___x_709_, v_size_703_);
v___x_711_ = lean_nat_dec_lt(v_size_704_, v___x_710_);
lean_dec(v___x_710_);
if (v___x_711_ == 0)
{
lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_740_; 
lean_inc(v_r_708_);
lean_inc(v_l_707_);
lean_inc(v_v_706_);
lean_inc(v_k_705_);
v_isSharedCheck_740_ = !lean_is_exclusive(v_r_691_);
if (v_isSharedCheck_740_ == 0)
{
lean_object* v_unused_741_; lean_object* v_unused_742_; lean_object* v_unused_743_; lean_object* v_unused_744_; lean_object* v_unused_745_; 
v_unused_741_ = lean_ctor_get(v_r_691_, 4);
lean_dec(v_unused_741_);
v_unused_742_ = lean_ctor_get(v_r_691_, 3);
lean_dec(v_unused_742_);
v_unused_743_ = lean_ctor_get(v_r_691_, 2);
lean_dec(v_unused_743_);
v_unused_744_ = lean_ctor_get(v_r_691_, 1);
lean_dec(v_unused_744_);
v_unused_745_ = lean_ctor_get(v_r_691_, 0);
lean_dec(v_unused_745_);
v___x_713_ = v_r_691_;
v_isShared_714_ = v_isSharedCheck_740_;
goto v_resetjp_712_;
}
else
{
lean_dec(v_r_691_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_740_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___y_718_; lean_object* v___y_719_; lean_object* v___y_720_; lean_object* v___x_728_; lean_object* v___y_730_; 
v___x_715_ = lean_nat_add(v___x_685_, v_size_687_);
lean_dec(v_size_687_);
v___x_716_ = lean_nat_add(v___x_715_, v_size_686_);
lean_dec(v___x_715_);
v___x_728_ = lean_nat_add(v___x_685_, v_size_703_);
if (lean_obj_tag(v_l_707_) == 0)
{
lean_object* v_size_738_; 
v_size_738_ = lean_ctor_get(v_l_707_, 0);
lean_inc(v_size_738_);
v___y_730_ = v_size_738_;
goto v___jp_729_;
}
else
{
lean_object* v___x_739_; 
v___x_739_ = lean_unsigned_to_nat(0u);
v___y_730_ = v___x_739_;
goto v___jp_729_;
}
v___jp_717_:
{
lean_object* v___x_721_; lean_object* v___x_723_; 
v___x_721_ = lean_nat_add(v___y_719_, v___y_720_);
lean_dec(v___y_720_);
lean_dec(v___y_719_);
if (v_isShared_714_ == 0)
{
lean_ctor_set(v___x_713_, 4, v_r_540_);
lean_ctor_set(v___x_713_, 3, v_r_708_);
lean_ctor_set(v___x_713_, 2, v_v_538_);
lean_ctor_set(v___x_713_, 1, v_k_537_);
lean_ctor_set(v___x_713_, 0, v___x_721_);
v___x_723_ = v___x_713_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v___x_721_);
lean_ctor_set(v_reuseFailAlloc_727_, 1, v_k_537_);
lean_ctor_set(v_reuseFailAlloc_727_, 2, v_v_538_);
lean_ctor_set(v_reuseFailAlloc_727_, 3, v_r_708_);
lean_ctor_set(v_reuseFailAlloc_727_, 4, v_r_540_);
v___x_723_ = v_reuseFailAlloc_727_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
lean_object* v___x_725_; 
if (v_isShared_702_ == 0)
{
lean_ctor_set(v___x_701_, 4, v___x_723_);
lean_ctor_set(v___x_701_, 3, v___y_718_);
lean_ctor_set(v___x_701_, 2, v_v_706_);
lean_ctor_set(v___x_701_, 1, v_k_705_);
lean_ctor_set(v___x_701_, 0, v___x_716_);
v___x_725_ = v___x_701_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v___x_716_);
lean_ctor_set(v_reuseFailAlloc_726_, 1, v_k_705_);
lean_ctor_set(v_reuseFailAlloc_726_, 2, v_v_706_);
lean_ctor_set(v_reuseFailAlloc_726_, 3, v___y_718_);
lean_ctor_set(v_reuseFailAlloc_726_, 4, v___x_723_);
v___x_725_ = v_reuseFailAlloc_726_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
return v___x_725_;
}
}
}
v___jp_729_:
{
lean_object* v___x_731_; lean_object* v___x_733_; 
v___x_731_ = lean_nat_add(v___x_728_, v___y_730_);
lean_dec(v___y_730_);
lean_dec(v___x_728_);
if (v_isShared_543_ == 0)
{
lean_ctor_set(v___x_542_, 4, v_l_707_);
lean_ctor_set(v___x_542_, 3, v_l_690_);
lean_ctor_set(v___x_542_, 2, v_v_689_);
lean_ctor_set(v___x_542_, 1, v_k_688_);
lean_ctor_set(v___x_542_, 0, v___x_731_);
v___x_733_ = v___x_542_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v___x_731_);
lean_ctor_set(v_reuseFailAlloc_737_, 1, v_k_688_);
lean_ctor_set(v_reuseFailAlloc_737_, 2, v_v_689_);
lean_ctor_set(v_reuseFailAlloc_737_, 3, v_l_690_);
lean_ctor_set(v_reuseFailAlloc_737_, 4, v_l_707_);
v___x_733_ = v_reuseFailAlloc_737_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
lean_object* v___x_734_; 
v___x_734_ = lean_nat_add(v___x_685_, v_size_686_);
if (lean_obj_tag(v_r_708_) == 0)
{
lean_object* v_size_735_; 
v_size_735_ = lean_ctor_get(v_r_708_, 0);
lean_inc(v_size_735_);
v___y_718_ = v___x_733_;
v___y_719_ = v___x_734_;
v___y_720_ = v_size_735_;
goto v___jp_717_;
}
else
{
lean_object* v___x_736_; 
v___x_736_ = lean_unsigned_to_nat(0u);
v___y_718_ = v___x_733_;
v___y_719_ = v___x_734_;
v___y_720_ = v___x_736_;
goto v___jp_717_;
}
}
}
}
}
else
{
lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_751_; 
lean_del_object(v___x_542_);
v___x_746_ = lean_nat_add(v___x_685_, v_size_687_);
lean_dec(v_size_687_);
v___x_747_ = lean_nat_add(v___x_746_, v_size_686_);
lean_dec(v___x_746_);
v___x_748_ = lean_nat_add(v___x_685_, v_size_686_);
v___x_749_ = lean_nat_add(v___x_748_, v_size_704_);
lean_dec(v___x_748_);
lean_inc_ref(v_r_540_);
if (v_isShared_702_ == 0)
{
lean_ctor_set(v___x_701_, 4, v_r_540_);
lean_ctor_set(v___x_701_, 3, v_r_691_);
lean_ctor_set(v___x_701_, 2, v_v_538_);
lean_ctor_set(v___x_701_, 1, v_k_537_);
lean_ctor_set(v___x_701_, 0, v___x_749_);
v___x_751_ = v___x_701_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v___x_749_);
lean_ctor_set(v_reuseFailAlloc_764_, 1, v_k_537_);
lean_ctor_set(v_reuseFailAlloc_764_, 2, v_v_538_);
lean_ctor_set(v_reuseFailAlloc_764_, 3, v_r_691_);
lean_ctor_set(v_reuseFailAlloc_764_, 4, v_r_540_);
v___x_751_ = v_reuseFailAlloc_764_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_758_; 
v_isSharedCheck_758_ = !lean_is_exclusive(v_r_540_);
if (v_isSharedCheck_758_ == 0)
{
lean_object* v_unused_759_; lean_object* v_unused_760_; lean_object* v_unused_761_; lean_object* v_unused_762_; lean_object* v_unused_763_; 
v_unused_759_ = lean_ctor_get(v_r_540_, 4);
lean_dec(v_unused_759_);
v_unused_760_ = lean_ctor_get(v_r_540_, 3);
lean_dec(v_unused_760_);
v_unused_761_ = lean_ctor_get(v_r_540_, 2);
lean_dec(v_unused_761_);
v_unused_762_ = lean_ctor_get(v_r_540_, 1);
lean_dec(v_unused_762_);
v_unused_763_ = lean_ctor_get(v_r_540_, 0);
lean_dec(v_unused_763_);
v___x_753_ = v_r_540_;
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
else
{
lean_dec(v_r_540_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v___x_756_; 
if (v_isShared_754_ == 0)
{
lean_ctor_set(v___x_753_, 4, v___x_751_);
lean_ctor_set(v___x_753_, 3, v_l_690_);
lean_ctor_set(v___x_753_, 2, v_v_689_);
lean_ctor_set(v___x_753_, 1, v_k_688_);
lean_ctor_set(v___x_753_, 0, v___x_747_);
v___x_756_ = v___x_753_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v___x_747_);
lean_ctor_set(v_reuseFailAlloc_757_, 1, v_k_688_);
lean_ctor_set(v_reuseFailAlloc_757_, 2, v_v_689_);
lean_ctor_set(v_reuseFailAlloc_757_, 3, v_l_690_);
lean_ctor_set(v_reuseFailAlloc_757_, 4, v___x_751_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
return v___x_756_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_771_; 
v_l_771_ = lean_ctor_get(v_impl_684_, 3);
if (lean_obj_tag(v_l_771_) == 0)
{
lean_object* v_r_772_; lean_object* v_k_773_; lean_object* v_v_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_785_; 
lean_inc_ref(v_l_771_);
v_r_772_ = lean_ctor_get(v_impl_684_, 4);
v_k_773_ = lean_ctor_get(v_impl_684_, 1);
v_v_774_ = lean_ctor_get(v_impl_684_, 2);
v_isSharedCheck_785_ = !lean_is_exclusive(v_impl_684_);
if (v_isSharedCheck_785_ == 0)
{
lean_object* v_unused_786_; lean_object* v_unused_787_; 
v_unused_786_ = lean_ctor_get(v_impl_684_, 3);
lean_dec(v_unused_786_);
v_unused_787_ = lean_ctor_get(v_impl_684_, 0);
lean_dec(v_unused_787_);
v___x_776_ = v_impl_684_;
v_isShared_777_ = v_isSharedCheck_785_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_r_772_);
lean_inc(v_v_774_);
lean_inc(v_k_773_);
lean_dec(v_impl_684_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_785_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___x_778_; lean_object* v___x_780_; 
v___x_778_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_772_);
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 3, v_r_772_);
lean_ctor_set(v___x_776_, 2, v_v_538_);
lean_ctor_set(v___x_776_, 1, v_k_537_);
lean_ctor_set(v___x_776_, 0, v___x_685_);
v___x_780_ = v___x_776_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v___x_685_);
lean_ctor_set(v_reuseFailAlloc_784_, 1, v_k_537_);
lean_ctor_set(v_reuseFailAlloc_784_, 2, v_v_538_);
lean_ctor_set(v_reuseFailAlloc_784_, 3, v_r_772_);
lean_ctor_set(v_reuseFailAlloc_784_, 4, v_r_772_);
v___x_780_ = v_reuseFailAlloc_784_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
lean_object* v___x_782_; 
if (v_isShared_543_ == 0)
{
lean_ctor_set(v___x_542_, 4, v___x_780_);
lean_ctor_set(v___x_542_, 3, v_l_771_);
lean_ctor_set(v___x_542_, 2, v_v_774_);
lean_ctor_set(v___x_542_, 1, v_k_773_);
lean_ctor_set(v___x_542_, 0, v___x_778_);
v___x_782_ = v___x_542_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v___x_778_);
lean_ctor_set(v_reuseFailAlloc_783_, 1, v_k_773_);
lean_ctor_set(v_reuseFailAlloc_783_, 2, v_v_774_);
lean_ctor_set(v_reuseFailAlloc_783_, 3, v_l_771_);
lean_ctor_set(v_reuseFailAlloc_783_, 4, v___x_780_);
v___x_782_ = v_reuseFailAlloc_783_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
return v___x_782_;
}
}
}
}
else
{
lean_object* v_r_788_; 
v_r_788_ = lean_ctor_get(v_impl_684_, 4);
lean_inc(v_r_788_);
if (lean_obj_tag(v_r_788_) == 0)
{
lean_object* v_k_789_; lean_object* v_v_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_813_; 
lean_inc(v_l_771_);
v_k_789_ = lean_ctor_get(v_impl_684_, 1);
v_v_790_ = lean_ctor_get(v_impl_684_, 2);
v_isSharedCheck_813_ = !lean_is_exclusive(v_impl_684_);
if (v_isSharedCheck_813_ == 0)
{
lean_object* v_unused_814_; lean_object* v_unused_815_; lean_object* v_unused_816_; 
v_unused_814_ = lean_ctor_get(v_impl_684_, 4);
lean_dec(v_unused_814_);
v_unused_815_ = lean_ctor_get(v_impl_684_, 3);
lean_dec(v_unused_815_);
v_unused_816_ = lean_ctor_get(v_impl_684_, 0);
lean_dec(v_unused_816_);
v___x_792_ = v_impl_684_;
v_isShared_793_ = v_isSharedCheck_813_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_v_790_);
lean_inc(v_k_789_);
lean_dec(v_impl_684_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_813_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v_k_794_; lean_object* v_v_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_809_; 
v_k_794_ = lean_ctor_get(v_r_788_, 1);
v_v_795_ = lean_ctor_get(v_r_788_, 2);
v_isSharedCheck_809_ = !lean_is_exclusive(v_r_788_);
if (v_isSharedCheck_809_ == 0)
{
lean_object* v_unused_810_; lean_object* v_unused_811_; lean_object* v_unused_812_; 
v_unused_810_ = lean_ctor_get(v_r_788_, 4);
lean_dec(v_unused_810_);
v_unused_811_ = lean_ctor_get(v_r_788_, 3);
lean_dec(v_unused_811_);
v_unused_812_ = lean_ctor_get(v_r_788_, 0);
lean_dec(v_unused_812_);
v___x_797_ = v_r_788_;
v_isShared_798_ = v_isSharedCheck_809_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_v_795_);
lean_inc(v_k_794_);
lean_dec(v_r_788_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_809_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_799_; lean_object* v___x_801_; 
v___x_799_ = lean_unsigned_to_nat(3u);
if (v_isShared_798_ == 0)
{
lean_ctor_set(v___x_797_, 4, v_l_771_);
lean_ctor_set(v___x_797_, 3, v_l_771_);
lean_ctor_set(v___x_797_, 2, v_v_790_);
lean_ctor_set(v___x_797_, 1, v_k_789_);
lean_ctor_set(v___x_797_, 0, v___x_685_);
v___x_801_ = v___x_797_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v___x_685_);
lean_ctor_set(v_reuseFailAlloc_808_, 1, v_k_789_);
lean_ctor_set(v_reuseFailAlloc_808_, 2, v_v_790_);
lean_ctor_set(v_reuseFailAlloc_808_, 3, v_l_771_);
lean_ctor_set(v_reuseFailAlloc_808_, 4, v_l_771_);
v___x_801_ = v_reuseFailAlloc_808_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
lean_object* v___x_803_; 
if (v_isShared_793_ == 0)
{
lean_ctor_set(v___x_792_, 4, v_l_771_);
lean_ctor_set(v___x_792_, 2, v_v_538_);
lean_ctor_set(v___x_792_, 1, v_k_537_);
lean_ctor_set(v___x_792_, 0, v___x_685_);
v___x_803_ = v___x_792_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v___x_685_);
lean_ctor_set(v_reuseFailAlloc_807_, 1, v_k_537_);
lean_ctor_set(v_reuseFailAlloc_807_, 2, v_v_538_);
lean_ctor_set(v_reuseFailAlloc_807_, 3, v_l_771_);
lean_ctor_set(v_reuseFailAlloc_807_, 4, v_l_771_);
v___x_803_ = v_reuseFailAlloc_807_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
lean_object* v___x_805_; 
if (v_isShared_543_ == 0)
{
lean_ctor_set(v___x_542_, 4, v___x_803_);
lean_ctor_set(v___x_542_, 3, v___x_801_);
lean_ctor_set(v___x_542_, 2, v_v_795_);
lean_ctor_set(v___x_542_, 1, v_k_794_);
lean_ctor_set(v___x_542_, 0, v___x_799_);
v___x_805_ = v___x_542_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v___x_799_);
lean_ctor_set(v_reuseFailAlloc_806_, 1, v_k_794_);
lean_ctor_set(v_reuseFailAlloc_806_, 2, v_v_795_);
lean_ctor_set(v_reuseFailAlloc_806_, 3, v___x_801_);
lean_ctor_set(v_reuseFailAlloc_806_, 4, v___x_803_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
return v___x_805_;
}
}
}
}
}
}
else
{
lean_object* v___x_817_; lean_object* v___x_819_; 
v___x_817_ = lean_unsigned_to_nat(2u);
if (v_isShared_543_ == 0)
{
lean_ctor_set(v___x_542_, 4, v_r_788_);
lean_ctor_set(v___x_542_, 3, v_impl_684_);
lean_ctor_set(v___x_542_, 0, v___x_817_);
v___x_819_ = v___x_542_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v___x_817_);
lean_ctor_set(v_reuseFailAlloc_820_, 1, v_k_537_);
lean_ctor_set(v_reuseFailAlloc_820_, 2, v_v_538_);
lean_ctor_set(v_reuseFailAlloc_820_, 3, v_impl_684_);
lean_ctor_set(v_reuseFailAlloc_820_, 4, v_r_788_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_822_ = lean_unsigned_to_nat(1u);
v___x_823_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_823_, 0, v___x_822_);
lean_ctor_set(v___x_823_, 1, v_k_533_);
lean_ctor_set(v___x_823_, 2, v_v_534_);
lean_ctor_set(v___x_823_, 3, v_t_535_);
lean_ctor_set(v___x_823_, 4, v_t_535_);
return v___x_823_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg___lam__0(lean_object* v___y_824_){
_start:
{
lean_object* v___x_826_; lean_object* v_producers_827_; lean_object* v_waiters_828_; lean_object* v_capacity_829_; lean_object* v_size_830_; lean_object* v_buffer_831_; lean_object* v_write_832_; lean_object* v_read_833_; lean_object* v_receivers_834_; lean_object* v_nextId_835_; uint8_t v_closed_836_; lean_object* v_pos_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_849_; 
v___x_826_ = lean_st_ref_take(v___y_824_);
v_producers_827_ = lean_ctor_get(v___x_826_, 0);
v_waiters_828_ = lean_ctor_get(v___x_826_, 1);
v_capacity_829_ = lean_ctor_get(v___x_826_, 2);
v_size_830_ = lean_ctor_get(v___x_826_, 3);
v_buffer_831_ = lean_ctor_get(v___x_826_, 4);
v_write_832_ = lean_ctor_get(v___x_826_, 5);
v_read_833_ = lean_ctor_get(v___x_826_, 6);
v_receivers_834_ = lean_ctor_get(v___x_826_, 7);
v_nextId_835_ = lean_ctor_get(v___x_826_, 8);
v_closed_836_ = lean_ctor_get_uint8(v___x_826_, sizeof(void*)*10);
v_pos_837_ = lean_ctor_get(v___x_826_, 9);
v_isSharedCheck_849_ = !lean_is_exclusive(v___x_826_);
if (v_isSharedCheck_849_ == 0)
{
v___x_839_ = v___x_826_;
v_isShared_840_ = v_isSharedCheck_849_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_pos_837_);
lean_inc(v_nextId_835_);
lean_inc(v_receivers_834_);
lean_inc(v_read_833_);
lean_inc(v_write_832_);
lean_inc(v_buffer_831_);
lean_inc(v_size_830_);
lean_inc(v_capacity_829_);
lean_inc(v_waiters_828_);
lean_inc(v_producers_827_);
lean_dec(v___x_826_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_849_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_845_; 
lean_inc(v_pos_837_);
lean_inc(v_nextId_835_);
v___x_841_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__0___redArg(v_nextId_835_, v_pos_837_, v_receivers_834_);
v___x_842_ = lean_unsigned_to_nat(1u);
v___x_843_ = lean_nat_add(v_nextId_835_, v___x_842_);
if (v_isShared_840_ == 0)
{
lean_ctor_set(v___x_839_, 8, v___x_843_);
lean_ctor_set(v___x_839_, 7, v___x_841_);
v___x_845_ = v___x_839_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v_producers_827_);
lean_ctor_set(v_reuseFailAlloc_848_, 1, v_waiters_828_);
lean_ctor_set(v_reuseFailAlloc_848_, 2, v_capacity_829_);
lean_ctor_set(v_reuseFailAlloc_848_, 3, v_size_830_);
lean_ctor_set(v_reuseFailAlloc_848_, 4, v_buffer_831_);
lean_ctor_set(v_reuseFailAlloc_848_, 5, v_write_832_);
lean_ctor_set(v_reuseFailAlloc_848_, 6, v_read_833_);
lean_ctor_set(v_reuseFailAlloc_848_, 7, v___x_841_);
lean_ctor_set(v_reuseFailAlloc_848_, 8, v___x_843_);
lean_ctor_set(v_reuseFailAlloc_848_, 9, v_pos_837_);
lean_ctor_set_uint8(v_reuseFailAlloc_848_, sizeof(void*)*10, v_closed_836_);
v___x_845_ = v_reuseFailAlloc_848_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_846_ = lean_st_ref_put(v___y_824_, v___x_845_);
v___x_847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_847_, 0, v_nextId_835_);
return v___x_847_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg___lam__0___boxed(lean_object* v___y_850_, lean_object* v___y_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg___lam__0(v___y_850_);
lean_dec(v___y_850_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg(lean_object* v_bd_854_){
_start:
{
lean_object* v___f_856_; lean_object* v___x_857_; 
v___f_856_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg___closed__0));
lean_inc_ref(v_bd_854_);
v___x_857_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___redArg(v_bd_854_, v___f_856_);
if (lean_obj_tag(v___x_857_) == 0)
{
lean_object* v_a_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_866_; 
v_a_858_ = lean_ctor_get(v___x_857_, 0);
v_isSharedCheck_866_ = !lean_is_exclusive(v___x_857_);
if (v_isSharedCheck_866_ == 0)
{
v___x_860_ = v___x_857_;
v_isShared_861_ = v_isSharedCheck_866_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_a_858_);
lean_dec(v___x_857_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_866_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
lean_object* v___x_862_; lean_object* v___x_864_; 
v___x_862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_862_, 0, v_bd_854_);
lean_ctor_set(v___x_862_, 1, v_a_858_);
if (v_isShared_861_ == 0)
{
lean_ctor_set(v___x_860_, 0, v___x_862_);
v___x_864_ = v___x_860_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v___x_862_);
v___x_864_ = v_reuseFailAlloc_865_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
return v___x_864_;
}
}
}
else
{
lean_object* v_a_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_874_; 
lean_dec_ref(v_bd_854_);
v_a_867_ = lean_ctor_get(v___x_857_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_857_);
if (v_isSharedCheck_874_ == 0)
{
v___x_869_ = v___x_857_;
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_a_867_);
lean_dec(v___x_857_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_872_; 
if (v_isShared_870_ == 0)
{
v___x_872_ = v___x_869_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_a_867_);
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
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg___boxed(lean_object* v_bd_875_, lean_object* v_a_876_){
_start:
{
lean_object* v_res_877_; 
v_res_877_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg(v_bd_875_);
return v_res_877_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe(lean_object* v_00_u03b1_878_, lean_object* v_bd_879_){
_start:
{
lean_object* v___x_881_; 
v___x_881_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg(v_bd_879_);
return v___x_881_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___boxed(lean_object* v_00_u03b1_882_, lean_object* v_bd_883_, lean_object* v_a_884_){
_start:
{
lean_object* v_res_885_; 
v_res_885_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe(v_00_u03b1_882_, v_bd_883_);
return v_res_885_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__0(lean_object* v_00_u03b2_886_, lean_object* v_k_887_, lean_object* v_v_888_, lean_object* v_t_889_, lean_object* v_hl_890_){
_start:
{
lean_object* v___x_891_; 
v___x_891_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__0___redArg(v_k_887_, v_v_888_, v_t_889_);
return v___x_891_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___redArg___lam__0(lean_object* v_toApplicative_892_, lean_object* v_a_893_){
_start:
{
lean_object* v_size_894_; lean_object* v_toPure_895_; lean_object* v___x_896_; uint8_t v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
v_size_894_ = lean_ctor_get(v_a_893_, 3);
v_toPure_895_ = lean_ctor_get(v_toApplicative_892_, 1);
lean_inc(v_toPure_895_);
lean_dec_ref(v_toApplicative_892_);
v___x_896_ = lean_unsigned_to_nat(0u);
v___x_897_ = lean_nat_dec_eq(v_size_894_, v___x_896_);
v___x_898_ = lean_box(v___x_897_);
v___x_899_ = lean_apply_2(v_toPure_895_, lean_box(0), v___x_898_);
return v___x_899_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___redArg___lam__0___boxed(lean_object* v_toApplicative_900_, lean_object* v_a_901_){
_start:
{
lean_object* v_res_902_; 
v_res_902_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___redArg___lam__0(v_toApplicative_900_, v_a_901_);
lean_dec_ref(v_a_901_);
return v_res_902_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___redArg(lean_object* v_inst_903_, lean_object* v_inst_904_, lean_object* v_a_905_){
_start:
{
lean_object* v_toApplicative_906_; lean_object* v_toBind_907_; lean_object* v___f_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; 
v_toApplicative_906_ = lean_ctor_get(v_inst_903_, 0);
lean_inc_ref(v_toApplicative_906_);
v_toBind_907_ = lean_ctor_get(v_inst_903_, 1);
lean_inc(v_toBind_907_);
lean_dec_ref(v_inst_903_);
v___f_908_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_908_, 0, v_toApplicative_906_);
lean_inc(v_a_905_);
v___x_909_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_909_, 0, lean_box(0));
lean_closure_set(v___x_909_, 1, lean_box(0));
lean_closure_set(v___x_909_, 2, v_a_905_);
v___x_910_ = lean_apply_2(v_inst_904_, lean_box(0), v___x_909_);
v___x_911_ = lean_apply_4(v_toBind_907_, lean_box(0), lean_box(0), v___x_910_, v___f_908_);
return v___x_911_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___redArg___boxed(lean_object* v_inst_912_, lean_object* v_inst_913_, lean_object* v_a_914_){
_start:
{
lean_object* v_res_915_; 
v_res_915_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___redArg(v_inst_912_, v_inst_913_, v_a_914_);
lean_dec(v_a_914_);
return v_res_915_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty(lean_object* v_m_916_, lean_object* v_00_u03b1_917_, lean_object* v_inst_918_, lean_object* v_inst_919_, lean_object* v_a_920_){
_start:
{
lean_object* v___x_921_; 
v___x_921_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___redArg(v_inst_918_, v_inst_919_, v_a_920_);
return v___x_921_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___boxed(lean_object* v_m_922_, lean_object* v_00_u03b1_923_, lean_object* v_inst_924_, lean_object* v_inst_925_, lean_object* v_a_926_){
_start:
{
lean_object* v_res_927_; 
v_res_927_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty(v_m_922_, v_00_u03b1_923_, v_inst_924_, v_inst_925_, v_a_926_);
lean_dec(v_a_926_);
return v_res_927_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_isFull___redArg(lean_object* v_a_928_){
_start:
{
lean_object* v___x_930_; lean_object* v_capacity_931_; lean_object* v_size_932_; uint8_t v___x_933_; 
v___x_930_ = lean_st_ref_get(v_a_928_);
v_capacity_931_ = lean_ctor_get(v___x_930_, 2);
lean_inc(v_capacity_931_);
v_size_932_ = lean_ctor_get(v___x_930_, 3);
lean_inc(v_size_932_);
lean_dec(v___x_930_);
v___x_933_ = lean_nat_dec_le(v_capacity_931_, v_size_932_);
lean_dec(v_size_932_);
lean_dec(v_capacity_931_);
return v___x_933_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isFull___redArg___boxed(lean_object* v_a_934_, lean_object* v_a_935_){
_start:
{
uint8_t v_res_936_; lean_object* v_r_937_; 
v_res_936_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isFull___redArg(v_a_934_);
lean_dec(v_a_934_);
v_r_937_ = lean_box(v_res_936_);
return v_r_937_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_isFull(lean_object* v_00_u03b1_938_, lean_object* v_a_939_){
_start:
{
uint8_t v___x_941_; 
v___x_941_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isFull___redArg(v_a_939_);
return v___x_941_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isFull___boxed(lean_object* v_00_u03b1_942_, lean_object* v_a_943_, lean_object* v_a_944_){
_start:
{
uint8_t v_res_945_; lean_object* v_r_946_; 
v_res_945_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isFull(v_00_u03b1_942_, v_a_943_);
lean_dec(v_a_943_);
v_r_946_ = lean_box(v_res_945_);
return v_r_946_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_enqueue___redArg(lean_object* v_value_947_, lean_object* v_st_948_){
_start:
{
lean_object* v_producers_950_; lean_object* v_waiters_951_; lean_object* v_capacity_952_; lean_object* v_size_953_; lean_object* v_buffer_954_; lean_object* v_write_955_; lean_object* v_read_956_; lean_object* v_receivers_957_; lean_object* v_nextId_958_; uint8_t v_closed_959_; lean_object* v_pos_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_980_; 
v_producers_950_ = lean_ctor_get(v_st_948_, 0);
v_waiters_951_ = lean_ctor_get(v_st_948_, 1);
v_capacity_952_ = lean_ctor_get(v_st_948_, 2);
v_size_953_ = lean_ctor_get(v_st_948_, 3);
v_buffer_954_ = lean_ctor_get(v_st_948_, 4);
v_write_955_ = lean_ctor_get(v_st_948_, 5);
v_read_956_ = lean_ctor_get(v_st_948_, 6);
v_receivers_957_ = lean_ctor_get(v_st_948_, 7);
v_nextId_958_ = lean_ctor_get(v_st_948_, 8);
v_closed_959_ = lean_ctor_get_uint8(v_st_948_, sizeof(void*)*10);
v_pos_960_ = lean_ctor_get(v_st_948_, 9);
v_isSharedCheck_980_ = !lean_is_exclusive(v_st_948_);
if (v_isSharedCheck_980_ == 0)
{
v___x_962_ = v_st_948_;
v_isShared_963_ = v_isSharedCheck_980_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_pos_960_);
lean_inc(v_nextId_958_);
lean_inc(v_receivers_957_);
lean_inc(v_read_956_);
lean_inc(v_write_955_);
lean_inc(v_buffer_954_);
lean_inc(v_size_953_);
lean_inc(v_capacity_952_);
lean_inc(v_waiters_951_);
lean_inc(v_producers_950_);
lean_dec(v_st_948_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_980_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v_tailRef_964_; lean_object* v___x_965_; lean_object* v___y_967_; 
v_tailRef_964_ = lean_array_fget_borrowed(v_buffer_954_, v_write_955_);
v___x_965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_965_, 0, v_value_947_);
if (lean_obj_tag(v_receivers_957_) == 0)
{
lean_object* v_size_978_; 
v_size_978_ = lean_ctor_get(v_receivers_957_, 0);
lean_inc(v_size_978_);
v___y_967_ = v_size_978_;
goto v___jp_966_;
}
else
{
lean_object* v___x_979_; 
v___x_979_ = lean_unsigned_to_nat(0u);
v___y_967_ = v___x_979_;
goto v___jp_966_;
}
v___jp_966_:
{
lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_976_; 
lean_inc(v_pos_960_);
v___x_968_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_968_, 0, v___x_965_);
lean_ctor_set(v___x_968_, 1, v_pos_960_);
lean_ctor_set(v___x_968_, 2, v___y_967_);
v___x_969_ = lean_st_ref_swap(v_tailRef_964_, v___x_968_);
lean_dec(v___x_969_);
v___x_970_ = lean_unsigned_to_nat(1u);
v___x_971_ = lean_nat_add(v_write_955_, v___x_970_);
lean_dec(v_write_955_);
v___x_972_ = lean_nat_mod(v___x_971_, v_capacity_952_);
lean_dec(v___x_971_);
v___x_973_ = lean_nat_add(v_size_953_, v___x_970_);
lean_dec(v_size_953_);
v___x_974_ = lean_nat_add(v_pos_960_, v___x_970_);
lean_dec(v_pos_960_);
if (v_isShared_963_ == 0)
{
lean_ctor_set(v___x_962_, 9, v___x_974_);
lean_ctor_set(v___x_962_, 5, v___x_972_);
lean_ctor_set(v___x_962_, 3, v___x_973_);
v___x_976_ = v___x_962_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v_producers_950_);
lean_ctor_set(v_reuseFailAlloc_977_, 1, v_waiters_951_);
lean_ctor_set(v_reuseFailAlloc_977_, 2, v_capacity_952_);
lean_ctor_set(v_reuseFailAlloc_977_, 3, v___x_973_);
lean_ctor_set(v_reuseFailAlloc_977_, 4, v_buffer_954_);
lean_ctor_set(v_reuseFailAlloc_977_, 5, v___x_972_);
lean_ctor_set(v_reuseFailAlloc_977_, 6, v_read_956_);
lean_ctor_set(v_reuseFailAlloc_977_, 7, v_receivers_957_);
lean_ctor_set(v_reuseFailAlloc_977_, 8, v_nextId_958_);
lean_ctor_set(v_reuseFailAlloc_977_, 9, v___x_974_);
lean_ctor_set_uint8(v_reuseFailAlloc_977_, sizeof(void*)*10, v_closed_959_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
return v___x_976_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_enqueue___redArg___boxed(lean_object* v_value_981_, lean_object* v_st_982_, lean_object* v_a_983_){
_start:
{
lean_object* v_res_984_; 
v_res_984_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_enqueue___redArg(v_value_981_, v_st_982_);
return v_res_984_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_enqueue(lean_object* v_00_u03b1_985_, lean_object* v_value_986_, lean_object* v_st_987_){
_start:
{
lean_object* v___x_989_; 
v___x_989_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_enqueue___redArg(v_value_986_, v_st_987_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_enqueue___boxed(lean_object* v_00_u03b1_990_, lean_object* v_value_991_, lean_object* v_st_992_, lean_object* v_a_993_){
_start:
{
lean_object* v_res_994_; 
v_res_994_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_enqueue(v_00_u03b1_990_, v_value_991_, v_st_992_);
return v_res_994_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_dequeue___redArg(lean_object* v_st_995_){
_start:
{
lean_object* v_producers_996_; lean_object* v_waiters_997_; lean_object* v_capacity_998_; lean_object* v_size_999_; lean_object* v_buffer_1000_; lean_object* v_write_1001_; lean_object* v_read_1002_; lean_object* v_receivers_1003_; lean_object* v_nextId_1004_; uint8_t v_closed_1005_; lean_object* v_pos_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1017_; 
v_producers_996_ = lean_ctor_get(v_st_995_, 0);
v_waiters_997_ = lean_ctor_get(v_st_995_, 1);
v_capacity_998_ = lean_ctor_get(v_st_995_, 2);
v_size_999_ = lean_ctor_get(v_st_995_, 3);
v_buffer_1000_ = lean_ctor_get(v_st_995_, 4);
v_write_1001_ = lean_ctor_get(v_st_995_, 5);
v_read_1002_ = lean_ctor_get(v_st_995_, 6);
v_receivers_1003_ = lean_ctor_get(v_st_995_, 7);
v_nextId_1004_ = lean_ctor_get(v_st_995_, 8);
v_closed_1005_ = lean_ctor_get_uint8(v_st_995_, sizeof(void*)*10);
v_pos_1006_ = lean_ctor_get(v_st_995_, 9);
v_isSharedCheck_1017_ = !lean_is_exclusive(v_st_995_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_1008_ = v_st_995_;
v_isShared_1009_ = v_isSharedCheck_1017_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_pos_1006_);
lean_inc(v_nextId_1004_);
lean_inc(v_receivers_1003_);
lean_inc(v_read_1002_);
lean_inc(v_write_1001_);
lean_inc(v_buffer_1000_);
lean_inc(v_size_999_);
lean_inc(v_capacity_998_);
lean_inc(v_waiters_997_);
lean_inc(v_producers_996_);
lean_dec(v_st_995_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1017_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v___x_1010_; lean_object* v_size_1011_; lean_object* v___x_1012_; lean_object* v_read_1013_; lean_object* v___x_1015_; 
v___x_1010_ = lean_unsigned_to_nat(1u);
v_size_1011_ = lean_nat_sub(v_size_999_, v___x_1010_);
lean_dec(v_size_999_);
v___x_1012_ = lean_nat_add(v_read_1002_, v___x_1010_);
lean_dec(v_read_1002_);
v_read_1013_ = lean_nat_mod(v___x_1012_, v_capacity_998_);
lean_dec(v___x_1012_);
if (v_isShared_1009_ == 0)
{
lean_ctor_set(v___x_1008_, 6, v_read_1013_);
lean_ctor_set(v___x_1008_, 3, v_size_1011_);
v___x_1015_ = v___x_1008_;
goto v_reusejp_1014_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v_producers_996_);
lean_ctor_set(v_reuseFailAlloc_1016_, 1, v_waiters_997_);
lean_ctor_set(v_reuseFailAlloc_1016_, 2, v_capacity_998_);
lean_ctor_set(v_reuseFailAlloc_1016_, 3, v_size_1011_);
lean_ctor_set(v_reuseFailAlloc_1016_, 4, v_buffer_1000_);
lean_ctor_set(v_reuseFailAlloc_1016_, 5, v_write_1001_);
lean_ctor_set(v_reuseFailAlloc_1016_, 6, v_read_1013_);
lean_ctor_set(v_reuseFailAlloc_1016_, 7, v_receivers_1003_);
lean_ctor_set(v_reuseFailAlloc_1016_, 8, v_nextId_1004_);
lean_ctor_set(v_reuseFailAlloc_1016_, 9, v_pos_1006_);
lean_ctor_set_uint8(v_reuseFailAlloc_1016_, sizeof(void*)*10, v_closed_1005_);
v___x_1015_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1014_;
}
v_reusejp_1014_:
{
return v___x_1015_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_dequeue(lean_object* v_00_u03b1_1018_, lean_object* v_st_1019_){
_start:
{
lean_object* v___x_1020_; 
v___x_1020_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_dequeue___redArg(v_st_1019_);
return v___x_1020_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg___lam__0(lean_object* v_toApplicative_1021_, lean_object* v_place_1022_, lean_object* v_a_1023_){
_start:
{
lean_object* v_capacity_1024_; lean_object* v_buffer_1025_; lean_object* v_toPure_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; 
v_capacity_1024_ = lean_ctor_get(v_a_1023_, 2);
v_buffer_1025_ = lean_ctor_get(v_a_1023_, 4);
v_toPure_1026_ = lean_ctor_get(v_toApplicative_1021_, 1);
lean_inc(v_toPure_1026_);
lean_dec_ref(v_toApplicative_1021_);
v___x_1027_ = lean_nat_mod(v_place_1022_, v_capacity_1024_);
v___x_1028_ = lean_array_fget_borrowed(v_buffer_1025_, v___x_1027_);
lean_dec(v___x_1027_);
lean_inc(v___x_1028_);
v___x_1029_ = lean_apply_2(v_toPure_1026_, lean_box(0), v___x_1028_);
return v___x_1029_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg___lam__0___boxed(lean_object* v_toApplicative_1030_, lean_object* v_place_1031_, lean_object* v_a_1032_){
_start:
{
lean_object* v_res_1033_; 
v_res_1033_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg___lam__0(v_toApplicative_1030_, v_place_1031_, v_a_1032_);
lean_dec_ref(v_a_1032_);
lean_dec(v_place_1031_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg(lean_object* v_inst_1034_, lean_object* v_inst_1035_, lean_object* v_place_1036_, lean_object* v_a_1037_){
_start:
{
lean_object* v_toApplicative_1038_; lean_object* v_toBind_1039_; lean_object* v___f_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; 
v_toApplicative_1038_ = lean_ctor_get(v_inst_1034_, 0);
lean_inc_ref(v_toApplicative_1038_);
v_toBind_1039_ = lean_ctor_get(v_inst_1034_, 1);
lean_inc(v_toBind_1039_);
lean_dec_ref(v_inst_1034_);
v___f_1040_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1040_, 0, v_toApplicative_1038_);
lean_closure_set(v___f_1040_, 1, v_place_1036_);
lean_inc(v_a_1037_);
v___x_1041_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1041_, 0, lean_box(0));
lean_closure_set(v___x_1041_, 1, lean_box(0));
lean_closure_set(v___x_1041_, 2, v_a_1037_);
v___x_1042_ = lean_apply_2(v_inst_1035_, lean_box(0), v___x_1041_);
v___x_1043_ = lean_apply_4(v_toBind_1039_, lean_box(0), lean_box(0), v___x_1042_, v___f_1040_);
return v___x_1043_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg___boxed(lean_object* v_inst_1044_, lean_object* v_inst_1045_, lean_object* v_place_1046_, lean_object* v_a_1047_){
_start:
{
lean_object* v_res_1048_; 
v_res_1048_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg(v_inst_1044_, v_inst_1045_, v_place_1046_, v_a_1047_);
lean_dec(v_a_1047_);
return v_res_1048_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot(lean_object* v_m_1049_, lean_object* v_00_u03b1_1050_, lean_object* v_inst_1051_, lean_object* v_inst_1052_, lean_object* v_place_1053_, lean_object* v_a_1054_){
_start:
{
lean_object* v___x_1055_; 
v___x_1055_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg(v_inst_1051_, v_inst_1052_, v_place_1053_, v_a_1054_);
return v___x_1055_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___boxed(lean_object* v_m_1056_, lean_object* v_00_u03b1_1057_, lean_object* v_inst_1058_, lean_object* v_inst_1059_, lean_object* v_place_1060_, lean_object* v_a_1061_){
_start:
{
lean_object* v_res_1062_; 
v_res_1062_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot(v_m_1056_, v_00_u03b1_1057_, v_inst_1058_, v_inst_1059_, v_place_1060_, v_a_1061_);
lean_dec(v_a_1061_);
return v_res_1062_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27_spec__0___redArg(lean_object* v_as_1063_, size_t v_sz_1064_, size_t v_i_1065_, lean_object* v_b_1066_){
_start:
{
uint8_t v___x_1068_; 
v___x_1068_ = lean_usize_dec_lt(v_i_1065_, v_sz_1064_);
if (v___x_1068_ == 0)
{
return v_b_1066_;
}
else
{
lean_object* v___x_1069_; lean_object* v_a_1070_; lean_object* v___x_1071_; size_t v___x_1072_; size_t v___x_1073_; 
v___x_1069_ = lean_box(0);
v_a_1070_ = lean_array_uget_borrowed(v_as_1063_, v_i_1065_);
v___x_1071_ = l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve___redArg(v_a_1070_, v___x_1068_);
v___x_1072_ = ((size_t)1ULL);
v___x_1073_ = lean_usize_add(v_i_1065_, v___x_1072_);
v_i_1065_ = v___x_1073_;
v_b_1066_ = v___x_1069_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27_spec__0___redArg___boxed(lean_object* v_as_1075_, lean_object* v_sz_1076_, lean_object* v_i_1077_, lean_object* v_b_1078_, lean_object* v___y_1079_){
_start:
{
size_t v_sz_boxed_1080_; size_t v_i_boxed_1081_; lean_object* v_res_1082_; 
v_sz_boxed_1080_ = lean_unbox_usize(v_sz_1076_);
lean_dec(v_sz_1076_);
v_i_boxed_1081_ = lean_unbox_usize(v_i_1077_);
lean_dec(v_i_1077_);
v_res_1082_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27_spec__0___redArg(v_as_1075_, v_sz_boxed_1080_, v_i_boxed_1081_, v_b_1078_);
lean_dec_ref(v_as_1075_);
return v_res_1082_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27___redArg(lean_object* v_v_1083_, lean_object* v_a_1084_){
_start:
{
uint8_t v___x_1086_; 
v___x_1086_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isFull___redArg(v_a_1084_);
if (v___x_1086_ == 0)
{
lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v_producers_1089_; lean_object* v_waiters_1090_; lean_object* v_capacity_1091_; lean_object* v_size_1092_; lean_object* v_buffer_1093_; lean_object* v_write_1094_; lean_object* v_read_1095_; lean_object* v_receivers_1096_; lean_object* v_nextId_1097_; uint8_t v_closed_1098_; lean_object* v_pos_1099_; lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1118_; 
v___x_1087_ = lean_st_ref_get(v_a_1084_);
v___x_1088_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_enqueue___redArg(v_v_1083_, v___x_1087_);
v_producers_1089_ = lean_ctor_get(v___x_1088_, 0);
v_waiters_1090_ = lean_ctor_get(v___x_1088_, 1);
v_capacity_1091_ = lean_ctor_get(v___x_1088_, 2);
v_size_1092_ = lean_ctor_get(v___x_1088_, 3);
v_buffer_1093_ = lean_ctor_get(v___x_1088_, 4);
v_write_1094_ = lean_ctor_get(v___x_1088_, 5);
v_read_1095_ = lean_ctor_get(v___x_1088_, 6);
v_receivers_1096_ = lean_ctor_get(v___x_1088_, 7);
v_nextId_1097_ = lean_ctor_get(v___x_1088_, 8);
v_closed_1098_ = lean_ctor_get_uint8(v___x_1088_, sizeof(void*)*10);
v_pos_1099_ = lean_ctor_get(v___x_1088_, 9);
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1088_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1101_ = v___x_1088_;
v_isShared_1102_ = v_isSharedCheck_1118_;
goto v_resetjp_1100_;
}
else
{
lean_inc(v_pos_1099_);
lean_inc(v_nextId_1097_);
lean_inc(v_receivers_1096_);
lean_inc(v_read_1095_);
lean_inc(v_write_1094_);
lean_inc(v_buffer_1093_);
lean_inc(v_size_1092_);
lean_inc(v_capacity_1091_);
lean_inc(v_waiters_1090_);
lean_inc(v_producers_1089_);
lean_dec(v___x_1088_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1118_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v___x_1103_; lean_object* v___x_1105_; 
v___x_1103_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__2, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__2_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__2);
lean_inc(v_receivers_1096_);
if (v_isShared_1102_ == 0)
{
lean_ctor_set(v___x_1101_, 1, v___x_1103_);
v___x_1105_ = v___x_1101_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_producers_1089_);
lean_ctor_set(v_reuseFailAlloc_1117_, 1, v___x_1103_);
lean_ctor_set(v_reuseFailAlloc_1117_, 2, v_capacity_1091_);
lean_ctor_set(v_reuseFailAlloc_1117_, 3, v_size_1092_);
lean_ctor_set(v_reuseFailAlloc_1117_, 4, v_buffer_1093_);
lean_ctor_set(v_reuseFailAlloc_1117_, 5, v_write_1094_);
lean_ctor_set(v_reuseFailAlloc_1117_, 6, v_read_1095_);
lean_ctor_set(v_reuseFailAlloc_1117_, 7, v_receivers_1096_);
lean_ctor_set(v_reuseFailAlloc_1117_, 8, v_nextId_1097_);
lean_ctor_set(v_reuseFailAlloc_1117_, 9, v_pos_1099_);
lean_ctor_set_uint8(v_reuseFailAlloc_1117_, sizeof(void*)*10, v_closed_1098_);
v___x_1105_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; size_t v_sz_1109_; size_t v___x_1110_; lean_object* v___x_1111_; lean_object* v___y_1113_; 
v___x_1106_ = lean_st_ref_swap(v_a_1084_, v___x_1105_);
lean_dec(v___x_1106_);
v___x_1107_ = l_Std_Queue_toArray___redArg(v_waiters_1090_);
v___x_1108_ = lean_box(0);
v_sz_1109_ = lean_array_size(v___x_1107_);
v___x_1110_ = ((size_t)0ULL);
v___x_1111_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27_spec__0___redArg(v___x_1107_, v_sz_1109_, v___x_1110_, v___x_1108_);
lean_dec_ref(v___x_1107_);
if (lean_obj_tag(v_receivers_1096_) == 0)
{
lean_object* v_size_1115_; 
v_size_1115_ = lean_ctor_get(v_receivers_1096_, 0);
lean_inc(v_size_1115_);
lean_dec_ref_known(v_receivers_1096_, 5);
v___y_1113_ = v_size_1115_;
goto v___jp_1112_;
}
else
{
lean_object* v___x_1116_; 
v___x_1116_ = lean_unsigned_to_nat(0u);
v___y_1113_ = v___x_1116_;
goto v___jp_1112_;
}
v___jp_1112_:
{
lean_object* v___x_1114_; 
v___x_1114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1114_, 0, v___y_1113_);
return v___x_1114_;
}
}
}
}
else
{
lean_object* v___x_1119_; 
lean_dec(v_v_1083_);
v___x_1119_ = lean_box(0);
return v___x_1119_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27___redArg___boxed(lean_object* v_v_1120_, lean_object* v_a_1121_, lean_object* v_a_1122_){
_start:
{
lean_object* v_res_1123_; 
v_res_1123_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27___redArg(v_v_1120_, v_a_1121_);
lean_dec(v_a_1121_);
return v_res_1123_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27(lean_object* v_00_u03b1_1124_, lean_object* v_v_1125_, lean_object* v_a_1126_){
_start:
{
lean_object* v___x_1128_; 
v___x_1128_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27___redArg(v_v_1125_, v_a_1126_);
return v___x_1128_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27___boxed(lean_object* v_00_u03b1_1129_, lean_object* v_v_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_){
_start:
{
lean_object* v_res_1133_; 
v_res_1133_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27(v_00_u03b1_1129_, v_v_1130_, v_a_1131_);
lean_dec(v_a_1131_);
return v_res_1133_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27_spec__0(lean_object* v_00_u03b1_1134_, lean_object* v_as_1135_, size_t v_sz_1136_, size_t v_i_1137_, lean_object* v_b_1138_, lean_object* v___y_1139_){
_start:
{
lean_object* v___x_1141_; 
v___x_1141_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27_spec__0___redArg(v_as_1135_, v_sz_1136_, v_i_1137_, v_b_1138_);
return v___x_1141_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27_spec__0___boxed(lean_object* v_00_u03b1_1142_, lean_object* v_as_1143_, lean_object* v_sz_1144_, lean_object* v_i_1145_, lean_object* v_b_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_){
_start:
{
size_t v_sz_boxed_1149_; size_t v_i_boxed_1150_; lean_object* v_res_1151_; 
v_sz_boxed_1149_ = lean_unbox_usize(v_sz_1144_);
lean_dec(v_sz_1144_);
v_i_boxed_1150_ = lean_unbox_usize(v_i_1145_);
lean_dec(v_i_1145_);
v_res_1151_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27_spec__0(v_00_u03b1_1142_, v_as_1143_, v_sz_boxed_1149_, v_i_boxed_1150_, v_b_1146_, v___y_1147_);
lean_dec(v___y_1147_);
lean_dec_ref(v_as_1143_);
return v_res_1151_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0___redArg(lean_object* v_mutex_1152_, lean_object* v_k_1153_){
_start:
{
lean_object* v_ref_1155_; lean_object* v_mutex_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; 
v_ref_1155_ = lean_ctor_get(v_mutex_1152_, 0);
lean_inc(v_ref_1155_);
v_mutex_1156_ = lean_ctor_get(v_mutex_1152_, 1);
lean_inc(v_mutex_1156_);
lean_dec_ref(v_mutex_1152_);
v___x_1157_ = lean_io_basemutex_lock(v_mutex_1156_);
v___x_1158_ = lean_apply_2(v_k_1153_, v_ref_1155_, lean_box(0));
v___x_1159_ = lean_io_basemutex_unlock(v_mutex_1156_);
lean_dec(v_mutex_1156_);
return v___x_1158_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0___redArg___boxed(lean_object* v_mutex_1160_, lean_object* v_k_1161_, lean_object* v___y_1162_){
_start:
{
lean_object* v_res_1163_; 
v_res_1163_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0___redArg(v_mutex_1160_, v_k_1161_);
return v_res_1163_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0(lean_object* v_00_u03b1_1164_, lean_object* v_00_u03b2_1165_, lean_object* v_mutex_1166_, lean_object* v_k_1167_){
_start:
{
lean_object* v___x_1169_; 
v___x_1169_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0___redArg(v_mutex_1166_, v_k_1167_);
return v___x_1169_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0___boxed(lean_object* v_00_u03b1_1170_, lean_object* v_00_u03b2_1171_, lean_object* v_mutex_1172_, lean_object* v_k_1173_, lean_object* v___y_1174_){
_start:
{
lean_object* v_res_1175_; 
v_res_1175_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0(v_00_u03b1_1170_, v_00_u03b2_1171_, v_mutex_1172_, v_k_1173_);
return v_res_1175_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg___lam__0(lean_object* v_v_1178_, lean_object* v___y_1179_){
_start:
{
lean_object* v___x_1181_; uint8_t v_closed_1182_; 
v___x_1181_ = lean_st_ref_get(v___y_1179_);
v_closed_1182_ = lean_ctor_get_uint8(v___x_1181_, sizeof(void*)*10);
lean_dec(v___x_1181_);
if (v_closed_1182_ == 0)
{
lean_object* v___x_1183_; lean_object* v_receivers_1184_; 
v___x_1183_ = lean_st_ref_get(v___y_1179_);
v_receivers_1184_ = lean_ctor_get(v___x_1183_, 7);
lean_inc(v_receivers_1184_);
lean_dec(v___x_1183_);
if (lean_obj_tag(v_receivers_1184_) == 0)
{
lean_object* v___x_1185_; 
lean_dec_ref_known(v_receivers_1184_, 5);
v___x_1185_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27___redArg(v_v_1178_, v___y_1179_);
return v___x_1185_;
}
else
{
lean_object* v___x_1186_; 
lean_dec(v_v_1178_);
v___x_1186_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg___lam__0___closed__0));
return v___x_1186_;
}
}
else
{
lean_object* v___x_1187_; 
lean_dec(v_v_1178_);
v___x_1187_ = lean_box(0);
return v___x_1187_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg___lam__0___boxed(lean_object* v_v_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_){
_start:
{
lean_object* v_res_1191_; 
v_res_1191_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg___lam__0(v_v_1188_, v___y_1189_);
lean_dec(v___y_1189_);
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg(lean_object* v_ch_1192_, lean_object* v_v_1193_){
_start:
{
lean_object* v___f_1195_; lean_object* v___x_1196_; 
v___f_1195_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1195_, 0, v_v_1193_);
v___x_1196_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0___redArg(v_ch_1192_, v___f_1195_);
return v___x_1196_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg___boxed(lean_object* v_ch_1197_, lean_object* v_v_1198_, lean_object* v_a_1199_){
_start:
{
lean_object* v_res_1200_; 
v_res_1200_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg(v_ch_1197_, v_v_1198_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend(lean_object* v_00_u03b1_1201_, lean_object* v_ch_1202_, lean_object* v_v_1203_){
_start:
{
lean_object* v___x_1205_; 
v___x_1205_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg(v_ch_1202_, v_v_1203_);
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___boxed(lean_object* v_00_u03b1_1206_, lean_object* v_ch_1207_, lean_object* v_v_1208_, lean_object* v_a_1209_){
_start:
{
lean_object* v_res_1210_; 
v_res_1210_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend(v_00_u03b1_1206_, v_ch_1207_, v_v_1208_);
return v_res_1210_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1213_; lean_object* v___x_1214_; 
v___x_1213_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__0));
v___x_1214_ = lean_task_pure(v___x_1213_);
return v___x_1214_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1218_; lean_object* v___x_1219_; 
v___x_1218_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__2));
v___x_1219_ = lean_task_pure(v___x_1218_);
return v___x_1219_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1(lean_object* v_v_1220_, lean_object* v___f_1221_, lean_object* v___y_1222_){
_start:
{
lean_object* v___x_1224_; uint8_t v_closed_1225_; 
v___x_1224_ = lean_st_ref_get(v___y_1222_);
v_closed_1225_ = lean_ctor_get_uint8(v___x_1224_, sizeof(void*)*10);
lean_dec(v___x_1224_);
if (v_closed_1225_ == 0)
{
lean_object* v___x_1226_; lean_object* v_receivers_1227_; 
v___x_1226_ = lean_st_ref_get(v___y_1222_);
v_receivers_1227_ = lean_ctor_get(v___x_1226_, 7);
lean_inc(v_receivers_1227_);
lean_dec(v___x_1226_);
if (lean_obj_tag(v_receivers_1227_) == 0)
{
lean_object* v___x_1228_; 
lean_dec_ref_known(v_receivers_1227_, 5);
v___x_1228_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27___redArg(v_v_1220_, v___y_1222_);
if (lean_obj_tag(v___x_1228_) == 1)
{
lean_object* v_val_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1237_; 
lean_dec_ref(v___f_1221_);
v_val_1229_ = lean_ctor_get(v___x_1228_, 0);
v_isSharedCheck_1237_ = !lean_is_exclusive(v___x_1228_);
if (v_isSharedCheck_1237_ == 0)
{
v___x_1231_ = v___x_1228_;
v_isShared_1232_ = v_isSharedCheck_1237_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_val_1229_);
lean_dec(v___x_1228_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1237_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
lean_object* v___x_1234_; 
if (v_isShared_1232_ == 0)
{
v___x_1234_ = v___x_1231_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v_val_1229_);
v___x_1234_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
lean_object* v___x_1235_; 
v___x_1235_ = lean_task_pure(v___x_1234_);
return v___x_1235_;
}
}
}
else
{
lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v_producers_1240_; lean_object* v_waiters_1241_; lean_object* v_capacity_1242_; lean_object* v_size_1243_; lean_object* v_buffer_1244_; lean_object* v_write_1245_; lean_object* v_read_1246_; lean_object* v_receivers_1247_; lean_object* v_nextId_1248_; uint8_t v_closed_1249_; lean_object* v_pos_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1262_; 
lean_dec(v___x_1228_);
v___x_1238_ = lean_io_promise_new();
v___x_1239_ = lean_st_ref_take(v___y_1222_);
v_producers_1240_ = lean_ctor_get(v___x_1239_, 0);
v_waiters_1241_ = lean_ctor_get(v___x_1239_, 1);
v_capacity_1242_ = lean_ctor_get(v___x_1239_, 2);
v_size_1243_ = lean_ctor_get(v___x_1239_, 3);
v_buffer_1244_ = lean_ctor_get(v___x_1239_, 4);
v_write_1245_ = lean_ctor_get(v___x_1239_, 5);
v_read_1246_ = lean_ctor_get(v___x_1239_, 6);
v_receivers_1247_ = lean_ctor_get(v___x_1239_, 7);
v_nextId_1248_ = lean_ctor_get(v___x_1239_, 8);
v_closed_1249_ = lean_ctor_get_uint8(v___x_1239_, sizeof(void*)*10);
v_pos_1250_ = lean_ctor_get(v___x_1239_, 9);
v_isSharedCheck_1262_ = !lean_is_exclusive(v___x_1239_);
if (v_isSharedCheck_1262_ == 0)
{
v___x_1252_ = v___x_1239_;
v_isShared_1253_ = v_isSharedCheck_1262_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_pos_1250_);
lean_inc(v_nextId_1248_);
lean_inc(v_receivers_1247_);
lean_inc(v_read_1246_);
lean_inc(v_write_1245_);
lean_inc(v_buffer_1244_);
lean_inc(v_size_1243_);
lean_inc(v_capacity_1242_);
lean_inc(v_waiters_1241_);
lean_inc(v_producers_1240_);
lean_dec(v___x_1239_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1262_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1254_; lean_object* v___x_1256_; 
lean_inc(v___x_1238_);
v___x_1254_ = l_Std_Queue_enqueue___redArg(v___x_1238_, v_producers_1240_);
if (v_isShared_1253_ == 0)
{
lean_ctor_set(v___x_1252_, 0, v___x_1254_);
v___x_1256_ = v___x_1252_;
goto v_reusejp_1255_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v___x_1254_);
lean_ctor_set(v_reuseFailAlloc_1261_, 1, v_waiters_1241_);
lean_ctor_set(v_reuseFailAlloc_1261_, 2, v_capacity_1242_);
lean_ctor_set(v_reuseFailAlloc_1261_, 3, v_size_1243_);
lean_ctor_set(v_reuseFailAlloc_1261_, 4, v_buffer_1244_);
lean_ctor_set(v_reuseFailAlloc_1261_, 5, v_write_1245_);
lean_ctor_set(v_reuseFailAlloc_1261_, 6, v_read_1246_);
lean_ctor_set(v_reuseFailAlloc_1261_, 7, v_receivers_1247_);
lean_ctor_set(v_reuseFailAlloc_1261_, 8, v_nextId_1248_);
lean_ctor_set(v_reuseFailAlloc_1261_, 9, v_pos_1250_);
lean_ctor_set_uint8(v_reuseFailAlloc_1261_, sizeof(void*)*10, v_closed_1249_);
v___x_1256_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1255_;
}
v_reusejp_1255_:
{
lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; 
v___x_1257_ = lean_st_ref_put(v___y_1222_, v___x_1256_);
v___x_1258_ = lean_io_promise_result_opt(v___x_1238_);
lean_dec(v___x_1238_);
v___x_1259_ = lean_unsigned_to_nat(0u);
v___x_1260_ = lean_io_bind_task(v___x_1258_, v___f_1221_, v___x_1259_, v_closed_1225_);
return v___x_1260_;
}
}
}
}
else
{
lean_object* v___x_1263_; 
lean_dec_ref(v___f_1221_);
lean_dec(v_v_1220_);
v___x_1263_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__1, &l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__1_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__1);
return v___x_1263_;
}
}
else
{
lean_object* v___x_1264_; 
lean_dec_ref(v___f_1221_);
lean_dec(v_v_1220_);
v___x_1264_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__3, &l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__3_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__3);
return v___x_1264_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___boxed(lean_object* v_v_1265_, lean_object* v___f_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_){
_start:
{
lean_object* v_res_1269_; 
v_res_1269_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1(v_v_1265_, v___f_1266_, v___y_1267_);
lean_dec(v___y_1267_);
return v_res_1269_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__0(lean_object* v_ch_1270_, lean_object* v_v_1271_, lean_object* v_res_1272_){
_start:
{
if (lean_obj_tag(v_res_1272_) == 0)
{
lean_dec(v_v_1271_);
lean_dec_ref(v_ch_1270_);
goto v___jp_1274_;
}
else
{
lean_object* v_val_1276_; uint8_t v___x_1277_; 
v_val_1276_ = lean_ctor_get(v_res_1272_, 0);
v___x_1277_ = lean_unbox(v_val_1276_);
if (v___x_1277_ == 0)
{
lean_dec(v_v_1271_);
lean_dec_ref(v_ch_1270_);
goto v___jp_1274_;
}
else
{
lean_object* v___x_1278_; 
v___x_1278_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg(v_ch_1270_, v_v_1271_);
return v___x_1278_;
}
}
v___jp_1274_:
{
lean_object* v___x_1275_; 
v___x_1275_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__3, &l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__3_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__3);
return v___x_1275_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__0___boxed(lean_object* v_ch_1279_, lean_object* v_v_1280_, lean_object* v_res_1281_, lean_object* v___y_1282_){
_start:
{
lean_object* v_res_1283_; 
v_res_1283_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__0(v_ch_1279_, v_v_1280_, v_res_1281_);
lean_dec(v_res_1281_);
return v_res_1283_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg(lean_object* v_ch_1284_, lean_object* v_v_1285_){
_start:
{
lean_object* v___f_1287_; lean_object* v___f_1288_; lean_object* v___x_1289_; 
lean_inc(v_v_1285_);
lean_inc_ref(v_ch_1284_);
v___f_1287_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1287_, 0, v_ch_1284_);
lean_closure_set(v___f_1287_, 1, v_v_1285_);
v___f_1288_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1288_, 0, v_v_1285_);
lean_closure_set(v___f_1288_, 1, v___f_1287_);
v___x_1289_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0___redArg(v_ch_1284_, v___f_1288_);
return v___x_1289_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___boxed(lean_object* v_ch_1290_, lean_object* v_v_1291_, lean_object* v_a_1292_){
_start:
{
lean_object* v_res_1293_; 
v_res_1293_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg(v_ch_1290_, v_v_1291_);
return v_res_1293_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send(lean_object* v_00_u03b1_1294_, lean_object* v_ch_1295_, lean_object* v_v_1296_){
_start:
{
lean_object* v___x_1298_; 
v___x_1298_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg(v_ch_1295_, v_v_1296_);
return v___x_1298_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___boxed(lean_object* v_00_u03b1_1299_, lean_object* v_ch_1300_, lean_object* v_v_1301_, lean_object* v_a_1302_){
_start:
{
lean_object* v_res_1303_; 
v_res_1303_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_send(v_00_u03b1_1299_, v_ch_1300_, v_v_1301_);
return v_res_1303_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__2___redArg(lean_object* v_mutex_1304_, lean_object* v_k_1305_){
_start:
{
lean_object* v_ref_1307_; lean_object* v_mutex_1308_; lean_object* v___x_1309_; lean_object* v_r_1310_; 
v_ref_1307_ = lean_ctor_get(v_mutex_1304_, 0);
lean_inc(v_ref_1307_);
v_mutex_1308_ = lean_ctor_get(v_mutex_1304_, 1);
lean_inc(v_mutex_1308_);
lean_dec_ref(v_mutex_1304_);
v___x_1309_ = lean_io_basemutex_lock(v_mutex_1308_);
v_r_1310_ = lean_apply_2(v_k_1305_, v_ref_1307_, lean_box(0));
if (lean_obj_tag(v_r_1310_) == 0)
{
lean_object* v_a_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1319_; 
v_a_1311_ = lean_ctor_get(v_r_1310_, 0);
v_isSharedCheck_1319_ = !lean_is_exclusive(v_r_1310_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1313_ = v_r_1310_;
v_isShared_1314_ = v_isSharedCheck_1319_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_a_1311_);
lean_dec(v_r_1310_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1319_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v___x_1315_; lean_object* v___x_1317_; 
v___x_1315_ = lean_io_basemutex_unlock(v_mutex_1308_);
lean_dec(v_mutex_1308_);
if (v_isShared_1314_ == 0)
{
v___x_1317_ = v___x_1313_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v_a_1311_);
v___x_1317_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
return v___x_1317_;
}
}
}
else
{
lean_object* v_a_1320_; lean_object* v___x_1322_; uint8_t v_isShared_1323_; uint8_t v_isSharedCheck_1328_; 
v_a_1320_ = lean_ctor_get(v_r_1310_, 0);
v_isSharedCheck_1328_ = !lean_is_exclusive(v_r_1310_);
if (v_isSharedCheck_1328_ == 0)
{
v___x_1322_ = v_r_1310_;
v_isShared_1323_ = v_isSharedCheck_1328_;
goto v_resetjp_1321_;
}
else
{
lean_inc(v_a_1320_);
lean_dec(v_r_1310_);
v___x_1322_ = lean_box(0);
v_isShared_1323_ = v_isSharedCheck_1328_;
goto v_resetjp_1321_;
}
v_resetjp_1321_:
{
lean_object* v___x_1324_; lean_object* v___x_1326_; 
v___x_1324_ = lean_io_basemutex_unlock(v_mutex_1308_);
lean_dec(v_mutex_1308_);
if (v_isShared_1323_ == 0)
{
v___x_1326_ = v___x_1322_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v_a_1320_);
v___x_1326_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
return v___x_1326_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__2___redArg___boxed(lean_object* v_mutex_1329_, lean_object* v_k_1330_, lean_object* v___y_1331_){
_start:
{
lean_object* v_res_1332_; 
v_res_1332_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__2___redArg(v_mutex_1329_, v_k_1330_);
return v_res_1332_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__2(lean_object* v_00_u03b1_1333_, lean_object* v_00_u03b2_1334_, lean_object* v_mutex_1335_, lean_object* v_k_1336_){
_start:
{
lean_object* v___x_1338_; 
v___x_1338_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__2___redArg(v_mutex_1335_, v_k_1336_);
return v___x_1338_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__2___boxed(lean_object* v_00_u03b1_1339_, lean_object* v_00_u03b2_1340_, lean_object* v_mutex_1341_, lean_object* v_k_1342_, lean_object* v___y_1343_){
_start:
{
lean_object* v_res_1344_; 
v_res_1344_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__2(v_00_u03b1_1339_, v_00_u03b2_1340_, v_mutex_1341_, v_k_1342_);
return v_res_1344_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1___redArg(uint8_t v___x_1345_, lean_object* v_as_1346_, size_t v_sz_1347_, size_t v_i_1348_, lean_object* v_b_1349_){
_start:
{
uint8_t v___x_1351_; 
v___x_1351_ = lean_usize_dec_lt(v_i_1348_, v_sz_1347_);
if (v___x_1351_ == 0)
{
lean_object* v___x_1352_; 
v___x_1352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1352_, 0, v_b_1349_);
return v___x_1352_;
}
else
{
lean_object* v___x_1353_; lean_object* v_a_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; size_t v___x_1357_; size_t v___x_1358_; 
v___x_1353_ = lean_box(0);
v_a_1354_ = lean_array_uget_borrowed(v_as_1346_, v_i_1348_);
v___x_1355_ = lean_box(v___x_1345_);
v___x_1356_ = lean_io_promise_resolve(v___x_1355_, v_a_1354_);
v___x_1357_ = ((size_t)1ULL);
v___x_1358_ = lean_usize_add(v_i_1348_, v___x_1357_);
v_i_1348_ = v___x_1358_;
v_b_1349_ = v___x_1353_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1___redArg___boxed(lean_object* v___x_1360_, lean_object* v_as_1361_, lean_object* v_sz_1362_, lean_object* v_i_1363_, lean_object* v_b_1364_, lean_object* v___y_1365_){
_start:
{
uint8_t v___x_2138__boxed_1366_; size_t v_sz_boxed_1367_; size_t v_i_boxed_1368_; lean_object* v_res_1369_; 
v___x_2138__boxed_1366_ = lean_unbox(v___x_1360_);
v_sz_boxed_1367_ = lean_unbox_usize(v_sz_1362_);
lean_dec(v_sz_1362_);
v_i_boxed_1368_ = lean_unbox_usize(v_i_1363_);
lean_dec(v_i_1363_);
v_res_1369_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1___redArg(v___x_2138__boxed_1366_, v_as_1361_, v_sz_boxed_1367_, v_i_boxed_1368_, v_b_1364_);
lean_dec_ref(v_as_1361_);
return v_res_1369_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__0___redArg(uint8_t v___x_1370_, lean_object* v_as_1371_, size_t v_sz_1372_, size_t v_i_1373_, lean_object* v_b_1374_){
_start:
{
uint8_t v___x_1376_; 
v___x_1376_ = lean_usize_dec_lt(v_i_1373_, v_sz_1372_);
if (v___x_1376_ == 0)
{
lean_object* v___x_1377_; 
v___x_1377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1377_, 0, v_b_1374_);
return v___x_1377_;
}
else
{
lean_object* v___x_1378_; lean_object* v_a_1379_; lean_object* v___x_1380_; size_t v___x_1381_; size_t v___x_1382_; 
v___x_1378_ = lean_box(0);
v_a_1379_ = lean_array_uget_borrowed(v_as_1371_, v_i_1373_);
v___x_1380_ = l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve___redArg(v_a_1379_, v___x_1370_);
v___x_1381_ = ((size_t)1ULL);
v___x_1382_ = lean_usize_add(v_i_1373_, v___x_1381_);
v_i_1373_ = v___x_1382_;
v_b_1374_ = v___x_1378_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__0___redArg___boxed(lean_object* v___x_1384_, lean_object* v_as_1385_, lean_object* v_sz_1386_, lean_object* v_i_1387_, lean_object* v_b_1388_, lean_object* v___y_1389_){
_start:
{
uint8_t v___x_2160__boxed_1390_; size_t v_sz_boxed_1391_; size_t v_i_boxed_1392_; lean_object* v_res_1393_; 
v___x_2160__boxed_1390_ = lean_unbox(v___x_1384_);
v_sz_boxed_1391_ = lean_unbox_usize(v_sz_1386_);
lean_dec(v_sz_1386_);
v_i_boxed_1392_ = lean_unbox_usize(v_i_1387_);
lean_dec(v_i_1387_);
v_res_1393_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__0___redArg(v___x_2160__boxed_1390_, v_as_1385_, v_sz_boxed_1391_, v_i_boxed_1392_, v_b_1388_);
lean_dec_ref(v_as_1385_);
return v_res_1393_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg___lam__0(lean_object* v___y_1394_){
_start:
{
lean_object* v___x_1396_; uint8_t v_closed_1397_; 
v___x_1396_ = lean_st_ref_get(v___y_1394_);
v_closed_1397_ = lean_ctor_get_uint8(v___x_1396_, sizeof(void*)*10);
if (v_closed_1397_ == 0)
{
lean_object* v_producers_1398_; lean_object* v_waiters_1399_; lean_object* v_capacity_1400_; lean_object* v_size_1401_; lean_object* v_buffer_1402_; lean_object* v_write_1403_; lean_object* v_read_1404_; lean_object* v_receivers_1405_; lean_object* v_nextId_1406_; lean_object* v_pos_1407_; lean_object* v___x_1409_; uint8_t v_isShared_1410_; uint8_t v_isSharedCheck_1433_; 
v_producers_1398_ = lean_ctor_get(v___x_1396_, 0);
v_waiters_1399_ = lean_ctor_get(v___x_1396_, 1);
v_capacity_1400_ = lean_ctor_get(v___x_1396_, 2);
v_size_1401_ = lean_ctor_get(v___x_1396_, 3);
v_buffer_1402_ = lean_ctor_get(v___x_1396_, 4);
v_write_1403_ = lean_ctor_get(v___x_1396_, 5);
v_read_1404_ = lean_ctor_get(v___x_1396_, 6);
v_receivers_1405_ = lean_ctor_get(v___x_1396_, 7);
v_nextId_1406_ = lean_ctor_get(v___x_1396_, 8);
v_pos_1407_ = lean_ctor_get(v___x_1396_, 9);
v_isSharedCheck_1433_ = !lean_is_exclusive(v___x_1396_);
if (v_isSharedCheck_1433_ == 0)
{
v___x_1409_ = v___x_1396_;
v_isShared_1410_ = v_isSharedCheck_1433_;
goto v_resetjp_1408_;
}
else
{
lean_inc(v_pos_1407_);
lean_inc(v_nextId_1406_);
lean_inc(v_receivers_1405_);
lean_inc(v_read_1404_);
lean_inc(v_write_1403_);
lean_inc(v_buffer_1402_);
lean_inc(v_size_1401_);
lean_inc(v_capacity_1400_);
lean_inc(v_waiters_1399_);
lean_inc(v_producers_1398_);
lean_dec(v___x_1396_);
v___x_1409_ = lean_box(0);
v_isShared_1410_ = v_isSharedCheck_1433_;
goto v_resetjp_1408_;
}
v_resetjp_1408_:
{
lean_object* v___x_1411_; lean_object* v___x_1412_; size_t v_sz_1413_; size_t v___x_1414_; lean_object* v___x_1415_; 
v___x_1411_ = l_Std_Queue_toArray___redArg(v_waiters_1399_);
v___x_1412_ = lean_box(0);
v_sz_1413_ = lean_array_size(v___x_1411_);
v___x_1414_ = ((size_t)0ULL);
v___x_1415_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__0___redArg(v_closed_1397_, v___x_1411_, v_sz_1413_, v___x_1414_, v___x_1412_);
lean_dec_ref(v___x_1411_);
if (lean_obj_tag(v___x_1415_) == 0)
{
lean_object* v___x_1416_; size_t v_sz_1417_; lean_object* v___x_1418_; 
lean_dec_ref_known(v___x_1415_, 1);
v___x_1416_ = l_Std_Queue_toArray___redArg(v_producers_1398_);
v_sz_1417_ = lean_array_size(v___x_1416_);
v___x_1418_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1___redArg(v_closed_1397_, v___x_1416_, v_sz_1417_, v___x_1414_, v___x_1412_);
lean_dec_ref(v___x_1416_);
if (lean_obj_tag(v___x_1418_) == 0)
{
lean_object* v___x_1420_; uint8_t v_isShared_1421_; uint8_t v_isSharedCheck_1431_; 
v_isSharedCheck_1431_ = !lean_is_exclusive(v___x_1418_);
if (v_isSharedCheck_1431_ == 0)
{
lean_object* v_unused_1432_; 
v_unused_1432_ = lean_ctor_get(v___x_1418_, 0);
lean_dec(v_unused_1432_);
v___x_1420_ = v___x_1418_;
v_isShared_1421_ = v_isSharedCheck_1431_;
goto v_resetjp_1419_;
}
else
{
lean_dec(v___x_1418_);
v___x_1420_ = lean_box(0);
v_isShared_1421_ = v_isSharedCheck_1431_;
goto v_resetjp_1419_;
}
v_resetjp_1419_:
{
lean_object* v___x_1422_; uint8_t v___x_1423_; lean_object* v___x_1425_; 
v___x_1422_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__2, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__2_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__2);
v___x_1423_ = 1;
if (v_isShared_1410_ == 0)
{
lean_ctor_set(v___x_1409_, 1, v___x_1422_);
lean_ctor_set(v___x_1409_, 0, v___x_1422_);
v___x_1425_ = v___x_1409_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1430_; 
v_reuseFailAlloc_1430_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_1430_, 0, v___x_1422_);
lean_ctor_set(v_reuseFailAlloc_1430_, 1, v___x_1422_);
lean_ctor_set(v_reuseFailAlloc_1430_, 2, v_capacity_1400_);
lean_ctor_set(v_reuseFailAlloc_1430_, 3, v_size_1401_);
lean_ctor_set(v_reuseFailAlloc_1430_, 4, v_buffer_1402_);
lean_ctor_set(v_reuseFailAlloc_1430_, 5, v_write_1403_);
lean_ctor_set(v_reuseFailAlloc_1430_, 6, v_read_1404_);
lean_ctor_set(v_reuseFailAlloc_1430_, 7, v_receivers_1405_);
lean_ctor_set(v_reuseFailAlloc_1430_, 8, v_nextId_1406_);
lean_ctor_set(v_reuseFailAlloc_1430_, 9, v_pos_1407_);
v___x_1425_ = v_reuseFailAlloc_1430_;
goto v_reusejp_1424_;
}
v_reusejp_1424_:
{
lean_object* v___x_1426_; lean_object* v___x_1428_; 
lean_ctor_set_uint8(v___x_1425_, sizeof(void*)*10, v___x_1423_);
v___x_1426_ = lean_st_ref_swap(v___y_1394_, v___x_1425_);
lean_dec(v___x_1426_);
if (v_isShared_1421_ == 0)
{
lean_ctor_set(v___x_1420_, 0, v___x_1412_);
v___x_1428_ = v___x_1420_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v___x_1412_);
v___x_1428_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
return v___x_1428_;
}
}
}
}
else
{
lean_del_object(v___x_1409_);
lean_dec(v_pos_1407_);
lean_dec(v_nextId_1406_);
lean_dec(v_receivers_1405_);
lean_dec(v_read_1404_);
lean_dec(v_write_1403_);
lean_dec_ref(v_buffer_1402_);
lean_dec(v_size_1401_);
lean_dec(v_capacity_1400_);
return v___x_1418_;
}
}
else
{
lean_del_object(v___x_1409_);
lean_dec(v_pos_1407_);
lean_dec(v_nextId_1406_);
lean_dec(v_receivers_1405_);
lean_dec(v_read_1404_);
lean_dec(v_write_1403_);
lean_dec_ref(v_buffer_1402_);
lean_dec(v_size_1401_);
lean_dec(v_capacity_1400_);
lean_dec_ref(v_producers_1398_);
return v___x_1415_;
}
}
}
else
{
uint8_t v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; 
lean_dec(v___x_1396_);
v___x_1434_ = 1;
v___x_1435_ = lean_box(v___x_1434_);
v___x_1436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1436_, 0, v___x_1435_);
return v___x_1436_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg___lam__0___boxed(lean_object* v___y_1437_, lean_object* v___y_1438_){
_start:
{
lean_object* v_res_1439_; 
v_res_1439_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg___lam__0(v___y_1437_);
lean_dec(v___y_1437_);
return v_res_1439_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg(lean_object* v_ch_1441_){
_start:
{
lean_object* v___f_1443_; lean_object* v___x_1444_; 
v___f_1443_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg___closed__0));
v___x_1444_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__2___redArg(v_ch_1441_, v___f_1443_);
return v___x_1444_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg___boxed(lean_object* v_ch_1445_, lean_object* v_a_1446_){
_start:
{
lean_object* v_res_1447_; 
v_res_1447_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg(v_ch_1445_);
return v_res_1447_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_close(lean_object* v_00_u03b1_1448_, lean_object* v_ch_1449_){
_start:
{
lean_object* v___x_1451_; 
v___x_1451_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg(v_ch_1449_);
return v___x_1451_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_close___boxed(lean_object* v_00_u03b1_1452_, lean_object* v_ch_1453_, lean_object* v_a_1454_){
_start:
{
lean_object* v_res_1455_; 
v_res_1455_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_close(v_00_u03b1_1452_, v_ch_1453_);
return v_res_1455_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__0(lean_object* v_00_u03b1_1456_, uint8_t v___x_1457_, lean_object* v_as_1458_, size_t v_sz_1459_, size_t v_i_1460_, lean_object* v_b_1461_, lean_object* v___y_1462_){
_start:
{
lean_object* v___x_1464_; 
v___x_1464_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__0___redArg(v___x_1457_, v_as_1458_, v_sz_1459_, v_i_1460_, v_b_1461_);
return v___x_1464_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__0___boxed(lean_object* v_00_u03b1_1465_, lean_object* v___x_1466_, lean_object* v_as_1467_, lean_object* v_sz_1468_, lean_object* v_i_1469_, lean_object* v_b_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_){
_start:
{
uint8_t v___x_2262__boxed_1473_; size_t v_sz_boxed_1474_; size_t v_i_boxed_1475_; lean_object* v_res_1476_; 
v___x_2262__boxed_1473_ = lean_unbox(v___x_1466_);
v_sz_boxed_1474_ = lean_unbox_usize(v_sz_1468_);
lean_dec(v_sz_1468_);
v_i_boxed_1475_ = lean_unbox_usize(v_i_1469_);
lean_dec(v_i_1469_);
v_res_1476_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__0(v_00_u03b1_1465_, v___x_2262__boxed_1473_, v_as_1467_, v_sz_boxed_1474_, v_i_boxed_1475_, v_b_1470_, v___y_1471_);
lean_dec(v___y_1471_);
lean_dec_ref(v_as_1467_);
return v_res_1476_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1(lean_object* v_00_u03b1_1477_, uint8_t v___x_1478_, lean_object* v_as_1479_, size_t v_sz_1480_, size_t v_i_1481_, lean_object* v_b_1482_, lean_object* v___y_1483_){
_start:
{
lean_object* v___x_1485_; 
v___x_1485_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1___redArg(v___x_1478_, v_as_1479_, v_sz_1480_, v_i_1481_, v_b_1482_);
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1___boxed(lean_object* v_00_u03b1_1486_, lean_object* v___x_1487_, lean_object* v_as_1488_, lean_object* v_sz_1489_, lean_object* v_i_1490_, lean_object* v_b_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_){
_start:
{
uint8_t v___x_2273__boxed_1494_; size_t v_sz_boxed_1495_; size_t v_i_boxed_1496_; lean_object* v_res_1497_; 
v___x_2273__boxed_1494_ = lean_unbox(v___x_1487_);
v_sz_boxed_1495_ = lean_unbox_usize(v_sz_1489_);
lean_dec(v_sz_1489_);
v_i_boxed_1496_ = lean_unbox_usize(v_i_1490_);
lean_dec(v_i_1490_);
v_res_1497_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1(v_00_u03b1_1486_, v___x_2273__boxed_1494_, v_as_1488_, v_sz_boxed_1495_, v_i_boxed_1496_, v_b_1491_, v___y_1492_);
lean_dec(v___y_1492_);
lean_dec_ref(v_as_1488_);
return v_res_1497_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg___lam__0(lean_object* v___y_1498_){
_start:
{
lean_object* v___x_1500_; uint8_t v_closed_1501_; 
v___x_1500_ = lean_st_ref_get(v___y_1498_);
v_closed_1501_ = lean_ctor_get_uint8(v___x_1500_, sizeof(void*)*10);
lean_dec(v___x_1500_);
return v_closed_1501_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg___lam__0___boxed(lean_object* v___y_1502_, lean_object* v___y_1503_){
_start:
{
uint8_t v_res_1504_; lean_object* v_r_1505_; 
v_res_1504_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg___lam__0(v___y_1502_);
lean_dec(v___y_1502_);
v_r_1505_ = lean_box(v_res_1504_);
return v_r_1505_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg(lean_object* v_ch_1507_){
_start:
{
lean_object* v___f_1509_; lean_object* v___x_1510_; 
v___f_1509_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg___closed__0));
v___x_1510_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0___redArg(v_ch_1507_, v___f_1509_);
return v___x_1510_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg___boxed(lean_object* v_ch_1511_, lean_object* v_a_1512_){
_start:
{
lean_object* v_res_1513_; 
v_res_1513_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg(v_ch_1511_);
return v_res_1513_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed(lean_object* v_00_u03b1_1514_, lean_object* v_ch_1515_){
_start:
{
lean_object* v___x_1517_; uint8_t v___x_1518_; 
v___x_1517_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg(v_ch_1515_);
v___x_1518_ = lean_unbox(v___x_1517_);
lean_dec(v___x_1517_);
return v___x_1518_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___boxed(lean_object* v_00_u03b1_1519_, lean_object* v_ch_1520_, lean_object* v_a_1521_){
_start:
{
uint8_t v_res_1522_; lean_object* v_r_1523_; 
v_res_1522_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed(v_00_u03b1_1519_, v_ch_1520_);
v_r_1523_ = lean_box(v_res_1522_);
return v_r_1523_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___redArg___lam__0(lean_object* v_next_1524_, lean_object* v_slot_1525_){
_start:
{
lean_object* v_value_1526_; lean_object* v_pos_1527_; lean_object* v_remaining_1528_; uint8_t v___x_1529_; 
v_value_1526_ = lean_ctor_get(v_slot_1525_, 0);
v_pos_1527_ = lean_ctor_get(v_slot_1525_, 1);
v_remaining_1528_ = lean_ctor_get(v_slot_1525_, 2);
v___x_1529_ = lean_nat_dec_eq(v_next_1524_, v_pos_1527_);
if (v___x_1529_ == 0)
{
lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; 
v___x_1530_ = lean_box(0);
v___x_1531_ = lean_box(v___x_1529_);
v___x_1532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1532_, 0, v___x_1530_);
lean_ctor_set(v___x_1532_, 1, v___x_1531_);
v___x_1533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1533_, 0, v___x_1532_);
lean_ctor_set(v___x_1533_, 1, v_slot_1525_);
return v___x_1533_;
}
else
{
lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1554_; 
lean_inc(v_remaining_1528_);
lean_inc(v_pos_1527_);
lean_inc(v_value_1526_);
v_isSharedCheck_1554_ = !lean_is_exclusive(v_slot_1525_);
if (v_isSharedCheck_1554_ == 0)
{
lean_object* v_unused_1555_; lean_object* v_unused_1556_; lean_object* v_unused_1557_; 
v_unused_1555_ = lean_ctor_get(v_slot_1525_, 2);
lean_dec(v_unused_1555_);
v_unused_1556_ = lean_ctor_get(v_slot_1525_, 1);
lean_dec(v_unused_1556_);
v_unused_1557_ = lean_ctor_get(v_slot_1525_, 0);
lean_dec(v_unused_1557_);
v___x_1535_ = v_slot_1525_;
v_isShared_1536_ = v_isSharedCheck_1554_;
goto v_resetjp_1534_;
}
else
{
lean_dec(v_slot_1525_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1554_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
lean_object* v___x_1537_; uint8_t v___x_1538_; 
v___x_1537_ = lean_unsigned_to_nat(1u);
v___x_1538_ = lean_nat_dec_eq(v_remaining_1528_, v___x_1537_);
if (v___x_1538_ == 0)
{
lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1543_; 
v___x_1539_ = lean_box(v___x_1538_);
lean_inc(v_value_1526_);
v___x_1540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1540_, 0, v_value_1526_);
lean_ctor_set(v___x_1540_, 1, v___x_1539_);
v___x_1541_ = lean_nat_sub(v_remaining_1528_, v___x_1537_);
lean_dec(v_remaining_1528_);
if (v_isShared_1536_ == 0)
{
lean_ctor_set(v___x_1535_, 2, v___x_1541_);
v___x_1543_ = v___x_1535_;
goto v_reusejp_1542_;
}
else
{
lean_object* v_reuseFailAlloc_1545_; 
v_reuseFailAlloc_1545_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1545_, 0, v_value_1526_);
lean_ctor_set(v_reuseFailAlloc_1545_, 1, v_pos_1527_);
lean_ctor_set(v_reuseFailAlloc_1545_, 2, v___x_1541_);
v___x_1543_ = v_reuseFailAlloc_1545_;
goto v_reusejp_1542_;
}
v_reusejp_1542_:
{
lean_object* v___x_1544_; 
v___x_1544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1544_, 0, v___x_1540_);
lean_ctor_set(v___x_1544_, 1, v___x_1543_);
return v___x_1544_;
}
}
else
{
lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1551_; 
lean_dec(v_remaining_1528_);
v___x_1546_ = lean_box(v___x_1538_);
v___x_1547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1547_, 0, v_value_1526_);
lean_ctor_set(v___x_1547_, 1, v___x_1546_);
v___x_1548_ = lean_box(0);
v___x_1549_ = lean_unsigned_to_nat(0u);
if (v_isShared_1536_ == 0)
{
lean_ctor_set(v___x_1535_, 2, v___x_1549_);
lean_ctor_set(v___x_1535_, 0, v___x_1548_);
v___x_1551_ = v___x_1535_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1553_; 
v_reuseFailAlloc_1553_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1553_, 0, v___x_1548_);
lean_ctor_set(v_reuseFailAlloc_1553_, 1, v_pos_1527_);
lean_ctor_set(v_reuseFailAlloc_1553_, 2, v___x_1549_);
v___x_1551_ = v_reuseFailAlloc_1553_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
lean_object* v___x_1552_; 
v___x_1552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1552_, 0, v___x_1547_);
lean_ctor_set(v___x_1552_, 1, v___x_1551_);
return v___x_1552_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___redArg___lam__0___boxed(lean_object* v_next_1558_, lean_object* v_slot_1559_){
_start:
{
lean_object* v_res_1560_; 
v_res_1560_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___redArg___lam__0(v_next_1558_, v_slot_1559_);
lean_dec(v_next_1558_);
return v_res_1560_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___redArg(lean_object* v_inst_1561_, lean_object* v_slot_1562_, lean_object* v_next_1563_){
_start:
{
lean_object* v___f_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; 
v___f_1564_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1564_, 0, v_next_1563_);
v___x_1565_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___boxed), 6, 5);
lean_closure_set(v___x_1565_, 0, lean_box(0));
lean_closure_set(v___x_1565_, 1, lean_box(0));
lean_closure_set(v___x_1565_, 2, lean_box(0));
lean_closure_set(v___x_1565_, 3, v_slot_1562_);
lean_closure_set(v___x_1565_, 4, v___f_1564_);
v___x_1566_ = lean_apply_2(v_inst_1561_, lean_box(0), v___x_1565_);
return v___x_1566_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue(lean_object* v_m_1567_, lean_object* v_00_u03b1_1568_, lean_object* v_inst_1569_, lean_object* v_inst_1570_, lean_object* v_slot_1571_, lean_object* v_next_1572_, lean_object* v_a_1573_){
_start:
{
lean_object* v___x_1574_; 
v___x_1574_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___redArg(v_inst_1570_, v_slot_1571_, v_next_1572_);
return v___x_1574_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___boxed(lean_object* v_m_1575_, lean_object* v_00_u03b1_1576_, lean_object* v_inst_1577_, lean_object* v_inst_1578_, lean_object* v_slot_1579_, lean_object* v_next_1580_, lean_object* v_a_1581_){
_start:
{
lean_object* v_res_1582_; 
v_res_1582_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue(v_m_1575_, v_00_u03b1_1576_, v_inst_1577_, v_inst_1578_, v_slot_1579_, v_next_1580_, v_a_1581_);
lean_dec(v_a_1581_);
lean_dec_ref(v_inst_1577_);
return v_res_1582_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__0(lean_object* v_toApplicative_1583_, lean_object* v_fst_1584_, lean_object* v_a_1585_){
_start:
{
lean_object* v_toPure_1586_; lean_object* v___x_1587_; 
v_toPure_1586_ = lean_ctor_get(v_toApplicative_1583_, 1);
lean_inc(v_toPure_1586_);
lean_dec_ref(v_toApplicative_1583_);
v___x_1587_ = lean_apply_2(v_toPure_1586_, lean_box(0), v_fst_1584_);
return v___x_1587_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__1(lean_object* v_inst_1588_, lean_object* v_toBind_1589_, lean_object* v___f_1590_, lean_object* v_____r_1591_, lean_object* v_st_1592_, lean_object* v___y_1593_){
_start:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; 
lean_inc(v___y_1593_);
v___x_1594_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(v___x_1594_, 0, lean_box(0));
lean_closure_set(v___x_1594_, 1, lean_box(0));
lean_closure_set(v___x_1594_, 2, v___y_1593_);
lean_closure_set(v___x_1594_, 3, v_st_1592_);
v___x_1595_ = lean_apply_2(v_inst_1588_, lean_box(0), v___x_1594_);
v___x_1596_ = lean_apply_4(v_toBind_1589_, lean_box(0), lean_box(0), v___x_1595_, v___f_1590_);
return v___x_1596_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__1___boxed(lean_object* v_inst_1597_, lean_object* v_toBind_1598_, lean_object* v___f_1599_, lean_object* v_____r_1600_, lean_object* v_st_1601_, lean_object* v___y_1602_){
_start:
{
lean_object* v_res_1603_; 
v_res_1603_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__1(v_inst_1597_, v_toBind_1598_, v___f_1599_, v_____r_1600_, v_st_1601_, v___y_1602_);
lean_dec(v___y_1602_);
return v_res_1603_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__2(lean_object* v_snd_1604_, lean_object* v_waiters_1605_, lean_object* v_capacity_1606_, lean_object* v_size_1607_, lean_object* v_buffer_1608_, lean_object* v_write_1609_, lean_object* v_read_1610_, lean_object* v_receivers_1611_, lean_object* v_nextId_1612_, uint8_t v_closed_1613_, lean_object* v_pos_1614_, lean_object* v___f_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_){
_start:
{
lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; 
v___x_1618_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_1618_, 0, v_snd_1604_);
lean_ctor_set(v___x_1618_, 1, v_waiters_1605_);
lean_ctor_set(v___x_1618_, 2, v_capacity_1606_);
lean_ctor_set(v___x_1618_, 3, v_size_1607_);
lean_ctor_set(v___x_1618_, 4, v_buffer_1608_);
lean_ctor_set(v___x_1618_, 5, v_write_1609_);
lean_ctor_set(v___x_1618_, 6, v_read_1610_);
lean_ctor_set(v___x_1618_, 7, v_receivers_1611_);
lean_ctor_set(v___x_1618_, 8, v_nextId_1612_);
lean_ctor_set(v___x_1618_, 9, v_pos_1614_);
lean_ctor_set_uint8(v___x_1618_, sizeof(void*)*10, v_closed_1613_);
v___x_1619_ = lean_box(0);
lean_inc(v_a_1616_);
v___x_1620_ = lean_apply_3(v___f_1615_, v___x_1619_, v___x_1618_, v_a_1616_);
return v___x_1620_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__2___boxed(lean_object* v_snd_1621_, lean_object* v_waiters_1622_, lean_object* v_capacity_1623_, lean_object* v_size_1624_, lean_object* v_buffer_1625_, lean_object* v_write_1626_, lean_object* v_read_1627_, lean_object* v_receivers_1628_, lean_object* v_nextId_1629_, lean_object* v_closed_1630_, lean_object* v_pos_1631_, lean_object* v___f_1632_, lean_object* v_a_1633_, lean_object* v_a_1634_){
_start:
{
uint8_t v_closed_boxed_1635_; lean_object* v_res_1636_; 
v_closed_boxed_1635_ = lean_unbox(v_closed_1630_);
v_res_1636_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__2(v_snd_1621_, v_waiters_1622_, v_capacity_1623_, v_size_1624_, v_buffer_1625_, v_write_1626_, v_read_1627_, v_receivers_1628_, v_nextId_1629_, v_closed_boxed_1635_, v_pos_1631_, v___f_1632_, v_a_1633_, v_a_1634_);
lean_dec(v_a_1633_);
return v_res_1636_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__3(lean_object* v_toApplicative_1637_, lean_object* v_inst_1638_, lean_object* v_toBind_1639_, lean_object* v_a_1640_, lean_object* v_a_1641_, lean_object* v_inst_1642_, lean_object* v_a_1643_){
_start:
{
lean_object* v_fst_1644_; 
v_fst_1644_ = lean_ctor_get(v_a_1643_, 0);
lean_inc(v_fst_1644_);
if (lean_obj_tag(v_fst_1644_) == 1)
{
lean_object* v_snd_1645_; lean_object* v___f_1646_; lean_object* v___f_1647_; uint8_t v___x_1648_; 
v_snd_1645_ = lean_ctor_get(v_a_1643_, 1);
lean_inc(v_snd_1645_);
lean_dec_ref(v_a_1643_);
v___f_1646_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1646_, 0, v_toApplicative_1637_);
lean_closure_set(v___f_1646_, 1, v_fst_1644_);
lean_inc_ref(v___f_1646_);
lean_inc(v_toBind_1639_);
lean_inc(v_inst_1638_);
v___f_1647_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__1___boxed), 6, 3);
lean_closure_set(v___f_1647_, 0, v_inst_1638_);
lean_closure_set(v___f_1647_, 1, v_toBind_1639_);
lean_closure_set(v___f_1647_, 2, v___f_1646_);
v___x_1648_ = lean_unbox(v_snd_1645_);
if (v___x_1648_ == 0)
{
lean_object* v___x_1649_; lean_object* v___x_1650_; 
lean_dec_ref(v___f_1647_);
lean_dec(v_snd_1645_);
lean_dec(v_inst_1642_);
v___x_1649_ = lean_box(0);
v___x_1650_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__1(v_inst_1638_, v_toBind_1639_, v___f_1646_, v___x_1649_, v_a_1640_, v_a_1641_);
return v___x_1650_;
}
else
{
lean_object* v___x_1651_; lean_object* v_producers_1652_; lean_object* v_waiters_1653_; lean_object* v_capacity_1654_; lean_object* v_size_1655_; lean_object* v_buffer_1656_; lean_object* v_write_1657_; lean_object* v_read_1658_; lean_object* v_receivers_1659_; lean_object* v_nextId_1660_; uint8_t v_closed_1661_; lean_object* v_pos_1662_; lean_object* v___x_1663_; 
v___x_1651_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_dequeue___redArg(v_a_1640_);
v_producers_1652_ = lean_ctor_get(v___x_1651_, 0);
v_waiters_1653_ = lean_ctor_get(v___x_1651_, 1);
v_capacity_1654_ = lean_ctor_get(v___x_1651_, 2);
v_size_1655_ = lean_ctor_get(v___x_1651_, 3);
v_buffer_1656_ = lean_ctor_get(v___x_1651_, 4);
v_write_1657_ = lean_ctor_get(v___x_1651_, 5);
v_read_1658_ = lean_ctor_get(v___x_1651_, 6);
v_receivers_1659_ = lean_ctor_get(v___x_1651_, 7);
v_nextId_1660_ = lean_ctor_get(v___x_1651_, 8);
v_closed_1661_ = lean_ctor_get_uint8(v___x_1651_, sizeof(void*)*10);
v_pos_1662_ = lean_ctor_get(v___x_1651_, 9);
lean_inc_ref(v_producers_1652_);
v___x_1663_ = l_Std_Queue_dequeue_x3f___redArg(v_producers_1652_);
if (lean_obj_tag(v___x_1663_) == 1)
{
lean_object* v_val_1664_; lean_object* v_fst_1665_; lean_object* v_snd_1666_; lean_object* v___x_1667_; lean_object* v___f_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; 
lean_inc(v_pos_1662_);
lean_inc(v_nextId_1660_);
lean_inc(v_receivers_1659_);
lean_inc(v_read_1658_);
lean_inc(v_write_1657_);
lean_inc_ref(v_buffer_1656_);
lean_inc(v_size_1655_);
lean_inc(v_capacity_1654_);
lean_inc_ref(v_waiters_1653_);
lean_dec_ref(v___x_1651_);
lean_dec_ref(v___f_1646_);
lean_dec(v_inst_1638_);
v_val_1664_ = lean_ctor_get(v___x_1663_, 0);
lean_inc(v_val_1664_);
lean_dec_ref_known(v___x_1663_, 1);
v_fst_1665_ = lean_ctor_get(v_val_1664_, 0);
lean_inc(v_fst_1665_);
v_snd_1666_ = lean_ctor_get(v_val_1664_, 1);
lean_inc(v_snd_1666_);
lean_dec(v_val_1664_);
v___x_1667_ = lean_box(v_closed_1661_);
lean_inc(v_a_1641_);
v___f_1668_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__2___boxed), 14, 13);
lean_closure_set(v___f_1668_, 0, v_snd_1666_);
lean_closure_set(v___f_1668_, 1, v_waiters_1653_);
lean_closure_set(v___f_1668_, 2, v_capacity_1654_);
lean_closure_set(v___f_1668_, 3, v_size_1655_);
lean_closure_set(v___f_1668_, 4, v_buffer_1656_);
lean_closure_set(v___f_1668_, 5, v_write_1657_);
lean_closure_set(v___f_1668_, 6, v_read_1658_);
lean_closure_set(v___f_1668_, 7, v_receivers_1659_);
lean_closure_set(v___f_1668_, 8, v_nextId_1660_);
lean_closure_set(v___f_1668_, 9, v___x_1667_);
lean_closure_set(v___f_1668_, 10, v_pos_1662_);
lean_closure_set(v___f_1668_, 11, v___f_1647_);
lean_closure_set(v___f_1668_, 12, v_a_1641_);
v___x_1669_ = lean_alloc_closure((void*)(l_IO_Promise_resolve___boxed), 4, 3);
lean_closure_set(v___x_1669_, 0, lean_box(0));
lean_closure_set(v___x_1669_, 1, v_snd_1645_);
lean_closure_set(v___x_1669_, 2, v_fst_1665_);
v___x_1670_ = lean_apply_2(v_inst_1642_, lean_box(0), v___x_1669_);
v___x_1671_ = lean_apply_4(v_toBind_1639_, lean_box(0), lean_box(0), v___x_1670_, v___f_1668_);
return v___x_1671_;
}
else
{
lean_object* v___x_1672_; lean_object* v___x_1673_; 
lean_dec(v___x_1663_);
lean_dec_ref(v___f_1647_);
lean_dec(v_snd_1645_);
lean_dec(v_inst_1642_);
v___x_1672_ = lean_box(0);
v___x_1673_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__1(v_inst_1638_, v_toBind_1639_, v___f_1646_, v___x_1672_, v___x_1651_, v_a_1641_);
return v___x_1673_;
}
}
}
else
{
lean_object* v_toPure_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; 
lean_dec(v_fst_1644_);
lean_dec_ref(v_a_1643_);
lean_dec(v_inst_1642_);
lean_dec_ref(v_a_1640_);
lean_dec(v_toBind_1639_);
lean_dec(v_inst_1638_);
v_toPure_1674_ = lean_ctor_get(v_toApplicative_1637_, 1);
lean_inc(v_toPure_1674_);
lean_dec_ref(v_toApplicative_1637_);
v___x_1675_ = lean_box(0);
v___x_1676_ = lean_apply_2(v_toPure_1674_, lean_box(0), v___x_1675_);
return v___x_1676_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__3___boxed(lean_object* v_toApplicative_1677_, lean_object* v_inst_1678_, lean_object* v_toBind_1679_, lean_object* v_a_1680_, lean_object* v_a_1681_, lean_object* v_inst_1682_, lean_object* v_a_1683_){
_start:
{
lean_object* v_res_1684_; 
v_res_1684_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__3(v_toApplicative_1677_, v_inst_1678_, v_toBind_1679_, v_a_1680_, v_a_1681_, v_inst_1682_, v_a_1683_);
lean_dec(v_a_1681_);
return v_res_1684_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__4(lean_object* v_inst_1685_, lean_object* v_next_1686_, lean_object* v_toBind_1687_, lean_object* v___f_1688_, lean_object* v_a_1689_){
_start:
{
lean_object* v___x_1690_; lean_object* v___x_1691_; 
v___x_1690_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___redArg(v_inst_1685_, v_a_1689_, v_next_1686_);
v___x_1691_ = lean_apply_4(v_toBind_1687_, lean_box(0), lean_box(0), v___x_1690_, v___f_1688_);
return v___x_1691_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__5(lean_object* v_a_1692_, lean_object* v_next_1693_, lean_object* v_inst_1694_, lean_object* v_inst_1695_, lean_object* v_a_1696_, lean_object* v_toBind_1697_, lean_object* v___f_1698_, lean_object* v_toApplicative_1699_, uint8_t v_a_1700_){
_start:
{
if (v_a_1700_ == 0)
{
lean_object* v_capacity_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; 
lean_dec_ref(v_toApplicative_1699_);
v_capacity_1701_ = lean_ctor_get(v_a_1692_, 2);
v___x_1702_ = lean_nat_mod(v_next_1693_, v_capacity_1701_);
v___x_1703_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg(v_inst_1694_, v_inst_1695_, v___x_1702_, v_a_1696_);
v___x_1704_ = lean_apply_4(v_toBind_1697_, lean_box(0), lean_box(0), v___x_1703_, v___f_1698_);
return v___x_1704_;
}
else
{
lean_object* v_toPure_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; 
lean_dec(v___f_1698_);
lean_dec(v_toBind_1697_);
lean_dec(v_inst_1695_);
lean_dec_ref(v_inst_1694_);
v_toPure_1705_ = lean_ctor_get(v_toApplicative_1699_, 1);
lean_inc(v_toPure_1705_);
lean_dec_ref(v_toApplicative_1699_);
v___x_1706_ = lean_box(0);
v___x_1707_ = lean_apply_2(v_toPure_1705_, lean_box(0), v___x_1706_);
return v___x_1707_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__5___boxed(lean_object* v_a_1708_, lean_object* v_next_1709_, lean_object* v_inst_1710_, lean_object* v_inst_1711_, lean_object* v_a_1712_, lean_object* v_toBind_1713_, lean_object* v___f_1714_, lean_object* v_toApplicative_1715_, lean_object* v_a_1716_){
_start:
{
uint8_t v_a_boxed_1717_; lean_object* v_res_1718_; 
v_a_boxed_1717_ = lean_unbox(v_a_1716_);
v_res_1718_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__5(v_a_1708_, v_next_1709_, v_inst_1710_, v_inst_1711_, v_a_1712_, v_toBind_1713_, v___f_1714_, v_toApplicative_1715_, v_a_boxed_1717_);
lean_dec(v_a_1712_);
lean_dec(v_next_1709_);
lean_dec_ref(v_a_1708_);
return v_res_1718_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__6(lean_object* v_toApplicative_1719_, lean_object* v_inst_1720_, lean_object* v_toBind_1721_, lean_object* v_a_1722_, lean_object* v_inst_1723_, lean_object* v_next_1724_, lean_object* v_inst_1725_, lean_object* v_a_1726_){
_start:
{
lean_object* v___f_1727_; lean_object* v___f_1728_; lean_object* v___f_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; 
lean_inc_n(v_a_1722_, 2);
lean_inc_ref(v_a_1726_);
lean_inc_n(v_toBind_1721_, 3);
lean_inc_n(v_inst_1720_, 3);
lean_inc_ref(v_toApplicative_1719_);
v___f_1727_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_1727_, 0, v_toApplicative_1719_);
lean_closure_set(v___f_1727_, 1, v_inst_1720_);
lean_closure_set(v___f_1727_, 2, v_toBind_1721_);
lean_closure_set(v___f_1727_, 3, v_a_1726_);
lean_closure_set(v___f_1727_, 4, v_a_1722_);
lean_closure_set(v___f_1727_, 5, v_inst_1723_);
lean_inc(v_next_1724_);
v___f_1728_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__4), 5, 4);
lean_closure_set(v___f_1728_, 0, v_inst_1720_);
lean_closure_set(v___f_1728_, 1, v_next_1724_);
lean_closure_set(v___f_1728_, 2, v_toBind_1721_);
lean_closure_set(v___f_1728_, 3, v___f_1727_);
lean_inc_ref(v_inst_1725_);
v___f_1729_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__5___boxed), 9, 8);
lean_closure_set(v___f_1729_, 0, v_a_1726_);
lean_closure_set(v___f_1729_, 1, v_next_1724_);
lean_closure_set(v___f_1729_, 2, v_inst_1725_);
lean_closure_set(v___f_1729_, 3, v_inst_1720_);
lean_closure_set(v___f_1729_, 4, v_a_1722_);
lean_closure_set(v___f_1729_, 5, v_toBind_1721_);
lean_closure_set(v___f_1729_, 6, v___f_1728_);
lean_closure_set(v___f_1729_, 7, v_toApplicative_1719_);
v___x_1730_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___redArg(v_inst_1725_, v_inst_1720_, v_a_1722_);
v___x_1731_ = lean_apply_4(v_toBind_1721_, lean_box(0), lean_box(0), v___x_1730_, v___f_1729_);
return v___x_1731_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__6___boxed(lean_object* v_toApplicative_1732_, lean_object* v_inst_1733_, lean_object* v_toBind_1734_, lean_object* v_a_1735_, lean_object* v_inst_1736_, lean_object* v_next_1737_, lean_object* v_inst_1738_, lean_object* v_a_1739_){
_start:
{
lean_object* v_res_1740_; 
v_res_1740_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__6(v_toApplicative_1732_, v_inst_1733_, v_toBind_1734_, v_a_1735_, v_inst_1736_, v_next_1737_, v_inst_1738_, v_a_1739_);
lean_dec(v_a_1735_);
return v_res_1740_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg(lean_object* v_inst_1741_, lean_object* v_inst_1742_, lean_object* v_inst_1743_, lean_object* v_next_1744_, lean_object* v_a_1745_){
_start:
{
lean_object* v_toApplicative_1746_; lean_object* v_toBind_1747_; lean_object* v___f_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; 
v_toApplicative_1746_ = lean_ctor_get(v_inst_1741_, 0);
lean_inc_ref(v_toApplicative_1746_);
v_toBind_1747_ = lean_ctor_get(v_inst_1741_, 1);
lean_inc_n(v_toBind_1747_, 2);
lean_inc_n(v_a_1745_, 2);
lean_inc(v_inst_1742_);
v___f_1748_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__6___boxed), 8, 7);
lean_closure_set(v___f_1748_, 0, v_toApplicative_1746_);
lean_closure_set(v___f_1748_, 1, v_inst_1742_);
lean_closure_set(v___f_1748_, 2, v_toBind_1747_);
lean_closure_set(v___f_1748_, 3, v_a_1745_);
lean_closure_set(v___f_1748_, 4, v_inst_1743_);
lean_closure_set(v___f_1748_, 5, v_next_1744_);
lean_closure_set(v___f_1748_, 6, v_inst_1741_);
v___x_1749_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1749_, 0, lean_box(0));
lean_closure_set(v___x_1749_, 1, lean_box(0));
lean_closure_set(v___x_1749_, 2, v_a_1745_);
v___x_1750_ = lean_apply_2(v_inst_1742_, lean_box(0), v___x_1749_);
v___x_1751_ = lean_apply_4(v_toBind_1747_, lean_box(0), lean_box(0), v___x_1750_, v___f_1748_);
return v___x_1751_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___boxed(lean_object* v_inst_1752_, lean_object* v_inst_1753_, lean_object* v_inst_1754_, lean_object* v_next_1755_, lean_object* v_a_1756_){
_start:
{
lean_object* v_res_1757_; 
v_res_1757_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg(v_inst_1752_, v_inst_1753_, v_inst_1754_, v_next_1755_, v_a_1756_);
lean_dec(v_a_1756_);
return v_res_1757_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition(lean_object* v_m_1758_, lean_object* v_00_u03b1_1759_, lean_object* v_inst_1760_, lean_object* v_inst_1761_, lean_object* v_inst_1762_, lean_object* v_next_1763_, lean_object* v_a_1764_){
_start:
{
lean_object* v___x_1765_; 
v___x_1765_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg(v_inst_1760_, v_inst_1761_, v_inst_1762_, v_next_1763_, v_a_1764_);
return v___x_1765_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___boxed(lean_object* v_m_1766_, lean_object* v_00_u03b1_1767_, lean_object* v_inst_1768_, lean_object* v_inst_1769_, lean_object* v_inst_1770_, lean_object* v_next_1771_, lean_object* v_a_1772_){
_start:
{
lean_object* v_res_1773_; 
v_res_1773_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition(v_m_1766_, v_00_u03b1_1767_, v_inst_1768_, v_inst_1769_, v_inst_1770_, v_next_1771_, v_a_1772_);
lean_dec(v_a_1772_);
return v_res_1773_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__1___redArg(lean_object* v_place_1774_, lean_object* v_a_1775_){
_start:
{
lean_object* v___x_1777_; lean_object* v_capacity_1778_; lean_object* v_buffer_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; 
v___x_1777_ = lean_st_ref_get(v_a_1775_);
v_capacity_1778_ = lean_ctor_get(v___x_1777_, 2);
lean_inc(v_capacity_1778_);
v_buffer_1779_ = lean_ctor_get(v___x_1777_, 4);
lean_inc_ref(v_buffer_1779_);
lean_dec(v___x_1777_);
v___x_1780_ = lean_nat_mod(v_place_1774_, v_capacity_1778_);
lean_dec(v_capacity_1778_);
v___x_1781_ = lean_array_fget(v_buffer_1779_, v___x_1780_);
lean_dec(v___x_1780_);
lean_dec_ref(v_buffer_1779_);
v___x_1782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1782_, 0, v___x_1781_);
return v___x_1782_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__1___redArg___boxed(lean_object* v_place_1783_, lean_object* v_a_1784_, lean_object* v___y_1785_){
_start:
{
lean_object* v_res_1786_; 
v_res_1786_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__1___redArg(v_place_1783_, v_a_1784_);
lean_dec(v_a_1784_);
lean_dec(v_place_1783_);
return v_res_1786_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__0___redArg(lean_object* v_a_1787_){
_start:
{
lean_object* v___x_1789_; lean_object* v_size_1790_; lean_object* v___x_1791_; uint8_t v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; 
v___x_1789_ = lean_st_ref_get(v_a_1787_);
v_size_1790_ = lean_ctor_get(v___x_1789_, 3);
lean_inc(v_size_1790_);
lean_dec(v___x_1789_);
v___x_1791_ = lean_unsigned_to_nat(0u);
v___x_1792_ = lean_nat_dec_eq(v_size_1790_, v___x_1791_);
lean_dec(v_size_1790_);
v___x_1793_ = lean_box(v___x_1792_);
v___x_1794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1794_, 0, v___x_1793_);
return v___x_1794_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__0___redArg___boxed(lean_object* v_a_1795_, lean_object* v___y_1796_){
_start:
{
lean_object* v_res_1797_; 
v_res_1797_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__0___redArg(v_a_1795_);
lean_dec(v_a_1795_);
return v_res_1797_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__2___redArg(lean_object* v_slot_1798_, lean_object* v_next_1799_){
_start:
{
lean_object* v___x_1801_; lean_object* v_fst_1803_; lean_object* v_snd_1804_; lean_object* v_value_1807_; lean_object* v_pos_1808_; lean_object* v_remaining_1809_; uint8_t v___x_1810_; 
v___x_1801_ = lean_st_ref_take(v_slot_1798_);
v_value_1807_ = lean_ctor_get(v___x_1801_, 0);
v_pos_1808_ = lean_ctor_get(v___x_1801_, 1);
v_remaining_1809_ = lean_ctor_get(v___x_1801_, 2);
v___x_1810_ = lean_nat_dec_eq(v_next_1799_, v_pos_1808_);
if (v___x_1810_ == 0)
{
lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; 
v___x_1811_ = lean_box(0);
v___x_1812_ = lean_box(v___x_1810_);
v___x_1813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1813_, 0, v___x_1811_);
lean_ctor_set(v___x_1813_, 1, v___x_1812_);
v_fst_1803_ = v___x_1813_;
v_snd_1804_ = v___x_1801_;
goto v___jp_1802_;
}
else
{
lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1832_; 
lean_inc(v_remaining_1809_);
lean_inc(v_pos_1808_);
lean_inc(v_value_1807_);
v_isSharedCheck_1832_ = !lean_is_exclusive(v___x_1801_);
if (v_isSharedCheck_1832_ == 0)
{
lean_object* v_unused_1833_; lean_object* v_unused_1834_; lean_object* v_unused_1835_; 
v_unused_1833_ = lean_ctor_get(v___x_1801_, 2);
lean_dec(v_unused_1833_);
v_unused_1834_ = lean_ctor_get(v___x_1801_, 1);
lean_dec(v_unused_1834_);
v_unused_1835_ = lean_ctor_get(v___x_1801_, 0);
lean_dec(v_unused_1835_);
v___x_1815_ = v___x_1801_;
v_isShared_1816_ = v_isSharedCheck_1832_;
goto v_resetjp_1814_;
}
else
{
lean_dec(v___x_1801_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1832_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v___x_1817_; uint8_t v___x_1818_; 
v___x_1817_ = lean_unsigned_to_nat(1u);
v___x_1818_ = lean_nat_dec_eq(v_remaining_1809_, v___x_1817_);
if (v___x_1818_ == 0)
{
lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1823_; 
v___x_1819_ = lean_box(v___x_1818_);
lean_inc(v_value_1807_);
v___x_1820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1820_, 0, v_value_1807_);
lean_ctor_set(v___x_1820_, 1, v___x_1819_);
v___x_1821_ = lean_nat_sub(v_remaining_1809_, v___x_1817_);
lean_dec(v_remaining_1809_);
if (v_isShared_1816_ == 0)
{
lean_ctor_set(v___x_1815_, 2, v___x_1821_);
v___x_1823_ = v___x_1815_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v_value_1807_);
lean_ctor_set(v_reuseFailAlloc_1824_, 1, v_pos_1808_);
lean_ctor_set(v_reuseFailAlloc_1824_, 2, v___x_1821_);
v___x_1823_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
v_fst_1803_ = v___x_1820_;
v_snd_1804_ = v___x_1823_;
goto v___jp_1802_;
}
}
else
{
lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1830_; 
lean_dec(v_remaining_1809_);
v___x_1825_ = lean_box(v___x_1818_);
v___x_1826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1826_, 0, v_value_1807_);
lean_ctor_set(v___x_1826_, 1, v___x_1825_);
v___x_1827_ = lean_box(0);
v___x_1828_ = lean_unsigned_to_nat(0u);
if (v_isShared_1816_ == 0)
{
lean_ctor_set(v___x_1815_, 2, v___x_1828_);
lean_ctor_set(v___x_1815_, 0, v___x_1827_);
v___x_1830_ = v___x_1815_;
goto v_reusejp_1829_;
}
else
{
lean_object* v_reuseFailAlloc_1831_; 
v_reuseFailAlloc_1831_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1831_, 0, v___x_1827_);
lean_ctor_set(v_reuseFailAlloc_1831_, 1, v_pos_1808_);
lean_ctor_set(v_reuseFailAlloc_1831_, 2, v___x_1828_);
v___x_1830_ = v_reuseFailAlloc_1831_;
goto v_reusejp_1829_;
}
v_reusejp_1829_:
{
v_fst_1803_ = v___x_1826_;
v_snd_1804_ = v___x_1830_;
goto v___jp_1802_;
}
}
}
}
v___jp_1802_:
{
lean_object* v___x_1805_; lean_object* v___x_1806_; 
v___x_1805_ = lean_st_ref_put(v_slot_1798_, v_snd_1804_);
v___x_1806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1806_, 0, v_fst_1803_);
return v___x_1806_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__2___redArg___boxed(lean_object* v_slot_1836_, lean_object* v_next_1837_, lean_object* v___y_1838_){
_start:
{
lean_object* v_res_1839_; 
v_res_1839_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__2___redArg(v_slot_1836_, v_next_1837_);
lean_dec(v_next_1837_);
lean_dec(v_slot_1836_);
return v_res_1839_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0___redArg(lean_object* v_next_1840_, lean_object* v_a_1841_){
_start:
{
lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v_a_1845_; lean_object* v___x_1847_; uint8_t v_isShared_1848_; uint8_t v_isSharedCheck_1916_; 
v___x_1843_ = lean_st_ref_get(v_a_1841_);
v___x_1844_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__0___redArg(v_a_1841_);
v_a_1845_ = lean_ctor_get(v___x_1844_, 0);
v_isSharedCheck_1916_ = !lean_is_exclusive(v___x_1844_);
if (v_isSharedCheck_1916_ == 0)
{
v___x_1847_ = v___x_1844_;
v_isShared_1848_ = v_isSharedCheck_1916_;
goto v_resetjp_1846_;
}
else
{
lean_inc(v_a_1845_);
lean_dec(v___x_1844_);
v___x_1847_ = lean_box(0);
v_isShared_1848_ = v_isSharedCheck_1916_;
goto v_resetjp_1846_;
}
v_resetjp_1846_:
{
uint8_t v___x_1849_; 
v___x_1849_ = lean_unbox(v_a_1845_);
lean_dec(v_a_1845_);
if (v___x_1849_ == 0)
{
lean_object* v_capacity_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v_a_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1911_; 
lean_del_object(v___x_1847_);
v_capacity_1850_ = lean_ctor_get(v___x_1843_, 2);
v___x_1851_ = lean_nat_mod(v_next_1840_, v_capacity_1850_);
v___x_1852_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__1___redArg(v___x_1851_, v_a_1841_);
lean_dec(v___x_1851_);
v_a_1853_ = lean_ctor_get(v___x_1852_, 0);
v_isSharedCheck_1911_ = !lean_is_exclusive(v___x_1852_);
if (v_isSharedCheck_1911_ == 0)
{
v___x_1855_ = v___x_1852_;
v_isShared_1856_ = v_isSharedCheck_1911_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_a_1853_);
lean_dec(v___x_1852_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1911_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v___x_1857_; lean_object* v_a_1858_; lean_object* v___x_1860_; uint8_t v_isShared_1861_; uint8_t v_isSharedCheck_1910_; 
v___x_1857_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__2___redArg(v_a_1853_, v_next_1840_);
lean_dec(v_a_1853_);
v_a_1858_ = lean_ctor_get(v___x_1857_, 0);
v_isSharedCheck_1910_ = !lean_is_exclusive(v___x_1857_);
if (v_isSharedCheck_1910_ == 0)
{
v___x_1860_ = v___x_1857_;
v_isShared_1861_ = v_isSharedCheck_1910_;
goto v_resetjp_1859_;
}
else
{
lean_inc(v_a_1858_);
lean_dec(v___x_1857_);
v___x_1860_ = lean_box(0);
v_isShared_1861_ = v_isSharedCheck_1910_;
goto v_resetjp_1859_;
}
v_resetjp_1859_:
{
lean_object* v_fst_1862_; lean_object* v_snd_1863_; lean_object* v_st_1865_; lean_object* v___y_1866_; 
v_fst_1862_ = lean_ctor_get(v_a_1858_, 0);
lean_inc(v_fst_1862_);
v_snd_1863_ = lean_ctor_get(v_a_1858_, 1);
lean_inc(v_snd_1863_);
lean_dec(v_a_1858_);
if (lean_obj_tag(v_fst_1862_) == 1)
{
uint8_t v___x_1871_; 
lean_del_object(v___x_1855_);
v___x_1871_ = lean_unbox(v_snd_1863_);
if (v___x_1871_ == 0)
{
lean_dec(v_snd_1863_);
v_st_1865_ = v___x_1843_;
v___y_1866_ = v_a_1841_;
goto v___jp_1864_;
}
else
{
lean_object* v___x_1872_; lean_object* v_producers_1873_; lean_object* v_waiters_1874_; lean_object* v_capacity_1875_; lean_object* v_size_1876_; lean_object* v_buffer_1877_; lean_object* v_write_1878_; lean_object* v_read_1879_; lean_object* v_receivers_1880_; lean_object* v_nextId_1881_; uint8_t v_closed_1882_; lean_object* v_pos_1883_; lean_object* v___x_1884_; 
v___x_1872_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_dequeue___redArg(v___x_1843_);
v_producers_1873_ = lean_ctor_get(v___x_1872_, 0);
v_waiters_1874_ = lean_ctor_get(v___x_1872_, 1);
v_capacity_1875_ = lean_ctor_get(v___x_1872_, 2);
v_size_1876_ = lean_ctor_get(v___x_1872_, 3);
v_buffer_1877_ = lean_ctor_get(v___x_1872_, 4);
v_write_1878_ = lean_ctor_get(v___x_1872_, 5);
v_read_1879_ = lean_ctor_get(v___x_1872_, 6);
v_receivers_1880_ = lean_ctor_get(v___x_1872_, 7);
v_nextId_1881_ = lean_ctor_get(v___x_1872_, 8);
v_closed_1882_ = lean_ctor_get_uint8(v___x_1872_, sizeof(void*)*10);
v_pos_1883_ = lean_ctor_get(v___x_1872_, 9);
lean_inc_ref(v_producers_1873_);
v___x_1884_ = l_Std_Queue_dequeue_x3f___redArg(v_producers_1873_);
if (lean_obj_tag(v___x_1884_) == 1)
{
lean_object* v___x_1886_; uint8_t v_isShared_1887_; uint8_t v_isSharedCheck_1895_; 
lean_inc(v_pos_1883_);
lean_inc(v_nextId_1881_);
lean_inc(v_receivers_1880_);
lean_inc(v_read_1879_);
lean_inc(v_write_1878_);
lean_inc_ref(v_buffer_1877_);
lean_inc(v_size_1876_);
lean_inc(v_capacity_1875_);
lean_inc_ref(v_waiters_1874_);
v_isSharedCheck_1895_ = !lean_is_exclusive(v___x_1872_);
if (v_isSharedCheck_1895_ == 0)
{
lean_object* v_unused_1896_; lean_object* v_unused_1897_; lean_object* v_unused_1898_; lean_object* v_unused_1899_; lean_object* v_unused_1900_; lean_object* v_unused_1901_; lean_object* v_unused_1902_; lean_object* v_unused_1903_; lean_object* v_unused_1904_; lean_object* v_unused_1905_; 
v_unused_1896_ = lean_ctor_get(v___x_1872_, 9);
lean_dec(v_unused_1896_);
v_unused_1897_ = lean_ctor_get(v___x_1872_, 8);
lean_dec(v_unused_1897_);
v_unused_1898_ = lean_ctor_get(v___x_1872_, 7);
lean_dec(v_unused_1898_);
v_unused_1899_ = lean_ctor_get(v___x_1872_, 6);
lean_dec(v_unused_1899_);
v_unused_1900_ = lean_ctor_get(v___x_1872_, 5);
lean_dec(v_unused_1900_);
v_unused_1901_ = lean_ctor_get(v___x_1872_, 4);
lean_dec(v_unused_1901_);
v_unused_1902_ = lean_ctor_get(v___x_1872_, 3);
lean_dec(v_unused_1902_);
v_unused_1903_ = lean_ctor_get(v___x_1872_, 2);
lean_dec(v_unused_1903_);
v_unused_1904_ = lean_ctor_get(v___x_1872_, 1);
lean_dec(v_unused_1904_);
v_unused_1905_ = lean_ctor_get(v___x_1872_, 0);
lean_dec(v_unused_1905_);
v___x_1886_ = v___x_1872_;
v_isShared_1887_ = v_isSharedCheck_1895_;
goto v_resetjp_1885_;
}
else
{
lean_dec(v___x_1872_);
v___x_1886_ = lean_box(0);
v_isShared_1887_ = v_isSharedCheck_1895_;
goto v_resetjp_1885_;
}
v_resetjp_1885_:
{
lean_object* v_val_1888_; lean_object* v_fst_1889_; lean_object* v_snd_1890_; lean_object* v___x_1891_; lean_object* v___x_1893_; 
v_val_1888_ = lean_ctor_get(v___x_1884_, 0);
lean_inc(v_val_1888_);
lean_dec_ref_known(v___x_1884_, 1);
v_fst_1889_ = lean_ctor_get(v_val_1888_, 0);
lean_inc(v_fst_1889_);
v_snd_1890_ = lean_ctor_get(v_val_1888_, 1);
lean_inc(v_snd_1890_);
lean_dec(v_val_1888_);
v___x_1891_ = lean_io_promise_resolve(v_snd_1863_, v_fst_1889_);
lean_dec(v_fst_1889_);
if (v_isShared_1887_ == 0)
{
lean_ctor_set(v___x_1886_, 0, v_snd_1890_);
v___x_1893_ = v___x_1886_;
goto v_reusejp_1892_;
}
else
{
lean_object* v_reuseFailAlloc_1894_; 
v_reuseFailAlloc_1894_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_1894_, 0, v_snd_1890_);
lean_ctor_set(v_reuseFailAlloc_1894_, 1, v_waiters_1874_);
lean_ctor_set(v_reuseFailAlloc_1894_, 2, v_capacity_1875_);
lean_ctor_set(v_reuseFailAlloc_1894_, 3, v_size_1876_);
lean_ctor_set(v_reuseFailAlloc_1894_, 4, v_buffer_1877_);
lean_ctor_set(v_reuseFailAlloc_1894_, 5, v_write_1878_);
lean_ctor_set(v_reuseFailAlloc_1894_, 6, v_read_1879_);
lean_ctor_set(v_reuseFailAlloc_1894_, 7, v_receivers_1880_);
lean_ctor_set(v_reuseFailAlloc_1894_, 8, v_nextId_1881_);
lean_ctor_set(v_reuseFailAlloc_1894_, 9, v_pos_1883_);
lean_ctor_set_uint8(v_reuseFailAlloc_1894_, sizeof(void*)*10, v_closed_1882_);
v___x_1893_ = v_reuseFailAlloc_1894_;
goto v_reusejp_1892_;
}
v_reusejp_1892_:
{
v_st_1865_ = v___x_1893_;
v___y_1866_ = v_a_1841_;
goto v___jp_1864_;
}
}
}
else
{
lean_dec(v___x_1884_);
lean_dec(v_snd_1863_);
v_st_1865_ = v___x_1872_;
v___y_1866_ = v_a_1841_;
goto v___jp_1864_;
}
}
}
else
{
lean_object* v___x_1906_; lean_object* v___x_1908_; 
lean_dec(v_snd_1863_);
lean_dec(v_fst_1862_);
lean_del_object(v___x_1860_);
lean_dec(v___x_1843_);
v___x_1906_ = lean_box(0);
if (v_isShared_1856_ == 0)
{
lean_ctor_set(v___x_1855_, 0, v___x_1906_);
v___x_1908_ = v___x_1855_;
goto v_reusejp_1907_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v___x_1906_);
v___x_1908_ = v_reuseFailAlloc_1909_;
goto v_reusejp_1907_;
}
v_reusejp_1907_:
{
return v___x_1908_;
}
}
v___jp_1864_:
{
lean_object* v___x_1867_; lean_object* v___x_1869_; 
v___x_1867_ = lean_st_ref_swap(v___y_1866_, v_st_1865_);
lean_dec(v___x_1867_);
if (v_isShared_1861_ == 0)
{
lean_ctor_set(v___x_1860_, 0, v_fst_1862_);
v___x_1869_ = v___x_1860_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v_fst_1862_);
v___x_1869_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
return v___x_1869_;
}
}
}
}
}
else
{
lean_object* v___x_1912_; lean_object* v___x_1914_; 
lean_dec(v___x_1843_);
v___x_1912_ = lean_box(0);
if (v_isShared_1848_ == 0)
{
lean_ctor_set(v___x_1847_, 0, v___x_1912_);
v___x_1914_ = v___x_1847_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v___x_1912_);
v___x_1914_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
return v___x_1914_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0___redArg___boxed(lean_object* v_next_1917_, lean_object* v_a_1918_, lean_object* v___y_1919_){
_start:
{
lean_object* v_res_1920_; 
v_res_1920_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0___redArg(v_next_1917_, v_a_1918_);
lean_dec(v_a_1918_);
lean_dec(v_next_1917_);
return v_res_1920_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__2___redArg(lean_object* v_a_1921_, lean_object* v___y_1922_){
_start:
{
lean_object* v_fst_1924_; lean_object* v_snd_1925_; lean_object* v___x_1927_; uint8_t v_isShared_1928_; uint8_t v_isSharedCheck_1962_; 
v_fst_1924_ = lean_ctor_get(v_a_1921_, 0);
v_snd_1925_ = lean_ctor_get(v_a_1921_, 1);
v_isSharedCheck_1962_ = !lean_is_exclusive(v_a_1921_);
if (v_isSharedCheck_1962_ == 0)
{
v___x_1927_ = v_a_1921_;
v_isShared_1928_ = v_isSharedCheck_1962_;
goto v_resetjp_1926_;
}
else
{
lean_inc(v_snd_1925_);
lean_inc(v_fst_1924_);
lean_dec(v_a_1921_);
v___x_1927_ = lean_box(0);
v_isShared_1928_ = v_isSharedCheck_1962_;
goto v_resetjp_1926_;
}
v_resetjp_1926_:
{
lean_object* v_size_1934_; lean_object* v_pos_1935_; uint8_t v___x_1936_; 
v_size_1934_ = lean_ctor_get(v_fst_1924_, 3);
v_pos_1935_ = lean_ctor_get(v_fst_1924_, 9);
v___x_1936_ = lean_nat_dec_lt(v_snd_1925_, v_pos_1935_);
if (v___x_1936_ == 0)
{
goto v___jp_1929_;
}
else
{
lean_object* v___x_1937_; uint8_t v___x_1938_; 
v___x_1937_ = lean_unsigned_to_nat(0u);
v___x_1938_ = lean_nat_dec_lt(v___x_1937_, v_size_1934_);
if (v___x_1938_ == 0)
{
goto v___jp_1929_;
}
else
{
lean_object* v___x_1939_; 
lean_del_object(v___x_1927_);
v___x_1939_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0___redArg(v_snd_1925_, v___y_1922_);
if (lean_obj_tag(v___x_1939_) == 0)
{
lean_object* v_a_1940_; lean_object* v___x_1942_; uint8_t v_isShared_1943_; uint8_t v_isSharedCheck_1953_; 
v_a_1940_ = lean_ctor_get(v___x_1939_, 0);
v_isSharedCheck_1953_ = !lean_is_exclusive(v___x_1939_);
if (v_isSharedCheck_1953_ == 0)
{
v___x_1942_ = v___x_1939_;
v_isShared_1943_ = v_isSharedCheck_1953_;
goto v_resetjp_1941_;
}
else
{
lean_inc(v_a_1940_);
lean_dec(v___x_1939_);
v___x_1942_ = lean_box(0);
v_isShared_1943_ = v_isSharedCheck_1953_;
goto v_resetjp_1941_;
}
v_resetjp_1941_:
{
if (lean_obj_tag(v_a_1940_) == 1)
{
lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; 
lean_dec_ref_known(v_a_1940_, 1);
lean_del_object(v___x_1942_);
lean_dec(v_fst_1924_);
v___x_1944_ = lean_st_ref_get(v___y_1922_);
v___x_1945_ = lean_unsigned_to_nat(1u);
v___x_1946_ = lean_nat_add(v_snd_1925_, v___x_1945_);
lean_dec(v_snd_1925_);
v___x_1947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1947_, 0, v___x_1944_);
lean_ctor_set(v___x_1947_, 1, v___x_1946_);
v_a_1921_ = v___x_1947_;
goto _start;
}
else
{
lean_object* v___x_1949_; lean_object* v___x_1951_; 
lean_dec(v_a_1940_);
v___x_1949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1949_, 0, v_fst_1924_);
lean_ctor_set(v___x_1949_, 1, v_snd_1925_);
if (v_isShared_1943_ == 0)
{
lean_ctor_set(v___x_1942_, 0, v___x_1949_);
v___x_1951_ = v___x_1942_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v___x_1949_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
return v___x_1951_;
}
}
}
}
else
{
lean_object* v_a_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_1961_; 
lean_dec(v_snd_1925_);
lean_dec(v_fst_1924_);
v_a_1954_ = lean_ctor_get(v___x_1939_, 0);
v_isSharedCheck_1961_ = !lean_is_exclusive(v___x_1939_);
if (v_isSharedCheck_1961_ == 0)
{
v___x_1956_ = v___x_1939_;
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_a_1954_);
lean_dec(v___x_1939_);
v___x_1956_ = lean_box(0);
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
v_resetjp_1955_:
{
lean_object* v___x_1959_; 
if (v_isShared_1957_ == 0)
{
v___x_1959_ = v___x_1956_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1960_; 
v_reuseFailAlloc_1960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1960_, 0, v_a_1954_);
v___x_1959_ = v_reuseFailAlloc_1960_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
return v___x_1959_;
}
}
}
}
}
v___jp_1929_:
{
lean_object* v___x_1931_; 
if (v_isShared_1928_ == 0)
{
v___x_1931_ = v___x_1927_;
goto v_reusejp_1930_;
}
else
{
lean_object* v_reuseFailAlloc_1933_; 
v_reuseFailAlloc_1933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1933_, 0, v_fst_1924_);
lean_ctor_set(v_reuseFailAlloc_1933_, 1, v_snd_1925_);
v___x_1931_ = v_reuseFailAlloc_1933_;
goto v_reusejp_1930_;
}
v_reusejp_1930_:
{
lean_object* v___x_1932_; 
v___x_1932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1932_, 0, v___x_1931_);
return v___x_1932_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__2___redArg___boxed(lean_object* v_a_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_){
_start:
{
lean_object* v_res_1966_; 
v_res_1966_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__2___redArg(v_a_1963_, v___y_1964_);
lean_dec(v___y_1964_);
return v_res_1966_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___redArg(lean_object* v_t_1967_, lean_object* v_k_1968_){
_start:
{
if (lean_obj_tag(v_t_1967_) == 0)
{
lean_object* v_k_1969_; lean_object* v_v_1970_; lean_object* v_l_1971_; lean_object* v_r_1972_; uint8_t v___x_1973_; 
v_k_1969_ = lean_ctor_get(v_t_1967_, 1);
v_v_1970_ = lean_ctor_get(v_t_1967_, 2);
v_l_1971_ = lean_ctor_get(v_t_1967_, 3);
v_r_1972_ = lean_ctor_get(v_t_1967_, 4);
v___x_1973_ = lean_nat_dec_lt(v_k_1968_, v_k_1969_);
if (v___x_1973_ == 0)
{
uint8_t v___x_1974_; 
v___x_1974_ = lean_nat_dec_eq(v_k_1968_, v_k_1969_);
if (v___x_1974_ == 0)
{
v_t_1967_ = v_r_1972_;
goto _start;
}
else
{
lean_object* v___x_1976_; 
lean_inc(v_v_1970_);
v___x_1976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1976_, 0, v_v_1970_);
return v___x_1976_;
}
}
else
{
v_t_1967_ = v_l_1971_;
goto _start;
}
}
else
{
lean_object* v___x_1978_; 
v___x_1978_ = lean_box(0);
return v___x_1978_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___redArg___boxed(lean_object* v_t_1979_, lean_object* v_k_1980_){
_start:
{
lean_object* v_res_1981_; 
v_res_1981_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___redArg(v_t_1979_, v_k_1980_);
lean_dec(v_k_1980_);
lean_dec(v_t_1979_);
return v_res_1981_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3___redArg(lean_object* v_k_1982_, lean_object* v_t_1983_){
_start:
{
if (lean_obj_tag(v_t_1983_) == 0)
{
lean_object* v_k_1984_; lean_object* v_v_1985_; lean_object* v_l_1986_; lean_object* v_r_1987_; lean_object* v___x_1989_; uint8_t v_isShared_1990_; uint8_t v_isSharedCheck_2642_; 
v_k_1984_ = lean_ctor_get(v_t_1983_, 1);
v_v_1985_ = lean_ctor_get(v_t_1983_, 2);
v_l_1986_ = lean_ctor_get(v_t_1983_, 3);
v_r_1987_ = lean_ctor_get(v_t_1983_, 4);
v_isSharedCheck_2642_ = !lean_is_exclusive(v_t_1983_);
if (v_isSharedCheck_2642_ == 0)
{
lean_object* v_unused_2643_; 
v_unused_2643_ = lean_ctor_get(v_t_1983_, 0);
lean_dec(v_unused_2643_);
v___x_1989_ = v_t_1983_;
v_isShared_1990_ = v_isSharedCheck_2642_;
goto v_resetjp_1988_;
}
else
{
lean_inc(v_r_1987_);
lean_inc(v_l_1986_);
lean_inc(v_v_1985_);
lean_inc(v_k_1984_);
lean_dec(v_t_1983_);
v___x_1989_ = lean_box(0);
v_isShared_1990_ = v_isSharedCheck_2642_;
goto v_resetjp_1988_;
}
v_resetjp_1988_:
{
uint8_t v___x_1991_; 
v___x_1991_ = lean_nat_dec_lt(v_k_1982_, v_k_1984_);
if (v___x_1991_ == 0)
{
uint8_t v___x_1992_; 
v___x_1992_ = lean_nat_dec_eq(v_k_1982_, v_k_1984_);
if (v___x_1992_ == 0)
{
lean_object* v_impl_1993_; lean_object* v___x_1994_; 
v_impl_1993_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3___redArg(v_k_1982_, v_r_1987_);
v___x_1994_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_1993_) == 0)
{
if (lean_obj_tag(v_l_1986_) == 0)
{
lean_object* v_size_1995_; lean_object* v_size_1996_; lean_object* v_k_1997_; lean_object* v_v_1998_; lean_object* v_l_1999_; lean_object* v_r_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; uint8_t v___x_2003_; 
v_size_1995_ = lean_ctor_get(v_impl_1993_, 0);
v_size_1996_ = lean_ctor_get(v_l_1986_, 0);
v_k_1997_ = lean_ctor_get(v_l_1986_, 1);
v_v_1998_ = lean_ctor_get(v_l_1986_, 2);
v_l_1999_ = lean_ctor_get(v_l_1986_, 3);
v_r_2000_ = lean_ctor_get(v_l_1986_, 4);
lean_inc(v_r_2000_);
v___x_2001_ = lean_unsigned_to_nat(3u);
v___x_2002_ = lean_nat_mul(v___x_2001_, v_size_1995_);
v___x_2003_ = lean_nat_dec_lt(v___x_2002_, v_size_1996_);
lean_dec(v___x_2002_);
if (v___x_2003_ == 0)
{
lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2007_; 
lean_dec(v_r_2000_);
v___x_2004_ = lean_nat_add(v___x_1994_, v_size_1996_);
v___x_2005_ = lean_nat_add(v___x_2004_, v_size_1995_);
lean_dec(v___x_2004_);
if (v_isShared_1990_ == 0)
{
lean_ctor_set(v___x_1989_, 4, v_impl_1993_);
lean_ctor_set(v___x_1989_, 0, v___x_2005_);
v___x_2007_ = v___x_1989_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2008_; 
v_reuseFailAlloc_2008_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2008_, 0, v___x_2005_);
lean_ctor_set(v_reuseFailAlloc_2008_, 1, v_k_1984_);
lean_ctor_set(v_reuseFailAlloc_2008_, 2, v_v_1985_);
lean_ctor_set(v_reuseFailAlloc_2008_, 3, v_l_1986_);
lean_ctor_set(v_reuseFailAlloc_2008_, 4, v_impl_1993_);
v___x_2007_ = v_reuseFailAlloc_2008_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
return v___x_2007_;
}
}
else
{
lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2074_; 
lean_inc(v_l_1999_);
lean_inc(v_v_1998_);
lean_inc(v_k_1997_);
lean_inc(v_size_1996_);
v_isSharedCheck_2074_ = !lean_is_exclusive(v_l_1986_);
if (v_isSharedCheck_2074_ == 0)
{
lean_object* v_unused_2075_; lean_object* v_unused_2076_; lean_object* v_unused_2077_; lean_object* v_unused_2078_; lean_object* v_unused_2079_; 
v_unused_2075_ = lean_ctor_get(v_l_1986_, 4);
lean_dec(v_unused_2075_);
v_unused_2076_ = lean_ctor_get(v_l_1986_, 3);
lean_dec(v_unused_2076_);
v_unused_2077_ = lean_ctor_get(v_l_1986_, 2);
lean_dec(v_unused_2077_);
v_unused_2078_ = lean_ctor_get(v_l_1986_, 1);
lean_dec(v_unused_2078_);
v_unused_2079_ = lean_ctor_get(v_l_1986_, 0);
lean_dec(v_unused_2079_);
v___x_2010_ = v_l_1986_;
v_isShared_2011_ = v_isSharedCheck_2074_;
goto v_resetjp_2009_;
}
else
{
lean_dec(v_l_1986_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2074_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v_size_2012_; lean_object* v_size_2013_; lean_object* v_k_2014_; lean_object* v_v_2015_; lean_object* v_l_2016_; lean_object* v_r_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; uint8_t v___x_2020_; 
v_size_2012_ = lean_ctor_get(v_l_1999_, 0);
v_size_2013_ = lean_ctor_get(v_r_2000_, 0);
v_k_2014_ = lean_ctor_get(v_r_2000_, 1);
v_v_2015_ = lean_ctor_get(v_r_2000_, 2);
v_l_2016_ = lean_ctor_get(v_r_2000_, 3);
v_r_2017_ = lean_ctor_get(v_r_2000_, 4);
v___x_2018_ = lean_unsigned_to_nat(2u);
v___x_2019_ = lean_nat_mul(v___x_2018_, v_size_2012_);
v___x_2020_ = lean_nat_dec_lt(v_size_2013_, v___x_2019_);
lean_dec(v___x_2019_);
if (v___x_2020_ == 0)
{
lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2049_; 
lean_inc(v_r_2017_);
lean_inc(v_l_2016_);
lean_inc(v_v_2015_);
lean_inc(v_k_2014_);
v_isSharedCheck_2049_ = !lean_is_exclusive(v_r_2000_);
if (v_isSharedCheck_2049_ == 0)
{
lean_object* v_unused_2050_; lean_object* v_unused_2051_; lean_object* v_unused_2052_; lean_object* v_unused_2053_; lean_object* v_unused_2054_; 
v_unused_2050_ = lean_ctor_get(v_r_2000_, 4);
lean_dec(v_unused_2050_);
v_unused_2051_ = lean_ctor_get(v_r_2000_, 3);
lean_dec(v_unused_2051_);
v_unused_2052_ = lean_ctor_get(v_r_2000_, 2);
lean_dec(v_unused_2052_);
v_unused_2053_ = lean_ctor_get(v_r_2000_, 1);
lean_dec(v_unused_2053_);
v_unused_2054_ = lean_ctor_get(v_r_2000_, 0);
lean_dec(v_unused_2054_);
v___x_2022_ = v_r_2000_;
v_isShared_2023_ = v_isSharedCheck_2049_;
goto v_resetjp_2021_;
}
else
{
lean_dec(v_r_2000_);
v___x_2022_ = lean_box(0);
v_isShared_2023_ = v_isSharedCheck_2049_;
goto v_resetjp_2021_;
}
v_resetjp_2021_:
{
lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___y_2027_; lean_object* v___y_2028_; lean_object* v___y_2029_; lean_object* v___x_2037_; lean_object* v___y_2039_; 
v___x_2024_ = lean_nat_add(v___x_1994_, v_size_1996_);
lean_dec(v_size_1996_);
v___x_2025_ = lean_nat_add(v___x_2024_, v_size_1995_);
lean_dec(v___x_2024_);
v___x_2037_ = lean_nat_add(v___x_1994_, v_size_2012_);
if (lean_obj_tag(v_l_2016_) == 0)
{
lean_object* v_size_2047_; 
v_size_2047_ = lean_ctor_get(v_l_2016_, 0);
lean_inc(v_size_2047_);
v___y_2039_ = v_size_2047_;
goto v___jp_2038_;
}
else
{
lean_object* v___x_2048_; 
v___x_2048_ = lean_unsigned_to_nat(0u);
v___y_2039_ = v___x_2048_;
goto v___jp_2038_;
}
v___jp_2026_:
{
lean_object* v___x_2030_; lean_object* v___x_2032_; 
v___x_2030_ = lean_nat_add(v___y_2027_, v___y_2029_);
lean_dec(v___y_2029_);
lean_dec(v___y_2027_);
if (v_isShared_2023_ == 0)
{
lean_ctor_set(v___x_2022_, 4, v_impl_1993_);
lean_ctor_set(v___x_2022_, 3, v_r_2017_);
lean_ctor_set(v___x_2022_, 2, v_v_1985_);
lean_ctor_set(v___x_2022_, 1, v_k_1984_);
lean_ctor_set(v___x_2022_, 0, v___x_2030_);
v___x_2032_ = v___x_2022_;
goto v_reusejp_2031_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v___x_2030_);
lean_ctor_set(v_reuseFailAlloc_2036_, 1, v_k_1984_);
lean_ctor_set(v_reuseFailAlloc_2036_, 2, v_v_1985_);
lean_ctor_set(v_reuseFailAlloc_2036_, 3, v_r_2017_);
lean_ctor_set(v_reuseFailAlloc_2036_, 4, v_impl_1993_);
v___x_2032_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2031_;
}
v_reusejp_2031_:
{
lean_object* v___x_2034_; 
if (v_isShared_2011_ == 0)
{
lean_ctor_set(v___x_2010_, 4, v___x_2032_);
lean_ctor_set(v___x_2010_, 3, v___y_2028_);
lean_ctor_set(v___x_2010_, 2, v_v_2015_);
lean_ctor_set(v___x_2010_, 1, v_k_2014_);
lean_ctor_set(v___x_2010_, 0, v___x_2025_);
v___x_2034_ = v___x_2010_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2035_; 
v_reuseFailAlloc_2035_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2035_, 0, v___x_2025_);
lean_ctor_set(v_reuseFailAlloc_2035_, 1, v_k_2014_);
lean_ctor_set(v_reuseFailAlloc_2035_, 2, v_v_2015_);
lean_ctor_set(v_reuseFailAlloc_2035_, 3, v___y_2028_);
lean_ctor_set(v_reuseFailAlloc_2035_, 4, v___x_2032_);
v___x_2034_ = v_reuseFailAlloc_2035_;
goto v_reusejp_2033_;
}
v_reusejp_2033_:
{
return v___x_2034_;
}
}
}
v___jp_2038_:
{
lean_object* v___x_2040_; lean_object* v___x_2042_; 
v___x_2040_ = lean_nat_add(v___x_2037_, v___y_2039_);
lean_dec(v___y_2039_);
lean_dec(v___x_2037_);
if (v_isShared_1990_ == 0)
{
lean_ctor_set(v___x_1989_, 4, v_l_2016_);
lean_ctor_set(v___x_1989_, 3, v_l_1999_);
lean_ctor_set(v___x_1989_, 2, v_v_1998_);
lean_ctor_set(v___x_1989_, 1, v_k_1997_);
lean_ctor_set(v___x_1989_, 0, v___x_2040_);
v___x_2042_ = v___x_1989_;
goto v_reusejp_2041_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v___x_2040_);
lean_ctor_set(v_reuseFailAlloc_2046_, 1, v_k_1997_);
lean_ctor_set(v_reuseFailAlloc_2046_, 2, v_v_1998_);
lean_ctor_set(v_reuseFailAlloc_2046_, 3, v_l_1999_);
lean_ctor_set(v_reuseFailAlloc_2046_, 4, v_l_2016_);
v___x_2042_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2041_;
}
v_reusejp_2041_:
{
lean_object* v___x_2043_; 
v___x_2043_ = lean_nat_add(v___x_1994_, v_size_1995_);
if (lean_obj_tag(v_r_2017_) == 0)
{
lean_object* v_size_2044_; 
v_size_2044_ = lean_ctor_get(v_r_2017_, 0);
lean_inc(v_size_2044_);
v___y_2027_ = v___x_2043_;
v___y_2028_ = v___x_2042_;
v___y_2029_ = v_size_2044_;
goto v___jp_2026_;
}
else
{
lean_object* v___x_2045_; 
v___x_2045_ = lean_unsigned_to_nat(0u);
v___y_2027_ = v___x_2043_;
v___y_2028_ = v___x_2042_;
v___y_2029_ = v___x_2045_;
goto v___jp_2026_;
}
}
}
}
}
else
{
lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2060_; 
lean_del_object(v___x_1989_);
v___x_2055_ = lean_nat_add(v___x_1994_, v_size_1996_);
lean_dec(v_size_1996_);
v___x_2056_ = lean_nat_add(v___x_2055_, v_size_1995_);
lean_dec(v___x_2055_);
v___x_2057_ = lean_nat_add(v___x_1994_, v_size_1995_);
v___x_2058_ = lean_nat_add(v___x_2057_, v_size_2013_);
lean_dec(v___x_2057_);
lean_inc_ref(v_impl_1993_);
if (v_isShared_2011_ == 0)
{
lean_ctor_set(v___x_2010_, 4, v_impl_1993_);
lean_ctor_set(v___x_2010_, 3, v_r_2000_);
lean_ctor_set(v___x_2010_, 2, v_v_1985_);
lean_ctor_set(v___x_2010_, 1, v_k_1984_);
lean_ctor_set(v___x_2010_, 0, v___x_2058_);
v___x_2060_ = v___x_2010_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2073_; 
v_reuseFailAlloc_2073_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2073_, 0, v___x_2058_);
lean_ctor_set(v_reuseFailAlloc_2073_, 1, v_k_1984_);
lean_ctor_set(v_reuseFailAlloc_2073_, 2, v_v_1985_);
lean_ctor_set(v_reuseFailAlloc_2073_, 3, v_r_2000_);
lean_ctor_set(v_reuseFailAlloc_2073_, 4, v_impl_1993_);
v___x_2060_ = v_reuseFailAlloc_2073_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2067_; 
v_isSharedCheck_2067_ = !lean_is_exclusive(v_impl_1993_);
if (v_isSharedCheck_2067_ == 0)
{
lean_object* v_unused_2068_; lean_object* v_unused_2069_; lean_object* v_unused_2070_; lean_object* v_unused_2071_; lean_object* v_unused_2072_; 
v_unused_2068_ = lean_ctor_get(v_impl_1993_, 4);
lean_dec(v_unused_2068_);
v_unused_2069_ = lean_ctor_get(v_impl_1993_, 3);
lean_dec(v_unused_2069_);
v_unused_2070_ = lean_ctor_get(v_impl_1993_, 2);
lean_dec(v_unused_2070_);
v_unused_2071_ = lean_ctor_get(v_impl_1993_, 1);
lean_dec(v_unused_2071_);
v_unused_2072_ = lean_ctor_get(v_impl_1993_, 0);
lean_dec(v_unused_2072_);
v___x_2062_ = v_impl_1993_;
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
else
{
lean_dec(v_impl_1993_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v___x_2065_; 
if (v_isShared_2063_ == 0)
{
lean_ctor_set(v___x_2062_, 4, v___x_2060_);
lean_ctor_set(v___x_2062_, 3, v_l_1999_);
lean_ctor_set(v___x_2062_, 2, v_v_1998_);
lean_ctor_set(v___x_2062_, 1, v_k_1997_);
lean_ctor_set(v___x_2062_, 0, v___x_2056_);
v___x_2065_ = v___x_2062_;
goto v_reusejp_2064_;
}
else
{
lean_object* v_reuseFailAlloc_2066_; 
v_reuseFailAlloc_2066_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2066_, 0, v___x_2056_);
lean_ctor_set(v_reuseFailAlloc_2066_, 1, v_k_1997_);
lean_ctor_set(v_reuseFailAlloc_2066_, 2, v_v_1998_);
lean_ctor_set(v_reuseFailAlloc_2066_, 3, v_l_1999_);
lean_ctor_set(v_reuseFailAlloc_2066_, 4, v___x_2060_);
v___x_2065_ = v_reuseFailAlloc_2066_;
goto v_reusejp_2064_;
}
v_reusejp_2064_:
{
return v___x_2065_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_2080_; lean_object* v___x_2081_; lean_object* v___x_2083_; 
v_size_2080_ = lean_ctor_get(v_impl_1993_, 0);
v___x_2081_ = lean_nat_add(v___x_1994_, v_size_2080_);
if (v_isShared_1990_ == 0)
{
lean_ctor_set(v___x_1989_, 4, v_impl_1993_);
lean_ctor_set(v___x_1989_, 0, v___x_2081_);
v___x_2083_ = v___x_1989_;
goto v_reusejp_2082_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v___x_2081_);
lean_ctor_set(v_reuseFailAlloc_2084_, 1, v_k_1984_);
lean_ctor_set(v_reuseFailAlloc_2084_, 2, v_v_1985_);
lean_ctor_set(v_reuseFailAlloc_2084_, 3, v_l_1986_);
lean_ctor_set(v_reuseFailAlloc_2084_, 4, v_impl_1993_);
v___x_2083_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2082_;
}
v_reusejp_2082_:
{
return v___x_2083_;
}
}
}
else
{
if (lean_obj_tag(v_l_1986_) == 0)
{
lean_object* v_l_2085_; 
v_l_2085_ = lean_ctor_get(v_l_1986_, 3);
if (lean_obj_tag(v_l_2085_) == 0)
{
lean_object* v_r_2086_; 
lean_inc_ref(v_l_2085_);
v_r_2086_ = lean_ctor_get(v_l_1986_, 4);
lean_inc(v_r_2086_);
if (lean_obj_tag(v_r_2086_) == 0)
{
lean_object* v_size_2087_; lean_object* v_k_2088_; lean_object* v_v_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2102_; 
v_size_2087_ = lean_ctor_get(v_l_1986_, 0);
v_k_2088_ = lean_ctor_get(v_l_1986_, 1);
v_v_2089_ = lean_ctor_get(v_l_1986_, 2);
v_isSharedCheck_2102_ = !lean_is_exclusive(v_l_1986_);
if (v_isSharedCheck_2102_ == 0)
{
lean_object* v_unused_2103_; lean_object* v_unused_2104_; 
v_unused_2103_ = lean_ctor_get(v_l_1986_, 4);
lean_dec(v_unused_2103_);
v_unused_2104_ = lean_ctor_get(v_l_1986_, 3);
lean_dec(v_unused_2104_);
v___x_2091_ = v_l_1986_;
v_isShared_2092_ = v_isSharedCheck_2102_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_v_2089_);
lean_inc(v_k_2088_);
lean_inc(v_size_2087_);
lean_dec(v_l_1986_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2102_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
lean_object* v_size_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2097_; 
v_size_2093_ = lean_ctor_get(v_r_2086_, 0);
v___x_2094_ = lean_nat_add(v___x_1994_, v_size_2087_);
lean_dec(v_size_2087_);
v___x_2095_ = lean_nat_add(v___x_1994_, v_size_2093_);
if (v_isShared_2092_ == 0)
{
lean_ctor_set(v___x_2091_, 4, v_impl_1993_);
lean_ctor_set(v___x_2091_, 3, v_r_2086_);
lean_ctor_set(v___x_2091_, 2, v_v_1985_);
lean_ctor_set(v___x_2091_, 1, v_k_1984_);
lean_ctor_set(v___x_2091_, 0, v___x_2095_);
v___x_2097_ = v___x_2091_;
goto v_reusejp_2096_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v___x_2095_);
lean_ctor_set(v_reuseFailAlloc_2101_, 1, v_k_1984_);
lean_ctor_set(v_reuseFailAlloc_2101_, 2, v_v_1985_);
lean_ctor_set(v_reuseFailAlloc_2101_, 3, v_r_2086_);
lean_ctor_set(v_reuseFailAlloc_2101_, 4, v_impl_1993_);
v___x_2097_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2096_;
}
v_reusejp_2096_:
{
lean_object* v___x_2099_; 
if (v_isShared_1990_ == 0)
{
lean_ctor_set(v___x_1989_, 4, v___x_2097_);
lean_ctor_set(v___x_1989_, 3, v_l_2085_);
lean_ctor_set(v___x_1989_, 2, v_v_2089_);
lean_ctor_set(v___x_1989_, 1, v_k_2088_);
lean_ctor_set(v___x_1989_, 0, v___x_2094_);
v___x_2099_ = v___x_1989_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2100_; 
v_reuseFailAlloc_2100_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2100_, 0, v___x_2094_);
lean_ctor_set(v_reuseFailAlloc_2100_, 1, v_k_2088_);
lean_ctor_set(v_reuseFailAlloc_2100_, 2, v_v_2089_);
lean_ctor_set(v_reuseFailAlloc_2100_, 3, v_l_2085_);
lean_ctor_set(v_reuseFailAlloc_2100_, 4, v___x_2097_);
v___x_2099_ = v_reuseFailAlloc_2100_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
return v___x_2099_;
}
}
}
}
else
{
lean_object* v_k_2105_; lean_object* v_v_2106_; lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2117_; 
v_k_2105_ = lean_ctor_get(v_l_1986_, 1);
v_v_2106_ = lean_ctor_get(v_l_1986_, 2);
v_isSharedCheck_2117_ = !lean_is_exclusive(v_l_1986_);
if (v_isSharedCheck_2117_ == 0)
{
lean_object* v_unused_2118_; lean_object* v_unused_2119_; lean_object* v_unused_2120_; 
v_unused_2118_ = lean_ctor_get(v_l_1986_, 4);
lean_dec(v_unused_2118_);
v_unused_2119_ = lean_ctor_get(v_l_1986_, 3);
lean_dec(v_unused_2119_);
v_unused_2120_ = lean_ctor_get(v_l_1986_, 0);
lean_dec(v_unused_2120_);
v___x_2108_ = v_l_1986_;
v_isShared_2109_ = v_isSharedCheck_2117_;
goto v_resetjp_2107_;
}
else
{
lean_inc(v_v_2106_);
lean_inc(v_k_2105_);
lean_dec(v_l_1986_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2117_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
lean_object* v___x_2110_; lean_object* v___x_2112_; 
v___x_2110_ = lean_unsigned_to_nat(3u);
if (v_isShared_2109_ == 0)
{
lean_ctor_set(v___x_2108_, 3, v_r_2086_);
lean_ctor_set(v___x_2108_, 2, v_v_1985_);
lean_ctor_set(v___x_2108_, 1, v_k_1984_);
lean_ctor_set(v___x_2108_, 0, v___x_1994_);
v___x_2112_ = v___x_2108_;
goto v_reusejp_2111_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v___x_1994_);
lean_ctor_set(v_reuseFailAlloc_2116_, 1, v_k_1984_);
lean_ctor_set(v_reuseFailAlloc_2116_, 2, v_v_1985_);
lean_ctor_set(v_reuseFailAlloc_2116_, 3, v_r_2086_);
lean_ctor_set(v_reuseFailAlloc_2116_, 4, v_r_2086_);
v___x_2112_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2111_;
}
v_reusejp_2111_:
{
lean_object* v___x_2114_; 
if (v_isShared_1990_ == 0)
{
lean_ctor_set(v___x_1989_, 4, v___x_2112_);
lean_ctor_set(v___x_1989_, 3, v_l_2085_);
lean_ctor_set(v___x_1989_, 2, v_v_2106_);
lean_ctor_set(v___x_1989_, 1, v_k_2105_);
lean_ctor_set(v___x_1989_, 0, v___x_2110_);
v___x_2114_ = v___x_1989_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v___x_2110_);
lean_ctor_set(v_reuseFailAlloc_2115_, 1, v_k_2105_);
lean_ctor_set(v_reuseFailAlloc_2115_, 2, v_v_2106_);
lean_ctor_set(v_reuseFailAlloc_2115_, 3, v_l_2085_);
lean_ctor_set(v_reuseFailAlloc_2115_, 4, v___x_2112_);
v___x_2114_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
return v___x_2114_;
}
}
}
}
}
else
{
lean_object* v_r_2121_; 
v_r_2121_ = lean_ctor_get(v_l_1986_, 4);
lean_inc(v_r_2121_);
if (lean_obj_tag(v_r_2121_) == 0)
{
lean_object* v_k_2122_; lean_object* v_v_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2146_; 
lean_inc(v_l_2085_);
v_k_2122_ = lean_ctor_get(v_l_1986_, 1);
v_v_2123_ = lean_ctor_get(v_l_1986_, 2);
v_isSharedCheck_2146_ = !lean_is_exclusive(v_l_1986_);
if (v_isSharedCheck_2146_ == 0)
{
lean_object* v_unused_2147_; lean_object* v_unused_2148_; lean_object* v_unused_2149_; 
v_unused_2147_ = lean_ctor_get(v_l_1986_, 4);
lean_dec(v_unused_2147_);
v_unused_2148_ = lean_ctor_get(v_l_1986_, 3);
lean_dec(v_unused_2148_);
v_unused_2149_ = lean_ctor_get(v_l_1986_, 0);
lean_dec(v_unused_2149_);
v___x_2125_ = v_l_1986_;
v_isShared_2126_ = v_isSharedCheck_2146_;
goto v_resetjp_2124_;
}
else
{
lean_inc(v_v_2123_);
lean_inc(v_k_2122_);
lean_dec(v_l_1986_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2146_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
lean_object* v_k_2127_; lean_object* v_v_2128_; lean_object* v___x_2130_; uint8_t v_isShared_2131_; uint8_t v_isSharedCheck_2142_; 
v_k_2127_ = lean_ctor_get(v_r_2121_, 1);
v_v_2128_ = lean_ctor_get(v_r_2121_, 2);
v_isSharedCheck_2142_ = !lean_is_exclusive(v_r_2121_);
if (v_isSharedCheck_2142_ == 0)
{
lean_object* v_unused_2143_; lean_object* v_unused_2144_; lean_object* v_unused_2145_; 
v_unused_2143_ = lean_ctor_get(v_r_2121_, 4);
lean_dec(v_unused_2143_);
v_unused_2144_ = lean_ctor_get(v_r_2121_, 3);
lean_dec(v_unused_2144_);
v_unused_2145_ = lean_ctor_get(v_r_2121_, 0);
lean_dec(v_unused_2145_);
v___x_2130_ = v_r_2121_;
v_isShared_2131_ = v_isSharedCheck_2142_;
goto v_resetjp_2129_;
}
else
{
lean_inc(v_v_2128_);
lean_inc(v_k_2127_);
lean_dec(v_r_2121_);
v___x_2130_ = lean_box(0);
v_isShared_2131_ = v_isSharedCheck_2142_;
goto v_resetjp_2129_;
}
v_resetjp_2129_:
{
lean_object* v___x_2132_; lean_object* v___x_2134_; 
v___x_2132_ = lean_unsigned_to_nat(3u);
if (v_isShared_2131_ == 0)
{
lean_ctor_set(v___x_2130_, 4, v_l_2085_);
lean_ctor_set(v___x_2130_, 3, v_l_2085_);
lean_ctor_set(v___x_2130_, 2, v_v_2123_);
lean_ctor_set(v___x_2130_, 1, v_k_2122_);
lean_ctor_set(v___x_2130_, 0, v___x_1994_);
v___x_2134_ = v___x_2130_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2141_; 
v_reuseFailAlloc_2141_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2141_, 0, v___x_1994_);
lean_ctor_set(v_reuseFailAlloc_2141_, 1, v_k_2122_);
lean_ctor_set(v_reuseFailAlloc_2141_, 2, v_v_2123_);
lean_ctor_set(v_reuseFailAlloc_2141_, 3, v_l_2085_);
lean_ctor_set(v_reuseFailAlloc_2141_, 4, v_l_2085_);
v___x_2134_ = v_reuseFailAlloc_2141_;
goto v_reusejp_2133_;
}
v_reusejp_2133_:
{
lean_object* v___x_2136_; 
if (v_isShared_2126_ == 0)
{
lean_ctor_set(v___x_2125_, 4, v_l_2085_);
lean_ctor_set(v___x_2125_, 2, v_v_1985_);
lean_ctor_set(v___x_2125_, 1, v_k_1984_);
lean_ctor_set(v___x_2125_, 0, v___x_1994_);
v___x_2136_ = v___x_2125_;
goto v_reusejp_2135_;
}
else
{
lean_object* v_reuseFailAlloc_2140_; 
v_reuseFailAlloc_2140_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2140_, 0, v___x_1994_);
lean_ctor_set(v_reuseFailAlloc_2140_, 1, v_k_1984_);
lean_ctor_set(v_reuseFailAlloc_2140_, 2, v_v_1985_);
lean_ctor_set(v_reuseFailAlloc_2140_, 3, v_l_2085_);
lean_ctor_set(v_reuseFailAlloc_2140_, 4, v_l_2085_);
v___x_2136_ = v_reuseFailAlloc_2140_;
goto v_reusejp_2135_;
}
v_reusejp_2135_:
{
lean_object* v___x_2138_; 
if (v_isShared_1990_ == 0)
{
lean_ctor_set(v___x_1989_, 4, v___x_2136_);
lean_ctor_set(v___x_1989_, 3, v___x_2134_);
lean_ctor_set(v___x_1989_, 2, v_v_2128_);
lean_ctor_set(v___x_1989_, 1, v_k_2127_);
lean_ctor_set(v___x_1989_, 0, v___x_2132_);
v___x_2138_ = v___x_1989_;
goto v_reusejp_2137_;
}
else
{
lean_object* v_reuseFailAlloc_2139_; 
v_reuseFailAlloc_2139_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2139_, 0, v___x_2132_);
lean_ctor_set(v_reuseFailAlloc_2139_, 1, v_k_2127_);
lean_ctor_set(v_reuseFailAlloc_2139_, 2, v_v_2128_);
lean_ctor_set(v_reuseFailAlloc_2139_, 3, v___x_2134_);
lean_ctor_set(v_reuseFailAlloc_2139_, 4, v___x_2136_);
v___x_2138_ = v_reuseFailAlloc_2139_;
goto v_reusejp_2137_;
}
v_reusejp_2137_:
{
return v___x_2138_;
}
}
}
}
}
}
else
{
lean_object* v___x_2150_; lean_object* v___x_2152_; 
v___x_2150_ = lean_unsigned_to_nat(2u);
if (v_isShared_1990_ == 0)
{
lean_ctor_set(v___x_1989_, 4, v_r_2121_);
lean_ctor_set(v___x_1989_, 0, v___x_2150_);
v___x_2152_ = v___x_1989_;
goto v_reusejp_2151_;
}
else
{
lean_object* v_reuseFailAlloc_2153_; 
v_reuseFailAlloc_2153_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2153_, 0, v___x_2150_);
lean_ctor_set(v_reuseFailAlloc_2153_, 1, v_k_1984_);
lean_ctor_set(v_reuseFailAlloc_2153_, 2, v_v_1985_);
lean_ctor_set(v_reuseFailAlloc_2153_, 3, v_l_1986_);
lean_ctor_set(v_reuseFailAlloc_2153_, 4, v_r_2121_);
v___x_2152_ = v_reuseFailAlloc_2153_;
goto v_reusejp_2151_;
}
v_reusejp_2151_:
{
return v___x_2152_;
}
}
}
}
else
{
lean_object* v___x_2155_; 
if (v_isShared_1990_ == 0)
{
lean_ctor_set(v___x_1989_, 4, v_l_1986_);
lean_ctor_set(v___x_1989_, 0, v___x_1994_);
v___x_2155_ = v___x_1989_;
goto v_reusejp_2154_;
}
else
{
lean_object* v_reuseFailAlloc_2156_; 
v_reuseFailAlloc_2156_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2156_, 0, v___x_1994_);
lean_ctor_set(v_reuseFailAlloc_2156_, 1, v_k_1984_);
lean_ctor_set(v_reuseFailAlloc_2156_, 2, v_v_1985_);
lean_ctor_set(v_reuseFailAlloc_2156_, 3, v_l_1986_);
lean_ctor_set(v_reuseFailAlloc_2156_, 4, v_l_1986_);
v___x_2155_ = v_reuseFailAlloc_2156_;
goto v_reusejp_2154_;
}
v_reusejp_2154_:
{
return v___x_2155_;
}
}
}
}
else
{
lean_del_object(v___x_1989_);
lean_dec(v_v_1985_);
lean_dec(v_k_1984_);
if (lean_obj_tag(v_l_1986_) == 0)
{
if (lean_obj_tag(v_r_1987_) == 0)
{
lean_object* v_size_2157_; lean_object* v_k_2158_; lean_object* v_v_2159_; lean_object* v_l_2160_; lean_object* v_r_2161_; lean_object* v_size_2162_; lean_object* v_k_2163_; lean_object* v_v_2164_; lean_object* v_l_2165_; lean_object* v_r_2166_; lean_object* v___x_2167_; uint8_t v___x_2168_; 
v_size_2157_ = lean_ctor_get(v_l_1986_, 0);
v_k_2158_ = lean_ctor_get(v_l_1986_, 1);
v_v_2159_ = lean_ctor_get(v_l_1986_, 2);
v_l_2160_ = lean_ctor_get(v_l_1986_, 3);
v_r_2161_ = lean_ctor_get(v_l_1986_, 4);
lean_inc(v_r_2161_);
v_size_2162_ = lean_ctor_get(v_r_1987_, 0);
v_k_2163_ = lean_ctor_get(v_r_1987_, 1);
v_v_2164_ = lean_ctor_get(v_r_1987_, 2);
v_l_2165_ = lean_ctor_get(v_r_1987_, 3);
lean_inc(v_l_2165_);
v_r_2166_ = lean_ctor_get(v_r_1987_, 4);
v___x_2167_ = lean_unsigned_to_nat(1u);
v___x_2168_ = lean_nat_dec_lt(v_size_2157_, v_size_2162_);
if (v___x_2168_ == 0)
{
lean_object* v___x_2170_; uint8_t v_isShared_2171_; uint8_t v_isSharedCheck_2304_; 
lean_inc(v_l_2160_);
lean_inc(v_v_2159_);
lean_inc(v_k_2158_);
v_isSharedCheck_2304_ = !lean_is_exclusive(v_l_1986_);
if (v_isSharedCheck_2304_ == 0)
{
lean_object* v_unused_2305_; lean_object* v_unused_2306_; lean_object* v_unused_2307_; lean_object* v_unused_2308_; lean_object* v_unused_2309_; 
v_unused_2305_ = lean_ctor_get(v_l_1986_, 4);
lean_dec(v_unused_2305_);
v_unused_2306_ = lean_ctor_get(v_l_1986_, 3);
lean_dec(v_unused_2306_);
v_unused_2307_ = lean_ctor_get(v_l_1986_, 2);
lean_dec(v_unused_2307_);
v_unused_2308_ = lean_ctor_get(v_l_1986_, 1);
lean_dec(v_unused_2308_);
v_unused_2309_ = lean_ctor_get(v_l_1986_, 0);
lean_dec(v_unused_2309_);
v___x_2170_ = v_l_1986_;
v_isShared_2171_ = v_isSharedCheck_2304_;
goto v_resetjp_2169_;
}
else
{
lean_dec(v_l_1986_);
v___x_2170_ = lean_box(0);
v_isShared_2171_ = v_isSharedCheck_2304_;
goto v_resetjp_2169_;
}
v_resetjp_2169_:
{
lean_object* v___x_2172_; lean_object* v_tree_2173_; 
v___x_2172_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_2158_, v_v_2159_, v_l_2160_, v_r_2161_);
v_tree_2173_ = lean_ctor_get(v___x_2172_, 2);
if (lean_obj_tag(v_tree_2173_) == 0)
{
lean_object* v_k_2174_; lean_object* v_v_2175_; lean_object* v_size_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; uint8_t v___x_2179_; 
lean_inc_ref(v_tree_2173_);
v_k_2174_ = lean_ctor_get(v___x_2172_, 0);
lean_inc(v_k_2174_);
v_v_2175_ = lean_ctor_get(v___x_2172_, 1);
lean_inc(v_v_2175_);
lean_dec_ref(v___x_2172_);
v_size_2176_ = lean_ctor_get(v_tree_2173_, 0);
v___x_2177_ = lean_unsigned_to_nat(3u);
v___x_2178_ = lean_nat_mul(v___x_2177_, v_size_2176_);
v___x_2179_ = lean_nat_dec_lt(v___x_2178_, v_size_2162_);
lean_dec(v___x_2178_);
if (v___x_2179_ == 0)
{
lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2183_; 
lean_dec(v_l_2165_);
v___x_2180_ = lean_nat_add(v___x_2167_, v_size_2176_);
v___x_2181_ = lean_nat_add(v___x_2180_, v_size_2162_);
lean_dec(v___x_2180_);
if (v_isShared_2171_ == 0)
{
lean_ctor_set(v___x_2170_, 4, v_r_1987_);
lean_ctor_set(v___x_2170_, 3, v_tree_2173_);
lean_ctor_set(v___x_2170_, 2, v_v_2175_);
lean_ctor_set(v___x_2170_, 1, v_k_2174_);
lean_ctor_set(v___x_2170_, 0, v___x_2181_);
v___x_2183_ = v___x_2170_;
goto v_reusejp_2182_;
}
else
{
lean_object* v_reuseFailAlloc_2184_; 
v_reuseFailAlloc_2184_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2184_, 0, v___x_2181_);
lean_ctor_set(v_reuseFailAlloc_2184_, 1, v_k_2174_);
lean_ctor_set(v_reuseFailAlloc_2184_, 2, v_v_2175_);
lean_ctor_set(v_reuseFailAlloc_2184_, 3, v_tree_2173_);
lean_ctor_set(v_reuseFailAlloc_2184_, 4, v_r_1987_);
v___x_2183_ = v_reuseFailAlloc_2184_;
goto v_reusejp_2182_;
}
v_reusejp_2182_:
{
return v___x_2183_;
}
}
else
{
lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2239_; 
lean_inc(v_r_2166_);
lean_inc(v_v_2164_);
lean_inc(v_k_2163_);
lean_inc(v_size_2162_);
v_isSharedCheck_2239_ = !lean_is_exclusive(v_r_1987_);
if (v_isSharedCheck_2239_ == 0)
{
lean_object* v_unused_2240_; lean_object* v_unused_2241_; lean_object* v_unused_2242_; lean_object* v_unused_2243_; lean_object* v_unused_2244_; 
v_unused_2240_ = lean_ctor_get(v_r_1987_, 4);
lean_dec(v_unused_2240_);
v_unused_2241_ = lean_ctor_get(v_r_1987_, 3);
lean_dec(v_unused_2241_);
v_unused_2242_ = lean_ctor_get(v_r_1987_, 2);
lean_dec(v_unused_2242_);
v_unused_2243_ = lean_ctor_get(v_r_1987_, 1);
lean_dec(v_unused_2243_);
v_unused_2244_ = lean_ctor_get(v_r_1987_, 0);
lean_dec(v_unused_2244_);
v___x_2186_ = v_r_1987_;
v_isShared_2187_ = v_isSharedCheck_2239_;
goto v_resetjp_2185_;
}
else
{
lean_dec(v_r_1987_);
v___x_2186_ = lean_box(0);
v_isShared_2187_ = v_isSharedCheck_2239_;
goto v_resetjp_2185_;
}
v_resetjp_2185_:
{
lean_object* v_size_2188_; lean_object* v_k_2189_; lean_object* v_v_2190_; lean_object* v_l_2191_; lean_object* v_r_2192_; lean_object* v_size_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; uint8_t v___x_2196_; 
v_size_2188_ = lean_ctor_get(v_l_2165_, 0);
v_k_2189_ = lean_ctor_get(v_l_2165_, 1);
v_v_2190_ = lean_ctor_get(v_l_2165_, 2);
v_l_2191_ = lean_ctor_get(v_l_2165_, 3);
v_r_2192_ = lean_ctor_get(v_l_2165_, 4);
v_size_2193_ = lean_ctor_get(v_r_2166_, 0);
v___x_2194_ = lean_unsigned_to_nat(2u);
v___x_2195_ = lean_nat_mul(v___x_2194_, v_size_2193_);
v___x_2196_ = lean_nat_dec_lt(v_size_2188_, v___x_2195_);
lean_dec(v___x_2195_);
if (v___x_2196_ == 0)
{
lean_object* v___x_2198_; uint8_t v_isShared_2199_; uint8_t v_isSharedCheck_2224_; 
lean_inc(v_r_2192_);
lean_inc(v_l_2191_);
lean_inc(v_v_2190_);
lean_inc(v_k_2189_);
v_isSharedCheck_2224_ = !lean_is_exclusive(v_l_2165_);
if (v_isSharedCheck_2224_ == 0)
{
lean_object* v_unused_2225_; lean_object* v_unused_2226_; lean_object* v_unused_2227_; lean_object* v_unused_2228_; lean_object* v_unused_2229_; 
v_unused_2225_ = lean_ctor_get(v_l_2165_, 4);
lean_dec(v_unused_2225_);
v_unused_2226_ = lean_ctor_get(v_l_2165_, 3);
lean_dec(v_unused_2226_);
v_unused_2227_ = lean_ctor_get(v_l_2165_, 2);
lean_dec(v_unused_2227_);
v_unused_2228_ = lean_ctor_get(v_l_2165_, 1);
lean_dec(v_unused_2228_);
v_unused_2229_ = lean_ctor_get(v_l_2165_, 0);
lean_dec(v_unused_2229_);
v___x_2198_ = v_l_2165_;
v_isShared_2199_ = v_isSharedCheck_2224_;
goto v_resetjp_2197_;
}
else
{
lean_dec(v_l_2165_);
v___x_2198_ = lean_box(0);
v_isShared_2199_ = v_isSharedCheck_2224_;
goto v_resetjp_2197_;
}
v_resetjp_2197_:
{
lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___y_2203_; lean_object* v___y_2204_; lean_object* v___y_2205_; lean_object* v___y_2214_; 
v___x_2200_ = lean_nat_add(v___x_2167_, v_size_2176_);
v___x_2201_ = lean_nat_add(v___x_2200_, v_size_2162_);
lean_dec(v_size_2162_);
if (lean_obj_tag(v_l_2191_) == 0)
{
lean_object* v_size_2222_; 
v_size_2222_ = lean_ctor_get(v_l_2191_, 0);
lean_inc(v_size_2222_);
v___y_2214_ = v_size_2222_;
goto v___jp_2213_;
}
else
{
lean_object* v___x_2223_; 
v___x_2223_ = lean_unsigned_to_nat(0u);
v___y_2214_ = v___x_2223_;
goto v___jp_2213_;
}
v___jp_2202_:
{
lean_object* v___x_2206_; lean_object* v___x_2208_; 
v___x_2206_ = lean_nat_add(v___y_2203_, v___y_2205_);
lean_dec(v___y_2205_);
lean_dec(v___y_2203_);
if (v_isShared_2199_ == 0)
{
lean_ctor_set(v___x_2198_, 4, v_r_2166_);
lean_ctor_set(v___x_2198_, 3, v_r_2192_);
lean_ctor_set(v___x_2198_, 2, v_v_2164_);
lean_ctor_set(v___x_2198_, 1, v_k_2163_);
lean_ctor_set(v___x_2198_, 0, v___x_2206_);
v___x_2208_ = v___x_2198_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v___x_2206_);
lean_ctor_set(v_reuseFailAlloc_2212_, 1, v_k_2163_);
lean_ctor_set(v_reuseFailAlloc_2212_, 2, v_v_2164_);
lean_ctor_set(v_reuseFailAlloc_2212_, 3, v_r_2192_);
lean_ctor_set(v_reuseFailAlloc_2212_, 4, v_r_2166_);
v___x_2208_ = v_reuseFailAlloc_2212_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
lean_object* v___x_2210_; 
if (v_isShared_2187_ == 0)
{
lean_ctor_set(v___x_2186_, 4, v___x_2208_);
lean_ctor_set(v___x_2186_, 3, v___y_2204_);
lean_ctor_set(v___x_2186_, 2, v_v_2190_);
lean_ctor_set(v___x_2186_, 1, v_k_2189_);
lean_ctor_set(v___x_2186_, 0, v___x_2201_);
v___x_2210_ = v___x_2186_;
goto v_reusejp_2209_;
}
else
{
lean_object* v_reuseFailAlloc_2211_; 
v_reuseFailAlloc_2211_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2211_, 0, v___x_2201_);
lean_ctor_set(v_reuseFailAlloc_2211_, 1, v_k_2189_);
lean_ctor_set(v_reuseFailAlloc_2211_, 2, v_v_2190_);
lean_ctor_set(v_reuseFailAlloc_2211_, 3, v___y_2204_);
lean_ctor_set(v_reuseFailAlloc_2211_, 4, v___x_2208_);
v___x_2210_ = v_reuseFailAlloc_2211_;
goto v_reusejp_2209_;
}
v_reusejp_2209_:
{
return v___x_2210_;
}
}
}
v___jp_2213_:
{
lean_object* v___x_2215_; lean_object* v___x_2217_; 
v___x_2215_ = lean_nat_add(v___x_2200_, v___y_2214_);
lean_dec(v___y_2214_);
lean_dec(v___x_2200_);
if (v_isShared_2171_ == 0)
{
lean_ctor_set(v___x_2170_, 4, v_l_2191_);
lean_ctor_set(v___x_2170_, 3, v_tree_2173_);
lean_ctor_set(v___x_2170_, 2, v_v_2175_);
lean_ctor_set(v___x_2170_, 1, v_k_2174_);
lean_ctor_set(v___x_2170_, 0, v___x_2215_);
v___x_2217_ = v___x_2170_;
goto v_reusejp_2216_;
}
else
{
lean_object* v_reuseFailAlloc_2221_; 
v_reuseFailAlloc_2221_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2221_, 0, v___x_2215_);
lean_ctor_set(v_reuseFailAlloc_2221_, 1, v_k_2174_);
lean_ctor_set(v_reuseFailAlloc_2221_, 2, v_v_2175_);
lean_ctor_set(v_reuseFailAlloc_2221_, 3, v_tree_2173_);
lean_ctor_set(v_reuseFailAlloc_2221_, 4, v_l_2191_);
v___x_2217_ = v_reuseFailAlloc_2221_;
goto v_reusejp_2216_;
}
v_reusejp_2216_:
{
lean_object* v___x_2218_; 
v___x_2218_ = lean_nat_add(v___x_2167_, v_size_2193_);
if (lean_obj_tag(v_r_2192_) == 0)
{
lean_object* v_size_2219_; 
v_size_2219_ = lean_ctor_get(v_r_2192_, 0);
lean_inc(v_size_2219_);
v___y_2203_ = v___x_2218_;
v___y_2204_ = v___x_2217_;
v___y_2205_ = v_size_2219_;
goto v___jp_2202_;
}
else
{
lean_object* v___x_2220_; 
v___x_2220_ = lean_unsigned_to_nat(0u);
v___y_2203_ = v___x_2218_;
v___y_2204_ = v___x_2217_;
v___y_2205_ = v___x_2220_;
goto v___jp_2202_;
}
}
}
}
}
else
{
lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2234_; 
v___x_2230_ = lean_nat_add(v___x_2167_, v_size_2176_);
v___x_2231_ = lean_nat_add(v___x_2230_, v_size_2162_);
lean_dec(v_size_2162_);
v___x_2232_ = lean_nat_add(v___x_2230_, v_size_2188_);
lean_dec(v___x_2230_);
if (v_isShared_2187_ == 0)
{
lean_ctor_set(v___x_2186_, 4, v_l_2165_);
lean_ctor_set(v___x_2186_, 3, v_tree_2173_);
lean_ctor_set(v___x_2186_, 2, v_v_2175_);
lean_ctor_set(v___x_2186_, 1, v_k_2174_);
lean_ctor_set(v___x_2186_, 0, v___x_2232_);
v___x_2234_ = v___x_2186_;
goto v_reusejp_2233_;
}
else
{
lean_object* v_reuseFailAlloc_2238_; 
v_reuseFailAlloc_2238_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2238_, 0, v___x_2232_);
lean_ctor_set(v_reuseFailAlloc_2238_, 1, v_k_2174_);
lean_ctor_set(v_reuseFailAlloc_2238_, 2, v_v_2175_);
lean_ctor_set(v_reuseFailAlloc_2238_, 3, v_tree_2173_);
lean_ctor_set(v_reuseFailAlloc_2238_, 4, v_l_2165_);
v___x_2234_ = v_reuseFailAlloc_2238_;
goto v_reusejp_2233_;
}
v_reusejp_2233_:
{
lean_object* v___x_2236_; 
if (v_isShared_2171_ == 0)
{
lean_ctor_set(v___x_2170_, 4, v_r_2166_);
lean_ctor_set(v___x_2170_, 3, v___x_2234_);
lean_ctor_set(v___x_2170_, 2, v_v_2164_);
lean_ctor_set(v___x_2170_, 1, v_k_2163_);
lean_ctor_set(v___x_2170_, 0, v___x_2231_);
v___x_2236_ = v___x_2170_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v___x_2231_);
lean_ctor_set(v_reuseFailAlloc_2237_, 1, v_k_2163_);
lean_ctor_set(v_reuseFailAlloc_2237_, 2, v_v_2164_);
lean_ctor_set(v_reuseFailAlloc_2237_, 3, v___x_2234_);
lean_ctor_set(v_reuseFailAlloc_2237_, 4, v_r_2166_);
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
}
}
else
{
lean_object* v___x_2246_; uint8_t v_isShared_2247_; uint8_t v_isSharedCheck_2298_; 
lean_inc(v_r_2166_);
lean_inc(v_v_2164_);
lean_inc(v_k_2163_);
lean_inc(v_size_2162_);
v_isSharedCheck_2298_ = !lean_is_exclusive(v_r_1987_);
if (v_isSharedCheck_2298_ == 0)
{
lean_object* v_unused_2299_; lean_object* v_unused_2300_; lean_object* v_unused_2301_; lean_object* v_unused_2302_; lean_object* v_unused_2303_; 
v_unused_2299_ = lean_ctor_get(v_r_1987_, 4);
lean_dec(v_unused_2299_);
v_unused_2300_ = lean_ctor_get(v_r_1987_, 3);
lean_dec(v_unused_2300_);
v_unused_2301_ = lean_ctor_get(v_r_1987_, 2);
lean_dec(v_unused_2301_);
v_unused_2302_ = lean_ctor_get(v_r_1987_, 1);
lean_dec(v_unused_2302_);
v_unused_2303_ = lean_ctor_get(v_r_1987_, 0);
lean_dec(v_unused_2303_);
v___x_2246_ = v_r_1987_;
v_isShared_2247_ = v_isSharedCheck_2298_;
goto v_resetjp_2245_;
}
else
{
lean_dec(v_r_1987_);
v___x_2246_ = lean_box(0);
v_isShared_2247_ = v_isSharedCheck_2298_;
goto v_resetjp_2245_;
}
v_resetjp_2245_:
{
if (lean_obj_tag(v_l_2165_) == 0)
{
if (lean_obj_tag(v_r_2166_) == 0)
{
lean_object* v_k_2248_; lean_object* v_v_2249_; lean_object* v_size_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2254_; 
lean_inc(v_tree_2173_);
v_k_2248_ = lean_ctor_get(v___x_2172_, 0);
lean_inc(v_k_2248_);
v_v_2249_ = lean_ctor_get(v___x_2172_, 1);
lean_inc(v_v_2249_);
lean_dec_ref(v___x_2172_);
v_size_2250_ = lean_ctor_get(v_l_2165_, 0);
v___x_2251_ = lean_nat_add(v___x_2167_, v_size_2162_);
lean_dec(v_size_2162_);
v___x_2252_ = lean_nat_add(v___x_2167_, v_size_2250_);
if (v_isShared_2247_ == 0)
{
lean_ctor_set(v___x_2246_, 4, v_l_2165_);
lean_ctor_set(v___x_2246_, 3, v_tree_2173_);
lean_ctor_set(v___x_2246_, 2, v_v_2249_);
lean_ctor_set(v___x_2246_, 1, v_k_2248_);
lean_ctor_set(v___x_2246_, 0, v___x_2252_);
v___x_2254_ = v___x_2246_;
goto v_reusejp_2253_;
}
else
{
lean_object* v_reuseFailAlloc_2258_; 
v_reuseFailAlloc_2258_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2258_, 0, v___x_2252_);
lean_ctor_set(v_reuseFailAlloc_2258_, 1, v_k_2248_);
lean_ctor_set(v_reuseFailAlloc_2258_, 2, v_v_2249_);
lean_ctor_set(v_reuseFailAlloc_2258_, 3, v_tree_2173_);
lean_ctor_set(v_reuseFailAlloc_2258_, 4, v_l_2165_);
v___x_2254_ = v_reuseFailAlloc_2258_;
goto v_reusejp_2253_;
}
v_reusejp_2253_:
{
lean_object* v___x_2256_; 
if (v_isShared_2171_ == 0)
{
lean_ctor_set(v___x_2170_, 4, v_r_2166_);
lean_ctor_set(v___x_2170_, 3, v___x_2254_);
lean_ctor_set(v___x_2170_, 2, v_v_2164_);
lean_ctor_set(v___x_2170_, 1, v_k_2163_);
lean_ctor_set(v___x_2170_, 0, v___x_2251_);
v___x_2256_ = v___x_2170_;
goto v_reusejp_2255_;
}
else
{
lean_object* v_reuseFailAlloc_2257_; 
v_reuseFailAlloc_2257_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2257_, 0, v___x_2251_);
lean_ctor_set(v_reuseFailAlloc_2257_, 1, v_k_2163_);
lean_ctor_set(v_reuseFailAlloc_2257_, 2, v_v_2164_);
lean_ctor_set(v_reuseFailAlloc_2257_, 3, v___x_2254_);
lean_ctor_set(v_reuseFailAlloc_2257_, 4, v_r_2166_);
v___x_2256_ = v_reuseFailAlloc_2257_;
goto v_reusejp_2255_;
}
v_reusejp_2255_:
{
return v___x_2256_;
}
}
}
else
{
lean_object* v_k_2259_; lean_object* v_v_2260_; lean_object* v_k_2261_; lean_object* v_v_2262_; lean_object* v___x_2264_; uint8_t v_isShared_2265_; uint8_t v_isSharedCheck_2276_; 
lean_dec(v_size_2162_);
v_k_2259_ = lean_ctor_get(v___x_2172_, 0);
lean_inc(v_k_2259_);
v_v_2260_ = lean_ctor_get(v___x_2172_, 1);
lean_inc(v_v_2260_);
lean_dec_ref(v___x_2172_);
v_k_2261_ = lean_ctor_get(v_l_2165_, 1);
v_v_2262_ = lean_ctor_get(v_l_2165_, 2);
v_isSharedCheck_2276_ = !lean_is_exclusive(v_l_2165_);
if (v_isSharedCheck_2276_ == 0)
{
lean_object* v_unused_2277_; lean_object* v_unused_2278_; lean_object* v_unused_2279_; 
v_unused_2277_ = lean_ctor_get(v_l_2165_, 4);
lean_dec(v_unused_2277_);
v_unused_2278_ = lean_ctor_get(v_l_2165_, 3);
lean_dec(v_unused_2278_);
v_unused_2279_ = lean_ctor_get(v_l_2165_, 0);
lean_dec(v_unused_2279_);
v___x_2264_ = v_l_2165_;
v_isShared_2265_ = v_isSharedCheck_2276_;
goto v_resetjp_2263_;
}
else
{
lean_inc(v_v_2262_);
lean_inc(v_k_2261_);
lean_dec(v_l_2165_);
v___x_2264_ = lean_box(0);
v_isShared_2265_ = v_isSharedCheck_2276_;
goto v_resetjp_2263_;
}
v_resetjp_2263_:
{
lean_object* v___x_2266_; lean_object* v___x_2268_; 
v___x_2266_ = lean_unsigned_to_nat(3u);
if (v_isShared_2265_ == 0)
{
lean_ctor_set(v___x_2264_, 4, v_r_2166_);
lean_ctor_set(v___x_2264_, 3, v_r_2166_);
lean_ctor_set(v___x_2264_, 2, v_v_2260_);
lean_ctor_set(v___x_2264_, 1, v_k_2259_);
lean_ctor_set(v___x_2264_, 0, v___x_2167_);
v___x_2268_ = v___x_2264_;
goto v_reusejp_2267_;
}
else
{
lean_object* v_reuseFailAlloc_2275_; 
v_reuseFailAlloc_2275_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2275_, 0, v___x_2167_);
lean_ctor_set(v_reuseFailAlloc_2275_, 1, v_k_2259_);
lean_ctor_set(v_reuseFailAlloc_2275_, 2, v_v_2260_);
lean_ctor_set(v_reuseFailAlloc_2275_, 3, v_r_2166_);
lean_ctor_set(v_reuseFailAlloc_2275_, 4, v_r_2166_);
v___x_2268_ = v_reuseFailAlloc_2275_;
goto v_reusejp_2267_;
}
v_reusejp_2267_:
{
lean_object* v___x_2270_; 
if (v_isShared_2247_ == 0)
{
lean_ctor_set(v___x_2246_, 3, v_r_2166_);
lean_ctor_set(v___x_2246_, 0, v___x_2167_);
v___x_2270_ = v___x_2246_;
goto v_reusejp_2269_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v___x_2167_);
lean_ctor_set(v_reuseFailAlloc_2274_, 1, v_k_2163_);
lean_ctor_set(v_reuseFailAlloc_2274_, 2, v_v_2164_);
lean_ctor_set(v_reuseFailAlloc_2274_, 3, v_r_2166_);
lean_ctor_set(v_reuseFailAlloc_2274_, 4, v_r_2166_);
v___x_2270_ = v_reuseFailAlloc_2274_;
goto v_reusejp_2269_;
}
v_reusejp_2269_:
{
lean_object* v___x_2272_; 
if (v_isShared_2171_ == 0)
{
lean_ctor_set(v___x_2170_, 4, v___x_2270_);
lean_ctor_set(v___x_2170_, 3, v___x_2268_);
lean_ctor_set(v___x_2170_, 2, v_v_2262_);
lean_ctor_set(v___x_2170_, 1, v_k_2261_);
lean_ctor_set(v___x_2170_, 0, v___x_2266_);
v___x_2272_ = v___x_2170_;
goto v_reusejp_2271_;
}
else
{
lean_object* v_reuseFailAlloc_2273_; 
v_reuseFailAlloc_2273_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2273_, 0, v___x_2266_);
lean_ctor_set(v_reuseFailAlloc_2273_, 1, v_k_2261_);
lean_ctor_set(v_reuseFailAlloc_2273_, 2, v_v_2262_);
lean_ctor_set(v_reuseFailAlloc_2273_, 3, v___x_2268_);
lean_ctor_set(v_reuseFailAlloc_2273_, 4, v___x_2270_);
v___x_2272_ = v_reuseFailAlloc_2273_;
goto v_reusejp_2271_;
}
v_reusejp_2271_:
{
return v___x_2272_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_2166_) == 0)
{
lean_object* v_k_2280_; lean_object* v_v_2281_; lean_object* v___x_2282_; lean_object* v___x_2284_; 
lean_dec(v_size_2162_);
v_k_2280_ = lean_ctor_get(v___x_2172_, 0);
lean_inc(v_k_2280_);
v_v_2281_ = lean_ctor_get(v___x_2172_, 1);
lean_inc(v_v_2281_);
lean_dec_ref(v___x_2172_);
v___x_2282_ = lean_unsigned_to_nat(3u);
if (v_isShared_2247_ == 0)
{
lean_ctor_set(v___x_2246_, 4, v_l_2165_);
lean_ctor_set(v___x_2246_, 2, v_v_2281_);
lean_ctor_set(v___x_2246_, 1, v_k_2280_);
lean_ctor_set(v___x_2246_, 0, v___x_2167_);
v___x_2284_ = v___x_2246_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v___x_2167_);
lean_ctor_set(v_reuseFailAlloc_2288_, 1, v_k_2280_);
lean_ctor_set(v_reuseFailAlloc_2288_, 2, v_v_2281_);
lean_ctor_set(v_reuseFailAlloc_2288_, 3, v_l_2165_);
lean_ctor_set(v_reuseFailAlloc_2288_, 4, v_l_2165_);
v___x_2284_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
lean_object* v___x_2286_; 
if (v_isShared_2171_ == 0)
{
lean_ctor_set(v___x_2170_, 4, v_r_2166_);
lean_ctor_set(v___x_2170_, 3, v___x_2284_);
lean_ctor_set(v___x_2170_, 2, v_v_2164_);
lean_ctor_set(v___x_2170_, 1, v_k_2163_);
lean_ctor_set(v___x_2170_, 0, v___x_2282_);
v___x_2286_ = v___x_2170_;
goto v_reusejp_2285_;
}
else
{
lean_object* v_reuseFailAlloc_2287_; 
v_reuseFailAlloc_2287_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2287_, 0, v___x_2282_);
lean_ctor_set(v_reuseFailAlloc_2287_, 1, v_k_2163_);
lean_ctor_set(v_reuseFailAlloc_2287_, 2, v_v_2164_);
lean_ctor_set(v_reuseFailAlloc_2287_, 3, v___x_2284_);
lean_ctor_set(v_reuseFailAlloc_2287_, 4, v_r_2166_);
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
lean_object* v_k_2289_; lean_object* v_v_2290_; lean_object* v___x_2292_; 
v_k_2289_ = lean_ctor_get(v___x_2172_, 0);
lean_inc(v_k_2289_);
v_v_2290_ = lean_ctor_get(v___x_2172_, 1);
lean_inc(v_v_2290_);
lean_dec_ref(v___x_2172_);
if (v_isShared_2247_ == 0)
{
lean_ctor_set(v___x_2246_, 3, v_r_2166_);
v___x_2292_ = v___x_2246_;
goto v_reusejp_2291_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v_size_2162_);
lean_ctor_set(v_reuseFailAlloc_2297_, 1, v_k_2163_);
lean_ctor_set(v_reuseFailAlloc_2297_, 2, v_v_2164_);
lean_ctor_set(v_reuseFailAlloc_2297_, 3, v_r_2166_);
lean_ctor_set(v_reuseFailAlloc_2297_, 4, v_r_2166_);
v___x_2292_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2291_;
}
v_reusejp_2291_:
{
lean_object* v___x_2293_; lean_object* v___x_2295_; 
v___x_2293_ = lean_unsigned_to_nat(2u);
if (v_isShared_2171_ == 0)
{
lean_ctor_set(v___x_2170_, 4, v___x_2292_);
lean_ctor_set(v___x_2170_, 3, v_r_2166_);
lean_ctor_set(v___x_2170_, 2, v_v_2290_);
lean_ctor_set(v___x_2170_, 1, v_k_2289_);
lean_ctor_set(v___x_2170_, 0, v___x_2293_);
v___x_2295_ = v___x_2170_;
goto v_reusejp_2294_;
}
else
{
lean_object* v_reuseFailAlloc_2296_; 
v_reuseFailAlloc_2296_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2296_, 0, v___x_2293_);
lean_ctor_set(v_reuseFailAlloc_2296_, 1, v_k_2289_);
lean_ctor_set(v_reuseFailAlloc_2296_, 2, v_v_2290_);
lean_ctor_set(v_reuseFailAlloc_2296_, 3, v_r_2166_);
lean_ctor_set(v_reuseFailAlloc_2296_, 4, v___x_2292_);
v___x_2295_ = v_reuseFailAlloc_2296_;
goto v_reusejp_2294_;
}
v_reusejp_2294_:
{
return v___x_2295_;
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
lean_object* v___x_2311_; uint8_t v_isShared_2312_; uint8_t v_isSharedCheck_2462_; 
lean_inc(v_r_2166_);
lean_inc(v_v_2164_);
lean_inc(v_k_2163_);
v_isSharedCheck_2462_ = !lean_is_exclusive(v_r_1987_);
if (v_isSharedCheck_2462_ == 0)
{
lean_object* v_unused_2463_; lean_object* v_unused_2464_; lean_object* v_unused_2465_; lean_object* v_unused_2466_; lean_object* v_unused_2467_; 
v_unused_2463_ = lean_ctor_get(v_r_1987_, 4);
lean_dec(v_unused_2463_);
v_unused_2464_ = lean_ctor_get(v_r_1987_, 3);
lean_dec(v_unused_2464_);
v_unused_2465_ = lean_ctor_get(v_r_1987_, 2);
lean_dec(v_unused_2465_);
v_unused_2466_ = lean_ctor_get(v_r_1987_, 1);
lean_dec(v_unused_2466_);
v_unused_2467_ = lean_ctor_get(v_r_1987_, 0);
lean_dec(v_unused_2467_);
v___x_2311_ = v_r_1987_;
v_isShared_2312_ = v_isSharedCheck_2462_;
goto v_resetjp_2310_;
}
else
{
lean_dec(v_r_1987_);
v___x_2311_ = lean_box(0);
v_isShared_2312_ = v_isSharedCheck_2462_;
goto v_resetjp_2310_;
}
v_resetjp_2310_:
{
lean_object* v___x_2313_; lean_object* v_tree_2314_; 
v___x_2313_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_2163_, v_v_2164_, v_l_2165_, v_r_2166_);
v_tree_2314_ = lean_ctor_get(v___x_2313_, 2);
lean_inc(v_tree_2314_);
if (lean_obj_tag(v_tree_2314_) == 0)
{
lean_object* v_k_2315_; lean_object* v_v_2316_; lean_object* v_size_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; uint8_t v___x_2320_; 
v_k_2315_ = lean_ctor_get(v___x_2313_, 0);
lean_inc(v_k_2315_);
v_v_2316_ = lean_ctor_get(v___x_2313_, 1);
lean_inc(v_v_2316_);
lean_dec_ref(v___x_2313_);
v_size_2317_ = lean_ctor_get(v_tree_2314_, 0);
v___x_2318_ = lean_unsigned_to_nat(3u);
v___x_2319_ = lean_nat_mul(v___x_2318_, v_size_2317_);
v___x_2320_ = lean_nat_dec_lt(v___x_2319_, v_size_2157_);
lean_dec(v___x_2319_);
if (v___x_2320_ == 0)
{
lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2324_; 
lean_dec(v_r_2161_);
v___x_2321_ = lean_nat_add(v___x_2167_, v_size_2157_);
v___x_2322_ = lean_nat_add(v___x_2321_, v_size_2317_);
lean_dec(v___x_2321_);
if (v_isShared_2312_ == 0)
{
lean_ctor_set(v___x_2311_, 4, v_tree_2314_);
lean_ctor_set(v___x_2311_, 3, v_l_1986_);
lean_ctor_set(v___x_2311_, 2, v_v_2316_);
lean_ctor_set(v___x_2311_, 1, v_k_2315_);
lean_ctor_set(v___x_2311_, 0, v___x_2322_);
v___x_2324_ = v___x_2311_;
goto v_reusejp_2323_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v___x_2322_);
lean_ctor_set(v_reuseFailAlloc_2325_, 1, v_k_2315_);
lean_ctor_set(v_reuseFailAlloc_2325_, 2, v_v_2316_);
lean_ctor_set(v_reuseFailAlloc_2325_, 3, v_l_1986_);
lean_ctor_set(v_reuseFailAlloc_2325_, 4, v_tree_2314_);
v___x_2324_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2323_;
}
v_reusejp_2323_:
{
return v___x_2324_;
}
}
else
{
lean_object* v___x_2327_; uint8_t v_isShared_2328_; uint8_t v_isSharedCheck_2391_; 
lean_inc(v_l_2160_);
lean_inc(v_v_2159_);
lean_inc(v_k_2158_);
lean_inc(v_size_2157_);
v_isSharedCheck_2391_ = !lean_is_exclusive(v_l_1986_);
if (v_isSharedCheck_2391_ == 0)
{
lean_object* v_unused_2392_; lean_object* v_unused_2393_; lean_object* v_unused_2394_; lean_object* v_unused_2395_; lean_object* v_unused_2396_; 
v_unused_2392_ = lean_ctor_get(v_l_1986_, 4);
lean_dec(v_unused_2392_);
v_unused_2393_ = lean_ctor_get(v_l_1986_, 3);
lean_dec(v_unused_2393_);
v_unused_2394_ = lean_ctor_get(v_l_1986_, 2);
lean_dec(v_unused_2394_);
v_unused_2395_ = lean_ctor_get(v_l_1986_, 1);
lean_dec(v_unused_2395_);
v_unused_2396_ = lean_ctor_get(v_l_1986_, 0);
lean_dec(v_unused_2396_);
v___x_2327_ = v_l_1986_;
v_isShared_2328_ = v_isSharedCheck_2391_;
goto v_resetjp_2326_;
}
else
{
lean_dec(v_l_1986_);
v___x_2327_ = lean_box(0);
v_isShared_2328_ = v_isSharedCheck_2391_;
goto v_resetjp_2326_;
}
v_resetjp_2326_:
{
lean_object* v_size_2329_; lean_object* v_size_2330_; lean_object* v_k_2331_; lean_object* v_v_2332_; lean_object* v_l_2333_; lean_object* v_r_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; uint8_t v___x_2337_; 
v_size_2329_ = lean_ctor_get(v_l_2160_, 0);
v_size_2330_ = lean_ctor_get(v_r_2161_, 0);
v_k_2331_ = lean_ctor_get(v_r_2161_, 1);
v_v_2332_ = lean_ctor_get(v_r_2161_, 2);
v_l_2333_ = lean_ctor_get(v_r_2161_, 3);
v_r_2334_ = lean_ctor_get(v_r_2161_, 4);
v___x_2335_ = lean_unsigned_to_nat(2u);
v___x_2336_ = lean_nat_mul(v___x_2335_, v_size_2329_);
v___x_2337_ = lean_nat_dec_lt(v_size_2330_, v___x_2336_);
lean_dec(v___x_2336_);
if (v___x_2337_ == 0)
{
lean_object* v___x_2339_; uint8_t v_isShared_2340_; uint8_t v_isSharedCheck_2375_; 
lean_inc(v_r_2334_);
lean_inc(v_l_2333_);
lean_inc(v_v_2332_);
lean_inc(v_k_2331_);
lean_del_object(v___x_2327_);
v_isSharedCheck_2375_ = !lean_is_exclusive(v_r_2161_);
if (v_isSharedCheck_2375_ == 0)
{
lean_object* v_unused_2376_; lean_object* v_unused_2377_; lean_object* v_unused_2378_; lean_object* v_unused_2379_; lean_object* v_unused_2380_; 
v_unused_2376_ = lean_ctor_get(v_r_2161_, 4);
lean_dec(v_unused_2376_);
v_unused_2377_ = lean_ctor_get(v_r_2161_, 3);
lean_dec(v_unused_2377_);
v_unused_2378_ = lean_ctor_get(v_r_2161_, 2);
lean_dec(v_unused_2378_);
v_unused_2379_ = lean_ctor_get(v_r_2161_, 1);
lean_dec(v_unused_2379_);
v_unused_2380_ = lean_ctor_get(v_r_2161_, 0);
lean_dec(v_unused_2380_);
v___x_2339_ = v_r_2161_;
v_isShared_2340_ = v_isSharedCheck_2375_;
goto v_resetjp_2338_;
}
else
{
lean_dec(v_r_2161_);
v___x_2339_ = lean_box(0);
v_isShared_2340_ = v_isSharedCheck_2375_;
goto v_resetjp_2338_;
}
v_resetjp_2338_:
{
lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___y_2344_; lean_object* v___y_2345_; lean_object* v___y_2346_; lean_object* v___x_2363_; lean_object* v___y_2365_; 
v___x_2341_ = lean_nat_add(v___x_2167_, v_size_2157_);
lean_dec(v_size_2157_);
v___x_2342_ = lean_nat_add(v___x_2341_, v_size_2317_);
lean_dec(v___x_2341_);
v___x_2363_ = lean_nat_add(v___x_2167_, v_size_2329_);
if (lean_obj_tag(v_l_2333_) == 0)
{
lean_object* v_size_2373_; 
v_size_2373_ = lean_ctor_get(v_l_2333_, 0);
lean_inc(v_size_2373_);
v___y_2365_ = v_size_2373_;
goto v___jp_2364_;
}
else
{
lean_object* v___x_2374_; 
v___x_2374_ = lean_unsigned_to_nat(0u);
v___y_2365_ = v___x_2374_;
goto v___jp_2364_;
}
v___jp_2343_:
{
lean_object* v___x_2347_; lean_object* v___x_2349_; 
v___x_2347_ = lean_nat_add(v___y_2345_, v___y_2346_);
lean_dec(v___y_2346_);
lean_dec(v___y_2345_);
lean_inc_ref(v_tree_2314_);
if (v_isShared_2340_ == 0)
{
lean_ctor_set(v___x_2339_, 4, v_tree_2314_);
lean_ctor_set(v___x_2339_, 3, v_r_2334_);
lean_ctor_set(v___x_2339_, 2, v_v_2316_);
lean_ctor_set(v___x_2339_, 1, v_k_2315_);
lean_ctor_set(v___x_2339_, 0, v___x_2347_);
v___x_2349_ = v___x_2339_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2362_; 
v_reuseFailAlloc_2362_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2362_, 0, v___x_2347_);
lean_ctor_set(v_reuseFailAlloc_2362_, 1, v_k_2315_);
lean_ctor_set(v_reuseFailAlloc_2362_, 2, v_v_2316_);
lean_ctor_set(v_reuseFailAlloc_2362_, 3, v_r_2334_);
lean_ctor_set(v_reuseFailAlloc_2362_, 4, v_tree_2314_);
v___x_2349_ = v_reuseFailAlloc_2362_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
lean_object* v___x_2351_; uint8_t v_isShared_2352_; uint8_t v_isSharedCheck_2356_; 
v_isSharedCheck_2356_ = !lean_is_exclusive(v_tree_2314_);
if (v_isSharedCheck_2356_ == 0)
{
lean_object* v_unused_2357_; lean_object* v_unused_2358_; lean_object* v_unused_2359_; lean_object* v_unused_2360_; lean_object* v_unused_2361_; 
v_unused_2357_ = lean_ctor_get(v_tree_2314_, 4);
lean_dec(v_unused_2357_);
v_unused_2358_ = lean_ctor_get(v_tree_2314_, 3);
lean_dec(v_unused_2358_);
v_unused_2359_ = lean_ctor_get(v_tree_2314_, 2);
lean_dec(v_unused_2359_);
v_unused_2360_ = lean_ctor_get(v_tree_2314_, 1);
lean_dec(v_unused_2360_);
v_unused_2361_ = lean_ctor_get(v_tree_2314_, 0);
lean_dec(v_unused_2361_);
v___x_2351_ = v_tree_2314_;
v_isShared_2352_ = v_isSharedCheck_2356_;
goto v_resetjp_2350_;
}
else
{
lean_dec(v_tree_2314_);
v___x_2351_ = lean_box(0);
v_isShared_2352_ = v_isSharedCheck_2356_;
goto v_resetjp_2350_;
}
v_resetjp_2350_:
{
lean_object* v___x_2354_; 
if (v_isShared_2352_ == 0)
{
lean_ctor_set(v___x_2351_, 4, v___x_2349_);
lean_ctor_set(v___x_2351_, 3, v___y_2344_);
lean_ctor_set(v___x_2351_, 2, v_v_2332_);
lean_ctor_set(v___x_2351_, 1, v_k_2331_);
lean_ctor_set(v___x_2351_, 0, v___x_2342_);
v___x_2354_ = v___x_2351_;
goto v_reusejp_2353_;
}
else
{
lean_object* v_reuseFailAlloc_2355_; 
v_reuseFailAlloc_2355_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2355_, 0, v___x_2342_);
lean_ctor_set(v_reuseFailAlloc_2355_, 1, v_k_2331_);
lean_ctor_set(v_reuseFailAlloc_2355_, 2, v_v_2332_);
lean_ctor_set(v_reuseFailAlloc_2355_, 3, v___y_2344_);
lean_ctor_set(v_reuseFailAlloc_2355_, 4, v___x_2349_);
v___x_2354_ = v_reuseFailAlloc_2355_;
goto v_reusejp_2353_;
}
v_reusejp_2353_:
{
return v___x_2354_;
}
}
}
}
v___jp_2364_:
{
lean_object* v___x_2366_; lean_object* v___x_2368_; 
v___x_2366_ = lean_nat_add(v___x_2363_, v___y_2365_);
lean_dec(v___y_2365_);
lean_dec(v___x_2363_);
if (v_isShared_2312_ == 0)
{
lean_ctor_set(v___x_2311_, 4, v_l_2333_);
lean_ctor_set(v___x_2311_, 3, v_l_2160_);
lean_ctor_set(v___x_2311_, 2, v_v_2159_);
lean_ctor_set(v___x_2311_, 1, v_k_2158_);
lean_ctor_set(v___x_2311_, 0, v___x_2366_);
v___x_2368_ = v___x_2311_;
goto v_reusejp_2367_;
}
else
{
lean_object* v_reuseFailAlloc_2372_; 
v_reuseFailAlloc_2372_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2372_, 0, v___x_2366_);
lean_ctor_set(v_reuseFailAlloc_2372_, 1, v_k_2158_);
lean_ctor_set(v_reuseFailAlloc_2372_, 2, v_v_2159_);
lean_ctor_set(v_reuseFailAlloc_2372_, 3, v_l_2160_);
lean_ctor_set(v_reuseFailAlloc_2372_, 4, v_l_2333_);
v___x_2368_ = v_reuseFailAlloc_2372_;
goto v_reusejp_2367_;
}
v_reusejp_2367_:
{
lean_object* v___x_2369_; 
v___x_2369_ = lean_nat_add(v___x_2167_, v_size_2317_);
if (lean_obj_tag(v_r_2334_) == 0)
{
lean_object* v_size_2370_; 
v_size_2370_ = lean_ctor_get(v_r_2334_, 0);
lean_inc(v_size_2370_);
v___y_2344_ = v___x_2368_;
v___y_2345_ = v___x_2369_;
v___y_2346_ = v_size_2370_;
goto v___jp_2343_;
}
else
{
lean_object* v___x_2371_; 
v___x_2371_ = lean_unsigned_to_nat(0u);
v___y_2344_ = v___x_2368_;
v___y_2345_ = v___x_2369_;
v___y_2346_ = v___x_2371_;
goto v___jp_2343_;
}
}
}
}
}
else
{
lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2386_; 
v___x_2381_ = lean_nat_add(v___x_2167_, v_size_2157_);
lean_dec(v_size_2157_);
v___x_2382_ = lean_nat_add(v___x_2381_, v_size_2317_);
lean_dec(v___x_2381_);
v___x_2383_ = lean_nat_add(v___x_2167_, v_size_2317_);
v___x_2384_ = lean_nat_add(v___x_2383_, v_size_2330_);
lean_dec(v___x_2383_);
if (v_isShared_2312_ == 0)
{
lean_ctor_set(v___x_2311_, 4, v_tree_2314_);
lean_ctor_set(v___x_2311_, 3, v_r_2161_);
lean_ctor_set(v___x_2311_, 2, v_v_2316_);
lean_ctor_set(v___x_2311_, 1, v_k_2315_);
lean_ctor_set(v___x_2311_, 0, v___x_2384_);
v___x_2386_ = v___x_2311_;
goto v_reusejp_2385_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v___x_2384_);
lean_ctor_set(v_reuseFailAlloc_2390_, 1, v_k_2315_);
lean_ctor_set(v_reuseFailAlloc_2390_, 2, v_v_2316_);
lean_ctor_set(v_reuseFailAlloc_2390_, 3, v_r_2161_);
lean_ctor_set(v_reuseFailAlloc_2390_, 4, v_tree_2314_);
v___x_2386_ = v_reuseFailAlloc_2390_;
goto v_reusejp_2385_;
}
v_reusejp_2385_:
{
lean_object* v___x_2388_; 
if (v_isShared_2328_ == 0)
{
lean_ctor_set(v___x_2327_, 4, v___x_2386_);
lean_ctor_set(v___x_2327_, 0, v___x_2382_);
v___x_2388_ = v___x_2327_;
goto v_reusejp_2387_;
}
else
{
lean_object* v_reuseFailAlloc_2389_; 
v_reuseFailAlloc_2389_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2389_, 0, v___x_2382_);
lean_ctor_set(v_reuseFailAlloc_2389_, 1, v_k_2158_);
lean_ctor_set(v_reuseFailAlloc_2389_, 2, v_v_2159_);
lean_ctor_set(v_reuseFailAlloc_2389_, 3, v_l_2160_);
lean_ctor_set(v_reuseFailAlloc_2389_, 4, v___x_2386_);
v___x_2388_ = v_reuseFailAlloc_2389_;
goto v_reusejp_2387_;
}
v_reusejp_2387_:
{
return v___x_2388_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_2160_) == 0)
{
lean_object* v___x_2398_; uint8_t v_isShared_2399_; uint8_t v_isSharedCheck_2420_; 
lean_inc_ref(v_l_2160_);
lean_inc(v_v_2159_);
lean_inc(v_k_2158_);
lean_inc(v_size_2157_);
v_isSharedCheck_2420_ = !lean_is_exclusive(v_l_1986_);
if (v_isSharedCheck_2420_ == 0)
{
lean_object* v_unused_2421_; lean_object* v_unused_2422_; lean_object* v_unused_2423_; lean_object* v_unused_2424_; lean_object* v_unused_2425_; 
v_unused_2421_ = lean_ctor_get(v_l_1986_, 4);
lean_dec(v_unused_2421_);
v_unused_2422_ = lean_ctor_get(v_l_1986_, 3);
lean_dec(v_unused_2422_);
v_unused_2423_ = lean_ctor_get(v_l_1986_, 2);
lean_dec(v_unused_2423_);
v_unused_2424_ = lean_ctor_get(v_l_1986_, 1);
lean_dec(v_unused_2424_);
v_unused_2425_ = lean_ctor_get(v_l_1986_, 0);
lean_dec(v_unused_2425_);
v___x_2398_ = v_l_1986_;
v_isShared_2399_ = v_isSharedCheck_2420_;
goto v_resetjp_2397_;
}
else
{
lean_dec(v_l_1986_);
v___x_2398_ = lean_box(0);
v_isShared_2399_ = v_isSharedCheck_2420_;
goto v_resetjp_2397_;
}
v_resetjp_2397_:
{
if (lean_obj_tag(v_r_2161_) == 0)
{
lean_object* v_k_2400_; lean_object* v_v_2401_; lean_object* v_size_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2406_; 
v_k_2400_ = lean_ctor_get(v___x_2313_, 0);
lean_inc(v_k_2400_);
v_v_2401_ = lean_ctor_get(v___x_2313_, 1);
lean_inc(v_v_2401_);
lean_dec_ref(v___x_2313_);
v_size_2402_ = lean_ctor_get(v_r_2161_, 0);
v___x_2403_ = lean_nat_add(v___x_2167_, v_size_2157_);
lean_dec(v_size_2157_);
v___x_2404_ = lean_nat_add(v___x_2167_, v_size_2402_);
if (v_isShared_2312_ == 0)
{
lean_ctor_set(v___x_2311_, 4, v_tree_2314_);
lean_ctor_set(v___x_2311_, 3, v_r_2161_);
lean_ctor_set(v___x_2311_, 2, v_v_2401_);
lean_ctor_set(v___x_2311_, 1, v_k_2400_);
lean_ctor_set(v___x_2311_, 0, v___x_2404_);
v___x_2406_ = v___x_2311_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v___x_2404_);
lean_ctor_set(v_reuseFailAlloc_2410_, 1, v_k_2400_);
lean_ctor_set(v_reuseFailAlloc_2410_, 2, v_v_2401_);
lean_ctor_set(v_reuseFailAlloc_2410_, 3, v_r_2161_);
lean_ctor_set(v_reuseFailAlloc_2410_, 4, v_tree_2314_);
v___x_2406_ = v_reuseFailAlloc_2410_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
lean_object* v___x_2408_; 
if (v_isShared_2399_ == 0)
{
lean_ctor_set(v___x_2398_, 4, v___x_2406_);
lean_ctor_set(v___x_2398_, 0, v___x_2403_);
v___x_2408_ = v___x_2398_;
goto v_reusejp_2407_;
}
else
{
lean_object* v_reuseFailAlloc_2409_; 
v_reuseFailAlloc_2409_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2409_, 0, v___x_2403_);
lean_ctor_set(v_reuseFailAlloc_2409_, 1, v_k_2158_);
lean_ctor_set(v_reuseFailAlloc_2409_, 2, v_v_2159_);
lean_ctor_set(v_reuseFailAlloc_2409_, 3, v_l_2160_);
lean_ctor_set(v_reuseFailAlloc_2409_, 4, v___x_2406_);
v___x_2408_ = v_reuseFailAlloc_2409_;
goto v_reusejp_2407_;
}
v_reusejp_2407_:
{
return v___x_2408_;
}
}
}
else
{
lean_object* v_k_2411_; lean_object* v_v_2412_; lean_object* v___x_2413_; lean_object* v___x_2415_; 
lean_dec(v_size_2157_);
v_k_2411_ = lean_ctor_get(v___x_2313_, 0);
lean_inc(v_k_2411_);
v_v_2412_ = lean_ctor_get(v___x_2313_, 1);
lean_inc(v_v_2412_);
lean_dec_ref(v___x_2313_);
v___x_2413_ = lean_unsigned_to_nat(3u);
if (v_isShared_2312_ == 0)
{
lean_ctor_set(v___x_2311_, 4, v_r_2161_);
lean_ctor_set(v___x_2311_, 3, v_r_2161_);
lean_ctor_set(v___x_2311_, 2, v_v_2412_);
lean_ctor_set(v___x_2311_, 1, v_k_2411_);
lean_ctor_set(v___x_2311_, 0, v___x_2167_);
v___x_2415_ = v___x_2311_;
goto v_reusejp_2414_;
}
else
{
lean_object* v_reuseFailAlloc_2419_; 
v_reuseFailAlloc_2419_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2419_, 0, v___x_2167_);
lean_ctor_set(v_reuseFailAlloc_2419_, 1, v_k_2411_);
lean_ctor_set(v_reuseFailAlloc_2419_, 2, v_v_2412_);
lean_ctor_set(v_reuseFailAlloc_2419_, 3, v_r_2161_);
lean_ctor_set(v_reuseFailAlloc_2419_, 4, v_r_2161_);
v___x_2415_ = v_reuseFailAlloc_2419_;
goto v_reusejp_2414_;
}
v_reusejp_2414_:
{
lean_object* v___x_2417_; 
if (v_isShared_2399_ == 0)
{
lean_ctor_set(v___x_2398_, 4, v___x_2415_);
lean_ctor_set(v___x_2398_, 0, v___x_2413_);
v___x_2417_ = v___x_2398_;
goto v_reusejp_2416_;
}
else
{
lean_object* v_reuseFailAlloc_2418_; 
v_reuseFailAlloc_2418_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2418_, 0, v___x_2413_);
lean_ctor_set(v_reuseFailAlloc_2418_, 1, v_k_2158_);
lean_ctor_set(v_reuseFailAlloc_2418_, 2, v_v_2159_);
lean_ctor_set(v_reuseFailAlloc_2418_, 3, v_l_2160_);
lean_ctor_set(v_reuseFailAlloc_2418_, 4, v___x_2415_);
v___x_2417_ = v_reuseFailAlloc_2418_;
goto v_reusejp_2416_;
}
v_reusejp_2416_:
{
return v___x_2417_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_2161_) == 0)
{
lean_object* v___x_2427_; uint8_t v_isShared_2428_; uint8_t v_isSharedCheck_2450_; 
lean_inc(v_l_2160_);
lean_inc(v_v_2159_);
lean_inc(v_k_2158_);
v_isSharedCheck_2450_ = !lean_is_exclusive(v_l_1986_);
if (v_isSharedCheck_2450_ == 0)
{
lean_object* v_unused_2451_; lean_object* v_unused_2452_; lean_object* v_unused_2453_; lean_object* v_unused_2454_; lean_object* v_unused_2455_; 
v_unused_2451_ = lean_ctor_get(v_l_1986_, 4);
lean_dec(v_unused_2451_);
v_unused_2452_ = lean_ctor_get(v_l_1986_, 3);
lean_dec(v_unused_2452_);
v_unused_2453_ = lean_ctor_get(v_l_1986_, 2);
lean_dec(v_unused_2453_);
v_unused_2454_ = lean_ctor_get(v_l_1986_, 1);
lean_dec(v_unused_2454_);
v_unused_2455_ = lean_ctor_get(v_l_1986_, 0);
lean_dec(v_unused_2455_);
v___x_2427_ = v_l_1986_;
v_isShared_2428_ = v_isSharedCheck_2450_;
goto v_resetjp_2426_;
}
else
{
lean_dec(v_l_1986_);
v___x_2427_ = lean_box(0);
v_isShared_2428_ = v_isSharedCheck_2450_;
goto v_resetjp_2426_;
}
v_resetjp_2426_:
{
lean_object* v_k_2429_; lean_object* v_v_2430_; lean_object* v_k_2431_; lean_object* v_v_2432_; lean_object* v___x_2434_; uint8_t v_isShared_2435_; uint8_t v_isSharedCheck_2446_; 
v_k_2429_ = lean_ctor_get(v___x_2313_, 0);
lean_inc(v_k_2429_);
v_v_2430_ = lean_ctor_get(v___x_2313_, 1);
lean_inc(v_v_2430_);
lean_dec_ref(v___x_2313_);
v_k_2431_ = lean_ctor_get(v_r_2161_, 1);
v_v_2432_ = lean_ctor_get(v_r_2161_, 2);
v_isSharedCheck_2446_ = !lean_is_exclusive(v_r_2161_);
if (v_isSharedCheck_2446_ == 0)
{
lean_object* v_unused_2447_; lean_object* v_unused_2448_; lean_object* v_unused_2449_; 
v_unused_2447_ = lean_ctor_get(v_r_2161_, 4);
lean_dec(v_unused_2447_);
v_unused_2448_ = lean_ctor_get(v_r_2161_, 3);
lean_dec(v_unused_2448_);
v_unused_2449_ = lean_ctor_get(v_r_2161_, 0);
lean_dec(v_unused_2449_);
v___x_2434_ = v_r_2161_;
v_isShared_2435_ = v_isSharedCheck_2446_;
goto v_resetjp_2433_;
}
else
{
lean_inc(v_v_2432_);
lean_inc(v_k_2431_);
lean_dec(v_r_2161_);
v___x_2434_ = lean_box(0);
v_isShared_2435_ = v_isSharedCheck_2446_;
goto v_resetjp_2433_;
}
v_resetjp_2433_:
{
lean_object* v___x_2436_; lean_object* v___x_2438_; 
v___x_2436_ = lean_unsigned_to_nat(3u);
if (v_isShared_2435_ == 0)
{
lean_ctor_set(v___x_2434_, 4, v_l_2160_);
lean_ctor_set(v___x_2434_, 3, v_l_2160_);
lean_ctor_set(v___x_2434_, 2, v_v_2159_);
lean_ctor_set(v___x_2434_, 1, v_k_2158_);
lean_ctor_set(v___x_2434_, 0, v___x_2167_);
v___x_2438_ = v___x_2434_;
goto v_reusejp_2437_;
}
else
{
lean_object* v_reuseFailAlloc_2445_; 
v_reuseFailAlloc_2445_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2445_, 0, v___x_2167_);
lean_ctor_set(v_reuseFailAlloc_2445_, 1, v_k_2158_);
lean_ctor_set(v_reuseFailAlloc_2445_, 2, v_v_2159_);
lean_ctor_set(v_reuseFailAlloc_2445_, 3, v_l_2160_);
lean_ctor_set(v_reuseFailAlloc_2445_, 4, v_l_2160_);
v___x_2438_ = v_reuseFailAlloc_2445_;
goto v_reusejp_2437_;
}
v_reusejp_2437_:
{
lean_object* v___x_2440_; 
if (v_isShared_2312_ == 0)
{
lean_ctor_set(v___x_2311_, 4, v_l_2160_);
lean_ctor_set(v___x_2311_, 3, v_l_2160_);
lean_ctor_set(v___x_2311_, 2, v_v_2430_);
lean_ctor_set(v___x_2311_, 1, v_k_2429_);
lean_ctor_set(v___x_2311_, 0, v___x_2167_);
v___x_2440_ = v___x_2311_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2444_; 
v_reuseFailAlloc_2444_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2444_, 0, v___x_2167_);
lean_ctor_set(v_reuseFailAlloc_2444_, 1, v_k_2429_);
lean_ctor_set(v_reuseFailAlloc_2444_, 2, v_v_2430_);
lean_ctor_set(v_reuseFailAlloc_2444_, 3, v_l_2160_);
lean_ctor_set(v_reuseFailAlloc_2444_, 4, v_l_2160_);
v___x_2440_ = v_reuseFailAlloc_2444_;
goto v_reusejp_2439_;
}
v_reusejp_2439_:
{
lean_object* v___x_2442_; 
if (v_isShared_2428_ == 0)
{
lean_ctor_set(v___x_2427_, 4, v___x_2440_);
lean_ctor_set(v___x_2427_, 3, v___x_2438_);
lean_ctor_set(v___x_2427_, 2, v_v_2432_);
lean_ctor_set(v___x_2427_, 1, v_k_2431_);
lean_ctor_set(v___x_2427_, 0, v___x_2436_);
v___x_2442_ = v___x_2427_;
goto v_reusejp_2441_;
}
else
{
lean_object* v_reuseFailAlloc_2443_; 
v_reuseFailAlloc_2443_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2443_, 0, v___x_2436_);
lean_ctor_set(v_reuseFailAlloc_2443_, 1, v_k_2431_);
lean_ctor_set(v_reuseFailAlloc_2443_, 2, v_v_2432_);
lean_ctor_set(v_reuseFailAlloc_2443_, 3, v___x_2438_);
lean_ctor_set(v_reuseFailAlloc_2443_, 4, v___x_2440_);
v___x_2442_ = v_reuseFailAlloc_2443_;
goto v_reusejp_2441_;
}
v_reusejp_2441_:
{
return v___x_2442_;
}
}
}
}
}
}
else
{
lean_object* v_k_2456_; lean_object* v_v_2457_; lean_object* v___x_2458_; lean_object* v___x_2460_; 
v_k_2456_ = lean_ctor_get(v___x_2313_, 0);
lean_inc(v_k_2456_);
v_v_2457_ = lean_ctor_get(v___x_2313_, 1);
lean_inc(v_v_2457_);
lean_dec_ref(v___x_2313_);
v___x_2458_ = lean_unsigned_to_nat(2u);
if (v_isShared_2312_ == 0)
{
lean_ctor_set(v___x_2311_, 4, v_r_2161_);
lean_ctor_set(v___x_2311_, 3, v_l_1986_);
lean_ctor_set(v___x_2311_, 2, v_v_2457_);
lean_ctor_set(v___x_2311_, 1, v_k_2456_);
lean_ctor_set(v___x_2311_, 0, v___x_2458_);
v___x_2460_ = v___x_2311_;
goto v_reusejp_2459_;
}
else
{
lean_object* v_reuseFailAlloc_2461_; 
v_reuseFailAlloc_2461_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2461_, 0, v___x_2458_);
lean_ctor_set(v_reuseFailAlloc_2461_, 1, v_k_2456_);
lean_ctor_set(v_reuseFailAlloc_2461_, 2, v_v_2457_);
lean_ctor_set(v_reuseFailAlloc_2461_, 3, v_l_1986_);
lean_ctor_set(v_reuseFailAlloc_2461_, 4, v_r_2161_);
v___x_2460_ = v_reuseFailAlloc_2461_;
goto v_reusejp_2459_;
}
v_reusejp_2459_:
{
return v___x_2460_;
}
}
}
}
}
}
}
else
{
return v_l_1986_;
}
}
else
{
return v_r_1987_;
}
}
}
else
{
lean_object* v_impl_2468_; lean_object* v___x_2469_; 
v_impl_2468_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3___redArg(v_k_1982_, v_l_1986_);
v___x_2469_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_2468_) == 0)
{
if (lean_obj_tag(v_r_1987_) == 0)
{
lean_object* v_size_2470_; lean_object* v_size_2471_; lean_object* v_k_2472_; lean_object* v_v_2473_; lean_object* v_l_2474_; lean_object* v_r_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; uint8_t v___x_2478_; 
v_size_2470_ = lean_ctor_get(v_impl_2468_, 0);
v_size_2471_ = lean_ctor_get(v_r_1987_, 0);
v_k_2472_ = lean_ctor_get(v_r_1987_, 1);
v_v_2473_ = lean_ctor_get(v_r_1987_, 2);
v_l_2474_ = lean_ctor_get(v_r_1987_, 3);
lean_inc(v_l_2474_);
v_r_2475_ = lean_ctor_get(v_r_1987_, 4);
v___x_2476_ = lean_unsigned_to_nat(3u);
v___x_2477_ = lean_nat_mul(v___x_2476_, v_size_2470_);
v___x_2478_ = lean_nat_dec_lt(v___x_2477_, v_size_2471_);
lean_dec(v___x_2477_);
if (v___x_2478_ == 0)
{
lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2482_; 
lean_dec(v_l_2474_);
v___x_2479_ = lean_nat_add(v___x_2469_, v_size_2470_);
v___x_2480_ = lean_nat_add(v___x_2479_, v_size_2471_);
lean_dec(v___x_2479_);
if (v_isShared_1990_ == 0)
{
lean_ctor_set(v___x_1989_, 3, v_impl_2468_);
lean_ctor_set(v___x_1989_, 0, v___x_2480_);
v___x_2482_ = v___x_1989_;
goto v_reusejp_2481_;
}
else
{
lean_object* v_reuseFailAlloc_2483_; 
v_reuseFailAlloc_2483_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2483_, 0, v___x_2480_);
lean_ctor_set(v_reuseFailAlloc_2483_, 1, v_k_1984_);
lean_ctor_set(v_reuseFailAlloc_2483_, 2, v_v_1985_);
lean_ctor_set(v_reuseFailAlloc_2483_, 3, v_impl_2468_);
lean_ctor_set(v_reuseFailAlloc_2483_, 4, v_r_1987_);
v___x_2482_ = v_reuseFailAlloc_2483_;
goto v_reusejp_2481_;
}
v_reusejp_2481_:
{
return v___x_2482_;
}
}
else
{
lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2547_; 
lean_inc(v_r_2475_);
lean_inc(v_v_2473_);
lean_inc(v_k_2472_);
lean_inc(v_size_2471_);
v_isSharedCheck_2547_ = !lean_is_exclusive(v_r_1987_);
if (v_isSharedCheck_2547_ == 0)
{
lean_object* v_unused_2548_; lean_object* v_unused_2549_; lean_object* v_unused_2550_; lean_object* v_unused_2551_; lean_object* v_unused_2552_; 
v_unused_2548_ = lean_ctor_get(v_r_1987_, 4);
lean_dec(v_unused_2548_);
v_unused_2549_ = lean_ctor_get(v_r_1987_, 3);
lean_dec(v_unused_2549_);
v_unused_2550_ = lean_ctor_get(v_r_1987_, 2);
lean_dec(v_unused_2550_);
v_unused_2551_ = lean_ctor_get(v_r_1987_, 1);
lean_dec(v_unused_2551_);
v_unused_2552_ = lean_ctor_get(v_r_1987_, 0);
lean_dec(v_unused_2552_);
v___x_2485_ = v_r_1987_;
v_isShared_2486_ = v_isSharedCheck_2547_;
goto v_resetjp_2484_;
}
else
{
lean_dec(v_r_1987_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2547_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v_size_2487_; lean_object* v_k_2488_; lean_object* v_v_2489_; lean_object* v_l_2490_; lean_object* v_r_2491_; lean_object* v_size_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; uint8_t v___x_2495_; 
v_size_2487_ = lean_ctor_get(v_l_2474_, 0);
v_k_2488_ = lean_ctor_get(v_l_2474_, 1);
v_v_2489_ = lean_ctor_get(v_l_2474_, 2);
v_l_2490_ = lean_ctor_get(v_l_2474_, 3);
v_r_2491_ = lean_ctor_get(v_l_2474_, 4);
v_size_2492_ = lean_ctor_get(v_r_2475_, 0);
v___x_2493_ = lean_unsigned_to_nat(2u);
v___x_2494_ = lean_nat_mul(v___x_2493_, v_size_2492_);
v___x_2495_ = lean_nat_dec_lt(v_size_2487_, v___x_2494_);
lean_dec(v___x_2494_);
if (v___x_2495_ == 0)
{
lean_object* v___x_2497_; uint8_t v_isShared_2498_; uint8_t v_isSharedCheck_2523_; 
lean_inc(v_r_2491_);
lean_inc(v_l_2490_);
lean_inc(v_v_2489_);
lean_inc(v_k_2488_);
v_isSharedCheck_2523_ = !lean_is_exclusive(v_l_2474_);
if (v_isSharedCheck_2523_ == 0)
{
lean_object* v_unused_2524_; lean_object* v_unused_2525_; lean_object* v_unused_2526_; lean_object* v_unused_2527_; lean_object* v_unused_2528_; 
v_unused_2524_ = lean_ctor_get(v_l_2474_, 4);
lean_dec(v_unused_2524_);
v_unused_2525_ = lean_ctor_get(v_l_2474_, 3);
lean_dec(v_unused_2525_);
v_unused_2526_ = lean_ctor_get(v_l_2474_, 2);
lean_dec(v_unused_2526_);
v_unused_2527_ = lean_ctor_get(v_l_2474_, 1);
lean_dec(v_unused_2527_);
v_unused_2528_ = lean_ctor_get(v_l_2474_, 0);
lean_dec(v_unused_2528_);
v___x_2497_ = v_l_2474_;
v_isShared_2498_ = v_isSharedCheck_2523_;
goto v_resetjp_2496_;
}
else
{
lean_dec(v_l_2474_);
v___x_2497_ = lean_box(0);
v_isShared_2498_ = v_isSharedCheck_2523_;
goto v_resetjp_2496_;
}
v_resetjp_2496_:
{
lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___y_2502_; lean_object* v___y_2503_; lean_object* v___y_2504_; lean_object* v___y_2513_; 
v___x_2499_ = lean_nat_add(v___x_2469_, v_size_2470_);
v___x_2500_ = lean_nat_add(v___x_2499_, v_size_2471_);
lean_dec(v_size_2471_);
if (lean_obj_tag(v_l_2490_) == 0)
{
lean_object* v_size_2521_; 
v_size_2521_ = lean_ctor_get(v_l_2490_, 0);
lean_inc(v_size_2521_);
v___y_2513_ = v_size_2521_;
goto v___jp_2512_;
}
else
{
lean_object* v___x_2522_; 
v___x_2522_ = lean_unsigned_to_nat(0u);
v___y_2513_ = v___x_2522_;
goto v___jp_2512_;
}
v___jp_2501_:
{
lean_object* v___x_2505_; lean_object* v___x_2507_; 
v___x_2505_ = lean_nat_add(v___y_2503_, v___y_2504_);
lean_dec(v___y_2504_);
lean_dec(v___y_2503_);
if (v_isShared_2498_ == 0)
{
lean_ctor_set(v___x_2497_, 4, v_r_2475_);
lean_ctor_set(v___x_2497_, 3, v_r_2491_);
lean_ctor_set(v___x_2497_, 2, v_v_2473_);
lean_ctor_set(v___x_2497_, 1, v_k_2472_);
lean_ctor_set(v___x_2497_, 0, v___x_2505_);
v___x_2507_ = v___x_2497_;
goto v_reusejp_2506_;
}
else
{
lean_object* v_reuseFailAlloc_2511_; 
v_reuseFailAlloc_2511_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2511_, 0, v___x_2505_);
lean_ctor_set(v_reuseFailAlloc_2511_, 1, v_k_2472_);
lean_ctor_set(v_reuseFailAlloc_2511_, 2, v_v_2473_);
lean_ctor_set(v_reuseFailAlloc_2511_, 3, v_r_2491_);
lean_ctor_set(v_reuseFailAlloc_2511_, 4, v_r_2475_);
v___x_2507_ = v_reuseFailAlloc_2511_;
goto v_reusejp_2506_;
}
v_reusejp_2506_:
{
lean_object* v___x_2509_; 
if (v_isShared_2486_ == 0)
{
lean_ctor_set(v___x_2485_, 4, v___x_2507_);
lean_ctor_set(v___x_2485_, 3, v___y_2502_);
lean_ctor_set(v___x_2485_, 2, v_v_2489_);
lean_ctor_set(v___x_2485_, 1, v_k_2488_);
lean_ctor_set(v___x_2485_, 0, v___x_2500_);
v___x_2509_ = v___x_2485_;
goto v_reusejp_2508_;
}
else
{
lean_object* v_reuseFailAlloc_2510_; 
v_reuseFailAlloc_2510_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2510_, 0, v___x_2500_);
lean_ctor_set(v_reuseFailAlloc_2510_, 1, v_k_2488_);
lean_ctor_set(v_reuseFailAlloc_2510_, 2, v_v_2489_);
lean_ctor_set(v_reuseFailAlloc_2510_, 3, v___y_2502_);
lean_ctor_set(v_reuseFailAlloc_2510_, 4, v___x_2507_);
v___x_2509_ = v_reuseFailAlloc_2510_;
goto v_reusejp_2508_;
}
v_reusejp_2508_:
{
return v___x_2509_;
}
}
}
v___jp_2512_:
{
lean_object* v___x_2514_; lean_object* v___x_2516_; 
v___x_2514_ = lean_nat_add(v___x_2499_, v___y_2513_);
lean_dec(v___y_2513_);
lean_dec(v___x_2499_);
if (v_isShared_1990_ == 0)
{
lean_ctor_set(v___x_1989_, 4, v_l_2490_);
lean_ctor_set(v___x_1989_, 3, v_impl_2468_);
lean_ctor_set(v___x_1989_, 0, v___x_2514_);
v___x_2516_ = v___x_1989_;
goto v_reusejp_2515_;
}
else
{
lean_object* v_reuseFailAlloc_2520_; 
v_reuseFailAlloc_2520_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2520_, 0, v___x_2514_);
lean_ctor_set(v_reuseFailAlloc_2520_, 1, v_k_1984_);
lean_ctor_set(v_reuseFailAlloc_2520_, 2, v_v_1985_);
lean_ctor_set(v_reuseFailAlloc_2520_, 3, v_impl_2468_);
lean_ctor_set(v_reuseFailAlloc_2520_, 4, v_l_2490_);
v___x_2516_ = v_reuseFailAlloc_2520_;
goto v_reusejp_2515_;
}
v_reusejp_2515_:
{
lean_object* v___x_2517_; 
v___x_2517_ = lean_nat_add(v___x_2469_, v_size_2492_);
if (lean_obj_tag(v_r_2491_) == 0)
{
lean_object* v_size_2518_; 
v_size_2518_ = lean_ctor_get(v_r_2491_, 0);
lean_inc(v_size_2518_);
v___y_2502_ = v___x_2516_;
v___y_2503_ = v___x_2517_;
v___y_2504_ = v_size_2518_;
goto v___jp_2501_;
}
else
{
lean_object* v___x_2519_; 
v___x_2519_ = lean_unsigned_to_nat(0u);
v___y_2502_ = v___x_2516_;
v___y_2503_ = v___x_2517_;
v___y_2504_ = v___x_2519_;
goto v___jp_2501_;
}
}
}
}
}
else
{
lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2533_; 
lean_del_object(v___x_1989_);
v___x_2529_ = lean_nat_add(v___x_2469_, v_size_2470_);
v___x_2530_ = lean_nat_add(v___x_2529_, v_size_2471_);
lean_dec(v_size_2471_);
v___x_2531_ = lean_nat_add(v___x_2529_, v_size_2487_);
lean_dec(v___x_2529_);
lean_inc_ref(v_impl_2468_);
if (v_isShared_2486_ == 0)
{
lean_ctor_set(v___x_2485_, 4, v_l_2474_);
lean_ctor_set(v___x_2485_, 3, v_impl_2468_);
lean_ctor_set(v___x_2485_, 2, v_v_1985_);
lean_ctor_set(v___x_2485_, 1, v_k_1984_);
lean_ctor_set(v___x_2485_, 0, v___x_2531_);
v___x_2533_ = v___x_2485_;
goto v_reusejp_2532_;
}
else
{
lean_object* v_reuseFailAlloc_2546_; 
v_reuseFailAlloc_2546_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2546_, 0, v___x_2531_);
lean_ctor_set(v_reuseFailAlloc_2546_, 1, v_k_1984_);
lean_ctor_set(v_reuseFailAlloc_2546_, 2, v_v_1985_);
lean_ctor_set(v_reuseFailAlloc_2546_, 3, v_impl_2468_);
lean_ctor_set(v_reuseFailAlloc_2546_, 4, v_l_2474_);
v___x_2533_ = v_reuseFailAlloc_2546_;
goto v_reusejp_2532_;
}
v_reusejp_2532_:
{
lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2540_; 
v_isSharedCheck_2540_ = !lean_is_exclusive(v_impl_2468_);
if (v_isSharedCheck_2540_ == 0)
{
lean_object* v_unused_2541_; lean_object* v_unused_2542_; lean_object* v_unused_2543_; lean_object* v_unused_2544_; lean_object* v_unused_2545_; 
v_unused_2541_ = lean_ctor_get(v_impl_2468_, 4);
lean_dec(v_unused_2541_);
v_unused_2542_ = lean_ctor_get(v_impl_2468_, 3);
lean_dec(v_unused_2542_);
v_unused_2543_ = lean_ctor_get(v_impl_2468_, 2);
lean_dec(v_unused_2543_);
v_unused_2544_ = lean_ctor_get(v_impl_2468_, 1);
lean_dec(v_unused_2544_);
v_unused_2545_ = lean_ctor_get(v_impl_2468_, 0);
lean_dec(v_unused_2545_);
v___x_2535_ = v_impl_2468_;
v_isShared_2536_ = v_isSharedCheck_2540_;
goto v_resetjp_2534_;
}
else
{
lean_dec(v_impl_2468_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2540_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
lean_object* v___x_2538_; 
if (v_isShared_2536_ == 0)
{
lean_ctor_set(v___x_2535_, 4, v_r_2475_);
lean_ctor_set(v___x_2535_, 3, v___x_2533_);
lean_ctor_set(v___x_2535_, 2, v_v_2473_);
lean_ctor_set(v___x_2535_, 1, v_k_2472_);
lean_ctor_set(v___x_2535_, 0, v___x_2530_);
v___x_2538_ = v___x_2535_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v___x_2530_);
lean_ctor_set(v_reuseFailAlloc_2539_, 1, v_k_2472_);
lean_ctor_set(v_reuseFailAlloc_2539_, 2, v_v_2473_);
lean_ctor_set(v_reuseFailAlloc_2539_, 3, v___x_2533_);
lean_ctor_set(v_reuseFailAlloc_2539_, 4, v_r_2475_);
v___x_2538_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
return v___x_2538_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_2553_; lean_object* v___x_2554_; lean_object* v___x_2556_; 
v_size_2553_ = lean_ctor_get(v_impl_2468_, 0);
v___x_2554_ = lean_nat_add(v___x_2469_, v_size_2553_);
if (v_isShared_1990_ == 0)
{
lean_ctor_set(v___x_1989_, 3, v_impl_2468_);
lean_ctor_set(v___x_1989_, 0, v___x_2554_);
v___x_2556_ = v___x_1989_;
goto v_reusejp_2555_;
}
else
{
lean_object* v_reuseFailAlloc_2557_; 
v_reuseFailAlloc_2557_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2557_, 0, v___x_2554_);
lean_ctor_set(v_reuseFailAlloc_2557_, 1, v_k_1984_);
lean_ctor_set(v_reuseFailAlloc_2557_, 2, v_v_1985_);
lean_ctor_set(v_reuseFailAlloc_2557_, 3, v_impl_2468_);
lean_ctor_set(v_reuseFailAlloc_2557_, 4, v_r_1987_);
v___x_2556_ = v_reuseFailAlloc_2557_;
goto v_reusejp_2555_;
}
v_reusejp_2555_:
{
return v___x_2556_;
}
}
}
else
{
if (lean_obj_tag(v_r_1987_) == 0)
{
lean_object* v_l_2558_; 
v_l_2558_ = lean_ctor_get(v_r_1987_, 3);
lean_inc(v_l_2558_);
if (lean_obj_tag(v_l_2558_) == 0)
{
lean_object* v_r_2559_; 
v_r_2559_ = lean_ctor_get(v_r_1987_, 4);
lean_inc(v_r_2559_);
if (lean_obj_tag(v_r_2559_) == 0)
{
lean_object* v_size_2560_; lean_object* v_k_2561_; lean_object* v_v_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2575_; 
v_size_2560_ = lean_ctor_get(v_r_1987_, 0);
v_k_2561_ = lean_ctor_get(v_r_1987_, 1);
v_v_2562_ = lean_ctor_get(v_r_1987_, 2);
v_isSharedCheck_2575_ = !lean_is_exclusive(v_r_1987_);
if (v_isSharedCheck_2575_ == 0)
{
lean_object* v_unused_2576_; lean_object* v_unused_2577_; 
v_unused_2576_ = lean_ctor_get(v_r_1987_, 4);
lean_dec(v_unused_2576_);
v_unused_2577_ = lean_ctor_get(v_r_1987_, 3);
lean_dec(v_unused_2577_);
v___x_2564_ = v_r_1987_;
v_isShared_2565_ = v_isSharedCheck_2575_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_v_2562_);
lean_inc(v_k_2561_);
lean_inc(v_size_2560_);
lean_dec(v_r_1987_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2575_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v_size_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2570_; 
v_size_2566_ = lean_ctor_get(v_l_2558_, 0);
v___x_2567_ = lean_nat_add(v___x_2469_, v_size_2560_);
lean_dec(v_size_2560_);
v___x_2568_ = lean_nat_add(v___x_2469_, v_size_2566_);
if (v_isShared_2565_ == 0)
{
lean_ctor_set(v___x_2564_, 4, v_l_2558_);
lean_ctor_set(v___x_2564_, 3, v_impl_2468_);
lean_ctor_set(v___x_2564_, 2, v_v_1985_);
lean_ctor_set(v___x_2564_, 1, v_k_1984_);
lean_ctor_set(v___x_2564_, 0, v___x_2568_);
v___x_2570_ = v___x_2564_;
goto v_reusejp_2569_;
}
else
{
lean_object* v_reuseFailAlloc_2574_; 
v_reuseFailAlloc_2574_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2574_, 0, v___x_2568_);
lean_ctor_set(v_reuseFailAlloc_2574_, 1, v_k_1984_);
lean_ctor_set(v_reuseFailAlloc_2574_, 2, v_v_1985_);
lean_ctor_set(v_reuseFailAlloc_2574_, 3, v_impl_2468_);
lean_ctor_set(v_reuseFailAlloc_2574_, 4, v_l_2558_);
v___x_2570_ = v_reuseFailAlloc_2574_;
goto v_reusejp_2569_;
}
v_reusejp_2569_:
{
lean_object* v___x_2572_; 
if (v_isShared_1990_ == 0)
{
lean_ctor_set(v___x_1989_, 4, v_r_2559_);
lean_ctor_set(v___x_1989_, 3, v___x_2570_);
lean_ctor_set(v___x_1989_, 2, v_v_2562_);
lean_ctor_set(v___x_1989_, 1, v_k_2561_);
lean_ctor_set(v___x_1989_, 0, v___x_2567_);
v___x_2572_ = v___x_1989_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v___x_2567_);
lean_ctor_set(v_reuseFailAlloc_2573_, 1, v_k_2561_);
lean_ctor_set(v_reuseFailAlloc_2573_, 2, v_v_2562_);
lean_ctor_set(v_reuseFailAlloc_2573_, 3, v___x_2570_);
lean_ctor_set(v_reuseFailAlloc_2573_, 4, v_r_2559_);
v___x_2572_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
return v___x_2572_;
}
}
}
}
else
{
lean_object* v_k_2578_; lean_object* v_v_2579_; lean_object* v___x_2581_; uint8_t v_isShared_2582_; uint8_t v_isSharedCheck_2602_; 
v_k_2578_ = lean_ctor_get(v_r_1987_, 1);
v_v_2579_ = lean_ctor_get(v_r_1987_, 2);
v_isSharedCheck_2602_ = !lean_is_exclusive(v_r_1987_);
if (v_isSharedCheck_2602_ == 0)
{
lean_object* v_unused_2603_; lean_object* v_unused_2604_; lean_object* v_unused_2605_; 
v_unused_2603_ = lean_ctor_get(v_r_1987_, 4);
lean_dec(v_unused_2603_);
v_unused_2604_ = lean_ctor_get(v_r_1987_, 3);
lean_dec(v_unused_2604_);
v_unused_2605_ = lean_ctor_get(v_r_1987_, 0);
lean_dec(v_unused_2605_);
v___x_2581_ = v_r_1987_;
v_isShared_2582_ = v_isSharedCheck_2602_;
goto v_resetjp_2580_;
}
else
{
lean_inc(v_v_2579_);
lean_inc(v_k_2578_);
lean_dec(v_r_1987_);
v___x_2581_ = lean_box(0);
v_isShared_2582_ = v_isSharedCheck_2602_;
goto v_resetjp_2580_;
}
v_resetjp_2580_:
{
lean_object* v_k_2583_; lean_object* v_v_2584_; lean_object* v___x_2586_; uint8_t v_isShared_2587_; uint8_t v_isSharedCheck_2598_; 
v_k_2583_ = lean_ctor_get(v_l_2558_, 1);
v_v_2584_ = lean_ctor_get(v_l_2558_, 2);
v_isSharedCheck_2598_ = !lean_is_exclusive(v_l_2558_);
if (v_isSharedCheck_2598_ == 0)
{
lean_object* v_unused_2599_; lean_object* v_unused_2600_; lean_object* v_unused_2601_; 
v_unused_2599_ = lean_ctor_get(v_l_2558_, 4);
lean_dec(v_unused_2599_);
v_unused_2600_ = lean_ctor_get(v_l_2558_, 3);
lean_dec(v_unused_2600_);
v_unused_2601_ = lean_ctor_get(v_l_2558_, 0);
lean_dec(v_unused_2601_);
v___x_2586_ = v_l_2558_;
v_isShared_2587_ = v_isSharedCheck_2598_;
goto v_resetjp_2585_;
}
else
{
lean_inc(v_v_2584_);
lean_inc(v_k_2583_);
lean_dec(v_l_2558_);
v___x_2586_ = lean_box(0);
v_isShared_2587_ = v_isSharedCheck_2598_;
goto v_resetjp_2585_;
}
v_resetjp_2585_:
{
lean_object* v___x_2588_; lean_object* v___x_2590_; 
v___x_2588_ = lean_unsigned_to_nat(3u);
if (v_isShared_2587_ == 0)
{
lean_ctor_set(v___x_2586_, 4, v_r_2559_);
lean_ctor_set(v___x_2586_, 3, v_r_2559_);
lean_ctor_set(v___x_2586_, 2, v_v_1985_);
lean_ctor_set(v___x_2586_, 1, v_k_1984_);
lean_ctor_set(v___x_2586_, 0, v___x_2469_);
v___x_2590_ = v___x_2586_;
goto v_reusejp_2589_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v___x_2469_);
lean_ctor_set(v_reuseFailAlloc_2597_, 1, v_k_1984_);
lean_ctor_set(v_reuseFailAlloc_2597_, 2, v_v_1985_);
lean_ctor_set(v_reuseFailAlloc_2597_, 3, v_r_2559_);
lean_ctor_set(v_reuseFailAlloc_2597_, 4, v_r_2559_);
v___x_2590_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2589_;
}
v_reusejp_2589_:
{
lean_object* v___x_2592_; 
if (v_isShared_2582_ == 0)
{
lean_ctor_set(v___x_2581_, 3, v_r_2559_);
lean_ctor_set(v___x_2581_, 0, v___x_2469_);
v___x_2592_ = v___x_2581_;
goto v_reusejp_2591_;
}
else
{
lean_object* v_reuseFailAlloc_2596_; 
v_reuseFailAlloc_2596_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2596_, 0, v___x_2469_);
lean_ctor_set(v_reuseFailAlloc_2596_, 1, v_k_2578_);
lean_ctor_set(v_reuseFailAlloc_2596_, 2, v_v_2579_);
lean_ctor_set(v_reuseFailAlloc_2596_, 3, v_r_2559_);
lean_ctor_set(v_reuseFailAlloc_2596_, 4, v_r_2559_);
v___x_2592_ = v_reuseFailAlloc_2596_;
goto v_reusejp_2591_;
}
v_reusejp_2591_:
{
lean_object* v___x_2594_; 
if (v_isShared_1990_ == 0)
{
lean_ctor_set(v___x_1989_, 4, v___x_2592_);
lean_ctor_set(v___x_1989_, 3, v___x_2590_);
lean_ctor_set(v___x_1989_, 2, v_v_2584_);
lean_ctor_set(v___x_1989_, 1, v_k_2583_);
lean_ctor_set(v___x_1989_, 0, v___x_2588_);
v___x_2594_ = v___x_1989_;
goto v_reusejp_2593_;
}
else
{
lean_object* v_reuseFailAlloc_2595_; 
v_reuseFailAlloc_2595_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2595_, 0, v___x_2588_);
lean_ctor_set(v_reuseFailAlloc_2595_, 1, v_k_2583_);
lean_ctor_set(v_reuseFailAlloc_2595_, 2, v_v_2584_);
lean_ctor_set(v_reuseFailAlloc_2595_, 3, v___x_2590_);
lean_ctor_set(v_reuseFailAlloc_2595_, 4, v___x_2592_);
v___x_2594_ = v_reuseFailAlloc_2595_;
goto v_reusejp_2593_;
}
v_reusejp_2593_:
{
return v___x_2594_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_2606_; 
v_r_2606_ = lean_ctor_get(v_r_1987_, 4);
lean_inc(v_r_2606_);
if (lean_obj_tag(v_r_2606_) == 0)
{
lean_object* v_k_2607_; lean_object* v_v_2608_; lean_object* v___x_2610_; uint8_t v_isShared_2611_; uint8_t v_isSharedCheck_2619_; 
v_k_2607_ = lean_ctor_get(v_r_1987_, 1);
v_v_2608_ = lean_ctor_get(v_r_1987_, 2);
v_isSharedCheck_2619_ = !lean_is_exclusive(v_r_1987_);
if (v_isSharedCheck_2619_ == 0)
{
lean_object* v_unused_2620_; lean_object* v_unused_2621_; lean_object* v_unused_2622_; 
v_unused_2620_ = lean_ctor_get(v_r_1987_, 4);
lean_dec(v_unused_2620_);
v_unused_2621_ = lean_ctor_get(v_r_1987_, 3);
lean_dec(v_unused_2621_);
v_unused_2622_ = lean_ctor_get(v_r_1987_, 0);
lean_dec(v_unused_2622_);
v___x_2610_ = v_r_1987_;
v_isShared_2611_ = v_isSharedCheck_2619_;
goto v_resetjp_2609_;
}
else
{
lean_inc(v_v_2608_);
lean_inc(v_k_2607_);
lean_dec(v_r_1987_);
v___x_2610_ = lean_box(0);
v_isShared_2611_ = v_isSharedCheck_2619_;
goto v_resetjp_2609_;
}
v_resetjp_2609_:
{
lean_object* v___x_2612_; lean_object* v___x_2614_; 
v___x_2612_ = lean_unsigned_to_nat(3u);
if (v_isShared_2611_ == 0)
{
lean_ctor_set(v___x_2610_, 4, v_l_2558_);
lean_ctor_set(v___x_2610_, 2, v_v_1985_);
lean_ctor_set(v___x_2610_, 1, v_k_1984_);
lean_ctor_set(v___x_2610_, 0, v___x_2469_);
v___x_2614_ = v___x_2610_;
goto v_reusejp_2613_;
}
else
{
lean_object* v_reuseFailAlloc_2618_; 
v_reuseFailAlloc_2618_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2618_, 0, v___x_2469_);
lean_ctor_set(v_reuseFailAlloc_2618_, 1, v_k_1984_);
lean_ctor_set(v_reuseFailAlloc_2618_, 2, v_v_1985_);
lean_ctor_set(v_reuseFailAlloc_2618_, 3, v_l_2558_);
lean_ctor_set(v_reuseFailAlloc_2618_, 4, v_l_2558_);
v___x_2614_ = v_reuseFailAlloc_2618_;
goto v_reusejp_2613_;
}
v_reusejp_2613_:
{
lean_object* v___x_2616_; 
if (v_isShared_1990_ == 0)
{
lean_ctor_set(v___x_1989_, 4, v_r_2606_);
lean_ctor_set(v___x_1989_, 3, v___x_2614_);
lean_ctor_set(v___x_1989_, 2, v_v_2608_);
lean_ctor_set(v___x_1989_, 1, v_k_2607_);
lean_ctor_set(v___x_1989_, 0, v___x_2612_);
v___x_2616_ = v___x_1989_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v___x_2612_);
lean_ctor_set(v_reuseFailAlloc_2617_, 1, v_k_2607_);
lean_ctor_set(v_reuseFailAlloc_2617_, 2, v_v_2608_);
lean_ctor_set(v_reuseFailAlloc_2617_, 3, v___x_2614_);
lean_ctor_set(v_reuseFailAlloc_2617_, 4, v_r_2606_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
return v___x_2616_;
}
}
}
}
else
{
lean_object* v_size_2623_; lean_object* v_k_2624_; lean_object* v_v_2625_; lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2636_; 
v_size_2623_ = lean_ctor_get(v_r_1987_, 0);
v_k_2624_ = lean_ctor_get(v_r_1987_, 1);
v_v_2625_ = lean_ctor_get(v_r_1987_, 2);
v_isSharedCheck_2636_ = !lean_is_exclusive(v_r_1987_);
if (v_isSharedCheck_2636_ == 0)
{
lean_object* v_unused_2637_; lean_object* v_unused_2638_; 
v_unused_2637_ = lean_ctor_get(v_r_1987_, 4);
lean_dec(v_unused_2637_);
v_unused_2638_ = lean_ctor_get(v_r_1987_, 3);
lean_dec(v_unused_2638_);
v___x_2627_ = v_r_1987_;
v_isShared_2628_ = v_isSharedCheck_2636_;
goto v_resetjp_2626_;
}
else
{
lean_inc(v_v_2625_);
lean_inc(v_k_2624_);
lean_inc(v_size_2623_);
lean_dec(v_r_1987_);
v___x_2627_ = lean_box(0);
v_isShared_2628_ = v_isSharedCheck_2636_;
goto v_resetjp_2626_;
}
v_resetjp_2626_:
{
lean_object* v___x_2630_; 
if (v_isShared_2628_ == 0)
{
lean_ctor_set(v___x_2627_, 3, v_r_2606_);
v___x_2630_ = v___x_2627_;
goto v_reusejp_2629_;
}
else
{
lean_object* v_reuseFailAlloc_2635_; 
v_reuseFailAlloc_2635_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2635_, 0, v_size_2623_);
lean_ctor_set(v_reuseFailAlloc_2635_, 1, v_k_2624_);
lean_ctor_set(v_reuseFailAlloc_2635_, 2, v_v_2625_);
lean_ctor_set(v_reuseFailAlloc_2635_, 3, v_r_2606_);
lean_ctor_set(v_reuseFailAlloc_2635_, 4, v_r_2606_);
v___x_2630_ = v_reuseFailAlloc_2635_;
goto v_reusejp_2629_;
}
v_reusejp_2629_:
{
lean_object* v___x_2631_; lean_object* v___x_2633_; 
v___x_2631_ = lean_unsigned_to_nat(2u);
if (v_isShared_1990_ == 0)
{
lean_ctor_set(v___x_1989_, 4, v___x_2630_);
lean_ctor_set(v___x_1989_, 3, v_r_2606_);
lean_ctor_set(v___x_1989_, 0, v___x_2631_);
v___x_2633_ = v___x_1989_;
goto v_reusejp_2632_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v___x_2631_);
lean_ctor_set(v_reuseFailAlloc_2634_, 1, v_k_1984_);
lean_ctor_set(v_reuseFailAlloc_2634_, 2, v_v_1985_);
lean_ctor_set(v_reuseFailAlloc_2634_, 3, v_r_2606_);
lean_ctor_set(v_reuseFailAlloc_2634_, 4, v___x_2630_);
v___x_2633_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2632_;
}
v_reusejp_2632_:
{
return v___x_2633_;
}
}
}
}
}
}
else
{
lean_object* v___x_2640_; 
if (v_isShared_1990_ == 0)
{
lean_ctor_set(v___x_1989_, 3, v_r_1987_);
lean_ctor_set(v___x_1989_, 0, v___x_2469_);
v___x_2640_ = v___x_1989_;
goto v_reusejp_2639_;
}
else
{
lean_object* v_reuseFailAlloc_2641_; 
v_reuseFailAlloc_2641_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2641_, 0, v___x_2469_);
lean_ctor_set(v_reuseFailAlloc_2641_, 1, v_k_1984_);
lean_ctor_set(v_reuseFailAlloc_2641_, 2, v_v_1985_);
lean_ctor_set(v_reuseFailAlloc_2641_, 3, v_r_1987_);
lean_ctor_set(v_reuseFailAlloc_2641_, 4, v_r_1987_);
v___x_2640_ = v_reuseFailAlloc_2641_;
goto v_reusejp_2639_;
}
v_reusejp_2639_:
{
return v___x_2640_;
}
}
}
}
}
}
else
{
return v_t_1983_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3___redArg___boxed(lean_object* v_k_2644_, lean_object* v_t_2645_){
_start:
{
lean_object* v_res_2646_; 
v_res_2646_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3___redArg(v_k_2644_, v_t_2645_);
lean_dec(v_k_2644_);
return v_res_2646_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0(lean_object* v_id_2652_, lean_object* v___y_2653_){
_start:
{
lean_object* v___x_2655_; lean_object* v_receivers_2656_; lean_object* v___x_2657_; 
v___x_2655_ = lean_st_ref_get(v___y_2653_);
v_receivers_2656_ = lean_ctor_get(v___x_2655_, 7);
v___x_2657_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___redArg(v_receivers_2656_, v_id_2652_);
if (lean_obj_tag(v___x_2657_) == 1)
{
lean_object* v_val_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; 
v_val_2658_ = lean_ctor_get(v___x_2657_, 0);
lean_inc(v_val_2658_);
lean_dec_ref_known(v___x_2657_, 1);
v___x_2659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2659_, 0, v___x_2655_);
lean_ctor_set(v___x_2659_, 1, v_val_2658_);
v___x_2660_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__2___redArg(v___x_2659_, v___y_2653_);
if (lean_obj_tag(v___x_2660_) == 0)
{
lean_object* v_a_2661_; lean_object* v___x_2663_; uint8_t v_isShared_2664_; uint8_t v_isSharedCheck_2690_; 
v_a_2661_ = lean_ctor_get(v___x_2660_, 0);
v_isSharedCheck_2690_ = !lean_is_exclusive(v___x_2660_);
if (v_isSharedCheck_2690_ == 0)
{
v___x_2663_ = v___x_2660_;
v_isShared_2664_ = v_isSharedCheck_2690_;
goto v_resetjp_2662_;
}
else
{
lean_inc(v_a_2661_);
lean_dec(v___x_2660_);
v___x_2663_ = lean_box(0);
v_isShared_2664_ = v_isSharedCheck_2690_;
goto v_resetjp_2662_;
}
v_resetjp_2662_:
{
lean_object* v_fst_2665_; lean_object* v_producers_2666_; lean_object* v_waiters_2667_; lean_object* v_capacity_2668_; lean_object* v_size_2669_; lean_object* v_buffer_2670_; lean_object* v_write_2671_; lean_object* v_read_2672_; lean_object* v_receivers_2673_; lean_object* v_nextId_2674_; uint8_t v_closed_2675_; lean_object* v_pos_2676_; lean_object* v___x_2678_; uint8_t v_isShared_2679_; uint8_t v_isSharedCheck_2689_; 
v_fst_2665_ = lean_ctor_get(v_a_2661_, 0);
lean_inc(v_fst_2665_);
lean_dec(v_a_2661_);
v_producers_2666_ = lean_ctor_get(v_fst_2665_, 0);
v_waiters_2667_ = lean_ctor_get(v_fst_2665_, 1);
v_capacity_2668_ = lean_ctor_get(v_fst_2665_, 2);
v_size_2669_ = lean_ctor_get(v_fst_2665_, 3);
v_buffer_2670_ = lean_ctor_get(v_fst_2665_, 4);
v_write_2671_ = lean_ctor_get(v_fst_2665_, 5);
v_read_2672_ = lean_ctor_get(v_fst_2665_, 6);
v_receivers_2673_ = lean_ctor_get(v_fst_2665_, 7);
v_nextId_2674_ = lean_ctor_get(v_fst_2665_, 8);
v_closed_2675_ = lean_ctor_get_uint8(v_fst_2665_, sizeof(void*)*10);
v_pos_2676_ = lean_ctor_get(v_fst_2665_, 9);
v_isSharedCheck_2689_ = !lean_is_exclusive(v_fst_2665_);
if (v_isSharedCheck_2689_ == 0)
{
v___x_2678_ = v_fst_2665_;
v_isShared_2679_ = v_isSharedCheck_2689_;
goto v_resetjp_2677_;
}
else
{
lean_inc(v_pos_2676_);
lean_inc(v_nextId_2674_);
lean_inc(v_receivers_2673_);
lean_inc(v_read_2672_);
lean_inc(v_write_2671_);
lean_inc(v_buffer_2670_);
lean_inc(v_size_2669_);
lean_inc(v_capacity_2668_);
lean_inc(v_waiters_2667_);
lean_inc(v_producers_2666_);
lean_dec(v_fst_2665_);
v___x_2678_ = lean_box(0);
v_isShared_2679_ = v_isSharedCheck_2689_;
goto v_resetjp_2677_;
}
v_resetjp_2677_:
{
lean_object* v___x_2680_; lean_object* v___x_2682_; 
v___x_2680_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3___redArg(v_id_2652_, v_receivers_2673_);
if (v_isShared_2679_ == 0)
{
lean_ctor_set(v___x_2678_, 7, v___x_2680_);
v___x_2682_ = v___x_2678_;
goto v_reusejp_2681_;
}
else
{
lean_object* v_reuseFailAlloc_2688_; 
v_reuseFailAlloc_2688_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_2688_, 0, v_producers_2666_);
lean_ctor_set(v_reuseFailAlloc_2688_, 1, v_waiters_2667_);
lean_ctor_set(v_reuseFailAlloc_2688_, 2, v_capacity_2668_);
lean_ctor_set(v_reuseFailAlloc_2688_, 3, v_size_2669_);
lean_ctor_set(v_reuseFailAlloc_2688_, 4, v_buffer_2670_);
lean_ctor_set(v_reuseFailAlloc_2688_, 5, v_write_2671_);
lean_ctor_set(v_reuseFailAlloc_2688_, 6, v_read_2672_);
lean_ctor_set(v_reuseFailAlloc_2688_, 7, v___x_2680_);
lean_ctor_set(v_reuseFailAlloc_2688_, 8, v_nextId_2674_);
lean_ctor_set(v_reuseFailAlloc_2688_, 9, v_pos_2676_);
lean_ctor_set_uint8(v_reuseFailAlloc_2688_, sizeof(void*)*10, v_closed_2675_);
v___x_2682_ = v_reuseFailAlloc_2688_;
goto v_reusejp_2681_;
}
v_reusejp_2681_:
{
lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2686_; 
v___x_2683_ = lean_st_ref_swap(v___y_2653_, v___x_2682_);
lean_dec(v___x_2683_);
v___x_2684_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0___closed__0));
if (v_isShared_2664_ == 0)
{
lean_ctor_set(v___x_2663_, 0, v___x_2684_);
v___x_2686_ = v___x_2663_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v___x_2684_);
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
else
{
lean_object* v_a_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2698_; 
v_a_2691_ = lean_ctor_get(v___x_2660_, 0);
v_isSharedCheck_2698_ = !lean_is_exclusive(v___x_2660_);
if (v_isSharedCheck_2698_ == 0)
{
v___x_2693_ = v___x_2660_;
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_a_2691_);
lean_dec(v___x_2660_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v___x_2696_; 
if (v_isShared_2694_ == 0)
{
v___x_2696_ = v___x_2693_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2697_; 
v_reuseFailAlloc_2697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2697_, 0, v_a_2691_);
v___x_2696_ = v_reuseFailAlloc_2697_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
return v___x_2696_;
}
}
}
}
else
{
lean_object* v___x_2699_; lean_object* v___x_2700_; 
lean_dec(v___x_2657_);
lean_dec(v___x_2655_);
v___x_2699_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0___closed__1));
v___x_2700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2700_, 0, v___x_2699_);
return v___x_2700_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0___boxed(lean_object* v_id_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_){
_start:
{
lean_object* v_res_2704_; 
v_res_2704_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0(v_id_2701_, v___y_2702_);
lean_dec(v___y_2702_);
lean_dec(v_id_2701_);
return v_res_2704_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg(lean_object* v_bd_2705_){
_start:
{
lean_object* v_state_2707_; lean_object* v_id_2708_; lean_object* v___f_2709_; lean_object* v___x_2710_; 
v_state_2707_ = lean_ctor_get(v_bd_2705_, 0);
lean_inc_ref(v_state_2707_);
v_id_2708_ = lean_ctor_get(v_bd_2705_, 1);
lean_inc(v_id_2708_);
lean_dec_ref(v_bd_2705_);
v___f_2709_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2709_, 0, v_id_2708_);
v___x_2710_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___redArg(v_state_2707_, v___f_2709_);
if (lean_obj_tag(v___x_2710_) == 0)
{
lean_object* v_a_2711_; lean_object* v___x_2713_; uint8_t v_isShared_2714_; uint8_t v_isSharedCheck_2735_; 
v_a_2711_ = lean_ctor_get(v___x_2710_, 0);
v_isSharedCheck_2735_ = !lean_is_exclusive(v___x_2710_);
if (v_isSharedCheck_2735_ == 0)
{
v___x_2713_ = v___x_2710_;
v_isShared_2714_ = v_isSharedCheck_2735_;
goto v_resetjp_2712_;
}
else
{
lean_inc(v_a_2711_);
lean_dec(v___x_2710_);
v___x_2713_ = lean_box(0);
v_isShared_2714_ = v_isSharedCheck_2735_;
goto v_resetjp_2712_;
}
v_resetjp_2712_:
{
lean_object* v___y_2716_; 
if (lean_obj_tag(v_a_2711_) == 0)
{
lean_object* v_a_2721_; uint8_t v___x_2722_; 
v_a_2721_ = lean_ctor_get(v_a_2711_, 0);
lean_inc(v_a_2721_);
lean_dec_ref_known(v_a_2711_, 1);
v___x_2722_ = lean_unbox(v_a_2721_);
lean_dec(v_a_2721_);
switch(v___x_2722_)
{
case 0:
{
lean_object* v___x_2723_; 
v___x_2723_ = ((lean_object*)(l_Std_instToStringBroadcastError___lam__0___closed__0));
v___y_2716_ = v___x_2723_;
goto v___jp_2715_;
}
case 1:
{
lean_object* v___x_2724_; 
v___x_2724_ = ((lean_object*)(l_Std_instToStringBroadcastError___lam__0___closed__1));
v___y_2716_ = v___x_2724_;
goto v___jp_2715_;
}
default: 
{
lean_object* v___x_2725_; 
v___x_2725_ = ((lean_object*)(l_Std_instToStringBroadcastError___lam__0___closed__2));
v___y_2716_ = v___x_2725_;
goto v___jp_2715_;
}
}
}
else
{
lean_object* v___x_2727_; uint8_t v_isShared_2728_; uint8_t v_isSharedCheck_2733_; 
lean_del_object(v___x_2713_);
v_isSharedCheck_2733_ = !lean_is_exclusive(v_a_2711_);
if (v_isSharedCheck_2733_ == 0)
{
lean_object* v_unused_2734_; 
v_unused_2734_ = lean_ctor_get(v_a_2711_, 0);
lean_dec(v_unused_2734_);
v___x_2727_ = v_a_2711_;
v_isShared_2728_ = v_isSharedCheck_2733_;
goto v_resetjp_2726_;
}
else
{
lean_dec(v_a_2711_);
v___x_2727_ = lean_box(0);
v_isShared_2728_ = v_isSharedCheck_2733_;
goto v_resetjp_2726_;
}
v_resetjp_2726_:
{
lean_object* v___x_2729_; lean_object* v___x_2731_; 
v___x_2729_ = lean_box(0);
if (v_isShared_2728_ == 0)
{
lean_ctor_set_tag(v___x_2727_, 0);
lean_ctor_set(v___x_2727_, 0, v___x_2729_);
v___x_2731_ = v___x_2727_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v___x_2729_);
v___x_2731_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
return v___x_2731_;
}
}
}
v___jp_2715_:
{
lean_object* v___x_2717_; lean_object* v___x_2719_; 
lean_inc_ref(v___y_2716_);
v___x_2717_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2717_, 0, v___y_2716_);
if (v_isShared_2714_ == 0)
{
lean_ctor_set_tag(v___x_2713_, 1);
lean_ctor_set(v___x_2713_, 0, v___x_2717_);
v___x_2719_ = v___x_2713_;
goto v_reusejp_2718_;
}
else
{
lean_object* v_reuseFailAlloc_2720_; 
v_reuseFailAlloc_2720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2720_, 0, v___x_2717_);
v___x_2719_ = v_reuseFailAlloc_2720_;
goto v_reusejp_2718_;
}
v_reusejp_2718_:
{
return v___x_2719_;
}
}
}
}
else
{
lean_object* v_a_2736_; lean_object* v___x_2738_; uint8_t v_isShared_2739_; uint8_t v_isSharedCheck_2743_; 
v_a_2736_ = lean_ctor_get(v___x_2710_, 0);
v_isSharedCheck_2743_ = !lean_is_exclusive(v___x_2710_);
if (v_isSharedCheck_2743_ == 0)
{
v___x_2738_ = v___x_2710_;
v_isShared_2739_ = v_isSharedCheck_2743_;
goto v_resetjp_2737_;
}
else
{
lean_inc(v_a_2736_);
lean_dec(v___x_2710_);
v___x_2738_ = lean_box(0);
v_isShared_2739_ = v_isSharedCheck_2743_;
goto v_resetjp_2737_;
}
v_resetjp_2737_:
{
lean_object* v___x_2741_; 
if (v_isShared_2739_ == 0)
{
v___x_2741_ = v___x_2738_;
goto v_reusejp_2740_;
}
else
{
lean_object* v_reuseFailAlloc_2742_; 
v_reuseFailAlloc_2742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2742_, 0, v_a_2736_);
v___x_2741_ = v_reuseFailAlloc_2742_;
goto v_reusejp_2740_;
}
v_reusejp_2740_:
{
return v___x_2741_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___boxed(lean_object* v_bd_2744_, lean_object* v_a_2745_){
_start:
{
lean_object* v_res_2746_; 
v_res_2746_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg(v_bd_2744_);
return v_res_2746_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe(lean_object* v_00_u03b1_2747_, lean_object* v_bd_2748_){
_start:
{
lean_object* v___x_2750_; 
v___x_2750_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg(v_bd_2748_);
return v___x_2750_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___boxed(lean_object* v_00_u03b1_2751_, lean_object* v_bd_2752_, lean_object* v_a_2753_){
_start:
{
lean_object* v_res_2754_; 
v_res_2754_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe(v_00_u03b1_2751_, v_bd_2752_);
return v_res_2754_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__0(lean_object* v_00_u03b1_2755_, lean_object* v_a_2756_){
_start:
{
lean_object* v___x_2758_; 
v___x_2758_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__0___redArg(v_a_2756_);
return v___x_2758_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2759_, lean_object* v_a_2760_, lean_object* v___y_2761_){
_start:
{
lean_object* v_res_2762_; 
v_res_2762_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__0(v_00_u03b1_2759_, v_a_2760_);
lean_dec(v_a_2760_);
return v_res_2762_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__1(lean_object* v_00_u03b1_2763_, lean_object* v_place_2764_, lean_object* v_a_2765_){
_start:
{
lean_object* v___x_2767_; 
v___x_2767_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__1___redArg(v_place_2764_, v_a_2765_);
return v___x_2767_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2768_, lean_object* v_place_2769_, lean_object* v_a_2770_, lean_object* v___y_2771_){
_start:
{
lean_object* v_res_2772_; 
v_res_2772_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__1(v_00_u03b1_2768_, v_place_2769_, v_a_2770_);
lean_dec(v_a_2770_);
lean_dec(v_place_2769_);
return v_res_2772_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__2(lean_object* v_00_u03b1_2773_, lean_object* v_slot_2774_, lean_object* v_next_2775_, lean_object* v_a_2776_){
_start:
{
lean_object* v___x_2778_; 
v___x_2778_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__2___redArg(v_slot_2774_, v_next_2775_);
return v___x_2778_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__2___boxed(lean_object* v_00_u03b1_2779_, lean_object* v_slot_2780_, lean_object* v_next_2781_, lean_object* v_a_2782_, lean_object* v___y_2783_){
_start:
{
lean_object* v_res_2784_; 
v_res_2784_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__2(v_00_u03b1_2779_, v_slot_2780_, v_next_2781_, v_a_2782_);
lean_dec(v_a_2782_);
lean_dec(v_next_2781_);
lean_dec(v_slot_2780_);
return v_res_2784_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0(lean_object* v_00_u03b1_2785_, lean_object* v_next_2786_, lean_object* v_a_2787_){
_start:
{
lean_object* v___x_2789_; 
v___x_2789_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0___redArg(v_next_2786_, v_a_2787_);
return v___x_2789_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0___boxed(lean_object* v_00_u03b1_2790_, lean_object* v_next_2791_, lean_object* v_a_2792_, lean_object* v___y_2793_){
_start:
{
lean_object* v_res_2794_; 
v_res_2794_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0(v_00_u03b1_2790_, v_next_2791_, v_a_2792_);
lean_dec(v_a_2792_);
lean_dec(v_next_2791_);
return v_res_2794_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1(lean_object* v_00_u03b4_2795_, lean_object* v_t_2796_, lean_object* v_k_2797_){
_start:
{
lean_object* v___x_2798_; 
v___x_2798_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___redArg(v_t_2796_, v_k_2797_);
return v___x_2798_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___boxed(lean_object* v_00_u03b4_2799_, lean_object* v_t_2800_, lean_object* v_k_2801_){
_start:
{
lean_object* v_res_2802_; 
v_res_2802_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1(v_00_u03b4_2799_, v_t_2800_, v_k_2801_);
lean_dec(v_k_2801_);
lean_dec(v_t_2800_);
return v_res_2802_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__2(lean_object* v_00_u03b1_2803_, lean_object* v_inst_2804_, lean_object* v_a_2805_, lean_object* v___y_2806_){
_start:
{
lean_object* v___x_2808_; 
v___x_2808_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__2___redArg(v_a_2805_, v___y_2806_);
return v___x_2808_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__2___boxed(lean_object* v_00_u03b1_2809_, lean_object* v_inst_2810_, lean_object* v_a_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_){
_start:
{
lean_object* v_res_2814_; 
v_res_2814_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__2(v_00_u03b1_2809_, v_inst_2810_, v_a_2811_, v___y_2812_);
lean_dec(v___y_2812_);
return v_res_2814_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3(lean_object* v_00_u03b2_2815_, lean_object* v_k_2816_, lean_object* v_t_2817_, lean_object* v_h_2818_){
_start:
{
lean_object* v___x_2819_; 
v___x_2819_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3___redArg(v_k_2816_, v_t_2817_);
return v___x_2819_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3___boxed(lean_object* v_00_u03b2_2820_, lean_object* v_k_2821_, lean_object* v_t_2822_, lean_object* v_h_2823_){
_start:
{
lean_object* v_res_2824_; 
v_res_2824_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3(v_00_u03b2_2820_, v_k_2821_, v_t_2822_, v_h_2823_);
lean_dec(v_k_2821_);
return v_res_2824_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__0(lean_object* v_x_2825_, lean_object* v_y_2826_){
_start:
{
uint8_t v___x_2827_; 
v___x_2827_ = lean_nat_dec_lt(v_x_2825_, v_y_2826_);
if (v___x_2827_ == 0)
{
uint8_t v___x_2828_; 
v___x_2828_ = lean_nat_dec_eq(v_x_2825_, v_y_2826_);
if (v___x_2828_ == 0)
{
uint8_t v___x_2829_; 
v___x_2829_ = 2;
return v___x_2829_;
}
else
{
uint8_t v___x_2830_; 
v___x_2830_ = 1;
return v___x_2830_;
}
}
else
{
uint8_t v___x_2831_; 
v___x_2831_ = 0;
return v___x_2831_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__0___boxed(lean_object* v_x_2832_, lean_object* v_y_2833_){
_start:
{
uint8_t v_res_2834_; lean_object* v_r_2835_; 
v_res_2834_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__0(v_x_2832_, v_y_2833_);
lean_dec(v_y_2833_);
lean_dec(v_x_2832_);
v_r_2835_ = lean_box(v_res_2834_);
return v_r_2835_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__1(lean_object* v_x_2836_){
_start:
{
lean_object* v___x_2837_; lean_object* v___x_2838_; 
v___x_2837_ = lean_unsigned_to_nat(1u);
v___x_2838_ = lean_nat_add(v_x_2836_, v___x_2837_);
return v___x_2838_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__1___boxed(lean_object* v_x_2839_){
_start:
{
lean_object* v_res_2840_; 
v_res_2840_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__1(v_x_2839_);
lean_dec(v_x_2839_);
return v_res_2840_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__3(lean_object* v___f_2841_, lean_object* v_receiverId_2842_, lean_object* v___f_2843_, lean_object* v_receivers_2844_, lean_object* v_s_2845_){
_start:
{
lean_object* v_producers_2846_; lean_object* v_waiters_2847_; lean_object* v_capacity_2848_; lean_object* v_size_2849_; lean_object* v_buffer_2850_; lean_object* v_write_2851_; lean_object* v_read_2852_; lean_object* v_nextId_2853_; uint8_t v_closed_2854_; lean_object* v_pos_2855_; lean_object* v___x_2857_; uint8_t v_isShared_2858_; uint8_t v_isSharedCheck_2865_; 
v_producers_2846_ = lean_ctor_get(v_s_2845_, 0);
v_waiters_2847_ = lean_ctor_get(v_s_2845_, 1);
v_capacity_2848_ = lean_ctor_get(v_s_2845_, 2);
v_size_2849_ = lean_ctor_get(v_s_2845_, 3);
v_buffer_2850_ = lean_ctor_get(v_s_2845_, 4);
v_write_2851_ = lean_ctor_get(v_s_2845_, 5);
v_read_2852_ = lean_ctor_get(v_s_2845_, 6);
v_nextId_2853_ = lean_ctor_get(v_s_2845_, 8);
v_closed_2854_ = lean_ctor_get_uint8(v_s_2845_, sizeof(void*)*10);
v_pos_2855_ = lean_ctor_get(v_s_2845_, 9);
v_isSharedCheck_2865_ = !lean_is_exclusive(v_s_2845_);
if (v_isSharedCheck_2865_ == 0)
{
lean_object* v_unused_2866_; 
v_unused_2866_ = lean_ctor_get(v_s_2845_, 7);
lean_dec(v_unused_2866_);
v___x_2857_ = v_s_2845_;
v_isShared_2858_ = v_isSharedCheck_2865_;
goto v_resetjp_2856_;
}
else
{
lean_inc(v_pos_2855_);
lean_inc(v_nextId_2853_);
lean_inc(v_read_2852_);
lean_inc(v_write_2851_);
lean_inc(v_buffer_2850_);
lean_inc(v_size_2849_);
lean_inc(v_capacity_2848_);
lean_inc(v_waiters_2847_);
lean_inc(v_producers_2846_);
lean_dec(v_s_2845_);
v___x_2857_ = lean_box(0);
v_isShared_2858_ = v_isSharedCheck_2865_;
goto v_resetjp_2856_;
}
v_resetjp_2856_:
{
lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2862_; 
v___x_2859_ = lean_box(0);
v___x_2860_ = l_Std_DTreeMap_Internal_Impl_Const_modify___redArg(v___f_2841_, v_receiverId_2842_, v___f_2843_, v_receivers_2844_);
if (v_isShared_2858_ == 0)
{
lean_ctor_set(v___x_2857_, 7, v___x_2860_);
v___x_2862_ = v___x_2857_;
goto v_reusejp_2861_;
}
else
{
lean_object* v_reuseFailAlloc_2864_; 
v_reuseFailAlloc_2864_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_2864_, 0, v_producers_2846_);
lean_ctor_set(v_reuseFailAlloc_2864_, 1, v_waiters_2847_);
lean_ctor_set(v_reuseFailAlloc_2864_, 2, v_capacity_2848_);
lean_ctor_set(v_reuseFailAlloc_2864_, 3, v_size_2849_);
lean_ctor_set(v_reuseFailAlloc_2864_, 4, v_buffer_2850_);
lean_ctor_set(v_reuseFailAlloc_2864_, 5, v_write_2851_);
lean_ctor_set(v_reuseFailAlloc_2864_, 6, v_read_2852_);
lean_ctor_set(v_reuseFailAlloc_2864_, 7, v___x_2860_);
lean_ctor_set(v_reuseFailAlloc_2864_, 8, v_nextId_2853_);
lean_ctor_set(v_reuseFailAlloc_2864_, 9, v_pos_2855_);
lean_ctor_set_uint8(v_reuseFailAlloc_2864_, sizeof(void*)*10, v_closed_2854_);
v___x_2862_ = v_reuseFailAlloc_2864_;
goto v_reusejp_2861_;
}
v_reusejp_2861_:
{
lean_object* v___x_2863_; 
v___x_2863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2863_, 0, v___x_2859_);
lean_ctor_set(v___x_2863_, 1, v___x_2862_);
return v___x_2863_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__2(lean_object* v_toApplicative_2867_, lean_object* v_a_2868_, lean_object* v_a_2869_){
_start:
{
lean_object* v_toPure_2870_; lean_object* v___x_2871_; 
v_toPure_2870_ = lean_ctor_get(v_toApplicative_2867_, 1);
lean_inc(v_toPure_2870_);
lean_dec_ref(v_toApplicative_2867_);
v___x_2871_ = lean_apply_2(v_toPure_2870_, lean_box(0), v_a_2868_);
return v___x_2871_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__4(lean_object* v_toApplicative_2872_, lean_object* v_a_2873_, lean_object* v___f_2874_, lean_object* v_inst_2875_, lean_object* v_toBind_2876_, lean_object* v_a_2877_){
_start:
{
if (lean_obj_tag(v_a_2877_) == 1)
{
lean_object* v___f_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; 
v___f_2878_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__2), 3, 2);
lean_closure_set(v___f_2878_, 0, v_toApplicative_2872_);
lean_closure_set(v___f_2878_, 1, v_a_2877_);
lean_inc(v_a_2873_);
v___x_2879_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___boxed), 6, 5);
lean_closure_set(v___x_2879_, 0, lean_box(0));
lean_closure_set(v___x_2879_, 1, lean_box(0));
lean_closure_set(v___x_2879_, 2, lean_box(0));
lean_closure_set(v___x_2879_, 3, v_a_2873_);
lean_closure_set(v___x_2879_, 4, v___f_2874_);
v___x_2880_ = lean_apply_2(v_inst_2875_, lean_box(0), v___x_2879_);
v___x_2881_ = lean_apply_4(v_toBind_2876_, lean_box(0), lean_box(0), v___x_2880_, v___f_2878_);
return v___x_2881_;
}
else
{
lean_object* v_toPure_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; 
lean_dec(v_a_2877_);
lean_dec(v_toBind_2876_);
lean_dec(v_inst_2875_);
lean_dec_ref(v___f_2874_);
v_toPure_2882_ = lean_ctor_get(v_toApplicative_2872_, 1);
lean_inc(v_toPure_2882_);
lean_dec_ref(v_toApplicative_2872_);
v___x_2883_ = lean_box(0);
v___x_2884_ = lean_apply_2(v_toPure_2882_, lean_box(0), v___x_2883_);
return v___x_2884_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__4___boxed(lean_object* v_toApplicative_2885_, lean_object* v_a_2886_, lean_object* v___f_2887_, lean_object* v_inst_2888_, lean_object* v_toBind_2889_, lean_object* v_a_2890_){
_start:
{
lean_object* v_res_2891_; 
v_res_2891_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__4(v_toApplicative_2885_, v_a_2886_, v___f_2887_, v_inst_2888_, v_toBind_2889_, v_a_2890_);
lean_dec(v_a_2886_);
return v_res_2891_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__5(lean_object* v___f_2892_, lean_object* v_receiverId_2893_, lean_object* v___f_2894_, lean_object* v___f_2895_, lean_object* v_toApplicative_2896_, lean_object* v_a_2897_, lean_object* v_inst_2898_, lean_object* v_toBind_2899_, lean_object* v_inst_2900_, lean_object* v_inst_2901_, lean_object* v_a_2902_){
_start:
{
lean_object* v_receivers_2903_; lean_object* v___x_2904_; 
v_receivers_2903_ = lean_ctor_get(v_a_2902_, 7);
lean_inc_n(v_receivers_2903_, 2);
lean_dec_ref(v_a_2902_);
lean_inc(v_receiverId_2893_);
v___x_2904_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(v___f_2892_, v_receivers_2903_, v_receiverId_2893_);
if (lean_obj_tag(v___x_2904_) == 1)
{
lean_object* v_val_2905_; lean_object* v___f_2906_; lean_object* v___f_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; 
v_val_2905_ = lean_ctor_get(v___x_2904_, 0);
lean_inc(v_val_2905_);
lean_dec_ref_known(v___x_2904_, 1);
v___f_2906_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__3), 5, 4);
lean_closure_set(v___f_2906_, 0, v___f_2894_);
lean_closure_set(v___f_2906_, 1, v_receiverId_2893_);
lean_closure_set(v___f_2906_, 2, v___f_2895_);
lean_closure_set(v___f_2906_, 3, v_receivers_2903_);
lean_inc(v_toBind_2899_);
lean_inc(v_inst_2898_);
lean_inc(v_a_2897_);
v___f_2907_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__4___boxed), 6, 5);
lean_closure_set(v___f_2907_, 0, v_toApplicative_2896_);
lean_closure_set(v___f_2907_, 1, v_a_2897_);
lean_closure_set(v___f_2907_, 2, v___f_2906_);
lean_closure_set(v___f_2907_, 3, v_inst_2898_);
lean_closure_set(v___f_2907_, 4, v_toBind_2899_);
v___x_2908_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg(v_inst_2900_, v_inst_2898_, v_inst_2901_, v_val_2905_, v_a_2897_);
v___x_2909_ = lean_apply_4(v_toBind_2899_, lean_box(0), lean_box(0), v___x_2908_, v___f_2907_);
return v___x_2909_;
}
else
{
lean_object* v_toPure_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; 
lean_dec(v___x_2904_);
lean_dec(v_receivers_2903_);
lean_dec(v_inst_2901_);
lean_dec_ref(v_inst_2900_);
lean_dec(v_toBind_2899_);
lean_dec(v_inst_2898_);
lean_dec_ref(v___f_2895_);
lean_dec_ref(v___f_2894_);
lean_dec(v_receiverId_2893_);
v_toPure_2910_ = lean_ctor_get(v_toApplicative_2896_, 1);
lean_inc(v_toPure_2910_);
lean_dec_ref(v_toApplicative_2896_);
v___x_2911_ = lean_box(0);
v___x_2912_ = lean_apply_2(v_toPure_2910_, lean_box(0), v___x_2911_);
return v___x_2912_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__5___boxed(lean_object* v___f_2913_, lean_object* v_receiverId_2914_, lean_object* v___f_2915_, lean_object* v___f_2916_, lean_object* v_toApplicative_2917_, lean_object* v_a_2918_, lean_object* v_inst_2919_, lean_object* v_toBind_2920_, lean_object* v_inst_2921_, lean_object* v_inst_2922_, lean_object* v_a_2923_){
_start:
{
lean_object* v_res_2924_; 
v_res_2924_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__5(v___f_2913_, v_receiverId_2914_, v___f_2915_, v___f_2916_, v_toApplicative_2917_, v_a_2918_, v_inst_2919_, v_toBind_2920_, v_inst_2921_, v_inst_2922_, v_a_2923_);
lean_dec(v_a_2918_);
return v_res_2924_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg(lean_object* v_inst_2927_, lean_object* v_inst_2928_, lean_object* v_inst_2929_, lean_object* v_receiverId_2930_, lean_object* v_a_2931_){
_start:
{
lean_object* v_toApplicative_2932_; lean_object* v_toBind_2933_; lean_object* v___f_2934_; lean_object* v___f_2935_; lean_object* v___f_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; 
v_toApplicative_2932_ = lean_ctor_get(v_inst_2927_, 0);
lean_inc_ref(v_toApplicative_2932_);
v_toBind_2933_ = lean_ctor_get(v_inst_2927_, 1);
lean_inc_n(v_toBind_2933_, 2);
v___f_2934_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___closed__0));
v___f_2935_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___closed__1));
lean_inc(v_inst_2928_);
lean_inc_n(v_a_2931_, 2);
v___f_2936_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__5___boxed), 11, 10);
lean_closure_set(v___f_2936_, 0, v___f_2934_);
lean_closure_set(v___f_2936_, 1, v_receiverId_2930_);
lean_closure_set(v___f_2936_, 2, v___f_2934_);
lean_closure_set(v___f_2936_, 3, v___f_2935_);
lean_closure_set(v___f_2936_, 4, v_toApplicative_2932_);
lean_closure_set(v___f_2936_, 5, v_a_2931_);
lean_closure_set(v___f_2936_, 6, v_inst_2928_);
lean_closure_set(v___f_2936_, 7, v_toBind_2933_);
lean_closure_set(v___f_2936_, 8, v_inst_2927_);
lean_closure_set(v___f_2936_, 9, v_inst_2929_);
v___x_2937_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2937_, 0, lean_box(0));
lean_closure_set(v___x_2937_, 1, lean_box(0));
lean_closure_set(v___x_2937_, 2, v_a_2931_);
v___x_2938_ = lean_apply_2(v_inst_2928_, lean_box(0), v___x_2937_);
v___x_2939_ = lean_apply_4(v_toBind_2933_, lean_box(0), lean_box(0), v___x_2938_, v___f_2936_);
return v___x_2939_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___boxed(lean_object* v_inst_2940_, lean_object* v_inst_2941_, lean_object* v_inst_2942_, lean_object* v_receiverId_2943_, lean_object* v_a_2944_){
_start:
{
lean_object* v_res_2945_; 
v_res_2945_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg(v_inst_2940_, v_inst_2941_, v_inst_2942_, v_receiverId_2943_, v_a_2944_);
lean_dec(v_a_2944_);
return v_res_2945_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27(lean_object* v_m_2946_, lean_object* v_00_u03b1_2947_, lean_object* v_inst_2948_, lean_object* v_inst_2949_, lean_object* v_inst_2950_, lean_object* v_receiverId_2951_, lean_object* v_a_2952_){
_start:
{
lean_object* v___x_2953_; 
v___x_2953_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg(v_inst_2948_, v_inst_2949_, v_inst_2950_, v_receiverId_2951_, v_a_2952_);
return v___x_2953_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___boxed(lean_object* v_m_2954_, lean_object* v_00_u03b1_2955_, lean_object* v_inst_2956_, lean_object* v_inst_2957_, lean_object* v_inst_2958_, lean_object* v_receiverId_2959_, lean_object* v_a_2960_){
_start:
{
lean_object* v_res_2961_; 
v_res_2961_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27(v_m_2954_, v_00_u03b1_2955_, v_inst_2956_, v_inst_2957_, v_inst_2958_, v_receiverId_2959_, v_a_2960_);
lean_dec(v_a_2960_);
return v_res_2961_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_modify___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__1(lean_object* v_k_2962_, lean_object* v_t_2963_){
_start:
{
if (lean_obj_tag(v_t_2963_) == 0)
{
lean_object* v_size_2964_; lean_object* v_k_2965_; lean_object* v_v_2966_; lean_object* v_l_2967_; lean_object* v_r_2968_; lean_object* v___x_2970_; uint8_t v_isShared_2971_; uint8_t v_isSharedCheck_2987_; 
v_size_2964_ = lean_ctor_get(v_t_2963_, 0);
v_k_2965_ = lean_ctor_get(v_t_2963_, 1);
v_v_2966_ = lean_ctor_get(v_t_2963_, 2);
v_l_2967_ = lean_ctor_get(v_t_2963_, 3);
v_r_2968_ = lean_ctor_get(v_t_2963_, 4);
v_isSharedCheck_2987_ = !lean_is_exclusive(v_t_2963_);
if (v_isSharedCheck_2987_ == 0)
{
v___x_2970_ = v_t_2963_;
v_isShared_2971_ = v_isSharedCheck_2987_;
goto v_resetjp_2969_;
}
else
{
lean_inc(v_r_2968_);
lean_inc(v_l_2967_);
lean_inc(v_v_2966_);
lean_inc(v_k_2965_);
lean_inc(v_size_2964_);
lean_dec(v_t_2963_);
v___x_2970_ = lean_box(0);
v_isShared_2971_ = v_isSharedCheck_2987_;
goto v_resetjp_2969_;
}
v_resetjp_2969_:
{
uint8_t v___x_2972_; 
v___x_2972_ = lean_nat_dec_lt(v_k_2962_, v_k_2965_);
if (v___x_2972_ == 0)
{
uint8_t v___x_2973_; 
v___x_2973_ = lean_nat_dec_eq(v_k_2962_, v_k_2965_);
if (v___x_2973_ == 0)
{
lean_object* v___x_2974_; lean_object* v___x_2976_; 
v___x_2974_ = l_Std_DTreeMap_Internal_Impl_Const_modify___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__1(v_k_2962_, v_r_2968_);
if (v_isShared_2971_ == 0)
{
lean_ctor_set(v___x_2970_, 4, v___x_2974_);
v___x_2976_ = v___x_2970_;
goto v_reusejp_2975_;
}
else
{
lean_object* v_reuseFailAlloc_2977_; 
v_reuseFailAlloc_2977_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2977_, 0, v_size_2964_);
lean_ctor_set(v_reuseFailAlloc_2977_, 1, v_k_2965_);
lean_ctor_set(v_reuseFailAlloc_2977_, 2, v_v_2966_);
lean_ctor_set(v_reuseFailAlloc_2977_, 3, v_l_2967_);
lean_ctor_set(v_reuseFailAlloc_2977_, 4, v___x_2974_);
v___x_2976_ = v_reuseFailAlloc_2977_;
goto v_reusejp_2975_;
}
v_reusejp_2975_:
{
return v___x_2976_;
}
}
else
{
lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2981_; 
lean_dec(v_k_2965_);
v___x_2978_ = lean_unsigned_to_nat(1u);
v___x_2979_ = lean_nat_add(v_v_2966_, v___x_2978_);
lean_dec(v_v_2966_);
if (v_isShared_2971_ == 0)
{
lean_ctor_set(v___x_2970_, 2, v___x_2979_);
lean_ctor_set(v___x_2970_, 1, v_k_2962_);
v___x_2981_ = v___x_2970_;
goto v_reusejp_2980_;
}
else
{
lean_object* v_reuseFailAlloc_2982_; 
v_reuseFailAlloc_2982_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2982_, 0, v_size_2964_);
lean_ctor_set(v_reuseFailAlloc_2982_, 1, v_k_2962_);
lean_ctor_set(v_reuseFailAlloc_2982_, 2, v___x_2979_);
lean_ctor_set(v_reuseFailAlloc_2982_, 3, v_l_2967_);
lean_ctor_set(v_reuseFailAlloc_2982_, 4, v_r_2968_);
v___x_2981_ = v_reuseFailAlloc_2982_;
goto v_reusejp_2980_;
}
v_reusejp_2980_:
{
return v___x_2981_;
}
}
}
else
{
lean_object* v___x_2983_; lean_object* v___x_2985_; 
v___x_2983_ = l_Std_DTreeMap_Internal_Impl_Const_modify___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__1(v_k_2962_, v_l_2967_);
if (v_isShared_2971_ == 0)
{
lean_ctor_set(v___x_2970_, 3, v___x_2983_);
v___x_2985_ = v___x_2970_;
goto v_reusejp_2984_;
}
else
{
lean_object* v_reuseFailAlloc_2986_; 
v_reuseFailAlloc_2986_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2986_, 0, v_size_2964_);
lean_ctor_set(v_reuseFailAlloc_2986_, 1, v_k_2965_);
lean_ctor_set(v_reuseFailAlloc_2986_, 2, v_v_2966_);
lean_ctor_set(v_reuseFailAlloc_2986_, 3, v___x_2983_);
lean_ctor_set(v_reuseFailAlloc_2986_, 4, v_r_2968_);
v___x_2985_ = v_reuseFailAlloc_2986_;
goto v_reusejp_2984_;
}
v_reusejp_2984_:
{
return v___x_2985_;
}
}
}
}
else
{
lean_dec(v_k_2962_);
return v_t_2963_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__3___redArg(lean_object* v_slot_2988_, lean_object* v_next_2989_){
_start:
{
lean_object* v___x_2991_; lean_object* v_fst_2993_; lean_object* v_snd_2994_; lean_object* v_value_2996_; lean_object* v_pos_2997_; lean_object* v_remaining_2998_; uint8_t v___x_2999_; 
v___x_2991_ = lean_st_ref_take(v_slot_2988_);
v_value_2996_ = lean_ctor_get(v___x_2991_, 0);
v_pos_2997_ = lean_ctor_get(v___x_2991_, 1);
v_remaining_2998_ = lean_ctor_get(v___x_2991_, 2);
v___x_2999_ = lean_nat_dec_eq(v_next_2989_, v_pos_2997_);
if (v___x_2999_ == 0)
{
lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; 
v___x_3000_ = lean_box(0);
v___x_3001_ = lean_box(v___x_2999_);
v___x_3002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3002_, 0, v___x_3000_);
lean_ctor_set(v___x_3002_, 1, v___x_3001_);
v_fst_2993_ = v___x_3002_;
v_snd_2994_ = v___x_2991_;
goto v___jp_2992_;
}
else
{
lean_object* v___x_3004_; uint8_t v_isShared_3005_; uint8_t v_isSharedCheck_3021_; 
lean_inc(v_remaining_2998_);
lean_inc(v_pos_2997_);
lean_inc(v_value_2996_);
v_isSharedCheck_3021_ = !lean_is_exclusive(v___x_2991_);
if (v_isSharedCheck_3021_ == 0)
{
lean_object* v_unused_3022_; lean_object* v_unused_3023_; lean_object* v_unused_3024_; 
v_unused_3022_ = lean_ctor_get(v___x_2991_, 2);
lean_dec(v_unused_3022_);
v_unused_3023_ = lean_ctor_get(v___x_2991_, 1);
lean_dec(v_unused_3023_);
v_unused_3024_ = lean_ctor_get(v___x_2991_, 0);
lean_dec(v_unused_3024_);
v___x_3004_ = v___x_2991_;
v_isShared_3005_ = v_isSharedCheck_3021_;
goto v_resetjp_3003_;
}
else
{
lean_dec(v___x_2991_);
v___x_3004_ = lean_box(0);
v_isShared_3005_ = v_isSharedCheck_3021_;
goto v_resetjp_3003_;
}
v_resetjp_3003_:
{
lean_object* v___x_3006_; uint8_t v___x_3007_; 
v___x_3006_ = lean_unsigned_to_nat(1u);
v___x_3007_ = lean_nat_dec_eq(v_remaining_2998_, v___x_3006_);
if (v___x_3007_ == 0)
{
lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3012_; 
v___x_3008_ = lean_box(v___x_3007_);
lean_inc(v_value_2996_);
v___x_3009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3009_, 0, v_value_2996_);
lean_ctor_set(v___x_3009_, 1, v___x_3008_);
v___x_3010_ = lean_nat_sub(v_remaining_2998_, v___x_3006_);
lean_dec(v_remaining_2998_);
if (v_isShared_3005_ == 0)
{
lean_ctor_set(v___x_3004_, 2, v___x_3010_);
v___x_3012_ = v___x_3004_;
goto v_reusejp_3011_;
}
else
{
lean_object* v_reuseFailAlloc_3013_; 
v_reuseFailAlloc_3013_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3013_, 0, v_value_2996_);
lean_ctor_set(v_reuseFailAlloc_3013_, 1, v_pos_2997_);
lean_ctor_set(v_reuseFailAlloc_3013_, 2, v___x_3010_);
v___x_3012_ = v_reuseFailAlloc_3013_;
goto v_reusejp_3011_;
}
v_reusejp_3011_:
{
v_fst_2993_ = v___x_3009_;
v_snd_2994_ = v___x_3012_;
goto v___jp_2992_;
}
}
else
{
lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3019_; 
lean_dec(v_remaining_2998_);
v___x_3014_ = lean_box(v___x_3007_);
v___x_3015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3015_, 0, v_value_2996_);
lean_ctor_set(v___x_3015_, 1, v___x_3014_);
v___x_3016_ = lean_box(0);
v___x_3017_ = lean_unsigned_to_nat(0u);
if (v_isShared_3005_ == 0)
{
lean_ctor_set(v___x_3004_, 2, v___x_3017_);
lean_ctor_set(v___x_3004_, 0, v___x_3016_);
v___x_3019_ = v___x_3004_;
goto v_reusejp_3018_;
}
else
{
lean_object* v_reuseFailAlloc_3020_; 
v_reuseFailAlloc_3020_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3020_, 0, v___x_3016_);
lean_ctor_set(v_reuseFailAlloc_3020_, 1, v_pos_2997_);
lean_ctor_set(v_reuseFailAlloc_3020_, 2, v___x_3017_);
v___x_3019_ = v_reuseFailAlloc_3020_;
goto v_reusejp_3018_;
}
v_reusejp_3018_:
{
v_fst_2993_ = v___x_3015_;
v_snd_2994_ = v___x_3019_;
goto v___jp_2992_;
}
}
}
}
v___jp_2992_:
{
lean_object* v___x_2995_; 
v___x_2995_ = lean_st_ref_put(v_slot_2988_, v_snd_2994_);
return v_fst_2993_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_slot_3025_, lean_object* v_next_3026_, lean_object* v___y_3027_){
_start:
{
lean_object* v_res_3028_; 
v_res_3028_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__3___redArg(v_slot_3025_, v_next_3026_);
lean_dec(v_next_3026_);
lean_dec(v_slot_3025_);
return v_res_3028_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__1___redArg(lean_object* v_a_3029_){
_start:
{
lean_object* v___x_3031_; lean_object* v_size_3032_; lean_object* v___x_3033_; uint8_t v___x_3034_; 
v___x_3031_ = lean_st_ref_get(v_a_3029_);
v_size_3032_ = lean_ctor_get(v___x_3031_, 3);
lean_inc(v_size_3032_);
lean_dec(v___x_3031_);
v___x_3033_ = lean_unsigned_to_nat(0u);
v___x_3034_ = lean_nat_dec_eq(v_size_3032_, v___x_3033_);
lean_dec(v_size_3032_);
return v___x_3034_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_a_3035_, lean_object* v___y_3036_){
_start:
{
uint8_t v_res_3037_; lean_object* v_r_3038_; 
v_res_3037_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__1___redArg(v_a_3035_);
lean_dec(v_a_3035_);
v_r_3038_ = lean_box(v_res_3037_);
return v_r_3038_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__2___redArg(lean_object* v_place_3039_, lean_object* v_a_3040_){
_start:
{
lean_object* v___x_3042_; lean_object* v_capacity_3043_; lean_object* v_buffer_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; 
v___x_3042_ = lean_st_ref_get(v_a_3040_);
v_capacity_3043_ = lean_ctor_get(v___x_3042_, 2);
lean_inc(v_capacity_3043_);
v_buffer_3044_ = lean_ctor_get(v___x_3042_, 4);
lean_inc_ref(v_buffer_3044_);
lean_dec(v___x_3042_);
v___x_3045_ = lean_nat_mod(v_place_3039_, v_capacity_3043_);
lean_dec(v_capacity_3043_);
v___x_3046_ = lean_array_fget(v_buffer_3044_, v___x_3045_);
lean_dec(v___x_3045_);
lean_dec_ref(v_buffer_3044_);
return v___x_3046_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_place_3047_, lean_object* v_a_3048_, lean_object* v___y_3049_){
_start:
{
lean_object* v_res_3050_; 
v_res_3050_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__2___redArg(v_place_3047_, v_a_3048_);
lean_dec(v_a_3048_);
lean_dec(v_place_3047_);
return v_res_3050_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0___redArg(lean_object* v_next_3051_, lean_object* v_a_3052_){
_start:
{
lean_object* v___x_3054_; uint8_t v___x_3055_; 
v___x_3054_ = lean_st_ref_get(v_a_3052_);
v___x_3055_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__1___redArg(v_a_3052_);
if (v___x_3055_ == 0)
{
lean_object* v_capacity_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v_fst_3060_; lean_object* v_snd_3061_; lean_object* v_st_3063_; lean_object* v___y_3064_; 
v_capacity_3056_ = lean_ctor_get(v___x_3054_, 2);
v___x_3057_ = lean_nat_mod(v_next_3051_, v_capacity_3056_);
v___x_3058_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__2___redArg(v___x_3057_, v_a_3052_);
lean_dec(v___x_3057_);
v___x_3059_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__3___redArg(v___x_3058_, v_next_3051_);
lean_dec(v___x_3058_);
v_fst_3060_ = lean_ctor_get(v___x_3059_, 0);
lean_inc(v_fst_3060_);
v_snd_3061_ = lean_ctor_get(v___x_3059_, 1);
lean_inc(v_snd_3061_);
lean_dec_ref(v___x_3059_);
if (lean_obj_tag(v_fst_3060_) == 1)
{
uint8_t v___x_3066_; 
v___x_3066_ = lean_unbox(v_snd_3061_);
if (v___x_3066_ == 0)
{
lean_dec(v_snd_3061_);
v_st_3063_ = v___x_3054_;
v___y_3064_ = v_a_3052_;
goto v___jp_3062_;
}
else
{
lean_object* v___x_3067_; lean_object* v_producers_3068_; lean_object* v_waiters_3069_; lean_object* v_capacity_3070_; lean_object* v_size_3071_; lean_object* v_buffer_3072_; lean_object* v_write_3073_; lean_object* v_read_3074_; lean_object* v_receivers_3075_; lean_object* v_nextId_3076_; uint8_t v_closed_3077_; lean_object* v_pos_3078_; lean_object* v___x_3079_; 
v___x_3067_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_dequeue___redArg(v___x_3054_);
v_producers_3068_ = lean_ctor_get(v___x_3067_, 0);
v_waiters_3069_ = lean_ctor_get(v___x_3067_, 1);
v_capacity_3070_ = lean_ctor_get(v___x_3067_, 2);
v_size_3071_ = lean_ctor_get(v___x_3067_, 3);
v_buffer_3072_ = lean_ctor_get(v___x_3067_, 4);
v_write_3073_ = lean_ctor_get(v___x_3067_, 5);
v_read_3074_ = lean_ctor_get(v___x_3067_, 6);
v_receivers_3075_ = lean_ctor_get(v___x_3067_, 7);
v_nextId_3076_ = lean_ctor_get(v___x_3067_, 8);
v_closed_3077_ = lean_ctor_get_uint8(v___x_3067_, sizeof(void*)*10);
v_pos_3078_ = lean_ctor_get(v___x_3067_, 9);
lean_inc_ref(v_producers_3068_);
v___x_3079_ = l_Std_Queue_dequeue_x3f___redArg(v_producers_3068_);
if (lean_obj_tag(v___x_3079_) == 1)
{
lean_object* v___x_3081_; uint8_t v_isShared_3082_; uint8_t v_isSharedCheck_3090_; 
lean_inc(v_pos_3078_);
lean_inc(v_nextId_3076_);
lean_inc(v_receivers_3075_);
lean_inc(v_read_3074_);
lean_inc(v_write_3073_);
lean_inc_ref(v_buffer_3072_);
lean_inc(v_size_3071_);
lean_inc(v_capacity_3070_);
lean_inc_ref(v_waiters_3069_);
v_isSharedCheck_3090_ = !lean_is_exclusive(v___x_3067_);
if (v_isSharedCheck_3090_ == 0)
{
lean_object* v_unused_3091_; lean_object* v_unused_3092_; lean_object* v_unused_3093_; lean_object* v_unused_3094_; lean_object* v_unused_3095_; lean_object* v_unused_3096_; lean_object* v_unused_3097_; lean_object* v_unused_3098_; lean_object* v_unused_3099_; lean_object* v_unused_3100_; 
v_unused_3091_ = lean_ctor_get(v___x_3067_, 9);
lean_dec(v_unused_3091_);
v_unused_3092_ = lean_ctor_get(v___x_3067_, 8);
lean_dec(v_unused_3092_);
v_unused_3093_ = lean_ctor_get(v___x_3067_, 7);
lean_dec(v_unused_3093_);
v_unused_3094_ = lean_ctor_get(v___x_3067_, 6);
lean_dec(v_unused_3094_);
v_unused_3095_ = lean_ctor_get(v___x_3067_, 5);
lean_dec(v_unused_3095_);
v_unused_3096_ = lean_ctor_get(v___x_3067_, 4);
lean_dec(v_unused_3096_);
v_unused_3097_ = lean_ctor_get(v___x_3067_, 3);
lean_dec(v_unused_3097_);
v_unused_3098_ = lean_ctor_get(v___x_3067_, 2);
lean_dec(v_unused_3098_);
v_unused_3099_ = lean_ctor_get(v___x_3067_, 1);
lean_dec(v_unused_3099_);
v_unused_3100_ = lean_ctor_get(v___x_3067_, 0);
lean_dec(v_unused_3100_);
v___x_3081_ = v___x_3067_;
v_isShared_3082_ = v_isSharedCheck_3090_;
goto v_resetjp_3080_;
}
else
{
lean_dec(v___x_3067_);
v___x_3081_ = lean_box(0);
v_isShared_3082_ = v_isSharedCheck_3090_;
goto v_resetjp_3080_;
}
v_resetjp_3080_:
{
lean_object* v_val_3083_; lean_object* v_fst_3084_; lean_object* v_snd_3085_; lean_object* v___x_3086_; lean_object* v___x_3088_; 
v_val_3083_ = lean_ctor_get(v___x_3079_, 0);
lean_inc(v_val_3083_);
lean_dec_ref_known(v___x_3079_, 1);
v_fst_3084_ = lean_ctor_get(v_val_3083_, 0);
lean_inc(v_fst_3084_);
v_snd_3085_ = lean_ctor_get(v_val_3083_, 1);
lean_inc(v_snd_3085_);
lean_dec(v_val_3083_);
v___x_3086_ = lean_io_promise_resolve(v_snd_3061_, v_fst_3084_);
lean_dec(v_fst_3084_);
if (v_isShared_3082_ == 0)
{
lean_ctor_set(v___x_3081_, 0, v_snd_3085_);
v___x_3088_ = v___x_3081_;
goto v_reusejp_3087_;
}
else
{
lean_object* v_reuseFailAlloc_3089_; 
v_reuseFailAlloc_3089_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_3089_, 0, v_snd_3085_);
lean_ctor_set(v_reuseFailAlloc_3089_, 1, v_waiters_3069_);
lean_ctor_set(v_reuseFailAlloc_3089_, 2, v_capacity_3070_);
lean_ctor_set(v_reuseFailAlloc_3089_, 3, v_size_3071_);
lean_ctor_set(v_reuseFailAlloc_3089_, 4, v_buffer_3072_);
lean_ctor_set(v_reuseFailAlloc_3089_, 5, v_write_3073_);
lean_ctor_set(v_reuseFailAlloc_3089_, 6, v_read_3074_);
lean_ctor_set(v_reuseFailAlloc_3089_, 7, v_receivers_3075_);
lean_ctor_set(v_reuseFailAlloc_3089_, 8, v_nextId_3076_);
lean_ctor_set(v_reuseFailAlloc_3089_, 9, v_pos_3078_);
lean_ctor_set_uint8(v_reuseFailAlloc_3089_, sizeof(void*)*10, v_closed_3077_);
v___x_3088_ = v_reuseFailAlloc_3089_;
goto v_reusejp_3087_;
}
v_reusejp_3087_:
{
v_st_3063_ = v___x_3088_;
v___y_3064_ = v_a_3052_;
goto v___jp_3062_;
}
}
}
else
{
lean_dec(v___x_3079_);
lean_dec(v_snd_3061_);
v_st_3063_ = v___x_3067_;
v___y_3064_ = v_a_3052_;
goto v___jp_3062_;
}
}
}
else
{
lean_object* v___x_3101_; 
lean_dec(v_snd_3061_);
lean_dec(v_fst_3060_);
lean_dec(v___x_3054_);
v___x_3101_ = lean_box(0);
return v___x_3101_;
}
v___jp_3062_:
{
lean_object* v___x_3065_; 
v___x_3065_ = lean_st_ref_swap(v___y_3064_, v_st_3063_);
lean_dec(v___x_3065_);
return v_fst_3060_;
}
}
else
{
lean_object* v___x_3102_; 
lean_dec(v___x_3054_);
v___x_3102_ = lean_box(0);
return v___x_3102_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0___redArg___boxed(lean_object* v_next_3103_, lean_object* v_a_3104_, lean_object* v___y_3105_){
_start:
{
lean_object* v_res_3106_; 
v_res_3106_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0___redArg(v_next_3103_, v_a_3104_);
lean_dec(v_a_3104_);
lean_dec(v_next_3103_);
return v_res_3106_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0___redArg(lean_object* v_receiverId_3107_, lean_object* v_a_3108_){
_start:
{
lean_object* v___x_3110_; lean_object* v_receivers_3111_; lean_object* v___x_3112_; 
v___x_3110_ = lean_st_ref_get(v_a_3108_);
v_receivers_3111_ = lean_ctor_get(v___x_3110_, 7);
lean_inc(v_receivers_3111_);
lean_dec(v___x_3110_);
v___x_3112_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___redArg(v_receivers_3111_, v_receiverId_3107_);
if (lean_obj_tag(v___x_3112_) == 1)
{
lean_object* v_val_3113_; lean_object* v___x_3114_; 
v_val_3113_ = lean_ctor_get(v___x_3112_, 0);
lean_inc(v_val_3113_);
lean_dec_ref_known(v___x_3112_, 1);
v___x_3114_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0___redArg(v_val_3113_, v_a_3108_);
lean_dec(v_val_3113_);
if (lean_obj_tag(v___x_3114_) == 1)
{
lean_object* v___x_3115_; lean_object* v_producers_3116_; lean_object* v_waiters_3117_; lean_object* v_capacity_3118_; lean_object* v_size_3119_; lean_object* v_buffer_3120_; lean_object* v_write_3121_; lean_object* v_read_3122_; lean_object* v_nextId_3123_; uint8_t v_closed_3124_; lean_object* v_pos_3125_; lean_object* v___x_3127_; uint8_t v_isShared_3128_; uint8_t v_isSharedCheck_3134_; 
v___x_3115_ = lean_st_ref_take(v_a_3108_);
v_producers_3116_ = lean_ctor_get(v___x_3115_, 0);
v_waiters_3117_ = lean_ctor_get(v___x_3115_, 1);
v_capacity_3118_ = lean_ctor_get(v___x_3115_, 2);
v_size_3119_ = lean_ctor_get(v___x_3115_, 3);
v_buffer_3120_ = lean_ctor_get(v___x_3115_, 4);
v_write_3121_ = lean_ctor_get(v___x_3115_, 5);
v_read_3122_ = lean_ctor_get(v___x_3115_, 6);
v_nextId_3123_ = lean_ctor_get(v___x_3115_, 8);
v_closed_3124_ = lean_ctor_get_uint8(v___x_3115_, sizeof(void*)*10);
v_pos_3125_ = lean_ctor_get(v___x_3115_, 9);
v_isSharedCheck_3134_ = !lean_is_exclusive(v___x_3115_);
if (v_isSharedCheck_3134_ == 0)
{
lean_object* v_unused_3135_; 
v_unused_3135_ = lean_ctor_get(v___x_3115_, 7);
lean_dec(v_unused_3135_);
v___x_3127_ = v___x_3115_;
v_isShared_3128_ = v_isSharedCheck_3134_;
goto v_resetjp_3126_;
}
else
{
lean_inc(v_pos_3125_);
lean_inc(v_nextId_3123_);
lean_inc(v_read_3122_);
lean_inc(v_write_3121_);
lean_inc(v_buffer_3120_);
lean_inc(v_size_3119_);
lean_inc(v_capacity_3118_);
lean_inc(v_waiters_3117_);
lean_inc(v_producers_3116_);
lean_dec(v___x_3115_);
v___x_3127_ = lean_box(0);
v_isShared_3128_ = v_isSharedCheck_3134_;
goto v_resetjp_3126_;
}
v_resetjp_3126_:
{
lean_object* v___x_3129_; lean_object* v___x_3131_; 
v___x_3129_ = l_Std_DTreeMap_Internal_Impl_Const_modify___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__1(v_receiverId_3107_, v_receivers_3111_);
if (v_isShared_3128_ == 0)
{
lean_ctor_set(v___x_3127_, 7, v___x_3129_);
v___x_3131_ = v___x_3127_;
goto v_reusejp_3130_;
}
else
{
lean_object* v_reuseFailAlloc_3133_; 
v_reuseFailAlloc_3133_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_3133_, 0, v_producers_3116_);
lean_ctor_set(v_reuseFailAlloc_3133_, 1, v_waiters_3117_);
lean_ctor_set(v_reuseFailAlloc_3133_, 2, v_capacity_3118_);
lean_ctor_set(v_reuseFailAlloc_3133_, 3, v_size_3119_);
lean_ctor_set(v_reuseFailAlloc_3133_, 4, v_buffer_3120_);
lean_ctor_set(v_reuseFailAlloc_3133_, 5, v_write_3121_);
lean_ctor_set(v_reuseFailAlloc_3133_, 6, v_read_3122_);
lean_ctor_set(v_reuseFailAlloc_3133_, 7, v___x_3129_);
lean_ctor_set(v_reuseFailAlloc_3133_, 8, v_nextId_3123_);
lean_ctor_set(v_reuseFailAlloc_3133_, 9, v_pos_3125_);
lean_ctor_set_uint8(v_reuseFailAlloc_3133_, sizeof(void*)*10, v_closed_3124_);
v___x_3131_ = v_reuseFailAlloc_3133_;
goto v_reusejp_3130_;
}
v_reusejp_3130_:
{
lean_object* v___x_3132_; 
v___x_3132_ = lean_st_ref_put(v_a_3108_, v___x_3131_);
return v___x_3114_;
}
}
}
else
{
lean_object* v___x_3136_; 
lean_dec(v___x_3114_);
lean_dec(v_receivers_3111_);
lean_dec(v_receiverId_3107_);
v___x_3136_ = lean_box(0);
return v___x_3136_;
}
}
else
{
lean_object* v___x_3137_; 
lean_dec(v___x_3112_);
lean_dec(v_receivers_3111_);
lean_dec(v_receiverId_3107_);
v___x_3137_ = lean_box(0);
return v___x_3137_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0___redArg___boxed(lean_object* v_receiverId_3138_, lean_object* v_a_3139_, lean_object* v___y_3140_){
_start:
{
lean_object* v_res_3141_; 
v_res_3141_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0___redArg(v_receiverId_3138_, v_a_3139_);
lean_dec(v_a_3139_);
return v_res_3141_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg___lam__0(lean_object* v_id_3142_, lean_object* v___y_3143_){
_start:
{
lean_object* v___x_3145_; 
v___x_3145_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0___redArg(v_id_3142_, v___y_3143_);
return v___x_3145_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg___lam__0___boxed(lean_object* v_id_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_){
_start:
{
lean_object* v_res_3149_; 
v_res_3149_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg___lam__0(v_id_3146_, v___y_3147_);
lean_dec(v___y_3147_);
return v_res_3149_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg(lean_object* v_ch_3150_){
_start:
{
lean_object* v_state_3152_; lean_object* v_id_3153_; lean_object* v___f_3154_; lean_object* v___x_3155_; 
v_state_3152_ = lean_ctor_get(v_ch_3150_, 0);
lean_inc_ref(v_state_3152_);
v_id_3153_ = lean_ctor_get(v_ch_3150_, 1);
lean_inc(v_id_3153_);
lean_dec_ref(v_ch_3150_);
v___f_3154_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3154_, 0, v_id_3153_);
v___x_3155_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0___redArg(v_state_3152_, v___f_3154_);
return v___x_3155_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg___boxed(lean_object* v_ch_3156_, lean_object* v_a_3157_){
_start:
{
lean_object* v_res_3158_; 
v_res_3158_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg(v_ch_3156_);
return v_res_3158_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv(lean_object* v_00_u03b1_3159_, lean_object* v_ch_3160_){
_start:
{
lean_object* v___x_3162_; 
v___x_3162_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg(v_ch_3160_);
return v___x_3162_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___boxed(lean_object* v_00_u03b1_3163_, lean_object* v_ch_3164_, lean_object* v_a_3165_){
_start:
{
lean_object* v_res_3166_; 
v_res_3166_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv(v_00_u03b1_3163_, v_ch_3164_);
return v_res_3166_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0(lean_object* v_00_u03b1_3167_, lean_object* v_receiverId_3168_, lean_object* v_a_3169_){
_start:
{
lean_object* v___x_3171_; 
v___x_3171_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0___redArg(v_receiverId_3168_, v_a_3169_);
return v___x_3171_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0___boxed(lean_object* v_00_u03b1_3172_, lean_object* v_receiverId_3173_, lean_object* v_a_3174_, lean_object* v___y_3175_){
_start:
{
lean_object* v_res_3176_; 
v_res_3176_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0(v_00_u03b1_3172_, v_receiverId_3173_, v_a_3174_);
lean_dec(v_a_3174_);
return v_res_3176_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_3177_, lean_object* v_a_3178_){
_start:
{
uint8_t v___x_3180_; 
v___x_3180_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__1___redArg(v_a_3178_);
return v___x_3180_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_3181_, lean_object* v_a_3182_, lean_object* v___y_3183_){
_start:
{
uint8_t v_res_3184_; lean_object* v_r_3185_; 
v_res_3184_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__1(v_00_u03b1_3181_, v_a_3182_);
lean_dec(v_a_3182_);
v_r_3185_ = lean_box(v_res_3184_);
return v_r_3185_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_3186_, lean_object* v_place_3187_, lean_object* v_a_3188_){
_start:
{
lean_object* v___x_3190_; 
v___x_3190_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__2___redArg(v_place_3187_, v_a_3188_);
return v___x_3190_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b1_3191_, lean_object* v_place_3192_, lean_object* v_a_3193_, lean_object* v___y_3194_){
_start:
{
lean_object* v_res_3195_; 
v_res_3195_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__2(v_00_u03b1_3191_, v_place_3192_, v_a_3193_);
lean_dec(v_a_3193_);
lean_dec(v_place_3192_);
return v_res_3195_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__3(lean_object* v_00_u03b1_3196_, lean_object* v_slot_3197_, lean_object* v_next_3198_, lean_object* v_a_3199_){
_start:
{
lean_object* v___x_3201_; 
v___x_3201_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__3___redArg(v_slot_3197_, v_next_3198_);
return v___x_3201_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b1_3202_, lean_object* v_slot_3203_, lean_object* v_next_3204_, lean_object* v_a_3205_, lean_object* v___y_3206_){
_start:
{
lean_object* v_res_3207_; 
v_res_3207_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__3(v_00_u03b1_3202_, v_slot_3203_, v_next_3204_, v_a_3205_);
lean_dec(v_a_3205_);
lean_dec(v_next_3204_);
lean_dec(v_slot_3203_);
return v_res_3207_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0(lean_object* v_00_u03b1_3208_, lean_object* v_next_3209_, lean_object* v_a_3210_){
_start:
{
lean_object* v___x_3212_; 
v___x_3212_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0___redArg(v_next_3209_, v_a_3210_);
return v___x_3212_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0___boxed(lean_object* v_00_u03b1_3213_, lean_object* v_next_3214_, lean_object* v_a_3215_, lean_object* v___y_3216_){
_start:
{
lean_object* v_res_3217_; 
v_res_3217_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0(v_00_u03b1_3213_, v_next_3214_, v_a_3215_);
lean_dec(v_a_3215_);
lean_dec(v_next_3214_);
return v_res_3217_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv_spec__0___redArg(lean_object* v_k_3218_, lean_object* v_t_3219_){
_start:
{
if (lean_obj_tag(v_t_3219_) == 0)
{
lean_object* v_k_3220_; lean_object* v_l_3221_; lean_object* v_r_3222_; uint8_t v___x_3223_; 
v_k_3220_ = lean_ctor_get(v_t_3219_, 1);
v_l_3221_ = lean_ctor_get(v_t_3219_, 3);
v_r_3222_ = lean_ctor_get(v_t_3219_, 4);
v___x_3223_ = lean_nat_dec_lt(v_k_3218_, v_k_3220_);
if (v___x_3223_ == 0)
{
uint8_t v___x_3224_; 
v___x_3224_ = lean_nat_dec_eq(v_k_3218_, v_k_3220_);
if (v___x_3224_ == 0)
{
v_t_3219_ = v_r_3222_;
goto _start;
}
else
{
return v___x_3224_;
}
}
else
{
v_t_3219_ = v_l_3221_;
goto _start;
}
}
else
{
uint8_t v___x_3227_; 
v___x_3227_ = 0;
return v___x_3227_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv_spec__0___redArg___boxed(lean_object* v_k_3228_, lean_object* v_t_3229_){
_start:
{
uint8_t v_res_3230_; lean_object* v_r_3231_; 
v_res_3230_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv_spec__0___redArg(v_k_3228_, v_t_3229_);
lean_dec(v_t_3229_);
lean_dec(v_k_3228_);
v_r_3231_ = lean_box(v_res_3230_);
return v_r_3231_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___closed__0(void){
_start:
{
lean_object* v___x_3232_; lean_object* v___x_3233_; 
v___x_3232_ = lean_box(0);
v___x_3233_ = lean_task_pure(v___x_3232_);
return v___x_3233_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1(lean_object* v_id_3234_, lean_object* v___f_3235_, lean_object* v___y_3236_){
_start:
{
lean_object* v___x_3240_; lean_object* v_receivers_3241_; uint8_t v___x_3242_; 
v___x_3240_ = lean_st_ref_get(v___y_3236_);
v_receivers_3241_ = lean_ctor_get(v___x_3240_, 7);
lean_inc(v_receivers_3241_);
lean_dec(v___x_3240_);
v___x_3242_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv_spec__0___redArg(v_id_3234_, v_receivers_3241_);
lean_dec(v_receivers_3241_);
if (v___x_3242_ == 0)
{
lean_dec_ref(v___f_3235_);
lean_dec(v_id_3234_);
goto v___jp_3238_;
}
else
{
lean_object* v___x_3243_; 
v___x_3243_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0___redArg(v_id_3234_, v___y_3236_);
if (lean_obj_tag(v___x_3243_) == 1)
{
lean_object* v___x_3244_; 
lean_dec_ref(v___f_3235_);
v___x_3244_ = lean_task_pure(v___x_3243_);
return v___x_3244_;
}
else
{
lean_object* v___x_3245_; uint8_t v_closed_3246_; 
lean_dec(v___x_3243_);
v___x_3245_ = lean_st_ref_get(v___y_3236_);
v_closed_3246_ = lean_ctor_get_uint8(v___x_3245_, sizeof(void*)*10);
lean_dec(v___x_3245_);
if (v_closed_3246_ == 0)
{
lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v_producers_3249_; lean_object* v_waiters_3250_; lean_object* v_capacity_3251_; lean_object* v_size_3252_; lean_object* v_buffer_3253_; lean_object* v_write_3254_; lean_object* v_read_3255_; lean_object* v_receivers_3256_; lean_object* v_nextId_3257_; uint8_t v_closed_3258_; lean_object* v_pos_3259_; lean_object* v___x_3261_; uint8_t v_isShared_3262_; uint8_t v_isSharedCheck_3273_; 
v___x_3247_ = lean_io_promise_new();
v___x_3248_ = lean_st_ref_take(v___y_3236_);
v_producers_3249_ = lean_ctor_get(v___x_3248_, 0);
v_waiters_3250_ = lean_ctor_get(v___x_3248_, 1);
v_capacity_3251_ = lean_ctor_get(v___x_3248_, 2);
v_size_3252_ = lean_ctor_get(v___x_3248_, 3);
v_buffer_3253_ = lean_ctor_get(v___x_3248_, 4);
v_write_3254_ = lean_ctor_get(v___x_3248_, 5);
v_read_3255_ = lean_ctor_get(v___x_3248_, 6);
v_receivers_3256_ = lean_ctor_get(v___x_3248_, 7);
v_nextId_3257_ = lean_ctor_get(v___x_3248_, 8);
v_closed_3258_ = lean_ctor_get_uint8(v___x_3248_, sizeof(void*)*10);
v_pos_3259_ = lean_ctor_get(v___x_3248_, 9);
v_isSharedCheck_3273_ = !lean_is_exclusive(v___x_3248_);
if (v_isSharedCheck_3273_ == 0)
{
v___x_3261_ = v___x_3248_;
v_isShared_3262_ = v_isSharedCheck_3273_;
goto v_resetjp_3260_;
}
else
{
lean_inc(v_pos_3259_);
lean_inc(v_nextId_3257_);
lean_inc(v_receivers_3256_);
lean_inc(v_read_3255_);
lean_inc(v_write_3254_);
lean_inc(v_buffer_3253_);
lean_inc(v_size_3252_);
lean_inc(v_capacity_3251_);
lean_inc(v_waiters_3250_);
lean_inc(v_producers_3249_);
lean_dec(v___x_3248_);
v___x_3261_ = lean_box(0);
v_isShared_3262_ = v_isSharedCheck_3273_;
goto v_resetjp_3260_;
}
v_resetjp_3260_:
{
lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3267_; 
v___x_3263_ = lean_box(0);
lean_inc(v___x_3247_);
v___x_3264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3264_, 0, v___x_3247_);
lean_ctor_set(v___x_3264_, 1, v___x_3263_);
v___x_3265_ = l_Std_Queue_enqueue___redArg(v___x_3264_, v_waiters_3250_);
if (v_isShared_3262_ == 0)
{
lean_ctor_set(v___x_3261_, 1, v___x_3265_);
v___x_3267_ = v___x_3261_;
goto v_reusejp_3266_;
}
else
{
lean_object* v_reuseFailAlloc_3272_; 
v_reuseFailAlloc_3272_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_3272_, 0, v_producers_3249_);
lean_ctor_set(v_reuseFailAlloc_3272_, 1, v___x_3265_);
lean_ctor_set(v_reuseFailAlloc_3272_, 2, v_capacity_3251_);
lean_ctor_set(v_reuseFailAlloc_3272_, 3, v_size_3252_);
lean_ctor_set(v_reuseFailAlloc_3272_, 4, v_buffer_3253_);
lean_ctor_set(v_reuseFailAlloc_3272_, 5, v_write_3254_);
lean_ctor_set(v_reuseFailAlloc_3272_, 6, v_read_3255_);
lean_ctor_set(v_reuseFailAlloc_3272_, 7, v_receivers_3256_);
lean_ctor_set(v_reuseFailAlloc_3272_, 8, v_nextId_3257_);
lean_ctor_set(v_reuseFailAlloc_3272_, 9, v_pos_3259_);
lean_ctor_set_uint8(v_reuseFailAlloc_3272_, sizeof(void*)*10, v_closed_3258_);
v___x_3267_ = v_reuseFailAlloc_3272_;
goto v_reusejp_3266_;
}
v_reusejp_3266_:
{
lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; 
v___x_3268_ = lean_st_ref_put(v___y_3236_, v___x_3267_);
v___x_3269_ = lean_io_promise_result_opt(v___x_3247_);
lean_dec(v___x_3247_);
v___x_3270_ = lean_unsigned_to_nat(0u);
v___x_3271_ = lean_io_bind_task(v___x_3269_, v___f_3235_, v___x_3270_, v_closed_3246_);
return v___x_3271_;
}
}
}
else
{
lean_dec_ref(v___f_3235_);
goto v___jp_3238_;
}
}
}
v___jp_3238_:
{
lean_object* v___x_3239_; 
v___x_3239_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___closed__0, &l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___closed__0_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___closed__0);
return v___x_3239_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___boxed(lean_object* v_id_3274_, lean_object* v___f_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_){
_start:
{
lean_object* v_res_3278_; 
v_res_3278_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1(v_id_3274_, v___f_3275_, v___y_3276_);
lean_dec(v___y_3276_);
return v_res_3278_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__0(lean_object* v_ch_3279_, lean_object* v_res_3280_){
_start:
{
if (lean_obj_tag(v_res_3280_) == 0)
{
lean_dec_ref(v_ch_3279_);
goto v___jp_3282_;
}
else
{
lean_object* v_val_3284_; uint8_t v___x_3285_; 
v_val_3284_ = lean_ctor_get(v_res_3280_, 0);
v___x_3285_ = lean_unbox(v_val_3284_);
if (v___x_3285_ == 0)
{
lean_dec_ref(v_ch_3279_);
goto v___jp_3282_;
}
else
{
lean_object* v___x_3286_; 
v___x_3286_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg(v_ch_3279_);
return v___x_3286_;
}
}
v___jp_3282_:
{
lean_object* v___x_3283_; 
v___x_3283_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___closed__0, &l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___closed__0_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___closed__0);
return v___x_3283_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__0___boxed(lean_object* v_ch_3287_, lean_object* v_res_3288_, lean_object* v___y_3289_){
_start:
{
lean_object* v_res_3290_; 
v_res_3290_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__0(v_ch_3287_, v_res_3288_);
lean_dec(v_res_3288_);
return v_res_3290_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg(lean_object* v_ch_3291_){
_start:
{
lean_object* v_state_3293_; lean_object* v_id_3294_; lean_object* v___f_3295_; lean_object* v___f_3296_; lean_object* v___x_3297_; 
v_state_3293_ = lean_ctor_get(v_ch_3291_, 0);
lean_inc_ref(v_state_3293_);
v_id_3294_ = lean_ctor_get(v_ch_3291_, 1);
lean_inc(v_id_3294_);
v___f_3295_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3295_, 0, v_ch_3291_);
v___f_3296_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_3296_, 0, v_id_3294_);
lean_closure_set(v___f_3296_, 1, v___f_3295_);
v___x_3297_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0___redArg(v_state_3293_, v___f_3296_);
return v___x_3297_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___boxed(lean_object* v_ch_3298_, lean_object* v_a_3299_){
_start:
{
lean_object* v_res_3300_; 
v_res_3300_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg(v_ch_3298_);
return v_res_3300_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv(lean_object* v_00_u03b1_3301_, lean_object* v_ch_3302_){
_start:
{
lean_object* v___x_3304_; 
v___x_3304_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg(v_ch_3302_);
return v___x_3304_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___boxed(lean_object* v_00_u03b1_3305_, lean_object* v_ch_3306_, lean_object* v_a_3307_){
_start:
{
lean_object* v_res_3308_; 
v_res_3308_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv(v_00_u03b1_3305_, v_ch_3306_);
return v_res_3308_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv_spec__0(lean_object* v_00_u03b2_3309_, lean_object* v_k_3310_, lean_object* v_t_3311_){
_start:
{
uint8_t v___x_3312_; 
v___x_3312_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv_spec__0___redArg(v_k_3310_, v_t_3311_);
return v___x_3312_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv_spec__0___boxed(lean_object* v_00_u03b2_3313_, lean_object* v_k_3314_, lean_object* v_t_3315_){
_start:
{
uint8_t v_res_3316_; lean_object* v_r_3317_; 
v_res_3316_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv_spec__0(v_00_u03b2_3313_, v_k_3314_, v_t_3315_);
lean_dec(v_t_3315_);
lean_dec(v_k_3314_);
v_r_3317_ = lean_box(v_res_3316_);
return v_r_3317_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3318_; lean_object* v___x_3319_; 
v___x_3318_ = lean_box(0);
v___x_3319_ = lean_task_pure(v___x_3318_);
return v___x_3319_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___lam__0(lean_object* v_f_3320_, lean_object* v_ch_3321_, lean_object* v_prio_3322_, lean_object* v_x_3323_){
_start:
{
if (lean_obj_tag(v_x_3323_) == 0)
{
lean_object* v___x_3325_; 
lean_dec(v_prio_3322_);
lean_dec_ref(v_ch_3321_);
lean_dec_ref(v_f_3320_);
v___x_3325_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___lam__0___closed__0, &l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___lam__0___closed__0_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___lam__0___closed__0);
return v___x_3325_;
}
else
{
lean_object* v_val_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; 
v_val_3326_ = lean_ctor_get(v_x_3323_, 0);
lean_inc(v_val_3326_);
lean_dec_ref_known(v_x_3323_, 1);
lean_inc_ref(v_f_3320_);
v___x_3327_ = lean_apply_2(v_f_3320_, v_val_3326_, lean_box(0));
v___x_3328_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg(v_f_3320_, v_ch_3321_, v_prio_3322_);
return v___x_3328_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___lam__0___boxed(lean_object* v_f_3329_, lean_object* v_ch_3330_, lean_object* v_prio_3331_, lean_object* v_x_3332_, lean_object* v___y_3333_){
_start:
{
lean_object* v_res_3334_; 
v_res_3334_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___lam__0(v_f_3329_, v_ch_3330_, v_prio_3331_, v_x_3332_);
return v_res_3334_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg(lean_object* v_f_3335_, lean_object* v_ch_3336_, lean_object* v_prio_3337_){
_start:
{
lean_object* v___f_3339_; lean_object* v___x_3340_; uint8_t v___x_3341_; lean_object* v___x_3342_; 
lean_inc(v_prio_3337_);
lean_inc_ref(v_ch_3336_);
v___f_3339_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_3339_, 0, v_f_3335_);
lean_closure_set(v___f_3339_, 1, v_ch_3336_);
lean_closure_set(v___f_3339_, 2, v_prio_3337_);
v___x_3340_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg(v_ch_3336_);
v___x_3341_ = 0;
v___x_3342_ = lean_io_bind_task(v___x_3340_, v___f_3339_, v_prio_3337_, v___x_3341_);
return v___x_3342_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___boxed(lean_object* v_f_3343_, lean_object* v_ch_3344_, lean_object* v_prio_3345_, lean_object* v_a_3346_){
_start:
{
lean_object* v_res_3347_; 
v_res_3347_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg(v_f_3343_, v_ch_3344_, v_prio_3345_);
return v_res_3347_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync(lean_object* v_00_u03b1_3348_, lean_object* v_f_3349_, lean_object* v_ch_3350_, lean_object* v_prio_3351_){
_start:
{
lean_object* v___x_3353_; 
v___x_3353_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg(v_f_3349_, v_ch_3350_, v_prio_3351_);
return v___x_3353_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___boxed(lean_object* v_00_u03b1_3354_, lean_object* v_f_3355_, lean_object* v_ch_3356_, lean_object* v_prio_3357_, lean_object* v_a_3358_){
_start:
{
lean_object* v_res_3359_; 
v_res_3359_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync(v_00_u03b1_3354_, v_f_3355_, v_ch_3356_, v_prio_3357_);
return v_res_3359_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__1(lean_object* v_toApplicative_3360_, lean_object* v_val_3361_, lean_object* v_a_3362_){
_start:
{
lean_object* v_pos_3363_; lean_object* v_toPure_3364_; uint8_t v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; 
v_pos_3363_ = lean_ctor_get(v_a_3362_, 1);
v_toPure_3364_ = lean_ctor_get(v_toApplicative_3360_, 1);
lean_inc(v_toPure_3364_);
lean_dec_ref(v_toApplicative_3360_);
v___x_3365_ = lean_nat_dec_eq(v_pos_3363_, v_val_3361_);
v___x_3366_ = lean_box(v___x_3365_);
v___x_3367_ = lean_apply_2(v_toPure_3364_, lean_box(0), v___x_3366_);
return v___x_3367_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__1___boxed(lean_object* v_toApplicative_3368_, lean_object* v_val_3369_, lean_object* v_a_3370_){
_start:
{
lean_object* v_res_3371_; 
v_res_3371_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__1(v_toApplicative_3368_, v_val_3369_, v_a_3370_);
lean_dec_ref(v_a_3370_);
lean_dec(v_val_3369_);
return v_res_3371_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__0(lean_object* v_inst_3372_, lean_object* v_toBind_3373_, lean_object* v___f_3374_, lean_object* v_a_3375_){
_start:
{
lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; 
v___x_3376_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_3376_, 0, lean_box(0));
lean_closure_set(v___x_3376_, 1, lean_box(0));
lean_closure_set(v___x_3376_, 2, v_a_3375_);
v___x_3377_ = lean_apply_2(v_inst_3372_, lean_box(0), v___x_3376_);
v___x_3378_ = lean_apply_4(v_toBind_3373_, lean_box(0), lean_box(0), v___x_3377_, v___f_3374_);
return v___x_3378_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__2(lean_object* v___f_3379_, lean_object* v_receiverId_3380_, lean_object* v_toApplicative_3381_, lean_object* v_inst_3382_, lean_object* v_toBind_3383_, lean_object* v_inst_3384_, lean_object* v_a_3385_, lean_object* v_a_3386_){
_start:
{
uint8_t v_closed_3387_; 
v_closed_3387_ = lean_ctor_get_uint8(v_a_3386_, sizeof(void*)*10);
if (v_closed_3387_ == 0)
{
lean_object* v_capacity_3388_; lean_object* v_size_3389_; lean_object* v_receivers_3390_; lean_object* v___x_3391_; 
v_capacity_3388_ = lean_ctor_get(v_a_3386_, 2);
lean_inc(v_capacity_3388_);
v_size_3389_ = lean_ctor_get(v_a_3386_, 3);
lean_inc(v_size_3389_);
v_receivers_3390_ = lean_ctor_get(v_a_3386_, 7);
lean_inc(v_receivers_3390_);
lean_dec_ref(v_a_3386_);
v___x_3391_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(v___f_3379_, v_receivers_3390_, v_receiverId_3380_);
if (lean_obj_tag(v___x_3391_) == 1)
{
lean_object* v_val_3392_; lean_object* v___x_3393_; uint8_t v___x_3394_; 
v_val_3392_ = lean_ctor_get(v___x_3391_, 0);
lean_inc(v_val_3392_);
lean_dec_ref_known(v___x_3391_, 1);
v___x_3393_ = lean_unsigned_to_nat(0u);
v___x_3394_ = lean_nat_dec_eq(v_size_3389_, v___x_3393_);
lean_dec(v_size_3389_);
if (v___x_3394_ == 0)
{
lean_object* v___f_3395_; lean_object* v___f_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; 
lean_inc(v_val_3392_);
v___f_3395_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_3395_, 0, v_toApplicative_3381_);
lean_closure_set(v___f_3395_, 1, v_val_3392_);
lean_inc(v_toBind_3383_);
lean_inc(v_inst_3382_);
v___f_3396_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__0), 4, 3);
lean_closure_set(v___f_3396_, 0, v_inst_3382_);
lean_closure_set(v___f_3396_, 1, v_toBind_3383_);
lean_closure_set(v___f_3396_, 2, v___f_3395_);
v___x_3397_ = lean_nat_mod(v_val_3392_, v_capacity_3388_);
lean_dec(v_capacity_3388_);
lean_dec(v_val_3392_);
v___x_3398_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg(v_inst_3384_, v_inst_3382_, v___x_3397_, v_a_3385_);
v___x_3399_ = lean_apply_4(v_toBind_3383_, lean_box(0), lean_box(0), v___x_3398_, v___f_3396_);
return v___x_3399_;
}
else
{
lean_object* v_toPure_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; 
lean_dec(v_val_3392_);
lean_dec(v_capacity_3388_);
lean_dec_ref(v_inst_3384_);
lean_dec(v_toBind_3383_);
lean_dec(v_inst_3382_);
v_toPure_3400_ = lean_ctor_get(v_toApplicative_3381_, 1);
lean_inc(v_toPure_3400_);
lean_dec_ref(v_toApplicative_3381_);
v___x_3401_ = lean_box(v_closed_3387_);
v___x_3402_ = lean_apply_2(v_toPure_3400_, lean_box(0), v___x_3401_);
return v___x_3402_;
}
}
else
{
lean_object* v_toPure_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; 
lean_dec(v___x_3391_);
lean_dec(v_size_3389_);
lean_dec(v_capacity_3388_);
lean_dec_ref(v_inst_3384_);
lean_dec(v_toBind_3383_);
lean_dec(v_inst_3382_);
v_toPure_3403_ = lean_ctor_get(v_toApplicative_3381_, 1);
lean_inc(v_toPure_3403_);
lean_dec_ref(v_toApplicative_3381_);
v___x_3404_ = lean_box(v_closed_3387_);
v___x_3405_ = lean_apply_2(v_toPure_3403_, lean_box(0), v___x_3404_);
return v___x_3405_;
}
}
else
{
lean_object* v_toPure_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; 
lean_dec_ref(v_a_3386_);
lean_dec_ref(v_inst_3384_);
lean_dec(v_toBind_3383_);
lean_dec(v_inst_3382_);
lean_dec(v_receiverId_3380_);
lean_dec_ref(v___f_3379_);
v_toPure_3406_ = lean_ctor_get(v_toApplicative_3381_, 1);
lean_inc(v_toPure_3406_);
lean_dec_ref(v_toApplicative_3381_);
v___x_3407_ = lean_box(v_closed_3387_);
v___x_3408_ = lean_apply_2(v_toPure_3406_, lean_box(0), v___x_3407_);
return v___x_3408_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__2___boxed(lean_object* v___f_3409_, lean_object* v_receiverId_3410_, lean_object* v_toApplicative_3411_, lean_object* v_inst_3412_, lean_object* v_toBind_3413_, lean_object* v_inst_3414_, lean_object* v_a_3415_, lean_object* v_a_3416_){
_start:
{
lean_object* v_res_3417_; 
v_res_3417_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__2(v___f_3409_, v_receiverId_3410_, v_toApplicative_3411_, v_inst_3412_, v_toBind_3413_, v_inst_3414_, v_a_3415_, v_a_3416_);
lean_dec(v_a_3415_);
return v_res_3417_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg(lean_object* v_inst_3418_, lean_object* v_inst_3419_, lean_object* v_receiverId_3420_, lean_object* v_a_3421_){
_start:
{
lean_object* v_toApplicative_3422_; lean_object* v_toBind_3423_; lean_object* v___f_3424_; lean_object* v___f_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; 
v_toApplicative_3422_ = lean_ctor_get(v_inst_3418_, 0);
lean_inc_ref(v_toApplicative_3422_);
v_toBind_3423_ = lean_ctor_get(v_inst_3418_, 1);
lean_inc_n(v_toBind_3423_, 2);
v___f_3424_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___closed__0));
lean_inc_n(v_a_3421_, 2);
lean_inc(v_inst_3419_);
v___f_3425_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_3425_, 0, v___f_3424_);
lean_closure_set(v___f_3425_, 1, v_receiverId_3420_);
lean_closure_set(v___f_3425_, 2, v_toApplicative_3422_);
lean_closure_set(v___f_3425_, 3, v_inst_3419_);
lean_closure_set(v___f_3425_, 4, v_toBind_3423_);
lean_closure_set(v___f_3425_, 5, v_inst_3418_);
lean_closure_set(v___f_3425_, 6, v_a_3421_);
v___x_3426_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_3426_, 0, lean_box(0));
lean_closure_set(v___x_3426_, 1, lean_box(0));
lean_closure_set(v___x_3426_, 2, v_a_3421_);
v___x_3427_ = lean_apply_2(v_inst_3419_, lean_box(0), v___x_3426_);
v___x_3428_ = lean_apply_4(v_toBind_3423_, lean_box(0), lean_box(0), v___x_3427_, v___f_3425_);
return v___x_3428_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___boxed(lean_object* v_inst_3429_, lean_object* v_inst_3430_, lean_object* v_receiverId_3431_, lean_object* v_a_3432_){
_start:
{
lean_object* v_res_3433_; 
v_res_3433_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg(v_inst_3429_, v_inst_3430_, v_receiverId_3431_, v_a_3432_);
lean_dec(v_a_3432_);
return v_res_3433_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27(lean_object* v_m_3434_, lean_object* v_00_u03b1_3435_, lean_object* v_inst_3436_, lean_object* v_inst_3437_, lean_object* v_inst_3438_, lean_object* v_inst_3439_, lean_object* v_receiverId_3440_, lean_object* v_a_3441_){
_start:
{
lean_object* v_toApplicative_3442_; lean_object* v_toBind_3443_; lean_object* v___f_3444_; lean_object* v___f_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; 
v_toApplicative_3442_ = lean_ctor_get(v_inst_3436_, 0);
lean_inc_ref(v_toApplicative_3442_);
v_toBind_3443_ = lean_ctor_get(v_inst_3436_, 1);
lean_inc_n(v_toBind_3443_, 2);
v___f_3444_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___closed__0));
lean_inc_n(v_a_3441_, 2);
lean_inc(v_inst_3437_);
v___f_3445_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_3445_, 0, v___f_3444_);
lean_closure_set(v___f_3445_, 1, v_receiverId_3440_);
lean_closure_set(v___f_3445_, 2, v_toApplicative_3442_);
lean_closure_set(v___f_3445_, 3, v_inst_3437_);
lean_closure_set(v___f_3445_, 4, v_toBind_3443_);
lean_closure_set(v___f_3445_, 5, v_inst_3436_);
lean_closure_set(v___f_3445_, 6, v_a_3441_);
v___x_3446_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_3446_, 0, lean_box(0));
lean_closure_set(v___x_3446_, 1, lean_box(0));
lean_closure_set(v___x_3446_, 2, v_a_3441_);
v___x_3447_ = lean_apply_2(v_inst_3437_, lean_box(0), v___x_3446_);
v___x_3448_ = lean_apply_4(v_toBind_3443_, lean_box(0), lean_box(0), v___x_3447_, v___f_3445_);
return v___x_3448_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___boxed(lean_object* v_m_3449_, lean_object* v_00_u03b1_3450_, lean_object* v_inst_3451_, lean_object* v_inst_3452_, lean_object* v_inst_3453_, lean_object* v_inst_3454_, lean_object* v_receiverId_3455_, lean_object* v_a_3456_){
_start:
{
lean_object* v_res_3457_; 
v_res_3457_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27(v_m_3449_, v_00_u03b1_3450_, v_inst_3451_, v_inst_3452_, v_inst_3453_, v_inst_3454_, v_receiverId_3455_, v_a_3456_);
lean_dec(v_a_3456_);
lean_dec(v_inst_3454_);
lean_dec(v_inst_3453_);
return v_res_3457_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___redArg(lean_object* v_w_3460_, lean_object* v_lose_3461_){
_start:
{
lean_object* v_finished_3463_; lean_object* v_promise_3464_; lean_object* v___x_3465_; uint8_t v___y_3467_; uint8_t v___x_3475_; 
v_finished_3463_ = lean_ctor_get(v_w_3460_, 0);
v_promise_3464_ = lean_ctor_get(v_w_3460_, 1);
v___x_3465_ = lean_st_ref_take(v_finished_3463_);
v___x_3475_ = lean_unbox(v___x_3465_);
lean_dec(v___x_3465_);
if (v___x_3475_ == 0)
{
uint8_t v___x_3476_; 
v___x_3476_ = 1;
v___y_3467_ = v___x_3476_;
goto v___jp_3466_;
}
else
{
uint8_t v___x_3477_; 
v___x_3477_ = 0;
v___y_3467_ = v___x_3477_;
goto v___jp_3466_;
}
v___jp_3466_:
{
uint8_t v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; 
v___x_3468_ = 1;
v___x_3469_ = lean_box(v___x_3468_);
v___x_3470_ = lean_st_ref_put(v_finished_3463_, v___x_3469_);
if (v___y_3467_ == 0)
{
lean_object* v___x_3471_; 
v___x_3471_ = lean_apply_1(v_lose_3461_, lean_box(0));
return v___x_3471_;
}
else
{
lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; 
lean_dec_ref(v_lose_3461_);
v___x_3472_ = ((lean_object*)(l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___redArg___closed__0));
v___x_3473_ = lean_io_promise_resolve(v___x_3472_, v_promise_3464_);
v___x_3474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3474_, 0, v___x_3473_);
return v___x_3474_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___redArg___boxed(lean_object* v_w_3478_, lean_object* v_lose_3479_, lean_object* v___y_3480_){
_start:
{
lean_object* v_res_3481_; 
v_res_3481_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___redArg(v_w_3478_, v_lose_3479_);
lean_dec_ref(v_w_3478_);
return v_res_3481_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0(lean_object* v_00_u03b1_3482_, lean_object* v_w_3483_, lean_object* v_lose_3484_){
_start:
{
lean_object* v___x_3486_; 
v___x_3486_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___redArg(v_w_3483_, v_lose_3484_);
return v___x_3486_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___boxed(lean_object* v_00_u03b1_3487_, lean_object* v_w_3488_, lean_object* v_lose_3489_, lean_object* v___y_3490_){
_start:
{
lean_object* v_res_3491_; 
v_res_3491_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0(v_00_u03b1_3487_, v_w_3488_, v_lose_3489_);
lean_dec_ref(v_w_3488_);
return v_res_3491_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__1___redArg(lean_object* v_receiverId_3492_, lean_object* v_a_3493_){
_start:
{
lean_object* v___x_3495_; lean_object* v_receivers_3496_; lean_object* v___x_3497_; 
v___x_3495_ = lean_st_ref_get(v_a_3493_);
v_receivers_3496_ = lean_ctor_get(v___x_3495_, 7);
lean_inc(v_receivers_3496_);
lean_dec(v___x_3495_);
v___x_3497_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___redArg(v_receivers_3496_, v_receiverId_3492_);
if (lean_obj_tag(v___x_3497_) == 1)
{
lean_object* v_val_3498_; lean_object* v___x_3499_; 
v_val_3498_ = lean_ctor_get(v___x_3497_, 0);
lean_inc(v_val_3498_);
lean_dec_ref_known(v___x_3497_, 1);
v___x_3499_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0___redArg(v_val_3498_, v_a_3493_);
lean_dec(v_val_3498_);
if (lean_obj_tag(v___x_3499_) == 0)
{
lean_object* v_a_3500_; lean_object* v___x_3502_; uint8_t v_isShared_3503_; uint8_t v_isSharedCheck_3532_; 
v_a_3500_ = lean_ctor_get(v___x_3499_, 0);
v_isSharedCheck_3532_ = !lean_is_exclusive(v___x_3499_);
if (v_isSharedCheck_3532_ == 0)
{
v___x_3502_ = v___x_3499_;
v_isShared_3503_ = v_isSharedCheck_3532_;
goto v_resetjp_3501_;
}
else
{
lean_inc(v_a_3500_);
lean_dec(v___x_3499_);
v___x_3502_ = lean_box(0);
v_isShared_3503_ = v_isSharedCheck_3532_;
goto v_resetjp_3501_;
}
v_resetjp_3501_:
{
if (lean_obj_tag(v_a_3500_) == 1)
{
lean_object* v___x_3504_; lean_object* v_producers_3505_; lean_object* v_waiters_3506_; lean_object* v_capacity_3507_; lean_object* v_size_3508_; lean_object* v_buffer_3509_; lean_object* v_write_3510_; lean_object* v_read_3511_; lean_object* v_nextId_3512_; uint8_t v_closed_3513_; lean_object* v_pos_3514_; lean_object* v___x_3516_; uint8_t v_isShared_3517_; uint8_t v_isSharedCheck_3526_; 
v___x_3504_ = lean_st_ref_take(v_a_3493_);
v_producers_3505_ = lean_ctor_get(v___x_3504_, 0);
v_waiters_3506_ = lean_ctor_get(v___x_3504_, 1);
v_capacity_3507_ = lean_ctor_get(v___x_3504_, 2);
v_size_3508_ = lean_ctor_get(v___x_3504_, 3);
v_buffer_3509_ = lean_ctor_get(v___x_3504_, 4);
v_write_3510_ = lean_ctor_get(v___x_3504_, 5);
v_read_3511_ = lean_ctor_get(v___x_3504_, 6);
v_nextId_3512_ = lean_ctor_get(v___x_3504_, 8);
v_closed_3513_ = lean_ctor_get_uint8(v___x_3504_, sizeof(void*)*10);
v_pos_3514_ = lean_ctor_get(v___x_3504_, 9);
v_isSharedCheck_3526_ = !lean_is_exclusive(v___x_3504_);
if (v_isSharedCheck_3526_ == 0)
{
lean_object* v_unused_3527_; 
v_unused_3527_ = lean_ctor_get(v___x_3504_, 7);
lean_dec(v_unused_3527_);
v___x_3516_ = v___x_3504_;
v_isShared_3517_ = v_isSharedCheck_3526_;
goto v_resetjp_3515_;
}
else
{
lean_inc(v_pos_3514_);
lean_inc(v_nextId_3512_);
lean_inc(v_read_3511_);
lean_inc(v_write_3510_);
lean_inc(v_buffer_3509_);
lean_inc(v_size_3508_);
lean_inc(v_capacity_3507_);
lean_inc(v_waiters_3506_);
lean_inc(v_producers_3505_);
lean_dec(v___x_3504_);
v___x_3516_ = lean_box(0);
v_isShared_3517_ = v_isSharedCheck_3526_;
goto v_resetjp_3515_;
}
v_resetjp_3515_:
{
lean_object* v___x_3518_; lean_object* v___x_3520_; 
v___x_3518_ = l_Std_DTreeMap_Internal_Impl_Const_modify___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__1(v_receiverId_3492_, v_receivers_3496_);
if (v_isShared_3517_ == 0)
{
lean_ctor_set(v___x_3516_, 7, v___x_3518_);
v___x_3520_ = v___x_3516_;
goto v_reusejp_3519_;
}
else
{
lean_object* v_reuseFailAlloc_3525_; 
v_reuseFailAlloc_3525_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_3525_, 0, v_producers_3505_);
lean_ctor_set(v_reuseFailAlloc_3525_, 1, v_waiters_3506_);
lean_ctor_set(v_reuseFailAlloc_3525_, 2, v_capacity_3507_);
lean_ctor_set(v_reuseFailAlloc_3525_, 3, v_size_3508_);
lean_ctor_set(v_reuseFailAlloc_3525_, 4, v_buffer_3509_);
lean_ctor_set(v_reuseFailAlloc_3525_, 5, v_write_3510_);
lean_ctor_set(v_reuseFailAlloc_3525_, 6, v_read_3511_);
lean_ctor_set(v_reuseFailAlloc_3525_, 7, v___x_3518_);
lean_ctor_set(v_reuseFailAlloc_3525_, 8, v_nextId_3512_);
lean_ctor_set(v_reuseFailAlloc_3525_, 9, v_pos_3514_);
lean_ctor_set_uint8(v_reuseFailAlloc_3525_, sizeof(void*)*10, v_closed_3513_);
v___x_3520_ = v_reuseFailAlloc_3525_;
goto v_reusejp_3519_;
}
v_reusejp_3519_:
{
lean_object* v___x_3521_; lean_object* v___x_3523_; 
v___x_3521_ = lean_st_ref_put(v_a_3493_, v___x_3520_);
if (v_isShared_3503_ == 0)
{
v___x_3523_ = v___x_3502_;
goto v_reusejp_3522_;
}
else
{
lean_object* v_reuseFailAlloc_3524_; 
v_reuseFailAlloc_3524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3524_, 0, v_a_3500_);
v___x_3523_ = v_reuseFailAlloc_3524_;
goto v_reusejp_3522_;
}
v_reusejp_3522_:
{
return v___x_3523_;
}
}
}
}
else
{
lean_object* v___x_3528_; lean_object* v___x_3530_; 
lean_dec(v_a_3500_);
lean_dec(v_receivers_3496_);
lean_dec(v_receiverId_3492_);
v___x_3528_ = lean_box(0);
if (v_isShared_3503_ == 0)
{
lean_ctor_set(v___x_3502_, 0, v___x_3528_);
v___x_3530_ = v___x_3502_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3531_; 
v_reuseFailAlloc_3531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3531_, 0, v___x_3528_);
v___x_3530_ = v_reuseFailAlloc_3531_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
return v___x_3530_;
}
}
}
}
else
{
lean_dec(v_receivers_3496_);
lean_dec(v_receiverId_3492_);
return v___x_3499_;
}
}
else
{
lean_object* v___x_3533_; lean_object* v___x_3534_; 
lean_dec(v___x_3497_);
lean_dec(v_receivers_3496_);
lean_dec(v_receiverId_3492_);
v___x_3533_ = lean_box(0);
v___x_3534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3534_, 0, v___x_3533_);
return v___x_3534_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__1___redArg___boxed(lean_object* v_receiverId_3535_, lean_object* v_a_3536_, lean_object* v___y_3537_){
_start:
{
lean_object* v_res_3538_; 
v_res_3538_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__1___redArg(v_receiverId_3535_, v_a_3536_);
lean_dec(v_a_3536_);
return v_res_3538_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__2___redArg(lean_object* v___x_3539_, lean_object* v_w_3540_, lean_object* v_lose_3541_, lean_object* v___y_3542_){
_start:
{
lean_object* v_finished_3544_; lean_object* v_promise_3545_; lean_object* v___x_3546_; uint8_t v___y_3548_; uint8_t v___x_3572_; 
v_finished_3544_ = lean_ctor_get(v_w_3540_, 0);
v_promise_3545_ = lean_ctor_get(v_w_3540_, 1);
v___x_3546_ = lean_st_ref_take(v_finished_3544_);
v___x_3572_ = lean_unbox(v___x_3546_);
lean_dec(v___x_3546_);
if (v___x_3572_ == 0)
{
uint8_t v___x_3573_; 
v___x_3573_ = 1;
v___y_3548_ = v___x_3573_;
goto v___jp_3547_;
}
else
{
uint8_t v___x_3574_; 
v___x_3574_ = 0;
v___y_3548_ = v___x_3574_;
goto v___jp_3547_;
}
v___jp_3547_:
{
uint8_t v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; 
v___x_3549_ = 1;
v___x_3550_ = lean_box(v___x_3549_);
v___x_3551_ = lean_st_ref_put(v_finished_3544_, v___x_3550_);
if (v___y_3548_ == 0)
{
lean_object* v___x_3552_; 
lean_dec(v___x_3539_);
lean_inc(v___y_3542_);
v___x_3552_ = lean_apply_2(v_lose_3541_, v___y_3542_, lean_box(0));
return v___x_3552_;
}
else
{
lean_object* v___x_3553_; 
lean_dec_ref(v_lose_3541_);
v___x_3553_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__1___redArg(v___x_3539_, v___y_3542_);
if (lean_obj_tag(v___x_3553_) == 0)
{
lean_object* v_a_3554_; lean_object* v___x_3556_; uint8_t v_isShared_3557_; uint8_t v_isSharedCheck_3563_; 
v_a_3554_ = lean_ctor_get(v___x_3553_, 0);
v_isSharedCheck_3563_ = !lean_is_exclusive(v___x_3553_);
if (v_isSharedCheck_3563_ == 0)
{
v___x_3556_ = v___x_3553_;
v_isShared_3557_ = v_isSharedCheck_3563_;
goto v_resetjp_3555_;
}
else
{
lean_inc(v_a_3554_);
lean_dec(v___x_3553_);
v___x_3556_ = lean_box(0);
v_isShared_3557_ = v_isSharedCheck_3563_;
goto v_resetjp_3555_;
}
v_resetjp_3555_:
{
lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3561_; 
v___x_3558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3558_, 0, v_a_3554_);
v___x_3559_ = lean_io_promise_resolve(v___x_3558_, v_promise_3545_);
if (v_isShared_3557_ == 0)
{
lean_ctor_set(v___x_3556_, 0, v___x_3559_);
v___x_3561_ = v___x_3556_;
goto v_reusejp_3560_;
}
else
{
lean_object* v_reuseFailAlloc_3562_; 
v_reuseFailAlloc_3562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3562_, 0, v___x_3559_);
v___x_3561_ = v_reuseFailAlloc_3562_;
goto v_reusejp_3560_;
}
v_reusejp_3560_:
{
return v___x_3561_;
}
}
}
else
{
lean_object* v_a_3564_; lean_object* v___x_3566_; uint8_t v_isShared_3567_; uint8_t v_isSharedCheck_3571_; 
v_a_3564_ = lean_ctor_get(v___x_3553_, 0);
v_isSharedCheck_3571_ = !lean_is_exclusive(v___x_3553_);
if (v_isSharedCheck_3571_ == 0)
{
v___x_3566_ = v___x_3553_;
v_isShared_3567_ = v_isSharedCheck_3571_;
goto v_resetjp_3565_;
}
else
{
lean_inc(v_a_3564_);
lean_dec(v___x_3553_);
v___x_3566_ = lean_box(0);
v_isShared_3567_ = v_isSharedCheck_3571_;
goto v_resetjp_3565_;
}
v_resetjp_3565_:
{
lean_object* v___x_3569_; 
if (v_isShared_3567_ == 0)
{
v___x_3569_ = v___x_3566_;
goto v_reusejp_3568_;
}
else
{
lean_object* v_reuseFailAlloc_3570_; 
v_reuseFailAlloc_3570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3570_, 0, v_a_3564_);
v___x_3569_ = v_reuseFailAlloc_3570_;
goto v_reusejp_3568_;
}
v_reusejp_3568_:
{
return v___x_3569_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__2___redArg___boxed(lean_object* v___x_3575_, lean_object* v_w_3576_, lean_object* v_lose_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_){
_start:
{
lean_object* v_res_3580_; 
v_res_3580_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__2___redArg(v___x_3575_, v_w_3576_, v_lose_3577_, v___y_3578_);
lean_dec(v___y_3578_);
lean_dec_ref(v_w_3576_);
return v_res_3580_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__2(lean_object* v_00_u03b1_3581_, lean_object* v___x_3582_, lean_object* v_w_3583_, lean_object* v_lose_3584_, lean_object* v___y_3585_){
_start:
{
lean_object* v___x_3587_; 
v___x_3587_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__2___redArg(v___x_3582_, v_w_3583_, v_lose_3584_, v___y_3585_);
return v___x_3587_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__2___boxed(lean_object* v_00_u03b1_3588_, lean_object* v___x_3589_, lean_object* v_w_3590_, lean_object* v_lose_3591_, lean_object* v___y_3592_, lean_object* v___y_3593_){
_start:
{
lean_object* v_res_3594_; 
v_res_3594_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__2(v_00_u03b1_3588_, v___x_3589_, v_w_3590_, v_lose_3591_, v___y_3592_);
lean_dec(v___y_3592_);
lean_dec_ref(v_w_3590_);
return v_res_3594_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__0(lean_object* v___x_3595_){
_start:
{
lean_object* v___x_3597_; 
v___x_3597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3597_, 0, v___x_3595_);
return v___x_3597_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__0___boxed(lean_object* v___x_3598_, lean_object* v___y_3599_){
_start:
{
lean_object* v_res_3600_; 
v_res_3600_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__0(v___x_3598_);
return v_res_3600_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__4(lean_object* v_id_3601_, lean_object* v___f_3602_, lean_object* v___y_3603_){
_start:
{
lean_object* v___x_3605_; uint8_t v_closed_3606_; 
v___x_3605_ = lean_st_ref_get(v___y_3603_);
v_closed_3606_ = lean_ctor_get_uint8(v___x_3605_, sizeof(void*)*10);
if (v_closed_3606_ == 0)
{
lean_object* v_capacity_3607_; lean_object* v_size_3608_; lean_object* v_receivers_3609_; lean_object* v___x_3610_; 
v_capacity_3607_ = lean_ctor_get(v___x_3605_, 2);
lean_inc(v_capacity_3607_);
v_size_3608_ = lean_ctor_get(v___x_3605_, 3);
lean_inc(v_size_3608_);
v_receivers_3609_ = lean_ctor_get(v___x_3605_, 7);
lean_inc(v_receivers_3609_);
lean_dec(v___x_3605_);
v___x_3610_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___redArg(v_receivers_3609_, v_id_3601_);
lean_dec(v_receivers_3609_);
if (lean_obj_tag(v___x_3610_) == 1)
{
lean_object* v_val_3611_; lean_object* v___x_3612_; uint8_t v___x_3613_; 
v_val_3611_ = lean_ctor_get(v___x_3610_, 0);
lean_inc(v_val_3611_);
lean_dec_ref_known(v___x_3610_, 1);
v___x_3612_ = lean_unsigned_to_nat(0u);
v___x_3613_ = lean_nat_dec_eq(v_size_3608_, v___x_3612_);
lean_dec(v_size_3608_);
if (v___x_3613_ == 0)
{
lean_object* v___x_3614_; lean_object* v___x_3615_; 
v___x_3614_ = lean_nat_mod(v_val_3611_, v_capacity_3607_);
lean_dec(v_capacity_3607_);
v___x_3615_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__1___redArg(v___x_3614_, v___y_3603_);
lean_dec(v___x_3614_);
if (lean_obj_tag(v___x_3615_) == 0)
{
lean_object* v_a_3616_; lean_object* v___x_3617_; lean_object* v_pos_3618_; uint8_t v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; 
v_a_3616_ = lean_ctor_get(v___x_3615_, 0);
lean_inc(v_a_3616_);
lean_dec_ref_known(v___x_3615_, 1);
v___x_3617_ = lean_st_ref_get(v_a_3616_);
lean_dec(v_a_3616_);
v_pos_3618_ = lean_ctor_get(v___x_3617_, 1);
lean_inc(v_pos_3618_);
lean_dec(v___x_3617_);
v___x_3619_ = lean_nat_dec_eq(v_pos_3618_, v_val_3611_);
lean_dec(v_val_3611_);
lean_dec(v_pos_3618_);
v___x_3620_ = lean_box(v___x_3619_);
lean_inc(v___y_3603_);
v___x_3621_ = lean_apply_3(v___f_3602_, v___x_3620_, v___y_3603_, lean_box(0));
return v___x_3621_;
}
else
{
lean_object* v_a_3622_; lean_object* v___x_3624_; uint8_t v_isShared_3625_; uint8_t v_isSharedCheck_3629_; 
lean_dec(v_val_3611_);
lean_dec_ref(v___f_3602_);
v_a_3622_ = lean_ctor_get(v___x_3615_, 0);
v_isSharedCheck_3629_ = !lean_is_exclusive(v___x_3615_);
if (v_isSharedCheck_3629_ == 0)
{
v___x_3624_ = v___x_3615_;
v_isShared_3625_ = v_isSharedCheck_3629_;
goto v_resetjp_3623_;
}
else
{
lean_inc(v_a_3622_);
lean_dec(v___x_3615_);
v___x_3624_ = lean_box(0);
v_isShared_3625_ = v_isSharedCheck_3629_;
goto v_resetjp_3623_;
}
v_resetjp_3623_:
{
lean_object* v___x_3627_; 
if (v_isShared_3625_ == 0)
{
v___x_3627_ = v___x_3624_;
goto v_reusejp_3626_;
}
else
{
lean_object* v_reuseFailAlloc_3628_; 
v_reuseFailAlloc_3628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3628_, 0, v_a_3622_);
v___x_3627_ = v_reuseFailAlloc_3628_;
goto v_reusejp_3626_;
}
v_reusejp_3626_:
{
return v___x_3627_;
}
}
}
}
else
{
lean_object* v___x_3630_; lean_object* v___x_3631_; 
lean_dec(v_val_3611_);
lean_dec(v_capacity_3607_);
v___x_3630_ = lean_box(v_closed_3606_);
lean_inc(v___y_3603_);
v___x_3631_ = lean_apply_3(v___f_3602_, v___x_3630_, v___y_3603_, lean_box(0));
return v___x_3631_;
}
}
else
{
lean_object* v___x_3632_; lean_object* v___x_3633_; 
lean_dec(v___x_3610_);
lean_dec(v_size_3608_);
lean_dec(v_capacity_3607_);
v___x_3632_ = lean_box(v_closed_3606_);
lean_inc(v___y_3603_);
v___x_3633_ = lean_apply_3(v___f_3602_, v___x_3632_, v___y_3603_, lean_box(0));
return v___x_3633_;
}
}
else
{
lean_object* v___x_3634_; lean_object* v___x_3635_; 
lean_dec(v___x_3605_);
v___x_3634_ = lean_box(v_closed_3606_);
lean_inc(v___y_3603_);
v___x_3635_ = lean_apply_3(v___f_3602_, v___x_3634_, v___y_3603_, lean_box(0));
return v___x_3635_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__4___boxed(lean_object* v_id_3636_, lean_object* v___f_3637_, lean_object* v___y_3638_, lean_object* v___y_3639_){
_start:
{
lean_object* v_res_3640_; 
v_res_3640_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__4(v_id_3636_, v___f_3637_, v___y_3638_);
lean_dec(v___y_3638_);
lean_dec(v_id_3636_);
return v_res_3640_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__2(uint8_t v_____do__lift_3641_, lean_object* v___y_3642_){
_start:
{
lean_object* v___x_3644_; lean_object* v_producers_3645_; lean_object* v_waiters_3646_; lean_object* v_capacity_3647_; lean_object* v_size_3648_; lean_object* v_buffer_3649_; lean_object* v_write_3650_; lean_object* v_read_3651_; lean_object* v_receivers_3652_; lean_object* v_nextId_3653_; uint8_t v_closed_3654_; lean_object* v_pos_3655_; lean_object* v___x_3657_; uint8_t v_isShared_3658_; uint8_t v_isSharedCheck_3678_; 
v___x_3644_ = lean_st_ref_get(v___y_3642_);
v_producers_3645_ = lean_ctor_get(v___x_3644_, 0);
v_waiters_3646_ = lean_ctor_get(v___x_3644_, 1);
v_capacity_3647_ = lean_ctor_get(v___x_3644_, 2);
v_size_3648_ = lean_ctor_get(v___x_3644_, 3);
v_buffer_3649_ = lean_ctor_get(v___x_3644_, 4);
v_write_3650_ = lean_ctor_get(v___x_3644_, 5);
v_read_3651_ = lean_ctor_get(v___x_3644_, 6);
v_receivers_3652_ = lean_ctor_get(v___x_3644_, 7);
v_nextId_3653_ = lean_ctor_get(v___x_3644_, 8);
v_closed_3654_ = lean_ctor_get_uint8(v___x_3644_, sizeof(void*)*10);
v_pos_3655_ = lean_ctor_get(v___x_3644_, 9);
v_isSharedCheck_3678_ = !lean_is_exclusive(v___x_3644_);
if (v_isSharedCheck_3678_ == 0)
{
v___x_3657_ = v___x_3644_;
v_isShared_3658_ = v_isSharedCheck_3678_;
goto v_resetjp_3656_;
}
else
{
lean_inc(v_pos_3655_);
lean_inc(v_nextId_3653_);
lean_inc(v_receivers_3652_);
lean_inc(v_read_3651_);
lean_inc(v_write_3650_);
lean_inc(v_buffer_3649_);
lean_inc(v_size_3648_);
lean_inc(v_capacity_3647_);
lean_inc(v_waiters_3646_);
lean_inc(v_producers_3645_);
lean_dec(v___x_3644_);
v___x_3657_ = lean_box(0);
v_isShared_3658_ = v_isSharedCheck_3678_;
goto v_resetjp_3656_;
}
v_resetjp_3656_:
{
lean_object* v___x_3659_; 
v___x_3659_ = l_Std_Queue_dequeue_x3f___redArg(v_waiters_3646_);
if (lean_obj_tag(v___x_3659_) == 1)
{
lean_object* v_val_3660_; lean_object* v___x_3662_; uint8_t v_isShared_3663_; uint8_t v_isSharedCheck_3675_; 
v_val_3660_ = lean_ctor_get(v___x_3659_, 0);
v_isSharedCheck_3675_ = !lean_is_exclusive(v___x_3659_);
if (v_isSharedCheck_3675_ == 0)
{
v___x_3662_ = v___x_3659_;
v_isShared_3663_ = v_isSharedCheck_3675_;
goto v_resetjp_3661_;
}
else
{
lean_inc(v_val_3660_);
lean_dec(v___x_3659_);
v___x_3662_ = lean_box(0);
v_isShared_3663_ = v_isSharedCheck_3675_;
goto v_resetjp_3661_;
}
v_resetjp_3661_:
{
lean_object* v_fst_3664_; lean_object* v_snd_3665_; lean_object* v___x_3666_; lean_object* v___x_3668_; 
v_fst_3664_ = lean_ctor_get(v_val_3660_, 0);
lean_inc(v_fst_3664_);
v_snd_3665_ = lean_ctor_get(v_val_3660_, 1);
lean_inc(v_snd_3665_);
lean_dec(v_val_3660_);
v___x_3666_ = l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve___redArg(v_fst_3664_, v_____do__lift_3641_);
lean_dec(v_fst_3664_);
if (v_isShared_3658_ == 0)
{
lean_ctor_set(v___x_3657_, 1, v_snd_3665_);
v___x_3668_ = v___x_3657_;
goto v_reusejp_3667_;
}
else
{
lean_object* v_reuseFailAlloc_3674_; 
v_reuseFailAlloc_3674_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_3674_, 0, v_producers_3645_);
lean_ctor_set(v_reuseFailAlloc_3674_, 1, v_snd_3665_);
lean_ctor_set(v_reuseFailAlloc_3674_, 2, v_capacity_3647_);
lean_ctor_set(v_reuseFailAlloc_3674_, 3, v_size_3648_);
lean_ctor_set(v_reuseFailAlloc_3674_, 4, v_buffer_3649_);
lean_ctor_set(v_reuseFailAlloc_3674_, 5, v_write_3650_);
lean_ctor_set(v_reuseFailAlloc_3674_, 6, v_read_3651_);
lean_ctor_set(v_reuseFailAlloc_3674_, 7, v_receivers_3652_);
lean_ctor_set(v_reuseFailAlloc_3674_, 8, v_nextId_3653_);
lean_ctor_set(v_reuseFailAlloc_3674_, 9, v_pos_3655_);
lean_ctor_set_uint8(v_reuseFailAlloc_3674_, sizeof(void*)*10, v_closed_3654_);
v___x_3668_ = v_reuseFailAlloc_3674_;
goto v_reusejp_3667_;
}
v_reusejp_3667_:
{
lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3672_; 
v___x_3669_ = lean_box(0);
v___x_3670_ = lean_st_ref_swap(v___y_3642_, v___x_3668_);
lean_dec(v___x_3670_);
if (v_isShared_3663_ == 0)
{
lean_ctor_set_tag(v___x_3662_, 0);
lean_ctor_set(v___x_3662_, 0, v___x_3669_);
v___x_3672_ = v___x_3662_;
goto v_reusejp_3671_;
}
else
{
lean_object* v_reuseFailAlloc_3673_; 
v_reuseFailAlloc_3673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3673_, 0, v___x_3669_);
v___x_3672_ = v_reuseFailAlloc_3673_;
goto v_reusejp_3671_;
}
v_reusejp_3671_:
{
return v___x_3672_;
}
}
}
}
else
{
lean_object* v___x_3676_; lean_object* v___x_3677_; 
lean_dec(v___x_3659_);
lean_del_object(v___x_3657_);
lean_dec(v_pos_3655_);
lean_dec(v_nextId_3653_);
lean_dec(v_receivers_3652_);
lean_dec(v_read_3651_);
lean_dec(v_write_3650_);
lean_dec_ref(v_buffer_3649_);
lean_dec(v_size_3648_);
lean_dec(v_capacity_3647_);
lean_dec_ref(v_producers_3645_);
v___x_3676_ = lean_box(0);
v___x_3677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3677_, 0, v___x_3676_);
return v___x_3677_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__2___boxed(lean_object* v_____do__lift_3679_, lean_object* v___y_3680_, lean_object* v___y_3681_){
_start:
{
uint8_t v_____do__lift_4031__boxed_3682_; lean_object* v_res_3683_; 
v_____do__lift_4031__boxed_3682_ = lean_unbox(v_____do__lift_3679_);
v_res_3683_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__2(v_____do__lift_4031__boxed_3682_, v___y_3680_);
lean_dec(v___y_3680_);
return v_res_3683_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__3(lean_object* v_waiter_3684_, lean_object* v___f_3685_, lean_object* v_id_3686_, uint8_t v_____do__lift_3687_, lean_object* v___y_3688_){
_start:
{
if (v_____do__lift_3687_ == 0)
{
lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v_producers_3692_; lean_object* v_waiters_3693_; lean_object* v_capacity_3694_; lean_object* v_size_3695_; lean_object* v_buffer_3696_; lean_object* v_write_3697_; lean_object* v_read_3698_; lean_object* v_receivers_3699_; lean_object* v_nextId_3700_; uint8_t v_closed_3701_; lean_object* v_pos_3702_; lean_object* v___x_3704_; uint8_t v_isShared_3705_; uint8_t v_isSharedCheck_3716_; 
lean_dec(v_id_3686_);
v___x_3690_ = lean_io_promise_new();
v___x_3691_ = lean_st_ref_take(v___y_3688_);
v_producers_3692_ = lean_ctor_get(v___x_3691_, 0);
v_waiters_3693_ = lean_ctor_get(v___x_3691_, 1);
v_capacity_3694_ = lean_ctor_get(v___x_3691_, 2);
v_size_3695_ = lean_ctor_get(v___x_3691_, 3);
v_buffer_3696_ = lean_ctor_get(v___x_3691_, 4);
v_write_3697_ = lean_ctor_get(v___x_3691_, 5);
v_read_3698_ = lean_ctor_get(v___x_3691_, 6);
v_receivers_3699_ = lean_ctor_get(v___x_3691_, 7);
v_nextId_3700_ = lean_ctor_get(v___x_3691_, 8);
v_closed_3701_ = lean_ctor_get_uint8(v___x_3691_, sizeof(void*)*10);
v_pos_3702_ = lean_ctor_get(v___x_3691_, 9);
v_isSharedCheck_3716_ = !lean_is_exclusive(v___x_3691_);
if (v_isSharedCheck_3716_ == 0)
{
v___x_3704_ = v___x_3691_;
v_isShared_3705_ = v_isSharedCheck_3716_;
goto v_resetjp_3703_;
}
else
{
lean_inc(v_pos_3702_);
lean_inc(v_nextId_3700_);
lean_inc(v_receivers_3699_);
lean_inc(v_read_3698_);
lean_inc(v_write_3697_);
lean_inc(v_buffer_3696_);
lean_inc(v_size_3695_);
lean_inc(v_capacity_3694_);
lean_inc(v_waiters_3693_);
lean_inc(v_producers_3692_);
lean_dec(v___x_3691_);
v___x_3704_ = lean_box(0);
v_isShared_3705_ = v_isSharedCheck_3716_;
goto v_resetjp_3703_;
}
v_resetjp_3703_:
{
lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3710_; 
v___x_3706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3706_, 0, v_waiter_3684_);
lean_inc(v___x_3690_);
v___x_3707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3707_, 0, v___x_3690_);
lean_ctor_set(v___x_3707_, 1, v___x_3706_);
v___x_3708_ = l_Std_Queue_enqueue___redArg(v___x_3707_, v_waiters_3693_);
if (v_isShared_3705_ == 0)
{
lean_ctor_set(v___x_3704_, 1, v___x_3708_);
v___x_3710_ = v___x_3704_;
goto v_reusejp_3709_;
}
else
{
lean_object* v_reuseFailAlloc_3715_; 
v_reuseFailAlloc_3715_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_3715_, 0, v_producers_3692_);
lean_ctor_set(v_reuseFailAlloc_3715_, 1, v___x_3708_);
lean_ctor_set(v_reuseFailAlloc_3715_, 2, v_capacity_3694_);
lean_ctor_set(v_reuseFailAlloc_3715_, 3, v_size_3695_);
lean_ctor_set(v_reuseFailAlloc_3715_, 4, v_buffer_3696_);
lean_ctor_set(v_reuseFailAlloc_3715_, 5, v_write_3697_);
lean_ctor_set(v_reuseFailAlloc_3715_, 6, v_read_3698_);
lean_ctor_set(v_reuseFailAlloc_3715_, 7, v_receivers_3699_);
lean_ctor_set(v_reuseFailAlloc_3715_, 8, v_nextId_3700_);
lean_ctor_set(v_reuseFailAlloc_3715_, 9, v_pos_3702_);
lean_ctor_set_uint8(v_reuseFailAlloc_3715_, sizeof(void*)*10, v_closed_3701_);
v___x_3710_ = v_reuseFailAlloc_3715_;
goto v_reusejp_3709_;
}
v_reusejp_3709_:
{
lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; 
v___x_3711_ = lean_st_ref_put(v___y_3688_, v___x_3710_);
v___x_3712_ = lean_io_promise_result_opt(v___x_3690_);
lean_dec(v___x_3690_);
v___x_3713_ = lean_unsigned_to_nat(0u);
v___x_3714_ = l_EIO_chainTask___redArg(v___x_3712_, v___f_3685_, v___x_3713_, v_____do__lift_3687_);
return v___x_3714_;
}
}
}
else
{
lean_object* v___x_3717_; lean_object* v_lose_3718_; lean_object* v___x_3719_; 
lean_dec_ref(v___f_3685_);
v___x_3717_ = lean_box(v_____do__lift_3687_);
v_lose_3718_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v_lose_3718_, 0, v___x_3717_);
v___x_3719_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__2___redArg(v_id_3686_, v_waiter_3684_, v_lose_3718_, v___y_3688_);
lean_dec_ref(v_waiter_3684_);
return v___x_3719_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__3___boxed(lean_object* v_waiter_3720_, lean_object* v___f_3721_, lean_object* v_id_3722_, lean_object* v_____do__lift_3723_, lean_object* v___y_3724_, lean_object* v___y_3725_){
_start:
{
uint8_t v_____do__lift_4089__boxed_3726_; lean_object* v_res_3727_; 
v_____do__lift_4089__boxed_3726_ = lean_unbox(v_____do__lift_3723_);
v_res_3727_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__3(v_waiter_3720_, v___f_3721_, v_id_3722_, v_____do__lift_4089__boxed_3726_, v___y_3724_);
lean_dec(v___y_3724_);
return v_res_3727_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__1(lean_object* v_waiter_3730_, lean_object* v_ch_3731_, lean_object* v_res_x3f_3732_){
_start:
{
if (lean_obj_tag(v_res_x3f_3732_) == 0)
{
lean_object* v___x_3734_; lean_object* v___x_3735_; 
lean_dec_ref(v_ch_3731_);
lean_dec_ref(v_waiter_3730_);
v___x_3734_ = lean_box(0);
v___x_3735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3735_, 0, v___x_3734_);
return v___x_3735_;
}
else
{
lean_object* v_val_3736_; uint8_t v___x_3737_; 
v_val_3736_ = lean_ctor_get(v_res_x3f_3732_, 0);
v___x_3737_ = lean_unbox(v_val_3736_);
if (v___x_3737_ == 0)
{
lean_object* v___f_3738_; lean_object* v___x_3739_; 
lean_dec_ref(v_ch_3731_);
v___f_3738_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__1___closed__0));
v___x_3739_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___redArg(v_waiter_3730_, v___f_3738_);
lean_dec_ref(v_waiter_3730_);
return v___x_3739_;
}
else
{
lean_object* v___x_3740_; 
v___x_3740_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg(v_ch_3731_, v_waiter_3730_);
return v___x_3740_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__1___boxed(lean_object* v_waiter_3741_, lean_object* v_ch_3742_, lean_object* v_res_x3f_3743_, lean_object* v___y_3744_){
_start:
{
lean_object* v_res_3745_; 
v_res_3745_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__1(v_waiter_3741_, v_ch_3742_, v_res_x3f_3743_);
lean_dec(v_res_x3f_3743_);
return v_res_3745_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg(lean_object* v_ch_3746_, lean_object* v_waiter_3747_){
_start:
{
lean_object* v_state_3749_; lean_object* v_id_3750_; lean_object* v___f_3751_; lean_object* v___f_3752_; lean_object* v___f_3753_; lean_object* v___x_3754_; 
v_state_3749_ = lean_ctor_get(v_ch_3746_, 0);
lean_inc_ref(v_state_3749_);
v_id_3750_ = lean_ctor_get(v_ch_3746_, 1);
lean_inc_n(v_id_3750_, 2);
lean_inc_ref(v_waiter_3747_);
v___f_3751_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_3751_, 0, v_waiter_3747_);
lean_closure_set(v___f_3751_, 1, v_ch_3746_);
v___f_3752_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__3___boxed), 6, 3);
lean_closure_set(v___f_3752_, 0, v_waiter_3747_);
lean_closure_set(v___f_3752_, 1, v___f_3751_);
lean_closure_set(v___f_3752_, 2, v_id_3750_);
v___f_3753_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_3753_, 0, v_id_3750_);
lean_closure_set(v___f_3753_, 1, v___f_3752_);
v___x_3754_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___redArg(v_state_3749_, v___f_3753_);
return v___x_3754_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___boxed(lean_object* v_ch_3755_, lean_object* v_waiter_3756_, lean_object* v_a_3757_){
_start:
{
lean_object* v_res_3758_; 
v_res_3758_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg(v_ch_3755_, v_waiter_3756_);
return v_res_3758_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux(lean_object* v_00_u03b1_3759_, lean_object* v_ch_3760_, lean_object* v_waiter_3761_){
_start:
{
lean_object* v___x_3763_; 
v___x_3763_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg(v_ch_3760_, v_waiter_3761_);
return v___x_3763_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___boxed(lean_object* v_00_u03b1_3764_, lean_object* v_ch_3765_, lean_object* v_waiter_3766_, lean_object* v_a_3767_){
_start:
{
lean_object* v_res_3768_; 
v_res_3768_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux(v_00_u03b1_3764_, v_ch_3765_, v_waiter_3766_);
return v_res_3768_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__1(lean_object* v_00_u03b1_3769_, lean_object* v_receiverId_3770_, lean_object* v_a_3771_){
_start:
{
lean_object* v___x_3773_; 
v___x_3773_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__1___redArg(v_receiverId_3770_, v_a_3771_);
return v___x_3773_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__1___boxed(lean_object* v_00_u03b1_3774_, lean_object* v_receiverId_3775_, lean_object* v_a_3776_, lean_object* v___y_3777_){
_start:
{
lean_object* v_res_3778_; 
v_res_3778_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__1(v_00_u03b1_3774_, v_receiverId_3775_, v_a_3776_);
lean_dec(v_a_3776_);
return v_res_3778_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg___lam__0(lean_object* v_place_3779_, lean_object* v_x_3780_){
_start:
{
if (lean_obj_tag(v_x_3780_) == 0)
{
lean_object* v_a_3782_; lean_object* v___x_3784_; uint8_t v_isShared_3785_; uint8_t v_isSharedCheck_3790_; 
v_a_3782_ = lean_ctor_get(v_x_3780_, 0);
v_isSharedCheck_3790_ = !lean_is_exclusive(v_x_3780_);
if (v_isSharedCheck_3790_ == 0)
{
v___x_3784_ = v_x_3780_;
v_isShared_3785_ = v_isSharedCheck_3790_;
goto v_resetjp_3783_;
}
else
{
lean_inc(v_a_3782_);
lean_dec(v_x_3780_);
v___x_3784_ = lean_box(0);
v_isShared_3785_ = v_isSharedCheck_3790_;
goto v_resetjp_3783_;
}
v_resetjp_3783_:
{
lean_object* v___x_3787_; 
if (v_isShared_3785_ == 0)
{
v___x_3787_ = v___x_3784_;
goto v_reusejp_3786_;
}
else
{
lean_object* v_reuseFailAlloc_3789_; 
v_reuseFailAlloc_3789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3789_, 0, v_a_3782_);
v___x_3787_ = v_reuseFailAlloc_3789_;
goto v_reusejp_3786_;
}
v_reusejp_3786_:
{
lean_object* v___x_3788_; 
v___x_3788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3788_, 0, v___x_3787_);
return v___x_3788_;
}
}
}
else
{
lean_object* v_a_3791_; lean_object* v___x_3793_; uint8_t v_isShared_3794_; uint8_t v_isSharedCheck_3803_; 
v_a_3791_ = lean_ctor_get(v_x_3780_, 0);
v_isSharedCheck_3803_ = !lean_is_exclusive(v_x_3780_);
if (v_isSharedCheck_3803_ == 0)
{
v___x_3793_ = v_x_3780_;
v_isShared_3794_ = v_isSharedCheck_3803_;
goto v_resetjp_3792_;
}
else
{
lean_inc(v_a_3791_);
lean_dec(v_x_3780_);
v___x_3793_ = lean_box(0);
v_isShared_3794_ = v_isSharedCheck_3803_;
goto v_resetjp_3792_;
}
v_resetjp_3792_:
{
lean_object* v_capacity_3795_; lean_object* v_buffer_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3800_; 
v_capacity_3795_ = lean_ctor_get(v_a_3791_, 2);
lean_inc(v_capacity_3795_);
v_buffer_3796_ = lean_ctor_get(v_a_3791_, 4);
lean_inc_ref(v_buffer_3796_);
lean_dec(v_a_3791_);
v___x_3797_ = lean_nat_mod(v_place_3779_, v_capacity_3795_);
lean_dec(v_capacity_3795_);
v___x_3798_ = lean_array_fget(v_buffer_3796_, v___x_3797_);
lean_dec(v___x_3797_);
lean_dec_ref(v_buffer_3796_);
if (v_isShared_3794_ == 0)
{
lean_ctor_set(v___x_3793_, 0, v___x_3798_);
v___x_3800_ = v___x_3793_;
goto v_reusejp_3799_;
}
else
{
lean_object* v_reuseFailAlloc_3802_; 
v_reuseFailAlloc_3802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3802_, 0, v___x_3798_);
v___x_3800_ = v_reuseFailAlloc_3802_;
goto v_reusejp_3799_;
}
v_reusejp_3799_:
{
lean_object* v___x_3801_; 
v___x_3801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3801_, 0, v___x_3800_);
return v___x_3801_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg___lam__0___boxed(lean_object* v_place_3804_, lean_object* v_x_3805_, lean_object* v___y_3806_){
_start:
{
lean_object* v_res_3807_; 
v_res_3807_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg___lam__0(v_place_3804_, v_x_3805_);
lean_dec(v_place_3804_);
return v_res_3807_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg(lean_object* v_place_3808_, lean_object* v_a_3809_){
_start:
{
lean_object* v___f_3811_; lean_object* v___x_3812_; uint8_t v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; 
v___f_3811_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3811_, 0, v_place_3808_);
v___x_3812_ = lean_unsigned_to_nat(0u);
v___x_3813_ = 0;
v___x_3814_ = lean_st_ref_get(v_a_3809_);
v___x_3815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3815_, 0, v___x_3814_);
v___x_3816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3816_, 0, v___x_3815_);
v___x_3817_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3812_, v___x_3813_, v___x_3816_, v___f_3811_);
return v___x_3817_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg___boxed(lean_object* v_place_3818_, lean_object* v_a_3819_, lean_object* v___y_3820_){
_start:
{
lean_object* v_res_3821_; 
v_res_3821_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg(v_place_3818_, v_a_3819_);
lean_dec(v_a_3819_);
return v_res_3821_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1(lean_object* v_00_u03b1_3822_, lean_object* v_place_3823_, lean_object* v_a_3824_){
_start:
{
lean_object* v___x_3826_; 
v___x_3826_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg(v_place_3823_, v_a_3824_);
return v___x_3826_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___boxed(lean_object* v_00_u03b1_3827_, lean_object* v_place_3828_, lean_object* v_a_3829_, lean_object* v___y_3830_){
_start:
{
lean_object* v_res_3831_; 
v_res_3831_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1(v_00_u03b1_3827_, v_place_3828_, v_a_3829_);
lean_dec(v_a_3829_);
return v_res_3831_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__0(lean_object* v___y_3832_){
_start:
{
if (lean_obj_tag(v___y_3832_) == 0)
{
lean_object* v_a_3833_; lean_object* v___x_3835_; uint8_t v_isShared_3836_; uint8_t v_isSharedCheck_3840_; 
v_a_3833_ = lean_ctor_get(v___y_3832_, 0);
v_isSharedCheck_3840_ = !lean_is_exclusive(v___y_3832_);
if (v_isSharedCheck_3840_ == 0)
{
v___x_3835_ = v___y_3832_;
v_isShared_3836_ = v_isSharedCheck_3840_;
goto v_resetjp_3834_;
}
else
{
lean_inc(v_a_3833_);
lean_dec(v___y_3832_);
v___x_3835_ = lean_box(0);
v_isShared_3836_ = v_isSharedCheck_3840_;
goto v_resetjp_3834_;
}
v_resetjp_3834_:
{
lean_object* v___x_3838_; 
if (v_isShared_3836_ == 0)
{
v___x_3838_ = v___x_3835_;
goto v_reusejp_3837_;
}
else
{
lean_object* v_reuseFailAlloc_3839_; 
v_reuseFailAlloc_3839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3839_, 0, v_a_3833_);
v___x_3838_ = v_reuseFailAlloc_3839_;
goto v_reusejp_3837_;
}
v_reusejp_3837_:
{
return v___x_3838_;
}
}
}
else
{
lean_object* v_a_3841_; lean_object* v___x_3843_; uint8_t v_isShared_3844_; uint8_t v_isSharedCheck_3849_; 
v_a_3841_ = lean_ctor_get(v___y_3832_, 0);
v_isSharedCheck_3849_ = !lean_is_exclusive(v___y_3832_);
if (v_isSharedCheck_3849_ == 0)
{
v___x_3843_ = v___y_3832_;
v_isShared_3844_ = v_isSharedCheck_3849_;
goto v_resetjp_3842_;
}
else
{
lean_inc(v_a_3841_);
lean_dec(v___y_3832_);
v___x_3843_ = lean_box(0);
v_isShared_3844_ = v_isSharedCheck_3849_;
goto v_resetjp_3842_;
}
v_resetjp_3842_:
{
lean_object* v_fst_3845_; lean_object* v___x_3847_; 
v_fst_3845_ = lean_ctor_get(v_a_3841_, 0);
lean_inc(v_fst_3845_);
lean_dec(v_a_3841_);
if (v_isShared_3844_ == 0)
{
lean_ctor_set(v___x_3843_, 0, v_fst_3845_);
v___x_3847_ = v___x_3843_;
goto v_reusejp_3846_;
}
else
{
lean_object* v_reuseFailAlloc_3848_; 
v_reuseFailAlloc_3848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3848_, 0, v_fst_3845_);
v___x_3847_ = v_reuseFailAlloc_3848_;
goto v_reusejp_3846_;
}
v_reusejp_3846_:
{
return v___x_3847_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__1(lean_object* v_mutex_3850_, lean_object* v_x_3851_){
_start:
{
lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; 
v___x_3853_ = lean_io_basemutex_unlock(v_mutex_3850_);
v___x_3854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3854_, 0, v___x_3853_);
v___x_3855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3855_, 0, v___x_3854_);
return v___x_3855_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__1___boxed(lean_object* v_mutex_3856_, lean_object* v_x_3857_, lean_object* v___y_3858_){
_start:
{
lean_object* v_res_3859_; 
v_res_3859_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__1(v_mutex_3856_, v_x_3857_);
lean_dec(v_x_3857_);
lean_dec(v_mutex_3856_);
return v_res_3859_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__2(lean_object* v_k_3860_, lean_object* v_ref_3861_, lean_object* v_x_3862_){
_start:
{
if (lean_obj_tag(v_x_3862_) == 0)
{
lean_object* v_a_3864_; lean_object* v___x_3866_; uint8_t v_isShared_3867_; uint8_t v_isSharedCheck_3872_; 
lean_dec(v_ref_3861_);
lean_dec_ref(v_k_3860_);
v_a_3864_ = lean_ctor_get(v_x_3862_, 0);
v_isSharedCheck_3872_ = !lean_is_exclusive(v_x_3862_);
if (v_isSharedCheck_3872_ == 0)
{
v___x_3866_ = v_x_3862_;
v_isShared_3867_ = v_isSharedCheck_3872_;
goto v_resetjp_3865_;
}
else
{
lean_inc(v_a_3864_);
lean_dec(v_x_3862_);
v___x_3866_ = lean_box(0);
v_isShared_3867_ = v_isSharedCheck_3872_;
goto v_resetjp_3865_;
}
v_resetjp_3865_:
{
lean_object* v___x_3869_; 
if (v_isShared_3867_ == 0)
{
v___x_3869_ = v___x_3866_;
goto v_reusejp_3868_;
}
else
{
lean_object* v_reuseFailAlloc_3871_; 
v_reuseFailAlloc_3871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3871_, 0, v_a_3864_);
v___x_3869_ = v_reuseFailAlloc_3871_;
goto v_reusejp_3868_;
}
v_reusejp_3868_:
{
lean_object* v___x_3870_; 
v___x_3870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3870_, 0, v___x_3869_);
return v___x_3870_;
}
}
}
else
{
lean_object* v___x_3873_; 
lean_dec_ref_known(v_x_3862_, 1);
v___x_3873_ = lean_apply_2(v_k_3860_, v_ref_3861_, lean_box(0));
return v___x_3873_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__2___boxed(lean_object* v_k_3874_, lean_object* v_ref_3875_, lean_object* v_x_3876_, lean_object* v___y_3877_){
_start:
{
lean_object* v_res_3878_; 
v_res_3878_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__2(v_k_3874_, v_ref_3875_, v_x_3876_);
return v_res_3878_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__3(lean_object* v_mutex_3879_, lean_object* v___f_3880_){
_start:
{
lean_object* v___x_3882_; uint8_t v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; 
v___x_3882_ = lean_unsigned_to_nat(0u);
v___x_3883_ = 0;
v___x_3884_ = lean_io_basemutex_lock(v_mutex_3879_);
v___x_3885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3885_, 0, v___x_3884_);
v___x_3886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3886_, 0, v___x_3885_);
v___x_3887_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3882_, v___x_3883_, v___x_3886_, v___f_3880_);
return v___x_3887_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__3___boxed(lean_object* v_mutex_3888_, lean_object* v___f_3889_, lean_object* v___y_3890_){
_start:
{
lean_object* v_res_3891_; 
v_res_3891_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__3(v_mutex_3888_, v___f_3889_);
lean_dec(v_mutex_3888_);
return v_res_3891_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg(lean_object* v_mutex_3893_, lean_object* v_k_3894_){
_start:
{
lean_object* v_ref_3896_; lean_object* v_mutex_3897_; lean_object* v___f_3898_; lean_object* v___f_3899_; lean_object* v___f_3900_; lean_object* v___f_3901_; lean_object* v___x_3902_; uint8_t v___x_3903_; lean_object* v___x_3904_; lean_object* v___y_3906_; 
v_ref_3896_ = lean_ctor_get(v_mutex_3893_, 0);
lean_inc(v_ref_3896_);
v_mutex_3897_ = lean_ctor_get(v_mutex_3893_, 1);
lean_inc_n(v_mutex_3897_, 2);
lean_dec_ref(v_mutex_3893_);
v___f_3898_ = ((lean_object*)(l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___closed__0));
v___f_3899_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3899_, 0, v_mutex_3897_);
v___f_3900_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_3900_, 0, v_k_3894_);
lean_closure_set(v___f_3900_, 1, v_ref_3896_);
v___f_3901_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_3901_, 0, v_mutex_3897_);
lean_closure_set(v___f_3901_, 1, v___f_3900_);
v___x_3902_ = lean_unsigned_to_nat(0u);
v___x_3903_ = 0;
v___x_3904_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v___f_3901_, v___f_3899_, v___x_3902_, v___x_3903_);
if (lean_obj_tag(v___x_3904_) == 0)
{
lean_object* v_a_3908_; 
v_a_3908_ = lean_ctor_get(v___x_3904_, 0);
lean_inc(v_a_3908_);
lean_dec_ref_known(v___x_3904_, 1);
if (lean_obj_tag(v_a_3908_) == 0)
{
lean_object* v_a_3909_; lean_object* v___x_3911_; uint8_t v_isShared_3912_; uint8_t v_isSharedCheck_3916_; 
v_a_3909_ = lean_ctor_get(v_a_3908_, 0);
v_isSharedCheck_3916_ = !lean_is_exclusive(v_a_3908_);
if (v_isSharedCheck_3916_ == 0)
{
v___x_3911_ = v_a_3908_;
v_isShared_3912_ = v_isSharedCheck_3916_;
goto v_resetjp_3910_;
}
else
{
lean_inc(v_a_3909_);
lean_dec(v_a_3908_);
v___x_3911_ = lean_box(0);
v_isShared_3912_ = v_isSharedCheck_3916_;
goto v_resetjp_3910_;
}
v_resetjp_3910_:
{
lean_object* v___x_3914_; 
if (v_isShared_3912_ == 0)
{
v___x_3914_ = v___x_3911_;
goto v_reusejp_3913_;
}
else
{
lean_object* v_reuseFailAlloc_3915_; 
v_reuseFailAlloc_3915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3915_, 0, v_a_3909_);
v___x_3914_ = v_reuseFailAlloc_3915_;
goto v_reusejp_3913_;
}
v_reusejp_3913_:
{
v___y_3906_ = v___x_3914_;
goto v___jp_3905_;
}
}
}
else
{
lean_object* v_a_3917_; lean_object* v___x_3919_; uint8_t v_isShared_3920_; uint8_t v_isSharedCheck_3925_; 
v_a_3917_ = lean_ctor_get(v_a_3908_, 0);
v_isSharedCheck_3925_ = !lean_is_exclusive(v_a_3908_);
if (v_isSharedCheck_3925_ == 0)
{
v___x_3919_ = v_a_3908_;
v_isShared_3920_ = v_isSharedCheck_3925_;
goto v_resetjp_3918_;
}
else
{
lean_inc(v_a_3917_);
lean_dec(v_a_3908_);
v___x_3919_ = lean_box(0);
v_isShared_3920_ = v_isSharedCheck_3925_;
goto v_resetjp_3918_;
}
v_resetjp_3918_:
{
lean_object* v_fst_3921_; lean_object* v___x_3923_; 
v_fst_3921_ = lean_ctor_get(v_a_3917_, 0);
lean_inc(v_fst_3921_);
lean_dec(v_a_3917_);
if (v_isShared_3920_ == 0)
{
lean_ctor_set(v___x_3919_, 0, v_fst_3921_);
v___x_3923_ = v___x_3919_;
goto v_reusejp_3922_;
}
else
{
lean_object* v_reuseFailAlloc_3924_; 
v_reuseFailAlloc_3924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3924_, 0, v_fst_3921_);
v___x_3923_ = v_reuseFailAlloc_3924_;
goto v_reusejp_3922_;
}
v_reusejp_3922_:
{
v___y_3906_ = v___x_3923_;
goto v___jp_3905_;
}
}
}
}
else
{
lean_object* v_a_3926_; lean_object* v___x_3928_; uint8_t v_isShared_3929_; uint8_t v_isSharedCheck_3934_; 
v_a_3926_ = lean_ctor_get(v___x_3904_, 0);
v_isSharedCheck_3934_ = !lean_is_exclusive(v___x_3904_);
if (v_isSharedCheck_3934_ == 0)
{
v___x_3928_ = v___x_3904_;
v_isShared_3929_ = v_isSharedCheck_3934_;
goto v_resetjp_3927_;
}
else
{
lean_inc(v_a_3926_);
lean_dec(v___x_3904_);
v___x_3928_ = lean_box(0);
v_isShared_3929_ = v_isSharedCheck_3934_;
goto v_resetjp_3927_;
}
v_resetjp_3927_:
{
lean_object* v___x_3930_; lean_object* v___x_3932_; 
v___x_3930_ = lean_task_map(v___f_3898_, v_a_3926_, v___x_3902_, v___x_3903_);
if (v_isShared_3929_ == 0)
{
lean_ctor_set(v___x_3928_, 0, v___x_3930_);
v___x_3932_ = v___x_3928_;
goto v_reusejp_3931_;
}
else
{
lean_object* v_reuseFailAlloc_3933_; 
v_reuseFailAlloc_3933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3933_, 0, v___x_3930_);
v___x_3932_ = v_reuseFailAlloc_3933_;
goto v_reusejp_3931_;
}
v_reusejp_3931_:
{
return v___x_3932_;
}
}
}
v___jp_3905_:
{
lean_object* v___x_3907_; 
v___x_3907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3907_, 0, v___y_3906_);
return v___x_3907_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___boxed(lean_object* v_mutex_3935_, lean_object* v_k_3936_, lean_object* v___y_3937_){
_start:
{
lean_object* v_res_3938_; 
v_res_3938_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg(v_mutex_3935_, v_k_3936_);
return v_res_3938_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2(lean_object* v_00_u03b1_3939_, lean_object* v_00_u03b2_3940_, lean_object* v_mutex_3941_, lean_object* v_k_3942_){
_start:
{
lean_object* v___x_3944_; 
v___x_3944_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg(v_mutex_3941_, v_k_3942_);
return v___x_3944_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___boxed(lean_object* v_00_u03b1_3945_, lean_object* v_00_u03b2_3946_, lean_object* v_mutex_3947_, lean_object* v_k_3948_, lean_object* v___y_3949_){
_start:
{
lean_object* v_res_3950_; 
v_res_3950_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2(v_00_u03b1_3945_, v_00_u03b2_3946_, v_mutex_3947_, v_k_3948_);
return v_res_3950_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0(lean_object* v_producers_3955_, lean_object* v_capacity_3956_, lean_object* v_size_3957_, lean_object* v_buffer_3958_, lean_object* v_write_3959_, lean_object* v_read_3960_, lean_object* v_receivers_3961_, lean_object* v_nextId_3962_, uint8_t v_closed_3963_, lean_object* v_pos_3964_, lean_object* v___y_3965_, lean_object* v_x_3966_){
_start:
{
if (lean_obj_tag(v_x_3966_) == 0)
{
lean_object* v_a_3968_; lean_object* v___x_3970_; uint8_t v_isShared_3971_; uint8_t v_isSharedCheck_3976_; 
lean_dec(v_pos_3964_);
lean_dec(v_nextId_3962_);
lean_dec(v_receivers_3961_);
lean_dec(v_read_3960_);
lean_dec(v_write_3959_);
lean_dec_ref(v_buffer_3958_);
lean_dec(v_size_3957_);
lean_dec(v_capacity_3956_);
lean_dec_ref(v_producers_3955_);
v_a_3968_ = lean_ctor_get(v_x_3966_, 0);
v_isSharedCheck_3976_ = !lean_is_exclusive(v_x_3966_);
if (v_isSharedCheck_3976_ == 0)
{
v___x_3970_ = v_x_3966_;
v_isShared_3971_ = v_isSharedCheck_3976_;
goto v_resetjp_3969_;
}
else
{
lean_inc(v_a_3968_);
lean_dec(v_x_3966_);
v___x_3970_ = lean_box(0);
v_isShared_3971_ = v_isSharedCheck_3976_;
goto v_resetjp_3969_;
}
v_resetjp_3969_:
{
lean_object* v___x_3973_; 
if (v_isShared_3971_ == 0)
{
v___x_3973_ = v___x_3970_;
goto v_reusejp_3972_;
}
else
{
lean_object* v_reuseFailAlloc_3975_; 
v_reuseFailAlloc_3975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3975_, 0, v_a_3968_);
v___x_3973_ = v_reuseFailAlloc_3975_;
goto v_reusejp_3972_;
}
v_reusejp_3972_:
{
lean_object* v___x_3974_; 
v___x_3974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3974_, 0, v___x_3973_);
return v___x_3974_;
}
}
}
else
{
lean_object* v_a_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; 
v_a_3977_ = lean_ctor_get(v_x_3966_, 0);
lean_inc(v_a_3977_);
lean_dec_ref_known(v_x_3966_, 1);
v___x_3978_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_3978_, 0, v_producers_3955_);
lean_ctor_set(v___x_3978_, 1, v_a_3977_);
lean_ctor_set(v___x_3978_, 2, v_capacity_3956_);
lean_ctor_set(v___x_3978_, 3, v_size_3957_);
lean_ctor_set(v___x_3978_, 4, v_buffer_3958_);
lean_ctor_set(v___x_3978_, 5, v_write_3959_);
lean_ctor_set(v___x_3978_, 6, v_read_3960_);
lean_ctor_set(v___x_3978_, 7, v_receivers_3961_);
lean_ctor_set(v___x_3978_, 8, v_nextId_3962_);
lean_ctor_set(v___x_3978_, 9, v_pos_3964_);
lean_ctor_set_uint8(v___x_3978_, sizeof(void*)*10, v_closed_3963_);
v___x_3979_ = lean_st_ref_swap(v___y_3965_, v___x_3978_);
lean_dec(v___x_3979_);
v___x_3980_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___closed__1));
return v___x_3980_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___boxed(lean_object* v_producers_3981_, lean_object* v_capacity_3982_, lean_object* v_size_3983_, lean_object* v_buffer_3984_, lean_object* v_write_3985_, lean_object* v_read_3986_, lean_object* v_receivers_3987_, lean_object* v_nextId_3988_, lean_object* v_closed_3989_, lean_object* v_pos_3990_, lean_object* v___y_3991_, lean_object* v_x_3992_, lean_object* v___y_3993_){
_start:
{
uint8_t v_closed_boxed_3994_; lean_object* v_res_3995_; 
v_closed_boxed_3994_ = lean_unbox(v_closed_3989_);
v_res_3995_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0(v_producers_3981_, v_capacity_3982_, v_size_3983_, v_buffer_3984_, v_write_3985_, v_read_3986_, v_receivers_3987_, v_nextId_3988_, v_closed_boxed_3994_, v_pos_3990_, v___y_3991_, v_x_3992_);
lean_dec(v___y_3991_);
return v_res_3995_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__0(lean_object* v_x_3996_){
_start:
{
if (lean_obj_tag(v_x_3996_) == 0)
{
lean_object* v___x_3998_; 
v___x_3998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3998_, 0, v_x_3996_);
return v___x_3998_;
}
else
{
lean_object* v_a_3999_; lean_object* v___x_4001_; uint8_t v_isShared_4002_; uint8_t v_isSharedCheck_4008_; 
v_a_3999_ = lean_ctor_get(v_x_3996_, 0);
v_isSharedCheck_4008_ = !lean_is_exclusive(v_x_3996_);
if (v_isSharedCheck_4008_ == 0)
{
v___x_4001_ = v_x_3996_;
v_isShared_4002_ = v_isSharedCheck_4008_;
goto v_resetjp_4000_;
}
else
{
lean_inc(v_a_3999_);
lean_dec(v_x_3996_);
v___x_4001_ = lean_box(0);
v_isShared_4002_ = v_isSharedCheck_4008_;
goto v_resetjp_4000_;
}
v_resetjp_4000_:
{
lean_object* v___x_4003_; lean_object* v___x_4005_; 
v___x_4003_ = l_List_reverse___redArg(v_a_3999_);
if (v_isShared_4002_ == 0)
{
lean_ctor_set(v___x_4001_, 0, v___x_4003_);
v___x_4005_ = v___x_4001_;
goto v_reusejp_4004_;
}
else
{
lean_object* v_reuseFailAlloc_4007_; 
v_reuseFailAlloc_4007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4007_, 0, v___x_4003_);
v___x_4005_ = v_reuseFailAlloc_4007_;
goto v_reusejp_4004_;
}
v_reusejp_4004_:
{
lean_object* v___x_4006_; 
v___x_4006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4006_, 0, v___x_4005_);
return v___x_4006_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__0___boxed(lean_object* v_x_4009_, lean_object* v___y_4010_){
_start:
{
lean_object* v_res_4011_; 
v_res_4011_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__0(v_x_4009_);
return v_res_4011_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__2(lean_object* v_a_4012_, lean_object* v___x_4013_, lean_object* v_x_4014_){
_start:
{
if (lean_obj_tag(v_x_4014_) == 0)
{
lean_object* v_a_4016_; lean_object* v___x_4018_; uint8_t v_isShared_4019_; uint8_t v_isSharedCheck_4024_; 
lean_dec(v___x_4013_);
lean_dec(v_a_4012_);
v_a_4016_ = lean_ctor_get(v_x_4014_, 0);
v_isSharedCheck_4024_ = !lean_is_exclusive(v_x_4014_);
if (v_isSharedCheck_4024_ == 0)
{
v___x_4018_ = v_x_4014_;
v_isShared_4019_ = v_isSharedCheck_4024_;
goto v_resetjp_4017_;
}
else
{
lean_inc(v_a_4016_);
lean_dec(v_x_4014_);
v___x_4018_ = lean_box(0);
v_isShared_4019_ = v_isSharedCheck_4024_;
goto v_resetjp_4017_;
}
v_resetjp_4017_:
{
lean_object* v___x_4021_; 
if (v_isShared_4019_ == 0)
{
v___x_4021_ = v___x_4018_;
goto v_reusejp_4020_;
}
else
{
lean_object* v_reuseFailAlloc_4023_; 
v_reuseFailAlloc_4023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4023_, 0, v_a_4016_);
v___x_4021_ = v_reuseFailAlloc_4023_;
goto v_reusejp_4020_;
}
v_reusejp_4020_:
{
lean_object* v___x_4022_; 
v___x_4022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4022_, 0, v___x_4021_);
return v___x_4022_;
}
}
}
else
{
lean_object* v_a_4025_; lean_object* v___x_4027_; uint8_t v_isShared_4028_; uint8_t v_isSharedCheck_4041_; 
v_a_4025_ = lean_ctor_get(v_x_4014_, 0);
v_isSharedCheck_4041_ = !lean_is_exclusive(v_x_4014_);
if (v_isSharedCheck_4041_ == 0)
{
v___x_4027_ = v_x_4014_;
v_isShared_4028_ = v_isSharedCheck_4041_;
goto v_resetjp_4026_;
}
else
{
lean_inc(v_a_4025_);
lean_dec(v_x_4014_);
v___x_4027_ = lean_box(0);
v_isShared_4028_ = v_isSharedCheck_4041_;
goto v_resetjp_4026_;
}
v_resetjp_4026_:
{
uint8_t v___x_4029_; 
v___x_4029_ = l_List_isEmpty___redArg(v_a_4012_);
if (v___x_4029_ == 0)
{
lean_object* v___x_4030_; lean_object* v___x_4032_; 
lean_dec(v___x_4013_);
v___x_4030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4030_, 0, v_a_4025_);
lean_ctor_set(v___x_4030_, 1, v_a_4012_);
if (v_isShared_4028_ == 0)
{
lean_ctor_set(v___x_4027_, 0, v___x_4030_);
v___x_4032_ = v___x_4027_;
goto v_reusejp_4031_;
}
else
{
lean_object* v_reuseFailAlloc_4034_; 
v_reuseFailAlloc_4034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4034_, 0, v___x_4030_);
v___x_4032_ = v_reuseFailAlloc_4034_;
goto v_reusejp_4031_;
}
v_reusejp_4031_:
{
lean_object* v___x_4033_; 
v___x_4033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4033_, 0, v___x_4032_);
return v___x_4033_;
}
}
else
{
lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4038_; 
lean_dec(v_a_4012_);
v___x_4035_ = l_List_reverse___redArg(v_a_4025_);
v___x_4036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4036_, 0, v___x_4013_);
lean_ctor_set(v___x_4036_, 1, v___x_4035_);
if (v_isShared_4028_ == 0)
{
lean_ctor_set(v___x_4027_, 0, v___x_4036_);
v___x_4038_ = v___x_4027_;
goto v_reusejp_4037_;
}
else
{
lean_object* v_reuseFailAlloc_4040_; 
v_reuseFailAlloc_4040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4040_, 0, v___x_4036_);
v___x_4038_ = v_reuseFailAlloc_4040_;
goto v_reusejp_4037_;
}
v_reusejp_4037_:
{
lean_object* v___x_4039_; 
v___x_4039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4039_, 0, v___x_4038_);
return v___x_4039_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__2___boxed(lean_object* v_a_4042_, lean_object* v___x_4043_, lean_object* v_x_4044_, lean_object* v___y_4045_){
_start:
{
lean_object* v_res_4046_; 
v_res_4046_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__2(v_a_4042_, v___x_4043_, v_x_4044_);
return v_res_4046_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___lam__1(lean_object* v_x_4047_){
_start:
{
uint8_t v___y_4050_; 
if (lean_obj_tag(v_x_4047_) == 0)
{
lean_object* v___x_4054_; 
v___x_4054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4054_, 0, v_x_4047_);
return v___x_4054_;
}
else
{
lean_object* v_a_4055_; uint8_t v___x_4056_; 
v_a_4055_ = lean_ctor_get(v_x_4047_, 0);
lean_inc(v_a_4055_);
lean_dec_ref_known(v_x_4047_, 1);
v___x_4056_ = lean_unbox(v_a_4055_);
lean_dec(v_a_4055_);
if (v___x_4056_ == 0)
{
uint8_t v___x_4057_; 
v___x_4057_ = 1;
v___y_4050_ = v___x_4057_;
goto v___jp_4049_;
}
else
{
uint8_t v___x_4058_; 
v___x_4058_ = 0;
v___y_4050_ = v___x_4058_;
goto v___jp_4049_;
}
}
v___jp_4049_:
{
lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; 
v___x_4051_ = lean_box(v___y_4050_);
v___x_4052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4052_, 0, v___x_4051_);
v___x_4053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4053_, 0, v___x_4052_);
return v___x_4053_;
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___lam__1___boxed(lean_object* v_x_4059_, lean_object* v___y_4060_){
_start:
{
lean_object* v_res_4061_; 
v_res_4061_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___lam__1(v_x_4059_);
return v_res_4061_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___lam__0___boxed(lean_object* v_tail_4062_, lean_object* v_x_4063_, lean_object* v_head_4064_, lean_object* v_x_4065_, lean_object* v___y_4066_){
_start:
{
lean_object* v_res_4067_; 
v_res_4067_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___lam__0(v_tail_4062_, v_x_4063_, v_head_4064_, v_x_4065_);
return v_res_4067_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg(lean_object* v_x_4074_, lean_object* v_x_4075_){
_start:
{
if (lean_obj_tag(v_x_4074_) == 0)
{
lean_object* v___x_4077_; lean_object* v___x_4078_; 
v___x_4077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4077_, 0, v_x_4075_);
v___x_4078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4078_, 0, v___x_4077_);
return v___x_4078_;
}
else
{
lean_object* v_head_4079_; lean_object* v_tail_4080_; lean_object* v_waiter_4081_; lean_object* v___f_4082_; lean_object* v___x_4083_; uint8_t v___x_4084_; 
v_head_4079_ = lean_ctor_get(v_x_4074_, 0);
lean_inc(v_head_4079_);
v_tail_4080_ = lean_ctor_get(v_x_4074_, 1);
lean_inc(v_tail_4080_);
lean_dec_ref_known(v_x_4074_, 2);
v_waiter_4081_ = lean_ctor_get(v_head_4079_, 1);
lean_inc(v_waiter_4081_);
v___f_4082_ = lean_alloc_closure((void*)(l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_4082_, 0, v_tail_4080_);
lean_closure_set(v___f_4082_, 1, v_x_4075_);
lean_closure_set(v___f_4082_, 2, v_head_4079_);
v___x_4083_ = lean_unsigned_to_nat(0u);
v___x_4084_ = 0;
if (lean_obj_tag(v_waiter_4081_) == 0)
{
lean_object* v___x_4085_; lean_object* v___x_4086_; 
v___x_4085_ = ((lean_object*)(l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___closed__1));
v___x_4086_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4083_, v___x_4084_, v___x_4085_, v___f_4082_);
return v___x_4086_;
}
else
{
lean_object* v_val_4087_; lean_object* v___x_4089_; uint8_t v_isShared_4090_; uint8_t v_isSharedCheck_4100_; 
v_val_4087_ = lean_ctor_get(v_waiter_4081_, 0);
v_isSharedCheck_4100_ = !lean_is_exclusive(v_waiter_4081_);
if (v_isSharedCheck_4100_ == 0)
{
v___x_4089_ = v_waiter_4081_;
v_isShared_4090_ = v_isSharedCheck_4100_;
goto v_resetjp_4088_;
}
else
{
lean_inc(v_val_4087_);
lean_dec(v_waiter_4081_);
v___x_4089_ = lean_box(0);
v_isShared_4090_ = v_isSharedCheck_4100_;
goto v_resetjp_4088_;
}
v_resetjp_4088_:
{
lean_object* v_finished_4091_; lean_object* v___f_4092_; lean_object* v___x_4093_; lean_object* v___x_4095_; 
v_finished_4091_ = lean_ctor_get(v_val_4087_, 0);
lean_inc(v_finished_4091_);
lean_dec(v_val_4087_);
v___f_4092_ = ((lean_object*)(l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___closed__2));
v___x_4093_ = lean_st_ref_get(v_finished_4091_);
lean_dec(v_finished_4091_);
if (v_isShared_4090_ == 0)
{
lean_ctor_set(v___x_4089_, 0, v___x_4093_);
v___x_4095_ = v___x_4089_;
goto v_reusejp_4094_;
}
else
{
lean_object* v_reuseFailAlloc_4099_; 
v_reuseFailAlloc_4099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4099_, 0, v___x_4093_);
v___x_4095_ = v_reuseFailAlloc_4099_;
goto v_reusejp_4094_;
}
v_reusejp_4094_:
{
lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; 
v___x_4096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4096_, 0, v___x_4095_);
v___x_4097_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4083_, v___x_4084_, v___x_4096_, v___f_4092_);
v___x_4098_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4083_, v___x_4084_, v___x_4097_, v___f_4082_);
return v___x_4098_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___lam__0(lean_object* v_tail_4101_, lean_object* v_x_4102_, lean_object* v_head_4103_, lean_object* v_x_4104_){
_start:
{
if (lean_obj_tag(v_x_4104_) == 0)
{
lean_object* v_a_4106_; lean_object* v___x_4108_; uint8_t v_isShared_4109_; uint8_t v_isSharedCheck_4114_; 
lean_dec_ref(v_head_4103_);
lean_dec(v_x_4102_);
lean_dec(v_tail_4101_);
v_a_4106_ = lean_ctor_get(v_x_4104_, 0);
v_isSharedCheck_4114_ = !lean_is_exclusive(v_x_4104_);
if (v_isSharedCheck_4114_ == 0)
{
v___x_4108_ = v_x_4104_;
v_isShared_4109_ = v_isSharedCheck_4114_;
goto v_resetjp_4107_;
}
else
{
lean_inc(v_a_4106_);
lean_dec(v_x_4104_);
v___x_4108_ = lean_box(0);
v_isShared_4109_ = v_isSharedCheck_4114_;
goto v_resetjp_4107_;
}
v_resetjp_4107_:
{
lean_object* v___x_4111_; 
if (v_isShared_4109_ == 0)
{
v___x_4111_ = v___x_4108_;
goto v_reusejp_4110_;
}
else
{
lean_object* v_reuseFailAlloc_4113_; 
v_reuseFailAlloc_4113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4113_, 0, v_a_4106_);
v___x_4111_ = v_reuseFailAlloc_4113_;
goto v_reusejp_4110_;
}
v_reusejp_4110_:
{
lean_object* v___x_4112_; 
v___x_4112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4112_, 0, v___x_4111_);
return v___x_4112_;
}
}
}
else
{
lean_object* v_a_4115_; uint8_t v___x_4116_; 
v_a_4115_ = lean_ctor_get(v_x_4104_, 0);
lean_inc(v_a_4115_);
lean_dec_ref_known(v_x_4104_, 1);
v___x_4116_ = lean_unbox(v_a_4115_);
lean_dec(v_a_4115_);
if (v___x_4116_ == 0)
{
lean_object* v___x_4117_; 
lean_dec_ref(v_head_4103_);
v___x_4117_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg(v_tail_4101_, v_x_4102_);
return v___x_4117_;
}
else
{
lean_object* v___x_4118_; lean_object* v___x_4119_; 
v___x_4118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4118_, 0, v_head_4103_);
lean_ctor_set(v___x_4118_, 1, v_x_4102_);
v___x_4119_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg(v_tail_4101_, v___x_4118_);
return v___x_4119_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___boxed(lean_object* v_x_4120_, lean_object* v_x_4121_, lean_object* v___y_4122_){
_start:
{
lean_object* v_res_4123_; 
v_res_4123_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg(v_x_4120_, v_x_4121_);
return v_res_4123_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__1(lean_object* v___x_4124_, lean_object* v_eList_4125_, lean_object* v___f_4126_, lean_object* v_x_4127_){
_start:
{
if (lean_obj_tag(v_x_4127_) == 0)
{
lean_object* v_a_4129_; lean_object* v___x_4131_; uint8_t v_isShared_4132_; uint8_t v_isSharedCheck_4137_; 
lean_dec_ref(v___f_4126_);
lean_dec(v_eList_4125_);
lean_dec(v___x_4124_);
v_a_4129_ = lean_ctor_get(v_x_4127_, 0);
v_isSharedCheck_4137_ = !lean_is_exclusive(v_x_4127_);
if (v_isSharedCheck_4137_ == 0)
{
v___x_4131_ = v_x_4127_;
v_isShared_4132_ = v_isSharedCheck_4137_;
goto v_resetjp_4130_;
}
else
{
lean_inc(v_a_4129_);
lean_dec(v_x_4127_);
v___x_4131_ = lean_box(0);
v_isShared_4132_ = v_isSharedCheck_4137_;
goto v_resetjp_4130_;
}
v_resetjp_4130_:
{
lean_object* v___x_4134_; 
if (v_isShared_4132_ == 0)
{
v___x_4134_ = v___x_4131_;
goto v_reusejp_4133_;
}
else
{
lean_object* v_reuseFailAlloc_4136_; 
v_reuseFailAlloc_4136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4136_, 0, v_a_4129_);
v___x_4134_ = v_reuseFailAlloc_4136_;
goto v_reusejp_4133_;
}
v_reusejp_4133_:
{
lean_object* v___x_4135_; 
v___x_4135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4135_, 0, v___x_4134_);
return v___x_4135_;
}
}
}
else
{
lean_object* v_a_4138_; lean_object* v___f_4139_; lean_object* v___x_4140_; uint8_t v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v___x_4144_; 
v_a_4138_ = lean_ctor_get(v_x_4127_, 0);
lean_inc(v_a_4138_);
lean_dec_ref_known(v_x_4127_, 1);
lean_inc(v___x_4124_);
v___f_4139_ = lean_alloc_closure((void*)(l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_4139_, 0, v_a_4138_);
lean_closure_set(v___f_4139_, 1, v___x_4124_);
v___x_4140_ = lean_unsigned_to_nat(0u);
v___x_4141_ = 0;
v___x_4142_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg(v_eList_4125_, v___x_4124_);
v___x_4143_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4140_, v___x_4141_, v___x_4142_, v___f_4126_);
v___x_4144_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4140_, v___x_4141_, v___x_4143_, v___f_4139_);
return v___x_4144_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__1___boxed(lean_object* v___x_4145_, lean_object* v_eList_4146_, lean_object* v___f_4147_, lean_object* v_x_4148_, lean_object* v___y_4149_){
_start:
{
lean_object* v_res_4150_; 
v_res_4150_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__1(v___x_4145_, v_eList_4146_, v___f_4147_, v_x_4148_);
return v_res_4150_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg(lean_object* v_q_4152_, lean_object* v___y_4153_){
_start:
{
lean_object* v_eList_4155_; lean_object* v_dList_4156_; lean_object* v___f_4157_; lean_object* v___x_4158_; lean_object* v___f_4159_; lean_object* v___x_4160_; uint8_t v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; 
v_eList_4155_ = lean_ctor_get(v_q_4152_, 0);
lean_inc(v_eList_4155_);
v_dList_4156_ = lean_ctor_get(v_q_4152_, 1);
lean_inc(v_dList_4156_);
lean_dec_ref(v_q_4152_);
v___f_4157_ = ((lean_object*)(l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___closed__0));
v___x_4158_ = lean_box(0);
v___f_4159_ = lean_alloc_closure((void*)(l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_4159_, 0, v___x_4158_);
lean_closure_set(v___f_4159_, 1, v_eList_4155_);
lean_closure_set(v___f_4159_, 2, v___f_4157_);
v___x_4160_ = lean_unsigned_to_nat(0u);
v___x_4161_ = 0;
v___x_4162_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg(v_dList_4156_, v___x_4158_);
v___x_4163_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4160_, v___x_4161_, v___x_4162_, v___f_4157_);
v___x_4164_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4160_, v___x_4161_, v___x_4163_, v___f_4159_);
return v___x_4164_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___boxed(lean_object* v_q_4165_, lean_object* v___y_4166_, lean_object* v___y_4167_){
_start:
{
lean_object* v_res_4168_; 
v_res_4168_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg(v_q_4165_, v___y_4166_);
lean_dec(v___y_4166_);
return v_res_4168_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__1(lean_object* v___y_4169_, lean_object* v_x_4170_){
_start:
{
if (lean_obj_tag(v_x_4170_) == 0)
{
lean_object* v_a_4172_; lean_object* v___x_4174_; uint8_t v_isShared_4175_; uint8_t v_isSharedCheck_4180_; 
v_a_4172_ = lean_ctor_get(v_x_4170_, 0);
v_isSharedCheck_4180_ = !lean_is_exclusive(v_x_4170_);
if (v_isSharedCheck_4180_ == 0)
{
v___x_4174_ = v_x_4170_;
v_isShared_4175_ = v_isSharedCheck_4180_;
goto v_resetjp_4173_;
}
else
{
lean_inc(v_a_4172_);
lean_dec(v_x_4170_);
v___x_4174_ = lean_box(0);
v_isShared_4175_ = v_isSharedCheck_4180_;
goto v_resetjp_4173_;
}
v_resetjp_4173_:
{
lean_object* v___x_4177_; 
if (v_isShared_4175_ == 0)
{
v___x_4177_ = v___x_4174_;
goto v_reusejp_4176_;
}
else
{
lean_object* v_reuseFailAlloc_4179_; 
v_reuseFailAlloc_4179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4179_, 0, v_a_4172_);
v___x_4177_ = v_reuseFailAlloc_4179_;
goto v_reusejp_4176_;
}
v_reusejp_4176_:
{
lean_object* v___x_4178_; 
v___x_4178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4178_, 0, v___x_4177_);
return v___x_4178_;
}
}
}
else
{
lean_object* v_a_4181_; lean_object* v_producers_4182_; lean_object* v_waiters_4183_; lean_object* v_capacity_4184_; lean_object* v_size_4185_; lean_object* v_buffer_4186_; lean_object* v_write_4187_; lean_object* v_read_4188_; lean_object* v_receivers_4189_; lean_object* v_nextId_4190_; uint8_t v_closed_4191_; lean_object* v_pos_4192_; lean_object* v___x_4193_; lean_object* v___f_4194_; lean_object* v___x_4195_; uint8_t v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; 
v_a_4181_ = lean_ctor_get(v_x_4170_, 0);
lean_inc(v_a_4181_);
lean_dec_ref_known(v_x_4170_, 1);
v_producers_4182_ = lean_ctor_get(v_a_4181_, 0);
lean_inc_ref(v_producers_4182_);
v_waiters_4183_ = lean_ctor_get(v_a_4181_, 1);
lean_inc_ref(v_waiters_4183_);
v_capacity_4184_ = lean_ctor_get(v_a_4181_, 2);
lean_inc(v_capacity_4184_);
v_size_4185_ = lean_ctor_get(v_a_4181_, 3);
lean_inc(v_size_4185_);
v_buffer_4186_ = lean_ctor_get(v_a_4181_, 4);
lean_inc_ref(v_buffer_4186_);
v_write_4187_ = lean_ctor_get(v_a_4181_, 5);
lean_inc(v_write_4187_);
v_read_4188_ = lean_ctor_get(v_a_4181_, 6);
lean_inc(v_read_4188_);
v_receivers_4189_ = lean_ctor_get(v_a_4181_, 7);
lean_inc(v_receivers_4189_);
v_nextId_4190_ = lean_ctor_get(v_a_4181_, 8);
lean_inc(v_nextId_4190_);
v_closed_4191_ = lean_ctor_get_uint8(v_a_4181_, sizeof(void*)*10);
v_pos_4192_ = lean_ctor_get(v_a_4181_, 9);
lean_inc(v_pos_4192_);
lean_dec(v_a_4181_);
v___x_4193_ = lean_box(v_closed_4191_);
lean_inc(v___y_4169_);
v___f_4194_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___boxed), 13, 11);
lean_closure_set(v___f_4194_, 0, v_producers_4182_);
lean_closure_set(v___f_4194_, 1, v_capacity_4184_);
lean_closure_set(v___f_4194_, 2, v_size_4185_);
lean_closure_set(v___f_4194_, 3, v_buffer_4186_);
lean_closure_set(v___f_4194_, 4, v_write_4187_);
lean_closure_set(v___f_4194_, 5, v_read_4188_);
lean_closure_set(v___f_4194_, 6, v_receivers_4189_);
lean_closure_set(v___f_4194_, 7, v_nextId_4190_);
lean_closure_set(v___f_4194_, 8, v___x_4193_);
lean_closure_set(v___f_4194_, 9, v_pos_4192_);
lean_closure_set(v___f_4194_, 10, v___y_4169_);
v___x_4195_ = lean_unsigned_to_nat(0u);
v___x_4196_ = 0;
v___x_4197_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg(v_waiters_4183_, v___y_4169_);
v___x_4198_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4195_, v___x_4196_, v___x_4197_, v___f_4194_);
return v___x_4198_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__1___boxed(lean_object* v___y_4199_, lean_object* v_x_4200_, lean_object* v___y_4201_){
_start:
{
lean_object* v_res_4202_; 
v_res_4202_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__1(v___y_4199_, v_x_4200_);
lean_dec(v___y_4199_);
return v_res_4202_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__2(lean_object* v___y_4203_){
_start:
{
lean_object* v___f_4205_; lean_object* v___x_4206_; uint8_t v___x_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; lean_object* v___x_4211_; 
lean_inc(v___y_4203_);
v___f_4205_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4205_, 0, v___y_4203_);
v___x_4206_ = lean_unsigned_to_nat(0u);
v___x_4207_ = 0;
v___x_4208_ = lean_st_ref_get(v___y_4203_);
v___x_4209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4209_, 0, v___x_4208_);
v___x_4210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4210_, 0, v___x_4209_);
v___x_4211_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4206_, v___x_4207_, v___x_4210_, v___f_4205_);
return v___x_4211_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__2___boxed(lean_object* v___y_4212_, lean_object* v___y_4213_){
_start:
{
lean_object* v_res_4214_; 
v_res_4214_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__2(v___y_4212_);
lean_dec(v___y_4212_);
return v_res_4214_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__3(lean_object* v_ch_4215_, lean_object* v_waiter_4216_){
_start:
{
lean_object* v_val_4219_; lean_object* v___x_4221_; 
v___x_4221_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg(v_ch_4215_, v_waiter_4216_);
if (lean_obj_tag(v___x_4221_) == 0)
{
lean_object* v_a_4222_; lean_object* v___x_4224_; uint8_t v_isShared_4225_; uint8_t v_isSharedCheck_4229_; 
v_a_4222_ = lean_ctor_get(v___x_4221_, 0);
v_isSharedCheck_4229_ = !lean_is_exclusive(v___x_4221_);
if (v_isSharedCheck_4229_ == 0)
{
v___x_4224_ = v___x_4221_;
v_isShared_4225_ = v_isSharedCheck_4229_;
goto v_resetjp_4223_;
}
else
{
lean_inc(v_a_4222_);
lean_dec(v___x_4221_);
v___x_4224_ = lean_box(0);
v_isShared_4225_ = v_isSharedCheck_4229_;
goto v_resetjp_4223_;
}
v_resetjp_4223_:
{
lean_object* v___x_4227_; 
if (v_isShared_4225_ == 0)
{
lean_ctor_set_tag(v___x_4224_, 1);
v___x_4227_ = v___x_4224_;
goto v_reusejp_4226_;
}
else
{
lean_object* v_reuseFailAlloc_4228_; 
v_reuseFailAlloc_4228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4228_, 0, v_a_4222_);
v___x_4227_ = v_reuseFailAlloc_4228_;
goto v_reusejp_4226_;
}
v_reusejp_4226_:
{
v_val_4219_ = v___x_4227_;
goto v___jp_4218_;
}
}
}
else
{
lean_object* v_a_4230_; lean_object* v___x_4232_; uint8_t v_isShared_4233_; uint8_t v_isSharedCheck_4237_; 
v_a_4230_ = lean_ctor_get(v___x_4221_, 0);
v_isSharedCheck_4237_ = !lean_is_exclusive(v___x_4221_);
if (v_isSharedCheck_4237_ == 0)
{
v___x_4232_ = v___x_4221_;
v_isShared_4233_ = v_isSharedCheck_4237_;
goto v_resetjp_4231_;
}
else
{
lean_inc(v_a_4230_);
lean_dec(v___x_4221_);
v___x_4232_ = lean_box(0);
v_isShared_4233_ = v_isSharedCheck_4237_;
goto v_resetjp_4231_;
}
v_resetjp_4231_:
{
lean_object* v___x_4235_; 
if (v_isShared_4233_ == 0)
{
lean_ctor_set_tag(v___x_4232_, 0);
v___x_4235_ = v___x_4232_;
goto v_reusejp_4234_;
}
else
{
lean_object* v_reuseFailAlloc_4236_; 
v_reuseFailAlloc_4236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4236_, 0, v_a_4230_);
v___x_4235_ = v_reuseFailAlloc_4236_;
goto v_reusejp_4234_;
}
v_reusejp_4234_:
{
v_val_4219_ = v___x_4235_;
goto v___jp_4218_;
}
}
}
v___jp_4218_:
{
lean_object* v___x_4220_; 
v___x_4220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4220_, 0, v_val_4219_);
return v___x_4220_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__3___boxed(lean_object* v_ch_4238_, lean_object* v_waiter_4239_, lean_object* v___y_4240_){
_start:
{
lean_object* v_res_4241_; 
v_res_4241_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__3(v_ch_4238_, v_waiter_4239_);
return v_res_4241_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__4(lean_object* v_x_4242_){
_start:
{
if (lean_obj_tag(v_x_4242_) == 0)
{
lean_object* v_a_4244_; lean_object* v___x_4246_; uint8_t v_isShared_4247_; uint8_t v_isSharedCheck_4252_; 
v_a_4244_ = lean_ctor_get(v_x_4242_, 0);
v_isSharedCheck_4252_ = !lean_is_exclusive(v_x_4242_);
if (v_isSharedCheck_4252_ == 0)
{
v___x_4246_ = v_x_4242_;
v_isShared_4247_ = v_isSharedCheck_4252_;
goto v_resetjp_4245_;
}
else
{
lean_inc(v_a_4244_);
lean_dec(v_x_4242_);
v___x_4246_ = lean_box(0);
v_isShared_4247_ = v_isSharedCheck_4252_;
goto v_resetjp_4245_;
}
v_resetjp_4245_:
{
lean_object* v___x_4249_; 
if (v_isShared_4247_ == 0)
{
v___x_4249_ = v___x_4246_;
goto v_reusejp_4248_;
}
else
{
lean_object* v_reuseFailAlloc_4251_; 
v_reuseFailAlloc_4251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4251_, 0, v_a_4244_);
v___x_4249_ = v_reuseFailAlloc_4251_;
goto v_reusejp_4248_;
}
v_reusejp_4248_:
{
lean_object* v___x_4250_; 
v___x_4250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4250_, 0, v___x_4249_);
return v___x_4250_;
}
}
}
else
{
lean_object* v_a_4253_; lean_object* v___x_4255_; uint8_t v_isShared_4256_; uint8_t v_isSharedCheck_4262_; 
v_a_4253_ = lean_ctor_get(v_x_4242_, 0);
v_isSharedCheck_4262_ = !lean_is_exclusive(v_x_4242_);
if (v_isSharedCheck_4262_ == 0)
{
v___x_4255_ = v_x_4242_;
v_isShared_4256_ = v_isSharedCheck_4262_;
goto v_resetjp_4254_;
}
else
{
lean_inc(v_a_4253_);
lean_dec(v_x_4242_);
v___x_4255_ = lean_box(0);
v_isShared_4256_ = v_isSharedCheck_4262_;
goto v_resetjp_4254_;
}
v_resetjp_4254_:
{
lean_object* v___x_4257_; lean_object* v___x_4259_; 
v___x_4257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4257_, 0, v_a_4253_);
if (v_isShared_4256_ == 0)
{
lean_ctor_set(v___x_4255_, 0, v___x_4257_);
v___x_4259_ = v___x_4255_;
goto v_reusejp_4258_;
}
else
{
lean_object* v_reuseFailAlloc_4261_; 
v_reuseFailAlloc_4261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4261_, 0, v___x_4257_);
v___x_4259_ = v_reuseFailAlloc_4261_;
goto v_reusejp_4258_;
}
v_reusejp_4258_:
{
lean_object* v___x_4260_; 
v___x_4260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4260_, 0, v___x_4259_);
return v___x_4260_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__4___boxed(lean_object* v_x_4263_, lean_object* v___y_4264_){
_start:
{
lean_object* v_res_4265_; 
v_res_4265_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__4(v_x_4263_);
return v_res_4265_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__0(lean_object* v_x_4266_, lean_object* v_x_4267_){
_start:
{
if (lean_obj_tag(v_x_4267_) == 0)
{
lean_object* v_a_4269_; lean_object* v___x_4271_; uint8_t v_isShared_4272_; uint8_t v_isSharedCheck_4277_; 
lean_dec_ref(v_x_4266_);
v_a_4269_ = lean_ctor_get(v_x_4267_, 0);
v_isSharedCheck_4277_ = !lean_is_exclusive(v_x_4267_);
if (v_isSharedCheck_4277_ == 0)
{
v___x_4271_ = v_x_4267_;
v_isShared_4272_ = v_isSharedCheck_4277_;
goto v_resetjp_4270_;
}
else
{
lean_inc(v_a_4269_);
lean_dec(v_x_4267_);
v___x_4271_ = lean_box(0);
v_isShared_4272_ = v_isSharedCheck_4277_;
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
lean_object* v_reuseFailAlloc_4276_; 
v_reuseFailAlloc_4276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4276_, 0, v_a_4269_);
v___x_4274_ = v_reuseFailAlloc_4276_;
goto v_reusejp_4273_;
}
v_reusejp_4273_:
{
lean_object* v___x_4275_; 
v___x_4275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4275_, 0, v___x_4274_);
return v___x_4275_;
}
}
}
else
{
lean_object* v___x_4278_; 
lean_dec_ref_known(v_x_4267_, 1);
v___x_4278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4278_, 0, v_x_4266_);
return v___x_4278_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__0___boxed(lean_object* v_x_4279_, lean_object* v_x_4280_, lean_object* v___y_4281_){
_start:
{
lean_object* v_res_4282_; 
v_res_4282_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__0(v_x_4279_, v_x_4280_);
return v_res_4282_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__1(lean_object* v_a_4285_, lean_object* v_receiverId_4286_, lean_object* v_receivers_4287_, lean_object* v_x_4288_){
_start:
{
if (lean_obj_tag(v_x_4288_) == 0)
{
lean_object* v___x_4290_; 
lean_dec(v_receivers_4287_);
lean_dec(v_receiverId_4286_);
v___x_4290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4290_, 0, v_x_4288_);
return v___x_4290_;
}
else
{
lean_object* v_a_4291_; 
v_a_4291_ = lean_ctor_get(v_x_4288_, 0);
if (lean_obj_tag(v_a_4291_) == 1)
{
lean_object* v___f_4292_; lean_object* v___x_4293_; uint8_t v___x_4294_; lean_object* v___x_4295_; lean_object* v_producers_4296_; lean_object* v_waiters_4297_; lean_object* v_capacity_4298_; lean_object* v_size_4299_; lean_object* v_buffer_4300_; lean_object* v_write_4301_; lean_object* v_read_4302_; lean_object* v_nextId_4303_; uint8_t v_closed_4304_; lean_object* v_pos_4305_; lean_object* v___x_4307_; uint8_t v_isShared_4308_; uint8_t v_isSharedCheck_4316_; 
v___f_4292_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4292_, 0, v_x_4288_);
v___x_4293_ = lean_unsigned_to_nat(0u);
v___x_4294_ = 0;
v___x_4295_ = lean_st_ref_take(v_a_4285_);
v_producers_4296_ = lean_ctor_get(v___x_4295_, 0);
v_waiters_4297_ = lean_ctor_get(v___x_4295_, 1);
v_capacity_4298_ = lean_ctor_get(v___x_4295_, 2);
v_size_4299_ = lean_ctor_get(v___x_4295_, 3);
v_buffer_4300_ = lean_ctor_get(v___x_4295_, 4);
v_write_4301_ = lean_ctor_get(v___x_4295_, 5);
v_read_4302_ = lean_ctor_get(v___x_4295_, 6);
v_nextId_4303_ = lean_ctor_get(v___x_4295_, 8);
v_closed_4304_ = lean_ctor_get_uint8(v___x_4295_, sizeof(void*)*10);
v_pos_4305_ = lean_ctor_get(v___x_4295_, 9);
v_isSharedCheck_4316_ = !lean_is_exclusive(v___x_4295_);
if (v_isSharedCheck_4316_ == 0)
{
lean_object* v_unused_4317_; 
v_unused_4317_ = lean_ctor_get(v___x_4295_, 7);
lean_dec(v_unused_4317_);
v___x_4307_ = v___x_4295_;
v_isShared_4308_ = v_isSharedCheck_4316_;
goto v_resetjp_4306_;
}
else
{
lean_inc(v_pos_4305_);
lean_inc(v_nextId_4303_);
lean_inc(v_read_4302_);
lean_inc(v_write_4301_);
lean_inc(v_buffer_4300_);
lean_inc(v_size_4299_);
lean_inc(v_capacity_4298_);
lean_inc(v_waiters_4297_);
lean_inc(v_producers_4296_);
lean_dec(v___x_4295_);
v___x_4307_ = lean_box(0);
v_isShared_4308_ = v_isSharedCheck_4316_;
goto v_resetjp_4306_;
}
v_resetjp_4306_:
{
lean_object* v___x_4309_; lean_object* v___x_4311_; 
v___x_4309_ = l_Std_DTreeMap_Internal_Impl_Const_modify___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__1(v_receiverId_4286_, v_receivers_4287_);
if (v_isShared_4308_ == 0)
{
lean_ctor_set(v___x_4307_, 7, v___x_4309_);
v___x_4311_ = v___x_4307_;
goto v_reusejp_4310_;
}
else
{
lean_object* v_reuseFailAlloc_4315_; 
v_reuseFailAlloc_4315_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_4315_, 0, v_producers_4296_);
lean_ctor_set(v_reuseFailAlloc_4315_, 1, v_waiters_4297_);
lean_ctor_set(v_reuseFailAlloc_4315_, 2, v_capacity_4298_);
lean_ctor_set(v_reuseFailAlloc_4315_, 3, v_size_4299_);
lean_ctor_set(v_reuseFailAlloc_4315_, 4, v_buffer_4300_);
lean_ctor_set(v_reuseFailAlloc_4315_, 5, v_write_4301_);
lean_ctor_set(v_reuseFailAlloc_4315_, 6, v_read_4302_);
lean_ctor_set(v_reuseFailAlloc_4315_, 7, v___x_4309_);
lean_ctor_set(v_reuseFailAlloc_4315_, 8, v_nextId_4303_);
lean_ctor_set(v_reuseFailAlloc_4315_, 9, v_pos_4305_);
lean_ctor_set_uint8(v_reuseFailAlloc_4315_, sizeof(void*)*10, v_closed_4304_);
v___x_4311_ = v_reuseFailAlloc_4315_;
goto v_reusejp_4310_;
}
v_reusejp_4310_:
{
lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; 
v___x_4312_ = lean_st_ref_put(v_a_4285_, v___x_4311_);
v___x_4313_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___closed__1));
v___x_4314_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4293_, v___x_4294_, v___x_4313_, v___f_4292_);
return v___x_4314_;
}
}
}
else
{
lean_object* v___x_4318_; 
lean_dec_ref_known(v_x_4288_, 1);
lean_dec(v_receivers_4287_);
lean_dec(v_receiverId_4286_);
v___x_4318_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__1___closed__0));
return v___x_4318_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__1___boxed(lean_object* v_a_4319_, lean_object* v_receiverId_4320_, lean_object* v_receivers_4321_, lean_object* v_x_4322_, lean_object* v___y_4323_){
_start:
{
lean_object* v_res_4324_; 
v_res_4324_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__1(v_a_4319_, v_receiverId_4320_, v_receivers_4321_, v_x_4322_);
lean_dec(v_a_4319_);
return v_res_4324_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg___lam__0(lean_object* v_x_4325_){
_start:
{
if (lean_obj_tag(v_x_4325_) == 0)
{
lean_object* v_a_4327_; lean_object* v___x_4329_; uint8_t v_isShared_4330_; uint8_t v_isSharedCheck_4335_; 
v_a_4327_ = lean_ctor_get(v_x_4325_, 0);
v_isSharedCheck_4335_ = !lean_is_exclusive(v_x_4325_);
if (v_isSharedCheck_4335_ == 0)
{
v___x_4329_ = v_x_4325_;
v_isShared_4330_ = v_isSharedCheck_4335_;
goto v_resetjp_4328_;
}
else
{
lean_inc(v_a_4327_);
lean_dec(v_x_4325_);
v___x_4329_ = lean_box(0);
v_isShared_4330_ = v_isSharedCheck_4335_;
goto v_resetjp_4328_;
}
v_resetjp_4328_:
{
lean_object* v___x_4332_; 
if (v_isShared_4330_ == 0)
{
v___x_4332_ = v___x_4329_;
goto v_reusejp_4331_;
}
else
{
lean_object* v_reuseFailAlloc_4334_; 
v_reuseFailAlloc_4334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4334_, 0, v_a_4327_);
v___x_4332_ = v_reuseFailAlloc_4334_;
goto v_reusejp_4331_;
}
v_reusejp_4331_:
{
lean_object* v___x_4333_; 
v___x_4333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4333_, 0, v___x_4332_);
return v___x_4333_;
}
}
}
else
{
lean_object* v_a_4336_; lean_object* v___x_4338_; uint8_t v_isShared_4339_; uint8_t v_isSharedCheck_4348_; 
v_a_4336_ = lean_ctor_get(v_x_4325_, 0);
v_isSharedCheck_4348_ = !lean_is_exclusive(v_x_4325_);
if (v_isSharedCheck_4348_ == 0)
{
v___x_4338_ = v_x_4325_;
v_isShared_4339_ = v_isSharedCheck_4348_;
goto v_resetjp_4337_;
}
else
{
lean_inc(v_a_4336_);
lean_dec(v_x_4325_);
v___x_4338_ = lean_box(0);
v_isShared_4339_ = v_isSharedCheck_4348_;
goto v_resetjp_4337_;
}
v_resetjp_4337_:
{
lean_object* v_size_4340_; lean_object* v___x_4341_; uint8_t v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4345_; 
v_size_4340_ = lean_ctor_get(v_a_4336_, 3);
lean_inc(v_size_4340_);
lean_dec(v_a_4336_);
v___x_4341_ = lean_unsigned_to_nat(0u);
v___x_4342_ = lean_nat_dec_eq(v_size_4340_, v___x_4341_);
lean_dec(v_size_4340_);
v___x_4343_ = lean_box(v___x_4342_);
if (v_isShared_4339_ == 0)
{
lean_ctor_set(v___x_4338_, 0, v___x_4343_);
v___x_4345_ = v___x_4338_;
goto v_reusejp_4344_;
}
else
{
lean_object* v_reuseFailAlloc_4347_; 
v_reuseFailAlloc_4347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4347_, 0, v___x_4343_);
v___x_4345_ = v_reuseFailAlloc_4347_;
goto v_reusejp_4344_;
}
v_reusejp_4344_:
{
lean_object* v___x_4346_; 
v___x_4346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4346_, 0, v___x_4345_);
return v___x_4346_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg___lam__0___boxed(lean_object* v_x_4349_, lean_object* v___y_4350_){
_start:
{
lean_object* v_res_4351_; 
v_res_4351_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg___lam__0(v_x_4349_);
return v_res_4351_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg(lean_object* v_a_4353_){
_start:
{
lean_object* v___f_4355_; lean_object* v___x_4356_; uint8_t v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; 
v___f_4355_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg___closed__0));
v___x_4356_ = lean_unsigned_to_nat(0u);
v___x_4357_ = 0;
v___x_4358_ = lean_st_ref_get(v_a_4353_);
v___x_4359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4359_, 0, v___x_4358_);
v___x_4360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4360_, 0, v___x_4359_);
v___x_4361_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4356_, v___x_4357_, v___x_4360_, v___f_4355_);
return v___x_4361_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg___boxed(lean_object* v_a_4362_, lean_object* v___y_4363_){
_start:
{
lean_object* v_res_4364_; 
v_res_4364_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg(v_a_4362_);
lean_dec(v_a_4362_);
return v_res_4364_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__3___redArg(lean_object* v_slot_4365_, lean_object* v_next_4366_){
_start:
{
lean_object* v___x_4368_; lean_object* v_fst_4370_; lean_object* v_snd_4371_; lean_object* v_value_4375_; lean_object* v_pos_4376_; lean_object* v_remaining_4377_; uint8_t v___x_4378_; 
v___x_4368_ = lean_st_ref_take(v_slot_4365_);
v_value_4375_ = lean_ctor_get(v___x_4368_, 0);
v_pos_4376_ = lean_ctor_get(v___x_4368_, 1);
v_remaining_4377_ = lean_ctor_get(v___x_4368_, 2);
v___x_4378_ = lean_nat_dec_eq(v_next_4366_, v_pos_4376_);
if (v___x_4378_ == 0)
{
lean_object* v___x_4379_; lean_object* v___x_4380_; lean_object* v___x_4381_; 
v___x_4379_ = lean_box(0);
v___x_4380_ = lean_box(v___x_4378_);
v___x_4381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4381_, 0, v___x_4379_);
lean_ctor_set(v___x_4381_, 1, v___x_4380_);
v_fst_4370_ = v___x_4381_;
v_snd_4371_ = v___x_4368_;
goto v___jp_4369_;
}
else
{
lean_object* v___x_4383_; uint8_t v_isShared_4384_; uint8_t v_isSharedCheck_4400_; 
lean_inc(v_remaining_4377_);
lean_inc(v_pos_4376_);
lean_inc(v_value_4375_);
v_isSharedCheck_4400_ = !lean_is_exclusive(v___x_4368_);
if (v_isSharedCheck_4400_ == 0)
{
lean_object* v_unused_4401_; lean_object* v_unused_4402_; lean_object* v_unused_4403_; 
v_unused_4401_ = lean_ctor_get(v___x_4368_, 2);
lean_dec(v_unused_4401_);
v_unused_4402_ = lean_ctor_get(v___x_4368_, 1);
lean_dec(v_unused_4402_);
v_unused_4403_ = lean_ctor_get(v___x_4368_, 0);
lean_dec(v_unused_4403_);
v___x_4383_ = v___x_4368_;
v_isShared_4384_ = v_isSharedCheck_4400_;
goto v_resetjp_4382_;
}
else
{
lean_dec(v___x_4368_);
v___x_4383_ = lean_box(0);
v_isShared_4384_ = v_isSharedCheck_4400_;
goto v_resetjp_4382_;
}
v_resetjp_4382_:
{
lean_object* v___x_4385_; uint8_t v___x_4386_; 
v___x_4385_ = lean_unsigned_to_nat(1u);
v___x_4386_ = lean_nat_dec_eq(v_remaining_4377_, v___x_4385_);
if (v___x_4386_ == 0)
{
lean_object* v___x_4387_; lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4391_; 
v___x_4387_ = lean_box(v___x_4386_);
lean_inc(v_value_4375_);
v___x_4388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4388_, 0, v_value_4375_);
lean_ctor_set(v___x_4388_, 1, v___x_4387_);
v___x_4389_ = lean_nat_sub(v_remaining_4377_, v___x_4385_);
lean_dec(v_remaining_4377_);
if (v_isShared_4384_ == 0)
{
lean_ctor_set(v___x_4383_, 2, v___x_4389_);
v___x_4391_ = v___x_4383_;
goto v_reusejp_4390_;
}
else
{
lean_object* v_reuseFailAlloc_4392_; 
v_reuseFailAlloc_4392_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4392_, 0, v_value_4375_);
lean_ctor_set(v_reuseFailAlloc_4392_, 1, v_pos_4376_);
lean_ctor_set(v_reuseFailAlloc_4392_, 2, v___x_4389_);
v___x_4391_ = v_reuseFailAlloc_4392_;
goto v_reusejp_4390_;
}
v_reusejp_4390_:
{
v_fst_4370_ = v___x_4388_;
v_snd_4371_ = v___x_4391_;
goto v___jp_4369_;
}
}
else
{
lean_object* v___x_4393_; lean_object* v___x_4394_; lean_object* v___x_4395_; lean_object* v___x_4396_; lean_object* v___x_4398_; 
lean_dec(v_remaining_4377_);
v___x_4393_ = lean_box(v___x_4386_);
v___x_4394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4394_, 0, v_value_4375_);
lean_ctor_set(v___x_4394_, 1, v___x_4393_);
v___x_4395_ = lean_box(0);
v___x_4396_ = lean_unsigned_to_nat(0u);
if (v_isShared_4384_ == 0)
{
lean_ctor_set(v___x_4383_, 2, v___x_4396_);
lean_ctor_set(v___x_4383_, 0, v___x_4395_);
v___x_4398_ = v___x_4383_;
goto v_reusejp_4397_;
}
else
{
lean_object* v_reuseFailAlloc_4399_; 
v_reuseFailAlloc_4399_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4399_, 0, v___x_4395_);
lean_ctor_set(v_reuseFailAlloc_4399_, 1, v_pos_4376_);
lean_ctor_set(v_reuseFailAlloc_4399_, 2, v___x_4396_);
v___x_4398_ = v_reuseFailAlloc_4399_;
goto v_reusejp_4397_;
}
v_reusejp_4397_:
{
v_fst_4370_ = v___x_4394_;
v_snd_4371_ = v___x_4398_;
goto v___jp_4369_;
}
}
}
}
v___jp_4369_:
{
lean_object* v___x_4372_; lean_object* v___x_4373_; lean_object* v___x_4374_; 
v___x_4372_ = lean_st_ref_put(v_slot_4365_, v_snd_4371_);
v___x_4373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4373_, 0, v_fst_4370_);
v___x_4374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4374_, 0, v___x_4373_);
return v___x_4374_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_slot_4404_, lean_object* v_next_4405_, lean_object* v___y_4406_){
_start:
{
lean_object* v_res_4407_; 
v_res_4407_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__3___redArg(v_slot_4404_, v_next_4405_);
lean_dec(v_next_4405_);
lean_dec(v_slot_4404_);
return v_res_4407_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__4(lean_object* v_next_4408_, uint8_t v_a_4409_, lean_object* v___f_4410_, lean_object* v_x_4411_){
_start:
{
if (lean_obj_tag(v_x_4411_) == 0)
{
lean_object* v_a_4413_; lean_object* v___x_4415_; uint8_t v_isShared_4416_; uint8_t v_isSharedCheck_4421_; 
lean_dec_ref(v___f_4410_);
v_a_4413_ = lean_ctor_get(v_x_4411_, 0);
v_isSharedCheck_4421_ = !lean_is_exclusive(v_x_4411_);
if (v_isSharedCheck_4421_ == 0)
{
v___x_4415_ = v_x_4411_;
v_isShared_4416_ = v_isSharedCheck_4421_;
goto v_resetjp_4414_;
}
else
{
lean_inc(v_a_4413_);
lean_dec(v_x_4411_);
v___x_4415_ = lean_box(0);
v_isShared_4416_ = v_isSharedCheck_4421_;
goto v_resetjp_4414_;
}
v_resetjp_4414_:
{
lean_object* v___x_4418_; 
if (v_isShared_4416_ == 0)
{
v___x_4418_ = v___x_4415_;
goto v_reusejp_4417_;
}
else
{
lean_object* v_reuseFailAlloc_4420_; 
v_reuseFailAlloc_4420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4420_, 0, v_a_4413_);
v___x_4418_ = v_reuseFailAlloc_4420_;
goto v_reusejp_4417_;
}
v_reusejp_4417_:
{
lean_object* v___x_4419_; 
v___x_4419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4419_, 0, v___x_4418_);
return v___x_4419_;
}
}
}
else
{
lean_object* v_a_4422_; lean_object* v___x_4423_; lean_object* v___x_4424_; lean_object* v___x_4425_; 
v_a_4422_ = lean_ctor_get(v_x_4411_, 0);
lean_inc(v_a_4422_);
lean_dec_ref_known(v_x_4411_, 1);
v___x_4423_ = lean_unsigned_to_nat(0u);
v___x_4424_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__3___redArg(v_a_4422_, v_next_4408_);
lean_dec(v_a_4422_);
v___x_4425_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4423_, v_a_4409_, v___x_4424_, v___f_4410_);
return v___x_4425_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__4___boxed(lean_object* v_next_4426_, lean_object* v_a_4427_, lean_object* v___f_4428_, lean_object* v_x_4429_, lean_object* v___y_4430_){
_start:
{
uint8_t v_a_12076__boxed_4431_; lean_object* v_res_4432_; 
v_a_12076__boxed_4431_ = lean_unbox(v_a_4427_);
v_res_4432_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__4(v_next_4426_, v_a_12076__boxed_4431_, v___f_4428_, v_x_4429_);
lean_dec(v_next_4426_);
return v_res_4432_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__1(uint8_t v_a_4433_, lean_object* v___f_4434_, lean_object* v_____r_4435_, lean_object* v_st_4436_, lean_object* v___y_4437_){
_start:
{
lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; 
v___x_4439_ = lean_unsigned_to_nat(0u);
v___x_4440_ = lean_st_ref_swap(v___y_4437_, v_st_4436_);
lean_dec(v___x_4440_);
v___x_4441_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___closed__1));
v___x_4442_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4439_, v_a_4433_, v___x_4441_, v___f_4434_);
return v___x_4442_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__1___boxed(lean_object* v_a_4443_, lean_object* v___f_4444_, lean_object* v_____r_4445_, lean_object* v_st_4446_, lean_object* v___y_4447_, lean_object* v___y_4448_){
_start:
{
uint8_t v_a_12118__boxed_4449_; lean_object* v_res_4450_; 
v_a_12118__boxed_4449_ = lean_unbox(v_a_4443_);
v_res_4450_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__1(v_a_12118__boxed_4449_, v___f_4444_, v_____r_4445_, v_st_4446_, v___y_4447_);
lean_dec(v___y_4447_);
return v_res_4450_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__2(lean_object* v_snd_4451_, lean_object* v_waiters_4452_, lean_object* v_capacity_4453_, lean_object* v_size_4454_, lean_object* v_buffer_4455_, lean_object* v_write_4456_, lean_object* v_read_4457_, lean_object* v_receivers_4458_, lean_object* v_nextId_4459_, uint8_t v_closed_4460_, lean_object* v_pos_4461_, lean_object* v___f_4462_, lean_object* v_a_4463_, lean_object* v_x_4464_){
_start:
{
if (lean_obj_tag(v_x_4464_) == 0)
{
lean_object* v_a_4466_; lean_object* v___x_4468_; uint8_t v_isShared_4469_; uint8_t v_isSharedCheck_4474_; 
lean_dec_ref(v___f_4462_);
lean_dec(v_pos_4461_);
lean_dec(v_nextId_4459_);
lean_dec(v_receivers_4458_);
lean_dec(v_read_4457_);
lean_dec(v_write_4456_);
lean_dec_ref(v_buffer_4455_);
lean_dec(v_size_4454_);
lean_dec(v_capacity_4453_);
lean_dec_ref(v_waiters_4452_);
lean_dec_ref(v_snd_4451_);
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
lean_object* v___x_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; 
lean_dec_ref_known(v_x_4464_, 1);
v___x_4475_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_4475_, 0, v_snd_4451_);
lean_ctor_set(v___x_4475_, 1, v_waiters_4452_);
lean_ctor_set(v___x_4475_, 2, v_capacity_4453_);
lean_ctor_set(v___x_4475_, 3, v_size_4454_);
lean_ctor_set(v___x_4475_, 4, v_buffer_4455_);
lean_ctor_set(v___x_4475_, 5, v_write_4456_);
lean_ctor_set(v___x_4475_, 6, v_read_4457_);
lean_ctor_set(v___x_4475_, 7, v_receivers_4458_);
lean_ctor_set(v___x_4475_, 8, v_nextId_4459_);
lean_ctor_set(v___x_4475_, 9, v_pos_4461_);
lean_ctor_set_uint8(v___x_4475_, sizeof(void*)*10, v_closed_4460_);
v___x_4476_ = lean_box(0);
lean_inc(v_a_4463_);
v___x_4477_ = lean_apply_4(v___f_4462_, v___x_4476_, v___x_4475_, v_a_4463_, lean_box(0));
return v___x_4477_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__2___boxed(lean_object* v_snd_4478_, lean_object* v_waiters_4479_, lean_object* v_capacity_4480_, lean_object* v_size_4481_, lean_object* v_buffer_4482_, lean_object* v_write_4483_, lean_object* v_read_4484_, lean_object* v_receivers_4485_, lean_object* v_nextId_4486_, lean_object* v_closed_4487_, lean_object* v_pos_4488_, lean_object* v___f_4489_, lean_object* v_a_4490_, lean_object* v_x_4491_, lean_object* v___y_4492_){
_start:
{
uint8_t v_closed_boxed_4493_; lean_object* v_res_4494_; 
v_closed_boxed_4493_ = lean_unbox(v_closed_4487_);
v_res_4494_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__2(v_snd_4478_, v_waiters_4479_, v_capacity_4480_, v_size_4481_, v_buffer_4482_, v_write_4483_, v_read_4484_, v_receivers_4485_, v_nextId_4486_, v_closed_boxed_4493_, v_pos_4488_, v___f_4489_, v_a_4490_, v_x_4491_);
lean_dec(v_a_4490_);
return v_res_4494_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__0(lean_object* v_fst_4495_, lean_object* v_x_4496_){
_start:
{
if (lean_obj_tag(v_x_4496_) == 0)
{
lean_object* v_a_4498_; lean_object* v___x_4500_; uint8_t v_isShared_4501_; uint8_t v_isSharedCheck_4506_; 
lean_dec(v_fst_4495_);
v_a_4498_ = lean_ctor_get(v_x_4496_, 0);
v_isSharedCheck_4506_ = !lean_is_exclusive(v_x_4496_);
if (v_isSharedCheck_4506_ == 0)
{
v___x_4500_ = v_x_4496_;
v_isShared_4501_ = v_isSharedCheck_4506_;
goto v_resetjp_4499_;
}
else
{
lean_inc(v_a_4498_);
lean_dec(v_x_4496_);
v___x_4500_ = lean_box(0);
v_isShared_4501_ = v_isSharedCheck_4506_;
goto v_resetjp_4499_;
}
v_resetjp_4499_:
{
lean_object* v___x_4503_; 
if (v_isShared_4501_ == 0)
{
v___x_4503_ = v___x_4500_;
goto v_reusejp_4502_;
}
else
{
lean_object* v_reuseFailAlloc_4505_; 
v_reuseFailAlloc_4505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4505_, 0, v_a_4498_);
v___x_4503_ = v_reuseFailAlloc_4505_;
goto v_reusejp_4502_;
}
v_reusejp_4502_:
{
lean_object* v___x_4504_; 
v___x_4504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4504_, 0, v___x_4503_);
return v___x_4504_;
}
}
}
else
{
lean_object* v___x_4508_; uint8_t v_isShared_4509_; uint8_t v_isSharedCheck_4514_; 
v_isSharedCheck_4514_ = !lean_is_exclusive(v_x_4496_);
if (v_isSharedCheck_4514_ == 0)
{
lean_object* v_unused_4515_; 
v_unused_4515_ = lean_ctor_get(v_x_4496_, 0);
lean_dec(v_unused_4515_);
v___x_4508_ = v_x_4496_;
v_isShared_4509_ = v_isSharedCheck_4514_;
goto v_resetjp_4507_;
}
else
{
lean_dec(v_x_4496_);
v___x_4508_ = lean_box(0);
v_isShared_4509_ = v_isSharedCheck_4514_;
goto v_resetjp_4507_;
}
v_resetjp_4507_:
{
lean_object* v___x_4511_; 
if (v_isShared_4509_ == 0)
{
lean_ctor_set(v___x_4508_, 0, v_fst_4495_);
v___x_4511_ = v___x_4508_;
goto v_reusejp_4510_;
}
else
{
lean_object* v_reuseFailAlloc_4513_; 
v_reuseFailAlloc_4513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4513_, 0, v_fst_4495_);
v___x_4511_ = v_reuseFailAlloc_4513_;
goto v_reusejp_4510_;
}
v_reusejp_4510_:
{
lean_object* v___x_4512_; 
v___x_4512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4512_, 0, v___x_4511_);
return v___x_4512_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_fst_4516_, lean_object* v_x_4517_, lean_object* v___y_4518_){
_start:
{
lean_object* v_res_4519_; 
v_res_4519_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__0(v_fst_4516_, v_x_4517_);
return v_res_4519_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__3(uint8_t v_a_4520_, lean_object* v_a_4521_, lean_object* v_a_4522_, lean_object* v_x_4523_){
_start:
{
if (lean_obj_tag(v_x_4523_) == 0)
{
lean_object* v_a_4525_; lean_object* v___x_4527_; uint8_t v_isShared_4528_; uint8_t v_isSharedCheck_4533_; 
lean_dec_ref(v_a_4521_);
v_a_4525_ = lean_ctor_get(v_x_4523_, 0);
v_isSharedCheck_4533_ = !lean_is_exclusive(v_x_4523_);
if (v_isSharedCheck_4533_ == 0)
{
v___x_4527_ = v_x_4523_;
v_isShared_4528_ = v_isSharedCheck_4533_;
goto v_resetjp_4526_;
}
else
{
lean_inc(v_a_4525_);
lean_dec(v_x_4523_);
v___x_4527_ = lean_box(0);
v_isShared_4528_ = v_isSharedCheck_4533_;
goto v_resetjp_4526_;
}
v_resetjp_4526_:
{
lean_object* v___x_4530_; 
if (v_isShared_4528_ == 0)
{
v___x_4530_ = v___x_4527_;
goto v_reusejp_4529_;
}
else
{
lean_object* v_reuseFailAlloc_4532_; 
v_reuseFailAlloc_4532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4532_, 0, v_a_4525_);
v___x_4530_ = v_reuseFailAlloc_4532_;
goto v_reusejp_4529_;
}
v_reusejp_4529_:
{
lean_object* v___x_4531_; 
v___x_4531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4531_, 0, v___x_4530_);
return v___x_4531_;
}
}
}
else
{
lean_object* v_a_4534_; lean_object* v___x_4536_; uint8_t v_isShared_4537_; uint8_t v_isSharedCheck_4580_; 
v_a_4534_ = lean_ctor_get(v_x_4523_, 0);
v_isSharedCheck_4580_ = !lean_is_exclusive(v_x_4523_);
if (v_isSharedCheck_4580_ == 0)
{
v___x_4536_ = v_x_4523_;
v_isShared_4537_ = v_isSharedCheck_4580_;
goto v_resetjp_4535_;
}
else
{
lean_inc(v_a_4534_);
lean_dec(v_x_4523_);
v___x_4536_ = lean_box(0);
v_isShared_4537_ = v_isSharedCheck_4580_;
goto v_resetjp_4535_;
}
v_resetjp_4535_:
{
lean_object* v_fst_4538_; 
v_fst_4538_ = lean_ctor_get(v_a_4534_, 0);
lean_inc(v_fst_4538_);
if (lean_obj_tag(v_fst_4538_) == 1)
{
lean_object* v_snd_4539_; lean_object* v___f_4540_; lean_object* v___x_4541_; lean_object* v___f_4542_; uint8_t v___x_4543_; 
v_snd_4539_ = lean_ctor_get(v_a_4534_, 1);
lean_inc(v_snd_4539_);
lean_dec(v_a_4534_);
v___f_4540_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4540_, 0, v_fst_4538_);
v___x_4541_ = lean_box(v_a_4520_);
lean_inc_ref(v___f_4540_);
v___f_4542_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__1___boxed), 6, 2);
lean_closure_set(v___f_4542_, 0, v___x_4541_);
lean_closure_set(v___f_4542_, 1, v___f_4540_);
v___x_4543_ = lean_unbox(v_snd_4539_);
if (v___x_4543_ == 0)
{
lean_object* v___x_4544_; lean_object* v___x_4545_; 
lean_dec_ref(v___f_4542_);
lean_dec(v_snd_4539_);
lean_del_object(v___x_4536_);
v___x_4544_ = lean_box(0);
v___x_4545_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__1(v_a_4520_, v___f_4540_, v___x_4544_, v_a_4521_, v_a_4522_);
return v___x_4545_;
}
else
{
lean_object* v___x_4546_; lean_object* v_producers_4547_; lean_object* v_waiters_4548_; lean_object* v_capacity_4549_; lean_object* v_size_4550_; lean_object* v_buffer_4551_; lean_object* v_write_4552_; lean_object* v_read_4553_; lean_object* v_receivers_4554_; lean_object* v_nextId_4555_; uint8_t v_closed_4556_; lean_object* v_pos_4557_; lean_object* v___x_4558_; 
v___x_4546_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_dequeue___redArg(v_a_4521_);
v_producers_4547_ = lean_ctor_get(v___x_4546_, 0);
v_waiters_4548_ = lean_ctor_get(v___x_4546_, 1);
v_capacity_4549_ = lean_ctor_get(v___x_4546_, 2);
v_size_4550_ = lean_ctor_get(v___x_4546_, 3);
v_buffer_4551_ = lean_ctor_get(v___x_4546_, 4);
v_write_4552_ = lean_ctor_get(v___x_4546_, 5);
v_read_4553_ = lean_ctor_get(v___x_4546_, 6);
v_receivers_4554_ = lean_ctor_get(v___x_4546_, 7);
v_nextId_4555_ = lean_ctor_get(v___x_4546_, 8);
v_closed_4556_ = lean_ctor_get_uint8(v___x_4546_, sizeof(void*)*10);
v_pos_4557_ = lean_ctor_get(v___x_4546_, 9);
lean_inc_ref(v_producers_4547_);
v___x_4558_ = l_Std_Queue_dequeue_x3f___redArg(v_producers_4547_);
if (lean_obj_tag(v___x_4558_) == 1)
{
lean_object* v_val_4559_; lean_object* v___x_4561_; uint8_t v_isShared_4562_; uint8_t v_isSharedCheck_4576_; 
lean_inc(v_pos_4557_);
lean_inc(v_nextId_4555_);
lean_inc(v_receivers_4554_);
lean_inc(v_read_4553_);
lean_inc(v_write_4552_);
lean_inc_ref(v_buffer_4551_);
lean_inc(v_size_4550_);
lean_inc(v_capacity_4549_);
lean_inc_ref(v_waiters_4548_);
lean_dec_ref(v___x_4546_);
lean_dec_ref(v___f_4540_);
v_val_4559_ = lean_ctor_get(v___x_4558_, 0);
v_isSharedCheck_4576_ = !lean_is_exclusive(v___x_4558_);
if (v_isSharedCheck_4576_ == 0)
{
v___x_4561_ = v___x_4558_;
v_isShared_4562_ = v_isSharedCheck_4576_;
goto v_resetjp_4560_;
}
else
{
lean_inc(v_val_4559_);
lean_dec(v___x_4558_);
v___x_4561_ = lean_box(0);
v_isShared_4562_ = v_isSharedCheck_4576_;
goto v_resetjp_4560_;
}
v_resetjp_4560_:
{
lean_object* v_fst_4563_; lean_object* v_snd_4564_; lean_object* v___x_4565_; lean_object* v___f_4566_; lean_object* v___x_4567_; lean_object* v___x_4568_; lean_object* v___x_4570_; 
v_fst_4563_ = lean_ctor_get(v_val_4559_, 0);
lean_inc(v_fst_4563_);
v_snd_4564_ = lean_ctor_get(v_val_4559_, 1);
lean_inc(v_snd_4564_);
lean_dec(v_val_4559_);
v___x_4565_ = lean_box(v_closed_4556_);
lean_inc(v_a_4522_);
v___f_4566_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__2___boxed), 15, 13);
lean_closure_set(v___f_4566_, 0, v_snd_4564_);
lean_closure_set(v___f_4566_, 1, v_waiters_4548_);
lean_closure_set(v___f_4566_, 2, v_capacity_4549_);
lean_closure_set(v___f_4566_, 3, v_size_4550_);
lean_closure_set(v___f_4566_, 4, v_buffer_4551_);
lean_closure_set(v___f_4566_, 5, v_write_4552_);
lean_closure_set(v___f_4566_, 6, v_read_4553_);
lean_closure_set(v___f_4566_, 7, v_receivers_4554_);
lean_closure_set(v___f_4566_, 8, v_nextId_4555_);
lean_closure_set(v___f_4566_, 9, v___x_4565_);
lean_closure_set(v___f_4566_, 10, v_pos_4557_);
lean_closure_set(v___f_4566_, 11, v___f_4542_);
lean_closure_set(v___f_4566_, 12, v_a_4522_);
v___x_4567_ = lean_unsigned_to_nat(0u);
v___x_4568_ = lean_io_promise_resolve(v_snd_4539_, v_fst_4563_);
lean_dec(v_fst_4563_);
if (v_isShared_4537_ == 0)
{
lean_ctor_set(v___x_4536_, 0, v___x_4568_);
v___x_4570_ = v___x_4536_;
goto v_reusejp_4569_;
}
else
{
lean_object* v_reuseFailAlloc_4575_; 
v_reuseFailAlloc_4575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4575_, 0, v___x_4568_);
v___x_4570_ = v_reuseFailAlloc_4575_;
goto v_reusejp_4569_;
}
v_reusejp_4569_:
{
lean_object* v___x_4572_; 
if (v_isShared_4562_ == 0)
{
lean_ctor_set_tag(v___x_4561_, 0);
lean_ctor_set(v___x_4561_, 0, v___x_4570_);
v___x_4572_ = v___x_4561_;
goto v_reusejp_4571_;
}
else
{
lean_object* v_reuseFailAlloc_4574_; 
v_reuseFailAlloc_4574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4574_, 0, v___x_4570_);
v___x_4572_ = v_reuseFailAlloc_4574_;
goto v_reusejp_4571_;
}
v_reusejp_4571_:
{
lean_object* v___x_4573_; 
v___x_4573_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4567_, v_a_4520_, v___x_4572_, v___f_4566_);
return v___x_4573_;
}
}
}
}
else
{
lean_object* v___x_4577_; lean_object* v___x_4578_; 
lean_dec(v___x_4558_);
lean_dec_ref(v___f_4542_);
lean_dec(v_snd_4539_);
lean_del_object(v___x_4536_);
v___x_4577_ = lean_box(0);
v___x_4578_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__1(v_a_4520_, v___f_4540_, v___x_4577_, v___x_4546_, v_a_4522_);
return v___x_4578_;
}
}
}
else
{
lean_object* v___x_4579_; 
lean_dec(v_fst_4538_);
lean_del_object(v___x_4536_);
lean_dec(v_a_4534_);
lean_dec_ref(v_a_4521_);
v___x_4579_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__1___closed__0));
return v___x_4579_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__3___boxed(lean_object* v_a_4581_, lean_object* v_a_4582_, lean_object* v_a_4583_, lean_object* v_x_4584_, lean_object* v___y_4585_){
_start:
{
uint8_t v_a_12230__boxed_4586_; lean_object* v_res_4587_; 
v_a_12230__boxed_4586_ = lean_unbox(v_a_4581_);
v_res_4587_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__3(v_a_12230__boxed_4586_, v_a_4582_, v_a_4583_, v_x_4584_);
lean_dec(v_a_4583_);
return v_res_4587_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__5(lean_object* v_a_4588_, lean_object* v_a_4589_, lean_object* v_next_4590_, lean_object* v_x_4591_){
_start:
{
if (lean_obj_tag(v_x_4591_) == 0)
{
lean_object* v_a_4593_; lean_object* v___x_4595_; uint8_t v_isShared_4596_; uint8_t v_isSharedCheck_4601_; 
lean_dec(v_next_4590_);
lean_dec_ref(v_a_4588_);
v_a_4593_ = lean_ctor_get(v_x_4591_, 0);
v_isSharedCheck_4601_ = !lean_is_exclusive(v_x_4591_);
if (v_isSharedCheck_4601_ == 0)
{
v___x_4595_ = v_x_4591_;
v_isShared_4596_ = v_isSharedCheck_4601_;
goto v_resetjp_4594_;
}
else
{
lean_inc(v_a_4593_);
lean_dec(v_x_4591_);
v___x_4595_ = lean_box(0);
v_isShared_4596_ = v_isSharedCheck_4601_;
goto v_resetjp_4594_;
}
v_resetjp_4594_:
{
lean_object* v___x_4598_; 
if (v_isShared_4596_ == 0)
{
v___x_4598_ = v___x_4595_;
goto v_reusejp_4597_;
}
else
{
lean_object* v_reuseFailAlloc_4600_; 
v_reuseFailAlloc_4600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4600_, 0, v_a_4593_);
v___x_4598_ = v_reuseFailAlloc_4600_;
goto v_reusejp_4597_;
}
v_reusejp_4597_:
{
lean_object* v___x_4599_; 
v___x_4599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4599_, 0, v___x_4598_);
return v___x_4599_;
}
}
}
else
{
lean_object* v_a_4602_; uint8_t v___x_4603_; 
v_a_4602_ = lean_ctor_get(v_x_4591_, 0);
lean_inc(v_a_4602_);
lean_dec_ref_known(v_x_4591_, 1);
v___x_4603_ = lean_unbox(v_a_4602_);
if (v___x_4603_ == 0)
{
lean_object* v_capacity_4604_; lean_object* v___f_4605_; lean_object* v___f_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4609_; uint8_t v___x_4610_; lean_object* v___x_4611_; 
v_capacity_4604_ = lean_ctor_get(v_a_4588_, 2);
lean_inc(v_capacity_4604_);
lean_inc(v_a_4589_);
lean_inc_n(v_a_4602_, 2);
v___f_4605_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_4605_, 0, v_a_4602_);
lean_closure_set(v___f_4605_, 1, v_a_4588_);
lean_closure_set(v___f_4605_, 2, v_a_4589_);
lean_inc(v_next_4590_);
v___f_4606_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__4___boxed), 5, 3);
lean_closure_set(v___f_4606_, 0, v_next_4590_);
lean_closure_set(v___f_4606_, 1, v_a_4602_);
lean_closure_set(v___f_4606_, 2, v___f_4605_);
v___x_4607_ = lean_nat_mod(v_next_4590_, v_capacity_4604_);
lean_dec(v_capacity_4604_);
lean_dec(v_next_4590_);
v___x_4608_ = lean_unsigned_to_nat(0u);
v___x_4609_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg(v___x_4607_, v_a_4589_);
v___x_4610_ = lean_unbox(v_a_4602_);
lean_dec(v_a_4602_);
v___x_4611_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4608_, v___x_4610_, v___x_4609_, v___f_4606_);
return v___x_4611_;
}
else
{
lean_object* v___x_4612_; 
lean_dec(v_a_4602_);
lean_dec(v_next_4590_);
lean_dec_ref(v_a_4588_);
v___x_4612_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__1___closed__0));
return v___x_4612_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__5___boxed(lean_object* v_a_4613_, lean_object* v_a_4614_, lean_object* v_next_4615_, lean_object* v_x_4616_, lean_object* v___y_4617_){
_start:
{
lean_object* v_res_4618_; 
v_res_4618_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__5(v_a_4613_, v_a_4614_, v_next_4615_, v_x_4616_);
lean_dec(v_a_4614_);
return v_res_4618_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__6(lean_object* v_a_4619_, lean_object* v_next_4620_, lean_object* v_x_4621_){
_start:
{
if (lean_obj_tag(v_x_4621_) == 0)
{
lean_object* v_a_4623_; lean_object* v___x_4625_; uint8_t v_isShared_4626_; uint8_t v_isSharedCheck_4631_; 
lean_dec(v_next_4620_);
v_a_4623_ = lean_ctor_get(v_x_4621_, 0);
v_isSharedCheck_4631_ = !lean_is_exclusive(v_x_4621_);
if (v_isSharedCheck_4631_ == 0)
{
v___x_4625_ = v_x_4621_;
v_isShared_4626_ = v_isSharedCheck_4631_;
goto v_resetjp_4624_;
}
else
{
lean_inc(v_a_4623_);
lean_dec(v_x_4621_);
v___x_4625_ = lean_box(0);
v_isShared_4626_ = v_isSharedCheck_4631_;
goto v_resetjp_4624_;
}
v_resetjp_4624_:
{
lean_object* v___x_4628_; 
if (v_isShared_4626_ == 0)
{
v___x_4628_ = v___x_4625_;
goto v_reusejp_4627_;
}
else
{
lean_object* v_reuseFailAlloc_4630_; 
v_reuseFailAlloc_4630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4630_, 0, v_a_4623_);
v___x_4628_ = v_reuseFailAlloc_4630_;
goto v_reusejp_4627_;
}
v_reusejp_4627_:
{
lean_object* v___x_4629_; 
v___x_4629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4629_, 0, v___x_4628_);
return v___x_4629_;
}
}
}
else
{
lean_object* v_a_4632_; lean_object* v___f_4633_; lean_object* v___x_4634_; uint8_t v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; 
v_a_4632_ = lean_ctor_get(v_x_4621_, 0);
lean_inc(v_a_4632_);
lean_dec_ref_known(v_x_4621_, 1);
lean_inc(v_a_4619_);
v___f_4633_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__5___boxed), 5, 3);
lean_closure_set(v___f_4633_, 0, v_a_4632_);
lean_closure_set(v___f_4633_, 1, v_a_4619_);
lean_closure_set(v___f_4633_, 2, v_next_4620_);
v___x_4634_ = lean_unsigned_to_nat(0u);
v___x_4635_ = 0;
v___x_4636_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg(v_a_4619_);
v___x_4637_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4634_, v___x_4635_, v___x_4636_, v___f_4633_);
return v___x_4637_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__6___boxed(lean_object* v_a_4638_, lean_object* v_next_4639_, lean_object* v_x_4640_, lean_object* v___y_4641_){
_start:
{
lean_object* v_res_4642_; 
v_res_4642_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__6(v_a_4638_, v_next_4639_, v_x_4640_);
lean_dec(v_a_4638_);
return v_res_4642_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg(lean_object* v_next_4643_, lean_object* v_a_4644_){
_start:
{
lean_object* v___f_4646_; lean_object* v___x_4647_; uint8_t v___x_4648_; lean_object* v___x_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; 
lean_inc(v_a_4644_);
v___f_4646_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__6___boxed), 4, 2);
lean_closure_set(v___f_4646_, 0, v_a_4644_);
lean_closure_set(v___f_4646_, 1, v_next_4643_);
v___x_4647_ = lean_unsigned_to_nat(0u);
v___x_4648_ = 0;
v___x_4649_ = lean_st_ref_get(v_a_4644_);
v___x_4650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4650_, 0, v___x_4649_);
v___x_4651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4651_, 0, v___x_4650_);
v___x_4652_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4647_, v___x_4648_, v___x_4651_, v___f_4646_);
return v___x_4652_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___boxed(lean_object* v_next_4653_, lean_object* v_a_4654_, lean_object* v___y_4655_){
_start:
{
lean_object* v_res_4656_; 
v_res_4656_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg(v_next_4653_, v_a_4654_);
lean_dec(v_a_4654_);
return v_res_4656_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__2(lean_object* v_receiverId_4657_, lean_object* v_a_4658_, lean_object* v_x_4659_){
_start:
{
if (lean_obj_tag(v_x_4659_) == 0)
{
lean_object* v_a_4661_; lean_object* v___x_4663_; uint8_t v_isShared_4664_; uint8_t v_isSharedCheck_4669_; 
lean_dec(v_receiverId_4657_);
v_a_4661_ = lean_ctor_get(v_x_4659_, 0);
v_isSharedCheck_4669_ = !lean_is_exclusive(v_x_4659_);
if (v_isSharedCheck_4669_ == 0)
{
v___x_4663_ = v_x_4659_;
v_isShared_4664_ = v_isSharedCheck_4669_;
goto v_resetjp_4662_;
}
else
{
lean_inc(v_a_4661_);
lean_dec(v_x_4659_);
v___x_4663_ = lean_box(0);
v_isShared_4664_ = v_isSharedCheck_4669_;
goto v_resetjp_4662_;
}
v_resetjp_4662_:
{
lean_object* v___x_4666_; 
if (v_isShared_4664_ == 0)
{
v___x_4666_ = v___x_4663_;
goto v_reusejp_4665_;
}
else
{
lean_object* v_reuseFailAlloc_4668_; 
v_reuseFailAlloc_4668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4668_, 0, v_a_4661_);
v___x_4666_ = v_reuseFailAlloc_4668_;
goto v_reusejp_4665_;
}
v_reusejp_4665_:
{
lean_object* v___x_4667_; 
v___x_4667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4667_, 0, v___x_4666_);
return v___x_4667_;
}
}
}
else
{
lean_object* v_a_4670_; lean_object* v_receivers_4671_; lean_object* v___x_4672_; 
v_a_4670_ = lean_ctor_get(v_x_4659_, 0);
lean_inc(v_a_4670_);
lean_dec_ref_known(v_x_4659_, 1);
v_receivers_4671_ = lean_ctor_get(v_a_4670_, 7);
lean_inc(v_receivers_4671_);
lean_dec(v_a_4670_);
v___x_4672_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___redArg(v_receivers_4671_, v_receiverId_4657_);
if (lean_obj_tag(v___x_4672_) == 1)
{
lean_object* v_val_4673_; lean_object* v___f_4674_; lean_object* v___x_4675_; uint8_t v___x_4676_; lean_object* v___x_4677_; lean_object* v___x_4678_; 
v_val_4673_ = lean_ctor_get(v___x_4672_, 0);
lean_inc(v_val_4673_);
lean_dec_ref_known(v___x_4672_, 1);
lean_inc(v_a_4658_);
v___f_4674_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_4674_, 0, v_a_4658_);
lean_closure_set(v___f_4674_, 1, v_receiverId_4657_);
lean_closure_set(v___f_4674_, 2, v_receivers_4671_);
v___x_4675_ = lean_unsigned_to_nat(0u);
v___x_4676_ = 0;
v___x_4677_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg(v_val_4673_, v_a_4658_);
v___x_4678_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4675_, v___x_4676_, v___x_4677_, v___f_4674_);
return v___x_4678_;
}
else
{
lean_object* v___x_4679_; 
lean_dec(v___x_4672_);
lean_dec(v_receivers_4671_);
lean_dec(v_receiverId_4657_);
v___x_4679_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__1___closed__0));
return v___x_4679_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__2___boxed(lean_object* v_receiverId_4680_, lean_object* v_a_4681_, lean_object* v_x_4682_, lean_object* v___y_4683_){
_start:
{
lean_object* v_res_4684_; 
v_res_4684_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__2(v_receiverId_4680_, v_a_4681_, v_x_4682_);
lean_dec(v_a_4681_);
return v_res_4684_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg(lean_object* v_receiverId_4685_, lean_object* v_a_4686_){
_start:
{
lean_object* v___f_4688_; lean_object* v___x_4689_; uint8_t v___x_4690_; lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; lean_object* v___x_4694_; 
lean_inc(v_a_4686_);
v___f_4688_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_4688_, 0, v_receiverId_4685_);
lean_closure_set(v___f_4688_, 1, v_a_4686_);
v___x_4689_ = lean_unsigned_to_nat(0u);
v___x_4690_ = 0;
v___x_4691_ = lean_st_ref_get(v_a_4686_);
v___x_4692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4692_, 0, v___x_4691_);
v___x_4693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4693_, 0, v___x_4692_);
v___x_4694_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4689_, v___x_4690_, v___x_4693_, v___f_4688_);
return v___x_4694_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___boxed(lean_object* v_receiverId_4695_, lean_object* v_a_4696_, lean_object* v___y_4697_){
_start:
{
lean_object* v_res_4698_; 
v_res_4698_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg(v_receiverId_4695_, v_a_4696_);
lean_dec(v_a_4696_);
return v_res_4698_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5(lean_object* v_id_4703_, lean_object* v___y_4704_, lean_object* v___f_4705_, lean_object* v_x_4706_){
_start:
{
if (lean_obj_tag(v_x_4706_) == 0)
{
lean_object* v_a_4708_; lean_object* v___x_4710_; uint8_t v_isShared_4711_; uint8_t v_isSharedCheck_4716_; 
lean_dec_ref(v___f_4705_);
lean_dec(v_id_4703_);
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
lean_object* v_a_4717_; uint8_t v___x_4718_; 
v_a_4717_ = lean_ctor_get(v_x_4706_, 0);
lean_inc(v_a_4717_);
lean_dec_ref_known(v_x_4706_, 1);
v___x_4718_ = lean_unbox(v_a_4717_);
lean_dec(v_a_4717_);
if (v___x_4718_ == 0)
{
lean_object* v___x_4719_; 
lean_dec_ref(v___f_4705_);
lean_dec(v_id_4703_);
v___x_4719_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5___closed__1));
return v___x_4719_;
}
else
{
lean_object* v___x_4720_; uint8_t v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; 
v___x_4720_ = lean_unsigned_to_nat(0u);
v___x_4721_ = 0;
v___x_4722_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg(v_id_4703_, v___y_4704_);
v___x_4723_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4720_, v___x_4721_, v___x_4722_, v___f_4705_);
return v___x_4723_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5___boxed(lean_object* v_id_4724_, lean_object* v___y_4725_, lean_object* v___f_4726_, lean_object* v_x_4727_, lean_object* v___y_4728_){
_start:
{
lean_object* v_res_4729_; 
v_res_4729_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5(v_id_4724_, v___y_4725_, v___f_4726_, v_x_4727_);
lean_dec(v___y_4725_);
return v_res_4729_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__6(lean_object* v_val_4730_, lean_object* v_x_4731_){
_start:
{
if (lean_obj_tag(v_x_4731_) == 0)
{
lean_object* v_a_4733_; lean_object* v___x_4735_; uint8_t v_isShared_4736_; uint8_t v_isSharedCheck_4741_; 
v_a_4733_ = lean_ctor_get(v_x_4731_, 0);
v_isSharedCheck_4741_ = !lean_is_exclusive(v_x_4731_);
if (v_isSharedCheck_4741_ == 0)
{
v___x_4735_ = v_x_4731_;
v_isShared_4736_ = v_isSharedCheck_4741_;
goto v_resetjp_4734_;
}
else
{
lean_inc(v_a_4733_);
lean_dec(v_x_4731_);
v___x_4735_ = lean_box(0);
v_isShared_4736_ = v_isSharedCheck_4741_;
goto v_resetjp_4734_;
}
v_resetjp_4734_:
{
lean_object* v___x_4738_; 
if (v_isShared_4736_ == 0)
{
v___x_4738_ = v___x_4735_;
goto v_reusejp_4737_;
}
else
{
lean_object* v_reuseFailAlloc_4740_; 
v_reuseFailAlloc_4740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4740_, 0, v_a_4733_);
v___x_4738_ = v_reuseFailAlloc_4740_;
goto v_reusejp_4737_;
}
v_reusejp_4737_:
{
lean_object* v___x_4739_; 
v___x_4739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4739_, 0, v___x_4738_);
return v___x_4739_;
}
}
}
else
{
lean_object* v_a_4742_; lean_object* v___x_4744_; uint8_t v_isShared_4745_; uint8_t v_isSharedCheck_4753_; 
v_a_4742_ = lean_ctor_get(v_x_4731_, 0);
v_isSharedCheck_4753_ = !lean_is_exclusive(v_x_4731_);
if (v_isSharedCheck_4753_ == 0)
{
v___x_4744_ = v_x_4731_;
v_isShared_4745_ = v_isSharedCheck_4753_;
goto v_resetjp_4743_;
}
else
{
lean_inc(v_a_4742_);
lean_dec(v_x_4731_);
v___x_4744_ = lean_box(0);
v_isShared_4745_ = v_isSharedCheck_4753_;
goto v_resetjp_4743_;
}
v_resetjp_4743_:
{
lean_object* v_pos_4746_; uint8_t v___x_4747_; lean_object* v___x_4748_; lean_object* v___x_4750_; 
v_pos_4746_ = lean_ctor_get(v_a_4742_, 1);
lean_inc(v_pos_4746_);
lean_dec(v_a_4742_);
v___x_4747_ = lean_nat_dec_eq(v_pos_4746_, v_val_4730_);
lean_dec(v_pos_4746_);
v___x_4748_ = lean_box(v___x_4747_);
if (v_isShared_4745_ == 0)
{
lean_ctor_set(v___x_4744_, 0, v___x_4748_);
v___x_4750_ = v___x_4744_;
goto v_reusejp_4749_;
}
else
{
lean_object* v_reuseFailAlloc_4752_; 
v_reuseFailAlloc_4752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4752_, 0, v___x_4748_);
v___x_4750_ = v_reuseFailAlloc_4752_;
goto v_reusejp_4749_;
}
v_reusejp_4749_:
{
lean_object* v___x_4751_; 
v___x_4751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4751_, 0, v___x_4750_);
return v___x_4751_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__6___boxed(lean_object* v_val_4754_, lean_object* v_x_4755_, lean_object* v___y_4756_){
_start:
{
lean_object* v_res_4757_; 
v_res_4757_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__6(v_val_4754_, v_x_4755_);
lean_dec(v_val_4754_);
return v_res_4757_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__7(lean_object* v___x_4758_, uint8_t v_closed_4759_, lean_object* v___f_4760_, lean_object* v_x_4761_){
_start:
{
if (lean_obj_tag(v_x_4761_) == 0)
{
lean_object* v_a_4763_; lean_object* v___x_4765_; uint8_t v_isShared_4766_; uint8_t v_isSharedCheck_4771_; 
lean_dec_ref(v___f_4760_);
lean_dec(v___x_4758_);
v_a_4763_ = lean_ctor_get(v_x_4761_, 0);
v_isSharedCheck_4771_ = !lean_is_exclusive(v_x_4761_);
if (v_isSharedCheck_4771_ == 0)
{
v___x_4765_ = v_x_4761_;
v_isShared_4766_ = v_isSharedCheck_4771_;
goto v_resetjp_4764_;
}
else
{
lean_inc(v_a_4763_);
lean_dec(v_x_4761_);
v___x_4765_ = lean_box(0);
v_isShared_4766_ = v_isSharedCheck_4771_;
goto v_resetjp_4764_;
}
v_resetjp_4764_:
{
lean_object* v___x_4768_; 
if (v_isShared_4766_ == 0)
{
v___x_4768_ = v___x_4765_;
goto v_reusejp_4767_;
}
else
{
lean_object* v_reuseFailAlloc_4770_; 
v_reuseFailAlloc_4770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4770_, 0, v_a_4763_);
v___x_4768_ = v_reuseFailAlloc_4770_;
goto v_reusejp_4767_;
}
v_reusejp_4767_:
{
lean_object* v___x_4769_; 
v___x_4769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4769_, 0, v___x_4768_);
return v___x_4769_;
}
}
}
else
{
lean_object* v_a_4772_; lean_object* v___x_4774_; uint8_t v_isShared_4775_; uint8_t v_isSharedCheck_4782_; 
v_a_4772_ = lean_ctor_get(v_x_4761_, 0);
v_isSharedCheck_4782_ = !lean_is_exclusive(v_x_4761_);
if (v_isSharedCheck_4782_ == 0)
{
v___x_4774_ = v_x_4761_;
v_isShared_4775_ = v_isSharedCheck_4782_;
goto v_resetjp_4773_;
}
else
{
lean_inc(v_a_4772_);
lean_dec(v_x_4761_);
v___x_4774_ = lean_box(0);
v_isShared_4775_ = v_isSharedCheck_4782_;
goto v_resetjp_4773_;
}
v_resetjp_4773_:
{
lean_object* v___x_4776_; lean_object* v___x_4778_; 
v___x_4776_ = lean_st_ref_get(v_a_4772_);
lean_dec(v_a_4772_);
if (v_isShared_4775_ == 0)
{
lean_ctor_set(v___x_4774_, 0, v___x_4776_);
v___x_4778_ = v___x_4774_;
goto v_reusejp_4777_;
}
else
{
lean_object* v_reuseFailAlloc_4781_; 
v_reuseFailAlloc_4781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4781_, 0, v___x_4776_);
v___x_4778_ = v_reuseFailAlloc_4781_;
goto v_reusejp_4777_;
}
v_reusejp_4777_:
{
lean_object* v___x_4779_; lean_object* v___x_4780_; 
v___x_4779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4779_, 0, v___x_4778_);
v___x_4780_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4758_, v_closed_4759_, v___x_4779_, v___f_4760_);
return v___x_4780_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__7___boxed(lean_object* v___x_4783_, lean_object* v_closed_4784_, lean_object* v___f_4785_, lean_object* v_x_4786_, lean_object* v___y_4787_){
_start:
{
uint8_t v_closed_boxed_4788_; lean_object* v_res_4789_; 
v_closed_boxed_4788_ = lean_unbox(v_closed_4784_);
v_res_4789_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__7(v___x_4783_, v_closed_boxed_4788_, v___f_4785_, v_x_4786_);
return v_res_4789_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__8(lean_object* v_id_4790_, lean_object* v___x_4791_, lean_object* v___y_4792_, lean_object* v_x_4793_){
_start:
{
if (lean_obj_tag(v_x_4793_) == 0)
{
lean_object* v_a_4795_; lean_object* v___x_4797_; uint8_t v_isShared_4798_; uint8_t v_isSharedCheck_4803_; 
lean_dec(v___x_4791_);
v_a_4795_ = lean_ctor_get(v_x_4793_, 0);
v_isSharedCheck_4803_ = !lean_is_exclusive(v_x_4793_);
if (v_isSharedCheck_4803_ == 0)
{
v___x_4797_ = v_x_4793_;
v_isShared_4798_ = v_isSharedCheck_4803_;
goto v_resetjp_4796_;
}
else
{
lean_inc(v_a_4795_);
lean_dec(v_x_4793_);
v___x_4797_ = lean_box(0);
v_isShared_4798_ = v_isSharedCheck_4803_;
goto v_resetjp_4796_;
}
v_resetjp_4796_:
{
lean_object* v___x_4800_; 
if (v_isShared_4798_ == 0)
{
v___x_4800_ = v___x_4797_;
goto v_reusejp_4799_;
}
else
{
lean_object* v_reuseFailAlloc_4802_; 
v_reuseFailAlloc_4802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4802_, 0, v_a_4795_);
v___x_4800_ = v_reuseFailAlloc_4802_;
goto v_reusejp_4799_;
}
v_reusejp_4799_:
{
lean_object* v___x_4801_; 
v___x_4801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4801_, 0, v___x_4800_);
return v___x_4801_;
}
}
}
else
{
lean_object* v_a_4804_; lean_object* v___x_4806_; uint8_t v_isShared_4807_; uint8_t v_isSharedCheck_4842_; 
v_a_4804_ = lean_ctor_get(v_x_4793_, 0);
v_isSharedCheck_4842_ = !lean_is_exclusive(v_x_4793_);
if (v_isSharedCheck_4842_ == 0)
{
v___x_4806_ = v_x_4793_;
v_isShared_4807_ = v_isSharedCheck_4842_;
goto v_resetjp_4805_;
}
else
{
lean_inc(v_a_4804_);
lean_dec(v_x_4793_);
v___x_4806_ = lean_box(0);
v_isShared_4807_ = v_isSharedCheck_4842_;
goto v_resetjp_4805_;
}
v_resetjp_4805_:
{
uint8_t v_closed_4808_; 
v_closed_4808_ = lean_ctor_get_uint8(v_a_4804_, sizeof(void*)*10);
if (v_closed_4808_ == 0)
{
lean_object* v_capacity_4809_; lean_object* v_size_4810_; lean_object* v_receivers_4811_; lean_object* v___x_4812_; 
v_capacity_4809_ = lean_ctor_get(v_a_4804_, 2);
lean_inc(v_capacity_4809_);
v_size_4810_ = lean_ctor_get(v_a_4804_, 3);
lean_inc(v_size_4810_);
v_receivers_4811_ = lean_ctor_get(v_a_4804_, 7);
lean_inc(v_receivers_4811_);
lean_dec(v_a_4804_);
v___x_4812_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___redArg(v_receivers_4811_, v_id_4790_);
lean_dec(v_receivers_4811_);
if (lean_obj_tag(v___x_4812_) == 1)
{
lean_object* v_val_4813_; lean_object* v___x_4815_; uint8_t v_isShared_4816_; uint8_t v_isSharedCheck_4831_; 
v_val_4813_ = lean_ctor_get(v___x_4812_, 0);
v_isSharedCheck_4831_ = !lean_is_exclusive(v___x_4812_);
if (v_isSharedCheck_4831_ == 0)
{
v___x_4815_ = v___x_4812_;
v_isShared_4816_ = v_isSharedCheck_4831_;
goto v_resetjp_4814_;
}
else
{
lean_inc(v_val_4813_);
lean_dec(v___x_4812_);
v___x_4815_ = lean_box(0);
v_isShared_4816_ = v_isSharedCheck_4831_;
goto v_resetjp_4814_;
}
v_resetjp_4814_:
{
uint8_t v___x_4817_; 
v___x_4817_ = lean_nat_dec_eq(v_size_4810_, v___x_4791_);
lean_dec(v_size_4810_);
if (v___x_4817_ == 0)
{
lean_object* v___f_4818_; lean_object* v___x_4819_; lean_object* v___f_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; lean_object* v___x_4823_; 
lean_del_object(v___x_4815_);
lean_del_object(v___x_4806_);
lean_inc(v_val_4813_);
v___f_4818_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__6___boxed), 3, 1);
lean_closure_set(v___f_4818_, 0, v_val_4813_);
v___x_4819_ = lean_box(v_closed_4808_);
lean_inc(v___x_4791_);
v___f_4820_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__7___boxed), 5, 3);
lean_closure_set(v___f_4820_, 0, v___x_4791_);
lean_closure_set(v___f_4820_, 1, v___x_4819_);
lean_closure_set(v___f_4820_, 2, v___f_4818_);
v___x_4821_ = lean_nat_mod(v_val_4813_, v_capacity_4809_);
lean_dec(v_capacity_4809_);
lean_dec(v_val_4813_);
v___x_4822_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg(v___x_4821_, v___y_4792_);
v___x_4823_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4791_, v___x_4817_, v___x_4822_, v___f_4820_);
return v___x_4823_;
}
else
{
lean_object* v___x_4824_; lean_object* v___x_4826_; 
lean_dec(v_val_4813_);
lean_dec(v_capacity_4809_);
lean_dec(v___x_4791_);
v___x_4824_ = lean_box(v_closed_4808_);
if (v_isShared_4807_ == 0)
{
lean_ctor_set(v___x_4806_, 0, v___x_4824_);
v___x_4826_ = v___x_4806_;
goto v_reusejp_4825_;
}
else
{
lean_object* v_reuseFailAlloc_4830_; 
v_reuseFailAlloc_4830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4830_, 0, v___x_4824_);
v___x_4826_ = v_reuseFailAlloc_4830_;
goto v_reusejp_4825_;
}
v_reusejp_4825_:
{
lean_object* v___x_4828_; 
if (v_isShared_4816_ == 0)
{
lean_ctor_set_tag(v___x_4815_, 0);
lean_ctor_set(v___x_4815_, 0, v___x_4826_);
v___x_4828_ = v___x_4815_;
goto v_reusejp_4827_;
}
else
{
lean_object* v_reuseFailAlloc_4829_; 
v_reuseFailAlloc_4829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4829_, 0, v___x_4826_);
v___x_4828_ = v_reuseFailAlloc_4829_;
goto v_reusejp_4827_;
}
v_reusejp_4827_:
{
return v___x_4828_;
}
}
}
}
}
else
{
lean_object* v___x_4832_; lean_object* v___x_4834_; 
lean_dec(v___x_4812_);
lean_dec(v_size_4810_);
lean_dec(v_capacity_4809_);
lean_dec(v___x_4791_);
v___x_4832_ = lean_box(v_closed_4808_);
if (v_isShared_4807_ == 0)
{
lean_ctor_set(v___x_4806_, 0, v___x_4832_);
v___x_4834_ = v___x_4806_;
goto v_reusejp_4833_;
}
else
{
lean_object* v_reuseFailAlloc_4836_; 
v_reuseFailAlloc_4836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4836_, 0, v___x_4832_);
v___x_4834_ = v_reuseFailAlloc_4836_;
goto v_reusejp_4833_;
}
v_reusejp_4833_:
{
lean_object* v___x_4835_; 
v___x_4835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4835_, 0, v___x_4834_);
return v___x_4835_;
}
}
}
else
{
lean_object* v___x_4837_; lean_object* v___x_4839_; 
lean_dec(v_a_4804_);
lean_dec(v___x_4791_);
v___x_4837_ = lean_box(v_closed_4808_);
if (v_isShared_4807_ == 0)
{
lean_ctor_set(v___x_4806_, 0, v___x_4837_);
v___x_4839_ = v___x_4806_;
goto v_reusejp_4838_;
}
else
{
lean_object* v_reuseFailAlloc_4841_; 
v_reuseFailAlloc_4841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4841_, 0, v___x_4837_);
v___x_4839_ = v_reuseFailAlloc_4841_;
goto v_reusejp_4838_;
}
v_reusejp_4838_:
{
lean_object* v___x_4840_; 
v___x_4840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4840_, 0, v___x_4839_);
return v___x_4840_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__8___boxed(lean_object* v_id_4843_, lean_object* v___x_4844_, lean_object* v___y_4845_, lean_object* v_x_4846_, lean_object* v___y_4847_){
_start:
{
lean_object* v_res_4848_; 
v_res_4848_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__8(v_id_4843_, v___x_4844_, v___y_4845_, v_x_4846_);
lean_dec(v___y_4845_);
lean_dec(v_id_4843_);
return v_res_4848_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__9(lean_object* v_id_4849_, lean_object* v___f_4850_, lean_object* v___y_4851_){
_start:
{
lean_object* v___f_4853_; lean_object* v___x_4854_; lean_object* v___f_4855_; uint8_t v___x_4856_; lean_object* v___x_4857_; lean_object* v___x_4858_; lean_object* v___x_4859_; lean_object* v___x_4860_; lean_object* v___x_4861_; 
lean_inc_n(v___y_4851_, 2);
lean_inc(v_id_4849_);
v___f_4853_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5___boxed), 5, 3);
lean_closure_set(v___f_4853_, 0, v_id_4849_);
lean_closure_set(v___f_4853_, 1, v___y_4851_);
lean_closure_set(v___f_4853_, 2, v___f_4850_);
v___x_4854_ = lean_unsigned_to_nat(0u);
v___f_4855_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__8___boxed), 5, 3);
lean_closure_set(v___f_4855_, 0, v_id_4849_);
lean_closure_set(v___f_4855_, 1, v___x_4854_);
lean_closure_set(v___f_4855_, 2, v___y_4851_);
v___x_4856_ = 0;
v___x_4857_ = lean_st_ref_get(v___y_4851_);
v___x_4858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4858_, 0, v___x_4857_);
v___x_4859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4859_, 0, v___x_4858_);
v___x_4860_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4854_, v___x_4856_, v___x_4859_, v___f_4855_);
v___x_4861_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4854_, v___x_4856_, v___x_4860_, v___f_4853_);
return v___x_4861_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__9___boxed(lean_object* v_id_4862_, lean_object* v___f_4863_, lean_object* v___y_4864_, lean_object* v___y_4865_){
_start:
{
lean_object* v_res_4866_; 
v_res_4866_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__9(v_id_4862_, v___f_4863_, v___y_4864_);
lean_dec(v___y_4864_);
return v_res_4866_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg(lean_object* v_ch_4869_){
_start:
{
lean_object* v_state_4870_; lean_object* v_id_4871_; lean_object* v___f_4872_; lean_object* v___f_4873_; lean_object* v___f_4874_; lean_object* v___f_4875_; lean_object* v___x_4876_; lean_object* v___x_4877_; lean_object* v___x_4878_; 
v_state_4870_ = lean_ctor_get(v_ch_4869_, 0);
lean_inc_ref_n(v_state_4870_, 2);
v_id_4871_ = lean_ctor_get(v_ch_4869_, 1);
lean_inc(v_id_4871_);
v___f_4872_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___closed__0));
v___f_4873_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4873_, 0, v_ch_4869_);
v___f_4874_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___closed__1));
v___f_4875_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__9___boxed), 4, 2);
lean_closure_set(v___f_4875_, 0, v_id_4871_);
lean_closure_set(v___f_4875_, 1, v___f_4874_);
v___x_4876_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___boxed), 5, 4);
lean_closure_set(v___x_4876_, 0, lean_box(0));
lean_closure_set(v___x_4876_, 1, lean_box(0));
lean_closure_set(v___x_4876_, 2, v_state_4870_);
lean_closure_set(v___x_4876_, 3, v___f_4875_);
v___x_4877_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___boxed), 5, 4);
lean_closure_set(v___x_4877_, 0, lean_box(0));
lean_closure_set(v___x_4877_, 1, lean_box(0));
lean_closure_set(v___x_4877_, 2, v_state_4870_);
lean_closure_set(v___x_4877_, 3, v___f_4872_);
v___x_4878_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4878_, 0, v___x_4876_);
lean_ctor_set(v___x_4878_, 1, v___f_4873_);
lean_ctor_set(v___x_4878_, 2, v___x_4877_);
return v___x_4878_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector(lean_object* v_00_u03b1_4879_, lean_object* v_ch_4880_){
_start:
{
lean_object* v___x_4881_; 
v___x_4881_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg(v_ch_4880_);
return v___x_4881_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0(lean_object* v_00_u03b1_4882_, lean_object* v_receiverId_4883_, lean_object* v_a_4884_){
_start:
{
lean_object* v___x_4886_; 
v___x_4886_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg(v_receiverId_4883_, v_a_4884_);
return v___x_4886_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___boxed(lean_object* v_00_u03b1_4887_, lean_object* v_receiverId_4888_, lean_object* v_a_4889_, lean_object* v___y_4890_){
_start:
{
lean_object* v_res_4891_; 
v_res_4891_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0(v_00_u03b1_4887_, v_receiverId_4888_, v_a_4889_);
lean_dec(v_a_4889_);
return v_res_4891_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3(lean_object* v_00_u03b1_4892_, lean_object* v_q_4893_, lean_object* v___y_4894_){
_start:
{
lean_object* v___x_4896_; 
v___x_4896_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg(v_q_4893_, v___y_4894_);
return v___x_4896_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___boxed(lean_object* v_00_u03b1_4897_, lean_object* v_q_4898_, lean_object* v___y_4899_, lean_object* v___y_4900_){
_start:
{
lean_object* v_res_4901_; 
v_res_4901_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3(v_00_u03b1_4897_, v_q_4898_, v___y_4899_);
lean_dec(v___y_4899_);
return v_res_4901_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__3(lean_object* v_00_u03b1_4902_, lean_object* v_slot_4903_, lean_object* v_next_4904_, lean_object* v_a_4905_){
_start:
{
lean_object* v___x_4907_; 
v___x_4907_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__3___redArg(v_slot_4903_, v_next_4904_);
return v___x_4907_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b1_4908_, lean_object* v_slot_4909_, lean_object* v_next_4910_, lean_object* v_a_4911_, lean_object* v___y_4912_){
_start:
{
lean_object* v_res_4913_; 
v_res_4913_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__3(v_00_u03b1_4908_, v_slot_4909_, v_next_4910_, v_a_4911_);
lean_dec(v_a_4911_);
lean_dec(v_next_4910_);
lean_dec(v_slot_4909_);
return v_res_4913_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4(lean_object* v_00_u03b1_4914_, lean_object* v_a_4915_){
_start:
{
lean_object* v___x_4917_; 
v___x_4917_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg(v_a_4915_);
return v___x_4917_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___boxed(lean_object* v_00_u03b1_4918_, lean_object* v_a_4919_, lean_object* v___y_4920_){
_start:
{
lean_object* v_res_4921_; 
v_res_4921_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4(v_00_u03b1_4918_, v_a_4919_);
lean_dec(v_a_4919_);
return v_res_4921_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0(lean_object* v_00_u03b1_4922_, lean_object* v_next_4923_, lean_object* v_a_4924_){
_start:
{
lean_object* v___x_4926_; 
v___x_4926_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg(v_next_4923_, v_a_4924_);
return v___x_4926_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___boxed(lean_object* v_00_u03b1_4927_, lean_object* v_next_4928_, lean_object* v_a_4929_, lean_object* v___y_4930_){
_start:
{
lean_object* v_res_4931_; 
v_res_4931_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0(v_00_u03b1_4927_, v_next_4928_, v_a_4929_);
lean_dec(v_a_4929_);
return v_res_4931_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4(lean_object* v_00_u03b1_4932_, lean_object* v_x_4933_, lean_object* v_x_4934_, lean_object* v___y_4935_){
_start:
{
lean_object* v___x_4937_; 
v___x_4937_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg(v_x_4933_, v_x_4934_);
return v___x_4937_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___boxed(lean_object* v_00_u03b1_4938_, lean_object* v_x_4939_, lean_object* v_x_4940_, lean_object* v___y_4941_, lean_object* v___y_4942_){
_start:
{
lean_object* v_res_4943_; 
v_res_4943_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4(v_00_u03b1_4938_, v_x_4939_, v_x_4940_, v___y_4941_);
lean_dec(v___y_4941_);
return v_res_4943_;
}
}
static lean_object* _init_l_Std_Broadcast_new___auto__1(void){
_start:
{
lean_object* v___x_4944_; 
v___x_4944_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__26, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__26_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__26);
return v___x_4944_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_new___redArg(lean_object* v_capacity_4945_){
_start:
{
lean_object* v___x_4947_; 
v___x_4947_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg(v_capacity_4945_);
return v___x_4947_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_new___redArg___boxed(lean_object* v_capacity_4948_, lean_object* v_a_4949_){
_start:
{
lean_object* v_res_4950_; 
v_res_4950_ = l_Std_Broadcast_new___redArg(v_capacity_4948_);
return v_res_4950_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_new(lean_object* v_00_u03b1_4951_, lean_object* v_capacity_4952_, lean_object* v_h_4953_){
_start:
{
lean_object* v___x_4955_; 
v___x_4955_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg(v_capacity_4952_);
return v___x_4955_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_new___boxed(lean_object* v_00_u03b1_4956_, lean_object* v_capacity_4957_, lean_object* v_h_4958_, lean_object* v_a_4959_){
_start:
{
lean_object* v_res_4960_; 
v_res_4960_ = l_Std_Broadcast_new(v_00_u03b1_4956_, v_capacity_4957_, v_h_4958_);
return v_res_4960_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_trySend___redArg(lean_object* v_ch_4961_, lean_object* v_v_4962_){
_start:
{
lean_object* v___x_4964_; 
v___x_4964_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg(v_ch_4961_, v_v_4962_);
return v___x_4964_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_trySend___redArg___boxed(lean_object* v_ch_4965_, lean_object* v_v_4966_, lean_object* v_a_4967_){
_start:
{
lean_object* v_res_4968_; 
v_res_4968_ = l_Std_Broadcast_trySend___redArg(v_ch_4965_, v_v_4966_);
return v_res_4968_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_trySend(lean_object* v_00_u03b1_4969_, lean_object* v_ch_4970_, lean_object* v_v_4971_){
_start:
{
lean_object* v___x_4973_; 
v___x_4973_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg(v_ch_4970_, v_v_4971_);
return v___x_4973_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_trySend___boxed(lean_object* v_00_u03b1_4974_, lean_object* v_ch_4975_, lean_object* v_v_4976_, lean_object* v_a_4977_){
_start:
{
lean_object* v_res_4978_; 
v_res_4978_ = l_Std_Broadcast_trySend(v_00_u03b1_4974_, v_ch_4975_, v_v_4976_);
return v_res_4978_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_subscribe___redArg(lean_object* v_ch_4979_){
_start:
{
lean_object* v___x_4981_; 
v___x_4981_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg(v_ch_4979_);
if (lean_obj_tag(v___x_4981_) == 0)
{
lean_object* v_a_4982_; lean_object* v___x_4984_; uint8_t v_isShared_4985_; uint8_t v_isSharedCheck_4989_; 
v_a_4982_ = lean_ctor_get(v___x_4981_, 0);
v_isSharedCheck_4989_ = !lean_is_exclusive(v___x_4981_);
if (v_isSharedCheck_4989_ == 0)
{
v___x_4984_ = v___x_4981_;
v_isShared_4985_ = v_isSharedCheck_4989_;
goto v_resetjp_4983_;
}
else
{
lean_inc(v_a_4982_);
lean_dec(v___x_4981_);
v___x_4984_ = lean_box(0);
v_isShared_4985_ = v_isSharedCheck_4989_;
goto v_resetjp_4983_;
}
v_resetjp_4983_:
{
lean_object* v___x_4987_; 
if (v_isShared_4985_ == 0)
{
v___x_4987_ = v___x_4984_;
goto v_reusejp_4986_;
}
else
{
lean_object* v_reuseFailAlloc_4988_; 
v_reuseFailAlloc_4988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4988_, 0, v_a_4982_);
v___x_4987_ = v_reuseFailAlloc_4988_;
goto v_reusejp_4986_;
}
v_reusejp_4986_:
{
return v___x_4987_;
}
}
}
else
{
lean_object* v_a_4990_; lean_object* v___x_4992_; uint8_t v_isShared_4993_; uint8_t v_isSharedCheck_4997_; 
v_a_4990_ = lean_ctor_get(v___x_4981_, 0);
v_isSharedCheck_4997_ = !lean_is_exclusive(v___x_4981_);
if (v_isSharedCheck_4997_ == 0)
{
v___x_4992_ = v___x_4981_;
v_isShared_4993_ = v_isSharedCheck_4997_;
goto v_resetjp_4991_;
}
else
{
lean_inc(v_a_4990_);
lean_dec(v___x_4981_);
v___x_4992_ = lean_box(0);
v_isShared_4993_ = v_isSharedCheck_4997_;
goto v_resetjp_4991_;
}
v_resetjp_4991_:
{
lean_object* v___x_4995_; 
if (v_isShared_4993_ == 0)
{
v___x_4995_ = v___x_4992_;
goto v_reusejp_4994_;
}
else
{
lean_object* v_reuseFailAlloc_4996_; 
v_reuseFailAlloc_4996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4996_, 0, v_a_4990_);
v___x_4995_ = v_reuseFailAlloc_4996_;
goto v_reusejp_4994_;
}
v_reusejp_4994_:
{
return v___x_4995_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_subscribe___redArg___boxed(lean_object* v_ch_4998_, lean_object* v_a_4999_){
_start:
{
lean_object* v_res_5000_; 
v_res_5000_ = l_Std_Broadcast_subscribe___redArg(v_ch_4998_);
return v_res_5000_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_subscribe(lean_object* v_00_u03b1_5001_, lean_object* v_ch_5002_){
_start:
{
lean_object* v___x_5004_; 
v___x_5004_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg(v_ch_5002_);
if (lean_obj_tag(v___x_5004_) == 0)
{
lean_object* v_a_5005_; lean_object* v___x_5007_; uint8_t v_isShared_5008_; uint8_t v_isSharedCheck_5012_; 
v_a_5005_ = lean_ctor_get(v___x_5004_, 0);
v_isSharedCheck_5012_ = !lean_is_exclusive(v___x_5004_);
if (v_isSharedCheck_5012_ == 0)
{
v___x_5007_ = v___x_5004_;
v_isShared_5008_ = v_isSharedCheck_5012_;
goto v_resetjp_5006_;
}
else
{
lean_inc(v_a_5005_);
lean_dec(v___x_5004_);
v___x_5007_ = lean_box(0);
v_isShared_5008_ = v_isSharedCheck_5012_;
goto v_resetjp_5006_;
}
v_resetjp_5006_:
{
lean_object* v___x_5010_; 
if (v_isShared_5008_ == 0)
{
v___x_5010_ = v___x_5007_;
goto v_reusejp_5009_;
}
else
{
lean_object* v_reuseFailAlloc_5011_; 
v_reuseFailAlloc_5011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5011_, 0, v_a_5005_);
v___x_5010_ = v_reuseFailAlloc_5011_;
goto v_reusejp_5009_;
}
v_reusejp_5009_:
{
return v___x_5010_;
}
}
}
else
{
lean_object* v_a_5013_; lean_object* v___x_5015_; uint8_t v_isShared_5016_; uint8_t v_isSharedCheck_5020_; 
v_a_5013_ = lean_ctor_get(v___x_5004_, 0);
v_isSharedCheck_5020_ = !lean_is_exclusive(v___x_5004_);
if (v_isSharedCheck_5020_ == 0)
{
v___x_5015_ = v___x_5004_;
v_isShared_5016_ = v_isSharedCheck_5020_;
goto v_resetjp_5014_;
}
else
{
lean_inc(v_a_5013_);
lean_dec(v___x_5004_);
v___x_5015_ = lean_box(0);
v_isShared_5016_ = v_isSharedCheck_5020_;
goto v_resetjp_5014_;
}
v_resetjp_5014_:
{
lean_object* v___x_5018_; 
if (v_isShared_5016_ == 0)
{
v___x_5018_ = v___x_5015_;
goto v_reusejp_5017_;
}
else
{
lean_object* v_reuseFailAlloc_5019_; 
v_reuseFailAlloc_5019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5019_, 0, v_a_5013_);
v___x_5018_ = v_reuseFailAlloc_5019_;
goto v_reusejp_5017_;
}
v_reusejp_5017_:
{
return v___x_5018_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_subscribe___boxed(lean_object* v_00_u03b1_5021_, lean_object* v_ch_5022_, lean_object* v_a_5023_){
_start:
{
lean_object* v_res_5024_; 
v_res_5024_ = l_Std_Broadcast_subscribe(v_00_u03b1_5021_, v_ch_5022_);
return v_res_5024_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_close___redArg(lean_object* v_ch_5025_){
_start:
{
lean_object* v___x_5027_; 
v___x_5027_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg(v_ch_5025_);
if (lean_obj_tag(v___x_5027_) == 0)
{
lean_object* v_a_5028_; lean_object* v___x_5030_; uint8_t v_isShared_5031_; uint8_t v_isSharedCheck_5035_; 
v_a_5028_ = lean_ctor_get(v___x_5027_, 0);
v_isSharedCheck_5035_ = !lean_is_exclusive(v___x_5027_);
if (v_isSharedCheck_5035_ == 0)
{
v___x_5030_ = v___x_5027_;
v_isShared_5031_ = v_isSharedCheck_5035_;
goto v_resetjp_5029_;
}
else
{
lean_inc(v_a_5028_);
lean_dec(v___x_5027_);
v___x_5030_ = lean_box(0);
v_isShared_5031_ = v_isSharedCheck_5035_;
goto v_resetjp_5029_;
}
v_resetjp_5029_:
{
lean_object* v___x_5033_; 
if (v_isShared_5031_ == 0)
{
v___x_5033_ = v___x_5030_;
goto v_reusejp_5032_;
}
else
{
lean_object* v_reuseFailAlloc_5034_; 
v_reuseFailAlloc_5034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5034_, 0, v_a_5028_);
v___x_5033_ = v_reuseFailAlloc_5034_;
goto v_reusejp_5032_;
}
v_reusejp_5032_:
{
return v___x_5033_;
}
}
}
else
{
lean_object* v_a_5036_; lean_object* v___x_5038_; uint8_t v_isShared_5039_; uint8_t v_isSharedCheck_5053_; 
v_a_5036_ = lean_ctor_get(v___x_5027_, 0);
v_isSharedCheck_5053_ = !lean_is_exclusive(v___x_5027_);
if (v_isSharedCheck_5053_ == 0)
{
v___x_5038_ = v___x_5027_;
v_isShared_5039_ = v_isSharedCheck_5053_;
goto v_resetjp_5037_;
}
else
{
lean_inc(v_a_5036_);
lean_dec(v___x_5027_);
v___x_5038_ = lean_box(0);
v_isShared_5039_ = v_isSharedCheck_5053_;
goto v_resetjp_5037_;
}
v_resetjp_5037_:
{
uint8_t v___x_5040_; 
v___x_5040_ = lean_unbox(v_a_5036_);
lean_dec(v_a_5036_);
switch(v___x_5040_)
{
case 0:
{
lean_object* v___x_5041_; lean_object* v___x_5043_; 
v___x_5041_ = ((lean_object*)(l_Std_instMonadLiftBroadcastIO___lam__0___closed__0));
if (v_isShared_5039_ == 0)
{
lean_ctor_set(v___x_5038_, 0, v___x_5041_);
v___x_5043_ = v___x_5038_;
goto v_reusejp_5042_;
}
else
{
lean_object* v_reuseFailAlloc_5044_; 
v_reuseFailAlloc_5044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5044_, 0, v___x_5041_);
v___x_5043_ = v_reuseFailAlloc_5044_;
goto v_reusejp_5042_;
}
v_reusejp_5042_:
{
return v___x_5043_;
}
}
case 1:
{
lean_object* v___x_5045_; lean_object* v___x_5047_; 
v___x_5045_ = ((lean_object*)(l_Std_instMonadLiftBroadcastIO___lam__0___closed__1));
if (v_isShared_5039_ == 0)
{
lean_ctor_set(v___x_5038_, 0, v___x_5045_);
v___x_5047_ = v___x_5038_;
goto v_reusejp_5046_;
}
else
{
lean_object* v_reuseFailAlloc_5048_; 
v_reuseFailAlloc_5048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5048_, 0, v___x_5045_);
v___x_5047_ = v_reuseFailAlloc_5048_;
goto v_reusejp_5046_;
}
v_reusejp_5046_:
{
return v___x_5047_;
}
}
default: 
{
lean_object* v___x_5049_; lean_object* v___x_5051_; 
v___x_5049_ = ((lean_object*)(l_Std_instMonadLiftBroadcastIO___lam__0___closed__2));
if (v_isShared_5039_ == 0)
{
lean_ctor_set(v___x_5038_, 0, v___x_5049_);
v___x_5051_ = v___x_5038_;
goto v_reusejp_5050_;
}
else
{
lean_object* v_reuseFailAlloc_5052_; 
v_reuseFailAlloc_5052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5052_, 0, v___x_5049_);
v___x_5051_ = v_reuseFailAlloc_5052_;
goto v_reusejp_5050_;
}
v_reusejp_5050_:
{
return v___x_5051_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_close___redArg___boxed(lean_object* v_ch_5054_, lean_object* v_a_5055_){
_start:
{
lean_object* v_res_5056_; 
v_res_5056_ = l_Std_Broadcast_close___redArg(v_ch_5054_);
return v_res_5056_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_close(lean_object* v_00_u03b1_5057_, lean_object* v_ch_5058_){
_start:
{
lean_object* v___x_5060_; 
v___x_5060_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg(v_ch_5058_);
if (lean_obj_tag(v___x_5060_) == 0)
{
lean_object* v_a_5061_; lean_object* v___x_5063_; uint8_t v_isShared_5064_; uint8_t v_isSharedCheck_5068_; 
v_a_5061_ = lean_ctor_get(v___x_5060_, 0);
v_isSharedCheck_5068_ = !lean_is_exclusive(v___x_5060_);
if (v_isSharedCheck_5068_ == 0)
{
v___x_5063_ = v___x_5060_;
v_isShared_5064_ = v_isSharedCheck_5068_;
goto v_resetjp_5062_;
}
else
{
lean_inc(v_a_5061_);
lean_dec(v___x_5060_);
v___x_5063_ = lean_box(0);
v_isShared_5064_ = v_isSharedCheck_5068_;
goto v_resetjp_5062_;
}
v_resetjp_5062_:
{
lean_object* v___x_5066_; 
if (v_isShared_5064_ == 0)
{
v___x_5066_ = v___x_5063_;
goto v_reusejp_5065_;
}
else
{
lean_object* v_reuseFailAlloc_5067_; 
v_reuseFailAlloc_5067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5067_, 0, v_a_5061_);
v___x_5066_ = v_reuseFailAlloc_5067_;
goto v_reusejp_5065_;
}
v_reusejp_5065_:
{
return v___x_5066_;
}
}
}
else
{
lean_object* v_a_5069_; lean_object* v___x_5071_; uint8_t v_isShared_5072_; uint8_t v_isSharedCheck_5086_; 
v_a_5069_ = lean_ctor_get(v___x_5060_, 0);
v_isSharedCheck_5086_ = !lean_is_exclusive(v___x_5060_);
if (v_isSharedCheck_5086_ == 0)
{
v___x_5071_ = v___x_5060_;
v_isShared_5072_ = v_isSharedCheck_5086_;
goto v_resetjp_5070_;
}
else
{
lean_inc(v_a_5069_);
lean_dec(v___x_5060_);
v___x_5071_ = lean_box(0);
v_isShared_5072_ = v_isSharedCheck_5086_;
goto v_resetjp_5070_;
}
v_resetjp_5070_:
{
uint8_t v___x_5073_; 
v___x_5073_ = lean_unbox(v_a_5069_);
lean_dec(v_a_5069_);
switch(v___x_5073_)
{
case 0:
{
lean_object* v___x_5074_; lean_object* v___x_5076_; 
v___x_5074_ = ((lean_object*)(l_Std_instMonadLiftBroadcastIO___lam__0___closed__0));
if (v_isShared_5072_ == 0)
{
lean_ctor_set(v___x_5071_, 0, v___x_5074_);
v___x_5076_ = v___x_5071_;
goto v_reusejp_5075_;
}
else
{
lean_object* v_reuseFailAlloc_5077_; 
v_reuseFailAlloc_5077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5077_, 0, v___x_5074_);
v___x_5076_ = v_reuseFailAlloc_5077_;
goto v_reusejp_5075_;
}
v_reusejp_5075_:
{
return v___x_5076_;
}
}
case 1:
{
lean_object* v___x_5078_; lean_object* v___x_5080_; 
v___x_5078_ = ((lean_object*)(l_Std_instMonadLiftBroadcastIO___lam__0___closed__1));
if (v_isShared_5072_ == 0)
{
lean_ctor_set(v___x_5071_, 0, v___x_5078_);
v___x_5080_ = v___x_5071_;
goto v_reusejp_5079_;
}
else
{
lean_object* v_reuseFailAlloc_5081_; 
v_reuseFailAlloc_5081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5081_, 0, v___x_5078_);
v___x_5080_ = v_reuseFailAlloc_5081_;
goto v_reusejp_5079_;
}
v_reusejp_5079_:
{
return v___x_5080_;
}
}
default: 
{
lean_object* v___x_5082_; lean_object* v___x_5084_; 
v___x_5082_ = ((lean_object*)(l_Std_instMonadLiftBroadcastIO___lam__0___closed__2));
if (v_isShared_5072_ == 0)
{
lean_ctor_set(v___x_5071_, 0, v___x_5082_);
v___x_5084_ = v___x_5071_;
goto v_reusejp_5083_;
}
else
{
lean_object* v_reuseFailAlloc_5085_; 
v_reuseFailAlloc_5085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5085_, 0, v___x_5082_);
v___x_5084_ = v_reuseFailAlloc_5085_;
goto v_reusejp_5083_;
}
v_reusejp_5083_:
{
return v___x_5084_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_close___boxed(lean_object* v_00_u03b1_5087_, lean_object* v_ch_5088_, lean_object* v_a_5089_){
_start:
{
lean_object* v_res_5090_; 
v_res_5090_ = l_Std_Broadcast_close(v_00_u03b1_5087_, v_ch_5088_);
return v_res_5090_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_send___redArg___lam__0(lean_object* v_x_5091_){
_start:
{
lean_object* v___y_5094_; 
if (lean_obj_tag(v_x_5091_) == 0)
{
lean_object* v_a_5098_; uint8_t v___x_5099_; 
v_a_5098_ = lean_ctor_get(v_x_5091_, 0);
lean_inc(v_a_5098_);
lean_dec_ref_known(v_x_5091_, 1);
v___x_5099_ = lean_unbox(v_a_5098_);
lean_dec(v_a_5098_);
switch(v___x_5099_)
{
case 0:
{
lean_object* v___x_5100_; 
v___x_5100_ = ((lean_object*)(l_Std_instToStringBroadcastError___lam__0___closed__0));
v___y_5094_ = v___x_5100_;
goto v___jp_5093_;
}
case 1:
{
lean_object* v___x_5101_; 
v___x_5101_ = ((lean_object*)(l_Std_instToStringBroadcastError___lam__0___closed__1));
v___y_5094_ = v___x_5101_;
goto v___jp_5093_;
}
default: 
{
lean_object* v___x_5102_; 
v___x_5102_ = ((lean_object*)(l_Std_instToStringBroadcastError___lam__0___closed__2));
v___y_5094_ = v___x_5102_;
goto v___jp_5093_;
}
}
}
else
{
lean_object* v_a_5103_; lean_object* v___x_5105_; uint8_t v_isShared_5106_; uint8_t v_isSharedCheck_5111_; 
v_a_5103_ = lean_ctor_get(v_x_5091_, 0);
v_isSharedCheck_5111_ = !lean_is_exclusive(v_x_5091_);
if (v_isSharedCheck_5111_ == 0)
{
v___x_5105_ = v_x_5091_;
v_isShared_5106_ = v_isSharedCheck_5111_;
goto v_resetjp_5104_;
}
else
{
lean_inc(v_a_5103_);
lean_dec(v_x_5091_);
v___x_5105_ = lean_box(0);
v_isShared_5106_ = v_isSharedCheck_5111_;
goto v_resetjp_5104_;
}
v_resetjp_5104_:
{
lean_object* v___x_5108_; 
if (v_isShared_5106_ == 0)
{
v___x_5108_ = v___x_5105_;
goto v_reusejp_5107_;
}
else
{
lean_object* v_reuseFailAlloc_5110_; 
v_reuseFailAlloc_5110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5110_, 0, v_a_5103_);
v___x_5108_ = v_reuseFailAlloc_5110_;
goto v_reusejp_5107_;
}
v_reusejp_5107_:
{
lean_object* v___x_5109_; 
v___x_5109_ = lean_task_pure(v___x_5108_);
return v___x_5109_;
}
}
}
v___jp_5093_:
{
lean_object* v___x_5095_; lean_object* v___x_5096_; lean_object* v___x_5097_; 
lean_inc_ref(v___y_5094_);
v___x_5095_ = lean_mk_io_user_error(v___y_5094_);
v___x_5096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5096_, 0, v___x_5095_);
v___x_5097_ = lean_task_pure(v___x_5096_);
return v___x_5097_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_send___redArg___lam__0___boxed(lean_object* v_x_5112_, lean_object* v___y_5113_){
_start:
{
lean_object* v_res_5114_; 
v_res_5114_ = l_Std_Broadcast_send___redArg___lam__0(v_x_5112_);
return v_res_5114_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_send___redArg(lean_object* v_ch_5116_, lean_object* v_v_5117_){
_start:
{
lean_object* v___f_5119_; lean_object* v___x_5120_; lean_object* v___x_5121_; uint8_t v___x_5122_; lean_object* v___x_5123_; 
v___f_5119_ = ((lean_object*)(l_Std_Broadcast_send___redArg___closed__0));
v___x_5120_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg(v_ch_5116_, v_v_5117_);
v___x_5121_ = lean_unsigned_to_nat(0u);
v___x_5122_ = 1;
v___x_5123_ = lean_io_bind_task(v___x_5120_, v___f_5119_, v___x_5121_, v___x_5122_);
return v___x_5123_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_send___redArg___boxed(lean_object* v_ch_5124_, lean_object* v_v_5125_, lean_object* v_a_5126_){
_start:
{
lean_object* v_res_5127_; 
v_res_5127_ = l_Std_Broadcast_send___redArg(v_ch_5124_, v_v_5125_);
return v_res_5127_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_send(lean_object* v_00_u03b1_5128_, lean_object* v_ch_5129_, lean_object* v_v_5130_){
_start:
{
lean_object* v___f_5132_; lean_object* v___x_5133_; lean_object* v___x_5134_; uint8_t v___x_5135_; lean_object* v___x_5136_; 
v___f_5132_ = ((lean_object*)(l_Std_Broadcast_send___redArg___closed__0));
v___x_5133_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg(v_ch_5129_, v_v_5130_);
v___x_5134_ = lean_unsigned_to_nat(0u);
v___x_5135_ = 1;
v___x_5136_ = lean_io_bind_task(v___x_5133_, v___f_5132_, v___x_5134_, v___x_5135_);
return v___x_5136_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_send___boxed(lean_object* v_00_u03b1_5137_, lean_object* v_ch_5138_, lean_object* v_v_5139_, lean_object* v_a_5140_){
_start:
{
lean_object* v_res_5141_; 
v_res_5141_ = l_Std_Broadcast_send(v_00_u03b1_5137_, v_ch_5138_, v_v_5139_);
return v_res_5141_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_tryRecv___redArg(lean_object* v_ch_5142_){
_start:
{
lean_object* v___x_5144_; 
v___x_5144_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg(v_ch_5142_);
return v___x_5144_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_tryRecv___redArg___boxed(lean_object* v_ch_5145_, lean_object* v_a_5146_){
_start:
{
lean_object* v_res_5147_; 
v_res_5147_ = l_Std_Broadcast_Receiver_tryRecv___redArg(v_ch_5145_);
return v_res_5147_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_tryRecv(lean_object* v_00_u03b1_5148_, lean_object* v_ch_5149_){
_start:
{
lean_object* v___x_5151_; 
v___x_5151_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg(v_ch_5149_);
return v___x_5151_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_tryRecv___boxed(lean_object* v_00_u03b1_5152_, lean_object* v_ch_5153_, lean_object* v_a_5154_){
_start:
{
lean_object* v_res_5155_; 
v_res_5155_ = l_Std_Broadcast_Receiver_tryRecv(v_00_u03b1_5152_, v_ch_5153_);
return v_res_5155_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recv___redArg(lean_object* v_ch_5156_){
_start:
{
lean_object* v___x_5158_; 
v___x_5158_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg(v_ch_5156_);
return v___x_5158_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recv___redArg___boxed(lean_object* v_ch_5159_, lean_object* v_a_5160_){
_start:
{
lean_object* v_res_5161_; 
v_res_5161_ = l_Std_Broadcast_Receiver_recv___redArg(v_ch_5159_);
return v_res_5161_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recv(lean_object* v_00_u03b1_5162_, lean_object* v_inst_5163_, lean_object* v_ch_5164_){
_start:
{
lean_object* v___x_5166_; 
v___x_5166_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg(v_ch_5164_);
return v___x_5166_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recv___boxed(lean_object* v_00_u03b1_5167_, lean_object* v_inst_5168_, lean_object* v_ch_5169_, lean_object* v_a_5170_){
_start:
{
lean_object* v_res_5171_; 
v_res_5171_ = l_Std_Broadcast_Receiver_recv(v_00_u03b1_5167_, v_inst_5168_, v_ch_5169_);
lean_dec(v_inst_5168_);
return v_res_5171_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recvSelector___redArg(lean_object* v_ch_5172_){
_start:
{
lean_object* v___x_5173_; 
v___x_5173_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg(v_ch_5172_);
return v___x_5173_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recvSelector(lean_object* v_00_u03b1_5174_, lean_object* v_inst_5175_, lean_object* v_ch_5176_){
_start:
{
lean_object* v___x_5177_; 
v___x_5177_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg(v_ch_5176_);
return v___x_5177_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recvSelector___boxed(lean_object* v_00_u03b1_5178_, lean_object* v_inst_5179_, lean_object* v_ch_5180_){
_start:
{
lean_object* v_res_5181_; 
v_res_5181_ = l_Std_Broadcast_Receiver_recvSelector(v_00_u03b1_5178_, v_inst_5179_, v_ch_5180_);
lean_dec(v_inst_5179_);
return v_res_5181_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_unsubscribe___redArg(lean_object* v_ch_5182_){
_start:
{
lean_object* v___x_5184_; 
v___x_5184_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg(v_ch_5182_);
return v___x_5184_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_unsubscribe___redArg___boxed(lean_object* v_ch_5185_, lean_object* v_a_5186_){
_start:
{
lean_object* v_res_5187_; 
v_res_5187_ = l_Std_Broadcast_Receiver_unsubscribe___redArg(v_ch_5185_);
return v_res_5187_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_unsubscribe(lean_object* v_00_u03b1_5188_, lean_object* v_ch_5189_){
_start:
{
lean_object* v___x_5191_; 
v___x_5191_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg(v_ch_5189_);
return v___x_5191_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_unsubscribe___boxed(lean_object* v_00_u03b1_5192_, lean_object* v_ch_5193_, lean_object* v_a_5194_){
_start:
{
lean_object* v_res_5195_; 
v_res_5195_ = l_Std_Broadcast_Receiver_unsubscribe(v_00_u03b1_5192_, v_ch_5193_);
return v_res_5195_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_forAsync___redArg(lean_object* v_f_5196_, lean_object* v_ch_5197_, lean_object* v_prio_5198_){
_start:
{
lean_object* v___x_5200_; 
v___x_5200_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg(v_f_5196_, v_ch_5197_, v_prio_5198_);
return v___x_5200_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_forAsync___redArg___boxed(lean_object* v_f_5201_, lean_object* v_ch_5202_, lean_object* v_prio_5203_, lean_object* v_a_5204_){
_start:
{
lean_object* v_res_5205_; 
v_res_5205_ = l_Std_Broadcast_Receiver_forAsync___redArg(v_f_5201_, v_ch_5202_, v_prio_5203_);
return v_res_5205_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_forAsync(lean_object* v_00_u03b1_5206_, lean_object* v_f_5207_, lean_object* v_ch_5208_, lean_object* v_prio_5209_){
_start:
{
lean_object* v___x_5211_; 
v___x_5211_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg(v_f_5207_, v_ch_5208_, v_prio_5209_);
return v___x_5211_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_forAsync___boxed(lean_object* v_00_u03b1_5212_, lean_object* v_f_5213_, lean_object* v_ch_5214_, lean_object* v_prio_5215_, lean_object* v_a_5216_){
_start:
{
lean_object* v_res_5217_; 
v_res_5217_ = l_Std_Broadcast_Receiver_forAsync(v_00_u03b1_5212_, v_f_5213_, v_ch_5214_, v_prio_5215_);
return v_res_5217_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg(){
_start:
{
lean_object* v___x_5224_; 
v___x_5224_ = ((lean_object*)(l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___closed__2));
return v___x_5224_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___boxed(lean_object* v___dummy_5225_){
_start:
{
lean_object* v_res_5226_; 
v_res_5226_ = l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg();
return v_res_5226_;
}
}
static lean_object* _init_l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___closed__0(void){
_start:
{
lean_object* v___x_5227_; 
v___x_5227_ = l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg();
return v___x_5227_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited(lean_object* v_00_u03b1_5228_, lean_object* v_inst_5229_){
_start:
{
lean_object* v___x_5230_; 
v___x_5230_ = lean_obj_once(&l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___closed__0, &l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___closed__0_once, _init_l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___closed__0);
return v___x_5230_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___boxed(lean_object* v_00_u03b1_5231_, lean_object* v_inst_5232_){
_start:
{
lean_object* v_res_5233_; 
v_res_5233_ = l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited(v_00_u03b1_5231_, v_inst_5232_);
lean_dec(v_inst_5232_);
return v_res_5233_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__0(lean_object* v_a_5234_){
_start:
{
lean_object* v___x_5235_; 
v___x_5235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5235_, 0, v_a_5234_);
return v___x_5235_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__1(lean_object* v___f_5236_, lean_object* v_x_5237_){
_start:
{
if (lean_obj_tag(v_x_5237_) == 0)
{
lean_object* v_a_5239_; lean_object* v___x_5241_; uint8_t v_isShared_5242_; uint8_t v_isSharedCheck_5247_; 
lean_dec_ref(v___f_5236_);
v_a_5239_ = lean_ctor_get(v_x_5237_, 0);
v_isSharedCheck_5247_ = !lean_is_exclusive(v_x_5237_);
if (v_isSharedCheck_5247_ == 0)
{
v___x_5241_ = v_x_5237_;
v_isShared_5242_ = v_isSharedCheck_5247_;
goto v_resetjp_5240_;
}
else
{
lean_inc(v_a_5239_);
lean_dec(v_x_5237_);
v___x_5241_ = lean_box(0);
v_isShared_5242_ = v_isSharedCheck_5247_;
goto v_resetjp_5240_;
}
v_resetjp_5240_:
{
lean_object* v___x_5244_; 
if (v_isShared_5242_ == 0)
{
v___x_5244_ = v___x_5241_;
goto v_reusejp_5243_;
}
else
{
lean_object* v_reuseFailAlloc_5246_; 
v_reuseFailAlloc_5246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5246_, 0, v_a_5239_);
v___x_5244_ = v_reuseFailAlloc_5246_;
goto v_reusejp_5243_;
}
v_reusejp_5243_:
{
lean_object* v___x_5245_; 
v___x_5245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5245_, 0, v___x_5244_);
return v___x_5245_;
}
}
}
else
{
lean_object* v_a_5248_; 
v_a_5248_ = lean_ctor_get(v_x_5237_, 0);
lean_inc(v_a_5248_);
lean_dec_ref_known(v_x_5237_, 1);
if (lean_obj_tag(v_a_5248_) == 0)
{
lean_object* v_a_5249_; lean_object* v___x_5251_; uint8_t v_isShared_5252_; uint8_t v_isSharedCheck_5257_; 
lean_dec_ref(v___f_5236_);
v_a_5249_ = lean_ctor_get(v_a_5248_, 0);
v_isSharedCheck_5257_ = !lean_is_exclusive(v_a_5248_);
if (v_isSharedCheck_5257_ == 0)
{
v___x_5251_ = v_a_5248_;
v_isShared_5252_ = v_isSharedCheck_5257_;
goto v_resetjp_5250_;
}
else
{
lean_inc(v_a_5249_);
lean_dec(v_a_5248_);
v___x_5251_ = lean_box(0);
v_isShared_5252_ = v_isSharedCheck_5257_;
goto v_resetjp_5250_;
}
v_resetjp_5250_:
{
lean_object* v___x_5254_; 
if (v_isShared_5252_ == 0)
{
v___x_5254_ = v___x_5251_;
goto v_reusejp_5253_;
}
else
{
lean_object* v_reuseFailAlloc_5256_; 
v_reuseFailAlloc_5256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5256_, 0, v_a_5249_);
v___x_5254_ = v_reuseFailAlloc_5256_;
goto v_reusejp_5253_;
}
v_reusejp_5253_:
{
lean_object* v___x_5255_; 
v___x_5255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5255_, 0, v___x_5254_);
return v___x_5255_;
}
}
}
else
{
lean_object* v_a_5258_; lean_object* v___x_5259_; uint8_t v___x_5260_; lean_object* v___x_5261_; lean_object* v___x_5262_; 
v_a_5258_ = lean_ctor_get(v_a_5248_, 0);
lean_inc(v_a_5258_);
lean_dec_ref_known(v_a_5248_, 1);
v___x_5259_ = lean_unsigned_to_nat(0u);
v___x_5260_ = 0;
v___x_5261_ = lean_task_map(v___f_5236_, v_a_5258_, v___x_5259_, v___x_5260_);
v___x_5262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5262_, 0, v___x_5261_);
return v___x_5262_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__1___boxed(lean_object* v___f_5263_, lean_object* v_x_5264_, lean_object* v___y_5265_){
_start:
{
lean_object* v_res_5266_; 
v_res_5266_ = l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__1(v___f_5263_, v_x_5264_);
return v_res_5266_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__2(lean_object* v___f_5267_, lean_object* v_receiver_5268_){
_start:
{
lean_object* v___x_5270_; uint8_t v___x_5271_; lean_object* v___x_5272_; lean_object* v___x_5273_; lean_object* v___x_5274_; lean_object* v___x_5275_; lean_object* v___x_5276_; 
v___x_5270_ = lean_unsigned_to_nat(0u);
v___x_5271_ = 0;
v___x_5272_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg(v_receiver_5268_);
v___x_5273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5273_, 0, v___x_5272_);
v___x_5274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5274_, 0, v___x_5273_);
v___x_5275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5275_, 0, v___x_5274_);
v___x_5276_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_5270_, v___x_5271_, v___x_5275_, v___f_5267_);
return v___x_5276_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__2___boxed(lean_object* v___f_5277_, lean_object* v_receiver_5278_, lean_object* v___y_5279_){
_start:
{
lean_object* v_res_5280_; 
v_res_5280_ = l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__2(v___f_5277_, v_receiver_5278_);
return v_res_5280_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg(){
_start:
{
lean_object* v___f_5287_; 
v___f_5287_ = ((lean_object*)(l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___closed__2));
return v___f_5287_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___boxed(lean_object* v___dummy_5288_){
_start:
{
lean_object* v_res_5289_; 
v_res_5289_ = l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg();
return v_res_5289_;
}
}
static lean_object* _init_l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___closed__0(void){
_start:
{
lean_object* v___x_5290_; 
v___x_5290_ = l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg();
return v___x_5290_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited(lean_object* v_00_u03b1_5291_, lean_object* v_inst_5292_){
_start:
{
lean_object* v___x_5293_; 
v___x_5293_ = lean_obj_once(&l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___closed__0, &l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___closed__0_once, _init_l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___closed__0);
return v___x_5293_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___boxed(lean_object* v_00_u03b1_5294_, lean_object* v_inst_5295_){
_start:
{
lean_object* v_res_5296_; 
v_res_5296_ = l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited(v_00_u03b1_5294_, v_inst_5295_);
lean_dec(v_inst_5295_);
return v_res_5296_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__0(lean_object* v_x_5301_){
_start:
{
if (lean_obj_tag(v_x_5301_) == 0)
{
lean_object* v_a_5303_; lean_object* v___x_5305_; uint8_t v_isShared_5306_; uint8_t v_isSharedCheck_5311_; 
v_a_5303_ = lean_ctor_get(v_x_5301_, 0);
v_isSharedCheck_5311_ = !lean_is_exclusive(v_x_5301_);
if (v_isSharedCheck_5311_ == 0)
{
v___x_5305_ = v_x_5301_;
v_isShared_5306_ = v_isSharedCheck_5311_;
goto v_resetjp_5304_;
}
else
{
lean_inc(v_a_5303_);
lean_dec(v_x_5301_);
v___x_5305_ = lean_box(0);
v_isShared_5306_ = v_isSharedCheck_5311_;
goto v_resetjp_5304_;
}
v_resetjp_5304_:
{
lean_object* v___x_5308_; 
if (v_isShared_5306_ == 0)
{
v___x_5308_ = v___x_5305_;
goto v_reusejp_5307_;
}
else
{
lean_object* v_reuseFailAlloc_5310_; 
v_reuseFailAlloc_5310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5310_, 0, v_a_5303_);
v___x_5308_ = v_reuseFailAlloc_5310_;
goto v_reusejp_5307_;
}
v_reusejp_5307_:
{
lean_object* v___x_5309_; 
v___x_5309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5309_, 0, v___x_5308_);
return v___x_5309_;
}
}
}
else
{
lean_object* v_a_5312_; lean_object* v___x_5313_; lean_object* v___x_5314_; uint8_t v___x_5315_; lean_object* v___x_5316_; lean_object* v___x_5317_; 
v_a_5312_ = lean_ctor_get(v_x_5301_, 0);
lean_inc(v_a_5312_);
lean_dec_ref_known(v_x_5301_, 1);
v___x_5313_ = ((lean_object*)(l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__0___closed__1));
v___x_5314_ = lean_unsigned_to_nat(0u);
v___x_5315_ = 0;
v___x_5316_ = lean_task_map(v___x_5313_, v_a_5312_, v___x_5314_, v___x_5315_);
v___x_5317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5317_, 0, v___x_5316_);
return v___x_5317_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__0___boxed(lean_object* v_x_5318_, lean_object* v___y_5319_){
_start:
{
lean_object* v_res_5320_; 
v_res_5320_ = l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__0(v_x_5318_);
return v_res_5320_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__2(lean_object* v___f_5321_, lean_object* v___f_5322_, lean_object* v_receiver_5323_, lean_object* v_x_5324_){
_start:
{
lean_object* v___x_5326_; uint8_t v___x_5327_; lean_object* v___x_5328_; uint8_t v___x_5329_; lean_object* v___x_5330_; lean_object* v___x_5331_; lean_object* v___x_5332_; lean_object* v___x_5333_; 
v___x_5326_ = lean_unsigned_to_nat(0u);
v___x_5327_ = 0;
v___x_5328_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg(v_receiver_5323_, v_x_5324_);
v___x_5329_ = 1;
v___x_5330_ = lean_io_bind_task(v___x_5328_, v___f_5321_, v___x_5326_, v___x_5329_);
v___x_5331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5331_, 0, v___x_5330_);
v___x_5332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5332_, 0, v___x_5331_);
v___x_5333_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_5326_, v___x_5327_, v___x_5332_, v___f_5322_);
return v___x_5333_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__2___boxed(lean_object* v___f_5334_, lean_object* v___f_5335_, lean_object* v_receiver_5336_, lean_object* v_x_5337_, lean_object* v___y_5338_){
_start:
{
lean_object* v_res_5339_; 
v_res_5339_ = l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__2(v___f_5334_, v___f_5335_, v_receiver_5336_, v_x_5337_);
return v_res_5339_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__1(lean_object* v_x_5340_){
_start:
{
lean_object* v___x_5342_; 
v___x_5342_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___closed__1));
return v___x_5342_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__1___boxed(lean_object* v_x_5343_, lean_object* v___y_5344_){
_start:
{
lean_object* v_res_5345_; 
v_res_5345_ = l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__1(v_x_5343_);
lean_dec_ref(v_x_5343_);
return v_res_5345_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__3(lean_object* v___f_5346_, lean_object* v_socket_5347_, lean_object* v_x_5348_, lean_object* v___y_5349_){
_start:
{
lean_object* v___x_5351_; 
v___x_5351_ = lean_apply_3(v___f_5346_, v_socket_5347_, v___y_5349_, lean_box(0));
return v___x_5351_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__3___boxed(lean_object* v___f_5352_, lean_object* v_socket_5353_, lean_object* v_x_5354_, lean_object* v___y_5355_, lean_object* v___y_5356_){
_start:
{
lean_object* v_res_5357_; 
v_res_5357_ = l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__3(v___f_5352_, v_socket_5353_, v_x_5354_, v___y_5355_);
return v_res_5357_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__4(lean_object* v___f_5358_, lean_object* v___x_5359_, lean_object* v_socket_5360_, lean_object* v_data_5361_){
_start:
{
lean_object* v___x_5363_; lean_object* v___x_5364_; lean_object* v___x_5365_; uint8_t v___x_5366_; 
v___x_5363_ = lean_unsigned_to_nat(0u);
v___x_5364_ = lean_array_get_size(v_data_5361_);
v___x_5365_ = lean_box(0);
v___x_5366_ = lean_nat_dec_lt(v___x_5363_, v___x_5364_);
if (v___x_5366_ == 0)
{
lean_object* v___x_5367_; 
lean_dec_ref(v_data_5361_);
lean_dec_ref(v_socket_5360_);
lean_dec_ref(v___x_5359_);
lean_dec_ref(v___f_5358_);
v___x_5367_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___closed__1));
return v___x_5367_;
}
else
{
lean_object* v___f_5368_; size_t v___x_5369_; size_t v___x_5370_; lean_object* v___x_869__overap_5371_; lean_object* v___x_5372_; 
v___f_5368_ = lean_alloc_closure((void*)(l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__3___boxed), 5, 2);
lean_closure_set(v___f_5368_, 0, v___f_5358_);
lean_closure_set(v___f_5368_, 1, v_socket_5360_);
v___x_5369_ = ((size_t)0ULL);
v___x_5370_ = lean_usize_of_nat(v___x_5364_);
v___x_869__overap_5371_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_5359_, v___f_5368_, v_data_5361_, v___x_5369_, v___x_5370_, v___x_5365_);
v___x_5372_ = lean_apply_1(v___x_869__overap_5371_, lean_box(0));
return v___x_5372_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__4___boxed(lean_object* v___f_5373_, lean_object* v___x_5374_, lean_object* v_socket_5375_, lean_object* v_data_5376_, lean_object* v___y_5377_){
_start:
{
lean_object* v_res_5378_; 
v_res_5378_ = l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__4(v___f_5373_, v___x_5374_, v_socket_5375_, v_data_5376_);
return v_res_5378_;
}
}
static lean_object* _init_l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__3(void){
_start:
{
lean_object* v___x_5384_; 
v___x_5384_ = l_Std_Async_EAsync_instMonad___redArg();
return v___x_5384_;
}
}
static lean_object* _init_l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__4(void){
_start:
{
lean_object* v___x_5385_; lean_object* v___f_5386_; lean_object* v___f_5387_; 
v___x_5385_ = lean_obj_once(&l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__3, &l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__3_once, _init_l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__3);
v___f_5386_ = ((lean_object*)(l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__1));
v___f_5387_ = lean_alloc_closure((void*)(l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__4___boxed), 5, 2);
lean_closure_set(v___f_5387_, 0, v___f_5386_);
lean_closure_set(v___f_5387_, 1, v___x_5385_);
return v___f_5387_;
}
}
static lean_object* _init_l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__5(void){
_start:
{
lean_object* v___f_5388_; lean_object* v___f_5389_; lean_object* v___f_5390_; lean_object* v___x_5391_; 
v___f_5388_ = ((lean_object*)(l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__2));
v___f_5389_ = lean_obj_once(&l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__4, &l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__4_once, _init_l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__4);
v___f_5390_ = ((lean_object*)(l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__1));
v___x_5391_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5391_, 0, v___f_5390_);
lean_ctor_set(v___x_5391_, 1, v___f_5389_);
lean_ctor_set(v___x_5391_, 2, v___f_5388_);
return v___x_5391_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg(){
_start:
{
lean_object* v___x_5393_; 
v___x_5393_ = lean_obj_once(&l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__5, &l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__5_once, _init_l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__5);
return v___x_5393_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___boxed(lean_object* v___dummy_5394_){
_start:
{
lean_object* v_res_5395_; 
v_res_5395_ = l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg();
return v_res_5395_;
}
}
static lean_object* _init_l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___closed__0(void){
_start:
{
lean_object* v___x_5396_; 
v___x_5396_ = l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg();
return v___x_5396_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited(lean_object* v_00_u03b1_5397_, lean_object* v_inst_5398_){
_start:
{
lean_object* v___x_5399_; 
v___x_5399_ = lean_obj_once(&l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___closed__0, &l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___closed__0_once, _init_l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___closed__0);
return v___x_5399_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___boxed(lean_object* v_00_u03b1_5400_, lean_object* v_inst_5401_){
_start:
{
lean_object* v_res_5402_; 
v_res_5402_ = l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited(v_00_u03b1_5400_, v_inst_5401_);
lean_dec(v_inst_5401_);
return v_res_5402_;
}
}
static lean_object* _init_l_Std_Broadcast_Sync_new___auto__3(void){
_start:
{
lean_object* v___x_5403_; 
v___x_5403_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__26, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__26_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__26);
return v___x_5403_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_new___redArg(lean_object* v_capacity_5404_){
_start:
{
lean_object* v___x_5406_; 
v___x_5406_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg(v_capacity_5404_);
return v___x_5406_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_new___redArg___boxed(lean_object* v_capacity_5407_, lean_object* v_a_5408_){
_start:
{
lean_object* v_res_5409_; 
v_res_5409_ = l_Std_Broadcast_Sync_new___redArg(v_capacity_5407_);
return v_res_5409_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_new(lean_object* v_00_u03b1_5410_, lean_object* v_capacity_5411_, lean_object* v_h_5412_){
_start:
{
lean_object* v___x_5414_; 
v___x_5414_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg(v_capacity_5411_);
return v___x_5414_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_new___boxed(lean_object* v_00_u03b1_5415_, lean_object* v_capacity_5416_, lean_object* v_h_5417_, lean_object* v_a_5418_){
_start:
{
lean_object* v_res_5419_; 
v_res_5419_ = l_Std_Broadcast_Sync_new(v_00_u03b1_5415_, v_capacity_5416_, v_h_5417_);
return v_res_5419_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_trySend___redArg(lean_object* v_ch_5420_, lean_object* v_v_5421_){
_start:
{
lean_object* v___x_5423_; 
v___x_5423_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg(v_ch_5420_, v_v_5421_);
return v___x_5423_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_trySend___redArg___boxed(lean_object* v_ch_5424_, lean_object* v_v_5425_, lean_object* v_a_5426_){
_start:
{
lean_object* v_res_5427_; 
v_res_5427_ = l_Std_Broadcast_Sync_trySend___redArg(v_ch_5424_, v_v_5425_);
return v_res_5427_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_trySend(lean_object* v_00_u03b1_5428_, lean_object* v_ch_5429_, lean_object* v_v_5430_){
_start:
{
lean_object* v___x_5432_; 
v___x_5432_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg(v_ch_5429_, v_v_5430_);
return v___x_5432_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_trySend___boxed(lean_object* v_00_u03b1_5433_, lean_object* v_ch_5434_, lean_object* v_v_5435_, lean_object* v_a_5436_){
_start:
{
lean_object* v_res_5437_; 
v_res_5437_ = l_Std_Broadcast_Sync_trySend(v_00_u03b1_5433_, v_ch_5434_, v_v_5435_);
return v_res_5437_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_send___redArg(lean_object* v_ch_5439_, lean_object* v_v_5440_){
_start:
{
lean_object* v___f_5442_; lean_object* v___x_5443_; lean_object* v___x_5444_; lean_object* v___x_5445_; uint8_t v___x_5446_; lean_object* v___x_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; 
v___f_5442_ = ((lean_object*)(l_Std_Broadcast_send___redArg___closed__0));
v___x_5443_ = ((lean_object*)(l_Std_Broadcast_Sync_send___redArg___closed__0));
v___x_5444_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg(v_ch_5439_, v_v_5440_);
v___x_5445_ = lean_unsigned_to_nat(0u);
v___x_5446_ = 1;
v___x_5447_ = lean_io_bind_task(v___x_5444_, v___f_5442_, v___x_5445_, v___x_5446_);
v___x_5448_ = lean_io_wait(v___x_5447_);
v___x_5449_ = l_IO_ofExcept___redArg(v___x_5443_, v___x_5448_);
return v___x_5449_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_send___redArg___boxed(lean_object* v_ch_5450_, lean_object* v_v_5451_, lean_object* v_a_5452_){
_start:
{
lean_object* v_res_5453_; 
v_res_5453_ = l_Std_Broadcast_Sync_send___redArg(v_ch_5450_, v_v_5451_);
return v_res_5453_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_send(lean_object* v_00_u03b1_5454_, lean_object* v_ch_5455_, lean_object* v_v_5456_){
_start:
{
lean_object* v___f_5458_; lean_object* v___x_5459_; lean_object* v___x_5460_; lean_object* v___x_5461_; uint8_t v___x_5462_; lean_object* v___x_5463_; lean_object* v___x_5464_; lean_object* v___x_5465_; 
v___f_5458_ = ((lean_object*)(l_Std_Broadcast_send___redArg___closed__0));
v___x_5459_ = ((lean_object*)(l_Std_Broadcast_Sync_send___redArg___closed__0));
v___x_5460_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg(v_ch_5455_, v_v_5456_);
v___x_5461_ = lean_unsigned_to_nat(0u);
v___x_5462_ = 1;
v___x_5463_ = lean_io_bind_task(v___x_5460_, v___f_5458_, v___x_5461_, v___x_5462_);
v___x_5464_ = lean_io_wait(v___x_5463_);
v___x_5465_ = l_IO_ofExcept___redArg(v___x_5459_, v___x_5464_);
return v___x_5465_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_send___boxed(lean_object* v_00_u03b1_5466_, lean_object* v_ch_5467_, lean_object* v_v_5468_, lean_object* v_a_5469_){
_start:
{
lean_object* v_res_5470_; 
v_res_5470_ = l_Std_Broadcast_Sync_send(v_00_u03b1_5466_, v_ch_5467_, v_v_5468_);
return v_res_5470_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_tryRecv___redArg(lean_object* v_ch_5471_){
_start:
{
lean_object* v___x_5473_; 
v___x_5473_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg(v_ch_5471_);
return v___x_5473_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_tryRecv___redArg___boxed(lean_object* v_ch_5474_, lean_object* v_a_5475_){
_start:
{
lean_object* v_res_5476_; 
v_res_5476_ = l_Std_Broadcast_Sync_Receiver_tryRecv___redArg(v_ch_5474_);
return v_res_5476_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_tryRecv(lean_object* v_00_u03b1_5477_, lean_object* v_ch_5478_){
_start:
{
lean_object* v___x_5480_; 
v___x_5480_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg(v_ch_5478_);
return v___x_5480_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_tryRecv___boxed(lean_object* v_00_u03b1_5481_, lean_object* v_ch_5482_, lean_object* v_a_5483_){
_start:
{
lean_object* v_res_5484_; 
v_res_5484_ = l_Std_Broadcast_Sync_Receiver_tryRecv(v_00_u03b1_5481_, v_ch_5482_);
return v_res_5484_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_recv___redArg(lean_object* v_ch_5485_){
_start:
{
lean_object* v___x_5487_; lean_object* v___x_5488_; 
v___x_5487_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg(v_ch_5485_);
v___x_5488_ = lean_io_wait(v___x_5487_);
return v___x_5488_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_recv___redArg___boxed(lean_object* v_ch_5489_, lean_object* v_a_5490_){
_start:
{
lean_object* v_res_5491_; 
v_res_5491_ = l_Std_Broadcast_Sync_Receiver_recv___redArg(v_ch_5489_);
return v_res_5491_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_recv(lean_object* v_00_u03b1_5492_, lean_object* v_inst_5493_, lean_object* v_ch_5494_){
_start:
{
lean_object* v___x_5496_; 
v___x_5496_ = l_Std_Broadcast_Sync_Receiver_recv___redArg(v_ch_5494_);
return v___x_5496_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_recv___boxed(lean_object* v_00_u03b1_5497_, lean_object* v_inst_5498_, lean_object* v_ch_5499_, lean_object* v_a_5500_){
_start:
{
lean_object* v_res_5501_; 
v_res_5501_ = l_Std_Broadcast_Sync_Receiver_recv(v_00_u03b1_5497_, v_inst_5498_, v_ch_5499_);
lean_dec(v_inst_5498_);
return v_res_5501_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_forIn___redArg___lam__1(lean_object* v_toPure_5502_, lean_object* v_b_5503_, lean_object* v_f_5504_, lean_object* v_toBind_5505_, lean_object* v___f_5506_, lean_object* v_a_5507_){
_start:
{
if (lean_obj_tag(v_a_5507_) == 0)
{
lean_object* v___x_5508_; 
lean_dec(v___f_5506_);
lean_dec(v_toBind_5505_);
lean_dec(v_f_5504_);
v___x_5508_ = lean_apply_2(v_toPure_5502_, lean_box(0), v_b_5503_);
return v___x_5508_;
}
else
{
lean_object* v_val_5509_; lean_object* v___x_5510_; lean_object* v___x_5511_; 
lean_dec(v_toPure_5502_);
v_val_5509_ = lean_ctor_get(v_a_5507_, 0);
lean_inc(v_val_5509_);
lean_dec_ref_known(v_a_5507_, 1);
v___x_5510_ = lean_apply_2(v_f_5504_, v_val_5509_, v_b_5503_);
v___x_5511_ = lean_apply_4(v_toBind_5505_, lean_box(0), lean_box(0), v___x_5510_, v___f_5506_);
return v___x_5511_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_forIn___redArg(lean_object* v_inst_5512_, lean_object* v_inst_5513_, lean_object* v_inst_5514_, lean_object* v_ch_5515_, lean_object* v_f_5516_, lean_object* v_b_5517_){
_start:
{
lean_object* v_toApplicative_5518_; lean_object* v_toBind_5519_; lean_object* v_toPure_5520_; lean_object* v___x_5521_; lean_object* v___x_5522_; lean_object* v___f_5523_; lean_object* v___f_5524_; lean_object* v___x_5525_; 
v_toApplicative_5518_ = lean_ctor_get(v_inst_5513_, 0);
v_toBind_5519_ = lean_ctor_get(v_inst_5513_, 1);
lean_inc_n(v_toBind_5519_, 2);
v_toPure_5520_ = lean_ctor_get(v_toApplicative_5518_, 1);
lean_inc_n(v_toPure_5520_, 2);
lean_inc_ref(v_ch_5515_);
lean_inc(v_inst_5512_);
v___x_5521_ = lean_alloc_closure((void*)(l_Std_Broadcast_Sync_Receiver_recv___boxed), 4, 3);
lean_closure_set(v___x_5521_, 0, lean_box(0));
lean_closure_set(v___x_5521_, 1, v_inst_5512_);
lean_closure_set(v___x_5521_, 2, v_ch_5515_);
lean_inc(v_inst_5514_);
v___x_5522_ = lean_apply_2(v_inst_5514_, lean_box(0), v___x_5521_);
lean_inc(v_f_5516_);
v___f_5523_ = lean_alloc_closure((void*)(l_Std_Broadcast_Sync_Receiver_forIn___redArg___lam__0), 7, 6);
lean_closure_set(v___f_5523_, 0, v_toPure_5520_);
lean_closure_set(v___f_5523_, 1, v_inst_5512_);
lean_closure_set(v___f_5523_, 2, v_inst_5513_);
lean_closure_set(v___f_5523_, 3, v_inst_5514_);
lean_closure_set(v___f_5523_, 4, v_ch_5515_);
lean_closure_set(v___f_5523_, 5, v_f_5516_);
v___f_5524_ = lean_alloc_closure((void*)(l_Std_Broadcast_Sync_Receiver_forIn___redArg___lam__1), 6, 5);
lean_closure_set(v___f_5524_, 0, v_toPure_5520_);
lean_closure_set(v___f_5524_, 1, v_b_5517_);
lean_closure_set(v___f_5524_, 2, v_f_5516_);
lean_closure_set(v___f_5524_, 3, v_toBind_5519_);
lean_closure_set(v___f_5524_, 4, v___f_5523_);
v___x_5525_ = lean_apply_4(v_toBind_5519_, lean_box(0), lean_box(0), v___x_5522_, v___f_5524_);
return v___x_5525_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_forIn___redArg___lam__0(lean_object* v_toPure_5526_, lean_object* v_inst_5527_, lean_object* v_inst_5528_, lean_object* v_inst_5529_, lean_object* v_ch_5530_, lean_object* v_f_5531_, lean_object* v_____do__lift_5532_){
_start:
{
if (lean_obj_tag(v_____do__lift_5532_) == 0)
{
lean_object* v_a_5533_; lean_object* v___x_5534_; 
lean_dec(v_f_5531_);
lean_dec_ref(v_ch_5530_);
lean_dec(v_inst_5529_);
lean_dec_ref(v_inst_5528_);
lean_dec(v_inst_5527_);
v_a_5533_ = lean_ctor_get(v_____do__lift_5532_, 0);
lean_inc(v_a_5533_);
lean_dec_ref_known(v_____do__lift_5532_, 1);
v___x_5534_ = lean_apply_2(v_toPure_5526_, lean_box(0), v_a_5533_);
return v___x_5534_;
}
else
{
lean_object* v_a_5535_; lean_object* v___x_5536_; 
lean_dec(v_toPure_5526_);
v_a_5535_ = lean_ctor_get(v_____do__lift_5532_, 0);
lean_inc(v_a_5535_);
lean_dec_ref_known(v_____do__lift_5532_, 1);
v___x_5536_ = l_Std_Broadcast_Sync_Receiver_forIn___redArg(v_inst_5527_, v_inst_5528_, v_inst_5529_, v_ch_5530_, v_f_5531_, v_a_5535_);
return v___x_5536_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_forIn(lean_object* v_00_u03b1_5537_, lean_object* v_m_5538_, lean_object* v_00_u03b2_5539_, lean_object* v_inst_5540_, lean_object* v_inst_5541_, lean_object* v_inst_5542_, lean_object* v_ch_5543_, lean_object* v_f_5544_, lean_object* v_b_5545_){
_start:
{
lean_object* v___x_5546_; 
v___x_5546_ = l_Std_Broadcast_Sync_Receiver_forIn___redArg(v_inst_5540_, v_inst_5541_, v_inst_5542_, v_ch_5543_, v_f_5544_, v_b_5545_);
return v___x_5546_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO___redArg___lam__0(lean_object* v_inst_5547_, lean_object* v_inst_5548_, lean_object* v_inst_5549_, lean_object* v_00_u03b2_5550_, lean_object* v_ch_5551_, lean_object* v_b_5552_, lean_object* v_f_5553_){
_start:
{
lean_object* v___x_5554_; 
v___x_5554_ = l_Std_Broadcast_Sync_Receiver_forIn___redArg(v_inst_5547_, v_inst_5548_, v_inst_5549_, v_ch_5551_, v_f_5553_, v_b_5552_);
return v___x_5554_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO___redArg(lean_object* v_inst_5555_, lean_object* v_inst_5556_, lean_object* v_inst_5557_){
_start:
{
lean_object* v___f_5558_; 
v___f_5558_ = lean_alloc_closure((void*)(l_Std_Broadcast_Sync_Receiver_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO___redArg___lam__0), 7, 3);
lean_closure_set(v___f_5558_, 0, v_inst_5555_);
lean_closure_set(v___f_5558_, 1, v_inst_5556_);
lean_closure_set(v___f_5558_, 2, v_inst_5557_);
return v___f_5558_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO(lean_object* v_00_u03b1_5559_, lean_object* v_m_5560_, lean_object* v_inst_5561_, lean_object* v_inst_5562_, lean_object* v_inst_5563_){
_start:
{
lean_object* v___f_5564_; 
v___f_5564_ = lean_alloc_closure((void*)(l_Std_Broadcast_Sync_Receiver_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO___redArg___lam__0), 7, 3);
lean_closure_set(v___f_5564_, 0, v_inst_5561_);
lean_closure_set(v___f_5564_, 1, v_inst_5562_);
lean_closure_set(v___f_5564_, 2, v_inst_5563_);
return v___f_5564_;
}
}
lean_object* runtime_initialize_Std_Data(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Queue(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Vector(uint8_t builtin);
lean_object* runtime_initialize_Std_Sync_Mutex(uint8_t builtin);
lean_object* runtime_initialize_Std_Async_IO(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Sync_Broadcast(uint8_t builtin) {
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
res = runtime_initialize_Init_Data_Vector(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Sync_Mutex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Sync_Broadcast(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1 = _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1();
lean_mark_persistent(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1);
l_Std_Broadcast_new___auto__1 = _init_l_Std_Broadcast_new___auto__1();
lean_mark_persistent(l_Std_Broadcast_new___auto__1);
l_Std_Broadcast_Sync_new___auto__3 = _init_l_Std_Broadcast_Sync_new___auto__3();
lean_mark_persistent(l_Std_Broadcast_Sync_new___auto__3);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Data(uint8_t builtin);
lean_object* initialize_Init_Data_Queue(uint8_t builtin);
lean_object* initialize_Init_Data_Vector(uint8_t builtin);
lean_object* initialize_Std_Sync_Mutex(uint8_t builtin);
lean_object* initialize_Std_Async_IO(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Sync_Broadcast(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Queue(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Vector(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Sync_Mutex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Sync_Broadcast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Sync_Broadcast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Sync_Broadcast(builtin);
}
#ifdef __cplusplus
}
#endif
