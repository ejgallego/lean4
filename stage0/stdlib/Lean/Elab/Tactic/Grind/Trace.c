// Lean compiler output
// Module: Lean.Elab.Tactic.Grind.Trace
// Imports: public import Lean.Elab.Tactic.Grind.Basic import Lean.Elab.Tactic.Grind.Config import Lean.Elab.Tactic.Grind.Param import Lean.Meta.Tactic.TryThis import Lean.Meta.Tactic.Grind.Finish import Lean.Meta.Tactic.Grind.CollectParams import Lean.Meta.Sym.Grind
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_byContra_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_internalizeAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFalse(lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_exfalso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_Meta_tactic_hygienic;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_intros(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
extern lean_object* l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
extern lean_object* l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion_default;
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_getPreservedParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_saveState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_mkFinish(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestions___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkFinishTactic(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_mkGrindSeq(lean_object*);
lean_object* l_Lean_Meta_Grind_Action_mkGrindNext___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_checkSeqAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Result_toErrorMessageData(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_withConfigItems___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_withTracing___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_withTracing___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_withTracing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_withTracing___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "symByContra"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__5_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__4_value),LEAN_SCALAR_PTR_LITERAL(250, 214, 28, 119, 209, 102, 217, 193)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "by_contra"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__6_value;
static const lean_array_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "symIntros"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__9_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__9_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__9_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__8_value),LEAN_SCALAR_PTR_LITERAL(51, 175, 114, 140, 112, 61, 143, 32)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__9_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "intros"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__10_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__11 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__11_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__12_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__13;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Try these:"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Try this:"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "generated tactic cannot close the goal"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__3;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "\nInitial goal\n"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__5;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindSeq"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__8_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "finish\?"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(13, 105, 206, 35, 173, 234, 53, 204)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__10_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`finish\?` failed, but resulting goal is not available"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__11 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__11_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__12;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__3___boxed(lean_object**);
static const lean_closure_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_saveState___boxed, .m_arity = 10, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__4___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__4___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "finishTrace"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___closed__0_value),LEAN_SCALAR_PTR_LITERAL(128, 104, 221, 59, 99, 114, 168, 144)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___closed__1_value;
static const lean_array_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__1_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__2_value),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__3_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 58, 227, 168, 195, 28, 19, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__4_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__3_value),LEAN_SCALAR_PTR_LITERAL(243, 88, 6, 248, 93, 59, 25, 68)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Trace"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__5_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(186, 27, 67, 52, 119, 51, 108, 2)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(91, 188, 82, 28, 141, 159, 228, 71)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__8_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(102, 23, 221, 94, 250, 9, 160, 105)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__9_value),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(148, 10, 68, 183, 25, 215, 244, 80)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__10_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__2_value),LEAN_SCALAR_PTR_LITERAL(193, 13, 146, 144, 74, 183, 56, 70)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__11 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__11_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__3_value),LEAN_SCALAR_PTR_LITERAL(95, 20, 224, 46, 151, 65, 68, 31)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__12_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "evalFinishTrace"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__13 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__12_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(30, 0, 151, 159, 220, 77, 241, 66)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__14 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__14_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_withTracing___redArg(lean_object* v_x_1_, lean_object* v_a_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_, lean_object* v_a_9_){
_start:
{
lean_object* v_ctx_11_; lean_object* v_config_12_; lean_object* v_toContext_13_; lean_object* v_sctx_14_; lean_object* v_methods_15_; lean_object* v_params_16_; uint8_t v_sym_17_; lean_object* v_simp_18_; lean_object* v_simpMethods_19_; lean_object* v_symSimpMethods_20_; lean_object* v_symDSimpMethods_21_; lean_object* v_identity_22_; lean_object* v_activeSolvers_23_; lean_object* v_anchorRefs_x3f_24_; uint8_t v_anchors_25_; uint8_t v_cheapCases_26_; uint8_t v_reportMVarIssue_27_; lean_object* v_splitSource_28_; lean_object* v_ematchDiagSource_29_; lean_object* v_symPrios_30_; lean_object* v_extensions_31_; uint8_t v_debug_32_; uint8_t v_ematchDiag_33_; uint8_t v_markInstances_34_; uint8_t v_lax_35_; uint8_t v_suggestions_36_; uint8_t v_locals_37_; lean_object* v_branches_38_; lean_object* v_splits_39_; lean_object* v_ematch_40_; lean_object* v_gen_41_; lean_object* v_genLocal_42_; lean_object* v_instances_43_; uint8_t v_matchEqs_44_; uint8_t v_splitMatch_45_; uint8_t v_splitIte_46_; uint8_t v_splitIndPred_47_; uint8_t v_splitImp_48_; lean_object* v_canonHeartbeats_49_; uint8_t v_ext_50_; uint8_t v_extAll_51_; uint8_t v_etaStruct_52_; uint8_t v_funext_53_; uint8_t v_lookahead_54_; uint8_t v_verbose_55_; uint8_t v_clean_56_; uint8_t v_qlia_57_; uint8_t v_mbtc_58_; uint8_t v_zetaDelta_59_; uint8_t v_zeta_60_; uint8_t v_distrib_61_; lean_object* v_maxChar_62_; uint8_t v_ring_63_; lean_object* v_ringSteps_64_; lean_object* v_ringMaxDegree_65_; uint8_t v_linarith_66_; uint8_t v_lia_67_; lean_object* v_liaSteps_68_; lean_object* v_liaReorders_69_; lean_object* v_liaReorderCases_70_; uint8_t v_hom_71_; uint8_t v_ac_72_; lean_object* v_acSteps_73_; lean_object* v_exp_74_; uint8_t v_abstractProof_75_; uint8_t v_inj_76_; uint8_t v_order_77_; lean_object* v_min_78_; lean_object* v_detailed_79_; uint8_t v_useSorry_80_; uint8_t v_revert_81_; uint8_t v_funCC_82_; uint8_t v_reducible_83_; lean_object* v_maxSuggestions_84_; uint8_t v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v_ctx_11_ = lean_ctor_get(v_a_2_, 1);
v_config_12_ = lean_ctor_get(v_ctx_11_, 4);
v_toContext_13_ = lean_ctor_get(v_a_2_, 0);
v_sctx_14_ = lean_ctor_get(v_a_2_, 2);
v_methods_15_ = lean_ctor_get(v_a_2_, 3);
v_params_16_ = lean_ctor_get(v_a_2_, 4);
v_sym_17_ = lean_ctor_get_uint8(v_a_2_, sizeof(void*)*5);
v_simp_18_ = lean_ctor_get(v_ctx_11_, 0);
v_simpMethods_19_ = lean_ctor_get(v_ctx_11_, 1);
v_symSimpMethods_20_ = lean_ctor_get(v_ctx_11_, 2);
v_symDSimpMethods_21_ = lean_ctor_get(v_ctx_11_, 3);
v_identity_22_ = lean_ctor_get(v_ctx_11_, 5);
v_activeSolvers_23_ = lean_ctor_get(v_ctx_11_, 6);
v_anchorRefs_x3f_24_ = lean_ctor_get(v_ctx_11_, 7);
v_anchors_25_ = lean_ctor_get_uint8(v_ctx_11_, sizeof(void*)*12);
v_cheapCases_26_ = lean_ctor_get_uint8(v_ctx_11_, sizeof(void*)*12 + 1);
v_reportMVarIssue_27_ = lean_ctor_get_uint8(v_ctx_11_, sizeof(void*)*12 + 2);
v_splitSource_28_ = lean_ctor_get(v_ctx_11_, 8);
v_ematchDiagSource_29_ = lean_ctor_get(v_ctx_11_, 9);
v_symPrios_30_ = lean_ctor_get(v_ctx_11_, 10);
v_extensions_31_ = lean_ctor_get(v_ctx_11_, 11);
v_debug_32_ = lean_ctor_get_uint8(v_ctx_11_, sizeof(void*)*12 + 3);
v_ematchDiag_33_ = lean_ctor_get_uint8(v_ctx_11_, sizeof(void*)*12 + 4);
v_markInstances_34_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 1);
v_lax_35_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 2);
v_suggestions_36_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 3);
v_locals_37_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 4);
v_branches_38_ = lean_ctor_get(v_config_12_, 0);
v_splits_39_ = lean_ctor_get(v_config_12_, 1);
v_ematch_40_ = lean_ctor_get(v_config_12_, 2);
v_gen_41_ = lean_ctor_get(v_config_12_, 3);
v_genLocal_42_ = lean_ctor_get(v_config_12_, 4);
v_instances_43_ = lean_ctor_get(v_config_12_, 5);
v_matchEqs_44_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 5);
v_splitMatch_45_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 6);
v_splitIte_46_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 7);
v_splitIndPred_47_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 8);
v_splitImp_48_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 9);
v_canonHeartbeats_49_ = lean_ctor_get(v_config_12_, 6);
v_ext_50_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 10);
v_extAll_51_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 11);
v_etaStruct_52_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 12);
v_funext_53_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 13);
v_lookahead_54_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 14);
v_verbose_55_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 15);
v_clean_56_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 16);
v_qlia_57_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 17);
v_mbtc_58_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 18);
v_zetaDelta_59_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 19);
v_zeta_60_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 20);
v_distrib_61_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 21);
v_maxChar_62_ = lean_ctor_get(v_config_12_, 7);
v_ring_63_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 22);
v_ringSteps_64_ = lean_ctor_get(v_config_12_, 8);
v_ringMaxDegree_65_ = lean_ctor_get(v_config_12_, 9);
v_linarith_66_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 23);
v_lia_67_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 24);
v_liaSteps_68_ = lean_ctor_get(v_config_12_, 10);
v_liaReorders_69_ = lean_ctor_get(v_config_12_, 11);
v_liaReorderCases_70_ = lean_ctor_get(v_config_12_, 12);
v_hom_71_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 25);
v_ac_72_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 26);
v_acSteps_73_ = lean_ctor_get(v_config_12_, 13);
v_exp_74_ = lean_ctor_get(v_config_12_, 14);
v_abstractProof_75_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 27);
v_inj_76_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 28);
v_order_77_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 29);
v_min_78_ = lean_ctor_get(v_config_12_, 15);
v_detailed_79_ = lean_ctor_get(v_config_12_, 16);
v_useSorry_80_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 30);
v_revert_81_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 31);
v_funCC_82_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 32);
v_reducible_83_ = lean_ctor_get_uint8(v_config_12_, sizeof(void*)*18 + 33);
v_maxSuggestions_84_ = lean_ctor_get(v_config_12_, 17);
v___x_85_ = 1;
lean_inc(v_maxSuggestions_84_);
lean_inc(v_detailed_79_);
lean_inc(v_min_78_);
lean_inc(v_exp_74_);
lean_inc(v_acSteps_73_);
lean_inc(v_liaReorderCases_70_);
lean_inc(v_liaReorders_69_);
lean_inc(v_liaSteps_68_);
lean_inc(v_ringMaxDegree_65_);
lean_inc(v_ringSteps_64_);
lean_inc(v_maxChar_62_);
lean_inc(v_canonHeartbeats_49_);
lean_inc(v_instances_43_);
lean_inc(v_genLocal_42_);
lean_inc(v_gen_41_);
lean_inc(v_ematch_40_);
lean_inc(v_splits_39_);
lean_inc(v_branches_38_);
v___x_86_ = lean_alloc_ctor(0, 18, 34);
lean_ctor_set(v___x_86_, 0, v_branches_38_);
lean_ctor_set(v___x_86_, 1, v_splits_39_);
lean_ctor_set(v___x_86_, 2, v_ematch_40_);
lean_ctor_set(v___x_86_, 3, v_gen_41_);
lean_ctor_set(v___x_86_, 4, v_genLocal_42_);
lean_ctor_set(v___x_86_, 5, v_instances_43_);
lean_ctor_set(v___x_86_, 6, v_canonHeartbeats_49_);
lean_ctor_set(v___x_86_, 7, v_maxChar_62_);
lean_ctor_set(v___x_86_, 8, v_ringSteps_64_);
lean_ctor_set(v___x_86_, 9, v_ringMaxDegree_65_);
lean_ctor_set(v___x_86_, 10, v_liaSteps_68_);
lean_ctor_set(v___x_86_, 11, v_liaReorders_69_);
lean_ctor_set(v___x_86_, 12, v_liaReorderCases_70_);
lean_ctor_set(v___x_86_, 13, v_acSteps_73_);
lean_ctor_set(v___x_86_, 14, v_exp_74_);
lean_ctor_set(v___x_86_, 15, v_min_78_);
lean_ctor_set(v___x_86_, 16, v_detailed_79_);
lean_ctor_set(v___x_86_, 17, v_maxSuggestions_84_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18, v___x_85_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 1, v_markInstances_34_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 2, v_lax_35_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 3, v_suggestions_36_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 4, v_locals_37_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 5, v_matchEqs_44_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 6, v_splitMatch_45_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 7, v_splitIte_46_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 8, v_splitIndPred_47_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 9, v_splitImp_48_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 10, v_ext_50_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 11, v_extAll_51_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 12, v_etaStruct_52_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 13, v_funext_53_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 14, v_lookahead_54_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 15, v_verbose_55_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 16, v_clean_56_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 17, v_qlia_57_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 18, v_mbtc_58_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 19, v_zetaDelta_59_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 20, v_zeta_60_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 21, v_distrib_61_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 22, v_ring_63_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 23, v_linarith_66_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 24, v_lia_67_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 25, v_hom_71_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 26, v_ac_72_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 27, v_abstractProof_75_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 28, v_inj_76_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 29, v_order_77_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 30, v_useSorry_80_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 31, v_revert_81_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 32, v_funCC_82_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*18 + 33, v_reducible_83_);
lean_inc_ref(v_extensions_31_);
lean_inc_ref(v_symPrios_30_);
lean_inc(v_ematchDiagSource_29_);
lean_inc(v_splitSource_28_);
lean_inc(v_anchorRefs_x3f_24_);
lean_inc_ref(v_activeSolvers_23_);
lean_inc(v_identity_22_);
lean_inc_ref(v_symDSimpMethods_21_);
lean_inc_ref(v_symSimpMethods_20_);
lean_inc_ref(v_simpMethods_19_);
lean_inc_ref(v_simp_18_);
v___x_87_ = lean_alloc_ctor(0, 12, 5);
lean_ctor_set(v___x_87_, 0, v_simp_18_);
lean_ctor_set(v___x_87_, 1, v_simpMethods_19_);
lean_ctor_set(v___x_87_, 2, v_symSimpMethods_20_);
lean_ctor_set(v___x_87_, 3, v_symDSimpMethods_21_);
lean_ctor_set(v___x_87_, 4, v___x_86_);
lean_ctor_set(v___x_87_, 5, v_identity_22_);
lean_ctor_set(v___x_87_, 6, v_activeSolvers_23_);
lean_ctor_set(v___x_87_, 7, v_anchorRefs_x3f_24_);
lean_ctor_set(v___x_87_, 8, v_splitSource_28_);
lean_ctor_set(v___x_87_, 9, v_ematchDiagSource_29_);
lean_ctor_set(v___x_87_, 10, v_symPrios_30_);
lean_ctor_set(v___x_87_, 11, v_extensions_31_);
lean_ctor_set_uint8(v___x_87_, sizeof(void*)*12, v_anchors_25_);
lean_ctor_set_uint8(v___x_87_, sizeof(void*)*12 + 1, v_cheapCases_26_);
lean_ctor_set_uint8(v___x_87_, sizeof(void*)*12 + 2, v_reportMVarIssue_27_);
lean_ctor_set_uint8(v___x_87_, sizeof(void*)*12 + 3, v_debug_32_);
lean_ctor_set_uint8(v___x_87_, sizeof(void*)*12 + 4, v_ematchDiag_33_);
lean_inc_ref(v_params_16_);
lean_inc_ref(v_methods_15_);
lean_inc_ref(v_sctx_14_);
lean_inc_ref(v_toContext_13_);
v___x_88_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_88_, 0, v_toContext_13_);
lean_ctor_set(v___x_88_, 1, v___x_87_);
lean_ctor_set(v___x_88_, 2, v_sctx_14_);
lean_ctor_set(v___x_88_, 3, v_methods_15_);
lean_ctor_set(v___x_88_, 4, v_params_16_);
lean_ctor_set_uint8(v___x_88_, sizeof(void*)*5, v_sym_17_);
lean_inc(v_a_9_);
lean_inc_ref(v_a_8_);
lean_inc(v_a_7_);
lean_inc_ref(v_a_6_);
lean_inc(v_a_5_);
lean_inc_ref(v_a_4_);
lean_inc(v_a_3_);
v___x_89_ = lean_apply_9(v_x_1_, v___x_88_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, v_a_9_, lean_box(0));
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_withTracing___redArg___boxed(lean_object* v_x_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_withTracing___redArg(v_x_90_, v_a_91_, v_a_92_, v_a_93_, v_a_94_, v_a_95_, v_a_96_, v_a_97_, v_a_98_);
lean_dec(v_a_98_);
lean_dec_ref(v_a_97_);
lean_dec(v_a_96_);
lean_dec_ref(v_a_95_);
lean_dec(v_a_94_);
lean_dec_ref(v_a_93_);
lean_dec(v_a_92_);
lean_dec_ref(v_a_91_);
return v_res_100_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_withTracing(lean_object* v_00_u03b1_101_, lean_object* v_x_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_){
_start:
{
lean_object* v___x_112_; 
v___x_112_ = l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_withTracing___redArg(v_x_102_, v_a_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_withTracing___boxed(lean_object* v_00_u03b1_113_, lean_object* v_x_114_, lean_object* v_a_115_, lean_object* v_a_116_, lean_object* v_a_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_withTracing(v_00_u03b1_113_, v_x_114_, v_a_115_, v_a_116_, v_a_117_, v_a_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_);
lean_dec(v_a_122_);
lean_dec_ref(v_a_121_);
lean_dec(v_a_120_);
lean_dec_ref(v_a_119_);
lean_dec(v_a_118_);
lean_dec_ref(v_a_117_);
lean_dec(v_a_116_);
lean_dec_ref(v_a_115_);
return v_res_124_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit_spec__0(lean_object* v_opts_125_, lean_object* v_opt_126_){
_start:
{
lean_object* v_name_127_; lean_object* v_defValue_128_; lean_object* v_map_129_; lean_object* v___x_130_; 
v_name_127_ = lean_ctor_get(v_opt_126_, 0);
v_defValue_128_ = lean_ctor_get(v_opt_126_, 1);
v_map_129_ = lean_ctor_get(v_opts_125_, 0);
v___x_130_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_129_, v_name_127_);
if (lean_obj_tag(v___x_130_) == 0)
{
uint8_t v___x_131_; 
v___x_131_ = lean_unbox(v_defValue_128_);
return v___x_131_;
}
else
{
lean_object* v_val_132_; 
v_val_132_ = lean_ctor_get(v___x_130_, 0);
lean_inc(v_val_132_);
lean_dec_ref_known(v___x_130_, 1);
if (lean_obj_tag(v_val_132_) == 1)
{
uint8_t v_v_133_; 
v_v_133_ = lean_ctor_get_uint8(v_val_132_, 0);
lean_dec_ref_known(v_val_132_, 0);
return v_v_133_;
}
else
{
uint8_t v___x_134_; 
lean_dec(v_val_132_);
v___x_134_ = lean_unbox(v_defValue_128_);
return v___x_134_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit_spec__0___boxed(lean_object* v_opts_135_, lean_object* v_opt_136_){
_start:
{
uint8_t v_res_137_; lean_object* v_r_138_; 
v_res_137_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit_spec__0(v_opts_135_, v_opt_136_);
lean_dec_ref(v_opt_136_);
lean_dec_ref(v_opts_135_);
v_r_138_ = lean_box(v_res_137_);
return v_r_138_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__13(void){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = l_Array_mkArray0___redArg();
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit(lean_object* v_goal_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_){
_start:
{
lean_object* v_seq_177_; lean_object* v_goal_178_; lean_object* v_seq_181_; lean_object* v___y_183_; uint8_t v___y_184_; lean_object* v___y_185_; lean_object* v___y_186_; lean_object* v_mvarId_187_; lean_object* v___y_188_; lean_object* v___y_189_; lean_object* v___y_190_; lean_object* v___y_191_; lean_object* v___y_192_; lean_object* v___y_193_; lean_object* v___y_194_; lean_object* v___y_195_; lean_object* v___y_196_; lean_object* v_seq_246_; lean_object* v_goal_247_; lean_object* v___y_248_; lean_object* v___y_249_; lean_object* v___y_250_; lean_object* v___y_251_; lean_object* v___y_252_; lean_object* v___y_253_; lean_object* v___y_254_; lean_object* v___y_255_; lean_object* v___y_256_; lean_object* v___x_291_; lean_object* v___x_292_; uint8_t v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v_seq_181_ = lean_box(0);
v___x_291_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_173_);
v___x_292_ = l_Lean_Meta_tactic_hygienic;
v___x_293_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit_spec__0(v___x_291_, v___x_292_);
lean_dec_ref(v___x_291_);
v___x_294_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__7));
lean_inc_ref(v_goal_165_);
v___x_295_ = l_Lean_Meta_Grind_Goal_intros(v_goal_165_, v___x_294_, v___x_293_, v_a_169_, v_a_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_);
if (lean_obj_tag(v___x_295_) == 0)
{
lean_object* v_a_296_; 
v_a_296_ = lean_ctor_get(v___x_295_, 0);
lean_inc(v_a_296_);
lean_dec_ref_known(v___x_295_, 1);
if (lean_obj_tag(v_a_296_) == 1)
{
lean_object* v_goal_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_325_; 
lean_dec_ref(v_goal_165_);
v_goal_297_ = lean_ctor_get(v_a_296_, 1);
v_isSharedCheck_325_ = !lean_is_exclusive(v_a_296_);
if (v_isSharedCheck_325_ == 0)
{
lean_object* v_unused_326_; 
v_unused_326_ = lean_ctor_get(v_a_296_, 0);
lean_dec(v_unused_326_);
v___x_299_ = v_a_296_;
v_isShared_300_ = v_isSharedCheck_325_;
goto v_resetjp_298_;
}
else
{
lean_inc(v_goal_297_);
lean_dec(v_a_296_);
v___x_299_ = lean_box(0);
v_isShared_300_ = v_isSharedCheck_325_;
goto v_resetjp_298_;
}
v_resetjp_298_:
{
lean_object* v___x_301_; 
v___x_301_ = l_Lean_Meta_Grind_Goal_internalizeAll(v_goal_297_, v_a_166_, v_a_167_, v_a_168_, v_a_169_, v_a_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_);
if (lean_obj_tag(v___x_301_) == 0)
{
lean_object* v_a_302_; lean_object* v_ref_303_; uint8_t v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_309_; 
v_a_302_ = lean_ctor_get(v___x_301_, 0);
lean_inc(v_a_302_);
lean_dec_ref_known(v___x_301_, 1);
v_ref_303_ = lean_ctor_get(v_a_173_, 2);
v___x_304_ = 0;
v___x_305_ = l_Lean_SourceInfo_fromRef(v_ref_303_, v___x_304_);
v___x_306_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__9));
v___x_307_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__10));
lean_inc(v___x_305_);
if (v_isShared_300_ == 0)
{
lean_ctor_set_tag(v___x_299_, 2);
lean_ctor_set(v___x_299_, 1, v___x_307_);
lean_ctor_set(v___x_299_, 0, v___x_305_);
v___x_309_ = v___x_299_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v___x_305_);
lean_ctor_set(v_reuseFailAlloc_316_, 1, v___x_307_);
v___x_309_ = v_reuseFailAlloc_316_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_310_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__12));
v___x_311_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__13, &l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__13_once, _init_l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__13);
lean_inc(v___x_305_);
v___x_312_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_312_, 0, v___x_305_);
lean_ctor_set(v___x_312_, 1, v___x_310_);
lean_ctor_set(v___x_312_, 2, v___x_311_);
v___x_313_ = l_Lean_Syntax_node2(v___x_305_, v___x_306_, v___x_309_, v___x_312_);
v___x_314_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_314_, 0, v___x_313_);
lean_ctor_set(v___x_314_, 1, v_seq_181_);
v___x_315_ = l_List_appendTR___redArg(v_seq_181_, v___x_314_);
v_seq_246_ = v___x_315_;
v_goal_247_ = v_a_302_;
v___y_248_ = v_a_166_;
v___y_249_ = v_a_167_;
v___y_250_ = v_a_168_;
v___y_251_ = v_a_169_;
v___y_252_ = v_a_170_;
v___y_253_ = v_a_171_;
v___y_254_ = v_a_172_;
v___y_255_ = v_a_173_;
v___y_256_ = v_a_174_;
goto v___jp_245_;
}
}
else
{
lean_object* v_a_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_324_; 
lean_del_object(v___x_299_);
v_a_317_ = lean_ctor_get(v___x_301_, 0);
v_isSharedCheck_324_ = !lean_is_exclusive(v___x_301_);
if (v_isSharedCheck_324_ == 0)
{
v___x_319_ = v___x_301_;
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_a_317_);
lean_dec(v___x_301_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
lean_object* v___x_322_; 
if (v_isShared_320_ == 0)
{
v___x_322_ = v___x_319_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v_a_317_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
}
}
}
else
{
lean_dec(v_a_296_);
v_seq_246_ = v_seq_181_;
v_goal_247_ = v_goal_165_;
v___y_248_ = v_a_166_;
v___y_249_ = v_a_167_;
v___y_250_ = v_a_168_;
v___y_251_ = v_a_169_;
v___y_252_ = v_a_170_;
v___y_253_ = v_a_171_;
v___y_254_ = v_a_172_;
v___y_255_ = v_a_173_;
v___y_256_ = v_a_174_;
goto v___jp_245_;
}
}
else
{
lean_object* v_a_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_334_; 
lean_dec_ref(v_goal_165_);
v_a_327_ = lean_ctor_get(v___x_295_, 0);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_295_);
if (v_isSharedCheck_334_ == 0)
{
v___x_329_ = v___x_295_;
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_a_327_);
lean_dec(v___x_295_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v___x_332_; 
if (v_isShared_330_ == 0)
{
v___x_332_ = v___x_329_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v_a_327_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
return v___x_332_;
}
}
}
v___jp_176_:
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_179_, 0, v_seq_177_);
lean_ctor_set(v___x_179_, 1, v_goal_178_);
v___x_180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_180_, 0, v___x_179_);
return v___x_180_;
}
v___jp_182_:
{
lean_object* v___x_197_; 
v___x_197_ = l_Lean_MVarId_byContra_x3f(v_mvarId_187_, v___y_193_, v___y_194_, v___y_195_, v___y_196_);
if (lean_obj_tag(v___x_197_) == 0)
{
lean_object* v_a_198_; 
v_a_198_ = lean_ctor_get(v___x_197_, 0);
lean_inc(v_a_198_);
lean_dec_ref_known(v___x_197_, 1);
if (lean_obj_tag(v_a_198_) == 1)
{
lean_object* v_val_199_; lean_object* v___x_200_; 
lean_dec_ref(v___y_183_);
v_val_199_ = lean_ctor_get(v_a_198_, 0);
lean_inc(v_val_199_);
lean_dec_ref_known(v_a_198_, 1);
v___x_200_ = l_Lean_Meta_intro1Core(v_val_199_, v___y_184_, v___y_193_, v___y_194_, v___y_195_, v___y_196_);
if (lean_obj_tag(v___x_200_) == 0)
{
lean_object* v_a_201_; lean_object* v_snd_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_227_; 
v_a_201_ = lean_ctor_get(v___x_200_, 0);
lean_inc(v_a_201_);
lean_dec_ref_known(v___x_200_, 1);
v_snd_202_ = lean_ctor_get(v_a_201_, 1);
v_isSharedCheck_227_ = !lean_is_exclusive(v_a_201_);
if (v_isSharedCheck_227_ == 0)
{
lean_object* v_unused_228_; 
v_unused_228_ = lean_ctor_get(v_a_201_, 0);
lean_dec(v_unused_228_);
v___x_204_ = v_a_201_;
v_isShared_205_ = v_isSharedCheck_227_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_snd_202_);
lean_dec(v_a_201_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_227_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
lean_object* v___x_207_; 
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___y_186_);
v___x_207_ = v___x_204_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v___y_186_);
lean_ctor_set(v_reuseFailAlloc_226_, 1, v_snd_202_);
v___x_207_ = v_reuseFailAlloc_226_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
lean_object* v___x_208_; 
v___x_208_ = l_Lean_Meta_Grind_Goal_internalizeAll(v___x_207_, v___y_188_, v___y_189_, v___y_190_, v___y_191_, v___y_192_, v___y_193_, v___y_194_, v___y_195_, v___y_196_);
if (lean_obj_tag(v___x_208_) == 0)
{
lean_object* v_a_209_; lean_object* v_ref_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v_a_209_ = lean_ctor_get(v___x_208_, 0);
lean_inc(v_a_209_);
lean_dec_ref_known(v___x_208_, 1);
v_ref_210_ = lean_ctor_get(v___y_195_, 2);
v___x_211_ = l_Lean_SourceInfo_fromRef(v_ref_210_, v___y_184_);
v___x_212_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__5));
v___x_213_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__6));
lean_inc(v___x_211_);
v___x_214_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_214_, 0, v___x_211_);
lean_ctor_set(v___x_214_, 1, v___x_213_);
v___x_215_ = l_Lean_Syntax_node1(v___x_211_, v___x_212_, v___x_214_);
v___x_216_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_216_, 0, v___x_215_);
lean_ctor_set(v___x_216_, 1, v_seq_181_);
v___x_217_ = l_List_appendTR___redArg(v___y_185_, v___x_216_);
v_seq_177_ = v___x_217_;
v_goal_178_ = v_a_209_;
goto v___jp_176_;
}
else
{
lean_object* v_a_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_225_; 
lean_dec(v___y_185_);
v_a_218_ = lean_ctor_get(v___x_208_, 0);
v_isSharedCheck_225_ = !lean_is_exclusive(v___x_208_);
if (v_isSharedCheck_225_ == 0)
{
v___x_220_ = v___x_208_;
v_isShared_221_ = v_isSharedCheck_225_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_a_218_);
lean_dec(v___x_208_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_225_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___x_223_; 
if (v_isShared_221_ == 0)
{
v___x_223_ = v___x_220_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v_a_218_);
v___x_223_ = v_reuseFailAlloc_224_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
return v___x_223_;
}
}
}
}
}
}
else
{
lean_object* v_a_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_236_; 
lean_dec_ref(v___y_186_);
lean_dec(v___y_185_);
v_a_229_ = lean_ctor_get(v___x_200_, 0);
v_isSharedCheck_236_ = !lean_is_exclusive(v___x_200_);
if (v_isSharedCheck_236_ == 0)
{
v___x_231_ = v___x_200_;
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_a_229_);
lean_dec(v___x_200_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_234_; 
if (v_isShared_232_ == 0)
{
v___x_234_ = v___x_231_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v_a_229_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
}
}
else
{
lean_dec(v_a_198_);
lean_dec_ref(v___y_186_);
v_seq_177_ = v___y_185_;
v_goal_178_ = v___y_183_;
goto v___jp_176_;
}
}
else
{
lean_object* v_a_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_244_; 
lean_dec_ref(v___y_186_);
lean_dec(v___y_185_);
lean_dec_ref(v___y_183_);
v_a_237_ = lean_ctor_get(v___x_197_, 0);
v_isSharedCheck_244_ = !lean_is_exclusive(v___x_197_);
if (v_isSharedCheck_244_ == 0)
{
v___x_239_ = v___x_197_;
v_isShared_240_ = v_isSharedCheck_244_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_a_237_);
lean_dec(v___x_197_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_244_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v___x_242_; 
if (v_isShared_240_ == 0)
{
v___x_242_ = v___x_239_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v_a_237_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
return v___x_242_;
}
}
}
}
v___jp_245_:
{
lean_object* v_toGoalState_257_; lean_object* v_mvarId_258_; lean_object* v___x_259_; 
v_toGoalState_257_ = lean_ctor_get(v_goal_247_, 0);
v_mvarId_258_ = lean_ctor_get(v_goal_247_, 1);
lean_inc(v_mvarId_258_);
v___x_259_ = l_Lean_MVarId_getType(v_mvarId_258_, v___y_253_, v___y_254_, v___y_255_, v___y_256_);
if (lean_obj_tag(v___x_259_) == 0)
{
lean_object* v_a_260_; uint8_t v___x_261_; 
v_a_260_ = lean_ctor_get(v___x_259_, 0);
lean_inc(v_a_260_);
lean_dec_ref_known(v___x_259_, 1);
v___x_261_ = l_Lean_Expr_isFalse(v_a_260_);
if (v___x_261_ == 0)
{
lean_object* v___x_262_; 
lean_inc_ref(v_toGoalState_257_);
v___x_262_ = l_Lean_Meta_isProp(v_a_260_, v___y_253_, v___y_254_, v___y_255_, v___y_256_);
if (lean_obj_tag(v___x_262_) == 0)
{
lean_object* v_a_263_; uint8_t v___x_264_; 
v_a_263_ = lean_ctor_get(v___x_262_, 0);
lean_inc(v_a_263_);
lean_dec_ref_known(v___x_262_, 1);
v___x_264_ = lean_unbox(v_a_263_);
lean_dec(v_a_263_);
if (v___x_264_ == 0)
{
lean_object* v___x_265_; 
lean_inc(v_mvarId_258_);
v___x_265_ = l_Lean_MVarId_exfalso(v_mvarId_258_, v___y_253_, v___y_254_, v___y_255_, v___y_256_);
if (lean_obj_tag(v___x_265_) == 0)
{
lean_object* v_a_266_; 
v_a_266_ = lean_ctor_get(v___x_265_, 0);
lean_inc(v_a_266_);
lean_dec_ref_known(v___x_265_, 1);
v___y_183_ = v_goal_247_;
v___y_184_ = v___x_261_;
v___y_185_ = v_seq_246_;
v___y_186_ = v_toGoalState_257_;
v_mvarId_187_ = v_a_266_;
v___y_188_ = v___y_248_;
v___y_189_ = v___y_249_;
v___y_190_ = v___y_250_;
v___y_191_ = v___y_251_;
v___y_192_ = v___y_252_;
v___y_193_ = v___y_253_;
v___y_194_ = v___y_254_;
v___y_195_ = v___y_255_;
v___y_196_ = v___y_256_;
goto v___jp_182_;
}
else
{
lean_object* v_a_267_; lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_274_; 
lean_dec_ref(v_toGoalState_257_);
lean_dec_ref(v_goal_247_);
lean_dec(v_seq_246_);
v_a_267_ = lean_ctor_get(v___x_265_, 0);
v_isSharedCheck_274_ = !lean_is_exclusive(v___x_265_);
if (v_isSharedCheck_274_ == 0)
{
v___x_269_ = v___x_265_;
v_isShared_270_ = v_isSharedCheck_274_;
goto v_resetjp_268_;
}
else
{
lean_inc(v_a_267_);
lean_dec(v___x_265_);
v___x_269_ = lean_box(0);
v_isShared_270_ = v_isSharedCheck_274_;
goto v_resetjp_268_;
}
v_resetjp_268_:
{
lean_object* v___x_272_; 
if (v_isShared_270_ == 0)
{
v___x_272_ = v___x_269_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v_a_267_);
v___x_272_ = v_reuseFailAlloc_273_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
return v___x_272_;
}
}
}
}
else
{
lean_inc(v_mvarId_258_);
v___y_183_ = v_goal_247_;
v___y_184_ = v___x_261_;
v___y_185_ = v_seq_246_;
v___y_186_ = v_toGoalState_257_;
v_mvarId_187_ = v_mvarId_258_;
v___y_188_ = v___y_248_;
v___y_189_ = v___y_249_;
v___y_190_ = v___y_250_;
v___y_191_ = v___y_251_;
v___y_192_ = v___y_252_;
v___y_193_ = v___y_253_;
v___y_194_ = v___y_254_;
v___y_195_ = v___y_255_;
v___y_196_ = v___y_256_;
goto v___jp_182_;
}
}
else
{
lean_object* v_a_275_; lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_282_; 
lean_dec_ref(v_toGoalState_257_);
lean_dec_ref(v_goal_247_);
lean_dec(v_seq_246_);
v_a_275_ = lean_ctor_get(v___x_262_, 0);
v_isSharedCheck_282_ = !lean_is_exclusive(v___x_262_);
if (v_isSharedCheck_282_ == 0)
{
v___x_277_ = v___x_262_;
v_isShared_278_ = v_isSharedCheck_282_;
goto v_resetjp_276_;
}
else
{
lean_inc(v_a_275_);
lean_dec(v___x_262_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_282_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
lean_object* v___x_280_; 
if (v_isShared_278_ == 0)
{
v___x_280_ = v___x_277_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v_a_275_);
v___x_280_ = v_reuseFailAlloc_281_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
return v___x_280_;
}
}
}
}
else
{
lean_dec(v_a_260_);
v_seq_177_ = v_seq_246_;
v_goal_178_ = v_goal_247_;
goto v___jp_176_;
}
}
else
{
lean_object* v_a_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_290_; 
lean_dec_ref(v_goal_247_);
lean_dec(v_seq_246_);
v_a_283_ = lean_ctor_get(v___x_259_, 0);
v_isSharedCheck_290_ = !lean_is_exclusive(v___x_259_);
if (v_isSharedCheck_290_ == 0)
{
v___x_285_ = v___x_259_;
v_isShared_286_ = v_isSharedCheck_290_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_a_283_);
lean_dec(v___x_259_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_290_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
lean_object* v___x_288_; 
if (v_isShared_286_ == 0)
{
v___x_288_ = v___x_285_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v_a_283_);
v___x_288_ = v_reuseFailAlloc_289_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
return v___x_288_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___boxed(lean_object* v_goal_335_, lean_object* v_a_336_, lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v_a_339_, lean_object* v_a_340_, lean_object* v_a_341_, lean_object* v_a_342_, lean_object* v_a_343_, lean_object* v_a_344_, lean_object* v_a_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit(v_goal_335_, v_a_336_, v_a_337_, v_a_338_, v_a_339_, v_a_340_, v_a_341_, v_a_342_, v_a_343_, v_a_344_);
lean_dec(v_a_344_);
lean_dec_ref(v_a_343_);
lean_dec(v_a_342_);
lean_dec_ref(v_a_341_);
lean_dec(v_a_340_);
lean_dec_ref(v_a_339_);
lean_dec(v_a_338_);
lean_dec_ref(v_a_337_);
lean_dec(v_a_336_);
return v_res_346_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_347_ = lean_box(0);
v___x_348_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_349_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
lean_ctor_set(v___x_349_, 1, v___x_347_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__0___redArg(){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_351_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__0___redArg___closed__0);
v___x_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_352_, 0, v___x_351_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__0___redArg___boxed(lean_object* v___y_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__0___redArg();
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__0(lean_object* v_00_u03b1_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_){
_start:
{
lean_object* v___x_365_; 
v___x_365_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__0___redArg();
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__0___boxed(lean_object* v_00_u03b1_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__0(v_00_u03b1_366_, v___y_367_, v___y_368_, v___y_369_, v___y_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_);
lean_dec(v___y_374_);
lean_dec_ref(v___y_373_);
lean_dec(v___y_372_);
lean_dec_ref(v___y_371_);
lean_dec(v___y_370_);
lean_dec_ref(v___y_369_);
lean_dec(v___y_368_);
lean_dec_ref(v___y_367_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__3_spec__4(lean_object* v_msgData_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_){
_start:
{
lean_object* v___x_383_; lean_object* v_env_384_; uint8_t v___x_385_; lean_object* v_env_386_; lean_object* v___x_387_; lean_object* v_toCold_388_; lean_object* v_mctx_389_; lean_object* v_lctx_390_; lean_object* v_options_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_383_ = lean_st_ref_get(v___y_381_);
v_env_384_ = lean_ctor_get(v___x_383_, 0);
lean_inc_ref(v_env_384_);
lean_dec(v___x_383_);
v___x_385_ = 0;
v_env_386_ = l_Lean_Environment_setRecordingDeps(v_env_384_, v___x_385_);
v___x_387_ = lean_st_ref_get(v___y_379_);
v_toCold_388_ = lean_ctor_get(v___y_380_, 0);
v_mctx_389_ = lean_ctor_get(v___x_387_, 0);
lean_inc_ref(v_mctx_389_);
lean_dec(v___x_387_);
v_lctx_390_ = lean_ctor_get(v___y_378_, 2);
v_options_391_ = lean_ctor_get(v_toCold_388_, 2);
lean_inc_ref(v_options_391_);
lean_inc_ref(v_lctx_390_);
v___x_392_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_392_, 0, v_env_386_);
lean_ctor_set(v___x_392_, 1, v_mctx_389_);
lean_ctor_set(v___x_392_, 2, v_lctx_390_);
lean_ctor_set(v___x_392_, 3, v_options_391_);
v___x_393_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_393_, 0, v___x_392_);
lean_ctor_set(v___x_393_, 1, v_msgData_377_);
v___x_394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_394_, 0, v___x_393_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__3_spec__4___boxed(lean_object* v_msgData_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__3_spec__4(v_msgData_395_, v___y_396_, v___y_397_, v___y_398_, v___y_399_);
lean_dec(v___y_399_);
lean_dec_ref(v___y_398_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__3___redArg(lean_object* v_msg_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_){
_start:
{
lean_object* v_ref_408_; lean_object* v___x_409_; lean_object* v_a_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_418_; 
v_ref_408_ = lean_ctor_get(v___y_405_, 2);
v___x_409_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__3_spec__4(v_msg_402_, v___y_403_, v___y_404_, v___y_405_, v___y_406_);
v_a_410_ = lean_ctor_get(v___x_409_, 0);
v_isSharedCheck_418_ = !lean_is_exclusive(v___x_409_);
if (v_isSharedCheck_418_ == 0)
{
v___x_412_ = v___x_409_;
v_isShared_413_ = v_isSharedCheck_418_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_a_410_);
lean_dec(v___x_409_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_418_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_414_; lean_object* v___x_416_; 
lean_inc(v_ref_408_);
v___x_414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_414_, 0, v_ref_408_);
lean_ctor_set(v___x_414_, 1, v_a_410_);
if (v_isShared_413_ == 0)
{
lean_ctor_set_tag(v___x_412_, 1);
lean_ctor_set(v___x_412_, 0, v___x_414_);
v___x_416_ = v___x_412_;
goto v_reusejp_415_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v___x_414_);
v___x_416_ = v_reuseFailAlloc_417_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
return v___x_416_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__3___redArg___boxed(lean_object* v_msg_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__3___redArg(v_msg_419_, v___y_420_, v___y_421_, v___y_422_, v___y_423_);
lean_dec(v___y_423_);
lean_dec_ref(v___y_422_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
return v_res_425_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0(uint8_t v___x_433_, lean_object* v_x_434_){
_start:
{
if (lean_obj_tag(v_x_434_) == 1)
{
lean_object* v_pre_435_; 
v_pre_435_ = lean_ctor_get(v_x_434_, 0);
switch(lean_obj_tag(v_pre_435_))
{
case 1:
{
lean_object* v_pre_436_; 
v_pre_436_ = lean_ctor_get(v_pre_435_, 0);
switch(lean_obj_tag(v_pre_436_))
{
case 0:
{
lean_object* v_str_437_; lean_object* v_str_438_; lean_object* v___x_439_; uint8_t v___x_440_; 
v_str_437_ = lean_ctor_get(v_x_434_, 1);
v_str_438_ = lean_ctor_get(v_pre_435_, 1);
v___x_439_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__0));
v___x_440_ = lean_string_dec_eq(v_str_438_, v___x_439_);
if (v___x_440_ == 0)
{
lean_object* v___x_441_; uint8_t v___x_442_; 
v___x_441_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__2));
v___x_442_ = lean_string_dec_eq(v_str_438_, v___x_441_);
if (v___x_442_ == 0)
{
return v___x_442_;
}
else
{
lean_object* v___x_443_; uint8_t v___x_444_; 
v___x_443_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__1));
v___x_444_ = lean_string_dec_eq(v_str_437_, v___x_443_);
return v___x_444_;
}
}
else
{
lean_object* v___x_445_; uint8_t v___x_446_; 
v___x_445_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__2));
v___x_446_ = lean_string_dec_eq(v_str_437_, v___x_445_);
return v___x_446_;
}
}
case 1:
{
lean_object* v_pre_447_; 
v_pre_447_ = lean_ctor_get(v_pre_436_, 0);
if (lean_obj_tag(v_pre_447_) == 0)
{
lean_object* v_str_448_; lean_object* v_str_449_; lean_object* v_str_450_; lean_object* v___x_451_; uint8_t v___x_452_; 
v_str_448_ = lean_ctor_get(v_x_434_, 1);
v_str_449_ = lean_ctor_get(v_pre_435_, 1);
v_str_450_ = lean_ctor_get(v_pre_436_, 1);
v___x_451_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__3));
v___x_452_ = lean_string_dec_eq(v_str_450_, v___x_451_);
if (v___x_452_ == 0)
{
return v___x_452_;
}
else
{
lean_object* v___x_453_; uint8_t v___x_454_; 
v___x_453_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__4));
v___x_454_ = lean_string_dec_eq(v_str_449_, v___x_453_);
if (v___x_454_ == 0)
{
return v___x_454_;
}
else
{
lean_object* v___x_455_; uint8_t v___x_456_; 
v___x_455_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__5));
v___x_456_ = lean_string_dec_eq(v_str_448_, v___x_455_);
return v___x_456_;
}
}
}
else
{
return v___x_433_;
}
}
default: 
{
return v___x_433_;
}
}
}
case 0:
{
lean_object* v_str_457_; lean_object* v___x_458_; uint8_t v___x_459_; 
v_str_457_ = lean_ctor_get(v_x_434_, 1);
v___x_458_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___closed__6));
v___x_459_ = lean_string_dec_eq(v_str_457_, v___x_458_);
return v___x_459_;
}
default: 
{
return v___x_433_;
}
}
}
else
{
return v___x_433_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0___boxed(lean_object* v___x_460_, lean_object* v_x_461_){
_start:
{
uint8_t v___x_51838__boxed_462_; uint8_t v_res_463_; lean_object* v_r_464_; 
v___x_51838__boxed_462_ = lean_unbox(v___x_460_);
v_res_463_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___lam__0(v___x_51838__boxed_462_, v_x_461_);
lean_dec(v_x_461_);
v_r_464_ = lean_box(v_res_463_);
return v_r_464_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg(lean_object* v_ref_469_, lean_object* v_msgData_470_, uint8_t v_severity_471_, uint8_t v_isSilent_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_){
_start:
{
uint8_t v___y_479_; lean_object* v___y_480_; lean_object* v___y_481_; lean_object* v___y_482_; uint8_t v___y_483_; lean_object* v___y_484_; lean_object* v___y_485_; lean_object* v_toCold_486_; lean_object* v___y_487_; lean_object* v___y_516_; lean_object* v___y_517_; uint8_t v___y_518_; uint8_t v___y_519_; lean_object* v___y_520_; uint8_t v___y_521_; lean_object* v___y_522_; lean_object* v___y_523_; lean_object* v___y_543_; lean_object* v___y_544_; uint8_t v___y_545_; uint8_t v___y_546_; lean_object* v___y_547_; uint8_t v___y_548_; lean_object* v___y_549_; uint8_t v___y_553_; uint8_t v___x_570_; uint8_t v___x_571_; 
v___x_570_ = 2;
v___x_571_ = l_Lean_instBEqMessageSeverity_beq(v_severity_471_, v___x_570_);
if (v___x_571_ == 0)
{
goto v___jp_563_;
}
else
{
uint8_t v___x_572_; 
lean_inc_ref(v_msgData_470_);
v___x_572_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_470_);
if (v___x_572_ == 0)
{
goto v___jp_563_;
}
else
{
lean_object* v___x_573_; lean_object* v___x_574_; 
lean_dec_ref(v_msgData_470_);
v___x_573_ = lean_box(0);
v___x_574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_574_, 0, v___x_573_);
return v___x_574_;
}
}
v___jp_478_:
{
lean_object* v_currNamespace_488_; lean_object* v_openDecls_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v_env_494_; lean_object* v_nextMacroScope_495_; lean_object* v_ngen_496_; lean_object* v_auxDeclNGen_497_; lean_object* v_traceState_498_; lean_object* v_cache_499_; lean_object* v_recordedDeps_500_; lean_object* v_messages_501_; lean_object* v_infoState_502_; lean_object* v_snapshotTasks_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_514_; 
v_currNamespace_488_ = lean_ctor_get(v_toCold_486_, 4);
v_openDecls_489_ = lean_ctor_get(v_toCold_486_, 5);
lean_inc(v_openDecls_489_);
lean_inc(v_currNamespace_488_);
v___x_490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_490_, 0, v_currNamespace_488_);
lean_ctor_set(v___x_490_, 1, v_openDecls_489_);
v___x_491_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_491_, 0, v___x_490_);
lean_ctor_set(v___x_491_, 1, v___y_482_);
lean_inc_ref(v___y_480_);
lean_inc_ref(v___y_485_);
v___x_492_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_492_, 0, v___y_485_);
lean_ctor_set(v___x_492_, 1, v___y_481_);
lean_ctor_set(v___x_492_, 2, v___y_484_);
lean_ctor_set(v___x_492_, 3, v___y_480_);
lean_ctor_set(v___x_492_, 4, v___x_491_);
lean_ctor_set_uint8(v___x_492_, sizeof(void*)*5, v___y_483_);
lean_ctor_set_uint8(v___x_492_, sizeof(void*)*5 + 1, v___y_479_);
lean_ctor_set_uint8(v___x_492_, sizeof(void*)*5 + 2, v_isSilent_472_);
v___x_493_ = lean_st_ref_take(v___y_487_);
v_env_494_ = lean_ctor_get(v___x_493_, 0);
v_nextMacroScope_495_ = lean_ctor_get(v___x_493_, 1);
v_ngen_496_ = lean_ctor_get(v___x_493_, 2);
v_auxDeclNGen_497_ = lean_ctor_get(v___x_493_, 3);
v_traceState_498_ = lean_ctor_get(v___x_493_, 4);
v_cache_499_ = lean_ctor_get(v___x_493_, 5);
v_recordedDeps_500_ = lean_ctor_get(v___x_493_, 6);
v_messages_501_ = lean_ctor_get(v___x_493_, 7);
v_infoState_502_ = lean_ctor_get(v___x_493_, 8);
v_snapshotTasks_503_ = lean_ctor_get(v___x_493_, 9);
v_isSharedCheck_514_ = !lean_is_exclusive(v___x_493_);
if (v_isSharedCheck_514_ == 0)
{
v___x_505_ = v___x_493_;
v_isShared_506_ = v_isSharedCheck_514_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_snapshotTasks_503_);
lean_inc(v_infoState_502_);
lean_inc(v_messages_501_);
lean_inc(v_recordedDeps_500_);
lean_inc(v_cache_499_);
lean_inc(v_traceState_498_);
lean_inc(v_auxDeclNGen_497_);
lean_inc(v_ngen_496_);
lean_inc(v_nextMacroScope_495_);
lean_inc(v_env_494_);
lean_dec(v___x_493_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_514_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_510_; 
v___x_507_ = lean_box(0);
v___x_508_ = l_Lean_MessageLog_add(v___x_492_, v_messages_501_);
if (v_isShared_506_ == 0)
{
lean_ctor_set(v___x_505_, 7, v___x_508_);
v___x_510_ = v___x_505_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v_env_494_);
lean_ctor_set(v_reuseFailAlloc_513_, 1, v_nextMacroScope_495_);
lean_ctor_set(v_reuseFailAlloc_513_, 2, v_ngen_496_);
lean_ctor_set(v_reuseFailAlloc_513_, 3, v_auxDeclNGen_497_);
lean_ctor_set(v_reuseFailAlloc_513_, 4, v_traceState_498_);
lean_ctor_set(v_reuseFailAlloc_513_, 5, v_cache_499_);
lean_ctor_set(v_reuseFailAlloc_513_, 6, v_recordedDeps_500_);
lean_ctor_set(v_reuseFailAlloc_513_, 7, v___x_508_);
lean_ctor_set(v_reuseFailAlloc_513_, 8, v_infoState_502_);
lean_ctor_set(v_reuseFailAlloc_513_, 9, v_snapshotTasks_503_);
v___x_510_ = v_reuseFailAlloc_513_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_511_ = lean_st_ref_put(v___y_487_, v___x_510_);
v___x_512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_512_, 0, v___x_507_);
return v___x_512_;
}
}
}
v___jp_515_:
{
lean_object* v_fileName_524_; lean_object* v_fileMap_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v_a_528_; lean_object* v___x_530_; uint8_t v_isShared_531_; uint8_t v_isSharedCheck_541_; 
v_fileName_524_ = lean_ctor_get(v___y_522_, 0);
v_fileMap_525_ = lean_ctor_get(v___y_522_, 1);
v___x_526_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_470_);
v___x_527_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__3_spec__4(v___x_526_, v___y_473_, v___y_474_, v___y_475_, v___y_476_);
v_a_528_ = lean_ctor_get(v___x_527_, 0);
v_isSharedCheck_541_ = !lean_is_exclusive(v___x_527_);
if (v_isSharedCheck_541_ == 0)
{
v___x_530_ = v___x_527_;
v_isShared_531_ = v_isSharedCheck_541_;
goto v_resetjp_529_;
}
else
{
lean_inc(v_a_528_);
lean_dec(v___x_527_);
v___x_530_ = lean_box(0);
v_isShared_531_ = v_isSharedCheck_541_;
goto v_resetjp_529_;
}
v_resetjp_529_:
{
lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
lean_inc_ref_n(v_fileMap_525_, 2);
v___x_532_ = l_Lean_FileMap_toPosition(v_fileMap_525_, v___y_520_);
lean_dec(v___y_520_);
v___x_533_ = l_Lean_FileMap_toPosition(v_fileMap_525_, v___y_523_);
lean_dec(v___y_523_);
v___x_534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_534_, 0, v___x_533_);
v___x_535_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___closed__0));
if (v___y_521_ == 0)
{
lean_del_object(v___x_530_);
v___y_479_ = v___y_518_;
v___y_480_ = v___x_535_;
v___y_481_ = v___x_532_;
v___y_482_ = v_a_528_;
v___y_483_ = v___y_519_;
v___y_484_ = v___x_534_;
v___y_485_ = v_fileName_524_;
v_toCold_486_ = v___y_517_;
v___y_487_ = v___y_476_;
goto v___jp_478_;
}
else
{
uint8_t v___x_536_; 
lean_inc(v_a_528_);
lean_inc_ref(v___y_516_);
v___x_536_ = l_Lean_MessageData_hasTag(v___y_516_, v_a_528_);
if (v___x_536_ == 0)
{
lean_object* v___x_537_; lean_object* v___x_539_; 
lean_dec_ref_known(v___x_534_, 1);
lean_dec_ref(v___x_532_);
lean_dec(v_a_528_);
v___x_537_ = lean_box(0);
if (v_isShared_531_ == 0)
{
lean_ctor_set(v___x_530_, 0, v___x_537_);
v___x_539_ = v___x_530_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v___x_537_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
return v___x_539_;
}
}
else
{
lean_del_object(v___x_530_);
v___y_479_ = v___y_518_;
v___y_480_ = v___x_535_;
v___y_481_ = v___x_532_;
v___y_482_ = v_a_528_;
v___y_483_ = v___y_519_;
v___y_484_ = v___x_534_;
v___y_485_ = v_fileName_524_;
v_toCold_486_ = v___y_517_;
v___y_487_ = v___y_476_;
goto v___jp_478_;
}
}
}
}
v___jp_542_:
{
lean_object* v___x_550_; 
v___x_550_ = l_Lean_Syntax_getTailPos_x3f(v___y_544_, v___y_545_);
lean_dec(v___y_544_);
if (lean_obj_tag(v___x_550_) == 0)
{
lean_inc(v___y_549_);
v___y_516_ = v___y_543_;
v___y_517_ = v___y_547_;
v___y_518_ = v___y_548_;
v___y_519_ = v___y_545_;
v___y_520_ = v___y_549_;
v___y_521_ = v___y_546_;
v___y_522_ = v___y_547_;
v___y_523_ = v___y_549_;
goto v___jp_515_;
}
else
{
lean_object* v_val_551_; 
v_val_551_ = lean_ctor_get(v___x_550_, 0);
lean_inc(v_val_551_);
lean_dec_ref_known(v___x_550_, 1);
v___y_516_ = v___y_543_;
v___y_517_ = v___y_547_;
v___y_518_ = v___y_548_;
v___y_519_ = v___y_545_;
v___y_520_ = v___y_549_;
v___y_521_ = v___y_546_;
v___y_522_ = v___y_547_;
v___y_523_ = v_val_551_;
goto v___jp_515_;
}
}
v___jp_552_:
{
lean_object* v_toCold_554_; lean_object* v_ref_555_; uint8_t v_suppressElabErrors_556_; lean_object* v_ref_557_; uint8_t v___x_558_; lean_object* v___f_559_; lean_object* v___x_560_; 
v_toCold_554_ = lean_ctor_get(v___y_475_, 0);
v_ref_555_ = lean_ctor_get(v___y_475_, 2);
v_suppressElabErrors_556_ = lean_ctor_get_uint8(v___y_475_, sizeof(void*)*3 + 2);
v_ref_557_ = l_Lean_replaceRef(v_ref_469_, v_ref_555_);
v___x_558_ = 0;
v___f_559_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___closed__1));
v___x_560_ = l_Lean_Syntax_getPos_x3f(v_ref_557_, v___x_558_);
if (lean_obj_tag(v___x_560_) == 0)
{
lean_object* v___x_561_; 
v___x_561_ = lean_unsigned_to_nat(0u);
v___y_543_ = v___f_559_;
v___y_544_ = v_ref_557_;
v___y_545_ = v___x_558_;
v___y_546_ = v_suppressElabErrors_556_;
v___y_547_ = v_toCold_554_;
v___y_548_ = v___y_553_;
v___y_549_ = v___x_561_;
goto v___jp_542_;
}
else
{
lean_object* v_val_562_; 
v_val_562_ = lean_ctor_get(v___x_560_, 0);
lean_inc(v_val_562_);
lean_dec_ref_known(v___x_560_, 1);
v___y_543_ = v___f_559_;
v___y_544_ = v_ref_557_;
v___y_545_ = v___x_558_;
v___y_546_ = v_suppressElabErrors_556_;
v___y_547_ = v_toCold_554_;
v___y_548_ = v___y_553_;
v___y_549_ = v_val_562_;
goto v___jp_542_;
}
}
v___jp_563_:
{
uint8_t v___x_564_; uint8_t v___x_565_; 
v___x_564_ = 1;
v___x_565_ = l_Lean_instBEqMessageSeverity_beq(v_severity_471_, v___x_564_);
if (v___x_565_ == 0)
{
v___y_553_ = v_severity_471_;
goto v___jp_552_;
}
else
{
lean_object* v___x_566_; lean_object* v___x_567_; uint8_t v___x_568_; 
v___x_566_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_475_);
v___x_567_ = l_Lean_warningAsError;
v___x_568_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit_spec__0(v___x_566_, v___x_567_);
lean_dec_ref(v___x_566_);
if (v___x_568_ == 0)
{
v___y_553_ = v_severity_471_;
goto v___jp_552_;
}
else
{
uint8_t v___x_569_; 
v___x_569_ = 2;
v___y_553_ = v___x_569_;
goto v___jp_552_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg___boxed(lean_object* v_ref_575_, lean_object* v_msgData_576_, lean_object* v_severity_577_, lean_object* v_isSilent_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_){
_start:
{
uint8_t v_severity_boxed_584_; uint8_t v_isSilent_boxed_585_; lean_object* v_res_586_; 
v_severity_boxed_584_ = lean_unbox(v_severity_577_);
v_isSilent_boxed_585_ = lean_unbox(v_isSilent_578_);
v_res_586_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg(v_ref_575_, v_msgData_576_, v_severity_boxed_584_, v_isSilent_boxed_585_, v___y_579_, v___y_580_, v___y_581_, v___y_582_);
lean_dec(v___y_582_);
lean_dec_ref(v___y_581_);
lean_dec(v___y_580_);
lean_dec_ref(v___y_579_);
lean_dec(v_ref_575_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2(lean_object* v_msgData_587_, uint8_t v_severity_588_, uint8_t v_isSilent_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_){
_start:
{
lean_object* v_ref_600_; lean_object* v___x_601_; 
v_ref_600_ = lean_ctor_get(v___y_597_, 2);
v___x_601_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg(v_ref_600_, v_msgData_587_, v_severity_588_, v_isSilent_589_, v___y_595_, v___y_596_, v___y_597_, v___y_598_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2___boxed(lean_object* v_msgData_602_, lean_object* v_severity_603_, lean_object* v_isSilent_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_){
_start:
{
uint8_t v_severity_boxed_615_; uint8_t v_isSilent_boxed_616_; lean_object* v_res_617_; 
v_severity_boxed_615_ = lean_unbox(v_severity_603_);
v_isSilent_boxed_616_ = lean_unbox(v_isSilent_604_);
v_res_617_ = l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2(v_msgData_602_, v_severity_boxed_615_, v_isSilent_boxed_616_, v___y_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_, v___y_610_, v___y_611_, v___y_612_, v___y_613_);
lean_dec(v___y_613_);
lean_dec_ref(v___y_612_);
lean_dec(v___y_611_);
lean_dec_ref(v___y_610_);
lean_dec(v___y_609_);
lean_dec_ref(v___y_608_);
lean_dec(v___y_607_);
lean_dec_ref(v___y_606_);
lean_dec(v___y_605_);
return v_res_617_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2(lean_object* v_msgData_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_){
_start:
{
uint8_t v___x_629_; uint8_t v___x_630_; lean_object* v___x_631_; 
v___x_629_ = 1;
v___x_630_ = 0;
v___x_631_ = l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2(v_msgData_618_, v___x_629_, v___x_630_, v___y_619_, v___y_620_, v___y_621_, v___y_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_);
return v___x_631_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2___boxed(lean_object* v_msgData_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_){
_start:
{
lean_object* v_res_643_; 
v_res_643_ = l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2(v_msgData_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_, v___y_637_, v___y_638_, v___y_639_, v___y_640_, v___y_641_);
lean_dec(v___y_641_);
lean_dec_ref(v___y_640_);
lean_dec(v___y_639_);
lean_dec_ref(v___y_638_);
lean_dec(v___y_637_);
lean_dec_ref(v___y_636_);
lean_dec(v___y_635_);
lean_dec_ref(v___y_634_);
lean_dec(v___y_633_);
return v_res_643_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__3(void){
_start:
{
lean_object* v___x_647_; lean_object* v___x_648_; 
v___x_647_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__2));
v___x_648_ = l_Lean_stringToMessageData(v___x_647_);
return v___x_648_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__5(void){
_start:
{
lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_650_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__4));
v___x_651_ = l_Lean_stringToMessageData(v___x_650_);
return v___x_651_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__12(void){
_start:
{
lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_660_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__11));
v___x_661_ = l_Lean_stringToMessageData(v___x_660_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0(lean_object* v___x_662_, lean_object* v_stx_663_, uint8_t v___x_664_, lean_object* v___x_665_, lean_object* v___x_666_, lean_object* v_a_667_, lean_object* v_a_668_, lean_object* v_a_669_, lean_object* v___x_670_, lean_object* v___x_671_, lean_object* v___x_672_, lean_object* v___x_673_, lean_object* v_a_674_, lean_object* v_params_675_, lean_object* v_____x_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_){
_start:
{
lean_object* v_suggestions_688_; lean_object* v___y_689_; lean_object* v___y_690_; lean_object* v_fst_738_; lean_object* v_snd_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_902_; 
v_fst_738_ = lean_ctor_get(v_____x_676_, 0);
v_snd_739_ = lean_ctor_get(v_____x_676_, 1);
v_isSharedCheck_902_ = !lean_is_exclusive(v_____x_676_);
if (v_isSharedCheck_902_ == 0)
{
v___x_741_ = v_____x_676_;
v_isShared_742_ = v_isSharedCheck_902_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_snd_739_);
lean_inc(v_fst_738_);
lean_dec(v_____x_676_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_902_;
goto v_resetjp_740_;
}
v___jp_687_:
{
lean_object* v___x_691_; uint8_t v___x_692_; 
v___x_691_ = lean_array_get_size(v_suggestions_688_);
v___x_692_ = lean_nat_dec_eq(v___x_691_, v___x_662_);
if (v___x_692_ == 0)
{
lean_object* v___x_693_; lean_object* v___x_694_; uint8_t v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_693_ = lean_box(0);
v___x_694_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__0));
v___x_695_ = 4;
v___x_696_ = l_Lean_MessageData_nil;
v___x_697_ = l_Lean_Meta_Tactic_TryThis_addSuggestions___redArg(v_stx_663_, v_suggestions_688_, v___x_693_, v___x_694_, v___x_693_, v___x_695_, v___x_696_, v___y_689_, v___y_690_);
if (lean_obj_tag(v___x_697_) == 0)
{
lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_705_; 
v_isSharedCheck_705_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_705_ == 0)
{
lean_object* v_unused_706_; 
v_unused_706_ = lean_ctor_get(v___x_697_, 0);
lean_dec(v_unused_706_);
v___x_699_ = v___x_697_;
v_isShared_700_ = v_isSharedCheck_705_;
goto v_resetjp_698_;
}
else
{
lean_dec(v___x_697_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_705_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v___x_701_; lean_object* v___x_703_; 
v___x_701_ = lean_box(v___x_664_);
if (v_isShared_700_ == 0)
{
lean_ctor_set(v___x_699_, 0, v___x_701_);
v___x_703_ = v___x_699_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v___x_701_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
return v___x_703_;
}
}
}
else
{
lean_object* v_a_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_714_; 
v_a_707_ = lean_ctor_get(v___x_697_, 0);
v_isSharedCheck_714_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_714_ == 0)
{
v___x_709_ = v___x_697_;
v_isShared_710_ = v_isSharedCheck_714_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_a_707_);
lean_dec(v___x_697_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_714_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
lean_object* v___x_712_; 
if (v_isShared_710_ == 0)
{
v___x_712_ = v___x_709_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v_a_707_);
v___x_712_ = v_reuseFailAlloc_713_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
return v___x_712_;
}
}
}
}
else
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; uint8_t v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; 
v___x_715_ = lean_array_get(v___x_665_, v_suggestions_688_, v___x_666_);
lean_dec_ref(v_suggestions_688_);
v___x_716_ = lean_box(0);
v___x_717_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__1));
v___x_718_ = 4;
v___x_719_ = l_Lean_MessageData_nil;
v___x_720_ = l_Lean_Meta_Tactic_TryThis_addSuggestion(v_stx_663_, v___x_715_, v___x_716_, v___x_717_, v___x_716_, v___x_718_, v___x_719_, v___y_689_, v___y_690_);
if (lean_obj_tag(v___x_720_) == 0)
{
lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_728_; 
v_isSharedCheck_728_ = !lean_is_exclusive(v___x_720_);
if (v_isSharedCheck_728_ == 0)
{
lean_object* v_unused_729_; 
v_unused_729_ = lean_ctor_get(v___x_720_, 0);
lean_dec(v_unused_729_);
v___x_722_ = v___x_720_;
v_isShared_723_ = v_isSharedCheck_728_;
goto v_resetjp_721_;
}
else
{
lean_dec(v___x_720_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_728_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
lean_object* v___x_724_; lean_object* v___x_726_; 
v___x_724_ = lean_box(v___x_664_);
if (v_isShared_723_ == 0)
{
lean_ctor_set(v___x_722_, 0, v___x_724_);
v___x_726_ = v___x_722_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v___x_724_);
v___x_726_ = v_reuseFailAlloc_727_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
return v___x_726_;
}
}
}
else
{
lean_object* v_a_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_737_; 
v_a_730_ = lean_ctor_get(v___x_720_, 0);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_720_);
if (v_isSharedCheck_737_ == 0)
{
v___x_732_ = v___x_720_;
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_a_730_);
lean_dec(v___x_720_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_735_; 
if (v_isShared_733_ == 0)
{
v___x_735_ = v___x_732_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_a_730_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
}
}
v_resetjp_740_:
{
lean_object* v___x_743_; 
v___x_743_ = l_Lean_Meta_Grind_Action_run(v_snd_739_, v_a_667_, v___y_677_, v___y_678_, v___y_679_, v___y_680_, v___y_681_, v___y_682_, v___y_683_, v___y_684_, v___y_685_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_object* v_a_744_; 
v_a_744_ = lean_ctor_get(v___x_743_, 0);
lean_inc(v_a_744_);
lean_dec_ref_known(v___x_743_, 1);
if (lean_obj_tag(v_a_744_) == 0)
{
lean_object* v_seq_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_852_; 
v_seq_745_ = lean_ctor_get(v_a_744_, 0);
v_isSharedCheck_852_ = !lean_is_exclusive(v_a_744_);
if (v_isSharedCheck_852_ == 0)
{
v___x_747_ = v_a_744_;
v_isShared_748_ = v_isSharedCheck_852_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_seq_745_);
lean_dec(v_a_744_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_852_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_749_ = l_List_appendTR___redArg(v_fst_738_, v_seq_745_);
lean_inc(v___x_749_);
v___x_750_ = l_Lean_Meta_Grind_mkFinishTactic(v___x_749_, v_a_668_, v___y_684_, v___y_685_);
if (lean_obj_tag(v___x_750_) == 0)
{
lean_object* v_a_751_; lean_object* v___x_752_; lean_object* v_suggestions_754_; lean_object* v___y_755_; lean_object* v___y_756_; lean_object* v___y_757_; lean_object* v___y_758_; lean_object* v___y_759_; lean_object* v___y_760_; lean_object* v___y_761_; lean_object* v___y_762_; lean_object* v___y_763_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v_suggestions_815_; lean_object* v___y_816_; lean_object* v___y_817_; lean_object* v___y_818_; lean_object* v___y_819_; lean_object* v___y_820_; lean_object* v___y_821_; lean_object* v___y_822_; lean_object* v___y_823_; lean_object* v___y_824_; lean_object* v___x_835_; 
v_a_751_ = lean_ctor_get(v___x_750_, 0);
lean_inc(v_a_751_);
lean_dec_ref_known(v___x_750_, 1);
lean_inc_n(v___x_749_, 2);
v___x_752_ = l_Lean_Meta_Grind_Action_mkGrindSeq(v___x_749_);
v___x_812_ = lean_mk_empty_array_with_capacity(v___x_666_);
v___x_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_813_, 0, v_a_674_);
lean_inc_ref(v_a_669_);
lean_inc_ref(v___x_813_);
v___x_835_ = l_Lean_Meta_Grind_Action_checkSeqAt(v___x_813_, v_a_669_, v___x_749_, v___y_677_, v___y_678_, v___y_679_, v___y_680_, v___y_681_, v___y_682_, v___y_683_, v___y_684_, v___y_685_);
if (lean_obj_tag(v___x_835_) == 0)
{
lean_object* v_a_836_; uint8_t v___x_837_; 
v_a_836_ = lean_ctor_get(v___x_835_, 0);
lean_inc(v_a_836_);
lean_dec_ref_known(v___x_835_, 1);
v___x_837_ = lean_unbox(v_a_836_);
lean_dec(v_a_836_);
if (v___x_837_ == 0)
{
v_suggestions_815_ = v___x_812_;
v___y_816_ = v___y_677_;
v___y_817_ = v___y_678_;
v___y_818_ = v___y_679_;
v___y_819_ = v___y_680_;
v___y_820_ = v___y_681_;
v___y_821_ = v___y_682_;
v___y_822_ = v___y_683_;
v___y_823_ = v___y_684_;
v___y_824_ = v___y_685_;
goto v___jp_814_;
}
else
{
lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
v___x_838_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__6));
lean_inc_ref(v___x_673_);
lean_inc_ref(v___x_672_);
lean_inc_ref(v___x_671_);
lean_inc_ref(v___x_670_);
v___x_839_ = l_Lean_Name_mkStr5(v___x_670_, v___x_671_, v___x_672_, v___x_673_, v___x_838_);
lean_inc(v___x_752_);
v___x_840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_840_, 0, v___x_839_);
lean_ctor_set(v___x_840_, 1, v___x_752_);
v___x_841_ = lean_box(0);
v___x_842_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_842_, 0, v___x_840_);
lean_ctor_set(v___x_842_, 1, v___x_841_);
lean_ctor_set(v___x_842_, 2, v___x_841_);
lean_ctor_set(v___x_842_, 3, v___x_841_);
lean_ctor_set(v___x_842_, 4, v___x_841_);
lean_ctor_set(v___x_842_, 5, v___x_841_);
v___x_843_ = lean_array_push(v___x_812_, v___x_842_);
v_suggestions_815_ = v___x_843_;
v___y_816_ = v___y_677_;
v___y_817_ = v___y_678_;
v___y_818_ = v___y_679_;
v___y_819_ = v___y_680_;
v___y_820_ = v___y_681_;
v___y_821_ = v___y_682_;
v___y_822_ = v___y_683_;
v___y_823_ = v___y_684_;
v___y_824_ = v___y_685_;
goto v___jp_814_;
}
}
else
{
lean_dec_ref_known(v___x_813_, 1);
lean_dec_ref(v___x_812_);
lean_dec(v___x_752_);
lean_dec(v_a_751_);
lean_dec(v___x_749_);
lean_del_object(v___x_747_);
lean_del_object(v___x_741_);
lean_dec_ref(v___x_673_);
lean_dec_ref(v___x_672_);
lean_dec_ref(v___x_671_);
lean_dec_ref(v___x_670_);
lean_dec_ref(v_a_669_);
lean_dec(v_stx_663_);
return v___x_835_;
}
v___jp_753_:
{
lean_object* v___x_764_; uint8_t v___x_765_; 
v___x_764_ = lean_array_get_size(v_suggestions_754_);
v___x_765_ = lean_nat_dec_eq(v___x_764_, v___x_666_);
if (v___x_765_ == 0)
{
lean_dec(v___x_752_);
lean_dec(v___x_749_);
lean_del_object(v___x_747_);
lean_del_object(v___x_741_);
lean_dec_ref(v___x_673_);
lean_dec_ref(v___x_672_);
lean_dec_ref(v___x_671_);
lean_dec_ref(v___x_670_);
lean_dec_ref(v_a_669_);
v_suggestions_688_ = v_suggestions_754_;
v___y_689_ = v___y_762_;
v___y_690_ = v___y_763_;
goto v___jp_687_;
}
else
{
lean_object* v___x_766_; 
lean_dec_ref(v_suggestions_754_);
v___x_766_ = l_Lean_Meta_Grind_Action_mkGrindNext___redArg(v___x_749_, v___y_762_);
if (lean_obj_tag(v___x_766_) == 0)
{
lean_object* v_a_767_; lean_object* v_mvarId_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_802_; 
v_a_767_ = lean_ctor_get(v___x_766_, 0);
lean_inc(v_a_767_);
lean_dec_ref_known(v___x_766_, 1);
v_mvarId_768_ = lean_ctor_get(v_a_669_, 1);
v_isSharedCheck_802_ = !lean_is_exclusive(v_a_669_);
if (v_isSharedCheck_802_ == 0)
{
lean_object* v_unused_803_; 
v_unused_803_ = lean_ctor_get(v_a_669_, 0);
lean_dec(v_unused_803_);
v___x_770_ = v_a_669_;
v_isShared_771_ = v_isSharedCheck_802_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_mvarId_768_);
lean_dec(v_a_669_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_802_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_776_; 
v___x_772_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__3, &l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__3);
v___x_773_ = l_Lean_MessageData_ofSyntax(v_a_767_);
v___x_774_ = l_Lean_indentD(v___x_773_);
if (v_isShared_771_ == 0)
{
lean_ctor_set_tag(v___x_770_, 7);
lean_ctor_set(v___x_770_, 1, v___x_774_);
lean_ctor_set(v___x_770_, 0, v___x_772_);
v___x_776_ = v___x_770_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v___x_772_);
lean_ctor_set(v_reuseFailAlloc_801_, 1, v___x_774_);
v___x_776_ = v_reuseFailAlloc_801_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
lean_object* v___x_777_; lean_object* v___x_779_; 
v___x_777_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__5, &l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__5);
if (v_isShared_742_ == 0)
{
lean_ctor_set_tag(v___x_741_, 7);
lean_ctor_set(v___x_741_, 1, v___x_777_);
lean_ctor_set(v___x_741_, 0, v___x_776_);
v___x_779_ = v___x_741_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v___x_776_);
lean_ctor_set(v_reuseFailAlloc_800_, 1, v___x_777_);
v___x_779_ = v_reuseFailAlloc_800_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
lean_object* v___x_781_; 
if (v_isShared_748_ == 0)
{
lean_ctor_set_tag(v___x_747_, 1);
lean_ctor_set(v___x_747_, 0, v_mvarId_768_);
v___x_781_ = v___x_747_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v_mvarId_768_);
v___x_781_ = v_reuseFailAlloc_799_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
lean_object* v___x_782_; lean_object* v___x_783_; 
v___x_782_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_782_, 0, v___x_779_);
lean_ctor_set(v___x_782_, 1, v___x_781_);
v___x_783_ = l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2(v___x_782_, v___y_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_, v___y_761_, v___y_762_, v___y_763_);
if (lean_obj_tag(v___x_783_) == 0)
{
lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; 
lean_dec_ref_known(v___x_783_, 1);
v___x_784_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__6));
v___x_785_ = l_Lean_Name_mkStr5(v___x_670_, v___x_671_, v___x_672_, v___x_673_, v___x_784_);
v___x_786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_786_, 0, v___x_785_);
lean_ctor_set(v___x_786_, 1, v___x_752_);
v___x_787_ = lean_box(0);
v___x_788_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_788_, 0, v___x_786_);
lean_ctor_set(v___x_788_, 1, v___x_787_);
lean_ctor_set(v___x_788_, 2, v___x_787_);
lean_ctor_set(v___x_788_, 3, v___x_787_);
lean_ctor_set(v___x_788_, 4, v___x_787_);
lean_ctor_set(v___x_788_, 5, v___x_787_);
v___x_789_ = lean_mk_empty_array_with_capacity(v___x_662_);
v___x_790_ = lean_array_push(v___x_789_, v___x_788_);
v_suggestions_688_ = v___x_790_;
v___y_689_ = v___y_762_;
v___y_690_ = v___y_763_;
goto v___jp_687_;
}
else
{
lean_object* v_a_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_798_; 
lean_dec(v___x_752_);
lean_dec_ref(v___x_673_);
lean_dec_ref(v___x_672_);
lean_dec_ref(v___x_671_);
lean_dec_ref(v___x_670_);
lean_dec(v_stx_663_);
v_a_791_ = lean_ctor_get(v___x_783_, 0);
v_isSharedCheck_798_ = !lean_is_exclusive(v___x_783_);
if (v_isSharedCheck_798_ == 0)
{
v___x_793_ = v___x_783_;
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_a_791_);
lean_dec(v___x_783_);
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
}
}
}
else
{
lean_object* v_a_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_811_; 
lean_dec(v___x_752_);
lean_del_object(v___x_747_);
lean_del_object(v___x_741_);
lean_dec_ref(v___x_673_);
lean_dec_ref(v___x_672_);
lean_dec_ref(v___x_671_);
lean_dec_ref(v___x_670_);
lean_dec_ref(v_a_669_);
lean_dec(v_stx_663_);
v_a_804_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_811_ == 0)
{
v___x_806_ = v___x_766_;
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_a_804_);
lean_dec(v___x_766_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v___x_809_; 
if (v_isShared_807_ == 0)
{
v___x_809_ = v___x_806_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v_a_804_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
return v___x_809_;
}
}
}
}
}
v___jp_814_:
{
lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_825_ = lean_box(0);
lean_inc(v_a_751_);
v___x_826_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_826_, 0, v_a_751_);
lean_ctor_set(v___x_826_, 1, v___x_825_);
lean_inc_ref(v_a_669_);
v___x_827_ = l_Lean_Meta_Grind_Action_checkSeqAt(v___x_813_, v_a_669_, v___x_826_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_);
if (lean_obj_tag(v___x_827_) == 0)
{
lean_object* v_a_828_; uint8_t v___x_829_; 
v_a_828_ = lean_ctor_get(v___x_827_, 0);
lean_inc(v_a_828_);
lean_dec_ref_known(v___x_827_, 1);
v___x_829_ = lean_unbox(v_a_828_);
lean_dec(v_a_828_);
if (v___x_829_ == 0)
{
lean_dec(v_a_751_);
v_suggestions_754_ = v_suggestions_815_;
v___y_755_ = v___y_816_;
v___y_756_ = v___y_817_;
v___y_757_ = v___y_818_;
v___y_758_ = v___y_819_;
v___y_759_ = v___y_820_;
v___y_760_ = v___y_821_;
v___y_761_ = v___y_822_;
v___y_762_ = v___y_823_;
v___y_763_ = v___y_824_;
goto v___jp_753_;
}
else
{
lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; 
v___x_830_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__8));
v___x_831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_831_, 0, v___x_830_);
lean_ctor_set(v___x_831_, 1, v_a_751_);
v___x_832_ = lean_box(0);
v___x_833_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_833_, 0, v___x_831_);
lean_ctor_set(v___x_833_, 1, v___x_832_);
lean_ctor_set(v___x_833_, 2, v___x_832_);
lean_ctor_set(v___x_833_, 3, v___x_832_);
lean_ctor_set(v___x_833_, 4, v___x_832_);
lean_ctor_set(v___x_833_, 5, v___x_832_);
v___x_834_ = lean_array_push(v_suggestions_815_, v___x_833_);
v_suggestions_754_ = v___x_834_;
v___y_755_ = v___y_816_;
v___y_756_ = v___y_817_;
v___y_757_ = v___y_818_;
v___y_758_ = v___y_819_;
v___y_759_ = v___y_820_;
v___y_760_ = v___y_821_;
v___y_761_ = v___y_822_;
v___y_762_ = v___y_823_;
v___y_763_ = v___y_824_;
goto v___jp_753_;
}
}
else
{
lean_dec_ref(v_suggestions_815_);
lean_dec(v___x_752_);
lean_dec(v_a_751_);
lean_dec(v___x_749_);
lean_del_object(v___x_747_);
lean_del_object(v___x_741_);
lean_dec_ref(v___x_673_);
lean_dec_ref(v___x_672_);
lean_dec_ref(v___x_671_);
lean_dec_ref(v___x_670_);
lean_dec_ref(v_a_669_);
lean_dec(v_stx_663_);
return v___x_827_;
}
}
}
else
{
lean_object* v_a_844_; lean_object* v___x_846_; uint8_t v_isShared_847_; uint8_t v_isSharedCheck_851_; 
lean_dec(v___x_749_);
lean_del_object(v___x_747_);
lean_del_object(v___x_741_);
lean_dec_ref(v_a_674_);
lean_dec_ref(v___x_673_);
lean_dec_ref(v___x_672_);
lean_dec_ref(v___x_671_);
lean_dec_ref(v___x_670_);
lean_dec_ref(v_a_669_);
lean_dec(v_stx_663_);
v_a_844_ = lean_ctor_get(v___x_750_, 0);
v_isSharedCheck_851_ = !lean_is_exclusive(v___x_750_);
if (v_isSharedCheck_851_ == 0)
{
v___x_846_ = v___x_750_;
v_isShared_847_ = v_isSharedCheck_851_;
goto v_resetjp_845_;
}
else
{
lean_inc(v_a_844_);
lean_dec(v___x_750_);
v___x_846_ = lean_box(0);
v_isShared_847_ = v_isSharedCheck_851_;
goto v_resetjp_845_;
}
v_resetjp_845_:
{
lean_object* v___x_849_; 
if (v_isShared_847_ == 0)
{
v___x_849_ = v___x_846_;
goto v_reusejp_848_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v_a_844_);
v___x_849_ = v_reuseFailAlloc_850_;
goto v_reusejp_848_;
}
v_reusejp_848_:
{
return v___x_849_;
}
}
}
}
}
else
{
lean_object* v_gs_853_; lean_object* v___x_855_; uint8_t v_isShared_856_; uint8_t v_isSharedCheck_893_; 
lean_del_object(v___x_741_);
lean_dec(v_fst_738_);
lean_dec_ref(v_a_674_);
lean_dec_ref(v___x_673_);
lean_dec_ref(v___x_672_);
lean_dec_ref(v___x_671_);
lean_dec_ref(v___x_670_);
lean_dec_ref(v_a_669_);
lean_dec(v_stx_663_);
v_gs_853_ = lean_ctor_get(v_a_744_, 0);
v_isSharedCheck_893_ = !lean_is_exclusive(v_a_744_);
if (v_isSharedCheck_893_ == 0)
{
v___x_855_ = v_a_744_;
v_isShared_856_ = v_isSharedCheck_893_;
goto v_resetjp_854_;
}
else
{
lean_inc(v_gs_853_);
lean_dec(v_a_744_);
v___x_855_ = lean_box(0);
v_isShared_856_ = v_isSharedCheck_893_;
goto v_resetjp_854_;
}
v_resetjp_854_:
{
if (lean_obj_tag(v_gs_853_) == 1)
{
lean_object* v_head_857_; lean_object* v___x_859_; 
v_head_857_ = lean_ctor_get(v_gs_853_, 0);
lean_inc(v_head_857_);
lean_dec_ref_known(v_gs_853_, 2);
if (v_isShared_856_ == 0)
{
lean_ctor_set(v___x_855_, 0, v_head_857_);
v___x_859_ = v___x_855_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v_head_857_);
v___x_859_ = v_reuseFailAlloc_890_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
lean_object* v___x_860_; 
v___x_860_ = l_Lean_Meta_Grind_mkResult(v_params_675_, v___x_859_, v___y_677_, v___y_678_, v___y_679_, v___y_680_, v___y_681_, v___y_682_, v___y_683_, v___y_684_, v___y_685_);
if (lean_obj_tag(v___x_860_) == 0)
{
lean_object* v_a_861_; lean_object* v___x_862_; lean_object* v___x_863_; 
v_a_861_ = lean_ctor_get(v___x_860_, 0);
lean_inc(v_a_861_);
lean_dec_ref_known(v___x_860_, 1);
v___x_862_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__10));
v___x_863_ = l_Lean_Meta_Grind_Result_toErrorMessageData(v_a_861_, v___x_862_, v___y_682_, v___y_683_, v___y_684_, v___y_685_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v_a_864_; lean_object* v___x_865_; lean_object* v_a_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_873_; 
v_a_864_ = lean_ctor_get(v___x_863_, 0);
lean_inc(v_a_864_);
lean_dec_ref_known(v___x_863_, 1);
v___x_865_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__3___redArg(v_a_864_, v___y_682_, v___y_683_, v___y_684_, v___y_685_);
v_a_866_ = lean_ctor_get(v___x_865_, 0);
v_isSharedCheck_873_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_873_ == 0)
{
v___x_868_ = v___x_865_;
v_isShared_869_ = v_isSharedCheck_873_;
goto v_resetjp_867_;
}
else
{
lean_inc(v_a_866_);
lean_dec(v___x_865_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_873_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
lean_object* v___x_871_; 
if (v_isShared_869_ == 0)
{
v___x_871_ = v___x_868_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v_a_866_);
v___x_871_ = v_reuseFailAlloc_872_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
return v___x_871_;
}
}
}
else
{
lean_object* v_a_874_; lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_881_; 
v_a_874_ = lean_ctor_get(v___x_863_, 0);
v_isSharedCheck_881_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_881_ == 0)
{
v___x_876_ = v___x_863_;
v_isShared_877_ = v_isSharedCheck_881_;
goto v_resetjp_875_;
}
else
{
lean_inc(v_a_874_);
lean_dec(v___x_863_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_881_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
lean_object* v___x_879_; 
if (v_isShared_877_ == 0)
{
v___x_879_ = v___x_876_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v_a_874_);
v___x_879_ = v_reuseFailAlloc_880_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
return v___x_879_;
}
}
}
}
else
{
lean_object* v_a_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_889_; 
v_a_882_ = lean_ctor_get(v___x_860_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_860_);
if (v_isSharedCheck_889_ == 0)
{
v___x_884_ = v___x_860_;
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_a_882_);
lean_dec(v___x_860_);
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
}
else
{
lean_object* v___x_891_; lean_object* v___x_892_; 
lean_del_object(v___x_855_);
lean_dec(v_gs_853_);
v___x_891_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__12, &l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__12_once, _init_l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___closed__12);
v___x_892_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__3___redArg(v___x_891_, v___y_682_, v___y_683_, v___y_684_, v___y_685_);
return v___x_892_;
}
}
}
}
else
{
lean_object* v_a_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_901_; 
lean_del_object(v___x_741_);
lean_dec(v_fst_738_);
lean_dec_ref(v_a_674_);
lean_dec_ref(v___x_673_);
lean_dec_ref(v___x_672_);
lean_dec_ref(v___x_671_);
lean_dec_ref(v___x_670_);
lean_dec_ref(v_a_669_);
lean_dec(v_stx_663_);
v_a_894_ = lean_ctor_get(v___x_743_, 0);
v_isSharedCheck_901_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_901_ == 0)
{
v___x_896_ = v___x_743_;
v_isShared_897_ = v_isSharedCheck_901_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_a_894_);
lean_dec(v___x_743_);
v___x_896_ = lean_box(0);
v_isShared_897_ = v_isSharedCheck_901_;
goto v_resetjp_895_;
}
v_resetjp_895_:
{
lean_object* v___x_899_; 
if (v_isShared_897_ == 0)
{
v___x_899_ = v___x_896_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v_a_894_);
v___x_899_ = v_reuseFailAlloc_900_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
return v___x_899_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___boxed(lean_object** _args){
lean_object* v___x_903_ = _args[0];
lean_object* v_stx_904_ = _args[1];
lean_object* v___x_905_ = _args[2];
lean_object* v___x_906_ = _args[3];
lean_object* v___x_907_ = _args[4];
lean_object* v_a_908_ = _args[5];
lean_object* v_a_909_ = _args[6];
lean_object* v_a_910_ = _args[7];
lean_object* v___x_911_ = _args[8];
lean_object* v___x_912_ = _args[9];
lean_object* v___x_913_ = _args[10];
lean_object* v___x_914_ = _args[11];
lean_object* v_a_915_ = _args[12];
lean_object* v_params_916_ = _args[13];
lean_object* v_____x_917_ = _args[14];
lean_object* v___y_918_ = _args[15];
lean_object* v___y_919_ = _args[16];
lean_object* v___y_920_ = _args[17];
lean_object* v___y_921_ = _args[18];
lean_object* v___y_922_ = _args[19];
lean_object* v___y_923_ = _args[20];
lean_object* v___y_924_ = _args[21];
lean_object* v___y_925_ = _args[22];
lean_object* v___y_926_ = _args[23];
lean_object* v___y_927_ = _args[24];
_start:
{
uint8_t v___x_52197__boxed_928_; lean_object* v_res_929_; 
v___x_52197__boxed_928_ = lean_unbox(v___x_905_);
v_res_929_ = l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0(v___x_903_, v_stx_904_, v___x_52197__boxed_928_, v___x_906_, v___x_907_, v_a_908_, v_a_909_, v_a_910_, v___x_911_, v___x_912_, v___x_913_, v___x_914_, v_a_915_, v_params_916_, v_____x_917_, v___y_918_, v___y_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_);
lean_dec(v___y_926_);
lean_dec_ref(v___y_925_);
lean_dec(v___y_924_);
lean_dec_ref(v___y_923_);
lean_dec(v___y_922_);
lean_dec_ref(v___y_921_);
lean_dec(v___y_920_);
lean_dec_ref(v___y_919_);
lean_dec(v___y_918_);
lean_dec_ref(v_params_916_);
lean_dec_ref(v_a_909_);
lean_dec(v___x_907_);
lean_dec_ref(v___x_906_);
lean_dec(v___x_903_);
return v_res_929_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__1(uint8_t v_sym_930_, lean_object* v_a_931_, lean_object* v___f_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_){
_start:
{
if (v_sym_930_ == 0)
{
lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; 
v___x_943_ = lean_box(0);
v___x_944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_944_, 0, v___x_943_);
lean_ctor_set(v___x_944_, 1, v_a_931_);
lean_inc(v___y_941_);
lean_inc_ref(v___y_940_);
lean_inc(v___y_939_);
lean_inc_ref(v___y_938_);
lean_inc(v___y_937_);
lean_inc_ref(v___y_936_);
lean_inc(v___y_935_);
lean_inc_ref(v___y_934_);
lean_inc(v___y_933_);
v___x_945_ = lean_apply_11(v___f_932_, v___x_944_, v___y_933_, v___y_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_, v___y_941_, lean_box(0));
return v___x_945_;
}
else
{
lean_object* v___x_946_; 
v___x_946_ = l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit(v_a_931_, v___y_933_, v___y_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_, v___y_941_);
if (lean_obj_tag(v___x_946_) == 0)
{
lean_object* v_a_947_; lean_object* v___x_948_; 
v_a_947_ = lean_ctor_get(v___x_946_, 0);
lean_inc(v_a_947_);
lean_dec_ref_known(v___x_946_, 1);
lean_inc(v___y_941_);
lean_inc_ref(v___y_940_);
lean_inc(v___y_939_);
lean_inc_ref(v___y_938_);
lean_inc(v___y_937_);
lean_inc_ref(v___y_936_);
lean_inc(v___y_935_);
lean_inc_ref(v___y_934_);
lean_inc(v___y_933_);
v___x_948_ = lean_apply_11(v___f_932_, v_a_947_, v___y_933_, v___y_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_, v___y_941_, lean_box(0));
return v___x_948_;
}
else
{
lean_object* v_a_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_956_; 
lean_dec_ref(v___f_932_);
v_a_949_ = lean_ctor_get(v___x_946_, 0);
v_isSharedCheck_956_ = !lean_is_exclusive(v___x_946_);
if (v_isSharedCheck_956_ == 0)
{
v___x_951_ = v___x_946_;
v_isShared_952_ = v_isSharedCheck_956_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_a_949_);
lean_dec(v___x_946_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_956_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v___x_954_; 
if (v_isShared_952_ == 0)
{
v___x_954_ = v___x_951_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v_a_949_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
return v___x_954_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__1___boxed(lean_object* v_sym_957_, lean_object* v_a_958_, lean_object* v___f_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_){
_start:
{
uint8_t v_sym_boxed_970_; lean_object* v_res_971_; 
v_sym_boxed_970_ = lean_unbox(v_sym_957_);
v_res_971_ = l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__1(v_sym_boxed_970_, v_a_958_, v___f_959_, v___y_960_, v___y_961_, v___y_962_, v___y_963_, v___y_964_, v___y_965_, v___y_966_, v___y_967_, v___y_968_);
lean_dec(v___y_968_);
lean_dec_ref(v___y_967_);
lean_dec(v___y_966_);
lean_dec_ref(v___y_965_);
lean_dec(v___y_964_);
lean_dec_ref(v___y_963_);
lean_dec(v___y_962_);
lean_dec_ref(v___y_961_);
lean_dec(v___y_960_);
return v_res_971_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__2(lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_){
_start:
{
lean_object* v___x_982_; 
v___x_982_ = l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(v___y_972_, v___y_973_, v___y_974_, v___y_977_, v___y_978_, v___y_979_, v___y_980_);
if (lean_obj_tag(v___x_982_) == 0)
{
lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_994_; 
v_a_983_ = lean_ctor_get(v___x_982_, 0);
v_isSharedCheck_994_ = !lean_is_exclusive(v___x_982_);
if (v_isSharedCheck_994_ == 0)
{
v___x_985_ = v___x_982_;
v_isShared_986_ = v_isSharedCheck_994_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_dec(v___x_982_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_994_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
uint8_t v___x_987_; 
v___x_987_ = lean_unbox(v_a_983_);
lean_dec(v_a_983_);
if (v___x_987_ == 0)
{
lean_object* v___x_988_; lean_object* v___x_990_; 
v___x_988_ = lean_box(0);
if (v_isShared_986_ == 0)
{
lean_ctor_set(v___x_985_, 0, v___x_988_);
v___x_990_ = v___x_985_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v___x_988_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
return v___x_990_;
}
}
else
{
lean_object* v___x_992_; lean_object* v___x_993_; 
lean_del_object(v___x_985_);
v___x_992_ = lean_box(0);
v___x_993_ = l_Lean_Elab_Tactic_Grind_replaceMainGoal___redArg(v___x_992_, v___y_974_, v___y_977_, v___y_978_, v___y_979_, v___y_980_);
return v___x_993_;
}
}
}
else
{
lean_object* v_a_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1002_; 
v_a_995_ = lean_ctor_get(v___x_982_, 0);
v_isSharedCheck_1002_ = !lean_is_exclusive(v___x_982_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_997_ = v___x_982_;
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_a_995_);
lean_dec(v___x_982_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_1000_; 
if (v_isShared_998_ == 0)
{
v___x_1000_ = v___x_997_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v_a_995_);
v___x_1000_ = v_reuseFailAlloc_1001_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
return v___x_1000_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__2___boxed(lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__2(v___y_1003_, v___y_1004_, v___y_1005_, v___y_1006_, v___y_1007_, v___y_1008_, v___y_1009_, v___y_1010_, v___y_1011_);
lean_dec(v___y_1011_);
lean_dec_ref(v___y_1010_);
lean_dec(v___y_1009_);
lean_dec_ref(v___y_1008_);
lean_dec(v___y_1007_);
lean_dec_ref(v___y_1006_);
lean_dec(v___y_1005_);
lean_dec_ref(v___y_1004_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__3(lean_object* v___x_1014_, lean_object* v___x_1015_, lean_object* v_stx_1016_, uint8_t v___x_1017_, lean_object* v___x_1018_, lean_object* v___x_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_, lean_object* v___x_1022_, lean_object* v___x_1023_, lean_object* v___x_1024_, lean_object* v___x_1025_, lean_object* v_a_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_){
_start:
{
lean_object* v_ref_1036_; lean_object* v___x_1037_; 
v_ref_1036_ = lean_ctor_get(v___y_1033_, 2);
v___x_1037_ = l_Lean_Meta_Grind_Action_mkFinish(v___x_1014_);
if (lean_obj_tag(v___x_1037_) == 0)
{
lean_object* v_a_1038_; lean_object* v___x_1039_; 
v_a_1038_ = lean_ctor_get(v___x_1037_, 0);
lean_inc(v_a_1038_);
lean_dec_ref_known(v___x_1037_, 1);
v___x_1039_ = l_Lean_Elab_Tactic_Grind_getMainGoal___redArg(v___y_1028_, v___y_1031_, v___y_1032_, v___y_1033_, v___y_1034_);
if (lean_obj_tag(v___x_1039_) == 0)
{
lean_object* v_a_1040_; lean_object* v_params_1041_; uint8_t v_sym_1042_; lean_object* v___x_1043_; lean_object* v___f_1044_; lean_object* v___x_1045_; lean_object* v___y_1046_; lean_object* v___f_1047_; lean_object* v___x_1048_; 
v_a_1040_ = lean_ctor_get(v___x_1039_, 0);
lean_inc(v_a_1040_);
lean_dec_ref_known(v___x_1039_, 1);
v_params_1041_ = lean_ctor_get(v___y_1027_, 4);
v_sym_1042_ = lean_ctor_get_uint8(v___y_1027_, sizeof(void*)*5);
v___x_1043_ = lean_box(v___x_1017_);
lean_inc_ref(v_params_1041_);
v___f_1044_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__0___boxed), 25, 14);
lean_closure_set(v___f_1044_, 0, v___x_1015_);
lean_closure_set(v___f_1044_, 1, v_stx_1016_);
lean_closure_set(v___f_1044_, 2, v___x_1043_);
lean_closure_set(v___f_1044_, 3, v___x_1018_);
lean_closure_set(v___f_1044_, 4, v___x_1019_);
lean_closure_set(v___f_1044_, 5, v_a_1038_);
lean_closure_set(v___f_1044_, 6, v_a_1020_);
lean_closure_set(v___f_1044_, 7, v_a_1021_);
lean_closure_set(v___f_1044_, 8, v___x_1022_);
lean_closure_set(v___f_1044_, 9, v___x_1023_);
lean_closure_set(v___f_1044_, 10, v___x_1024_);
lean_closure_set(v___f_1044_, 11, v___x_1025_);
lean_closure_set(v___f_1044_, 12, v_a_1026_);
lean_closure_set(v___f_1044_, 13, v_params_1041_);
v___x_1045_ = lean_box(v_sym_1042_);
v___y_1046_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__1___boxed), 13, 3);
lean_closure_set(v___y_1046_, 0, v___x_1045_);
lean_closure_set(v___y_1046_, 1, v_a_1040_);
lean_closure_set(v___y_1046_, 2, v___f_1044_);
v___f_1047_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__2___boxed), 10, 1);
lean_closure_set(v___f_1047_, 0, v___y_1046_);
v___x_1048_ = l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_withTracing___redArg(v___f_1047_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_, v___y_1034_);
lean_dec_ref(v___y_1027_);
return v___x_1048_;
}
else
{
lean_object* v_a_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1056_; 
lean_dec(v_a_1038_);
lean_dec_ref(v___y_1027_);
lean_dec_ref(v_a_1026_);
lean_dec_ref(v___x_1025_);
lean_dec_ref(v___x_1024_);
lean_dec_ref(v___x_1023_);
lean_dec_ref(v___x_1022_);
lean_dec_ref(v_a_1021_);
lean_dec_ref(v_a_1020_);
lean_dec(v___x_1019_);
lean_dec_ref(v___x_1018_);
lean_dec(v_stx_1016_);
lean_dec(v___x_1015_);
v_a_1049_ = lean_ctor_get(v___x_1039_, 0);
v_isSharedCheck_1056_ = !lean_is_exclusive(v___x_1039_);
if (v_isSharedCheck_1056_ == 0)
{
v___x_1051_ = v___x_1039_;
v_isShared_1052_ = v_isSharedCheck_1056_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_a_1049_);
lean_dec(v___x_1039_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1056_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v___x_1054_; 
if (v_isShared_1052_ == 0)
{
v___x_1054_ = v___x_1051_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v_a_1049_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
return v___x_1054_;
}
}
}
}
else
{
lean_object* v_a_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1068_; 
lean_dec_ref(v___y_1027_);
lean_dec_ref(v_a_1026_);
lean_dec_ref(v___x_1025_);
lean_dec_ref(v___x_1024_);
lean_dec_ref(v___x_1023_);
lean_dec_ref(v___x_1022_);
lean_dec_ref(v_a_1021_);
lean_dec_ref(v_a_1020_);
lean_dec(v___x_1019_);
lean_dec_ref(v___x_1018_);
lean_dec(v_stx_1016_);
lean_dec(v___x_1015_);
v_a_1057_ = lean_ctor_get(v___x_1037_, 0);
v_isSharedCheck_1068_ = !lean_is_exclusive(v___x_1037_);
if (v_isSharedCheck_1068_ == 0)
{
v___x_1059_ = v___x_1037_;
v_isShared_1060_ = v_isSharedCheck_1068_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_a_1057_);
lean_dec(v___x_1037_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1068_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1066_; 
v___x_1061_ = lean_io_error_to_string(v_a_1057_);
v___x_1062_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1062_, 0, v___x_1061_);
v___x_1063_ = l_Lean_MessageData_ofFormat(v___x_1062_);
lean_inc(v_ref_1036_);
v___x_1064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1064_, 0, v_ref_1036_);
lean_ctor_set(v___x_1064_, 1, v___x_1063_);
if (v_isShared_1060_ == 0)
{
lean_ctor_set(v___x_1059_, 0, v___x_1064_);
v___x_1066_ = v___x_1059_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v___x_1064_);
v___x_1066_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
return v___x_1066_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__3___boxed(lean_object** _args){
lean_object* v___x_1069_ = _args[0];
lean_object* v___x_1070_ = _args[1];
lean_object* v_stx_1071_ = _args[2];
lean_object* v___x_1072_ = _args[3];
lean_object* v___x_1073_ = _args[4];
lean_object* v___x_1074_ = _args[5];
lean_object* v_a_1075_ = _args[6];
lean_object* v_a_1076_ = _args[7];
lean_object* v___x_1077_ = _args[8];
lean_object* v___x_1078_ = _args[9];
lean_object* v___x_1079_ = _args[10];
lean_object* v___x_1080_ = _args[11];
lean_object* v_a_1081_ = _args[12];
lean_object* v___y_1082_ = _args[13];
lean_object* v___y_1083_ = _args[14];
lean_object* v___y_1084_ = _args[15];
lean_object* v___y_1085_ = _args[16];
lean_object* v___y_1086_ = _args[17];
lean_object* v___y_1087_ = _args[18];
lean_object* v___y_1088_ = _args[19];
lean_object* v___y_1089_ = _args[20];
lean_object* v___y_1090_ = _args[21];
_start:
{
uint8_t v___x_52852__boxed_1091_; lean_object* v_res_1092_; 
v___x_52852__boxed_1091_ = lean_unbox(v___x_1072_);
v_res_1092_ = l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__3(v___x_1069_, v___x_1070_, v_stx_1071_, v___x_52852__boxed_1091_, v___x_1073_, v___x_1074_, v_a_1075_, v_a_1076_, v___x_1077_, v___x_1078_, v___x_1079_, v___x_1080_, v_a_1081_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec(v___y_1087_);
lean_dec_ref(v___y_1086_);
lean_dec(v___y_1085_);
lean_dec_ref(v___y_1084_);
lean_dec(v___y_1083_);
return v_res_1092_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__4(lean_object* v___x_1094_, lean_object* v___x_1095_, lean_object* v_stx_1096_, uint8_t v___x_1097_, lean_object* v___x_1098_, lean_object* v___x_1099_, lean_object* v___x_1100_, lean_object* v___x_1101_, lean_object* v___x_1102_, lean_object* v___x_1103_, lean_object* v_only_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_){
_start:
{
lean_object* v___x_1114_; 
v___x_1114_ = l_Lean_Elab_Tactic_Grind_getPreservedParams(v___x_1094_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_, v___y_1112_);
if (lean_obj_tag(v___x_1114_) == 0)
{
lean_object* v_a_1115_; lean_object* v___x_1116_; 
v_a_1115_ = lean_ctor_get(v___x_1114_, 0);
lean_inc(v_a_1115_);
lean_dec_ref_known(v___x_1114_, 1);
v___x_1116_ = l_Lean_Elab_Tactic_Grind_getMainGoal___redArg(v___y_1106_, v___y_1109_, v___y_1110_, v___y_1111_, v___y_1112_);
if (lean_obj_tag(v___x_1116_) == 0)
{
lean_object* v_a_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; 
v_a_1117_ = lean_ctor_get(v___x_1116_, 0);
lean_inc(v_a_1117_);
lean_dec_ref_known(v___x_1116_, 1);
v___x_1118_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__4___closed__0));
v___x_1119_ = l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(v___x_1118_, v___y_1105_, v___y_1106_, v___y_1109_, v___y_1110_, v___y_1111_, v___y_1112_);
if (lean_obj_tag(v___x_1119_) == 0)
{
lean_object* v_a_1120_; lean_object* v_params_1121_; uint8_t v___y_1123_; 
v_a_1120_ = lean_ctor_get(v___x_1119_, 0);
lean_inc(v_a_1120_);
lean_dec_ref_known(v___x_1119_, 1);
v_params_1121_ = lean_ctor_get(v___y_1105_, 4);
lean_inc_ref(v_params_1121_);
if (lean_obj_tag(v_only_1104_) == 0)
{
uint8_t v___x_1128_; 
v___x_1128_ = 0;
v___y_1123_ = v___x_1128_;
goto v___jp_1122_;
}
else
{
v___y_1123_ = v___x_1097_;
goto v___jp_1122_;
}
v___jp_1122_:
{
lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___f_1126_; lean_object* v___x_1127_; 
v___x_1124_ = lean_unsigned_to_nat(10000u);
v___x_1125_ = lean_box(v___x_1097_);
v___f_1126_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__3___boxed), 22, 13);
lean_closure_set(v___f_1126_, 0, v___x_1124_);
lean_closure_set(v___f_1126_, 1, v___x_1095_);
lean_closure_set(v___f_1126_, 2, v_stx_1096_);
lean_closure_set(v___f_1126_, 3, v___x_1125_);
lean_closure_set(v___f_1126_, 4, v___x_1098_);
lean_closure_set(v___f_1126_, 5, v___x_1099_);
lean_closure_set(v___f_1126_, 6, v_a_1115_);
lean_closure_set(v___f_1126_, 7, v_a_1117_);
lean_closure_set(v___f_1126_, 8, v___x_1100_);
lean_closure_set(v___f_1126_, 9, v___x_1101_);
lean_closure_set(v___f_1126_, 10, v___x_1102_);
lean_closure_set(v___f_1126_, 11, v___x_1103_);
lean_closure_set(v___f_1126_, 12, v_a_1120_);
v___x_1127_ = l_Lean_Elab_Tactic_Grind_withParams___redArg(v_params_1121_, v___x_1094_, v___y_1123_, v___f_1126_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_, v___y_1112_);
lean_dec_ref(v___y_1105_);
return v___x_1127_;
}
}
else
{
lean_object* v_a_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1136_; 
lean_dec(v_a_1117_);
lean_dec(v_a_1115_);
lean_dec_ref(v___y_1105_);
lean_dec_ref(v___x_1103_);
lean_dec_ref(v___x_1102_);
lean_dec_ref(v___x_1101_);
lean_dec_ref(v___x_1100_);
lean_dec(v___x_1099_);
lean_dec_ref(v___x_1098_);
lean_dec(v_stx_1096_);
lean_dec(v___x_1095_);
v_a_1129_ = lean_ctor_get(v___x_1119_, 0);
v_isSharedCheck_1136_ = !lean_is_exclusive(v___x_1119_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1131_ = v___x_1119_;
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_a_1129_);
lean_dec(v___x_1119_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
lean_object* v___x_1134_; 
if (v_isShared_1132_ == 0)
{
v___x_1134_ = v___x_1131_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v_a_1129_);
v___x_1134_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
return v___x_1134_;
}
}
}
}
else
{
lean_object* v_a_1137_; lean_object* v___x_1139_; uint8_t v_isShared_1140_; uint8_t v_isSharedCheck_1144_; 
lean_dec(v_a_1115_);
lean_dec_ref(v___y_1105_);
lean_dec_ref(v___x_1103_);
lean_dec_ref(v___x_1102_);
lean_dec_ref(v___x_1101_);
lean_dec_ref(v___x_1100_);
lean_dec(v___x_1099_);
lean_dec_ref(v___x_1098_);
lean_dec(v_stx_1096_);
lean_dec(v___x_1095_);
v_a_1137_ = lean_ctor_get(v___x_1116_, 0);
v_isSharedCheck_1144_ = !lean_is_exclusive(v___x_1116_);
if (v_isSharedCheck_1144_ == 0)
{
v___x_1139_ = v___x_1116_;
v_isShared_1140_ = v_isSharedCheck_1144_;
goto v_resetjp_1138_;
}
else
{
lean_inc(v_a_1137_);
lean_dec(v___x_1116_);
v___x_1139_ = lean_box(0);
v_isShared_1140_ = v_isSharedCheck_1144_;
goto v_resetjp_1138_;
}
v_resetjp_1138_:
{
lean_object* v___x_1142_; 
if (v_isShared_1140_ == 0)
{
v___x_1142_ = v___x_1139_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v_a_1137_);
v___x_1142_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
return v___x_1142_;
}
}
}
}
else
{
lean_object* v_a_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1152_; 
lean_dec_ref(v___y_1105_);
lean_dec_ref(v___x_1103_);
lean_dec_ref(v___x_1102_);
lean_dec_ref(v___x_1101_);
lean_dec_ref(v___x_1100_);
lean_dec(v___x_1099_);
lean_dec_ref(v___x_1098_);
lean_dec(v_stx_1096_);
lean_dec(v___x_1095_);
v_a_1145_ = lean_ctor_get(v___x_1114_, 0);
v_isSharedCheck_1152_ = !lean_is_exclusive(v___x_1114_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1147_ = v___x_1114_;
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_a_1145_);
lean_dec(v___x_1114_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v___x_1150_; 
if (v_isShared_1148_ == 0)
{
v___x_1150_ = v___x_1147_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v_a_1145_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__4___boxed(lean_object** _args){
lean_object* v___x_1153_ = _args[0];
lean_object* v___x_1154_ = _args[1];
lean_object* v_stx_1155_ = _args[2];
lean_object* v___x_1156_ = _args[3];
lean_object* v___x_1157_ = _args[4];
lean_object* v___x_1158_ = _args[5];
lean_object* v___x_1159_ = _args[6];
lean_object* v___x_1160_ = _args[7];
lean_object* v___x_1161_ = _args[8];
lean_object* v___x_1162_ = _args[9];
lean_object* v_only_1163_ = _args[10];
lean_object* v___y_1164_ = _args[11];
lean_object* v___y_1165_ = _args[12];
lean_object* v___y_1166_ = _args[13];
lean_object* v___y_1167_ = _args[14];
lean_object* v___y_1168_ = _args[15];
lean_object* v___y_1169_ = _args[16];
lean_object* v___y_1170_ = _args[17];
lean_object* v___y_1171_ = _args[18];
lean_object* v___y_1172_ = _args[19];
_start:
{
uint8_t v___x_52977__boxed_1173_; lean_object* v_res_1174_; 
v___x_52977__boxed_1173_ = lean_unbox(v___x_1156_);
v_res_1174_ = l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__4(v___x_1153_, v___x_1154_, v_stx_1155_, v___x_52977__boxed_1173_, v___x_1157_, v___x_1158_, v___x_1159_, v___x_1160_, v___x_1161_, v___x_1162_, v_only_1163_, v___y_1164_, v___y_1165_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_);
lean_dec(v___y_1171_);
lean_dec_ref(v___y_1170_);
lean_dec(v___y_1169_);
lean_dec_ref(v___y_1168_);
lean_dec(v___y_1167_);
lean_dec_ref(v___y_1166_);
lean_dec(v___y_1165_);
lean_dec(v_only_1163_);
lean_dec_ref(v___x_1153_);
return v_res_1174_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__1(size_t v_sz_1175_, size_t v_i_1176_, lean_object* v_bs_1177_){
_start:
{
uint8_t v___x_1178_; 
v___x_1178_ = lean_usize_dec_lt(v_i_1176_, v_sz_1175_);
if (v___x_1178_ == 0)
{
lean_object* v___x_1179_; 
v___x_1179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1179_, 0, v_bs_1177_);
return v___x_1179_;
}
else
{
lean_object* v_v_1180_; lean_object* v___x_1181_; lean_object* v_bs_x27_1182_; size_t v___x_1183_; size_t v___x_1184_; lean_object* v___x_1185_; 
v_v_1180_ = lean_array_uget(v_bs_1177_, v_i_1176_);
v___x_1181_ = lean_unsigned_to_nat(0u);
v_bs_x27_1182_ = lean_array_uset(v_bs_1177_, v_i_1176_, v___x_1181_);
v___x_1183_ = ((size_t)1ULL);
v___x_1184_ = lean_usize_add(v_i_1176_, v___x_1183_);
v___x_1185_ = lean_array_uset(v_bs_x27_1182_, v_i_1176_, v_v_1180_);
v_i_1176_ = v___x_1184_;
v_bs_1177_ = v___x_1185_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__1___boxed(lean_object* v_sz_1187_, lean_object* v_i_1188_, lean_object* v_bs_1189_){
_start:
{
size_t v_sz_boxed_1190_; size_t v_i_boxed_1191_; lean_object* v_res_1192_; 
v_sz_boxed_1190_ = lean_unbox_usize(v_sz_1187_);
lean_dec(v_sz_1187_);
v_i_boxed_1191_ = lean_unbox_usize(v_i_1188_);
lean_dec(v_i_1188_);
v_res_1192_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__1(v_sz_boxed_1190_, v_i_boxed_1191_, v_bs_1189_);
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace(lean_object* v_stx_1202_, lean_object* v_a_1203_, lean_object* v_a_1204_, lean_object* v_a_1205_, lean_object* v_a_1206_, lean_object* v_a_1207_, lean_object* v_a_1208_, lean_object* v_a_1209_, lean_object* v_a_1210_){
_start:
{
lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; uint8_t v___x_1217_; 
v___x_1212_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__0));
v___x_1213_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__1));
v___x_1214_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__2));
v___x_1215_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_symInit___closed__3));
v___x_1216_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___closed__1));
lean_inc(v_stx_1202_);
v___x_1217_ = l_Lean_Syntax_isOfKind(v_stx_1202_, v___x_1216_);
if (v___x_1217_ == 0)
{
lean_object* v___x_1218_; 
lean_dec(v_stx_1202_);
v___x_1218_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__0___redArg();
return v___x_1218_;
}
else
{
lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; size_t v_sz_1222_; size_t v___x_1223_; lean_object* v___x_1224_; 
v___x_1219_ = lean_unsigned_to_nat(1u);
v___x_1220_ = l_Lean_Syntax_getArg(v_stx_1202_, v___x_1219_);
v___x_1221_ = l_Lean_Syntax_getArgs(v___x_1220_);
lean_dec(v___x_1220_);
v_sz_1222_ = lean_array_size(v___x_1221_);
v___x_1223_ = ((size_t)0ULL);
v___x_1224_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__1(v_sz_1222_, v___x_1223_, v___x_1221_);
if (lean_obj_tag(v___x_1224_) == 0)
{
lean_object* v___x_1225_; 
lean_dec(v_stx_1202_);
v___x_1225_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__0___redArg();
return v___x_1225_;
}
else
{
lean_object* v_val_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1275_; 
v_val_1226_ = lean_ctor_get(v___x_1224_, 0);
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1224_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1228_ = v___x_1224_;
v_isShared_1229_ = v_isSharedCheck_1275_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_val_1226_);
lean_dec(v___x_1224_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1275_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___y_1233_; lean_object* v___y_1234_; lean_object* v___y_1235_; lean_object* v___y_1236_; lean_object* v___y_1237_; lean_object* v___y_1238_; lean_object* v___y_1239_; lean_object* v___y_1240_; lean_object* v___y_1241_; lean_object* v___y_1242_; lean_object* v_only_1248_; lean_object* v___y_1249_; lean_object* v___y_1250_; lean_object* v___y_1251_; lean_object* v___y_1252_; lean_object* v___y_1253_; lean_object* v___y_1254_; lean_object* v___y_1255_; lean_object* v___y_1256_; lean_object* v___x_1265_; lean_object* v___x_1266_; uint8_t v___x_1267_; 
v___x_1230_ = l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion_default;
v___x_1231_ = lean_unsigned_to_nat(0u);
v___x_1265_ = lean_unsigned_to_nat(2u);
v___x_1266_ = l_Lean_Syntax_getArg(v_stx_1202_, v___x_1265_);
v___x_1267_ = l_Lean_Syntax_isNone(v___x_1266_);
if (v___x_1267_ == 0)
{
uint8_t v___x_1268_; 
lean_inc(v___x_1266_);
v___x_1268_ = l_Lean_Syntax_matchesNull(v___x_1266_, v___x_1219_);
if (v___x_1268_ == 0)
{
lean_object* v___x_1269_; 
lean_dec(v___x_1266_);
lean_del_object(v___x_1228_);
lean_dec(v_val_1226_);
lean_dec(v_stx_1202_);
v___x_1269_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__0___redArg();
return v___x_1269_;
}
else
{
lean_object* v_only_1270_; lean_object* v___x_1272_; 
v_only_1270_ = l_Lean_Syntax_getArg(v___x_1266_, v___x_1231_);
lean_dec(v___x_1266_);
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 0, v_only_1270_);
v___x_1272_ = v___x_1228_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v_only_1270_);
v___x_1272_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
v_only_1248_ = v___x_1272_;
v___y_1249_ = v_a_1203_;
v___y_1250_ = v_a_1204_;
v___y_1251_ = v_a_1205_;
v___y_1252_ = v_a_1206_;
v___y_1253_ = v_a_1207_;
v___y_1254_ = v_a_1208_;
v___y_1255_ = v_a_1209_;
v___y_1256_ = v_a_1210_;
goto v___jp_1247_;
}
}
}
else
{
lean_object* v___x_1274_; 
lean_dec(v___x_1266_);
lean_del_object(v___x_1228_);
v___x_1274_ = lean_box(0);
v_only_1248_ = v___x_1274_;
v___y_1249_ = v_a_1203_;
v___y_1250_ = v_a_1204_;
v___y_1251_ = v_a_1205_;
v___y_1252_ = v_a_1206_;
v___y_1253_ = v_a_1207_;
v___y_1254_ = v_a_1208_;
v___y_1255_ = v_a_1209_;
v___y_1256_ = v_a_1210_;
goto v___jp_1247_;
}
v___jp_1232_:
{
lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___f_1245_; lean_object* v___x_1246_; 
v___x_1243_ = l_Lean_Syntax_TSepArray_getElems___redArg(v___y_1242_);
lean_dec_ref(v___y_1242_);
v___x_1244_ = lean_box(v___x_1217_);
v___f_1245_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___lam__4___boxed), 20, 11);
lean_closure_set(v___f_1245_, 0, v___x_1243_);
lean_closure_set(v___f_1245_, 1, v___x_1219_);
lean_closure_set(v___f_1245_, 2, v_stx_1202_);
lean_closure_set(v___f_1245_, 3, v___x_1244_);
lean_closure_set(v___f_1245_, 4, v___x_1230_);
lean_closure_set(v___f_1245_, 5, v___x_1231_);
lean_closure_set(v___f_1245_, 6, v___x_1212_);
lean_closure_set(v___f_1245_, 7, v___x_1213_);
lean_closure_set(v___f_1245_, 8, v___x_1214_);
lean_closure_set(v___f_1245_, 9, v___x_1215_);
lean_closure_set(v___f_1245_, 10, v___y_1233_);
v___x_1246_ = l_Lean_Elab_Tactic_Grind_withConfigItems___redArg(v_val_1226_, v___f_1245_, v___y_1237_, v___y_1239_, v___y_1235_, v___y_1241_, v___y_1236_, v___y_1238_, v___y_1240_, v___y_1234_);
return v___x_1246_;
}
v___jp_1247_:
{
lean_object* v___x_1257_; lean_object* v___x_1258_; uint8_t v___x_1259_; 
v___x_1257_ = lean_unsigned_to_nat(3u);
v___x_1258_ = l_Lean_Syntax_getArg(v_stx_1202_, v___x_1257_);
v___x_1259_ = l_Lean_Syntax_isNone(v___x_1258_);
if (v___x_1259_ == 0)
{
uint8_t v___x_1260_; 
lean_inc(v___x_1258_);
v___x_1260_ = l_Lean_Syntax_matchesNull(v___x_1258_, v___x_1257_);
if (v___x_1260_ == 0)
{
lean_object* v___x_1261_; 
lean_dec(v___x_1258_);
lean_dec(v_only_1248_);
lean_dec(v_val_1226_);
lean_dec(v_stx_1202_);
v___x_1261_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__0___redArg();
return v___x_1261_;
}
else
{
lean_object* v___x_1262_; lean_object* v_params_x3f_1263_; 
v___x_1262_ = l_Lean_Syntax_getArg(v___x_1258_, v___x_1219_);
lean_dec(v___x_1258_);
v_params_x3f_1263_ = l_Lean_Syntax_getArgs(v___x_1262_);
lean_dec(v___x_1262_);
v___y_1233_ = v_only_1248_;
v___y_1234_ = v___y_1256_;
v___y_1235_ = v___y_1251_;
v___y_1236_ = v___y_1253_;
v___y_1237_ = v___y_1249_;
v___y_1238_ = v___y_1254_;
v___y_1239_ = v___y_1250_;
v___y_1240_ = v___y_1255_;
v___y_1241_ = v___y_1252_;
v___y_1242_ = v_params_x3f_1263_;
goto v___jp_1232_;
}
}
else
{
lean_object* v___x_1264_; 
lean_dec(v___x_1258_);
v___x_1264_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___closed__2));
v___y_1233_ = v_only_1248_;
v___y_1234_ = v___y_1256_;
v___y_1235_ = v___y_1251_;
v___y_1236_ = v___y_1253_;
v___y_1237_ = v___y_1249_;
v___y_1238_ = v___y_1254_;
v___y_1239_ = v___y_1250_;
v___y_1240_ = v___y_1255_;
v___y_1241_ = v___y_1252_;
v___y_1242_ = v___x_1264_;
goto v___jp_1232_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___boxed(lean_object* v_stx_1276_, lean_object* v_a_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_, lean_object* v_a_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_, lean_object* v_a_1284_, lean_object* v_a_1285_){
_start:
{
lean_object* v_res_1286_; 
v_res_1286_ = l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace(v_stx_1276_, v_a_1277_, v_a_1278_, v_a_1279_, v_a_1280_, v_a_1281_, v_a_1282_, v_a_1283_, v_a_1284_);
lean_dec(v_a_1284_);
lean_dec_ref(v_a_1283_);
lean_dec(v_a_1282_);
lean_dec_ref(v_a_1281_);
lean_dec(v_a_1280_);
lean_dec_ref(v_a_1279_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
return v_res_1286_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__3(lean_object* v_00_u03b1_1287_, lean_object* v_msg_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_){
_start:
{
lean_object* v___x_1299_; 
v___x_1299_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__3___redArg(v_msg_1288_, v___y_1294_, v___y_1295_, v___y_1296_, v___y_1297_);
return v___x_1299_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__3___boxed(lean_object* v_00_u03b1_1300_, lean_object* v_msg_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_){
_start:
{
lean_object* v_res_1312_; 
v_res_1312_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__3(v_00_u03b1_1300_, v_msg_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_);
lean_dec(v___y_1310_);
lean_dec_ref(v___y_1309_);
lean_dec(v___y_1308_);
lean_dec_ref(v___y_1307_);
lean_dec(v___y_1306_);
lean_dec_ref(v___y_1305_);
lean_dec(v___y_1304_);
lean_dec_ref(v___y_1303_);
lean_dec(v___y_1302_);
return v_res_1312_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3(lean_object* v_ref_1313_, lean_object* v_msgData_1314_, uint8_t v_severity_1315_, uint8_t v_isSilent_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_){
_start:
{
lean_object* v___x_1327_; 
v___x_1327_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___redArg(v_ref_1313_, v_msgData_1314_, v_severity_1315_, v_isSilent_1316_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
return v___x_1327_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3___boxed(lean_object* v_ref_1328_, lean_object* v_msgData_1329_, lean_object* v_severity_1330_, lean_object* v_isSilent_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_){
_start:
{
uint8_t v_severity_boxed_1342_; uint8_t v_isSilent_boxed_1343_; lean_object* v_res_1344_; 
v_severity_boxed_1342_ = lean_unbox(v_severity_1330_);
v_isSilent_boxed_1343_ = lean_unbox(v_isSilent_1331_);
v_res_1344_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace_spec__2_spec__2_spec__3(v_ref_1328_, v_msgData_1329_, v_severity_boxed_1342_, v_isSilent_boxed_1343_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_);
lean_dec(v___y_1340_);
lean_dec_ref(v___y_1339_);
lean_dec(v___y_1338_);
lean_dec_ref(v___y_1337_);
lean_dec(v___y_1336_);
lean_dec_ref(v___y_1335_);
lean_dec(v___y_1334_);
lean_dec_ref(v___y_1333_);
lean_dec(v___y_1332_);
lean_dec(v_ref_1328_);
return v_res_1344_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1(){
_start:
{
lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___x_1385_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_1386_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___closed__1));
v___x_1387_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___closed__14));
v___x_1388_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___boxed), 10, 0);
v___x_1389_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1385_, v___x_1386_, v___x_1387_, v___x_1388_);
return v___x_1389_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1___boxed(lean_object* v_a_1390_){
_start:
{
lean_object* v_res_1391_; 
v_res_1391_ = l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1();
return v_res_1391_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Config(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Param(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_TryThis(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Finish(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_CollectParams(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Grind(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Trace(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Grind_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Grind_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Grind_Param(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Finish(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_CollectParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace___regBuiltin___private_Lean_Elab_Tactic_Grind_Trace_0__Lean_Elab_Tactic_Grind_evalFinishTrace__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Grind_Trace(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Grind_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Grind_Config(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Grind_Param(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_TryThis(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Finish(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_CollectParams(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Grind(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Grind_Trace(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Grind_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Grind_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Grind_Param(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Finish(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_CollectParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Grind_Trace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Grind_Trace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Grind_Trace(builtin);
}
#ifdef __cplusplus
}
#endif
