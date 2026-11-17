// Lean compiler output
// Module: Lean.Util.Diff
// Imports: public import Init.Data.Array.Subarray.Split public import Init.Data.Slice.Array.Iterator public import Init.Data.Range public import Std.Data.HashMap.Basic public import Init.Data.String.Basic public import Init.Data.Range.Polymorphic.RangeIterator public import Init.While import Init.Data.Range.Polymorphic.Iterators import Init.Data.Range.Polymorphic.Nat import Init.Data.ToString.Macro import Init.Omega
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Subarray_drop___redArg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Subarray_get___redArg(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_While_0__repeatM_erased___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_take___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_x27_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_split___redArg(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Action_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Diff_Action_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Action_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Action_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Action_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Action_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Action_insert_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Action_insert_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Action_insert_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Action_insert_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Action_delete_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Action_delete_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Action_delete_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Action_delete_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Action_skip_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Action_skip_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Action_skip_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Action_skip_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Diff_instReprAction_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Diff.Action.insert"};
static const lean_object* l_Lean_Diff_instReprAction_repr___closed__0 = (const lean_object*)&l_Lean_Diff_instReprAction_repr___closed__0_value;
static const lean_ctor_object l_Lean_Diff_instReprAction_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Diff_instReprAction_repr___closed__0_value)}};
static const lean_object* l_Lean_Diff_instReprAction_repr___closed__1 = (const lean_object*)&l_Lean_Diff_instReprAction_repr___closed__1_value;
static const lean_string_object l_Lean_Diff_instReprAction_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Diff.Action.delete"};
static const lean_object* l_Lean_Diff_instReprAction_repr___closed__2 = (const lean_object*)&l_Lean_Diff_instReprAction_repr___closed__2_value;
static const lean_ctor_object l_Lean_Diff_instReprAction_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Diff_instReprAction_repr___closed__2_value)}};
static const lean_object* l_Lean_Diff_instReprAction_repr___closed__3 = (const lean_object*)&l_Lean_Diff_instReprAction_repr___closed__3_value;
static const lean_string_object l_Lean_Diff_instReprAction_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Diff.Action.skip"};
static const lean_object* l_Lean_Diff_instReprAction_repr___closed__4 = (const lean_object*)&l_Lean_Diff_instReprAction_repr___closed__4_value;
static const lean_ctor_object l_Lean_Diff_instReprAction_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Diff_instReprAction_repr___closed__4_value)}};
static const lean_object* l_Lean_Diff_instReprAction_repr___closed__5 = (const lean_object*)&l_Lean_Diff_instReprAction_repr___closed__5_value;
static lean_once_cell_t l_Lean_Diff_instReprAction_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Diff_instReprAction_repr___closed__6;
static lean_once_cell_t l_Lean_Diff_instReprAction_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Diff_instReprAction_repr___closed__7;
LEAN_EXPORT lean_object* l_Lean_Diff_instReprAction_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_instReprAction_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Diff_instReprAction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Diff_instReprAction_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Diff_instReprAction___closed__0 = (const lean_object*)&l_Lean_Diff_instReprAction___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Diff_instReprAction = (const lean_object*)&l_Lean_Diff_instReprAction___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Diff_instBEqAction_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Diff_instBEqAction_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Diff_instBEqAction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Diff_instBEqAction_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Diff_instBEqAction___closed__0 = (const lean_object*)&l_Lean_Diff_instBEqAction___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Diff_instBEqAction = (const lean_object*)&l_Lean_Diff_instBEqAction___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Diff_instHashableAction_hash(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Diff_instHashableAction_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Diff_instHashableAction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Diff_instHashableAction_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Diff_instHashableAction___closed__0 = (const lean_object*)&l_Lean_Diff_instHashableAction___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Diff_instHashableAction = (const lean_object*)&l_Lean_Diff_instHashableAction___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Diff_instInhabitedAction_default;
LEAN_EXPORT uint8_t l_Lean_Diff_instInhabitedAction;
static const lean_string_object l_Lean_Diff_instToStringAction___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "insert"};
static const lean_object* l_Lean_Diff_instToStringAction___lam__0___closed__0 = (const lean_object*)&l_Lean_Diff_instToStringAction___lam__0___closed__0_value;
static const lean_string_object l_Lean_Diff_instToStringAction___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "delete"};
static const lean_object* l_Lean_Diff_instToStringAction___lam__0___closed__1 = (const lean_object*)&l_Lean_Diff_instToStringAction___lam__0___closed__1_value;
static const lean_string_object l_Lean_Diff_instToStringAction___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "skip"};
static const lean_object* l_Lean_Diff_instToStringAction___lam__0___closed__2 = (const lean_object*)&l_Lean_Diff_instToStringAction___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Diff_instToStringAction___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Diff_instToStringAction___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Diff_instToStringAction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Diff_instToStringAction___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Diff_instToStringAction___closed__0 = (const lean_object*)&l_Lean_Diff_instToStringAction___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Diff_instToStringAction = (const lean_object*)&l_Lean_Diff_instToStringAction___closed__0_value;
static const lean_string_object l_Lean_Diff_Action_linePrefix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "+"};
static const lean_object* l_Lean_Diff_Action_linePrefix___closed__0 = (const lean_object*)&l_Lean_Diff_Action_linePrefix___closed__0_value;
static const lean_string_object l_Lean_Diff_Action_linePrefix___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Lean_Diff_Action_linePrefix___closed__1 = (const lean_object*)&l_Lean_Diff_Action_linePrefix___closed__1_value;
static const lean_string_object l_Lean_Diff_Action_linePrefix___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_Diff_Action_linePrefix___closed__2 = (const lean_object*)&l_Lean_Diff_Action_linePrefix___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Diff_Action_linePrefix(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Diff_Action_linePrefix___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchPrefix_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchPrefix_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Diff_matchPrefix___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Diff_matchPrefix___redArg___closed__0 = (const lean_object*)&l_Lean_Diff_matchPrefix___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Diff_matchPrefix___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_matchPrefix(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___redArg___closed__0 = (const lean_object*)&l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_matchSuffix___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_matchSuffix(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Diff_lcs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Diff_lcs___redArg___closed__0 = (const lean_object*)&l_Lean_Diff_lcs___redArg___closed__0_value;
static const lean_closure_object l_Lean_Diff_lcs___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Diff_lcs___redArg___closed__1 = (const lean_object*)&l_Lean_Diff_lcs___redArg___closed__1_value;
static const lean_closure_object l_Lean_Diff_lcs___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Diff_lcs___redArg___closed__2 = (const lean_object*)&l_Lean_Diff_lcs___redArg___closed__2_value;
static const lean_closure_object l_Lean_Diff_lcs___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Diff_lcs___redArg___closed__3 = (const lean_object*)&l_Lean_Diff_lcs___redArg___closed__3_value;
static const lean_closure_object l_Lean_Diff_lcs___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Diff_lcs___redArg___closed__4 = (const lean_object*)&l_Lean_Diff_lcs___redArg___closed__4_value;
static const lean_closure_object l_Lean_Diff_lcs___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Diff_lcs___redArg___closed__5 = (const lean_object*)&l_Lean_Diff_lcs___redArg___closed__5_value;
static const lean_closure_object l_Lean_Diff_lcs___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Diff_lcs___redArg___closed__6 = (const lean_object*)&l_Lean_Diff_lcs___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Diff_lcs___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Diff_lcs___redArg___closed__0_value),((lean_object*)&l_Lean_Diff_lcs___redArg___closed__1_value)}};
static const lean_object* l_Lean_Diff_lcs___redArg___closed__7 = (const lean_object*)&l_Lean_Diff_lcs___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Diff_lcs___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Diff_lcs___redArg___closed__7_value),((lean_object*)&l_Lean_Diff_lcs___redArg___closed__2_value),((lean_object*)&l_Lean_Diff_lcs___redArg___closed__3_value),((lean_object*)&l_Lean_Diff_lcs___redArg___closed__4_value),((lean_object*)&l_Lean_Diff_lcs___redArg___closed__5_value)}};
static const lean_object* l_Lean_Diff_lcs___redArg___closed__8 = (const lean_object*)&l_Lean_Diff_lcs___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Diff_lcs___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Diff_lcs___redArg___closed__8_value),((lean_object*)&l_Lean_Diff_lcs___redArg___closed__6_value)}};
static const lean_object* l_Lean_Diff_lcs___redArg___closed__9 = (const lean_object*)&l_Lean_Diff_lcs___redArg___closed__9_value;
static lean_once_cell_t l_Lean_Diff_lcs___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Diff_lcs___redArg___closed__10;
static lean_once_cell_t l_Lean_Diff_lcs___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Diff_lcs___redArg___closed__11;
static const lean_closure_object l_Lean_Diff_lcs___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Diff_lcs___redArg___lam__2, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Diff_lcs___redArg___closed__12 = (const lean_object*)&l_Lean_Diff_lcs___redArg___closed__12_value;
static const lean_closure_object l_Lean_Diff_lcs___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Diff_lcs___redArg___lam__3, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Diff_lcs___redArg___closed__13 = (const lean_object*)&l_Lean_Diff_lcs___redArg___closed__13_value;
static const lean_closure_object l_Lean_Diff_lcs___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Diff_lcs___redArg___lam__4, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Diff_lcs___redArg___closed__9_value),((lean_object*)&l_Lean_Diff_lcs___redArg___closed__13_value)} };
static const lean_object* l_Lean_Diff_lcs___redArg___closed__14 = (const lean_object*)&l_Lean_Diff_lcs___redArg___closed__14_value;
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_lcs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_diff___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_diff___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_diff___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_diff___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_diff___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_diff___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_diff___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_diff___redArg___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_diff___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_diff___redArg___lam__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_diff___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Diff_diff___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Diff_diff___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Diff_diff___redArg___closed__0 = (const lean_object*)&l_Lean_Diff_diff___redArg___closed__0_value;
static const lean_closure_object l_Lean_Diff_diff___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Diff_diff___redArg___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Diff_diff___redArg___closed__1 = (const lean_object*)&l_Lean_Diff_diff___redArg___closed__1_value;
static const lean_array_object l_Lean_Diff_diff___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Diff_diff___redArg___closed__2 = (const lean_object*)&l_Lean_Diff_diff___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Diff_diff___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Diff_diff___redArg___closed__3 = (const lean_object*)&l_Lean_Diff_diff___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Diff_diff___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Diff_diff___redArg___closed__2_value),((lean_object*)&l_Lean_Diff_diff___redArg___closed__3_value)}};
static const lean_object* l_Lean_Diff_diff___redArg___closed__4 = (const lean_object*)&l_Lean_Diff_diff___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Diff_diff___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_diff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Diff_linesToString___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lean_Diff_linesToString___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Diff_linesToString___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Diff_linesToString___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_linesToString___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Diff_linesToString___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Diff_linesToString___redArg___closed__0 = (const lean_object*)&l_Lean_Diff_linesToString___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Diff_linesToString___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_linesToString(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Action_ctorIdx___impl(uint8_t v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_box(v_x_1_);
v___x_3_ = lean_obj_tag_nat(v___x_2_);
lean_dec(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Action_ctorIdx___impl___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_4__boxed_5_; lean_object* v_res_6_; 
v_x_4__boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = l_Lean_Diff_Action_ctorIdx___impl(v_x_4__boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Action_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Action_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lean_Diff_Action_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Action_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Action_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = l_Lean_Diff_Action_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Action_insert_elim___redArg(lean_object* v_insert_22_){
_start:
{
lean_inc(v_insert_22_);
return v_insert_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Action_insert_elim___redArg___boxed(lean_object* v_insert_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_Diff_Action_insert_elim___redArg(v_insert_23_);
lean_dec(v_insert_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Action_insert_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_insert_28_){
_start:
{
lean_inc(v_insert_28_);
return v_insert_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Action_insert_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_insert_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = l_Lean_Diff_Action_insert_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_insert_32_);
lean_dec(v_insert_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Action_delete_elim___redArg(lean_object* v_delete_35_){
_start:
{
lean_inc(v_delete_35_);
return v_delete_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Action_delete_elim___redArg___boxed(lean_object* v_delete_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lean_Diff_Action_delete_elim___redArg(v_delete_36_);
lean_dec(v_delete_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Action_delete_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_delete_41_){
_start:
{
lean_inc(v_delete_41_);
return v_delete_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Action_delete_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_delete_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = l_Lean_Diff_Action_delete_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_delete_45_);
lean_dec(v_delete_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Action_skip_elim___redArg(lean_object* v_skip_48_){
_start:
{
lean_inc(v_skip_48_);
return v_skip_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Action_skip_elim___redArg___boxed(lean_object* v_skip_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lean_Diff_Action_skip_elim___redArg(v_skip_49_);
lean_dec(v_skip_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Action_skip_elim(lean_object* v_motive_51_, uint8_t v_t_52_, lean_object* v_h_53_, lean_object* v_skip_54_){
_start:
{
lean_inc(v_skip_54_);
return v_skip_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Action_skip_elim___boxed(lean_object* v_motive_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_skip_58_){
_start:
{
uint8_t v_t_boxed_59_; lean_object* v_res_60_; 
v_t_boxed_59_ = lean_unbox(v_t_56_);
v_res_60_ = l_Lean_Diff_Action_skip_elim(v_motive_55_, v_t_boxed_59_, v_h_57_, v_skip_58_);
lean_dec(v_skip_58_);
return v_res_60_;
}
}
static lean_object* _init_l_Lean_Diff_instReprAction_repr___closed__6(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_70_ = lean_unsigned_to_nat(2u);
v___x_71_ = lean_nat_to_int(v___x_70_);
return v___x_71_;
}
}
static lean_object* _init_l_Lean_Diff_instReprAction_repr___closed__7(void){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_72_ = lean_unsigned_to_nat(1u);
v___x_73_ = lean_nat_to_int(v___x_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_instReprAction_repr(uint8_t v_x_74_, lean_object* v_prec_75_){
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
v___x_99_ = lean_obj_once(&l_Lean_Diff_instReprAction_repr___closed__6, &l_Lean_Diff_instReprAction_repr___closed__6_once, _init_l_Lean_Diff_instReprAction_repr___closed__6);
v___y_77_ = v___x_99_;
goto v___jp_76_;
}
else
{
lean_object* v___x_100_; 
v___x_100_ = lean_obj_once(&l_Lean_Diff_instReprAction_repr___closed__7, &l_Lean_Diff_instReprAction_repr___closed__7_once, _init_l_Lean_Diff_instReprAction_repr___closed__7);
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
v___x_103_ = lean_obj_once(&l_Lean_Diff_instReprAction_repr___closed__6, &l_Lean_Diff_instReprAction_repr___closed__6_once, _init_l_Lean_Diff_instReprAction_repr___closed__6);
v___y_84_ = v___x_103_;
goto v___jp_83_;
}
else
{
lean_object* v___x_104_; 
v___x_104_ = lean_obj_once(&l_Lean_Diff_instReprAction_repr___closed__7, &l_Lean_Diff_instReprAction_repr___closed__7_once, _init_l_Lean_Diff_instReprAction_repr___closed__7);
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
v___x_107_ = lean_obj_once(&l_Lean_Diff_instReprAction_repr___closed__6, &l_Lean_Diff_instReprAction_repr___closed__6_once, _init_l_Lean_Diff_instReprAction_repr___closed__6);
v___y_91_ = v___x_107_;
goto v___jp_90_;
}
else
{
lean_object* v___x_108_; 
v___x_108_ = lean_obj_once(&l_Lean_Diff_instReprAction_repr___closed__7, &l_Lean_Diff_instReprAction_repr___closed__7_once, _init_l_Lean_Diff_instReprAction_repr___closed__7);
v___y_91_ = v___x_108_;
goto v___jp_90_;
}
}
}
v___jp_76_:
{
lean_object* v___x_78_; lean_object* v___x_79_; uint8_t v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_78_ = ((lean_object*)(l_Lean_Diff_instReprAction_repr___closed__1));
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
v___x_85_ = ((lean_object*)(l_Lean_Diff_instReprAction_repr___closed__3));
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
v___x_92_ = ((lean_object*)(l_Lean_Diff_instReprAction_repr___closed__5));
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
LEAN_EXPORT lean_object* l_Lean_Diff_instReprAction_repr___boxed(lean_object* v_x_109_, lean_object* v_prec_110_){
_start:
{
uint8_t v_x_255__boxed_111_; lean_object* v_res_112_; 
v_x_255__boxed_111_ = lean_unbox(v_x_109_);
v_res_112_ = l_Lean_Diff_instReprAction_repr(v_x_255__boxed_111_, v_prec_110_);
lean_dec(v_prec_110_);
return v_res_112_;
}
}
LEAN_EXPORT uint8_t l_Lean_Diff_instBEqAction_beq(uint8_t v_x_115_, uint8_t v_y_116_){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; uint8_t v___x_121_; 
v___x_117_ = lean_box(v_x_115_);
v___x_118_ = lean_obj_tag_nat(v___x_117_);
lean_dec(v___x_117_);
v___x_119_ = lean_box(v_y_116_);
v___x_120_ = lean_obj_tag_nat(v___x_119_);
lean_dec(v___x_119_);
v___x_121_ = lean_nat_dec_eq(v___x_118_, v___x_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_instBEqAction_beq___boxed(lean_object* v_x_122_, lean_object* v_y_123_){
_start:
{
uint8_t v_x_24__boxed_124_; uint8_t v_y_25__boxed_125_; uint8_t v_res_126_; lean_object* v_r_127_; 
v_x_24__boxed_124_ = lean_unbox(v_x_122_);
v_y_25__boxed_125_ = lean_unbox(v_y_123_);
v_res_126_ = l_Lean_Diff_instBEqAction_beq(v_x_24__boxed_124_, v_y_25__boxed_125_);
v_r_127_ = lean_box(v_res_126_);
return v_r_127_;
}
}
LEAN_EXPORT uint64_t l_Lean_Diff_instHashableAction_hash(uint8_t v_x_130_){
_start:
{
switch(v_x_130_)
{
case 0:
{
uint64_t v___x_131_; 
v___x_131_ = 0ULL;
return v___x_131_;
}
case 1:
{
uint64_t v___x_132_; 
v___x_132_ = 1ULL;
return v___x_132_;
}
default: 
{
uint64_t v___x_133_; 
v___x_133_ = 2ULL;
return v___x_133_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_instHashableAction_hash___boxed(lean_object* v_x_134_){
_start:
{
uint8_t v_x_40__boxed_135_; uint64_t v_res_136_; lean_object* v_r_137_; 
v_x_40__boxed_135_ = lean_unbox(v_x_134_);
v_res_136_ = l_Lean_Diff_instHashableAction_hash(v_x_40__boxed_135_);
v_r_137_ = lean_box_uint64(v_res_136_);
return v_r_137_;
}
}
static uint8_t _init_l_Lean_Diff_instInhabitedAction_default(void){
_start:
{
uint8_t v___x_140_; 
v___x_140_ = 0;
return v___x_140_;
}
}
static uint8_t _init_l_Lean_Diff_instInhabitedAction(void){
_start:
{
uint8_t v___x_141_; 
v___x_141_ = 0;
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_instToStringAction___lam__0(uint8_t v_x_145_){
_start:
{
switch(v_x_145_)
{
case 0:
{
lean_object* v___x_146_; 
v___x_146_ = ((lean_object*)(l_Lean_Diff_instToStringAction___lam__0___closed__0));
return v___x_146_;
}
case 1:
{
lean_object* v___x_147_; 
v___x_147_ = ((lean_object*)(l_Lean_Diff_instToStringAction___lam__0___closed__1));
return v___x_147_;
}
default: 
{
lean_object* v___x_148_; 
v___x_148_ = ((lean_object*)(l_Lean_Diff_instToStringAction___lam__0___closed__2));
return v___x_148_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_instToStringAction___lam__0___boxed(lean_object* v_x_149_){
_start:
{
uint8_t v_x_36__boxed_150_; lean_object* v_res_151_; 
v_x_36__boxed_150_ = lean_unbox(v_x_149_);
v_res_151_ = l_Lean_Diff_instToStringAction___lam__0(v_x_36__boxed_150_);
return v_res_151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Action_linePrefix(uint8_t v_x_157_){
_start:
{
switch(v_x_157_)
{
case 0:
{
lean_object* v___x_158_; 
v___x_158_ = ((lean_object*)(l_Lean_Diff_Action_linePrefix___closed__0));
return v___x_158_;
}
case 1:
{
lean_object* v___x_159_; 
v___x_159_ = ((lean_object*)(l_Lean_Diff_Action_linePrefix___closed__1));
return v___x_159_;
}
default: 
{
lean_object* v___x_160_; 
v___x_160_ = ((lean_object*)(l_Lean_Diff_Action_linePrefix___closed__2));
return v___x_160_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Action_linePrefix___boxed(lean_object* v_x_161_){
_start:
{
uint8_t v_x_31__boxed_162_; lean_object* v_res_163_; 
v_x_31__boxed_162_ = lean_unbox(v_x_161_);
v_res_163_ = l_Lean_Diff_Action_linePrefix(v_x_31__boxed_162_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___redArg(lean_object* v_inst_164_, lean_object* v_inst_165_, lean_object* v_histogram_166_, lean_object* v_index_167_, lean_object* v_val_168_){
_start:
{
lean_object* v___x_169_; 
lean_inc(v_val_168_);
lean_inc_ref(v_inst_165_);
lean_inc_ref(v_inst_164_);
v___x_169_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v_inst_164_, v_inst_165_, v_histogram_166_, v_val_168_);
if (lean_obj_tag(v___x_169_) == 0)
{
lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_170_ = lean_unsigned_to_nat(1u);
v___x_171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_171_, 0, v_index_167_);
v___x_172_ = lean_unsigned_to_nat(0u);
v___x_173_ = lean_box(0);
v___x_174_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_174_, 0, v___x_170_);
lean_ctor_set(v___x_174_, 1, v___x_171_);
lean_ctor_set(v___x_174_, 2, v___x_172_);
lean_ctor_set(v___x_174_, 3, v___x_173_);
v___x_175_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_164_, v_inst_165_, v_histogram_166_, v_val_168_, v___x_174_);
return v___x_175_;
}
else
{
lean_object* v_val_176_; lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_197_; 
v_val_176_ = lean_ctor_get(v___x_169_, 0);
v_isSharedCheck_197_ = !lean_is_exclusive(v___x_169_);
if (v_isSharedCheck_197_ == 0)
{
v___x_178_ = v___x_169_;
v_isShared_179_ = v_isSharedCheck_197_;
goto v_resetjp_177_;
}
else
{
lean_inc(v_val_176_);
lean_dec(v___x_169_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_197_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v_leftCount_180_; lean_object* v_rightCount_181_; lean_object* v_rightIndex_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_195_; 
v_leftCount_180_ = lean_ctor_get(v_val_176_, 0);
v_rightCount_181_ = lean_ctor_get(v_val_176_, 2);
v_rightIndex_182_ = lean_ctor_get(v_val_176_, 3);
v_isSharedCheck_195_ = !lean_is_exclusive(v_val_176_);
if (v_isSharedCheck_195_ == 0)
{
lean_object* v_unused_196_; 
v_unused_196_ = lean_ctor_get(v_val_176_, 1);
lean_dec(v_unused_196_);
v___x_184_ = v_val_176_;
v_isShared_185_ = v_isSharedCheck_195_;
goto v_resetjp_183_;
}
else
{
lean_inc(v_rightIndex_182_);
lean_inc(v_rightCount_181_);
lean_inc(v_leftCount_180_);
lean_dec(v_val_176_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_195_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_189_; 
v___x_186_ = lean_unsigned_to_nat(1u);
v___x_187_ = lean_nat_add(v_leftCount_180_, v___x_186_);
lean_dec(v_leftCount_180_);
if (v_isShared_179_ == 0)
{
lean_ctor_set(v___x_178_, 0, v_index_167_);
v___x_189_ = v___x_178_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v_index_167_);
v___x_189_ = v_reuseFailAlloc_194_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
lean_object* v___x_191_; 
if (v_isShared_185_ == 0)
{
lean_ctor_set(v___x_184_, 1, v___x_189_);
lean_ctor_set(v___x_184_, 0, v___x_187_);
v___x_191_ = v___x_184_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v___x_187_);
lean_ctor_set(v_reuseFailAlloc_193_, 1, v___x_189_);
lean_ctor_set(v_reuseFailAlloc_193_, 2, v_rightCount_181_);
lean_ctor_set(v_reuseFailAlloc_193_, 3, v_rightIndex_182_);
v___x_191_ = v_reuseFailAlloc_193_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
lean_object* v___x_192_; 
v___x_192_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_164_, v_inst_165_, v_histogram_166_, v_val_168_, v___x_191_);
return v___x_192_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft(lean_object* v_00_u03b1_198_, lean_object* v_inst_199_, lean_object* v_inst_200_, lean_object* v_lsize_201_, lean_object* v_rsize_202_, lean_object* v_histogram_203_, lean_object* v_index_204_, lean_object* v_val_205_){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = l_Lean_Diff_Histogram_addLeft___redArg(v_inst_199_, v_inst_200_, v_histogram_203_, v_index_204_, v_val_205_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___boxed(lean_object* v_00_u03b1_207_, lean_object* v_inst_208_, lean_object* v_inst_209_, lean_object* v_lsize_210_, lean_object* v_rsize_211_, lean_object* v_histogram_212_, lean_object* v_index_213_, lean_object* v_val_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = l_Lean_Diff_Histogram_addLeft(v_00_u03b1_207_, v_inst_208_, v_inst_209_, v_lsize_210_, v_rsize_211_, v_histogram_212_, v_index_213_, v_val_214_);
lean_dec(v_rsize_211_);
lean_dec(v_lsize_210_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___redArg(lean_object* v_inst_216_, lean_object* v_inst_217_, lean_object* v_histogram_218_, lean_object* v_index_219_, lean_object* v_val_220_){
_start:
{
lean_object* v___x_221_; 
lean_inc(v_val_220_);
lean_inc_ref(v_inst_217_);
lean_inc_ref(v_inst_216_);
v___x_221_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v_inst_216_, v_inst_217_, v_histogram_218_, v_val_220_);
if (lean_obj_tag(v___x_221_) == 0)
{
lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_222_ = lean_unsigned_to_nat(0u);
v___x_223_ = lean_box(0);
v___x_224_ = lean_unsigned_to_nat(1u);
v___x_225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_225_, 0, v_index_219_);
v___x_226_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_226_, 0, v___x_222_);
lean_ctor_set(v___x_226_, 1, v___x_223_);
lean_ctor_set(v___x_226_, 2, v___x_224_);
lean_ctor_set(v___x_226_, 3, v___x_225_);
v___x_227_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_216_, v_inst_217_, v_histogram_218_, v_val_220_, v___x_226_);
return v___x_227_;
}
else
{
lean_object* v_val_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_249_; 
v_val_228_ = lean_ctor_get(v___x_221_, 0);
v_isSharedCheck_249_ = !lean_is_exclusive(v___x_221_);
if (v_isSharedCheck_249_ == 0)
{
v___x_230_ = v___x_221_;
v_isShared_231_ = v_isSharedCheck_249_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_val_228_);
lean_dec(v___x_221_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_249_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
lean_object* v_leftCount_232_; lean_object* v_leftIndex_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_246_; 
v_leftCount_232_ = lean_ctor_get(v_val_228_, 0);
v_leftIndex_233_ = lean_ctor_get(v_val_228_, 1);
v_isSharedCheck_246_ = !lean_is_exclusive(v_val_228_);
if (v_isSharedCheck_246_ == 0)
{
lean_object* v_unused_247_; lean_object* v_unused_248_; 
v_unused_247_ = lean_ctor_get(v_val_228_, 3);
lean_dec(v_unused_247_);
v_unused_248_ = lean_ctor_get(v_val_228_, 2);
lean_dec(v_unused_248_);
v___x_235_ = v_val_228_;
v_isShared_236_ = v_isSharedCheck_246_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_leftIndex_233_);
lean_inc(v_leftCount_232_);
lean_dec(v_val_228_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_246_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_240_; 
v___x_237_ = lean_unsigned_to_nat(1u);
v___x_238_ = lean_nat_add(v_leftCount_232_, v___x_237_);
if (v_isShared_231_ == 0)
{
lean_ctor_set(v___x_230_, 0, v_index_219_);
v___x_240_ = v___x_230_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v_index_219_);
v___x_240_ = v_reuseFailAlloc_245_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
lean_object* v___x_242_; 
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 3, v___x_240_);
lean_ctor_set(v___x_235_, 2, v___x_238_);
v___x_242_ = v___x_235_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_leftCount_232_);
lean_ctor_set(v_reuseFailAlloc_244_, 1, v_leftIndex_233_);
lean_ctor_set(v_reuseFailAlloc_244_, 2, v___x_238_);
lean_ctor_set(v_reuseFailAlloc_244_, 3, v___x_240_);
v___x_242_ = v_reuseFailAlloc_244_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
lean_object* v___x_243_; 
v___x_243_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_216_, v_inst_217_, v_histogram_218_, v_val_220_, v___x_242_);
return v___x_243_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight(lean_object* v_00_u03b1_250_, lean_object* v_inst_251_, lean_object* v_inst_252_, lean_object* v_lsize_253_, lean_object* v_rsize_254_, lean_object* v_histogram_255_, lean_object* v_index_256_, lean_object* v_val_257_){
_start:
{
lean_object* v___x_258_; 
v___x_258_ = l_Lean_Diff_Histogram_addRight___redArg(v_inst_251_, v_inst_252_, v_histogram_255_, v_index_256_, v_val_257_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___boxed(lean_object* v_00_u03b1_259_, lean_object* v_inst_260_, lean_object* v_inst_261_, lean_object* v_lsize_262_, lean_object* v_rsize_263_, lean_object* v_histogram_264_, lean_object* v_index_265_, lean_object* v_val_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l_Lean_Diff_Histogram_addRight(v_00_u03b1_259_, v_inst_260_, v_inst_261_, v_lsize_262_, v_rsize_263_, v_histogram_264_, v_index_265_, v_val_266_);
lean_dec(v_rsize_263_);
lean_dec(v_lsize_262_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchPrefix_go___redArg(lean_object* v_inst_268_, lean_object* v_left_269_, lean_object* v_right_270_, lean_object* v_pref_271_){
_start:
{
lean_object* v_start_272_; lean_object* v_stop_273_; lean_object* v_i_274_; lean_object* v___x_280_; uint8_t v___x_281_; 
v_start_272_ = lean_ctor_get(v_left_269_, 1);
v_stop_273_ = lean_ctor_get(v_left_269_, 2);
v_i_274_ = lean_array_get_size(v_pref_271_);
v___x_280_ = lean_nat_sub(v_stop_273_, v_start_272_);
v___x_281_ = lean_nat_dec_lt(v_i_274_, v___x_280_);
lean_dec(v___x_280_);
if (v___x_281_ == 0)
{
lean_dec_ref(v_inst_268_);
goto v___jp_275_;
}
else
{
lean_object* v_start_282_; lean_object* v_stop_283_; lean_object* v___x_284_; uint8_t v___x_285_; 
v_start_282_ = lean_ctor_get(v_right_270_, 1);
v_stop_283_ = lean_ctor_get(v_right_270_, 2);
v___x_284_ = lean_nat_sub(v_stop_283_, v_start_282_);
v___x_285_ = lean_nat_dec_lt(v_i_274_, v___x_284_);
lean_dec(v___x_284_);
if (v___x_285_ == 0)
{
lean_dec_ref(v_inst_268_);
goto v___jp_275_;
}
else
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; uint8_t v___x_289_; 
v___x_286_ = l_Subarray_get___redArg(v_left_269_, v_i_274_);
v___x_287_ = l_Subarray_get___redArg(v_right_270_, v_i_274_);
lean_inc_ref(v_inst_268_);
lean_inc(v___x_286_);
v___x_288_ = lean_apply_2(v_inst_268_, v___x_286_, v___x_287_);
v___x_289_ = lean_unbox(v___x_288_);
if (v___x_289_ == 0)
{
lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
lean_dec(v___x_286_);
lean_dec_ref(v_inst_268_);
v___x_290_ = l_Subarray_drop___redArg(v_left_269_, v_i_274_);
v___x_291_ = l_Subarray_drop___redArg(v_right_270_, v_i_274_);
v___x_292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_290_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
v___x_293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_293_, 0, v_pref_271_);
lean_ctor_set(v___x_293_, 1, v___x_292_);
return v___x_293_;
}
else
{
lean_object* v___x_294_; 
v___x_294_ = lean_array_push(v_pref_271_, v___x_286_);
v_pref_271_ = v___x_294_;
goto _start;
}
}
}
v___jp_275_:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_276_ = l_Subarray_drop___redArg(v_left_269_, v_i_274_);
v___x_277_ = l_Subarray_drop___redArg(v_right_270_, v_i_274_);
v___x_278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_278_, 0, v___x_276_);
lean_ctor_set(v___x_278_, 1, v___x_277_);
v___x_279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_279_, 0, v_pref_271_);
lean_ctor_set(v___x_279_, 1, v___x_278_);
return v___x_279_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchPrefix_go(lean_object* v_00_u03b1_296_, lean_object* v_inst_297_, lean_object* v_left_298_, lean_object* v_right_299_, lean_object* v_pref_300_){
_start:
{
lean_object* v___x_301_; 
v___x_301_ = l___private_Lean_Util_Diff_0__Lean_Diff_matchPrefix_go___redArg(v_inst_297_, v_left_298_, v_right_299_, v_pref_300_);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_matchPrefix___redArg(lean_object* v_inst_304_, lean_object* v_left_305_, lean_object* v_right_306_){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = ((lean_object*)(l_Lean_Diff_matchPrefix___redArg___closed__0));
v___x_308_ = l___private_Lean_Util_Diff_0__Lean_Diff_matchPrefix_go___redArg(v_inst_304_, v_left_305_, v_right_306_, v___x_307_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_matchPrefix(lean_object* v_00_u03b1_309_, lean_object* v_inst_310_, lean_object* v_left_311_, lean_object* v_right_312_){
_start:
{
lean_object* v___x_313_; 
v___x_313_ = l_Lean_Diff_matchPrefix___redArg(v_inst_310_, v_left_311_, v_right_312_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___redArg___lam__0(lean_object* v_it_314_, lean_object* v_acc_315_, lean_object* v_recur_316_){
_start:
{
lean_object* v_array_317_; lean_object* v_start_318_; lean_object* v_stop_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_332_; 
v_array_317_ = lean_ctor_get(v_it_314_, 0);
v_start_318_ = lean_ctor_get(v_it_314_, 1);
v_stop_319_ = lean_ctor_get(v_it_314_, 2);
v_isSharedCheck_332_ = !lean_is_exclusive(v_it_314_);
if (v_isSharedCheck_332_ == 0)
{
v___x_321_ = v_it_314_;
v_isShared_322_ = v_isSharedCheck_332_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_stop_319_);
lean_inc(v_start_318_);
lean_inc(v_array_317_);
lean_dec(v_it_314_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_332_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
uint8_t v___x_323_; 
v___x_323_ = lean_nat_dec_lt(v_start_318_, v_stop_319_);
if (v___x_323_ == 0)
{
lean_del_object(v___x_321_);
lean_dec(v_stop_319_);
lean_dec(v_start_318_);
lean_dec_ref(v_array_317_);
lean_dec_ref(v_recur_316_);
return v_acc_315_;
}
else
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_327_; 
v___x_324_ = lean_unsigned_to_nat(1u);
v___x_325_ = lean_nat_add(v_start_318_, v___x_324_);
lean_inc_ref(v_array_317_);
if (v_isShared_322_ == 0)
{
lean_ctor_set(v___x_321_, 1, v___x_325_);
v___x_327_ = v___x_321_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v_array_317_);
lean_ctor_set(v_reuseFailAlloc_331_, 1, v___x_325_);
lean_ctor_set(v_reuseFailAlloc_331_, 2, v_stop_319_);
v___x_327_ = v_reuseFailAlloc_331_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_328_ = lean_array_fget(v_array_317_, v_start_318_);
lean_dec(v_start_318_);
lean_dec_ref(v_array_317_);
v___x_329_ = lean_array_push(v_acc_315_, v___x_328_);
v___x_330_ = lean_apply_3(v_recur_316_, v___x_327_, v___x_329_, lean_box(0));
return v___x_330_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___redArg(lean_object* v_inst_334_, lean_object* v_left_335_, lean_object* v_right_336_, lean_object* v_i_337_){
_start:
{
lean_object* v_start_338_; lean_object* v_stop_339_; lean_object* v___f_340_; lean_object* v___x_341_; uint8_t v___x_355_; 
v_start_338_ = lean_ctor_get(v_left_335_, 1);
v_stop_339_ = lean_ctor_get(v_left_335_, 2);
v___f_340_ = ((lean_object*)(l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___redArg___closed__0));
v___x_341_ = lean_nat_sub(v_stop_339_, v_start_338_);
v___x_355_ = lean_nat_dec_lt(v_i_337_, v___x_341_);
if (v___x_355_ == 0)
{
lean_dec_ref(v_inst_334_);
goto v___jp_342_;
}
else
{
lean_object* v_start_356_; lean_object* v_stop_357_; lean_object* v___x_358_; uint8_t v___x_359_; 
v_start_356_ = lean_ctor_get(v_right_336_, 1);
v_stop_357_ = lean_ctor_get(v_right_336_, 2);
v___x_358_ = lean_nat_sub(v_stop_357_, v_start_356_);
v___x_359_ = lean_nat_dec_lt(v_i_337_, v___x_358_);
if (v___x_359_ == 0)
{
lean_dec(v___x_358_);
lean_dec_ref(v_inst_334_);
goto v___jp_342_;
}
else
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; uint8_t v___x_368_; 
v___x_360_ = lean_nat_sub(v___x_341_, v_i_337_);
lean_dec(v___x_341_);
v___x_361_ = lean_unsigned_to_nat(1u);
v___x_362_ = lean_nat_sub(v___x_360_, v___x_361_);
v___x_363_ = l_Subarray_get___redArg(v_left_335_, v___x_362_);
lean_dec(v___x_362_);
v___x_364_ = lean_nat_sub(v___x_358_, v_i_337_);
lean_dec(v___x_358_);
v___x_365_ = lean_nat_sub(v___x_364_, v___x_361_);
v___x_366_ = l_Subarray_get___redArg(v_right_336_, v___x_365_);
lean_dec(v___x_365_);
lean_inc_ref(v_inst_334_);
v___x_367_ = lean_apply_2(v_inst_334_, v___x_363_, v___x_366_);
v___x_368_ = lean_unbox(v___x_367_);
if (v___x_368_ == 0)
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
lean_dec(v_i_337_);
lean_dec_ref(v_inst_334_);
lean_inc_ref(v_left_335_);
v___x_369_ = l_Subarray_take___redArg(v_left_335_, v___x_360_);
v___x_370_ = l_Subarray_take___redArg(v_right_336_, v___x_364_);
lean_dec(v___x_364_);
v___x_371_ = l_Subarray_drop___redArg(v_left_335_, v___x_360_);
lean_dec(v___x_360_);
v___x_372_ = ((lean_object*)(l_Lean_Diff_matchPrefix___redArg___closed__0));
v___x_373_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___redArg(v___f_340_, v___x_371_, v___x_372_);
v___x_374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_374_, 0, v___x_370_);
lean_ctor_set(v___x_374_, 1, v___x_373_);
v___x_375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_375_, 0, v___x_369_);
lean_ctor_set(v___x_375_, 1, v___x_374_);
return v___x_375_;
}
else
{
lean_object* v___x_376_; 
lean_dec(v___x_364_);
lean_dec(v___x_360_);
v___x_376_ = lean_nat_add(v_i_337_, v___x_361_);
lean_dec(v_i_337_);
v_i_337_ = v___x_376_;
goto _start;
}
}
}
v___jp_342_:
{
lean_object* v_start_343_; lean_object* v_stop_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v_start_343_ = lean_ctor_get(v_right_336_, 1);
v_stop_344_ = lean_ctor_get(v_right_336_, 2);
v___x_345_ = lean_nat_sub(v___x_341_, v_i_337_);
lean_dec(v___x_341_);
lean_inc_ref(v_left_335_);
v___x_346_ = l_Subarray_take___redArg(v_left_335_, v___x_345_);
v___x_347_ = lean_nat_sub(v_stop_344_, v_start_343_);
v___x_348_ = lean_nat_sub(v___x_347_, v_i_337_);
lean_dec(v_i_337_);
lean_dec(v___x_347_);
v___x_349_ = l_Subarray_take___redArg(v_right_336_, v___x_348_);
lean_dec(v___x_348_);
v___x_350_ = l_Subarray_drop___redArg(v_left_335_, v___x_345_);
lean_dec(v___x_345_);
v___x_351_ = ((lean_object*)(l_Lean_Diff_matchPrefix___redArg___closed__0));
v___x_352_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___redArg(v___f_340_, v___x_350_, v___x_351_);
v___x_353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_353_, 0, v___x_349_);
lean_ctor_set(v___x_353_, 1, v___x_352_);
v___x_354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_354_, 0, v___x_346_);
lean_ctor_set(v___x_354_, 1, v___x_353_);
return v___x_354_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go(lean_object* v_00_u03b1_378_, lean_object* v_inst_379_, lean_object* v_left_380_, lean_object* v_right_381_, lean_object* v_i_382_){
_start:
{
lean_object* v___x_383_; 
v___x_383_ = l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___redArg(v_inst_379_, v_left_380_, v_right_381_, v_i_382_);
return v___x_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_matchSuffix___redArg(lean_object* v_inst_384_, lean_object* v_left_385_, lean_object* v_right_386_){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_387_ = lean_unsigned_to_nat(0u);
v___x_388_ = l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___redArg(v_inst_384_, v_left_385_, v_right_386_, v___x_387_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_matchSuffix(lean_object* v_00_u03b1_389_, lean_object* v_inst_390_, lean_object* v_left_391_, lean_object* v_right_392_){
_start:
{
lean_object* v___x_393_; 
v___x_393_ = l_Lean_Diff_matchSuffix___redArg(v_inst_390_, v_left_391_, v_right_392_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___redArg___lam__0(lean_object* v___x_394_, lean_object* v_fst_395_, lean_object* v_inst_396_, lean_object* v_inst_397_, lean_object* v_next_398_, lean_object* v_acc_399_, lean_object* v_h_400_, lean_object* v_G_401_){
_start:
{
uint8_t v___x_402_; 
v___x_402_ = lean_nat_dec_lt(v_next_398_, v___x_394_);
if (v___x_402_ == 0)
{
lean_dec_ref(v_G_401_);
lean_dec(v_next_398_);
lean_dec_ref(v_inst_397_);
lean_dec_ref(v_inst_396_);
return v_acc_399_;
}
else
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_403_ = l_Subarray_get___redArg(v_fst_395_, v_next_398_);
lean_inc(v_next_398_);
v___x_404_ = l_Lean_Diff_Histogram_addLeft___redArg(v_inst_396_, v_inst_397_, v_acc_399_, v_next_398_, v___x_403_);
v___x_405_ = lean_unsigned_to_nat(1u);
v___x_406_ = lean_nat_add(v_next_398_, v___x_405_);
lean_dec(v_next_398_);
v___x_407_ = lean_apply_4(v_G_401_, v___x_406_, v___x_404_, lean_box(0), lean_box(0));
return v___x_407_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___redArg___lam__0___boxed(lean_object* v___x_408_, lean_object* v_fst_409_, lean_object* v_inst_410_, lean_object* v_inst_411_, lean_object* v_next_412_, lean_object* v_acc_413_, lean_object* v_h_414_, lean_object* v_G_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = l_Lean_Diff_lcs___redArg___lam__0(v___x_408_, v_fst_409_, v_inst_410_, v_inst_411_, v_next_412_, v_acc_413_, v_h_414_, v_G_415_);
lean_dec_ref(v_fst_409_);
lean_dec(v___x_408_);
return v_res_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___redArg___lam__1(lean_object* v___x_417_, lean_object* v_fst_418_, lean_object* v_inst_419_, lean_object* v_inst_420_, lean_object* v_next_421_, lean_object* v_acc_422_, lean_object* v_h_423_, lean_object* v_G_424_){
_start:
{
uint8_t v___x_425_; 
v___x_425_ = lean_nat_dec_lt(v_next_421_, v___x_417_);
if (v___x_425_ == 0)
{
lean_dec_ref(v_G_424_);
lean_dec(v_next_421_);
lean_dec_ref(v_inst_420_);
lean_dec_ref(v_inst_419_);
return v_acc_422_;
}
else
{
lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_426_ = l_Subarray_get___redArg(v_fst_418_, v_next_421_);
lean_inc(v_next_421_);
v___x_427_ = l_Lean_Diff_Histogram_addRight___redArg(v_inst_419_, v_inst_420_, v_acc_422_, v_next_421_, v___x_426_);
v___x_428_ = lean_unsigned_to_nat(1u);
v___x_429_ = lean_nat_add(v_next_421_, v___x_428_);
lean_dec(v_next_421_);
v___x_430_ = lean_apply_4(v_G_424_, v___x_429_, v___x_427_, lean_box(0), lean_box(0));
return v___x_430_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___redArg___lam__1___boxed(lean_object* v___x_431_, lean_object* v_fst_432_, lean_object* v_inst_433_, lean_object* v_inst_434_, lean_object* v_next_435_, lean_object* v_acc_436_, lean_object* v_h_437_, lean_object* v_G_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_Lean_Diff_lcs___redArg___lam__1(v___x_431_, v_fst_432_, v_inst_433_, v_inst_434_, v_next_435_, v_acc_436_, v_h_437_, v_G_438_);
lean_dec_ref(v_fst_432_);
lean_dec(v___x_431_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___redArg___lam__2(lean_object* v_a_440_, lean_object* v_x_441_, lean_object* v___y_442_){
_start:
{
lean_object* v_snd_443_; lean_object* v_leftIndex_444_; 
v_snd_443_ = lean_ctor_get(v_a_440_, 1);
lean_inc(v_snd_443_);
v_leftIndex_444_ = lean_ctor_get(v_snd_443_, 1);
lean_inc(v_leftIndex_444_);
if (lean_obj_tag(v_leftIndex_444_) == 1)
{
lean_object* v_rightIndex_445_; 
v_rightIndex_445_ = lean_ctor_get(v_snd_443_, 3);
lean_inc(v_rightIndex_445_);
if (lean_obj_tag(v_rightIndex_445_) == 1)
{
lean_object* v_fst_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_480_; 
v_fst_446_ = lean_ctor_get(v_a_440_, 0);
v_isSharedCheck_480_ = !lean_is_exclusive(v_a_440_);
if (v_isSharedCheck_480_ == 0)
{
lean_object* v_unused_481_; 
v_unused_481_ = lean_ctor_get(v_a_440_, 1);
lean_dec(v_unused_481_);
v___x_448_ = v_a_440_;
v_isShared_449_ = v_isSharedCheck_480_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_fst_446_);
lean_dec(v_a_440_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_480_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v_leftCount_450_; lean_object* v_rightCount_451_; lean_object* v_val_452_; lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_479_; 
v_leftCount_450_ = lean_ctor_get(v_snd_443_, 0);
lean_inc(v_leftCount_450_);
v_rightCount_451_ = lean_ctor_get(v_snd_443_, 2);
lean_inc(v_rightCount_451_);
lean_dec(v_snd_443_);
v_val_452_ = lean_ctor_get(v_leftIndex_444_, 0);
v_isSharedCheck_479_ = !lean_is_exclusive(v_leftIndex_444_);
if (v_isSharedCheck_479_ == 0)
{
v___x_454_ = v_leftIndex_444_;
v_isShared_455_ = v_isSharedCheck_479_;
goto v_resetjp_453_;
}
else
{
lean_inc(v_val_452_);
lean_dec(v_leftIndex_444_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_479_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v_val_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_478_; 
v_val_456_ = lean_ctor_get(v_rightIndex_445_, 0);
v_isSharedCheck_478_ = !lean_is_exclusive(v_rightIndex_445_);
if (v_isSharedCheck_478_ == 0)
{
v___x_458_ = v_rightIndex_445_;
v_isShared_459_ = v_isSharedCheck_478_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_val_456_);
lean_dec(v_rightIndex_445_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_478_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
if (lean_obj_tag(v___y_442_) == 0)
{
goto v___jp_460_;
}
else
{
lean_object* v_val_473_; lean_object* v_fst_474_; lean_object* v___x_475_; uint8_t v___x_476_; 
v_val_473_ = lean_ctor_get(v___y_442_, 0);
v_fst_474_ = lean_ctor_get(v_val_473_, 0);
v___x_475_ = lean_nat_add(v_leftCount_450_, v_rightCount_451_);
v___x_476_ = lean_nat_dec_lt(v___x_475_, v_fst_474_);
lean_dec(v___x_475_);
if (v___x_476_ == 0)
{
lean_object* v___x_477_; 
lean_del_object(v___x_458_);
lean_dec(v_val_456_);
lean_del_object(v___x_454_);
lean_dec(v_val_452_);
lean_dec(v_rightCount_451_);
lean_dec(v_leftCount_450_);
lean_del_object(v___x_448_);
lean_dec(v_fst_446_);
v___x_477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_477_, 0, v___y_442_);
return v___x_477_;
}
else
{
lean_dec_ref_known(v___y_442_, 1);
goto v___jp_460_;
}
}
v___jp_460_:
{
lean_object* v___x_461_; lean_object* v___x_463_; 
v___x_461_ = lean_nat_add(v_leftCount_450_, v_rightCount_451_);
lean_dec(v_rightCount_451_);
lean_dec(v_leftCount_450_);
if (v_isShared_449_ == 0)
{
lean_ctor_set(v___x_448_, 1, v_val_456_);
lean_ctor_set(v___x_448_, 0, v_val_452_);
v___x_463_ = v___x_448_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v_val_452_);
lean_ctor_set(v_reuseFailAlloc_472_, 1, v_val_456_);
v___x_463_ = v_reuseFailAlloc_472_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_467_; 
v___x_464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_464_, 0, v_fst_446_);
lean_ctor_set(v___x_464_, 1, v___x_463_);
v___x_465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_465_, 0, v___x_461_);
lean_ctor_set(v___x_465_, 1, v___x_464_);
if (v_isShared_459_ == 0)
{
lean_ctor_set(v___x_458_, 0, v___x_465_);
v___x_467_ = v___x_458_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v___x_465_);
v___x_467_ = v_reuseFailAlloc_471_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
lean_object* v___x_469_; 
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 0, v___x_467_);
v___x_469_ = v___x_454_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v___x_467_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
return v___x_469_;
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
lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_488_; 
lean_dec(v_rightIndex_445_);
lean_dec(v_snd_443_);
lean_dec_ref(v_a_440_);
v_isSharedCheck_488_ = !lean_is_exclusive(v_leftIndex_444_);
if (v_isSharedCheck_488_ == 0)
{
lean_object* v_unused_489_; 
v_unused_489_ = lean_ctor_get(v_leftIndex_444_, 0);
lean_dec(v_unused_489_);
v___x_483_ = v_leftIndex_444_;
v_isShared_484_ = v_isSharedCheck_488_;
goto v_resetjp_482_;
}
else
{
lean_dec(v_leftIndex_444_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_488_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
lean_object* v___x_486_; 
if (v_isShared_484_ == 0)
{
lean_ctor_set(v___x_483_, 0, v___y_442_);
v___x_486_ = v___x_483_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v___y_442_);
v___x_486_ = v_reuseFailAlloc_487_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
return v___x_486_;
}
}
}
}
else
{
lean_object* v___x_490_; 
lean_dec(v_leftIndex_444_);
lean_dec(v_snd_443_);
lean_dec_ref(v_a_440_);
v___x_490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_490_, 0, v___y_442_);
return v___x_490_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___redArg___lam__3(lean_object* v_a_491_, lean_object* v_b_492_, lean_object* v_d_493_){
_start:
{
lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_494_, 0, v_a_491_);
lean_ctor_set(v___x_494_, 1, v_b_492_);
v___x_495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_495_, 0, v___x_494_);
lean_ctor_set(v___x_495_, 1, v_d_493_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___redArg___lam__4(lean_object* v___x_496_, lean_object* v___f_497_, lean_object* v_l_498_, lean_object* v_acc_499_){
_start:
{
lean_object* v___x_500_; 
v___x_500_ = l_Std_DHashMap_Internal_AssocList_foldrM___redArg(v___x_496_, v___f_497_, v_acc_499_, v_l_498_);
return v___x_500_;
}
}
static lean_object* _init_l_Lean_Diff_lcs___redArg___closed__10(void){
_start:
{
lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_520_ = lean_box(0);
v___x_521_ = lean_unsigned_to_nat(16u);
v___x_522_ = lean_mk_array(v___x_521_, v___x_520_);
return v___x_522_;
}
}
static lean_object* _init_l_Lean_Diff_lcs___redArg___closed__11(void){
_start:
{
lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v_hist_525_; 
v___x_523_ = lean_obj_once(&l_Lean_Diff_lcs___redArg___closed__10, &l_Lean_Diff_lcs___redArg___closed__10_once, _init_l_Lean_Diff_lcs___redArg___closed__10);
v___x_524_ = lean_unsigned_to_nat(0u);
v_hist_525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_hist_525_, 0, v___x_524_);
lean_ctor_set(v_hist_525_, 1, v___x_523_);
return v_hist_525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___redArg(lean_object* v_inst_531_, lean_object* v_inst_532_, lean_object* v_left_533_, lean_object* v_right_534_){
_start:
{
lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v_snd_537_; lean_object* v_fst_538_; lean_object* v_fst_539_; lean_object* v_snd_540_; lean_object* v___x_541_; lean_object* v_snd_542_; lean_object* v_fst_543_; lean_object* v_fst_544_; lean_object* v_snd_545_; lean_object* v_start_546_; lean_object* v_stop_547_; lean_object* v_start_548_; lean_object* v_stop_549_; lean_object* v___x_550_; lean_object* v_hist_551_; lean_object* v___x_552_; lean_object* v___f_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___f_556_; lean_object* v___x_557_; lean_object* v_buckets_558_; lean_object* v___f_559_; lean_object* v___x_560_; lean_object* v___y_562_; lean_object* v___x_588_; lean_object* v___x_589_; uint8_t v___x_590_; 
v___x_535_ = ((lean_object*)(l_Lean_Diff_lcs___redArg___closed__9));
lean_inc_ref_n(v_inst_531_, 4);
v___x_536_ = l_Lean_Diff_matchPrefix___redArg(v_inst_531_, v_left_533_, v_right_534_);
v_snd_537_ = lean_ctor_get(v___x_536_, 1);
lean_inc(v_snd_537_);
v_fst_538_ = lean_ctor_get(v___x_536_, 0);
lean_inc(v_fst_538_);
lean_dec_ref(v___x_536_);
v_fst_539_ = lean_ctor_get(v_snd_537_, 0);
lean_inc(v_fst_539_);
v_snd_540_ = lean_ctor_get(v_snd_537_, 1);
lean_inc(v_snd_540_);
lean_dec(v_snd_537_);
v___x_541_ = l_Lean_Diff_matchSuffix___redArg(v_inst_531_, v_fst_539_, v_snd_540_);
v_snd_542_ = lean_ctor_get(v___x_541_, 1);
lean_inc(v_snd_542_);
v_fst_543_ = lean_ctor_get(v___x_541_, 0);
lean_inc_n(v_fst_543_, 2);
lean_dec_ref(v___x_541_);
v_fst_544_ = lean_ctor_get(v_snd_542_, 0);
lean_inc_n(v_fst_544_, 2);
v_snd_545_ = lean_ctor_get(v_snd_542_, 1);
lean_inc(v_snd_545_);
lean_dec(v_snd_542_);
v_start_546_ = lean_ctor_get(v_fst_543_, 1);
v_stop_547_ = lean_ctor_get(v_fst_543_, 2);
v_start_548_ = lean_ctor_get(v_fst_544_, 1);
v_stop_549_ = lean_ctor_get(v_fst_544_, 2);
v___x_550_ = lean_unsigned_to_nat(0u);
v_hist_551_ = lean_obj_once(&l_Lean_Diff_lcs___redArg___closed__11, &l_Lean_Diff_lcs___redArg___closed__11_once, _init_l_Lean_Diff_lcs___redArg___closed__11);
v___x_552_ = lean_nat_sub(v_stop_547_, v_start_546_);
lean_inc_ref_n(v_inst_532_, 2);
v___f_553_ = lean_alloc_closure((void*)(l_Lean_Diff_lcs___redArg___lam__0___boxed), 8, 4);
lean_closure_set(v___f_553_, 0, v___x_552_);
lean_closure_set(v___f_553_, 1, v_fst_543_);
lean_closure_set(v___f_553_, 2, v_inst_531_);
lean_closure_set(v___f_553_, 3, v_inst_532_);
v___x_554_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_553_, v___x_550_, v_hist_551_, lean_box(0));
v___x_555_ = lean_nat_sub(v_stop_549_, v_start_548_);
v___f_556_ = lean_alloc_closure((void*)(l_Lean_Diff_lcs___redArg___lam__1___boxed), 8, 4);
lean_closure_set(v___f_556_, 0, v___x_555_);
lean_closure_set(v___f_556_, 1, v_fst_544_);
lean_closure_set(v___f_556_, 2, v_inst_531_);
lean_closure_set(v___f_556_, 3, v_inst_532_);
v___x_557_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_556_, v___x_550_, v___x_554_, lean_box(0));
v_buckets_558_ = lean_ctor_get(v___x_557_, 1);
lean_inc_ref(v_buckets_558_);
lean_dec(v___x_557_);
v___f_559_ = ((lean_object*)(l_Lean_Diff_lcs___redArg___closed__12));
v___x_560_ = lean_box(0);
v___x_588_ = lean_box(0);
v___x_589_ = lean_array_get_size(v_buckets_558_);
v___x_590_ = lean_nat_dec_lt(v___x_550_, v___x_589_);
if (v___x_590_ == 0)
{
lean_dec_ref(v_buckets_558_);
v___y_562_ = v___x_588_;
goto v___jp_561_;
}
else
{
lean_object* v___f_591_; size_t v___x_592_; size_t v___x_593_; lean_object* v___x_594_; 
v___f_591_ = ((lean_object*)(l_Lean_Diff_lcs___redArg___closed__14));
v___x_592_ = lean_usize_of_nat(v___x_589_);
v___x_593_ = ((size_t)0ULL);
v___x_594_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_535_, v___f_591_, v_buckets_558_, v___x_592_, v___x_593_, v___x_588_);
v___y_562_ = v___x_594_;
goto v___jp_561_;
}
v___jp_561_:
{
lean_object* v___x_563_; 
v___x_563_ = l_List_forIn_x27_loop___redArg(v___x_535_, v___f_559_, v___y_562_, v___x_560_);
lean_dec(v___y_562_);
if (lean_obj_tag(v___x_563_) == 1)
{
lean_object* v_val_564_; lean_object* v_snd_565_; lean_object* v_snd_566_; lean_object* v_fst_567_; lean_object* v_fst_568_; lean_object* v_snd_569_; lean_object* v___x_570_; lean_object* v_fst_571_; lean_object* v_snd_572_; lean_object* v___x_573_; lean_object* v_fst_574_; lean_object* v_snd_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; 
v_val_564_ = lean_ctor_get(v___x_563_, 0);
lean_inc(v_val_564_);
lean_dec_ref_known(v___x_563_, 1);
v_snd_565_ = lean_ctor_get(v_val_564_, 1);
lean_inc(v_snd_565_);
lean_dec(v_val_564_);
v_snd_566_ = lean_ctor_get(v_snd_565_, 1);
lean_inc(v_snd_566_);
v_fst_567_ = lean_ctor_get(v_snd_565_, 0);
lean_inc(v_fst_567_);
lean_dec(v_snd_565_);
v_fst_568_ = lean_ctor_get(v_snd_566_, 0);
lean_inc(v_fst_568_);
v_snd_569_ = lean_ctor_get(v_snd_566_, 1);
lean_inc(v_snd_569_);
lean_dec(v_snd_566_);
v___x_570_ = l_Subarray_split___redArg(v_fst_543_, v_fst_568_);
lean_dec(v_fst_568_);
v_fst_571_ = lean_ctor_get(v___x_570_, 0);
lean_inc(v_fst_571_);
v_snd_572_ = lean_ctor_get(v___x_570_, 1);
lean_inc(v_snd_572_);
lean_dec_ref(v___x_570_);
v___x_573_ = l_Subarray_split___redArg(v_fst_544_, v_snd_569_);
lean_dec(v_snd_569_);
v_fst_574_ = lean_ctor_get(v___x_573_, 0);
lean_inc(v_fst_574_);
v_snd_575_ = lean_ctor_get(v___x_573_, 1);
lean_inc(v_snd_575_);
lean_dec_ref(v___x_573_);
lean_inc_ref(v_inst_532_);
lean_inc_ref(v_inst_531_);
v___x_576_ = l_Lean_Diff_lcs___redArg(v_inst_531_, v_inst_532_, v_fst_571_, v_fst_574_);
v___x_577_ = l_Array_append___redArg(v_fst_538_, v___x_576_);
lean_dec_ref(v___x_576_);
v___x_578_ = lean_unsigned_to_nat(1u);
v___x_579_ = lean_mk_empty_array_with_capacity(v___x_578_);
v___x_580_ = lean_array_push(v___x_579_, v_fst_567_);
v___x_581_ = l_Array_append___redArg(v___x_577_, v___x_580_);
lean_dec_ref(v___x_580_);
v___x_582_ = l_Subarray_drop___redArg(v_snd_572_, v___x_578_);
v___x_583_ = l_Subarray_drop___redArg(v_snd_575_, v___x_578_);
v___x_584_ = l_Lean_Diff_lcs___redArg(v_inst_531_, v_inst_532_, v___x_582_, v___x_583_);
v___x_585_ = l_Array_append___redArg(v___x_581_, v___x_584_);
lean_dec_ref(v___x_584_);
v___x_586_ = l_Array_append___redArg(v___x_585_, v_snd_545_);
lean_dec(v_snd_545_);
return v___x_586_;
}
else
{
lean_object* v___x_587_; 
lean_dec(v___x_563_);
lean_dec(v_fst_544_);
lean_dec(v_fst_543_);
lean_dec_ref(v_inst_532_);
lean_dec_ref(v_inst_531_);
v___x_587_ = l_Array_append___redArg(v_fst_538_, v_snd_545_);
lean_dec(v_snd_545_);
return v___x_587_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_lcs(lean_object* v_00_u03b1_595_, lean_object* v_inst_596_, lean_object* v_inst_597_, lean_object* v_left_598_, lean_object* v_right_599_){
_start:
{
lean_object* v___x_600_; 
v___x_600_ = l_Lean_Diff_lcs___redArg(v_inst_596_, v_inst_597_, v_left_598_, v_right_599_);
return v___x_600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_diff___redArg___lam__0(lean_object* v_x_601_){
_start:
{
uint8_t v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_602_ = 0;
v___x_603_ = lean_box(v___x_602_);
v___x_604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_604_, 0, v___x_603_);
lean_ctor_set(v___x_604_, 1, v_x_601_);
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_diff___redArg___lam__1(lean_object* v_x_605_){
_start:
{
uint8_t v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; 
v___x_606_ = 1;
v___x_607_ = lean_box(v___x_606_);
v___x_608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_608_, 0, v___x_607_);
lean_ctor_set(v___x_608_, 1, v_x_605_);
return v___x_608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_diff___redArg___lam__2(lean_object* v___x_609_, lean_object* v_inst_610_, lean_object* v_original_611_, lean_object* v_inst_612_, lean_object* v_a_613_, lean_object* v_b_614_){
_start:
{
lean_object* v_fst_615_; lean_object* v_snd_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_637_; 
v_fst_615_ = lean_ctor_get(v_b_614_, 0);
v_snd_616_ = lean_ctor_get(v_b_614_, 1);
v_isSharedCheck_637_ = !lean_is_exclusive(v_b_614_);
if (v_isSharedCheck_637_ == 0)
{
v___x_618_ = v_b_614_;
v_isShared_619_ = v_isSharedCheck_637_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_snd_616_);
lean_inc(v_fst_615_);
lean_dec(v_b_614_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_637_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
uint8_t v___x_625_; 
v___x_625_ = lean_nat_dec_lt(v_snd_616_, v___x_609_);
if (v___x_625_ == 0)
{
lean_dec(v_a_613_);
lean_dec_ref(v_inst_612_);
goto v___jp_620_;
}
else
{
lean_object* v___x_626_; lean_object* v___x_627_; uint8_t v___x_628_; 
v___x_626_ = lean_array_get_borrowed(v_inst_610_, v_original_611_, v_snd_616_);
lean_inc(v___x_626_);
v___x_627_ = lean_apply_2(v_inst_612_, v___x_626_, v_a_613_);
v___x_628_ = lean_unbox(v___x_627_);
if (v___x_628_ == 0)
{
uint8_t v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; 
lean_del_object(v___x_618_);
v___x_629_ = 1;
v___x_630_ = lean_box(v___x_629_);
lean_inc(v___x_626_);
v___x_631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_631_, 0, v___x_630_);
lean_ctor_set(v___x_631_, 1, v___x_626_);
v___x_632_ = lean_array_push(v_fst_615_, v___x_631_);
v___x_633_ = lean_unsigned_to_nat(1u);
v___x_634_ = lean_nat_add(v_snd_616_, v___x_633_);
lean_dec(v_snd_616_);
v___x_635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_635_, 0, v___x_632_);
lean_ctor_set(v___x_635_, 1, v___x_634_);
v___x_636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_636_, 0, v___x_635_);
return v___x_636_;
}
else
{
goto v___jp_620_;
}
}
v___jp_620_:
{
lean_object* v___x_622_; 
if (v_isShared_619_ == 0)
{
v___x_622_ = v___x_618_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_fst_615_);
lean_ctor_set(v_reuseFailAlloc_624_, 1, v_snd_616_);
v___x_622_ = v_reuseFailAlloc_624_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
lean_object* v___x_623_; 
v___x_623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_623_, 0, v___x_622_);
return v___x_623_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_diff___redArg___lam__2___boxed(lean_object* v___x_638_, lean_object* v_inst_639_, lean_object* v_original_640_, lean_object* v_inst_641_, lean_object* v_a_642_, lean_object* v_b_643_){
_start:
{
lean_object* v_res_644_; 
v_res_644_ = l_Lean_Diff_diff___redArg___lam__2(v___x_638_, v_inst_639_, v_original_640_, v_inst_641_, v_a_642_, v_b_643_);
lean_dec_ref(v_original_640_);
lean_dec(v_inst_639_);
lean_dec(v___x_638_);
return v_res_644_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_diff___redArg___lam__3(lean_object* v___x_645_, lean_object* v_inst_646_, lean_object* v_edited_647_, lean_object* v_inst_648_, lean_object* v_a_649_, lean_object* v_b_650_){
_start:
{
lean_object* v_fst_651_; lean_object* v_snd_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_673_; 
v_fst_651_ = lean_ctor_get(v_b_650_, 0);
v_snd_652_ = lean_ctor_get(v_b_650_, 1);
v_isSharedCheck_673_ = !lean_is_exclusive(v_b_650_);
if (v_isSharedCheck_673_ == 0)
{
v___x_654_ = v_b_650_;
v_isShared_655_ = v_isSharedCheck_673_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_snd_652_);
lean_inc(v_fst_651_);
lean_dec(v_b_650_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_673_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
uint8_t v___x_661_; 
v___x_661_ = lean_nat_dec_lt(v_snd_652_, v___x_645_);
if (v___x_661_ == 0)
{
lean_dec(v_a_649_);
lean_dec_ref(v_inst_648_);
goto v___jp_656_;
}
else
{
lean_object* v___x_662_; lean_object* v___x_663_; uint8_t v___x_664_; 
v___x_662_ = lean_array_get_borrowed(v_inst_646_, v_edited_647_, v_snd_652_);
lean_inc(v___x_662_);
v___x_663_ = lean_apply_2(v_inst_648_, v___x_662_, v_a_649_);
v___x_664_ = lean_unbox(v___x_663_);
if (v___x_664_ == 0)
{
uint8_t v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
lean_del_object(v___x_654_);
v___x_665_ = 0;
v___x_666_ = lean_box(v___x_665_);
lean_inc(v___x_662_);
v___x_667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_667_, 0, v___x_666_);
lean_ctor_set(v___x_667_, 1, v___x_662_);
v___x_668_ = lean_array_push(v_fst_651_, v___x_667_);
v___x_669_ = lean_unsigned_to_nat(1u);
v___x_670_ = lean_nat_add(v_snd_652_, v___x_669_);
lean_dec(v_snd_652_);
v___x_671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_671_, 0, v___x_668_);
lean_ctor_set(v___x_671_, 1, v___x_670_);
v___x_672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_672_, 0, v___x_671_);
return v___x_672_;
}
else
{
goto v___jp_656_;
}
}
v___jp_656_:
{
lean_object* v___x_658_; 
if (v_isShared_655_ == 0)
{
v___x_658_ = v___x_654_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_fst_651_);
lean_ctor_set(v_reuseFailAlloc_660_, 1, v_snd_652_);
v___x_658_ = v_reuseFailAlloc_660_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
lean_object* v___x_659_; 
v___x_659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_659_, 0, v___x_658_);
return v___x_659_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_diff___redArg___lam__3___boxed(lean_object* v___x_674_, lean_object* v_inst_675_, lean_object* v_edited_676_, lean_object* v_inst_677_, lean_object* v_a_678_, lean_object* v_b_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l_Lean_Diff_diff___redArg___lam__3(v___x_674_, v_inst_675_, v_edited_676_, v_inst_677_, v_a_678_, v_b_679_);
lean_dec_ref(v_edited_676_);
lean_dec(v_inst_675_);
lean_dec(v___x_674_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_diff___redArg___lam__4(lean_object* v___x_681_, lean_object* v_inst_682_, lean_object* v_original_683_, lean_object* v_inst_684_, lean_object* v___x_685_, lean_object* v___x_686_, lean_object* v_edited_687_, lean_object* v_a_688_, lean_object* v_x_689_, lean_object* v___y_690_){
_start:
{
lean_object* v_snd_691_; lean_object* v_fst_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_738_; 
v_snd_691_ = lean_ctor_get(v___y_690_, 1);
v_fst_692_ = lean_ctor_get(v___y_690_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v___y_690_);
if (v_isSharedCheck_738_ == 0)
{
v___x_694_ = v___y_690_;
v_isShared_695_ = v_isSharedCheck_738_;
goto v_resetjp_693_;
}
else
{
lean_inc(v_snd_691_);
lean_inc(v_fst_692_);
lean_dec(v___y_690_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_738_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
lean_object* v_fst_696_; lean_object* v_snd_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_737_; 
v_fst_696_ = lean_ctor_get(v_snd_691_, 0);
v_snd_697_ = lean_ctor_get(v_snd_691_, 1);
v_isSharedCheck_737_ = !lean_is_exclusive(v_snd_691_);
if (v_isSharedCheck_737_ == 0)
{
v___x_699_ = v_snd_691_;
v_isShared_700_ = v_isSharedCheck_737_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_snd_697_);
lean_inc(v_fst_696_);
lean_dec(v_snd_691_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_737_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v___f_701_; lean_object* v___x_703_; 
lean_inc(v_a_688_);
lean_inc_ref(v_inst_684_);
lean_inc(v_inst_682_);
v___f_701_ = lean_alloc_closure((void*)(l_Lean_Diff_diff___redArg___lam__2___boxed), 6, 5);
lean_closure_set(v___f_701_, 0, v___x_681_);
lean_closure_set(v___f_701_, 1, v_inst_682_);
lean_closure_set(v___f_701_, 2, v_original_683_);
lean_closure_set(v___f_701_, 3, v_inst_684_);
lean_closure_set(v___f_701_, 4, v_a_688_);
if (v_isShared_700_ == 0)
{
lean_ctor_set(v___x_699_, 1, v_fst_696_);
lean_ctor_set(v___x_699_, 0, v_fst_692_);
v___x_703_ = v___x_699_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_fst_692_);
lean_ctor_set(v_reuseFailAlloc_736_, 1, v_fst_696_);
v___x_703_ = v_reuseFailAlloc_736_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
lean_object* v___x_704_; lean_object* v_fst_705_; lean_object* v_snd_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_735_; 
lean_inc_ref(v___x_685_);
v___x_704_ = l___private_Init_While_0__repeatM_erased___redArg(v___x_685_, v___f_701_, v___x_703_);
v_fst_705_ = lean_ctor_get(v___x_704_, 0);
v_snd_706_ = lean_ctor_get(v___x_704_, 1);
v_isSharedCheck_735_ = !lean_is_exclusive(v___x_704_);
if (v_isSharedCheck_735_ == 0)
{
v___x_708_ = v___x_704_;
v_isShared_709_ = v_isSharedCheck_735_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_snd_706_);
lean_inc(v_fst_705_);
lean_dec(v___x_704_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_735_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
lean_object* v___f_710_; lean_object* v___x_712_; 
lean_inc(v_a_688_);
v___f_710_ = lean_alloc_closure((void*)(l_Lean_Diff_diff___redArg___lam__3___boxed), 6, 5);
lean_closure_set(v___f_710_, 0, v___x_686_);
lean_closure_set(v___f_710_, 1, v_inst_682_);
lean_closure_set(v___f_710_, 2, v_edited_687_);
lean_closure_set(v___f_710_, 3, v_inst_684_);
lean_closure_set(v___f_710_, 4, v_a_688_);
if (v_isShared_709_ == 0)
{
lean_ctor_set(v___x_708_, 1, v_snd_697_);
v___x_712_ = v___x_708_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v_fst_705_);
lean_ctor_set(v_reuseFailAlloc_734_, 1, v_snd_697_);
v___x_712_ = v_reuseFailAlloc_734_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
lean_object* v___x_713_; lean_object* v_fst_714_; lean_object* v_snd_715_; lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_733_; 
v___x_713_ = l___private_Init_While_0__repeatM_erased___redArg(v___x_685_, v___f_710_, v___x_712_);
v_fst_714_ = lean_ctor_get(v___x_713_, 0);
v_snd_715_ = lean_ctor_get(v___x_713_, 1);
v_isSharedCheck_733_ = !lean_is_exclusive(v___x_713_);
if (v_isSharedCheck_733_ == 0)
{
v___x_717_ = v___x_713_;
v_isShared_718_ = v_isSharedCheck_733_;
goto v_resetjp_716_;
}
else
{
lean_inc(v_snd_715_);
lean_inc(v_fst_714_);
lean_dec(v___x_713_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_733_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
uint8_t v___x_719_; lean_object* v___x_720_; lean_object* v___x_722_; 
v___x_719_ = 2;
v___x_720_ = lean_box(v___x_719_);
if (v_isShared_718_ == 0)
{
lean_ctor_set(v___x_717_, 1, v_a_688_);
lean_ctor_set(v___x_717_, 0, v___x_720_);
v___x_722_ = v___x_717_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v___x_720_);
lean_ctor_set(v_reuseFailAlloc_732_, 1, v_a_688_);
v___x_722_ = v_reuseFailAlloc_732_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_728_; 
v___x_723_ = lean_array_push(v_fst_714_, v___x_722_);
v___x_724_ = lean_unsigned_to_nat(1u);
v___x_725_ = lean_nat_add(v_snd_706_, v___x_724_);
lean_dec(v_snd_706_);
v___x_726_ = lean_nat_add(v_snd_715_, v___x_724_);
lean_dec(v_snd_715_);
if (v_isShared_695_ == 0)
{
lean_ctor_set(v___x_694_, 1, v___x_726_);
lean_ctor_set(v___x_694_, 0, v___x_725_);
v___x_728_ = v___x_694_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v___x_725_);
lean_ctor_set(v_reuseFailAlloc_731_, 1, v___x_726_);
v___x_728_ = v_reuseFailAlloc_731_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
lean_object* v___x_729_; lean_object* v___x_730_; 
v___x_729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_729_, 0, v___x_723_);
lean_ctor_set(v___x_729_, 1, v___x_728_);
v___x_730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_730_, 0, v___x_729_);
return v___x_730_;
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
LEAN_EXPORT lean_object* l_Lean_Diff_diff___redArg___lam__5(lean_object* v___x_739_, lean_object* v_original_740_, lean_object* v_b_741_){
_start:
{
lean_object* v_fst_742_; lean_object* v_snd_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_763_; 
v_fst_742_ = lean_ctor_get(v_b_741_, 0);
v_snd_743_ = lean_ctor_get(v_b_741_, 1);
v_isSharedCheck_763_ = !lean_is_exclusive(v_b_741_);
if (v_isSharedCheck_763_ == 0)
{
v___x_745_ = v_b_741_;
v_isShared_746_ = v_isSharedCheck_763_;
goto v_resetjp_744_;
}
else
{
lean_inc(v_snd_743_);
lean_inc(v_fst_742_);
lean_dec(v_b_741_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_763_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
uint8_t v___x_747_; 
v___x_747_ = lean_nat_dec_lt(v_snd_743_, v___x_739_);
if (v___x_747_ == 0)
{
lean_object* v___x_749_; 
if (v_isShared_746_ == 0)
{
v___x_749_ = v___x_745_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_fst_742_);
lean_ctor_set(v_reuseFailAlloc_751_, 1, v_snd_743_);
v___x_749_ = v_reuseFailAlloc_751_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
lean_object* v___x_750_; 
v___x_750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_750_, 0, v___x_749_);
return v___x_750_;
}
}
else
{
uint8_t v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_756_; 
v___x_752_ = 1;
v___x_753_ = lean_array_fget_borrowed(v_original_740_, v_snd_743_);
v___x_754_ = lean_box(v___x_752_);
lean_inc(v___x_753_);
if (v_isShared_746_ == 0)
{
lean_ctor_set(v___x_745_, 1, v___x_753_);
lean_ctor_set(v___x_745_, 0, v___x_754_);
v___x_756_ = v___x_745_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v___x_754_);
lean_ctor_set(v_reuseFailAlloc_762_, 1, v___x_753_);
v___x_756_ = v_reuseFailAlloc_762_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
v___x_757_ = lean_array_push(v_fst_742_, v___x_756_);
v___x_758_ = lean_unsigned_to_nat(1u);
v___x_759_ = lean_nat_add(v_snd_743_, v___x_758_);
lean_dec(v_snd_743_);
v___x_760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_760_, 0, v___x_757_);
lean_ctor_set(v___x_760_, 1, v___x_759_);
v___x_761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_761_, 0, v___x_760_);
return v___x_761_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_diff___redArg___lam__5___boxed(lean_object* v___x_764_, lean_object* v_original_765_, lean_object* v_b_766_){
_start:
{
lean_object* v_res_767_; 
v_res_767_ = l_Lean_Diff_diff___redArg___lam__5(v___x_764_, v_original_765_, v_b_766_);
lean_dec_ref(v_original_765_);
lean_dec(v___x_764_);
return v_res_767_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_diff___redArg___lam__6(lean_object* v___x_768_, lean_object* v_edited_769_, lean_object* v_b_770_){
_start:
{
lean_object* v_fst_771_; lean_object* v_snd_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_792_; 
v_fst_771_ = lean_ctor_get(v_b_770_, 0);
v_snd_772_ = lean_ctor_get(v_b_770_, 1);
v_isSharedCheck_792_ = !lean_is_exclusive(v_b_770_);
if (v_isSharedCheck_792_ == 0)
{
v___x_774_ = v_b_770_;
v_isShared_775_ = v_isSharedCheck_792_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_snd_772_);
lean_inc(v_fst_771_);
lean_dec(v_b_770_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_792_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
uint8_t v___x_776_; 
v___x_776_ = lean_nat_dec_lt(v_snd_772_, v___x_768_);
if (v___x_776_ == 0)
{
lean_object* v___x_778_; 
if (v_isShared_775_ == 0)
{
v___x_778_ = v___x_774_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v_fst_771_);
lean_ctor_set(v_reuseFailAlloc_780_, 1, v_snd_772_);
v___x_778_ = v_reuseFailAlloc_780_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
lean_object* v___x_779_; 
v___x_779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_779_, 0, v___x_778_);
return v___x_779_;
}
}
else
{
uint8_t v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_785_; 
v___x_781_ = 0;
v___x_782_ = lean_array_fget_borrowed(v_edited_769_, v_snd_772_);
v___x_783_ = lean_box(v___x_781_);
lean_inc(v___x_782_);
if (v_isShared_775_ == 0)
{
lean_ctor_set(v___x_774_, 1, v___x_782_);
lean_ctor_set(v___x_774_, 0, v___x_783_);
v___x_785_ = v___x_774_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v___x_783_);
lean_ctor_set(v_reuseFailAlloc_791_, 1, v___x_782_);
v___x_785_ = v_reuseFailAlloc_791_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_786_ = lean_array_push(v_fst_771_, v___x_785_);
v___x_787_ = lean_unsigned_to_nat(1u);
v___x_788_ = lean_nat_add(v_snd_772_, v___x_787_);
lean_dec(v_snd_772_);
v___x_789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_789_, 0, v___x_786_);
lean_ctor_set(v___x_789_, 1, v___x_788_);
v___x_790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_790_, 0, v___x_789_);
return v___x_790_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_diff___redArg___lam__6___boxed(lean_object* v___x_793_, lean_object* v_edited_794_, lean_object* v_b_795_){
_start:
{
lean_object* v_res_796_; 
v_res_796_ = l_Lean_Diff_diff___redArg___lam__6(v___x_793_, v_edited_794_, v_b_795_);
lean_dec_ref(v_edited_794_);
lean_dec(v___x_793_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_diff___redArg(lean_object* v_inst_806_, lean_object* v_inst_807_, lean_object* v_inst_808_, lean_object* v_original_809_, lean_object* v_edited_810_){
_start:
{
lean_object* v___x_811_; lean_object* v_i_812_; lean_object* v___x_813_; uint8_t v___x_814_; 
v___x_811_ = ((lean_object*)(l_Lean_Diff_lcs___redArg___closed__9));
v_i_812_ = lean_unsigned_to_nat(0u);
v___x_813_ = lean_array_get_size(v_original_809_);
v___x_814_ = lean_nat_dec_lt(v_i_812_, v___x_813_);
if (v___x_814_ == 0)
{
lean_object* v___f_815_; size_t v_sz_816_; size_t v___x_817_; lean_object* v___x_818_; 
lean_dec_ref(v_original_809_);
lean_dec(v_inst_808_);
lean_dec_ref(v_inst_807_);
lean_dec_ref(v_inst_806_);
v___f_815_ = ((lean_object*)(l_Lean_Diff_diff___redArg___closed__0));
v_sz_816_ = lean_array_size(v_edited_810_);
v___x_817_ = ((size_t)0ULL);
v___x_818_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_811_, v___f_815_, v_sz_816_, v___x_817_, v_edited_810_);
return v___x_818_;
}
else
{
lean_object* v___x_819_; uint8_t v___x_820_; 
v___x_819_ = lean_array_get_size(v_edited_810_);
v___x_820_ = lean_nat_dec_lt(v_i_812_, v___x_819_);
if (v___x_820_ == 0)
{
lean_object* v___f_821_; size_t v_sz_822_; size_t v___x_823_; lean_object* v___x_824_; 
lean_dec_ref(v_edited_810_);
lean_dec(v_inst_808_);
lean_dec_ref(v_inst_807_);
lean_dec_ref(v_inst_806_);
v___f_821_ = ((lean_object*)(l_Lean_Diff_diff___redArg___closed__1));
v_sz_822_ = lean_array_size(v_original_809_);
v___x_823_ = ((size_t)0ULL);
v___x_824_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_811_, v___f_821_, v_sz_822_, v___x_823_, v_original_809_);
return v___x_824_;
}
else
{
lean_object* v___f_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v_ds_828_; lean_object* v___x_829_; size_t v_sz_830_; size_t v___x_831_; lean_object* v___x_832_; lean_object* v_snd_833_; lean_object* v_fst_834_; lean_object* v_fst_835_; lean_object* v_snd_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_857_; 
lean_inc_ref_n(v_edited_810_, 2);
lean_inc_ref(v_inst_806_);
lean_inc_ref_n(v_original_809_, 2);
v___f_825_ = lean_alloc_closure((void*)(l_Lean_Diff_diff___redArg___lam__4), 10, 7);
lean_closure_set(v___f_825_, 0, v___x_813_);
lean_closure_set(v___f_825_, 1, v_inst_808_);
lean_closure_set(v___f_825_, 2, v_original_809_);
lean_closure_set(v___f_825_, 3, v_inst_806_);
lean_closure_set(v___f_825_, 4, v___x_811_);
lean_closure_set(v___f_825_, 5, v___x_819_);
lean_closure_set(v___f_825_, 6, v_edited_810_);
v___x_826_ = l_Array_toSubarray___redArg(v_original_809_, v_i_812_, v___x_813_);
v___x_827_ = l_Array_toSubarray___redArg(v_edited_810_, v_i_812_, v___x_819_);
v_ds_828_ = l_Lean_Diff_lcs___redArg(v_inst_806_, v_inst_807_, v___x_826_, v___x_827_);
v___x_829_ = ((lean_object*)(l_Lean_Diff_diff___redArg___closed__4));
v_sz_830_ = lean_array_size(v_ds_828_);
v___x_831_ = ((size_t)0ULL);
v___x_832_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_811_, v_ds_828_, v___f_825_, v_sz_830_, v___x_831_, v___x_829_);
v_snd_833_ = lean_ctor_get(v___x_832_, 1);
lean_inc(v_snd_833_);
v_fst_834_ = lean_ctor_get(v___x_832_, 0);
lean_inc(v_fst_834_);
lean_dec(v___x_832_);
v_fst_835_ = lean_ctor_get(v_snd_833_, 0);
v_snd_836_ = lean_ctor_get(v_snd_833_, 1);
v_isSharedCheck_857_ = !lean_is_exclusive(v_snd_833_);
if (v_isSharedCheck_857_ == 0)
{
v___x_838_ = v_snd_833_;
v_isShared_839_ = v_isSharedCheck_857_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_snd_836_);
lean_inc(v_fst_835_);
lean_dec(v_snd_833_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_857_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v___f_840_; lean_object* v___x_842_; 
v___f_840_ = lean_alloc_closure((void*)(l_Lean_Diff_diff___redArg___lam__5___boxed), 3, 2);
lean_closure_set(v___f_840_, 0, v___x_813_);
lean_closure_set(v___f_840_, 1, v_original_809_);
if (v_isShared_839_ == 0)
{
lean_ctor_set(v___x_838_, 1, v_fst_835_);
lean_ctor_set(v___x_838_, 0, v_fst_834_);
v___x_842_ = v___x_838_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_fst_834_);
lean_ctor_set(v_reuseFailAlloc_856_, 1, v_fst_835_);
v___x_842_ = v_reuseFailAlloc_856_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
lean_object* v___x_843_; lean_object* v_fst_844_; lean_object* v___x_846_; uint8_t v_isShared_847_; uint8_t v_isSharedCheck_854_; 
v___x_843_ = l___private_Init_While_0__repeatM_erased___redArg(v___x_811_, v___f_840_, v___x_842_);
v_fst_844_ = lean_ctor_get(v___x_843_, 0);
v_isSharedCheck_854_ = !lean_is_exclusive(v___x_843_);
if (v_isSharedCheck_854_ == 0)
{
lean_object* v_unused_855_; 
v_unused_855_ = lean_ctor_get(v___x_843_, 1);
lean_dec(v_unused_855_);
v___x_846_ = v___x_843_;
v_isShared_847_ = v_isSharedCheck_854_;
goto v_resetjp_845_;
}
else
{
lean_inc(v_fst_844_);
lean_dec(v___x_843_);
v___x_846_ = lean_box(0);
v_isShared_847_ = v_isSharedCheck_854_;
goto v_resetjp_845_;
}
v_resetjp_845_:
{
lean_object* v___f_848_; lean_object* v___x_850_; 
v___f_848_ = lean_alloc_closure((void*)(l_Lean_Diff_diff___redArg___lam__6___boxed), 3, 2);
lean_closure_set(v___f_848_, 0, v___x_819_);
lean_closure_set(v___f_848_, 1, v_edited_810_);
if (v_isShared_847_ == 0)
{
lean_ctor_set(v___x_846_, 1, v_snd_836_);
v___x_850_ = v___x_846_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v_fst_844_);
lean_ctor_set(v_reuseFailAlloc_853_, 1, v_snd_836_);
v___x_850_ = v_reuseFailAlloc_853_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
lean_object* v___x_851_; lean_object* v_fst_852_; 
v___x_851_ = l___private_Init_While_0__repeatM_erased___redArg(v___x_811_, v___f_848_, v___x_850_);
v_fst_852_ = lean_ctor_get(v___x_851_, 0);
lean_inc(v_fst_852_);
lean_dec(v___x_851_);
return v_fst_852_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_diff(lean_object* v_00_u03b1_858_, lean_object* v_inst_859_, lean_object* v_inst_860_, lean_object* v_inst_861_, lean_object* v_original_862_, lean_object* v_edited_863_){
_start:
{
lean_object* v___x_864_; 
v___x_864_ = l_Lean_Diff_diff___redArg(v_inst_859_, v_inst_860_, v_inst_861_, v_original_862_, v_edited_863_);
return v___x_864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_linesToString___redArg___lam__0(lean_object* v_inst_866_, lean_object* v_out_867_, lean_object* v_a_868_, lean_object* v_x_869_, lean_object* v___y_870_){
_start:
{
lean_object* v_fst_871_; lean_object* v_snd_872_; lean_object* v___x_873_; uint8_t v___x_874_; 
v_fst_871_ = lean_ctor_get(v_a_868_, 0);
lean_inc(v_fst_871_);
v_snd_872_ = lean_ctor_get(v_a_868_, 1);
lean_inc(v_snd_872_);
lean_dec_ref(v_a_868_);
v___x_873_ = lean_apply_1(v_inst_866_, v_snd_872_);
v___x_874_ = lean_string_dec_eq(v___x_873_, v_out_867_);
if (v___x_874_ == 0)
{
uint8_t v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_875_ = lean_unbox(v_fst_871_);
lean_dec(v_fst_871_);
v___x_876_ = l_Lean_Diff_Action_linePrefix(v___x_875_);
v___x_877_ = ((lean_object*)(l_Lean_Diff_Action_linePrefix___closed__2));
v___x_878_ = lean_string_append(v___x_876_, v___x_877_);
v___x_879_ = lean_string_append(v___x_878_, v___x_873_);
lean_dec_ref(v___x_873_);
v___x_880_ = ((lean_object*)(l_Lean_Diff_linesToString___redArg___lam__0___closed__0));
v___x_881_ = lean_string_append(v___x_879_, v___x_880_);
v___x_882_ = lean_string_append(v___y_870_, v___x_881_);
lean_dec_ref(v___x_881_);
v___x_883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_883_, 0, v___x_882_);
return v___x_883_;
}
else
{
uint8_t v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
lean_dec_ref(v___x_873_);
v___x_884_ = lean_unbox(v_fst_871_);
lean_dec(v_fst_871_);
v___x_885_ = l_Lean_Diff_Action_linePrefix(v___x_884_);
v___x_886_ = ((lean_object*)(l_Lean_Diff_linesToString___redArg___lam__0___closed__0));
v___x_887_ = lean_string_append(v___x_885_, v___x_886_);
v___x_888_ = lean_string_append(v___y_870_, v___x_887_);
lean_dec_ref(v___x_887_);
v___x_889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_889_, 0, v___x_888_);
return v___x_889_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_linesToString___redArg___lam__0___boxed(lean_object* v_inst_890_, lean_object* v_out_891_, lean_object* v_a_892_, lean_object* v_x_893_, lean_object* v___y_894_){
_start:
{
lean_object* v_res_895_; 
v_res_895_ = l_Lean_Diff_linesToString___redArg___lam__0(v_inst_890_, v_out_891_, v_a_892_, v_x_893_, v___y_894_);
lean_dec_ref(v_out_891_);
return v_res_895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_linesToString___redArg(lean_object* v_inst_897_, lean_object* v_lines_898_){
_start:
{
lean_object* v___x_899_; lean_object* v_out_900_; lean_object* v___f_901_; size_t v_sz_902_; size_t v___x_903_; lean_object* v___x_904_; 
v___x_899_ = ((lean_object*)(l_Lean_Diff_lcs___redArg___closed__9));
v_out_900_ = ((lean_object*)(l_Lean_Diff_linesToString___redArg___closed__0));
v___f_901_ = lean_alloc_closure((void*)(l_Lean_Diff_linesToString___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_901_, 0, v_inst_897_);
lean_closure_set(v___f_901_, 1, v_out_900_);
v_sz_902_ = lean_array_size(v_lines_898_);
v___x_903_ = ((size_t)0ULL);
v___x_904_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_899_, v_lines_898_, v___f_901_, v_sz_902_, v___x_903_, v_out_900_);
return v___x_904_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_linesToString(lean_object* v_00_u03b1_905_, lean_object* v_inst_906_, lean_object* v_lines_907_){
_start:
{
lean_object* v___x_908_; 
v___x_908_ = l_Lean_Diff_linesToString___redArg(v_inst_906_, v_lines_907_);
return v___x_908_;
}
}
lean_object* runtime_initialize_Init_Data_Array_Subarray_Split(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Slice_Array_Iterator(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_HashMap_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_RangeIterator(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Nat(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_Diff(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Array_Subarray_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Slice_Array_Iterator(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_HashMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_RangeIterator(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Diff_instInhabitedAction_default = _init_l_Lean_Diff_instInhabitedAction_default();
l_Lean_Diff_instInhabitedAction = _init_l_Lean_Diff_instInhabitedAction();
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_Diff(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Array_Subarray_Split(uint8_t builtin);
lean_object* initialize_Init_Data_Slice_Array_Iterator(uint8_t builtin);
lean_object* initialize_Init_Data_Range(uint8_t builtin);
lean_object* initialize_Std_Data_HashMap_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_RangeIterator(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Nat(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_Diff(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Array_Subarray_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Slice_Array_Iterator(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_HashMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_RangeIterator(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_Diff(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_Diff(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_Diff(builtin);
}
#ifdef __cplusplus
}
#endif
