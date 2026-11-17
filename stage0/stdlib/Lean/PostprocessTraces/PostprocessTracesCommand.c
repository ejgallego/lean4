// Lean compiler output
// Module: Lean.PostprocessTraces.PostprocessTracesCommand
// Imports: public meta import Lean.PostprocessTraces.Basic public meta import Lean.Elab.Command
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
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
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_stringToMessageData(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Elab_PostprocessTraces_postprocessMessage___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftCoreM___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Elab_isAbortExceptionId(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_PostprocessTraces_runAndCollectMessages(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_PostprocessTraces_postprocessTracesCmd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_PostprocessTraces_postprocessTracesCmd___closed__0 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__0_value;
static const lean_string_object l_Lean_PostprocessTraces_postprocessTracesCmd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "PostprocessTraces"};
static const lean_object* l_Lean_PostprocessTraces_postprocessTracesCmd___closed__1 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__1_value;
static const lean_string_object l_Lean_PostprocessTraces_postprocessTracesCmd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "postprocessTracesCmd"};
static const lean_object* l_Lean_PostprocessTraces_postprocessTracesCmd___closed__2 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__2_value;
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessTracesCmd___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessTracesCmd___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__3_value_aux_0),((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__1_value),LEAN_SCALAR_PTR_LITERAL(169, 31, 168, 57, 105, 170, 97, 138)}};
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessTracesCmd___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__3_value_aux_1),((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__2_value),LEAN_SCALAR_PTR_LITERAL(174, 16, 235, 102, 51, 61, 86, 237)}};
static const lean_object* l_Lean_PostprocessTraces_postprocessTracesCmd___closed__3 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__3_value;
static const lean_string_object l_Lean_PostprocessTraces_postprocessTracesCmd___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lean_PostprocessTraces_postprocessTracesCmd___closed__4 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__4_value;
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessTracesCmd___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__4_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lean_PostprocessTraces_postprocessTracesCmd___closed__5 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__5_value;
static const lean_string_object l_Lean_PostprocessTraces_postprocessTracesCmd___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "postprocess_traces "};
static const lean_object* l_Lean_PostprocessTraces_postprocessTracesCmd___closed__6 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__6_value;
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessTracesCmd___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__6_value)}};
static const lean_object* l_Lean_PostprocessTraces_postprocessTracesCmd___closed__7 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__7_value;
static const lean_string_object l_Lean_PostprocessTraces_postprocessTracesCmd___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_PostprocessTraces_postprocessTracesCmd___closed__8 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__8_value;
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessTracesCmd___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__8_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lean_PostprocessTraces_postprocessTracesCmd___closed__9 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__9_value;
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessTracesCmd___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_PostprocessTraces_postprocessTracesCmd___closed__10 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__10_value;
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessTracesCmd___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__5_value),((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__7_value),((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__10_value)}};
static const lean_object* l_Lean_PostprocessTraces_postprocessTracesCmd___closed__11 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__11_value;
static const lean_string_object l_Lean_PostprocessTraces_postprocessTracesCmd___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " in"};
static const lean_object* l_Lean_PostprocessTraces_postprocessTracesCmd___closed__12 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__12_value;
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessTracesCmd___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__12_value)}};
static const lean_object* l_Lean_PostprocessTraces_postprocessTracesCmd___closed__13 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__13_value;
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessTracesCmd___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__5_value),((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__11_value),((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__13_value)}};
static const lean_object* l_Lean_PostprocessTraces_postprocessTracesCmd___closed__14 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__14_value;
static const lean_string_object l_Lean_PostprocessTraces_postprocessTracesCmd___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ppLine"};
static const lean_object* l_Lean_PostprocessTraces_postprocessTracesCmd___closed__15 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__15_value;
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessTracesCmd___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__15_value),LEAN_SCALAR_PTR_LITERAL(117, 61, 38, 245, 158, 59, 171, 58)}};
static const lean_object* l_Lean_PostprocessTraces_postprocessTracesCmd___closed__16 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__16_value;
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessTracesCmd___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__16_value)}};
static const lean_object* l_Lean_PostprocessTraces_postprocessTracesCmd___closed__17 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__17_value;
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessTracesCmd___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__5_value),((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__14_value),((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__17_value)}};
static const lean_object* l_Lean_PostprocessTraces_postprocessTracesCmd___closed__18 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__18_value;
static const lean_string_object l_Lean_PostprocessTraces_postprocessTracesCmd___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "command"};
static const lean_object* l_Lean_PostprocessTraces_postprocessTracesCmd___closed__19 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__19_value;
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessTracesCmd___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__19_value),LEAN_SCALAR_PTR_LITERAL(29, 69, 134, 125, 237, 175, 69, 70)}};
static const lean_object* l_Lean_PostprocessTraces_postprocessTracesCmd___closed__20 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__20_value;
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessTracesCmd___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__20_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_PostprocessTraces_postprocessTracesCmd___closed__21 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__21_value;
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessTracesCmd___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__5_value),((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__18_value),((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__21_value)}};
static const lean_object* l_Lean_PostprocessTraces_postprocessTracesCmd___closed__22 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__22_value;
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessTracesCmd___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__3_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__22_value)}};
static const lean_object* l_Lean_PostprocessTraces_postprocessTracesCmd___closed__23 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__23_value;
LEAN_EXPORT const lean_object* l_Lean_PostprocessTraces_postprocessTracesCmd = (const lean_object*)&l_Lean_PostprocessTraces_postprocessTracesCmd___closed__23_value;
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_elabPostprocessTraces___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_elabPostprocessTraces___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2___lam__0___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__2_spec__4(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception: "};
static const lean_object* l_Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1___closed__0 = (const lean_object*)&l_Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_PostprocessTraces_elabPostprocessTraces___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_PostprocessTraces_elabPostprocessTraces___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_PostprocessTraces_elabPostprocessTraces___closed__0 = (const lean_object*)&l_Lean_Elab_PostprocessTraces_elabPostprocessTraces___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_elabPostprocessTraces(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_elabPostprocessTraces___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_55_ = lean_box(0);
v___x_56_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_57_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_57_, 0, v___x_56_);
lean_ctor_set(v___x_57_, 1, v___x_55_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__0___redArg(){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__0___redArg___closed__0);
v___x_60_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__0___redArg___boxed(lean_object* v___y_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__0___redArg();
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__0(lean_object* v_00_u03b1_63_, lean_object* v___y_64_, lean_object* v___y_65_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__0___redArg();
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__0___boxed(lean_object* v_00_u03b1_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__0(v_00_u03b1_68_, v___y_69_, v___y_70_);
lean_dec(v___y_70_);
lean_dec_ref(v___y_69_);
return v_res_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_elabPostprocessTraces___lam__0(lean_object* v_roots_73_, lean_object* v___y_74_, lean_object* v___y_75_){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_77_, 0, v_roots_73_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_elabPostprocessTraces___lam__0___boxed(lean_object* v_roots_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l_Lean_Elab_PostprocessTraces_elabPostprocessTraces___lam__0(v_roots_78_, v___y_79_, v___y_80_);
lean_dec(v___y_80_);
lean_dec_ref(v___y_79_);
return v_res_82_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_83_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_84_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__0);
v___x_85_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
return v___x_85_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_86_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__1);
v___x_87_ = lean_unsigned_to_nat(0u);
v___x_88_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_88_, 0, v___x_87_);
lean_ctor_set(v___x_88_, 1, v___x_87_);
lean_ctor_set(v___x_88_, 2, v___x_87_);
lean_ctor_set(v___x_88_, 3, v___x_87_);
lean_ctor_set(v___x_88_, 4, v___x_86_);
lean_ctor_set(v___x_88_, 5, v___x_86_);
lean_ctor_set(v___x_88_, 6, v___x_86_);
lean_ctor_set(v___x_88_, 7, v___x_86_);
lean_ctor_set(v___x_88_, 8, v___x_86_);
lean_ctor_set(v___x_88_, 9, v___x_86_);
lean_ctor_set(v___x_88_, 10, v___x_86_);
return v___x_88_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_89_ = lean_unsigned_to_nat(32u);
v___x_90_ = lean_mk_empty_array_with_capacity(v___x_89_);
v___x_91_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
return v___x_91_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__4(void){
_start:
{
size_t v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_92_ = ((size_t)5ULL);
v___x_93_ = lean_unsigned_to_nat(0u);
v___x_94_ = lean_unsigned_to_nat(32u);
v___x_95_ = lean_mk_empty_array_with_capacity(v___x_94_);
v___x_96_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__3);
v___x_97_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v___x_95_);
lean_ctor_set(v___x_97_, 2, v___x_93_);
lean_ctor_set(v___x_97_, 3, v___x_93_);
lean_ctor_set_usize(v___x_97_, 4, v___x_92_);
return v___x_97_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__5(void){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_98_ = lean_box(1);
v___x_99_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__4);
v___x_100_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__1);
v___x_101_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
lean_ctor_set(v___x_101_, 1, v___x_99_);
lean_ctor_set(v___x_101_, 2, v___x_98_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg(lean_object* v_msgData_102_, lean_object* v___y_103_){
_start:
{
lean_object* v___x_105_; lean_object* v_env_106_; uint8_t v___x_107_; lean_object* v_env_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v_scopes_111_; lean_object* v___x_112_; lean_object* v_opts_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_105_ = lean_st_ref_get(v___y_103_);
v_env_106_ = lean_ctor_get(v___x_105_, 0);
lean_inc_ref(v_env_106_);
lean_dec(v___x_105_);
v___x_107_ = 0;
v_env_108_ = l_Lean_Environment_setRecordingDeps(v_env_106_, v___x_107_);
v___x_109_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_110_ = lean_st_ref_get(v___y_103_);
v_scopes_111_ = lean_ctor_get(v___x_110_, 2);
lean_inc(v_scopes_111_);
lean_dec(v___x_110_);
v___x_112_ = l_List_head_x21___redArg(v___x_109_, v_scopes_111_);
lean_dec(v_scopes_111_);
v_opts_113_ = lean_ctor_get(v___x_112_, 1);
lean_inc_ref(v_opts_113_);
lean_dec(v___x_112_);
v___x_114_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__2);
v___x_115_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___closed__5);
v___x_116_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_116_, 0, v_env_108_);
lean_ctor_set(v___x_116_, 1, v___x_114_);
lean_ctor_set(v___x_116_, 2, v___x_115_);
lean_ctor_set(v___x_116_, 3, v_opts_113_);
v___x_117_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
lean_ctor_set(v___x_117_, 1, v_msgData_102_);
v___x_118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_118_, 0, v___x_117_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_msgData_119_, lean_object* v___y_120_, lean_object* v___y_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg(v_msgData_119_, v___y_120_);
lean_dec(v___y_120_);
return v_res_122_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2___lam__0(uint8_t v___x_124_, lean_object* v_x_125_){
_start:
{
if (lean_obj_tag(v_x_125_) == 1)
{
lean_object* v_pre_126_; 
v_pre_126_ = lean_ctor_get(v_x_125_, 0);
if (lean_obj_tag(v_pre_126_) == 0)
{
lean_object* v_str_127_; lean_object* v___x_128_; uint8_t v___x_129_; 
v_str_127_ = lean_ctor_get(v_x_125_, 1);
v___x_128_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2___lam__0___closed__0));
v___x_129_ = lean_string_dec_eq(v_str_127_, v___x_128_);
return v___x_129_;
}
else
{
return v___x_124_;
}
}
else
{
return v___x_124_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2___lam__0___boxed(lean_object* v___x_130_, lean_object* v_x_131_){
_start:
{
uint8_t v___x_6062__boxed_132_; uint8_t v_res_133_; lean_object* v_r_134_; 
v___x_6062__boxed_132_ = lean_unbox(v___x_130_);
v_res_133_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2___lam__0(v___x_6062__boxed_132_, v_x_131_);
lean_dec(v_x_131_);
v_r_134_ = lean_box(v_res_133_);
return v_r_134_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__5(lean_object* v_opts_135_, lean_object* v_opt_136_){
_start:
{
lean_object* v_name_137_; lean_object* v_defValue_138_; lean_object* v_map_139_; lean_object* v___x_140_; 
v_name_137_ = lean_ctor_get(v_opt_136_, 0);
v_defValue_138_ = lean_ctor_get(v_opt_136_, 1);
v_map_139_ = lean_ctor_get(v_opts_135_, 0);
v___x_140_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_139_, v_name_137_);
if (lean_obj_tag(v___x_140_) == 0)
{
uint8_t v___x_141_; 
v___x_141_ = lean_unbox(v_defValue_138_);
return v___x_141_;
}
else
{
lean_object* v_val_142_; 
v_val_142_ = lean_ctor_get(v___x_140_, 0);
lean_inc(v_val_142_);
lean_dec_ref_known(v___x_140_, 1);
if (lean_obj_tag(v_val_142_) == 1)
{
uint8_t v_v_143_; 
v_v_143_ = lean_ctor_get_uint8(v_val_142_, 0);
lean_dec_ref_known(v_val_142_, 0);
return v_v_143_;
}
else
{
uint8_t v___x_144_; 
lean_dec(v_val_142_);
v___x_144_ = lean_unbox(v_defValue_138_);
return v___x_144_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__5___boxed(lean_object* v_opts_145_, lean_object* v_opt_146_){
_start:
{
uint8_t v_res_147_; lean_object* v_r_148_; 
v_res_147_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__5(v_opts_145_, v_opt_146_);
lean_dec_ref(v_opt_146_);
lean_dec_ref(v_opts_145_);
v_r_148_ = lean_box(v_res_147_);
return v_r_148_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2(lean_object* v_ref_153_, lean_object* v_msgData_154_, uint8_t v_severity_155_, uint8_t v_isSilent_156_, lean_object* v___y_157_, lean_object* v___y_158_){
_start:
{
lean_object* v___y_161_; uint8_t v___y_162_; lean_object* v___y_163_; lean_object* v___y_164_; uint8_t v___y_165_; lean_object* v___y_166_; lean_object* v___y_167_; lean_object* v___y_168_; lean_object* v___y_226_; uint8_t v___y_227_; lean_object* v___y_228_; uint8_t v___y_229_; lean_object* v___y_230_; lean_object* v___y_251_; lean_object* v___y_252_; uint8_t v___y_253_; uint8_t v___y_254_; lean_object* v___y_255_; uint8_t v___y_259_; uint8_t v___x_287_; uint8_t v___x_288_; 
v___x_287_ = 2;
v___x_288_ = l_Lean_instBEqMessageSeverity_beq(v_severity_155_, v___x_287_);
if (v___x_288_ == 0)
{
goto v___jp_276_;
}
else
{
uint8_t v___x_289_; 
lean_inc_ref(v_msgData_154_);
v___x_289_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_154_);
if (v___x_289_ == 0)
{
goto v___jp_276_;
}
else
{
lean_object* v___x_290_; lean_object* v___x_291_; 
lean_dec_ref(v_msgData_154_);
v___x_290_ = lean_box(0);
v___x_291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
return v___x_291_;
}
}
v___jp_160_:
{
lean_object* v___x_169_; 
v___x_169_ = l_Lean_Elab_Command_getScope___redArg(v___y_168_);
if (lean_obj_tag(v___x_169_) == 0)
{
lean_object* v_a_170_; lean_object* v_currNamespace_171_; lean_object* v___x_172_; 
v_a_170_ = lean_ctor_get(v___x_169_, 0);
lean_inc(v_a_170_);
lean_dec_ref_known(v___x_169_, 1);
v_currNamespace_171_ = lean_ctor_get(v_a_170_, 2);
lean_inc(v_currNamespace_171_);
lean_dec(v_a_170_);
v___x_172_ = l_Lean_Elab_Command_getScope___redArg(v___y_168_);
if (lean_obj_tag(v___x_172_) == 0)
{
lean_object* v_a_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_208_; 
v_a_173_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_208_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_208_ == 0)
{
v___x_175_ = v___x_172_;
v_isShared_176_ = v_isSharedCheck_208_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_a_173_);
lean_dec(v___x_172_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_208_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v_openDecls_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v_env_182_; lean_object* v_messages_183_; lean_object* v_scopes_184_; lean_object* v_usedQuotCtxts_185_; lean_object* v_nextMacroScope_186_; lean_object* v_maxRecDepth_187_; lean_object* v_ngen_188_; lean_object* v_auxDeclNGen_189_; lean_object* v_infoState_190_; lean_object* v_traceState_191_; lean_object* v_snapshotTasks_192_; lean_object* v_prevLinterStates_193_; lean_object* v_codeQualityEntryTasks_194_; lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_207_; 
v_openDecls_177_ = lean_ctor_get(v_a_173_, 3);
lean_inc(v_openDecls_177_);
lean_dec(v_a_173_);
v___x_178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_178_, 0, v_currNamespace_171_);
lean_ctor_set(v___x_178_, 1, v_openDecls_177_);
v___x_179_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_179_, 0, v___x_178_);
lean_ctor_set(v___x_179_, 1, v___y_167_);
lean_inc_ref(v___y_164_);
lean_inc_ref(v___y_166_);
v___x_180_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_180_, 0, v___y_166_);
lean_ctor_set(v___x_180_, 1, v___y_161_);
lean_ctor_set(v___x_180_, 2, v___y_163_);
lean_ctor_set(v___x_180_, 3, v___y_164_);
lean_ctor_set(v___x_180_, 4, v___x_179_);
lean_ctor_set_uint8(v___x_180_, sizeof(void*)*5, v___y_165_);
lean_ctor_set_uint8(v___x_180_, sizeof(void*)*5 + 1, v___y_162_);
lean_ctor_set_uint8(v___x_180_, sizeof(void*)*5 + 2, v_isSilent_156_);
v___x_181_ = lean_st_ref_take(v___y_168_);
v_env_182_ = lean_ctor_get(v___x_181_, 0);
v_messages_183_ = lean_ctor_get(v___x_181_, 1);
v_scopes_184_ = lean_ctor_get(v___x_181_, 2);
v_usedQuotCtxts_185_ = lean_ctor_get(v___x_181_, 3);
v_nextMacroScope_186_ = lean_ctor_get(v___x_181_, 4);
v_maxRecDepth_187_ = lean_ctor_get(v___x_181_, 5);
v_ngen_188_ = lean_ctor_get(v___x_181_, 6);
v_auxDeclNGen_189_ = lean_ctor_get(v___x_181_, 7);
v_infoState_190_ = lean_ctor_get(v___x_181_, 8);
v_traceState_191_ = lean_ctor_get(v___x_181_, 9);
v_snapshotTasks_192_ = lean_ctor_get(v___x_181_, 10);
v_prevLinterStates_193_ = lean_ctor_get(v___x_181_, 11);
v_codeQualityEntryTasks_194_ = lean_ctor_get(v___x_181_, 12);
v_isSharedCheck_207_ = !lean_is_exclusive(v___x_181_);
if (v_isSharedCheck_207_ == 0)
{
v___x_196_ = v___x_181_;
v_isShared_197_ = v_isSharedCheck_207_;
goto v_resetjp_195_;
}
else
{
lean_inc(v_codeQualityEntryTasks_194_);
lean_inc(v_prevLinterStates_193_);
lean_inc(v_snapshotTasks_192_);
lean_inc(v_traceState_191_);
lean_inc(v_infoState_190_);
lean_inc(v_auxDeclNGen_189_);
lean_inc(v_ngen_188_);
lean_inc(v_maxRecDepth_187_);
lean_inc(v_nextMacroScope_186_);
lean_inc(v_usedQuotCtxts_185_);
lean_inc(v_scopes_184_);
lean_inc(v_messages_183_);
lean_inc(v_env_182_);
lean_dec(v___x_181_);
v___x_196_ = lean_box(0);
v_isShared_197_ = v_isSharedCheck_207_;
goto v_resetjp_195_;
}
v_resetjp_195_:
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_201_; 
v___x_198_ = lean_box(0);
v___x_199_ = l_Lean_MessageLog_add(v___x_180_, v_messages_183_);
if (v_isShared_197_ == 0)
{
lean_ctor_set(v___x_196_, 1, v___x_199_);
v___x_201_ = v___x_196_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v_env_182_);
lean_ctor_set(v_reuseFailAlloc_206_, 1, v___x_199_);
lean_ctor_set(v_reuseFailAlloc_206_, 2, v_scopes_184_);
lean_ctor_set(v_reuseFailAlloc_206_, 3, v_usedQuotCtxts_185_);
lean_ctor_set(v_reuseFailAlloc_206_, 4, v_nextMacroScope_186_);
lean_ctor_set(v_reuseFailAlloc_206_, 5, v_maxRecDepth_187_);
lean_ctor_set(v_reuseFailAlloc_206_, 6, v_ngen_188_);
lean_ctor_set(v_reuseFailAlloc_206_, 7, v_auxDeclNGen_189_);
lean_ctor_set(v_reuseFailAlloc_206_, 8, v_infoState_190_);
lean_ctor_set(v_reuseFailAlloc_206_, 9, v_traceState_191_);
lean_ctor_set(v_reuseFailAlloc_206_, 10, v_snapshotTasks_192_);
lean_ctor_set(v_reuseFailAlloc_206_, 11, v_prevLinterStates_193_);
lean_ctor_set(v_reuseFailAlloc_206_, 12, v_codeQualityEntryTasks_194_);
v___x_201_ = v_reuseFailAlloc_206_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
lean_object* v___x_202_; lean_object* v___x_204_; 
v___x_202_ = lean_st_ref_put(v___y_168_, v___x_201_);
if (v_isShared_176_ == 0)
{
lean_ctor_set(v___x_175_, 0, v___x_198_);
v___x_204_ = v___x_175_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v___x_198_);
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
}
else
{
lean_object* v_a_209_; lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_216_; 
lean_dec(v_currNamespace_171_);
lean_dec_ref(v___y_167_);
lean_dec(v___y_163_);
lean_dec_ref(v___y_161_);
v_a_209_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_216_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_216_ == 0)
{
v___x_211_ = v___x_172_;
v_isShared_212_ = v_isSharedCheck_216_;
goto v_resetjp_210_;
}
else
{
lean_inc(v_a_209_);
lean_dec(v___x_172_);
v___x_211_ = lean_box(0);
v_isShared_212_ = v_isSharedCheck_216_;
goto v_resetjp_210_;
}
v_resetjp_210_:
{
lean_object* v___x_214_; 
if (v_isShared_212_ == 0)
{
v___x_214_ = v___x_211_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v_a_209_);
v___x_214_ = v_reuseFailAlloc_215_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
return v___x_214_;
}
}
}
}
else
{
lean_object* v_a_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_224_; 
lean_dec_ref(v___y_167_);
lean_dec(v___y_163_);
lean_dec_ref(v___y_161_);
v_a_217_ = lean_ctor_get(v___x_169_, 0);
v_isSharedCheck_224_ = !lean_is_exclusive(v___x_169_);
if (v_isSharedCheck_224_ == 0)
{
v___x_219_ = v___x_169_;
v_isShared_220_ = v_isSharedCheck_224_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_a_217_);
lean_dec(v___x_169_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_224_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v___x_222_; 
if (v_isShared_220_ == 0)
{
v___x_222_ = v___x_219_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v_a_217_);
v___x_222_ = v_reuseFailAlloc_223_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
return v___x_222_;
}
}
}
}
v___jp_225_:
{
lean_object* v_fileName_231_; lean_object* v_fileMap_232_; uint8_t v_suppressElabErrors_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v_a_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_249_; 
v_fileName_231_ = lean_ctor_get(v___y_157_, 0);
v_fileMap_232_ = lean_ctor_get(v___y_157_, 1);
v_suppressElabErrors_233_ = lean_ctor_get_uint8(v___y_157_, sizeof(void*)*10);
v___x_234_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_154_);
v___x_235_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg(v___x_234_, v___y_158_);
v_a_236_ = lean_ctor_get(v___x_235_, 0);
v_isSharedCheck_249_ = !lean_is_exclusive(v___x_235_);
if (v_isSharedCheck_249_ == 0)
{
v___x_238_ = v___x_235_;
v_isShared_239_ = v_isSharedCheck_249_;
goto v_resetjp_237_;
}
else
{
lean_inc(v_a_236_);
lean_dec(v___x_235_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_249_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
lean_inc_ref_n(v_fileMap_232_, 2);
v___x_240_ = l_Lean_FileMap_toPosition(v_fileMap_232_, v___y_228_);
lean_dec(v___y_228_);
v___x_241_ = l_Lean_FileMap_toPosition(v_fileMap_232_, v___y_230_);
lean_dec(v___y_230_);
v___x_242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
v___x_243_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2___closed__0));
if (v_suppressElabErrors_233_ == 0)
{
lean_del_object(v___x_238_);
v___y_161_ = v___x_240_;
v___y_162_ = v___y_227_;
v___y_163_ = v___x_242_;
v___y_164_ = v___x_243_;
v___y_165_ = v___y_229_;
v___y_166_ = v_fileName_231_;
v___y_167_ = v_a_236_;
v___y_168_ = v___y_158_;
goto v___jp_160_;
}
else
{
uint8_t v___x_244_; 
lean_inc(v_a_236_);
lean_inc_ref(v___y_226_);
v___x_244_ = l_Lean_MessageData_hasTag(v___y_226_, v_a_236_);
if (v___x_244_ == 0)
{
lean_object* v___x_245_; lean_object* v___x_247_; 
lean_dec_ref_known(v___x_242_, 1);
lean_dec_ref(v___x_240_);
lean_dec(v_a_236_);
v___x_245_ = lean_box(0);
if (v_isShared_239_ == 0)
{
lean_ctor_set(v___x_238_, 0, v___x_245_);
v___x_247_ = v___x_238_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v___x_245_);
v___x_247_ = v_reuseFailAlloc_248_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
return v___x_247_;
}
}
else
{
lean_del_object(v___x_238_);
v___y_161_ = v___x_240_;
v___y_162_ = v___y_227_;
v___y_163_ = v___x_242_;
v___y_164_ = v___x_243_;
v___y_165_ = v___y_229_;
v___y_166_ = v_fileName_231_;
v___y_167_ = v_a_236_;
v___y_168_ = v___y_158_;
goto v___jp_160_;
}
}
}
}
v___jp_250_:
{
lean_object* v___x_256_; 
v___x_256_ = l_Lean_Syntax_getTailPos_x3f(v___y_252_, v___y_253_);
lean_dec(v___y_252_);
if (lean_obj_tag(v___x_256_) == 0)
{
lean_inc(v___y_255_);
v___y_226_ = v___y_251_;
v___y_227_ = v___y_254_;
v___y_228_ = v___y_255_;
v___y_229_ = v___y_253_;
v___y_230_ = v___y_255_;
goto v___jp_225_;
}
else
{
lean_object* v_val_257_; 
v_val_257_ = lean_ctor_get(v___x_256_, 0);
lean_inc(v_val_257_);
lean_dec_ref_known(v___x_256_, 1);
v___y_226_ = v___y_251_;
v___y_227_ = v___y_254_;
v___y_228_ = v___y_255_;
v___y_229_ = v___y_253_;
v___y_230_ = v_val_257_;
goto v___jp_225_;
}
}
v___jp_258_:
{
lean_object* v___x_260_; 
v___x_260_ = l_Lean_Elab_Command_getRef___redArg(v___y_157_);
if (lean_obj_tag(v___x_260_) == 0)
{
lean_object* v_a_261_; lean_object* v_ref_262_; uint8_t v___x_263_; lean_object* v___f_264_; lean_object* v___x_265_; 
v_a_261_ = lean_ctor_get(v___x_260_, 0);
lean_inc(v_a_261_);
lean_dec_ref_known(v___x_260_, 1);
v_ref_262_ = l_Lean_replaceRef(v_ref_153_, v_a_261_);
lean_dec(v_a_261_);
v___x_263_ = 0;
v___f_264_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2___closed__1));
v___x_265_ = l_Lean_Syntax_getPos_x3f(v_ref_262_, v___x_263_);
if (lean_obj_tag(v___x_265_) == 0)
{
lean_object* v___x_266_; 
v___x_266_ = lean_unsigned_to_nat(0u);
v___y_251_ = v___f_264_;
v___y_252_ = v_ref_262_;
v___y_253_ = v___x_263_;
v___y_254_ = v___y_259_;
v___y_255_ = v___x_266_;
goto v___jp_250_;
}
else
{
lean_object* v_val_267_; 
v_val_267_ = lean_ctor_get(v___x_265_, 0);
lean_inc(v_val_267_);
lean_dec_ref_known(v___x_265_, 1);
v___y_251_ = v___f_264_;
v___y_252_ = v_ref_262_;
v___y_253_ = v___x_263_;
v___y_254_ = v___y_259_;
v___y_255_ = v_val_267_;
goto v___jp_250_;
}
}
else
{
lean_object* v_a_268_; lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_275_; 
lean_dec_ref(v_msgData_154_);
v_a_268_ = lean_ctor_get(v___x_260_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_260_);
if (v_isSharedCheck_275_ == 0)
{
v___x_270_ = v___x_260_;
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
else
{
lean_inc(v_a_268_);
lean_dec(v___x_260_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
lean_object* v___x_273_; 
if (v_isShared_271_ == 0)
{
v___x_273_ = v___x_270_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_a_268_);
v___x_273_ = v_reuseFailAlloc_274_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
return v___x_273_;
}
}
}
}
v___jp_276_:
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v_scopes_279_; lean_object* v___x_280_; lean_object* v_opts_281_; uint8_t v___x_282_; uint8_t v___x_283_; 
v___x_277_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_278_ = lean_st_ref_get(v___y_158_);
v_scopes_279_ = lean_ctor_get(v___x_278_, 2);
lean_inc(v_scopes_279_);
lean_dec(v___x_278_);
v___x_280_ = l_List_head_x21___redArg(v___x_277_, v_scopes_279_);
lean_dec(v_scopes_279_);
v_opts_281_ = lean_ctor_get(v___x_280_, 1);
lean_inc_ref(v_opts_281_);
lean_dec(v___x_280_);
v___x_282_ = 1;
v___x_283_ = l_Lean_instBEqMessageSeverity_beq(v_severity_155_, v___x_282_);
if (v___x_283_ == 0)
{
lean_dec_ref(v_opts_281_);
v___y_259_ = v_severity_155_;
goto v___jp_258_;
}
else
{
lean_object* v___x_284_; uint8_t v___x_285_; 
v___x_284_ = l_Lean_warningAsError;
v___x_285_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__5(v_opts_281_, v___x_284_);
lean_dec_ref(v_opts_281_);
if (v___x_285_ == 0)
{
v___y_259_ = v_severity_155_;
goto v___jp_258_;
}
else
{
uint8_t v___x_286_; 
v___x_286_ = 2;
v___y_259_ = v___x_286_;
goto v___jp_258_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2___boxed(lean_object* v_ref_292_, lean_object* v_msgData_293_, lean_object* v_severity_294_, lean_object* v_isSilent_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_){
_start:
{
uint8_t v_severity_boxed_299_; uint8_t v_isSilent_boxed_300_; lean_object* v_res_301_; 
v_severity_boxed_299_ = lean_unbox(v_severity_294_);
v_isSilent_boxed_300_ = lean_unbox(v_isSilent_295_);
v_res_301_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2(v_ref_292_, v_msgData_293_, v_severity_boxed_299_, v_isSilent_boxed_300_, v___y_296_, v___y_297_);
lean_dec(v___y_297_);
lean_dec_ref(v___y_296_);
lean_dec(v_ref_292_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__2_spec__4(lean_object* v_msgData_302_, uint8_t v_severity_303_, uint8_t v_isSilent_304_, lean_object* v___y_305_, lean_object* v___y_306_){
_start:
{
lean_object* v___x_308_; 
v___x_308_ = l_Lean_Elab_Command_getRef___redArg(v___y_305_);
if (lean_obj_tag(v___x_308_) == 0)
{
lean_object* v_a_309_; lean_object* v___x_310_; 
v_a_309_ = lean_ctor_get(v___x_308_, 0);
lean_inc(v_a_309_);
lean_dec_ref_known(v___x_308_, 1);
v___x_310_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2(v_a_309_, v_msgData_302_, v_severity_303_, v_isSilent_304_, v___y_305_, v___y_306_);
lean_dec(v_a_309_);
return v___x_310_;
}
else
{
lean_object* v_a_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_318_; 
lean_dec_ref(v_msgData_302_);
v_a_311_ = lean_ctor_get(v___x_308_, 0);
v_isSharedCheck_318_ = !lean_is_exclusive(v___x_308_);
if (v_isSharedCheck_318_ == 0)
{
v___x_313_ = v___x_308_;
v_isShared_314_ = v_isSharedCheck_318_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_a_311_);
lean_dec(v___x_308_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_318_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v___x_316_; 
if (v_isShared_314_ == 0)
{
v___x_316_ = v___x_313_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v_a_311_);
v___x_316_ = v_reuseFailAlloc_317_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
return v___x_316_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__2_spec__4___boxed(lean_object* v_msgData_319_, lean_object* v_severity_320_, lean_object* v_isSilent_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_){
_start:
{
uint8_t v_severity_boxed_325_; uint8_t v_isSilent_boxed_326_; lean_object* v_res_327_; 
v_severity_boxed_325_ = lean_unbox(v_severity_320_);
v_isSilent_boxed_326_ = lean_unbox(v_isSilent_321_);
v_res_327_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__2_spec__4(v_msgData_319_, v_severity_boxed_325_, v_isSilent_boxed_326_, v___y_322_, v___y_323_);
lean_dec(v___y_323_);
lean_dec_ref(v___y_322_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__2(lean_object* v_msgData_328_, lean_object* v___y_329_, lean_object* v___y_330_){
_start:
{
uint8_t v___x_332_; uint8_t v___x_333_; lean_object* v___x_334_; 
v___x_332_ = 2;
v___x_333_ = 0;
v___x_334_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__2_spec__4(v_msgData_328_, v___x_332_, v___x_333_, v___y_329_, v___y_330_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__2___boxed(lean_object* v_msgData_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__2(v_msgData_335_, v___y_336_, v___y_337_);
lean_dec(v___y_337_);
lean_dec_ref(v___y_336_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1(lean_object* v_ref_340_, lean_object* v_msgData_341_, lean_object* v___y_342_, lean_object* v___y_343_){
_start:
{
uint8_t v___x_345_; uint8_t v___x_346_; lean_object* v___x_347_; 
v___x_345_ = 2;
v___x_346_ = 0;
v___x_347_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2(v_ref_340_, v_msgData_341_, v___x_345_, v___x_346_, v___y_342_, v___y_343_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1___boxed(lean_object* v_ref_348_, lean_object* v_msgData_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1(v_ref_348_, v_msgData_349_, v___y_350_, v___y_351_);
lean_dec(v___y_351_);
lean_dec_ref(v___y_350_);
lean_dec(v_ref_348_);
return v_res_353_;
}
}
static lean_object* _init_l_Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1___closed__1(void){
_start:
{
lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_355_ = ((lean_object*)(l_Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1___closed__0));
v___x_356_ = l_Lean_stringToMessageData(v___x_355_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1(lean_object* v_ex_357_, lean_object* v___y_358_, lean_object* v___y_359_){
_start:
{
if (lean_obj_tag(v_ex_357_) == 0)
{
lean_object* v_ref_364_; lean_object* v_msg_365_; lean_object* v___x_366_; 
v_ref_364_ = lean_ctor_get(v_ex_357_, 0);
lean_inc(v_ref_364_);
v_msg_365_ = lean_ctor_get(v_ex_357_, 1);
lean_inc_ref(v_msg_365_);
lean_dec_ref_known(v_ex_357_, 2);
v___x_366_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1(v_ref_364_, v_msg_365_, v___y_358_, v___y_359_);
lean_dec(v_ref_364_);
return v___x_366_;
}
else
{
lean_object* v_id_367_; uint8_t v___x_368_; 
v_id_367_ = lean_ctor_get(v_ex_357_, 0);
lean_inc(v_id_367_);
v___x_368_ = l_Lean_Elab_isAbortExceptionId(v_id_367_);
if (v___x_368_ == 0)
{
uint8_t v___x_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_394_; 
v___x_369_ = l_Lean_Exception_isInterrupt(v_ex_357_);
v_isSharedCheck_394_ = !lean_is_exclusive(v_ex_357_);
if (v_isSharedCheck_394_ == 0)
{
lean_object* v_unused_395_; lean_object* v_unused_396_; 
v_unused_395_ = lean_ctor_get(v_ex_357_, 1);
lean_dec(v_unused_395_);
v_unused_396_ = lean_ctor_get(v_ex_357_, 0);
lean_dec(v_unused_396_);
v___x_371_ = v_ex_357_;
v_isShared_372_ = v_isSharedCheck_394_;
goto v_resetjp_370_;
}
else
{
lean_dec(v_ex_357_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_394_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
if (v___x_369_ == 0)
{
lean_object* v___x_373_; 
v___x_373_ = l_Lean_InternalExceptionId_getName(v_id_367_);
lean_dec(v_id_367_);
if (lean_obj_tag(v___x_373_) == 0)
{
lean_object* v_a_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
lean_del_object(v___x_371_);
v_a_374_ = lean_ctor_get(v___x_373_, 0);
lean_inc(v_a_374_);
lean_dec_ref_known(v___x_373_, 1);
v___x_375_ = lean_obj_once(&l_Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1___closed__1, &l_Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1___closed__1_once, _init_l_Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1___closed__1);
v___x_376_ = l_Lean_MessageData_ofName(v_a_374_);
v___x_377_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_377_, 0, v___x_375_);
lean_ctor_set(v___x_377_, 1, v___x_376_);
v___x_378_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__2(v___x_377_, v___y_358_, v___y_359_);
return v___x_378_;
}
else
{
lean_object* v_a_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_393_; 
v_a_379_ = lean_ctor_get(v___x_373_, 0);
v_isSharedCheck_393_ = !lean_is_exclusive(v___x_373_);
if (v_isSharedCheck_393_ == 0)
{
v___x_381_ = v___x_373_;
v_isShared_382_ = v_isSharedCheck_393_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_a_379_);
lean_dec(v___x_373_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_393_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
lean_object* v_ref_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_388_; 
v_ref_383_ = lean_ctor_get(v___y_358_, 7);
v___x_384_ = lean_io_error_to_string(v_a_379_);
v___x_385_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_385_, 0, v___x_384_);
v___x_386_ = l_Lean_MessageData_ofFormat(v___x_385_);
lean_inc(v_ref_383_);
if (v_isShared_372_ == 0)
{
lean_ctor_set_tag(v___x_371_, 0);
lean_ctor_set(v___x_371_, 1, v___x_386_);
lean_ctor_set(v___x_371_, 0, v_ref_383_);
v___x_388_ = v___x_371_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v_ref_383_);
lean_ctor_set(v_reuseFailAlloc_392_, 1, v___x_386_);
v___x_388_ = v_reuseFailAlloc_392_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
lean_object* v___x_390_; 
if (v_isShared_382_ == 0)
{
lean_ctor_set(v___x_381_, 0, v___x_388_);
v___x_390_ = v___x_381_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v___x_388_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
}
}
}
else
{
lean_del_object(v___x_371_);
lean_dec(v_id_367_);
goto v___jp_361_;
}
}
}
else
{
lean_dec_ref_known(v_ex_357_, 2);
lean_dec(v_id_367_);
goto v___jp_361_;
}
}
v___jp_361_:
{
lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_362_ = lean_box(0);
v___x_363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_363_, 0, v___x_362_);
return v___x_363_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1___boxed(lean_object* v_ex_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l_Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1(v_ex_397_, v___y_398_, v___y_399_);
lean_dec(v___y_399_);
lean_dec_ref(v___y_398_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__2(lean_object* v_a_402_, lean_object* v_as_403_, size_t v_sz_404_, size_t v_i_405_, lean_object* v_b_406_, lean_object* v___y_407_, lean_object* v___y_408_){
_start:
{
lean_object* v_a_411_; uint8_t v___x_415_; 
v___x_415_ = lean_usize_dec_lt(v_i_405_, v_sz_404_);
if (v___x_415_ == 0)
{
lean_object* v___x_416_; 
lean_dec_ref(v_a_402_);
v___x_416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_416_, 0, v_b_406_);
return v___x_416_;
}
else
{
lean_object* v___x_417_; lean_object* v_a_418_; lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_417_ = lean_box(0);
v_a_418_ = lean_array_uget_borrowed(v_as_403_, v_i_405_);
lean_inc(v_a_418_);
lean_inc_ref(v_a_402_);
v___x_419_ = lean_alloc_closure((void*)(l_Lean_Elab_PostprocessTraces_postprocessMessage___boxed), 5, 2);
lean_closure_set(v___x_419_, 0, v_a_402_);
lean_closure_set(v___x_419_, 1, v_a_418_);
v___x_420_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_419_, v___y_407_, v___y_408_);
if (lean_obj_tag(v___x_420_) == 0)
{
lean_object* v_a_421_; 
v_a_421_ = lean_ctor_get(v___x_420_, 0);
lean_inc(v_a_421_);
lean_dec_ref_known(v___x_420_, 1);
if (lean_obj_tag(v_a_421_) == 1)
{
lean_object* v_val_422_; lean_object* v___x_423_; lean_object* v_env_424_; lean_object* v_messages_425_; lean_object* v_scopes_426_; lean_object* v_usedQuotCtxts_427_; lean_object* v_nextMacroScope_428_; lean_object* v_maxRecDepth_429_; lean_object* v_ngen_430_; lean_object* v_auxDeclNGen_431_; lean_object* v_infoState_432_; lean_object* v_traceState_433_; lean_object* v_snapshotTasks_434_; lean_object* v_prevLinterStates_435_; lean_object* v_codeQualityEntryTasks_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_445_; 
v_val_422_ = lean_ctor_get(v_a_421_, 0);
lean_inc(v_val_422_);
lean_dec_ref_known(v_a_421_, 1);
v___x_423_ = lean_st_ref_take(v___y_408_);
v_env_424_ = lean_ctor_get(v___x_423_, 0);
v_messages_425_ = lean_ctor_get(v___x_423_, 1);
v_scopes_426_ = lean_ctor_get(v___x_423_, 2);
v_usedQuotCtxts_427_ = lean_ctor_get(v___x_423_, 3);
v_nextMacroScope_428_ = lean_ctor_get(v___x_423_, 4);
v_maxRecDepth_429_ = lean_ctor_get(v___x_423_, 5);
v_ngen_430_ = lean_ctor_get(v___x_423_, 6);
v_auxDeclNGen_431_ = lean_ctor_get(v___x_423_, 7);
v_infoState_432_ = lean_ctor_get(v___x_423_, 8);
v_traceState_433_ = lean_ctor_get(v___x_423_, 9);
v_snapshotTasks_434_ = lean_ctor_get(v___x_423_, 10);
v_prevLinterStates_435_ = lean_ctor_get(v___x_423_, 11);
v_codeQualityEntryTasks_436_ = lean_ctor_get(v___x_423_, 12);
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_423_);
if (v_isSharedCheck_445_ == 0)
{
v___x_438_ = v___x_423_;
v_isShared_439_ = v_isSharedCheck_445_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_codeQualityEntryTasks_436_);
lean_inc(v_prevLinterStates_435_);
lean_inc(v_snapshotTasks_434_);
lean_inc(v_traceState_433_);
lean_inc(v_infoState_432_);
lean_inc(v_auxDeclNGen_431_);
lean_inc(v_ngen_430_);
lean_inc(v_maxRecDepth_429_);
lean_inc(v_nextMacroScope_428_);
lean_inc(v_usedQuotCtxts_427_);
lean_inc(v_scopes_426_);
lean_inc(v_messages_425_);
lean_inc(v_env_424_);
lean_dec(v___x_423_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_445_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_440_; lean_object* v___x_442_; 
v___x_440_ = l_Lean_MessageLog_add(v_val_422_, v_messages_425_);
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 1, v___x_440_);
v___x_442_ = v___x_438_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_env_424_);
lean_ctor_set(v_reuseFailAlloc_444_, 1, v___x_440_);
lean_ctor_set(v_reuseFailAlloc_444_, 2, v_scopes_426_);
lean_ctor_set(v_reuseFailAlloc_444_, 3, v_usedQuotCtxts_427_);
lean_ctor_set(v_reuseFailAlloc_444_, 4, v_nextMacroScope_428_);
lean_ctor_set(v_reuseFailAlloc_444_, 5, v_maxRecDepth_429_);
lean_ctor_set(v_reuseFailAlloc_444_, 6, v_ngen_430_);
lean_ctor_set(v_reuseFailAlloc_444_, 7, v_auxDeclNGen_431_);
lean_ctor_set(v_reuseFailAlloc_444_, 8, v_infoState_432_);
lean_ctor_set(v_reuseFailAlloc_444_, 9, v_traceState_433_);
lean_ctor_set(v_reuseFailAlloc_444_, 10, v_snapshotTasks_434_);
lean_ctor_set(v_reuseFailAlloc_444_, 11, v_prevLinterStates_435_);
lean_ctor_set(v_reuseFailAlloc_444_, 12, v_codeQualityEntryTasks_436_);
v___x_442_ = v_reuseFailAlloc_444_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
lean_object* v___x_443_; 
v___x_443_ = lean_st_ref_put(v___y_408_, v___x_442_);
v_a_411_ = v___x_417_;
goto v___jp_410_;
}
}
}
else
{
lean_dec(v_a_421_);
v_a_411_ = v___x_417_;
goto v___jp_410_;
}
}
else
{
lean_object* v_a_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_478_; 
v_a_446_ = lean_ctor_get(v___x_420_, 0);
v_isSharedCheck_478_ = !lean_is_exclusive(v___x_420_);
if (v_isSharedCheck_478_ == 0)
{
v___x_448_ = v___x_420_;
v_isShared_449_ = v_isSharedCheck_478_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_a_446_);
lean_dec(v___x_420_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_478_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
uint8_t v___x_450_; 
v___x_450_ = l_Lean_Exception_isInterrupt(v_a_446_);
if (v___x_450_ == 0)
{
lean_object* v___x_451_; 
lean_del_object(v___x_448_);
v___x_451_ = l_Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1(v_a_446_, v___y_407_, v___y_408_);
if (lean_obj_tag(v___x_451_) == 0)
{
lean_object* v___x_452_; lean_object* v_env_453_; lean_object* v_messages_454_; lean_object* v_scopes_455_; lean_object* v_usedQuotCtxts_456_; lean_object* v_nextMacroScope_457_; lean_object* v_maxRecDepth_458_; lean_object* v_ngen_459_; lean_object* v_auxDeclNGen_460_; lean_object* v_infoState_461_; lean_object* v_traceState_462_; lean_object* v_snapshotTasks_463_; lean_object* v_prevLinterStates_464_; lean_object* v_codeQualityEntryTasks_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_474_; 
lean_dec_ref_known(v___x_451_, 1);
v___x_452_ = lean_st_ref_take(v___y_408_);
v_env_453_ = lean_ctor_get(v___x_452_, 0);
v_messages_454_ = lean_ctor_get(v___x_452_, 1);
v_scopes_455_ = lean_ctor_get(v___x_452_, 2);
v_usedQuotCtxts_456_ = lean_ctor_get(v___x_452_, 3);
v_nextMacroScope_457_ = lean_ctor_get(v___x_452_, 4);
v_maxRecDepth_458_ = lean_ctor_get(v___x_452_, 5);
v_ngen_459_ = lean_ctor_get(v___x_452_, 6);
v_auxDeclNGen_460_ = lean_ctor_get(v___x_452_, 7);
v_infoState_461_ = lean_ctor_get(v___x_452_, 8);
v_traceState_462_ = lean_ctor_get(v___x_452_, 9);
v_snapshotTasks_463_ = lean_ctor_get(v___x_452_, 10);
v_prevLinterStates_464_ = lean_ctor_get(v___x_452_, 11);
v_codeQualityEntryTasks_465_ = lean_ctor_get(v___x_452_, 12);
v_isSharedCheck_474_ = !lean_is_exclusive(v___x_452_);
if (v_isSharedCheck_474_ == 0)
{
v___x_467_ = v___x_452_;
v_isShared_468_ = v_isSharedCheck_474_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_codeQualityEntryTasks_465_);
lean_inc(v_prevLinterStates_464_);
lean_inc(v_snapshotTasks_463_);
lean_inc(v_traceState_462_);
lean_inc(v_infoState_461_);
lean_inc(v_auxDeclNGen_460_);
lean_inc(v_ngen_459_);
lean_inc(v_maxRecDepth_458_);
lean_inc(v_nextMacroScope_457_);
lean_inc(v_usedQuotCtxts_456_);
lean_inc(v_scopes_455_);
lean_inc(v_messages_454_);
lean_inc(v_env_453_);
lean_dec(v___x_452_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_474_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v___x_469_; lean_object* v___x_471_; 
lean_inc(v_a_418_);
v___x_469_ = l_Lean_MessageLog_add(v_a_418_, v_messages_454_);
if (v_isShared_468_ == 0)
{
lean_ctor_set(v___x_467_, 1, v___x_469_);
v___x_471_ = v___x_467_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v_env_453_);
lean_ctor_set(v_reuseFailAlloc_473_, 1, v___x_469_);
lean_ctor_set(v_reuseFailAlloc_473_, 2, v_scopes_455_);
lean_ctor_set(v_reuseFailAlloc_473_, 3, v_usedQuotCtxts_456_);
lean_ctor_set(v_reuseFailAlloc_473_, 4, v_nextMacroScope_457_);
lean_ctor_set(v_reuseFailAlloc_473_, 5, v_maxRecDepth_458_);
lean_ctor_set(v_reuseFailAlloc_473_, 6, v_ngen_459_);
lean_ctor_set(v_reuseFailAlloc_473_, 7, v_auxDeclNGen_460_);
lean_ctor_set(v_reuseFailAlloc_473_, 8, v_infoState_461_);
lean_ctor_set(v_reuseFailAlloc_473_, 9, v_traceState_462_);
lean_ctor_set(v_reuseFailAlloc_473_, 10, v_snapshotTasks_463_);
lean_ctor_set(v_reuseFailAlloc_473_, 11, v_prevLinterStates_464_);
lean_ctor_set(v_reuseFailAlloc_473_, 12, v_codeQualityEntryTasks_465_);
v___x_471_ = v_reuseFailAlloc_473_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
lean_object* v___x_472_; 
v___x_472_ = lean_st_ref_put(v___y_408_, v___x_471_);
v_a_411_ = v___x_417_;
goto v___jp_410_;
}
}
}
else
{
lean_dec_ref(v_a_402_);
return v___x_451_;
}
}
else
{
lean_object* v___x_476_; 
lean_dec_ref(v_a_402_);
if (v_isShared_449_ == 0)
{
v___x_476_ = v___x_448_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v_a_446_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
return v___x_476_;
}
}
}
}
}
v___jp_410_:
{
size_t v___x_412_; size_t v___x_413_; 
v___x_412_ = ((size_t)1ULL);
v___x_413_ = lean_usize_add(v_i_405_, v___x_412_);
v_i_405_ = v___x_413_;
v_b_406_ = v_a_411_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__2___boxed(lean_object* v_a_479_, lean_object* v_as_480_, lean_object* v_sz_481_, lean_object* v_i_482_, lean_object* v_b_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_){
_start:
{
size_t v_sz_boxed_487_; size_t v_i_boxed_488_; lean_object* v_res_489_; 
v_sz_boxed_487_ = lean_unbox_usize(v_sz_481_);
lean_dec(v_sz_481_);
v_i_boxed_488_ = lean_unbox_usize(v_i_482_);
lean_dec(v_i_482_);
v_res_489_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__2(v_a_479_, v_as_480_, v_sz_boxed_487_, v_i_boxed_488_, v_b_483_, v___y_484_, v___y_485_);
lean_dec(v___y_485_);
lean_dec_ref(v___y_484_);
lean_dec_ref(v_as_480_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_elabPostprocessTraces(lean_object* v_x_491_, lean_object* v_a_492_, lean_object* v_a_493_){
_start:
{
lean_object* v___x_495_; uint8_t v___x_496_; 
v___x_495_ = ((lean_object*)(l_Lean_PostprocessTraces_postprocessTracesCmd___closed__3));
lean_inc(v_x_491_);
v___x_496_ = l_Lean_Syntax_isOfKind(v_x_491_, v___x_495_);
if (v___x_496_ == 0)
{
lean_object* v___x_497_; 
lean_dec(v_x_491_);
v___x_497_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__0___redArg();
return v___x_497_;
}
else
{
lean_object* v___f_498_; lean_object* v___x_499_; lean_object* v_post_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v_a_504_; lean_object* v___x_527_; 
v___f_498_ = ((lean_object*)(l_Lean_Elab_PostprocessTraces_elabPostprocessTraces___closed__0));
v___x_499_ = lean_unsigned_to_nat(1u);
v_post_500_ = l_Lean_Syntax_getArg(v_x_491_, v___x_499_);
v___x_501_ = lean_unsigned_to_nat(3u);
v___x_502_ = l_Lean_Syntax_getArg(v_x_491_, v___x_501_);
lean_dec(v_x_491_);
v___x_527_ = l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel(v_post_500_, v_a_492_, v_a_493_);
if (lean_obj_tag(v___x_527_) == 0)
{
lean_object* v_a_528_; 
v_a_528_ = lean_ctor_get(v___x_527_, 0);
lean_inc(v_a_528_);
lean_dec_ref_known(v___x_527_, 1);
v_a_504_ = v_a_528_;
goto v___jp_503_;
}
else
{
lean_object* v_a_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_538_; 
v_a_529_ = lean_ctor_get(v___x_527_, 0);
v_isSharedCheck_538_ = !lean_is_exclusive(v___x_527_);
if (v_isSharedCheck_538_ == 0)
{
v___x_531_ = v___x_527_;
v_isShared_532_ = v_isSharedCheck_538_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_a_529_);
lean_dec(v___x_527_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_538_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
uint8_t v___x_533_; 
v___x_533_ = l_Lean_Exception_isInterrupt(v_a_529_);
if (v___x_533_ == 0)
{
lean_object* v___x_534_; 
lean_del_object(v___x_531_);
v___x_534_ = l_Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1(v_a_529_, v_a_492_, v_a_493_);
if (lean_obj_tag(v___x_534_) == 0)
{
lean_dec_ref_known(v___x_534_, 1);
v_a_504_ = v___f_498_;
goto v___jp_503_;
}
else
{
lean_dec(v___x_502_);
return v___x_534_;
}
}
else
{
lean_object* v___x_536_; 
lean_dec(v___x_502_);
if (v_isShared_532_ == 0)
{
v___x_536_ = v___x_531_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v_a_529_);
v___x_536_ = v_reuseFailAlloc_537_;
goto v_reusejp_535_;
}
v_reusejp_535_:
{
return v___x_536_;
}
}
}
}
v___jp_503_:
{
lean_object* v___x_505_; 
v___x_505_ = l_Lean_Elab_PostprocessTraces_runAndCollectMessages(v___x_502_, v_a_492_, v_a_493_);
if (lean_obj_tag(v___x_505_) == 0)
{
lean_object* v_a_506_; lean_object* v___x_507_; size_t v_sz_508_; size_t v___x_509_; lean_object* v___x_510_; 
v_a_506_ = lean_ctor_get(v___x_505_, 0);
lean_inc(v_a_506_);
lean_dec_ref_known(v___x_505_, 1);
v___x_507_ = lean_box(0);
v_sz_508_ = lean_array_size(v_a_506_);
v___x_509_ = ((size_t)0ULL);
v___x_510_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__2(v_a_504_, v_a_506_, v_sz_508_, v___x_509_, v___x_507_, v_a_492_, v_a_493_);
lean_dec(v_a_506_);
if (lean_obj_tag(v___x_510_) == 0)
{
lean_object* v___x_512_; uint8_t v_isShared_513_; uint8_t v_isSharedCheck_517_; 
v_isSharedCheck_517_ = !lean_is_exclusive(v___x_510_);
if (v_isSharedCheck_517_ == 0)
{
lean_object* v_unused_518_; 
v_unused_518_ = lean_ctor_get(v___x_510_, 0);
lean_dec(v_unused_518_);
v___x_512_ = v___x_510_;
v_isShared_513_ = v_isSharedCheck_517_;
goto v_resetjp_511_;
}
else
{
lean_dec(v___x_510_);
v___x_512_ = lean_box(0);
v_isShared_513_ = v_isSharedCheck_517_;
goto v_resetjp_511_;
}
v_resetjp_511_:
{
lean_object* v___x_515_; 
if (v_isShared_513_ == 0)
{
lean_ctor_set(v___x_512_, 0, v___x_507_);
v___x_515_ = v___x_512_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v___x_507_);
v___x_515_ = v_reuseFailAlloc_516_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
return v___x_515_;
}
}
}
else
{
return v___x_510_;
}
}
else
{
lean_object* v_a_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_526_; 
lean_dec_ref(v_a_504_);
v_a_519_ = lean_ctor_get(v___x_505_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_526_ == 0)
{
v___x_521_ = v___x_505_;
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_a_519_);
lean_dec(v___x_505_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_524_; 
if (v_isShared_522_ == 0)
{
v___x_524_ = v___x_521_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v_a_519_);
v___x_524_ = v_reuseFailAlloc_525_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
return v___x_524_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_elabPostprocessTraces___boxed(lean_object* v_x_539_, lean_object* v_a_540_, lean_object* v_a_541_, lean_object* v_a_542_){
_start:
{
lean_object* v_res_543_; 
v_res_543_ = l_Lean_Elab_PostprocessTraces_elabPostprocessTraces(v_x_539_, v_a_540_, v_a_541_);
lean_dec(v_a_541_);
lean_dec_ref(v_a_540_);
return v_res_543_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4(lean_object* v_msgData_544_, lean_object* v___y_545_, lean_object* v___y_546_){
_start:
{
lean_object* v___x_548_; 
v___x_548_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___redArg(v_msgData_544_, v___y_546_);
return v___x_548_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4___boxed(lean_object* v_msgData_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_){
_start:
{
lean_object* v_res_553_; 
v_res_553_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_PostprocessTraces_elabPostprocessTraces_spec__1_spec__1_spec__2_spec__4(v_msgData_549_, v___y_550_, v___y_551_);
lean_dec(v___y_551_);
lean_dec_ref(v___y_550_);
return v_res_553_;
}
}
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_PostprocessTraces_PostprocessTracesCommand(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_PostprocessTraces_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_PostprocessTraces_PostprocessTracesCommand(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_PostprocessTraces_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_PostprocessTraces_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_PostprocessTraces_PostprocessTracesCommand(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_PostprocessTraces_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PostprocessTraces_PostprocessTracesCommand(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_PostprocessTraces_PostprocessTracesCommand(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_PostprocessTraces_PostprocessTracesCommand(builtin);
}
#ifdef __cplusplus
}
#endif
