// Lean compiler output
// Module: Std.Tactic.BVDecide.LRAT.Internal.Rat
// Imports: public import Std.Tactic.BVDecide.LRAT.Internal.Rup public import Std.Tactic.BVDecide.LRAT.Internal.Add import Std.Tactic.Do import Std.Data.HashSet
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
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
uint8_t l_Std_Sat_CNF_Clause_instDecidableMemLiteralOfDecidableEq___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Tactic_BVDecide_LRAT_Internal_Assignment_ofClause(lean_object*);
lean_object* l_Std_Tactic_BVDecide_LRAT_Internal_State_propagateHints(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Std_Tactic_BVDecide_LRAT_Internal_Assignment_extendOfClauseWithout(lean_object*, lean_object*, lean_object*);
uint8_t l_Std_Tactic_BVDecide_LRAT_Internal_State_checkPropagate(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__1_spec__2_spec__5_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Tactic_BVDecide_LRAT_Internal_Basic_0__Std_Tactic_BVDecide_LRAT_Internal_State_all_go___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Basic_0__Std_Tactic_BVDecide_LRAT_Internal_State_all_go___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive___closed__0;
static lean_once_cell_t l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive___closed__1;
LEAN_EXPORT uint8_t l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__1_spec__2_spec__5_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Tactic_BVDecide_LRAT_Internal_State_checkRat_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Tactic_BVDecide_LRAT_Internal_State_checkRat_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_LRAT_Internal_State_checkRat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Internal_State_checkRat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRat_match__9_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRat_match__9_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRat_match__7_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRat_match__7_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRat_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRat_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRat_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRat_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__1_spec__2_spec__5_spec__8___redArg(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
return v_x_1_;
}
else
{
lean_object* v_key_3_; lean_object* v_value_4_; lean_object* v_tail_5_; lean_object* v___x_7_; uint8_t v_isShared_8_; uint8_t v_isSharedCheck_28_; 
v_key_3_ = lean_ctor_get(v_x_2_, 0);
v_value_4_ = lean_ctor_get(v_x_2_, 1);
v_tail_5_ = lean_ctor_get(v_x_2_, 2);
v_isSharedCheck_28_ = !lean_is_exclusive(v_x_2_);
if (v_isSharedCheck_28_ == 0)
{
v___x_7_ = v_x_2_;
v_isShared_8_ = v_isSharedCheck_28_;
goto v_resetjp_6_;
}
else
{
lean_inc(v_tail_5_);
lean_inc(v_value_4_);
lean_inc(v_key_3_);
lean_dec(v_x_2_);
v___x_7_ = lean_box(0);
v_isShared_8_ = v_isSharedCheck_28_;
goto v_resetjp_6_;
}
v_resetjp_6_:
{
lean_object* v___x_9_; uint64_t v___x_10_; uint64_t v___x_11_; uint64_t v___x_12_; uint64_t v_fold_13_; uint64_t v___x_14_; uint64_t v___x_15_; uint64_t v___x_16_; size_t v___x_17_; size_t v___x_18_; size_t v___x_19_; size_t v___x_20_; size_t v___x_21_; lean_object* v___x_22_; lean_object* v___x_24_; 
v___x_9_ = lean_array_get_size(v_x_1_);
v___x_10_ = lean_uint64_of_nat(v_key_3_);
v___x_11_ = 32ULL;
v___x_12_ = lean_uint64_shift_right(v___x_10_, v___x_11_);
v_fold_13_ = lean_uint64_xor(v___x_10_, v___x_12_);
v___x_14_ = 16ULL;
v___x_15_ = lean_uint64_shift_right(v_fold_13_, v___x_14_);
v___x_16_ = lean_uint64_xor(v_fold_13_, v___x_15_);
v___x_17_ = lean_uint64_to_usize(v___x_16_);
v___x_18_ = lean_usize_of_nat(v___x_9_);
v___x_19_ = ((size_t)1ULL);
v___x_20_ = lean_usize_sub(v___x_18_, v___x_19_);
v___x_21_ = lean_usize_land(v___x_17_, v___x_20_);
v___x_22_ = lean_array_uget_borrowed(v_x_1_, v___x_21_);
lean_inc(v___x_22_);
if (v_isShared_8_ == 0)
{
lean_ctor_set(v___x_7_, 2, v___x_22_);
v___x_24_ = v___x_7_;
goto v_reusejp_23_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_key_3_);
lean_ctor_set(v_reuseFailAlloc_27_, 1, v_value_4_);
lean_ctor_set(v_reuseFailAlloc_27_, 2, v___x_22_);
v___x_24_ = v_reuseFailAlloc_27_;
goto v_reusejp_23_;
}
v_reusejp_23_:
{
lean_object* v___x_25_; 
v___x_25_ = lean_array_uset(v_x_1_, v___x_21_, v___x_24_);
v_x_1_ = v___x_25_;
v_x_2_ = v_tail_5_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__1_spec__2_spec__5___redArg(lean_object* v_i_29_, lean_object* v_source_30_, lean_object* v_target_31_){
_start:
{
lean_object* v___x_32_; uint8_t v___x_33_; 
v___x_32_ = lean_array_get_size(v_source_30_);
v___x_33_ = lean_nat_dec_lt(v_i_29_, v___x_32_);
if (v___x_33_ == 0)
{
lean_dec_ref(v_source_30_);
lean_dec(v_i_29_);
return v_target_31_;
}
else
{
lean_object* v_es_34_; lean_object* v___x_35_; lean_object* v_source_36_; lean_object* v_target_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v_es_34_ = lean_array_fget(v_source_30_, v_i_29_);
v___x_35_ = lean_box(0);
v_source_36_ = lean_array_fset(v_source_30_, v_i_29_, v___x_35_);
v_target_37_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__1_spec__2_spec__5_spec__8___redArg(v_target_31_, v_es_34_);
v___x_38_ = lean_unsigned_to_nat(1u);
v___x_39_ = lean_nat_add(v_i_29_, v___x_38_);
lean_dec(v_i_29_);
v_i_29_ = v___x_39_;
v_source_30_ = v_source_36_;
v_target_31_ = v_target_37_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__1_spec__2___redArg(lean_object* v_data_41_){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v_nbuckets_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_42_ = lean_array_get_size(v_data_41_);
v___x_43_ = lean_unsigned_to_nat(2u);
v_nbuckets_44_ = lean_nat_mul(v___x_42_, v___x_43_);
v___x_45_ = lean_unsigned_to_nat(0u);
v___x_46_ = lean_box(0);
v___x_47_ = lean_mk_array(v_nbuckets_44_, v___x_46_);
v___x_48_ = lean_array_propagate_mark(v_data_41_, v___x_47_);
v___x_49_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__1_spec__2_spec__5___redArg(v___x_45_, v_data_41_, v___x_48_);
return v___x_49_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__2_spec__4___redArg(lean_object* v_a_50_, lean_object* v_x_51_){
_start:
{
if (lean_obj_tag(v_x_51_) == 0)
{
uint8_t v___x_52_; 
v___x_52_ = 0;
return v___x_52_;
}
else
{
lean_object* v_key_53_; lean_object* v_tail_54_; uint8_t v___x_55_; 
v_key_53_ = lean_ctor_get(v_x_51_, 0);
v_tail_54_ = lean_ctor_get(v_x_51_, 2);
v___x_55_ = lean_nat_dec_eq(v_key_53_, v_a_50_);
if (v___x_55_ == 0)
{
v_x_51_ = v_tail_54_;
goto _start;
}
else
{
return v___x_55_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__2_spec__4___redArg___boxed(lean_object* v_a_57_, lean_object* v_x_58_){
_start:
{
uint8_t v_res_59_; lean_object* v_r_60_; 
v_res_59_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__2_spec__4___redArg(v_a_57_, v_x_58_);
lean_dec(v_x_58_);
lean_dec(v_a_57_);
v_r_60_ = lean_box(v_res_59_);
return v_r_60_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__1___redArg(lean_object* v_m_61_, lean_object* v_a_62_, lean_object* v_b_63_){
_start:
{
lean_object* v_size_64_; lean_object* v_buckets_65_; lean_object* v___x_66_; uint64_t v___x_67_; uint64_t v___x_68_; uint64_t v___x_69_; uint64_t v_fold_70_; uint64_t v___x_71_; uint64_t v___x_72_; uint64_t v___x_73_; size_t v___x_74_; size_t v___x_75_; size_t v___x_76_; size_t v___x_77_; size_t v___x_78_; lean_object* v_bkt_79_; uint8_t v___x_80_; 
v_size_64_ = lean_ctor_get(v_m_61_, 0);
v_buckets_65_ = lean_ctor_get(v_m_61_, 1);
v___x_66_ = lean_array_get_size(v_buckets_65_);
v___x_67_ = lean_uint64_of_nat(v_a_62_);
v___x_68_ = 32ULL;
v___x_69_ = lean_uint64_shift_right(v___x_67_, v___x_68_);
v_fold_70_ = lean_uint64_xor(v___x_67_, v___x_69_);
v___x_71_ = 16ULL;
v___x_72_ = lean_uint64_shift_right(v_fold_70_, v___x_71_);
v___x_73_ = lean_uint64_xor(v_fold_70_, v___x_72_);
v___x_74_ = lean_uint64_to_usize(v___x_73_);
v___x_75_ = lean_usize_of_nat(v___x_66_);
v___x_76_ = ((size_t)1ULL);
v___x_77_ = lean_usize_sub(v___x_75_, v___x_76_);
v___x_78_ = lean_usize_land(v___x_74_, v___x_77_);
v_bkt_79_ = lean_array_uget_borrowed(v_buckets_65_, v___x_78_);
v___x_80_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__2_spec__4___redArg(v_a_62_, v_bkt_79_);
if (v___x_80_ == 0)
{
lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_101_; 
lean_inc_ref(v_buckets_65_);
lean_inc(v_size_64_);
v_isSharedCheck_101_ = !lean_is_exclusive(v_m_61_);
if (v_isSharedCheck_101_ == 0)
{
lean_object* v_unused_102_; lean_object* v_unused_103_; 
v_unused_102_ = lean_ctor_get(v_m_61_, 1);
lean_dec(v_unused_102_);
v_unused_103_ = lean_ctor_get(v_m_61_, 0);
lean_dec(v_unused_103_);
v___x_82_ = v_m_61_;
v_isShared_83_ = v_isSharedCheck_101_;
goto v_resetjp_81_;
}
else
{
lean_dec(v_m_61_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_101_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
lean_object* v___x_84_; lean_object* v_size_x27_85_; lean_object* v___x_86_; lean_object* v_buckets_x27_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; uint8_t v___x_93_; 
v___x_84_ = lean_unsigned_to_nat(1u);
v_size_x27_85_ = lean_nat_add(v_size_64_, v___x_84_);
lean_dec(v_size_64_);
lean_inc(v_bkt_79_);
v___x_86_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_86_, 0, v_a_62_);
lean_ctor_set(v___x_86_, 1, v_b_63_);
lean_ctor_set(v___x_86_, 2, v_bkt_79_);
v_buckets_x27_87_ = lean_array_uset(v_buckets_65_, v___x_78_, v___x_86_);
v___x_88_ = lean_unsigned_to_nat(4u);
v___x_89_ = lean_nat_mul(v_size_x27_85_, v___x_88_);
v___x_90_ = lean_unsigned_to_nat(3u);
v___x_91_ = lean_nat_div(v___x_89_, v___x_90_);
lean_dec(v___x_89_);
v___x_92_ = lean_array_get_size(v_buckets_x27_87_);
v___x_93_ = lean_nat_dec_le(v___x_91_, v___x_92_);
lean_dec(v___x_91_);
if (v___x_93_ == 0)
{
lean_object* v_val_94_; lean_object* v___x_96_; 
v_val_94_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__1_spec__2___redArg(v_buckets_x27_87_);
if (v_isShared_83_ == 0)
{
lean_ctor_set(v___x_82_, 1, v_val_94_);
lean_ctor_set(v___x_82_, 0, v_size_x27_85_);
v___x_96_ = v___x_82_;
goto v_reusejp_95_;
}
else
{
lean_object* v_reuseFailAlloc_97_; 
v_reuseFailAlloc_97_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_97_, 0, v_size_x27_85_);
lean_ctor_set(v_reuseFailAlloc_97_, 1, v_val_94_);
v___x_96_ = v_reuseFailAlloc_97_;
goto v_reusejp_95_;
}
v_reusejp_95_:
{
return v___x_96_;
}
}
else
{
lean_object* v___x_99_; 
if (v_isShared_83_ == 0)
{
lean_ctor_set(v___x_82_, 1, v_buckets_x27_87_);
lean_ctor_set(v___x_82_, 0, v_size_x27_85_);
v___x_99_ = v___x_82_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v_size_x27_85_);
lean_ctor_set(v_reuseFailAlloc_100_, 1, v_buckets_x27_87_);
v___x_99_ = v_reuseFailAlloc_100_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
return v___x_99_;
}
}
}
}
else
{
lean_dec(v_b_63_);
lean_dec(v_a_62_);
return v_m_61_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__2(lean_object* v_as_104_, size_t v_sz_105_, size_t v_i_106_, lean_object* v_b_107_){
_start:
{
uint8_t v___x_108_; 
v___x_108_ = lean_usize_dec_lt(v_i_106_, v_sz_105_);
if (v___x_108_ == 0)
{
return v_b_107_;
}
else
{
lean_object* v_a_109_; lean_object* v___x_110_; lean_object* v_r_111_; size_t v___x_112_; size_t v___x_113_; 
v_a_109_ = lean_array_uget_borrowed(v_as_104_, v_i_106_);
v___x_110_ = lean_box(0);
lean_inc(v_a_109_);
v_r_111_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__1___redArg(v_b_107_, v_a_109_, v___x_110_);
v___x_112_ = ((size_t)1ULL);
v___x_113_ = lean_usize_add(v_i_106_, v___x_112_);
v_i_106_ = v___x_113_;
v_b_107_ = v_r_111_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__2___boxed(lean_object* v_as_115_, lean_object* v_sz_116_, lean_object* v_i_117_, lean_object* v_b_118_){
_start:
{
size_t v_sz_boxed_119_; size_t v_i_boxed_120_; lean_object* v_res_121_; 
v_sz_boxed_119_ = lean_unbox_usize(v_sz_116_);
lean_dec(v_sz_116_);
v_i_boxed_120_ = lean_unbox_usize(v_i_117_);
lean_dec(v_i_117_);
v_res_121_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__2(v_as_115_, v_sz_boxed_119_, v_i_boxed_120_, v_b_118_);
lean_dec_ref(v_as_115_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1(lean_object* v_m_122_, lean_object* v_l_123_){
_start:
{
size_t v_sz_124_; size_t v___x_125_; lean_object* v___x_126_; 
v_sz_124_ = lean_array_size(v_l_123_);
v___x_125_ = ((size_t)0ULL);
v___x_126_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__2(v_l_123_, v_sz_124_, v___x_125_, v_m_122_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1___boxed(lean_object* v_m_127_, lean_object* v_l_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1(v_m_127_, v_l_128_);
lean_dec_ref(v_l_128_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__0(size_t v_sz_130_, size_t v_i_131_, lean_object* v_bs_132_){
_start:
{
uint8_t v___x_133_; 
v___x_133_ = lean_usize_dec_lt(v_i_131_, v_sz_130_);
if (v___x_133_ == 0)
{
return v_bs_132_;
}
else
{
lean_object* v_v_134_; lean_object* v_fst_135_; lean_object* v___x_136_; lean_object* v_bs_x27_137_; size_t v___x_138_; size_t v___x_139_; lean_object* v___x_140_; 
v_v_134_ = lean_array_uget_borrowed(v_bs_132_, v_i_131_);
v_fst_135_ = lean_ctor_get(v_v_134_, 0);
lean_inc(v_fst_135_);
v___x_136_ = lean_unsigned_to_nat(0u);
v_bs_x27_137_ = lean_array_uset(v_bs_132_, v_i_131_, v___x_136_);
v___x_138_ = ((size_t)1ULL);
v___x_139_ = lean_usize_add(v_i_131_, v___x_138_);
v___x_140_ = lean_array_uset(v_bs_x27_137_, v_i_131_, v_fst_135_);
v_i_131_ = v___x_139_;
v_bs_132_ = v___x_140_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__0___boxed(lean_object* v_sz_142_, lean_object* v_i_143_, lean_object* v_bs_144_){
_start:
{
size_t v_sz_boxed_145_; size_t v_i_boxed_146_; lean_object* v_res_147_; 
v_sz_boxed_145_ = lean_unbox_usize(v_sz_142_);
lean_dec(v_sz_142_);
v_i_boxed_146_ = lean_unbox_usize(v_i_143_);
lean_dec(v_i_143_);
v_res_147_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__0(v_sz_boxed_145_, v_i_boxed_146_, v_bs_144_);
return v_res_147_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__2___redArg(lean_object* v_m_148_, lean_object* v_a_149_){
_start:
{
lean_object* v_buckets_150_; lean_object* v___x_151_; uint64_t v___x_152_; uint64_t v___x_153_; uint64_t v___x_154_; uint64_t v_fold_155_; uint64_t v___x_156_; uint64_t v___x_157_; uint64_t v___x_158_; size_t v___x_159_; size_t v___x_160_; size_t v___x_161_; size_t v___x_162_; size_t v___x_163_; lean_object* v___x_164_; uint8_t v___x_165_; 
v_buckets_150_ = lean_ctor_get(v_m_148_, 1);
v___x_151_ = lean_array_get_size(v_buckets_150_);
v___x_152_ = lean_uint64_of_nat(v_a_149_);
v___x_153_ = 32ULL;
v___x_154_ = lean_uint64_shift_right(v___x_152_, v___x_153_);
v_fold_155_ = lean_uint64_xor(v___x_152_, v___x_154_);
v___x_156_ = 16ULL;
v___x_157_ = lean_uint64_shift_right(v_fold_155_, v___x_156_);
v___x_158_ = lean_uint64_xor(v_fold_155_, v___x_157_);
v___x_159_ = lean_uint64_to_usize(v___x_158_);
v___x_160_ = lean_usize_of_nat(v___x_151_);
v___x_161_ = ((size_t)1ULL);
v___x_162_ = lean_usize_sub(v___x_160_, v___x_161_);
v___x_163_ = lean_usize_land(v___x_159_, v___x_162_);
v___x_164_ = lean_array_uget_borrowed(v_buckets_150_, v___x_163_);
v___x_165_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__2_spec__4___redArg(v_a_149_, v___x_164_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__2___redArg___boxed(lean_object* v_m_166_, lean_object* v_a_167_){
_start:
{
uint8_t v_res_168_; lean_object* v_r_169_; 
v_res_168_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__2___redArg(v_m_166_, v_a_167_);
lean_dec(v_a_167_);
lean_dec_ref(v_m_166_);
v_r_169_ = lean_box(v_res_168_);
return v_r_169_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Tactic_BVDecide_LRAT_Internal_Basic_0__Std_Tactic_BVDecide_LRAT_Internal_State_all_go___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__3(lean_object* v_negPivot_170_, lean_object* v___x_171_, lean_object* v_s_172_, lean_object* v_i_173_){
_start:
{
lean_object* v___x_174_; uint8_t v___x_175_; 
v___x_174_ = lean_array_get_size(v_s_172_);
v___x_175_ = lean_nat_dec_lt(v_i_173_, v___x_174_);
if (v___x_175_ == 0)
{
uint8_t v___x_176_; 
lean_dec(v_i_173_);
lean_dec_ref(v_negPivot_170_);
v___x_176_ = 1;
return v___x_176_;
}
else
{
lean_object* v___x_177_; 
v___x_177_ = lean_array_fget_borrowed(v_s_172_, v_i_173_);
if (lean_obj_tag(v___x_177_) == 0)
{
lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_178_ = lean_unsigned_to_nat(1u);
v___x_179_ = lean_nat_add(v_i_173_, v___x_178_);
lean_dec(v_i_173_);
v_i_173_ = v___x_179_;
goto _start;
}
else
{
lean_object* v_val_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; uint8_t v___x_185_; 
v_val_181_ = lean_ctor_get(v___x_177_, 0);
v___x_182_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___x_183_ = lean_unsigned_to_nat(1u);
v___x_184_ = lean_nat_add(v_i_173_, v___x_183_);
lean_dec(v_i_173_);
lean_inc_ref(v_negPivot_170_);
v___x_185_ = l_Std_Sat_CNF_Clause_instDecidableMemLiteralOfDecidableEq___redArg(v___x_182_, v_negPivot_170_, v_val_181_);
if (v___x_185_ == 0)
{
v_i_173_ = v___x_184_;
goto _start;
}
else
{
uint8_t v___x_187_; 
v___x_187_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__2___redArg(v___x_171_, v___x_184_);
if (v___x_187_ == 0)
{
lean_dec(v___x_184_);
lean_dec_ref(v_negPivot_170_);
return v___x_187_;
}
else
{
v_i_173_ = v___x_184_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Basic_0__Std_Tactic_BVDecide_LRAT_Internal_State_all_go___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__3___boxed(lean_object* v_negPivot_189_, lean_object* v___x_190_, lean_object* v_s_191_, lean_object* v_i_192_){
_start:
{
uint8_t v_res_193_; lean_object* v_r_194_; 
v_res_193_ = l___private_Std_Tactic_BVDecide_LRAT_Internal_Basic_0__Std_Tactic_BVDecide_LRAT_Internal_State_all_go___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__3(v_negPivot_189_, v___x_190_, v_s_191_, v_i_192_);
lean_dec_ref(v_s_191_);
lean_dec_ref(v___x_190_);
v_r_194_ = lean_box(v_res_193_);
return v_r_194_;
}
}
static lean_object* _init_l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive___closed__0(void){
_start:
{
lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_195_ = lean_box(0);
v___x_196_ = lean_unsigned_to_nat(16u);
v___x_197_ = lean_mk_array(v___x_196_, v___x_195_);
return v___x_197_;
}
}
static lean_object* _init_l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive___closed__1(void){
_start:
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_198_ = lean_obj_once(&l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive___closed__0, &l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive___closed__0_once, _init_l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive___closed__0);
v___x_199_ = lean_unsigned_to_nat(0u);
v___x_200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_200_, 0, v___x_199_);
lean_ctor_set(v___x_200_, 1, v___x_198_);
return v___x_200_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive(lean_object* v_s_201_, lean_object* v_ratHints_202_, lean_object* v_negPivot_203_){
_start:
{
size_t v_sz_204_; size_t v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; uint8_t v___x_210_; 
v_sz_204_ = lean_array_size(v_ratHints_202_);
v___x_205_ = ((size_t)0ULL);
v___x_206_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__0(v_sz_204_, v___x_205_, v_ratHints_202_);
v___x_207_ = lean_unsigned_to_nat(0u);
v___x_208_ = lean_obj_once(&l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive___closed__1, &l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive___closed__1_once, _init_l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive___closed__1);
v___x_209_ = l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1(v___x_208_, v___x_206_);
lean_dec_ref(v___x_206_);
v___x_210_ = l___private_Std_Tactic_BVDecide_LRAT_Internal_Basic_0__Std_Tactic_BVDecide_LRAT_Internal_State_all_go___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__3(v_negPivot_203_, v___x_209_, v_s_201_, v___x_207_);
lean_dec_ref(v___x_209_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive___boxed(lean_object* v_s_211_, lean_object* v_ratHints_212_, lean_object* v_negPivot_213_){
_start:
{
uint8_t v_res_214_; lean_object* v_r_215_; 
v_res_214_ = l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive(v_s_211_, v_ratHints_212_, v_negPivot_213_);
lean_dec_ref(v_s_211_);
v_r_215_ = lean_box(v_res_214_);
return v_r_215_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__2(lean_object* v_00_u03b2_216_, lean_object* v_m_217_, lean_object* v_a_218_){
_start:
{
uint8_t v___x_219_; 
v___x_219_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__2___redArg(v_m_217_, v_a_218_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__2___boxed(lean_object* v_00_u03b2_220_, lean_object* v_m_221_, lean_object* v_a_222_){
_start:
{
uint8_t v_res_223_; lean_object* v_r_224_; 
v_res_223_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__2(v_00_u03b2_220_, v_m_221_, v_a_222_);
lean_dec(v_a_222_);
lean_dec_ref(v_m_221_);
v_r_224_ = lean_box(v_res_223_);
return v_r_224_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__1(lean_object* v_00_u03b2_225_, lean_object* v_m_226_, lean_object* v_a_227_, lean_object* v_b_228_){
_start:
{
lean_object* v___x_229_; 
v___x_229_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__1___redArg(v_m_226_, v_a_227_, v_b_228_);
return v___x_229_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__2_spec__4(lean_object* v_00_u03b2_230_, lean_object* v_a_231_, lean_object* v_x_232_){
_start:
{
uint8_t v___x_233_; 
v___x_233_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__2_spec__4___redArg(v_a_231_, v_x_232_);
return v___x_233_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__2_spec__4___boxed(lean_object* v_00_u03b2_234_, lean_object* v_a_235_, lean_object* v_x_236_){
_start:
{
uint8_t v_res_237_; lean_object* v_r_238_; 
v_res_237_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__2_spec__4(v_00_u03b2_234_, v_a_235_, v_x_236_);
lean_dec(v_x_236_);
lean_dec(v_a_235_);
v_r_238_ = lean_box(v_res_237_);
return v_r_238_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_239_, lean_object* v_data_240_){
_start:
{
lean_object* v___x_241_; 
v___x_241_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__1_spec__2___redArg(v_data_240_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_242_, lean_object* v_i_243_, lean_object* v_source_244_, lean_object* v_target_245_){
_start:
{
lean_object* v___x_246_; 
v___x_246_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__1_spec__2_spec__5___redArg(v_i_243_, v_source_244_, v_target_245_);
return v___x_246_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__1_spec__2_spec__5_spec__8(lean_object* v_00_u03b2_247_, lean_object* v_x_248_, lean_object* v_x_249_){
_start:
{
lean_object* v___x_250_; 
v___x_250_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive_spec__1_spec__1_spec__2_spec__5_spec__8___redArg(v_x_248_, v_x_249_);
return v___x_250_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Tactic_BVDecide_LRAT_Internal_State_checkRat_spec__0(lean_object* v_s_251_, uint8_t v___x_252_, lean_object* v_assign_253_, lean_object* v___y_254_, lean_object* v_pivot_255_, lean_object* v_clause_256_, lean_object* v_as_257_, size_t v_i_258_, size_t v_stop_259_){
_start:
{
uint8_t v___y_261_; uint8_t v___y_266_; lean_object* v___x_281_; uint8_t v___x_282_; 
v___x_281_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
lean_inc_ref(v_pivot_255_);
v___x_282_ = l_Std_Sat_CNF_Clause_instDecidableMemLiteralOfDecidableEq___redArg(v___x_281_, v_pivot_255_, v_clause_256_);
if (v___x_282_ == 0)
{
uint8_t v___x_283_; 
v___x_283_ = 1;
v___y_266_ = v___x_283_;
goto v___jp_265_;
}
else
{
uint8_t v___x_284_; 
v___x_284_ = 0;
v___y_266_ = v___x_284_;
goto v___jp_265_;
}
v___jp_260_:
{
if (v___y_261_ == 0)
{
size_t v___x_262_; size_t v___x_263_; 
v___x_262_ = ((size_t)1ULL);
v___x_263_ = lean_usize_add(v_i_258_, v___x_262_);
v_i_258_ = v___x_263_;
goto _start;
}
else
{
lean_dec_ref(v_pivot_255_);
lean_dec_ref(v_assign_253_);
return v___y_261_;
}
}
v___jp_265_:
{
uint8_t v___x_267_; 
v___x_267_ = lean_usize_dec_eq(v_i_258_, v_stop_259_);
if (v___x_267_ == 0)
{
lean_object* v___x_268_; lean_object* v_fst_269_; lean_object* v_snd_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; uint8_t v___x_274_; 
v___x_268_ = lean_array_uget_borrowed(v_as_257_, v_i_258_);
v_fst_269_ = lean_ctor_get(v___x_268_, 0);
v_snd_270_ = lean_ctor_get(v___x_268_, 1);
v___x_271_ = lean_unsigned_to_nat(1u);
v___x_272_ = lean_nat_sub(v_fst_269_, v___x_271_);
v___x_273_ = lean_array_get_size(v_s_251_);
v___x_274_ = lean_nat_dec_lt(v___x_272_, v___x_273_);
if (v___x_274_ == 0)
{
lean_dec(v___x_272_);
v___y_261_ = v___x_252_;
goto v___jp_260_;
}
else
{
lean_object* v___x_275_; 
v___x_275_ = lean_array_fget_borrowed(v_s_251_, v___x_272_);
lean_dec(v___x_272_);
if (lean_obj_tag(v___x_275_) == 0)
{
v___y_261_ = v___x_252_;
goto v___jp_260_;
}
else
{
lean_object* v_val_276_; lean_object* v___x_277_; 
v_val_276_ = lean_ctor_get(v___x_275_, 0);
lean_inc_ref(v_assign_253_);
v___x_277_ = l_Std_Tactic_BVDecide_LRAT_Internal_Assignment_extendOfClauseWithout(v_assign_253_, v_val_276_, v___y_254_);
if (lean_obj_tag(v___x_277_) == 0)
{
v___y_261_ = v___y_266_;
goto v___jp_260_;
}
else
{
lean_object* v_val_278_; uint8_t v___x_279_; 
v_val_278_ = lean_ctor_get(v___x_277_, 0);
lean_inc(v_val_278_);
lean_dec_ref_known(v___x_277_, 1);
v___x_279_ = l_Std_Tactic_BVDecide_LRAT_Internal_State_checkPropagate(v_s_251_, v_val_278_, v_snd_270_);
if (v___x_279_ == 0)
{
v___y_261_ = v___x_252_;
goto v___jp_260_;
}
else
{
v___y_261_ = v___y_266_;
goto v___jp_260_;
}
}
}
}
}
else
{
uint8_t v___x_280_; 
lean_dec_ref(v_pivot_255_);
lean_dec_ref(v_assign_253_);
v___x_280_ = 0;
return v___x_280_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Tactic_BVDecide_LRAT_Internal_State_checkRat_spec__0___boxed(lean_object* v_s_285_, lean_object* v___x_286_, lean_object* v_assign_287_, lean_object* v___y_288_, lean_object* v_pivot_289_, lean_object* v_clause_290_, lean_object* v_as_291_, lean_object* v_i_292_, lean_object* v_stop_293_){
_start:
{
uint8_t v___x_1083__boxed_294_; size_t v_i_boxed_295_; size_t v_stop_boxed_296_; uint8_t v_res_297_; lean_object* v_r_298_; 
v___x_1083__boxed_294_ = lean_unbox(v___x_286_);
v_i_boxed_295_ = lean_unbox_usize(v_i_292_);
lean_dec(v_i_292_);
v_stop_boxed_296_ = lean_unbox_usize(v_stop_293_);
lean_dec(v_stop_293_);
v_res_297_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Tactic_BVDecide_LRAT_Internal_State_checkRat_spec__0(v_s_285_, v___x_1083__boxed_294_, v_assign_287_, v___y_288_, v_pivot_289_, v_clause_290_, v_as_291_, v_i_boxed_295_, v_stop_boxed_296_);
lean_dec_ref(v_as_291_);
lean_dec_ref(v_clause_290_);
lean_dec_ref(v___y_288_);
lean_dec_ref(v_s_285_);
v_r_298_ = lean_box(v_res_297_);
return v_r_298_;
}
}
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_LRAT_Internal_State_checkRat(lean_object* v_s_299_, lean_object* v_clause_300_, lean_object* v_pivot_301_, lean_object* v_rupHints_302_, lean_object* v_ratHints_303_){
_start:
{
lean_object* v___x_304_; uint8_t v___x_305_; 
v___x_304_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
lean_inc_ref(v_pivot_301_);
v___x_305_ = l_Std_Sat_CNF_Clause_instDecidableMemLiteralOfDecidableEq___redArg(v___x_304_, v_pivot_301_, v_clause_300_);
if (v___x_305_ == 0)
{
lean_dec_ref(v_ratHints_303_);
lean_dec_ref(v_pivot_301_);
return v___x_305_;
}
else
{
lean_object* v___x_306_; 
v___x_306_ = l_Std_Tactic_BVDecide_LRAT_Internal_Assignment_ofClause(v_clause_300_);
if (lean_obj_tag(v___x_306_) == 1)
{
lean_object* v_val_307_; uint8_t v___x_308_; lean_object* v___x_309_; 
v_val_307_ = lean_ctor_get(v___x_306_, 0);
lean_inc(v_val_307_);
lean_dec_ref_known(v___x_306_, 1);
v___x_308_ = 0;
v___x_309_ = l_Std_Tactic_BVDecide_LRAT_Internal_State_propagateHints(v_s_299_, v_val_307_, v_rupHints_302_);
switch(lean_obj_tag(v___x_309_))
{
case 0:
{
lean_dec_ref(v_ratHints_303_);
lean_dec_ref(v_pivot_301_);
return v___x_305_;
}
case 1:
{
lean_object* v_assign_310_; lean_object* v___y_312_; lean_object* v_snd_320_; uint8_t v___x_321_; 
v_assign_310_ = lean_ctor_get(v___x_309_, 0);
lean_inc_ref(v_assign_310_);
lean_dec_ref_known(v___x_309_, 1);
v_snd_320_ = lean_ctor_get(v_pivot_301_, 1);
v___x_321_ = lean_unbox(v_snd_320_);
if (v___x_321_ == 0)
{
lean_object* v_fst_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
v_fst_322_ = lean_ctor_get(v_pivot_301_, 0);
v___x_323_ = lean_box(v___x_305_);
lean_inc(v_fst_322_);
v___x_324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_324_, 0, v_fst_322_);
lean_ctor_set(v___x_324_, 1, v___x_323_);
v___y_312_ = v___x_324_;
goto v___jp_311_;
}
else
{
lean_object* v_fst_325_; lean_object* v___x_326_; lean_object* v___x_327_; 
v_fst_325_ = lean_ctor_get(v_pivot_301_, 0);
v___x_326_ = lean_box(v___x_308_);
lean_inc(v_fst_325_);
v___x_327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_327_, 0, v_fst_325_);
lean_ctor_set(v___x_327_, 1, v___x_326_);
v___y_312_ = v___x_327_;
goto v___jp_311_;
}
v___jp_311_:
{
uint8_t v___x_313_; 
lean_inc_ref(v___y_312_);
lean_inc_ref(v_ratHints_303_);
v___x_313_ = l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRatHintsExhaustive(v_s_299_, v_ratHints_303_, v___y_312_);
if (v___x_313_ == 0)
{
lean_dec_ref(v___y_312_);
lean_dec_ref(v_assign_310_);
lean_dec_ref(v_ratHints_303_);
lean_dec_ref(v_pivot_301_);
return v___x_308_;
}
else
{
lean_object* v___x_314_; lean_object* v___x_315_; uint8_t v___x_316_; 
v___x_314_ = lean_unsigned_to_nat(0u);
v___x_315_ = lean_array_get_size(v_ratHints_303_);
v___x_316_ = lean_nat_dec_lt(v___x_314_, v___x_315_);
if (v___x_316_ == 0)
{
lean_dec_ref(v___y_312_);
lean_dec_ref(v_assign_310_);
lean_dec_ref(v_ratHints_303_);
lean_dec_ref(v_pivot_301_);
return v___x_313_;
}
else
{
if (v___x_316_ == 0)
{
lean_dec_ref(v___y_312_);
lean_dec_ref(v_assign_310_);
lean_dec_ref(v_ratHints_303_);
lean_dec_ref(v_pivot_301_);
return v___x_313_;
}
else
{
size_t v___x_317_; size_t v___x_318_; uint8_t v___x_319_; 
v___x_317_ = ((size_t)0ULL);
v___x_318_ = lean_usize_of_nat(v___x_315_);
v___x_319_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Tactic_BVDecide_LRAT_Internal_State_checkRat_spec__0(v_s_299_, v___x_313_, v_assign_310_, v___y_312_, v_pivot_301_, v_clause_300_, v_ratHints_303_, v___x_317_, v___x_318_);
lean_dec_ref(v_ratHints_303_);
lean_dec_ref(v___y_312_);
if (v___x_319_ == 0)
{
return v___x_316_;
}
else
{
return v___x_308_;
}
}
}
}
}
}
default: 
{
lean_dec_ref(v_ratHints_303_);
lean_dec_ref(v_pivot_301_);
return v___x_308_;
}
}
}
else
{
lean_dec(v___x_306_);
lean_dec_ref(v_ratHints_303_);
lean_dec_ref(v_pivot_301_);
return v___x_305_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Internal_State_checkRat___boxed(lean_object* v_s_328_, lean_object* v_clause_329_, lean_object* v_pivot_330_, lean_object* v_rupHints_331_, lean_object* v_ratHints_332_){
_start:
{
uint8_t v_res_333_; lean_object* v_r_334_; 
v_res_333_ = l_Std_Tactic_BVDecide_LRAT_Internal_State_checkRat(v_s_328_, v_clause_329_, v_pivot_330_, v_rupHints_331_, v_ratHints_332_);
lean_dec_ref(v_rupHints_331_);
lean_dec_ref(v_clause_329_);
lean_dec_ref(v_s_328_);
v_r_334_ = lean_box(v_res_333_);
return v_r_334_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRat_match__9_splitter___redArg(lean_object* v_x_335_, lean_object* v_h__1_336_, lean_object* v_h__2_337_){
_start:
{
if (lean_obj_tag(v_x_335_) == 1)
{
lean_object* v_val_338_; lean_object* v___x_339_; 
lean_dec(v_h__2_337_);
v_val_338_ = lean_ctor_get(v_x_335_, 0);
lean_inc(v_val_338_);
lean_dec_ref_known(v_x_335_, 1);
v___x_339_ = lean_apply_1(v_h__1_336_, v_val_338_);
return v___x_339_;
}
else
{
lean_object* v___x_340_; 
lean_dec(v_h__1_336_);
v___x_340_ = lean_apply_2(v_h__2_337_, v_x_335_, lean_box(0));
return v___x_340_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRat_match__9_splitter(lean_object* v_motive_341_, lean_object* v_x_342_, lean_object* v_h__1_343_, lean_object* v_h__2_344_){
_start:
{
if (lean_obj_tag(v_x_342_) == 1)
{
lean_object* v_val_345_; lean_object* v___x_346_; 
lean_dec(v_h__2_344_);
v_val_345_ = lean_ctor_get(v_x_342_, 0);
lean_inc(v_val_345_);
lean_dec_ref_known(v_x_342_, 1);
v___x_346_ = lean_apply_1(v_h__1_343_, v_val_345_);
return v___x_346_;
}
else
{
lean_object* v___x_347_; 
lean_dec(v_h__1_343_);
v___x_347_ = lean_apply_2(v_h__2_344_, v_x_342_, lean_box(0));
return v___x_347_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRat_match__7_splitter___redArg(lean_object* v_x_348_, lean_object* v_h__1_349_, lean_object* v_h__2_350_, lean_object* v_h__3_351_){
_start:
{
switch(lean_obj_tag(v_x_348_))
{
case 0:
{
lean_object* v___x_352_; lean_object* v___x_353_; 
lean_dec(v_h__3_351_);
lean_dec(v_h__2_350_);
v___x_352_ = lean_box(0);
v___x_353_ = lean_apply_1(v_h__1_349_, v___x_352_);
return v___x_353_;
}
case 1:
{
lean_object* v_assign_354_; lean_object* v___x_355_; 
lean_dec(v_h__2_350_);
lean_dec(v_h__1_349_);
v_assign_354_ = lean_ctor_get(v_x_348_, 0);
lean_inc_ref(v_assign_354_);
lean_dec_ref_known(v_x_348_, 1);
v___x_355_ = lean_apply_1(v_h__3_351_, v_assign_354_);
return v___x_355_;
}
default: 
{
lean_object* v___x_356_; lean_object* v___x_357_; 
lean_dec(v_h__3_351_);
lean_dec(v_h__1_349_);
v___x_356_ = lean_box(0);
v___x_357_ = lean_apply_1(v_h__2_350_, v___x_356_);
return v___x_357_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRat_match__7_splitter(lean_object* v_motive_358_, lean_object* v_x_359_, lean_object* v_h__1_360_, lean_object* v_h__2_361_, lean_object* v_h__3_362_){
_start:
{
switch(lean_obj_tag(v_x_359_))
{
case 0:
{
lean_object* v___x_363_; lean_object* v___x_364_; 
lean_dec(v_h__3_362_);
lean_dec(v_h__2_361_);
v___x_363_ = lean_box(0);
v___x_364_ = lean_apply_1(v_h__1_360_, v___x_363_);
return v___x_364_;
}
case 1:
{
lean_object* v_assign_365_; lean_object* v___x_366_; 
lean_dec(v_h__2_361_);
lean_dec(v_h__1_360_);
v_assign_365_ = lean_ctor_get(v_x_359_, 0);
lean_inc_ref(v_assign_365_);
lean_dec_ref_known(v_x_359_, 1);
v___x_366_ = lean_apply_1(v_h__3_362_, v_assign_365_);
return v___x_366_;
}
default: 
{
lean_object* v___x_367_; lean_object* v___x_368_; 
lean_dec(v_h__3_362_);
lean_dec(v_h__1_360_);
v___x_367_ = lean_box(0);
v___x_368_ = lean_apply_1(v_h__2_361_, v___x_367_);
return v___x_368_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRat_match__3_splitter___redArg(lean_object* v_x_369_, lean_object* v_h__1_370_, lean_object* v_h__2_371_){
_start:
{
if (lean_obj_tag(v_x_369_) == 0)
{
lean_object* v___x_372_; lean_object* v___x_373_; 
lean_dec(v_h__1_370_);
v___x_372_ = lean_box(0);
v___x_373_ = lean_apply_1(v_h__2_371_, v___x_372_);
return v___x_373_;
}
else
{
lean_object* v_val_374_; lean_object* v___x_375_; 
lean_dec(v_h__2_371_);
v_val_374_ = lean_ctor_get(v_x_369_, 0);
lean_inc(v_val_374_);
lean_dec_ref_known(v_x_369_, 1);
v___x_375_ = lean_apply_1(v_h__1_370_, v_val_374_);
return v___x_375_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRat_match__3_splitter(lean_object* v_motive_376_, lean_object* v_x_377_, lean_object* v_h__1_378_, lean_object* v_h__2_379_){
_start:
{
if (lean_obj_tag(v_x_377_) == 0)
{
lean_object* v___x_380_; lean_object* v___x_381_; 
lean_dec(v_h__1_378_);
v___x_380_ = lean_box(0);
v___x_381_ = lean_apply_1(v_h__2_379_, v___x_380_);
return v___x_381_;
}
else
{
lean_object* v_val_382_; lean_object* v___x_383_; 
lean_dec(v_h__2_379_);
v_val_382_ = lean_ctor_get(v_x_377_, 0);
lean_inc(v_val_382_);
lean_dec_ref_known(v_x_377_, 1);
v___x_383_ = lean_apply_1(v_h__1_378_, v_val_382_);
return v___x_383_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRat_match__1_splitter___redArg(lean_object* v_x_384_, lean_object* v_h__1_385_, lean_object* v_h__2_386_){
_start:
{
if (lean_obj_tag(v_x_384_) == 0)
{
lean_object* v___x_387_; lean_object* v___x_388_; 
lean_dec(v_h__1_385_);
v___x_387_ = lean_box(0);
v___x_388_ = lean_apply_1(v_h__2_386_, v___x_387_);
return v___x_388_;
}
else
{
lean_object* v_val_389_; lean_object* v___x_390_; 
lean_dec(v_h__2_386_);
v_val_389_ = lean_ctor_get(v_x_384_, 0);
lean_inc(v_val_389_);
lean_dec_ref_known(v_x_384_, 1);
v___x_390_ = lean_apply_1(v_h__1_385_, v_val_389_);
return v___x_390_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Rat_0__Std_Tactic_BVDecide_LRAT_Internal_State_checkRat_match__1_splitter(lean_object* v_motive_391_, lean_object* v_x_392_, lean_object* v_h__1_393_, lean_object* v_h__2_394_){
_start:
{
if (lean_obj_tag(v_x_392_) == 0)
{
lean_object* v___x_395_; lean_object* v___x_396_; 
lean_dec(v_h__1_393_);
v___x_395_ = lean_box(0);
v___x_396_ = lean_apply_1(v_h__2_394_, v___x_395_);
return v___x_396_;
}
else
{
lean_object* v_val_397_; lean_object* v___x_398_; 
lean_dec(v_h__2_394_);
v_val_397_ = lean_ctor_get(v_x_392_, 0);
lean_inc(v_val_397_);
lean_dec_ref_known(v_x_392_, 1);
v___x_398_ = lean_apply_1(v_h__1_393_, v_val_397_);
return v___x_398_;
}
}
}
lean_object* runtime_initialize_Std_Tactic_BVDecide_LRAT_Internal_Rup(uint8_t builtin);
lean_object* runtime_initialize_Std_Tactic_BVDecide_LRAT_Internal_Add(uint8_t builtin);
lean_object* runtime_initialize_Std_Tactic_Do(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_HashSet(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Tactic_BVDecide_LRAT_Internal_Rat(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Tactic_BVDecide_LRAT_Internal_Rup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_BVDecide_LRAT_Internal_Add(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_HashSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Tactic_BVDecide_LRAT_Internal_Rat(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Tactic_BVDecide_LRAT_Internal_Rup(uint8_t builtin);
lean_object* initialize_Std_Tactic_BVDecide_LRAT_Internal_Add(uint8_t builtin);
lean_object* initialize_Std_Tactic_Do(uint8_t builtin);
lean_object* initialize_Std_Data_HashSet(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Tactic_BVDecide_LRAT_Internal_Rat(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Tactic_BVDecide_LRAT_Internal_Rup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_BVDecide_LRAT_Internal_Add(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_HashSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_BVDecide_LRAT_Internal_Rat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Tactic_BVDecide_LRAT_Internal_Rat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Tactic_BVDecide_LRAT_Internal_Rat(builtin);
}
#ifdef __cplusplus
}
#endif
