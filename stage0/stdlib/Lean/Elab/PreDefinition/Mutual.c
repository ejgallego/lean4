// Lean compiler output
// Module: Lean.Elab.PreDefinition.Mutual
// Imports: public import Lean.Elab.PreDefinition.Basic
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Elab_applyAttributesOf(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_eraseRecAppSyntax(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_abstractNestedProofs(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_enableRealizationsForConst(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
uint8_t l_Lean_Elab_DefKind_isTheorem(uint8_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedPreDefinition_default;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_PreDefinition_filterAttrs(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_Elab_addNonRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addNonRec(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
extern lean_object* l_Lean_allowUnsafeReducibility;
lean_object* l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(lean_object*);
lean_object* l_Lean_Meta_saveEqnAffectingOptions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "implemented_by"};
static const lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(221, 249, 143, 128, 101, 138, 146, 72)}};
static const lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__3(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2_spec__2___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__0 = (const lean_object*)&l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__1;
static lean_once_cell_t l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__2;
static lean_once_cell_t l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2_spec__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_cleanPreDef(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_cleanPreDef___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0_spec__1_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0_spec__1_spec__7___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0_spec__1_spec__7___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0_spec__1_spec__7___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__2;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reducible"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(29, 67, 225, 118, 155, 2, 197, 97)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "semireducible"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(106, 254, 211, 230, 8, 182, 79, 36)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "instance_reducible"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(125, 180, 213, 185, 56, 77, 23, 14)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "implicit_reducible"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(138, 100, 121, 167, 26, 160, 176, 156)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__7_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_addPreDefAttributes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_addPreDefAttributes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0_spec__1_spec__7(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1(lean_object* v_opts_1_, lean_object* v_opt_2_){
_start:
{
lean_object* v_name_3_; lean_object* v_defValue_4_; lean_object* v_map_5_; lean_object* v___x_6_; 
v_name_3_ = lean_ctor_get(v_opt_2_, 0);
v_defValue_4_ = lean_ctor_get(v_opt_2_, 1);
v_map_5_ = lean_ctor_get(v_opts_1_, 0);
v___x_6_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_5_, v_name_3_);
if (lean_obj_tag(v___x_6_) == 0)
{
lean_inc(v_defValue_4_);
return v_defValue_4_;
}
else
{
lean_object* v_val_7_; 
v_val_7_ = lean_ctor_get(v___x_6_, 0);
lean_inc(v_val_7_);
lean_dec_ref_known(v___x_6_, 1);
if (lean_obj_tag(v_val_7_) == 3)
{
lean_object* v_v_8_; 
v_v_8_ = lean_ctor_get(v_val_7_, 0);
lean_inc(v_v_8_);
lean_dec_ref_known(v_val_7_, 1);
return v_v_8_;
}
else
{
lean_dec(v_val_7_);
lean_inc(v_defValue_4_);
return v_defValue_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1___boxed(lean_object* v_opts_9_, lean_object* v_opt_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lean_Option_get___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1(v_opts_9_, v_opt_10_);
lean_dec_ref(v_opt_10_);
lean_dec_ref(v_opts_9_);
return v_res_11_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0(lean_object* v_attr_15_){
_start:
{
lean_object* v_name_16_; lean_object* v___x_17_; uint8_t v___x_18_; 
v_name_16_ = lean_ctor_get(v_attr_15_, 0);
v___x_17_ = ((lean_object*)(l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0___closed__1));
v___x_18_ = lean_name_eq(v_name_16_, v___x_17_);
if (v___x_18_ == 0)
{
uint8_t v___x_19_; 
v___x_19_ = 1;
return v___x_19_;
}
else
{
uint8_t v___x_20_; 
v___x_20_ = 0;
return v___x_20_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0___boxed(lean_object* v_attr_21_){
_start:
{
uint8_t v_res_22_; lean_object* v_r_23_; 
v_res_22_ = l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0(v_attr_21_);
lean_dec_ref(v_attr_21_);
v_r_23_ = lean_box(v_res_22_);
return v_r_23_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__3(lean_object* v_docCtx_24_, uint8_t v___x_25_, lean_object* v_declNames_26_, uint8_t v_cacheProofs_27_, lean_object* v_as_28_, size_t v_i_29_, size_t v_stop_30_, lean_object* v_b_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_){
_start:
{
uint8_t v___x_39_; 
v___x_39_ = lean_usize_dec_eq(v_i_29_, v_stop_30_);
if (v___x_39_ == 0)
{
uint8_t v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_40_ = 1;
v___x_41_ = lean_array_uget_borrowed(v_as_28_, v_i_29_);
lean_inc(v_declNames_26_);
lean_inc(v___x_41_);
lean_inc_ref(v_docCtx_24_);
v___x_42_ = l_Lean_Elab_addNonRec(v_docCtx_24_, v___x_41_, v___x_25_, v_declNames_26_, v_cacheProofs_27_, v___x_25_, v___x_40_, v___x_40_, v___y_32_, v___y_33_, v___y_34_, v___y_35_, v___y_36_, v___y_37_);
if (lean_obj_tag(v___x_42_) == 0)
{
lean_object* v_a_43_; size_t v___x_44_; size_t v___x_45_; 
v_a_43_ = lean_ctor_get(v___x_42_, 0);
lean_inc(v_a_43_);
lean_dec_ref_known(v___x_42_, 1);
v___x_44_ = ((size_t)1ULL);
v___x_45_ = lean_usize_add(v_i_29_, v___x_44_);
v_i_29_ = v___x_45_;
v_b_31_ = v_a_43_;
goto _start;
}
else
{
lean_dec(v_declNames_26_);
lean_dec_ref(v_docCtx_24_);
return v___x_42_;
}
}
else
{
lean_object* v___x_47_; 
lean_dec(v_declNames_26_);
lean_dec_ref(v_docCtx_24_);
v___x_47_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_47_, 0, v_b_31_);
return v___x_47_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__3___boxed(lean_object* v_docCtx_48_, lean_object* v___x_49_, lean_object* v_declNames_50_, lean_object* v_cacheProofs_51_, lean_object* v_as_52_, lean_object* v_i_53_, lean_object* v_stop_54_, lean_object* v_b_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_){
_start:
{
uint8_t v___x_4705__boxed_63_; uint8_t v_cacheProofs_boxed_64_; size_t v_i_boxed_65_; size_t v_stop_boxed_66_; lean_object* v_res_67_; 
v___x_4705__boxed_63_ = lean_unbox(v___x_49_);
v_cacheProofs_boxed_64_ = lean_unbox(v_cacheProofs_51_);
v_i_boxed_65_ = lean_unbox_usize(v_i_53_);
lean_dec(v_i_53_);
v_stop_boxed_66_ = lean_unbox_usize(v_stop_54_);
lean_dec(v_stop_54_);
v_res_67_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__3(v_docCtx_48_, v___x_4705__boxed_63_, v_declNames_50_, v_cacheProofs_boxed_64_, v_as_52_, v_i_boxed_65_, v_stop_boxed_66_, v_b_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_, v___y_60_, v___y_61_);
lean_dec(v___y_61_);
lean_dec_ref(v___y_60_);
lean_dec(v___y_59_);
lean_dec_ref(v___y_58_);
lean_dec(v___y_57_);
lean_dec_ref(v___y_56_);
lean_dec_ref(v_as_52_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2_spec__2___redArg(uint8_t v_flag_68_, lean_object* v___y_69_){
_start:
{
lean_object* v___x_71_; lean_object* v_infoState_72_; lean_object* v_env_73_; lean_object* v_nextMacroScope_74_; lean_object* v_ngen_75_; lean_object* v_auxDeclNGen_76_; lean_object* v_traceState_77_; lean_object* v_cache_78_; lean_object* v_recordedDeps_79_; lean_object* v_messages_80_; lean_object* v_snapshotTasks_81_; lean_object* v___x_83_; uint8_t v_isShared_84_; uint8_t v_isSharedCheck_101_; 
v___x_71_ = lean_st_ref_take(v___y_69_);
v_infoState_72_ = lean_ctor_get(v___x_71_, 8);
v_env_73_ = lean_ctor_get(v___x_71_, 0);
v_nextMacroScope_74_ = lean_ctor_get(v___x_71_, 1);
v_ngen_75_ = lean_ctor_get(v___x_71_, 2);
v_auxDeclNGen_76_ = lean_ctor_get(v___x_71_, 3);
v_traceState_77_ = lean_ctor_get(v___x_71_, 4);
v_cache_78_ = lean_ctor_get(v___x_71_, 5);
v_recordedDeps_79_ = lean_ctor_get(v___x_71_, 6);
v_messages_80_ = lean_ctor_get(v___x_71_, 7);
v_snapshotTasks_81_ = lean_ctor_get(v___x_71_, 9);
v_isSharedCheck_101_ = !lean_is_exclusive(v___x_71_);
if (v_isSharedCheck_101_ == 0)
{
v___x_83_ = v___x_71_;
v_isShared_84_ = v_isSharedCheck_101_;
goto v_resetjp_82_;
}
else
{
lean_inc(v_snapshotTasks_81_);
lean_inc(v_infoState_72_);
lean_inc(v_messages_80_);
lean_inc(v_recordedDeps_79_);
lean_inc(v_cache_78_);
lean_inc(v_traceState_77_);
lean_inc(v_auxDeclNGen_76_);
lean_inc(v_ngen_75_);
lean_inc(v_nextMacroScope_74_);
lean_inc(v_env_73_);
lean_dec(v___x_71_);
v___x_83_ = lean_box(0);
v_isShared_84_ = v_isSharedCheck_101_;
goto v_resetjp_82_;
}
v_resetjp_82_:
{
lean_object* v_assignment_85_; lean_object* v_lazyAssignment_86_; lean_object* v_trees_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_100_; 
v_assignment_85_ = lean_ctor_get(v_infoState_72_, 0);
v_lazyAssignment_86_ = lean_ctor_get(v_infoState_72_, 1);
v_trees_87_ = lean_ctor_get(v_infoState_72_, 2);
v_isSharedCheck_100_ = !lean_is_exclusive(v_infoState_72_);
if (v_isSharedCheck_100_ == 0)
{
v___x_89_ = v_infoState_72_;
v_isShared_90_ = v_isSharedCheck_100_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_trees_87_);
lean_inc(v_lazyAssignment_86_);
lean_inc(v_assignment_85_);
lean_dec(v_infoState_72_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_100_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
lean_object* v___x_91_; lean_object* v___x_93_; 
v___x_91_ = lean_box(0);
if (v_isShared_90_ == 0)
{
v___x_93_ = v___x_89_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v_assignment_85_);
lean_ctor_set(v_reuseFailAlloc_99_, 1, v_lazyAssignment_86_);
lean_ctor_set(v_reuseFailAlloc_99_, 2, v_trees_87_);
v___x_93_ = v_reuseFailAlloc_99_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
lean_object* v___x_95_; 
lean_ctor_set_uint8(v___x_93_, sizeof(void*)*3, v_flag_68_);
if (v_isShared_84_ == 0)
{
lean_ctor_set(v___x_83_, 8, v___x_93_);
v___x_95_ = v___x_83_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v_env_73_);
lean_ctor_set(v_reuseFailAlloc_98_, 1, v_nextMacroScope_74_);
lean_ctor_set(v_reuseFailAlloc_98_, 2, v_ngen_75_);
lean_ctor_set(v_reuseFailAlloc_98_, 3, v_auxDeclNGen_76_);
lean_ctor_set(v_reuseFailAlloc_98_, 4, v_traceState_77_);
lean_ctor_set(v_reuseFailAlloc_98_, 5, v_cache_78_);
lean_ctor_set(v_reuseFailAlloc_98_, 6, v_recordedDeps_79_);
lean_ctor_set(v_reuseFailAlloc_98_, 7, v_messages_80_);
lean_ctor_set(v_reuseFailAlloc_98_, 8, v___x_93_);
lean_ctor_set(v_reuseFailAlloc_98_, 9, v_snapshotTasks_81_);
v___x_95_ = v_reuseFailAlloc_98_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_96_ = lean_st_ref_put(v___y_69_, v___x_95_);
v___x_97_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_97_, 0, v___x_91_);
return v___x_97_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2_spec__2___redArg___boxed(lean_object* v_flag_102_, lean_object* v___y_103_, lean_object* v___y_104_){
_start:
{
uint8_t v_flag_boxed_105_; lean_object* v_res_106_; 
v_flag_boxed_105_ = lean_unbox(v_flag_102_);
v_res_106_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2_spec__2___redArg(v_flag_boxed_105_, v___y_103_);
lean_dec(v___y_103_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2___redArg(uint8_t v_flag_107_, lean_object* v_x_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_){
_start:
{
lean_object* v___x_116_; lean_object* v_infoState_117_; uint8_t v_enabled_118_; lean_object* v_a_120_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_116_ = lean_st_ref_get(v___y_114_);
v_infoState_117_ = lean_ctor_get(v___x_116_, 8);
lean_inc_ref(v_infoState_117_);
lean_dec(v___x_116_);
v_enabled_118_ = lean_ctor_get_uint8(v_infoState_117_, sizeof(void*)*3);
lean_dec_ref(v_infoState_117_);
v___x_130_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2_spec__2___redArg(v_flag_107_, v___y_114_);
lean_dec_ref(v___x_130_);
lean_inc(v___y_114_);
lean_inc_ref(v___y_113_);
lean_inc(v___y_112_);
lean_inc_ref(v___y_111_);
lean_inc(v___y_110_);
lean_inc_ref(v___y_109_);
v___x_131_ = lean_apply_7(v_x_108_, v___y_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_, lean_box(0));
if (lean_obj_tag(v___x_131_) == 0)
{
lean_object* v_a_132_; lean_object* v___x_133_; lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_140_; 
v_a_132_ = lean_ctor_get(v___x_131_, 0);
lean_inc(v_a_132_);
lean_dec_ref_known(v___x_131_, 1);
v___x_133_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2_spec__2___redArg(v_enabled_118_, v___y_114_);
v_isSharedCheck_140_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_140_ == 0)
{
lean_object* v_unused_141_; 
v_unused_141_ = lean_ctor_get(v___x_133_, 0);
lean_dec(v_unused_141_);
v___x_135_ = v___x_133_;
v_isShared_136_ = v_isSharedCheck_140_;
goto v_resetjp_134_;
}
else
{
lean_dec(v___x_133_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_140_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v___x_138_; 
if (v_isShared_136_ == 0)
{
lean_ctor_set(v___x_135_, 0, v_a_132_);
v___x_138_ = v___x_135_;
goto v_reusejp_137_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v_a_132_);
v___x_138_ = v_reuseFailAlloc_139_;
goto v_reusejp_137_;
}
v_reusejp_137_:
{
return v___x_138_;
}
}
}
else
{
lean_object* v_a_142_; 
v_a_142_ = lean_ctor_get(v___x_131_, 0);
lean_inc(v_a_142_);
lean_dec_ref_known(v___x_131_, 1);
v_a_120_ = v_a_142_;
goto v___jp_119_;
}
v___jp_119_:
{
lean_object* v___x_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_128_; 
v___x_121_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2_spec__2___redArg(v_enabled_118_, v___y_114_);
v_isSharedCheck_128_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_128_ == 0)
{
lean_object* v_unused_129_; 
v_unused_129_ = lean_ctor_get(v___x_121_, 0);
lean_dec(v_unused_129_);
v___x_123_ = v___x_121_;
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
else
{
lean_dec(v___x_121_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v___x_126_; 
if (v_isShared_124_ == 0)
{
lean_ctor_set_tag(v___x_123_, 1);
lean_ctor_set(v___x_123_, 0, v_a_120_);
v___x_126_ = v___x_123_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v_a_120_);
v___x_126_ = v_reuseFailAlloc_127_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
return v___x_126_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2___redArg___boxed(lean_object* v_flag_143_, lean_object* v_x_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_){
_start:
{
uint8_t v_flag_boxed_152_; lean_object* v_res_153_; 
v_flag_boxed_152_ = lean_unbox(v_flag_143_);
v_res_153_ = l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2___redArg(v_flag_boxed_152_, v_x_144_, v___y_145_, v___y_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_);
lean_dec(v___y_150_);
lean_dec_ref(v___y_149_);
lean_dec(v___y_148_);
lean_dec_ref(v___y_147_);
lean_dec(v___y_146_);
lean_dec_ref(v___y_145_);
return v_res_153_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__0(lean_object* v_a_154_, lean_object* v_a_155_){
_start:
{
if (lean_obj_tag(v_a_154_) == 0)
{
lean_object* v___x_156_; 
v___x_156_ = l_List_reverse___redArg(v_a_155_);
return v___x_156_;
}
else
{
lean_object* v_head_157_; lean_object* v_tail_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_167_; 
v_head_157_ = lean_ctor_get(v_a_154_, 0);
v_tail_158_ = lean_ctor_get(v_a_154_, 1);
v_isSharedCheck_167_ = !lean_is_exclusive(v_a_154_);
if (v_isSharedCheck_167_ == 0)
{
v___x_160_ = v_a_154_;
v_isShared_161_ = v_isSharedCheck_167_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_tail_158_);
lean_inc(v_head_157_);
lean_dec(v_a_154_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_167_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v_declName_162_; lean_object* v___x_164_; 
v_declName_162_ = lean_ctor_get(v_head_157_, 3);
lean_inc(v_declName_162_);
lean_dec(v_head_157_);
if (v_isShared_161_ == 0)
{
lean_ctor_set(v___x_160_, 1, v_a_155_);
lean_ctor_set(v___x_160_, 0, v_declName_162_);
v___x_164_ = v___x_160_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_declName_162_);
lean_ctor_set(v_reuseFailAlloc_166_, 1, v_a_155_);
v___x_164_ = v_reuseFailAlloc_166_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
v_a_154_ = v_tail_158_;
v_a_155_ = v___x_164_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5(lean_object* v_o_171_, lean_object* v_k_172_, uint8_t v_v_173_){
_start:
{
lean_object* v_map_174_; uint8_t v_hasTrace_175_; lean_object* v___x_177_; uint8_t v_isShared_178_; uint8_t v_isSharedCheck_189_; 
v_map_174_ = lean_ctor_get(v_o_171_, 0);
v_hasTrace_175_ = lean_ctor_get_uint8(v_o_171_, sizeof(void*)*1);
v_isSharedCheck_189_ = !lean_is_exclusive(v_o_171_);
if (v_isSharedCheck_189_ == 0)
{
v___x_177_ = v_o_171_;
v_isShared_178_ = v_isSharedCheck_189_;
goto v_resetjp_176_;
}
else
{
lean_inc(v_map_174_);
lean_dec(v_o_171_);
v___x_177_ = lean_box(0);
v_isShared_178_ = v_isSharedCheck_189_;
goto v_resetjp_176_;
}
v_resetjp_176_:
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_179_, 0, v_v_173_);
lean_inc(v_k_172_);
v___x_180_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_172_, v___x_179_, v_map_174_);
if (v_hasTrace_175_ == 0)
{
lean_object* v___x_181_; uint8_t v___x_182_; lean_object* v___x_184_; 
v___x_181_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5___closed__1));
v___x_182_ = l_Lean_Name_isPrefixOf(v___x_181_, v_k_172_);
lean_dec(v_k_172_);
if (v_isShared_178_ == 0)
{
lean_ctor_set(v___x_177_, 0, v___x_180_);
v___x_184_ = v___x_177_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v___x_180_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
lean_ctor_set_uint8(v___x_184_, sizeof(void*)*1, v___x_182_);
return v___x_184_;
}
}
else
{
lean_object* v___x_187_; 
lean_dec(v_k_172_);
if (v_isShared_178_ == 0)
{
lean_ctor_set(v___x_177_, 0, v___x_180_);
v___x_187_ = v___x_177_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v___x_180_);
lean_ctor_set_uint8(v_reuseFailAlloc_188_, sizeof(void*)*1, v_hasTrace_175_);
v___x_187_ = v_reuseFailAlloc_188_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
return v___x_187_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5___boxed(lean_object* v_o_190_, lean_object* v_k_191_, lean_object* v_v_192_){
_start:
{
uint8_t v_v_boxed_193_; lean_object* v_res_194_; 
v_v_boxed_193_ = lean_unbox(v_v_192_);
v_res_194_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5(v_o_190_, v_k_191_, v_v_boxed_193_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4(lean_object* v_opts_195_, lean_object* v_opt_196_, uint8_t v_val_197_){
_start:
{
lean_object* v_name_198_; lean_object* v___x_199_; 
v_name_198_ = lean_ctor_get(v_opt_196_, 0);
lean_inc(v_name_198_);
lean_dec_ref(v_opt_196_);
v___x_199_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5(v_opts_195_, v_name_198_, v_val_197_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4___boxed(lean_object* v_opts_200_, lean_object* v_opt_201_, lean_object* v_val_202_){
_start:
{
uint8_t v_val_boxed_203_; lean_object* v_res_204_; 
v_val_boxed_203_ = lean_unbox(v_val_202_);
v_res_204_ = l_Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4(v_opts_200_, v_opt_201_, v_val_boxed_203_);
return v_res_204_;
}
}
static lean_object* _init_l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__1(void){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_206_;
}
}
static lean_object* _init_l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__2(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_207_ = lean_obj_once(&l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__1, &l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__1_once, _init_l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__1);
v___x_208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_208_, 0, v___x_207_);
return v___x_208_;
}
}
static lean_object* _init_l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__3(void){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_209_ = lean_obj_once(&l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__2, &l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__2_once, _init_l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__2);
v___x_210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_210_, 0, v___x_209_);
lean_ctor_set(v___x_210_, 1, v___x_209_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary(lean_object* v_docCtx_211_, lean_object* v_preDefs_212_, lean_object* v_preDefsNonrec_213_, lean_object* v_unaryPreDefNonRec_214_, uint8_t v_cacheProofs_215_, lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_, lean_object* v_a_221_){
_start:
{
lean_object* v_declName_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v_toCold_227_; lean_object* v_declName_228_; lean_object* v_currRecDepth_229_; lean_object* v_ref_230_; uint8_t v_suppressElabErrors_231_; uint8_t v_checkDeprecated_232_; uint8_t v_isRecordingDeps_233_; lean_object* v_fileName_234_; lean_object* v_fileMap_235_; lean_object* v_options_236_; lean_object* v_currNamespace_237_; lean_object* v_openDecls_238_; lean_object* v_initHeartbeats_239_; lean_object* v_maxHeartbeats_240_; lean_object* v_quotContext_241_; lean_object* v_currMacroScope_242_; lean_object* v_cancelTk_x3f_243_; lean_object* v_inheritedTraceOptions_244_; lean_object* v___f_245_; lean_object* v_preDefNonRec_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v_declNames_249_; uint8_t v___x_250_; lean_object* v___y_252_; uint16_t v___y_253_; lean_object* v_fileName_254_; lean_object* v_fileMap_255_; lean_object* v_currNamespace_256_; lean_object* v_openDecls_257_; lean_object* v_initHeartbeats_258_; lean_object* v_maxHeartbeats_259_; lean_object* v_quotContext_260_; lean_object* v_currMacroScope_261_; lean_object* v_cancelTk_x3f_262_; lean_object* v_inheritedTraceOptions_263_; lean_object* v_currRecDepth_264_; lean_object* v_ref_265_; uint8_t v_suppressElabErrors_266_; uint8_t v_checkDeprecated_267_; uint8_t v_isRecordingDeps_268_; lean_object* v___y_269_; lean_object* v_nextMacroScope_335_; lean_object* v_ngen_336_; lean_object* v_auxDeclNGen_337_; lean_object* v_traceState_338_; lean_object* v_recordedDeps_339_; lean_object* v_messages_340_; lean_object* v_infoState_341_; lean_object* v_snapshotTasks_342_; lean_object* v___y_343_; uint16_t v___y_344_; lean_object* v___y_345_; lean_object* v___y_350_; uint16_t v___y_351_; uint8_t v___y_352_; lean_object* v___y_371_; 
v_declName_223_ = lean_ctor_get(v_unaryPreDefNonRec_214_, 3);
lean_inc(v_declName_223_);
v___x_224_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v___x_225_ = lean_unsigned_to_nat(0u);
v___x_226_ = lean_array_get_borrowed(v___x_224_, v_preDefs_212_, v___x_225_);
v_toCold_227_ = lean_ctor_get(v_a_220_, 0);
v_declName_228_ = lean_ctor_get(v___x_226_, 3);
lean_inc(v_declName_228_);
v_currRecDepth_229_ = lean_ctor_get(v_a_220_, 1);
v_ref_230_ = lean_ctor_get(v_a_220_, 2);
v_suppressElabErrors_231_ = lean_ctor_get_uint8(v_a_220_, sizeof(void*)*3 + 2);
v_checkDeprecated_232_ = lean_ctor_get_uint8(v_a_220_, sizeof(void*)*3 + 3);
v_isRecordingDeps_233_ = lean_ctor_get_uint8(v_a_220_, sizeof(void*)*3 + 4);
v_fileName_234_ = lean_ctor_get(v_toCold_227_, 0);
v_fileMap_235_ = lean_ctor_get(v_toCold_227_, 1);
v_options_236_ = lean_ctor_get(v_toCold_227_, 2);
v_currNamespace_237_ = lean_ctor_get(v_toCold_227_, 4);
v_openDecls_238_ = lean_ctor_get(v_toCold_227_, 5);
v_initHeartbeats_239_ = lean_ctor_get(v_toCold_227_, 6);
v_maxHeartbeats_240_ = lean_ctor_get(v_toCold_227_, 7);
v_quotContext_241_ = lean_ctor_get(v_toCold_227_, 8);
v_currMacroScope_242_ = lean_ctor_get(v_toCold_227_, 9);
v_cancelTk_x3f_243_ = lean_ctor_get(v_toCold_227_, 10);
v_inheritedTraceOptions_244_ = lean_ctor_get(v_toCold_227_, 11);
v___f_245_ = ((lean_object*)(l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__0));
v_preDefNonRec_246_ = l_Lean_Elab_PreDefinition_filterAttrs(v_unaryPreDefNonRec_214_, v___f_245_);
v___x_247_ = lean_array_to_list(v_preDefs_212_);
v___x_248_ = lean_box(0);
v_declNames_249_ = l_List_mapTR_loop___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__0(v___x_247_, v___x_248_);
v___x_250_ = lean_name_eq(v_declName_223_, v_declName_228_);
lean_dec(v_declName_228_);
lean_dec(v_declName_223_);
if (v_isRecordingDeps_233_ == 0)
{
lean_object* v___x_381_; uint8_t v___x_382_; lean_object* v___x_383_; 
v___x_381_ = l_Lean_allowUnsafeReducibility;
v___x_382_ = 1;
lean_inc_ref(v_options_236_);
v___x_383_ = l_Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4(v_options_236_, v___x_381_, v___x_382_);
v___y_371_ = v___x_383_;
goto v___jp_370_;
}
else
{
lean_object* v___x_384_; 
lean_inc_ref(v_options_236_);
v___x_384_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v_options_236_);
v___y_371_ = v___x_384_;
goto v___jp_370_;
}
v___jp_251_:
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_270_ = l_Lean_maxRecDepth;
v___x_271_ = l_Lean_Option_get___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1(v___y_252_, v___x_270_);
v___x_272_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_272_, 0, v_fileName_254_);
lean_ctor_set(v___x_272_, 1, v_fileMap_255_);
lean_ctor_set(v___x_272_, 2, v___y_252_);
lean_ctor_set(v___x_272_, 3, v___x_271_);
lean_ctor_set(v___x_272_, 4, v_currNamespace_256_);
lean_ctor_set(v___x_272_, 5, v_openDecls_257_);
lean_ctor_set(v___x_272_, 6, v_initHeartbeats_258_);
lean_ctor_set(v___x_272_, 7, v_maxHeartbeats_259_);
lean_ctor_set(v___x_272_, 8, v_quotContext_260_);
lean_ctor_set(v___x_272_, 9, v_currMacroScope_261_);
lean_ctor_set(v___x_272_, 10, v_cancelTk_x3f_262_);
lean_ctor_set(v___x_272_, 11, v_inheritedTraceOptions_263_);
lean_inc(v_ref_265_);
lean_inc(v_currRecDepth_264_);
v___x_273_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_273_, 0, v___x_272_);
lean_ctor_set(v___x_273_, 1, v_currRecDepth_264_);
lean_ctor_set(v___x_273_, 2, v_ref_265_);
lean_ctor_set_uint16(v___x_273_, sizeof(void*)*3, v___y_253_);
lean_ctor_set_uint8(v___x_273_, sizeof(void*)*3 + 2, v_suppressElabErrors_266_);
lean_ctor_set_uint8(v___x_273_, sizeof(void*)*3 + 3, v_checkDeprecated_267_);
lean_ctor_set_uint8(v___x_273_, sizeof(void*)*3 + 4, v_isRecordingDeps_268_);
if (v___x_250_ == 0)
{
lean_object* v_modifiers_274_; lean_object* v_ref_275_; uint8_t v_kind_276_; lean_object* v_levelParams_277_; lean_object* v_declName_278_; lean_object* v_binders_279_; lean_object* v_numSectionVars_280_; lean_object* v_type_281_; lean_object* v_value_282_; lean_object* v_termination_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_329_; 
v_modifiers_274_ = lean_ctor_get(v_preDefNonRec_246_, 2);
v_ref_275_ = lean_ctor_get(v_preDefNonRec_246_, 0);
v_kind_276_ = lean_ctor_get_uint8(v_preDefNonRec_246_, sizeof(void*)*9);
v_levelParams_277_ = lean_ctor_get(v_preDefNonRec_246_, 1);
v_declName_278_ = lean_ctor_get(v_preDefNonRec_246_, 3);
v_binders_279_ = lean_ctor_get(v_preDefNonRec_246_, 4);
v_numSectionVars_280_ = lean_ctor_get(v_preDefNonRec_246_, 5);
v_type_281_ = lean_ctor_get(v_preDefNonRec_246_, 6);
v_value_282_ = lean_ctor_get(v_preDefNonRec_246_, 7);
v_termination_283_ = lean_ctor_get(v_preDefNonRec_246_, 8);
v_isSharedCheck_329_ = !lean_is_exclusive(v_preDefNonRec_246_);
if (v_isSharedCheck_329_ == 0)
{
v___x_285_ = v_preDefNonRec_246_;
v_isShared_286_ = v_isSharedCheck_329_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_termination_283_);
lean_inc(v_value_282_);
lean_inc(v_type_281_);
lean_inc(v_numSectionVars_280_);
lean_inc(v_binders_279_);
lean_inc(v_declName_278_);
lean_inc(v_modifiers_274_);
lean_inc(v_levelParams_277_);
lean_inc(v_ref_275_);
lean_dec(v_preDefNonRec_246_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_329_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
lean_object* v_stx_287_; uint8_t v_visibility_288_; uint8_t v_isProtected_289_; uint8_t v_computeKind_290_; uint8_t v_recKind_291_; uint8_t v_isUnsafe_292_; lean_object* v_attrs_293_; lean_object* v___x_295_; uint8_t v_isShared_296_; uint8_t v_isSharedCheck_327_; 
v_stx_287_ = lean_ctor_get(v_modifiers_274_, 0);
v_visibility_288_ = lean_ctor_get_uint8(v_modifiers_274_, sizeof(void*)*3);
v_isProtected_289_ = lean_ctor_get_uint8(v_modifiers_274_, sizeof(void*)*3 + 1);
v_computeKind_290_ = lean_ctor_get_uint8(v_modifiers_274_, sizeof(void*)*3 + 2);
v_recKind_291_ = lean_ctor_get_uint8(v_modifiers_274_, sizeof(void*)*3 + 3);
v_isUnsafe_292_ = lean_ctor_get_uint8(v_modifiers_274_, sizeof(void*)*3 + 4);
v_attrs_293_ = lean_ctor_get(v_modifiers_274_, 2);
v_isSharedCheck_327_ = !lean_is_exclusive(v_modifiers_274_);
if (v_isSharedCheck_327_ == 0)
{
lean_object* v_unused_328_; 
v_unused_328_ = lean_ctor_get(v_modifiers_274_, 1);
lean_dec(v_unused_328_);
v___x_295_ = v_modifiers_274_;
v_isShared_296_ = v_isSharedCheck_327_;
goto v_resetjp_294_;
}
else
{
lean_inc(v_attrs_293_);
lean_inc(v_stx_287_);
lean_dec(v_modifiers_274_);
v___x_295_ = lean_box(0);
v_isShared_296_ = v_isSharedCheck_327_;
goto v_resetjp_294_;
}
v_resetjp_294_:
{
lean_object* v___x_297_; lean_object* v___x_299_; 
v___x_297_ = lean_box(0);
if (v_isShared_296_ == 0)
{
lean_ctor_set(v___x_295_, 1, v___x_297_);
v___x_299_ = v___x_295_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_stx_287_);
lean_ctor_set(v_reuseFailAlloc_326_, 1, v___x_297_);
lean_ctor_set(v_reuseFailAlloc_326_, 2, v_attrs_293_);
lean_ctor_set_uint8(v_reuseFailAlloc_326_, sizeof(void*)*3, v_visibility_288_);
lean_ctor_set_uint8(v_reuseFailAlloc_326_, sizeof(void*)*3 + 1, v_isProtected_289_);
lean_ctor_set_uint8(v_reuseFailAlloc_326_, sizeof(void*)*3 + 2, v_computeKind_290_);
lean_ctor_set_uint8(v_reuseFailAlloc_326_, sizeof(void*)*3 + 3, v_recKind_291_);
lean_ctor_set_uint8(v_reuseFailAlloc_326_, sizeof(void*)*3 + 4, v_isUnsafe_292_);
v___x_299_ = v_reuseFailAlloc_326_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
lean_object* v_preDefNonRec_301_; 
lean_inc(v_declName_278_);
if (v_isShared_286_ == 0)
{
lean_ctor_set(v___x_285_, 2, v___x_299_);
v_preDefNonRec_301_ = v___x_285_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_ref_275_);
lean_ctor_set(v_reuseFailAlloc_325_, 1, v_levelParams_277_);
lean_ctor_set(v_reuseFailAlloc_325_, 2, v___x_299_);
lean_ctor_set(v_reuseFailAlloc_325_, 3, v_declName_278_);
lean_ctor_set(v_reuseFailAlloc_325_, 4, v_binders_279_);
lean_ctor_set(v_reuseFailAlloc_325_, 5, v_numSectionVars_280_);
lean_ctor_set(v_reuseFailAlloc_325_, 6, v_type_281_);
lean_ctor_set(v_reuseFailAlloc_325_, 7, v_value_282_);
lean_ctor_set(v_reuseFailAlloc_325_, 8, v_termination_283_);
lean_ctor_set_uint8(v_reuseFailAlloc_325_, sizeof(void*)*9, v_kind_276_);
v_preDefNonRec_301_ = v_reuseFailAlloc_325_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
lean_object* v___x_302_; uint8_t v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_302_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_302_, 0, v_declName_278_);
lean_ctor_set(v___x_302_, 1, v___x_248_);
v___x_303_ = 1;
v___x_304_ = lean_box(v___x_250_);
v___x_305_ = lean_box(v_cacheProofs_215_);
v___x_306_ = lean_box(v___x_250_);
v___x_307_ = lean_box(v___x_303_);
v___x_308_ = lean_box(v___x_303_);
lean_inc_ref(v_docCtx_211_);
v___x_309_ = lean_alloc_closure((void*)(l_Lean_Elab_addNonRec___boxed), 15, 8);
lean_closure_set(v___x_309_, 0, v_docCtx_211_);
lean_closure_set(v___x_309_, 1, v_preDefNonRec_301_);
lean_closure_set(v___x_309_, 2, v___x_304_);
lean_closure_set(v___x_309_, 3, v___x_302_);
lean_closure_set(v___x_309_, 4, v___x_305_);
lean_closure_set(v___x_309_, 5, v___x_306_);
lean_closure_set(v___x_309_, 6, v___x_307_);
lean_closure_set(v___x_309_, 7, v___x_308_);
v___x_310_ = l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2___redArg(v___x_250_, v___x_309_, v_a_216_, v_a_217_, v_a_218_, v_a_219_, v___x_273_, v___y_269_);
if (lean_obj_tag(v___x_310_) == 0)
{
lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_323_; 
v_isSharedCheck_323_ = !lean_is_exclusive(v___x_310_);
if (v_isSharedCheck_323_ == 0)
{
lean_object* v_unused_324_; 
v_unused_324_ = lean_ctor_get(v___x_310_, 0);
lean_dec(v_unused_324_);
v___x_312_ = v___x_310_;
v_isShared_313_ = v_isSharedCheck_323_;
goto v_resetjp_311_;
}
else
{
lean_dec(v___x_310_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_323_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
lean_object* v___x_314_; lean_object* v___x_315_; uint8_t v___x_316_; 
v___x_314_ = lean_array_get_size(v_preDefsNonrec_213_);
v___x_315_ = lean_box(0);
v___x_316_ = lean_nat_dec_lt(v___x_225_, v___x_314_);
if (v___x_316_ == 0)
{
lean_object* v___x_318_; 
lean_dec_ref_known(v___x_273_, 3);
lean_dec(v_declNames_249_);
lean_dec_ref(v_docCtx_211_);
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 0, v___x_315_);
v___x_318_ = v___x_312_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v___x_315_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
else
{
size_t v___x_320_; size_t v___x_321_; lean_object* v___x_322_; 
lean_del_object(v___x_312_);
v___x_320_ = ((size_t)0ULL);
v___x_321_ = lean_usize_of_nat(v___x_314_);
v___x_322_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__3(v_docCtx_211_, v___x_250_, v_declNames_249_, v_cacheProofs_215_, v_preDefsNonrec_213_, v___x_320_, v___x_321_, v___x_315_, v_a_216_, v_a_217_, v_a_218_, v_a_219_, v___x_273_, v___y_269_);
lean_dec_ref_known(v___x_273_, 3);
return v___x_322_;
}
}
}
else
{
lean_dec_ref_known(v___x_273_, 3);
lean_dec(v_declNames_249_);
lean_dec_ref(v_docCtx_211_);
return v___x_310_;
}
}
}
}
}
}
else
{
lean_object* v_declName_330_; uint8_t v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
lean_dec(v_declNames_249_);
v_declName_330_ = lean_ctor_get(v_preDefNonRec_246_, 3);
v___x_331_ = 0;
lean_inc(v_declName_330_);
v___x_332_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_332_, 0, v_declName_330_);
lean_ctor_set(v___x_332_, 1, v___x_248_);
v___x_333_ = l_Lean_Elab_addNonRec(v_docCtx_211_, v_preDefNonRec_246_, v___x_331_, v___x_332_, v_cacheProofs_215_, v___x_331_, v___x_250_, v___x_250_, v_a_216_, v_a_217_, v_a_218_, v_a_219_, v___x_273_, v___y_269_);
lean_dec_ref_known(v___x_273_, 3);
return v___x_333_;
}
}
v___jp_334_:
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_346_ = lean_obj_once(&l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__3, &l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__3_once, _init_l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__3);
v___x_347_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_347_, 0, v___y_345_);
lean_ctor_set(v___x_347_, 1, v_nextMacroScope_335_);
lean_ctor_set(v___x_347_, 2, v_ngen_336_);
lean_ctor_set(v___x_347_, 3, v_auxDeclNGen_337_);
lean_ctor_set(v___x_347_, 4, v_traceState_338_);
lean_ctor_set(v___x_347_, 5, v___x_346_);
lean_ctor_set(v___x_347_, 6, v_recordedDeps_339_);
lean_ctor_set(v___x_347_, 7, v_messages_340_);
lean_ctor_set(v___x_347_, 8, v_infoState_341_);
lean_ctor_set(v___x_347_, 9, v_snapshotTasks_342_);
v___x_348_ = lean_st_ref_put(v_a_221_, v___x_347_);
lean_inc_ref(v_inheritedTraceOptions_244_);
lean_inc(v_cancelTk_x3f_243_);
lean_inc(v_currMacroScope_242_);
lean_inc(v_quotContext_241_);
lean_inc(v_maxHeartbeats_240_);
lean_inc(v_initHeartbeats_239_);
lean_inc(v_openDecls_238_);
lean_inc(v_currNamespace_237_);
lean_inc_ref(v_fileMap_235_);
lean_inc_ref(v_fileName_234_);
v___y_252_ = v___y_343_;
v___y_253_ = v___y_344_;
v_fileName_254_ = v_fileName_234_;
v_fileMap_255_ = v_fileMap_235_;
v_currNamespace_256_ = v_currNamespace_237_;
v_openDecls_257_ = v_openDecls_238_;
v_initHeartbeats_258_ = v_initHeartbeats_239_;
v_maxHeartbeats_259_ = v_maxHeartbeats_240_;
v_quotContext_260_ = v_quotContext_241_;
v_currMacroScope_261_ = v_currMacroScope_242_;
v_cancelTk_x3f_262_ = v_cancelTk_x3f_243_;
v_inheritedTraceOptions_263_ = v_inheritedTraceOptions_244_;
v_currRecDepth_264_ = v_currRecDepth_229_;
v_ref_265_ = v_ref_230_;
v_suppressElabErrors_266_ = v_suppressElabErrors_231_;
v_checkDeprecated_267_ = v_checkDeprecated_232_;
v_isRecordingDeps_268_ = v_isRecordingDeps_233_;
v___y_269_ = v_a_221_;
goto v___jp_251_;
}
v___jp_349_:
{
uint8_t v___x_353_; lean_object* v___x_354_; lean_object* v_env_355_; lean_object* v_nextMacroScope_356_; lean_object* v_ngen_357_; lean_object* v_auxDeclNGen_358_; lean_object* v_traceState_359_; lean_object* v_recordedDeps_360_; lean_object* v_messages_361_; lean_object* v_infoState_362_; lean_object* v_snapshotTasks_363_; uint16_t v___x_364_; uint16_t v___x_365_; uint16_t v___x_366_; uint8_t v___x_367_; 
v___x_353_ = 1;
v___x_354_ = lean_st_ref_take(v_a_221_);
v_env_355_ = lean_ctor_get(v___x_354_, 0);
lean_inc_ref(v_env_355_);
v_nextMacroScope_356_ = lean_ctor_get(v___x_354_, 1);
lean_inc(v_nextMacroScope_356_);
v_ngen_357_ = lean_ctor_get(v___x_354_, 2);
lean_inc_ref(v_ngen_357_);
v_auxDeclNGen_358_ = lean_ctor_get(v___x_354_, 3);
lean_inc_ref(v_auxDeclNGen_358_);
v_traceState_359_ = lean_ctor_get(v___x_354_, 4);
lean_inc_ref(v_traceState_359_);
v_recordedDeps_360_ = lean_ctor_get(v___x_354_, 6);
lean_inc_ref(v_recordedDeps_360_);
v_messages_361_ = lean_ctor_get(v___x_354_, 7);
lean_inc_ref(v_messages_361_);
v_infoState_362_ = lean_ctor_get(v___x_354_, 8);
lean_inc_ref(v_infoState_362_);
v_snapshotTasks_363_ = lean_ctor_get(v___x_354_, 9);
lean_inc_ref(v_snapshotTasks_363_);
lean_dec(v___x_354_);
v___x_364_ = 512;
v___x_365_ = lean_uint16_land(v___y_351_, v___x_364_);
v___x_366_ = 0;
v___x_367_ = lean_uint16_dec_eq(v___x_365_, v___x_366_);
if (v___x_367_ == 0)
{
lean_object* v___x_368_; 
v___x_368_ = l_Lean_Kernel_enableDiag(v_env_355_, v___x_353_);
v_nextMacroScope_335_ = v_nextMacroScope_356_;
v_ngen_336_ = v_ngen_357_;
v_auxDeclNGen_337_ = v_auxDeclNGen_358_;
v_traceState_338_ = v_traceState_359_;
v_recordedDeps_339_ = v_recordedDeps_360_;
v_messages_340_ = v_messages_361_;
v_infoState_341_ = v_infoState_362_;
v_snapshotTasks_342_ = v_snapshotTasks_363_;
v___y_343_ = v___y_350_;
v___y_344_ = v___y_351_;
v___y_345_ = v___x_368_;
goto v___jp_334_;
}
else
{
lean_object* v___x_369_; 
v___x_369_ = l_Lean_Kernel_enableDiag(v_env_355_, v___y_352_);
v_nextMacroScope_335_ = v_nextMacroScope_356_;
v_ngen_336_ = v_ngen_357_;
v_auxDeclNGen_337_ = v_auxDeclNGen_358_;
v_traceState_338_ = v_traceState_359_;
v_recordedDeps_339_ = v_recordedDeps_360_;
v_messages_340_ = v_messages_361_;
v_infoState_341_ = v_infoState_362_;
v_snapshotTasks_342_ = v_snapshotTasks_363_;
v___y_343_ = v___y_350_;
v___y_344_ = v___y_351_;
v___y_345_ = v___x_369_;
goto v___jp_334_;
}
}
v___jp_370_:
{
uint16_t v___x_372_; lean_object* v___x_373_; lean_object* v_env_374_; uint8_t v___x_375_; uint16_t v___x_376_; uint16_t v___x_377_; uint16_t v___x_378_; uint8_t v___x_379_; 
v___x_372_ = l_Lean_OptionFlags_ofOptions(v___y_371_);
v___x_373_ = lean_st_ref_get(v_a_221_);
v_env_374_ = lean_ctor_get(v___x_373_, 0);
lean_inc_ref(v_env_374_);
lean_dec(v___x_373_);
v___x_375_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_374_);
lean_dec_ref(v_env_374_);
v___x_376_ = 512;
v___x_377_ = lean_uint16_land(v___x_372_, v___x_376_);
v___x_378_ = 0;
v___x_379_ = lean_uint16_dec_eq(v___x_377_, v___x_378_);
if (v___x_379_ == 0)
{
if (v___x_375_ == 0)
{
v___y_350_ = v___y_371_;
v___y_351_ = v___x_372_;
v___y_352_ = v___x_375_;
goto v___jp_349_;
}
else
{
lean_inc_ref(v_inheritedTraceOptions_244_);
lean_inc(v_cancelTk_x3f_243_);
lean_inc(v_currMacroScope_242_);
lean_inc(v_quotContext_241_);
lean_inc(v_maxHeartbeats_240_);
lean_inc(v_initHeartbeats_239_);
lean_inc(v_openDecls_238_);
lean_inc(v_currNamespace_237_);
lean_inc_ref(v_fileMap_235_);
lean_inc_ref(v_fileName_234_);
v___y_252_ = v___y_371_;
v___y_253_ = v___x_372_;
v_fileName_254_ = v_fileName_234_;
v_fileMap_255_ = v_fileMap_235_;
v_currNamespace_256_ = v_currNamespace_237_;
v_openDecls_257_ = v_openDecls_238_;
v_initHeartbeats_258_ = v_initHeartbeats_239_;
v_maxHeartbeats_259_ = v_maxHeartbeats_240_;
v_quotContext_260_ = v_quotContext_241_;
v_currMacroScope_261_ = v_currMacroScope_242_;
v_cancelTk_x3f_262_ = v_cancelTk_x3f_243_;
v_inheritedTraceOptions_263_ = v_inheritedTraceOptions_244_;
v_currRecDepth_264_ = v_currRecDepth_229_;
v_ref_265_ = v_ref_230_;
v_suppressElabErrors_266_ = v_suppressElabErrors_231_;
v_checkDeprecated_267_ = v_checkDeprecated_232_;
v_isRecordingDeps_268_ = v_isRecordingDeps_233_;
v___y_269_ = v_a_221_;
goto v___jp_251_;
}
}
else
{
if (v___x_375_ == 0)
{
lean_inc_ref(v_inheritedTraceOptions_244_);
lean_inc(v_cancelTk_x3f_243_);
lean_inc(v_currMacroScope_242_);
lean_inc(v_quotContext_241_);
lean_inc(v_maxHeartbeats_240_);
lean_inc(v_initHeartbeats_239_);
lean_inc(v_openDecls_238_);
lean_inc(v_currNamespace_237_);
lean_inc_ref(v_fileMap_235_);
lean_inc_ref(v_fileName_234_);
v___y_252_ = v___y_371_;
v___y_253_ = v___x_372_;
v_fileName_254_ = v_fileName_234_;
v_fileMap_255_ = v_fileMap_235_;
v_currNamespace_256_ = v_currNamespace_237_;
v_openDecls_257_ = v_openDecls_238_;
v_initHeartbeats_258_ = v_initHeartbeats_239_;
v_maxHeartbeats_259_ = v_maxHeartbeats_240_;
v_quotContext_260_ = v_quotContext_241_;
v_currMacroScope_261_ = v_currMacroScope_242_;
v_cancelTk_x3f_262_ = v_cancelTk_x3f_243_;
v_inheritedTraceOptions_263_ = v_inheritedTraceOptions_244_;
v_currRecDepth_264_ = v_currRecDepth_229_;
v_ref_265_ = v_ref_230_;
v_suppressElabErrors_266_ = v_suppressElabErrors_231_;
v_checkDeprecated_267_ = v_checkDeprecated_232_;
v_isRecordingDeps_268_ = v_isRecordingDeps_233_;
v___y_269_ = v_a_221_;
goto v___jp_251_;
}
else
{
uint8_t v___x_380_; 
v___x_380_ = 0;
v___y_350_ = v___y_371_;
v___y_351_ = v___x_372_;
v___y_352_ = v___x_380_;
goto v___jp_349_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary___boxed(lean_object* v_docCtx_385_, lean_object* v_preDefs_386_, lean_object* v_preDefsNonrec_387_, lean_object* v_unaryPreDefNonRec_388_, lean_object* v_cacheProofs_389_, lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v_a_394_, lean_object* v_a_395_, lean_object* v_a_396_){
_start:
{
uint8_t v_cacheProofs_boxed_397_; lean_object* v_res_398_; 
v_cacheProofs_boxed_397_ = lean_unbox(v_cacheProofs_389_);
v_res_398_ = l_Lean_Elab_Mutual_addPreDefsFromUnary(v_docCtx_385_, v_preDefs_386_, v_preDefsNonrec_387_, v_unaryPreDefNonRec_388_, v_cacheProofs_boxed_397_, v_a_390_, v_a_391_, v_a_392_, v_a_393_, v_a_394_, v_a_395_);
lean_dec(v_a_395_);
lean_dec_ref(v_a_394_);
lean_dec(v_a_393_);
lean_dec_ref(v_a_392_);
lean_dec(v_a_391_);
lean_dec_ref(v_a_390_);
lean_dec_ref(v_preDefsNonrec_387_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2_spec__2(uint8_t v_flag_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2_spec__2___redArg(v_flag_399_, v___y_405_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2_spec__2___boxed(lean_object* v_flag_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_){
_start:
{
uint8_t v_flag_boxed_416_; lean_object* v_res_417_; 
v_flag_boxed_416_ = lean_unbox(v_flag_408_);
v_res_417_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2_spec__2(v_flag_boxed_416_, v___y_409_, v___y_410_, v___y_411_, v___y_412_, v___y_413_, v___y_414_);
lean_dec(v___y_414_);
lean_dec_ref(v___y_413_);
lean_dec(v___y_412_);
lean_dec_ref(v___y_411_);
lean_dec(v___y_410_);
lean_dec_ref(v___y_409_);
return v_res_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2(lean_object* v_00_u03b1_418_, uint8_t v_flag_419_, lean_object* v_x_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_){
_start:
{
lean_object* v___x_428_; 
v___x_428_ = l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2___redArg(v_flag_419_, v_x_420_, v___y_421_, v___y_422_, v___y_423_, v___y_424_, v___y_425_, v___y_426_);
return v___x_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2___boxed(lean_object* v_00_u03b1_429_, lean_object* v_flag_430_, lean_object* v_x_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_){
_start:
{
uint8_t v_flag_boxed_439_; lean_object* v_res_440_; 
v_flag_boxed_439_ = lean_unbox(v_flag_430_);
v_res_440_ = l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2(v_00_u03b1_429_, v_flag_boxed_439_, v_x_431_, v___y_432_, v___y_433_, v___y_434_, v___y_435_, v___y_436_, v___y_437_);
lean_dec(v___y_437_);
lean_dec_ref(v___y_436_);
lean_dec(v___y_435_);
lean_dec_ref(v___y_434_);
lean_dec(v___y_433_);
lean_dec_ref(v___y_432_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_cleanPreDef(lean_object* v_preDef_441_, uint8_t v_cacheProofs_442_, lean_object* v_a_443_, lean_object* v_a_444_, lean_object* v_a_445_, lean_object* v_a_446_){
_start:
{
lean_object* v___x_448_; 
v___x_448_ = l_Lean_Elab_eraseRecAppSyntax(v_preDef_441_, v_a_445_, v_a_446_);
if (lean_obj_tag(v___x_448_) == 0)
{
lean_object* v_a_449_; lean_object* v___x_450_; 
v_a_449_ = lean_ctor_get(v___x_448_, 0);
lean_inc(v_a_449_);
lean_dec_ref_known(v___x_448_, 1);
v___x_450_ = l_Lean_Elab_abstractNestedProofs(v_a_449_, v_cacheProofs_442_, v_a_443_, v_a_444_, v_a_445_, v_a_446_);
return v___x_450_;
}
else
{
return v___x_448_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_cleanPreDef___boxed(lean_object* v_preDef_451_, lean_object* v_cacheProofs_452_, lean_object* v_a_453_, lean_object* v_a_454_, lean_object* v_a_455_, lean_object* v_a_456_, lean_object* v_a_457_){
_start:
{
uint8_t v_cacheProofs_boxed_458_; lean_object* v_res_459_; 
v_cacheProofs_boxed_458_ = lean_unbox(v_cacheProofs_452_);
v_res_459_ = l_Lean_Elab_Mutual_cleanPreDef(v_preDef_451_, v_cacheProofs_boxed_458_, v_a_453_, v_a_454_, v_a_455_, v_a_456_);
lean_dec(v_a_456_);
lean_dec_ref(v_a_455_);
lean_dec(v_a_454_);
lean_dec_ref(v_a_453_);
return v_res_459_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__4___redArg(lean_object* v_as_460_, size_t v_sz_461_, size_t v_i_462_, lean_object* v_b_463_, lean_object* v___y_464_, lean_object* v___y_465_){
_start:
{
uint8_t v___x_467_; 
v___x_467_ = lean_usize_dec_lt(v_i_462_, v_sz_461_);
if (v___x_467_ == 0)
{
lean_object* v___x_468_; 
v___x_468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_468_, 0, v_b_463_);
return v___x_468_;
}
else
{
lean_object* v_a_469_; lean_object* v_declName_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v_a_469_ = lean_array_uget_borrowed(v_as_460_, v_i_462_);
v_declName_470_ = lean_ctor_get(v_a_469_, 3);
v___x_471_ = lean_box(0);
lean_inc(v_declName_470_);
v___x_472_ = l_Lean_enableRealizationsForConst(v_declName_470_, v___y_464_, v___y_465_);
if (lean_obj_tag(v___x_472_) == 0)
{
size_t v___x_473_; size_t v___x_474_; 
lean_dec_ref_known(v___x_472_, 1);
v___x_473_ = ((size_t)1ULL);
v___x_474_ = lean_usize_add(v_i_462_, v___x_473_);
v_i_462_ = v___x_474_;
v_b_463_ = v___x_471_;
goto _start;
}
else
{
return v___x_472_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__4___redArg___boxed(lean_object* v_as_476_, lean_object* v_sz_477_, lean_object* v_i_478_, lean_object* v_b_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_){
_start:
{
size_t v_sz_boxed_483_; size_t v_i_boxed_484_; lean_object* v_res_485_; 
v_sz_boxed_483_ = lean_unbox_usize(v_sz_477_);
lean_dec(v_sz_477_);
v_i_boxed_484_ = lean_unbox_usize(v_i_478_);
lean_dec(v_i_478_);
v_res_485_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__4___redArg(v_as_476_, v_sz_boxed_483_, v_i_boxed_484_, v_b_479_, v___y_480_, v___y_481_);
lean_dec(v___y_481_);
lean_dec_ref(v___y_480_);
lean_dec_ref(v_as_476_);
return v_res_485_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__3___redArg(lean_object* v_as_486_, size_t v_sz_487_, size_t v_i_488_, lean_object* v_b_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_){
_start:
{
uint8_t v___x_495_; 
v___x_495_ = lean_usize_dec_lt(v_i_488_, v_sz_487_);
if (v___x_495_ == 0)
{
lean_object* v___x_496_; 
v___x_496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_496_, 0, v_b_489_);
return v___x_496_;
}
else
{
lean_object* v_a_497_; lean_object* v_declName_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v_a_497_ = lean_array_uget_borrowed(v_as_486_, v_i_488_);
v_declName_498_ = lean_ctor_get(v_a_497_, 3);
v___x_499_ = lean_box(0);
lean_inc(v_declName_498_);
v___x_500_ = l_Lean_Meta_saveEqnAffectingOptions(v_declName_498_, v___y_490_, v___y_491_, v___y_492_, v___y_493_);
if (lean_obj_tag(v___x_500_) == 0)
{
size_t v___x_501_; size_t v___x_502_; 
lean_dec_ref_known(v___x_500_, 1);
v___x_501_ = ((size_t)1ULL);
v___x_502_ = lean_usize_add(v_i_488_, v___x_501_);
v_i_488_ = v___x_502_;
v_b_489_ = v___x_499_;
goto _start;
}
else
{
return v___x_500_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__3___redArg___boxed(lean_object* v_as_504_, lean_object* v_sz_505_, lean_object* v_i_506_, lean_object* v_b_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_){
_start:
{
size_t v_sz_boxed_513_; size_t v_i_boxed_514_; lean_object* v_res_515_; 
v_sz_boxed_513_ = lean_unbox_usize(v_sz_505_);
lean_dec(v_sz_505_);
v_i_boxed_514_ = lean_unbox_usize(v_i_506_);
lean_dec(v_i_506_);
v_res_515_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__3___redArg(v_as_504_, v_sz_boxed_513_, v_i_boxed_514_, v_b_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_);
lean_dec(v___y_511_);
lean_dec_ref(v___y_510_);
lean_dec(v___y_509_);
lean_dec_ref(v___y_508_);
lean_dec_ref(v_as_504_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__5(lean_object* v_as_516_, size_t v_sz_517_, size_t v_i_518_, lean_object* v_b_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_){
_start:
{
uint8_t v___x_527_; 
v___x_527_ = lean_usize_dec_lt(v_i_518_, v_sz_517_);
if (v___x_527_ == 0)
{
lean_object* v___x_528_; 
v___x_528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_528_, 0, v_b_519_);
return v___x_528_;
}
else
{
lean_object* v___x_529_; lean_object* v_a_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; uint8_t v___x_534_; lean_object* v___x_535_; 
v___x_529_ = lean_box(0);
v_a_530_ = lean_array_uget_borrowed(v_as_516_, v_i_518_);
v___x_531_ = lean_unsigned_to_nat(1u);
v___x_532_ = lean_mk_empty_array_with_capacity(v___x_531_);
lean_inc(v_a_530_);
v___x_533_ = lean_array_push(v___x_532_, v_a_530_);
v___x_534_ = 1;
v___x_535_ = l_Lean_Elab_applyAttributesOf(v___x_533_, v___x_534_, v___y_520_, v___y_521_, v___y_522_, v___y_523_, v___y_524_, v___y_525_);
lean_dec_ref(v___x_533_);
if (lean_obj_tag(v___x_535_) == 0)
{
size_t v___x_536_; size_t v___x_537_; 
lean_dec_ref_known(v___x_535_, 1);
v___x_536_ = ((size_t)1ULL);
v___x_537_ = lean_usize_add(v_i_518_, v___x_536_);
v_i_518_ = v___x_537_;
v_b_519_ = v___x_529_;
goto _start;
}
else
{
return v___x_535_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__5___boxed(lean_object* v_as_539_, lean_object* v_sz_540_, lean_object* v_i_541_, lean_object* v_b_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_){
_start:
{
size_t v_sz_boxed_550_; size_t v_i_boxed_551_; lean_object* v_res_552_; 
v_sz_boxed_550_ = lean_unbox_usize(v_sz_540_);
lean_dec(v_sz_540_);
v_i_boxed_551_ = lean_unbox_usize(v_i_541_);
lean_dec(v_i_541_);
v_res_552_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__5(v_as_539_, v_sz_boxed_550_, v_i_boxed_551_, v_b_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_, v___y_547_, v___y_548_);
lean_dec(v___y_548_);
lean_dec_ref(v___y_547_);
lean_dec(v___y_546_);
lean_dec_ref(v___y_545_);
lean_dec(v___y_544_);
lean_dec_ref(v___y_543_);
lean_dec_ref(v_as_539_);
return v_res_552_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0_spec__1_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_553_ = lean_obj_once(&l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__1, &l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__1_once, _init_l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__1);
v___x_554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_554_, 0, v___x_553_);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0_spec__1_spec__7___redArg(){
_start:
{
lean_object* v___x_556_; 
v___x_556_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0_spec__1_spec__7___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0_spec__1_spec__7___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0_spec__1_spec__7___redArg___closed__0);
return v___x_556_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0_spec__1_spec__7___redArg___boxed(lean_object* v___dummy_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0_spec__1_spec__7___redArg();
return v_res_558_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_559_; 
v___x_559_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0_spec__1_spec__7___redArg();
return v___x_559_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_560_ = lean_obj_once(&l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__2, &l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__2_once, _init_l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__2);
v___x_561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_561_, 0, v___x_560_);
lean_ctor_set(v___x_561_, 1, v___x_560_);
return v___x_561_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; 
v___x_562_ = lean_unsigned_to_nat(0u);
v___x_563_ = lean_obj_once(&l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__2, &l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__2_once, _init_l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__2);
v___x_564_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_564_, 0, v___x_563_);
lean_ctor_set(v___x_564_, 1, v___x_563_);
lean_ctor_set(v___x_564_, 2, v___x_562_);
return v___x_564_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_565_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__2);
v___x_566_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__1, &l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__1);
v___x_567_ = lean_obj_once(&l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__2, &l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__2_once, _init_l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__2);
v___x_568_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__0);
v___x_569_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_569_, 0, v___x_568_);
lean_ctor_set(v___x_569_, 1, v___x_567_);
lean_ctor_set(v___x_569_, 2, v___x_566_);
lean_ctor_set(v___x_569_, 3, v___x_567_);
lean_ctor_set(v___x_569_, 4, v___x_567_);
lean_ctor_set(v___x_569_, 5, v___x_567_);
lean_ctor_set(v___x_569_, 6, v___x_567_);
lean_ctor_set(v___x_569_, 7, v___x_565_);
return v___x_569_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg(lean_object* v_declName_570_, uint8_t v_s_571_, lean_object* v___y_572_, lean_object* v___y_573_){
_start:
{
lean_object* v___x_575_; lean_object* v_env_576_; lean_object* v_nextMacroScope_577_; lean_object* v_ngen_578_; lean_object* v_auxDeclNGen_579_; lean_object* v_traceState_580_; lean_object* v_recordedDeps_581_; lean_object* v_messages_582_; lean_object* v_infoState_583_; lean_object* v_snapshotTasks_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_613_; 
v___x_575_ = lean_st_ref_take(v___y_573_);
v_env_576_ = lean_ctor_get(v___x_575_, 0);
v_nextMacroScope_577_ = lean_ctor_get(v___x_575_, 1);
v_ngen_578_ = lean_ctor_get(v___x_575_, 2);
v_auxDeclNGen_579_ = lean_ctor_get(v___x_575_, 3);
v_traceState_580_ = lean_ctor_get(v___x_575_, 4);
v_recordedDeps_581_ = lean_ctor_get(v___x_575_, 6);
v_messages_582_ = lean_ctor_get(v___x_575_, 7);
v_infoState_583_ = lean_ctor_get(v___x_575_, 8);
v_snapshotTasks_584_ = lean_ctor_get(v___x_575_, 9);
v_isSharedCheck_613_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_613_ == 0)
{
lean_object* v_unused_614_; 
v_unused_614_ = lean_ctor_get(v___x_575_, 5);
lean_dec(v_unused_614_);
v___x_586_ = v___x_575_;
v_isShared_587_ = v_isSharedCheck_613_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_snapshotTasks_584_);
lean_inc(v_infoState_583_);
lean_inc(v_messages_582_);
lean_inc(v_recordedDeps_581_);
lean_inc(v_traceState_580_);
lean_inc(v_auxDeclNGen_579_);
lean_inc(v_ngen_578_);
lean_inc(v_nextMacroScope_577_);
lean_inc(v_env_576_);
lean_dec(v___x_575_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_613_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
uint8_t v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_593_; 
v___x_588_ = 0;
v___x_589_ = lean_box(0);
v___x_590_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_576_, v_declName_570_, v_s_571_, v___x_588_, v___x_589_);
v___x_591_ = lean_obj_once(&l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__3, &l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__3_once, _init_l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__3);
if (v_isShared_587_ == 0)
{
lean_ctor_set(v___x_586_, 5, v___x_591_);
lean_ctor_set(v___x_586_, 0, v___x_590_);
v___x_593_ = v___x_586_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_612_; 
v_reuseFailAlloc_612_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_612_, 0, v___x_590_);
lean_ctor_set(v_reuseFailAlloc_612_, 1, v_nextMacroScope_577_);
lean_ctor_set(v_reuseFailAlloc_612_, 2, v_ngen_578_);
lean_ctor_set(v_reuseFailAlloc_612_, 3, v_auxDeclNGen_579_);
lean_ctor_set(v_reuseFailAlloc_612_, 4, v_traceState_580_);
lean_ctor_set(v_reuseFailAlloc_612_, 5, v___x_591_);
lean_ctor_set(v_reuseFailAlloc_612_, 6, v_recordedDeps_581_);
lean_ctor_set(v_reuseFailAlloc_612_, 7, v_messages_582_);
lean_ctor_set(v_reuseFailAlloc_612_, 8, v_infoState_583_);
lean_ctor_set(v_reuseFailAlloc_612_, 9, v_snapshotTasks_584_);
v___x_593_ = v_reuseFailAlloc_612_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v_mctx_596_; lean_object* v_zetaDeltaFVarIds_597_; lean_object* v_postponed_598_; lean_object* v_diag_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_610_; 
v___x_594_ = lean_st_ref_put(v___y_573_, v___x_593_);
v___x_595_ = lean_st_ref_take(v___y_572_);
v_mctx_596_ = lean_ctor_get(v___x_595_, 0);
v_zetaDeltaFVarIds_597_ = lean_ctor_get(v___x_595_, 2);
v_postponed_598_ = lean_ctor_get(v___x_595_, 3);
v_diag_599_ = lean_ctor_get(v___x_595_, 4);
v_isSharedCheck_610_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_610_ == 0)
{
lean_object* v_unused_611_; 
v_unused_611_ = lean_ctor_get(v___x_595_, 1);
lean_dec(v_unused_611_);
v___x_601_ = v___x_595_;
v_isShared_602_ = v_isSharedCheck_610_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_diag_599_);
lean_inc(v_postponed_598_);
lean_inc(v_zetaDeltaFVarIds_597_);
lean_inc(v_mctx_596_);
lean_dec(v___x_595_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_610_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_606_; 
v___x_603_ = lean_box(0);
v___x_604_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__3);
if (v_isShared_602_ == 0)
{
lean_ctor_set(v___x_601_, 1, v___x_604_);
v___x_606_ = v___x_601_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_mctx_596_);
lean_ctor_set(v_reuseFailAlloc_609_, 1, v___x_604_);
lean_ctor_set(v_reuseFailAlloc_609_, 2, v_zetaDeltaFVarIds_597_);
lean_ctor_set(v_reuseFailAlloc_609_, 3, v_postponed_598_);
lean_ctor_set(v_reuseFailAlloc_609_, 4, v_diag_599_);
v___x_606_ = v_reuseFailAlloc_609_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
lean_object* v___x_607_; lean_object* v___x_608_; 
v___x_607_ = lean_st_ref_put(v___y_572_, v___x_606_);
v___x_608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_608_, 0, v___x_603_);
return v___x_608_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___boxed(lean_object* v_declName_615_, lean_object* v_s_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_){
_start:
{
uint8_t v_s_boxed_620_; lean_object* v_res_621_; 
v_s_boxed_620_ = lean_unbox(v_s_616_);
v_res_621_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg(v_declName_615_, v_s_boxed_620_, v___y_617_, v___y_618_);
lean_dec(v___y_618_);
lean_dec(v___y_617_);
return v_res_621_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0(lean_object* v_declName_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_){
_start:
{
uint8_t v___x_630_; lean_object* v___x_631_; 
v___x_630_ = 2;
v___x_631_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg(v_declName_622_, v___x_630_, v___y_626_, v___y_628_);
return v___x_631_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0___boxed(lean_object* v_declName_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_){
_start:
{
lean_object* v_res_640_; 
v_res_640_ = l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0(v_declName_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_, v___y_637_, v___y_638_);
lean_dec(v___y_638_);
lean_dec_ref(v___y_637_);
lean_dec(v___y_636_);
lean_dec_ref(v___y_635_);
lean_dec(v___y_634_);
lean_dec_ref(v___y_633_);
return v_res_640_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1(lean_object* v_as_653_, size_t v_i_654_, size_t v_stop_655_){
_start:
{
uint8_t v___x_656_; 
v___x_656_ = lean_usize_dec_eq(v_i_654_, v_stop_655_);
if (v___x_656_ == 0)
{
lean_object* v___x_657_; lean_object* v_name_658_; lean_object* v___x_659_; uint8_t v___x_660_; 
v___x_657_ = lean_array_uget_borrowed(v_as_653_, v_i_654_);
v_name_658_ = lean_ctor_get(v___x_657_, 0);
v___x_659_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__1));
v___x_660_ = lean_name_eq(v_name_658_, v___x_659_);
if (v___x_660_ == 0)
{
lean_object* v___x_661_; uint8_t v___x_662_; 
v___x_661_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__3));
v___x_662_ = lean_name_eq(v_name_658_, v___x_661_);
if (v___x_662_ == 0)
{
lean_object* v___x_663_; uint8_t v___x_664_; 
v___x_663_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__5));
v___x_664_ = lean_name_eq(v_name_658_, v___x_663_);
if (v___x_664_ == 0)
{
lean_object* v___x_665_; uint8_t v___x_666_; 
v___x_665_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__7));
v___x_666_ = lean_name_eq(v_name_658_, v___x_665_);
if (v___x_666_ == 0)
{
size_t v___x_667_; size_t v___x_668_; 
v___x_667_ = ((size_t)1ULL);
v___x_668_ = lean_usize_add(v_i_654_, v___x_667_);
v_i_654_ = v___x_668_;
goto _start;
}
else
{
return v___x_666_;
}
}
else
{
return v___x_664_;
}
}
else
{
return v___x_662_;
}
}
else
{
return v___x_660_;
}
}
else
{
uint8_t v___x_670_; 
v___x_670_ = 0;
return v___x_670_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___boxed(lean_object* v_as_671_, lean_object* v_i_672_, lean_object* v_stop_673_){
_start:
{
size_t v_i_boxed_674_; size_t v_stop_boxed_675_; uint8_t v_res_676_; lean_object* v_r_677_; 
v_i_boxed_674_ = lean_unbox_usize(v_i_672_);
lean_dec(v_i_672_);
v_stop_boxed_675_ = lean_unbox_usize(v_stop_673_);
lean_dec(v_stop_673_);
v_res_676_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1(v_as_671_, v_i_boxed_674_, v_stop_boxed_675_);
lean_dec_ref(v_as_671_);
v_r_677_ = lean_box(v_res_676_);
return v_r_677_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__2(lean_object* v_as_678_, size_t v_sz_679_, size_t v_i_680_, lean_object* v_b_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_){
_start:
{
lean_object* v_a_690_; uint8_t v___x_694_; 
v___x_694_ = lean_usize_dec_lt(v_i_680_, v_sz_679_);
if (v___x_694_ == 0)
{
lean_object* v___x_695_; 
v___x_695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_695_, 0, v_b_681_);
return v___x_695_;
}
else
{
lean_object* v_a_696_; uint8_t v_kind_697_; lean_object* v_modifiers_698_; lean_object* v_declName_699_; lean_object* v___x_700_; uint8_t v___x_703_; 
v_a_696_ = lean_array_uget_borrowed(v_as_678_, v_i_680_);
v_kind_697_ = lean_ctor_get_uint8(v_a_696_, sizeof(void*)*9);
v_modifiers_698_ = lean_ctor_get(v_a_696_, 2);
v_declName_699_ = lean_ctor_get(v_a_696_, 3);
v___x_700_ = lean_box(0);
v___x_703_ = l_Lean_Elab_DefKind_isTheorem(v_kind_697_);
if (v___x_703_ == 0)
{
lean_object* v_attrs_704_; lean_object* v___x_705_; lean_object* v___x_706_; uint8_t v___x_707_; 
v_attrs_704_ = lean_ctor_get(v_modifiers_698_, 2);
v___x_705_ = lean_unsigned_to_nat(0u);
v___x_706_ = lean_array_get_size(v_attrs_704_);
v___x_707_ = lean_nat_dec_lt(v___x_705_, v___x_706_);
if (v___x_707_ == 0)
{
goto v___jp_701_;
}
else
{
if (v___x_707_ == 0)
{
goto v___jp_701_;
}
else
{
size_t v___x_708_; size_t v___x_709_; uint8_t v___x_710_; 
v___x_708_ = ((size_t)0ULL);
v___x_709_ = lean_usize_of_nat(v___x_706_);
v___x_710_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1(v_attrs_704_, v___x_708_, v___x_709_);
if (v___x_710_ == 0)
{
goto v___jp_701_;
}
else
{
v_a_690_ = v___x_700_;
goto v___jp_689_;
}
}
}
}
else
{
v_a_690_ = v___x_700_;
goto v___jp_689_;
}
v___jp_701_:
{
lean_object* v___x_702_; 
lean_inc(v_declName_699_);
v___x_702_ = l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0(v_declName_699_, v___y_682_, v___y_683_, v___y_684_, v___y_685_, v___y_686_, v___y_687_);
if (lean_obj_tag(v___x_702_) == 0)
{
lean_dec_ref_known(v___x_702_, 1);
v_a_690_ = v___x_700_;
goto v___jp_689_;
}
else
{
return v___x_702_;
}
}
}
v___jp_689_:
{
size_t v___x_691_; size_t v___x_692_; 
v___x_691_ = ((size_t)1ULL);
v___x_692_ = lean_usize_add(v_i_680_, v___x_691_);
v_i_680_ = v___x_692_;
v_b_681_ = v_a_690_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__2___boxed(lean_object* v_as_711_, lean_object* v_sz_712_, lean_object* v_i_713_, lean_object* v_b_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_){
_start:
{
size_t v_sz_boxed_722_; size_t v_i_boxed_723_; lean_object* v_res_724_; 
v_sz_boxed_722_ = lean_unbox_usize(v_sz_712_);
lean_dec(v_sz_712_);
v_i_boxed_723_ = lean_unbox_usize(v_i_713_);
lean_dec(v_i_713_);
v_res_724_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__2(v_as_711_, v_sz_boxed_722_, v_i_boxed_723_, v_b_714_, v___y_715_, v___y_716_, v___y_717_, v___y_718_, v___y_719_, v___y_720_);
lean_dec(v___y_720_);
lean_dec_ref(v___y_719_);
lean_dec(v___y_718_);
lean_dec_ref(v___y_717_);
lean_dec(v___y_716_);
lean_dec_ref(v___y_715_);
lean_dec_ref(v_as_711_);
return v_res_724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_addPreDefAttributes(lean_object* v_preDefs_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_){
_start:
{
lean_object* v___x_733_; size_t v_sz_734_; size_t v___x_735_; lean_object* v___x_736_; 
v___x_733_ = lean_box(0);
v_sz_734_ = lean_array_size(v_preDefs_725_);
v___x_735_ = ((size_t)0ULL);
v___x_736_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__2(v_preDefs_725_, v_sz_734_, v___x_735_, v___x_733_, v_a_726_, v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_);
if (lean_obj_tag(v___x_736_) == 0)
{
lean_object* v___x_737_; 
lean_dec_ref_known(v___x_736_, 1);
v___x_737_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__3___redArg(v_preDefs_725_, v_sz_734_, v___x_735_, v___x_733_, v_a_728_, v_a_729_, v_a_730_, v_a_731_);
if (lean_obj_tag(v___x_737_) == 0)
{
lean_object* v___x_738_; size_t v_sz_739_; lean_object* v___x_740_; 
lean_dec_ref_known(v___x_737_, 1);
lean_inc_ref(v_preDefs_725_);
v___x_738_ = l_Array_reverse___redArg(v_preDefs_725_);
v_sz_739_ = lean_array_size(v___x_738_);
v___x_740_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__4___redArg(v___x_738_, v_sz_739_, v___x_735_, v___x_733_, v_a_730_, v_a_731_);
lean_dec_ref(v___x_738_);
if (lean_obj_tag(v___x_740_) == 0)
{
lean_object* v___x_741_; 
lean_dec_ref_known(v___x_740_, 1);
v___x_741_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__5(v_preDefs_725_, v_sz_734_, v___x_735_, v___x_733_, v_a_726_, v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_);
lean_dec_ref(v_preDefs_725_);
if (lean_obj_tag(v___x_741_) == 0)
{
lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_748_; 
v_isSharedCheck_748_ = !lean_is_exclusive(v___x_741_);
if (v_isSharedCheck_748_ == 0)
{
lean_object* v_unused_749_; 
v_unused_749_ = lean_ctor_get(v___x_741_, 0);
lean_dec(v_unused_749_);
v___x_743_ = v___x_741_;
v_isShared_744_ = v_isSharedCheck_748_;
goto v_resetjp_742_;
}
else
{
lean_dec(v___x_741_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_748_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
lean_object* v___x_746_; 
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 0, v___x_733_);
v___x_746_ = v___x_743_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v___x_733_);
v___x_746_ = v_reuseFailAlloc_747_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
return v___x_746_;
}
}
}
else
{
return v___x_741_;
}
}
else
{
lean_dec_ref(v_preDefs_725_);
return v___x_740_;
}
}
else
{
lean_dec_ref(v_preDefs_725_);
return v___x_737_;
}
}
else
{
lean_dec_ref(v_preDefs_725_);
return v___x_736_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_addPreDefAttributes___boxed(lean_object* v_preDefs_750_, lean_object* v_a_751_, lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_){
_start:
{
lean_object* v_res_758_; 
v_res_758_ = l_Lean_Elab_Mutual_addPreDefAttributes(v_preDefs_750_, v_a_751_, v_a_752_, v_a_753_, v_a_754_, v_a_755_, v_a_756_);
lean_dec(v_a_756_);
lean_dec_ref(v_a_755_);
lean_dec(v_a_754_);
lean_dec_ref(v_a_753_);
lean_dec(v_a_752_);
lean_dec_ref(v_a_751_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__3(lean_object* v_as_759_, size_t v_sz_760_, size_t v_i_761_, lean_object* v_b_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_){
_start:
{
lean_object* v___x_770_; 
v___x_770_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__3___redArg(v_as_759_, v_sz_760_, v_i_761_, v_b_762_, v___y_765_, v___y_766_, v___y_767_, v___y_768_);
return v___x_770_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__3___boxed(lean_object* v_as_771_, lean_object* v_sz_772_, lean_object* v_i_773_, lean_object* v_b_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_){
_start:
{
size_t v_sz_boxed_782_; size_t v_i_boxed_783_; lean_object* v_res_784_; 
v_sz_boxed_782_ = lean_unbox_usize(v_sz_772_);
lean_dec(v_sz_772_);
v_i_boxed_783_ = lean_unbox_usize(v_i_773_);
lean_dec(v_i_773_);
v_res_784_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__3(v_as_771_, v_sz_boxed_782_, v_i_boxed_783_, v_b_774_, v___y_775_, v___y_776_, v___y_777_, v___y_778_, v___y_779_, v___y_780_);
lean_dec(v___y_780_);
lean_dec_ref(v___y_779_);
lean_dec(v___y_778_);
lean_dec_ref(v___y_777_);
lean_dec(v___y_776_);
lean_dec_ref(v___y_775_);
lean_dec_ref(v_as_771_);
return v_res_784_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__4(lean_object* v_as_785_, size_t v_sz_786_, size_t v_i_787_, lean_object* v_b_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_){
_start:
{
lean_object* v___x_796_; 
v___x_796_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__4___redArg(v_as_785_, v_sz_786_, v_i_787_, v_b_788_, v___y_793_, v___y_794_);
return v___x_796_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__4___boxed(lean_object* v_as_797_, lean_object* v_sz_798_, lean_object* v_i_799_, lean_object* v_b_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_){
_start:
{
size_t v_sz_boxed_808_; size_t v_i_boxed_809_; lean_object* v_res_810_; 
v_sz_boxed_808_ = lean_unbox_usize(v_sz_798_);
lean_dec(v_sz_798_);
v_i_boxed_809_ = lean_unbox_usize(v_i_799_);
lean_dec(v_i_799_);
v_res_810_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__4(v_as_797_, v_sz_boxed_808_, v_i_boxed_809_, v_b_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_, v___y_805_, v___y_806_);
lean_dec(v___y_806_);
lean_dec_ref(v___y_805_);
lean_dec(v___y_804_);
lean_dec_ref(v___y_803_);
lean_dec(v___y_802_);
lean_dec_ref(v___y_801_);
lean_dec_ref(v_as_797_);
return v_res_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0(lean_object* v_declName_811_, uint8_t v_s_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_){
_start:
{
lean_object* v___x_820_; 
v___x_820_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg(v_declName_811_, v_s_812_, v___y_816_, v___y_818_);
return v___x_820_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___boxed(lean_object* v_declName_821_, lean_object* v_s_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_){
_start:
{
uint8_t v_s_boxed_830_; lean_object* v_res_831_; 
v_s_boxed_830_ = lean_unbox(v_s_822_);
v_res_831_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0(v_declName_821_, v_s_boxed_830_, v___y_823_, v___y_824_, v___y_825_, v___y_826_, v___y_827_, v___y_828_);
lean_dec(v___y_828_);
lean_dec_ref(v___y_827_);
lean_dec(v___y_826_);
lean_dec_ref(v___y_825_);
lean_dec(v___y_824_);
lean_dec_ref(v___y_823_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0_spec__1_spec__7(lean_object* v_00_u03b2_832_){
_start:
{
lean_object* v___x_833_; 
v___x_833_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__0);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0_spec__1___redArg(){
_start:
{
lean_object* v___x_835_; 
v___x_835_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__0);
return v___x_835_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v___dummy_836_){
_start:
{
lean_object* v_res_837_; 
v_res_837_ = l_Lean_instInhabitedBudgetedCache_default___at___00Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0_spec__1___redArg();
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_838_){
_start:
{
lean_object* v___x_839_; 
v___x_839_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__0);
return v___x_839_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_Mutual(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_PreDefinition_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_Mutual(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_Mutual(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Mutual(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_Mutual(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_Mutual(builtin);
}
#ifdef __cplusplus
}
#endif
