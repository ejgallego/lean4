// Lean compiler output
// Module: Lean.Linter.GlobalAttributeIn
// Imports: public import Lean.Elab.Command public import Lean.Linter.Basic
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
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_Syntax_isQuot(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_withSetOptionIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_addLinter(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_topDownSkipQuot(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_topDownSkipQuot___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "eraseAttr"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__4_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(250, 147, 124, 197, 194, 198, 27, 195)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__7_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__7_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__7_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(241, 75, 242, 110, 47, 5, 20, 104)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__9_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__9_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__9_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "local"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__11_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__11_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__11_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(136, 104, 45, 91, 146, 14, 86, 4)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__11_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "scoped"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__13_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__13_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__13_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__12_value),LEAN_SCALAR_PTR_LITERAL(199, 36, 31, 135, 78, 131, 139, 152)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__13_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "in"};
static const lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__0 = (const lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(65, 79, 35, 19, 21, 38, 89, 10)}};
static const lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__1 = (const lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "attribute"};
static const lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__2 = (const lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__2_value;
static const lean_ctor_object l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(79, 30, 18, 84, 71, 173, 185, 159)}};
static const lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__3 = (const lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f(lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0___lam__0___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Despite the `in`, the attribute "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = " is added globally to "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "\nplease remove the `in` or make this a `local "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__7;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__2_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__0 = (const lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__0_value;
static const lean_closure_object l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_withSetOptionIn___boxed, .m_arity = 6, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__0_value)} };
static const lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__1 = (const lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__1_value;
static const lean_string_object l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__2 = (const lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__2_value;
static const lean_ctor_object l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__3 = (const lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__3_value;
static const lean_ctor_object l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__3_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__4 = (const lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__4_value;
static const lean_string_object l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Linter"};
static const lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__5 = (const lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__5_value;
static const lean_ctor_object l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__4_value),((lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__5_value),LEAN_SCALAR_PTR_LITERAL(196, 60, 89, 104, 222, 184, 104, 61)}};
static const lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__6 = (const lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__6_value;
static const lean_string_object l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "GlobalAttributeIn"};
static const lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__7 = (const lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__7_value;
static const lean_ctor_object l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__6_value),((lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__7_value),LEAN_SCALAR_PTR_LITERAL(1, 22, 223, 102, 44, 159, 140, 81)}};
static const lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__8 = (const lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__8_value;
static const lean_ctor_object l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(36, 117, 44, 116, 245, 145, 10, 240)}};
static const lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__9 = (const lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__9_value;
static const lean_ctor_object l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__9_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(133, 78, 16, 194, 51, 19, 26, 37)}};
static const lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__10 = (const lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__10_value;
static const lean_ctor_object l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__10_value),((lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__5_value),LEAN_SCALAR_PTR_LITERAL(71, 45, 189, 177, 125, 155, 239, 226)}};
static const lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__11 = (const lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__11_value;
static const lean_string_object l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "globalAttributeIn"};
static const lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__12 = (const lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__12_value;
static const lean_ctor_object l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__11_value),((lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__12_value),LEAN_SCALAR_PTR_LITERAL(230, 74, 117, 23, 182, 33, 182, 250)}};
static const lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__13 = (const lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__13_value;
static const lean_ctor_object l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__1_value),((lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__13_value)}};
static const lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__14 = (const lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__14_value;
LEAN_EXPORT const lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn = (const lean_object*)&l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___closed__14_value;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_initFn_00___x40_Lean_Linter_GlobalAttributeIn_801426259____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_initFn_00___x40_Lean_Linter_GlobalAttributeIn_801426259____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_topDownSkipQuot(lean_object* v_stx_1_){
_start:
{
lean_inc(v_stx_1_);
return v_stx_1_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_topDownSkipQuot___boxed(lean_object* v_stx_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_topDownSkipQuot(v_stx_2_);
lean_dec(v_stx_2_);
return v_res_3_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___redArg___lam__0(lean_object* v_toPure_4_, lean_object* v_____r_5_, lean_object* v_b_6_){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7_, 0, v_b_6_);
v___x_8_ = lean_apply_2(v_toPure_4_, lean_box(0), v___x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___redArg___lam__1(lean_object* v___f_9_, lean_object* v_toPure_10_, lean_object* v_____s_11_){
_start:
{
lean_object* v_fst_12_; 
v_fst_12_ = lean_ctor_get(v_____s_11_, 0);
if (lean_obj_tag(v_fst_12_) == 0)
{
lean_object* v_snd_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
lean_dec(v_toPure_10_);
v_snd_13_ = lean_ctor_get(v_____s_11_, 1);
lean_inc(v_snd_13_);
lean_dec_ref(v_____s_11_);
v___x_14_ = lean_box(0);
v___x_15_ = lean_apply_2(v___f_9_, v___x_14_, v_snd_13_);
return v___x_15_;
}
else
{
lean_object* v_val_16_; lean_object* v___x_17_; 
lean_inc_ref(v_fst_12_);
lean_dec_ref(v_____s_11_);
lean_dec(v___f_9_);
v_val_16_ = lean_ctor_get(v_fst_12_, 0);
lean_inc(v_val_16_);
lean_dec_ref_known(v_fst_12_, 1);
v___x_17_ = lean_apply_2(v_toPure_10_, lean_box(0), v_val_16_);
return v___x_17_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___redArg___lam__2(lean_object* v_snd_18_, lean_object* v_toPure_19_, lean_object* v___x_20_, lean_object* v_____do__lift_21_){
_start:
{
if (lean_obj_tag(v_____do__lift_21_) == 0)
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
lean_dec(v___x_20_);
v___x_22_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_22_, 0, v_____do__lift_21_);
v___x_23_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_23_, 0, v___x_22_);
lean_ctor_set(v___x_23_, 1, v_snd_18_);
v___x_24_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_24_, 0, v___x_23_);
v___x_25_ = lean_apply_2(v_toPure_19_, lean_box(0), v___x_24_);
return v___x_25_;
}
else
{
lean_object* v_a_26_; lean_object* v___x_28_; uint8_t v_isShared_29_; uint8_t v_isSharedCheck_35_; 
lean_dec(v_snd_18_);
v_a_26_ = lean_ctor_get(v_____do__lift_21_, 0);
v_isSharedCheck_35_ = !lean_is_exclusive(v_____do__lift_21_);
if (v_isSharedCheck_35_ == 0)
{
v___x_28_ = v_____do__lift_21_;
v_isShared_29_ = v_isSharedCheck_35_;
goto v_resetjp_27_;
}
else
{
lean_inc(v_a_26_);
lean_dec(v_____do__lift_21_);
v___x_28_ = lean_box(0);
v_isShared_29_ = v_isSharedCheck_35_;
goto v_resetjp_27_;
}
v_resetjp_27_:
{
lean_object* v___x_30_; lean_object* v___x_32_; 
v___x_30_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_30_, 0, v___x_20_);
lean_ctor_set(v___x_30_, 1, v_a_26_);
if (v_isShared_29_ == 0)
{
lean_ctor_set(v___x_28_, 0, v___x_30_);
v___x_32_ = v___x_28_;
goto v_reusejp_31_;
}
else
{
lean_object* v_reuseFailAlloc_34_; 
v_reuseFailAlloc_34_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_34_, 0, v___x_30_);
v___x_32_ = v_reuseFailAlloc_34_;
goto v_reusejp_31_;
}
v_reusejp_31_:
{
lean_object* v___x_33_; 
v___x_33_ = lean_apply_2(v_toPure_19_, lean_box(0), v___x_32_);
return v___x_33_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___redArg___lam__4(lean_object* v_toPure_36_, lean_object* v_stx_37_, lean_object* v_inst_38_, lean_object* v_f_39_, lean_object* v_toBind_40_, lean_object* v___f_41_, lean_object* v___f_42_, lean_object* v_____do__lift_43_){
_start:
{
if (lean_obj_tag(v_____do__lift_43_) == 0)
{
lean_object* v___x_44_; 
lean_dec(v___f_42_);
lean_dec(v___f_41_);
lean_dec(v_toBind_40_);
lean_dec(v_f_39_);
lean_dec_ref(v_inst_38_);
lean_dec(v_stx_37_);
v___x_44_ = lean_apply_2(v_toPure_36_, lean_box(0), v_____do__lift_43_);
return v___x_44_;
}
else
{
if (lean_obj_tag(v_stx_37_) == 1)
{
lean_object* v_a_45_; lean_object* v_args_46_; lean_object* v___x_47_; lean_object* v___f_48_; lean_object* v___x_49_; size_t v_sz_50_; size_t v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
lean_dec(v___f_42_);
v_a_45_ = lean_ctor_get(v_____do__lift_43_, 0);
lean_inc(v_a_45_);
lean_dec_ref_known(v_____do__lift_43_, 1);
v_args_46_ = lean_ctor_get(v_stx_37_, 2);
lean_inc_ref(v_args_46_);
lean_dec_ref_known(v_stx_37_, 3);
v___x_47_ = lean_box(0);
lean_inc(v_toBind_40_);
lean_inc_ref(v_inst_38_);
v___f_48_ = lean_alloc_closure((void*)(l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___redArg___lam__3), 8, 5);
lean_closure_set(v___f_48_, 0, v_toPure_36_);
lean_closure_set(v___f_48_, 1, v___x_47_);
lean_closure_set(v___f_48_, 2, v_inst_38_);
lean_closure_set(v___f_48_, 3, v_f_39_);
lean_closure_set(v___f_48_, 4, v_toBind_40_);
v___x_49_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_49_, 0, v___x_47_);
lean_ctor_set(v___x_49_, 1, v_a_45_);
v_sz_50_ = lean_array_size(v_args_46_);
v___x_51_ = ((size_t)0ULL);
v___x_52_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_38_, v_args_46_, v___f_48_, v_sz_50_, v___x_51_, v___x_49_);
v___x_53_ = lean_apply_4(v_toBind_40_, lean_box(0), lean_box(0), v___x_52_, v___f_41_);
return v___x_53_;
}
else
{
lean_object* v_a_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
lean_dec(v___f_41_);
lean_dec(v_toBind_40_);
lean_dec(v_f_39_);
lean_dec_ref(v_inst_38_);
lean_dec(v_stx_37_);
lean_dec(v_toPure_36_);
v_a_54_ = lean_ctor_get(v_____do__lift_43_, 0);
lean_inc(v_a_54_);
lean_dec_ref_known(v_____do__lift_43_, 1);
v___x_55_ = lean_box(0);
v___x_56_ = lean_apply_2(v___f_42_, v___x_55_, v_a_54_);
return v___x_56_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___redArg(lean_object* v_inst_57_, lean_object* v_f_58_, lean_object* v_stx_59_, lean_object* v_b_60_){
_start:
{
lean_object* v_toApplicative_61_; lean_object* v_toBind_62_; lean_object* v_toPure_63_; uint8_t v___x_64_; 
v_toApplicative_61_ = lean_ctor_get(v_inst_57_, 0);
v_toBind_62_ = lean_ctor_get(v_inst_57_, 1);
lean_inc(v_toBind_62_);
v_toPure_63_ = lean_ctor_get(v_toApplicative_61_, 1);
lean_inc(v_toPure_63_);
v___x_64_ = l_Lean_Syntax_isQuot(v_stx_59_);
if (v___x_64_ == 0)
{
lean_object* v___f_65_; lean_object* v___f_66_; lean_object* v___f_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
lean_inc_n(v_toPure_63_, 2);
v___f_65_ = lean_alloc_closure((void*)(l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___redArg___lam__0), 3, 1);
lean_closure_set(v___f_65_, 0, v_toPure_63_);
lean_inc_ref(v___f_65_);
v___f_66_ = lean_alloc_closure((void*)(l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___redArg___lam__1), 3, 2);
lean_closure_set(v___f_66_, 0, v___f_65_);
lean_closure_set(v___f_66_, 1, v_toPure_63_);
lean_inc(v_toBind_62_);
lean_inc(v_f_58_);
lean_inc(v_stx_59_);
v___f_67_ = lean_alloc_closure((void*)(l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___redArg___lam__4), 8, 7);
lean_closure_set(v___f_67_, 0, v_toPure_63_);
lean_closure_set(v___f_67_, 1, v_stx_59_);
lean_closure_set(v___f_67_, 2, v_inst_57_);
lean_closure_set(v___f_67_, 3, v_f_58_);
lean_closure_set(v___f_67_, 4, v_toBind_62_);
lean_closure_set(v___f_67_, 5, v___f_66_);
lean_closure_set(v___f_67_, 6, v___f_65_);
v___x_68_ = lean_apply_2(v_f_58_, v_stx_59_, v_b_60_);
v___x_69_ = lean_apply_4(v_toBind_62_, lean_box(0), lean_box(0), v___x_68_, v___f_67_);
return v___x_69_;
}
else
{
lean_object* v___x_70_; lean_object* v___x_71_; 
lean_dec(v_toBind_62_);
lean_dec(v_stx_59_);
lean_dec(v_f_58_);
lean_dec_ref(v_inst_57_);
v___x_70_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_70_, 0, v_b_60_);
v___x_71_ = lean_apply_2(v_toPure_63_, lean_box(0), v___x_70_);
return v___x_71_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___redArg___lam__3(lean_object* v_toPure_72_, lean_object* v___x_73_, lean_object* v_inst_74_, lean_object* v_f_75_, lean_object* v_toBind_76_, lean_object* v_a_77_, lean_object* v_x_78_, lean_object* v___y_79_){
_start:
{
lean_object* v_snd_80_; lean_object* v___f_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v_snd_80_ = lean_ctor_get(v___y_79_, 1);
lean_inc_n(v_snd_80_, 2);
lean_dec_ref(v___y_79_);
v___f_81_ = lean_alloc_closure((void*)(l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___redArg___lam__2), 4, 3);
lean_closure_set(v___f_81_, 0, v_snd_80_);
lean_closure_set(v___f_81_, 1, v_toPure_72_);
lean_closure_set(v___f_81_, 2, v___x_73_);
v___x_82_ = l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___redArg(v_inst_74_, v_f_75_, v_a_77_, v_snd_80_);
v___x_83_ = lean_apply_4(v_toBind_76_, lean_box(0), lean_box(0), v___x_82_, v___f_81_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop(lean_object* v_m_84_, lean_object* v_inst_85_, lean_object* v_00_u03b2_86_, lean_object* v_f_87_, lean_object* v_stx_88_, lean_object* v_b_89_, lean_object* v_inst_90_){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___redArg(v_inst_85_, v_f_87_, v_stx_88_, v_b_89_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___boxed(lean_object* v_m_92_, lean_object* v_inst_93_, lean_object* v_00_u03b2_94_, lean_object* v_f_95_, lean_object* v_stx_96_, lean_object* v_b_97_, lean_object* v_inst_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop(v_m_92_, v_inst_93_, v_00_u03b2_94_, v_f_95_, v_stx_96_, v_b_97_, v_inst_98_);
lean_dec(v_inst_98_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad___redArg___lam__0(lean_object* v_toPure_100_, lean_object* v_____do__lift_101_){
_start:
{
lean_object* v_a_102_; lean_object* v___x_103_; 
v_a_102_ = lean_ctor_get(v_____do__lift_101_, 0);
lean_inc(v_a_102_);
lean_dec_ref(v_____do__lift_101_);
v___x_103_ = lean_apply_2(v_toPure_100_, lean_box(0), v_a_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad___redArg___lam__1(lean_object* v_inst_104_, lean_object* v_toBind_105_, lean_object* v___f_106_, lean_object* v_00_u03b2_107_, lean_object* v_x_108_, lean_object* v_init_109_, lean_object* v_f_110_){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_111_ = l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___redArg(v_inst_104_, v_f_110_, v_x_108_, v_init_109_);
v___x_112_ = lean_apply_4(v_toBind_105_, lean_box(0), lean_box(0), v___x_111_, v___f_106_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad___redArg(lean_object* v_inst_113_){
_start:
{
lean_object* v_toApplicative_114_; lean_object* v_toBind_115_; lean_object* v_toPure_116_; lean_object* v___f_117_; lean_object* v___f_118_; 
v_toApplicative_114_ = lean_ctor_get(v_inst_113_, 0);
v_toBind_115_ = lean_ctor_get(v_inst_113_, 1);
lean_inc(v_toBind_115_);
v_toPure_116_ = lean_ctor_get(v_toApplicative_114_, 1);
lean_inc(v_toPure_116_);
v___f_117_ = lean_alloc_closure((void*)(l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad___redArg___lam__0), 2, 1);
lean_closure_set(v___f_117_, 0, v_toPure_116_);
v___f_118_ = lean_alloc_closure((void*)(l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad___redArg___lam__1), 7, 3);
lean_closure_set(v___f_118_, 0, v_inst_113_);
lean_closure_set(v___f_118_, 1, v_toBind_115_);
lean_closure_set(v___f_118_, 2, v___f_117_);
return v___f_118_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad(lean_object* v_m_119_, lean_object* v_inst_120_){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad___redArg(v_inst_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0(lean_object* v_as_156_, size_t v_i_157_, size_t v_stop_158_, lean_object* v_b_159_){
_start:
{
lean_object* v___y_161_; uint8_t v___x_165_; 
v___x_165_ = lean_usize_dec_eq(v_i_157_, v_stop_158_);
if (v___x_165_ == 0)
{
lean_object* v___x_166_; lean_object* v_a_167_; uint8_t v___x_168_; 
v___x_166_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__4));
v_a_167_ = lean_array_uget_borrowed(v_as_156_, v_i_157_);
lean_inc(v_a_167_);
v___x_168_ = l_Lean_Syntax_isOfKind(v_a_167_, v___x_166_);
if (v___x_168_ == 0)
{
lean_object* v___x_169_; uint8_t v___x_170_; 
v___x_169_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__7));
lean_inc(v_a_167_);
v___x_170_ = l_Lean_Syntax_isOfKind(v_a_167_, v___x_169_);
if (v___x_170_ == 0)
{
lean_object* v___x_171_; 
lean_inc(v_a_167_);
v___x_171_ = lean_array_push(v_b_159_, v_a_167_);
v___y_161_ = v___x_171_;
goto v___jp_160_;
}
else
{
lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; uint8_t v___x_175_; 
v___x_172_ = lean_unsigned_to_nat(0u);
v___x_173_ = l_Lean_Syntax_getArg(v_a_167_, v___x_172_);
v___x_174_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__9));
lean_inc(v___x_173_);
v___x_175_ = l_Lean_Syntax_isOfKind(v___x_173_, v___x_174_);
if (v___x_175_ == 0)
{
lean_object* v___x_176_; 
lean_dec(v___x_173_);
lean_inc(v_a_167_);
v___x_176_ = lean_array_push(v_b_159_, v_a_167_);
v___y_161_ = v___x_176_;
goto v___jp_160_;
}
else
{
lean_object* v___x_177_; lean_object* v___x_178_; uint8_t v___x_179_; 
v___x_177_ = lean_unsigned_to_nat(1u);
v___x_178_ = l_Lean_Syntax_getArg(v___x_173_, v___x_172_);
lean_dec(v___x_173_);
lean_inc(v___x_178_);
v___x_179_ = l_Lean_Syntax_matchesNull(v___x_178_, v___x_177_);
if (v___x_179_ == 0)
{
lean_object* v___x_180_; 
lean_dec(v___x_178_);
lean_inc(v_a_167_);
v___x_180_ = lean_array_push(v_b_159_, v_a_167_);
v___y_161_ = v___x_180_;
goto v___jp_160_;
}
else
{
lean_object* v___x_181_; lean_object* v___x_182_; uint8_t v___x_183_; 
v___x_181_ = l_Lean_Syntax_getArg(v___x_178_, v___x_172_);
lean_dec(v___x_178_);
v___x_182_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__11));
lean_inc(v___x_181_);
v___x_183_ = l_Lean_Syntax_isOfKind(v___x_181_, v___x_182_);
if (v___x_183_ == 0)
{
lean_object* v___x_184_; uint8_t v___x_185_; 
v___x_184_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___closed__13));
v___x_185_ = l_Lean_Syntax_isOfKind(v___x_181_, v___x_184_);
if (v___x_185_ == 0)
{
lean_object* v___x_186_; 
lean_inc(v_a_167_);
v___x_186_ = lean_array_push(v_b_159_, v_a_167_);
v___y_161_ = v___x_186_;
goto v___jp_160_;
}
else
{
v___y_161_ = v_b_159_;
goto v___jp_160_;
}
}
else
{
lean_dec(v___x_181_);
v___y_161_ = v_b_159_;
goto v___jp_160_;
}
}
}
}
}
else
{
v___y_161_ = v_b_159_;
goto v___jp_160_;
}
}
else
{
return v_b_159_;
}
v___jp_160_:
{
size_t v___x_162_; size_t v___x_163_; 
v___x_162_ = ((size_t)1ULL);
v___x_163_ = lean_usize_add(v_i_157_, v___x_162_);
v_i_157_ = v___x_163_;
v_b_159_ = v___y_161_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0___boxed(lean_object* v_as_187_, lean_object* v_i_188_, lean_object* v_stop_189_, lean_object* v_b_190_){
_start:
{
size_t v_i_boxed_191_; size_t v_stop_boxed_192_; lean_object* v_res_193_; 
v_i_boxed_191_ = lean_unbox_usize(v_i_188_);
lean_dec(v_i_188_);
v_stop_boxed_192_ = lean_unbox_usize(v_stop_189_);
lean_dec(v_stop_189_);
v_res_193_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0(v_as_187_, v_i_boxed_191_, v_stop_boxed_192_, v_b_190_);
lean_dec_ref(v_as_187_);
return v_res_193_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0(lean_object* v_as_196_, lean_object* v_start_197_, lean_object* v_stop_198_){
_start:
{
lean_object* v___x_199_; uint8_t v___x_200_; 
v___x_199_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0___closed__0));
v___x_200_ = lean_nat_dec_lt(v_start_197_, v_stop_198_);
if (v___x_200_ == 0)
{
return v___x_199_;
}
else
{
lean_object* v___x_201_; uint8_t v___x_202_; 
v___x_201_ = lean_array_get_size(v_as_196_);
v___x_202_ = lean_nat_dec_le(v_stop_198_, v___x_201_);
if (v___x_202_ == 0)
{
uint8_t v___x_203_; 
v___x_203_ = lean_nat_dec_lt(v_start_197_, v___x_201_);
if (v___x_203_ == 0)
{
return v___x_199_;
}
else
{
size_t v___x_204_; size_t v___x_205_; lean_object* v___x_206_; 
v___x_204_ = lean_usize_of_nat(v_start_197_);
v___x_205_ = lean_usize_of_nat(v___x_201_);
v___x_206_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0(v_as_196_, v___x_204_, v___x_205_, v___x_199_);
return v___x_206_;
}
}
else
{
size_t v___x_207_; size_t v___x_208_; lean_object* v___x_209_; 
v___x_207_ = lean_usize_of_nat(v_start_197_);
v___x_208_ = lean_usize_of_nat(v_stop_198_);
v___x_209_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0_spec__0(v_as_196_, v___x_207_, v___x_208_, v___x_199_);
return v___x_209_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0___boxed(lean_object* v_as_210_, lean_object* v_start_211_, lean_object* v_stop_212_){
_start:
{
lean_object* v_res_213_; 
v_res_213_ = l_Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0(v_as_210_, v_start_211_, v_stop_212_);
lean_dec(v_stop_212_);
lean_dec(v_start_211_);
lean_dec_ref(v_as_210_);
return v_res_213_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f(lean_object* v_x_226_){
_start:
{
lean_object* v___x_227_; uint8_t v___x_228_; 
v___x_227_ = ((lean_object*)(l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__1));
lean_inc(v_x_226_);
v___x_228_ = l_Lean_Syntax_isOfKind(v_x_226_, v___x_227_);
if (v___x_228_ == 0)
{
lean_object* v___x_229_; 
lean_dec(v_x_226_);
v___x_229_ = lean_box(0);
return v___x_229_;
}
else
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; uint8_t v___x_233_; 
v___x_230_ = lean_unsigned_to_nat(0u);
v___x_231_ = l_Lean_Syntax_getArg(v_x_226_, v___x_230_);
lean_dec(v_x_226_);
v___x_232_ = ((lean_object*)(l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f___closed__3));
lean_inc(v___x_231_);
v___x_233_ = l_Lean_Syntax_isOfKind(v___x_231_, v___x_232_);
if (v___x_233_ == 0)
{
lean_object* v___x_234_; 
lean_dec(v___x_231_);
v___x_234_ = lean_box(0);
return v___x_234_;
}
else
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; uint8_t v___x_238_; 
v___x_235_ = lean_unsigned_to_nat(1u);
v___x_236_ = lean_unsigned_to_nat(4u);
v___x_237_ = l_Lean_Syntax_getArg(v___x_231_, v___x_236_);
lean_inc(v___x_237_);
v___x_238_ = l_Lean_Syntax_matchesNull(v___x_237_, v___x_235_);
if (v___x_238_ == 0)
{
lean_object* v___x_239_; 
lean_dec(v___x_237_);
lean_dec(v___x_231_);
v___x_239_ = lean_box(0);
return v___x_239_;
}
else
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v_id_242_; lean_object* v_x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v_xs_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_240_ = lean_unsigned_to_nat(2u);
v___x_241_ = l_Lean_Syntax_getArg(v___x_231_, v___x_240_);
lean_dec(v___x_231_);
v_id_242_ = l_Lean_Syntax_getArg(v___x_237_, v___x_230_);
lean_dec(v___x_237_);
v_x_243_ = l_Lean_Syntax_getArgs(v___x_241_);
lean_dec(v___x_241_);
v___x_244_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_x_243_);
lean_dec_ref(v_x_243_);
v___x_245_ = lean_array_get_size(v___x_244_);
v_xs_246_ = l_Array_filterMapM___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f_spec__0(v___x_244_, v___x_230_, v___x_245_);
lean_dec_ref(v___x_244_);
v___x_247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_247_, 0, v_id_242_);
lean_ctor_set(v___x_247_, 1, v_xs_246_);
v___x_248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_248_, 0, v___x_247_);
return v___x_248_;
}
}
}
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_249_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_250_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_251_, 0, v___x_250_);
return v___x_251_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_252_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_253_ = lean_unsigned_to_nat(0u);
v___x_254_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_254_, 0, v___x_253_);
lean_ctor_set(v___x_254_, 1, v___x_253_);
lean_ctor_set(v___x_254_, 2, v___x_253_);
lean_ctor_set(v___x_254_, 3, v___x_253_);
lean_ctor_set(v___x_254_, 4, v___x_252_);
lean_ctor_set(v___x_254_, 5, v___x_252_);
lean_ctor_set(v___x_254_, 6, v___x_252_);
lean_ctor_set(v___x_254_, 7, v___x_252_);
lean_ctor_set(v___x_254_, 8, v___x_252_);
lean_ctor_set(v___x_254_, 9, v___x_252_);
lean_ctor_set(v___x_254_, 10, v___x_252_);
return v___x_254_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_255_ = lean_unsigned_to_nat(32u);
v___x_256_ = lean_mk_empty_array_with_capacity(v___x_255_);
v___x_257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
return v___x_257_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__4(void){
_start:
{
size_t v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_258_ = ((size_t)5ULL);
v___x_259_ = lean_unsigned_to_nat(0u);
v___x_260_ = lean_unsigned_to_nat(32u);
v___x_261_ = lean_mk_empty_array_with_capacity(v___x_260_);
v___x_262_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__3);
v___x_263_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_263_, 0, v___x_262_);
lean_ctor_set(v___x_263_, 1, v___x_261_);
lean_ctor_set(v___x_263_, 2, v___x_259_);
lean_ctor_set(v___x_263_, 3, v___x_259_);
lean_ctor_set_usize(v___x_263_, 4, v___x_258_);
return v___x_263_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__5(void){
_start:
{
lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_264_ = lean_box(1);
v___x_265_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__4);
v___x_266_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_267_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_267_, 0, v___x_266_);
lean_ctor_set(v___x_267_, 1, v___x_265_);
lean_ctor_set(v___x_267_, 2, v___x_264_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg(lean_object* v_msgData_268_, lean_object* v___y_269_){
_start:
{
lean_object* v___x_271_; lean_object* v_env_272_; uint8_t v___x_273_; lean_object* v_env_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v_scopes_277_; lean_object* v___x_278_; lean_object* v_opts_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_271_ = lean_st_ref_get(v___y_269_);
v_env_272_ = lean_ctor_get(v___x_271_, 0);
lean_inc_ref(v_env_272_);
lean_dec(v___x_271_);
v___x_273_ = 0;
v_env_274_ = l_Lean_Environment_setRecordingDeps(v_env_272_, v___x_273_);
v___x_275_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_276_ = lean_st_ref_get(v___y_269_);
v_scopes_277_ = lean_ctor_get(v___x_276_, 2);
lean_inc(v_scopes_277_);
lean_dec(v___x_276_);
v___x_278_ = l_List_head_x21___redArg(v___x_275_, v_scopes_277_);
lean_dec(v_scopes_277_);
v_opts_279_ = lean_ctor_get(v___x_278_, 1);
lean_inc_ref(v_opts_279_);
lean_dec(v___x_278_);
v___x_280_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__2);
v___x_281_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___closed__5);
v___x_282_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_282_, 0, v_env_274_);
lean_ctor_set(v___x_282_, 1, v___x_280_);
lean_ctor_set(v___x_282_, 2, v___x_281_);
lean_ctor_set(v___x_282_, 3, v_opts_279_);
v___x_283_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_283_, 0, v___x_282_);
lean_ctor_set(v___x_283_, 1, v_msgData_268_);
v___x_284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_284_, 0, v___x_283_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_msgData_285_, lean_object* v___y_286_, lean_object* v___y_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg(v_msgData_285_, v___y_286_);
lean_dec(v___y_286_);
return v_res_288_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__2(lean_object* v_opts_289_, lean_object* v_opt_290_){
_start:
{
lean_object* v_name_291_; lean_object* v_defValue_292_; lean_object* v_map_293_; lean_object* v___x_294_; 
v_name_291_ = lean_ctor_get(v_opt_290_, 0);
v_defValue_292_ = lean_ctor_get(v_opt_290_, 1);
v_map_293_ = lean_ctor_get(v_opts_289_, 0);
v___x_294_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_293_, v_name_291_);
if (lean_obj_tag(v___x_294_) == 0)
{
uint8_t v___x_295_; 
v___x_295_ = lean_unbox(v_defValue_292_);
return v___x_295_;
}
else
{
lean_object* v_val_296_; 
v_val_296_ = lean_ctor_get(v___x_294_, 0);
lean_inc(v_val_296_);
lean_dec_ref_known(v___x_294_, 1);
if (lean_obj_tag(v_val_296_) == 1)
{
uint8_t v_v_297_; 
v_v_297_ = lean_ctor_get_uint8(v_val_296_, 0);
lean_dec_ref_known(v_val_296_, 0);
return v_v_297_;
}
else
{
uint8_t v___x_298_; 
lean_dec(v_val_296_);
v___x_298_ = lean_unbox(v_defValue_292_);
return v___x_298_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__2___boxed(lean_object* v_opts_299_, lean_object* v_opt_300_){
_start:
{
uint8_t v_res_301_; lean_object* v_r_302_; 
v_res_301_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__2(v_opts_299_, v_opt_300_);
lean_dec_ref(v_opt_300_);
lean_dec_ref(v_opts_299_);
v_r_302_ = lean_box(v_res_301_);
return v_r_302_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0___lam__0(uint8_t v___x_304_, lean_object* v_x_305_){
_start:
{
if (lean_obj_tag(v_x_305_) == 1)
{
lean_object* v_pre_306_; 
v_pre_306_ = lean_ctor_get(v_x_305_, 0);
if (lean_obj_tag(v_pre_306_) == 0)
{
lean_object* v_str_307_; lean_object* v___x_308_; uint8_t v___x_309_; 
v_str_307_ = lean_ctor_get(v_x_305_, 1);
v___x_308_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0___lam__0___closed__0));
v___x_309_ = lean_string_dec_eq(v_str_307_, v___x_308_);
return v___x_309_;
}
else
{
return v___x_304_;
}
}
else
{
return v___x_304_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0___lam__0___boxed(lean_object* v___x_310_, lean_object* v_x_311_){
_start:
{
uint8_t v___x_4571__boxed_312_; uint8_t v_res_313_; lean_object* v_r_314_; 
v___x_4571__boxed_312_ = lean_unbox(v___x_310_);
v_res_313_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0___lam__0(v___x_4571__boxed_312_, v_x_311_);
lean_dec(v_x_311_);
v_r_314_ = lean_box(v_res_313_);
return v_r_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0(lean_object* v_ref_319_, lean_object* v_msgData_320_, uint8_t v_severity_321_, uint8_t v_isSilent_322_, lean_object* v___y_323_, lean_object* v___y_324_){
_start:
{
lean_object* v___y_327_; lean_object* v___y_328_; uint8_t v___y_329_; lean_object* v___y_330_; uint8_t v___y_331_; lean_object* v___y_332_; lean_object* v___y_333_; lean_object* v___y_334_; lean_object* v___y_392_; uint8_t v___y_393_; lean_object* v___y_394_; uint8_t v___y_395_; lean_object* v___y_396_; lean_object* v___y_417_; uint8_t v___y_418_; lean_object* v___y_419_; uint8_t v___y_420_; lean_object* v___y_421_; uint8_t v___y_425_; uint8_t v___x_453_; uint8_t v___x_454_; 
v___x_453_ = 2;
v___x_454_ = l_Lean_instBEqMessageSeverity_beq(v_severity_321_, v___x_453_);
if (v___x_454_ == 0)
{
goto v___jp_442_;
}
else
{
uint8_t v___x_455_; 
lean_inc_ref(v_msgData_320_);
v___x_455_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_320_);
if (v___x_455_ == 0)
{
goto v___jp_442_;
}
else
{
lean_object* v___x_456_; lean_object* v___x_457_; 
lean_dec_ref(v_msgData_320_);
v___x_456_ = lean_box(0);
v___x_457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_457_, 0, v___x_456_);
return v___x_457_;
}
}
v___jp_326_:
{
lean_object* v___x_335_; 
v___x_335_ = l_Lean_Elab_Command_getScope___redArg(v___y_334_);
if (lean_obj_tag(v___x_335_) == 0)
{
lean_object* v_a_336_; lean_object* v_currNamespace_337_; lean_object* v___x_338_; 
v_a_336_ = lean_ctor_get(v___x_335_, 0);
lean_inc(v_a_336_);
lean_dec_ref_known(v___x_335_, 1);
v_currNamespace_337_ = lean_ctor_get(v_a_336_, 2);
lean_inc(v_currNamespace_337_);
lean_dec(v_a_336_);
v___x_338_ = l_Lean_Elab_Command_getScope___redArg(v___y_334_);
if (lean_obj_tag(v___x_338_) == 0)
{
lean_object* v_a_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_374_; 
v_a_339_ = lean_ctor_get(v___x_338_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_338_);
if (v_isSharedCheck_374_ == 0)
{
v___x_341_ = v___x_338_;
v_isShared_342_ = v_isSharedCheck_374_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_a_339_);
lean_dec(v___x_338_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_374_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
lean_object* v_openDecls_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v_env_348_; lean_object* v_messages_349_; lean_object* v_scopes_350_; lean_object* v_usedQuotCtxts_351_; lean_object* v_nextMacroScope_352_; lean_object* v_maxRecDepth_353_; lean_object* v_ngen_354_; lean_object* v_auxDeclNGen_355_; lean_object* v_infoState_356_; lean_object* v_traceState_357_; lean_object* v_snapshotTasks_358_; lean_object* v_prevLinterStates_359_; lean_object* v_codeQualityEntryTasks_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_373_; 
v_openDecls_343_ = lean_ctor_get(v_a_339_, 3);
lean_inc(v_openDecls_343_);
lean_dec(v_a_339_);
v___x_344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_344_, 0, v_currNamespace_337_);
lean_ctor_set(v___x_344_, 1, v_openDecls_343_);
v___x_345_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_345_, 0, v___x_344_);
lean_ctor_set(v___x_345_, 1, v___y_328_);
lean_inc_ref(v___y_330_);
lean_inc_ref(v___y_327_);
v___x_346_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_346_, 0, v___y_327_);
lean_ctor_set(v___x_346_, 1, v___y_333_);
lean_ctor_set(v___x_346_, 2, v___y_332_);
lean_ctor_set(v___x_346_, 3, v___y_330_);
lean_ctor_set(v___x_346_, 4, v___x_345_);
lean_ctor_set_uint8(v___x_346_, sizeof(void*)*5, v___y_331_);
lean_ctor_set_uint8(v___x_346_, sizeof(void*)*5 + 1, v___y_329_);
lean_ctor_set_uint8(v___x_346_, sizeof(void*)*5 + 2, v_isSilent_322_);
v___x_347_ = lean_st_ref_take(v___y_334_);
v_env_348_ = lean_ctor_get(v___x_347_, 0);
v_messages_349_ = lean_ctor_get(v___x_347_, 1);
v_scopes_350_ = lean_ctor_get(v___x_347_, 2);
v_usedQuotCtxts_351_ = lean_ctor_get(v___x_347_, 3);
v_nextMacroScope_352_ = lean_ctor_get(v___x_347_, 4);
v_maxRecDepth_353_ = lean_ctor_get(v___x_347_, 5);
v_ngen_354_ = lean_ctor_get(v___x_347_, 6);
v_auxDeclNGen_355_ = lean_ctor_get(v___x_347_, 7);
v_infoState_356_ = lean_ctor_get(v___x_347_, 8);
v_traceState_357_ = lean_ctor_get(v___x_347_, 9);
v_snapshotTasks_358_ = lean_ctor_get(v___x_347_, 10);
v_prevLinterStates_359_ = lean_ctor_get(v___x_347_, 11);
v_codeQualityEntryTasks_360_ = lean_ctor_get(v___x_347_, 12);
v_isSharedCheck_373_ = !lean_is_exclusive(v___x_347_);
if (v_isSharedCheck_373_ == 0)
{
v___x_362_ = v___x_347_;
v_isShared_363_ = v_isSharedCheck_373_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_codeQualityEntryTasks_360_);
lean_inc(v_prevLinterStates_359_);
lean_inc(v_snapshotTasks_358_);
lean_inc(v_traceState_357_);
lean_inc(v_infoState_356_);
lean_inc(v_auxDeclNGen_355_);
lean_inc(v_ngen_354_);
lean_inc(v_maxRecDepth_353_);
lean_inc(v_nextMacroScope_352_);
lean_inc(v_usedQuotCtxts_351_);
lean_inc(v_scopes_350_);
lean_inc(v_messages_349_);
lean_inc(v_env_348_);
lean_dec(v___x_347_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_373_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_367_; 
v___x_364_ = lean_box(0);
v___x_365_ = l_Lean_MessageLog_add(v___x_346_, v_messages_349_);
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 1, v___x_365_);
v___x_367_ = v___x_362_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v_env_348_);
lean_ctor_set(v_reuseFailAlloc_372_, 1, v___x_365_);
lean_ctor_set(v_reuseFailAlloc_372_, 2, v_scopes_350_);
lean_ctor_set(v_reuseFailAlloc_372_, 3, v_usedQuotCtxts_351_);
lean_ctor_set(v_reuseFailAlloc_372_, 4, v_nextMacroScope_352_);
lean_ctor_set(v_reuseFailAlloc_372_, 5, v_maxRecDepth_353_);
lean_ctor_set(v_reuseFailAlloc_372_, 6, v_ngen_354_);
lean_ctor_set(v_reuseFailAlloc_372_, 7, v_auxDeclNGen_355_);
lean_ctor_set(v_reuseFailAlloc_372_, 8, v_infoState_356_);
lean_ctor_set(v_reuseFailAlloc_372_, 9, v_traceState_357_);
lean_ctor_set(v_reuseFailAlloc_372_, 10, v_snapshotTasks_358_);
lean_ctor_set(v_reuseFailAlloc_372_, 11, v_prevLinterStates_359_);
lean_ctor_set(v_reuseFailAlloc_372_, 12, v_codeQualityEntryTasks_360_);
v___x_367_ = v_reuseFailAlloc_372_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
lean_object* v___x_368_; lean_object* v___x_370_; 
v___x_368_ = lean_st_ref_put(v___y_334_, v___x_367_);
if (v_isShared_342_ == 0)
{
lean_ctor_set(v___x_341_, 0, v___x_364_);
v___x_370_ = v___x_341_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v___x_364_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
return v___x_370_;
}
}
}
}
}
else
{
lean_object* v_a_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_382_; 
lean_dec(v_currNamespace_337_);
lean_dec_ref(v___y_333_);
lean_dec(v___y_332_);
lean_dec_ref(v___y_328_);
v_a_375_ = lean_ctor_get(v___x_338_, 0);
v_isSharedCheck_382_ = !lean_is_exclusive(v___x_338_);
if (v_isSharedCheck_382_ == 0)
{
v___x_377_ = v___x_338_;
v_isShared_378_ = v_isSharedCheck_382_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_a_375_);
lean_dec(v___x_338_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_382_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v___x_380_; 
if (v_isShared_378_ == 0)
{
v___x_380_ = v___x_377_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v_a_375_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
}
}
}
}
else
{
lean_object* v_a_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_390_; 
lean_dec_ref(v___y_333_);
lean_dec(v___y_332_);
lean_dec_ref(v___y_328_);
v_a_383_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_390_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_390_ == 0)
{
v___x_385_ = v___x_335_;
v_isShared_386_ = v_isSharedCheck_390_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_a_383_);
lean_dec(v___x_335_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_390_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
lean_object* v___x_388_; 
if (v_isShared_386_ == 0)
{
v___x_388_ = v___x_385_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v_a_383_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
}
}
v___jp_391_:
{
lean_object* v_fileName_397_; lean_object* v_fileMap_398_; uint8_t v_suppressElabErrors_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v_a_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_415_; 
v_fileName_397_ = lean_ctor_get(v___y_323_, 0);
v_fileMap_398_ = lean_ctor_get(v___y_323_, 1);
v_suppressElabErrors_399_ = lean_ctor_get_uint8(v___y_323_, sizeof(void*)*10);
v___x_400_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_320_);
v___x_401_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg(v___x_400_, v___y_324_);
v_a_402_ = lean_ctor_get(v___x_401_, 0);
v_isSharedCheck_415_ = !lean_is_exclusive(v___x_401_);
if (v_isSharedCheck_415_ == 0)
{
v___x_404_ = v___x_401_;
v_isShared_405_ = v_isSharedCheck_415_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_a_402_);
lean_dec(v___x_401_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_415_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
lean_inc_ref_n(v_fileMap_398_, 2);
v___x_406_ = l_Lean_FileMap_toPosition(v_fileMap_398_, v___y_394_);
lean_dec(v___y_394_);
v___x_407_ = l_Lean_FileMap_toPosition(v_fileMap_398_, v___y_396_);
lean_dec(v___y_396_);
v___x_408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_408_, 0, v___x_407_);
v___x_409_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0___closed__0));
if (v_suppressElabErrors_399_ == 0)
{
lean_del_object(v___x_404_);
v___y_327_ = v_fileName_397_;
v___y_328_ = v_a_402_;
v___y_329_ = v___y_393_;
v___y_330_ = v___x_409_;
v___y_331_ = v___y_395_;
v___y_332_ = v___x_408_;
v___y_333_ = v___x_406_;
v___y_334_ = v___y_324_;
goto v___jp_326_;
}
else
{
uint8_t v___x_410_; 
lean_inc(v_a_402_);
lean_inc_ref(v___y_392_);
v___x_410_ = l_Lean_MessageData_hasTag(v___y_392_, v_a_402_);
if (v___x_410_ == 0)
{
lean_object* v___x_411_; lean_object* v___x_413_; 
lean_dec_ref_known(v___x_408_, 1);
lean_dec_ref(v___x_406_);
lean_dec(v_a_402_);
v___x_411_ = lean_box(0);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 0, v___x_411_);
v___x_413_ = v___x_404_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v___x_411_);
v___x_413_ = v_reuseFailAlloc_414_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
return v___x_413_;
}
}
else
{
lean_del_object(v___x_404_);
v___y_327_ = v_fileName_397_;
v___y_328_ = v_a_402_;
v___y_329_ = v___y_393_;
v___y_330_ = v___x_409_;
v___y_331_ = v___y_395_;
v___y_332_ = v___x_408_;
v___y_333_ = v___x_406_;
v___y_334_ = v___y_324_;
goto v___jp_326_;
}
}
}
}
v___jp_416_:
{
lean_object* v___x_422_; 
v___x_422_ = l_Lean_Syntax_getTailPos_x3f(v___y_417_, v___y_418_);
lean_dec(v___y_417_);
if (lean_obj_tag(v___x_422_) == 0)
{
lean_inc(v___y_421_);
v___y_392_ = v___y_419_;
v___y_393_ = v___y_420_;
v___y_394_ = v___y_421_;
v___y_395_ = v___y_418_;
v___y_396_ = v___y_421_;
goto v___jp_391_;
}
else
{
lean_object* v_val_423_; 
v_val_423_ = lean_ctor_get(v___x_422_, 0);
lean_inc(v_val_423_);
lean_dec_ref_known(v___x_422_, 1);
v___y_392_ = v___y_419_;
v___y_393_ = v___y_420_;
v___y_394_ = v___y_421_;
v___y_395_ = v___y_418_;
v___y_396_ = v_val_423_;
goto v___jp_391_;
}
}
v___jp_424_:
{
lean_object* v___x_426_; 
v___x_426_ = l_Lean_Elab_Command_getRef___redArg(v___y_323_);
if (lean_obj_tag(v___x_426_) == 0)
{
lean_object* v_a_427_; lean_object* v_ref_428_; uint8_t v___x_429_; lean_object* v___f_430_; lean_object* v___x_431_; 
v_a_427_ = lean_ctor_get(v___x_426_, 0);
lean_inc(v_a_427_);
lean_dec_ref_known(v___x_426_, 1);
v_ref_428_ = l_Lean_replaceRef(v_ref_319_, v_a_427_);
lean_dec(v_a_427_);
v___x_429_ = 0;
v___f_430_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0___closed__1));
v___x_431_ = l_Lean_Syntax_getPos_x3f(v_ref_428_, v___x_429_);
if (lean_obj_tag(v___x_431_) == 0)
{
lean_object* v___x_432_; 
v___x_432_ = lean_unsigned_to_nat(0u);
v___y_417_ = v_ref_428_;
v___y_418_ = v___x_429_;
v___y_419_ = v___f_430_;
v___y_420_ = v___y_425_;
v___y_421_ = v___x_432_;
goto v___jp_416_;
}
else
{
lean_object* v_val_433_; 
v_val_433_ = lean_ctor_get(v___x_431_, 0);
lean_inc(v_val_433_);
lean_dec_ref_known(v___x_431_, 1);
v___y_417_ = v_ref_428_;
v___y_418_ = v___x_429_;
v___y_419_ = v___f_430_;
v___y_420_ = v___y_425_;
v___y_421_ = v_val_433_;
goto v___jp_416_;
}
}
else
{
lean_object* v_a_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_441_; 
lean_dec_ref(v_msgData_320_);
v_a_434_ = lean_ctor_get(v___x_426_, 0);
v_isSharedCheck_441_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_441_ == 0)
{
v___x_436_ = v___x_426_;
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_a_434_);
lean_dec(v___x_426_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_439_; 
if (v_isShared_437_ == 0)
{
v___x_439_ = v___x_436_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_a_434_);
v___x_439_ = v_reuseFailAlloc_440_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
return v___x_439_;
}
}
}
}
v___jp_442_:
{
lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v_scopes_445_; lean_object* v___x_446_; lean_object* v_opts_447_; uint8_t v___x_448_; uint8_t v___x_449_; 
v___x_443_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_444_ = lean_st_ref_get(v___y_324_);
v_scopes_445_ = lean_ctor_get(v___x_444_, 2);
lean_inc(v_scopes_445_);
lean_dec(v___x_444_);
v___x_446_ = l_List_head_x21___redArg(v___x_443_, v_scopes_445_);
lean_dec(v_scopes_445_);
v_opts_447_ = lean_ctor_get(v___x_446_, 1);
lean_inc_ref(v_opts_447_);
lean_dec(v___x_446_);
v___x_448_ = 1;
v___x_449_ = l_Lean_instBEqMessageSeverity_beq(v_severity_321_, v___x_448_);
if (v___x_449_ == 0)
{
lean_dec_ref(v_opts_447_);
v___y_425_ = v_severity_321_;
goto v___jp_424_;
}
else
{
lean_object* v___x_450_; uint8_t v___x_451_; 
v___x_450_ = l_Lean_warningAsError;
v___x_451_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__2(v_opts_447_, v___x_450_);
lean_dec_ref(v_opts_447_);
if (v___x_451_ == 0)
{
v___y_425_ = v_severity_321_;
goto v___jp_424_;
}
else
{
uint8_t v___x_452_; 
v___x_452_ = 2;
v___y_425_ = v___x_452_;
goto v___jp_424_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0___boxed(lean_object* v_ref_458_, lean_object* v_msgData_459_, lean_object* v_severity_460_, lean_object* v_isSilent_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_){
_start:
{
uint8_t v_severity_boxed_465_; uint8_t v_isSilent_boxed_466_; lean_object* v_res_467_; 
v_severity_boxed_465_ = lean_unbox(v_severity_460_);
v_isSilent_boxed_466_ = lean_unbox(v_isSilent_461_);
v_res_467_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0(v_ref_458_, v_msgData_459_, v_severity_boxed_465_, v_isSilent_boxed_466_, v___y_462_, v___y_463_);
lean_dec(v___y_463_);
lean_dec_ref(v___y_462_);
lean_dec(v_ref_458_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0(lean_object* v_ref_468_, lean_object* v_msgData_469_, lean_object* v___y_470_, lean_object* v___y_471_){
_start:
{
uint8_t v___x_473_; uint8_t v___x_474_; lean_object* v___x_475_; 
v___x_473_ = 2;
v___x_474_ = 0;
v___x_475_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0(v_ref_468_, v_msgData_469_, v___x_473_, v___x_474_, v___y_470_, v___y_471_);
return v___x_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0___boxed(lean_object* v_ref_476_, lean_object* v_msgData_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_){
_start:
{
lean_object* v_res_481_; 
v_res_481_ = l_Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0(v_ref_476_, v_msgData_477_, v___y_478_, v___y_479_);
lean_dec(v___y_479_);
lean_dec_ref(v___y_478_);
lean_dec(v_ref_476_);
return v_res_481_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__1(void){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_483_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__0));
v___x_484_ = l_Lean_stringToMessageData(v___x_483_);
return v___x_484_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__3(void){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_486_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__2));
v___x_487_ = l_Lean_stringToMessageData(v___x_486_);
return v___x_487_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__5(void){
_start:
{
lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_489_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__4));
v___x_490_ = l_Lean_stringToMessageData(v___x_489_);
return v___x_490_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__7(void){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_492_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__6));
v___x_493_ = l_Lean_stringToMessageData(v___x_492_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1(lean_object* v_fst_494_, lean_object* v_as_495_, size_t v_sz_496_, size_t v_i_497_, lean_object* v_b_498_, lean_object* v___y_499_, lean_object* v___y_500_){
_start:
{
uint8_t v___x_502_; 
v___x_502_ = lean_usize_dec_lt(v_i_497_, v_sz_496_);
if (v___x_502_ == 0)
{
lean_object* v___x_503_; 
lean_dec(v_fst_494_);
v___x_503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_503_, 0, v_b_498_);
return v___x_503_;
}
else
{
lean_object* v___x_504_; lean_object* v_a_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_504_ = lean_box(0);
v_a_505_ = lean_array_uget_borrowed(v_as_495_, v_i_497_);
v___x_506_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__1);
lean_inc(v_a_505_);
v___x_507_ = l_Lean_MessageData_ofSyntax(v_a_505_);
lean_inc_ref(v___x_507_);
v___x_508_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_508_, 0, v___x_506_);
lean_ctor_set(v___x_508_, 1, v___x_507_);
v___x_509_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__3);
v___x_510_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_510_, 0, v___x_508_);
lean_ctor_set(v___x_510_, 1, v___x_509_);
lean_inc(v_fst_494_);
v___x_511_ = l_Lean_MessageData_ofSyntax(v_fst_494_);
v___x_512_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_512_, 0, v___x_510_);
lean_ctor_set(v___x_512_, 1, v___x_511_);
v___x_513_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__5);
v___x_514_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_514_, 0, v___x_512_);
lean_ctor_set(v___x_514_, 1, v___x_513_);
v___x_515_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_515_, 0, v___x_514_);
lean_ctor_set(v___x_515_, 1, v___x_507_);
v___x_516_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___closed__7);
v___x_517_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_517_, 0, v___x_515_);
lean_ctor_set(v___x_517_, 1, v___x_516_);
v___x_518_ = l_Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0(v_a_505_, v___x_517_, v___y_499_, v___y_500_);
if (lean_obj_tag(v___x_518_) == 0)
{
size_t v___x_519_; size_t v___x_520_; 
lean_dec_ref_known(v___x_518_, 1);
v___x_519_ = ((size_t)1ULL);
v___x_520_ = lean_usize_add(v_i_497_, v___x_519_);
v_i_497_ = v___x_520_;
v_b_498_ = v___x_504_;
goto _start;
}
else
{
lean_dec(v_fst_494_);
return v___x_518_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1___boxed(lean_object* v_fst_522_, lean_object* v_as_523_, lean_object* v_sz_524_, lean_object* v_i_525_, lean_object* v_b_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_){
_start:
{
size_t v_sz_boxed_530_; size_t v_i_boxed_531_; lean_object* v_res_532_; 
v_sz_boxed_530_ = lean_unbox_usize(v_sz_524_);
lean_dec(v_sz_524_);
v_i_boxed_531_ = lean_unbox_usize(v_i_525_);
lean_dec(v_i_525_);
v_res_532_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1(v_fst_522_, v_as_523_, v_sz_boxed_530_, v_i_boxed_531_, v_b_526_, v___y_527_, v___y_528_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec_ref(v_as_523_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__2(lean_object* v_stx_533_, lean_object* v_b_534_, lean_object* v___y_535_, lean_object* v___y_536_){
_start:
{
lean_object* v_b_539_; lean_object* v_a_543_; uint8_t v___x_569_; 
v___x_569_ = l_Lean_Syntax_isQuot(v_stx_533_);
if (v___x_569_ == 0)
{
lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_570_ = lean_box(0);
lean_inc(v_stx_533_);
v___x_571_ = l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_getGlobalAttributesIn_x3f(v_stx_533_);
if (lean_obj_tag(v___x_571_) == 1)
{
lean_object* v_val_572_; lean_object* v_fst_573_; lean_object* v_snd_574_; size_t v_sz_575_; size_t v___x_576_; lean_object* v___x_577_; 
v_val_572_ = lean_ctor_get(v___x_571_, 0);
lean_inc(v_val_572_);
lean_dec_ref_known(v___x_571_, 1);
v_fst_573_ = lean_ctor_get(v_val_572_, 0);
lean_inc(v_fst_573_);
v_snd_574_ = lean_ctor_get(v_val_572_, 1);
lean_inc(v_snd_574_);
lean_dec(v_val_572_);
v_sz_575_ = lean_array_size(v_snd_574_);
v___x_576_ = ((size_t)0ULL);
v___x_577_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__1(v_fst_573_, v_snd_574_, v_sz_575_, v___x_576_, v___x_570_, v___y_535_, v___y_536_);
lean_dec(v_snd_574_);
if (lean_obj_tag(v___x_577_) == 0)
{
lean_dec_ref_known(v___x_577_, 1);
v_a_543_ = v___x_570_;
goto v___jp_542_;
}
else
{
lean_object* v_a_578_; lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_585_; 
lean_dec(v_stx_533_);
v_a_578_ = lean_ctor_get(v___x_577_, 0);
v_isSharedCheck_585_ = !lean_is_exclusive(v___x_577_);
if (v_isSharedCheck_585_ == 0)
{
v___x_580_ = v___x_577_;
v_isShared_581_ = v_isSharedCheck_585_;
goto v_resetjp_579_;
}
else
{
lean_inc(v_a_578_);
lean_dec(v___x_577_);
v___x_580_ = lean_box(0);
v_isShared_581_ = v_isSharedCheck_585_;
goto v_resetjp_579_;
}
v_resetjp_579_:
{
lean_object* v___x_583_; 
if (v_isShared_581_ == 0)
{
v___x_583_ = v___x_580_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v_a_578_);
v___x_583_ = v_reuseFailAlloc_584_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
return v___x_583_;
}
}
}
}
else
{
lean_dec(v___x_571_);
v_a_543_ = v___x_570_;
goto v___jp_542_;
}
}
else
{
lean_object* v___x_586_; lean_object* v___x_587_; 
lean_dec(v_stx_533_);
v___x_586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_586_, 0, v_b_534_);
v___x_587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_587_, 0, v___x_586_);
return v___x_587_;
}
v___jp_538_:
{
lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_540_, 0, v_b_539_);
v___x_541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_541_, 0, v___x_540_);
return v___x_541_;
}
v___jp_542_:
{
if (lean_obj_tag(v_stx_533_) == 1)
{
lean_object* v_args_544_; lean_object* v___x_545_; lean_object* v___x_546_; size_t v_sz_547_; size_t v___x_548_; lean_object* v___x_549_; 
v_args_544_ = lean_ctor_get(v_stx_533_, 2);
lean_inc_ref(v_args_544_);
lean_dec_ref_known(v_stx_533_, 3);
v___x_545_ = lean_box(0);
v___x_546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_546_, 0, v___x_545_);
lean_ctor_set(v___x_546_, 1, v_a_543_);
v_sz_547_ = lean_array_size(v_args_544_);
v___x_548_ = ((size_t)0ULL);
v___x_549_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__2_spec__3(v_args_544_, v_sz_547_, v___x_548_, v___x_546_, v___y_535_, v___y_536_);
lean_dec_ref(v_args_544_);
if (lean_obj_tag(v___x_549_) == 0)
{
lean_object* v_a_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_560_; 
v_a_550_ = lean_ctor_get(v___x_549_, 0);
v_isSharedCheck_560_ = !lean_is_exclusive(v___x_549_);
if (v_isSharedCheck_560_ == 0)
{
v___x_552_ = v___x_549_;
v_isShared_553_ = v_isSharedCheck_560_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_a_550_);
lean_dec(v___x_549_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_560_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v_fst_554_; 
v_fst_554_ = lean_ctor_get(v_a_550_, 0);
if (lean_obj_tag(v_fst_554_) == 0)
{
lean_object* v_snd_555_; 
lean_del_object(v___x_552_);
v_snd_555_ = lean_ctor_get(v_a_550_, 1);
lean_inc(v_snd_555_);
lean_dec(v_a_550_);
v_b_539_ = v_snd_555_;
goto v___jp_538_;
}
else
{
lean_object* v_val_556_; lean_object* v___x_558_; 
lean_inc_ref(v_fst_554_);
lean_dec(v_a_550_);
v_val_556_ = lean_ctor_get(v_fst_554_, 0);
lean_inc(v_val_556_);
lean_dec_ref_known(v_fst_554_, 1);
if (v_isShared_553_ == 0)
{
lean_ctor_set(v___x_552_, 0, v_val_556_);
v___x_558_ = v___x_552_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_val_556_);
v___x_558_ = v_reuseFailAlloc_559_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
return v___x_558_;
}
}
}
}
else
{
lean_object* v_a_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_568_; 
v_a_561_ = lean_ctor_get(v___x_549_, 0);
v_isSharedCheck_568_ = !lean_is_exclusive(v___x_549_);
if (v_isSharedCheck_568_ == 0)
{
v___x_563_ = v___x_549_;
v_isShared_564_ = v_isSharedCheck_568_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_a_561_);
lean_dec(v___x_549_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_568_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v___x_566_; 
if (v_isShared_564_ == 0)
{
v___x_566_ = v___x_563_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v_a_561_);
v___x_566_ = v_reuseFailAlloc_567_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
return v___x_566_;
}
}
}
}
else
{
lean_dec(v_stx_533_);
v_b_539_ = v_a_543_;
goto v___jp_538_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__2_spec__3(lean_object* v_as_588_, size_t v_sz_589_, size_t v_i_590_, lean_object* v_b_591_, lean_object* v___y_592_, lean_object* v___y_593_){
_start:
{
uint8_t v___x_595_; 
v___x_595_ = lean_usize_dec_lt(v_i_590_, v_sz_589_);
if (v___x_595_ == 0)
{
lean_object* v___x_596_; 
v___x_596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_596_, 0, v_b_591_);
return v___x_596_;
}
else
{
lean_object* v_snd_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_631_; 
v_snd_597_ = lean_ctor_get(v_b_591_, 1);
v_isSharedCheck_631_ = !lean_is_exclusive(v_b_591_);
if (v_isSharedCheck_631_ == 0)
{
lean_object* v_unused_632_; 
v_unused_632_ = lean_ctor_get(v_b_591_, 0);
lean_dec(v_unused_632_);
v___x_599_ = v_b_591_;
v_isShared_600_ = v_isSharedCheck_631_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_snd_597_);
lean_dec(v_b_591_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_631_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_601_; lean_object* v_a_602_; lean_object* v___x_603_; 
v___x_601_ = lean_box(0);
v_a_602_ = lean_array_uget_borrowed(v_as_588_, v_i_590_);
lean_inc(v_snd_597_);
lean_inc(v_a_602_);
v___x_603_ = l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__2(v_a_602_, v_snd_597_, v___y_592_, v___y_593_);
if (lean_obj_tag(v___x_603_) == 0)
{
lean_object* v_a_604_; lean_object* v___x_606_; uint8_t v_isShared_607_; uint8_t v_isSharedCheck_622_; 
v_a_604_ = lean_ctor_get(v___x_603_, 0);
v_isSharedCheck_622_ = !lean_is_exclusive(v___x_603_);
if (v_isSharedCheck_622_ == 0)
{
v___x_606_ = v___x_603_;
v_isShared_607_ = v_isSharedCheck_622_;
goto v_resetjp_605_;
}
else
{
lean_inc(v_a_604_);
lean_dec(v___x_603_);
v___x_606_ = lean_box(0);
v_isShared_607_ = v_isSharedCheck_622_;
goto v_resetjp_605_;
}
v_resetjp_605_:
{
if (lean_obj_tag(v_a_604_) == 0)
{
lean_object* v___x_608_; lean_object* v___x_610_; 
v___x_608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_608_, 0, v_a_604_);
if (v_isShared_600_ == 0)
{
lean_ctor_set(v___x_599_, 0, v___x_608_);
v___x_610_ = v___x_599_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v___x_608_);
lean_ctor_set(v_reuseFailAlloc_614_, 1, v_snd_597_);
v___x_610_ = v_reuseFailAlloc_614_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
lean_object* v___x_612_; 
if (v_isShared_607_ == 0)
{
lean_ctor_set(v___x_606_, 0, v___x_610_);
v___x_612_ = v___x_606_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v___x_610_);
v___x_612_ = v_reuseFailAlloc_613_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
return v___x_612_;
}
}
}
else
{
lean_object* v_a_615_; lean_object* v___x_617_; 
lean_del_object(v___x_606_);
lean_dec(v_snd_597_);
v_a_615_ = lean_ctor_get(v_a_604_, 0);
lean_inc(v_a_615_);
lean_dec_ref_known(v_a_604_, 1);
if (v_isShared_600_ == 0)
{
lean_ctor_set(v___x_599_, 1, v_a_615_);
lean_ctor_set(v___x_599_, 0, v___x_601_);
v___x_617_ = v___x_599_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v___x_601_);
lean_ctor_set(v_reuseFailAlloc_621_, 1, v_a_615_);
v___x_617_ = v_reuseFailAlloc_621_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
size_t v___x_618_; size_t v___x_619_; 
v___x_618_ = ((size_t)1ULL);
v___x_619_ = lean_usize_add(v_i_590_, v___x_618_);
v_i_590_ = v___x_619_;
v_b_591_ = v___x_617_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_630_; 
lean_del_object(v___x_599_);
lean_dec(v_snd_597_);
v_a_623_ = lean_ctor_get(v___x_603_, 0);
v_isSharedCheck_630_ = !lean_is_exclusive(v___x_603_);
if (v_isSharedCheck_630_ == 0)
{
v___x_625_ = v___x_603_;
v_isShared_626_ = v_isSharedCheck_630_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_a_623_);
lean_dec(v___x_603_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_630_;
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
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v_a_623_);
v___x_628_ = v_reuseFailAlloc_629_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
return v___x_628_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__2_spec__3___boxed(lean_object* v_as_633_, lean_object* v_sz_634_, lean_object* v_i_635_, lean_object* v_b_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_){
_start:
{
size_t v_sz_boxed_640_; size_t v_i_boxed_641_; lean_object* v_res_642_; 
v_sz_boxed_640_ = lean_unbox_usize(v_sz_634_);
lean_dec(v_sz_634_);
v_i_boxed_641_ = lean_unbox_usize(v_i_635_);
lean_dec(v_i_635_);
v_res_642_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__2_spec__3(v_as_633_, v_sz_boxed_640_, v_i_boxed_641_, v_b_636_, v___y_637_, v___y_638_);
lean_dec(v___y_638_);
lean_dec_ref(v___y_637_);
lean_dec_ref(v_as_633_);
return v_res_642_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__2___boxed(lean_object* v_stx_643_, lean_object* v_b_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_){
_start:
{
lean_object* v_res_648_; 
v_res_648_ = l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__2(v_stx_643_, v_b_644_, v___y_645_, v___y_646_);
lean_dec(v___y_646_);
lean_dec_ref(v___y_645_);
return v_res_648_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___lam__0(lean_object* v_stx_649_, lean_object* v___y_650_, lean_object* v___y_651_){
_start:
{
lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_653_ = lean_box(0);
v___x_654_ = l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_instForInTopDownSkipQuotSyntaxOfMonad_loop___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__2(v_stx_649_, v___x_653_, v___y_650_, v___y_651_);
if (lean_obj_tag(v___x_654_) == 0)
{
lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_661_; 
v_isSharedCheck_661_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_661_ == 0)
{
lean_object* v_unused_662_; 
v_unused_662_ = lean_ctor_get(v___x_654_, 0);
lean_dec(v_unused_662_);
v___x_656_ = v___x_654_;
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
else
{
lean_dec(v___x_654_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___x_659_; 
if (v_isShared_657_ == 0)
{
lean_ctor_set(v___x_656_, 0, v___x_653_);
v___x_659_ = v___x_656_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v___x_653_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
}
else
{
lean_object* v_a_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_670_; 
v_a_663_ = lean_ctor_get(v___x_654_, 0);
v_isSharedCheck_670_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_670_ == 0)
{
v___x_665_ = v___x_654_;
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_a_663_);
lean_dec(v___x_654_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v___x_668_; 
if (v_isShared_666_ == 0)
{
v___x_668_ = v___x_665_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_a_663_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
return v___x_668_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___lam__0___boxed(lean_object* v_stx_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_){
_start:
{
lean_object* v_res_675_; 
v_res_675_ = l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn___lam__0(v_stx_671_, v___y_672_, v___y_673_);
lean_dec(v___y_673_);
lean_dec_ref(v___y_672_);
return v_res_675_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1(lean_object* v_msgData_711_, lean_object* v___y_712_, lean_object* v___y_713_){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___redArg(v_msgData_711_, v___y_713_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1___boxed(lean_object* v_msgData_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00__private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn_spec__0_spec__0_spec__1(v_msgData_716_, v___y_717_, v___y_718_);
lean_dec(v___y_718_);
lean_dec_ref(v___y_717_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_initFn_00___x40_Lean_Linter_GlobalAttributeIn_801426259____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_722_ = ((lean_object*)(l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_globalAttributeIn));
v___x_723_ = l_Lean_Elab_Command_addLinter(v___x_722_);
return v___x_723_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_initFn_00___x40_Lean_Linter_GlobalAttributeIn_801426259____hygCtx___hyg_2____boxed(lean_object* v_a_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_initFn_00___x40_Lean_Linter_GlobalAttributeIn_801426259____hygCtx___hyg_2_();
return v_res_725_;
}
}
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Linter_GlobalAttributeIn(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_GlobalAttributeIn_0__Lean_Linter_initFn_00___x40_Lean_Linter_GlobalAttributeIn_801426259____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Linter_GlobalAttributeIn(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lean_Linter_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Linter_GlobalAttributeIn(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_GlobalAttributeIn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Linter_GlobalAttributeIn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Linter_GlobalAttributeIn(builtin);
}
#ifdef __cplusplus
}
#endif
