// Lean compiler output
// Module: Lean.Meta.Tactic.Revert
// Imports: public import Lean.Meta.Tactic.Clear
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
lean_object* l_Lean_MVarId_setKind___redArg(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_setTag___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_collectForwardDeps(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_clear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_revert(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_LocalDecl_index(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_getFVarIds(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_revert_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_revert_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Failed to revert `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 106, .m_capacity = 106, .m_length = 105, .m_data = "`: It is an auxiliary declaration created to represent a recursive reference to an in-progress definition"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_revert___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_revert___lam__0___closed__0;
static const lean_string_object l_Lean_MVarId_revert___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "failed to create binder due to failure when reverting variable dependencies"};
static const lean_object* l_Lean_MVarId_revert___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_revert___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_MVarId_revert___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_revert___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_MVarId_revert___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revert___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_revert___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "revert"};
static const lean_object* l_Lean_MVarId_revert___closed__0 = (const lean_object*)&l_Lean_MVarId_revert___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_revert___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_revert___closed__0_value),LEAN_SCALAR_PTR_LITERAL(244, 122, 252, 27, 38, 131, 244, 91)}};
static const lean_object* l_Lean_MVarId_revert___closed__1 = (const lean_object*)&l_Lean_MVarId_revert___closed__1_value;
static const lean_array_object l_Lean_MVarId_revert___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_MVarId_revert___closed__2 = (const lean_object*)&l_Lean_MVarId_revert___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_revert(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_revert_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAfter___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAfter___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAfter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAfter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertFrom___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertFrom___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertFrom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertFrom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revertAll_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revertAll_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAll___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAll___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_revertAll___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "revertAll"};
static const lean_object* l_Lean_MVarId_revertAll___closed__0 = (const lean_object*)&l_Lean_MVarId_revertAll___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_revertAll___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_revertAll___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 62, 121, 47, 113, 229, 251, 224)}};
static const lean_object* l_Lean_MVarId_revertAll___closed__1 = (const lean_object*)&l_Lean_MVarId_revertAll___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revertAll_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revertAll_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg(lean_object* v_mvarId_1_, lean_object* v_x_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1_, v_x_2_, v___y_3_, v___y_4_, v___y_5_, v___y_6_);
if (lean_obj_tag(v___x_8_) == 0)
{
lean_object* v_a_9_; lean_object* v___x_11_; uint8_t v_isShared_12_; uint8_t v_isSharedCheck_16_; 
v_a_9_ = lean_ctor_get(v___x_8_, 0);
v_isSharedCheck_16_ = !lean_is_exclusive(v___x_8_);
if (v_isSharedCheck_16_ == 0)
{
v___x_11_ = v___x_8_;
v_isShared_12_ = v_isSharedCheck_16_;
goto v_resetjp_10_;
}
else
{
lean_inc(v_a_9_);
lean_dec(v___x_8_);
v___x_11_ = lean_box(0);
v_isShared_12_ = v_isSharedCheck_16_;
goto v_resetjp_10_;
}
v_resetjp_10_:
{
lean_object* v___x_14_; 
if (v_isShared_12_ == 0)
{
v___x_14_ = v___x_11_;
goto v_reusejp_13_;
}
else
{
lean_object* v_reuseFailAlloc_15_; 
v_reuseFailAlloc_15_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_15_, 0, v_a_9_);
v___x_14_ = v_reuseFailAlloc_15_;
goto v_reusejp_13_;
}
v_reusejp_13_:
{
return v___x_14_;
}
}
}
else
{
lean_object* v_a_17_; lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_24_; 
v_a_17_ = lean_ctor_get(v___x_8_, 0);
v_isSharedCheck_24_ = !lean_is_exclusive(v___x_8_);
if (v_isSharedCheck_24_ == 0)
{
v___x_19_ = v___x_8_;
v_isShared_20_ = v_isSharedCheck_24_;
goto v_resetjp_18_;
}
else
{
lean_inc(v_a_17_);
lean_dec(v___x_8_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_24_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
lean_object* v___x_22_; 
if (v_isShared_20_ == 0)
{
v___x_22_ = v___x_19_;
goto v_reusejp_21_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_a_17_);
v___x_22_ = v_reuseFailAlloc_23_;
goto v_reusejp_21_;
}
v_reusejp_21_:
{
return v___x_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg___boxed(lean_object* v_mvarId_25_, lean_object* v_x_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg(v_mvarId_25_, v_x_26_, v___y_27_, v___y_28_, v___y_29_, v___y_30_);
lean_dec(v___y_30_);
lean_dec_ref(v___y_29_);
lean_dec(v___y_28_);
lean_dec_ref(v___y_27_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5(lean_object* v_00_u03b1_33_, lean_object* v_mvarId_34_, lean_object* v_x_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg(v_mvarId_34_, v_x_35_, v___y_36_, v___y_37_, v___y_38_, v___y_39_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___boxed(lean_object* v_00_u03b1_42_, lean_object* v_mvarId_43_, lean_object* v_x_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5(v_00_u03b1_42_, v_mvarId_43_, v_x_44_, v___y_45_, v___y_46_, v___y_47_, v___y_48_);
lean_dec(v___y_48_);
lean_dec_ref(v___y_47_);
lean_dec(v___y_46_);
lean_dec_ref(v___y_45_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_revert_spec__3_spec__3(lean_object* v_msgData_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_){
_start:
{
lean_object* v___x_57_; lean_object* v_env_58_; uint8_t v___x_59_; lean_object* v_env_60_; lean_object* v___x_61_; lean_object* v_toCold_62_; lean_object* v_mctx_63_; lean_object* v_lctx_64_; lean_object* v_options_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_57_ = lean_st_ref_get(v___y_55_);
v_env_58_ = lean_ctor_get(v___x_57_, 0);
lean_inc_ref(v_env_58_);
lean_dec(v___x_57_);
v___x_59_ = 0;
v_env_60_ = l_Lean_Environment_setRecordingDeps(v_env_58_, v___x_59_);
v___x_61_ = lean_st_ref_get(v___y_53_);
v_toCold_62_ = lean_ctor_get(v___y_54_, 0);
v_mctx_63_ = lean_ctor_get(v___x_61_, 0);
lean_inc_ref(v_mctx_63_);
lean_dec(v___x_61_);
v_lctx_64_ = lean_ctor_get(v___y_52_, 2);
v_options_65_ = lean_ctor_get(v_toCold_62_, 2);
lean_inc_ref(v_options_65_);
lean_inc_ref(v_lctx_64_);
v___x_66_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_66_, 0, v_env_60_);
lean_ctor_set(v___x_66_, 1, v_mctx_63_);
lean_ctor_set(v___x_66_, 2, v_lctx_64_);
lean_ctor_set(v___x_66_, 3, v_options_65_);
v___x_67_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_67_, 0, v___x_66_);
lean_ctor_set(v___x_67_, 1, v_msgData_51_);
v___x_68_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_68_, 0, v___x_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_revert_spec__3_spec__3___boxed(lean_object* v_msgData_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_revert_spec__3_spec__3(v_msgData_69_, v___y_70_, v___y_71_, v___y_72_, v___y_73_);
lean_dec(v___y_73_);
lean_dec_ref(v___y_72_);
lean_dec(v___y_71_);
lean_dec_ref(v___y_70_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___redArg(lean_object* v_msg_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
lean_object* v_ref_82_; lean_object* v___x_83_; lean_object* v_a_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_92_; 
v_ref_82_ = lean_ctor_get(v___y_79_, 2);
v___x_83_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_revert_spec__3_spec__3(v_msg_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_);
v_a_84_ = lean_ctor_get(v___x_83_, 0);
v_isSharedCheck_92_ = !lean_is_exclusive(v___x_83_);
if (v_isSharedCheck_92_ == 0)
{
v___x_86_ = v___x_83_;
v_isShared_87_ = v_isSharedCheck_92_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_a_84_);
lean_dec(v___x_83_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_92_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v___x_88_; lean_object* v___x_90_; 
lean_inc(v_ref_82_);
v___x_88_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_88_, 0, v_ref_82_);
lean_ctor_set(v___x_88_, 1, v_a_84_);
if (v_isShared_87_ == 0)
{
lean_ctor_set_tag(v___x_86_, 1);
lean_ctor_set(v___x_86_, 0, v___x_88_);
v___x_90_ = v___x_86_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v___x_88_);
v___x_90_ = v_reuseFailAlloc_91_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
return v___x_90_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___redArg___boxed(lean_object* v_msg_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___redArg(v_msg_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
lean_dec(v___y_97_);
lean_dec_ref(v___y_96_);
lean_dec(v___y_95_);
lean_dec_ref(v___y_94_);
return v_res_99_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__1(void){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_101_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__0));
v___x_102_ = l_Lean_stringToMessageData(v___x_101_);
return v___x_102_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__3(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__2));
v___x_105_ = l_Lean_stringToMessageData(v___x_104_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4(lean_object* v_as_106_, size_t v_sz_107_, size_t v_i_108_, lean_object* v_b_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_){
_start:
{
lean_object* v_a_116_; uint8_t v___x_120_; 
v___x_120_ = lean_usize_dec_lt(v_i_108_, v_sz_107_);
if (v___x_120_ == 0)
{
lean_object* v___x_121_; 
v___x_121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_121_, 0, v_b_109_);
return v___x_121_;
}
else
{
lean_object* v___x_122_; lean_object* v_a_123_; lean_object* v___x_124_; 
v___x_122_ = lean_box(0);
v_a_123_ = lean_array_uget_borrowed(v_as_106_, v_i_108_);
lean_inc(v_a_123_);
v___x_124_ = l_Lean_FVarId_getDecl___redArg(v_a_123_, v___y_110_, v___y_112_, v___y_113_);
if (lean_obj_tag(v___x_124_) == 0)
{
lean_object* v_a_125_; uint8_t v___x_126_; 
v_a_125_ = lean_ctor_get(v___x_124_, 0);
lean_inc(v_a_125_);
lean_dec_ref_known(v___x_124_, 1);
v___x_126_ = l_Lean_LocalDecl_isAuxDecl(v_a_125_);
lean_dec(v_a_125_);
if (v___x_126_ == 0)
{
v_a_116_ = v___x_122_;
goto v___jp_115_;
}
else
{
lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_127_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__1);
lean_inc(v_a_123_);
v___x_128_ = l_Lean_mkFVar(v_a_123_);
v___x_129_ = l_Lean_MessageData_ofExpr(v___x_128_);
v___x_130_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_127_);
lean_ctor_set(v___x_130_, 1, v___x_129_);
v___x_131_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__3);
v___x_132_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_132_, 0, v___x_130_);
lean_ctor_set(v___x_132_, 1, v___x_131_);
v___x_133_ = l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___redArg(v___x_132_, v___y_110_, v___y_111_, v___y_112_, v___y_113_);
if (lean_obj_tag(v___x_133_) == 0)
{
lean_dec_ref_known(v___x_133_, 1);
v_a_116_ = v___x_122_;
goto v___jp_115_;
}
else
{
return v___x_133_;
}
}
}
else
{
lean_object* v_a_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_141_; 
v_a_134_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_141_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_141_ == 0)
{
v___x_136_ = v___x_124_;
v_isShared_137_ = v_isSharedCheck_141_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_a_134_);
lean_dec(v___x_124_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_141_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v___x_139_; 
if (v_isShared_137_ == 0)
{
v___x_139_ = v___x_136_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v_a_134_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
return v___x_139_;
}
}
}
}
v___jp_115_:
{
size_t v___x_117_; size_t v___x_118_; 
v___x_117_ = ((size_t)1ULL);
v___x_118_ = lean_usize_add(v_i_108_, v___x_117_);
v_i_108_ = v___x_118_;
v_b_109_ = v_a_116_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___boxed(lean_object* v_as_142_, lean_object* v_sz_143_, lean_object* v_i_144_, lean_object* v_b_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_){
_start:
{
size_t v_sz_boxed_151_; size_t v_i_boxed_152_; lean_object* v_res_153_; 
v_sz_boxed_151_ = lean_unbox_usize(v_sz_143_);
lean_dec(v_sz_143_);
v_i_boxed_152_ = lean_unbox_usize(v_i_144_);
lean_dec(v_i_144_);
v_res_153_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4(v_as_142_, v_sz_boxed_151_, v_i_boxed_152_, v_b_145_, v___y_146_, v___y_147_, v___y_148_, v___y_149_);
lean_dec(v___y_149_);
lean_dec_ref(v___y_148_);
lean_dec(v___y_147_);
lean_dec_ref(v___y_146_);
lean_dec_ref(v_as_142_);
return v_res_153_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__0(size_t v_sz_154_, size_t v_i_155_, lean_object* v_bs_156_){
_start:
{
uint8_t v___x_157_; 
v___x_157_ = lean_usize_dec_lt(v_i_155_, v_sz_154_);
if (v___x_157_ == 0)
{
return v_bs_156_;
}
else
{
lean_object* v_v_158_; lean_object* v___x_159_; lean_object* v_bs_x27_160_; lean_object* v___x_161_; size_t v___x_162_; size_t v___x_163_; lean_object* v___x_164_; 
v_v_158_ = lean_array_uget(v_bs_156_, v_i_155_);
v___x_159_ = lean_unsigned_to_nat(0u);
v_bs_x27_160_ = lean_array_uset(v_bs_156_, v_i_155_, v___x_159_);
v___x_161_ = l_Lean_mkFVar(v_v_158_);
v___x_162_ = ((size_t)1ULL);
v___x_163_ = lean_usize_add(v_i_155_, v___x_162_);
v___x_164_ = lean_array_uset(v_bs_x27_160_, v_i_155_, v___x_161_);
v_i_155_ = v___x_163_;
v_bs_156_ = v___x_164_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__0___boxed(lean_object* v_sz_166_, lean_object* v_i_167_, lean_object* v_bs_168_){
_start:
{
size_t v_sz_boxed_169_; size_t v_i_boxed_170_; lean_object* v_res_171_; 
v_sz_boxed_169_ = lean_unbox_usize(v_sz_166_);
lean_dec(v_sz_166_);
v_i_boxed_170_ = lean_unbox_usize(v_i_167_);
lean_dec(v_i_167_);
v_res_171_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__0(v_sz_boxed_169_, v_i_boxed_170_, v_bs_168_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__2(size_t v_sz_172_, size_t v_i_173_, lean_object* v_bs_174_){
_start:
{
uint8_t v___x_175_; 
v___x_175_ = lean_usize_dec_lt(v_i_173_, v_sz_172_);
if (v___x_175_ == 0)
{
return v_bs_174_;
}
else
{
lean_object* v_v_176_; lean_object* v___x_177_; lean_object* v_bs_x27_178_; lean_object* v___x_179_; size_t v___x_180_; size_t v___x_181_; lean_object* v___x_182_; 
v_v_176_ = lean_array_uget(v_bs_174_, v_i_173_);
v___x_177_ = lean_unsigned_to_nat(0u);
v_bs_x27_178_ = lean_array_uset(v_bs_174_, v_i_173_, v___x_177_);
v___x_179_ = l_Lean_Expr_fvarId_x21(v_v_176_);
lean_dec(v_v_176_);
v___x_180_ = ((size_t)1ULL);
v___x_181_ = lean_usize_add(v_i_173_, v___x_180_);
v___x_182_ = lean_array_uset(v_bs_x27_178_, v_i_173_, v___x_179_);
v_i_173_ = v___x_181_;
v_bs_174_ = v___x_182_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__2___boxed(lean_object* v_sz_184_, lean_object* v_i_185_, lean_object* v_bs_186_){
_start:
{
size_t v_sz_boxed_187_; size_t v_i_boxed_188_; lean_object* v_res_189_; 
v_sz_boxed_187_ = lean_unbox_usize(v_sz_184_);
lean_dec(v_sz_184_);
v_i_boxed_188_ = lean_unbox_usize(v_i_185_);
lean_dec(v_i_185_);
v_res_189_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__2(v_sz_boxed_187_, v_i_boxed_188_, v_bs_186_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__1(lean_object* v_as_190_, size_t v_sz_191_, size_t v_i_192_, lean_object* v_b_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_){
_start:
{
lean_object* v_a_200_; uint8_t v___x_204_; 
v___x_204_ = lean_usize_dec_lt(v_i_192_, v_sz_191_);
if (v___x_204_ == 0)
{
lean_object* v___x_205_; 
v___x_205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_205_, 0, v_b_193_);
return v___x_205_;
}
else
{
lean_object* v_fst_206_; lean_object* v_snd_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_241_; 
v_fst_206_ = lean_ctor_get(v_b_193_, 0);
v_snd_207_ = lean_ctor_get(v_b_193_, 1);
v_isSharedCheck_241_ = !lean_is_exclusive(v_b_193_);
if (v_isSharedCheck_241_ == 0)
{
v___x_209_ = v_b_193_;
v_isShared_210_ = v_isSharedCheck_241_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_snd_207_);
lean_inc(v_fst_206_);
lean_dec(v_b_193_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_241_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v_a_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v_a_211_ = lean_array_uget_borrowed(v_as_190_, v_i_192_);
v___x_212_ = l_Lean_Expr_fvarId_x21(v_a_211_);
lean_inc(v___x_212_);
v___x_213_ = l_Lean_FVarId_getDecl___redArg(v___x_212_, v___y_194_, v___y_196_, v___y_197_);
if (lean_obj_tag(v___x_213_) == 0)
{
lean_object* v_a_214_; uint8_t v___x_215_; 
v_a_214_ = lean_ctor_get(v___x_213_, 0);
lean_inc(v_a_214_);
lean_dec_ref_known(v___x_213_, 1);
v___x_215_ = l_Lean_LocalDecl_isAuxDecl(v_a_214_);
lean_dec(v_a_214_);
if (v___x_215_ == 0)
{
lean_object* v___x_216_; lean_object* v___x_218_; 
lean_dec(v___x_212_);
lean_inc(v_a_211_);
v___x_216_ = lean_array_push(v_snd_207_, v_a_211_);
if (v_isShared_210_ == 0)
{
lean_ctor_set(v___x_209_, 1, v___x_216_);
v___x_218_ = v___x_209_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v_fst_206_);
lean_ctor_set(v_reuseFailAlloc_219_, 1, v___x_216_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
v_a_200_ = v___x_218_;
goto v___jp_199_;
}
}
else
{
lean_object* v___x_220_; 
v___x_220_ = l_Lean_MVarId_clear(v_fst_206_, v___x_212_, v___y_194_, v___y_195_, v___y_196_, v___y_197_);
if (lean_obj_tag(v___x_220_) == 0)
{
lean_object* v_a_221_; lean_object* v___x_223_; 
v_a_221_ = lean_ctor_get(v___x_220_, 0);
lean_inc(v_a_221_);
lean_dec_ref_known(v___x_220_, 1);
if (v_isShared_210_ == 0)
{
lean_ctor_set(v___x_209_, 0, v_a_221_);
v___x_223_ = v___x_209_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v_a_221_);
lean_ctor_set(v_reuseFailAlloc_224_, 1, v_snd_207_);
v___x_223_ = v_reuseFailAlloc_224_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
v_a_200_ = v___x_223_;
goto v___jp_199_;
}
}
else
{
lean_object* v_a_225_; lean_object* v___x_227_; uint8_t v_isShared_228_; uint8_t v_isSharedCheck_232_; 
lean_del_object(v___x_209_);
lean_dec(v_snd_207_);
v_a_225_ = lean_ctor_get(v___x_220_, 0);
v_isSharedCheck_232_ = !lean_is_exclusive(v___x_220_);
if (v_isSharedCheck_232_ == 0)
{
v___x_227_ = v___x_220_;
v_isShared_228_ = v_isSharedCheck_232_;
goto v_resetjp_226_;
}
else
{
lean_inc(v_a_225_);
lean_dec(v___x_220_);
v___x_227_ = lean_box(0);
v_isShared_228_ = v_isSharedCheck_232_;
goto v_resetjp_226_;
}
v_resetjp_226_:
{
lean_object* v___x_230_; 
if (v_isShared_228_ == 0)
{
v___x_230_ = v___x_227_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v_a_225_);
v___x_230_ = v_reuseFailAlloc_231_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
return v___x_230_;
}
}
}
}
}
else
{
lean_object* v_a_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_240_; 
lean_dec(v___x_212_);
lean_del_object(v___x_209_);
lean_dec(v_snd_207_);
lean_dec(v_fst_206_);
v_a_233_ = lean_ctor_get(v___x_213_, 0);
v_isSharedCheck_240_ = !lean_is_exclusive(v___x_213_);
if (v_isSharedCheck_240_ == 0)
{
v___x_235_ = v___x_213_;
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_a_233_);
lean_dec(v___x_213_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v___x_238_; 
if (v_isShared_236_ == 0)
{
v___x_238_ = v___x_235_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v_a_233_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
}
}
v___jp_199_:
{
size_t v___x_201_; size_t v___x_202_; 
v___x_201_ = ((size_t)1ULL);
v___x_202_ = lean_usize_add(v_i_192_, v___x_201_);
v_i_192_ = v___x_202_;
v_b_193_ = v_a_200_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__1___boxed(lean_object* v_as_242_, lean_object* v_sz_243_, lean_object* v_i_244_, lean_object* v_b_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_){
_start:
{
size_t v_sz_boxed_251_; size_t v_i_boxed_252_; lean_object* v_res_253_; 
v_sz_boxed_251_ = lean_unbox_usize(v_sz_243_);
lean_dec(v_sz_243_);
v_i_boxed_252_ = lean_unbox_usize(v_i_244_);
lean_dec(v_i_244_);
v_res_253_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__1(v_as_242_, v_sz_boxed_251_, v_i_boxed_252_, v_b_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_);
lean_dec(v___y_249_);
lean_dec_ref(v___y_248_);
lean_dec(v___y_247_);
lean_dec_ref(v___y_246_);
lean_dec_ref(v_as_242_);
return v_res_253_;
}
}
static lean_object* _init_l_Lean_MVarId_revert___lam__0___closed__0(void){
_start:
{
lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_254_ = lean_box(0);
v___x_255_ = lean_unsigned_to_nat(16u);
v___x_256_ = lean_mk_array(v___x_255_, v___x_254_);
return v___x_256_;
}
}
static lean_object* _init_l_Lean_MVarId_revert___lam__0___closed__2(void){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_258_ = ((lean_object*)(l_Lean_MVarId_revert___lam__0___closed__1));
v___x_259_ = l_Lean_stringToMessageData(v___x_258_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revert___lam__0(lean_object* v_fvarIds_260_, uint8_t v_preserveOrder_261_, lean_object* v___x_262_, lean_object* v_mvarId_263_, lean_object* v___x_264_, uint8_t v_clearAuxDeclsInsteadOfRevert_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_){
_start:
{
lean_object* v___y_272_; lean_object* v___y_273_; lean_object* v___y_274_; uint8_t v___y_275_; size_t v___y_276_; lean_object* v_a_277_; lean_object* v___x_492_; 
lean_inc(v_mvarId_263_);
v___x_492_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_263_, v___x_264_, v___y_266_, v___y_267_, v___y_268_, v___y_269_);
if (lean_obj_tag(v___x_492_) == 0)
{
lean_dec_ref_known(v___x_492_, 1);
if (v_clearAuxDeclsInsteadOfRevert_265_ == 0)
{
lean_object* v___x_493_; size_t v_sz_494_; size_t v___x_495_; lean_object* v___x_496_; 
v___x_493_ = lean_box(0);
v_sz_494_ = lean_array_size(v_fvarIds_260_);
v___x_495_ = ((size_t)0ULL);
v___x_496_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4(v_fvarIds_260_, v_sz_494_, v___x_495_, v___x_493_, v___y_266_, v___y_267_, v___y_268_, v___y_269_);
if (lean_obj_tag(v___x_496_) == 0)
{
lean_dec_ref_known(v___x_496_, 1);
goto v___jp_326_;
}
else
{
lean_object* v_a_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_504_; 
lean_dec(v_mvarId_263_);
lean_dec(v___x_262_);
lean_dec_ref(v_fvarIds_260_);
v_a_497_ = lean_ctor_get(v___x_496_, 0);
v_isSharedCheck_504_ = !lean_is_exclusive(v___x_496_);
if (v_isSharedCheck_504_ == 0)
{
v___x_499_ = v___x_496_;
v_isShared_500_ = v_isSharedCheck_504_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_a_497_);
lean_dec(v___x_496_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_504_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_502_; 
if (v_isShared_500_ == 0)
{
v___x_502_ = v___x_499_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_503_; 
v_reuseFailAlloc_503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_503_, 0, v_a_497_);
v___x_502_ = v_reuseFailAlloc_503_;
goto v_reusejp_501_;
}
v_reusejp_501_:
{
return v___x_502_;
}
}
}
}
else
{
goto v___jp_326_;
}
}
else
{
lean_object* v_a_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_512_; 
lean_dec(v_mvarId_263_);
lean_dec(v___x_262_);
lean_dec_ref(v_fvarIds_260_);
v_a_505_ = lean_ctor_get(v___x_492_, 0);
v_isSharedCheck_512_ = !lean_is_exclusive(v___x_492_);
if (v_isSharedCheck_512_ == 0)
{
v___x_507_ = v___x_492_;
v_isShared_508_ = v_isSharedCheck_512_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_a_505_);
lean_dec(v___x_492_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_512_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v___x_510_; 
if (v_isShared_508_ == 0)
{
v___x_510_ = v___x_507_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v_a_505_);
v___x_510_ = v_reuseFailAlloc_511_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
return v___x_510_;
}
}
}
v___jp_271_:
{
lean_object* v___x_278_; 
v___x_278_ = l_Lean_MVarId_setKind___redArg(v___y_274_, v___y_275_, v___y_273_);
if (lean_obj_tag(v___x_278_) == 0)
{
lean_object* v_fst_279_; lean_object* v_snd_280_; lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_317_; 
lean_dec_ref_known(v___x_278_, 1);
v_fst_279_ = lean_ctor_get(v_a_277_, 0);
v_snd_280_ = lean_ctor_get(v_a_277_, 1);
v_isSharedCheck_317_ = !lean_is_exclusive(v_a_277_);
if (v_isSharedCheck_317_ == 0)
{
v___x_282_ = v_a_277_;
v_isShared_283_ = v_isSharedCheck_317_;
goto v_resetjp_281_;
}
else
{
lean_inc(v_snd_280_);
lean_inc(v_fst_279_);
lean_dec(v_a_277_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_317_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_284_ = l_Lean_Expr_getAppFn(v_fst_279_);
lean_dec(v_fst_279_);
v___x_285_ = l_Lean_Expr_mvarId_x21(v___x_284_);
lean_dec_ref(v___x_284_);
lean_inc(v___x_285_);
v___x_286_ = l_Lean_MVarId_setKind___redArg(v___x_285_, v___y_275_, v___y_273_);
if (lean_obj_tag(v___x_286_) == 0)
{
lean_object* v___x_287_; 
lean_dec_ref_known(v___x_286_, 1);
lean_inc(v___x_285_);
v___x_287_ = l_Lean_MVarId_setTag___redArg(v___x_285_, v___y_272_, v___y_273_);
if (lean_obj_tag(v___x_287_) == 0)
{
lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_299_; 
v_isSharedCheck_299_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_299_ == 0)
{
lean_object* v_unused_300_; 
v_unused_300_ = lean_ctor_get(v___x_287_, 0);
lean_dec(v_unused_300_);
v___x_289_ = v___x_287_;
v_isShared_290_ = v_isSharedCheck_299_;
goto v_resetjp_288_;
}
else
{
lean_dec(v___x_287_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_299_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
size_t v_sz_291_; lean_object* v___x_292_; lean_object* v___x_294_; 
v_sz_291_ = lean_array_size(v_snd_280_);
v___x_292_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__2(v_sz_291_, v___y_276_, v_snd_280_);
if (v_isShared_283_ == 0)
{
lean_ctor_set(v___x_282_, 1, v___x_285_);
lean_ctor_set(v___x_282_, 0, v___x_292_);
v___x_294_ = v___x_282_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v___x_292_);
lean_ctor_set(v_reuseFailAlloc_298_, 1, v___x_285_);
v___x_294_ = v_reuseFailAlloc_298_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
lean_object* v___x_296_; 
if (v_isShared_290_ == 0)
{
lean_ctor_set(v___x_289_, 0, v___x_294_);
v___x_296_ = v___x_289_;
goto v_reusejp_295_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v___x_294_);
v___x_296_ = v_reuseFailAlloc_297_;
goto v_reusejp_295_;
}
v_reusejp_295_:
{
return v___x_296_;
}
}
}
}
else
{
lean_object* v_a_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_308_; 
lean_dec(v___x_285_);
lean_del_object(v___x_282_);
lean_dec(v_snd_280_);
v_a_301_ = lean_ctor_get(v___x_287_, 0);
v_isSharedCheck_308_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_308_ == 0)
{
v___x_303_ = v___x_287_;
v_isShared_304_ = v_isSharedCheck_308_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_a_301_);
lean_dec(v___x_287_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_308_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_306_; 
if (v_isShared_304_ == 0)
{
v___x_306_ = v___x_303_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v_a_301_);
v___x_306_ = v_reuseFailAlloc_307_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
return v___x_306_;
}
}
}
}
else
{
lean_object* v_a_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_316_; 
lean_dec(v___x_285_);
lean_del_object(v___x_282_);
lean_dec(v_snd_280_);
lean_dec(v___y_272_);
v_a_309_ = lean_ctor_get(v___x_286_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_316_ == 0)
{
v___x_311_ = v___x_286_;
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_a_309_);
lean_dec(v___x_286_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_314_; 
if (v_isShared_312_ == 0)
{
v___x_314_ = v___x_311_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_a_309_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
}
}
else
{
lean_object* v_a_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_325_; 
lean_dec_ref(v_a_277_);
lean_dec(v___y_272_);
v_a_318_ = lean_ctor_get(v___x_278_, 0);
v_isSharedCheck_325_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_325_ == 0)
{
v___x_320_ = v___x_278_;
v_isShared_321_ = v_isSharedCheck_325_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_a_318_);
lean_dec(v___x_278_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_325_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
lean_object* v___x_323_; 
if (v_isShared_321_ == 0)
{
v___x_323_ = v___x_320_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v_a_318_);
v___x_323_ = v_reuseFailAlloc_324_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
return v___x_323_;
}
}
}
}
v___jp_326_:
{
size_t v_sz_327_; size_t v___x_328_; lean_object* v___x_329_; uint8_t v___x_330_; lean_object* v___x_331_; 
v_sz_327_ = lean_array_size(v_fvarIds_260_);
v___x_328_ = ((size_t)0ULL);
v___x_329_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__0(v_sz_327_, v___x_328_, v_fvarIds_260_);
v___x_330_ = 1;
v___x_331_ = l_Lean_Meta_collectForwardDeps(v___x_329_, v_preserveOrder_261_, v___x_330_, v___y_266_, v___y_267_, v___y_268_, v___y_269_);
if (lean_obj_tag(v___x_331_) == 0)
{
lean_object* v_a_332_; lean_object* v___x_333_; lean_object* v___x_334_; size_t v_sz_335_; lean_object* v___x_336_; 
v_a_332_ = lean_ctor_get(v___x_331_, 0);
lean_inc(v_a_332_);
lean_dec_ref_known(v___x_331_, 1);
v___x_333_ = lean_mk_empty_array_with_capacity(v___x_262_);
v___x_334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_334_, 0, v_mvarId_263_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
v_sz_335_ = lean_array_size(v_a_332_);
v___x_336_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__1(v_a_332_, v_sz_335_, v___x_328_, v___x_334_, v___y_266_, v___y_267_, v___y_268_, v___y_269_);
lean_dec(v_a_332_);
if (lean_obj_tag(v___x_336_) == 0)
{
lean_object* v_a_337_; lean_object* v_fst_338_; lean_object* v_snd_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_475_; 
v_a_337_ = lean_ctor_get(v___x_336_, 0);
lean_inc(v_a_337_);
lean_dec_ref_known(v___x_336_, 1);
v_fst_338_ = lean_ctor_get(v_a_337_, 0);
v_snd_339_ = lean_ctor_get(v_a_337_, 1);
v_isSharedCheck_475_ = !lean_is_exclusive(v_a_337_);
if (v_isSharedCheck_475_ == 0)
{
v___x_341_ = v_a_337_;
v_isShared_342_ = v_isSharedCheck_475_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_snd_339_);
lean_inc(v_fst_338_);
lean_dec(v_a_337_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_475_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
lean_object* v___x_343_; 
lean_inc(v_fst_338_);
v___x_343_ = l_Lean_MVarId_getTag(v_fst_338_, v___y_266_, v___y_267_, v___y_268_, v___y_269_);
if (lean_obj_tag(v___x_343_) == 0)
{
lean_object* v_a_344_; uint8_t v___x_345_; lean_object* v___x_346_; 
v_a_344_ = lean_ctor_get(v___x_343_, 0);
lean_inc(v_a_344_);
lean_dec_ref_known(v___x_343_, 1);
v___x_345_ = 0;
lean_inc(v_fst_338_);
v___x_346_ = l_Lean_MVarId_setKind___redArg(v_fst_338_, v___x_345_, v___y_267_);
if (lean_obj_tag(v___x_346_) == 0)
{
lean_object* v_lctx_347_; uint8_t v___x_348_; lean_object* v___x_349_; lean_object* v_mctx_350_; lean_object* v___x_351_; lean_object* v_ngen_352_; lean_object* v___x_353_; lean_object* v_toCold_354_; lean_object* v_quotContext_355_; lean_object* v_nextMacroScope_356_; lean_object* v___x_358_; 
lean_dec_ref_known(v___x_346_, 1);
v_lctx_347_ = lean_ctor_get(v___y_266_, 2);
v___x_348_ = 2;
v___x_349_ = lean_st_ref_get(v___y_267_);
v_mctx_350_ = lean_ctor_get(v___x_349_, 0);
lean_inc_ref(v_mctx_350_);
lean_dec(v___x_349_);
v___x_351_ = lean_st_ref_get(v___y_269_);
v_ngen_352_ = lean_ctor_get(v___x_351_, 2);
lean_inc_ref(v_ngen_352_);
lean_dec(v___x_351_);
v___x_353_ = lean_st_ref_get(v___y_269_);
v_toCold_354_ = lean_ctor_get(v___y_268_, 0);
v_quotContext_355_ = lean_ctor_get(v_toCold_354_, 8);
v_nextMacroScope_356_ = lean_ctor_get(v___x_353_, 1);
lean_inc(v_nextMacroScope_356_);
lean_dec(v___x_353_);
lean_inc_ref(v_lctx_347_);
lean_inc(v_quotContext_355_);
if (v_isShared_342_ == 0)
{
lean_ctor_set(v___x_341_, 1, v_lctx_347_);
lean_ctor_set(v___x_341_, 0, v_quotContext_355_);
v___x_358_ = v___x_341_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v_quotContext_355_);
lean_ctor_set(v_reuseFailAlloc_458_, 1, v_lctx_347_);
v___x_358_ = v_reuseFailAlloc_458_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_359_ = lean_obj_once(&l_Lean_MVarId_revert___lam__0___closed__0, &l_Lean_MVarId_revert___lam__0___closed__0_once, _init_l_Lean_MVarId_revert___lam__0___closed__0);
v___x_360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_360_, 0, v___x_262_);
lean_ctor_set(v___x_360_, 1, v___x_359_);
v___x_361_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_361_, 0, v_mctx_350_);
lean_ctor_set(v___x_361_, 1, v_nextMacroScope_356_);
lean_ctor_set(v___x_361_, 2, v_ngen_352_);
lean_ctor_set(v___x_361_, 3, v___x_360_);
lean_inc(v_fst_338_);
v___x_362_ = l_Lean_MetavarContext_revert(v_snd_339_, v_fst_338_, v_preserveOrder_261_, v___x_358_, v___x_361_);
lean_dec_ref(v___x_358_);
lean_dec(v_snd_339_);
if (lean_obj_tag(v___x_362_) == 0)
{
lean_object* v_a_363_; lean_object* v_a_364_; lean_object* v_mctx_365_; lean_object* v_nextMacroScope_366_; lean_object* v_ngen_367_; lean_object* v___x_368_; lean_object* v_cache_369_; lean_object* v_zetaDeltaFVarIds_370_; lean_object* v_postponed_371_; lean_object* v_diag_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_399_; 
v_a_363_ = lean_ctor_get(v___x_362_, 1);
lean_inc(v_a_363_);
v_a_364_ = lean_ctor_get(v___x_362_, 0);
lean_inc(v_a_364_);
lean_dec_ref_known(v___x_362_, 2);
v_mctx_365_ = lean_ctor_get(v_a_363_, 0);
lean_inc_ref(v_mctx_365_);
v_nextMacroScope_366_ = lean_ctor_get(v_a_363_, 1);
lean_inc(v_nextMacroScope_366_);
v_ngen_367_ = lean_ctor_get(v_a_363_, 2);
lean_inc_ref(v_ngen_367_);
lean_dec(v_a_363_);
v___x_368_ = lean_st_ref_take(v___y_267_);
v_cache_369_ = lean_ctor_get(v___x_368_, 1);
v_zetaDeltaFVarIds_370_ = lean_ctor_get(v___x_368_, 2);
v_postponed_371_ = lean_ctor_get(v___x_368_, 3);
v_diag_372_ = lean_ctor_get(v___x_368_, 4);
v_isSharedCheck_399_ = !lean_is_exclusive(v___x_368_);
if (v_isSharedCheck_399_ == 0)
{
lean_object* v_unused_400_; 
v_unused_400_ = lean_ctor_get(v___x_368_, 0);
lean_dec(v_unused_400_);
v___x_374_ = v___x_368_;
v_isShared_375_ = v_isSharedCheck_399_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_diag_372_);
lean_inc(v_postponed_371_);
lean_inc(v_zetaDeltaFVarIds_370_);
lean_inc(v_cache_369_);
lean_dec(v___x_368_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_399_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_377_; 
if (v_isShared_375_ == 0)
{
lean_ctor_set(v___x_374_, 0, v_mctx_365_);
v___x_377_ = v___x_374_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_mctx_365_);
lean_ctor_set(v_reuseFailAlloc_398_, 1, v_cache_369_);
lean_ctor_set(v_reuseFailAlloc_398_, 2, v_zetaDeltaFVarIds_370_);
lean_ctor_set(v_reuseFailAlloc_398_, 3, v_postponed_371_);
lean_ctor_set(v_reuseFailAlloc_398_, 4, v_diag_372_);
v___x_377_ = v_reuseFailAlloc_398_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v_env_380_; lean_object* v_auxDeclNGen_381_; lean_object* v_traceState_382_; lean_object* v_cache_383_; lean_object* v_recordedDeps_384_; lean_object* v_messages_385_; lean_object* v_infoState_386_; lean_object* v_snapshotTasks_387_; lean_object* v___x_389_; uint8_t v_isShared_390_; uint8_t v_isSharedCheck_395_; 
v___x_378_ = lean_st_ref_put(v___y_267_, v___x_377_);
v___x_379_ = lean_st_ref_take(v___y_269_);
v_env_380_ = lean_ctor_get(v___x_379_, 0);
v_auxDeclNGen_381_ = lean_ctor_get(v___x_379_, 3);
v_traceState_382_ = lean_ctor_get(v___x_379_, 4);
v_cache_383_ = lean_ctor_get(v___x_379_, 5);
v_recordedDeps_384_ = lean_ctor_get(v___x_379_, 6);
v_messages_385_ = lean_ctor_get(v___x_379_, 7);
v_infoState_386_ = lean_ctor_get(v___x_379_, 8);
v_snapshotTasks_387_ = lean_ctor_get(v___x_379_, 9);
v_isSharedCheck_395_ = !lean_is_exclusive(v___x_379_);
if (v_isSharedCheck_395_ == 0)
{
lean_object* v_unused_396_; lean_object* v_unused_397_; 
v_unused_396_ = lean_ctor_get(v___x_379_, 2);
lean_dec(v_unused_396_);
v_unused_397_ = lean_ctor_get(v___x_379_, 1);
lean_dec(v_unused_397_);
v___x_389_ = v___x_379_;
v_isShared_390_ = v_isSharedCheck_395_;
goto v_resetjp_388_;
}
else
{
lean_inc(v_snapshotTasks_387_);
lean_inc(v_infoState_386_);
lean_inc(v_messages_385_);
lean_inc(v_recordedDeps_384_);
lean_inc(v_cache_383_);
lean_inc(v_traceState_382_);
lean_inc(v_auxDeclNGen_381_);
lean_inc(v_env_380_);
lean_dec(v___x_379_);
v___x_389_ = lean_box(0);
v_isShared_390_ = v_isSharedCheck_395_;
goto v_resetjp_388_;
}
v_resetjp_388_:
{
lean_object* v___x_392_; 
if (v_isShared_390_ == 0)
{
lean_ctor_set(v___x_389_, 2, v_ngen_367_);
lean_ctor_set(v___x_389_, 1, v_nextMacroScope_366_);
v___x_392_ = v___x_389_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v_env_380_);
lean_ctor_set(v_reuseFailAlloc_394_, 1, v_nextMacroScope_366_);
lean_ctor_set(v_reuseFailAlloc_394_, 2, v_ngen_367_);
lean_ctor_set(v_reuseFailAlloc_394_, 3, v_auxDeclNGen_381_);
lean_ctor_set(v_reuseFailAlloc_394_, 4, v_traceState_382_);
lean_ctor_set(v_reuseFailAlloc_394_, 5, v_cache_383_);
lean_ctor_set(v_reuseFailAlloc_394_, 6, v_recordedDeps_384_);
lean_ctor_set(v_reuseFailAlloc_394_, 7, v_messages_385_);
lean_ctor_set(v_reuseFailAlloc_394_, 8, v_infoState_386_);
lean_ctor_set(v_reuseFailAlloc_394_, 9, v_snapshotTasks_387_);
v___x_392_ = v_reuseFailAlloc_394_;
goto v_reusejp_391_;
}
v_reusejp_391_:
{
lean_object* v___x_393_; 
v___x_393_ = lean_st_ref_put(v___y_269_, v___x_392_);
v___y_272_ = v_a_344_;
v___y_273_ = v___y_267_;
v___y_274_ = v_fst_338_;
v___y_275_ = v___x_348_;
v___y_276_ = v___x_328_;
v_a_277_ = v_a_364_;
goto v___jp_271_;
}
}
}
}
}
else
{
lean_object* v_a_401_; lean_object* v_mctx_402_; lean_object* v_nextMacroScope_403_; lean_object* v_ngen_404_; lean_object* v___x_405_; lean_object* v_cache_406_; lean_object* v_zetaDeltaFVarIds_407_; lean_object* v_postponed_408_; lean_object* v_diag_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_456_; 
lean_dec(v_a_344_);
v_a_401_ = lean_ctor_get(v___x_362_, 1);
lean_inc(v_a_401_);
lean_dec_ref_known(v___x_362_, 2);
v_mctx_402_ = lean_ctor_get(v_a_401_, 0);
lean_inc_ref(v_mctx_402_);
v_nextMacroScope_403_ = lean_ctor_get(v_a_401_, 1);
lean_inc(v_nextMacroScope_403_);
v_ngen_404_ = lean_ctor_get(v_a_401_, 2);
lean_inc_ref(v_ngen_404_);
lean_dec(v_a_401_);
v___x_405_ = lean_st_ref_take(v___y_267_);
v_cache_406_ = lean_ctor_get(v___x_405_, 1);
v_zetaDeltaFVarIds_407_ = lean_ctor_get(v___x_405_, 2);
v_postponed_408_ = lean_ctor_get(v___x_405_, 3);
v_diag_409_ = lean_ctor_get(v___x_405_, 4);
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_405_);
if (v_isSharedCheck_456_ == 0)
{
lean_object* v_unused_457_; 
v_unused_457_ = lean_ctor_get(v___x_405_, 0);
lean_dec(v_unused_457_);
v___x_411_ = v___x_405_;
v_isShared_412_ = v_isSharedCheck_456_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_diag_409_);
lean_inc(v_postponed_408_);
lean_inc(v_zetaDeltaFVarIds_407_);
lean_inc(v_cache_406_);
lean_dec(v___x_405_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_456_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_414_; 
if (v_isShared_412_ == 0)
{
lean_ctor_set(v___x_411_, 0, v_mctx_402_);
v___x_414_ = v___x_411_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_mctx_402_);
lean_ctor_set(v_reuseFailAlloc_455_, 1, v_cache_406_);
lean_ctor_set(v_reuseFailAlloc_455_, 2, v_zetaDeltaFVarIds_407_);
lean_ctor_set(v_reuseFailAlloc_455_, 3, v_postponed_408_);
lean_ctor_set(v_reuseFailAlloc_455_, 4, v_diag_409_);
v___x_414_ = v_reuseFailAlloc_455_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v_env_417_; lean_object* v_auxDeclNGen_418_; lean_object* v_traceState_419_; lean_object* v_cache_420_; lean_object* v_recordedDeps_421_; lean_object* v_messages_422_; lean_object* v_infoState_423_; lean_object* v_snapshotTasks_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_452_; 
v___x_415_ = lean_st_ref_put(v___y_267_, v___x_414_);
v___x_416_ = lean_st_ref_take(v___y_269_);
v_env_417_ = lean_ctor_get(v___x_416_, 0);
v_auxDeclNGen_418_ = lean_ctor_get(v___x_416_, 3);
v_traceState_419_ = lean_ctor_get(v___x_416_, 4);
v_cache_420_ = lean_ctor_get(v___x_416_, 5);
v_recordedDeps_421_ = lean_ctor_get(v___x_416_, 6);
v_messages_422_ = lean_ctor_get(v___x_416_, 7);
v_infoState_423_ = lean_ctor_get(v___x_416_, 8);
v_snapshotTasks_424_ = lean_ctor_get(v___x_416_, 9);
v_isSharedCheck_452_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_452_ == 0)
{
lean_object* v_unused_453_; lean_object* v_unused_454_; 
v_unused_453_ = lean_ctor_get(v___x_416_, 2);
lean_dec(v_unused_453_);
v_unused_454_ = lean_ctor_get(v___x_416_, 1);
lean_dec(v_unused_454_);
v___x_426_ = v___x_416_;
v_isShared_427_ = v_isSharedCheck_452_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_snapshotTasks_424_);
lean_inc(v_infoState_423_);
lean_inc(v_messages_422_);
lean_inc(v_recordedDeps_421_);
lean_inc(v_cache_420_);
lean_inc(v_traceState_419_);
lean_inc(v_auxDeclNGen_418_);
lean_inc(v_env_417_);
lean_dec(v___x_416_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_452_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
lean_object* v___x_429_; 
if (v_isShared_427_ == 0)
{
lean_ctor_set(v___x_426_, 2, v_ngen_404_);
lean_ctor_set(v___x_426_, 1, v_nextMacroScope_403_);
v___x_429_ = v___x_426_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_env_417_);
lean_ctor_set(v_reuseFailAlloc_451_, 1, v_nextMacroScope_403_);
lean_ctor_set(v_reuseFailAlloc_451_, 2, v_ngen_404_);
lean_ctor_set(v_reuseFailAlloc_451_, 3, v_auxDeclNGen_418_);
lean_ctor_set(v_reuseFailAlloc_451_, 4, v_traceState_419_);
lean_ctor_set(v_reuseFailAlloc_451_, 5, v_cache_420_);
lean_ctor_set(v_reuseFailAlloc_451_, 6, v_recordedDeps_421_);
lean_ctor_set(v_reuseFailAlloc_451_, 7, v_messages_422_);
lean_ctor_set(v_reuseFailAlloc_451_, 8, v_infoState_423_);
lean_ctor_set(v_reuseFailAlloc_451_, 9, v_snapshotTasks_424_);
v___x_429_ = v_reuseFailAlloc_451_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v_a_433_; lean_object* v___x_434_; 
v___x_430_ = lean_st_ref_put(v___y_269_, v___x_429_);
v___x_431_ = lean_obj_once(&l_Lean_MVarId_revert___lam__0___closed__2, &l_Lean_MVarId_revert___lam__0___closed__2_once, _init_l_Lean_MVarId_revert___lam__0___closed__2);
v___x_432_ = l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___redArg(v___x_431_, v___y_266_, v___y_267_, v___y_268_, v___y_269_);
v_a_433_ = lean_ctor_get(v___x_432_, 0);
lean_inc(v_a_433_);
lean_dec_ref(v___x_432_);
v___x_434_ = l_Lean_MVarId_setKind___redArg(v_fst_338_, v___x_348_, v___y_267_);
if (lean_obj_tag(v___x_434_) == 0)
{
lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_441_; 
v_isSharedCheck_441_ = !lean_is_exclusive(v___x_434_);
if (v_isSharedCheck_441_ == 0)
{
lean_object* v_unused_442_; 
v_unused_442_ = lean_ctor_get(v___x_434_, 0);
lean_dec(v_unused_442_);
v___x_436_ = v___x_434_;
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
else
{
lean_dec(v___x_434_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_439_; 
if (v_isShared_437_ == 0)
{
lean_ctor_set_tag(v___x_436_, 1);
lean_ctor_set(v___x_436_, 0, v_a_433_);
v___x_439_ = v___x_436_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_a_433_);
v___x_439_ = v_reuseFailAlloc_440_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
return v___x_439_;
}
}
}
else
{
lean_object* v_a_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_450_; 
lean_dec(v_a_433_);
v_a_443_ = lean_ctor_get(v___x_434_, 0);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_434_);
if (v_isSharedCheck_450_ == 0)
{
v___x_445_ = v___x_434_;
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_a_443_);
lean_dec(v___x_434_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___x_448_; 
if (v_isShared_446_ == 0)
{
v___x_448_ = v___x_445_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_a_443_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
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
lean_object* v_a_459_; lean_object* v___x_461_; uint8_t v_isShared_462_; uint8_t v_isSharedCheck_466_; 
lean_dec(v_a_344_);
lean_del_object(v___x_341_);
lean_dec(v_snd_339_);
lean_dec(v_fst_338_);
lean_dec(v___x_262_);
v_a_459_ = lean_ctor_get(v___x_346_, 0);
v_isSharedCheck_466_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_466_ == 0)
{
v___x_461_ = v___x_346_;
v_isShared_462_ = v_isSharedCheck_466_;
goto v_resetjp_460_;
}
else
{
lean_inc(v_a_459_);
lean_dec(v___x_346_);
v___x_461_ = lean_box(0);
v_isShared_462_ = v_isSharedCheck_466_;
goto v_resetjp_460_;
}
v_resetjp_460_:
{
lean_object* v___x_464_; 
if (v_isShared_462_ == 0)
{
v___x_464_ = v___x_461_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v_a_459_);
v___x_464_ = v_reuseFailAlloc_465_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
return v___x_464_;
}
}
}
}
else
{
lean_object* v_a_467_; lean_object* v___x_469_; uint8_t v_isShared_470_; uint8_t v_isSharedCheck_474_; 
lean_del_object(v___x_341_);
lean_dec(v_snd_339_);
lean_dec(v_fst_338_);
lean_dec(v___x_262_);
v_a_467_ = lean_ctor_get(v___x_343_, 0);
v_isSharedCheck_474_ = !lean_is_exclusive(v___x_343_);
if (v_isSharedCheck_474_ == 0)
{
v___x_469_ = v___x_343_;
v_isShared_470_ = v_isSharedCheck_474_;
goto v_resetjp_468_;
}
else
{
lean_inc(v_a_467_);
lean_dec(v___x_343_);
v___x_469_ = lean_box(0);
v_isShared_470_ = v_isSharedCheck_474_;
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
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v_a_467_);
v___x_472_ = v_reuseFailAlloc_473_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
return v___x_472_;
}
}
}
}
}
else
{
lean_object* v_a_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_483_; 
lean_dec(v___x_262_);
v_a_476_ = lean_ctor_get(v___x_336_, 0);
v_isSharedCheck_483_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_483_ == 0)
{
v___x_478_ = v___x_336_;
v_isShared_479_ = v_isSharedCheck_483_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_a_476_);
lean_dec(v___x_336_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_483_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
lean_object* v___x_481_; 
if (v_isShared_479_ == 0)
{
v___x_481_ = v___x_478_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v_a_476_);
v___x_481_ = v_reuseFailAlloc_482_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
return v___x_481_;
}
}
}
}
else
{
lean_object* v_a_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_491_; 
lean_dec(v_mvarId_263_);
lean_dec(v___x_262_);
v_a_484_ = lean_ctor_get(v___x_331_, 0);
v_isSharedCheck_491_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_491_ == 0)
{
v___x_486_ = v___x_331_;
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_a_484_);
lean_dec(v___x_331_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v___x_489_; 
if (v_isShared_487_ == 0)
{
v___x_489_ = v___x_486_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v_a_484_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
return v___x_489_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revert___lam__0___boxed(lean_object* v_fvarIds_513_, lean_object* v_preserveOrder_514_, lean_object* v___x_515_, lean_object* v_mvarId_516_, lean_object* v___x_517_, lean_object* v_clearAuxDeclsInsteadOfRevert_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_){
_start:
{
uint8_t v_preserveOrder_boxed_524_; uint8_t v_clearAuxDeclsInsteadOfRevert_boxed_525_; lean_object* v_res_526_; 
v_preserveOrder_boxed_524_ = lean_unbox(v_preserveOrder_514_);
v_clearAuxDeclsInsteadOfRevert_boxed_525_ = lean_unbox(v_clearAuxDeclsInsteadOfRevert_518_);
v_res_526_ = l_Lean_MVarId_revert___lam__0(v_fvarIds_513_, v_preserveOrder_boxed_524_, v___x_515_, v_mvarId_516_, v___x_517_, v_clearAuxDeclsInsteadOfRevert_boxed_525_, v___y_519_, v___y_520_, v___y_521_, v___y_522_);
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revert(lean_object* v_mvarId_532_, lean_object* v_fvarIds_533_, uint8_t v_preserveOrder_534_, uint8_t v_clearAuxDeclsInsteadOfRevert_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_){
_start:
{
lean_object* v___x_541_; lean_object* v___x_542_; uint8_t v___x_543_; 
v___x_541_ = lean_array_get_size(v_fvarIds_533_);
v___x_542_ = lean_unsigned_to_nat(0u);
v___x_543_ = lean_nat_dec_eq(v___x_541_, v___x_542_);
if (v___x_543_ == 0)
{
lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___f_547_; lean_object* v___x_548_; 
v___x_544_ = ((lean_object*)(l_Lean_MVarId_revert___closed__1));
v___x_545_ = lean_box(v_preserveOrder_534_);
v___x_546_ = lean_box(v_clearAuxDeclsInsteadOfRevert_535_);
lean_inc(v_mvarId_532_);
v___f_547_ = lean_alloc_closure((void*)(l_Lean_MVarId_revert___lam__0___boxed), 11, 6);
lean_closure_set(v___f_547_, 0, v_fvarIds_533_);
lean_closure_set(v___f_547_, 1, v___x_545_);
lean_closure_set(v___f_547_, 2, v___x_542_);
lean_closure_set(v___f_547_, 3, v_mvarId_532_);
lean_closure_set(v___f_547_, 4, v___x_544_);
lean_closure_set(v___f_547_, 5, v___x_546_);
v___x_548_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg(v_mvarId_532_, v___f_547_, v_a_536_, v_a_537_, v_a_538_, v_a_539_);
return v___x_548_;
}
else
{
lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
lean_dec_ref(v_fvarIds_533_);
v___x_549_ = ((lean_object*)(l_Lean_MVarId_revert___closed__2));
v___x_550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_550_, 0, v___x_549_);
lean_ctor_set(v___x_550_, 1, v_mvarId_532_);
v___x_551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_551_, 0, v___x_550_);
return v___x_551_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revert___boxed(lean_object* v_mvarId_552_, lean_object* v_fvarIds_553_, lean_object* v_preserveOrder_554_, lean_object* v_clearAuxDeclsInsteadOfRevert_555_, lean_object* v_a_556_, lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_, lean_object* v_a_560_){
_start:
{
uint8_t v_preserveOrder_boxed_561_; uint8_t v_clearAuxDeclsInsteadOfRevert_boxed_562_; lean_object* v_res_563_; 
v_preserveOrder_boxed_561_ = lean_unbox(v_preserveOrder_554_);
v_clearAuxDeclsInsteadOfRevert_boxed_562_ = lean_unbox(v_clearAuxDeclsInsteadOfRevert_555_);
v_res_563_ = l_Lean_MVarId_revert(v_mvarId_552_, v_fvarIds_553_, v_preserveOrder_boxed_561_, v_clearAuxDeclsInsteadOfRevert_boxed_562_, v_a_556_, v_a_557_, v_a_558_, v_a_559_);
lean_dec(v_a_559_);
lean_dec_ref(v_a_558_);
lean_dec(v_a_557_);
lean_dec_ref(v_a_556_);
return v_res_563_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_revert_spec__3(lean_object* v_00_u03b1_564_, lean_object* v_msg_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_){
_start:
{
lean_object* v___x_571_; 
v___x_571_ = l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___redArg(v_msg_565_, v___y_566_, v___y_567_, v___y_568_, v___y_569_);
return v___x_571_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___boxed(lean_object* v_00_u03b1_572_, lean_object* v_msg_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l_Lean_throwError___at___00Lean_MVarId_revert_spec__3(v_00_u03b1_572_, v_msg_573_, v___y_574_, v___y_575_, v___y_576_, v___y_577_);
lean_dec(v___y_577_);
lean_dec_ref(v___y_576_);
lean_dec(v___y_575_);
lean_dec_ref(v___y_574_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(lean_object* v_as_580_, size_t v_i_581_, size_t v_stop_582_, lean_object* v_b_583_){
_start:
{
lean_object* v___y_585_; uint8_t v___x_589_; 
v___x_589_ = lean_usize_dec_eq(v_i_581_, v_stop_582_);
if (v___x_589_ == 0)
{
lean_object* v___x_590_; 
v___x_590_ = lean_array_uget_borrowed(v_as_580_, v_i_581_);
if (lean_obj_tag(v___x_590_) == 0)
{
v___y_585_ = v_b_583_;
goto v___jp_584_;
}
else
{
lean_object* v_val_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
v_val_591_ = lean_ctor_get(v___x_590_, 0);
v___x_592_ = l_Lean_LocalDecl_fvarId(v_val_591_);
v___x_593_ = lean_array_push(v_b_583_, v___x_592_);
v___y_585_ = v___x_593_;
goto v___jp_584_;
}
}
else
{
return v_b_583_;
}
v___jp_584_:
{
size_t v___x_586_; size_t v___x_587_; 
v___x_586_ = ((size_t)1ULL);
v___x_587_ = lean_usize_add(v_i_581_, v___x_586_);
v_i_581_ = v___x_587_;
v_b_583_ = v___y_585_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2___boxed(lean_object* v_as_594_, lean_object* v_i_595_, lean_object* v_stop_596_, lean_object* v_b_597_){
_start:
{
size_t v_i_boxed_598_; size_t v_stop_boxed_599_; lean_object* v_res_600_; 
v_i_boxed_598_ = lean_unbox_usize(v_i_595_);
lean_dec(v_i_595_);
v_stop_boxed_599_ = lean_unbox_usize(v_stop_596_);
lean_dec(v_stop_596_);
v_res_600_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(v_as_594_, v_i_boxed_598_, v_stop_boxed_599_, v_b_597_);
lean_dec_ref(v_as_594_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__3(lean_object* v_x_601_, lean_object* v_x_602_){
_start:
{
if (lean_obj_tag(v_x_601_) == 0)
{
lean_object* v_cs_603_; lean_object* v___x_604_; lean_object* v___x_605_; uint8_t v___x_606_; 
v_cs_603_ = lean_ctor_get(v_x_601_, 0);
v___x_604_ = lean_unsigned_to_nat(0u);
v___x_605_ = lean_array_get_size(v_cs_603_);
v___x_606_ = lean_nat_dec_lt(v___x_604_, v___x_605_);
if (v___x_606_ == 0)
{
return v_x_602_;
}
else
{
size_t v___x_607_; size_t v___x_608_; lean_object* v___x_609_; 
v___x_607_ = ((size_t)0ULL);
v___x_608_ = lean_usize_of_nat(v___x_605_);
v___x_609_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1_spec__2(v_cs_603_, v___x_607_, v___x_608_, v_x_602_);
return v___x_609_;
}
}
else
{
lean_object* v_vs_610_; lean_object* v___x_611_; lean_object* v___x_612_; uint8_t v___x_613_; 
v_vs_610_ = lean_ctor_get(v_x_601_, 0);
v___x_611_ = lean_unsigned_to_nat(0u);
v___x_612_ = lean_array_get_size(v_vs_610_);
v___x_613_ = lean_nat_dec_lt(v___x_611_, v___x_612_);
if (v___x_613_ == 0)
{
return v_x_602_;
}
else
{
size_t v___x_614_; size_t v___x_615_; lean_object* v___x_616_; 
v___x_614_ = ((size_t)0ULL);
v___x_615_ = lean_usize_of_nat(v___x_612_);
v___x_616_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(v_vs_610_, v___x_614_, v___x_615_, v_x_602_);
return v___x_616_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1_spec__2(lean_object* v_as_617_, size_t v_i_618_, size_t v_stop_619_, lean_object* v_b_620_){
_start:
{
uint8_t v___x_621_; 
v___x_621_ = lean_usize_dec_eq(v_i_618_, v_stop_619_);
if (v___x_621_ == 0)
{
lean_object* v___x_622_; lean_object* v___x_623_; size_t v___x_624_; size_t v___x_625_; 
v___x_622_ = lean_array_uget_borrowed(v_as_617_, v_i_618_);
v___x_623_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__3(v___x_622_, v_b_620_);
v___x_624_ = ((size_t)1ULL);
v___x_625_ = lean_usize_add(v_i_618_, v___x_624_);
v_i_618_ = v___x_625_;
v_b_620_ = v___x_623_;
goto _start;
}
else
{
return v_b_620_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_as_627_, lean_object* v_i_628_, lean_object* v_stop_629_, lean_object* v_b_630_){
_start:
{
size_t v_i_boxed_631_; size_t v_stop_boxed_632_; lean_object* v_res_633_; 
v_i_boxed_631_ = lean_unbox_usize(v_i_628_);
lean_dec(v_i_628_);
v_stop_boxed_632_ = lean_unbox_usize(v_stop_629_);
lean_dec(v_stop_629_);
v_res_633_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1_spec__2(v_as_627_, v_i_boxed_631_, v_stop_boxed_632_, v_b_630_);
lean_dec_ref(v_as_627_);
return v_res_633_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__3___boxed(lean_object* v_x_634_, lean_object* v_x_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__3(v_x_634_, v_x_635_);
lean_dec_ref(v_x_634_);
return v_res_636_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_637_; 
v___x_637_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_637_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1(lean_object* v_x_638_, size_t v_x_639_, size_t v_x_640_, lean_object* v_x_641_){
_start:
{
if (lean_obj_tag(v_x_638_) == 0)
{
lean_object* v_cs_642_; lean_object* v___x_643_; size_t v___x_644_; lean_object* v_j_645_; lean_object* v___x_646_; size_t v___x_647_; size_t v___x_648_; size_t v___x_649_; size_t v___x_650_; size_t v___x_651_; size_t v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; uint8_t v___x_657_; 
v_cs_642_ = lean_ctor_get(v_x_638_, 0);
v___x_643_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1___closed__0);
v___x_644_ = lean_usize_shift_right(v_x_639_, v_x_640_);
v_j_645_ = lean_usize_to_nat(v___x_644_);
v___x_646_ = lean_array_get_borrowed(v___x_643_, v_cs_642_, v_j_645_);
v___x_647_ = ((size_t)1ULL);
v___x_648_ = lean_usize_shift_left(v___x_647_, v_x_640_);
v___x_649_ = lean_usize_sub(v___x_648_, v___x_647_);
v___x_650_ = lean_usize_land(v_x_639_, v___x_649_);
v___x_651_ = ((size_t)5ULL);
v___x_652_ = lean_usize_sub(v_x_640_, v___x_651_);
v___x_653_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1(v___x_646_, v___x_650_, v___x_652_, v_x_641_);
v___x_654_ = lean_unsigned_to_nat(1u);
v___x_655_ = lean_nat_add(v_j_645_, v___x_654_);
lean_dec(v_j_645_);
v___x_656_ = lean_array_get_size(v_cs_642_);
v___x_657_ = lean_nat_dec_lt(v___x_655_, v___x_656_);
if (v___x_657_ == 0)
{
lean_dec(v___x_655_);
return v___x_653_;
}
else
{
size_t v___x_658_; size_t v___x_659_; lean_object* v___x_660_; 
v___x_658_ = lean_usize_of_nat(v___x_655_);
lean_dec(v___x_655_);
v___x_659_ = lean_usize_of_nat(v___x_656_);
v___x_660_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1_spec__2(v_cs_642_, v___x_658_, v___x_659_, v___x_653_);
return v___x_660_;
}
}
else
{
lean_object* v_vs_661_; lean_object* v___x_662_; lean_object* v___x_663_; uint8_t v___x_664_; 
v_vs_661_ = lean_ctor_get(v_x_638_, 0);
v___x_662_ = lean_usize_to_nat(v_x_639_);
v___x_663_ = lean_array_get_size(v_vs_661_);
v___x_664_ = lean_nat_dec_lt(v___x_662_, v___x_663_);
if (v___x_664_ == 0)
{
lean_dec(v___x_662_);
return v_x_641_;
}
else
{
size_t v___x_665_; size_t v___x_666_; lean_object* v___x_667_; 
v___x_665_ = lean_usize_of_nat(v___x_662_);
lean_dec(v___x_662_);
v___x_666_ = lean_usize_of_nat(v___x_663_);
v___x_667_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(v_vs_661_, v___x_665_, v___x_666_, v_x_641_);
return v___x_667_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1___boxed(lean_object* v_x_668_, lean_object* v_x_669_, lean_object* v_x_670_, lean_object* v_x_671_){
_start:
{
size_t v_x_1378__boxed_672_; size_t v_x_1379__boxed_673_; lean_object* v_res_674_; 
v_x_1378__boxed_672_ = lean_unbox_usize(v_x_669_);
lean_dec(v_x_669_);
v_x_1379__boxed_673_ = lean_unbox_usize(v_x_670_);
lean_dec(v_x_670_);
v_res_674_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1(v_x_668_, v_x_1378__boxed_672_, v_x_1379__boxed_673_, v_x_671_);
lean_dec_ref(v_x_668_);
return v_res_674_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0(lean_object* v_t_675_, lean_object* v_init_676_, lean_object* v_start_677_){
_start:
{
lean_object* v___x_678_; uint8_t v___x_679_; 
v___x_678_ = lean_unsigned_to_nat(0u);
v___x_679_ = lean_nat_dec_eq(v_start_677_, v___x_678_);
if (v___x_679_ == 0)
{
lean_object* v_root_680_; lean_object* v_tail_681_; size_t v_shift_682_; lean_object* v_tailOff_683_; uint8_t v___x_684_; 
v_root_680_ = lean_ctor_get(v_t_675_, 0);
v_tail_681_ = lean_ctor_get(v_t_675_, 1);
v_shift_682_ = lean_ctor_get_usize(v_t_675_, 4);
v_tailOff_683_ = lean_ctor_get(v_t_675_, 3);
v___x_684_ = lean_nat_dec_le(v_tailOff_683_, v_start_677_);
if (v___x_684_ == 0)
{
size_t v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; uint8_t v___x_688_; 
v___x_685_ = lean_usize_of_nat(v_start_677_);
v___x_686_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1(v_root_680_, v___x_685_, v_shift_682_, v_init_676_);
v___x_687_ = lean_array_get_size(v_tail_681_);
v___x_688_ = lean_nat_dec_lt(v___x_678_, v___x_687_);
if (v___x_688_ == 0)
{
return v___x_686_;
}
else
{
size_t v___x_689_; size_t v___x_690_; lean_object* v___x_691_; 
v___x_689_ = ((size_t)0ULL);
v___x_690_ = lean_usize_of_nat(v___x_687_);
v___x_691_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(v_tail_681_, v___x_689_, v___x_690_, v___x_686_);
return v___x_691_;
}
}
else
{
lean_object* v___x_692_; lean_object* v___x_693_; uint8_t v___x_694_; 
v___x_692_ = lean_nat_sub(v_start_677_, v_tailOff_683_);
v___x_693_ = lean_array_get_size(v_tail_681_);
v___x_694_ = lean_nat_dec_lt(v___x_692_, v___x_693_);
if (v___x_694_ == 0)
{
lean_dec(v___x_692_);
return v_init_676_;
}
else
{
size_t v___x_695_; size_t v___x_696_; lean_object* v___x_697_; 
v___x_695_ = lean_usize_of_nat(v___x_692_);
lean_dec(v___x_692_);
v___x_696_ = lean_usize_of_nat(v___x_693_);
v___x_697_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(v_tail_681_, v___x_695_, v___x_696_, v_init_676_);
return v___x_697_;
}
}
}
else
{
lean_object* v_root_698_; lean_object* v_tail_699_; lean_object* v___x_700_; lean_object* v___x_701_; uint8_t v___x_702_; 
v_root_698_ = lean_ctor_get(v_t_675_, 0);
v_tail_699_ = lean_ctor_get(v_t_675_, 1);
v___x_700_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__3(v_root_698_, v_init_676_);
v___x_701_ = lean_array_get_size(v_tail_699_);
v___x_702_ = lean_nat_dec_lt(v___x_678_, v___x_701_);
if (v___x_702_ == 0)
{
return v___x_700_;
}
else
{
size_t v___x_703_; size_t v___x_704_; lean_object* v___x_705_; 
v___x_703_ = ((size_t)0ULL);
v___x_704_ = lean_usize_of_nat(v___x_701_);
v___x_705_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(v_tail_699_, v___x_703_, v___x_704_, v___x_700_);
return v___x_705_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0___boxed(lean_object* v_t_706_, lean_object* v_init_707_, lean_object* v_start_708_){
_start:
{
lean_object* v_res_709_; 
v_res_709_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0(v_t_706_, v_init_707_, v_start_708_);
lean_dec(v_start_708_);
lean_dec_ref(v_t_706_);
return v_res_709_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0(lean_object* v_lctx_710_, lean_object* v_init_711_, lean_object* v_start_712_){
_start:
{
lean_object* v_decls_713_; lean_object* v___x_714_; 
v_decls_713_ = lean_ctor_get(v_lctx_710_, 1);
v___x_714_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0(v_decls_713_, v_init_711_, v_start_712_);
return v___x_714_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0___boxed(lean_object* v_lctx_715_, lean_object* v_init_716_, lean_object* v_start_717_){
_start:
{
lean_object* v_res_718_; 
v_res_718_ = l_Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0(v_lctx_715_, v_init_716_, v_start_717_);
lean_dec(v_start_717_);
lean_dec_ref(v_lctx_715_);
return v_res_718_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAfter___lam__0(lean_object* v_fvarId_719_, lean_object* v_mvarId_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_){
_start:
{
lean_object* v___x_726_; 
v___x_726_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_719_, v___y_721_, v___y_723_, v___y_724_);
if (lean_obj_tag(v___x_726_) == 0)
{
lean_object* v_a_727_; lean_object* v_lctx_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; uint8_t v___x_734_; lean_object* v___x_735_; 
v_a_727_ = lean_ctor_get(v___x_726_, 0);
lean_inc(v_a_727_);
lean_dec_ref_known(v___x_726_, 1);
v_lctx_728_ = lean_ctor_get(v___y_721_, 2);
v___x_729_ = ((lean_object*)(l_Lean_MVarId_revert___closed__2));
v___x_730_ = l_Lean_LocalDecl_index(v_a_727_);
lean_dec(v_a_727_);
v___x_731_ = lean_unsigned_to_nat(1u);
v___x_732_ = lean_nat_add(v___x_730_, v___x_731_);
lean_dec(v___x_730_);
v___x_733_ = l_Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0(v_lctx_728_, v___x_729_, v___x_732_);
lean_dec(v___x_732_);
v___x_734_ = 1;
v___x_735_ = l_Lean_MVarId_revert(v_mvarId_720_, v___x_733_, v___x_734_, v___x_734_, v___y_721_, v___y_722_, v___y_723_, v___y_724_);
return v___x_735_;
}
else
{
lean_object* v_a_736_; lean_object* v___x_738_; uint8_t v_isShared_739_; uint8_t v_isSharedCheck_743_; 
lean_dec(v_mvarId_720_);
v_a_736_ = lean_ctor_get(v___x_726_, 0);
v_isSharedCheck_743_ = !lean_is_exclusive(v___x_726_);
if (v_isSharedCheck_743_ == 0)
{
v___x_738_ = v___x_726_;
v_isShared_739_ = v_isSharedCheck_743_;
goto v_resetjp_737_;
}
else
{
lean_inc(v_a_736_);
lean_dec(v___x_726_);
v___x_738_ = lean_box(0);
v_isShared_739_ = v_isSharedCheck_743_;
goto v_resetjp_737_;
}
v_resetjp_737_:
{
lean_object* v___x_741_; 
if (v_isShared_739_ == 0)
{
v___x_741_ = v___x_738_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v_a_736_);
v___x_741_ = v_reuseFailAlloc_742_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
return v___x_741_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAfter___lam__0___boxed(lean_object* v_fvarId_744_, lean_object* v_mvarId_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_){
_start:
{
lean_object* v_res_751_; 
v_res_751_ = l_Lean_MVarId_revertAfter___lam__0(v_fvarId_744_, v_mvarId_745_, v___y_746_, v___y_747_, v___y_748_, v___y_749_);
lean_dec(v___y_749_);
lean_dec_ref(v___y_748_);
lean_dec(v___y_747_);
lean_dec_ref(v___y_746_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAfter(lean_object* v_mvarId_752_, lean_object* v_fvarId_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_){
_start:
{
lean_object* v___f_759_; lean_object* v___x_760_; 
lean_inc(v_mvarId_752_);
v___f_759_ = lean_alloc_closure((void*)(l_Lean_MVarId_revertAfter___lam__0___boxed), 7, 2);
lean_closure_set(v___f_759_, 0, v_fvarId_753_);
lean_closure_set(v___f_759_, 1, v_mvarId_752_);
v___x_760_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg(v_mvarId_752_, v___f_759_, v_a_754_, v_a_755_, v_a_756_, v_a_757_);
return v___x_760_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAfter___boxed(lean_object* v_mvarId_761_, lean_object* v_fvarId_762_, lean_object* v_a_763_, lean_object* v_a_764_, lean_object* v_a_765_, lean_object* v_a_766_, lean_object* v_a_767_){
_start:
{
lean_object* v_res_768_; 
v_res_768_ = l_Lean_MVarId_revertAfter(v_mvarId_761_, v_fvarId_762_, v_a_763_, v_a_764_, v_a_765_, v_a_766_);
lean_dec(v_a_766_);
lean_dec_ref(v_a_765_);
lean_dec(v_a_764_);
lean_dec_ref(v_a_763_);
return v_res_768_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertFrom___lam__0(lean_object* v_fvarId_769_, lean_object* v_mvarId_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_){
_start:
{
lean_object* v___x_776_; 
v___x_776_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_769_, v___y_771_, v___y_773_, v___y_774_);
if (lean_obj_tag(v___x_776_) == 0)
{
lean_object* v_a_777_; lean_object* v_lctx_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; uint8_t v___x_782_; lean_object* v___x_783_; 
v_a_777_ = lean_ctor_get(v___x_776_, 0);
lean_inc(v_a_777_);
lean_dec_ref_known(v___x_776_, 1);
v_lctx_778_ = lean_ctor_get(v___y_771_, 2);
v___x_779_ = ((lean_object*)(l_Lean_MVarId_revert___closed__2));
v___x_780_ = l_Lean_LocalDecl_index(v_a_777_);
lean_dec(v_a_777_);
v___x_781_ = l_Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0(v_lctx_778_, v___x_779_, v___x_780_);
lean_dec(v___x_780_);
v___x_782_ = 1;
v___x_783_ = l_Lean_MVarId_revert(v_mvarId_770_, v___x_781_, v___x_782_, v___x_782_, v___y_771_, v___y_772_, v___y_773_, v___y_774_);
return v___x_783_;
}
else
{
lean_object* v_a_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_791_; 
lean_dec(v_mvarId_770_);
v_a_784_ = lean_ctor_get(v___x_776_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v___x_776_);
if (v_isSharedCheck_791_ == 0)
{
v___x_786_ = v___x_776_;
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_a_784_);
lean_dec(v___x_776_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_789_; 
if (v_isShared_787_ == 0)
{
v___x_789_ = v___x_786_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_a_784_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
return v___x_789_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertFrom___lam__0___boxed(lean_object* v_fvarId_792_, lean_object* v_mvarId_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_){
_start:
{
lean_object* v_res_799_; 
v_res_799_ = l_Lean_MVarId_revertFrom___lam__0(v_fvarId_792_, v_mvarId_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_);
lean_dec(v___y_797_);
lean_dec_ref(v___y_796_);
lean_dec(v___y_795_);
lean_dec_ref(v___y_794_);
return v_res_799_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertFrom(lean_object* v_mvarId_800_, lean_object* v_fvarId_801_, lean_object* v_a_802_, lean_object* v_a_803_, lean_object* v_a_804_, lean_object* v_a_805_){
_start:
{
lean_object* v___f_807_; lean_object* v___x_808_; 
lean_inc(v_mvarId_800_);
v___f_807_ = lean_alloc_closure((void*)(l_Lean_MVarId_revertFrom___lam__0___boxed), 7, 2);
lean_closure_set(v___f_807_, 0, v_fvarId_801_);
lean_closure_set(v___f_807_, 1, v_mvarId_800_);
v___x_808_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg(v_mvarId_800_, v___f_807_, v_a_802_, v_a_803_, v_a_804_, v_a_805_);
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertFrom___boxed(lean_object* v_mvarId_809_, lean_object* v_fvarId_810_, lean_object* v_a_811_, lean_object* v_a_812_, lean_object* v_a_813_, lean_object* v_a_814_, lean_object* v_a_815_){
_start:
{
lean_object* v_res_816_; 
v_res_816_ = l_Lean_MVarId_revertFrom(v_mvarId_809_, v_fvarId_810_, v_a_811_, v_a_812_, v_a_813_, v_a_814_);
lean_dec(v_a_814_);
lean_dec_ref(v_a_813_);
lean_dec(v_a_812_);
lean_dec_ref(v_a_811_);
return v_res_816_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revertAll_spec__0___redArg(lean_object* v_as_817_, size_t v_sz_818_, size_t v_i_819_, lean_object* v_b_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_){
_start:
{
lean_object* v_a_826_; uint8_t v___x_830_; 
v___x_830_ = lean_usize_dec_lt(v_i_819_, v_sz_818_);
if (v___x_830_ == 0)
{
lean_object* v___x_831_; 
v___x_831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_831_, 0, v_b_820_);
return v___x_831_;
}
else
{
lean_object* v_a_832_; lean_object* v___x_833_; 
v_a_832_ = lean_array_uget_borrowed(v_as_817_, v_i_819_);
lean_inc(v_a_832_);
v___x_833_ = l_Lean_FVarId_getDecl___redArg(v_a_832_, v___y_821_, v___y_822_, v___y_823_);
if (lean_obj_tag(v___x_833_) == 0)
{
lean_object* v_a_834_; uint8_t v___x_835_; 
v_a_834_ = lean_ctor_get(v___x_833_, 0);
lean_inc(v_a_834_);
lean_dec_ref_known(v___x_833_, 1);
v___x_835_ = l_Lean_LocalDecl_isAuxDecl(v_a_834_);
lean_dec(v_a_834_);
if (v___x_835_ == 0)
{
lean_object* v___x_836_; 
lean_inc(v_a_832_);
v___x_836_ = lean_array_push(v_b_820_, v_a_832_);
v_a_826_ = v___x_836_;
goto v___jp_825_;
}
else
{
v_a_826_ = v_b_820_;
goto v___jp_825_;
}
}
else
{
lean_object* v_a_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_844_; 
lean_dec_ref(v_b_820_);
v_a_837_ = lean_ctor_get(v___x_833_, 0);
v_isSharedCheck_844_ = !lean_is_exclusive(v___x_833_);
if (v_isSharedCheck_844_ == 0)
{
v___x_839_ = v___x_833_;
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_a_837_);
lean_dec(v___x_833_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v___x_842_; 
if (v_isShared_840_ == 0)
{
v___x_842_ = v___x_839_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v_a_837_);
v___x_842_ = v_reuseFailAlloc_843_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
return v___x_842_;
}
}
}
}
v___jp_825_:
{
size_t v___x_827_; size_t v___x_828_; 
v___x_827_ = ((size_t)1ULL);
v___x_828_ = lean_usize_add(v_i_819_, v___x_827_);
v_i_819_ = v___x_828_;
v_b_820_ = v_a_826_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revertAll_spec__0___redArg___boxed(lean_object* v_as_845_, lean_object* v_sz_846_, lean_object* v_i_847_, lean_object* v_b_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_){
_start:
{
size_t v_sz_boxed_853_; size_t v_i_boxed_854_; lean_object* v_res_855_; 
v_sz_boxed_853_ = lean_unbox_usize(v_sz_846_);
lean_dec(v_sz_846_);
v_i_boxed_854_ = lean_unbox_usize(v_i_847_);
lean_dec(v_i_847_);
v_res_855_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revertAll_spec__0___redArg(v_as_845_, v_sz_boxed_853_, v_i_boxed_854_, v_b_848_, v___y_849_, v___y_850_, v___y_851_);
lean_dec(v___y_851_);
lean_dec_ref(v___y_850_);
lean_dec_ref(v___y_849_);
lean_dec_ref(v_as_845_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAll___lam__0(lean_object* v_mvarId_856_, lean_object* v___x_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_){
_start:
{
lean_object* v___x_863_; 
lean_inc(v_mvarId_856_);
v___x_863_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_856_, v___x_857_, v___y_858_, v___y_859_, v___y_860_, v___y_861_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v_lctx_864_; lean_object* v___x_865_; lean_object* v___x_866_; size_t v_sz_867_; size_t v___x_868_; lean_object* v___x_869_; 
lean_dec_ref_known(v___x_863_, 1);
v_lctx_864_ = lean_ctor_get(v___y_858_, 2);
v___x_865_ = ((lean_object*)(l_Lean_MVarId_revert___closed__2));
v___x_866_ = l_Lean_LocalContext_getFVarIds(v_lctx_864_);
v_sz_867_ = lean_array_size(v___x_866_);
v___x_868_ = ((size_t)0ULL);
v___x_869_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revertAll_spec__0___redArg(v___x_866_, v_sz_867_, v___x_868_, v___x_865_, v___y_858_, v___y_860_, v___y_861_);
lean_dec_ref(v___x_866_);
if (lean_obj_tag(v___x_869_) == 0)
{
lean_object* v_a_870_; uint8_t v___x_871_; lean_object* v___x_872_; 
v_a_870_ = lean_ctor_get(v___x_869_, 0);
lean_inc(v_a_870_);
lean_dec_ref_known(v___x_869_, 1);
v___x_871_ = 1;
v___x_872_ = l_Lean_MVarId_revert(v_mvarId_856_, v_a_870_, v___x_871_, v___x_871_, v___y_858_, v___y_859_, v___y_860_, v___y_861_);
if (lean_obj_tag(v___x_872_) == 0)
{
lean_object* v_a_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_881_; 
v_a_873_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_881_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_881_ == 0)
{
v___x_875_ = v___x_872_;
v_isShared_876_ = v_isSharedCheck_881_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_a_873_);
lean_dec(v___x_872_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_881_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v_snd_877_; lean_object* v___x_879_; 
v_snd_877_ = lean_ctor_get(v_a_873_, 1);
lean_inc(v_snd_877_);
lean_dec(v_a_873_);
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 0, v_snd_877_);
v___x_879_ = v___x_875_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v_snd_877_);
v___x_879_ = v_reuseFailAlloc_880_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
return v___x_879_;
}
}
}
else
{
lean_object* v_a_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_889_; 
v_a_882_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_889_ == 0)
{
v___x_884_ = v___x_872_;
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_a_882_);
lean_dec(v___x_872_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v___x_887_; 
if (v_isShared_885_ == 0)
{
v___x_887_ = v___x_884_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v_a_882_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
return v___x_887_;
}
}
}
}
else
{
lean_object* v_a_890_; lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_897_; 
lean_dec(v_mvarId_856_);
v_a_890_ = lean_ctor_get(v___x_869_, 0);
v_isSharedCheck_897_ = !lean_is_exclusive(v___x_869_);
if (v_isSharedCheck_897_ == 0)
{
v___x_892_ = v___x_869_;
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
else
{
lean_inc(v_a_890_);
lean_dec(v___x_869_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v___x_895_; 
if (v_isShared_893_ == 0)
{
v___x_895_ = v___x_892_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v_a_890_);
v___x_895_ = v_reuseFailAlloc_896_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
return v___x_895_;
}
}
}
}
else
{
lean_object* v_a_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_905_; 
lean_dec(v_mvarId_856_);
v_a_898_ = lean_ctor_get(v___x_863_, 0);
v_isSharedCheck_905_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_905_ == 0)
{
v___x_900_ = v___x_863_;
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_a_898_);
lean_dec(v___x_863_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_903_; 
if (v_isShared_901_ == 0)
{
v___x_903_ = v___x_900_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v_a_898_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAll___lam__0___boxed(lean_object* v_mvarId_906_, lean_object* v___x_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_){
_start:
{
lean_object* v_res_913_; 
v_res_913_ = l_Lean_MVarId_revertAll___lam__0(v_mvarId_906_, v___x_907_, v___y_908_, v___y_909_, v___y_910_, v___y_911_);
lean_dec(v___y_911_);
lean_dec_ref(v___y_910_);
lean_dec(v___y_909_);
lean_dec_ref(v___y_908_);
return v_res_913_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAll(lean_object* v_mvarId_917_, lean_object* v_a_918_, lean_object* v_a_919_, lean_object* v_a_920_, lean_object* v_a_921_){
_start:
{
lean_object* v___x_923_; lean_object* v___f_924_; lean_object* v___x_925_; 
v___x_923_ = ((lean_object*)(l_Lean_MVarId_revertAll___closed__1));
lean_inc(v_mvarId_917_);
v___f_924_ = lean_alloc_closure((void*)(l_Lean_MVarId_revertAll___lam__0___boxed), 7, 2);
lean_closure_set(v___f_924_, 0, v_mvarId_917_);
lean_closure_set(v___f_924_, 1, v___x_923_);
v___x_925_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg(v_mvarId_917_, v___f_924_, v_a_918_, v_a_919_, v_a_920_, v_a_921_);
return v___x_925_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAll___boxed(lean_object* v_mvarId_926_, lean_object* v_a_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_, lean_object* v_a_931_){
_start:
{
lean_object* v_res_932_; 
v_res_932_ = l_Lean_MVarId_revertAll(v_mvarId_926_, v_a_927_, v_a_928_, v_a_929_, v_a_930_);
lean_dec(v_a_930_);
lean_dec_ref(v_a_929_);
lean_dec(v_a_928_);
lean_dec_ref(v_a_927_);
return v_res_932_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revertAll_spec__0(lean_object* v_as_933_, size_t v_sz_934_, size_t v_i_935_, lean_object* v_b_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_){
_start:
{
lean_object* v___x_942_; 
v___x_942_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revertAll_spec__0___redArg(v_as_933_, v_sz_934_, v_i_935_, v_b_936_, v___y_937_, v___y_939_, v___y_940_);
return v___x_942_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revertAll_spec__0___boxed(lean_object* v_as_943_, lean_object* v_sz_944_, lean_object* v_i_945_, lean_object* v_b_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_){
_start:
{
size_t v_sz_boxed_952_; size_t v_i_boxed_953_; lean_object* v_res_954_; 
v_sz_boxed_952_ = lean_unbox_usize(v_sz_944_);
lean_dec(v_sz_944_);
v_i_boxed_953_ = lean_unbox_usize(v_i_945_);
lean_dec(v_i_945_);
v_res_954_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revertAll_spec__0(v_as_943_, v_sz_boxed_952_, v_i_boxed_953_, v_b_946_, v___y_947_, v___y_948_, v___y_949_, v___y_950_);
lean_dec(v___y_950_);
lean_dec_ref(v___y_949_);
lean_dec(v___y_948_);
lean_dec_ref(v___y_947_);
lean_dec_ref(v_as_943_);
return v_res_954_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Clear(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Revert(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Clear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Revert(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Clear(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Revert(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Clear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Revert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Revert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Revert(builtin);
}
#ifdef __cplusplus
}
#endif
