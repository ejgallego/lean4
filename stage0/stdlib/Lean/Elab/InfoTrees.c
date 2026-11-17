// Lean compiler output
// Module: Lean.Elab.InfoTrees
// Imports: public import Lean.Elab.Command
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Elab_InfoTree_format(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
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
size_t lean_usize_add(size_t, size_t);
lean_object* lean_io_error_to_string(lean_object*);
size_t lean_array_size(lean_object*);
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabCommand(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoState_substituteLazy(lean_object*);
lean_object* lean_task_get_own(lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3___lam__0___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__1_spec__1(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5_spec__9_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5_spec__9_spec__10___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5_spec__9_spec__10___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5_spec__9_spec__10(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5_spec__9_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5_spec__9(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5_spec__8(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__6_spec__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__6_spec__11___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__6_spec__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__6_spec__11(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__6_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "infoTreesCmd"};
static const lean_object* l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__1_value),LEAN_SCALAR_PTR_LITERAL(247, 96, 116, 19, 43, 63, 104, 107)}};
static const lean_object* l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "Info trees are disabled, can not use `#info_trees`."};
static const lean_object* l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__3_value)}};
static const lean_object* l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "InfoTrees"};
static const lean_object* l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__2_value;
static const lean_string_object l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "elabInfoTrees"};
static const lean_object* l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__4_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(145, 196, 130, 195, 127, 154, 35, 89)}};
static const lean_ctor_object l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__4_value_aux_3),((lean_object*)&l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(211, 70, 3, 71, 156, 165, 10, 229)}};
static const lean_object* l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_3_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
lean_ctor_set(v___x_3_, 1, v___x_1_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__0___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__0___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__0___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__0___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__0(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__0___redArg();
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__0___boxed(lean_object* v_00_u03b1_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__0(v_00_u03b1_14_, v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
return v_res_18_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__5(lean_object* v_opts_19_, lean_object* v_opt_20_){
_start:
{
lean_object* v_name_21_; lean_object* v_defValue_22_; lean_object* v_map_23_; lean_object* v___x_24_; 
v_name_21_ = lean_ctor_get(v_opt_20_, 0);
v_defValue_22_ = lean_ctor_get(v_opt_20_, 1);
v_map_23_ = lean_ctor_get(v_opts_19_, 0);
v___x_24_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_23_, v_name_21_);
if (lean_obj_tag(v___x_24_) == 0)
{
uint8_t v___x_25_; 
v___x_25_ = lean_unbox(v_defValue_22_);
return v___x_25_;
}
else
{
lean_object* v_val_26_; 
v_val_26_ = lean_ctor_get(v___x_24_, 0);
lean_inc(v_val_26_);
lean_dec_ref_known(v___x_24_, 1);
if (lean_obj_tag(v_val_26_) == 1)
{
uint8_t v_v_27_; 
v_v_27_ = lean_ctor_get_uint8(v_val_26_, 0);
lean_dec_ref_known(v_val_26_, 0);
return v_v_27_;
}
else
{
uint8_t v___x_28_; 
lean_dec(v_val_26_);
v___x_28_ = lean_unbox(v_defValue_22_);
return v___x_28_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__5___boxed(lean_object* v_opts_29_, lean_object* v_opt_30_){
_start:
{
uint8_t v_res_31_; lean_object* v_r_32_; 
v_res_31_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__5(v_opts_29_, v_opt_30_);
lean_dec_ref(v_opt_30_);
lean_dec_ref(v_opts_29_);
v_r_32_ = lean_box(v_res_31_);
return v_r_32_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_33_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_34_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__0);
v___x_35_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_35_, 0, v___x_34_);
return v___x_35_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_36_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__1);
v___x_37_ = lean_unsigned_to_nat(0u);
v___x_38_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
lean_ctor_set(v___x_38_, 1, v___x_37_);
lean_ctor_set(v___x_38_, 2, v___x_37_);
lean_ctor_set(v___x_38_, 3, v___x_37_);
lean_ctor_set(v___x_38_, 4, v___x_36_);
lean_ctor_set(v___x_38_, 5, v___x_36_);
lean_ctor_set(v___x_38_, 6, v___x_36_);
lean_ctor_set(v___x_38_, 7, v___x_36_);
lean_ctor_set(v___x_38_, 8, v___x_36_);
lean_ctor_set(v___x_38_, 9, v___x_36_);
lean_ctor_set(v___x_38_, 10, v___x_36_);
return v___x_38_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_39_ = lean_unsigned_to_nat(32u);
v___x_40_ = lean_mk_empty_array_with_capacity(v___x_39_);
v___x_41_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_41_, 0, v___x_40_);
return v___x_41_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__4(void){
_start:
{
size_t v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_42_ = ((size_t)5ULL);
v___x_43_ = lean_unsigned_to_nat(0u);
v___x_44_ = lean_unsigned_to_nat(32u);
v___x_45_ = lean_mk_empty_array_with_capacity(v___x_44_);
v___x_46_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__3);
v___x_47_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_47_, 0, v___x_46_);
lean_ctor_set(v___x_47_, 1, v___x_45_);
lean_ctor_set(v___x_47_, 2, v___x_43_);
lean_ctor_set(v___x_47_, 3, v___x_43_);
lean_ctor_set_usize(v___x_47_, 4, v___x_42_);
return v___x_47_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__5(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_48_ = lean_box(1);
v___x_49_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__4);
v___x_50_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__1);
v___x_51_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_51_, 0, v___x_50_);
lean_ctor_set(v___x_51_, 1, v___x_49_);
lean_ctor_set(v___x_51_, 2, v___x_48_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg(lean_object* v_msgData_52_, lean_object* v___y_53_){
_start:
{
lean_object* v___x_55_; lean_object* v_env_56_; uint8_t v___x_57_; lean_object* v_env_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v_scopes_61_; lean_object* v___x_62_; lean_object* v_opts_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_55_ = lean_st_ref_get(v___y_53_);
v_env_56_ = lean_ctor_get(v___x_55_, 0);
lean_inc_ref(v_env_56_);
lean_dec(v___x_55_);
v___x_57_ = 0;
v_env_58_ = l_Lean_Environment_setRecordingDeps(v_env_56_, v___x_57_);
v___x_59_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_60_ = lean_st_ref_get(v___y_53_);
v_scopes_61_ = lean_ctor_get(v___x_60_, 2);
lean_inc(v_scopes_61_);
lean_dec(v___x_60_);
v___x_62_ = l_List_head_x21___redArg(v___x_59_, v_scopes_61_);
lean_dec(v_scopes_61_);
v_opts_63_ = lean_ctor_get(v___x_62_, 1);
lean_inc_ref(v_opts_63_);
lean_dec(v___x_62_);
v___x_64_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__2);
v___x_65_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___closed__5);
v___x_66_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_66_, 0, v_env_58_);
lean_ctor_set(v___x_66_, 1, v___x_64_);
lean_ctor_set(v___x_66_, 2, v___x_65_);
lean_ctor_set(v___x_66_, 3, v_opts_63_);
v___x_67_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_67_, 0, v___x_66_);
lean_ctor_set(v___x_67_, 1, v_msgData_52_);
v___x_68_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_68_, 0, v___x_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_msgData_69_, lean_object* v___y_70_, lean_object* v___y_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg(v_msgData_69_, v___y_70_);
lean_dec(v___y_70_);
return v_res_72_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3___lam__0(uint8_t v___x_74_, lean_object* v_x_75_){
_start:
{
if (lean_obj_tag(v_x_75_) == 1)
{
lean_object* v_pre_76_; 
v_pre_76_ = lean_ctor_get(v_x_75_, 0);
if (lean_obj_tag(v_pre_76_) == 0)
{
lean_object* v_str_77_; lean_object* v___x_78_; uint8_t v___x_79_; 
v_str_77_ = lean_ctor_get(v_x_75_, 1);
v___x_78_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3___lam__0___closed__0));
v___x_79_ = lean_string_dec_eq(v_str_77_, v___x_78_);
return v___x_79_;
}
else
{
return v___x_74_;
}
}
else
{
return v___x_74_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3___lam__0___boxed(lean_object* v___x_80_, lean_object* v_x_81_){
_start:
{
uint8_t v___x_6609__boxed_82_; uint8_t v_res_83_; lean_object* v_r_84_; 
v___x_6609__boxed_82_ = lean_unbox(v___x_80_);
v_res_83_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3___lam__0(v___x_6609__boxed_82_, v_x_81_);
lean_dec(v_x_81_);
v_r_84_ = lean_box(v_res_83_);
return v_r_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3(lean_object* v_ref_89_, lean_object* v_msgData_90_, uint8_t v_severity_91_, uint8_t v_isSilent_92_, lean_object* v___y_93_, lean_object* v___y_94_){
_start:
{
lean_object* v___y_97_; lean_object* v___y_98_; lean_object* v___y_99_; uint8_t v___y_100_; uint8_t v___y_101_; lean_object* v___y_102_; lean_object* v___y_103_; lean_object* v___y_104_; lean_object* v___y_162_; lean_object* v___y_163_; uint8_t v___y_164_; uint8_t v___y_165_; lean_object* v___y_166_; lean_object* v___y_187_; uint8_t v___y_188_; lean_object* v___y_189_; uint8_t v___y_190_; lean_object* v___y_191_; uint8_t v___y_195_; uint8_t v___x_223_; uint8_t v___x_224_; 
v___x_223_ = 2;
v___x_224_ = l_Lean_instBEqMessageSeverity_beq(v_severity_91_, v___x_223_);
if (v___x_224_ == 0)
{
goto v___jp_212_;
}
else
{
uint8_t v___x_225_; 
lean_inc_ref(v_msgData_90_);
v___x_225_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_90_);
if (v___x_225_ == 0)
{
goto v___jp_212_;
}
else
{
lean_object* v___x_226_; lean_object* v___x_227_; 
lean_dec_ref(v_msgData_90_);
v___x_226_ = lean_box(0);
v___x_227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
return v___x_227_;
}
}
v___jp_96_:
{
lean_object* v___x_105_; 
v___x_105_ = l_Lean_Elab_Command_getScope___redArg(v___y_104_);
if (lean_obj_tag(v___x_105_) == 0)
{
lean_object* v_a_106_; lean_object* v_currNamespace_107_; lean_object* v___x_108_; 
v_a_106_ = lean_ctor_get(v___x_105_, 0);
lean_inc(v_a_106_);
lean_dec_ref_known(v___x_105_, 1);
v_currNamespace_107_ = lean_ctor_get(v_a_106_, 2);
lean_inc(v_currNamespace_107_);
lean_dec(v_a_106_);
v___x_108_ = l_Lean_Elab_Command_getScope___redArg(v___y_104_);
if (lean_obj_tag(v___x_108_) == 0)
{
lean_object* v_a_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_144_; 
v_a_109_ = lean_ctor_get(v___x_108_, 0);
v_isSharedCheck_144_ = !lean_is_exclusive(v___x_108_);
if (v_isSharedCheck_144_ == 0)
{
v___x_111_ = v___x_108_;
v_isShared_112_ = v_isSharedCheck_144_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_a_109_);
lean_dec(v___x_108_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_144_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v_openDecls_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v_env_118_; lean_object* v_messages_119_; lean_object* v_scopes_120_; lean_object* v_usedQuotCtxts_121_; lean_object* v_nextMacroScope_122_; lean_object* v_maxRecDepth_123_; lean_object* v_ngen_124_; lean_object* v_auxDeclNGen_125_; lean_object* v_infoState_126_; lean_object* v_traceState_127_; lean_object* v_snapshotTasks_128_; lean_object* v_prevLinterStates_129_; lean_object* v_codeQualityEntryTasks_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_143_; 
v_openDecls_113_ = lean_ctor_get(v_a_109_, 3);
lean_inc(v_openDecls_113_);
lean_dec(v_a_109_);
v___x_114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_114_, 0, v_currNamespace_107_);
lean_ctor_set(v___x_114_, 1, v_openDecls_113_);
v___x_115_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_115_, 0, v___x_114_);
lean_ctor_set(v___x_115_, 1, v___y_98_);
lean_inc_ref(v___y_99_);
lean_inc_ref(v___y_97_);
v___x_116_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_116_, 0, v___y_97_);
lean_ctor_set(v___x_116_, 1, v___y_103_);
lean_ctor_set(v___x_116_, 2, v___y_102_);
lean_ctor_set(v___x_116_, 3, v___y_99_);
lean_ctor_set(v___x_116_, 4, v___x_115_);
lean_ctor_set_uint8(v___x_116_, sizeof(void*)*5, v___y_101_);
lean_ctor_set_uint8(v___x_116_, sizeof(void*)*5 + 1, v___y_100_);
lean_ctor_set_uint8(v___x_116_, sizeof(void*)*5 + 2, v_isSilent_92_);
v___x_117_ = lean_st_ref_take(v___y_104_);
v_env_118_ = lean_ctor_get(v___x_117_, 0);
v_messages_119_ = lean_ctor_get(v___x_117_, 1);
v_scopes_120_ = lean_ctor_get(v___x_117_, 2);
v_usedQuotCtxts_121_ = lean_ctor_get(v___x_117_, 3);
v_nextMacroScope_122_ = lean_ctor_get(v___x_117_, 4);
v_maxRecDepth_123_ = lean_ctor_get(v___x_117_, 5);
v_ngen_124_ = lean_ctor_get(v___x_117_, 6);
v_auxDeclNGen_125_ = lean_ctor_get(v___x_117_, 7);
v_infoState_126_ = lean_ctor_get(v___x_117_, 8);
v_traceState_127_ = lean_ctor_get(v___x_117_, 9);
v_snapshotTasks_128_ = lean_ctor_get(v___x_117_, 10);
v_prevLinterStates_129_ = lean_ctor_get(v___x_117_, 11);
v_codeQualityEntryTasks_130_ = lean_ctor_get(v___x_117_, 12);
v_isSharedCheck_143_ = !lean_is_exclusive(v___x_117_);
if (v_isSharedCheck_143_ == 0)
{
v___x_132_ = v___x_117_;
v_isShared_133_ = v_isSharedCheck_143_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_codeQualityEntryTasks_130_);
lean_inc(v_prevLinterStates_129_);
lean_inc(v_snapshotTasks_128_);
lean_inc(v_traceState_127_);
lean_inc(v_infoState_126_);
lean_inc(v_auxDeclNGen_125_);
lean_inc(v_ngen_124_);
lean_inc(v_maxRecDepth_123_);
lean_inc(v_nextMacroScope_122_);
lean_inc(v_usedQuotCtxts_121_);
lean_inc(v_scopes_120_);
lean_inc(v_messages_119_);
lean_inc(v_env_118_);
lean_dec(v___x_117_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_143_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_137_; 
v___x_134_ = lean_box(0);
v___x_135_ = l_Lean_MessageLog_add(v___x_116_, v_messages_119_);
if (v_isShared_133_ == 0)
{
lean_ctor_set(v___x_132_, 1, v___x_135_);
v___x_137_ = v___x_132_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v_env_118_);
lean_ctor_set(v_reuseFailAlloc_142_, 1, v___x_135_);
lean_ctor_set(v_reuseFailAlloc_142_, 2, v_scopes_120_);
lean_ctor_set(v_reuseFailAlloc_142_, 3, v_usedQuotCtxts_121_);
lean_ctor_set(v_reuseFailAlloc_142_, 4, v_nextMacroScope_122_);
lean_ctor_set(v_reuseFailAlloc_142_, 5, v_maxRecDepth_123_);
lean_ctor_set(v_reuseFailAlloc_142_, 6, v_ngen_124_);
lean_ctor_set(v_reuseFailAlloc_142_, 7, v_auxDeclNGen_125_);
lean_ctor_set(v_reuseFailAlloc_142_, 8, v_infoState_126_);
lean_ctor_set(v_reuseFailAlloc_142_, 9, v_traceState_127_);
lean_ctor_set(v_reuseFailAlloc_142_, 10, v_snapshotTasks_128_);
lean_ctor_set(v_reuseFailAlloc_142_, 11, v_prevLinterStates_129_);
lean_ctor_set(v_reuseFailAlloc_142_, 12, v_codeQualityEntryTasks_130_);
v___x_137_ = v_reuseFailAlloc_142_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
lean_object* v___x_138_; lean_object* v___x_140_; 
v___x_138_ = lean_st_ref_put(v___y_104_, v___x_137_);
if (v_isShared_112_ == 0)
{
lean_ctor_set(v___x_111_, 0, v___x_134_);
v___x_140_ = v___x_111_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v___x_134_);
v___x_140_ = v_reuseFailAlloc_141_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
return v___x_140_;
}
}
}
}
}
else
{
lean_object* v_a_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_152_; 
lean_dec(v_currNamespace_107_);
lean_dec_ref(v___y_103_);
lean_dec(v___y_102_);
lean_dec_ref(v___y_98_);
v_a_145_ = lean_ctor_get(v___x_108_, 0);
v_isSharedCheck_152_ = !lean_is_exclusive(v___x_108_);
if (v_isSharedCheck_152_ == 0)
{
v___x_147_ = v___x_108_;
v_isShared_148_ = v_isSharedCheck_152_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_a_145_);
lean_dec(v___x_108_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_152_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
lean_object* v___x_150_; 
if (v_isShared_148_ == 0)
{
v___x_150_ = v___x_147_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v_a_145_);
v___x_150_ = v_reuseFailAlloc_151_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
return v___x_150_;
}
}
}
}
else
{
lean_object* v_a_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_160_; 
lean_dec_ref(v___y_103_);
lean_dec(v___y_102_);
lean_dec_ref(v___y_98_);
v_a_153_ = lean_ctor_get(v___x_105_, 0);
v_isSharedCheck_160_ = !lean_is_exclusive(v___x_105_);
if (v_isSharedCheck_160_ == 0)
{
v___x_155_ = v___x_105_;
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_a_153_);
lean_dec(v___x_105_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
lean_object* v___x_158_; 
if (v_isShared_156_ == 0)
{
v___x_158_ = v___x_155_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v_a_153_);
v___x_158_ = v_reuseFailAlloc_159_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
return v___x_158_;
}
}
}
}
v___jp_161_:
{
lean_object* v_fileName_167_; lean_object* v_fileMap_168_; uint8_t v_suppressElabErrors_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v_a_172_; lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_185_; 
v_fileName_167_ = lean_ctor_get(v___y_93_, 0);
v_fileMap_168_ = lean_ctor_get(v___y_93_, 1);
v_suppressElabErrors_169_ = lean_ctor_get_uint8(v___y_93_, sizeof(void*)*10);
v___x_170_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_90_);
v___x_171_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg(v___x_170_, v___y_94_);
v_a_172_ = lean_ctor_get(v___x_171_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_171_);
if (v_isSharedCheck_185_ == 0)
{
v___x_174_ = v___x_171_;
v_isShared_175_ = v_isSharedCheck_185_;
goto v_resetjp_173_;
}
else
{
lean_inc(v_a_172_);
lean_dec(v___x_171_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_185_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
lean_inc_ref_n(v_fileMap_168_, 2);
v___x_176_ = l_Lean_FileMap_toPosition(v_fileMap_168_, v___y_163_);
lean_dec(v___y_163_);
v___x_177_ = l_Lean_FileMap_toPosition(v_fileMap_168_, v___y_166_);
lean_dec(v___y_166_);
v___x_178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
v___x_179_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3___closed__0));
if (v_suppressElabErrors_169_ == 0)
{
lean_del_object(v___x_174_);
v___y_97_ = v_fileName_167_;
v___y_98_ = v_a_172_;
v___y_99_ = v___x_179_;
v___y_100_ = v___y_164_;
v___y_101_ = v___y_165_;
v___y_102_ = v___x_178_;
v___y_103_ = v___x_176_;
v___y_104_ = v___y_94_;
goto v___jp_96_;
}
else
{
uint8_t v___x_180_; 
lean_inc(v_a_172_);
lean_inc_ref(v___y_162_);
v___x_180_ = l_Lean_MessageData_hasTag(v___y_162_, v_a_172_);
if (v___x_180_ == 0)
{
lean_object* v___x_181_; lean_object* v___x_183_; 
lean_dec_ref_known(v___x_178_, 1);
lean_dec_ref(v___x_176_);
lean_dec(v_a_172_);
v___x_181_ = lean_box(0);
if (v_isShared_175_ == 0)
{
lean_ctor_set(v___x_174_, 0, v___x_181_);
v___x_183_ = v___x_174_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v___x_181_);
v___x_183_ = v_reuseFailAlloc_184_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
return v___x_183_;
}
}
else
{
lean_del_object(v___x_174_);
v___y_97_ = v_fileName_167_;
v___y_98_ = v_a_172_;
v___y_99_ = v___x_179_;
v___y_100_ = v___y_164_;
v___y_101_ = v___y_165_;
v___y_102_ = v___x_178_;
v___y_103_ = v___x_176_;
v___y_104_ = v___y_94_;
goto v___jp_96_;
}
}
}
}
v___jp_186_:
{
lean_object* v___x_192_; 
v___x_192_ = l_Lean_Syntax_getTailPos_x3f(v___y_187_, v___y_188_);
lean_dec(v___y_187_);
if (lean_obj_tag(v___x_192_) == 0)
{
lean_inc(v___y_191_);
v___y_162_ = v___y_189_;
v___y_163_ = v___y_191_;
v___y_164_ = v___y_190_;
v___y_165_ = v___y_188_;
v___y_166_ = v___y_191_;
goto v___jp_161_;
}
else
{
lean_object* v_val_193_; 
v_val_193_ = lean_ctor_get(v___x_192_, 0);
lean_inc(v_val_193_);
lean_dec_ref_known(v___x_192_, 1);
v___y_162_ = v___y_189_;
v___y_163_ = v___y_191_;
v___y_164_ = v___y_190_;
v___y_165_ = v___y_188_;
v___y_166_ = v_val_193_;
goto v___jp_161_;
}
}
v___jp_194_:
{
lean_object* v___x_196_; 
v___x_196_ = l_Lean_Elab_Command_getRef___redArg(v___y_93_);
if (lean_obj_tag(v___x_196_) == 0)
{
lean_object* v_a_197_; lean_object* v_ref_198_; uint8_t v___x_199_; lean_object* v___f_200_; lean_object* v___x_201_; 
v_a_197_ = lean_ctor_get(v___x_196_, 0);
lean_inc(v_a_197_);
lean_dec_ref_known(v___x_196_, 1);
v_ref_198_ = l_Lean_replaceRef(v_ref_89_, v_a_197_);
lean_dec(v_a_197_);
v___x_199_ = 0;
v___f_200_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3___closed__1));
v___x_201_ = l_Lean_Syntax_getPos_x3f(v_ref_198_, v___x_199_);
if (lean_obj_tag(v___x_201_) == 0)
{
lean_object* v___x_202_; 
v___x_202_ = lean_unsigned_to_nat(0u);
v___y_187_ = v_ref_198_;
v___y_188_ = v___x_199_;
v___y_189_ = v___f_200_;
v___y_190_ = v___y_195_;
v___y_191_ = v___x_202_;
goto v___jp_186_;
}
else
{
lean_object* v_val_203_; 
v_val_203_ = lean_ctor_get(v___x_201_, 0);
lean_inc(v_val_203_);
lean_dec_ref_known(v___x_201_, 1);
v___y_187_ = v_ref_198_;
v___y_188_ = v___x_199_;
v___y_189_ = v___f_200_;
v___y_190_ = v___y_195_;
v___y_191_ = v_val_203_;
goto v___jp_186_;
}
}
else
{
lean_object* v_a_204_; lean_object* v___x_206_; uint8_t v_isShared_207_; uint8_t v_isSharedCheck_211_; 
lean_dec_ref(v_msgData_90_);
v_a_204_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_211_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_211_ == 0)
{
v___x_206_ = v___x_196_;
v_isShared_207_ = v_isSharedCheck_211_;
goto v_resetjp_205_;
}
else
{
lean_inc(v_a_204_);
lean_dec(v___x_196_);
v___x_206_ = lean_box(0);
v_isShared_207_ = v_isSharedCheck_211_;
goto v_resetjp_205_;
}
v_resetjp_205_:
{
lean_object* v___x_209_; 
if (v_isShared_207_ == 0)
{
v___x_209_ = v___x_206_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v_a_204_);
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
v___jp_212_:
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v_scopes_215_; lean_object* v___x_216_; lean_object* v_opts_217_; uint8_t v___x_218_; uint8_t v___x_219_; 
v___x_213_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_214_ = lean_st_ref_get(v___y_94_);
v_scopes_215_ = lean_ctor_get(v___x_214_, 2);
lean_inc(v_scopes_215_);
lean_dec(v___x_214_);
v___x_216_ = l_List_head_x21___redArg(v___x_213_, v_scopes_215_);
lean_dec(v_scopes_215_);
v_opts_217_ = lean_ctor_get(v___x_216_, 1);
lean_inc_ref(v_opts_217_);
lean_dec(v___x_216_);
v___x_218_ = 1;
v___x_219_ = l_Lean_instBEqMessageSeverity_beq(v_severity_91_, v___x_218_);
if (v___x_219_ == 0)
{
lean_dec_ref(v_opts_217_);
v___y_195_ = v_severity_91_;
goto v___jp_194_;
}
else
{
lean_object* v___x_220_; uint8_t v___x_221_; 
v___x_220_ = l_Lean_warningAsError;
v___x_221_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__5(v_opts_217_, v___x_220_);
lean_dec_ref(v_opts_217_);
if (v___x_221_ == 0)
{
v___y_195_ = v_severity_91_;
goto v___jp_194_;
}
else
{
uint8_t v___x_222_; 
v___x_222_ = 2;
v___y_195_ = v___x_222_;
goto v___jp_194_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3___boxed(lean_object* v_ref_228_, lean_object* v_msgData_229_, lean_object* v_severity_230_, lean_object* v_isSilent_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_){
_start:
{
uint8_t v_severity_boxed_235_; uint8_t v_isSilent_boxed_236_; lean_object* v_res_237_; 
v_severity_boxed_235_ = lean_unbox(v_severity_230_);
v_isSilent_boxed_236_ = lean_unbox(v_isSilent_231_);
v_res_237_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3(v_ref_228_, v_msgData_229_, v_severity_boxed_235_, v_isSilent_boxed_236_, v___y_232_, v___y_233_);
lean_dec(v___y_233_);
lean_dec_ref(v___y_232_);
lean_dec(v_ref_228_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__1_spec__1(lean_object* v_msgData_238_, uint8_t v_severity_239_, uint8_t v_isSilent_240_, lean_object* v___y_241_, lean_object* v___y_242_){
_start:
{
lean_object* v___x_244_; 
v___x_244_ = l_Lean_Elab_Command_getRef___redArg(v___y_241_);
if (lean_obj_tag(v___x_244_) == 0)
{
lean_object* v_a_245_; lean_object* v___x_246_; 
v_a_245_ = lean_ctor_get(v___x_244_, 0);
lean_inc(v_a_245_);
lean_dec_ref_known(v___x_244_, 1);
v___x_246_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3(v_a_245_, v_msgData_238_, v_severity_239_, v_isSilent_240_, v___y_241_, v___y_242_);
lean_dec(v_a_245_);
return v___x_246_;
}
else
{
lean_object* v_a_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_254_; 
lean_dec_ref(v_msgData_238_);
v_a_247_ = lean_ctor_get(v___x_244_, 0);
v_isSharedCheck_254_ = !lean_is_exclusive(v___x_244_);
if (v_isSharedCheck_254_ == 0)
{
v___x_249_ = v___x_244_;
v_isShared_250_ = v_isSharedCheck_254_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_a_247_);
lean_dec(v___x_244_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_254_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
lean_object* v___x_252_; 
if (v_isShared_250_ == 0)
{
v___x_252_ = v___x_249_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v_a_247_);
v___x_252_ = v_reuseFailAlloc_253_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
return v___x_252_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__1_spec__1___boxed(lean_object* v_msgData_255_, lean_object* v_severity_256_, lean_object* v_isSilent_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_){
_start:
{
uint8_t v_severity_boxed_261_; uint8_t v_isSilent_boxed_262_; lean_object* v_res_263_; 
v_severity_boxed_261_ = lean_unbox(v_severity_256_);
v_isSilent_boxed_262_ = lean_unbox(v_isSilent_257_);
v_res_263_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__1_spec__1(v_msgData_255_, v_severity_boxed_261_, v_isSilent_boxed_262_, v___y_258_, v___y_259_);
lean_dec(v___y_259_);
lean_dec_ref(v___y_258_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__1(lean_object* v_msgData_264_, lean_object* v___y_265_, lean_object* v___y_266_){
_start:
{
uint8_t v___x_268_; uint8_t v___x_269_; lean_object* v___x_270_; 
v___x_268_ = 2;
v___x_269_ = 0;
v___x_270_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__1_spec__1(v_msgData_264_, v___x_268_, v___x_269_, v___y_265_, v___y_266_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__1___boxed(lean_object* v_msgData_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = l_Lean_logError___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__1(v_msgData_271_, v___y_272_, v___y_273_);
lean_dec(v___y_273_);
lean_dec_ref(v___y_272_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2(lean_object* v_ref_276_, lean_object* v_msgData_277_, lean_object* v___y_278_, lean_object* v___y_279_){
_start:
{
uint8_t v___x_281_; uint8_t v___x_282_; lean_object* v___x_283_; 
v___x_281_ = 0;
v___x_282_ = 0;
v___x_283_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3(v_ref_276_, v_msgData_277_, v___x_281_, v___x_282_, v___y_278_, v___y_279_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2___boxed(lean_object* v_ref_284_, lean_object* v_msgData_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l_Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2(v_ref_284_, v_msgData_285_, v___y_286_, v___y_287_);
lean_dec(v___y_287_);
lean_dec_ref(v___y_286_);
lean_dec(v_ref_284_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5_spec__9_spec__10(lean_object* v_tk_293_, lean_object* v_as_294_, size_t v_sz_295_, size_t v_i_296_, lean_object* v_b_297_, lean_object* v___y_298_, lean_object* v___y_299_){
_start:
{
uint8_t v___x_301_; 
v___x_301_ = lean_usize_dec_lt(v_i_296_, v_sz_295_);
if (v___x_301_ == 0)
{
lean_object* v___x_302_; 
v___x_302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_302_, 0, v_b_297_);
return v___x_302_;
}
else
{
lean_object* v___x_303_; lean_object* v_a_304_; lean_object* v___x_305_; 
lean_dec_ref(v_b_297_);
v___x_303_ = lean_box(0);
v_a_304_ = lean_array_uget_borrowed(v_as_294_, v_i_296_);
lean_inc(v_a_304_);
v___x_305_ = l_Lean_Elab_InfoTree_format(v_a_304_, v___x_303_);
if (lean_obj_tag(v___x_305_) == 0)
{
lean_object* v_a_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v_a_306_ = lean_ctor_get(v___x_305_, 0);
lean_inc(v_a_306_);
lean_dec_ref_known(v___x_305_, 1);
v___x_307_ = l_Lean_MessageData_ofFormat(v_a_306_);
v___x_308_ = l_Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2(v_tk_293_, v___x_307_, v___y_298_, v___y_299_);
if (lean_obj_tag(v___x_308_) == 0)
{
lean_object* v___x_309_; size_t v___x_310_; size_t v___x_311_; 
lean_dec_ref_known(v___x_308_, 1);
v___x_309_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5_spec__9_spec__10___closed__0));
v___x_310_ = ((size_t)1ULL);
v___x_311_ = lean_usize_add(v_i_296_, v___x_310_);
v_i_296_ = v___x_311_;
v_b_297_ = v___x_309_;
goto _start;
}
else
{
lean_object* v_a_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_320_; 
v_a_313_ = lean_ctor_get(v___x_308_, 0);
v_isSharedCheck_320_ = !lean_is_exclusive(v___x_308_);
if (v_isSharedCheck_320_ == 0)
{
v___x_315_ = v___x_308_;
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_a_313_);
lean_dec(v___x_308_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_318_; 
if (v_isShared_316_ == 0)
{
v___x_318_ = v___x_315_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v_a_313_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
}
}
else
{
lean_object* v_a_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_333_; 
v_a_321_ = lean_ctor_get(v___x_305_, 0);
v_isSharedCheck_333_ = !lean_is_exclusive(v___x_305_);
if (v_isSharedCheck_333_ == 0)
{
v___x_323_ = v___x_305_;
v_isShared_324_ = v_isSharedCheck_333_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_a_321_);
lean_dec(v___x_305_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_333_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v_ref_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_331_; 
v_ref_325_ = lean_ctor_get(v___y_298_, 7);
v___x_326_ = lean_io_error_to_string(v_a_321_);
v___x_327_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_327_, 0, v___x_326_);
v___x_328_ = l_Lean_MessageData_ofFormat(v___x_327_);
lean_inc(v_ref_325_);
v___x_329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_329_, 0, v_ref_325_);
lean_ctor_set(v___x_329_, 1, v___x_328_);
if (v_isShared_324_ == 0)
{
lean_ctor_set(v___x_323_, 0, v___x_329_);
v___x_331_ = v___x_323_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v___x_329_);
v___x_331_ = v_reuseFailAlloc_332_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
return v___x_331_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5_spec__9_spec__10___boxed(lean_object* v_tk_334_, lean_object* v_as_335_, lean_object* v_sz_336_, lean_object* v_i_337_, lean_object* v_b_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_){
_start:
{
size_t v_sz_boxed_342_; size_t v_i_boxed_343_; lean_object* v_res_344_; 
v_sz_boxed_342_ = lean_unbox_usize(v_sz_336_);
lean_dec(v_sz_336_);
v_i_boxed_343_ = lean_unbox_usize(v_i_337_);
lean_dec(v_i_337_);
v_res_344_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5_spec__9_spec__10(v_tk_334_, v_as_335_, v_sz_boxed_342_, v_i_boxed_343_, v_b_338_, v___y_339_, v___y_340_);
lean_dec(v___y_340_);
lean_dec_ref(v___y_339_);
lean_dec_ref(v_as_335_);
lean_dec(v_tk_334_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5_spec__9(lean_object* v_tk_345_, lean_object* v_as_346_, size_t v_sz_347_, size_t v_i_348_, lean_object* v_b_349_, lean_object* v___y_350_, lean_object* v___y_351_){
_start:
{
uint8_t v___x_353_; 
v___x_353_ = lean_usize_dec_lt(v_i_348_, v_sz_347_);
if (v___x_353_ == 0)
{
lean_object* v___x_354_; 
v___x_354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_354_, 0, v_b_349_);
return v___x_354_;
}
else
{
lean_object* v___x_355_; lean_object* v_a_356_; lean_object* v___x_357_; 
lean_dec_ref(v_b_349_);
v___x_355_ = lean_box(0);
v_a_356_ = lean_array_uget_borrowed(v_as_346_, v_i_348_);
lean_inc(v_a_356_);
v___x_357_ = l_Lean_Elab_InfoTree_format(v_a_356_, v___x_355_);
if (lean_obj_tag(v___x_357_) == 0)
{
lean_object* v_a_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
v_a_358_ = lean_ctor_get(v___x_357_, 0);
lean_inc(v_a_358_);
lean_dec_ref_known(v___x_357_, 1);
v___x_359_ = l_Lean_MessageData_ofFormat(v_a_358_);
v___x_360_ = l_Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2(v_tk_345_, v___x_359_, v___y_350_, v___y_351_);
if (lean_obj_tag(v___x_360_) == 0)
{
lean_object* v___x_361_; size_t v___x_362_; size_t v___x_363_; lean_object* v___x_364_; 
lean_dec_ref_known(v___x_360_, 1);
v___x_361_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5_spec__9_spec__10___closed__0));
v___x_362_ = ((size_t)1ULL);
v___x_363_ = lean_usize_add(v_i_348_, v___x_362_);
v___x_364_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5_spec__9_spec__10(v_tk_345_, v_as_346_, v_sz_347_, v___x_363_, v___x_361_, v___y_350_, v___y_351_);
return v___x_364_;
}
else
{
lean_object* v_a_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_372_; 
v_a_365_ = lean_ctor_get(v___x_360_, 0);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_360_);
if (v_isSharedCheck_372_ == 0)
{
v___x_367_ = v___x_360_;
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_a_365_);
lean_dec(v___x_360_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_370_; 
if (v_isShared_368_ == 0)
{
v___x_370_ = v___x_367_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v_a_365_);
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
else
{
lean_object* v_a_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_385_; 
v_a_373_ = lean_ctor_get(v___x_357_, 0);
v_isSharedCheck_385_ = !lean_is_exclusive(v___x_357_);
if (v_isSharedCheck_385_ == 0)
{
v___x_375_ = v___x_357_;
v_isShared_376_ = v_isSharedCheck_385_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_a_373_);
lean_dec(v___x_357_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_385_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v_ref_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_383_; 
v_ref_377_ = lean_ctor_get(v___y_350_, 7);
v___x_378_ = lean_io_error_to_string(v_a_373_);
v___x_379_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_379_, 0, v___x_378_);
v___x_380_ = l_Lean_MessageData_ofFormat(v___x_379_);
lean_inc(v_ref_377_);
v___x_381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_381_, 0, v_ref_377_);
lean_ctor_set(v___x_381_, 1, v___x_380_);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 0, v___x_381_);
v___x_383_ = v___x_375_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v___x_381_);
v___x_383_ = v_reuseFailAlloc_384_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
return v___x_383_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5_spec__9___boxed(lean_object* v_tk_386_, lean_object* v_as_387_, lean_object* v_sz_388_, lean_object* v_i_389_, lean_object* v_b_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_){
_start:
{
size_t v_sz_boxed_394_; size_t v_i_boxed_395_; lean_object* v_res_396_; 
v_sz_boxed_394_ = lean_unbox_usize(v_sz_388_);
lean_dec(v_sz_388_);
v_i_boxed_395_ = lean_unbox_usize(v_i_389_);
lean_dec(v_i_389_);
v_res_396_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5_spec__9(v_tk_386_, v_as_387_, v_sz_boxed_394_, v_i_boxed_395_, v_b_390_, v___y_391_, v___y_392_);
lean_dec(v___y_392_);
lean_dec_ref(v___y_391_);
lean_dec_ref(v_as_387_);
lean_dec(v_tk_386_);
return v_res_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5(lean_object* v_init_397_, lean_object* v_tk_398_, lean_object* v_n_399_, lean_object* v_b_400_, lean_object* v___y_401_, lean_object* v___y_402_){
_start:
{
if (lean_obj_tag(v_n_399_) == 0)
{
lean_object* v_cs_404_; lean_object* v___x_405_; lean_object* v___x_406_; size_t v_sz_407_; size_t v___x_408_; lean_object* v___x_409_; 
v_cs_404_ = lean_ctor_get(v_n_399_, 0);
v___x_405_ = lean_box(0);
v___x_406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
lean_ctor_set(v___x_406_, 1, v_b_400_);
v_sz_407_ = lean_array_size(v_cs_404_);
v___x_408_ = ((size_t)0ULL);
v___x_409_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5_spec__8(v_init_397_, v_tk_398_, v_cs_404_, v_sz_407_, v___x_408_, v___x_406_, v___y_401_, v___y_402_);
if (lean_obj_tag(v___x_409_) == 0)
{
lean_object* v_a_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_424_; 
v_a_410_ = lean_ctor_get(v___x_409_, 0);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_409_);
if (v_isSharedCheck_424_ == 0)
{
v___x_412_ = v___x_409_;
v_isShared_413_ = v_isSharedCheck_424_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_a_410_);
lean_dec(v___x_409_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_424_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v_fst_414_; 
v_fst_414_ = lean_ctor_get(v_a_410_, 0);
if (lean_obj_tag(v_fst_414_) == 0)
{
lean_object* v_snd_415_; lean_object* v___x_416_; lean_object* v___x_418_; 
v_snd_415_ = lean_ctor_get(v_a_410_, 1);
lean_inc(v_snd_415_);
lean_dec(v_a_410_);
v___x_416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_416_, 0, v_snd_415_);
if (v_isShared_413_ == 0)
{
lean_ctor_set(v___x_412_, 0, v___x_416_);
v___x_418_ = v___x_412_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v___x_416_);
v___x_418_ = v_reuseFailAlloc_419_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
return v___x_418_;
}
}
else
{
lean_object* v_val_420_; lean_object* v___x_422_; 
lean_inc_ref(v_fst_414_);
lean_dec(v_a_410_);
v_val_420_ = lean_ctor_get(v_fst_414_, 0);
lean_inc(v_val_420_);
lean_dec_ref_known(v_fst_414_, 1);
if (v_isShared_413_ == 0)
{
lean_ctor_set(v___x_412_, 0, v_val_420_);
v___x_422_ = v___x_412_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_val_420_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
}
}
else
{
lean_object* v_a_425_; lean_object* v___x_427_; uint8_t v_isShared_428_; uint8_t v_isSharedCheck_432_; 
v_a_425_ = lean_ctor_get(v___x_409_, 0);
v_isSharedCheck_432_ = !lean_is_exclusive(v___x_409_);
if (v_isSharedCheck_432_ == 0)
{
v___x_427_ = v___x_409_;
v_isShared_428_ = v_isSharedCheck_432_;
goto v_resetjp_426_;
}
else
{
lean_inc(v_a_425_);
lean_dec(v___x_409_);
v___x_427_ = lean_box(0);
v_isShared_428_ = v_isSharedCheck_432_;
goto v_resetjp_426_;
}
v_resetjp_426_:
{
lean_object* v___x_430_; 
if (v_isShared_428_ == 0)
{
v___x_430_ = v___x_427_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v_a_425_);
v___x_430_ = v_reuseFailAlloc_431_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
return v___x_430_;
}
}
}
}
else
{
lean_object* v_vs_433_; lean_object* v___x_434_; lean_object* v___x_435_; size_t v_sz_436_; size_t v___x_437_; lean_object* v___x_438_; 
v_vs_433_ = lean_ctor_get(v_n_399_, 0);
v___x_434_ = lean_box(0);
v___x_435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_435_, 0, v___x_434_);
lean_ctor_set(v___x_435_, 1, v_b_400_);
v_sz_436_ = lean_array_size(v_vs_433_);
v___x_437_ = ((size_t)0ULL);
v___x_438_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5_spec__9(v_tk_398_, v_vs_433_, v_sz_436_, v___x_437_, v___x_435_, v___y_401_, v___y_402_);
if (lean_obj_tag(v___x_438_) == 0)
{
lean_object* v_a_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_453_; 
v_a_439_ = lean_ctor_get(v___x_438_, 0);
v_isSharedCheck_453_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_453_ == 0)
{
v___x_441_ = v___x_438_;
v_isShared_442_ = v_isSharedCheck_453_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_a_439_);
lean_dec(v___x_438_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_453_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v_fst_443_; 
v_fst_443_ = lean_ctor_get(v_a_439_, 0);
if (lean_obj_tag(v_fst_443_) == 0)
{
lean_object* v_snd_444_; lean_object* v___x_445_; lean_object* v___x_447_; 
v_snd_444_ = lean_ctor_get(v_a_439_, 1);
lean_inc(v_snd_444_);
lean_dec(v_a_439_);
v___x_445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_445_, 0, v_snd_444_);
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 0, v___x_445_);
v___x_447_ = v___x_441_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v___x_445_);
v___x_447_ = v_reuseFailAlloc_448_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
return v___x_447_;
}
}
else
{
lean_object* v_val_449_; lean_object* v___x_451_; 
lean_inc_ref(v_fst_443_);
lean_dec(v_a_439_);
v_val_449_ = lean_ctor_get(v_fst_443_, 0);
lean_inc(v_val_449_);
lean_dec_ref_known(v_fst_443_, 1);
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 0, v_val_449_);
v___x_451_ = v___x_441_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_val_449_);
v___x_451_ = v_reuseFailAlloc_452_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
return v___x_451_;
}
}
}
}
else
{
lean_object* v_a_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_461_; 
v_a_454_ = lean_ctor_get(v___x_438_, 0);
v_isSharedCheck_461_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_461_ == 0)
{
v___x_456_ = v___x_438_;
v_isShared_457_ = v_isSharedCheck_461_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_a_454_);
lean_dec(v___x_438_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_461_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v___x_459_; 
if (v_isShared_457_ == 0)
{
v___x_459_ = v___x_456_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v_a_454_);
v___x_459_ = v_reuseFailAlloc_460_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
return v___x_459_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5_spec__8(lean_object* v_init_462_, lean_object* v_tk_463_, lean_object* v_as_464_, size_t v_sz_465_, size_t v_i_466_, lean_object* v_b_467_, lean_object* v___y_468_, lean_object* v___y_469_){
_start:
{
uint8_t v___x_471_; 
v___x_471_ = lean_usize_dec_lt(v_i_466_, v_sz_465_);
if (v___x_471_ == 0)
{
lean_object* v___x_472_; 
v___x_472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_472_, 0, v_b_467_);
return v___x_472_;
}
else
{
lean_object* v_snd_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_507_; 
v_snd_473_ = lean_ctor_get(v_b_467_, 1);
v_isSharedCheck_507_ = !lean_is_exclusive(v_b_467_);
if (v_isSharedCheck_507_ == 0)
{
lean_object* v_unused_508_; 
v_unused_508_ = lean_ctor_get(v_b_467_, 0);
lean_dec(v_unused_508_);
v___x_475_ = v_b_467_;
v_isShared_476_ = v_isSharedCheck_507_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_snd_473_);
lean_dec(v_b_467_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_507_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_477_; lean_object* v_a_478_; lean_object* v___x_479_; 
v___x_477_ = lean_box(0);
v_a_478_ = lean_array_uget_borrowed(v_as_464_, v_i_466_);
lean_inc(v_snd_473_);
v___x_479_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5(v_init_462_, v_tk_463_, v_a_478_, v_snd_473_, v___y_468_, v___y_469_);
if (lean_obj_tag(v___x_479_) == 0)
{
lean_object* v_a_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_498_; 
v_a_480_ = lean_ctor_get(v___x_479_, 0);
v_isSharedCheck_498_ = !lean_is_exclusive(v___x_479_);
if (v_isSharedCheck_498_ == 0)
{
v___x_482_ = v___x_479_;
v_isShared_483_ = v_isSharedCheck_498_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_a_480_);
lean_dec(v___x_479_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_498_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
if (lean_obj_tag(v_a_480_) == 0)
{
lean_object* v___x_484_; lean_object* v___x_486_; 
v___x_484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_484_, 0, v_a_480_);
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 0, v___x_484_);
v___x_486_ = v___x_475_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v___x_484_);
lean_ctor_set(v_reuseFailAlloc_490_, 1, v_snd_473_);
v___x_486_ = v_reuseFailAlloc_490_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
lean_object* v___x_488_; 
if (v_isShared_483_ == 0)
{
lean_ctor_set(v___x_482_, 0, v___x_486_);
v___x_488_ = v___x_482_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v___x_486_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
return v___x_488_;
}
}
}
else
{
lean_object* v_a_491_; lean_object* v___x_493_; 
lean_del_object(v___x_482_);
lean_dec(v_snd_473_);
v_a_491_ = lean_ctor_get(v_a_480_, 0);
lean_inc(v_a_491_);
lean_dec_ref_known(v_a_480_, 1);
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 1, v_a_491_);
lean_ctor_set(v___x_475_, 0, v___x_477_);
v___x_493_ = v___x_475_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v___x_477_);
lean_ctor_set(v_reuseFailAlloc_497_, 1, v_a_491_);
v___x_493_ = v_reuseFailAlloc_497_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
size_t v___x_494_; size_t v___x_495_; 
v___x_494_ = ((size_t)1ULL);
v___x_495_ = lean_usize_add(v_i_466_, v___x_494_);
v_i_466_ = v___x_495_;
v_b_467_ = v___x_493_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_506_; 
lean_del_object(v___x_475_);
lean_dec(v_snd_473_);
v_a_499_ = lean_ctor_get(v___x_479_, 0);
v_isSharedCheck_506_ = !lean_is_exclusive(v___x_479_);
if (v_isSharedCheck_506_ == 0)
{
v___x_501_ = v___x_479_;
v_isShared_502_ = v_isSharedCheck_506_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_a_499_);
lean_dec(v___x_479_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_506_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v___x_504_; 
if (v_isShared_502_ == 0)
{
v___x_504_ = v___x_501_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v_a_499_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
return v___x_504_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5_spec__8___boxed(lean_object* v_init_509_, lean_object* v_tk_510_, lean_object* v_as_511_, lean_object* v_sz_512_, lean_object* v_i_513_, lean_object* v_b_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_){
_start:
{
size_t v_sz_boxed_518_; size_t v_i_boxed_519_; lean_object* v_res_520_; 
v_sz_boxed_518_ = lean_unbox_usize(v_sz_512_);
lean_dec(v_sz_512_);
v_i_boxed_519_ = lean_unbox_usize(v_i_513_);
lean_dec(v_i_513_);
v_res_520_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5_spec__8(v_init_509_, v_tk_510_, v_as_511_, v_sz_boxed_518_, v_i_boxed_519_, v_b_514_, v___y_515_, v___y_516_);
lean_dec(v___y_516_);
lean_dec_ref(v___y_515_);
lean_dec_ref(v_as_511_);
lean_dec(v_tk_510_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5___boxed(lean_object* v_init_521_, lean_object* v_tk_522_, lean_object* v_n_523_, lean_object* v_b_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_){
_start:
{
lean_object* v_res_528_; 
v_res_528_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5(v_init_521_, v_tk_522_, v_n_523_, v_b_524_, v___y_525_, v___y_526_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec_ref(v_n_523_);
lean_dec(v_tk_522_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__6_spec__11(lean_object* v_tk_532_, lean_object* v_as_533_, size_t v_sz_534_, size_t v_i_535_, lean_object* v_b_536_, lean_object* v___y_537_, lean_object* v___y_538_){
_start:
{
uint8_t v___x_540_; 
v___x_540_ = lean_usize_dec_lt(v_i_535_, v_sz_534_);
if (v___x_540_ == 0)
{
lean_object* v___x_541_; 
v___x_541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_541_, 0, v_b_536_);
return v___x_541_;
}
else
{
lean_object* v___x_542_; lean_object* v_a_543_; lean_object* v___x_544_; 
lean_dec_ref(v_b_536_);
v___x_542_ = lean_box(0);
v_a_543_ = lean_array_uget_borrowed(v_as_533_, v_i_535_);
lean_inc(v_a_543_);
v___x_544_ = l_Lean_Elab_InfoTree_format(v_a_543_, v___x_542_);
if (lean_obj_tag(v___x_544_) == 0)
{
lean_object* v_a_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v_a_545_ = lean_ctor_get(v___x_544_, 0);
lean_inc(v_a_545_);
lean_dec_ref_known(v___x_544_, 1);
v___x_546_ = l_Lean_MessageData_ofFormat(v_a_545_);
v___x_547_ = l_Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2(v_tk_532_, v___x_546_, v___y_537_, v___y_538_);
if (lean_obj_tag(v___x_547_) == 0)
{
lean_object* v___x_548_; size_t v___x_549_; size_t v___x_550_; 
lean_dec_ref_known(v___x_547_, 1);
v___x_548_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__6_spec__11___closed__0));
v___x_549_ = ((size_t)1ULL);
v___x_550_ = lean_usize_add(v_i_535_, v___x_549_);
v_i_535_ = v___x_550_;
v_b_536_ = v___x_548_;
goto _start;
}
else
{
lean_object* v_a_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_559_; 
v_a_552_ = lean_ctor_get(v___x_547_, 0);
v_isSharedCheck_559_ = !lean_is_exclusive(v___x_547_);
if (v_isSharedCheck_559_ == 0)
{
v___x_554_ = v___x_547_;
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_a_552_);
lean_dec(v___x_547_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_557_; 
if (v_isShared_555_ == 0)
{
v___x_557_ = v___x_554_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v_a_552_);
v___x_557_ = v_reuseFailAlloc_558_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
return v___x_557_;
}
}
}
}
else
{
lean_object* v_a_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_572_; 
v_a_560_ = lean_ctor_get(v___x_544_, 0);
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_572_ == 0)
{
v___x_562_ = v___x_544_;
v_isShared_563_ = v_isSharedCheck_572_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_a_560_);
lean_dec(v___x_544_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_572_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v_ref_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_570_; 
v_ref_564_ = lean_ctor_get(v___y_537_, 7);
v___x_565_ = lean_io_error_to_string(v_a_560_);
v___x_566_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_566_, 0, v___x_565_);
v___x_567_ = l_Lean_MessageData_ofFormat(v___x_566_);
lean_inc(v_ref_564_);
v___x_568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_568_, 0, v_ref_564_);
lean_ctor_set(v___x_568_, 1, v___x_567_);
if (v_isShared_563_ == 0)
{
lean_ctor_set(v___x_562_, 0, v___x_568_);
v___x_570_ = v___x_562_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v___x_568_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__6_spec__11___boxed(lean_object* v_tk_573_, lean_object* v_as_574_, lean_object* v_sz_575_, lean_object* v_i_576_, lean_object* v_b_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_){
_start:
{
size_t v_sz_boxed_581_; size_t v_i_boxed_582_; lean_object* v_res_583_; 
v_sz_boxed_581_ = lean_unbox_usize(v_sz_575_);
lean_dec(v_sz_575_);
v_i_boxed_582_ = lean_unbox_usize(v_i_576_);
lean_dec(v_i_576_);
v_res_583_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__6_spec__11(v_tk_573_, v_as_574_, v_sz_boxed_581_, v_i_boxed_582_, v_b_577_, v___y_578_, v___y_579_);
lean_dec(v___y_579_);
lean_dec_ref(v___y_578_);
lean_dec_ref(v_as_574_);
lean_dec(v_tk_573_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__6(lean_object* v_tk_584_, lean_object* v_as_585_, size_t v_sz_586_, size_t v_i_587_, lean_object* v_b_588_, lean_object* v___y_589_, lean_object* v___y_590_){
_start:
{
uint8_t v___x_592_; 
v___x_592_ = lean_usize_dec_lt(v_i_587_, v_sz_586_);
if (v___x_592_ == 0)
{
lean_object* v___x_593_; 
v___x_593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_593_, 0, v_b_588_);
return v___x_593_;
}
else
{
lean_object* v___x_594_; lean_object* v_a_595_; lean_object* v___x_596_; 
lean_dec_ref(v_b_588_);
v___x_594_ = lean_box(0);
v_a_595_ = lean_array_uget_borrowed(v_as_585_, v_i_587_);
lean_inc(v_a_595_);
v___x_596_ = l_Lean_Elab_InfoTree_format(v_a_595_, v___x_594_);
if (lean_obj_tag(v___x_596_) == 0)
{
lean_object* v_a_597_; lean_object* v___x_598_; lean_object* v___x_599_; 
v_a_597_ = lean_ctor_get(v___x_596_, 0);
lean_inc(v_a_597_);
lean_dec_ref_known(v___x_596_, 1);
v___x_598_ = l_Lean_MessageData_ofFormat(v_a_597_);
v___x_599_ = l_Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2(v_tk_584_, v___x_598_, v___y_589_, v___y_590_);
if (lean_obj_tag(v___x_599_) == 0)
{
lean_object* v___x_600_; size_t v___x_601_; size_t v___x_602_; lean_object* v___x_603_; 
lean_dec_ref_known(v___x_599_, 1);
v___x_600_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__6_spec__11___closed__0));
v___x_601_ = ((size_t)1ULL);
v___x_602_ = lean_usize_add(v_i_587_, v___x_601_);
v___x_603_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__6_spec__11(v_tk_584_, v_as_585_, v_sz_586_, v___x_602_, v___x_600_, v___y_589_, v___y_590_);
return v___x_603_;
}
else
{
lean_object* v_a_604_; lean_object* v___x_606_; uint8_t v_isShared_607_; uint8_t v_isSharedCheck_611_; 
v_a_604_ = lean_ctor_get(v___x_599_, 0);
v_isSharedCheck_611_ = !lean_is_exclusive(v___x_599_);
if (v_isSharedCheck_611_ == 0)
{
v___x_606_ = v___x_599_;
v_isShared_607_ = v_isSharedCheck_611_;
goto v_resetjp_605_;
}
else
{
lean_inc(v_a_604_);
lean_dec(v___x_599_);
v___x_606_ = lean_box(0);
v_isShared_607_ = v_isSharedCheck_611_;
goto v_resetjp_605_;
}
v_resetjp_605_:
{
lean_object* v___x_609_; 
if (v_isShared_607_ == 0)
{
v___x_609_ = v___x_606_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_a_604_);
v___x_609_ = v_reuseFailAlloc_610_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
return v___x_609_;
}
}
}
}
else
{
lean_object* v_a_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_624_; 
v_a_612_ = lean_ctor_get(v___x_596_, 0);
v_isSharedCheck_624_ = !lean_is_exclusive(v___x_596_);
if (v_isSharedCheck_624_ == 0)
{
v___x_614_ = v___x_596_;
v_isShared_615_ = v_isSharedCheck_624_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_a_612_);
lean_dec(v___x_596_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_624_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
lean_object* v_ref_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_622_; 
v_ref_616_ = lean_ctor_get(v___y_589_, 7);
v___x_617_ = lean_io_error_to_string(v_a_612_);
v___x_618_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_618_, 0, v___x_617_);
v___x_619_ = l_Lean_MessageData_ofFormat(v___x_618_);
lean_inc(v_ref_616_);
v___x_620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_620_, 0, v_ref_616_);
lean_ctor_set(v___x_620_, 1, v___x_619_);
if (v_isShared_615_ == 0)
{
lean_ctor_set(v___x_614_, 0, v___x_620_);
v___x_622_ = v___x_614_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v___x_620_);
v___x_622_ = v_reuseFailAlloc_623_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
return v___x_622_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__6___boxed(lean_object* v_tk_625_, lean_object* v_as_626_, lean_object* v_sz_627_, lean_object* v_i_628_, lean_object* v_b_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_){
_start:
{
size_t v_sz_boxed_633_; size_t v_i_boxed_634_; lean_object* v_res_635_; 
v_sz_boxed_633_ = lean_unbox_usize(v_sz_627_);
lean_dec(v_sz_627_);
v_i_boxed_634_ = lean_unbox_usize(v_i_628_);
lean_dec(v_i_628_);
v_res_635_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__6(v_tk_625_, v_as_626_, v_sz_boxed_633_, v_i_boxed_634_, v_b_629_, v___y_630_, v___y_631_);
lean_dec(v___y_631_);
lean_dec_ref(v___y_630_);
lean_dec_ref(v_as_626_);
lean_dec(v_tk_625_);
return v_res_635_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3(lean_object* v_tk_636_, lean_object* v_t_637_, lean_object* v_init_638_, lean_object* v___y_639_, lean_object* v___y_640_){
_start:
{
lean_object* v_root_642_; lean_object* v_tail_643_; lean_object* v___x_644_; 
v_root_642_ = lean_ctor_get(v_t_637_, 0);
v_tail_643_ = lean_ctor_get(v_t_637_, 1);
v___x_644_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__5(v_init_638_, v_tk_636_, v_root_642_, v_init_638_, v___y_639_, v___y_640_);
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v_a_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_681_; 
v_a_645_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_681_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_681_ == 0)
{
v___x_647_ = v___x_644_;
v_isShared_648_ = v_isSharedCheck_681_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_a_645_);
lean_dec(v___x_644_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_681_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
if (lean_obj_tag(v_a_645_) == 0)
{
lean_object* v_a_649_; lean_object* v___x_651_; 
v_a_649_ = lean_ctor_get(v_a_645_, 0);
lean_inc(v_a_649_);
lean_dec_ref_known(v_a_645_, 1);
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 0, v_a_649_);
v___x_651_ = v___x_647_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_a_649_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
else
{
lean_object* v_a_653_; lean_object* v___x_654_; lean_object* v___x_655_; size_t v_sz_656_; size_t v___x_657_; lean_object* v___x_658_; 
lean_del_object(v___x_647_);
v_a_653_ = lean_ctor_get(v_a_645_, 0);
lean_inc(v_a_653_);
lean_dec_ref_known(v_a_645_, 1);
v___x_654_ = lean_box(0);
v___x_655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_655_, 0, v___x_654_);
lean_ctor_set(v___x_655_, 1, v_a_653_);
v_sz_656_ = lean_array_size(v_tail_643_);
v___x_657_ = ((size_t)0ULL);
v___x_658_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3_spec__6(v_tk_636_, v_tail_643_, v_sz_656_, v___x_657_, v___x_655_, v___y_639_, v___y_640_);
if (lean_obj_tag(v___x_658_) == 0)
{
lean_object* v_a_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_672_; 
v_a_659_ = lean_ctor_get(v___x_658_, 0);
v_isSharedCheck_672_ = !lean_is_exclusive(v___x_658_);
if (v_isSharedCheck_672_ == 0)
{
v___x_661_ = v___x_658_;
v_isShared_662_ = v_isSharedCheck_672_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_a_659_);
lean_dec(v___x_658_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_672_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v_fst_663_; 
v_fst_663_ = lean_ctor_get(v_a_659_, 0);
if (lean_obj_tag(v_fst_663_) == 0)
{
lean_object* v_snd_664_; lean_object* v___x_666_; 
v_snd_664_ = lean_ctor_get(v_a_659_, 1);
lean_inc(v_snd_664_);
lean_dec(v_a_659_);
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 0, v_snd_664_);
v___x_666_ = v___x_661_;
goto v_reusejp_665_;
}
else
{
lean_object* v_reuseFailAlloc_667_; 
v_reuseFailAlloc_667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_667_, 0, v_snd_664_);
v___x_666_ = v_reuseFailAlloc_667_;
goto v_reusejp_665_;
}
v_reusejp_665_:
{
return v___x_666_;
}
}
else
{
lean_object* v_val_668_; lean_object* v___x_670_; 
lean_inc_ref(v_fst_663_);
lean_dec(v_a_659_);
v_val_668_ = lean_ctor_get(v_fst_663_, 0);
lean_inc(v_val_668_);
lean_dec_ref_known(v_fst_663_, 1);
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 0, v_val_668_);
v___x_670_ = v___x_661_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v_val_668_);
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
lean_object* v_a_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_680_; 
v_a_673_ = lean_ctor_get(v___x_658_, 0);
v_isSharedCheck_680_ = !lean_is_exclusive(v___x_658_);
if (v_isSharedCheck_680_ == 0)
{
v___x_675_ = v___x_658_;
v_isShared_676_ = v_isSharedCheck_680_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_a_673_);
lean_dec(v___x_658_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_680_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_678_; 
if (v_isShared_676_ == 0)
{
v___x_678_ = v___x_675_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v_a_673_);
v___x_678_ = v_reuseFailAlloc_679_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
return v___x_678_;
}
}
}
}
}
}
else
{
lean_object* v_a_682_; lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_689_; 
v_a_682_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_689_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_689_ == 0)
{
v___x_684_ = v___x_644_;
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
else
{
lean_inc(v_a_682_);
lean_dec(v___x_644_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v___x_687_; 
if (v_isShared_685_ == 0)
{
v___x_687_ = v___x_684_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_a_682_);
v___x_687_ = v_reuseFailAlloc_688_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
return v___x_687_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3___boxed(lean_object* v_tk_690_, lean_object* v_t_691_, lean_object* v_init_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_){
_start:
{
lean_object* v_res_696_; 
v_res_696_ = l_Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3(v_tk_690_, v_t_691_, v_init_692_, v___y_693_, v___y_694_);
lean_dec(v___y_694_);
lean_dec_ref(v___y_693_);
lean_dec_ref(v_t_691_);
lean_dec(v_tk_690_);
return v_res_696_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__5(void){
_start:
{
lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_705_ = ((lean_object*)(l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__4));
v___x_706_ = l_Lean_MessageData_ofFormat(v___x_705_);
return v___x_706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees(lean_object* v_x_707_, lean_object* v_a_708_, lean_object* v_a_709_){
_start:
{
lean_object* v___x_711_; uint8_t v___x_712_; 
v___x_711_ = ((lean_object*)(l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__2));
lean_inc(v_x_707_);
v___x_712_ = l_Lean_Syntax_isOfKind(v_x_707_, v___x_711_);
if (v___x_712_ == 0)
{
lean_object* v___x_713_; 
lean_dec(v_x_707_);
v___x_713_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__0___redArg();
return v___x_713_;
}
else
{
lean_object* v___x_714_; lean_object* v_tk_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v_infoState_719_; uint8_t v_enabled_720_; 
v___x_714_ = lean_unsigned_to_nat(0u);
v_tk_715_ = l_Lean_Syntax_getArg(v_x_707_, v___x_714_);
v___x_716_ = lean_unsigned_to_nat(2u);
v___x_717_ = l_Lean_Syntax_getArg(v_x_707_, v___x_716_);
lean_dec(v_x_707_);
v___x_718_ = lean_st_ref_get(v_a_709_);
v_infoState_719_ = lean_ctor_get(v___x_718_, 8);
lean_inc_ref(v_infoState_719_);
lean_dec(v___x_718_);
v_enabled_720_ = lean_ctor_get_uint8(v_infoState_719_, sizeof(void*)*3);
lean_dec_ref(v_infoState_719_);
if (v_enabled_720_ == 0)
{
lean_object* v___x_721_; lean_object* v___x_722_; 
lean_dec(v___x_717_);
lean_dec(v_tk_715_);
v___x_721_ = lean_obj_once(&l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__5, &l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__5_once, _init_l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__5);
v___x_722_ = l_Lean_logError___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__1(v___x_721_, v_a_708_, v_a_709_);
return v___x_722_;
}
else
{
lean_object* v___x_723_; 
v___x_723_ = l_Lean_Elab_Command_elabCommand(v___x_717_, v_a_708_, v_a_709_);
if (lean_obj_tag(v___x_723_) == 0)
{
lean_object* v___x_724_; lean_object* v_infoState_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v_trees_728_; lean_object* v___x_729_; lean_object* v___x_730_; 
lean_dec_ref_known(v___x_723_, 1);
v___x_724_ = lean_st_ref_get(v_a_709_);
v_infoState_725_ = lean_ctor_get(v___x_724_, 8);
lean_inc_ref(v_infoState_725_);
lean_dec(v___x_724_);
v___x_726_ = l_Lean_Elab_InfoState_substituteLazy(v_infoState_725_);
v___x_727_ = lean_task_get_own(v___x_726_);
v_trees_728_ = lean_ctor_get(v___x_727_, 2);
lean_inc_ref(v_trees_728_);
lean_dec(v___x_727_);
v___x_729_ = lean_box(0);
v___x_730_ = l_Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__3(v_tk_715_, v_trees_728_, v___x_729_, v_a_708_, v_a_709_);
lean_dec_ref(v_trees_728_);
lean_dec(v_tk_715_);
if (lean_obj_tag(v___x_730_) == 0)
{
lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_737_; 
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_730_);
if (v_isSharedCheck_737_ == 0)
{
lean_object* v_unused_738_; 
v_unused_738_ = lean_ctor_get(v___x_730_, 0);
lean_dec(v_unused_738_);
v___x_732_ = v___x_730_;
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
else
{
lean_dec(v___x_730_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_735_; 
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 0, v___x_729_);
v___x_735_ = v___x_732_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v___x_729_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
else
{
return v___x_730_;
}
}
else
{
lean_dec(v_tk_715_);
return v___x_723_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___boxed(lean_object* v_x_739_, lean_object* v_a_740_, lean_object* v_a_741_, lean_object* v_a_742_){
_start:
{
lean_object* v_res_743_; 
v_res_743_ = l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees(v_x_739_, v_a_740_, v_a_741_);
lean_dec(v_a_741_);
lean_dec_ref(v_a_740_);
return v_res_743_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4(lean_object* v_msgData_744_, lean_object* v___y_745_, lean_object* v___y_746_){
_start:
{
lean_object* v___x_748_; 
v___x_748_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___redArg(v_msgData_744_, v___y_746_);
return v___x_748_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4___boxed(lean_object* v_msgData_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Tactic_InfoTrees_elabInfoTrees_spec__2_spec__3_spec__4(v_msgData_749_, v___y_750_, v___y_751_);
lean_dec(v___y_751_);
lean_dec_ref(v___y_750_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1(){
_start:
{
lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v___x_765_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_766_ = ((lean_object*)(l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___closed__2));
v___x_767_ = ((lean_object*)(l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___closed__4));
v___x_768_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_InfoTrees_elabInfoTrees___boxed), 4, 0);
v___x_769_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_765_, v___x_766_, v___x_767_, v___x_768_);
return v___x_769_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1___boxed(lean_object* v_a_770_){
_start:
{
lean_object* v_res_771_; 
v_res_771_ = l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1();
return v_res_771_;
}
}
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_InfoTrees(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_InfoTrees_0__Lean_Elab_Tactic_InfoTrees_elabInfoTrees___regBuiltin_Lean_Elab_Tactic_InfoTrees_elabInfoTrees__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_InfoTrees(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_InfoTrees(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_InfoTrees(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_InfoTrees(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_InfoTrees(builtin);
}
#ifdef __cplusplus
}
#endif
