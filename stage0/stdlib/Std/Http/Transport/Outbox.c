// Lean compiler output
// Module: Std.Http.Transport.Outbox
// Imports: public import Std.Http.Transport
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_io_promise_new();
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_io_promise_result_opt(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lean_array_mk(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_BaseIO_chainTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_task_pure(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
static const lean_ctor_object l_Std_Http_Internal_Outbox_new___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Std_Http_Internal_Outbox_new___redArg___closed__0 = (const lean_object*)&l_Std_Http_Internal_Outbox_new___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_new___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_new___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at___00__private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued_spec__0(lean_object*, lean_object*);
static const lean_array_object l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued___closed__0 = (const lean_object*)&l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Internal_Outbox_send___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Internal_Outbox_send___redArg___closed__0 = (const lean_object*)&l_Std_Http_Internal_Outbox_send___redArg___closed__0_value;
static const lean_ctor_object l_Std_Http_Internal_Outbox_send___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l_Std_Http_Internal_Outbox_send___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_Internal_Outbox_send___redArg___closed__1 = (const lean_object*)&l_Std_Http_Internal_Outbox_send___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_send___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_send___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_send(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Outbox_writing___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_writing___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Outbox_writing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_writing___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_idle_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_idle_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_idle_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_idle_x3f___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__0___boxed(lean_object*);
static const lean_ctor_object l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__1___closed__0 = (const lean_object*)&l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Internal_Outbox_awaitIdle___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___closed__0 = (const lean_object*)&l_Std_Http_Internal_Outbox_awaitIdle___redArg___closed__0_value;
static const lean_closure_object l_Std_Http_Internal_Outbox_awaitIdle___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Internal_Outbox_awaitIdle___redArg___closed__0_value)} };
static const lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___closed__1 = (const lean_object*)&l_Std_Http_Internal_Outbox_awaitIdle___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Outbox_failed___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_failed___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Outbox_failed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_failed___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Internal_Outbox_awaitWritten___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_Outbox_awaitWritten___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg___closed__0 = (const lean_object*)&l_Std_Http_Internal_Outbox_awaitWritten___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_takeError_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_takeError_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_takeError_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_takeError_x3f___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Internal_Outbox_push___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Internal_Outbox_push___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_Http_Internal_Outbox_push___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Http_Internal_Outbox_push___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Internal_Outbox_push___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Std_Http_Internal_Outbox_push___redArg___lam__0___closed__1 = (const lean_object*)&l_Std_Http_Internal_Outbox_push___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_push___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_push___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_push___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_push___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_push(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_push___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_new___redArg(lean_object* v_socket_6_){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_8_ = ((lean_object*)(l_Std_Http_Internal_Outbox_new___redArg___closed__0));
v___x_9_ = lean_st_mk_ref(v___x_8_);
v___x_10_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_10_, 0, v_socket_6_);
lean_ctor_set(v___x_10_, 1, v___x_9_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_new___redArg___boxed(lean_object* v_socket_11_, lean_object* v_a_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = l_Std_Http_Internal_Outbox_new___redArg(v_socket_11_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_new(lean_object* v_00_u03b1_14_, lean_object* v_socket_15_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l_Std_Http_Internal_Outbox_new___redArg(v_socket_15_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_new___boxed(lean_object* v_00_u03b1_18_, lean_object* v_socket_19_, lean_object* v_a_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l_Std_Http_Internal_Outbox_new(v_00_u03b1_18_, v_socket_19_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued_spec__0_spec__0(lean_object* v_as_22_, size_t v_i_23_, size_t v_stop_24_, lean_object* v_b_25_){
_start:
{
uint8_t v___x_26_; 
v___x_26_ = lean_usize_dec_eq(v_i_23_, v_stop_24_);
if (v___x_26_ == 0)
{
size_t v___x_27_; size_t v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_27_ = ((size_t)1ULL);
v___x_28_ = lean_usize_sub(v_i_23_, v___x_27_);
v___x_29_ = lean_array_uget_borrowed(v_as_22_, v___x_28_);
v___x_30_ = l_Array_append___redArg(v_b_25_, v___x_29_);
v_i_23_ = v___x_28_;
v_b_25_ = v___x_30_;
goto _start;
}
else
{
return v_b_25_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued_spec__0_spec__0___boxed(lean_object* v_as_32_, lean_object* v_i_33_, lean_object* v_stop_34_, lean_object* v_b_35_){
_start:
{
size_t v_i_boxed_36_; size_t v_stop_boxed_37_; lean_object* v_res_38_; 
v_i_boxed_36_ = lean_unbox_usize(v_i_33_);
lean_dec(v_i_33_);
v_stop_boxed_37_ = lean_unbox_usize(v_stop_34_);
lean_dec(v_stop_34_);
v_res_38_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued_spec__0_spec__0(v_as_32_, v_i_boxed_36_, v_stop_boxed_37_, v_b_35_);
lean_dec_ref(v_as_32_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at___00__private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued_spec__0(lean_object* v_init_39_, lean_object* v_l_40_){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; uint8_t v___x_44_; 
v___x_41_ = lean_array_mk(v_l_40_);
v___x_42_ = lean_array_get_size(v___x_41_);
v___x_43_ = lean_unsigned_to_nat(0u);
v___x_44_ = lean_nat_dec_lt(v___x_43_, v___x_42_);
if (v___x_44_ == 0)
{
lean_dec_ref(v___x_41_);
return v_init_39_;
}
else
{
size_t v___x_45_; size_t v___x_46_; lean_object* v___x_47_; 
v___x_45_ = lean_usize_of_nat(v___x_42_);
v___x_46_ = ((size_t)0ULL);
v___x_47_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued_spec__0_spec__0(v___x_41_, v___x_45_, v___x_46_, v_init_39_);
lean_dec_ref(v___x_41_);
return v___x_47_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued(lean_object* v_x_50_){
_start:
{
lean_object* v_batches_52_; 
if (lean_obj_tag(v_x_50_) == 1)
{
lean_object* v_tail_55_; 
v_tail_55_ = lean_ctor_get(v_x_50_, 1);
if (lean_obj_tag(v_tail_55_) == 0)
{
lean_object* v_head_56_; 
v_head_56_ = lean_ctor_get(v_x_50_, 0);
lean_inc(v_head_56_);
lean_dec_ref_known(v_x_50_, 2);
return v_head_56_;
}
else
{
v_batches_52_ = v_x_50_;
goto v___jp_51_;
}
}
else
{
v_batches_52_ = v_x_50_;
goto v___jp_51_;
}
v___jp_51_:
{
lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_53_ = ((lean_object*)(l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued___closed__0));
v___x_54_ = l_List_foldrTR___at___00__private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued_spec__0(v___x_53_, v_batches_52_);
return v___x_54_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg___lam__0(lean_object* v_inst_57_, lean_object* v_outbox_58_, lean_object* v_state_59_, lean_object* v_result_60_){
_start:
{
lean_object* v___y_63_; lean_object* v___x_69_; lean_object* v_fst_71_; lean_object* v_snd_72_; 
v___x_69_ = lean_st_ref_take(v_state_59_);
if (lean_obj_tag(v_result_60_) == 0)
{
lean_object* v_a_80_; lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_105_; 
v_a_80_ = lean_ctor_get(v_result_60_, 0);
v_isSharedCheck_105_ = !lean_is_exclusive(v_result_60_);
if (v_isSharedCheck_105_ == 0)
{
v___x_82_ = v_result_60_;
v_isShared_83_ = v_isSharedCheck_105_;
goto v_resetjp_81_;
}
else
{
lean_inc(v_a_80_);
lean_dec(v_result_60_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_105_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
lean_object* v_idle_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_101_; 
v_idle_84_ = lean_ctor_get(v___x_69_, 3);
v_isSharedCheck_101_ = !lean_is_exclusive(v___x_69_);
if (v_isSharedCheck_101_ == 0)
{
lean_object* v_unused_102_; lean_object* v_unused_103_; lean_object* v_unused_104_; 
v_unused_102_ = lean_ctor_get(v___x_69_, 2);
lean_dec(v_unused_102_);
v_unused_103_ = lean_ctor_get(v___x_69_, 1);
lean_dec(v_unused_103_);
v_unused_104_ = lean_ctor_get(v___x_69_, 0);
lean_dec(v_unused_104_);
v___x_86_ = v___x_69_;
v_isShared_87_ = v_isSharedCheck_101_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_idle_84_);
lean_dec(v___x_69_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_101_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; uint8_t v___x_92_; uint8_t v___x_93_; lean_object* v___x_95_; 
v___x_88_ = lean_unsigned_to_nat(0u);
v___x_89_ = ((lean_object*)(l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued___closed__0));
v___x_90_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_90_, 0, v___x_89_);
lean_ctor_set(v___x_90_, 1, v_idle_84_);
v___x_91_ = lean_box(0);
v___x_92_ = 0;
v___x_93_ = 1;
if (v_isShared_83_ == 0)
{
lean_ctor_set_tag(v___x_82_, 1);
v___x_95_ = v___x_82_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v_a_80_);
v___x_95_ = v_reuseFailAlloc_100_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
lean_object* v___x_96_; lean_object* v___x_98_; 
v___x_96_ = lean_box(0);
if (v_isShared_87_ == 0)
{
lean_ctor_set(v___x_86_, 3, v___x_96_);
lean_ctor_set(v___x_86_, 2, v___x_95_);
lean_ctor_set(v___x_86_, 1, v___x_88_);
lean_ctor_set(v___x_86_, 0, v___x_91_);
v___x_98_ = v___x_86_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v___x_91_);
lean_ctor_set(v_reuseFailAlloc_99_, 1, v___x_88_);
lean_ctor_set(v_reuseFailAlloc_99_, 2, v___x_95_);
lean_ctor_set(v_reuseFailAlloc_99_, 3, v___x_96_);
v___x_98_ = v_reuseFailAlloc_99_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
lean_ctor_set_uint8(v___x_98_, sizeof(void*)*4, v___x_92_);
lean_ctor_set_uint8(v___x_98_, sizeof(void*)*4 + 1, v___x_93_);
v_fst_71_ = v___x_90_;
v_snd_72_ = v___x_98_;
goto v___jp_70_;
}
}
}
}
}
else
{
lean_object* v_queued_106_; lean_object* v_queuedBytes_107_; uint8_t v_writing_108_; uint8_t v_failed_109_; lean_object* v_error_110_; lean_object* v_idle_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_131_; 
lean_dec_ref_known(v_result_60_, 1);
v_queued_106_ = lean_ctor_get(v___x_69_, 0);
v_queuedBytes_107_ = lean_ctor_get(v___x_69_, 1);
v_writing_108_ = lean_ctor_get_uint8(v___x_69_, sizeof(void*)*4);
v_failed_109_ = lean_ctor_get_uint8(v___x_69_, sizeof(void*)*4 + 1);
v_error_110_ = lean_ctor_get(v___x_69_, 2);
v_idle_111_ = lean_ctor_get(v___x_69_, 3);
v_isSharedCheck_131_ = !lean_is_exclusive(v___x_69_);
if (v_isSharedCheck_131_ == 0)
{
v___x_113_ = v___x_69_;
v_isShared_114_ = v_isSharedCheck_131_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_idle_111_);
lean_inc(v_error_110_);
lean_inc(v_queuedBytes_107_);
lean_inc(v_queued_106_);
lean_dec(v___x_69_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_131_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
uint8_t v___x_115_; 
v___x_115_ = l_List_isEmpty___redArg(v_queued_106_);
if (v___x_115_ == 0)
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_122_; 
lean_dec(v_queuedBytes_107_);
v___x_116_ = l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued(v_queued_106_);
v___x_117_ = lean_box(0);
v___x_118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_118_, 0, v___x_116_);
lean_ctor_set(v___x_118_, 1, v___x_117_);
v___x_119_ = lean_box(0);
v___x_120_ = lean_unsigned_to_nat(0u);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 1, v___x_120_);
lean_ctor_set(v___x_113_, 0, v___x_119_);
v___x_122_ = v___x_113_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_123_; 
v_reuseFailAlloc_123_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_123_, 0, v___x_119_);
lean_ctor_set(v_reuseFailAlloc_123_, 1, v___x_120_);
lean_ctor_set(v_reuseFailAlloc_123_, 2, v_error_110_);
lean_ctor_set(v_reuseFailAlloc_123_, 3, v_idle_111_);
lean_ctor_set_uint8(v_reuseFailAlloc_123_, sizeof(void*)*4, v_writing_108_);
lean_ctor_set_uint8(v_reuseFailAlloc_123_, sizeof(void*)*4 + 1, v_failed_109_);
v___x_122_ = v_reuseFailAlloc_123_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
v_fst_71_ = v___x_118_;
v_snd_72_ = v___x_122_;
goto v___jp_70_;
}
}
else
{
lean_object* v___x_124_; lean_object* v___x_125_; uint8_t v___x_126_; lean_object* v___x_127_; lean_object* v___x_129_; 
v___x_124_ = ((lean_object*)(l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued___closed__0));
v___x_125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_124_);
lean_ctor_set(v___x_125_, 1, v_idle_111_);
v___x_126_ = 0;
v___x_127_ = lean_box(0);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 3, v___x_127_);
v___x_129_ = v___x_113_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v_queued_106_);
lean_ctor_set(v_reuseFailAlloc_130_, 1, v_queuedBytes_107_);
lean_ctor_set(v_reuseFailAlloc_130_, 2, v_error_110_);
lean_ctor_set(v_reuseFailAlloc_130_, 3, v___x_127_);
lean_ctor_set_uint8(v_reuseFailAlloc_130_, sizeof(void*)*4 + 1, v_failed_109_);
v___x_129_ = v_reuseFailAlloc_130_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
lean_ctor_set_uint8(v___x_129_, sizeof(void*)*4, v___x_126_);
v_fst_71_ = v___x_125_;
v_snd_72_ = v___x_129_;
goto v___jp_70_;
}
}
}
}
v___jp_62_:
{
lean_object* v___x_64_; lean_object* v___x_65_; uint8_t v___x_66_; 
v___x_64_ = lean_array_get_size(v___y_63_);
v___x_65_ = lean_unsigned_to_nat(0u);
v___x_66_ = lean_nat_dec_eq(v___x_64_, v___x_65_);
if (v___x_66_ == 0)
{
lean_object* v___x_67_; 
v___x_67_ = l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg(v_inst_57_, v_outbox_58_, v___y_63_);
return v___x_67_;
}
else
{
lean_object* v___x_68_; 
lean_dec_ref(v___y_63_);
lean_dec_ref(v_outbox_58_);
lean_dec_ref(v_inst_57_);
v___x_68_ = lean_box(0);
return v___x_68_;
}
}
v___jp_70_:
{
lean_object* v___x_73_; lean_object* v_snd_74_; 
v___x_73_ = lean_st_ref_put(v_state_59_, v_snd_72_);
v_snd_74_ = lean_ctor_get(v_fst_71_, 1);
if (lean_obj_tag(v_snd_74_) == 1)
{
lean_object* v_fst_75_; lean_object* v_val_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
lean_inc_ref(v_snd_74_);
v_fst_75_ = lean_ctor_get(v_fst_71_, 0);
lean_inc(v_fst_75_);
lean_dec_ref(v_fst_71_);
v_val_76_ = lean_ctor_get(v_snd_74_, 0);
lean_inc(v_val_76_);
lean_dec_ref_known(v_snd_74_, 1);
v___x_77_ = lean_box(0);
v___x_78_ = lean_io_promise_resolve(v___x_77_, v_val_76_);
lean_dec(v_val_76_);
v___y_63_ = v_fst_75_;
goto v___jp_62_;
}
else
{
lean_object* v_fst_79_; 
v_fst_79_ = lean_ctor_get(v_fst_71_, 0);
lean_inc(v_fst_79_);
lean_dec_ref(v_fst_71_);
v___y_63_ = v_fst_79_;
goto v___jp_62_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg___lam__0___boxed(lean_object* v_inst_132_, lean_object* v_outbox_133_, lean_object* v_state_134_, lean_object* v_result_135_, lean_object* v___y_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg___lam__0(v_inst_132_, v_outbox_133_, v_state_134_, v_result_135_);
lean_dec(v_state_134_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg(lean_object* v_inst_138_, lean_object* v_outbox_139_, lean_object* v_data_140_){
_start:
{
lean_object* v_sendAll_142_; lean_object* v_socket_143_; lean_object* v_state_144_; lean_object* v___f_145_; lean_object* v_val_147_; lean_object* v___x_151_; 
v_sendAll_142_ = lean_ctor_get(v_inst_138_, 1);
lean_inc_ref(v_sendAll_142_);
v_socket_143_ = lean_ctor_get(v_outbox_139_, 0);
lean_inc(v_socket_143_);
v_state_144_ = lean_ctor_get(v_outbox_139_, 1);
lean_inc(v_state_144_);
v___f_145_ = lean_alloc_closure((void*)(l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_145_, 0, v_inst_138_);
lean_closure_set(v___f_145_, 1, v_outbox_139_);
lean_closure_set(v___f_145_, 2, v_state_144_);
v___x_151_ = lean_apply_3(v_sendAll_142_, v_socket_143_, v_data_140_, lean_box(0));
if (lean_obj_tag(v___x_151_) == 0)
{
lean_object* v_a_152_; lean_object* v___x_153_; 
v_a_152_ = lean_ctor_get(v___x_151_, 0);
lean_inc(v_a_152_);
lean_dec_ref_known(v___x_151_, 1);
v___x_153_ = lean_task_pure(v_a_152_);
v_val_147_ = v___x_153_;
goto v___jp_146_;
}
else
{
lean_object* v_a_154_; 
v_a_154_ = lean_ctor_get(v___x_151_, 0);
lean_inc_ref(v_a_154_);
lean_dec_ref_known(v___x_151_, 1);
v_val_147_ = v_a_154_;
goto v___jp_146_;
}
v___jp_146_:
{
lean_object* v___x_148_; uint8_t v___x_149_; lean_object* v___x_150_; 
v___x_148_ = lean_unsigned_to_nat(0u);
v___x_149_ = 1;
v___x_150_ = l_BaseIO_chainTask___redArg(v_val_147_, v___f_145_, v___x_148_, v___x_149_);
return v___x_150_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg___boxed(lean_object* v_inst_155_, lean_object* v_outbox_156_, lean_object* v_data_157_, lean_object* v_a_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg(v_inst_155_, v_outbox_156_, v_data_157_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write(lean_object* v_00_u03b1_160_, lean_object* v_inst_161_, lean_object* v_outbox_162_, lean_object* v_data_163_){
_start:
{
lean_object* v___x_165_; 
v___x_165_ = l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg(v_inst_161_, v_outbox_162_, v_data_163_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___boxed(lean_object* v_00_u03b1_166_, lean_object* v_inst_167_, lean_object* v_outbox_168_, lean_object* v_data_169_, lean_object* v_a_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write(v_00_u03b1_166_, v_inst_167_, v_outbox_168_, v_data_169_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_send___redArg(lean_object* v_inst_178_, lean_object* v_outbox_179_, lean_object* v_buffer_180_){
_start:
{
lean_object* v_data_182_; lean_object* v_size_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_246_; 
v_data_182_ = lean_ctor_get(v_buffer_180_, 0);
v_size_183_ = lean_ctor_get(v_buffer_180_, 1);
v_isSharedCheck_246_ = !lean_is_exclusive(v_buffer_180_);
if (v_isSharedCheck_246_ == 0)
{
v___x_185_ = v_buffer_180_;
v_isShared_186_ = v_isSharedCheck_246_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_size_183_);
lean_inc(v_data_182_);
lean_dec(v_buffer_180_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_246_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v___x_187_; uint8_t v___x_188_; 
v___x_187_ = lean_unsigned_to_nat(0u);
v___x_188_ = lean_nat_dec_eq(v_size_183_, v___x_187_);
if (v___x_188_ == 0)
{
lean_object* v_state_189_; lean_object* v___x_190_; lean_object* v_fst_192_; lean_object* v_snd_193_; uint8_t v_failed_203_; 
v_state_189_ = lean_ctor_get(v_outbox_179_, 1);
lean_inc(v_state_189_);
v___x_190_ = lean_st_ref_take(v_state_189_);
v_failed_203_ = lean_ctor_get_uint8(v___x_190_, sizeof(void*)*4 + 1);
if (v_failed_203_ == 0)
{
uint8_t v_writing_204_; 
v_writing_204_ = lean_ctor_get_uint8(v___x_190_, sizeof(void*)*4);
if (v_writing_204_ == 0)
{
lean_object* v_queued_205_; lean_object* v_queuedBytes_206_; lean_object* v_error_207_; lean_object* v_idle_208_; lean_object* v___x_210_; uint8_t v_isShared_211_; uint8_t v_isSharedCheck_217_; 
lean_del_object(v___x_185_);
lean_dec(v_size_183_);
v_queued_205_ = lean_ctor_get(v___x_190_, 0);
v_queuedBytes_206_ = lean_ctor_get(v___x_190_, 1);
v_error_207_ = lean_ctor_get(v___x_190_, 2);
v_idle_208_ = lean_ctor_get(v___x_190_, 3);
v_isSharedCheck_217_ = !lean_is_exclusive(v___x_190_);
if (v_isSharedCheck_217_ == 0)
{
v___x_210_ = v___x_190_;
v_isShared_211_ = v_isSharedCheck_217_;
goto v_resetjp_209_;
}
else
{
lean_inc(v_idle_208_);
lean_inc(v_error_207_);
lean_inc(v_queuedBytes_206_);
lean_inc(v_queued_205_);
lean_dec(v___x_190_);
v___x_210_ = lean_box(0);
v_isShared_211_ = v_isSharedCheck_217_;
goto v_resetjp_209_;
}
v_resetjp_209_:
{
uint8_t v___x_212_; lean_object* v___x_213_; lean_object* v___x_215_; 
v___x_212_ = 1;
v___x_213_ = ((lean_object*)(l_Std_Http_Internal_Outbox_send___redArg___closed__1));
if (v_isShared_211_ == 0)
{
v___x_215_ = v___x_210_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v_queued_205_);
lean_ctor_set(v_reuseFailAlloc_216_, 1, v_queuedBytes_206_);
lean_ctor_set(v_reuseFailAlloc_216_, 2, v_error_207_);
lean_ctor_set(v_reuseFailAlloc_216_, 3, v_idle_208_);
lean_ctor_set_uint8(v_reuseFailAlloc_216_, sizeof(void*)*4 + 1, v_failed_203_);
v___x_215_ = v_reuseFailAlloc_216_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
lean_ctor_set_uint8(v___x_215_, sizeof(void*)*4, v___x_212_);
v_fst_192_ = v___x_213_;
v_snd_193_ = v___x_215_;
goto v___jp_191_;
}
}
}
else
{
lean_object* v_queued_218_; lean_object* v_queuedBytes_219_; lean_object* v_error_220_; lean_object* v_idle_221_; lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_235_; 
v_queued_218_ = lean_ctor_get(v___x_190_, 0);
v_queuedBytes_219_ = lean_ctor_get(v___x_190_, 1);
v_error_220_ = lean_ctor_get(v___x_190_, 2);
v_idle_221_ = lean_ctor_get(v___x_190_, 3);
v_isSharedCheck_235_ = !lean_is_exclusive(v___x_190_);
if (v_isSharedCheck_235_ == 0)
{
v___x_223_ = v___x_190_;
v_isShared_224_ = v_isSharedCheck_235_;
goto v_resetjp_222_;
}
else
{
lean_inc(v_idle_221_);
lean_inc(v_error_220_);
lean_inc(v_queuedBytes_219_);
lean_inc(v_queued_218_);
lean_dec(v___x_190_);
v___x_223_ = lean_box(0);
v_isShared_224_ = v_isSharedCheck_235_;
goto v_resetjp_222_;
}
v_resetjp_222_:
{
lean_object* v_queuedBytes_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_229_; 
v_queuedBytes_225_ = lean_nat_add(v_queuedBytes_219_, v_size_183_);
lean_dec(v_size_183_);
lean_dec(v_queuedBytes_219_);
lean_inc(v_queuedBytes_225_);
v___x_226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_226_, 0, v_queuedBytes_225_);
v___x_227_ = lean_box(v_failed_203_);
if (v_isShared_186_ == 0)
{
lean_ctor_set(v___x_185_, 1, v___x_226_);
lean_ctor_set(v___x_185_, 0, v___x_227_);
v___x_229_ = v___x_185_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v___x_227_);
lean_ctor_set(v_reuseFailAlloc_234_, 1, v___x_226_);
v___x_229_ = v_reuseFailAlloc_234_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
lean_object* v___x_230_; lean_object* v___x_232_; 
lean_inc_ref(v_data_182_);
v___x_230_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_230_, 0, v_data_182_);
lean_ctor_set(v___x_230_, 1, v_queued_218_);
if (v_isShared_224_ == 0)
{
lean_ctor_set(v___x_223_, 1, v_queuedBytes_225_);
lean_ctor_set(v___x_223_, 0, v___x_230_);
v___x_232_ = v___x_223_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v___x_230_);
lean_ctor_set(v_reuseFailAlloc_233_, 1, v_queuedBytes_225_);
lean_ctor_set(v_reuseFailAlloc_233_, 2, v_error_220_);
lean_ctor_set(v_reuseFailAlloc_233_, 3, v_idle_221_);
lean_ctor_set_uint8(v_reuseFailAlloc_233_, sizeof(void*)*4, v_writing_204_);
lean_ctor_set_uint8(v_reuseFailAlloc_233_, sizeof(void*)*4 + 1, v_failed_203_);
v___x_232_ = v_reuseFailAlloc_233_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
v_fst_192_ = v___x_229_;
v_snd_193_ = v___x_232_;
goto v___jp_191_;
}
}
}
}
}
else
{
lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_239_; 
lean_dec(v_size_183_);
v___x_236_ = lean_box(0);
v___x_237_ = lean_box(v___x_188_);
if (v_isShared_186_ == 0)
{
lean_ctor_set(v___x_185_, 1, v___x_236_);
lean_ctor_set(v___x_185_, 0, v___x_237_);
v___x_239_ = v___x_185_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v___x_237_);
lean_ctor_set(v_reuseFailAlloc_240_, 1, v___x_236_);
v___x_239_ = v_reuseFailAlloc_240_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
v_fst_192_ = v___x_239_;
v_snd_193_ = v___x_190_;
goto v___jp_191_;
}
}
v___jp_191_:
{
lean_object* v___x_194_; lean_object* v_fst_195_; uint8_t v___x_196_; 
v___x_194_ = lean_st_ref_put(v_state_189_, v_snd_193_);
v_fst_195_ = lean_ctor_get(v_fst_192_, 0);
v___x_196_ = lean_unbox(v_fst_195_);
if (v___x_196_ == 0)
{
lean_object* v_snd_197_; 
lean_dec(v_state_189_);
lean_dec_ref(v_data_182_);
lean_dec_ref(v_outbox_179_);
lean_dec_ref(v_inst_178_);
v_snd_197_ = lean_ctor_get(v_fst_192_, 1);
lean_inc(v_snd_197_);
lean_dec_ref(v_fst_192_);
return v_snd_197_;
}
else
{
lean_object* v_snd_198_; lean_object* v___x_199_; lean_object* v___x_200_; uint8_t v_failed_201_; 
v_snd_198_ = lean_ctor_get(v_fst_192_, 1);
lean_inc(v_snd_198_);
lean_dec_ref(v_fst_192_);
v___x_199_ = l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg(v_inst_178_, v_outbox_179_, v_data_182_);
v___x_200_ = lean_st_ref_get(v_state_189_);
lean_dec(v_state_189_);
v_failed_201_ = lean_ctor_get_uint8(v___x_200_, sizeof(void*)*4 + 1);
lean_dec(v___x_200_);
if (v_failed_201_ == 0)
{
return v_snd_198_;
}
else
{
lean_object* v___x_202_; 
lean_dec(v_snd_198_);
v___x_202_ = lean_box(0);
return v___x_202_;
}
}
}
}
else
{
lean_object* v_state_241_; lean_object* v___x_242_; uint8_t v_failed_243_; 
lean_del_object(v___x_185_);
lean_dec(v_size_183_);
lean_dec_ref(v_data_182_);
lean_dec_ref(v_inst_178_);
v_state_241_ = lean_ctor_get(v_outbox_179_, 1);
lean_inc(v_state_241_);
lean_dec_ref(v_outbox_179_);
v___x_242_ = lean_st_ref_get(v_state_241_);
lean_dec(v_state_241_);
v_failed_243_ = lean_ctor_get_uint8(v___x_242_, sizeof(void*)*4 + 1);
lean_dec(v___x_242_);
if (v_failed_243_ == 0)
{
lean_object* v___x_244_; 
v___x_244_ = ((lean_object*)(l_Std_Http_Internal_Outbox_send___redArg___closed__0));
return v___x_244_;
}
else
{
lean_object* v___x_245_; 
v___x_245_ = lean_box(0);
return v___x_245_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_send___redArg___boxed(lean_object* v_inst_247_, lean_object* v_outbox_248_, lean_object* v_buffer_249_, lean_object* v_a_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Std_Http_Internal_Outbox_send___redArg(v_inst_247_, v_outbox_248_, v_buffer_249_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_send(lean_object* v_00_u03b1_252_, lean_object* v_inst_253_, lean_object* v_outbox_254_, lean_object* v_buffer_255_){
_start:
{
lean_object* v___x_257_; 
v___x_257_ = l_Std_Http_Internal_Outbox_send___redArg(v_inst_253_, v_outbox_254_, v_buffer_255_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_send___boxed(lean_object* v_00_u03b1_258_, lean_object* v_inst_259_, lean_object* v_outbox_260_, lean_object* v_buffer_261_, lean_object* v_a_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = l_Std_Http_Internal_Outbox_send(v_00_u03b1_258_, v_inst_259_, v_outbox_260_, v_buffer_261_);
return v_res_263_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Outbox_writing___redArg(lean_object* v_outbox_264_){
_start:
{
lean_object* v_state_266_; lean_object* v___x_267_; uint8_t v_writing_268_; 
v_state_266_ = lean_ctor_get(v_outbox_264_, 1);
v___x_267_ = lean_st_ref_get(v_state_266_);
v_writing_268_ = lean_ctor_get_uint8(v___x_267_, sizeof(void*)*4);
lean_dec(v___x_267_);
return v_writing_268_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_writing___redArg___boxed(lean_object* v_outbox_269_, lean_object* v_a_270_){
_start:
{
uint8_t v_res_271_; lean_object* v_r_272_; 
v_res_271_ = l_Std_Http_Internal_Outbox_writing___redArg(v_outbox_269_);
lean_dec_ref(v_outbox_269_);
v_r_272_ = lean_box(v_res_271_);
return v_r_272_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Outbox_writing(lean_object* v_00_u03b1_273_, lean_object* v_outbox_274_){
_start:
{
uint8_t v___x_276_; 
v___x_276_ = l_Std_Http_Internal_Outbox_writing___redArg(v_outbox_274_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_writing___boxed(lean_object* v_00_u03b1_277_, lean_object* v_outbox_278_, lean_object* v_a_279_){
_start:
{
uint8_t v_res_280_; lean_object* v_r_281_; 
v_res_280_ = l_Std_Http_Internal_Outbox_writing(v_00_u03b1_277_, v_outbox_278_);
lean_dec_ref(v_outbox_278_);
v_r_281_ = lean_box(v_res_280_);
return v_r_281_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_idle_x3f___redArg(lean_object* v_outbox_282_){
_start:
{
lean_object* v_state_284_; lean_object* v___x_285_; uint8_t v_writing_286_; 
v_state_284_ = lean_ctor_get(v_outbox_282_, 1);
v___x_285_ = lean_st_ref_get(v_state_284_);
v_writing_286_ = lean_ctor_get_uint8(v___x_285_, sizeof(void*)*4);
lean_dec(v___x_285_);
if (v_writing_286_ == 0)
{
lean_object* v___x_287_; 
v___x_287_ = lean_box(0);
return v___x_287_;
}
else
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v_fst_291_; lean_object* v_snd_292_; uint8_t v_writing_294_; 
v___x_288_ = lean_io_promise_new();
v___x_289_ = lean_st_ref_take(v_state_284_);
v_writing_294_ = lean_ctor_get_uint8(v___x_289_, sizeof(void*)*4);
if (v_writing_294_ == 0)
{
lean_object* v___x_295_; 
lean_dec(v___x_288_);
v___x_295_ = lean_box(0);
v_fst_291_ = v___x_295_;
v_snd_292_ = v___x_289_;
goto v___jp_290_;
}
else
{
lean_object* v_idle_296_; 
v_idle_296_ = lean_ctor_get(v___x_289_, 3);
lean_inc(v_idle_296_);
if (lean_obj_tag(v_idle_296_) == 0)
{
lean_object* v_queued_297_; lean_object* v_queuedBytes_298_; uint8_t v_failed_299_; lean_object* v_error_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_310_; 
v_queued_297_ = lean_ctor_get(v___x_289_, 0);
v_queuedBytes_298_ = lean_ctor_get(v___x_289_, 1);
v_failed_299_ = lean_ctor_get_uint8(v___x_289_, sizeof(void*)*4 + 1);
v_error_300_ = lean_ctor_get(v___x_289_, 2);
v_isSharedCheck_310_ = !lean_is_exclusive(v___x_289_);
if (v_isSharedCheck_310_ == 0)
{
lean_object* v_unused_311_; 
v_unused_311_ = lean_ctor_get(v___x_289_, 3);
lean_dec(v_unused_311_);
v___x_302_ = v___x_289_;
v_isShared_303_ = v_isSharedCheck_310_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_error_300_);
lean_inc(v_queuedBytes_298_);
lean_inc(v_queued_297_);
lean_dec(v___x_289_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_310_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_308_; 
v___x_304_ = lean_io_promise_result_opt(v___x_288_);
v___x_305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
v___x_306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_306_, 0, v___x_288_);
if (v_isShared_303_ == 0)
{
lean_ctor_set(v___x_302_, 3, v___x_306_);
v___x_308_ = v___x_302_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v_queued_297_);
lean_ctor_set(v_reuseFailAlloc_309_, 1, v_queuedBytes_298_);
lean_ctor_set(v_reuseFailAlloc_309_, 2, v_error_300_);
lean_ctor_set(v_reuseFailAlloc_309_, 3, v___x_306_);
lean_ctor_set_uint8(v_reuseFailAlloc_309_, sizeof(void*)*4, v_writing_294_);
lean_ctor_set_uint8(v_reuseFailAlloc_309_, sizeof(void*)*4 + 1, v_failed_299_);
v___x_308_ = v_reuseFailAlloc_309_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
v_fst_291_ = v___x_305_;
v_snd_292_ = v___x_308_;
goto v___jp_290_;
}
}
}
else
{
lean_object* v_val_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_320_; 
lean_dec(v___x_288_);
v_val_312_ = lean_ctor_get(v_idle_296_, 0);
v_isSharedCheck_320_ = !lean_is_exclusive(v_idle_296_);
if (v_isSharedCheck_320_ == 0)
{
v___x_314_ = v_idle_296_;
v_isShared_315_ = v_isSharedCheck_320_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_val_312_);
lean_dec(v_idle_296_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_320_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_316_; lean_object* v___x_318_; 
v___x_316_ = lean_io_promise_result_opt(v_val_312_);
lean_dec(v_val_312_);
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 0, v___x_316_);
v___x_318_ = v___x_314_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v___x_316_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
v_fst_291_ = v___x_318_;
v_snd_292_ = v___x_289_;
goto v___jp_290_;
}
}
}
}
v___jp_290_:
{
lean_object* v___x_293_; 
v___x_293_ = lean_st_ref_put(v_state_284_, v_snd_292_);
return v_fst_291_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_idle_x3f___redArg___boxed(lean_object* v_outbox_321_, lean_object* v_a_322_){
_start:
{
lean_object* v_res_323_; 
v_res_323_ = l_Std_Http_Internal_Outbox_idle_x3f___redArg(v_outbox_321_);
lean_dec_ref(v_outbox_321_);
return v_res_323_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_idle_x3f(lean_object* v_00_u03b1_324_, lean_object* v_outbox_325_){
_start:
{
lean_object* v___x_327_; 
v___x_327_ = l_Std_Http_Internal_Outbox_idle_x3f___redArg(v_outbox_325_);
return v___x_327_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_idle_x3f___boxed(lean_object* v_00_u03b1_328_, lean_object* v_outbox_329_, lean_object* v_a_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l_Std_Http_Internal_Outbox_idle_x3f(v_00_u03b1_328_, v_outbox_329_);
lean_dec_ref(v_outbox_329_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__0(lean_object* v_x_334_){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = ((lean_object*)(l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__0___closed__0));
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__0___boxed(lean_object* v_x_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__0(v_x_336_);
lean_dec(v_x_336_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__1(lean_object* v___f_340_, lean_object* v_x_341_){
_start:
{
if (lean_obj_tag(v_x_341_) == 0)
{
lean_object* v_a_343_; lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_351_; 
lean_dec_ref(v___f_340_);
v_a_343_ = lean_ctor_get(v_x_341_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v_x_341_);
if (v_isSharedCheck_351_ == 0)
{
v___x_345_ = v_x_341_;
v_isShared_346_ = v_isSharedCheck_351_;
goto v_resetjp_344_;
}
else
{
lean_inc(v_a_343_);
lean_dec(v_x_341_);
v___x_345_ = lean_box(0);
v_isShared_346_ = v_isSharedCheck_351_;
goto v_resetjp_344_;
}
v_resetjp_344_:
{
lean_object* v___x_348_; 
if (v_isShared_346_ == 0)
{
v___x_348_ = v___x_345_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_a_343_);
v___x_348_ = v_reuseFailAlloc_350_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
lean_object* v___x_349_; 
v___x_349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
return v___x_349_;
}
}
}
else
{
lean_object* v_a_352_; 
v_a_352_ = lean_ctor_get(v_x_341_, 0);
lean_inc(v_a_352_);
lean_dec_ref_known(v_x_341_, 1);
if (lean_obj_tag(v_a_352_) == 1)
{
lean_object* v_val_353_; lean_object* v___x_355_; uint8_t v_isShared_356_; uint8_t v_isSharedCheck_363_; 
v_val_353_ = lean_ctor_get(v_a_352_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v_a_352_);
if (v_isSharedCheck_363_ == 0)
{
v___x_355_ = v_a_352_;
v_isShared_356_ = v_isSharedCheck_363_;
goto v_resetjp_354_;
}
else
{
lean_inc(v_val_353_);
lean_dec(v_a_352_);
v___x_355_ = lean_box(0);
v_isShared_356_ = v_isSharedCheck_363_;
goto v_resetjp_354_;
}
v_resetjp_354_:
{
lean_object* v___x_357_; uint8_t v___x_358_; lean_object* v___x_359_; lean_object* v___x_361_; 
v___x_357_ = lean_unsigned_to_nat(0u);
v___x_358_ = 1;
v___x_359_ = lean_task_map(v___f_340_, v_val_353_, v___x_357_, v___x_358_);
if (v_isShared_356_ == 0)
{
lean_ctor_set(v___x_355_, 0, v___x_359_);
v___x_361_ = v___x_355_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v___x_359_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
else
{
lean_object* v___x_364_; 
lean_dec(v_a_352_);
lean_dec_ref(v___f_340_);
v___x_364_ = ((lean_object*)(l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__1___closed__0));
return v___x_364_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__1___boxed(lean_object* v___f_365_, lean_object* v_x_366_, lean_object* v___y_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__1(v___f_365_, v_x_366_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg(lean_object* v_outbox_372_){
_start:
{
lean_object* v___f_374_; lean_object* v___x_375_; uint8_t v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v___f_374_ = ((lean_object*)(l_Std_Http_Internal_Outbox_awaitIdle___redArg___closed__1));
v___x_375_ = lean_unsigned_to_nat(0u);
v___x_376_ = 0;
v___x_377_ = l_Std_Http_Internal_Outbox_idle_x3f___redArg(v_outbox_372_);
v___x_378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_378_, 0, v___x_377_);
v___x_379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_379_, 0, v___x_378_);
v___x_380_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_375_, v___x_376_, v___x_379_, v___f_374_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___boxed(lean_object* v_outbox_381_, lean_object* v_a_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Std_Http_Internal_Outbox_awaitIdle___redArg(v_outbox_381_);
lean_dec_ref(v_outbox_381_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle(lean_object* v_00_u03b1_384_, lean_object* v_outbox_385_){
_start:
{
lean_object* v___x_387_; 
v___x_387_ = l_Std_Http_Internal_Outbox_awaitIdle___redArg(v_outbox_385_);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___boxed(lean_object* v_00_u03b1_388_, lean_object* v_outbox_389_, lean_object* v_a_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l_Std_Http_Internal_Outbox_awaitIdle(v_00_u03b1_388_, v_outbox_389_);
lean_dec_ref(v_outbox_389_);
return v_res_391_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Outbox_failed___redArg(lean_object* v_outbox_392_){
_start:
{
lean_object* v_state_394_; lean_object* v___x_395_; uint8_t v_failed_396_; 
v_state_394_ = lean_ctor_get(v_outbox_392_, 1);
v___x_395_ = lean_st_ref_get(v_state_394_);
v_failed_396_ = lean_ctor_get_uint8(v___x_395_, sizeof(void*)*4 + 1);
lean_dec(v___x_395_);
return v_failed_396_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_failed___redArg___boxed(lean_object* v_outbox_397_, lean_object* v_a_398_){
_start:
{
uint8_t v_res_399_; lean_object* v_r_400_; 
v_res_399_ = l_Std_Http_Internal_Outbox_failed___redArg(v_outbox_397_);
lean_dec_ref(v_outbox_397_);
v_r_400_ = lean_box(v_res_399_);
return v_r_400_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Outbox_failed(lean_object* v_00_u03b1_401_, lean_object* v_outbox_402_){
_start:
{
uint8_t v___x_404_; 
v___x_404_ = l_Std_Http_Internal_Outbox_failed___redArg(v_outbox_402_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_failed___boxed(lean_object* v_00_u03b1_405_, lean_object* v_outbox_406_, lean_object* v_a_407_){
_start:
{
uint8_t v_res_408_; lean_object* v_r_409_; 
v_res_408_ = l_Std_Http_Internal_Outbox_failed(v_00_u03b1_405_, v_outbox_406_);
lean_dec_ref(v_outbox_406_);
v_r_409_ = lean_box(v_res_408_);
return v_r_409_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg___lam__0(lean_object* v_x_410_){
_start:
{
uint8_t v___y_413_; 
if (lean_obj_tag(v_x_410_) == 0)
{
lean_object* v___x_417_; 
v___x_417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_417_, 0, v_x_410_);
return v___x_417_;
}
else
{
lean_object* v_a_418_; uint8_t v___x_419_; 
v_a_418_ = lean_ctor_get(v_x_410_, 0);
lean_inc(v_a_418_);
lean_dec_ref_known(v_x_410_, 1);
v___x_419_ = lean_unbox(v_a_418_);
lean_dec(v_a_418_);
if (v___x_419_ == 0)
{
uint8_t v___x_420_; 
v___x_420_ = 1;
v___y_413_ = v___x_420_;
goto v___jp_412_;
}
else
{
uint8_t v___x_421_; 
v___x_421_ = 0;
v___y_413_ = v___x_421_;
goto v___jp_412_;
}
}
v___jp_412_:
{
lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_414_ = lean_box(v___y_413_);
v___x_415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_415_, 0, v___x_414_);
v___x_416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_416_, 0, v___x_415_);
return v___x_416_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg___lam__0___boxed(lean_object* v_x_422_, lean_object* v___y_423_){
_start:
{
lean_object* v_res_424_; 
v_res_424_ = l_Std_Http_Internal_Outbox_awaitWritten___redArg___lam__0(v_x_422_);
return v_res_424_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg___lam__1(lean_object* v_outbox_425_, lean_object* v___f_426_, lean_object* v_x_427_){
_start:
{
if (lean_obj_tag(v_x_427_) == 0)
{
lean_object* v_a_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_437_; 
lean_dec_ref(v___f_426_);
v_a_429_ = lean_ctor_get(v_x_427_, 0);
v_isSharedCheck_437_ = !lean_is_exclusive(v_x_427_);
if (v_isSharedCheck_437_ == 0)
{
v___x_431_ = v_x_427_;
v_isShared_432_ = v_isSharedCheck_437_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_a_429_);
lean_dec(v_x_427_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_437_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v___x_434_; 
if (v_isShared_432_ == 0)
{
v___x_434_ = v___x_431_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v_a_429_);
v___x_434_ = v_reuseFailAlloc_436_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
lean_object* v___x_435_; 
v___x_435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_435_, 0, v___x_434_);
return v___x_435_;
}
}
}
else
{
lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_450_; 
v_isSharedCheck_450_ = !lean_is_exclusive(v_x_427_);
if (v_isSharedCheck_450_ == 0)
{
lean_object* v_unused_451_; 
v_unused_451_ = lean_ctor_get(v_x_427_, 0);
lean_dec(v_unused_451_);
v___x_439_ = v_x_427_;
v_isShared_440_ = v_isSharedCheck_450_;
goto v_resetjp_438_;
}
else
{
lean_dec(v_x_427_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_450_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
lean_object* v___x_441_; uint8_t v___x_442_; uint8_t v___x_443_; lean_object* v___x_444_; lean_object* v___x_446_; 
v___x_441_ = lean_unsigned_to_nat(0u);
v___x_442_ = 0;
v___x_443_ = l_Std_Http_Internal_Outbox_failed___redArg(v_outbox_425_);
v___x_444_ = lean_box(v___x_443_);
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 0, v___x_444_);
v___x_446_ = v___x_439_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v___x_444_);
v___x_446_ = v_reuseFailAlloc_449_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_447_, 0, v___x_446_);
v___x_448_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_441_, v___x_442_, v___x_447_, v___f_426_);
return v___x_448_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg___lam__1___boxed(lean_object* v_outbox_452_, lean_object* v___f_453_, lean_object* v_x_454_, lean_object* v___y_455_){
_start:
{
lean_object* v_res_456_; 
v_res_456_ = l_Std_Http_Internal_Outbox_awaitWritten___redArg___lam__1(v_outbox_452_, v___f_453_, v_x_454_);
lean_dec_ref(v_outbox_452_);
return v_res_456_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg(lean_object* v_outbox_458_){
_start:
{
lean_object* v___f_460_; lean_object* v___f_461_; lean_object* v___x_462_; uint8_t v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v___f_460_ = ((lean_object*)(l_Std_Http_Internal_Outbox_awaitWritten___redArg___closed__0));
lean_inc_ref(v_outbox_458_);
v___f_461_ = lean_alloc_closure((void*)(l_Std_Http_Internal_Outbox_awaitWritten___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_461_, 0, v_outbox_458_);
lean_closure_set(v___f_461_, 1, v___f_460_);
v___x_462_ = lean_unsigned_to_nat(0u);
v___x_463_ = 0;
v___x_464_ = l_Std_Http_Internal_Outbox_awaitIdle___redArg(v_outbox_458_);
lean_dec_ref(v_outbox_458_);
v___x_465_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_462_, v___x_463_, v___x_464_, v___f_461_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg___boxed(lean_object* v_outbox_466_, lean_object* v_a_467_){
_start:
{
lean_object* v_res_468_; 
v_res_468_ = l_Std_Http_Internal_Outbox_awaitWritten___redArg(v_outbox_466_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten(lean_object* v_00_u03b1_469_, lean_object* v_outbox_470_){
_start:
{
lean_object* v___x_472_; 
v___x_472_ = l_Std_Http_Internal_Outbox_awaitWritten___redArg(v_outbox_470_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___boxed(lean_object* v_00_u03b1_473_, lean_object* v_outbox_474_, lean_object* v_a_475_){
_start:
{
lean_object* v_res_476_; 
v_res_476_ = l_Std_Http_Internal_Outbox_awaitWritten(v_00_u03b1_473_, v_outbox_474_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_takeError_x3f___redArg(lean_object* v_outbox_477_){
_start:
{
lean_object* v_state_479_; lean_object* v___x_480_; lean_object* v_queued_481_; lean_object* v_queuedBytes_482_; uint8_t v_writing_483_; uint8_t v_failed_484_; lean_object* v_error_485_; lean_object* v_idle_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_495_; 
v_state_479_ = lean_ctor_get(v_outbox_477_, 1);
v___x_480_ = lean_st_ref_take(v_state_479_);
v_queued_481_ = lean_ctor_get(v___x_480_, 0);
v_queuedBytes_482_ = lean_ctor_get(v___x_480_, 1);
v_writing_483_ = lean_ctor_get_uint8(v___x_480_, sizeof(void*)*4);
v_failed_484_ = lean_ctor_get_uint8(v___x_480_, sizeof(void*)*4 + 1);
v_error_485_ = lean_ctor_get(v___x_480_, 2);
v_idle_486_ = lean_ctor_get(v___x_480_, 3);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_480_);
if (v_isSharedCheck_495_ == 0)
{
v___x_488_ = v___x_480_;
v_isShared_489_ = v_isSharedCheck_495_;
goto v_resetjp_487_;
}
else
{
lean_inc(v_idle_486_);
lean_inc(v_error_485_);
lean_inc(v_queuedBytes_482_);
lean_inc(v_queued_481_);
lean_dec(v___x_480_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_495_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
lean_object* v___x_490_; lean_object* v___x_492_; 
v___x_490_ = lean_box(0);
if (v_isShared_489_ == 0)
{
lean_ctor_set(v___x_488_, 2, v___x_490_);
v___x_492_ = v___x_488_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_queued_481_);
lean_ctor_set(v_reuseFailAlloc_494_, 1, v_queuedBytes_482_);
lean_ctor_set(v_reuseFailAlloc_494_, 2, v___x_490_);
lean_ctor_set(v_reuseFailAlloc_494_, 3, v_idle_486_);
lean_ctor_set_uint8(v_reuseFailAlloc_494_, sizeof(void*)*4, v_writing_483_);
lean_ctor_set_uint8(v_reuseFailAlloc_494_, sizeof(void*)*4 + 1, v_failed_484_);
v___x_492_ = v_reuseFailAlloc_494_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
lean_object* v___x_493_; 
v___x_493_ = lean_st_ref_put(v_state_479_, v___x_492_);
return v_error_485_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_takeError_x3f___redArg___boxed(lean_object* v_outbox_496_, lean_object* v_a_497_){
_start:
{
lean_object* v_res_498_; 
v_res_498_ = l_Std_Http_Internal_Outbox_takeError_x3f___redArg(v_outbox_496_);
lean_dec_ref(v_outbox_496_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_takeError_x3f(lean_object* v_00_u03b1_499_, lean_object* v_outbox_500_){
_start:
{
lean_object* v___x_502_; 
v___x_502_ = l_Std_Http_Internal_Outbox_takeError_x3f___redArg(v_outbox_500_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_takeError_x3f___boxed(lean_object* v_00_u03b1_503_, lean_object* v_outbox_504_, lean_object* v_a_505_){
_start:
{
lean_object* v_res_506_; 
v_res_506_ = l_Std_Http_Internal_Outbox_takeError_x3f(v_00_u03b1_503_, v_outbox_504_);
lean_dec_ref(v_outbox_504_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_push___redArg___lam__0(lean_object* v_limit_512_, lean_object* v_outbox_513_, lean_object* v_x_514_){
_start:
{
if (lean_obj_tag(v_x_514_) == 0)
{
lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_524_; 
lean_dec_ref(v_outbox_513_);
v_a_516_ = lean_ctor_get(v_x_514_, 0);
v_isSharedCheck_524_ = !lean_is_exclusive(v_x_514_);
if (v_isSharedCheck_524_ == 0)
{
v___x_518_ = v_x_514_;
v_isShared_519_ = v_isSharedCheck_524_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v_x_514_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_524_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_521_; 
if (v_isShared_519_ == 0)
{
v___x_521_ = v___x_518_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v_a_516_);
v___x_521_ = v_reuseFailAlloc_523_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
lean_object* v___x_522_; 
v___x_522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_522_, 0, v___x_521_);
return v___x_522_;
}
}
}
else
{
lean_object* v_a_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_544_; 
v_a_525_ = lean_ctor_get(v_x_514_, 0);
v_isSharedCheck_544_ = !lean_is_exclusive(v_x_514_);
if (v_isSharedCheck_544_ == 0)
{
v___x_527_ = v_x_514_;
v_isShared_528_ = v_isSharedCheck_544_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_a_525_);
lean_dec(v_x_514_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_544_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
if (lean_obj_tag(v_a_525_) == 0)
{
lean_object* v___x_529_; 
lean_del_object(v___x_527_);
lean_dec_ref(v_outbox_513_);
v___x_529_ = ((lean_object*)(l_Std_Http_Internal_Outbox_push___redArg___lam__0___closed__1));
return v___x_529_;
}
else
{
lean_object* v_val_530_; lean_object* v___x_532_; uint8_t v_isShared_533_; uint8_t v_isSharedCheck_543_; 
v_val_530_ = lean_ctor_get(v_a_525_, 0);
v_isSharedCheck_543_ = !lean_is_exclusive(v_a_525_);
if (v_isSharedCheck_543_ == 0)
{
v___x_532_ = v_a_525_;
v_isShared_533_ = v_isSharedCheck_543_;
goto v_resetjp_531_;
}
else
{
lean_inc(v_val_530_);
lean_dec(v_a_525_);
v___x_532_ = lean_box(0);
v_isShared_533_ = v_isSharedCheck_543_;
goto v_resetjp_531_;
}
v_resetjp_531_:
{
uint8_t v___x_534_; 
v___x_534_ = lean_nat_dec_le(v_val_530_, v_limit_512_);
lean_dec(v_val_530_);
if (v___x_534_ == 0)
{
lean_object* v___x_535_; 
lean_del_object(v___x_532_);
lean_del_object(v___x_527_);
v___x_535_ = l_Std_Http_Internal_Outbox_awaitWritten___redArg(v_outbox_513_);
return v___x_535_;
}
else
{
lean_object* v___x_536_; lean_object* v___x_538_; 
lean_dec_ref(v_outbox_513_);
v___x_536_ = lean_box(v___x_534_);
if (v_isShared_528_ == 0)
{
lean_ctor_set(v___x_527_, 0, v___x_536_);
v___x_538_ = v___x_527_;
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
lean_object* v___x_540_; 
if (v_isShared_533_ == 0)
{
lean_ctor_set_tag(v___x_532_, 0);
lean_ctor_set(v___x_532_, 0, v___x_538_);
v___x_540_ = v___x_532_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v___x_538_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
return v___x_540_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_push___redArg___lam__0___boxed(lean_object* v_limit_545_, lean_object* v_outbox_546_, lean_object* v_x_547_, lean_object* v___y_548_){
_start:
{
lean_object* v_res_549_; 
v_res_549_ = l_Std_Http_Internal_Outbox_push___redArg___lam__0(v_limit_545_, v_outbox_546_, v_x_547_);
lean_dec(v_limit_545_);
return v_res_549_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_push___redArg(lean_object* v_inst_550_, lean_object* v_outbox_551_, lean_object* v_buffer_552_, lean_object* v_limit_553_){
_start:
{
lean_object* v___f_555_; lean_object* v___x_556_; uint8_t v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; 
lean_inc_ref(v_outbox_551_);
v___f_555_ = lean_alloc_closure((void*)(l_Std_Http_Internal_Outbox_push___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_555_, 0, v_limit_553_);
lean_closure_set(v___f_555_, 1, v_outbox_551_);
v___x_556_ = lean_unsigned_to_nat(0u);
v___x_557_ = 0;
v___x_558_ = l_Std_Http_Internal_Outbox_send___redArg(v_inst_550_, v_outbox_551_, v_buffer_552_);
v___x_559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_559_, 0, v___x_558_);
v___x_560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_560_, 0, v___x_559_);
v___x_561_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_556_, v___x_557_, v___x_560_, v___f_555_);
return v___x_561_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_push___redArg___boxed(lean_object* v_inst_562_, lean_object* v_outbox_563_, lean_object* v_buffer_564_, lean_object* v_limit_565_, lean_object* v_a_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l_Std_Http_Internal_Outbox_push___redArg(v_inst_562_, v_outbox_563_, v_buffer_564_, v_limit_565_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_push(lean_object* v_00_u03b1_568_, lean_object* v_inst_569_, lean_object* v_outbox_570_, lean_object* v_buffer_571_, lean_object* v_limit_572_){
_start:
{
lean_object* v___x_574_; 
v___x_574_ = l_Std_Http_Internal_Outbox_push___redArg(v_inst_569_, v_outbox_570_, v_buffer_571_, v_limit_572_);
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_push___boxed(lean_object* v_00_u03b1_575_, lean_object* v_inst_576_, lean_object* v_outbox_577_, lean_object* v_buffer_578_, lean_object* v_limit_579_, lean_object* v_a_580_){
_start:
{
lean_object* v_res_581_; 
v_res_581_ = l_Std_Http_Internal_Outbox_push(v_00_u03b1_575_, v_inst_576_, v_outbox_577_, v_buffer_578_, v_limit_579_);
return v_res_581_;
}
}
lean_object* runtime_initialize_Std_Http_Transport(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Transport_Outbox(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Http_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Transport_Outbox(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Http_Transport(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Transport_Outbox(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Http_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Transport_Outbox(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Transport_Outbox(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Transport_Outbox(builtin);
}
#ifdef __cplusplus
}
#endif
