// Lean compiler output
// Module: Lean.Elab.StructInstHint
// Imports: public import Lean.Meta.Hint import Init.Data.String.OrderInstances
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
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_FileMap_utf8PosToLspPos(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_delab(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_ppCategory(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
extern lean_object* l_Lean_pp_mvars;
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_Meta_Tactic_TryThis_format_inputWidth;
lean_object* l_Lean_Syntax_ofRange(lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_hint(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_List_replicateTR___redArg(lean_object*, lean_object*);
lean_object* lean_string_mk(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_String_instInhabitedSlice;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
uint8_t lean_string_is_valid_pos(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
size_t lean_usize_of_nat(lean_object*);
extern lean_object* l_Lean_MessageData_nil;
static const lean_string_object l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f___closed__0 = (const lean_object*)&l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f___closed__1 = (const lean_object*)&l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f___closed__2 = (const lean_object*)&l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structInst"};
static const lean_object* l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f___closed__3 = (const lean_object*)&l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(50, 43, 73, 62, 118, 124, 31, 28)}};
static const lean_object* l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f___closed__4 = (const lean_object*)&l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_findLineEnd_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_findLineEnd_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_findLineEnd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_findLineEnd___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_findLineEnd_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_findLineEnd_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_isSingleLineStyle___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_isSingleLineStyle___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_isSingleLineStyle___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_isSingleLineStyle___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_isSingleLineStyle___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(10, 221, 19, 63, 207, 193, 180, 154)}};
static const lean_object* l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_isSingleLineStyle___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_isSingleLineStyle___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_isSingleLineStyle___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_isSingleLineStyle___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_isSingleLineStyle(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_isSingleLineStyle___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__5(lean_object*);
static const lean_string_object l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Add missing fields"};
static const lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___lam__0___boxed(lean_object*);
static const lean_ctor_object l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_isSingleLineStyle___redArg___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__7___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__7(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__6_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__6(lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__1_spec__1___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__1_spec__1___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__1_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__1_spec__1___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__1_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__1_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__3;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__4;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__6_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__4___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__0 = (const lean_object*)&l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__0_value)}};
static const lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__1 = (const lean_object*)&l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__1_value;
static const lean_string_object l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Add missing fields:"};
static const lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__2 = (const lean_object*)&l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__3;
static lean_once_cell_t l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__4;
static const lean_string_object l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__5 = (const lean_object*)&l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__5_value)}};
static const lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__6 = (const lean_object*)&l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__6_value;
static const lean_string_object l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__7 = (const lean_object*)&l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__7_value;
static const lean_string_object l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__8 = (const lean_object*)&l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__8_value;
static const lean_string_object l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__9 = (const lean_object*)&l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__9_value;
static lean_once_cell_t l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__10;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___boxed__const__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f(lean_object* v_stx_10_){
_start:
{
lean_object* v___y_12_; lean_object* v___y_13_; uint8_t v___y_14_; lean_object* v___y_15_; lean_object* v___y_16_; lean_object* v___y_17_; lean_object* v___y_18_; lean_object* v___y_19_; lean_object* v___y_23_; lean_object* v___y_24_; uint8_t v___y_25_; lean_object* v___y_26_; lean_object* v___y_27_; uint8_t v___y_28_; lean_object* v___y_29_; lean_object* v___y_30_; lean_object* v_fst_39_; uint8_t v_snd_40_; lean_object* v___x_67_; 
v___x_67_ = l_Lean_Syntax_getHeadInfo(v_stx_10_);
if (lean_obj_tag(v___x_67_) == 0)
{
lean_object* v___x_68_; lean_object* v___x_69_; uint8_t v___x_70_; 
lean_dec_ref_known(v___x_67_, 4);
lean_inc(v_stx_10_);
v___x_68_ = l_Lean_Syntax_getKind(v_stx_10_);
v___x_69_ = ((lean_object*)(l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f___closed__4));
v___x_70_ = lean_name_eq(v___x_68_, v___x_69_);
lean_dec(v___x_68_);
if (v___x_70_ == 0)
{
lean_object* v___x_71_; 
lean_dec(v_stx_10_);
v___x_71_ = lean_box(0);
return v___x_71_;
}
else
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_72_ = lean_unsigned_to_nat(1u);
v___x_73_ = l_Lean_Syntax_getArg(v_stx_10_, v___x_72_);
v___x_74_ = l_Lean_Syntax_getArg(v___x_73_, v___x_72_);
lean_dec(v___x_73_);
if (lean_obj_tag(v___x_74_) == 0)
{
lean_object* v___x_75_; lean_object* v___x_76_; uint8_t v___x_77_; 
v___x_75_ = lean_unsigned_to_nat(0u);
v___x_76_ = l_Lean_Syntax_getArg(v_stx_10_, v___x_75_);
v___x_77_ = 0;
v_fst_39_ = v___x_76_;
v_snd_40_ = v___x_77_;
goto v___jp_38_;
}
else
{
v_fst_39_ = v___x_74_;
v_snd_40_ = v___x_70_;
goto v___jp_38_;
}
}
}
else
{
lean_object* v___x_78_; 
lean_dec(v___x_67_);
lean_dec(v_stx_10_);
v___x_78_ = lean_box(0);
return v___x_78_;
}
v___jp_11_:
{
lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_20_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v___x_20_, 0, v___y_17_);
lean_ctor_set(v___x_20_, 1, v___y_19_);
lean_ctor_set(v___x_20_, 2, v___y_13_);
lean_ctor_set(v___x_20_, 3, v___y_15_);
lean_ctor_set(v___x_20_, 4, v___y_18_);
lean_ctor_set(v___x_20_, 5, v___y_12_);
lean_ctor_set(v___x_20_, 6, v___y_16_);
lean_ctor_set_uint8(v___x_20_, sizeof(void*)*7, v___y_14_);
v___x_21_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_21_, 0, v___x_20_);
return v___x_21_;
}
v___jp_22_:
{
lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; uint8_t v___x_34_; 
v___x_31_ = lean_array_get_size(v___y_24_);
v___x_32_ = lean_unsigned_to_nat(1u);
v___x_33_ = lean_nat_sub(v___x_31_, v___x_32_);
v___x_34_ = lean_nat_dec_lt(v___x_33_, v___x_31_);
if (v___x_34_ == 0)
{
lean_object* v___x_35_; 
lean_dec(v___x_33_);
lean_dec_ref(v___y_24_);
v___x_35_ = lean_box(0);
v___y_12_ = v___y_23_;
v___y_13_ = v___x_31_;
v___y_14_ = v___y_25_;
v___y_15_ = v___y_26_;
v___y_16_ = v___y_27_;
v___y_17_ = v___y_30_;
v___y_18_ = v___y_29_;
v___y_19_ = v___x_35_;
goto v___jp_11_;
}
else
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = lean_array_fget(v___y_24_, v___x_33_);
lean_dec(v___x_33_);
lean_dec_ref(v___y_24_);
v___x_37_ = l_Lean_Syntax_getTailPos_x3f(v___x_36_, v___y_28_);
lean_dec(v___x_36_);
v___y_12_ = v___y_23_;
v___y_13_ = v___x_31_;
v___y_14_ = v___y_25_;
v___y_15_ = v___y_26_;
v___y_16_ = v___y_27_;
v___y_17_ = v___y_30_;
v___y_18_ = v___y_29_;
v___y_19_ = v___x_37_;
goto v___jp_11_;
}
}
v___jp_38_:
{
uint8_t v___x_41_; lean_object* v___x_42_; 
v___x_41_ = 0;
v___x_42_ = l_Lean_Syntax_getPos_x3f(v_fst_39_, v___x_41_);
if (lean_obj_tag(v___x_42_) == 0)
{
lean_object* v___x_43_; 
lean_dec(v_fst_39_);
lean_dec(v_stx_10_);
v___x_43_ = lean_box(0);
return v___x_43_;
}
else
{
lean_object* v_val_44_; lean_object* v___x_45_; 
v_val_44_ = lean_ctor_get(v___x_42_, 0);
lean_inc(v_val_44_);
lean_dec_ref_known(v___x_42_, 1);
v___x_45_ = l_Lean_Syntax_getTailPos_x3f(v_fst_39_, v___x_41_);
lean_dec(v_fst_39_);
if (lean_obj_tag(v___x_45_) == 0)
{
lean_object* v___x_46_; 
lean_dec(v_val_44_);
lean_dec(v_stx_10_);
v___x_46_ = lean_box(0);
return v___x_46_;
}
else
{
lean_object* v_val_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
v_val_47_ = lean_ctor_get(v___x_45_, 0);
lean_inc(v_val_47_);
lean_dec_ref_known(v___x_45_, 1);
v___x_48_ = lean_unsigned_to_nat(0u);
v___x_49_ = l_Lean_Syntax_getArg(v_stx_10_, v___x_48_);
v___x_50_ = l_Lean_Syntax_getPos_x3f(v___x_49_, v___x_41_);
lean_dec(v___x_49_);
if (lean_obj_tag(v___x_50_) == 0)
{
lean_object* v___x_51_; 
lean_dec(v_val_47_);
lean_dec(v_val_44_);
lean_dec(v_stx_10_);
v___x_51_ = lean_box(0);
return v___x_51_;
}
else
{
lean_object* v_val_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v_val_52_ = lean_ctor_get(v___x_50_, 0);
lean_inc(v_val_52_);
lean_dec_ref_known(v___x_50_, 1);
v___x_53_ = lean_unsigned_to_nat(5u);
v___x_54_ = l_Lean_Syntax_getArg(v_stx_10_, v___x_53_);
v___x_55_ = l_Lean_Syntax_getPos_x3f(v___x_54_, v___x_41_);
lean_dec(v___x_54_);
if (lean_obj_tag(v___x_55_) == 0)
{
lean_object* v___x_56_; 
lean_dec(v_val_52_);
lean_dec(v_val_47_);
lean_dec(v_val_44_);
lean_dec(v_stx_10_);
v___x_56_ = lean_box(0);
return v___x_56_;
}
else
{
lean_object* v_val_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; uint8_t v___x_63_; 
v_val_57_ = lean_ctor_get(v___x_55_, 0);
lean_inc(v_val_57_);
lean_dec_ref_known(v___x_55_, 1);
v___x_58_ = lean_unsigned_to_nat(2u);
v___x_59_ = l_Lean_Syntax_getArg(v_stx_10_, v___x_58_);
lean_dec(v_stx_10_);
v___x_60_ = l_Lean_Syntax_getArg(v___x_59_, v___x_48_);
lean_dec(v___x_59_);
v___x_61_ = l_Lean_Syntax_getSepArgs(v___x_60_);
lean_dec(v___x_60_);
v___x_62_ = lean_array_get_size(v___x_61_);
v___x_63_ = lean_nat_dec_lt(v___x_48_, v___x_62_);
if (v___x_63_ == 0)
{
lean_object* v___x_64_; 
v___x_64_ = lean_box(0);
v___y_23_ = v_val_47_;
v___y_24_ = v___x_61_;
v___y_25_ = v_snd_40_;
v___y_26_ = v_val_52_;
v___y_27_ = v_val_57_;
v___y_28_ = v___x_41_;
v___y_29_ = v_val_44_;
v___y_30_ = v___x_64_;
goto v___jp_22_;
}
else
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = lean_array_fget_borrowed(v___x_61_, v___x_48_);
v___x_66_ = l_Lean_Syntax_getPos_x3f(v___x_65_, v___x_41_);
v___y_23_ = v_val_47_;
v___y_24_ = v___x_61_;
v___y_25_ = v_snd_40_;
v___y_26_ = v_val_52_;
v___y_27_ = v_val_57_;
v___y_28_ = v___x_41_;
v___y_29_ = v_val_44_;
v___y_30_ = v___x_66_;
goto v___jp_22_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_findLineEnd_spec__0___redArg(lean_object* v___x_79_, lean_object* v___x_80_, lean_object* v_s_81_, lean_object* v_a_82_, lean_object* v_b_83_){
_start:
{
lean_object* v___x_84_; uint8_t v_decide_85_; 
v___x_84_ = lean_nat_sub(v___x_79_, v___x_80_);
v_decide_85_ = lean_nat_dec_eq(v_a_82_, v___x_84_);
lean_dec(v___x_84_);
if (v_decide_85_ == 0)
{
lean_object* v___x_86_; uint32_t v___x_87_; uint32_t v___x_88_; uint8_t v___x_89_; 
v___x_86_ = lean_nat_add(v___x_80_, v_a_82_);
v___x_87_ = lean_string_utf8_get_fast(v_s_81_, v___x_86_);
v___x_88_ = 10;
v___x_89_ = lean_uint32_dec_eq(v___x_87_, v___x_88_);
if (v___x_89_ == 0)
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
lean_dec(v_a_82_);
v___x_90_ = lean_box(0);
v___x_91_ = lean_string_utf8_next_fast(v_s_81_, v___x_86_);
lean_dec(v___x_86_);
v___x_92_ = lean_nat_sub(v___x_91_, v___x_80_);
v_a_82_ = v___x_92_;
v_b_83_ = v___x_90_;
goto _start;
}
else
{
lean_object* v___x_94_; 
lean_dec(v___x_86_);
v___x_94_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_94_, 0, v_a_82_);
return v___x_94_;
}
}
else
{
lean_dec(v_a_82_);
lean_inc(v_b_83_);
return v_b_83_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_findLineEnd_spec__0___redArg___boxed(lean_object* v___x_95_, lean_object* v___x_96_, lean_object* v_s_97_, lean_object* v_a_98_, lean_object* v_b_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_findLineEnd_spec__0___redArg(v___x_95_, v___x_96_, v_s_97_, v_a_98_, v_b_99_);
lean_dec(v_b_99_);
lean_dec_ref(v_s_97_);
lean_dec(v___x_96_);
lean_dec(v___x_95_);
return v_res_100_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_findLineEnd(lean_object* v_s_101_, lean_object* v_p_102_){
_start:
{
lean_object* v_searcher_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v_searcher_103_ = lean_unsigned_to_nat(0u);
v___x_104_ = lean_string_utf8_byte_size(v_s_101_);
lean_inc_ref(v_s_101_);
v___x_105_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_105_, 0, v_s_101_);
lean_ctor_set(v___x_105_, 1, v_searcher_103_);
lean_ctor_set(v___x_105_, 2, v___x_104_);
v___x_106_ = l_String_Slice_pos_x21(v___x_105_, v_p_102_);
lean_dec_ref_known(v___x_105_, 3);
v___x_107_ = lean_box(0);
v___x_108_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_findLineEnd_spec__0___redArg(v___x_104_, v___x_106_, v_s_101_, v_searcher_103_, v___x_107_);
lean_dec_ref(v_s_101_);
if (lean_obj_tag(v___x_108_) == 0)
{
lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_109_ = lean_nat_sub(v___x_104_, v___x_106_);
v___x_110_ = lean_nat_add(v___x_106_, v___x_109_);
lean_dec(v___x_109_);
lean_dec(v___x_106_);
return v___x_110_;
}
else
{
lean_object* v_val_111_; lean_object* v___x_112_; 
v_val_111_ = lean_ctor_get(v___x_108_, 0);
lean_inc(v_val_111_);
lean_dec_ref_known(v___x_108_, 1);
v___x_112_ = lean_nat_add(v___x_106_, v_val_111_);
lean_dec(v_val_111_);
lean_dec(v___x_106_);
return v___x_112_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_findLineEnd___boxed(lean_object* v_s_113_, lean_object* v_p_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_findLineEnd(v_s_113_, v_p_114_);
lean_dec(v_p_114_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_findLineEnd_spec__0(lean_object* v___x_116_, lean_object* v___x_117_, lean_object* v___x_118_, lean_object* v_s_119_, lean_object* v_inst_120_, lean_object* v_R_121_, lean_object* v_a_122_, lean_object* v_b_123_, lean_object* v_c_124_){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_findLineEnd_spec__0___redArg(v___x_116_, v___x_117_, v_s_119_, v_a_122_, v_b_123_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_findLineEnd_spec__0___boxed(lean_object* v___x_126_, lean_object* v___x_127_, lean_object* v___x_128_, lean_object* v_s_129_, lean_object* v_inst_130_, lean_object* v_R_131_, lean_object* v_a_132_, lean_object* v_b_133_, lean_object* v_c_134_){
_start:
{
lean_object* v_res_135_; 
v_res_135_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_findLineEnd_spec__0(v___x_126_, v___x_127_, v___x_128_, v_s_129_, v_inst_130_, v_R_131_, v_a_132_, v_b_133_, v_c_134_);
lean_dec(v_b_133_);
lean_dec_ref(v_s_129_);
lean_dec_ref(v___x_128_);
lean_dec(v___x_127_);
lean_dec(v___x_126_);
return v_res_135_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_isSingleLineStyle___redArg(lean_object* v_stx_139_, lean_object* v_view_140_, lean_object* v_a_141_){
_start:
{
lean_object* v_numFields_143_; lean_object* v___x_144_; uint8_t v___x_145_; 
v_numFields_143_ = lean_ctor_get(v_view_140_, 2);
v___x_144_ = lean_unsigned_to_nat(2u);
v___x_145_ = lean_nat_dec_le(v___x_144_, v_numFields_143_);
if (v___x_145_ == 0)
{
lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_146_ = lean_box(v___x_145_);
v___x_147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_147_, 0, v___x_146_);
return v___x_147_;
}
else
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v_rawFields_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v_lastInterveningSepIdx_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; uint8_t v___x_160_; 
v___x_148_ = l_Lean_Syntax_getArg(v_stx_139_, v___x_144_);
v___x_149_ = lean_unsigned_to_nat(0u);
v_rawFields_150_ = l_Lean_Syntax_getArg(v___x_148_, v___x_149_);
lean_dec(v___x_148_);
v___x_151_ = l_Lean_Syntax_getNumArgs(v_rawFields_150_);
v___x_152_ = lean_nat_sub(v___x_151_, v___x_144_);
v___x_153_ = lean_unsigned_to_nat(1u);
v___x_154_ = lean_nat_add(v___x_151_, v___x_153_);
lean_dec(v___x_151_);
v___x_155_ = lean_nat_mod(v___x_154_, v___x_144_);
lean_dec(v___x_154_);
v_lastInterveningSepIdx_156_ = lean_nat_sub(v___x_152_, v___x_155_);
lean_dec(v___x_155_);
lean_dec(v___x_152_);
v___x_157_ = l_Lean_Syntax_getArg(v_rawFields_150_, v_lastInterveningSepIdx_156_);
v___x_158_ = l_Lean_Syntax_getKind(v___x_157_);
v___x_159_ = ((lean_object*)(l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_isSingleLineStyle___redArg___closed__1));
v___x_160_ = lean_name_eq(v___x_158_, v___x_159_);
lean_dec(v___x_158_);
if (v___x_160_ == 0)
{
lean_object* v___x_161_; lean_object* v___x_162_; 
lean_dec(v_lastInterveningSepIdx_156_);
lean_dec(v_rawFields_150_);
v___x_161_ = lean_box(v___x_160_);
v___x_162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_162_, 0, v___x_161_);
return v___x_162_;
}
else
{
lean_object* v___x_163_; lean_object* v___x_164_; uint8_t v___x_165_; lean_object* v___x_166_; 
v___x_163_ = lean_nat_sub(v_lastInterveningSepIdx_156_, v___x_153_);
v___x_164_ = l_Lean_Syntax_getArg(v_rawFields_150_, v___x_163_);
lean_dec(v___x_163_);
v___x_165_ = 0;
v___x_166_ = l_Lean_Syntax_getPos_x3f(v___x_164_, v___x_165_);
lean_dec(v___x_164_);
if (lean_obj_tag(v___x_166_) == 1)
{
lean_object* v_val_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_211_; 
v_val_167_ = lean_ctor_get(v___x_166_, 0);
v_isSharedCheck_211_ = !lean_is_exclusive(v___x_166_);
if (v_isSharedCheck_211_ == 0)
{
v___x_169_ = v___x_166_;
v_isShared_170_ = v_isSharedCheck_211_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_val_167_);
lean_dec(v___x_166_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_211_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_171_ = lean_nat_add(v_lastInterveningSepIdx_156_, v___x_153_);
lean_dec(v_lastInterveningSepIdx_156_);
v___x_172_ = l_Lean_Syntax_getArg(v_rawFields_150_, v___x_171_);
lean_dec(v___x_171_);
lean_dec(v_rawFields_150_);
v___x_173_ = l_Lean_Syntax_getPos_x3f(v___x_172_, v___x_165_);
if (lean_obj_tag(v___x_173_) == 1)
{
lean_object* v_val_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_206_; 
lean_del_object(v___x_169_);
v_val_174_ = lean_ctor_get(v___x_173_, 0);
v_isSharedCheck_206_ = !lean_is_exclusive(v___x_173_);
if (v_isSharedCheck_206_ == 0)
{
v___x_176_ = v___x_173_;
v_isShared_177_ = v_isSharedCheck_206_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_val_174_);
lean_dec(v___x_173_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_206_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
lean_object* v___x_178_; 
v___x_178_ = l_Lean_Syntax_getTailPos_x3f(v___x_172_, v___x_165_);
lean_dec(v___x_172_);
if (lean_obj_tag(v___x_178_) == 1)
{
lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_200_; 
lean_del_object(v___x_176_);
v_isSharedCheck_200_ = !lean_is_exclusive(v___x_178_);
if (v_isSharedCheck_200_ == 0)
{
lean_object* v_unused_201_; 
v_unused_201_ = lean_ctor_get(v___x_178_, 0);
lean_dec(v_unused_201_);
v___x_180_ = v___x_178_;
v_isShared_181_ = v_isSharedCheck_200_;
goto v_resetjp_179_;
}
else
{
lean_dec(v___x_178_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_200_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
lean_object* v_toCold_182_; lean_object* v_fileMap_183_; lean_object* v___x_184_; lean_object* v_line_185_; lean_object* v_character_186_; lean_object* v___x_187_; lean_object* v_line_188_; lean_object* v_character_189_; uint8_t v___x_190_; 
v_toCold_182_ = lean_ctor_get(v_a_141_, 0);
v_fileMap_183_ = lean_ctor_get(v_toCold_182_, 1);
lean_inc_ref_n(v_fileMap_183_, 2);
v___x_184_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_183_, v_val_167_);
lean_dec(v_val_167_);
v_line_185_ = lean_ctor_get(v___x_184_, 0);
lean_inc(v_line_185_);
v_character_186_ = lean_ctor_get(v___x_184_, 1);
lean_inc(v_character_186_);
lean_dec_ref(v___x_184_);
v___x_187_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_183_, v_val_174_);
lean_dec(v_val_174_);
v_line_188_ = lean_ctor_get(v___x_187_, 0);
lean_inc(v_line_188_);
v_character_189_ = lean_ctor_get(v___x_187_, 1);
lean_inc(v_character_189_);
lean_dec_ref(v___x_187_);
v___x_190_ = lean_nat_dec_eq(v_line_188_, v_line_185_);
lean_dec(v_line_185_);
lean_dec(v_line_188_);
if (v___x_190_ == 0)
{
uint8_t v___x_191_; lean_object* v___x_192_; lean_object* v___x_194_; 
v___x_191_ = lean_nat_dec_lt(v_character_189_, v_character_186_);
lean_dec(v_character_186_);
lean_dec(v_character_189_);
v___x_192_ = lean_box(v___x_191_);
if (v_isShared_181_ == 0)
{
lean_ctor_set_tag(v___x_180_, 0);
lean_ctor_set(v___x_180_, 0, v___x_192_);
v___x_194_ = v___x_180_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v___x_192_);
v___x_194_ = v_reuseFailAlloc_195_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
return v___x_194_;
}
}
else
{
lean_object* v___x_196_; lean_object* v___x_198_; 
lean_dec(v_character_189_);
lean_dec(v_character_186_);
v___x_196_ = lean_box(v___x_190_);
if (v_isShared_181_ == 0)
{
lean_ctor_set_tag(v___x_180_, 0);
lean_ctor_set(v___x_180_, 0, v___x_196_);
v___x_198_ = v___x_180_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v___x_196_);
v___x_198_ = v_reuseFailAlloc_199_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
return v___x_198_;
}
}
}
}
else
{
lean_object* v___x_202_; lean_object* v___x_204_; 
lean_dec(v___x_178_);
lean_dec(v_val_174_);
lean_dec(v_val_167_);
v___x_202_ = lean_box(v___x_165_);
if (v_isShared_177_ == 0)
{
lean_ctor_set_tag(v___x_176_, 0);
lean_ctor_set(v___x_176_, 0, v___x_202_);
v___x_204_ = v___x_176_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v___x_202_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
return v___x_204_;
}
}
}
}
else
{
lean_object* v___x_207_; lean_object* v___x_209_; 
lean_dec(v___x_173_);
lean_dec(v___x_172_);
lean_dec(v_val_167_);
v___x_207_ = lean_box(v___x_165_);
if (v_isShared_170_ == 0)
{
lean_ctor_set_tag(v___x_169_, 0);
lean_ctor_set(v___x_169_, 0, v___x_207_);
v___x_209_ = v___x_169_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v___x_207_);
v___x_209_ = v_reuseFailAlloc_210_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
return v___x_209_;
}
}
}
}
else
{
lean_object* v___x_212_; lean_object* v___x_213_; 
lean_dec(v___x_166_);
lean_dec(v_lastInterveningSepIdx_156_);
lean_dec(v_rawFields_150_);
v___x_212_ = lean_box(v___x_165_);
v___x_213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_213_, 0, v___x_212_);
return v___x_213_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_isSingleLineStyle___redArg___boxed(lean_object* v_stx_214_, lean_object* v_view_215_, lean_object* v_a_216_, lean_object* v_a_217_){
_start:
{
lean_object* v_res_218_; 
v_res_218_ = l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_isSingleLineStyle___redArg(v_stx_214_, v_view_215_, v_a_216_);
lean_dec_ref(v_a_216_);
lean_dec_ref(v_view_215_);
lean_dec(v_stx_214_);
return v_res_218_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_isSingleLineStyle(lean_object* v_stx_219_, lean_object* v_view_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_isSingleLineStyle___redArg(v_stx_219_, v_view_220_, v_a_223_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_isSingleLineStyle___boxed(lean_object* v_stx_227_, lean_object* v_view_228_, lean_object* v_a_229_, lean_object* v_a_230_, lean_object* v_a_231_, lean_object* v_a_232_, lean_object* v_a_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_isSingleLineStyle(v_stx_227_, v_view_228_, v_a_229_, v_a_230_, v_a_231_, v_a_232_);
lean_dec(v_a_232_);
lean_dec_ref(v_a_231_);
lean_dec(v_a_230_);
lean_dec_ref(v_a_229_);
lean_dec_ref(v_view_228_);
lean_dec(v_stx_227_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__0(lean_object* v_opts_235_, lean_object* v_opt_236_){
_start:
{
lean_object* v_name_237_; lean_object* v_defValue_238_; lean_object* v_map_239_; lean_object* v___x_240_; 
v_name_237_ = lean_ctor_get(v_opt_236_, 0);
v_defValue_238_ = lean_ctor_get(v_opt_236_, 1);
v_map_239_ = lean_ctor_get(v_opts_235_, 0);
v___x_240_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_239_, v_name_237_);
if (lean_obj_tag(v___x_240_) == 0)
{
lean_inc(v_defValue_238_);
return v_defValue_238_;
}
else
{
lean_object* v_val_241_; 
v_val_241_ = lean_ctor_get(v___x_240_, 0);
lean_inc(v_val_241_);
lean_dec_ref_known(v___x_240_, 1);
if (lean_obj_tag(v_val_241_) == 3)
{
lean_object* v_v_242_; 
v_v_242_ = lean_ctor_get(v_val_241_, 0);
lean_inc(v_v_242_);
lean_dec_ref_known(v_val_241_, 1);
return v_v_242_;
}
else
{
lean_dec(v_val_241_);
lean_inc(v_defValue_238_);
return v_defValue_238_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__0___boxed(lean_object* v_opts_243_, lean_object* v_opt_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l_Lean_Option_get___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__0(v_opts_243_, v_opt_244_);
lean_dec_ref(v_opt_244_);
lean_dec_ref(v_opts_243_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__5(lean_object* v_msg_246_){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_247_ = l_String_instInhabitedSlice;
v___x_248_ = lean_panic_fn_borrowed(v___x_247_, v_msg_246_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___lam__0(lean_object* v_x_250_){
_start:
{
lean_object* v___x_251_; 
v___x_251_ = ((lean_object*)(l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___lam__0___closed__0));
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___lam__0___boxed(lean_object* v_x_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___lam__0(v_x_252_);
lean_dec_ref(v_x_252_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___lam__1(lean_object* v_00___257_){
_start:
{
lean_object* v___x_258_; 
v___x_258_ = ((lean_object*)(l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___lam__1___closed__0));
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___lam__2(lean_object* v_fileMap_259_, lean_object* v_p_260_){
_start:
{
lean_object* v___x_261_; lean_object* v_character_262_; 
v___x_261_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_259_, v_p_260_);
v_character_262_ = lean_ctor_get(v___x_261_, 1);
lean_inc(v_character_262_);
lean_dec_ref(v___x_261_);
return v_character_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___lam__2___boxed(lean_object* v_fileMap_263_, lean_object* v_p_264_){
_start:
{
lean_object* v_res_265_; 
v_res_265_ = l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___lam__2(v_fileMap_263_, v_p_264_);
lean_dec(v_p_264_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__3___redArg(lean_object* v___x_266_, lean_object* v_j_267_, lean_object* v_a_268_){
_start:
{
lean_object* v_zero_269_; uint8_t v_isZero_270_; 
v_zero_269_ = lean_unsigned_to_nat(0u);
v_isZero_270_ = lean_nat_dec_eq(v_j_267_, v_zero_269_);
if (v_isZero_270_ == 1)
{
lean_dec(v_j_267_);
return v_a_268_;
}
else
{
lean_object* v_one_271_; lean_object* v_n_272_; lean_object* v___x_273_; 
v_one_271_ = lean_unsigned_to_nat(1u);
v_n_272_ = lean_nat_sub(v_j_267_, v_one_271_);
lean_dec(v_j_267_);
v___x_273_ = lean_string_utf8_next(v___x_266_, v_a_268_);
lean_dec(v_a_268_);
v_j_267_ = v_n_272_;
v_a_268_ = v___x_273_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__3___redArg___boxed(lean_object* v___x_275_, lean_object* v_j_276_, lean_object* v_a_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__3___redArg(v___x_275_, v_j_276_, v_a_277_);
lean_dec_ref(v___x_275_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__7(lean_object* v_as_281_, size_t v_i_282_, size_t v_stop_283_, lean_object* v_b_284_){
_start:
{
uint8_t v___x_285_; 
v___x_285_ = lean_usize_dec_eq(v_i_282_, v_stop_283_);
if (v___x_285_ == 0)
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; size_t v___x_293_; size_t v___x_294_; 
v___x_286_ = lean_array_uget_borrowed(v_as_281_, v_i_282_);
v___x_287_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__7___closed__0));
v___x_288_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_288_, 0, v_b_284_);
lean_ctor_set(v___x_288_, 1, v___x_287_);
v___x_289_ = lean_box(1);
v___x_290_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_288_);
lean_ctor_set(v___x_290_, 1, v___x_289_);
lean_inc(v___x_286_);
v___x_291_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_291_, 0, v___x_286_);
v___x_292_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_290_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
v___x_293_ = ((size_t)1ULL);
v___x_294_ = lean_usize_add(v_i_282_, v___x_293_);
v_i_282_ = v___x_294_;
v_b_284_ = v___x_292_;
goto _start;
}
else
{
return v_b_284_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__7___boxed(lean_object* v_as_296_, lean_object* v_i_297_, lean_object* v_stop_298_, lean_object* v_b_299_){
_start:
{
size_t v_i_boxed_300_; size_t v_stop_boxed_301_; lean_object* v_res_302_; 
v_i_boxed_300_ = lean_unbox_usize(v_i_297_);
lean_dec(v_i_297_);
v_stop_boxed_301_ = lean_unbox_usize(v_stop_298_);
lean_dec(v_stop_298_);
v_res_302_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__7(v_as_296_, v_i_boxed_300_, v_stop_boxed_301_, v_b_299_);
lean_dec_ref(v_as_296_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__6_spec__7(lean_object* v_x_303_, lean_object* v_x_304_, lean_object* v_x_305_){
_start:
{
if (lean_obj_tag(v_x_305_) == 0)
{
lean_dec(v_x_303_);
return v_x_304_;
}
else
{
lean_object* v_head_306_; lean_object* v_tail_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_317_; 
v_head_306_ = lean_ctor_get(v_x_305_, 0);
v_tail_307_ = lean_ctor_get(v_x_305_, 1);
v_isSharedCheck_317_ = !lean_is_exclusive(v_x_305_);
if (v_isSharedCheck_317_ == 0)
{
v___x_309_ = v_x_305_;
v_isShared_310_ = v_isSharedCheck_317_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_tail_307_);
lean_inc(v_head_306_);
lean_dec(v_x_305_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_317_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v___x_312_; 
lean_inc(v_x_303_);
if (v_isShared_310_ == 0)
{
lean_ctor_set_tag(v___x_309_, 5);
lean_ctor_set(v___x_309_, 1, v_x_303_);
lean_ctor_set(v___x_309_, 0, v_x_304_);
v___x_312_ = v___x_309_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_x_304_);
lean_ctor_set(v_reuseFailAlloc_316_, 1, v_x_303_);
v___x_312_ = v_reuseFailAlloc_316_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_313_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_313_, 0, v_head_306_);
v___x_314_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_314_, 0, v___x_312_);
lean_ctor_set(v___x_314_, 1, v___x_313_);
v_x_304_ = v___x_314_;
v_x_305_ = v_tail_307_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__6(lean_object* v_x_318_, lean_object* v_x_319_){
_start:
{
if (lean_obj_tag(v_x_318_) == 0)
{
lean_object* v___x_320_; 
lean_dec(v_x_319_);
v___x_320_ = lean_box(0);
return v___x_320_;
}
else
{
lean_object* v_tail_321_; 
v_tail_321_ = lean_ctor_get(v_x_318_, 1);
if (lean_obj_tag(v_tail_321_) == 0)
{
lean_object* v_head_322_; lean_object* v___x_323_; 
lean_dec(v_x_319_);
v_head_322_ = lean_ctor_get(v_x_318_, 0);
lean_inc(v_head_322_);
lean_dec_ref_known(v_x_318_, 2);
v___x_323_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_323_, 0, v_head_322_);
return v___x_323_;
}
else
{
lean_object* v_head_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
lean_inc(v_tail_321_);
v_head_324_ = lean_ctor_get(v_x_318_, 0);
lean_inc(v_head_324_);
lean_dec_ref_known(v_x_318_, 2);
v___x_325_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_325_, 0, v_head_324_);
v___x_326_ = l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__6_spec__7(v_x_319_, v___x_325_, v_tail_321_);
return v___x_326_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__1_spec__1(lean_object* v_o_330_, lean_object* v_k_331_, uint8_t v_v_332_){
_start:
{
lean_object* v_map_333_; uint8_t v_hasTrace_334_; lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_348_; 
v_map_333_ = lean_ctor_get(v_o_330_, 0);
v_hasTrace_334_ = lean_ctor_get_uint8(v_o_330_, sizeof(void*)*1);
v_isSharedCheck_348_ = !lean_is_exclusive(v_o_330_);
if (v_isSharedCheck_348_ == 0)
{
v___x_336_ = v_o_330_;
v_isShared_337_ = v_isSharedCheck_348_;
goto v_resetjp_335_;
}
else
{
lean_inc(v_map_333_);
lean_dec(v_o_330_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_348_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_338_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_338_, 0, v_v_332_);
lean_inc(v_k_331_);
v___x_339_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_331_, v___x_338_, v_map_333_);
if (v_hasTrace_334_ == 0)
{
lean_object* v___x_340_; uint8_t v___x_341_; lean_object* v___x_343_; 
v___x_340_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__1_spec__1___closed__1));
v___x_341_ = l_Lean_Name_isPrefixOf(v___x_340_, v_k_331_);
lean_dec(v_k_331_);
if (v_isShared_337_ == 0)
{
lean_ctor_set(v___x_336_, 0, v___x_339_);
v___x_343_ = v___x_336_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v___x_339_);
v___x_343_ = v_reuseFailAlloc_344_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
lean_ctor_set_uint8(v___x_343_, sizeof(void*)*1, v___x_341_);
return v___x_343_;
}
}
else
{
lean_object* v___x_346_; 
lean_dec(v_k_331_);
if (v_isShared_337_ == 0)
{
lean_ctor_set(v___x_336_, 0, v___x_339_);
v___x_346_ = v___x_336_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v___x_339_);
lean_ctor_set_uint8(v_reuseFailAlloc_347_, sizeof(void*)*1, v_hasTrace_334_);
v___x_346_ = v_reuseFailAlloc_347_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
return v___x_346_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__1_spec__1___boxed(lean_object* v_o_349_, lean_object* v_k_350_, lean_object* v_v_351_){
_start:
{
uint8_t v_v_boxed_352_; lean_object* v_res_353_; 
v_v_boxed_352_ = lean_unbox(v_v_351_);
v_res_353_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__1_spec__1(v_o_349_, v_k_350_, v_v_boxed_352_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__1(lean_object* v_opts_354_, lean_object* v_opt_355_, uint8_t v_val_356_){
_start:
{
lean_object* v_name_357_; lean_object* v___x_358_; 
v_name_357_ = lean_ctor_get(v_opt_355_, 0);
lean_inc(v_name_357_);
lean_dec_ref(v_opt_355_);
v___x_358_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__1_spec__1(v_opts_354_, v_name_357_, v_val_356_);
return v___x_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__1___boxed(lean_object* v_opts_359_, lean_object* v_opt_360_, lean_object* v_val_361_){
_start:
{
uint8_t v_val_boxed_362_; lean_object* v_res_363_; 
v_val_boxed_362_ = lean_unbox(v_val_361_);
v_res_363_ = l_Lean_Option_set___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__1(v_opts_359_, v_opt_360_, v_val_boxed_362_);
return v_res_363_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__3(void){
_start:
{
lean_object* v___x_368_; 
v___x_368_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_368_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__4(void){
_start:
{
lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_369_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__3);
v___x_370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_370_, 0, v___x_369_);
return v___x_370_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__5(void){
_start:
{
lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_371_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__4, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__4);
v___x_372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_372_, 0, v___x_371_);
lean_ctor_set(v___x_372_, 1, v___x_371_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2(size_t v_sz_374_, size_t v_i_375_, lean_object* v_bs_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
uint8_t v___x_382_; 
v___x_382_ = lean_usize_dec_lt(v_i_375_, v_sz_374_);
if (v___x_382_ == 0)
{
lean_object* v___x_383_; 
v___x_383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_383_, 0, v_bs_376_);
return v___x_383_;
}
else
{
lean_object* v_v_384_; lean_object* v_fst_385_; lean_object* v_snd_386_; lean_object* v___x_387_; lean_object* v_bs_x27_388_; lean_object* v_value_390_; 
v_v_384_ = lean_array_uget_borrowed(v_bs_376_, v_i_375_);
v_fst_385_ = lean_ctor_get(v_v_384_, 0);
lean_inc(v_fst_385_);
v_snd_386_ = lean_ctor_get(v_v_384_, 1);
lean_inc(v_snd_386_);
v___x_387_ = lean_unsigned_to_nat(0u);
v_bs_x27_388_ = lean_array_uset(v_bs_376_, v_i_375_, v___x_387_);
if (lean_obj_tag(v_snd_386_) == 1)
{
lean_object* v_toCold_399_; lean_object* v_val_400_; lean_object* v_currRecDepth_401_; lean_object* v_ref_402_; uint8_t v_suppressElabErrors_403_; uint8_t v_checkDeprecated_404_; uint8_t v_isRecordingDeps_405_; lean_object* v_fileName_406_; lean_object* v_fileMap_407_; lean_object* v_options_408_; lean_object* v_currNamespace_409_; lean_object* v_openDecls_410_; lean_object* v_initHeartbeats_411_; lean_object* v_maxHeartbeats_412_; lean_object* v_quotContext_413_; lean_object* v_currMacroScope_414_; lean_object* v_cancelTk_x3f_415_; lean_object* v_inheritedTraceOptions_416_; lean_object* v___x_417_; lean_object* v___y_419_; uint16_t v___y_420_; lean_object* v_fileName_421_; lean_object* v_fileMap_422_; lean_object* v_currNamespace_423_; lean_object* v_openDecls_424_; lean_object* v_initHeartbeats_425_; lean_object* v_maxHeartbeats_426_; lean_object* v_quotContext_427_; lean_object* v_currMacroScope_428_; lean_object* v_cancelTk_x3f_429_; lean_object* v_inheritedTraceOptions_430_; lean_object* v_currRecDepth_431_; lean_object* v_ref_432_; uint8_t v_suppressElabErrors_433_; uint8_t v_checkDeprecated_434_; uint8_t v_isRecordingDeps_435_; lean_object* v___y_436_; lean_object* v___y_465_; lean_object* v_nextMacroScope_466_; lean_object* v_ngen_467_; lean_object* v_auxDeclNGen_468_; lean_object* v_traceState_469_; lean_object* v_recordedDeps_470_; lean_object* v_messages_471_; lean_object* v_infoState_472_; lean_object* v_snapshotTasks_473_; uint16_t v___y_474_; lean_object* v___y_475_; lean_object* v___y_480_; uint16_t v___y_481_; uint8_t v___y_482_; lean_object* v___y_500_; 
v_toCold_399_ = lean_ctor_get(v___y_379_, 0);
v_val_400_ = lean_ctor_get(v_snd_386_, 0);
lean_inc(v_val_400_);
lean_dec_ref_known(v_snd_386_, 1);
v_currRecDepth_401_ = lean_ctor_get(v___y_379_, 1);
v_ref_402_ = lean_ctor_get(v___y_379_, 2);
v_suppressElabErrors_403_ = lean_ctor_get_uint8(v___y_379_, sizeof(void*)*3 + 2);
v_checkDeprecated_404_ = lean_ctor_get_uint8(v___y_379_, sizeof(void*)*3 + 3);
v_isRecordingDeps_405_ = lean_ctor_get_uint8(v___y_379_, sizeof(void*)*3 + 4);
v_fileName_406_ = lean_ctor_get(v_toCold_399_, 0);
v_fileMap_407_ = lean_ctor_get(v_toCold_399_, 1);
v_options_408_ = lean_ctor_get(v_toCold_399_, 2);
v_currNamespace_409_ = lean_ctor_get(v_toCold_399_, 4);
v_openDecls_410_ = lean_ctor_get(v_toCold_399_, 5);
v_initHeartbeats_411_ = lean_ctor_get(v_toCold_399_, 6);
v_maxHeartbeats_412_ = lean_ctor_get(v_toCold_399_, 7);
v_quotContext_413_ = lean_ctor_get(v_toCold_399_, 8);
v_currMacroScope_414_ = lean_ctor_get(v_toCold_399_, 9);
v_cancelTk_x3f_415_ = lean_ctor_get(v_toCold_399_, 10);
v_inheritedTraceOptions_416_ = lean_ctor_get(v_toCold_399_, 11);
v___x_417_ = lean_box(1);
if (v_isRecordingDeps_405_ == 0)
{
lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_510_ = l_Lean_pp_mvars;
lean_inc_ref(v_options_408_);
v___x_511_ = l_Lean_Option_set___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__1(v_options_408_, v___x_510_, v_isRecordingDeps_405_);
v___y_500_ = v___x_511_;
goto v___jp_499_;
}
else
{
lean_object* v___x_512_; 
lean_inc_ref(v_options_408_);
v___x_512_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v_options_408_);
v___y_500_ = v___x_512_;
goto v___jp_499_;
}
v___jp_418_:
{
lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_437_ = l_Lean_maxRecDepth;
v___x_438_ = l_Lean_Option_get___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__0(v___y_419_, v___x_437_);
v___x_439_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_439_, 0, v_fileName_421_);
lean_ctor_set(v___x_439_, 1, v_fileMap_422_);
lean_ctor_set(v___x_439_, 2, v___y_419_);
lean_ctor_set(v___x_439_, 3, v___x_438_);
lean_ctor_set(v___x_439_, 4, v_currNamespace_423_);
lean_ctor_set(v___x_439_, 5, v_openDecls_424_);
lean_ctor_set(v___x_439_, 6, v_initHeartbeats_425_);
lean_ctor_set(v___x_439_, 7, v_maxHeartbeats_426_);
lean_ctor_set(v___x_439_, 8, v_quotContext_427_);
lean_ctor_set(v___x_439_, 9, v_currMacroScope_428_);
lean_ctor_set(v___x_439_, 10, v_cancelTk_x3f_429_);
lean_ctor_set(v___x_439_, 11, v_inheritedTraceOptions_430_);
lean_inc(v_ref_432_);
lean_inc(v_currRecDepth_431_);
v___x_440_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_440_, 0, v___x_439_);
lean_ctor_set(v___x_440_, 1, v_currRecDepth_431_);
lean_ctor_set(v___x_440_, 2, v_ref_432_);
lean_ctor_set_uint16(v___x_440_, sizeof(void*)*3, v___y_420_);
lean_ctor_set_uint8(v___x_440_, sizeof(void*)*3 + 2, v_suppressElabErrors_433_);
lean_ctor_set_uint8(v___x_440_, sizeof(void*)*3 + 3, v_checkDeprecated_434_);
lean_ctor_set_uint8(v___x_440_, sizeof(void*)*3 + 4, v_isRecordingDeps_435_);
v___x_441_ = l_Lean_PrettyPrinter_delab(v_val_400_, v___x_417_, v___y_377_, v___y_378_, v___x_440_, v___y_436_);
lean_dec_ref_known(v___x_440_, 3);
if (lean_obj_tag(v___x_441_) == 0)
{
lean_object* v_a_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v_a_442_ = lean_ctor_get(v___x_441_, 0);
lean_inc(v_a_442_);
lean_dec_ref_known(v___x_441_, 1);
v___x_443_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__2));
v___x_444_ = l_Lean_PrettyPrinter_ppCategory(v___x_443_, v_a_442_, v___y_379_, v___y_380_);
if (lean_obj_tag(v___x_444_) == 0)
{
lean_object* v_a_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
v_a_445_ = lean_ctor_get(v___x_444_, 0);
lean_inc(v_a_445_);
lean_dec_ref_known(v___x_444_, 1);
v___x_446_ = l_Std_Format_defWidth;
v___x_447_ = l_Std_Format_pretty(v_a_445_, v___x_446_, v___x_387_, v___x_387_);
v_value_390_ = v___x_447_;
goto v___jp_389_;
}
else
{
lean_object* v_a_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_455_; 
lean_dec_ref(v_bs_x27_388_);
lean_dec(v_fst_385_);
v_a_448_ = lean_ctor_get(v___x_444_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_455_ == 0)
{
v___x_450_ = v___x_444_;
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_a_448_);
lean_dec(v___x_444_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_453_; 
if (v_isShared_451_ == 0)
{
v___x_453_ = v___x_450_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_a_448_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
}
else
{
lean_object* v_a_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_463_; 
lean_dec_ref(v_bs_x27_388_);
lean_dec(v_fst_385_);
v_a_456_ = lean_ctor_get(v___x_441_, 0);
v_isSharedCheck_463_ = !lean_is_exclusive(v___x_441_);
if (v_isSharedCheck_463_ == 0)
{
v___x_458_ = v___x_441_;
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_a_456_);
lean_dec(v___x_441_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_461_; 
if (v_isShared_459_ == 0)
{
v___x_461_ = v___x_458_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v_a_456_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
return v___x_461_;
}
}
}
}
v___jp_464_:
{
lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_476_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__5, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__5);
v___x_477_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_477_, 0, v___y_475_);
lean_ctor_set(v___x_477_, 1, v_nextMacroScope_466_);
lean_ctor_set(v___x_477_, 2, v_ngen_467_);
lean_ctor_set(v___x_477_, 3, v_auxDeclNGen_468_);
lean_ctor_set(v___x_477_, 4, v_traceState_469_);
lean_ctor_set(v___x_477_, 5, v___x_476_);
lean_ctor_set(v___x_477_, 6, v_recordedDeps_470_);
lean_ctor_set(v___x_477_, 7, v_messages_471_);
lean_ctor_set(v___x_477_, 8, v_infoState_472_);
lean_ctor_set(v___x_477_, 9, v_snapshotTasks_473_);
v___x_478_ = lean_st_ref_put(v___y_380_, v___x_477_);
lean_inc_ref(v_inheritedTraceOptions_416_);
lean_inc(v_cancelTk_x3f_415_);
lean_inc(v_currMacroScope_414_);
lean_inc(v_quotContext_413_);
lean_inc(v_maxHeartbeats_412_);
lean_inc(v_initHeartbeats_411_);
lean_inc(v_openDecls_410_);
lean_inc(v_currNamespace_409_);
lean_inc_ref(v_fileMap_407_);
lean_inc_ref(v_fileName_406_);
v___y_419_ = v___y_465_;
v___y_420_ = v___y_474_;
v_fileName_421_ = v_fileName_406_;
v_fileMap_422_ = v_fileMap_407_;
v_currNamespace_423_ = v_currNamespace_409_;
v_openDecls_424_ = v_openDecls_410_;
v_initHeartbeats_425_ = v_initHeartbeats_411_;
v_maxHeartbeats_426_ = v_maxHeartbeats_412_;
v_quotContext_427_ = v_quotContext_413_;
v_currMacroScope_428_ = v_currMacroScope_414_;
v_cancelTk_x3f_429_ = v_cancelTk_x3f_415_;
v_inheritedTraceOptions_430_ = v_inheritedTraceOptions_416_;
v_currRecDepth_431_ = v_currRecDepth_401_;
v_ref_432_ = v_ref_402_;
v_suppressElabErrors_433_ = v_suppressElabErrors_403_;
v_checkDeprecated_434_ = v_checkDeprecated_404_;
v_isRecordingDeps_435_ = v_isRecordingDeps_405_;
v___y_436_ = v___y_380_;
goto v___jp_418_;
}
v___jp_479_:
{
lean_object* v___x_483_; lean_object* v_env_484_; lean_object* v_nextMacroScope_485_; lean_object* v_ngen_486_; lean_object* v_auxDeclNGen_487_; lean_object* v_traceState_488_; lean_object* v_recordedDeps_489_; lean_object* v_messages_490_; lean_object* v_infoState_491_; lean_object* v_snapshotTasks_492_; uint16_t v___x_493_; uint16_t v___x_494_; uint16_t v___x_495_; uint8_t v___x_496_; 
v___x_483_ = lean_st_ref_take(v___y_380_);
v_env_484_ = lean_ctor_get(v___x_483_, 0);
lean_inc_ref(v_env_484_);
v_nextMacroScope_485_ = lean_ctor_get(v___x_483_, 1);
lean_inc(v_nextMacroScope_485_);
v_ngen_486_ = lean_ctor_get(v___x_483_, 2);
lean_inc_ref(v_ngen_486_);
v_auxDeclNGen_487_ = lean_ctor_get(v___x_483_, 3);
lean_inc_ref(v_auxDeclNGen_487_);
v_traceState_488_ = lean_ctor_get(v___x_483_, 4);
lean_inc_ref(v_traceState_488_);
v_recordedDeps_489_ = lean_ctor_get(v___x_483_, 6);
lean_inc_ref(v_recordedDeps_489_);
v_messages_490_ = lean_ctor_get(v___x_483_, 7);
lean_inc_ref(v_messages_490_);
v_infoState_491_ = lean_ctor_get(v___x_483_, 8);
lean_inc_ref(v_infoState_491_);
v_snapshotTasks_492_ = lean_ctor_get(v___x_483_, 9);
lean_inc_ref(v_snapshotTasks_492_);
lean_dec(v___x_483_);
v___x_493_ = 512;
v___x_494_ = lean_uint16_land(v___y_481_, v___x_493_);
v___x_495_ = 0;
v___x_496_ = lean_uint16_dec_eq(v___x_494_, v___x_495_);
if (v___x_496_ == 0)
{
lean_object* v___x_497_; 
v___x_497_ = l_Lean_Kernel_enableDiag(v_env_484_, v___x_382_);
v___y_465_ = v___y_480_;
v_nextMacroScope_466_ = v_nextMacroScope_485_;
v_ngen_467_ = v_ngen_486_;
v_auxDeclNGen_468_ = v_auxDeclNGen_487_;
v_traceState_469_ = v_traceState_488_;
v_recordedDeps_470_ = v_recordedDeps_489_;
v_messages_471_ = v_messages_490_;
v_infoState_472_ = v_infoState_491_;
v_snapshotTasks_473_ = v_snapshotTasks_492_;
v___y_474_ = v___y_481_;
v___y_475_ = v___x_497_;
goto v___jp_464_;
}
else
{
lean_object* v___x_498_; 
v___x_498_ = l_Lean_Kernel_enableDiag(v_env_484_, v___y_482_);
v___y_465_ = v___y_480_;
v_nextMacroScope_466_ = v_nextMacroScope_485_;
v_ngen_467_ = v_ngen_486_;
v_auxDeclNGen_468_ = v_auxDeclNGen_487_;
v_traceState_469_ = v_traceState_488_;
v_recordedDeps_470_ = v_recordedDeps_489_;
v_messages_471_ = v_messages_490_;
v_infoState_472_ = v_infoState_491_;
v_snapshotTasks_473_ = v_snapshotTasks_492_;
v___y_474_ = v___y_481_;
v___y_475_ = v___x_498_;
goto v___jp_464_;
}
}
v___jp_499_:
{
uint16_t v___x_501_; lean_object* v___x_502_; lean_object* v_env_503_; uint8_t v___x_504_; uint16_t v___x_505_; uint16_t v___x_506_; uint16_t v___x_507_; uint8_t v___x_508_; 
v___x_501_ = l_Lean_OptionFlags_ofOptions(v___y_500_);
v___x_502_ = lean_st_ref_get(v___y_380_);
v_env_503_ = lean_ctor_get(v___x_502_, 0);
lean_inc_ref(v_env_503_);
lean_dec(v___x_502_);
v___x_504_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_503_);
lean_dec_ref(v_env_503_);
v___x_505_ = 512;
v___x_506_ = lean_uint16_land(v___x_501_, v___x_505_);
v___x_507_ = 0;
v___x_508_ = lean_uint16_dec_eq(v___x_506_, v___x_507_);
if (v___x_508_ == 0)
{
if (v___x_504_ == 0)
{
v___y_480_ = v___y_500_;
v___y_481_ = v___x_501_;
v___y_482_ = v___x_504_;
goto v___jp_479_;
}
else
{
lean_inc_ref(v_inheritedTraceOptions_416_);
lean_inc(v_cancelTk_x3f_415_);
lean_inc(v_currMacroScope_414_);
lean_inc(v_quotContext_413_);
lean_inc(v_maxHeartbeats_412_);
lean_inc(v_initHeartbeats_411_);
lean_inc(v_openDecls_410_);
lean_inc(v_currNamespace_409_);
lean_inc_ref(v_fileMap_407_);
lean_inc_ref(v_fileName_406_);
v___y_419_ = v___y_500_;
v___y_420_ = v___x_501_;
v_fileName_421_ = v_fileName_406_;
v_fileMap_422_ = v_fileMap_407_;
v_currNamespace_423_ = v_currNamespace_409_;
v_openDecls_424_ = v_openDecls_410_;
v_initHeartbeats_425_ = v_initHeartbeats_411_;
v_maxHeartbeats_426_ = v_maxHeartbeats_412_;
v_quotContext_427_ = v_quotContext_413_;
v_currMacroScope_428_ = v_currMacroScope_414_;
v_cancelTk_x3f_429_ = v_cancelTk_x3f_415_;
v_inheritedTraceOptions_430_ = v_inheritedTraceOptions_416_;
v_currRecDepth_431_ = v_currRecDepth_401_;
v_ref_432_ = v_ref_402_;
v_suppressElabErrors_433_ = v_suppressElabErrors_403_;
v_checkDeprecated_434_ = v_checkDeprecated_404_;
v_isRecordingDeps_435_ = v_isRecordingDeps_405_;
v___y_436_ = v___y_380_;
goto v___jp_418_;
}
}
else
{
if (v___x_504_ == 0)
{
lean_inc_ref(v_inheritedTraceOptions_416_);
lean_inc(v_cancelTk_x3f_415_);
lean_inc(v_currMacroScope_414_);
lean_inc(v_quotContext_413_);
lean_inc(v_maxHeartbeats_412_);
lean_inc(v_initHeartbeats_411_);
lean_inc(v_openDecls_410_);
lean_inc(v_currNamespace_409_);
lean_inc_ref(v_fileMap_407_);
lean_inc_ref(v_fileName_406_);
v___y_419_ = v___y_500_;
v___y_420_ = v___x_501_;
v_fileName_421_ = v_fileName_406_;
v_fileMap_422_ = v_fileMap_407_;
v_currNamespace_423_ = v_currNamespace_409_;
v_openDecls_424_ = v_openDecls_410_;
v_initHeartbeats_425_ = v_initHeartbeats_411_;
v_maxHeartbeats_426_ = v_maxHeartbeats_412_;
v_quotContext_427_ = v_quotContext_413_;
v_currMacroScope_428_ = v_currMacroScope_414_;
v_cancelTk_x3f_429_ = v_cancelTk_x3f_415_;
v_inheritedTraceOptions_430_ = v_inheritedTraceOptions_416_;
v_currRecDepth_431_ = v_currRecDepth_401_;
v_ref_432_ = v_ref_402_;
v_suppressElabErrors_433_ = v_suppressElabErrors_403_;
v_checkDeprecated_434_ = v_checkDeprecated_404_;
v_isRecordingDeps_435_ = v_isRecordingDeps_405_;
v___y_436_ = v___y_380_;
goto v___jp_418_;
}
else
{
uint8_t v___x_509_; 
v___x_509_ = 0;
v___y_480_ = v___y_500_;
v___y_481_ = v___x_501_;
v___y_482_ = v___x_509_;
goto v___jp_479_;
}
}
}
}
else
{
lean_object* v___x_513_; 
lean_dec(v_snd_386_);
v___x_513_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__6));
v_value_390_ = v___x_513_;
goto v___jp_389_;
}
v___jp_389_:
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; size_t v___x_395_; size_t v___x_396_; lean_object* v___x_397_; 
v___x_391_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_385_, v___x_382_);
v___x_392_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___closed__0));
v___x_393_ = lean_string_append(v___x_391_, v___x_392_);
v___x_394_ = lean_string_append(v___x_393_, v_value_390_);
lean_dec_ref(v_value_390_);
v___x_395_ = ((size_t)1ULL);
v___x_396_ = lean_usize_add(v_i_375_, v___x_395_);
v___x_397_ = lean_array_uset(v_bs_x27_388_, v_i_375_, v___x_394_);
v_i_375_ = v___x_396_;
v_bs_376_ = v___x_397_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2___boxed(lean_object* v_sz_514_, lean_object* v_i_515_, lean_object* v_bs_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_){
_start:
{
size_t v_sz_boxed_522_; size_t v_i_boxed_523_; lean_object* v_res_524_; 
v_sz_boxed_522_ = lean_unbox_usize(v_sz_514_);
lean_dec(v_sz_514_);
v_i_boxed_523_ = lean_unbox_usize(v_i_515_);
lean_dec(v_i_515_);
v_res_524_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2(v_sz_boxed_522_, v_i_boxed_523_, v_bs_516_, v___y_517_, v___y_518_, v___y_519_, v___y_520_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
lean_dec(v___y_518_);
lean_dec_ref(v___y_517_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__4(lean_object* v_s_525_, lean_object* v_pos_526_){
_start:
{
lean_object* v_str_527_; lean_object* v_startInclusive_528_; lean_object* v_endExclusive_529_; lean_object* v___x_530_; lean_object* v___x_539_; lean_object* v___x_540_; uint8_t v_decide_541_; 
v_str_527_ = lean_ctor_get(v_s_525_, 0);
v_startInclusive_528_ = lean_ctor_get(v_s_525_, 1);
v_endExclusive_529_ = lean_ctor_get(v_s_525_, 2);
v___x_530_ = lean_nat_add(v_startInclusive_528_, v_pos_526_);
v___x_539_ = lean_unsigned_to_nat(0u);
v___x_540_ = lean_nat_sub(v_endExclusive_529_, v___x_530_);
v_decide_541_ = lean_nat_dec_eq(v___x_539_, v___x_540_);
lean_dec(v___x_540_);
if (v_decide_541_ == 0)
{
uint32_t v___x_542_; uint32_t v___x_543_; uint8_t v___x_544_; 
v___x_542_ = lean_string_utf8_get_fast(v_str_527_, v___x_530_);
v___x_543_ = 32;
v___x_544_ = lean_uint32_dec_eq(v___x_542_, v___x_543_);
if (v___x_544_ == 0)
{
uint32_t v___x_545_; uint8_t v___x_546_; 
v___x_545_ = 9;
v___x_546_ = lean_uint32_dec_eq(v___x_542_, v___x_545_);
if (v___x_546_ == 0)
{
uint32_t v___x_547_; uint8_t v___x_548_; 
v___x_547_ = 13;
v___x_548_ = lean_uint32_dec_eq(v___x_542_, v___x_547_);
if (v___x_548_ == 0)
{
uint32_t v___x_549_; uint8_t v___x_550_; 
v___x_549_ = 10;
v___x_550_ = lean_uint32_dec_eq(v___x_542_, v___x_549_);
if (v___x_550_ == 0)
{
lean_dec(v___x_530_);
return v_pos_526_;
}
else
{
goto v___jp_531_;
}
}
else
{
goto v___jp_531_;
}
}
else
{
goto v___jp_531_;
}
}
else
{
goto v___jp_531_;
}
}
else
{
lean_dec(v___x_530_);
return v_pos_526_;
}
v___jp_531_:
{
lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; uint8_t v___x_537_; 
v___x_532_ = lean_string_utf8_next_fast(v_str_527_, v___x_530_);
v___x_533_ = lean_nat_sub(v___x_532_, v___x_530_);
lean_dec(v___x_530_);
v___x_534_ = lean_nat_add(v_pos_526_, v___x_533_);
lean_dec(v___x_533_);
v___x_535_ = lean_unsigned_to_nat(1u);
v___x_536_ = lean_nat_add(v_pos_526_, v___x_535_);
v___x_537_ = lean_nat_dec_le(v___x_536_, v___x_534_);
lean_dec(v___x_536_);
if (v___x_537_ == 0)
{
lean_dec(v___x_534_);
return v_pos_526_;
}
else
{
lean_dec(v_pos_526_);
v_pos_526_ = v___x_534_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__4___boxed(lean_object* v_s_551_, lean_object* v_pos_552_){
_start:
{
lean_object* v_res_553_; 
v_res_553_ = l_String_Slice_Pos_skipWhile___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__4(v_s_551_, v_pos_552_);
lean_dec_ref(v_s_551_);
return v_res_553_;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__3(void){
_start:
{
lean_object* v___x_558_; lean_object* v___x_559_; 
v___x_558_ = ((lean_object*)(l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__2));
v___x_559_ = l_Lean_stringToMessageData(v___x_558_);
return v___x_559_;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__4(void){
_start:
{
lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_560_ = lean_box(0);
v___x_561_ = l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___lam__1(v___x_560_);
return v___x_561_;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__10(void){
_start:
{
lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_568_ = ((lean_object*)(l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__9));
v___x_569_ = lean_unsigned_to_nat(14u);
v___x_570_ = lean_unsigned_to_nat(22u);
v___x_571_ = ((lean_object*)(l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__8));
v___x_572_ = ((lean_object*)(l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__7));
v___x_573_ = l_mkPanicMessageWithDecl(v___x_572_, v___x_571_, v___x_570_, v___x_569_, v___x_568_);
return v___x_573_;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___boxed__const__1(void){
_start:
{
uint32_t v___x_574_; lean_object* v___x_575_; 
v___x_574_ = 32;
v___x_575_ = lean_box_uint32(v___x_574_);
return v___x_575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint(lean_object* v_fields_576_, lean_object* v_stx_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_){
_start:
{
lean_object* v___x_583_; 
lean_inc(v_stx_577_);
v___x_583_ = l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_mkFieldsHintView_x3f(v_stx_577_);
if (lean_obj_tag(v___x_583_) == 1)
{
lean_object* v_val_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_799_; 
v_val_584_ = lean_ctor_get(v___x_583_, 0);
v_isSharedCheck_799_ = !lean_is_exclusive(v___x_583_);
if (v_isSharedCheck_799_ == 0)
{
v___x_586_ = v___x_583_;
v_isShared_587_ = v_isSharedCheck_799_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_val_584_);
lean_dec(v___x_583_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_799_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
size_t v_sz_588_; size_t v___x_589_; lean_object* v___x_590_; 
v_sz_588_ = lean_array_size(v_fields_576_);
v___x_589_ = ((size_t)0ULL);
v___x_590_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__2(v_sz_588_, v___x_589_, v_fields_576_, v_a_578_, v_a_579_, v_a_580_, v_a_581_);
if (lean_obj_tag(v___x_590_) == 0)
{
lean_object* v_a_591_; lean_object* v___x_592_; lean_object* v_a_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_790_; 
v_a_591_ = lean_ctor_get(v___x_590_, 0);
lean_inc(v_a_591_);
lean_dec_ref_known(v___x_590_, 1);
v___x_592_ = l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_isSingleLineStyle___redArg(v_stx_577_, v_val_584_, v_a_580_);
lean_dec(v_stx_577_);
v_a_593_ = lean_ctor_get(v___x_592_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_790_ == 0)
{
v___x_595_ = v___x_592_;
v_isShared_596_ = v_isSharedCheck_790_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_a_593_);
lean_dec(v___x_592_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_790_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
uint8_t v___x_597_; lean_object* v___y_599_; lean_object* v___y_600_; lean_object* v___y_601_; lean_object* v___y_602_; lean_object* v___y_628_; lean_object* v___y_629_; lean_object* v___y_630_; lean_object* v___y_631_; lean_object* v___y_632_; lean_object* v___y_633_; lean_object* v_fst_634_; lean_object* v_snd_635_; lean_object* v___y_641_; lean_object* v___y_642_; lean_object* v___y_643_; lean_object* v___y_644_; lean_object* v___y_645_; lean_object* v___y_646_; lean_object* v___y_647_; lean_object* v___y_651_; lean_object* v___y_652_; lean_object* v___y_653_; lean_object* v___y_654_; lean_object* v___y_655_; lean_object* v___y_656_; lean_object* v___y_667_; lean_object* v___y_668_; lean_object* v___y_669_; lean_object* v___y_670_; lean_object* v___y_671_; lean_object* v___y_672_; lean_object* v___y_675_; lean_object* v___y_676_; uint8_t v___y_677_; lean_object* v___y_678_; lean_object* v___y_679_; lean_object* v___y_680_; lean_object* v___y_681_; uint8_t v___y_682_; lean_object* v___y_683_; lean_object* v___y_690_; lean_object* v___y_691_; uint8_t v___y_692_; lean_object* v___y_693_; lean_object* v___y_694_; lean_object* v___y_695_; lean_object* v___y_696_; lean_object* v___y_697_; lean_object* v___y_698_; uint8_t v___y_699_; lean_object* v___y_700_; lean_object* v_startInclusive_701_; lean_object* v_endExclusive_702_; lean_object* v___y_712_; lean_object* v___y_713_; uint8_t v___y_714_; lean_object* v___y_715_; lean_object* v___y_716_; lean_object* v___y_717_; lean_object* v___y_718_; lean_object* v___y_719_; uint8_t v___y_720_; lean_object* v___y_721_; lean_object* v___y_727_; lean_object* v___y_728_; lean_object* v___y_729_; lean_object* v___y_730_; lean_object* v___y_757_; lean_object* v___y_758_; lean_object* v___y_759_; lean_object* v___y_760_; lean_object* v___y_764_; lean_object* v___y_777_; uint8_t v___x_780_; 
v___x_597_ = 1;
v___x_780_ = lean_unbox(v_a_593_);
if (v___x_780_ == 0)
{
lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; 
v___x_781_ = lean_array_to_list(v_a_591_);
v___x_782_ = lean_box(1);
v___x_783_ = l_Std_Format_joinSep___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__6(v___x_781_, v___x_782_);
v___y_764_ = v___x_783_;
goto v___jp_763_;
}
else
{
lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; uint8_t v___x_787_; 
v___x_784_ = lean_box(0);
v___x_785_ = lean_unsigned_to_nat(0u);
v___x_786_ = lean_array_get_size(v_a_591_);
v___x_787_ = lean_nat_dec_lt(v___x_785_, v___x_786_);
if (v___x_787_ == 0)
{
lean_dec(v_a_591_);
v___y_777_ = v___x_784_;
goto v___jp_776_;
}
else
{
size_t v___x_788_; lean_object* v___x_789_; 
v___x_788_ = lean_usize_of_nat(v___x_786_);
v___x_789_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__7(v_a_591_, v___x_589_, v___x_788_, v___x_784_);
lean_dec(v_a_591_);
v___y_777_ = v___x_789_;
goto v___jp_776_;
}
}
v___jp_598_:
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_609_; 
v___x_603_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_580_);
v___x_604_ = l_Lean_Meta_Tactic_TryThis_format_inputWidth;
v___x_605_ = l_Lean_Option_get___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__0(v___x_603_, v___x_604_);
lean_dec_ref(v___x_603_);
lean_inc(v___y_602_);
v___x_606_ = lean_apply_1(v___y_599_, v___y_602_);
v___x_607_ = l_Std_Format_pretty(v___y_600_, v___x_605_, v___y_601_, v___x_606_);
lean_dec(v___x_605_);
if (v_isShared_596_ == 0)
{
lean_ctor_set_tag(v___x_595_, 1);
lean_ctor_set(v___x_595_, 0, v___x_607_);
v___x_609_ = v___x_595_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v___x_607_);
v___x_609_ = v_reuseFailAlloc_626_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_616_; 
v___x_610_ = lean_box(0);
v___x_611_ = ((lean_object*)(l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__1));
v___x_612_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_612_, 0, v___x_609_);
lean_ctor_set(v___x_612_, 1, v___x_610_);
lean_ctor_set(v___x_612_, 2, v___x_610_);
lean_ctor_set(v___x_612_, 3, v___x_610_);
lean_ctor_set(v___x_612_, 4, v___x_610_);
lean_ctor_set(v___x_612_, 5, v___x_611_);
lean_inc(v___y_602_);
v___x_613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_613_, 0, v___y_602_);
lean_ctor_set(v___x_613_, 1, v___y_602_);
v___x_614_ = l_Lean_Syntax_ofRange(v___x_613_, v___x_597_);
if (v_isShared_587_ == 0)
{
lean_ctor_set(v___x_586_, 0, v___x_614_);
v___x_616_ = v___x_586_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v___x_614_);
v___x_616_ = v_reuseFailAlloc_625_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
uint8_t v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; uint8_t v___x_623_; lean_object* v___x_624_; 
v___x_617_ = 0;
v___x_618_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_618_, 0, v___x_612_);
lean_ctor_set(v___x_618_, 1, v___x_616_);
lean_ctor_set(v___x_618_, 2, v___x_610_);
lean_ctor_set_uint8(v___x_618_, sizeof(void*)*3, v___x_617_);
v___x_619_ = lean_obj_once(&l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__3, &l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__3_once, _init_l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__3);
v___x_620_ = lean_unsigned_to_nat(1u);
v___x_621_ = lean_mk_empty_array_with_capacity(v___x_620_);
v___x_622_ = lean_array_push(v___x_621_, v___x_618_);
v___x_623_ = 0;
v___x_624_ = l_Lean_MessageData_hint(v___x_619_, v___x_622_, v___x_610_, v___x_610_, v___x_623_, v_a_580_, v_a_581_);
lean_dec_ref(v___x_622_);
return v___x_624_;
}
}
}
v___jp_627_:
{
lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_636_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_636_, 0, v_fst_634_);
lean_ctor_set(v___x_636_, 1, v___y_631_);
v___x_637_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_637_, 0, v___x_636_);
lean_ctor_set(v___x_637_, 1, v_snd_635_);
if (lean_obj_tag(v___y_630_) == 0)
{
if (lean_obj_tag(v___y_632_) == 0)
{
v___y_599_ = v___y_628_;
v___y_600_ = v___x_637_;
v___y_601_ = v___y_633_;
v___y_602_ = v___y_629_;
goto v___jp_598_;
}
else
{
lean_object* v_val_638_; 
lean_dec(v___y_629_);
v_val_638_ = lean_ctor_get(v___y_632_, 0);
lean_inc(v_val_638_);
lean_dec_ref_known(v___y_632_, 1);
v___y_599_ = v___y_628_;
v___y_600_ = v___x_637_;
v___y_601_ = v___y_633_;
v___y_602_ = v_val_638_;
goto v___jp_598_;
}
}
else
{
lean_object* v_val_639_; 
lean_dec(v___y_632_);
lean_dec(v___y_629_);
v_val_639_ = lean_ctor_get(v___y_630_, 0);
lean_inc(v_val_639_);
lean_dec_ref_known(v___y_630_, 1);
v___y_599_ = v___y_628_;
v___y_600_ = v___x_637_;
v___y_601_ = v___y_633_;
v___y_602_ = v_val_639_;
goto v___jp_598_;
}
}
v___jp_640_:
{
lean_object* v_fst_648_; lean_object* v_snd_649_; 
v_fst_648_ = lean_ctor_get(v___y_647_, 0);
v_snd_649_ = lean_ctor_get(v___y_647_, 1);
lean_inc(v_snd_649_);
lean_inc(v_fst_648_);
v___y_628_ = v___y_641_;
v___y_629_ = v___y_642_;
v___y_630_ = v___y_643_;
v___y_631_ = v___y_644_;
v___y_632_ = v___y_646_;
v___y_633_ = v___y_645_;
v_fst_634_ = v_fst_648_;
v_snd_635_ = v_snd_649_;
goto v___jp_627_;
}
v___jp_650_:
{
if (lean_obj_tag(v___y_656_) == 0)
{
lean_object* v___x_657_; 
v___x_657_ = lean_obj_once(&l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__4, &l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__4_once, _init_l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__4);
v___y_641_ = v___y_651_;
v___y_642_ = v___y_652_;
v___y_643_ = v___y_653_;
v___y_644_ = v___y_654_;
v___y_645_ = v___y_655_;
v___y_646_ = v___y_656_;
v___y_647_ = v___x_657_;
goto v___jp_640_;
}
else
{
lean_object* v_val_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v_val_658_ = lean_ctor_get(v___y_656_, 0);
lean_inc_ref(v___y_651_);
lean_inc(v_val_658_);
v___x_659_ = lean_apply_1(v___y_651_, v_val_658_);
v___x_660_ = lean_nat_sub(v___y_655_, v___x_659_);
lean_dec(v___x_659_);
v___x_661_ = l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___boxed__const__1;
v___x_662_ = l_List_replicateTR___redArg(v___x_660_, v___x_661_);
v___x_663_ = lean_string_mk(v___x_662_);
v___x_664_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_664_, 0, v___x_663_);
v___x_665_ = lean_box(0);
v___y_628_ = v___y_651_;
v___y_629_ = v___y_652_;
v___y_630_ = v___y_653_;
v___y_631_ = v___y_654_;
v___y_632_ = v___y_656_;
v___y_633_ = v___y_655_;
v_fst_634_ = v___x_664_;
v_snd_635_ = v___x_665_;
goto v___jp_627_;
}
}
v___jp_666_:
{
lean_object* v___x_673_; 
v___x_673_ = lean_obj_once(&l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__4, &l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__4_once, _init_l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__4);
v___y_641_ = v___y_667_;
v___y_642_ = v___y_668_;
v___y_643_ = v___y_669_;
v___y_644_ = v___y_670_;
v___y_645_ = v___y_672_;
v___y_646_ = v___y_671_;
v___y_647_ = v___x_673_;
goto v___jp_640_;
}
v___jp_674_:
{
uint8_t v___x_684_; 
v___x_684_ = lean_unbox(v_a_593_);
lean_dec(v_a_593_);
if (v___x_684_ == 0)
{
lean_object* v___x_685_; uint8_t v___x_686_; 
v___x_685_ = lean_unsigned_to_nat(0u);
v___x_686_ = lean_nat_dec_lt(v___x_685_, v___y_676_);
lean_dec(v___y_676_);
if (v___x_686_ == 0)
{
if (v___y_682_ == 0)
{
if (v___y_677_ == 0)
{
lean_object* v___x_687_; 
v___x_687_ = ((lean_object*)(l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__6));
v___y_628_ = v___y_675_;
v___y_629_ = v___y_678_;
v___y_630_ = v___y_679_;
v___y_631_ = v___y_680_;
v___y_632_ = v___y_683_;
v___y_633_ = v___y_681_;
v_fst_634_ = v___x_687_;
v_snd_635_ = v___x_687_;
goto v___jp_627_;
}
else
{
v___y_651_ = v___y_675_;
v___y_652_ = v___y_678_;
v___y_653_ = v___y_679_;
v___y_654_ = v___y_680_;
v___y_655_ = v___y_681_;
v___y_656_ = v___y_683_;
goto v___jp_650_;
}
}
else
{
if (v___y_677_ == 0)
{
v___y_667_ = v___y_675_;
v___y_668_ = v___y_678_;
v___y_669_ = v___y_679_;
v___y_670_ = v___y_680_;
v___y_671_ = v___y_683_;
v___y_672_ = v___y_681_;
goto v___jp_666_;
}
else
{
v___y_651_ = v___y_675_;
v___y_652_ = v___y_678_;
v___y_653_ = v___y_679_;
v___y_654_ = v___y_680_;
v___y_655_ = v___y_681_;
v___y_656_ = v___y_683_;
goto v___jp_650_;
}
}
}
else
{
v___y_667_ = v___y_675_;
v___y_668_ = v___y_678_;
v___y_669_ = v___y_679_;
v___y_670_ = v___y_680_;
v___y_671_ = v___y_683_;
v___y_672_ = v___y_681_;
goto v___jp_666_;
}
}
else
{
lean_object* v___x_688_; 
lean_dec(v___y_676_);
v___x_688_ = lean_box(0);
v___y_628_ = v___y_675_;
v___y_629_ = v___y_678_;
v___y_630_ = v___y_679_;
v___y_631_ = v___y_680_;
v___y_632_ = v___y_683_;
v___y_633_ = v___y_681_;
v_fst_634_ = v___x_688_;
v_snd_635_ = v___x_688_;
goto v___jp_627_;
}
}
v___jp_689_:
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; uint8_t v_decide_706_; 
v___x_703_ = lean_unsigned_to_nat(0u);
v___x_704_ = l_String_Slice_Pos_skipWhile___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__4(v___y_700_, v___x_703_);
lean_dec_ref(v___y_700_);
v___x_705_ = lean_nat_sub(v_endExclusive_702_, v_startInclusive_701_);
lean_dec(v_startInclusive_701_);
lean_dec(v_endExclusive_702_);
v_decide_706_ = lean_nat_dec_eq(v___x_704_, v___x_705_);
lean_dec(v___x_705_);
lean_dec(v___x_704_);
if (v_decide_706_ == 0)
{
lean_object* v___x_707_; 
lean_dec(v___y_698_);
lean_dec(v___y_691_);
v___x_707_ = lean_box(0);
v___y_675_ = v___y_690_;
v___y_676_ = v___y_693_;
v___y_677_ = v___y_692_;
v___y_678_ = v___y_694_;
v___y_679_ = v___y_695_;
v___y_680_ = v___y_696_;
v___y_681_ = v___y_697_;
v___y_682_ = v___y_699_;
v___y_683_ = v___x_707_;
goto v___jp_674_;
}
else
{
uint8_t v___x_708_; 
v___x_708_ = lean_nat_dec_le(v___y_691_, v___y_698_);
if (v___x_708_ == 0)
{
lean_object* v___x_709_; 
lean_dec(v___y_691_);
v___x_709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_709_, 0, v___y_698_);
v___y_675_ = v___y_690_;
v___y_676_ = v___y_693_;
v___y_677_ = v___y_692_;
v___y_678_ = v___y_694_;
v___y_679_ = v___y_695_;
v___y_680_ = v___y_696_;
v___y_681_ = v___y_697_;
v___y_682_ = v___y_699_;
v___y_683_ = v___x_709_;
goto v___jp_674_;
}
else
{
lean_object* v___x_710_; 
lean_dec(v___y_698_);
v___x_710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_710_, 0, v___y_691_);
v___y_675_ = v___y_690_;
v___y_676_ = v___y_693_;
v___y_677_ = v___y_692_;
v___y_678_ = v___y_694_;
v___y_679_ = v___y_695_;
v___y_680_ = v___y_696_;
v___y_681_ = v___y_697_;
v___y_682_ = v___y_699_;
v___y_683_ = v___x_710_;
goto v___jp_674_;
}
}
}
v___jp_711_:
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v_startInclusive_724_; lean_object* v_endExclusive_725_; 
v___x_722_ = lean_obj_once(&l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__10, &l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__10_once, _init_l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___closed__10);
v___x_723_ = l_panic___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__5(v___x_722_);
v_startInclusive_724_ = lean_ctor_get(v___x_723_, 1);
lean_inc(v_startInclusive_724_);
v_endExclusive_725_ = lean_ctor_get(v___x_723_, 2);
lean_inc(v_endExclusive_725_);
v___y_690_ = v___y_712_;
v___y_691_ = v___y_715_;
v___y_692_ = v___y_714_;
v___y_693_ = v___y_713_;
v___y_694_ = v___y_716_;
v___y_695_ = v___y_717_;
v___y_696_ = v___y_718_;
v___y_697_ = v___y_719_;
v___y_698_ = v___y_721_;
v___y_699_ = v___y_720_;
v___y_700_ = v___x_723_;
v_startInclusive_701_ = v_startInclusive_724_;
v_endExclusive_702_ = v_endExclusive_725_;
goto v___jp_689_;
}
v___jp_726_:
{
lean_object* v_lastFieldTailPos_x3f_731_; uint8_t v_hasWith_732_; lean_object* v_numFields_733_; lean_object* v_leaderPos_734_; lean_object* v_leaderTailPos_735_; lean_object* v_closingPos_736_; lean_object* v___x_737_; lean_object* v_line_738_; lean_object* v___x_739_; lean_object* v_line_740_; uint8_t v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; uint8_t v___x_744_; 
v_lastFieldTailPos_x3f_731_ = lean_ctor_get(v_val_584_, 1);
lean_inc(v_lastFieldTailPos_x3f_731_);
v_hasWith_732_ = lean_ctor_get_uint8(v_val_584_, sizeof(void*)*7);
v_numFields_733_ = lean_ctor_get(v_val_584_, 2);
lean_inc(v_numFields_733_);
v_leaderPos_734_ = lean_ctor_get(v_val_584_, 4);
lean_inc(v_leaderPos_734_);
v_leaderTailPos_735_ = lean_ctor_get(v_val_584_, 5);
lean_inc(v_leaderTailPos_735_);
v_closingPos_736_ = lean_ctor_get(v_val_584_, 6);
lean_inc(v_closingPos_736_);
lean_dec(v_val_584_);
lean_inc_ref_n(v___y_728_, 2);
v___x_737_ = l_Lean_FileMap_utf8PosToLspPos(v___y_728_, v_leaderPos_734_);
lean_dec(v_leaderPos_734_);
v_line_738_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_line_738_);
lean_dec_ref(v___x_737_);
v___x_739_ = l_Lean_FileMap_utf8PosToLspPos(v___y_728_, v_closingPos_736_);
lean_dec(v_closingPos_736_);
v_line_740_ = lean_ctor_get(v___x_739_, 0);
lean_inc(v_line_740_);
lean_dec_ref(v___x_739_);
v___x_741_ = lean_nat_dec_lt(v_line_738_, v_line_740_);
v___x_742_ = lean_unsigned_to_nat(1u);
v___x_743_ = lean_nat_add(v_line_738_, v___x_742_);
lean_dec(v_line_738_);
v___x_744_ = lean_nat_dec_le(v_line_740_, v___x_743_);
lean_dec(v___x_743_);
lean_dec(v_line_740_);
if (v___x_744_ == 0)
{
lean_object* v_source_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; uint8_t v___x_751_; 
v_source_745_ = lean_ctor_get(v___y_728_, 0);
lean_inc_ref_n(v_source_745_, 3);
lean_dec_ref(v___y_728_);
v___x_746_ = l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_findLineEnd(v_source_745_, v_leaderTailPos_735_);
v___x_747_ = lean_nat_add(v___y_730_, v___x_742_);
lean_inc(v___x_746_);
v___x_748_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__3___redArg(v_source_745_, v___x_747_, v___x_746_);
v___x_749_ = lean_string_utf8_next(v_source_745_, v___x_746_);
lean_dec(v___x_746_);
v___x_750_ = l___private_Lean_Elab_StructInstHint_0__Lean_Elab_Term_StructInst_mkMissingFieldsHint_findLineEnd(v_source_745_, v___x_749_);
lean_dec(v___x_749_);
v___x_751_ = lean_string_is_valid_pos(v_source_745_, v_leaderTailPos_735_);
if (v___x_751_ == 0)
{
lean_dec_ref(v_source_745_);
v___y_712_ = v___y_727_;
v___y_713_ = v_numFields_733_;
v___y_714_ = v___x_741_;
v___y_715_ = v___x_748_;
v___y_716_ = v_leaderTailPos_735_;
v___y_717_ = v_lastFieldTailPos_x3f_731_;
v___y_718_ = v___y_729_;
v___y_719_ = v___y_730_;
v___y_720_ = v_hasWith_732_;
v___y_721_ = v___x_750_;
goto v___jp_711_;
}
else
{
uint8_t v___x_752_; 
v___x_752_ = lean_string_is_valid_pos(v_source_745_, v___x_750_);
if (v___x_752_ == 0)
{
lean_dec_ref(v_source_745_);
v___y_712_ = v___y_727_;
v___y_713_ = v_numFields_733_;
v___y_714_ = v___x_741_;
v___y_715_ = v___x_748_;
v___y_716_ = v_leaderTailPos_735_;
v___y_717_ = v_lastFieldTailPos_x3f_731_;
v___y_718_ = v___y_729_;
v___y_719_ = v___y_730_;
v___y_720_ = v_hasWith_732_;
v___y_721_ = v___x_750_;
goto v___jp_711_;
}
else
{
uint8_t v___x_753_; 
v___x_753_ = lean_nat_dec_le(v_leaderTailPos_735_, v___x_750_);
if (v___x_753_ == 0)
{
lean_dec_ref(v_source_745_);
v___y_712_ = v___y_727_;
v___y_713_ = v_numFields_733_;
v___y_714_ = v___x_741_;
v___y_715_ = v___x_748_;
v___y_716_ = v_leaderTailPos_735_;
v___y_717_ = v_lastFieldTailPos_x3f_731_;
v___y_718_ = v___y_729_;
v___y_719_ = v___y_730_;
v___y_720_ = v_hasWith_732_;
v___y_721_ = v___x_750_;
goto v___jp_711_;
}
else
{
lean_object* v___x_754_; 
lean_inc_n(v___x_750_, 2);
lean_inc_n(v_leaderTailPos_735_, 2);
v___x_754_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_754_, 0, v_source_745_);
lean_ctor_set(v___x_754_, 1, v_leaderTailPos_735_);
lean_ctor_set(v___x_754_, 2, v___x_750_);
v___y_690_ = v___y_727_;
v___y_691_ = v___x_748_;
v___y_692_ = v___x_741_;
v___y_693_ = v_numFields_733_;
v___y_694_ = v_leaderTailPos_735_;
v___y_695_ = v_lastFieldTailPos_x3f_731_;
v___y_696_ = v___y_729_;
v___y_697_ = v___y_730_;
v___y_698_ = v___x_750_;
v___y_699_ = v_hasWith_732_;
v___y_700_ = v___x_754_;
v_startInclusive_701_ = v_leaderTailPos_735_;
v_endExclusive_702_ = v___x_750_;
goto v___jp_689_;
}
}
}
}
else
{
lean_object* v___x_755_; 
lean_dec_ref(v___y_728_);
v___x_755_ = lean_box(0);
v___y_675_ = v___y_727_;
v___y_676_ = v_numFields_733_;
v___y_677_ = v___x_741_;
v___y_678_ = v_leaderTailPos_735_;
v___y_679_ = v_lastFieldTailPos_x3f_731_;
v___y_680_ = v___y_729_;
v___y_681_ = v___y_730_;
v___y_682_ = v_hasWith_732_;
v___y_683_ = v___x_755_;
goto v___jp_674_;
}
}
v___jp_756_:
{
lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_761_ = lean_unsigned_to_nat(2u);
v___x_762_ = lean_nat_add(v___y_760_, v___x_761_);
lean_dec(v___y_760_);
v___y_727_ = v___y_757_;
v___y_728_ = v___y_758_;
v___y_729_ = v___y_759_;
v___y_730_ = v___x_762_;
goto v___jp_726_;
}
v___jp_763_:
{
lean_object* v_toCold_765_; lean_object* v_fileMap_766_; lean_object* v_initFieldPos_x3f_767_; lean_object* v_openingPos_768_; lean_object* v_closingPos_769_; lean_object* v___f_770_; 
v_toCold_765_ = lean_ctor_get(v_a_580_, 0);
v_fileMap_766_ = lean_ctor_get(v_toCold_765_, 1);
v_initFieldPos_x3f_767_ = lean_ctor_get(v_val_584_, 0);
v_openingPos_768_ = lean_ctor_get(v_val_584_, 3);
v_closingPos_769_ = lean_ctor_get(v_val_584_, 6);
lean_inc_ref(v_fileMap_766_);
v___f_770_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___lam__2___boxed), 2, 1);
lean_closure_set(v___f_770_, 0, v_fileMap_766_);
if (lean_obj_tag(v_initFieldPos_x3f_767_) == 1)
{
lean_object* v_val_771_; lean_object* v___x_772_; 
v_val_771_ = lean_ctor_get(v_initFieldPos_x3f_767_, 0);
lean_inc_ref_n(v_fileMap_766_, 2);
v___x_772_ = l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___lam__2(v_fileMap_766_, v_val_771_);
v___y_727_ = v___f_770_;
v___y_728_ = v_fileMap_766_;
v___y_729_ = v___y_764_;
v___y_730_ = v___x_772_;
goto v___jp_726_;
}
else
{
lean_object* v___x_773_; lean_object* v___x_774_; uint8_t v___x_775_; 
lean_inc_ref_n(v_fileMap_766_, 2);
v___x_773_ = l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___lam__2(v_fileMap_766_, v_openingPos_768_);
v___x_774_ = l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___lam__2(v_fileMap_766_, v_closingPos_769_);
v___x_775_ = lean_nat_dec_le(v___x_773_, v___x_774_);
if (v___x_775_ == 0)
{
lean_dec(v___x_773_);
lean_inc_ref(v_fileMap_766_);
v___y_757_ = v___f_770_;
v___y_758_ = v_fileMap_766_;
v___y_759_ = v___y_764_;
v___y_760_ = v___x_774_;
goto v___jp_756_;
}
else
{
lean_dec(v___x_774_);
lean_inc_ref(v_fileMap_766_);
v___y_757_ = v___f_770_;
v___y_758_ = v_fileMap_766_;
v___y_759_ = v___y_764_;
v___y_760_ = v___x_773_;
goto v___jp_756_;
}
}
}
v___jp_776_:
{
uint8_t v___x_778_; lean_object* v___x_779_; 
v___x_778_ = 1;
v___x_779_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_779_, 0, v___y_777_);
lean_ctor_set_uint8(v___x_779_, sizeof(void*)*1, v___x_778_);
v___y_764_ = v___x_779_;
goto v___jp_763_;
}
}
}
else
{
lean_object* v_a_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_798_; 
lean_del_object(v___x_586_);
lean_dec(v_val_584_);
lean_dec(v_stx_577_);
v_a_791_ = lean_ctor_get(v___x_590_, 0);
v_isSharedCheck_798_ = !lean_is_exclusive(v___x_590_);
if (v_isSharedCheck_798_ == 0)
{
v___x_793_ = v___x_590_;
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_a_791_);
lean_dec(v___x_590_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v___x_796_; 
if (v_isShared_794_ == 0)
{
v___x_796_ = v___x_793_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v_a_791_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
return v___x_796_;
}
}
}
}
}
else
{
lean_object* v___x_800_; lean_object* v___x_801_; 
lean_dec(v___x_583_);
lean_dec(v_stx_577_);
lean_dec_ref(v_fields_576_);
v___x_800_ = l_Lean_MessageData_nil;
v___x_801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_801_, 0, v___x_800_);
return v___x_801_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___boxed(lean_object* v_fields_802_, lean_object* v_stx_803_, lean_object* v_a_804_, lean_object* v_a_805_, lean_object* v_a_806_, lean_object* v_a_807_, lean_object* v_a_808_){
_start:
{
lean_object* v_res_809_; 
v_res_809_ = l_Lean_Elab_Term_StructInst_mkMissingFieldsHint(v_fields_802_, v_stx_803_, v_a_804_, v_a_805_, v_a_806_, v_a_807_);
lean_dec(v_a_807_);
lean_dec_ref(v_a_806_);
lean_dec(v_a_805_);
lean_dec_ref(v_a_804_);
return v_res_809_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__3(lean_object* v___x_810_, lean_object* v_n_811_, lean_object* v_j_812_, lean_object* v_a_813_, lean_object* v_a_814_){
_start:
{
lean_object* v___x_815_; 
v___x_815_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__3___redArg(v___x_810_, v_j_812_, v_a_814_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__3___boxed(lean_object* v___x_816_, lean_object* v_n_817_, lean_object* v_j_818_, lean_object* v_a_819_, lean_object* v_a_820_){
_start:
{
lean_object* v_res_821_; 
v_res_821_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Elab_Term_StructInst_mkMissingFieldsHint_spec__3(v___x_816_, v_n_817_, v_j_818_, v_a_819_, v_a_820_);
lean_dec(v_n_817_);
lean_dec_ref(v___x_816_);
return v_res_821_;
}
}
lean_object* runtime_initialize_Lean_Meta_Hint(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_OrderInstances(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_StructInstHint(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Hint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_OrderInstances(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___boxed__const__1 = _init_l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_mkMissingFieldsHint___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_StructInstHint(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Hint(uint8_t builtin);
lean_object* initialize_Init_Data_String_OrderInstances(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_StructInstHint(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Hint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_OrderInstances(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_StructInstHint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_StructInstHint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_StructInstHint(builtin);
}
#ifdef __cplusplus
}
#endif
