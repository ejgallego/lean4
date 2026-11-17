// Lean compiler output
// Module: Lean.Linter.Extra.DupNamespace
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
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_FileMap_ofPosition(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_ofRange(lean_object*, uint8_t);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
extern lean_object* l_Lean_Syntax_instInhabitedRange_default;
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
extern lean_object* l_Lean_Linter_instInhabitedLinterSetsState_default;
extern lean_object* l_Lean_Linter_linterSetsExt;
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
extern lean_object* l_Lean_declRangeExt;
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Syntax_getId(lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_Name_components(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_MessageData_note(lean_object*);
extern lean_object* l_Lean_Linter_linterMessageTag;
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_andList(lean_object*);
lean_object* l_List_zipWith___at___00List_zip_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_List_eraseDupsBy___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_find_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_withSetOptionIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_addLinter(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "linter"};
static const lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "extra"};
static const lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "dupNamespace"};
static const lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(33, 183, 205, 183, 92, 15, 88, 116)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(100, 70, 92, 151, 235, 189, 126, 126)}};
static const lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "enable the duplicated namespace linter"};
static const lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__5_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__5_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__5_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__7_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Linter"};
static const lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__7_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__7_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__8_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Extra"};
static const lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__8_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__8_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__7_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__8_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(179, 148, 165, 15, 81, 68, 12, 199)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(98, 33, 172, 180, 73, 123, 191, 116)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(105, 61, 181, 137, 182, 231, 65, 137)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value_aux_4),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(204, 219, 14, 12, 236, 190, 241, 203)}};
static const lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_linter_extra_dupNamespace;
static const lean_string_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "consecutiveOnly"};
static const lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(33, 183, 205, 183, 92, 15, 88, 116)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(100, 70, 92, 151, 235, 189, 126, 126)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(133, 203, 110, 203, 110, 115, 227, 16)}};
static const lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "only warn on consecutive duplicated namespaces"};
static const lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__7_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__8_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(179, 148, 165, 15, 81, 68, 12, 199)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(98, 33, 172, 180, 73, 123, 191, 116)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(105, 61, 181, 137, 182, 231, 65, 137)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value_aux_5 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value_aux_4),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(204, 219, 14, 12, 236, 190, 241, 203)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value_aux_5),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(13, 121, 163, 79, 184, 131, 172, 11)}};
static const lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_linter_extra_dupNamespace_consecutiveOnly;
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___closed__0 = (const lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___closed__0_value;
static const lean_string_object l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___closed__1 = (const lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___closed__1_value;
static const lean_string_object l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "export"};
static const lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___closed__2 = (const lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___closed__3_value_aux_1),((lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___closed__3_value_aux_2),((lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(6, 73, 228, 195, 89, 60, 49, 127)}};
static const lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___closed__3 = (const lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getBoolOption___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__3___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getBoolOption___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getBoolOption___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__3(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getBoolOption___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_List_eraseDups___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_eraseDups___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__8___closed__0 = (const lean_object*)&l_List_eraseDups___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__8___closed__0_value;
LEAN_EXPORT lean_object* l_List_eraseDups___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__8(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__10_spec__13___redArg(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__10_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__5___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__5___closed__0_value;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__5___closed__1;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__6(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__15___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8___lam__0___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "This linter can be disabled with `set_option "};
static const lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4___closed__0 = (const lean_object*)&l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4___closed__0_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4___closed__1;
static const lean_string_object l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " false`"};
static const lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4___closed__2 = (const lean_object*)&l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4___closed__2_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4___closed__3;
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_countP_go___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_countP_go___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__7___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "The namespace `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "` is duplicated in the declaration `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "The namespaces "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__7;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = " are duplicated in the declaration `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__8_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__9;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__10_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__0 = (const lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__0_value;
static const lean_closure_object l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___lam__1___boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__0_value)} };
static const lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__1 = (const lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__1_value;
static const lean_closure_object l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_withSetOptionIn___boxed, .m_arity = 6, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__1_value)} };
static const lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__2 = (const lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__2_value;
static const lean_string_object l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "DupNamespaceLinter"};
static const lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__3 = (const lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__3_value;
static const lean_ctor_object l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__7_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__8_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(179, 148, 165, 15, 81, 68, 12, 199)}};
static const lean_ctor_object l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__4_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__4_value_aux_2),((lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__3_value),LEAN_SCALAR_PTR_LITERAL(137, 209, 81, 27, 145, 227, 71, 229)}};
static const lean_ctor_object l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__4_value_aux_3),((lean_object*)&l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(44, 197, 181, 132, 231, 73, 118, 142)}};
static const lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__4 = (const lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__4_value;
static const lean_ctor_object l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__2_value),((lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__4_value)}};
static const lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__5 = (const lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__5_value;
LEAN_EXPORT const lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace = (const lean_object*)&l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__10_spec__13(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__10_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_DupNamespace_528843787____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_DupNamespace_528843787____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_58_ = ((lean_object*)(l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4_));
v___x_59_ = ((lean_object*)(l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__5_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4_));
v___x_60_ = ((lean_object*)(l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4_));
v___x_61_ = l_Lean_Option_register___at___00__private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__spec__0(v___x_58_, v___x_59_, v___x_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4____boxed(lean_object* v_a_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4_();
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_85_ = ((lean_object*)(l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4_));
v___x_86_ = ((lean_object*)(l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4_));
v___x_87_ = ((lean_object*)(l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4_));
v___x_88_ = l_Lean_Option_register___at___00__private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4__spec__0(v___x_85_, v___x_86_, v___x_87_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4____boxed(lean_object* v_a_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4_();
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__0(lean_object* v_toPure_91_, lean_object* v_____do__lift_92_){
_start:
{
lean_object* v_a_93_; lean_object* v___x_94_; 
v_a_93_ = lean_ctor_get(v_____do__lift_92_, 0);
lean_inc(v_a_93_);
lean_dec_ref(v_____do__lift_92_);
v___x_94_ = lean_apply_2(v_toPure_91_, lean_box(0), v_a_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__1(lean_object* v_toPure_95_, lean_object* v_____s_96_){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = lean_apply_2(v_toPure_95_, lean_box(0), v_____s_96_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__2(lean_object* v_fm_98_, lean_object* v_pos_99_, lean_object* v_toPure_100_, uint8_t v___x_101_, lean_object* v_a_102_, lean_object* v_b_103_, lean_object* v_c_104_){
_start:
{
lean_object* v_range_105_; lean_object* v_selectionRange_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_127_; 
v_range_105_ = lean_ctor_get(v_b_103_, 0);
v_selectionRange_106_ = lean_ctor_get(v_b_103_, 1);
v_isSharedCheck_127_ = !lean_is_exclusive(v_b_103_);
if (v_isSharedCheck_127_ == 0)
{
v___x_108_ = v_b_103_;
v_isShared_109_ = v_isSharedCheck_127_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_selectionRange_106_);
lean_inc(v_range_105_);
lean_dec(v_b_103_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_127_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
lean_object* v_pos_110_; lean_object* v___x_111_; uint8_t v___x_112_; 
v_pos_110_ = lean_ctor_get(v_range_105_, 0);
lean_inc_ref(v_pos_110_);
lean_dec_ref(v_range_105_);
v___x_111_ = l_Lean_FileMap_ofPosition(v_fm_98_, v_pos_110_);
v___x_112_ = lean_nat_dec_le(v_pos_99_, v___x_111_);
lean_dec(v___x_111_);
if (v___x_112_ == 0)
{
lean_object* v___x_113_; lean_object* v___x_114_; 
lean_del_object(v___x_108_);
lean_dec_ref(v_selectionRange_106_);
lean_dec(v_a_102_);
v___x_113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_113_, 0, v_c_104_);
v___x_114_ = lean_apply_2(v_toPure_100_, lean_box(0), v___x_113_);
return v___x_114_;
}
else
{
lean_object* v_pos_115_; lean_object* v_endPos_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_120_; 
v_pos_115_ = lean_ctor_get(v_selectionRange_106_, 0);
lean_inc_ref(v_pos_115_);
v_endPos_116_ = lean_ctor_get(v_selectionRange_106_, 2);
lean_inc_ref(v_endPos_116_);
lean_dec_ref(v_selectionRange_106_);
v___x_117_ = l_Lean_FileMap_ofPosition(v_fm_98_, v_pos_115_);
v___x_118_ = l_Lean_FileMap_ofPosition(v_fm_98_, v_endPos_116_);
if (v_isShared_109_ == 0)
{
lean_ctor_set(v___x_108_, 1, v___x_118_);
lean_ctor_set(v___x_108_, 0, v___x_117_);
v___x_120_ = v___x_108_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v___x_117_);
lean_ctor_set(v_reuseFailAlloc_126_, 1, v___x_118_);
v___x_120_ = v_reuseFailAlloc_126_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_121_ = l_Lean_Syntax_ofRange(v___x_120_, v___x_112_);
v___x_122_ = l_Lean_mkIdentFrom(v___x_121_, v_a_102_, v___x_101_);
lean_dec(v___x_121_);
v___x_123_ = lean_array_push(v_c_104_, v___x_122_);
v___x_124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_124_, 0, v___x_123_);
v___x_125_ = lean_apply_2(v_toPure_100_, lean_box(0), v___x_124_);
return v___x_125_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__2___boxed(lean_object* v_fm_128_, lean_object* v_pos_129_, lean_object* v_toPure_130_, lean_object* v___x_131_, lean_object* v_a_132_, lean_object* v_b_133_, lean_object* v_c_134_){
_start:
{
uint8_t v___x_249__boxed_135_; lean_object* v_res_136_; 
v___x_249__boxed_135_ = lean_unbox(v___x_131_);
v_res_136_ = l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__2(v_fm_128_, v_pos_129_, v_toPure_130_, v___x_249__boxed_135_, v_a_132_, v_b_133_, v_c_134_);
lean_dec(v_pos_129_);
lean_dec_ref(v_fm_128_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__3(lean_object* v_pos_139_, lean_object* v_toPure_140_, uint8_t v___x_141_, lean_object* v_inst_142_, lean_object* v_drs_143_, lean_object* v_toBind_144_, lean_object* v___f_145_, lean_object* v___f_146_, lean_object* v_fm_147_){
_start:
{
lean_object* v___x_148_; lean_object* v___f_149_; lean_object* v_nms_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_148_ = lean_box(v___x_141_);
v___f_149_ = lean_alloc_closure((void*)(l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__2___boxed), 7, 4);
lean_closure_set(v___f_149_, 0, v_fm_147_);
lean_closure_set(v___f_149_, 1, v_pos_139_);
lean_closure_set(v___f_149_, 2, v_toPure_140_);
lean_closure_set(v___f_149_, 3, v___x_148_);
v_nms_150_ = ((lean_object*)(l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__3___closed__0));
v___x_151_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_142_, v___f_149_, v_nms_150_, v_drs_143_);
lean_inc(v_toBind_144_);
v___x_152_ = lean_apply_4(v_toBind_144_, lean_box(0), lean_box(0), v___x_151_, v___f_145_);
v___x_153_ = lean_apply_4(v_toBind_144_, lean_box(0), lean_box(0), v___x_152_, v___f_146_);
return v___x_153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__3___boxed(lean_object* v_pos_154_, lean_object* v_toPure_155_, lean_object* v___x_156_, lean_object* v_inst_157_, lean_object* v_drs_158_, lean_object* v_toBind_159_, lean_object* v___f_160_, lean_object* v___f_161_, lean_object* v_fm_162_){
_start:
{
uint8_t v___x_290__boxed_163_; lean_object* v_res_164_; 
v___x_290__boxed_163_ = lean_unbox(v___x_156_);
v_res_164_ = l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__3(v_pos_154_, v_toPure_155_, v___x_290__boxed_163_, v_inst_157_, v_drs_158_, v_toBind_159_, v___f_160_, v___f_161_, v_fm_162_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__4(lean_object* v___x_165_, lean_object* v_pos_166_, lean_object* v_toPure_167_, lean_object* v_inst_168_, lean_object* v_toBind_169_, lean_object* v___f_170_, lean_object* v___f_171_, lean_object* v_inst_172_, lean_object* v_____do__lift_173_){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; uint8_t v___x_177_; lean_object* v_drs_178_; lean_object* v___x_179_; lean_object* v___f_180_; lean_object* v___x_181_; 
v___x_174_ = l_Lean_declRangeExt;
v___x_175_ = lean_box(1);
v___x_176_ = lean_box(0);
v___x_177_ = 0;
v_drs_178_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_165_, v___x_174_, v_____do__lift_173_, v___x_175_, v___x_176_, v___x_177_);
v___x_179_ = lean_box(v___x_177_);
lean_inc(v_toBind_169_);
v___f_180_ = lean_alloc_closure((void*)(l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__3___boxed), 9, 8);
lean_closure_set(v___f_180_, 0, v_pos_166_);
lean_closure_set(v___f_180_, 1, v_toPure_167_);
lean_closure_set(v___f_180_, 2, v___x_179_);
lean_closure_set(v___f_180_, 3, v_inst_168_);
lean_closure_set(v___f_180_, 4, v_drs_178_);
lean_closure_set(v___f_180_, 5, v_toBind_169_);
lean_closure_set(v___f_180_, 6, v___f_170_);
lean_closure_set(v___f_180_, 7, v___f_171_);
v___x_181_ = lean_apply_4(v_toBind_169_, lean_box(0), lean_box(0), v_inst_172_, v___f_180_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg(lean_object* v_inst_182_, lean_object* v_inst_183_, lean_object* v_inst_184_, lean_object* v_pos_185_){
_start:
{
lean_object* v_toApplicative_186_; lean_object* v_toBind_187_; lean_object* v_getEnv_188_; lean_object* v_toPure_189_; lean_object* v___x_190_; lean_object* v___f_191_; lean_object* v___f_192_; lean_object* v___f_193_; lean_object* v___x_194_; 
v_toApplicative_186_ = lean_ctor_get(v_inst_182_, 0);
v_toBind_187_ = lean_ctor_get(v_inst_182_, 1);
lean_inc_n(v_toBind_187_, 2);
v_getEnv_188_ = lean_ctor_get(v_inst_183_, 0);
lean_inc(v_getEnv_188_);
lean_dec_ref(v_inst_183_);
v_toPure_189_ = lean_ctor_get(v_toApplicative_186_, 1);
lean_inc_n(v_toPure_189_, 3);
v___x_190_ = lean_box(1);
v___f_191_ = lean_alloc_closure((void*)(l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__0), 2, 1);
lean_closure_set(v___f_191_, 0, v_toPure_189_);
v___f_192_ = lean_alloc_closure((void*)(l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__1), 2, 1);
lean_closure_set(v___f_192_, 0, v_toPure_189_);
v___f_193_ = lean_alloc_closure((void*)(l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__4), 9, 8);
lean_closure_set(v___f_193_, 0, v___x_190_);
lean_closure_set(v___f_193_, 1, v_pos_185_);
lean_closure_set(v___f_193_, 2, v_toPure_189_);
lean_closure_set(v___f_193_, 3, v_inst_182_);
lean_closure_set(v___f_193_, 4, v_toBind_187_);
lean_closure_set(v___f_193_, 5, v___f_191_);
lean_closure_set(v___f_193_, 6, v___f_192_);
lean_closure_set(v___f_193_, 7, v_inst_184_);
v___x_194_ = lean_apply_4(v_toBind_187_, lean_box(0), lean_box(0), v_getEnv_188_, v___f_193_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom(lean_object* v_m_195_, lean_object* v_inst_196_, lean_object* v_inst_197_, lean_object* v_inst_198_, lean_object* v_pos_199_){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg(v_inst_196_, v_inst_197_, v_inst_198_, v_pos_199_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___lam__1(uint8_t v___x_201_, lean_object* v_currNamespace_202_, lean_object* v_toPure_203_, lean_object* v_a_204_, lean_object* v_x_205_, lean_object* v___y_206_){
_start:
{
lean_object* v___x_207_; uint8_t v___x_208_; lean_object* v___y_210_; lean_object* v___x_217_; 
v___x_207_ = l_Lean_TSyntax_getId(v_a_204_);
v___x_208_ = 0;
v___x_217_ = l_Lean_Syntax_getRange_x3f(v_a_204_, v___x_208_);
if (lean_obj_tag(v___x_217_) == 0)
{
lean_object* v___x_218_; 
v___x_218_ = l_Lean_Syntax_instInhabitedRange_default;
v___y_210_ = v___x_218_;
goto v___jp_209_;
}
else
{
lean_object* v_val_219_; 
v_val_219_ = lean_ctor_get(v___x_217_, 0);
lean_inc(v_val_219_);
lean_dec_ref_known(v___x_217_, 1);
v___y_210_ = v_val_219_;
goto v___jp_209_;
}
v___jp_209_:
{
lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_211_ = l_Lean_Syntax_ofRange(v___y_210_, v___x_201_);
v___x_212_ = l_Lean_Name_append(v_currNamespace_202_, v___x_207_);
v___x_213_ = l_Lean_mkIdentFrom(v___x_211_, v___x_212_, v___x_208_);
lean_dec(v___x_211_);
v___x_214_ = lean_array_push(v___y_206_, v___x_213_);
v___x_215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
v___x_216_ = lean_apply_2(v_toPure_203_, lean_box(0), v___x_215_);
return v___x_216_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___lam__1___boxed(lean_object* v___x_220_, lean_object* v_currNamespace_221_, lean_object* v_toPure_222_, lean_object* v_a_223_, lean_object* v_x_224_, lean_object* v___y_225_){
_start:
{
uint8_t v___x_266__boxed_226_; lean_object* v_res_227_; 
v___x_266__boxed_226_ = lean_unbox(v___x_220_);
v_res_227_ = l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___lam__1(v___x_266__boxed_226_, v_currNamespace_221_, v_toPure_222_, v_a_223_, v_x_224_, v___y_225_);
lean_dec(v_a_223_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___lam__0(uint8_t v___x_228_, lean_object* v_toPure_229_, lean_object* v_ids_230_, lean_object* v_inst_231_, lean_object* v_aliases_232_, lean_object* v_toBind_233_, lean_object* v___f_234_, lean_object* v_currNamespace_235_){
_start:
{
lean_object* v___x_236_; lean_object* v___f_237_; size_t v_sz_238_; size_t v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_236_ = lean_box(v___x_228_);
v___f_237_ = lean_alloc_closure((void*)(l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___lam__1___boxed), 6, 3);
lean_closure_set(v___f_237_, 0, v___x_236_);
lean_closure_set(v___f_237_, 1, v_currNamespace_235_);
lean_closure_set(v___f_237_, 2, v_toPure_229_);
v_sz_238_ = lean_array_size(v_ids_230_);
v___x_239_ = ((size_t)0ULL);
v___x_240_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_231_, v_ids_230_, v___f_237_, v_sz_238_, v___x_239_, v_aliases_232_);
v___x_241_ = lean_apply_4(v_toBind_233_, lean_box(0), lean_box(0), v___x_240_, v___f_234_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___lam__0___boxed(lean_object* v___x_242_, lean_object* v_toPure_243_, lean_object* v_ids_244_, lean_object* v_inst_245_, lean_object* v_aliases_246_, lean_object* v_toBind_247_, lean_object* v___f_248_, lean_object* v_currNamespace_249_){
_start:
{
uint8_t v___x_301__boxed_250_; lean_object* v_res_251_; 
v___x_301__boxed_250_ = lean_unbox(v___x_242_);
v_res_251_ = l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___lam__0(v___x_301__boxed_250_, v_toPure_243_, v_ids_244_, v_inst_245_, v_aliases_246_, v_toBind_247_, v___f_248_, v_currNamespace_249_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg(lean_object* v_inst_260_, lean_object* v_inst_261_, lean_object* v_stx_262_){
_start:
{
lean_object* v_toApplicative_263_; lean_object* v_toBind_264_; lean_object* v_toPure_265_; lean_object* v_aliases_266_; lean_object* v___x_267_; uint8_t v___x_268_; 
v_toApplicative_263_ = lean_ctor_get(v_inst_260_, 0);
v_toBind_264_ = lean_ctor_get(v_inst_260_, 1);
lean_inc(v_toBind_264_);
v_toPure_265_ = lean_ctor_get(v_toApplicative_263_, 1);
lean_inc(v_toPure_265_);
v_aliases_266_ = ((lean_object*)(l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__3___closed__0));
v___x_267_ = ((lean_object*)(l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___closed__3));
lean_inc(v_stx_262_);
v___x_268_ = l_Lean_Syntax_isOfKind(v_stx_262_, v___x_267_);
if (v___x_268_ == 0)
{
lean_object* v___x_269_; 
lean_dec(v_toBind_264_);
lean_dec(v_stx_262_);
lean_dec_ref(v_inst_261_);
lean_dec_ref(v_inst_260_);
v___x_269_ = lean_apply_2(v_toPure_265_, lean_box(0), v_aliases_266_);
return v___x_269_;
}
else
{
lean_object* v_getCurrNamespace_270_; lean_object* v___f_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v_ids_274_; lean_object* v___x_275_; lean_object* v___f_276_; lean_object* v___x_277_; 
v_getCurrNamespace_270_ = lean_ctor_get(v_inst_261_, 0);
lean_inc(v_getCurrNamespace_270_);
lean_dec_ref(v_inst_261_);
lean_inc(v_toPure_265_);
v___f_271_ = lean_alloc_closure((void*)(l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__1), 2, 1);
lean_closure_set(v___f_271_, 0, v_toPure_265_);
v___x_272_ = lean_unsigned_to_nat(3u);
v___x_273_ = l_Lean_Syntax_getArg(v_stx_262_, v___x_272_);
lean_dec(v_stx_262_);
v_ids_274_ = l_Lean_Syntax_getArgs(v___x_273_);
lean_dec(v___x_273_);
v___x_275_ = lean_box(v___x_268_);
lean_inc(v_toBind_264_);
v___f_276_ = lean_alloc_closure((void*)(l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___lam__0___boxed), 8, 7);
lean_closure_set(v___f_276_, 0, v___x_275_);
lean_closure_set(v___f_276_, 1, v_toPure_265_);
lean_closure_set(v___f_276_, 2, v_ids_274_);
lean_closure_set(v___f_276_, 3, v_inst_260_);
lean_closure_set(v___f_276_, 4, v_aliases_266_);
lean_closure_set(v___f_276_, 5, v_toBind_264_);
lean_closure_set(v___f_276_, 6, v___f_271_);
v___x_277_ = lean_apply_4(v_toBind_264_, lean_box(0), lean_box(0), v_getCurrNamespace_270_, v___f_276_);
return v___x_277_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax(lean_object* v_m_278_, lean_object* v_inst_279_, lean_object* v_inst_280_, lean_object* v_stx_281_){
_start:
{
lean_object* v___x_282_; 
v___x_282_ = l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg(v_inst_279_, v_inst_280_, v_stx_281_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_getBoolOption___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__3___redArg(lean_object* v_k_283_, uint8_t v_defValue_284_, lean_object* v___y_285_){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v_scopes_289_; lean_object* v___x_290_; lean_object* v_opts_291_; lean_object* v_map_292_; lean_object* v___x_293_; 
v___x_287_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_288_ = lean_st_ref_get(v___y_285_);
v_scopes_289_ = lean_ctor_get(v___x_288_, 2);
lean_inc(v_scopes_289_);
lean_dec(v___x_288_);
v___x_290_ = l_List_head_x21___redArg(v___x_287_, v_scopes_289_);
lean_dec(v_scopes_289_);
v_opts_291_ = lean_ctor_get(v___x_290_, 1);
lean_inc_ref(v_opts_291_);
lean_dec(v___x_290_);
v_map_292_ = lean_ctor_get(v_opts_291_, 0);
lean_inc(v_map_292_);
lean_dec_ref(v_opts_291_);
v___x_293_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_292_, v_k_283_);
lean_dec(v_map_292_);
if (lean_obj_tag(v___x_293_) == 0)
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = lean_box(v_defValue_284_);
v___x_295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_295_, 0, v___x_294_);
return v___x_295_;
}
else
{
lean_object* v_val_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_309_; 
v_val_296_ = lean_ctor_get(v___x_293_, 0);
v_isSharedCheck_309_ = !lean_is_exclusive(v___x_293_);
if (v_isSharedCheck_309_ == 0)
{
v___x_298_ = v___x_293_;
v_isShared_299_ = v_isSharedCheck_309_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_val_296_);
lean_dec(v___x_293_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_309_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
if (lean_obj_tag(v_val_296_) == 1)
{
uint8_t v_v_300_; lean_object* v___x_301_; lean_object* v___x_303_; 
v_v_300_ = lean_ctor_get_uint8(v_val_296_, 0);
lean_dec_ref_known(v_val_296_, 0);
v___x_301_ = lean_box(v_v_300_);
if (v_isShared_299_ == 0)
{
lean_ctor_set_tag(v___x_298_, 0);
lean_ctor_set(v___x_298_, 0, v___x_301_);
v___x_303_ = v___x_298_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v___x_301_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
else
{
lean_object* v___x_305_; lean_object* v___x_307_; 
lean_dec(v_val_296_);
v___x_305_ = lean_box(v_defValue_284_);
if (v_isShared_299_ == 0)
{
lean_ctor_set_tag(v___x_298_, 0);
lean_ctor_set(v___x_298_, 0, v___x_305_);
v___x_307_ = v___x_298_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v___x_305_);
v___x_307_ = v_reuseFailAlloc_308_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
return v___x_307_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getBoolOption___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__3___redArg___boxed(lean_object* v_k_310_, lean_object* v_defValue_311_, lean_object* v___y_312_, lean_object* v___y_313_){
_start:
{
uint8_t v_defValue_boxed_314_; lean_object* v_res_315_; 
v_defValue_boxed_314_ = lean_unbox(v_defValue_311_);
v_res_315_ = l_Lean_getBoolOption___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__3___redArg(v_k_310_, v_defValue_boxed_314_, v___y_312_);
lean_dec(v___y_312_);
lean_dec(v_k_310_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l_Lean_getBoolOption___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__3(lean_object* v_k_316_, uint8_t v_defValue_317_, lean_object* v___y_318_, lean_object* v___y_319_){
_start:
{
lean_object* v___x_321_; 
v___x_321_ = l_Lean_getBoolOption___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__3___redArg(v_k_316_, v_defValue_317_, v___y_319_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_getBoolOption___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__3___boxed(lean_object* v_k_322_, lean_object* v_defValue_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_){
_start:
{
uint8_t v_defValue_boxed_327_; lean_object* v_res_328_; 
v_defValue_boxed_327_ = lean_unbox(v_defValue_323_);
v_res_328_ = l_Lean_getBoolOption___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__3(v_k_322_, v_defValue_boxed_327_, v___y_324_, v___y_325_);
lean_dec(v___y_325_);
lean_dec_ref(v___y_324_);
lean_dec(v_k_322_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l_List_eraseDups___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__8(lean_object* v_as_330_){
_start:
{
lean_object* v___f_331_; lean_object* v___x_332_; 
v___f_331_ = ((lean_object*)(l_List_eraseDups___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__8___closed__0));
v___x_332_ = l_List_eraseDupsBy___redArg(v___f_331_, v_as_330_);
return v___x_332_;
}
}
LEAN_EXPORT uint8_t l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___lam__0(lean_object* v_x_333_){
_start:
{
lean_object* v___x_334_; uint8_t v___x_335_; 
v___x_334_ = ((lean_object*)(l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___closed__3));
v___x_335_ = l_Lean_Syntax_isOfKind(v_x_333_, v___x_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___lam__0___boxed(lean_object* v_x_336_){
_start:
{
uint8_t v_res_337_; lean_object* v_r_338_; 
v_res_337_ = l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___lam__0(v_x_336_);
v_r_338_ = lean_box(v_res_337_);
return v_r_338_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__10_spec__13___redArg(uint8_t v___x_339_, lean_object* v___x_340_, lean_object* v_as_341_, size_t v_sz_342_, size_t v_i_343_, lean_object* v_b_344_){
_start:
{
uint8_t v___x_346_; 
v___x_346_ = lean_usize_dec_lt(v_i_343_, v_sz_342_);
if (v___x_346_ == 0)
{
lean_object* v___x_347_; 
lean_dec(v___x_340_);
v___x_347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_347_, 0, v_b_344_);
return v___x_347_;
}
else
{
lean_object* v_a_348_; lean_object* v___x_349_; uint8_t v___x_350_; lean_object* v___y_352_; lean_object* v___x_360_; 
v_a_348_ = lean_array_uget_borrowed(v_as_341_, v_i_343_);
v___x_349_ = l_Lean_TSyntax_getId(v_a_348_);
v___x_350_ = 0;
v___x_360_ = l_Lean_Syntax_getRange_x3f(v_a_348_, v___x_350_);
if (lean_obj_tag(v___x_360_) == 0)
{
lean_object* v___x_361_; 
v___x_361_ = l_Lean_Syntax_instInhabitedRange_default;
v___y_352_ = v___x_361_;
goto v___jp_351_;
}
else
{
lean_object* v_val_362_; 
v_val_362_ = lean_ctor_get(v___x_360_, 0);
lean_inc(v_val_362_);
lean_dec_ref_known(v___x_360_, 1);
v___y_352_ = v_val_362_;
goto v___jp_351_;
}
v___jp_351_:
{
lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; size_t v___x_357_; size_t v___x_358_; 
v___x_353_ = l_Lean_Syntax_ofRange(v___y_352_, v___x_339_);
lean_inc(v___x_340_);
v___x_354_ = l_Lean_Name_append(v___x_340_, v___x_349_);
v___x_355_ = l_Lean_mkIdentFrom(v___x_353_, v___x_354_, v___x_350_);
lean_dec(v___x_353_);
v___x_356_ = lean_array_push(v_b_344_, v___x_355_);
v___x_357_ = ((size_t)1ULL);
v___x_358_ = lean_usize_add(v_i_343_, v___x_357_);
v_i_343_ = v___x_358_;
v_b_344_ = v___x_356_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__10_spec__13___redArg___boxed(lean_object* v___x_363_, lean_object* v___x_364_, lean_object* v_as_365_, lean_object* v_sz_366_, lean_object* v_i_367_, lean_object* v_b_368_, lean_object* v___y_369_){
_start:
{
uint8_t v___x_8125__boxed_370_; size_t v_sz_boxed_371_; size_t v_i_boxed_372_; lean_object* v_res_373_; 
v___x_8125__boxed_370_ = lean_unbox(v___x_363_);
v_sz_boxed_371_ = lean_unbox_usize(v_sz_366_);
lean_dec(v_sz_366_);
v_i_boxed_372_ = lean_unbox_usize(v_i_367_);
lean_dec(v_i_367_);
v_res_373_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__10_spec__13___redArg(v___x_8125__boxed_370_, v___x_364_, v_as_365_, v_sz_boxed_371_, v_i_boxed_372_, v_b_368_);
lean_dec_ref(v_as_365_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__10(lean_object* v_stx_374_, lean_object* v___y_375_, lean_object* v___y_376_){
_start:
{
lean_object* v_aliases_378_; lean_object* v___x_379_; uint8_t v___x_380_; 
v_aliases_378_ = ((lean_object*)(l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__3___closed__0));
v___x_379_ = ((lean_object*)(l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___redArg___closed__3));
lean_inc(v_stx_374_);
v___x_380_ = l_Lean_Syntax_isOfKind(v_stx_374_, v___x_379_);
if (v___x_380_ == 0)
{
lean_object* v___x_381_; 
lean_dec(v_stx_374_);
v___x_381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_381_, 0, v_aliases_378_);
return v___x_381_;
}
else
{
lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v_ids_384_; lean_object* v___x_385_; 
v___x_382_ = lean_unsigned_to_nat(3u);
v___x_383_ = l_Lean_Syntax_getArg(v_stx_374_, v___x_382_);
lean_dec(v_stx_374_);
v_ids_384_ = l_Lean_Syntax_getArgs(v___x_383_);
lean_dec(v___x_383_);
v___x_385_ = l_Lean_Elab_Command_getScope___redArg(v___y_376_);
if (lean_obj_tag(v___x_385_) == 0)
{
lean_object* v_a_386_; lean_object* v_currNamespace_387_; size_t v_sz_388_; size_t v___x_389_; lean_object* v___x_390_; 
v_a_386_ = lean_ctor_get(v___x_385_, 0);
lean_inc(v_a_386_);
lean_dec_ref_known(v___x_385_, 1);
v_currNamespace_387_ = lean_ctor_get(v_a_386_, 2);
lean_inc(v_currNamespace_387_);
lean_dec(v_a_386_);
v_sz_388_ = lean_array_size(v_ids_384_);
v___x_389_ = ((size_t)0ULL);
v___x_390_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__10_spec__13___redArg(v___x_380_, v_currNamespace_387_, v_ids_384_, v_sz_388_, v___x_389_, v_aliases_378_);
lean_dec_ref(v_ids_384_);
if (lean_obj_tag(v___x_390_) == 0)
{
lean_object* v_a_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_398_; 
v_a_391_ = lean_ctor_get(v___x_390_, 0);
v_isSharedCheck_398_ = !lean_is_exclusive(v___x_390_);
if (v_isSharedCheck_398_ == 0)
{
v___x_393_ = v___x_390_;
v_isShared_394_ = v_isSharedCheck_398_;
goto v_resetjp_392_;
}
else
{
lean_inc(v_a_391_);
lean_dec(v___x_390_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_398_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
lean_object* v___x_396_; 
if (v_isShared_394_ == 0)
{
v___x_396_ = v___x_393_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v_a_391_);
v___x_396_ = v_reuseFailAlloc_397_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
return v___x_396_;
}
}
}
else
{
lean_object* v_a_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_406_; 
v_a_399_ = lean_ctor_get(v___x_390_, 0);
v_isSharedCheck_406_ = !lean_is_exclusive(v___x_390_);
if (v_isSharedCheck_406_ == 0)
{
v___x_401_ = v___x_390_;
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_a_399_);
lean_dec(v___x_390_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_404_; 
if (v_isShared_402_ == 0)
{
v___x_404_ = v___x_401_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v_a_399_);
v___x_404_ = v_reuseFailAlloc_405_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
return v___x_404_;
}
}
}
}
else
{
lean_object* v_a_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_414_; 
lean_dec_ref(v_ids_384_);
v_a_407_ = lean_ctor_get(v___x_385_, 0);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_385_);
if (v_isSharedCheck_414_ == 0)
{
v___x_409_ = v___x_385_;
v_isShared_410_ = v_isSharedCheck_414_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_a_407_);
lean_dec(v___x_385_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_414_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_412_; 
if (v_isShared_410_ == 0)
{
v___x_412_ = v___x_409_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v_a_407_);
v___x_412_ = v_reuseFailAlloc_413_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
return v___x_412_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__10___boxed(lean_object* v_stx_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__10(v_stx_415_, v___y_416_, v___y_417_);
lean_dec(v___y_417_);
lean_dec_ref(v___y_416_);
return v_res_419_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__5___closed__1(void){
_start:
{
lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_421_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__5___closed__0));
v___x_422_ = l_Lean_stringToMessageData(v___x_421_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__5(lean_object* v_a_423_, lean_object* v_a_424_){
_start:
{
if (lean_obj_tag(v_a_423_) == 0)
{
lean_object* v___x_425_; 
v___x_425_ = l_List_reverse___redArg(v_a_424_);
return v___x_425_;
}
else
{
lean_object* v_head_426_; lean_object* v_tail_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_439_; 
v_head_426_ = lean_ctor_get(v_a_423_, 0);
v_tail_427_ = lean_ctor_get(v_a_423_, 1);
v_isSharedCheck_439_ = !lean_is_exclusive(v_a_423_);
if (v_isSharedCheck_439_ == 0)
{
v___x_429_ = v_a_423_;
v_isShared_430_ = v_isSharedCheck_439_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_tail_427_);
lean_inc(v_head_426_);
lean_dec(v_a_423_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_439_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_436_; 
v___x_431_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__5___closed__1, &l_List_mapTR_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__5___closed__1_once, _init_l_List_mapTR_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__5___closed__1);
v___x_432_ = l_Lean_MessageData_ofName(v_head_426_);
v___x_433_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_433_, 0, v___x_431_);
lean_ctor_set(v___x_433_, 1, v___x_432_);
v___x_434_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_434_, 0, v___x_433_);
lean_ctor_set(v___x_434_, 1, v___x_431_);
if (v_isShared_430_ == 0)
{
lean_ctor_set(v___x_429_, 1, v_a_424_);
lean_ctor_set(v___x_429_, 0, v___x_434_);
v___x_436_ = v___x_429_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v___x_434_);
lean_ctor_set(v_reuseFailAlloc_438_, 1, v_a_424_);
v___x_436_ = v_reuseFailAlloc_438_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
v_a_423_ = v_tail_427_;
v_a_424_ = v___x_436_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__6(lean_object* v_a_440_, lean_object* v_a_441_){
_start:
{
if (lean_obj_tag(v_a_440_) == 0)
{
lean_object* v___x_442_; 
v___x_442_ = lean_array_to_list(v_a_441_);
return v___x_442_;
}
else
{
lean_object* v_head_443_; lean_object* v_tail_444_; lean_object* v_fst_445_; lean_object* v_snd_446_; uint8_t v___x_447_; 
v_head_443_ = lean_ctor_get(v_a_440_, 0);
lean_inc(v_head_443_);
v_tail_444_ = lean_ctor_get(v_a_440_, 1);
lean_inc(v_tail_444_);
lean_dec_ref_known(v_a_440_, 2);
v_fst_445_ = lean_ctor_get(v_head_443_, 0);
lean_inc(v_fst_445_);
v_snd_446_ = lean_ctor_get(v_head_443_, 1);
lean_inc(v_snd_446_);
lean_dec(v_head_443_);
v___x_447_ = lean_name_eq(v_fst_445_, v_snd_446_);
lean_dec(v_snd_446_);
if (v___x_447_ == 0)
{
lean_dec(v_fst_445_);
v_a_440_ = v_tail_444_;
goto _start;
}
else
{
lean_object* v___x_449_; 
v___x_449_ = lean_array_push(v_a_441_, v_fst_445_);
v_a_440_ = v_tail_444_;
v_a_441_ = v___x_449_;
goto _start;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__15(lean_object* v_opts_451_, lean_object* v_opt_452_){
_start:
{
lean_object* v_name_453_; lean_object* v_defValue_454_; lean_object* v_map_455_; lean_object* v___x_456_; 
v_name_453_ = lean_ctor_get(v_opt_452_, 0);
v_defValue_454_ = lean_ctor_get(v_opt_452_, 1);
v_map_455_ = lean_ctor_get(v_opts_451_, 0);
v___x_456_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_455_, v_name_453_);
if (lean_obj_tag(v___x_456_) == 0)
{
uint8_t v___x_457_; 
v___x_457_ = lean_unbox(v_defValue_454_);
return v___x_457_;
}
else
{
lean_object* v_val_458_; 
v_val_458_ = lean_ctor_get(v___x_456_, 0);
lean_inc(v_val_458_);
lean_dec_ref_known(v___x_456_, 1);
if (lean_obj_tag(v_val_458_) == 1)
{
uint8_t v_v_459_; 
v_v_459_ = lean_ctor_get_uint8(v_val_458_, 0);
lean_dec_ref_known(v_val_458_, 0);
return v_v_459_;
}
else
{
uint8_t v___x_460_; 
lean_dec(v_val_458_);
v___x_460_ = lean_unbox(v_defValue_454_);
return v___x_460_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__15___boxed(lean_object* v_opts_461_, lean_object* v_opt_462_){
_start:
{
uint8_t v_res_463_; lean_object* v_r_464_; 
v_res_463_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__15(v_opts_461_, v_opt_462_);
lean_dec_ref(v_opt_462_);
lean_dec_ref(v_opts_461_);
v_r_464_ = lean_box(v_res_463_);
return v_r_464_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8___lam__0(uint8_t v___x_466_, lean_object* v_x_467_){
_start:
{
if (lean_obj_tag(v_x_467_) == 1)
{
lean_object* v_pre_468_; 
v_pre_468_ = lean_ctor_get(v_x_467_, 0);
if (lean_obj_tag(v_pre_468_) == 0)
{
lean_object* v_str_469_; lean_object* v___x_470_; uint8_t v___x_471_; 
v_str_469_ = lean_ctor_get(v_x_467_, 1);
v___x_470_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8___lam__0___closed__0));
v___x_471_ = lean_string_dec_eq(v_str_469_, v___x_470_);
return v___x_471_;
}
else
{
return v___x_466_;
}
}
else
{
return v___x_466_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8___lam__0___boxed(lean_object* v___x_472_, lean_object* v_x_473_){
_start:
{
uint8_t v___x_8333__boxed_474_; uint8_t v_res_475_; lean_object* v_r_476_; 
v___x_8333__boxed_474_ = lean_unbox(v___x_472_);
v_res_475_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8___lam__0(v___x_8333__boxed_474_, v_x_473_);
lean_dec(v_x_473_);
v_r_476_ = lean_box(v_res_475_);
return v_r_476_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__0(void){
_start:
{
lean_object* v___x_477_; 
v___x_477_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_477_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__1(void){
_start:
{
lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_478_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__0);
v___x_479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_479_, 0, v___x_478_);
return v___x_479_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__2(void){
_start:
{
lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_480_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__1);
v___x_481_ = lean_unsigned_to_nat(0u);
v___x_482_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_482_, 0, v___x_481_);
lean_ctor_set(v___x_482_, 1, v___x_481_);
lean_ctor_set(v___x_482_, 2, v___x_481_);
lean_ctor_set(v___x_482_, 3, v___x_481_);
lean_ctor_set(v___x_482_, 4, v___x_480_);
lean_ctor_set(v___x_482_, 5, v___x_480_);
lean_ctor_set(v___x_482_, 6, v___x_480_);
lean_ctor_set(v___x_482_, 7, v___x_480_);
lean_ctor_set(v___x_482_, 8, v___x_480_);
lean_ctor_set(v___x_482_, 9, v___x_480_);
lean_ctor_set(v___x_482_, 10, v___x_480_);
return v___x_482_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__3(void){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_483_ = lean_unsigned_to_nat(32u);
v___x_484_ = lean_mk_empty_array_with_capacity(v___x_483_);
v___x_485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_485_, 0, v___x_484_);
return v___x_485_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__4(void){
_start:
{
size_t v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_486_ = ((size_t)5ULL);
v___x_487_ = lean_unsigned_to_nat(0u);
v___x_488_ = lean_unsigned_to_nat(32u);
v___x_489_ = lean_mk_empty_array_with_capacity(v___x_488_);
v___x_490_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__3);
v___x_491_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_491_, 0, v___x_490_);
lean_ctor_set(v___x_491_, 1, v___x_489_);
lean_ctor_set(v___x_491_, 2, v___x_487_);
lean_ctor_set(v___x_491_, 3, v___x_487_);
lean_ctor_set_usize(v___x_491_, 4, v___x_486_);
return v___x_491_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__5(void){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_492_ = lean_box(1);
v___x_493_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__4);
v___x_494_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__1);
v___x_495_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_495_, 0, v___x_494_);
lean_ctor_set(v___x_495_, 1, v___x_493_);
lean_ctor_set(v___x_495_, 2, v___x_492_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg(lean_object* v_msgData_496_, lean_object* v___y_497_){
_start:
{
lean_object* v___x_499_; lean_object* v_env_500_; uint8_t v___x_501_; lean_object* v_env_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v_scopes_505_; lean_object* v___x_506_; lean_object* v_opts_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_499_ = lean_st_ref_get(v___y_497_);
v_env_500_ = lean_ctor_get(v___x_499_, 0);
lean_inc_ref(v_env_500_);
lean_dec(v___x_499_);
v___x_501_ = 0;
v_env_502_ = l_Lean_Environment_setRecordingDeps(v_env_500_, v___x_501_);
v___x_503_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_504_ = lean_st_ref_get(v___y_497_);
v_scopes_505_ = lean_ctor_get(v___x_504_, 2);
lean_inc(v_scopes_505_);
lean_dec(v___x_504_);
v___x_506_ = l_List_head_x21___redArg(v___x_503_, v_scopes_505_);
lean_dec(v_scopes_505_);
v_opts_507_ = lean_ctor_get(v___x_506_, 1);
lean_inc_ref(v_opts_507_);
lean_dec(v___x_506_);
v___x_508_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__2);
v___x_509_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___closed__5);
v___x_510_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_510_, 0, v_env_502_);
lean_ctor_set(v___x_510_, 1, v___x_508_);
lean_ctor_set(v___x_510_, 2, v___x_509_);
lean_ctor_set(v___x_510_, 3, v_opts_507_);
v___x_511_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_511_, 0, v___x_510_);
lean_ctor_set(v___x_511_, 1, v_msgData_496_);
v___x_512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_512_, 0, v___x_511_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg___boxed(lean_object* v_msgData_513_, lean_object* v___y_514_, lean_object* v___y_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg(v_msgData_513_, v___y_514_);
lean_dec(v___y_514_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8(lean_object* v_ref_521_, lean_object* v_msgData_522_, uint8_t v_severity_523_, uint8_t v_isSilent_524_, lean_object* v___y_525_, lean_object* v___y_526_){
_start:
{
lean_object* v___y_529_; lean_object* v___y_530_; lean_object* v___y_531_; uint8_t v___y_532_; lean_object* v___y_533_; uint8_t v___y_534_; lean_object* v___y_535_; lean_object* v___y_536_; lean_object* v___y_594_; uint8_t v___y_595_; uint8_t v___y_596_; lean_object* v___y_597_; lean_object* v___y_598_; lean_object* v___y_619_; lean_object* v___y_620_; uint8_t v___y_621_; uint8_t v___y_622_; lean_object* v___y_623_; uint8_t v___y_627_; uint8_t v___x_655_; uint8_t v___x_656_; 
v___x_655_ = 2;
v___x_656_ = l_Lean_instBEqMessageSeverity_beq(v_severity_523_, v___x_655_);
if (v___x_656_ == 0)
{
goto v___jp_644_;
}
else
{
uint8_t v___x_657_; 
lean_inc_ref(v_msgData_522_);
v___x_657_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_522_);
if (v___x_657_ == 0)
{
goto v___jp_644_;
}
else
{
lean_object* v___x_658_; lean_object* v___x_659_; 
lean_dec_ref(v_msgData_522_);
v___x_658_ = lean_box(0);
v___x_659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_659_, 0, v___x_658_);
return v___x_659_;
}
}
v___jp_528_:
{
lean_object* v___x_537_; 
v___x_537_ = l_Lean_Elab_Command_getScope___redArg(v___y_536_);
if (lean_obj_tag(v___x_537_) == 0)
{
lean_object* v_a_538_; lean_object* v_currNamespace_539_; lean_object* v___x_540_; 
v_a_538_ = lean_ctor_get(v___x_537_, 0);
lean_inc(v_a_538_);
lean_dec_ref_known(v___x_537_, 1);
v_currNamespace_539_ = lean_ctor_get(v_a_538_, 2);
lean_inc(v_currNamespace_539_);
lean_dec(v_a_538_);
v___x_540_ = l_Lean_Elab_Command_getScope___redArg(v___y_536_);
if (lean_obj_tag(v___x_540_) == 0)
{
lean_object* v_a_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_576_; 
v_a_541_ = lean_ctor_get(v___x_540_, 0);
v_isSharedCheck_576_ = !lean_is_exclusive(v___x_540_);
if (v_isSharedCheck_576_ == 0)
{
v___x_543_ = v___x_540_;
v_isShared_544_ = v_isSharedCheck_576_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_a_541_);
lean_dec(v___x_540_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_576_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v_openDecls_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v_env_550_; lean_object* v_messages_551_; lean_object* v_scopes_552_; lean_object* v_usedQuotCtxts_553_; lean_object* v_nextMacroScope_554_; lean_object* v_maxRecDepth_555_; lean_object* v_ngen_556_; lean_object* v_auxDeclNGen_557_; lean_object* v_infoState_558_; lean_object* v_traceState_559_; lean_object* v_snapshotTasks_560_; lean_object* v_prevLinterStates_561_; lean_object* v_codeQualityEntryTasks_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_575_; 
v_openDecls_545_ = lean_ctor_get(v_a_541_, 3);
lean_inc(v_openDecls_545_);
lean_dec(v_a_541_);
v___x_546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_546_, 0, v_currNamespace_539_);
lean_ctor_set(v___x_546_, 1, v_openDecls_545_);
v___x_547_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_547_, 0, v___x_546_);
lean_ctor_set(v___x_547_, 1, v___y_535_);
lean_inc_ref(v___y_530_);
lean_inc_ref(v___y_529_);
v___x_548_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_548_, 0, v___y_529_);
lean_ctor_set(v___x_548_, 1, v___y_533_);
lean_ctor_set(v___x_548_, 2, v___y_531_);
lean_ctor_set(v___x_548_, 3, v___y_530_);
lean_ctor_set(v___x_548_, 4, v___x_547_);
lean_ctor_set_uint8(v___x_548_, sizeof(void*)*5, v___y_534_);
lean_ctor_set_uint8(v___x_548_, sizeof(void*)*5 + 1, v___y_532_);
lean_ctor_set_uint8(v___x_548_, sizeof(void*)*5 + 2, v_isSilent_524_);
v___x_549_ = lean_st_ref_take(v___y_536_);
v_env_550_ = lean_ctor_get(v___x_549_, 0);
v_messages_551_ = lean_ctor_get(v___x_549_, 1);
v_scopes_552_ = lean_ctor_get(v___x_549_, 2);
v_usedQuotCtxts_553_ = lean_ctor_get(v___x_549_, 3);
v_nextMacroScope_554_ = lean_ctor_get(v___x_549_, 4);
v_maxRecDepth_555_ = lean_ctor_get(v___x_549_, 5);
v_ngen_556_ = lean_ctor_get(v___x_549_, 6);
v_auxDeclNGen_557_ = lean_ctor_get(v___x_549_, 7);
v_infoState_558_ = lean_ctor_get(v___x_549_, 8);
v_traceState_559_ = lean_ctor_get(v___x_549_, 9);
v_snapshotTasks_560_ = lean_ctor_get(v___x_549_, 10);
v_prevLinterStates_561_ = lean_ctor_get(v___x_549_, 11);
v_codeQualityEntryTasks_562_ = lean_ctor_get(v___x_549_, 12);
v_isSharedCheck_575_ = !lean_is_exclusive(v___x_549_);
if (v_isSharedCheck_575_ == 0)
{
v___x_564_ = v___x_549_;
v_isShared_565_ = v_isSharedCheck_575_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_codeQualityEntryTasks_562_);
lean_inc(v_prevLinterStates_561_);
lean_inc(v_snapshotTasks_560_);
lean_inc(v_traceState_559_);
lean_inc(v_infoState_558_);
lean_inc(v_auxDeclNGen_557_);
lean_inc(v_ngen_556_);
lean_inc(v_maxRecDepth_555_);
lean_inc(v_nextMacroScope_554_);
lean_inc(v_usedQuotCtxts_553_);
lean_inc(v_scopes_552_);
lean_inc(v_messages_551_);
lean_inc(v_env_550_);
lean_dec(v___x_549_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_575_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_569_; 
v___x_566_ = lean_box(0);
v___x_567_ = l_Lean_MessageLog_add(v___x_548_, v_messages_551_);
if (v_isShared_565_ == 0)
{
lean_ctor_set(v___x_564_, 1, v___x_567_);
v___x_569_ = v___x_564_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v_env_550_);
lean_ctor_set(v_reuseFailAlloc_574_, 1, v___x_567_);
lean_ctor_set(v_reuseFailAlloc_574_, 2, v_scopes_552_);
lean_ctor_set(v_reuseFailAlloc_574_, 3, v_usedQuotCtxts_553_);
lean_ctor_set(v_reuseFailAlloc_574_, 4, v_nextMacroScope_554_);
lean_ctor_set(v_reuseFailAlloc_574_, 5, v_maxRecDepth_555_);
lean_ctor_set(v_reuseFailAlloc_574_, 6, v_ngen_556_);
lean_ctor_set(v_reuseFailAlloc_574_, 7, v_auxDeclNGen_557_);
lean_ctor_set(v_reuseFailAlloc_574_, 8, v_infoState_558_);
lean_ctor_set(v_reuseFailAlloc_574_, 9, v_traceState_559_);
lean_ctor_set(v_reuseFailAlloc_574_, 10, v_snapshotTasks_560_);
lean_ctor_set(v_reuseFailAlloc_574_, 11, v_prevLinterStates_561_);
lean_ctor_set(v_reuseFailAlloc_574_, 12, v_codeQualityEntryTasks_562_);
v___x_569_ = v_reuseFailAlloc_574_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
lean_object* v___x_570_; lean_object* v___x_572_; 
v___x_570_ = lean_st_ref_put(v___y_536_, v___x_569_);
if (v_isShared_544_ == 0)
{
lean_ctor_set(v___x_543_, 0, v___x_566_);
v___x_572_ = v___x_543_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v___x_566_);
v___x_572_ = v_reuseFailAlloc_573_;
goto v_reusejp_571_;
}
v_reusejp_571_:
{
return v___x_572_;
}
}
}
}
}
else
{
lean_object* v_a_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_584_; 
lean_dec(v_currNamespace_539_);
lean_dec_ref(v___y_535_);
lean_dec_ref(v___y_533_);
lean_dec(v___y_531_);
v_a_577_ = lean_ctor_get(v___x_540_, 0);
v_isSharedCheck_584_ = !lean_is_exclusive(v___x_540_);
if (v_isSharedCheck_584_ == 0)
{
v___x_579_ = v___x_540_;
v_isShared_580_ = v_isSharedCheck_584_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_a_577_);
lean_dec(v___x_540_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_584_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_582_; 
if (v_isShared_580_ == 0)
{
v___x_582_ = v___x_579_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v_a_577_);
v___x_582_ = v_reuseFailAlloc_583_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
return v___x_582_;
}
}
}
}
else
{
lean_object* v_a_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_592_; 
lean_dec_ref(v___y_535_);
lean_dec_ref(v___y_533_);
lean_dec(v___y_531_);
v_a_585_ = lean_ctor_get(v___x_537_, 0);
v_isSharedCheck_592_ = !lean_is_exclusive(v___x_537_);
if (v_isSharedCheck_592_ == 0)
{
v___x_587_ = v___x_537_;
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_a_585_);
lean_dec(v___x_537_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_590_; 
if (v_isShared_588_ == 0)
{
v___x_590_ = v___x_587_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v_a_585_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
}
}
v___jp_593_:
{
lean_object* v_fileName_599_; lean_object* v_fileMap_600_; uint8_t v_suppressElabErrors_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v_a_604_; lean_object* v___x_606_; uint8_t v_isShared_607_; uint8_t v_isSharedCheck_617_; 
v_fileName_599_ = lean_ctor_get(v___y_525_, 0);
v_fileMap_600_ = lean_ctor_get(v___y_525_, 1);
v_suppressElabErrors_601_ = lean_ctor_get_uint8(v___y_525_, sizeof(void*)*10);
v___x_602_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_522_);
v___x_603_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg(v___x_602_, v___y_526_);
v_a_604_ = lean_ctor_get(v___x_603_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_603_);
if (v_isSharedCheck_617_ == 0)
{
v___x_606_ = v___x_603_;
v_isShared_607_ = v_isSharedCheck_617_;
goto v_resetjp_605_;
}
else
{
lean_inc(v_a_604_);
lean_dec(v___x_603_);
v___x_606_ = lean_box(0);
v_isShared_607_ = v_isSharedCheck_617_;
goto v_resetjp_605_;
}
v_resetjp_605_:
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
lean_inc_ref_n(v_fileMap_600_, 2);
v___x_608_ = l_Lean_FileMap_toPosition(v_fileMap_600_, v___y_597_);
lean_dec(v___y_597_);
v___x_609_ = l_Lean_FileMap_toPosition(v_fileMap_600_, v___y_598_);
lean_dec(v___y_598_);
v___x_610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_610_, 0, v___x_609_);
v___x_611_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8___closed__0));
if (v_suppressElabErrors_601_ == 0)
{
lean_del_object(v___x_606_);
v___y_529_ = v_fileName_599_;
v___y_530_ = v___x_611_;
v___y_531_ = v___x_610_;
v___y_532_ = v___y_595_;
v___y_533_ = v___x_608_;
v___y_534_ = v___y_596_;
v___y_535_ = v_a_604_;
v___y_536_ = v___y_526_;
goto v___jp_528_;
}
else
{
uint8_t v___x_612_; 
lean_inc(v_a_604_);
lean_inc_ref(v___y_594_);
v___x_612_ = l_Lean_MessageData_hasTag(v___y_594_, v_a_604_);
if (v___x_612_ == 0)
{
lean_object* v___x_613_; lean_object* v___x_615_; 
lean_dec_ref_known(v___x_610_, 1);
lean_dec_ref(v___x_608_);
lean_dec(v_a_604_);
v___x_613_ = lean_box(0);
if (v_isShared_607_ == 0)
{
lean_ctor_set(v___x_606_, 0, v___x_613_);
v___x_615_ = v___x_606_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v___x_613_);
v___x_615_ = v_reuseFailAlloc_616_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
return v___x_615_;
}
}
else
{
lean_del_object(v___x_606_);
v___y_529_ = v_fileName_599_;
v___y_530_ = v___x_611_;
v___y_531_ = v___x_610_;
v___y_532_ = v___y_595_;
v___y_533_ = v___x_608_;
v___y_534_ = v___y_596_;
v___y_535_ = v_a_604_;
v___y_536_ = v___y_526_;
goto v___jp_528_;
}
}
}
}
v___jp_618_:
{
lean_object* v___x_624_; 
v___x_624_ = l_Lean_Syntax_getTailPos_x3f(v___y_619_, v___y_621_);
lean_dec(v___y_619_);
if (lean_obj_tag(v___x_624_) == 0)
{
lean_inc(v___y_623_);
v___y_594_ = v___y_620_;
v___y_595_ = v___y_622_;
v___y_596_ = v___y_621_;
v___y_597_ = v___y_623_;
v___y_598_ = v___y_623_;
goto v___jp_593_;
}
else
{
lean_object* v_val_625_; 
v_val_625_ = lean_ctor_get(v___x_624_, 0);
lean_inc(v_val_625_);
lean_dec_ref_known(v___x_624_, 1);
v___y_594_ = v___y_620_;
v___y_595_ = v___y_622_;
v___y_596_ = v___y_621_;
v___y_597_ = v___y_623_;
v___y_598_ = v_val_625_;
goto v___jp_593_;
}
}
v___jp_626_:
{
lean_object* v___x_628_; 
v___x_628_ = l_Lean_Elab_Command_getRef___redArg(v___y_525_);
if (lean_obj_tag(v___x_628_) == 0)
{
lean_object* v_a_629_; lean_object* v_ref_630_; uint8_t v___x_631_; lean_object* v___f_632_; lean_object* v___x_633_; 
v_a_629_ = lean_ctor_get(v___x_628_, 0);
lean_inc(v_a_629_);
lean_dec_ref_known(v___x_628_, 1);
v_ref_630_ = l_Lean_replaceRef(v_ref_521_, v_a_629_);
lean_dec(v_a_629_);
v___x_631_ = 0;
v___f_632_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8___closed__1));
v___x_633_ = l_Lean_Syntax_getPos_x3f(v_ref_630_, v___x_631_);
if (lean_obj_tag(v___x_633_) == 0)
{
lean_object* v___x_634_; 
v___x_634_ = lean_unsigned_to_nat(0u);
v___y_619_ = v_ref_630_;
v___y_620_ = v___f_632_;
v___y_621_ = v___x_631_;
v___y_622_ = v___y_627_;
v___y_623_ = v___x_634_;
goto v___jp_618_;
}
else
{
lean_object* v_val_635_; 
v_val_635_ = lean_ctor_get(v___x_633_, 0);
lean_inc(v_val_635_);
lean_dec_ref_known(v___x_633_, 1);
v___y_619_ = v_ref_630_;
v___y_620_ = v___f_632_;
v___y_621_ = v___x_631_;
v___y_622_ = v___y_627_;
v___y_623_ = v_val_635_;
goto v___jp_618_;
}
}
else
{
lean_object* v_a_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_643_; 
lean_dec_ref(v_msgData_522_);
v_a_636_ = lean_ctor_get(v___x_628_, 0);
v_isSharedCheck_643_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_643_ == 0)
{
v___x_638_ = v___x_628_;
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_a_636_);
lean_dec(v___x_628_);
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
v_reuseFailAlloc_642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_a_636_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
return v___x_641_;
}
}
}
}
v___jp_644_:
{
lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v_scopes_647_; lean_object* v___x_648_; lean_object* v_opts_649_; uint8_t v___x_650_; uint8_t v___x_651_; 
v___x_645_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_646_ = lean_st_ref_get(v___y_526_);
v_scopes_647_ = lean_ctor_get(v___x_646_, 2);
lean_inc(v_scopes_647_);
lean_dec(v___x_646_);
v___x_648_ = l_List_head_x21___redArg(v___x_645_, v_scopes_647_);
lean_dec(v_scopes_647_);
v_opts_649_ = lean_ctor_get(v___x_648_, 1);
lean_inc_ref(v_opts_649_);
lean_dec(v___x_648_);
v___x_650_ = 1;
v___x_651_ = l_Lean_instBEqMessageSeverity_beq(v_severity_523_, v___x_650_);
if (v___x_651_ == 0)
{
lean_dec_ref(v_opts_649_);
v___y_627_ = v_severity_523_;
goto v___jp_626_;
}
else
{
lean_object* v___x_652_; uint8_t v___x_653_; 
v___x_652_ = l_Lean_warningAsError;
v___x_653_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__15(v_opts_649_, v___x_652_);
lean_dec_ref(v_opts_649_);
if (v___x_653_ == 0)
{
v___y_627_ = v_severity_523_;
goto v___jp_626_;
}
else
{
uint8_t v___x_654_; 
v___x_654_ = 2;
v___y_627_ = v___x_654_;
goto v___jp_626_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8___boxed(lean_object* v_ref_660_, lean_object* v_msgData_661_, lean_object* v_severity_662_, lean_object* v_isSilent_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_){
_start:
{
uint8_t v_severity_boxed_667_; uint8_t v_isSilent_boxed_668_; lean_object* v_res_669_; 
v_severity_boxed_667_ = lean_unbox(v_severity_662_);
v_isSilent_boxed_668_ = lean_unbox(v_isSilent_663_);
v_res_669_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8(v_ref_660_, v_msgData_661_, v_severity_boxed_667_, v_isSilent_boxed_668_, v___y_664_, v___y_665_);
lean_dec(v___y_665_);
lean_dec_ref(v___y_664_);
lean_dec(v_ref_660_);
return v_res_669_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6(lean_object* v_ref_670_, lean_object* v_msgData_671_, lean_object* v___y_672_, lean_object* v___y_673_){
_start:
{
uint8_t v___x_675_; uint8_t v___x_676_; lean_object* v___x_677_; 
v___x_675_ = 1;
v___x_676_ = 0;
v___x_677_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8(v_ref_670_, v_msgData_671_, v___x_675_, v___x_676_, v___y_672_, v___y_673_);
return v___x_677_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6___boxed(lean_object* v_ref_678_, lean_object* v_msgData_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6(v_ref_678_, v_msgData_679_, v___y_680_, v___y_681_);
lean_dec(v___y_681_);
lean_dec_ref(v___y_680_);
lean_dec(v_ref_678_);
return v_res_683_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4___closed__1(void){
_start:
{
lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_685_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4___closed__0));
v___x_686_ = l_Lean_stringToMessageData(v___x_685_);
return v___x_686_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4___closed__3(void){
_start:
{
lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_688_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4___closed__2));
v___x_689_ = l_Lean_stringToMessageData(v___x_688_);
return v___x_689_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4(lean_object* v_linterOption_690_, lean_object* v_stx_691_, lean_object* v_msg_692_, lean_object* v___y_693_, lean_object* v___y_694_){
_start:
{
lean_object* v_name_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_714_; 
v_name_696_ = lean_ctor_get(v_linterOption_690_, 0);
v_isSharedCheck_714_ = !lean_is_exclusive(v_linterOption_690_);
if (v_isSharedCheck_714_ == 0)
{
lean_object* v_unused_715_; 
v_unused_715_ = lean_ctor_get(v_linterOption_690_, 1);
lean_dec(v_unused_715_);
v___x_698_ = v_linterOption_690_;
v_isShared_699_ = v_isSharedCheck_714_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_name_696_);
lean_dec(v_linterOption_690_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_714_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_703_; 
v___x_700_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4___closed__1, &l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4___closed__1_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4___closed__1);
lean_inc(v_name_696_);
v___x_701_ = l_Lean_MessageData_ofName(v_name_696_);
if (v_isShared_699_ == 0)
{
lean_ctor_set_tag(v___x_698_, 7);
lean_ctor_set(v___x_698_, 1, v___x_701_);
lean_ctor_set(v___x_698_, 0, v___x_700_);
v___x_703_ = v___x_698_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v___x_700_);
lean_ctor_set(v_reuseFailAlloc_713_, 1, v___x_701_);
v___x_703_ = v_reuseFailAlloc_713_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v_disable_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_704_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4___closed__3, &l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4___closed__3_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4___closed__3);
v___x_705_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_705_, 0, v___x_703_);
lean_ctor_set(v___x_705_, 1, v___x_704_);
v_disable_706_ = l_Lean_MessageData_note(v___x_705_);
v___x_707_ = l_Lean_Linter_linterMessageTag;
v___x_708_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_708_, 0, v_msg_692_);
lean_ctor_set(v___x_708_, 1, v_disable_706_);
v___x_709_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_709_, 0, v___x_707_);
lean_ctor_set(v___x_709_, 1, v___x_708_);
v___x_710_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_710_, 0, v_name_696_);
lean_ctor_set(v___x_710_, 1, v___x_709_);
lean_inc(v_stx_691_);
v___x_711_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_711_, 0, v_stx_691_);
lean_ctor_set(v___x_711_, 1, v___x_710_);
v___x_712_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6(v_stx_691_, v___x_711_, v___y_693_, v___y_694_);
lean_dec(v_stx_691_);
return v___x_712_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4___boxed(lean_object* v_linterOption_716_, lean_object* v_stx_717_, lean_object* v_msg_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_){
_start:
{
lean_object* v_res_722_; 
v_res_722_ = l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4(v_linterOption_716_, v_stx_717_, v_msg_718_, v___y_719_, v___y_720_);
lean_dec(v___y_720_);
lean_dec_ref(v___y_719_);
return v_res_722_;
}
}
LEAN_EXPORT lean_object* l_List_countP_go___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__2(lean_object* v_comp_723_, lean_object* v_a_724_, lean_object* v_a_725_){
_start:
{
if (lean_obj_tag(v_a_724_) == 0)
{
return v_a_725_;
}
else
{
lean_object* v_head_726_; lean_object* v_tail_727_; uint8_t v___x_728_; 
v_head_726_ = lean_ctor_get(v_a_724_, 0);
v_tail_727_ = lean_ctor_get(v_a_724_, 1);
v___x_728_ = lean_name_eq(v_head_726_, v_comp_723_);
if (v___x_728_ == 0)
{
v_a_724_ = v_tail_727_;
goto _start;
}
else
{
lean_object* v___x_730_; lean_object* v___x_731_; 
v___x_730_ = lean_unsigned_to_nat(1u);
v___x_731_ = lean_nat_add(v_a_725_, v___x_730_);
lean_dec(v_a_725_);
v_a_724_ = v_tail_727_;
v_a_725_ = v___x_731_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_countP_go___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__2___boxed(lean_object* v_comp_733_, lean_object* v_a_734_, lean_object* v_a_735_){
_start:
{
lean_object* v_res_736_; 
v_res_736_ = l_List_countP_go___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__2(v_comp_733_, v_a_734_, v_a_735_);
lean_dec(v_a_734_);
lean_dec(v_comp_733_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__7(lean_object* v___x_737_, lean_object* v_a_738_, lean_object* v_a_739_){
_start:
{
if (lean_obj_tag(v_a_738_) == 0)
{
lean_object* v___x_740_; 
v___x_740_ = l_List_reverse___redArg(v_a_739_);
return v___x_740_;
}
else
{
lean_object* v_head_741_; lean_object* v_tail_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_755_; 
v_head_741_ = lean_ctor_get(v_a_738_, 0);
v_tail_742_ = lean_ctor_get(v_a_738_, 1);
v_isSharedCheck_755_ = !lean_is_exclusive(v_a_738_);
if (v_isSharedCheck_755_ == 0)
{
v___x_744_ = v_a_738_;
v_isShared_745_ = v_isSharedCheck_755_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_tail_742_);
lean_inc(v_head_741_);
lean_dec(v_a_738_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_755_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; uint8_t v___x_749_; 
v___x_746_ = lean_unsigned_to_nat(1u);
v___x_747_ = lean_unsigned_to_nat(0u);
v___x_748_ = l_List_countP_go___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__2(v_head_741_, v___x_737_, v___x_747_);
v___x_749_ = lean_nat_dec_lt(v___x_746_, v___x_748_);
lean_dec(v___x_748_);
if (v___x_749_ == 0)
{
lean_del_object(v___x_744_);
lean_dec(v_head_741_);
v_a_738_ = v_tail_742_;
goto _start;
}
else
{
lean_object* v___x_752_; 
if (v_isShared_745_ == 0)
{
lean_ctor_set(v___x_744_, 1, v_a_739_);
v___x_752_ = v___x_744_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v_head_741_);
lean_ctor_set(v_reuseFailAlloc_754_, 1, v_a_739_);
v___x_752_ = v_reuseFailAlloc_754_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
v_a_738_ = v_tail_742_;
v_a_739_ = v___x_752_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__7___boxed(lean_object* v___x_756_, lean_object* v_a_757_, lean_object* v_a_758_){
_start:
{
lean_object* v_res_759_; 
v_res_759_ = l_List_filterTR_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__7(v___x_756_, v_a_757_, v_a_758_);
lean_dec(v___x_756_);
return v_res_759_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__1(void){
_start:
{
lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_761_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__0));
v___x_762_ = l_Lean_stringToMessageData(v___x_761_);
return v___x_762_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__3(void){
_start:
{
lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_764_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__2));
v___x_765_ = l_Lean_stringToMessageData(v___x_764_);
return v___x_765_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__5(void){
_start:
{
lean_object* v___x_767_; lean_object* v___x_768_; 
v___x_767_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__4));
v___x_768_ = l_Lean_stringToMessageData(v___x_767_);
return v___x_768_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__7(void){
_start:
{
lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_770_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__6));
v___x_771_ = l_Lean_stringToMessageData(v___x_770_);
return v___x_771_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__9(void){
_start:
{
lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_773_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__8));
v___x_774_ = l_Lean_stringToMessageData(v___x_773_);
return v___x_774_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9(uint8_t v___x_777_, lean_object* v_as_778_, size_t v_sz_779_, size_t v_i_780_, lean_object* v_b_781_, lean_object* v___y_782_, lean_object* v___y_783_){
_start:
{
lean_object* v_a_786_; uint8_t v___x_790_; 
v___x_790_ = lean_usize_dec_lt(v_i_780_, v_sz_779_);
if (v___x_790_ == 0)
{
lean_object* v___x_791_; 
v___x_791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_791_, 0, v_b_781_);
return v___x_791_;
}
else
{
lean_object* v___x_792_; lean_object* v_a_793_; lean_object* v___x_794_; uint8_t v___x_795_; 
v___x_792_ = lean_box(0);
v_a_793_ = lean_array_uget_borrowed(v_as_778_, v_i_780_);
v___x_794_ = l_Lean_Syntax_getId(v_a_793_);
v___x_795_ = l_Lean_Name_hasMacroScopes(v___x_794_);
if (v___x_795_ == 0)
{
uint8_t v___x_796_; 
v___x_796_ = l_Lean_isPrivateName(v___x_794_);
if (v___x_796_ == 0)
{
lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
lean_inc(v___x_794_);
v___x_797_ = l_Lean_Name_components(v___x_794_);
v___x_798_ = ((lean_object*)(l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4_));
v___x_799_ = l_Lean_getBoolOption___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__3___redArg(v___x_798_, v___x_777_, v___y_783_);
if (lean_obj_tag(v___x_799_) == 0)
{
lean_object* v_a_800_; lean_object* v___y_802_; lean_object* v___y_837_; uint8_t v___x_841_; 
v_a_800_ = lean_ctor_get(v___x_799_, 0);
lean_inc(v_a_800_);
lean_dec_ref_known(v___x_799_, 1);
v___x_841_ = lean_unbox(v_a_800_);
lean_dec(v_a_800_);
if (v___x_841_ == 0)
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_842_ = lean_box(0);
lean_inc(v___x_797_);
v___x_843_ = l_List_filterTR_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__7(v___x_797_, v___x_797_, v___x_842_);
lean_dec(v___x_797_);
v___x_844_ = l_List_eraseDups___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__8(v___x_843_);
v___y_802_ = v___x_844_;
goto v___jp_801_;
}
else
{
if (lean_obj_tag(v___x_797_) == 0)
{
v___y_837_ = v___x_797_;
goto v___jp_836_;
}
else
{
lean_object* v_tail_845_; 
v_tail_845_ = lean_ctor_get(v___x_797_, 1);
lean_inc(v_tail_845_);
v___y_837_ = v_tail_845_;
goto v___jp_836_;
}
}
v___jp_801_:
{
if (lean_obj_tag(v___y_802_) == 0)
{
lean_dec(v___x_794_);
v_a_786_ = v___x_792_;
goto v___jp_785_;
}
else
{
lean_object* v_tail_803_; 
v_tail_803_ = lean_ctor_get(v___y_802_, 1);
if (lean_obj_tag(v_tail_803_) == 0)
{
lean_object* v_head_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_821_; 
v_head_804_ = lean_ctor_get(v___y_802_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___y_802_);
if (v_isSharedCheck_821_ == 0)
{
lean_object* v_unused_822_; 
v_unused_822_ = lean_ctor_get(v___y_802_, 1);
lean_dec(v_unused_822_);
v___x_806_ = v___y_802_;
v_isShared_807_ = v_isSharedCheck_821_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_head_804_);
lean_dec(v___y_802_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_821_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_812_; 
v___x_808_ = l_Lean_Linter_Extra_linter_extra_dupNamespace;
v___x_809_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__1);
v___x_810_ = l_Lean_MessageData_ofName(v_head_804_);
if (v_isShared_807_ == 0)
{
lean_ctor_set_tag(v___x_806_, 7);
lean_ctor_set(v___x_806_, 1, v___x_810_);
lean_ctor_set(v___x_806_, 0, v___x_809_);
v___x_812_ = v___x_806_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v___x_809_);
lean_ctor_set(v_reuseFailAlloc_820_, 1, v___x_810_);
v___x_812_ = v_reuseFailAlloc_820_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
v___x_813_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__3);
v___x_814_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_814_, 0, v___x_812_);
lean_ctor_set(v___x_814_, 1, v___x_813_);
v___x_815_ = l_Lean_MessageData_ofConstName(v___x_794_, v___x_777_);
v___x_816_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_816_, 0, v___x_814_);
lean_ctor_set(v___x_816_, 1, v___x_815_);
v___x_817_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__5);
v___x_818_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_818_, 0, v___x_816_);
lean_ctor_set(v___x_818_, 1, v___x_817_);
lean_inc(v_a_793_);
v___x_819_ = l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4(v___x_808_, v_a_793_, v___x_818_, v___y_782_, v___y_783_);
if (lean_obj_tag(v___x_819_) == 0)
{
lean_dec_ref_known(v___x_819_, 1);
v_a_786_ = v___x_792_;
goto v___jp_785_;
}
else
{
return v___x_819_;
}
}
}
}
else
{
lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_823_ = lean_box(0);
v___x_824_ = l_List_mapTR_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__5(v___y_802_, v___x_823_);
v___x_825_ = l_Lean_MessageData_andList(v___x_824_);
v___x_826_ = l_Lean_Linter_Extra_linter_extra_dupNamespace;
v___x_827_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__7);
v___x_828_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_828_, 0, v___x_827_);
lean_ctor_set(v___x_828_, 1, v___x_825_);
v___x_829_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__9);
v___x_830_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_830_, 0, v___x_828_);
lean_ctor_set(v___x_830_, 1, v___x_829_);
v___x_831_ = l_Lean_MessageData_ofConstName(v___x_794_, v___x_777_);
v___x_832_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_832_, 0, v___x_830_);
lean_ctor_set(v___x_832_, 1, v___x_831_);
v___x_833_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__5);
v___x_834_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_834_, 0, v___x_832_);
lean_ctor_set(v___x_834_, 1, v___x_833_);
lean_inc(v_a_793_);
v___x_835_ = l_Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4(v___x_826_, v_a_793_, v___x_834_, v___y_782_, v___y_783_);
if (lean_obj_tag(v___x_835_) == 0)
{
lean_dec_ref_known(v___x_835_, 1);
v_a_786_ = v___x_792_;
goto v___jp_785_;
}
else
{
return v___x_835_;
}
}
}
}
v___jp_836_:
{
lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_838_ = l_List_zipWith___at___00List_zip_spec__0(lean_box(0), lean_box(0), v___x_797_, v___y_837_);
v___x_839_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___closed__10));
v___x_840_ = l_List_filterMapTR_go___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__6(v___x_838_, v___x_839_);
v___y_802_ = v___x_840_;
goto v___jp_801_;
}
}
else
{
lean_object* v_a_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_853_; 
lean_dec(v___x_797_);
lean_dec(v___x_794_);
v_a_846_ = lean_ctor_get(v___x_799_, 0);
v_isSharedCheck_853_ = !lean_is_exclusive(v___x_799_);
if (v_isSharedCheck_853_ == 0)
{
v___x_848_ = v___x_799_;
v_isShared_849_ = v_isSharedCheck_853_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_a_846_);
lean_dec(v___x_799_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_853_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_851_; 
if (v_isShared_849_ == 0)
{
v___x_851_ = v___x_848_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v_a_846_);
v___x_851_ = v_reuseFailAlloc_852_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
return v___x_851_;
}
}
}
}
else
{
lean_dec(v___x_794_);
v_a_786_ = v___x_792_;
goto v___jp_785_;
}
}
else
{
lean_dec(v___x_794_);
v_a_786_ = v___x_792_;
goto v___jp_785_;
}
}
v___jp_785_:
{
size_t v___x_787_; size_t v___x_788_; 
v___x_787_ = ((size_t)1ULL);
v___x_788_ = lean_usize_add(v_i_780_, v___x_787_);
v_i_780_ = v___x_788_;
v_b_781_ = v_a_786_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9___boxed(lean_object* v___x_854_, lean_object* v_as_855_, lean_object* v_sz_856_, lean_object* v_i_857_, lean_object* v_b_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_){
_start:
{
uint8_t v___x_8884__boxed_862_; size_t v_sz_boxed_863_; size_t v_i_boxed_864_; lean_object* v_res_865_; 
v___x_8884__boxed_862_ = lean_unbox(v___x_854_);
v_sz_boxed_863_ = lean_unbox_usize(v_sz_856_);
lean_dec(v_sz_856_);
v_i_boxed_864_ = lean_unbox_usize(v_i_857_);
lean_dec(v_i_857_);
v_res_865_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9(v___x_8884__boxed_862_, v_as_855_, v_sz_boxed_863_, v_i_boxed_864_, v_b_858_, v___y_859_, v___y_860_);
lean_dec(v___y_860_);
lean_dec_ref(v___y_859_);
lean_dec_ref(v_as_855_);
return v_res_865_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__1_spec__2___redArg(lean_object* v___x_866_, lean_object* v_pos_867_, lean_object* v_init_868_, lean_object* v_x_869_){
_start:
{
if (lean_obj_tag(v_x_869_) == 0)
{
lean_object* v_k_871_; lean_object* v_v_872_; lean_object* v_l_873_; lean_object* v_r_874_; uint8_t v___x_875_; lean_object* v___x_876_; lean_object* v_a_877_; lean_object* v_range_878_; lean_object* v_a_879_; lean_object* v_selectionRange_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_899_; 
v_k_871_ = lean_ctor_get(v_x_869_, 1);
lean_inc(v_k_871_);
v_v_872_ = lean_ctor_get(v_x_869_, 2);
lean_inc(v_v_872_);
v_l_873_ = lean_ctor_get(v_x_869_, 3);
lean_inc(v_l_873_);
v_r_874_ = lean_ctor_get(v_x_869_, 4);
lean_inc(v_r_874_);
lean_dec_ref_known(v_x_869_, 5);
v___x_875_ = 0;
v___x_876_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__1_spec__2___redArg(v___x_866_, v_pos_867_, v_init_868_, v_l_873_);
v_a_877_ = lean_ctor_get(v___x_876_, 0);
lean_inc(v_a_877_);
lean_dec_ref(v___x_876_);
v_range_878_ = lean_ctor_get(v_v_872_, 0);
lean_inc_ref(v_range_878_);
v_a_879_ = lean_ctor_get(v_a_877_, 0);
lean_inc(v_a_879_);
lean_dec(v_a_877_);
v_selectionRange_880_ = lean_ctor_get(v_v_872_, 1);
v_isSharedCheck_899_ = !lean_is_exclusive(v_v_872_);
if (v_isSharedCheck_899_ == 0)
{
lean_object* v_unused_900_; 
v_unused_900_ = lean_ctor_get(v_v_872_, 0);
lean_dec(v_unused_900_);
v___x_882_ = v_v_872_;
v_isShared_883_ = v_isSharedCheck_899_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_selectionRange_880_);
lean_dec(v_v_872_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_899_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v_pos_884_; lean_object* v___x_885_; uint8_t v___x_886_; 
v_pos_884_ = lean_ctor_get(v_range_878_, 0);
lean_inc_ref(v_pos_884_);
lean_dec_ref(v_range_878_);
v___x_885_ = l_Lean_FileMap_ofPosition(v___x_866_, v_pos_884_);
v___x_886_ = lean_nat_dec_le(v_pos_867_, v___x_885_);
lean_dec(v___x_885_);
if (v___x_886_ == 0)
{
lean_del_object(v___x_882_);
lean_dec_ref(v_selectionRange_880_);
lean_dec(v_k_871_);
v_init_868_ = v_a_879_;
v_x_869_ = v_r_874_;
goto _start;
}
else
{
lean_object* v_pos_888_; lean_object* v_endPos_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_893_; 
v_pos_888_ = lean_ctor_get(v_selectionRange_880_, 0);
lean_inc_ref(v_pos_888_);
v_endPos_889_ = lean_ctor_get(v_selectionRange_880_, 2);
lean_inc_ref(v_endPos_889_);
lean_dec_ref(v_selectionRange_880_);
v___x_890_ = l_Lean_FileMap_ofPosition(v___x_866_, v_pos_888_);
v___x_891_ = l_Lean_FileMap_ofPosition(v___x_866_, v_endPos_889_);
if (v_isShared_883_ == 0)
{
lean_ctor_set(v___x_882_, 1, v___x_891_);
lean_ctor_set(v___x_882_, 0, v___x_890_);
v___x_893_ = v___x_882_;
goto v_reusejp_892_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v___x_890_);
lean_ctor_set(v_reuseFailAlloc_898_, 1, v___x_891_);
v___x_893_ = v_reuseFailAlloc_898_;
goto v_reusejp_892_;
}
v_reusejp_892_:
{
lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
v___x_894_ = l_Lean_Syntax_ofRange(v___x_893_, v___x_886_);
v___x_895_ = l_Lean_mkIdentFrom(v___x_894_, v_k_871_, v___x_875_);
lean_dec(v___x_894_);
v___x_896_ = lean_array_push(v_a_879_, v___x_895_);
v_init_868_ = v___x_896_;
v_x_869_ = v_r_874_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_901_; lean_object* v___x_902_; 
v___x_901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_901_, 0, v_init_868_);
v___x_902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_902_, 0, v___x_901_);
return v___x_902_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__1_spec__2___redArg___boxed(lean_object* v___x_903_, lean_object* v_pos_904_, lean_object* v_init_905_, lean_object* v_x_906_, lean_object* v___y_907_){
_start:
{
lean_object* v_res_908_; 
v_res_908_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__1_spec__2___redArg(v___x_903_, v_pos_904_, v_init_905_, v_x_906_);
lean_dec(v_pos_904_);
lean_dec_ref(v___x_903_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__1(lean_object* v_pos_909_, lean_object* v___y_910_, lean_object* v___y_911_){
_start:
{
lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v_env_915_; lean_object* v_fileMap_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; uint8_t v___x_920_; lean_object* v_drs_921_; lean_object* v_nms_922_; lean_object* v___x_923_; lean_object* v_a_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_932_; 
v___x_913_ = lean_box(1);
v___x_914_ = lean_st_ref_get(v___y_911_);
v_env_915_ = lean_ctor_get(v___x_914_, 0);
lean_inc_ref(v_env_915_);
lean_dec(v___x_914_);
v_fileMap_916_ = lean_ctor_get(v___y_910_, 1);
v___x_917_ = l_Lean_declRangeExt;
v___x_918_ = lean_box(1);
v___x_919_ = lean_box(0);
v___x_920_ = 0;
v_drs_921_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_913_, v___x_917_, v_env_915_, v___x_918_, v___x_919_, v___x_920_);
v_nms_922_ = ((lean_object*)(l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__3___closed__0));
v___x_923_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__1_spec__2___redArg(v_fileMap_916_, v_pos_909_, v_nms_922_, v_drs_921_);
v_a_924_ = lean_ctor_get(v___x_923_, 0);
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_923_);
if (v_isSharedCheck_932_ == 0)
{
v___x_926_ = v___x_923_;
v_isShared_927_ = v_isSharedCheck_932_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_dec(v___x_923_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_932_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v_a_928_; lean_object* v___x_930_; 
v_a_928_ = lean_ctor_get(v_a_924_, 0);
lean_inc(v_a_928_);
lean_dec(v_a_924_);
if (v_isShared_927_ == 0)
{
lean_ctor_set(v___x_926_, 0, v_a_928_);
v___x_930_ = v___x_926_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_a_928_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
return v___x_930_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__1___boxed(lean_object* v_pos_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_){
_start:
{
lean_object* v_res_937_; 
v_res_937_ = l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__1(v_pos_933_, v___y_934_, v___y_935_);
lean_dec(v___y_935_);
lean_dec_ref(v___y_934_);
lean_dec(v_pos_933_);
return v_res_937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__0_spec__0___redArg(lean_object* v_o_938_, lean_object* v___y_939_){
_start:
{
lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v_env_943_; lean_object* v___x_944_; lean_object* v_toEnvExtension_945_; lean_object* v_asyncMode_946_; lean_object* v___x_947_; uint8_t v___x_948_; lean_object* v___x_949_; lean_object* v_merged_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_958_; 
v___x_941_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_942_ = lean_st_ref_get(v___y_939_);
v_env_943_ = lean_ctor_get(v___x_942_, 0);
lean_inc_ref(v_env_943_);
lean_dec(v___x_942_);
v___x_944_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_945_ = lean_ctor_get(v___x_944_, 0);
v_asyncMode_946_ = lean_ctor_get(v_toEnvExtension_945_, 2);
v___x_947_ = lean_box(0);
v___x_948_ = 0;
v___x_949_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_941_, v___x_944_, v_env_943_, v_asyncMode_946_, v___x_947_, v___x_948_);
v_merged_950_ = lean_ctor_get(v___x_949_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v___x_949_);
if (v_isSharedCheck_958_ == 0)
{
lean_object* v_unused_959_; 
v_unused_959_ = lean_ctor_get(v___x_949_, 1);
lean_dec(v_unused_959_);
v___x_952_ = v___x_949_;
v_isShared_953_ = v_isSharedCheck_958_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_merged_950_);
lean_dec(v___x_949_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_958_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
lean_object* v___x_955_; 
if (v_isShared_953_ == 0)
{
lean_ctor_set(v___x_952_, 1, v_merged_950_);
lean_ctor_set(v___x_952_, 0, v_o_938_);
v___x_955_ = v___x_952_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v_o_938_);
lean_ctor_set(v_reuseFailAlloc_957_, 1, v_merged_950_);
v___x_955_ = v_reuseFailAlloc_957_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
lean_object* v___x_956_; 
v___x_956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_956_, 0, v___x_955_);
return v___x_956_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__0_spec__0___redArg___boxed(lean_object* v_o_960_, lean_object* v___y_961_, lean_object* v___y_962_){
_start:
{
lean_object* v_res_963_; 
v_res_963_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__0_spec__0___redArg(v_o_960_, v___y_961_);
lean_dec(v___y_961_);
return v_res_963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__0(lean_object* v___y_964_, lean_object* v___y_965_){
_start:
{
lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v_scopes_969_; lean_object* v___x_970_; lean_object* v_opts_971_; lean_object* v___x_972_; 
v___x_967_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_968_ = lean_st_ref_get(v___y_965_);
v_scopes_969_ = lean_ctor_get(v___x_968_, 2);
lean_inc(v_scopes_969_);
lean_dec(v___x_968_);
v___x_970_ = l_List_head_x21___redArg(v___x_967_, v_scopes_969_);
lean_dec(v_scopes_969_);
v_opts_971_ = lean_ctor_get(v___x_970_, 1);
lean_inc_ref(v_opts_971_);
lean_dec(v___x_970_);
v___x_972_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__0_spec__0___redArg(v_opts_971_, v___y_965_);
return v___x_972_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__0___boxed(lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__0(v___y_973_, v___y_974_);
lean_dec(v___y_974_);
lean_dec_ref(v___y_973_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___lam__1(lean_object* v___f_977_, lean_object* v_stx_978_, lean_object* v___y_979_, lean_object* v___y_980_){
_start:
{
lean_object* v___x_982_; lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_1042_; 
v___x_982_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__0(v___y_979_, v___y_980_);
v_a_983_ = lean_ctor_get(v___x_982_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v___x_982_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_985_ = v___x_982_;
v_isShared_986_ = v_isSharedCheck_1042_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_dec(v___x_982_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_1042_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_987_; uint8_t v___x_988_; lean_object* v___y_990_; lean_object* v___y_991_; lean_object* v___y_992_; lean_object* v___y_993_; lean_object* v_aliases_1018_; lean_object* v___y_1019_; lean_object* v___y_1020_; 
v___x_987_ = l_Lean_Linter_Extra_linter_extra_dupNamespace;
v___x_988_ = l_Lean_Linter_getLinterValue(v___x_987_, v_a_983_);
lean_dec(v_a_983_);
if (v___x_988_ == 0)
{
lean_object* v___x_1025_; lean_object* v___x_1027_; 
lean_dec(v_stx_978_);
lean_dec_ref(v___f_977_);
v___x_1025_ = lean_box(0);
if (v_isShared_986_ == 0)
{
lean_ctor_set(v___x_985_, 0, v___x_1025_);
v___x_1027_ = v___x_985_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v___x_1025_);
v___x_1027_ = v_reuseFailAlloc_1028_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
return v___x_1027_;
}
}
else
{
lean_object* v___x_1029_; 
lean_del_object(v___x_985_);
lean_inc(v_stx_978_);
v___x_1029_ = l_Lean_Syntax_find_x3f(v_stx_978_, v___f_977_);
if (lean_obj_tag(v___x_1029_) == 1)
{
lean_object* v_val_1030_; lean_object* v___x_1031_; 
v_val_1030_ = lean_ctor_get(v___x_1029_, 0);
lean_inc(v_val_1030_);
lean_dec_ref_known(v___x_1029_, 1);
v___x_1031_ = l_Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__10(v_val_1030_, v___y_979_, v___y_980_);
if (lean_obj_tag(v___x_1031_) == 0)
{
lean_object* v_a_1032_; 
v_a_1032_ = lean_ctor_get(v___x_1031_, 0);
lean_inc(v_a_1032_);
lean_dec_ref_known(v___x_1031_, 1);
v_aliases_1018_ = v_a_1032_;
v___y_1019_ = v___y_979_;
v___y_1020_ = v___y_980_;
goto v___jp_1017_;
}
else
{
lean_object* v_a_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1040_; 
lean_dec(v_stx_978_);
v_a_1033_ = lean_ctor_get(v___x_1031_, 0);
v_isSharedCheck_1040_ = !lean_is_exclusive(v___x_1031_);
if (v_isSharedCheck_1040_ == 0)
{
v___x_1035_ = v___x_1031_;
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_a_1033_);
lean_dec(v___x_1031_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1038_; 
if (v_isShared_1036_ == 0)
{
v___x_1038_ = v___x_1035_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v_a_1033_);
v___x_1038_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
return v___x_1038_;
}
}
}
}
else
{
lean_object* v___x_1041_; 
lean_dec(v___x_1029_);
v___x_1041_ = ((lean_object*)(l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___redArg___lam__3___closed__0));
v_aliases_1018_ = v___x_1041_;
v___y_1019_ = v___y_979_;
v___y_1020_ = v___y_980_;
goto v___jp_1017_;
}
}
v___jp_989_:
{
lean_object* v___x_994_; 
v___x_994_ = l_Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__1(v___y_993_, v___y_991_, v___y_990_);
lean_dec(v___y_993_);
if (lean_obj_tag(v___x_994_) == 0)
{
lean_object* v_a_995_; lean_object* v___x_996_; lean_object* v___x_997_; size_t v_sz_998_; size_t v___x_999_; lean_object* v___x_1000_; 
v_a_995_ = lean_ctor_get(v___x_994_, 0);
lean_inc(v_a_995_);
lean_dec_ref_known(v___x_994_, 1);
v___x_996_ = l_Array_append___redArg(v_a_995_, v___y_992_);
lean_dec_ref(v___y_992_);
v___x_997_ = lean_box(0);
v_sz_998_ = lean_array_size(v___x_996_);
v___x_999_ = ((size_t)0ULL);
v___x_1000_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__9(v___x_988_, v___x_996_, v_sz_998_, v___x_999_, v___x_997_, v___y_991_, v___y_990_);
lean_dec_ref(v___x_996_);
if (lean_obj_tag(v___x_1000_) == 0)
{
lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1007_; 
v_isSharedCheck_1007_ = !lean_is_exclusive(v___x_1000_);
if (v_isSharedCheck_1007_ == 0)
{
lean_object* v_unused_1008_; 
v_unused_1008_ = lean_ctor_get(v___x_1000_, 0);
lean_dec(v_unused_1008_);
v___x_1002_ = v___x_1000_;
v_isShared_1003_ = v_isSharedCheck_1007_;
goto v_resetjp_1001_;
}
else
{
lean_dec(v___x_1000_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1007_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v___x_1005_; 
if (v_isShared_1003_ == 0)
{
lean_ctor_set(v___x_1002_, 0, v___x_997_);
v___x_1005_ = v___x_1002_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v___x_997_);
v___x_1005_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
return v___x_1005_;
}
}
}
else
{
return v___x_1000_;
}
}
else
{
lean_object* v_a_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1016_; 
lean_dec_ref(v___y_992_);
v_a_1009_ = lean_ctor_get(v___x_994_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1011_ = v___x_994_;
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_a_1009_);
lean_dec(v___x_994_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1014_; 
if (v_isShared_1012_ == 0)
{
v___x_1014_ = v___x_1011_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v_a_1009_);
v___x_1014_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
return v___x_1014_;
}
}
}
}
v___jp_1017_:
{
uint8_t v___x_1021_; lean_object* v___x_1022_; 
v___x_1021_ = 0;
v___x_1022_ = l_Lean_Syntax_getPos_x3f(v_stx_978_, v___x_1021_);
lean_dec(v_stx_978_);
if (lean_obj_tag(v___x_1022_) == 0)
{
lean_object* v___x_1023_; 
v___x_1023_ = lean_unsigned_to_nat(0u);
v___y_990_ = v___y_1020_;
v___y_991_ = v___y_1019_;
v___y_992_ = v_aliases_1018_;
v___y_993_ = v___x_1023_;
goto v___jp_989_;
}
else
{
lean_object* v_val_1024_; 
v_val_1024_ = lean_ctor_get(v___x_1022_, 0);
lean_inc(v_val_1024_);
lean_dec_ref_known(v___x_1022_, 1);
v___y_990_ = v___y_1020_;
v___y_991_ = v___y_1019_;
v___y_992_ = v_aliases_1018_;
v___y_993_ = v_val_1024_;
goto v___jp_989_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___lam__1___boxed(lean_object* v___f_1043_, lean_object* v_stx_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_){
_start:
{
lean_object* v_res_1048_; 
v_res_1048_ = l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace___lam__1(v___f_1043_, v_stx_1044_, v___y_1045_, v___y_1046_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
return v_res_1048_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__0_spec__0(lean_object* v_o_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_){
_start:
{
lean_object* v___x_1069_; 
v___x_1069_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__0_spec__0___redArg(v_o_1065_, v___y_1067_);
return v___x_1069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__0_spec__0___boxed(lean_object* v_o_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_){
_start:
{
lean_object* v_res_1074_; 
v_res_1074_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__0_spec__0(v_o_1070_, v___y_1071_, v___y_1072_);
lean_dec(v___y_1072_);
lean_dec_ref(v___y_1071_);
return v_res_1074_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__1_spec__2(lean_object* v___x_1075_, lean_object* v_pos_1076_, lean_object* v_init_1077_, lean_object* v_x_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_){
_start:
{
lean_object* v___x_1082_; 
v___x_1082_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__1_spec__2___redArg(v___x_1075_, v_pos_1076_, v_init_1077_, v_x_1078_);
return v___x_1082_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__1_spec__2___boxed(lean_object* v___x_1083_, lean_object* v_pos_1084_, lean_object* v_init_1085_, lean_object* v_x_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_){
_start:
{
lean_object* v_res_1090_; 
v_res_1090_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Linter_Extra_DupNamespaceLinter_getNamesFrom___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__1_spec__2(v___x_1083_, v_pos_1084_, v_init_1085_, v_x_1086_, v___y_1087_, v___y_1088_);
lean_dec(v___y_1088_);
lean_dec_ref(v___y_1087_);
lean_dec(v_pos_1084_);
lean_dec_ref(v___x_1083_);
return v_res_1090_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__10_spec__13(uint8_t v___x_1091_, lean_object* v___x_1092_, lean_object* v_as_1093_, size_t v_sz_1094_, size_t v_i_1095_, lean_object* v_b_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_){
_start:
{
lean_object* v___x_1100_; 
v___x_1100_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__10_spec__13___redArg(v___x_1091_, v___x_1092_, v_as_1093_, v_sz_1094_, v_i_1095_, v_b_1096_);
return v___x_1100_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__10_spec__13___boxed(lean_object* v___x_1101_, lean_object* v___x_1102_, lean_object* v_as_1103_, lean_object* v_sz_1104_, lean_object* v_i_1105_, lean_object* v_b_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_){
_start:
{
uint8_t v___x_9433__boxed_1110_; size_t v_sz_boxed_1111_; size_t v_i_boxed_1112_; lean_object* v_res_1113_; 
v___x_9433__boxed_1110_ = lean_unbox(v___x_1101_);
v_sz_boxed_1111_ = lean_unbox_usize(v_sz_1104_);
lean_dec(v_sz_1104_);
v_i_boxed_1112_ = lean_unbox_usize(v_i_1105_);
lean_dec(v_i_1105_);
v_res_1113_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_DupNamespaceLinter_getAliasSyntax___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__10_spec__13(v___x_9433__boxed_1110_, v___x_1102_, v_as_1103_, v_sz_boxed_1111_, v_i_boxed_1112_, v_b_1106_, v___y_1107_, v___y_1108_);
lean_dec(v___y_1108_);
lean_dec_ref(v___y_1107_);
lean_dec_ref(v_as_1103_);
return v_res_1113_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14(lean_object* v_msgData_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_){
_start:
{
lean_object* v___x_1118_; 
v___x_1118_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___redArg(v_msgData_1114_, v___y_1116_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14___boxed(lean_object* v_msgData_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_){
_start:
{
lean_object* v_res_1123_; 
v_res_1123_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__4_spec__6_spec__8_spec__14(v_msgData_1119_, v___y_1120_, v___y_1121_);
lean_dec(v___y_1121_);
lean_dec_ref(v___y_1120_);
return v_res_1123_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_DupNamespace_528843787____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; 
v___x_1125_ = ((lean_object*)(l_Lean_Linter_Extra_DupNamespaceLinter_dupNamespace));
v___x_1126_ = l_Lean_Elab_Command_addLinter(v___x_1125_);
return v___x_1126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_DupNamespace_528843787____hygCtx___hyg_2____boxed(lean_object* v_a_1127_){
_start:
{
lean_object* v_res_1128_; 
v_res_1128_ = l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_DupNamespace_528843787____hygCtx___hyg_2_();
return v_res_1128_;
}
}
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Linter_Extra_DupNamespace(uint8_t builtin) {
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
res = l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_DupNamespace_2308209999____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_Extra_linter_extra_dupNamespace = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_Extra_linter_extra_dupNamespace);
lean_dec_ref(res);
res = l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_DupNamespace_8692490____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_Extra_linter_extra_dupNamespace_consecutiveOnly = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_Extra_linter_extra_dupNamespace_consecutiveOnly);
lean_dec_ref(res);
res = l___private_Lean_Linter_Extra_DupNamespace_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_DupNamespace_528843787____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Linter_Extra_DupNamespace(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lean_Linter_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Linter_Extra_DupNamespace(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Extra_DupNamespace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Linter_Extra_DupNamespace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Linter_Extra_DupNamespace(builtin);
}
#ifdef __cplusplus
}
#endif
