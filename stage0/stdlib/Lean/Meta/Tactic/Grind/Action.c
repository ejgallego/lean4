// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Action
// Imports: public import Lean.Meta.Tactic.Grind.Types
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
lean_object* l_Lean_Meta_Grind_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_List_intersperseTR___redArg(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_structEq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_evalTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_Grind_saveState___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_reportIssue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isMaxHeartbeat(lean_object*);
uint8_t l_Lean_Exception_isMaxRecDepth(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Meta_Grind_Solvers_mbtc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Grind_getConfig___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_MVarId_admit(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_process_to_do(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
lean_object* lean_array_to_list(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_ActionResult_toMessageData_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_ActionResult_toMessageData_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_ActionResult_toMessageData_spec__2(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_ActionResult_toMessageData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "closed "};
static const lean_object* l_Lean_Meta_Grind_ActionResult_toMessageData___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_ActionResult_toMessageData___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_ActionResult_toMessageData___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_ActionResult_toMessageData___closed__1;
static const lean_string_object l_Lean_Meta_Grind_ActionResult_toMessageData___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "stuck "};
static const lean_object* l_Lean_Meta_Grind_ActionResult_toMessageData___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_ActionResult_toMessageData___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_ActionResult_toMessageData___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_ActionResult_toMessageData___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ActionResult_toMessageData(lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_instToMessageDataActionResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_ActionResult_toMessageData, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_instToMessageDataActionResult___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_instToMessageDataActionResult___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_instToMessageDataActionResult = (const lean_object*)&l_Lean_Meta_Grind_instToMessageDataActionResult___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_skip___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_skip___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_skip(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_skip___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Grind_Action_done___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_Action_done___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Action_done___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_done___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_done___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_done(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_done___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_andThen___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_andThen___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_andThen(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_andThen___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_instAndThen___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_instAndThen___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_Action_instAndThen___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Action_instAndThen___lam__0___boxed, .m_arity = 15, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Action_instAndThen___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Action_instAndThen___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_Action_instAndThen = (const lean_object*)&l_Lean_Meta_Grind_Action_instAndThen___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_orElse___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_orElse___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_orElse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_orElse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_instOrElse___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_instOrElse___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_Action_instOrElse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Action_instOrElse___lam__0___boxed, .m_arity = 15, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Action_instOrElse___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Action_instOrElse___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_Action_instOrElse = (const lean_object*)&l_Lean_Meta_Grind_Action_instOrElse___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_loop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_loopRef___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_loopRef___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_loopRef___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_loopRef___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_loopRef(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_loopRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Action_run___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Grind_Action_run___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Action_run___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Meta_Grind_Action_run___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Action_run___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_Grind_Action_run___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_Action_run___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l_Lean_Meta_Grind_Action_run___lam__0___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_Action_run___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sorry"};
static const lean_object* l_Lean_Meta_Grind_Action_run___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_Action_run___lam__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_run___lam__0___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_run___lam__0___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_run___lam__0___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__5_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_run___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__5_value_aux_3),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(129, 71, 141, 15, 124, 86, 0, 175)}};
static const lean_object* l_Lean_Meta_Grind_Action_run___lam__0___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_run___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_run___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_Action_run___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Action_run___lam__0___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Action_run___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Action_run___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_skipIfNA___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_skipIfNA___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_skipIfNA(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_skipIfNA___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Action_mkGrindStep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "grindStep"};
static const lean_object* l_Lean_Meta_Grind_Action_mkGrindStep___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Action_mkGrindStep___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindStep___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindStep___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindStep___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindStep___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindStep___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindStep___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindStep___closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindStep___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindStep___closed__1_value_aux_3),((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindStep___closed__0_value),LEAN_SCALAR_PTR_LITERAL(197, 239, 5, 217, 230, 199, 187, 87)}};
static const lean_object* l_Lean_Meta_Grind_Action_mkGrindStep___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Action_mkGrindStep___closed__1_value;
static const lean_array_object l_Lean_Meta_Grind_Action_mkGrindStep___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Grind_Action_mkGrindStep___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Action_mkGrindStep___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_Action_mkGrindStep___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Meta_Grind_Action_mkGrindStep___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Action_mkGrindStep___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindStep___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindStep___closed__3_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Meta_Grind_Action_mkGrindStep___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Action_mkGrindStep___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindStep___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindStep___closed__4_value),((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindStep___closed__2_value)}};
static const lean_object* l_Lean_Meta_Grind_Action_mkGrindStep___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Action_mkGrindStep___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_mkGrindStep(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_TGrindStep_getTactic(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_Action_mkGrindSeq_spec__0(lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Grind_Action_mkGrindSeq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Grind_Action_mkGrindSeq___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Action_mkGrindSeq___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindSeq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindStep___closed__4_value),((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindSeq___closed__0_value)}};
static const lean_object* l_Lean_Meta_Grind_Action_mkGrindSeq___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Action_mkGrindSeq___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Action_mkGrindSeq___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindSeq"};
static const lean_object* l_Lean_Meta_Grind_Action_mkGrindSeq___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Action_mkGrindSeq___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindSeq___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindSeq___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindSeq___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindSeq___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindSeq___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindSeq___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindSeq___closed__3_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindSeq___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindSeq___closed__3_value_aux_3),((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindSeq___closed__2_value),LEAN_SCALAR_PTR_LITERAL(158, 229, 98, 59, 247, 194, 34, 174)}};
static const lean_object* l_Lean_Meta_Grind_Action_mkGrindSeq___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Action_mkGrindSeq___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_Action_mkGrindSeq___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "grindSeq1Indented"};
static const lean_object* l_Lean_Meta_Grind_Action_mkGrindSeq___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Action_mkGrindSeq___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindSeq___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindSeq___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindSeq___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindSeq___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindSeq___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindSeq___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindSeq___closed__5_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindSeq___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindSeq___closed__5_value_aux_3),((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindSeq___closed__4_value),LEAN_SCALAR_PTR_LITERAL(35, 114, 22, 139, 17, 175, 241, 184)}};
static const lean_object* l_Lean_Meta_Grind_Action_mkGrindSeq___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Action_mkGrindSeq___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_mkGrindSeq(lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Meta_Grind_Action_mkGrindNext_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Meta_Grind_Action_mkGrindNext_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 7, .m_data = "grind·_"};
static const lean_object* l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__1_value_aux_3),((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(27, 208, 22, 131, 194, 122, 241, 171)}};
static const lean_object* l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "·"};
static const lean_object* l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "done"};
static const lean_object* l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__4_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__4_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__4_value_aux_3),((lean_object*)&l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 96, 222, 221, 183, 249, 85, 65)}};
static const lean_object* l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_mkGrindNext___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_mkGrindNext___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_mkGrindNext(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_mkGrindNext___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(79, 134, 107, 245, 63, 193, 1, 88)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "skip"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__5_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__5_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(206, 95, 123, 110, 162, 109, 248, 53)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_group___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_group___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_group(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_group___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_Action_ungroup_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Action_ungroup___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "next"};
static const lean_object* l_Lean_Meta_Grind_Action_ungroup___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Action_ungroup___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_Action_ungroup___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_ungroup___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_ungroup___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_ungroup___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_ungroup___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_ungroup___redArg___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_ungroup___redArg___closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_ungroup___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_ungroup___redArg___closed__1_value_aux_3),((lean_object*)&l_Lean_Meta_Grind_Action_ungroup___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(122, 67, 127, 148, 132, 17, 131, 108)}};
static const lean_object* l_Lean_Meta_Grind_Action_ungroup___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Action_ungroup___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_ungroup___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_ungroup___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_ungroup(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_ungroup___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_concatTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_concatTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_closeWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_closeWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_saveStateIfTracing___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_saveStateIfTracing___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_saveStateIfTracing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_saveStateIfTracing___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Meta_Grind_Action_checkSeqAt_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Meta_Grind_Action_checkSeqAt_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Meta_Grind_Action_checkSeqAt_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Meta_Grind_Action_checkSeqAt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_checkSeqAt___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_checkSeqAt___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_checkSeqAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_checkSeqAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_recordIfNeeded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_recordIfNeeded___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Action_terminalAction_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Action_terminalAction_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Action_terminalAction_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Action_terminalAction_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Action_terminalAction_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Action_terminalAction_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_terminalAction___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_terminalAction___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_terminalAction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_terminalAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Action_checkTactic_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Action_checkTactic_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Action_checkTactic_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Action_checkTactic_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Action_checkTactic___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "generated tactic cannot close the goal"};
static const lean_object* l_Lean_Meta_Grind_Action_checkTactic___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Action_checkTactic___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Action_checkTactic___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Action_checkTactic___redArg___closed__1;
static const lean_string_object l_Lean_Meta_Grind_Action_checkTactic___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "\nInitial goal\n"};
static const lean_object* l_Lean_Meta_Grind_Action_checkTactic___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Action_checkTactic___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_Action_checkTactic___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Action_checkTactic___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_checkTactic___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_checkTactic___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_checkTactic(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_checkTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Action_checkTactic_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Action_checkTactic_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_solverAction___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_solverAction___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_solverAction___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_solverAction___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_solverAction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_solverAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_mbtc___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_mbtc___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Action_mbtc___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "mbtc"};
static const lean_object* l_Lean_Meta_Grind_Action_mbtc___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Action_mbtc___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_Action_mbtc___lam__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_mbtc___lam__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_mbtc___lam__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_mbtc___lam__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_mbtc___lam__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_mbtc___lam__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_mbtc___lam__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Action_run___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l_Lean_Meta_Grind_Action_mbtc___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Action_mbtc___lam__1___closed__1_value_aux_3),((lean_object*)&l_Lean_Meta_Grind_Action_mbtc___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(158, 68, 23, 157, 222, 224, 232, 238)}};
static const lean_object* l_Lean_Meta_Grind_Action_mbtc___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Action_mbtc___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_mbtc___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_mbtc___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_Action_mbtc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Action_mbtc___lam__1___boxed, .m_arity = 10, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Action_mbtc___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Action_mbtc___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_mbtc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_mbtc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_loop_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_loop_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_loop_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_loop_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_ActionResult_toMessageData_spec__1(lean_object* v_a_1_, lean_object* v_a_2_){
_start:
{
if (lean_obj_tag(v_a_1_) == 0)
{
lean_object* v___x_3_; 
v___x_3_ = l_List_reverse___redArg(v_a_2_);
return v___x_3_;
}
else
{
lean_object* v_head_4_; lean_object* v_tail_5_; lean_object* v___x_7_; uint8_t v_isShared_8_; uint8_t v_isSharedCheck_14_; 
v_head_4_ = lean_ctor_get(v_a_1_, 0);
v_tail_5_ = lean_ctor_get(v_a_1_, 1);
v_isSharedCheck_14_ = !lean_is_exclusive(v_a_1_);
if (v_isSharedCheck_14_ == 0)
{
v___x_7_ = v_a_1_;
v_isShared_8_ = v_isSharedCheck_14_;
goto v_resetjp_6_;
}
else
{
lean_inc(v_tail_5_);
lean_inc(v_head_4_);
lean_dec(v_a_1_);
v___x_7_ = lean_box(0);
v_isShared_8_ = v_isSharedCheck_14_;
goto v_resetjp_6_;
}
v_resetjp_6_:
{
lean_object* v_mvarId_9_; lean_object* v___x_11_; 
v_mvarId_9_ = lean_ctor_get(v_head_4_, 1);
lean_inc(v_mvarId_9_);
lean_dec(v_head_4_);
if (v_isShared_8_ == 0)
{
lean_ctor_set(v___x_7_, 1, v_a_2_);
lean_ctor_set(v___x_7_, 0, v_mvarId_9_);
v___x_11_ = v___x_7_;
goto v_reusejp_10_;
}
else
{
lean_object* v_reuseFailAlloc_13_; 
v_reuseFailAlloc_13_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_13_, 0, v_mvarId_9_);
lean_ctor_set(v_reuseFailAlloc_13_, 1, v_a_2_);
v___x_11_ = v_reuseFailAlloc_13_;
goto v_reusejp_10_;
}
v_reusejp_10_:
{
v_a_1_ = v_tail_5_;
v_a_2_ = v___x_11_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_ActionResult_toMessageData_spec__0(lean_object* v_a_15_, lean_object* v_a_16_){
_start:
{
if (lean_obj_tag(v_a_15_) == 0)
{
lean_object* v___x_17_; 
v___x_17_ = l_List_reverse___redArg(v_a_16_);
return v___x_17_;
}
else
{
lean_object* v_head_18_; lean_object* v_tail_19_; lean_object* v___x_21_; uint8_t v_isShared_22_; uint8_t v_isSharedCheck_28_; 
v_head_18_ = lean_ctor_get(v_a_15_, 0);
v_tail_19_ = lean_ctor_get(v_a_15_, 1);
v_isSharedCheck_28_ = !lean_is_exclusive(v_a_15_);
if (v_isSharedCheck_28_ == 0)
{
v___x_21_ = v_a_15_;
v_isShared_22_ = v_isSharedCheck_28_;
goto v_resetjp_20_;
}
else
{
lean_inc(v_tail_19_);
lean_inc(v_head_18_);
lean_dec(v_a_15_);
v___x_21_ = lean_box(0);
v_isShared_22_ = v_isSharedCheck_28_;
goto v_resetjp_20_;
}
v_resetjp_20_:
{
lean_object* v___x_23_; lean_object* v___x_25_; 
v___x_23_ = l_Lean_MessageData_ofSyntax(v_head_18_);
if (v_isShared_22_ == 0)
{
lean_ctor_set(v___x_21_, 1, v_a_16_);
lean_ctor_set(v___x_21_, 0, v___x_23_);
v___x_25_ = v___x_21_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v___x_23_);
lean_ctor_set(v_reuseFailAlloc_27_, 1, v_a_16_);
v___x_25_ = v_reuseFailAlloc_27_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
v_a_15_ = v_tail_19_;
v_a_16_ = v___x_25_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_ActionResult_toMessageData_spec__2(lean_object* v_a_29_, lean_object* v_a_30_){
_start:
{
if (lean_obj_tag(v_a_29_) == 0)
{
lean_object* v___x_31_; 
v___x_31_ = l_List_reverse___redArg(v_a_30_);
return v___x_31_;
}
else
{
lean_object* v_head_32_; lean_object* v_tail_33_; lean_object* v___x_35_; uint8_t v_isShared_36_; uint8_t v_isSharedCheck_42_; 
v_head_32_ = lean_ctor_get(v_a_29_, 0);
v_tail_33_ = lean_ctor_get(v_a_29_, 1);
v_isSharedCheck_42_ = !lean_is_exclusive(v_a_29_);
if (v_isSharedCheck_42_ == 0)
{
v___x_35_ = v_a_29_;
v_isShared_36_ = v_isSharedCheck_42_;
goto v_resetjp_34_;
}
else
{
lean_inc(v_tail_33_);
lean_inc(v_head_32_);
lean_dec(v_a_29_);
v___x_35_ = lean_box(0);
v_isShared_36_ = v_isSharedCheck_42_;
goto v_resetjp_34_;
}
v_resetjp_34_:
{
lean_object* v___x_37_; lean_object* v___x_39_; 
v___x_37_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_37_, 0, v_head_32_);
if (v_isShared_36_ == 0)
{
lean_ctor_set(v___x_35_, 1, v_a_30_);
lean_ctor_set(v___x_35_, 0, v___x_37_);
v___x_39_ = v___x_35_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_41_; 
v_reuseFailAlloc_41_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_41_, 0, v___x_37_);
lean_ctor_set(v_reuseFailAlloc_41_, 1, v_a_30_);
v___x_39_ = v_reuseFailAlloc_41_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
v_a_29_ = v_tail_33_;
v_a_30_ = v___x_39_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_Grind_ActionResult_toMessageData___closed__1(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_44_ = ((lean_object*)(l_Lean_Meta_Grind_ActionResult_toMessageData___closed__0));
v___x_45_ = l_Lean_stringToMessageData(v___x_44_);
return v___x_45_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_ActionResult_toMessageData___closed__3(void){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_47_ = ((lean_object*)(l_Lean_Meta_Grind_ActionResult_toMessageData___closed__2));
v___x_48_ = l_Lean_stringToMessageData(v___x_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ActionResult_toMessageData(lean_object* v_x_49_){
_start:
{
if (lean_obj_tag(v_x_49_) == 0)
{
lean_object* v_seq_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v_seq_50_ = lean_ctor_get(v_x_49_, 0);
lean_inc(v_seq_50_);
lean_dec_ref_known(v_x_49_, 1);
v___x_51_ = lean_obj_once(&l_Lean_Meta_Grind_ActionResult_toMessageData___closed__1, &l_Lean_Meta_Grind_ActionResult_toMessageData___closed__1_once, _init_l_Lean_Meta_Grind_ActionResult_toMessageData___closed__1);
v___x_52_ = lean_box(0);
v___x_53_ = l_List_mapTR_loop___at___00Lean_Meta_Grind_ActionResult_toMessageData_spec__0(v_seq_50_, v___x_52_);
v___x_54_ = l_Lean_MessageData_ofList(v___x_53_);
v___x_55_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_55_, 0, v___x_51_);
lean_ctor_set(v___x_55_, 1, v___x_54_);
return v___x_55_;
}
else
{
lean_object* v_gs_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v_gs_56_ = lean_ctor_get(v_x_49_, 0);
lean_inc(v_gs_56_);
lean_dec_ref_known(v_x_49_, 1);
v___x_57_ = lean_obj_once(&l_Lean_Meta_Grind_ActionResult_toMessageData___closed__3, &l_Lean_Meta_Grind_ActionResult_toMessageData___closed__3_once, _init_l_Lean_Meta_Grind_ActionResult_toMessageData___closed__3);
v___x_58_ = lean_box(0);
v___x_59_ = l_List_mapTR_loop___at___00Lean_Meta_Grind_ActionResult_toMessageData_spec__1(v_gs_56_, v___x_58_);
v___x_60_ = l_List_mapTR_loop___at___00Lean_Meta_Grind_ActionResult_toMessageData_spec__2(v___x_59_, v___x_58_);
v___x_61_ = l_Lean_MessageData_ofList(v___x_60_);
v___x_62_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_57_);
lean_ctor_set(v___x_62_, 1, v___x_61_);
return v___x_62_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_skip___redArg(lean_object* v_goal_65_, lean_object* v_kp_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_a_75_){
_start:
{
lean_object* v___x_77_; 
lean_inc(v_a_75_);
lean_inc_ref(v_a_74_);
lean_inc(v_a_73_);
lean_inc_ref(v_a_72_);
lean_inc(v_a_71_);
lean_inc_ref(v_a_70_);
lean_inc(v_a_69_);
lean_inc_ref(v_a_68_);
lean_inc(v_a_67_);
v___x_77_ = lean_apply_11(v_kp_66_, v_goal_65_, v_a_67_, v_a_68_, v_a_69_, v_a_70_, v_a_71_, v_a_72_, v_a_73_, v_a_74_, v_a_75_, lean_box(0));
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_skip___redArg___boxed(lean_object* v_goal_78_, lean_object* v_kp_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Lean_Meta_Grind_Action_skip___redArg(v_goal_78_, v_kp_79_, v_a_80_, v_a_81_, v_a_82_, v_a_83_, v_a_84_, v_a_85_, v_a_86_, v_a_87_, v_a_88_);
lean_dec(v_a_88_);
lean_dec_ref(v_a_87_);
lean_dec(v_a_86_);
lean_dec_ref(v_a_85_);
lean_dec(v_a_84_);
lean_dec_ref(v_a_83_);
lean_dec(v_a_82_);
lean_dec_ref(v_a_81_);
lean_dec(v_a_80_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_skip(lean_object* v_goal_91_, lean_object* v_x_92_, lean_object* v_kp_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_, lean_object* v_a_102_){
_start:
{
lean_object* v___x_104_; 
lean_inc(v_a_102_);
lean_inc_ref(v_a_101_);
lean_inc(v_a_100_);
lean_inc_ref(v_a_99_);
lean_inc(v_a_98_);
lean_inc_ref(v_a_97_);
lean_inc(v_a_96_);
lean_inc_ref(v_a_95_);
lean_inc(v_a_94_);
v___x_104_ = lean_apply_11(v_kp_93_, v_goal_91_, v_a_94_, v_a_95_, v_a_96_, v_a_97_, v_a_98_, v_a_99_, v_a_100_, v_a_101_, v_a_102_, lean_box(0));
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_skip___boxed(lean_object* v_goal_105_, lean_object* v_x_106_, lean_object* v_kp_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_, lean_object* v_a_114_, lean_object* v_a_115_, lean_object* v_a_116_, lean_object* v_a_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l_Lean_Meta_Grind_Action_skip(v_goal_105_, v_x_106_, v_kp_107_, v_a_108_, v_a_109_, v_a_110_, v_a_111_, v_a_112_, v_a_113_, v_a_114_, v_a_115_, v_a_116_);
lean_dec(v_a_116_);
lean_dec_ref(v_a_115_);
lean_dec(v_a_114_);
lean_dec_ref(v_a_113_);
lean_dec(v_a_112_);
lean_dec_ref(v_a_111_);
lean_dec(v_a_110_);
lean_dec_ref(v_a_109_);
lean_dec(v_a_108_);
lean_dec_ref(v_x_106_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_done___redArg(lean_object* v_goal_121_, lean_object* v_kna_122_, lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_, lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_){
_start:
{
lean_object* v_toGoalState_133_; uint8_t v_inconsistent_134_; 
v_toGoalState_133_ = lean_ctor_get(v_goal_121_, 0);
v_inconsistent_134_ = lean_ctor_get_uint8(v_toGoalState_133_, sizeof(void*)*21 + 8);
if (v_inconsistent_134_ == 0)
{
lean_object* v___x_135_; 
lean_inc(v_a_131_);
lean_inc_ref(v_a_130_);
lean_inc(v_a_129_);
lean_inc_ref(v_a_128_);
lean_inc(v_a_127_);
lean_inc_ref(v_a_126_);
lean_inc(v_a_125_);
lean_inc_ref(v_a_124_);
lean_inc(v_a_123_);
v___x_135_ = lean_apply_11(v_kna_122_, v_goal_121_, v_a_123_, v_a_124_, v_a_125_, v_a_126_, v_a_127_, v_a_128_, v_a_129_, v_a_130_, v_a_131_, lean_box(0));
return v___x_135_;
}
else
{
lean_object* v___x_136_; lean_object* v___x_137_; 
lean_dec_ref(v_kna_122_);
lean_dec_ref(v_goal_121_);
v___x_136_ = ((lean_object*)(l_Lean_Meta_Grind_Action_done___redArg___closed__0));
v___x_137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_137_, 0, v___x_136_);
return v___x_137_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_done___redArg___boxed(lean_object* v_goal_138_, lean_object* v_kna_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_){
_start:
{
lean_object* v_res_150_; 
v_res_150_ = l_Lean_Meta_Grind_Action_done___redArg(v_goal_138_, v_kna_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_, v_a_148_);
lean_dec(v_a_148_);
lean_dec_ref(v_a_147_);
lean_dec(v_a_146_);
lean_dec_ref(v_a_145_);
lean_dec(v_a_144_);
lean_dec_ref(v_a_143_);
lean_dec(v_a_142_);
lean_dec_ref(v_a_141_);
lean_dec(v_a_140_);
return v_res_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_done(lean_object* v_goal_151_, lean_object* v_kna_152_, lean_object* v_x_153_, lean_object* v_a_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_, lean_object* v_a_160_, lean_object* v_a_161_, lean_object* v_a_162_){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = l_Lean_Meta_Grind_Action_done___redArg(v_goal_151_, v_kna_152_, v_a_154_, v_a_155_, v_a_156_, v_a_157_, v_a_158_, v_a_159_, v_a_160_, v_a_161_, v_a_162_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_done___boxed(lean_object* v_goal_165_, lean_object* v_kna_166_, lean_object* v_x_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_){
_start:
{
lean_object* v_res_178_; 
v_res_178_ = l_Lean_Meta_Grind_Action_done(v_goal_165_, v_kna_166_, v_x_167_, v_a_168_, v_a_169_, v_a_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_, v_a_175_, v_a_176_);
lean_dec(v_a_176_);
lean_dec_ref(v_a_175_);
lean_dec(v_a_174_);
lean_dec_ref(v_a_173_);
lean_dec(v_a_172_);
lean_dec_ref(v_a_171_);
lean_dec(v_a_170_);
lean_dec_ref(v_a_169_);
lean_dec(v_a_168_);
lean_dec_ref(v_x_167_);
return v_res_178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_andThen___lam__0(lean_object* v_y_179_, lean_object* v_kp_180_, lean_object* v_goal_x27_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_){
_start:
{
lean_object* v___x_192_; 
lean_inc(v___y_190_);
lean_inc_ref(v___y_189_);
lean_inc(v___y_188_);
lean_inc_ref(v___y_187_);
lean_inc(v___y_186_);
lean_inc_ref(v___y_185_);
lean_inc(v___y_184_);
lean_inc_ref(v___y_183_);
lean_inc(v___y_182_);
lean_inc_ref(v_kp_180_);
v___x_192_ = lean_apply_13(v_y_179_, v_goal_x27_181_, v_kp_180_, v_kp_180_, v___y_182_, v___y_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_, v___y_188_, v___y_189_, v___y_190_, lean_box(0));
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_andThen___lam__0___boxed(lean_object* v_y_193_, lean_object* v_kp_194_, lean_object* v_goal_x27_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l_Lean_Meta_Grind_Action_andThen___lam__0(v_y_193_, v_kp_194_, v_goal_x27_195_, v___y_196_, v___y_197_, v___y_198_, v___y_199_, v___y_200_, v___y_201_, v___y_202_, v___y_203_, v___y_204_);
lean_dec(v___y_204_);
lean_dec_ref(v___y_203_);
lean_dec(v___y_202_);
lean_dec_ref(v___y_201_);
lean_dec(v___y_200_);
lean_dec_ref(v___y_199_);
lean_dec(v___y_198_);
lean_dec_ref(v___y_197_);
lean_dec(v___y_196_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_andThen(lean_object* v_x_207_, lean_object* v_y_208_, lean_object* v_goal_209_, lean_object* v_kna_210_, lean_object* v_kp_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_){
_start:
{
lean_object* v___f_222_; lean_object* v___x_223_; 
v___f_222_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_andThen___lam__0___boxed), 13, 2);
lean_closure_set(v___f_222_, 0, v_y_208_);
lean_closure_set(v___f_222_, 1, v_kp_211_);
lean_inc(v_a_220_);
lean_inc_ref(v_a_219_);
lean_inc(v_a_218_);
lean_inc_ref(v_a_217_);
lean_inc(v_a_216_);
lean_inc_ref(v_a_215_);
lean_inc(v_a_214_);
lean_inc_ref(v_a_213_);
lean_inc(v_a_212_);
v___x_223_ = lean_apply_13(v_x_207_, v_goal_209_, v_kna_210_, v___f_222_, v_a_212_, v_a_213_, v_a_214_, v_a_215_, v_a_216_, v_a_217_, v_a_218_, v_a_219_, v_a_220_, lean_box(0));
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_andThen___boxed(lean_object* v_x_224_, lean_object* v_y_225_, lean_object* v_goal_226_, lean_object* v_kna_227_, lean_object* v_kp_228_, lean_object* v_a_229_, lean_object* v_a_230_, lean_object* v_a_231_, lean_object* v_a_232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_, lean_object* v_a_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l_Lean_Meta_Grind_Action_andThen(v_x_224_, v_y_225_, v_goal_226_, v_kna_227_, v_kp_228_, v_a_229_, v_a_230_, v_a_231_, v_a_232_, v_a_233_, v_a_234_, v_a_235_, v_a_236_, v_a_237_);
lean_dec(v_a_237_);
lean_dec_ref(v_a_236_);
lean_dec(v_a_235_);
lean_dec_ref(v_a_234_);
lean_dec(v_a_233_);
lean_dec_ref(v_a_232_);
lean_dec(v_a_231_);
lean_dec_ref(v_a_230_);
lean_dec(v_a_229_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_instAndThen___lam__0(lean_object* v_x_240_, lean_object* v_y_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_255_ = lean_box(0);
v___x_256_ = lean_apply_1(v_y_241_, v___x_255_);
v___x_257_ = l_Lean_Meta_Grind_Action_andThen(v_x_240_, v___x_256_, v___y_242_, v___y_243_, v___y_244_, v___y_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_, v___y_252_, v___y_253_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_instAndThen___lam__0___boxed(lean_object* v_x_258_, lean_object* v_y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_){
_start:
{
lean_object* v_res_273_; 
v_res_273_ = l_Lean_Meta_Grind_Action_instAndThen___lam__0(v_x_258_, v_y_259_, v___y_260_, v___y_261_, v___y_262_, v___y_263_, v___y_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_, v___y_269_, v___y_270_, v___y_271_);
lean_dec(v___y_271_);
lean_dec_ref(v___y_270_);
lean_dec(v___y_269_);
lean_dec_ref(v___y_268_);
lean_dec(v___y_267_);
lean_dec_ref(v___y_266_);
lean_dec(v___y_265_);
lean_dec_ref(v___y_264_);
lean_dec(v___y_263_);
return v_res_273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_orElse___lam__0(lean_object* v_y_276_, lean_object* v_kna_277_, lean_object* v_kp_278_, lean_object* v_goal_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_){
_start:
{
lean_object* v___x_290_; 
lean_inc(v___y_288_);
lean_inc_ref(v___y_287_);
lean_inc(v___y_286_);
lean_inc_ref(v___y_285_);
lean_inc(v___y_284_);
lean_inc_ref(v___y_283_);
lean_inc(v___y_282_);
lean_inc_ref(v___y_281_);
lean_inc(v___y_280_);
v___x_290_ = lean_apply_13(v_y_276_, v_goal_279_, v_kna_277_, v_kp_278_, v___y_280_, v___y_281_, v___y_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_, v___y_287_, v___y_288_, lean_box(0));
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_orElse___lam__0___boxed(lean_object* v_y_291_, lean_object* v_kna_292_, lean_object* v_kp_293_, lean_object* v_goal_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_Lean_Meta_Grind_Action_orElse___lam__0(v_y_291_, v_kna_292_, v_kp_293_, v_goal_294_, v___y_295_, v___y_296_, v___y_297_, v___y_298_, v___y_299_, v___y_300_, v___y_301_, v___y_302_, v___y_303_);
lean_dec(v___y_303_);
lean_dec_ref(v___y_302_);
lean_dec(v___y_301_);
lean_dec_ref(v___y_300_);
lean_dec(v___y_299_);
lean_dec_ref(v___y_298_);
lean_dec(v___y_297_);
lean_dec_ref(v___y_296_);
lean_dec(v___y_295_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_orElse(lean_object* v_x_306_, lean_object* v_y_307_, lean_object* v_goal_308_, lean_object* v_kna_309_, lean_object* v_kp_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_){
_start:
{
lean_object* v___f_321_; lean_object* v___x_322_; 
lean_inc_ref(v_kp_310_);
v___f_321_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_orElse___lam__0___boxed), 14, 3);
lean_closure_set(v___f_321_, 0, v_y_307_);
lean_closure_set(v___f_321_, 1, v_kna_309_);
lean_closure_set(v___f_321_, 2, v_kp_310_);
lean_inc(v_a_319_);
lean_inc_ref(v_a_318_);
lean_inc(v_a_317_);
lean_inc_ref(v_a_316_);
lean_inc(v_a_315_);
lean_inc_ref(v_a_314_);
lean_inc(v_a_313_);
lean_inc_ref(v_a_312_);
lean_inc(v_a_311_);
v___x_322_ = lean_apply_13(v_x_306_, v_goal_308_, v___f_321_, v_kp_310_, v_a_311_, v_a_312_, v_a_313_, v_a_314_, v_a_315_, v_a_316_, v_a_317_, v_a_318_, v_a_319_, lean_box(0));
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_orElse___boxed(lean_object* v_x_323_, lean_object* v_y_324_, lean_object* v_goal_325_, lean_object* v_kna_326_, lean_object* v_kp_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l_Lean_Meta_Grind_Action_orElse(v_x_323_, v_y_324_, v_goal_325_, v_kna_326_, v_kp_327_, v_a_328_, v_a_329_, v_a_330_, v_a_331_, v_a_332_, v_a_333_, v_a_334_, v_a_335_, v_a_336_);
lean_dec(v_a_336_);
lean_dec_ref(v_a_335_);
lean_dec(v_a_334_);
lean_dec_ref(v_a_333_);
lean_dec(v_a_332_);
lean_dec_ref(v_a_331_);
lean_dec(v_a_330_);
lean_dec_ref(v_a_329_);
lean_dec(v_a_328_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_instOrElse___lam__0(lean_object* v_x_339_, lean_object* v_y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_){
_start:
{
lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_354_ = lean_box(0);
v___x_355_ = lean_apply_1(v_y_340_, v___x_354_);
v___x_356_ = l_Lean_Meta_Grind_Action_orElse(v_x_339_, v___x_355_, v___y_341_, v___y_342_, v___y_343_, v___y_344_, v___y_345_, v___y_346_, v___y_347_, v___y_348_, v___y_349_, v___y_350_, v___y_351_, v___y_352_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_instOrElse___lam__0___boxed(lean_object* v_x_357_, lean_object* v_y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_Lean_Meta_Grind_Action_instOrElse___lam__0(v_x_357_, v_y_358_, v___y_359_, v___y_360_, v___y_361_, v___y_362_, v___y_363_, v___y_364_, v___y_365_, v___y_366_, v___y_367_, v___y_368_, v___y_369_, v___y_370_);
lean_dec(v___y_370_);
lean_dec_ref(v___y_369_);
lean_dec(v___y_368_);
lean_dec_ref(v___y_367_);
lean_dec(v___y_366_);
lean_dec_ref(v___y_365_);
lean_dec(v___y_364_);
lean_dec_ref(v___y_363_);
lean_dec(v___y_362_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_loop___redArg___lam__0___boxed(lean_object* v_n_375_, lean_object* v_x_376_, lean_object* v_kp_377_, lean_object* v_goal_x27_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l_Lean_Meta_Grind_Action_loop___redArg___lam__0(v_n_375_, v_x_376_, v_kp_377_, v_goal_x27_378_, v___y_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_);
lean_dec(v___y_387_);
lean_dec_ref(v___y_386_);
lean_dec(v___y_385_);
lean_dec_ref(v___y_384_);
lean_dec(v___y_383_);
lean_dec_ref(v___y_382_);
lean_dec(v___y_381_);
lean_dec_ref(v___y_380_);
lean_dec(v___y_379_);
lean_dec(v_n_375_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_loop___redArg(lean_object* v_n_390_, lean_object* v_x_391_, lean_object* v_goal_392_, lean_object* v_kp_393_, lean_object* v_a_394_, lean_object* v_a_395_, lean_object* v_a_396_, lean_object* v_a_397_, lean_object* v_a_398_, lean_object* v_a_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_){
_start:
{
lean_object* v___y_410_; lean_object* v___y_433_; lean_object* v_zero_438_; uint8_t v_isZero_439_; 
v_zero_438_ = lean_unsigned_to_nat(0u);
v_isZero_439_ = lean_nat_dec_eq(v_n_390_, v_zero_438_);
if (v_isZero_439_ == 1)
{
lean_object* v___x_440_; 
lean_dec_ref(v_x_391_);
lean_inc(v_a_402_);
lean_inc_ref(v_a_401_);
lean_inc(v_a_400_);
lean_inc_ref(v_a_399_);
lean_inc(v_a_398_);
lean_inc_ref(v_a_397_);
lean_inc(v_a_396_);
lean_inc_ref(v_a_395_);
lean_inc(v_a_394_);
lean_inc_ref(v_goal_392_);
v___x_440_ = lean_apply_11(v_kp_393_, v_goal_392_, v_a_394_, v_a_395_, v_a_396_, v_a_397_, v_a_398_, v_a_399_, v_a_400_, v_a_401_, v_a_402_, lean_box(0));
v___y_433_ = v___x_440_;
goto v___jp_432_;
}
else
{
lean_object* v_one_441_; lean_object* v_n_442_; lean_object* v___f_443_; lean_object* v___x_444_; 
v_one_441_ = lean_unsigned_to_nat(1u);
v_n_442_ = lean_nat_sub(v_n_390_, v_one_441_);
lean_inc_ref(v_kp_393_);
lean_inc_ref(v_x_391_);
v___f_443_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_loop___redArg___lam__0___boxed), 14, 3);
lean_closure_set(v___f_443_, 0, v_n_442_);
lean_closure_set(v___f_443_, 1, v_x_391_);
lean_closure_set(v___f_443_, 2, v_kp_393_);
lean_inc(v_a_402_);
lean_inc_ref(v_a_401_);
lean_inc(v_a_400_);
lean_inc_ref(v_a_399_);
lean_inc(v_a_398_);
lean_inc_ref(v_a_397_);
lean_inc(v_a_396_);
lean_inc_ref(v_a_395_);
lean_inc(v_a_394_);
lean_inc_ref(v_goal_392_);
v___x_444_ = lean_apply_13(v_x_391_, v_goal_392_, v_kp_393_, v___f_443_, v_a_394_, v_a_395_, v_a_396_, v_a_397_, v_a_398_, v_a_399_, v_a_400_, v_a_401_, v_a_402_, lean_box(0));
v___y_433_ = v___x_444_;
goto v___jp_432_;
}
v___jp_404_:
{
lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_405_ = lean_box(0);
v___x_406_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_406_, 0, v_goal_392_);
lean_ctor_set(v___x_406_, 1, v___x_405_);
v___x_407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_407_, 0, v___x_406_);
v___x_408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_408_, 0, v___x_407_);
return v___x_408_;
}
v___jp_409_:
{
lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_411_ = l_Lean_Exception_toMessageData(v___y_410_);
v___x_412_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_397_);
if (lean_obj_tag(v___x_412_) == 0)
{
lean_object* v_a_413_; uint8_t v_verbose_414_; 
v_a_413_ = lean_ctor_get(v___x_412_, 0);
lean_inc(v_a_413_);
lean_dec_ref_known(v___x_412_, 1);
v_verbose_414_ = lean_ctor_get_uint8(v_a_413_, 0);
lean_dec(v_a_413_);
if (v_verbose_414_ == 0)
{
lean_dec_ref(v___x_411_);
goto v___jp_404_;
}
else
{
lean_object* v___x_415_; 
v___x_415_ = l_Lean_Meta_Sym_reportIssue(v___x_411_, v_a_397_, v_a_398_, v_a_399_, v_a_400_, v_a_401_, v_a_402_);
if (lean_obj_tag(v___x_415_) == 0)
{
lean_dec_ref_known(v___x_415_, 1);
goto v___jp_404_;
}
else
{
lean_object* v_a_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_423_; 
lean_dec_ref(v_goal_392_);
v_a_416_ = lean_ctor_get(v___x_415_, 0);
v_isSharedCheck_423_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_423_ == 0)
{
v___x_418_ = v___x_415_;
v_isShared_419_ = v_isSharedCheck_423_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_a_416_);
lean_dec(v___x_415_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_423_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_421_; 
if (v_isShared_419_ == 0)
{
v___x_421_ = v___x_418_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v_a_416_);
v___x_421_ = v_reuseFailAlloc_422_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
return v___x_421_;
}
}
}
}
}
else
{
lean_object* v_a_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_431_; 
lean_dec_ref(v___x_411_);
lean_dec_ref(v_goal_392_);
v_a_424_ = lean_ctor_get(v___x_412_, 0);
v_isSharedCheck_431_ = !lean_is_exclusive(v___x_412_);
if (v_isSharedCheck_431_ == 0)
{
v___x_426_ = v___x_412_;
v_isShared_427_ = v_isSharedCheck_431_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_a_424_);
lean_dec(v___x_412_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_431_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
lean_object* v___x_429_; 
if (v_isShared_427_ == 0)
{
v___x_429_ = v___x_426_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v_a_424_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
}
}
v___jp_432_:
{
if (lean_obj_tag(v___y_433_) == 0)
{
lean_dec_ref(v_goal_392_);
return v___y_433_;
}
else
{
lean_object* v_a_434_; uint8_t v___x_435_; 
v_a_434_ = lean_ctor_get(v___y_433_, 0);
v___x_435_ = l_Lean_Exception_isInterrupt(v_a_434_);
if (v___x_435_ == 0)
{
uint8_t v___x_436_; 
lean_inc(v_a_434_);
v___x_436_ = l_Lean_Exception_isMaxHeartbeat(v_a_434_);
if (v___x_436_ == 0)
{
uint8_t v___x_437_; 
lean_inc(v_a_434_);
v___x_437_ = l_Lean_Exception_isMaxRecDepth(v_a_434_);
if (v___x_437_ == 0)
{
lean_dec_ref(v_goal_392_);
return v___y_433_;
}
else
{
lean_inc(v_a_434_);
lean_dec_ref_known(v___y_433_, 1);
v___y_410_ = v_a_434_;
goto v___jp_409_;
}
}
else
{
lean_inc(v_a_434_);
lean_dec_ref_known(v___y_433_, 1);
v___y_410_ = v_a_434_;
goto v___jp_409_;
}
}
else
{
lean_dec_ref(v_goal_392_);
return v___y_433_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_loop___redArg___lam__0(lean_object* v_n_445_, lean_object* v_x_446_, lean_object* v_kp_447_, lean_object* v_goal_x27_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_){
_start:
{
lean_object* v___x_459_; 
v___x_459_ = l_Lean_Meta_Grind_Action_loop___redArg(v_n_445_, v_x_446_, v_goal_x27_448_, v_kp_447_, v___y_449_, v___y_450_, v___y_451_, v___y_452_, v___y_453_, v___y_454_, v___y_455_, v___y_456_, v___y_457_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_loop___redArg___boxed(lean_object* v_n_460_, lean_object* v_x_461_, lean_object* v_goal_462_, lean_object* v_kp_463_, lean_object* v_a_464_, lean_object* v_a_465_, lean_object* v_a_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_, lean_object* v_a_471_, lean_object* v_a_472_, lean_object* v_a_473_){
_start:
{
lean_object* v_res_474_; 
v_res_474_ = l_Lean_Meta_Grind_Action_loop___redArg(v_n_460_, v_x_461_, v_goal_462_, v_kp_463_, v_a_464_, v_a_465_, v_a_466_, v_a_467_, v_a_468_, v_a_469_, v_a_470_, v_a_471_, v_a_472_);
lean_dec(v_a_472_);
lean_dec_ref(v_a_471_);
lean_dec(v_a_470_);
lean_dec_ref(v_a_469_);
lean_dec(v_a_468_);
lean_dec_ref(v_a_467_);
lean_dec(v_a_466_);
lean_dec_ref(v_a_465_);
lean_dec(v_a_464_);
lean_dec(v_n_460_);
return v_res_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_loop(lean_object* v_n_475_, lean_object* v_x_476_, lean_object* v_goal_477_, lean_object* v_x_478_, lean_object* v_kp_479_, lean_object* v_a_480_, lean_object* v_a_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_){
_start:
{
lean_object* v___x_490_; 
v___x_490_ = l_Lean_Meta_Grind_Action_loop___redArg(v_n_475_, v_x_476_, v_goal_477_, v_kp_479_, v_a_480_, v_a_481_, v_a_482_, v_a_483_, v_a_484_, v_a_485_, v_a_486_, v_a_487_, v_a_488_);
return v___x_490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_loop___boxed(lean_object* v_n_491_, lean_object* v_x_492_, lean_object* v_goal_493_, lean_object* v_x_494_, lean_object* v_kp_495_, lean_object* v_a_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_, lean_object* v_a_502_, lean_object* v_a_503_, lean_object* v_a_504_, lean_object* v_a_505_){
_start:
{
lean_object* v_res_506_; 
v_res_506_ = l_Lean_Meta_Grind_Action_loop(v_n_491_, v_x_492_, v_goal_493_, v_x_494_, v_kp_495_, v_a_496_, v_a_497_, v_a_498_, v_a_499_, v_a_500_, v_a_501_, v_a_502_, v_a_503_, v_a_504_);
lean_dec(v_a_504_);
lean_dec_ref(v_a_503_);
lean_dec(v_a_502_);
lean_dec_ref(v_a_501_);
lean_dec(v_a_500_);
lean_dec_ref(v_a_499_);
lean_dec(v_a_498_);
lean_dec_ref(v_a_497_);
lean_dec(v_a_496_);
lean_dec_ref(v_x_494_);
lean_dec(v_n_491_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_loopRef___redArg___lam__0___boxed(lean_object* v_n_507_, lean_object* v_x_508_, lean_object* v_kp_509_, lean_object* v_goal_x27_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l_Lean_Meta_Grind_Action_loopRef___redArg___lam__0(v_n_507_, v_x_508_, v_kp_509_, v_goal_x27_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
lean_dec(v___y_519_);
lean_dec_ref(v___y_518_);
lean_dec(v___y_517_);
lean_dec_ref(v___y_516_);
lean_dec(v___y_515_);
lean_dec_ref(v___y_514_);
lean_dec(v___y_513_);
lean_dec_ref(v___y_512_);
lean_dec(v___y_511_);
lean_dec(v_n_507_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_loopRef___redArg(lean_object* v_n_522_, lean_object* v_x_523_, lean_object* v_goal_524_, lean_object* v_kp_525_, lean_object* v_a_526_, lean_object* v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_, lean_object* v_a_530_, lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_533_, lean_object* v_a_534_){
_start:
{
lean_object* v_zero_536_; uint8_t v_isZero_537_; 
v_zero_536_ = lean_unsigned_to_nat(0u);
v_isZero_537_ = lean_nat_dec_eq(v_n_522_, v_zero_536_);
if (v_isZero_537_ == 1)
{
lean_object* v___x_538_; 
lean_dec_ref(v_x_523_);
lean_inc(v_a_534_);
lean_inc_ref(v_a_533_);
lean_inc(v_a_532_);
lean_inc_ref(v_a_531_);
lean_inc(v_a_530_);
lean_inc_ref(v_a_529_);
lean_inc(v_a_528_);
lean_inc_ref(v_a_527_);
lean_inc(v_a_526_);
v___x_538_ = lean_apply_11(v_kp_525_, v_goal_524_, v_a_526_, v_a_527_, v_a_528_, v_a_529_, v_a_530_, v_a_531_, v_a_532_, v_a_533_, v_a_534_, lean_box(0));
return v___x_538_;
}
else
{
lean_object* v_one_539_; lean_object* v_n_540_; lean_object* v___f_541_; lean_object* v___x_542_; 
v_one_539_ = lean_unsigned_to_nat(1u);
v_n_540_ = lean_nat_sub(v_n_522_, v_one_539_);
lean_inc_ref(v_kp_525_);
lean_inc_ref(v_x_523_);
v___f_541_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_loopRef___redArg___lam__0___boxed), 14, 3);
lean_closure_set(v___f_541_, 0, v_n_540_);
lean_closure_set(v___f_541_, 1, v_x_523_);
lean_closure_set(v___f_541_, 2, v_kp_525_);
lean_inc(v_a_534_);
lean_inc_ref(v_a_533_);
lean_inc(v_a_532_);
lean_inc_ref(v_a_531_);
lean_inc(v_a_530_);
lean_inc_ref(v_a_529_);
lean_inc(v_a_528_);
lean_inc_ref(v_a_527_);
lean_inc(v_a_526_);
v___x_542_ = lean_apply_13(v_x_523_, v_goal_524_, v_kp_525_, v___f_541_, v_a_526_, v_a_527_, v_a_528_, v_a_529_, v_a_530_, v_a_531_, v_a_532_, v_a_533_, v_a_534_, lean_box(0));
return v___x_542_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_loopRef___redArg___lam__0(lean_object* v_n_543_, lean_object* v_x_544_, lean_object* v_kp_545_, lean_object* v_goal_x27_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_){
_start:
{
lean_object* v___x_557_; 
v___x_557_ = l_Lean_Meta_Grind_Action_loopRef___redArg(v_n_543_, v_x_544_, v_goal_x27_546_, v_kp_545_, v___y_547_, v___y_548_, v___y_549_, v___y_550_, v___y_551_, v___y_552_, v___y_553_, v___y_554_, v___y_555_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_loopRef___redArg___boxed(lean_object* v_n_558_, lean_object* v_x_559_, lean_object* v_goal_560_, lean_object* v_kp_561_, lean_object* v_a_562_, lean_object* v_a_563_, lean_object* v_a_564_, lean_object* v_a_565_, lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_, lean_object* v_a_570_, lean_object* v_a_571_){
_start:
{
lean_object* v_res_572_; 
v_res_572_ = l_Lean_Meta_Grind_Action_loopRef___redArg(v_n_558_, v_x_559_, v_goal_560_, v_kp_561_, v_a_562_, v_a_563_, v_a_564_, v_a_565_, v_a_566_, v_a_567_, v_a_568_, v_a_569_, v_a_570_);
lean_dec(v_a_570_);
lean_dec_ref(v_a_569_);
lean_dec(v_a_568_);
lean_dec_ref(v_a_567_);
lean_dec(v_a_566_);
lean_dec_ref(v_a_565_);
lean_dec(v_a_564_);
lean_dec_ref(v_a_563_);
lean_dec(v_a_562_);
lean_dec(v_n_558_);
return v_res_572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_loopRef(lean_object* v_n_573_, lean_object* v_x_574_, lean_object* v_goal_575_, lean_object* v_x_576_, lean_object* v_kp_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_, lean_object* v_a_586_){
_start:
{
lean_object* v___x_588_; 
v___x_588_ = l_Lean_Meta_Grind_Action_loopRef___redArg(v_n_573_, v_x_574_, v_goal_575_, v_kp_577_, v_a_578_, v_a_579_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_, v_a_586_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_loopRef___boxed(lean_object* v_n_589_, lean_object* v_x_590_, lean_object* v_goal_591_, lean_object* v_x_592_, lean_object* v_kp_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_, lean_object* v_a_597_, lean_object* v_a_598_, lean_object* v_a_599_, lean_object* v_a_600_, lean_object* v_a_601_, lean_object* v_a_602_, lean_object* v_a_603_){
_start:
{
lean_object* v_res_604_; 
v_res_604_ = l_Lean_Meta_Grind_Action_loopRef(v_n_589_, v_x_590_, v_goal_591_, v_x_592_, v_kp_593_, v_a_594_, v_a_595_, v_a_596_, v_a_597_, v_a_598_, v_a_599_, v_a_600_, v_a_601_, v_a_602_);
lean_dec(v_a_602_);
lean_dec_ref(v_a_601_);
lean_dec(v_a_600_);
lean_dec_ref(v_a_599_);
lean_dec(v_a_598_);
lean_dec_ref(v_a_597_);
lean_dec(v_a_596_);
lean_dec_ref(v_a_595_);
lean_dec(v_a_594_);
lean_dec_ref(v_x_592_);
lean_dec(v_n_589_);
return v_res_604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_run___lam__0(lean_object* v_goal_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_){
_start:
{
lean_object* v_toGoalState_627_; uint8_t v_inconsistent_628_; 
v_toGoalState_627_ = lean_ctor_get(v_goal_616_, 0);
v_inconsistent_628_ = lean_ctor_get_uint8(v_toGoalState_627_, sizeof(void*)*21 + 8);
if (v_inconsistent_628_ == 0)
{
lean_object* v_mvarId_629_; lean_object* v___x_630_; 
v_mvarId_629_ = lean_ctor_get(v_goal_616_, 1);
v___x_630_ = l_Lean_Meta_Grind_getConfig___redArg(v___y_618_);
if (lean_obj_tag(v___x_630_) == 0)
{
lean_object* v_a_631_; lean_object* v___x_632_; 
v_a_631_ = lean_ctor_get(v___x_630_, 0);
lean_inc(v_a_631_);
lean_dec_ref_known(v___x_630_, 1);
v___x_632_ = l_Lean_Meta_Grind_getConfig___redArg(v___y_618_);
if (lean_obj_tag(v___x_632_) == 0)
{
lean_object* v_a_633_; lean_object* v___x_635_; uint8_t v_isShared_636_; uint8_t v_isSharedCheck_680_; 
v_a_633_ = lean_ctor_get(v___x_632_, 0);
v_isSharedCheck_680_ = !lean_is_exclusive(v___x_632_);
if (v_isSharedCheck_680_ == 0)
{
v___x_635_ = v___x_632_;
v_isShared_636_ = v_isSharedCheck_680_;
goto v_resetjp_634_;
}
else
{
lean_inc(v_a_633_);
lean_dec(v___x_632_);
v___x_635_ = lean_box(0);
v_isShared_636_ = v_isSharedCheck_680_;
goto v_resetjp_634_;
}
v_resetjp_634_:
{
uint8_t v_trace_644_; 
v_trace_644_ = lean_ctor_get_uint8(v_a_631_, sizeof(void*)*18);
lean_dec(v_a_631_);
if (v_trace_644_ == 0)
{
lean_dec(v_a_633_);
goto v___jp_637_;
}
else
{
uint8_t v_useSorry_645_; 
v_useSorry_645_ = lean_ctor_get_uint8(v_a_633_, sizeof(void*)*18 + 30);
lean_dec(v_a_633_);
if (v_useSorry_645_ == 0)
{
goto v___jp_637_;
}
else
{
lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_677_; 
lean_inc(v_mvarId_629_);
lean_del_object(v___x_635_);
v_isSharedCheck_677_ = !lean_is_exclusive(v_goal_616_);
if (v_isSharedCheck_677_ == 0)
{
lean_object* v_unused_678_; lean_object* v_unused_679_; 
v_unused_678_ = lean_ctor_get(v_goal_616_, 1);
lean_dec(v_unused_678_);
v_unused_679_ = lean_ctor_get(v_goal_616_, 0);
lean_dec(v_unused_679_);
v___x_647_ = v_goal_616_;
v_isShared_648_ = v_isSharedCheck_677_;
goto v_resetjp_646_;
}
else
{
lean_dec(v_goal_616_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_677_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_649_; 
v___x_649_ = l_Lean_MVarId_admit(v_mvarId_629_, v_useSorry_645_, v___y_622_, v___y_623_, v___y_624_, v___y_625_);
if (lean_obj_tag(v___x_649_) == 0)
{
lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_667_; 
v_isSharedCheck_667_ = !lean_is_exclusive(v___x_649_);
if (v_isSharedCheck_667_ == 0)
{
lean_object* v_unused_668_; 
v_unused_668_ = lean_ctor_get(v___x_649_, 0);
lean_dec(v_unused_668_);
v___x_651_ = v___x_649_;
v_isShared_652_ = v_isSharedCheck_667_;
goto v_resetjp_650_;
}
else
{
lean_dec(v___x_649_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_667_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
lean_object* v_ref_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_658_; 
v_ref_653_ = lean_ctor_get(v___y_624_, 2);
v___x_654_ = l_Lean_SourceInfo_fromRef(v_ref_653_, v_inconsistent_628_);
v___x_655_ = ((lean_object*)(l_Lean_Meta_Grind_Action_run___lam__0___closed__4));
v___x_656_ = ((lean_object*)(l_Lean_Meta_Grind_Action_run___lam__0___closed__5));
lean_inc(v___x_654_);
if (v_isShared_648_ == 0)
{
lean_ctor_set_tag(v___x_647_, 2);
lean_ctor_set(v___x_647_, 1, v___x_655_);
lean_ctor_set(v___x_647_, 0, v___x_654_);
v___x_658_ = v___x_647_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v___x_654_);
lean_ctor_set(v_reuseFailAlloc_666_, 1, v___x_655_);
v___x_658_ = v_reuseFailAlloc_666_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_664_; 
v___x_659_ = l_Lean_Syntax_node1(v___x_654_, v___x_656_, v___x_658_);
v___x_660_ = lean_box(0);
v___x_661_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_661_, 0, v___x_659_);
lean_ctor_set(v___x_661_, 1, v___x_660_);
v___x_662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_662_, 0, v___x_661_);
if (v_isShared_652_ == 0)
{
lean_ctor_set(v___x_651_, 0, v___x_662_);
v___x_664_ = v___x_651_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_665_; 
v_reuseFailAlloc_665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_665_, 0, v___x_662_);
v___x_664_ = v_reuseFailAlloc_665_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
return v___x_664_;
}
}
}
}
else
{
lean_object* v_a_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_676_; 
lean_del_object(v___x_647_);
v_a_669_ = lean_ctor_get(v___x_649_, 0);
v_isSharedCheck_676_ = !lean_is_exclusive(v___x_649_);
if (v_isSharedCheck_676_ == 0)
{
v___x_671_ = v___x_649_;
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_a_669_);
lean_dec(v___x_649_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___x_674_; 
if (v_isShared_672_ == 0)
{
v___x_674_ = v___x_671_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v_a_669_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
}
}
}
}
v___jp_637_:
{
lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_642_; 
v___x_638_ = lean_box(0);
v___x_639_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_639_, 0, v_goal_616_);
lean_ctor_set(v___x_639_, 1, v___x_638_);
v___x_640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_640_, 0, v___x_639_);
if (v_isShared_636_ == 0)
{
lean_ctor_set(v___x_635_, 0, v___x_640_);
v___x_642_ = v___x_635_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v___x_640_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
}
else
{
lean_object* v_a_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_688_; 
lean_dec(v_a_631_);
lean_dec_ref(v_goal_616_);
v_a_681_ = lean_ctor_get(v___x_632_, 0);
v_isSharedCheck_688_ = !lean_is_exclusive(v___x_632_);
if (v_isSharedCheck_688_ == 0)
{
v___x_683_ = v___x_632_;
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_a_681_);
lean_dec(v___x_632_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_686_; 
if (v_isShared_684_ == 0)
{
v___x_686_ = v___x_683_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_a_681_);
v___x_686_ = v_reuseFailAlloc_687_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
return v___x_686_;
}
}
}
}
else
{
lean_object* v_a_689_; lean_object* v___x_691_; uint8_t v_isShared_692_; uint8_t v_isSharedCheck_696_; 
lean_dec_ref(v_goal_616_);
v_a_689_ = lean_ctor_get(v___x_630_, 0);
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_630_);
if (v_isSharedCheck_696_ == 0)
{
v___x_691_ = v___x_630_;
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
else
{
lean_inc(v_a_689_);
lean_dec(v___x_630_);
v___x_691_ = lean_box(0);
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
v_resetjp_690_:
{
lean_object* v___x_694_; 
if (v_isShared_692_ == 0)
{
v___x_694_ = v___x_691_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v_a_689_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
return v___x_694_;
}
}
}
}
else
{
lean_object* v___x_697_; lean_object* v___x_698_; 
lean_dec_ref(v_goal_616_);
v___x_697_ = ((lean_object*)(l_Lean_Meta_Grind_Action_done___redArg___closed__0));
v___x_698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_698_, 0, v___x_697_);
return v___x_698_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_run___lam__0___boxed(lean_object* v_goal_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_){
_start:
{
lean_object* v_res_710_; 
v_res_710_ = l_Lean_Meta_Grind_Action_run___lam__0(v_goal_699_, v___y_700_, v___y_701_, v___y_702_, v___y_703_, v___y_704_, v___y_705_, v___y_706_, v___y_707_, v___y_708_);
lean_dec(v___y_708_);
lean_dec_ref(v___y_707_);
lean_dec(v___y_706_);
lean_dec_ref(v___y_705_);
lean_dec(v___y_704_);
lean_dec_ref(v___y_703_);
lean_dec(v___y_702_);
lean_dec_ref(v___y_701_);
lean_dec(v___y_700_);
return v_res_710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_run(lean_object* v_goal_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_, lean_object* v_a_720_, lean_object* v_a_721_, lean_object* v_a_722_){
_start:
{
lean_object* v_k_724_; lean_object* v___x_725_; 
v_k_724_ = ((lean_object*)(l_Lean_Meta_Grind_Action_run___closed__0));
lean_inc(v_a_722_);
lean_inc_ref(v_a_721_);
lean_inc(v_a_720_);
lean_inc_ref(v_a_719_);
lean_inc(v_a_718_);
lean_inc_ref(v_a_717_);
lean_inc(v_a_716_);
lean_inc_ref(v_a_715_);
lean_inc(v_a_714_);
v___x_725_ = lean_apply_13(v_a_713_, v_goal_712_, v_k_724_, v_k_724_, v_a_714_, v_a_715_, v_a_716_, v_a_717_, v_a_718_, v_a_719_, v_a_720_, v_a_721_, v_a_722_, lean_box(0));
return v___x_725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_run___boxed(lean_object* v_goal_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_, lean_object* v_a_733_, lean_object* v_a_734_, lean_object* v_a_735_, lean_object* v_a_736_, lean_object* v_a_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = l_Lean_Meta_Grind_Action_run(v_goal_726_, v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_, v_a_732_, v_a_733_, v_a_734_, v_a_735_, v_a_736_);
lean_dec(v_a_736_);
lean_dec_ref(v_a_735_);
lean_dec(v_a_734_);
lean_dec_ref(v_a_733_);
lean_dec(v_a_732_);
lean_dec_ref(v_a_731_);
lean_dec(v_a_730_);
lean_dec_ref(v_a_729_);
lean_dec(v_a_728_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_skipIfNA___redArg(lean_object* v_x_739_, lean_object* v_goal_740_, lean_object* v_kp_741_, lean_object* v_a_742_, lean_object* v_a_743_, lean_object* v_a_744_, lean_object* v_a_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_, lean_object* v_a_749_, lean_object* v_a_750_){
_start:
{
lean_object* v___x_752_; 
lean_inc(v_a_750_);
lean_inc_ref(v_a_749_);
lean_inc(v_a_748_);
lean_inc_ref(v_a_747_);
lean_inc(v_a_746_);
lean_inc_ref(v_a_745_);
lean_inc(v_a_744_);
lean_inc_ref(v_a_743_);
lean_inc(v_a_742_);
lean_inc_ref(v_kp_741_);
v___x_752_ = lean_apply_13(v_x_739_, v_goal_740_, v_kp_741_, v_kp_741_, v_a_742_, v_a_743_, v_a_744_, v_a_745_, v_a_746_, v_a_747_, v_a_748_, v_a_749_, v_a_750_, lean_box(0));
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_skipIfNA___redArg___boxed(lean_object* v_x_753_, lean_object* v_goal_754_, lean_object* v_kp_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_, lean_object* v_a_760_, lean_object* v_a_761_, lean_object* v_a_762_, lean_object* v_a_763_, lean_object* v_a_764_, lean_object* v_a_765_){
_start:
{
lean_object* v_res_766_; 
v_res_766_ = l_Lean_Meta_Grind_Action_skipIfNA___redArg(v_x_753_, v_goal_754_, v_kp_755_, v_a_756_, v_a_757_, v_a_758_, v_a_759_, v_a_760_, v_a_761_, v_a_762_, v_a_763_, v_a_764_);
lean_dec(v_a_764_);
lean_dec_ref(v_a_763_);
lean_dec(v_a_762_);
lean_dec_ref(v_a_761_);
lean_dec(v_a_760_);
lean_dec_ref(v_a_759_);
lean_dec(v_a_758_);
lean_dec_ref(v_a_757_);
lean_dec(v_a_756_);
return v_res_766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_skipIfNA(lean_object* v_x_767_, lean_object* v_goal_768_, lean_object* v_x_769_, lean_object* v_kp_770_, lean_object* v_a_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_a_776_, lean_object* v_a_777_, lean_object* v_a_778_, lean_object* v_a_779_){
_start:
{
lean_object* v___x_781_; 
lean_inc(v_a_779_);
lean_inc_ref(v_a_778_);
lean_inc(v_a_777_);
lean_inc_ref(v_a_776_);
lean_inc(v_a_775_);
lean_inc_ref(v_a_774_);
lean_inc(v_a_773_);
lean_inc_ref(v_a_772_);
lean_inc(v_a_771_);
lean_inc_ref(v_kp_770_);
v___x_781_ = lean_apply_13(v_x_767_, v_goal_768_, v_kp_770_, v_kp_770_, v_a_771_, v_a_772_, v_a_773_, v_a_774_, v_a_775_, v_a_776_, v_a_777_, v_a_778_, v_a_779_, lean_box(0));
return v___x_781_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_skipIfNA___boxed(lean_object* v_x_782_, lean_object* v_goal_783_, lean_object* v_x_784_, lean_object* v_kp_785_, lean_object* v_a_786_, lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_, lean_object* v_a_790_, lean_object* v_a_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_){
_start:
{
lean_object* v_res_796_; 
v_res_796_ = l_Lean_Meta_Grind_Action_skipIfNA(v_x_782_, v_goal_783_, v_x_784_, v_kp_785_, v_a_786_, v_a_787_, v_a_788_, v_a_789_, v_a_790_, v_a_791_, v_a_792_, v_a_793_, v_a_794_);
lean_dec(v_a_794_);
lean_dec_ref(v_a_793_);
lean_dec(v_a_792_);
lean_dec_ref(v_a_791_);
lean_dec(v_a_790_);
lean_dec_ref(v_a_789_);
lean_dec(v_a_788_);
lean_dec_ref(v_a_787_);
lean_dec(v_a_786_);
lean_dec_ref(v_x_784_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_mkGrindStep(lean_object* v_t_813_){
_start:
{
lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; 
v___x_814_ = ((lean_object*)(l_Lean_Meta_Grind_Action_mkGrindStep___closed__1));
v___x_815_ = lean_box(2);
v___x_816_ = ((lean_object*)(l_Lean_Meta_Grind_Action_mkGrindStep___closed__5));
v___x_817_ = lean_unsigned_to_nat(2u);
v___x_818_ = lean_mk_empty_array_with_capacity(v___x_817_);
v___x_819_ = lean_array_push(v___x_818_, v_t_813_);
v___x_820_ = lean_array_push(v___x_819_, v___x_816_);
v___x_821_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_821_, 0, v___x_815_);
lean_ctor_set(v___x_821_, 1, v___x_814_);
lean_ctor_set(v___x_821_, 2, v___x_820_);
return v___x_821_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_TGrindStep_getTactic(lean_object* v_x_822_){
_start:
{
lean_object* v___x_823_; uint8_t v___x_824_; 
v___x_823_ = ((lean_object*)(l_Lean_Meta_Grind_Action_mkGrindStep___closed__1));
lean_inc(v_x_822_);
v___x_824_ = l_Lean_Syntax_isOfKind(v_x_822_, v___x_823_);
if (v___x_824_ == 0)
{
lean_object* v___x_825_; 
lean_dec(v_x_822_);
v___x_825_ = ((lean_object*)(l_Lean_Meta_Grind_Action_mkGrindStep___closed__5));
return v___x_825_;
}
else
{
lean_object* v___x_826_; lean_object* v_tac_827_; lean_object* v___x_828_; lean_object* v___x_829_; uint8_t v___x_830_; 
v___x_826_ = lean_unsigned_to_nat(0u);
v_tac_827_ = l_Lean_Syntax_getArg(v_x_822_, v___x_826_);
v___x_828_ = lean_unsigned_to_nat(1u);
v___x_829_ = l_Lean_Syntax_getArg(v_x_822_, v___x_828_);
lean_dec(v_x_822_);
v___x_830_ = l_Lean_Syntax_isNone(v___x_829_);
if (v___x_830_ == 0)
{
lean_object* v___x_831_; uint8_t v___x_832_; 
v___x_831_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_829_);
v___x_832_ = l_Lean_Syntax_matchesNull(v___x_829_, v___x_831_);
if (v___x_832_ == 0)
{
lean_object* v___x_833_; 
lean_dec(v___x_829_);
lean_dec(v_tac_827_);
v___x_833_ = ((lean_object*)(l_Lean_Meta_Grind_Action_mkGrindStep___closed__5));
return v___x_833_;
}
else
{
lean_object* v___x_834_; uint8_t v___x_835_; 
v___x_834_ = l_Lean_Syntax_getArg(v___x_829_, v___x_828_);
lean_dec(v___x_829_);
v___x_835_ = l_Lean_Syntax_matchesNull(v___x_834_, v___x_828_);
if (v___x_835_ == 0)
{
lean_object* v___x_836_; 
lean_dec(v_tac_827_);
v___x_836_ = ((lean_object*)(l_Lean_Meta_Grind_Action_mkGrindStep___closed__5));
return v___x_836_;
}
else
{
return v_tac_827_;
}
}
}
else
{
lean_dec(v___x_829_);
return v_tac_827_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_Action_mkGrindSeq_spec__0(lean_object* v_a_837_, lean_object* v_a_838_){
_start:
{
if (lean_obj_tag(v_a_837_) == 0)
{
lean_object* v___x_839_; 
v___x_839_ = l_List_reverse___redArg(v_a_838_);
return v___x_839_;
}
else
{
lean_object* v_head_840_; lean_object* v_tail_841_; lean_object* v___x_843_; uint8_t v_isShared_844_; uint8_t v_isSharedCheck_850_; 
v_head_840_ = lean_ctor_get(v_a_837_, 0);
v_tail_841_ = lean_ctor_get(v_a_837_, 1);
v_isSharedCheck_850_ = !lean_is_exclusive(v_a_837_);
if (v_isSharedCheck_850_ == 0)
{
v___x_843_ = v_a_837_;
v_isShared_844_ = v_isSharedCheck_850_;
goto v_resetjp_842_;
}
else
{
lean_inc(v_tail_841_);
lean_inc(v_head_840_);
lean_dec(v_a_837_);
v___x_843_ = lean_box(0);
v_isShared_844_ = v_isSharedCheck_850_;
goto v_resetjp_842_;
}
v_resetjp_842_:
{
lean_object* v___x_845_; lean_object* v___x_847_; 
v___x_845_ = l_Lean_Meta_Grind_Action_mkGrindStep(v_head_840_);
if (v_isShared_844_ == 0)
{
lean_ctor_set(v___x_843_, 1, v_a_838_);
lean_ctor_set(v___x_843_, 0, v___x_845_);
v___x_847_ = v___x_843_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v___x_845_);
lean_ctor_set(v_reuseFailAlloc_849_, 1, v_a_838_);
v___x_847_ = v_reuseFailAlloc_849_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
v_a_837_ = v_tail_841_;
v_a_838_ = v___x_847_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_mkGrindSeq(lean_object* v_s_871_){
_start:
{
lean_object* v___x_872_; lean_object* v_s_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v_s_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; 
v___x_872_ = lean_box(0);
v_s_873_ = l_List_mapTR_loop___at___00Lean_Meta_Grind_Action_mkGrindSeq_spec__0(v_s_871_, v___x_872_);
v___x_874_ = ((lean_object*)(l_Lean_Meta_Grind_Action_mkGrindStep___closed__4));
v___x_875_ = lean_box(2);
v___x_876_ = ((lean_object*)(l_Lean_Meta_Grind_Action_mkGrindSeq___closed__1));
v_s_877_ = l_List_intersperseTR___redArg(v___x_876_, v_s_873_);
v___x_878_ = ((lean_object*)(l_Lean_Meta_Grind_Action_mkGrindSeq___closed__3));
v___x_879_ = ((lean_object*)(l_Lean_Meta_Grind_Action_mkGrindSeq___closed__5));
v___x_880_ = lean_array_mk(v_s_877_);
v___x_881_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_881_, 0, v___x_875_);
lean_ctor_set(v___x_881_, 1, v___x_874_);
lean_ctor_set(v___x_881_, 2, v___x_880_);
v___x_882_ = lean_unsigned_to_nat(1u);
v___x_883_ = lean_mk_empty_array_with_capacity(v___x_882_);
lean_inc_ref(v___x_883_);
v___x_884_ = lean_array_push(v___x_883_, v___x_881_);
v___x_885_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_885_, 0, v___x_875_);
lean_ctor_set(v___x_885_, 1, v___x_879_);
lean_ctor_set(v___x_885_, 2, v___x_884_);
v___x_886_ = lean_array_push(v___x_883_, v___x_885_);
v___x_887_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_887_, 0, v___x_875_);
lean_ctor_set(v___x_887_, 1, v___x_878_);
lean_ctor_set(v___x_887_, 2, v___x_886_);
return v___x_887_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Meta_Grind_Action_mkGrindNext_spec__0(lean_object* v_x_888_, lean_object* v_x_889_){
_start:
{
if (lean_obj_tag(v_x_888_) == 0)
{
if (lean_obj_tag(v_x_889_) == 0)
{
uint8_t v___x_890_; 
v___x_890_ = 1;
return v___x_890_;
}
else
{
uint8_t v___x_891_; 
v___x_891_ = 0;
return v___x_891_;
}
}
else
{
if (lean_obj_tag(v_x_889_) == 0)
{
uint8_t v___x_892_; 
v___x_892_ = 0;
return v___x_892_;
}
else
{
lean_object* v_head_893_; lean_object* v_tail_894_; lean_object* v_head_895_; lean_object* v_tail_896_; uint8_t v___x_897_; 
v_head_893_ = lean_ctor_get(v_x_888_, 0);
v_tail_894_ = lean_ctor_get(v_x_888_, 1);
v_head_895_ = lean_ctor_get(v_x_889_, 0);
v_tail_896_ = lean_ctor_get(v_x_889_, 1);
v___x_897_ = l_Lean_Syntax_structEq(v_head_893_, v_head_895_);
if (v___x_897_ == 0)
{
return v___x_897_;
}
else
{
v_x_888_ = v_tail_894_;
v_x_889_ = v_tail_896_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Meta_Grind_Action_mkGrindNext_spec__0___boxed(lean_object* v_x_899_, lean_object* v_x_900_){
_start:
{
uint8_t v_res_901_; lean_object* v_r_902_; 
v_res_901_ = l_List_beq___at___00Lean_Meta_Grind_Action_mkGrindNext_spec__0(v_x_899_, v_x_900_);
lean_dec(v_x_900_);
lean_dec(v_x_899_);
v_r_902_ = lean_box(v_res_901_);
return v_r_902_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_mkGrindNext___redArg(lean_object* v_s_918_, lean_object* v_a_919_){
_start:
{
lean_object* v_s_922_; lean_object* v_ref_923_; lean_object* v___x_932_; uint8_t v___x_933_; 
v___x_932_ = lean_box(0);
v___x_933_ = l_List_beq___at___00Lean_Meta_Grind_Action_mkGrindNext_spec__0(v_s_918_, v___x_932_);
if (v___x_933_ == 0)
{
lean_object* v_ref_934_; 
v_ref_934_ = lean_ctor_get(v_a_919_, 2);
v_s_922_ = v_s_918_;
v_ref_923_ = v_ref_934_;
goto v___jp_921_;
}
else
{
lean_object* v_ref_935_; uint8_t v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; 
lean_dec(v_s_918_);
v_ref_935_ = lean_ctor_get(v_a_919_, 2);
v___x_936_ = 0;
v___x_937_ = l_Lean_SourceInfo_fromRef(v_ref_935_, v___x_936_);
v___x_938_ = ((lean_object*)(l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__3));
v___x_939_ = ((lean_object*)(l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__4));
lean_inc(v___x_937_);
v___x_940_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_940_, 0, v___x_937_);
lean_ctor_set(v___x_940_, 1, v___x_938_);
v___x_941_ = l_Lean_Syntax_node1(v___x_937_, v___x_939_, v___x_940_);
v___x_942_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_942_, 0, v___x_941_);
lean_ctor_set(v___x_942_, 1, v___x_932_);
v_s_922_ = v___x_942_;
v_ref_923_ = v_ref_935_;
goto v___jp_921_;
}
v___jp_921_:
{
lean_object* v_s_924_; uint8_t v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
v_s_924_ = l_Lean_Meta_Grind_Action_mkGrindSeq(v_s_922_);
v___x_925_ = 0;
v___x_926_ = l_Lean_SourceInfo_fromRef(v_ref_923_, v___x_925_);
v___x_927_ = ((lean_object*)(l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__1));
v___x_928_ = ((lean_object*)(l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__2));
lean_inc(v___x_926_);
v___x_929_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_929_, 0, v___x_926_);
lean_ctor_set(v___x_929_, 1, v___x_928_);
v___x_930_ = l_Lean_Syntax_node2(v___x_926_, v___x_927_, v___x_929_, v_s_924_);
v___x_931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_931_, 0, v___x_930_);
return v___x_931_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_mkGrindNext___redArg___boxed(lean_object* v_s_943_, lean_object* v_a_944_, lean_object* v_a_945_){
_start:
{
lean_object* v_res_946_; 
v_res_946_ = l_Lean_Meta_Grind_Action_mkGrindNext___redArg(v_s_943_, v_a_944_);
lean_dec_ref(v_a_944_);
return v_res_946_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_mkGrindNext(lean_object* v_s_947_, lean_object* v_a_948_, lean_object* v_a_949_){
_start:
{
lean_object* v___x_951_; 
v___x_951_ = l_Lean_Meta_Grind_Action_mkGrindNext___redArg(v_s_947_, v_a_948_);
return v___x_951_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_mkGrindNext___boxed(lean_object* v_s_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_){
_start:
{
lean_object* v_res_956_; 
v_res_956_ = l_Lean_Meta_Grind_Action_mkGrindNext(v_s_952_, v_a_953_, v_a_954_);
lean_dec(v_a_954_);
lean_dec_ref(v_a_953_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg(lean_object* v_s_973_, lean_object* v_a_974_){
_start:
{
lean_object* v_s_977_; lean_object* v_ref_978_; lean_object* v___x_989_; uint8_t v___x_990_; 
v___x_989_ = lean_box(0);
v___x_990_ = l_List_beq___at___00Lean_Meta_Grind_Action_mkGrindNext_spec__0(v_s_973_, v___x_989_);
if (v___x_990_ == 0)
{
lean_object* v_ref_991_; 
v_ref_991_ = lean_ctor_get(v_a_974_, 2);
v_s_977_ = v_s_973_;
v_ref_978_ = v_ref_991_;
goto v___jp_976_;
}
else
{
lean_object* v_ref_992_; uint8_t v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; 
lean_dec(v_s_973_);
v_ref_992_ = lean_ctor_get(v_a_974_, 2);
v___x_993_ = 0;
v___x_994_ = l_Lean_SourceInfo_fromRef(v_ref_992_, v___x_993_);
v___x_995_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__4));
v___x_996_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__5));
lean_inc(v___x_994_);
v___x_997_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_997_, 0, v___x_994_);
lean_ctor_set(v___x_997_, 1, v___x_995_);
v___x_998_ = l_Lean_Syntax_node1(v___x_994_, v___x_996_, v___x_997_);
v___x_999_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_999_, 0, v___x_998_);
lean_ctor_set(v___x_999_, 1, v___x_989_);
v_s_977_ = v___x_999_;
v_ref_978_ = v_ref_992_;
goto v___jp_976_;
}
v___jp_976_:
{
lean_object* v_s_979_; uint8_t v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; 
v_s_979_ = l_Lean_Meta_Grind_Action_mkGrindSeq(v_s_977_);
v___x_980_ = 0;
v___x_981_ = l_Lean_SourceInfo_fromRef(v_ref_978_, v___x_980_);
v___x_982_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__1));
v___x_983_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__2));
lean_inc_n(v___x_981_, 2);
v___x_984_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_984_, 0, v___x_981_);
lean_ctor_set(v___x_984_, 1, v___x_983_);
v___x_985_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___closed__3));
v___x_986_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_986_, 0, v___x_981_);
lean_ctor_set(v___x_986_, 1, v___x_985_);
v___x_987_ = l_Lean_Syntax_node3(v___x_981_, v___x_982_, v___x_984_, v_s_979_, v___x_986_);
v___x_988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_988_, 0, v___x_987_);
return v___x_988_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg___boxed(lean_object* v_s_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_){
_start:
{
lean_object* v_res_1003_; 
v_res_1003_ = l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg(v_s_1000_, v_a_1001_);
lean_dec_ref(v_a_1001_);
return v_res_1003_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen(lean_object* v_s_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_){
_start:
{
lean_object* v___x_1008_; 
v___x_1008_ = l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg(v_s_1004_, v_a_1005_);
return v___x_1008_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___boxed(lean_object* v_s_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen(v_s_1009_, v_a_1010_, v_a_1011_);
lean_dec(v_a_1011_);
lean_dec_ref(v_a_1010_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_group___redArg(lean_object* v_goal_1014_, lean_object* v_kp_1015_, lean_object* v_a_1016_, lean_object* v_a_1017_, lean_object* v_a_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_, lean_object* v_a_1022_, lean_object* v_a_1023_, lean_object* v_a_1024_){
_start:
{
lean_object* v___x_1026_; 
lean_inc(v_a_1024_);
lean_inc_ref(v_a_1023_);
lean_inc(v_a_1022_);
lean_inc_ref(v_a_1021_);
lean_inc(v_a_1020_);
lean_inc_ref(v_a_1019_);
lean_inc(v_a_1018_);
lean_inc_ref(v_a_1017_);
lean_inc(v_a_1016_);
v___x_1026_ = lean_apply_11(v_kp_1015_, v_goal_1014_, v_a_1016_, v_a_1017_, v_a_1018_, v_a_1019_, v_a_1020_, v_a_1021_, v_a_1022_, v_a_1023_, v_a_1024_, lean_box(0));
if (lean_obj_tag(v___x_1026_) == 0)
{
lean_object* v_a_1027_; lean_object* v___x_1028_; 
v_a_1027_ = lean_ctor_get(v___x_1026_, 0);
lean_inc(v_a_1027_);
lean_dec_ref_known(v___x_1026_, 1);
v___x_1028_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_1017_);
if (lean_obj_tag(v___x_1028_) == 0)
{
lean_object* v_a_1029_; lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1063_; 
v_a_1029_ = lean_ctor_get(v___x_1028_, 0);
v_isSharedCheck_1063_ = !lean_is_exclusive(v___x_1028_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1031_ = v___x_1028_;
v_isShared_1032_ = v_isSharedCheck_1063_;
goto v_resetjp_1030_;
}
else
{
lean_inc(v_a_1029_);
lean_dec(v___x_1028_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1063_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
uint8_t v_trace_1033_; 
v_trace_1033_ = lean_ctor_get_uint8(v_a_1029_, sizeof(void*)*18);
lean_dec(v_a_1029_);
if (v_trace_1033_ == 0)
{
lean_object* v___x_1035_; 
if (v_isShared_1032_ == 0)
{
lean_ctor_set(v___x_1031_, 0, v_a_1027_);
v___x_1035_ = v___x_1031_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v_a_1027_);
v___x_1035_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
return v___x_1035_;
}
}
else
{
if (lean_obj_tag(v_a_1027_) == 0)
{
lean_object* v_seq_1037_; 
v_seq_1037_ = lean_ctor_get(v_a_1027_, 0);
if (lean_obj_tag(v_seq_1037_) == 0)
{
lean_object* v___x_1039_; 
if (v_isShared_1032_ == 0)
{
lean_ctor_set(v___x_1031_, 0, v_a_1027_);
v___x_1039_ = v___x_1031_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1040_; 
v_reuseFailAlloc_1040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1040_, 0, v_a_1027_);
v___x_1039_ = v_reuseFailAlloc_1040_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
return v___x_1039_;
}
}
else
{
lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1058_; 
lean_inc(v_seq_1037_);
lean_del_object(v___x_1031_);
v_isSharedCheck_1058_ = !lean_is_exclusive(v_a_1027_);
if (v_isSharedCheck_1058_ == 0)
{
lean_object* v_unused_1059_; 
v_unused_1059_ = lean_ctor_get(v_a_1027_, 0);
lean_dec(v_unused_1059_);
v___x_1042_ = v_a_1027_;
v_isShared_1043_ = v_isSharedCheck_1058_;
goto v_resetjp_1041_;
}
else
{
lean_dec(v_a_1027_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1058_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___x_1044_; lean_object* v_a_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1057_; 
v___x_1044_ = l_Lean_Meta_Grind_Action_mkGrindNext___redArg(v_seq_1037_, v_a_1023_);
v_a_1045_ = lean_ctor_get(v___x_1044_, 0);
v_isSharedCheck_1057_ = !lean_is_exclusive(v___x_1044_);
if (v_isSharedCheck_1057_ == 0)
{
v___x_1047_ = v___x_1044_;
v_isShared_1048_ = v_isSharedCheck_1057_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_a_1045_);
lean_dec(v___x_1044_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1057_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1052_; 
v___x_1049_ = lean_box(0);
v___x_1050_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1050_, 0, v_a_1045_);
lean_ctor_set(v___x_1050_, 1, v___x_1049_);
if (v_isShared_1043_ == 0)
{
lean_ctor_set(v___x_1042_, 0, v___x_1050_);
v___x_1052_ = v___x_1042_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v___x_1050_);
v___x_1052_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
lean_object* v___x_1054_; 
if (v_isShared_1048_ == 0)
{
lean_ctor_set(v___x_1047_, 0, v___x_1052_);
v___x_1054_ = v___x_1047_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v___x_1052_);
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
}
}
else
{
lean_object* v___x_1061_; 
if (v_isShared_1032_ == 0)
{
lean_ctor_set(v___x_1031_, 0, v_a_1027_);
v___x_1061_ = v___x_1031_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v_a_1027_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
return v___x_1061_;
}
}
}
}
}
else
{
lean_object* v_a_1064_; lean_object* v___x_1066_; uint8_t v_isShared_1067_; uint8_t v_isSharedCheck_1071_; 
lean_dec(v_a_1027_);
v_a_1064_ = lean_ctor_get(v___x_1028_, 0);
v_isSharedCheck_1071_ = !lean_is_exclusive(v___x_1028_);
if (v_isSharedCheck_1071_ == 0)
{
v___x_1066_ = v___x_1028_;
v_isShared_1067_ = v_isSharedCheck_1071_;
goto v_resetjp_1065_;
}
else
{
lean_inc(v_a_1064_);
lean_dec(v___x_1028_);
v___x_1066_ = lean_box(0);
v_isShared_1067_ = v_isSharedCheck_1071_;
goto v_resetjp_1065_;
}
v_resetjp_1065_:
{
lean_object* v___x_1069_; 
if (v_isShared_1067_ == 0)
{
v___x_1069_ = v___x_1066_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v_a_1064_);
v___x_1069_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
return v___x_1069_;
}
}
}
}
else
{
return v___x_1026_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_group___redArg___boxed(lean_object* v_goal_1072_, lean_object* v_kp_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_, lean_object* v_a_1078_, lean_object* v_a_1079_, lean_object* v_a_1080_, lean_object* v_a_1081_, lean_object* v_a_1082_, lean_object* v_a_1083_){
_start:
{
lean_object* v_res_1084_; 
v_res_1084_ = l_Lean_Meta_Grind_Action_group___redArg(v_goal_1072_, v_kp_1073_, v_a_1074_, v_a_1075_, v_a_1076_, v_a_1077_, v_a_1078_, v_a_1079_, v_a_1080_, v_a_1081_, v_a_1082_);
lean_dec(v_a_1082_);
lean_dec_ref(v_a_1081_);
lean_dec(v_a_1080_);
lean_dec_ref(v_a_1079_);
lean_dec(v_a_1078_);
lean_dec_ref(v_a_1077_);
lean_dec(v_a_1076_);
lean_dec_ref(v_a_1075_);
lean_dec(v_a_1074_);
return v_res_1084_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_group(lean_object* v_goal_1085_, lean_object* v_x_1086_, lean_object* v_kp_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_){
_start:
{
lean_object* v___x_1098_; 
v___x_1098_ = l_Lean_Meta_Grind_Action_group___redArg(v_goal_1085_, v_kp_1087_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_);
return v___x_1098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_group___boxed(lean_object* v_goal_1099_, lean_object* v_x_1100_, lean_object* v_kp_1101_, lean_object* v_a_1102_, lean_object* v_a_1103_, lean_object* v_a_1104_, lean_object* v_a_1105_, lean_object* v_a_1106_, lean_object* v_a_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_){
_start:
{
lean_object* v_res_1112_; 
v_res_1112_ = l_Lean_Meta_Grind_Action_group(v_goal_1099_, v_x_1100_, v_kp_1101_, v_a_1102_, v_a_1103_, v_a_1104_, v_a_1105_, v_a_1106_, v_a_1107_, v_a_1108_, v_a_1109_, v_a_1110_);
lean_dec(v_a_1110_);
lean_dec_ref(v_a_1109_);
lean_dec(v_a_1108_);
lean_dec_ref(v_a_1107_);
lean_dec(v_a_1106_);
lean_dec_ref(v_a_1105_);
lean_dec(v_a_1104_);
lean_dec_ref(v_a_1103_);
lean_dec(v_a_1102_);
lean_dec_ref(v_x_1100_);
return v_res_1112_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_Action_ungroup_spec__0(lean_object* v_a_1113_, lean_object* v_a_1114_){
_start:
{
if (lean_obj_tag(v_a_1113_) == 0)
{
lean_object* v___x_1115_; 
v___x_1115_ = l_List_reverse___redArg(v_a_1114_);
return v___x_1115_;
}
else
{
lean_object* v_head_1116_; lean_object* v_tail_1117_; lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1126_; 
v_head_1116_ = lean_ctor_get(v_a_1113_, 0);
v_tail_1117_ = lean_ctor_get(v_a_1113_, 1);
v_isSharedCheck_1126_ = !lean_is_exclusive(v_a_1113_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_1119_ = v_a_1113_;
v_isShared_1120_ = v_isSharedCheck_1126_;
goto v_resetjp_1118_;
}
else
{
lean_inc(v_tail_1117_);
lean_inc(v_head_1116_);
lean_dec(v_a_1113_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1126_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v___x_1121_; lean_object* v___x_1123_; 
v___x_1121_ = l_Lean_Meta_Grind_Action_TGrindStep_getTactic(v_head_1116_);
if (v_isShared_1120_ == 0)
{
lean_ctor_set(v___x_1119_, 1, v_a_1114_);
lean_ctor_set(v___x_1119_, 0, v___x_1121_);
v___x_1123_ = v___x_1119_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v___x_1121_);
lean_ctor_set(v_reuseFailAlloc_1125_, 1, v_a_1114_);
v___x_1123_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
v_a_1113_ = v_tail_1117_;
v_a_1114_ = v___x_1123_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_ungroup___redArg(lean_object* v_goal_1134_, lean_object* v_kp_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_, lean_object* v_a_1144_){
_start:
{
lean_object* v___x_1146_; 
lean_inc(v_a_1144_);
lean_inc_ref(v_a_1143_);
lean_inc(v_a_1142_);
lean_inc_ref(v_a_1141_);
lean_inc(v_a_1140_);
lean_inc_ref(v_a_1139_);
lean_inc(v_a_1138_);
lean_inc_ref(v_a_1137_);
lean_inc(v_a_1136_);
v___x_1146_ = lean_apply_11(v_kp_1135_, v_goal_1134_, v_a_1136_, v_a_1137_, v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_, v_a_1143_, v_a_1144_, lean_box(0));
if (lean_obj_tag(v___x_1146_) == 0)
{
lean_object* v_a_1147_; lean_object* v___x_1148_; 
v_a_1147_ = lean_ctor_get(v___x_1146_, 0);
lean_inc(v_a_1147_);
lean_dec_ref_known(v___x_1146_, 1);
v___x_1148_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_1137_);
if (lean_obj_tag(v___x_1148_) == 0)
{
lean_object* v_a_1149_; lean_object* v___x_1151_; uint8_t v_isShared_1152_; uint8_t v_isSharedCheck_1242_; 
v_a_1149_ = lean_ctor_get(v___x_1148_, 0);
v_isSharedCheck_1242_ = !lean_is_exclusive(v___x_1148_);
if (v_isSharedCheck_1242_ == 0)
{
v___x_1151_ = v___x_1148_;
v_isShared_1152_ = v_isSharedCheck_1242_;
goto v_resetjp_1150_;
}
else
{
lean_inc(v_a_1149_);
lean_dec(v___x_1148_);
v___x_1151_ = lean_box(0);
v_isShared_1152_ = v_isSharedCheck_1242_;
goto v_resetjp_1150_;
}
v_resetjp_1150_:
{
uint8_t v_trace_1153_; 
v_trace_1153_ = lean_ctor_get_uint8(v_a_1149_, sizeof(void*)*18);
lean_dec(v_a_1149_);
if (v_trace_1153_ == 0)
{
lean_object* v___x_1155_; 
if (v_isShared_1152_ == 0)
{
lean_ctor_set(v___x_1151_, 0, v_a_1147_);
v___x_1155_ = v___x_1151_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v_a_1147_);
v___x_1155_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
return v___x_1155_;
}
}
else
{
if (lean_obj_tag(v_a_1147_) == 0)
{
lean_object* v_seq_1157_; 
v_seq_1157_ = lean_ctor_get(v_a_1147_, 0);
if (lean_obj_tag(v_seq_1157_) == 1)
{
lean_object* v_tail_1158_; 
v_tail_1158_ = lean_ctor_get(v_seq_1157_, 1);
if (lean_obj_tag(v_tail_1158_) == 0)
{
lean_object* v_head_1159_; lean_object* v___x_1160_; uint8_t v___x_1161_; 
v_head_1159_ = lean_ctor_get(v_seq_1157_, 0);
v___x_1160_ = ((lean_object*)(l_Lean_Meta_Grind_Action_ungroup___redArg___closed__1));
lean_inc(v_head_1159_);
v___x_1161_ = l_Lean_Syntax_isOfKind(v_head_1159_, v___x_1160_);
if (v___x_1161_ == 0)
{
lean_object* v___x_1162_; uint8_t v___x_1163_; 
v___x_1162_ = ((lean_object*)(l_Lean_Meta_Grind_Action_mkGrindNext___redArg___closed__1));
lean_inc(v_head_1159_);
v___x_1163_ = l_Lean_Syntax_isOfKind(v_head_1159_, v___x_1162_);
if (v___x_1163_ == 0)
{
lean_object* v___x_1165_; 
if (v_isShared_1152_ == 0)
{
lean_ctor_set(v___x_1151_, 0, v_a_1147_);
v___x_1165_ = v___x_1151_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_a_1147_);
v___x_1165_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
return v___x_1165_;
}
}
else
{
lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; uint8_t v___x_1170_; 
v___x_1167_ = lean_unsigned_to_nat(1u);
v___x_1168_ = l_Lean_Syntax_getArg(v_head_1159_, v___x_1167_);
v___x_1169_ = ((lean_object*)(l_Lean_Meta_Grind_Action_mkGrindSeq___closed__3));
lean_inc(v___x_1168_);
v___x_1170_ = l_Lean_Syntax_isOfKind(v___x_1168_, v___x_1169_);
if (v___x_1170_ == 0)
{
lean_object* v___x_1172_; 
lean_dec(v___x_1168_);
if (v_isShared_1152_ == 0)
{
lean_ctor_set(v___x_1151_, 0, v_a_1147_);
v___x_1172_ = v___x_1151_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v_a_1147_);
v___x_1172_ = v_reuseFailAlloc_1173_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
return v___x_1172_;
}
}
else
{
lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; uint8_t v___x_1177_; 
v___x_1174_ = lean_unsigned_to_nat(0u);
v___x_1175_ = l_Lean_Syntax_getArg(v___x_1168_, v___x_1174_);
lean_dec(v___x_1168_);
v___x_1176_ = ((lean_object*)(l_Lean_Meta_Grind_Action_mkGrindSeq___closed__5));
lean_inc(v___x_1175_);
v___x_1177_ = l_Lean_Syntax_isOfKind(v___x_1175_, v___x_1176_);
if (v___x_1177_ == 0)
{
lean_object* v___x_1179_; 
lean_dec(v___x_1175_);
if (v_isShared_1152_ == 0)
{
lean_ctor_set(v___x_1151_, 0, v_a_1147_);
v___x_1179_ = v___x_1151_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v_a_1147_);
v___x_1179_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
return v___x_1179_;
}
}
else
{
lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1195_; 
lean_inc(v_tail_1158_);
v_isSharedCheck_1195_ = !lean_is_exclusive(v_a_1147_);
if (v_isSharedCheck_1195_ == 0)
{
lean_object* v_unused_1196_; 
v_unused_1196_ = lean_ctor_get(v_a_1147_, 0);
lean_dec(v_unused_1196_);
v___x_1182_ = v_a_1147_;
v_isShared_1183_ = v_isSharedCheck_1195_;
goto v_resetjp_1181_;
}
else
{
lean_dec(v_a_1147_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1195_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1190_; 
v___x_1184_ = l_Lean_Syntax_getArg(v___x_1175_, v___x_1174_);
lean_dec(v___x_1175_);
v___x_1185_ = l_Lean_Syntax_getArgs(v___x_1184_);
lean_dec(v___x_1184_);
v___x_1186_ = l_Lean_Syntax_TSepArray_getElems___redArg(v___x_1185_);
lean_dec_ref(v___x_1185_);
v___x_1187_ = lean_array_to_list(v___x_1186_);
v___x_1188_ = l_List_mapTR_loop___at___00Lean_Meta_Grind_Action_ungroup_spec__0(v___x_1187_, v_tail_1158_);
if (v_isShared_1183_ == 0)
{
lean_ctor_set(v___x_1182_, 0, v___x_1188_);
v___x_1190_ = v___x_1182_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1194_; 
v_reuseFailAlloc_1194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1194_, 0, v___x_1188_);
v___x_1190_ = v_reuseFailAlloc_1194_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
lean_object* v___x_1192_; 
if (v_isShared_1152_ == 0)
{
lean_ctor_set(v___x_1151_, 0, v___x_1190_);
v___x_1192_ = v___x_1151_;
goto v_reusejp_1191_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v___x_1190_);
v___x_1192_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1191_;
}
v_reusejp_1191_:
{
return v___x_1192_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; uint8_t v___x_1200_; 
v___x_1197_ = lean_unsigned_to_nat(0u);
v___x_1198_ = lean_unsigned_to_nat(1u);
v___x_1199_ = l_Lean_Syntax_getArg(v_head_1159_, v___x_1198_);
v___x_1200_ = l_Lean_Syntax_matchesNull(v___x_1199_, v___x_1197_);
if (v___x_1200_ == 0)
{
lean_object* v___x_1202_; 
if (v_isShared_1152_ == 0)
{
lean_ctor_set(v___x_1151_, 0, v_a_1147_);
v___x_1202_ = v___x_1151_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v_a_1147_);
v___x_1202_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
return v___x_1202_;
}
}
else
{
lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; uint8_t v___x_1207_; 
v___x_1204_ = lean_unsigned_to_nat(3u);
v___x_1205_ = l_Lean_Syntax_getArg(v_head_1159_, v___x_1204_);
v___x_1206_ = ((lean_object*)(l_Lean_Meta_Grind_Action_mkGrindSeq___closed__3));
lean_inc(v___x_1205_);
v___x_1207_ = l_Lean_Syntax_isOfKind(v___x_1205_, v___x_1206_);
if (v___x_1207_ == 0)
{
lean_object* v___x_1209_; 
lean_dec(v___x_1205_);
if (v_isShared_1152_ == 0)
{
lean_ctor_set(v___x_1151_, 0, v_a_1147_);
v___x_1209_ = v___x_1151_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1210_; 
v_reuseFailAlloc_1210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1210_, 0, v_a_1147_);
v___x_1209_ = v_reuseFailAlloc_1210_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
return v___x_1209_;
}
}
else
{
lean_object* v___x_1211_; lean_object* v___x_1212_; uint8_t v___x_1213_; 
v___x_1211_ = l_Lean_Syntax_getArg(v___x_1205_, v___x_1197_);
lean_dec(v___x_1205_);
v___x_1212_ = ((lean_object*)(l_Lean_Meta_Grind_Action_mkGrindSeq___closed__5));
lean_inc(v___x_1211_);
v___x_1213_ = l_Lean_Syntax_isOfKind(v___x_1211_, v___x_1212_);
if (v___x_1213_ == 0)
{
lean_object* v___x_1215_; 
lean_dec(v___x_1211_);
if (v_isShared_1152_ == 0)
{
lean_ctor_set(v___x_1151_, 0, v_a_1147_);
v___x_1215_ = v___x_1151_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v_a_1147_);
v___x_1215_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
return v___x_1215_;
}
}
else
{
lean_object* v___x_1218_; uint8_t v_isShared_1219_; uint8_t v_isSharedCheck_1231_; 
lean_inc(v_tail_1158_);
v_isSharedCheck_1231_ = !lean_is_exclusive(v_a_1147_);
if (v_isSharedCheck_1231_ == 0)
{
lean_object* v_unused_1232_; 
v_unused_1232_ = lean_ctor_get(v_a_1147_, 0);
lean_dec(v_unused_1232_);
v___x_1218_ = v_a_1147_;
v_isShared_1219_ = v_isSharedCheck_1231_;
goto v_resetjp_1217_;
}
else
{
lean_dec(v_a_1147_);
v___x_1218_ = lean_box(0);
v_isShared_1219_ = v_isSharedCheck_1231_;
goto v_resetjp_1217_;
}
v_resetjp_1217_:
{
lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1226_; 
v___x_1220_ = l_Lean_Syntax_getArg(v___x_1211_, v___x_1197_);
lean_dec(v___x_1211_);
v___x_1221_ = l_Lean_Syntax_getArgs(v___x_1220_);
lean_dec(v___x_1220_);
v___x_1222_ = l_Lean_Syntax_TSepArray_getElems___redArg(v___x_1221_);
lean_dec_ref(v___x_1221_);
v___x_1223_ = lean_array_to_list(v___x_1222_);
v___x_1224_ = l_List_mapTR_loop___at___00Lean_Meta_Grind_Action_ungroup_spec__0(v___x_1223_, v_tail_1158_);
if (v_isShared_1219_ == 0)
{
lean_ctor_set(v___x_1218_, 0, v___x_1224_);
v___x_1226_ = v___x_1218_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v___x_1224_);
v___x_1226_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
lean_object* v___x_1228_; 
if (v_isShared_1152_ == 0)
{
lean_ctor_set(v___x_1151_, 0, v___x_1226_);
v___x_1228_ = v___x_1151_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v___x_1226_);
v___x_1228_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
return v___x_1228_;
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
lean_object* v___x_1234_; 
if (v_isShared_1152_ == 0)
{
lean_ctor_set(v___x_1151_, 0, v_a_1147_);
v___x_1234_ = v___x_1151_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v_a_1147_);
v___x_1234_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
return v___x_1234_;
}
}
}
else
{
lean_object* v___x_1237_; 
if (v_isShared_1152_ == 0)
{
lean_ctor_set(v___x_1151_, 0, v_a_1147_);
v___x_1237_ = v___x_1151_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v_a_1147_);
v___x_1237_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
return v___x_1237_;
}
}
}
else
{
lean_object* v___x_1240_; 
if (v_isShared_1152_ == 0)
{
lean_ctor_set(v___x_1151_, 0, v_a_1147_);
v___x_1240_ = v___x_1151_;
goto v_reusejp_1239_;
}
else
{
lean_object* v_reuseFailAlloc_1241_; 
v_reuseFailAlloc_1241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1241_, 0, v_a_1147_);
v___x_1240_ = v_reuseFailAlloc_1241_;
goto v_reusejp_1239_;
}
v_reusejp_1239_:
{
return v___x_1240_;
}
}
}
}
}
else
{
lean_object* v_a_1243_; lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1250_; 
lean_dec(v_a_1147_);
v_a_1243_ = lean_ctor_get(v___x_1148_, 0);
v_isSharedCheck_1250_ = !lean_is_exclusive(v___x_1148_);
if (v_isSharedCheck_1250_ == 0)
{
v___x_1245_ = v___x_1148_;
v_isShared_1246_ = v_isSharedCheck_1250_;
goto v_resetjp_1244_;
}
else
{
lean_inc(v_a_1243_);
lean_dec(v___x_1148_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1250_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v___x_1248_; 
if (v_isShared_1246_ == 0)
{
v___x_1248_ = v___x_1245_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v_a_1243_);
v___x_1248_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
return v___x_1248_;
}
}
}
}
else
{
return v___x_1146_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_ungroup___redArg___boxed(lean_object* v_goal_1251_, lean_object* v_kp_1252_, lean_object* v_a_1253_, lean_object* v_a_1254_, lean_object* v_a_1255_, lean_object* v_a_1256_, lean_object* v_a_1257_, lean_object* v_a_1258_, lean_object* v_a_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_, lean_object* v_a_1262_){
_start:
{
lean_object* v_res_1263_; 
v_res_1263_ = l_Lean_Meta_Grind_Action_ungroup___redArg(v_goal_1251_, v_kp_1252_, v_a_1253_, v_a_1254_, v_a_1255_, v_a_1256_, v_a_1257_, v_a_1258_, v_a_1259_, v_a_1260_, v_a_1261_);
lean_dec(v_a_1261_);
lean_dec_ref(v_a_1260_);
lean_dec(v_a_1259_);
lean_dec_ref(v_a_1258_);
lean_dec(v_a_1257_);
lean_dec_ref(v_a_1256_);
lean_dec(v_a_1255_);
lean_dec_ref(v_a_1254_);
lean_dec(v_a_1253_);
return v_res_1263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_ungroup(lean_object* v_goal_1264_, lean_object* v_x_1265_, lean_object* v_kp_1266_, lean_object* v_a_1267_, lean_object* v_a_1268_, lean_object* v_a_1269_, lean_object* v_a_1270_, lean_object* v_a_1271_, lean_object* v_a_1272_, lean_object* v_a_1273_, lean_object* v_a_1274_, lean_object* v_a_1275_){
_start:
{
lean_object* v___x_1277_; 
v___x_1277_ = l_Lean_Meta_Grind_Action_ungroup___redArg(v_goal_1264_, v_kp_1266_, v_a_1267_, v_a_1268_, v_a_1269_, v_a_1270_, v_a_1271_, v_a_1272_, v_a_1273_, v_a_1274_, v_a_1275_);
return v___x_1277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_ungroup___boxed(lean_object* v_goal_1278_, lean_object* v_x_1279_, lean_object* v_kp_1280_, lean_object* v_a_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_, lean_object* v_a_1284_, lean_object* v_a_1285_, lean_object* v_a_1286_, lean_object* v_a_1287_, lean_object* v_a_1288_, lean_object* v_a_1289_, lean_object* v_a_1290_){
_start:
{
lean_object* v_res_1291_; 
v_res_1291_ = l_Lean_Meta_Grind_Action_ungroup(v_goal_1278_, v_x_1279_, v_kp_1280_, v_a_1281_, v_a_1282_, v_a_1283_, v_a_1284_, v_a_1285_, v_a_1286_, v_a_1287_, v_a_1288_, v_a_1289_);
lean_dec(v_a_1289_);
lean_dec_ref(v_a_1288_);
lean_dec(v_a_1287_);
lean_dec_ref(v_a_1286_);
lean_dec(v_a_1285_);
lean_dec_ref(v_a_1284_);
lean_dec(v_a_1283_);
lean_dec_ref(v_a_1282_);
lean_dec(v_a_1281_);
lean_dec_ref(v_x_1279_);
return v_res_1291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_concatTactic(lean_object* v_r_1292_, lean_object* v_mk_1293_, lean_object* v_a_1294_, lean_object* v_a_1295_, lean_object* v_a_1296_, lean_object* v_a_1297_, lean_object* v_a_1298_, lean_object* v_a_1299_, lean_object* v_a_1300_, lean_object* v_a_1301_, lean_object* v_a_1302_){
_start:
{
lean_object* v___x_1304_; 
v___x_1304_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_1295_);
if (lean_obj_tag(v___x_1304_) == 0)
{
lean_object* v_a_1305_; lean_object* v___x_1307_; uint8_t v_isShared_1308_; uint8_t v_isSharedCheck_1342_; 
v_a_1305_ = lean_ctor_get(v___x_1304_, 0);
v_isSharedCheck_1342_ = !lean_is_exclusive(v___x_1304_);
if (v_isSharedCheck_1342_ == 0)
{
v___x_1307_ = v___x_1304_;
v_isShared_1308_ = v_isSharedCheck_1342_;
goto v_resetjp_1306_;
}
else
{
lean_inc(v_a_1305_);
lean_dec(v___x_1304_);
v___x_1307_ = lean_box(0);
v_isShared_1308_ = v_isSharedCheck_1342_;
goto v_resetjp_1306_;
}
v_resetjp_1306_:
{
uint8_t v_trace_1309_; 
v_trace_1309_ = lean_ctor_get_uint8(v_a_1305_, sizeof(void*)*18);
lean_dec(v_a_1305_);
if (v_trace_1309_ == 0)
{
lean_object* v___x_1311_; 
lean_dec_ref(v_mk_1293_);
if (v_isShared_1308_ == 0)
{
lean_ctor_set(v___x_1307_, 0, v_r_1292_);
v___x_1311_ = v___x_1307_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v_r_1292_);
v___x_1311_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
return v___x_1311_;
}
}
else
{
if (lean_obj_tag(v_r_1292_) == 0)
{
lean_object* v_seq_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1338_; 
lean_del_object(v___x_1307_);
v_seq_1313_ = lean_ctor_get(v_r_1292_, 0);
v_isSharedCheck_1338_ = !lean_is_exclusive(v_r_1292_);
if (v_isSharedCheck_1338_ == 0)
{
v___x_1315_ = v_r_1292_;
v_isShared_1316_ = v_isSharedCheck_1338_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_seq_1313_);
lean_dec(v_r_1292_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1338_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v___x_1317_; 
lean_inc(v_a_1302_);
lean_inc_ref(v_a_1301_);
lean_inc(v_a_1300_);
lean_inc_ref(v_a_1299_);
lean_inc(v_a_1298_);
lean_inc_ref(v_a_1297_);
lean_inc(v_a_1296_);
lean_inc_ref(v_a_1295_);
lean_inc(v_a_1294_);
v___x_1317_ = lean_apply_10(v_mk_1293_, v_a_1294_, v_a_1295_, v_a_1296_, v_a_1297_, v_a_1298_, v_a_1299_, v_a_1300_, v_a_1301_, v_a_1302_, lean_box(0));
if (lean_obj_tag(v___x_1317_) == 0)
{
lean_object* v_a_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1329_; 
v_a_1318_ = lean_ctor_get(v___x_1317_, 0);
v_isSharedCheck_1329_ = !lean_is_exclusive(v___x_1317_);
if (v_isSharedCheck_1329_ == 0)
{
v___x_1320_ = v___x_1317_;
v_isShared_1321_ = v_isSharedCheck_1329_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_a_1318_);
lean_dec(v___x_1317_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1329_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1322_; lean_object* v___x_1324_; 
v___x_1322_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1322_, 0, v_a_1318_);
lean_ctor_set(v___x_1322_, 1, v_seq_1313_);
if (v_isShared_1316_ == 0)
{
lean_ctor_set(v___x_1315_, 0, v___x_1322_);
v___x_1324_ = v___x_1315_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v___x_1322_);
v___x_1324_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
lean_object* v___x_1326_; 
if (v_isShared_1321_ == 0)
{
lean_ctor_set(v___x_1320_, 0, v___x_1324_);
v___x_1326_ = v___x_1320_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v___x_1324_);
v___x_1326_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
return v___x_1326_;
}
}
}
}
else
{
lean_object* v_a_1330_; lean_object* v___x_1332_; uint8_t v_isShared_1333_; uint8_t v_isSharedCheck_1337_; 
lean_del_object(v___x_1315_);
lean_dec(v_seq_1313_);
v_a_1330_ = lean_ctor_get(v___x_1317_, 0);
v_isSharedCheck_1337_ = !lean_is_exclusive(v___x_1317_);
if (v_isSharedCheck_1337_ == 0)
{
v___x_1332_ = v___x_1317_;
v_isShared_1333_ = v_isSharedCheck_1337_;
goto v_resetjp_1331_;
}
else
{
lean_inc(v_a_1330_);
lean_dec(v___x_1317_);
v___x_1332_ = lean_box(0);
v_isShared_1333_ = v_isSharedCheck_1337_;
goto v_resetjp_1331_;
}
v_resetjp_1331_:
{
lean_object* v___x_1335_; 
if (v_isShared_1333_ == 0)
{
v___x_1335_ = v___x_1332_;
goto v_reusejp_1334_;
}
else
{
lean_object* v_reuseFailAlloc_1336_; 
v_reuseFailAlloc_1336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1336_, 0, v_a_1330_);
v___x_1335_ = v_reuseFailAlloc_1336_;
goto v_reusejp_1334_;
}
v_reusejp_1334_:
{
return v___x_1335_;
}
}
}
}
}
else
{
lean_object* v___x_1340_; 
lean_dec_ref(v_mk_1293_);
if (v_isShared_1308_ == 0)
{
lean_ctor_set(v___x_1307_, 0, v_r_1292_);
v___x_1340_ = v___x_1307_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v_r_1292_);
v___x_1340_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
return v___x_1340_;
}
}
}
}
}
else
{
lean_object* v_a_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1350_; 
lean_dec_ref(v_mk_1293_);
lean_dec_ref(v_r_1292_);
v_a_1343_ = lean_ctor_get(v___x_1304_, 0);
v_isSharedCheck_1350_ = !lean_is_exclusive(v___x_1304_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1345_ = v___x_1304_;
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_a_1343_);
lean_dec(v___x_1304_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v___x_1348_; 
if (v_isShared_1346_ == 0)
{
v___x_1348_ = v___x_1345_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v_a_1343_);
v___x_1348_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
return v___x_1348_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_concatTactic___boxed(lean_object* v_r_1351_, lean_object* v_mk_1352_, lean_object* v_a_1353_, lean_object* v_a_1354_, lean_object* v_a_1355_, lean_object* v_a_1356_, lean_object* v_a_1357_, lean_object* v_a_1358_, lean_object* v_a_1359_, lean_object* v_a_1360_, lean_object* v_a_1361_, lean_object* v_a_1362_){
_start:
{
lean_object* v_res_1363_; 
v_res_1363_ = l_Lean_Meta_Grind_Action_concatTactic(v_r_1351_, v_mk_1352_, v_a_1353_, v_a_1354_, v_a_1355_, v_a_1356_, v_a_1357_, v_a_1358_, v_a_1359_, v_a_1360_, v_a_1361_);
lean_dec(v_a_1361_);
lean_dec_ref(v_a_1360_);
lean_dec(v_a_1359_);
lean_dec_ref(v_a_1358_);
lean_dec(v_a_1357_);
lean_dec_ref(v_a_1356_);
lean_dec(v_a_1355_);
lean_dec_ref(v_a_1354_);
lean_dec(v_a_1353_);
return v_res_1363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_closeWith(lean_object* v_mk_1364_, lean_object* v_a_1365_, lean_object* v_a_1366_, lean_object* v_a_1367_, lean_object* v_a_1368_, lean_object* v_a_1369_, lean_object* v_a_1370_, lean_object* v_a_1371_, lean_object* v_a_1372_, lean_object* v_a_1373_){
_start:
{
lean_object* v___x_1375_; 
v___x_1375_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_1366_);
if (lean_obj_tag(v___x_1375_) == 0)
{
lean_object* v_a_1376_; lean_object* v___x_1378_; uint8_t v_isShared_1379_; uint8_t v_isSharedCheck_1405_; 
v_a_1376_ = lean_ctor_get(v___x_1375_, 0);
v_isSharedCheck_1405_ = !lean_is_exclusive(v___x_1375_);
if (v_isSharedCheck_1405_ == 0)
{
v___x_1378_ = v___x_1375_;
v_isShared_1379_ = v_isSharedCheck_1405_;
goto v_resetjp_1377_;
}
else
{
lean_inc(v_a_1376_);
lean_dec(v___x_1375_);
v___x_1378_ = lean_box(0);
v_isShared_1379_ = v_isSharedCheck_1405_;
goto v_resetjp_1377_;
}
v_resetjp_1377_:
{
uint8_t v_trace_1380_; 
v_trace_1380_ = lean_ctor_get_uint8(v_a_1376_, sizeof(void*)*18);
lean_dec(v_a_1376_);
if (v_trace_1380_ == 0)
{
lean_object* v___x_1381_; lean_object* v___x_1383_; 
lean_dec_ref(v_mk_1364_);
v___x_1381_ = ((lean_object*)(l_Lean_Meta_Grind_Action_done___redArg___closed__0));
if (v_isShared_1379_ == 0)
{
lean_ctor_set(v___x_1378_, 0, v___x_1381_);
v___x_1383_ = v___x_1378_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v___x_1381_);
v___x_1383_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
return v___x_1383_;
}
}
else
{
lean_object* v___x_1385_; 
lean_del_object(v___x_1378_);
lean_inc(v_a_1373_);
lean_inc_ref(v_a_1372_);
lean_inc(v_a_1371_);
lean_inc_ref(v_a_1370_);
lean_inc(v_a_1369_);
lean_inc_ref(v_a_1368_);
lean_inc(v_a_1367_);
lean_inc_ref(v_a_1366_);
lean_inc(v_a_1365_);
v___x_1385_ = lean_apply_10(v_mk_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_, v_a_1372_, v_a_1373_, lean_box(0));
if (lean_obj_tag(v___x_1385_) == 0)
{
lean_object* v_a_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1396_; 
v_a_1386_ = lean_ctor_get(v___x_1385_, 0);
v_isSharedCheck_1396_ = !lean_is_exclusive(v___x_1385_);
if (v_isSharedCheck_1396_ == 0)
{
v___x_1388_ = v___x_1385_;
v_isShared_1389_ = v_isSharedCheck_1396_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_a_1386_);
lean_dec(v___x_1385_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1396_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1394_; 
v___x_1390_ = lean_box(0);
v___x_1391_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1391_, 0, v_a_1386_);
lean_ctor_set(v___x_1391_, 1, v___x_1390_);
v___x_1392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1392_, 0, v___x_1391_);
if (v_isShared_1389_ == 0)
{
lean_ctor_set(v___x_1388_, 0, v___x_1392_);
v___x_1394_ = v___x_1388_;
goto v_reusejp_1393_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v___x_1392_);
v___x_1394_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1393_;
}
v_reusejp_1393_:
{
return v___x_1394_;
}
}
}
else
{
lean_object* v_a_1397_; lean_object* v___x_1399_; uint8_t v_isShared_1400_; uint8_t v_isSharedCheck_1404_; 
v_a_1397_ = lean_ctor_get(v___x_1385_, 0);
v_isSharedCheck_1404_ = !lean_is_exclusive(v___x_1385_);
if (v_isSharedCheck_1404_ == 0)
{
v___x_1399_ = v___x_1385_;
v_isShared_1400_ = v_isSharedCheck_1404_;
goto v_resetjp_1398_;
}
else
{
lean_inc(v_a_1397_);
lean_dec(v___x_1385_);
v___x_1399_ = lean_box(0);
v_isShared_1400_ = v_isSharedCheck_1404_;
goto v_resetjp_1398_;
}
v_resetjp_1398_:
{
lean_object* v___x_1402_; 
if (v_isShared_1400_ == 0)
{
v___x_1402_ = v___x_1399_;
goto v_reusejp_1401_;
}
else
{
lean_object* v_reuseFailAlloc_1403_; 
v_reuseFailAlloc_1403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1403_, 0, v_a_1397_);
v___x_1402_ = v_reuseFailAlloc_1403_;
goto v_reusejp_1401_;
}
v_reusejp_1401_:
{
return v___x_1402_;
}
}
}
}
}
}
else
{
lean_object* v_a_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1413_; 
lean_dec_ref(v_mk_1364_);
v_a_1406_ = lean_ctor_get(v___x_1375_, 0);
v_isSharedCheck_1413_ = !lean_is_exclusive(v___x_1375_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1408_ = v___x_1375_;
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_a_1406_);
lean_dec(v___x_1375_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1411_; 
if (v_isShared_1409_ == 0)
{
v___x_1411_ = v___x_1408_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v_a_1406_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_closeWith___boxed(lean_object* v_mk_1414_, lean_object* v_a_1415_, lean_object* v_a_1416_, lean_object* v_a_1417_, lean_object* v_a_1418_, lean_object* v_a_1419_, lean_object* v_a_1420_, lean_object* v_a_1421_, lean_object* v_a_1422_, lean_object* v_a_1423_, lean_object* v_a_1424_){
_start:
{
lean_object* v_res_1425_; 
v_res_1425_ = l_Lean_Meta_Grind_Action_closeWith(v_mk_1414_, v_a_1415_, v_a_1416_, v_a_1417_, v_a_1418_, v_a_1419_, v_a_1420_, v_a_1421_, v_a_1422_, v_a_1423_);
lean_dec(v_a_1423_);
lean_dec_ref(v_a_1422_);
lean_dec(v_a_1421_);
lean_dec_ref(v_a_1420_);
lean_dec(v_a_1419_);
lean_dec_ref(v_a_1418_);
lean_dec(v_a_1417_);
lean_dec_ref(v_a_1416_);
lean_dec(v_a_1415_);
return v_res_1425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_saveStateIfTracing___redArg(lean_object* v_a_1426_, lean_object* v_a_1427_, lean_object* v_a_1428_, lean_object* v_a_1429_){
_start:
{
lean_object* v___x_1431_; 
v___x_1431_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_1426_);
if (lean_obj_tag(v___x_1431_) == 0)
{
lean_object* v_a_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1459_; 
v_a_1432_ = lean_ctor_get(v___x_1431_, 0);
v_isSharedCheck_1459_ = !lean_is_exclusive(v___x_1431_);
if (v_isSharedCheck_1459_ == 0)
{
v___x_1434_ = v___x_1431_;
v_isShared_1435_ = v_isSharedCheck_1459_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_a_1432_);
lean_dec(v___x_1431_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1459_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
uint8_t v_trace_1436_; 
v_trace_1436_ = lean_ctor_get_uint8(v_a_1432_, sizeof(void*)*18);
lean_dec(v_a_1432_);
if (v_trace_1436_ == 0)
{
lean_object* v___x_1437_; lean_object* v___x_1439_; 
v___x_1437_ = lean_box(0);
if (v_isShared_1435_ == 0)
{
lean_ctor_set(v___x_1434_, 0, v___x_1437_);
v___x_1439_ = v___x_1434_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v___x_1437_);
v___x_1439_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
return v___x_1439_;
}
}
else
{
lean_object* v___x_1441_; 
lean_del_object(v___x_1434_);
v___x_1441_ = l_Lean_Meta_Grind_saveState___redArg(v_a_1427_, v_a_1428_, v_a_1429_);
if (lean_obj_tag(v___x_1441_) == 0)
{
lean_object* v_a_1442_; lean_object* v___x_1444_; uint8_t v_isShared_1445_; uint8_t v_isSharedCheck_1450_; 
v_a_1442_ = lean_ctor_get(v___x_1441_, 0);
v_isSharedCheck_1450_ = !lean_is_exclusive(v___x_1441_);
if (v_isSharedCheck_1450_ == 0)
{
v___x_1444_ = v___x_1441_;
v_isShared_1445_ = v_isSharedCheck_1450_;
goto v_resetjp_1443_;
}
else
{
lean_inc(v_a_1442_);
lean_dec(v___x_1441_);
v___x_1444_ = lean_box(0);
v_isShared_1445_ = v_isSharedCheck_1450_;
goto v_resetjp_1443_;
}
v_resetjp_1443_:
{
lean_object* v___x_1446_; lean_object* v___x_1448_; 
v___x_1446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1446_, 0, v_a_1442_);
if (v_isShared_1445_ == 0)
{
lean_ctor_set(v___x_1444_, 0, v___x_1446_);
v___x_1448_ = v___x_1444_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v___x_1446_);
v___x_1448_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
return v___x_1448_;
}
}
}
else
{
lean_object* v_a_1451_; lean_object* v___x_1453_; uint8_t v_isShared_1454_; uint8_t v_isSharedCheck_1458_; 
v_a_1451_ = lean_ctor_get(v___x_1441_, 0);
v_isSharedCheck_1458_ = !lean_is_exclusive(v___x_1441_);
if (v_isSharedCheck_1458_ == 0)
{
v___x_1453_ = v___x_1441_;
v_isShared_1454_ = v_isSharedCheck_1458_;
goto v_resetjp_1452_;
}
else
{
lean_inc(v_a_1451_);
lean_dec(v___x_1441_);
v___x_1453_ = lean_box(0);
v_isShared_1454_ = v_isSharedCheck_1458_;
goto v_resetjp_1452_;
}
v_resetjp_1452_:
{
lean_object* v___x_1456_; 
if (v_isShared_1454_ == 0)
{
v___x_1456_ = v___x_1453_;
goto v_reusejp_1455_;
}
else
{
lean_object* v_reuseFailAlloc_1457_; 
v_reuseFailAlloc_1457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1457_, 0, v_a_1451_);
v___x_1456_ = v_reuseFailAlloc_1457_;
goto v_reusejp_1455_;
}
v_reusejp_1455_:
{
return v___x_1456_;
}
}
}
}
}
}
else
{
lean_object* v_a_1460_; lean_object* v___x_1462_; uint8_t v_isShared_1463_; uint8_t v_isSharedCheck_1467_; 
v_a_1460_ = lean_ctor_get(v___x_1431_, 0);
v_isSharedCheck_1467_ = !lean_is_exclusive(v___x_1431_);
if (v_isSharedCheck_1467_ == 0)
{
v___x_1462_ = v___x_1431_;
v_isShared_1463_ = v_isSharedCheck_1467_;
goto v_resetjp_1461_;
}
else
{
lean_inc(v_a_1460_);
lean_dec(v___x_1431_);
v___x_1462_ = lean_box(0);
v_isShared_1463_ = v_isSharedCheck_1467_;
goto v_resetjp_1461_;
}
v_resetjp_1461_:
{
lean_object* v___x_1465_; 
if (v_isShared_1463_ == 0)
{
v___x_1465_ = v___x_1462_;
goto v_reusejp_1464_;
}
else
{
lean_object* v_reuseFailAlloc_1466_; 
v_reuseFailAlloc_1466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1466_, 0, v_a_1460_);
v___x_1465_ = v_reuseFailAlloc_1466_;
goto v_reusejp_1464_;
}
v_reusejp_1464_:
{
return v___x_1465_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_saveStateIfTracing___redArg___boxed(lean_object* v_a_1468_, lean_object* v_a_1469_, lean_object* v_a_1470_, lean_object* v_a_1471_, lean_object* v_a_1472_){
_start:
{
lean_object* v_res_1473_; 
v_res_1473_ = l_Lean_Meta_Grind_Action_saveStateIfTracing___redArg(v_a_1468_, v_a_1469_, v_a_1470_, v_a_1471_);
lean_dec(v_a_1471_);
lean_dec(v_a_1470_);
lean_dec(v_a_1469_);
lean_dec_ref(v_a_1468_);
return v_res_1473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_saveStateIfTracing(lean_object* v_a_1474_, lean_object* v_a_1475_, lean_object* v_a_1476_, lean_object* v_a_1477_, lean_object* v_a_1478_, lean_object* v_a_1479_, lean_object* v_a_1480_, lean_object* v_a_1481_, lean_object* v_a_1482_){
_start:
{
lean_object* v___x_1484_; 
v___x_1484_ = l_Lean_Meta_Grind_Action_saveStateIfTracing___redArg(v_a_1475_, v_a_1476_, v_a_1480_, v_a_1482_);
return v___x_1484_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_saveStateIfTracing___boxed(lean_object* v_a_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_, lean_object* v_a_1488_, lean_object* v_a_1489_, lean_object* v_a_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_, lean_object* v_a_1494_){
_start:
{
lean_object* v_res_1495_; 
v_res_1495_ = l_Lean_Meta_Grind_Action_saveStateIfTracing(v_a_1485_, v_a_1486_, v_a_1487_, v_a_1488_, v_a_1489_, v_a_1490_, v_a_1491_, v_a_1492_, v_a_1493_);
lean_dec(v_a_1493_);
lean_dec_ref(v_a_1492_);
lean_dec(v_a_1491_);
lean_dec_ref(v_a_1490_);
lean_dec(v_a_1489_);
lean_dec_ref(v_a_1488_);
lean_dec(v_a_1487_);
lean_dec_ref(v_a_1486_);
lean_dec(v_a_1485_);
return v_res_1495_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Meta_Grind_Action_checkSeqAt_spec__0___redArg(lean_object* v_x_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_){
_start:
{
lean_object* v___x_1507_; 
v___x_1507_ = l_Lean_Meta_Grind_saveState___redArg(v___y_1499_, v___y_1503_, v___y_1505_);
if (lean_obj_tag(v___x_1507_) == 0)
{
lean_object* v_a_1508_; lean_object* v_r_1509_; 
v_a_1508_ = lean_ctor_get(v___x_1507_, 0);
lean_inc(v_a_1508_);
lean_dec_ref_known(v___x_1507_, 1);
lean_inc(v___y_1505_);
lean_inc_ref(v___y_1504_);
lean_inc(v___y_1503_);
lean_inc_ref(v___y_1502_);
lean_inc(v___y_1501_);
lean_inc_ref(v___y_1500_);
lean_inc(v___y_1499_);
lean_inc_ref(v___y_1498_);
lean_inc(v___y_1497_);
v_r_1509_ = lean_apply_10(v_x_1496_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_, v___y_1505_, lean_box(0));
if (lean_obj_tag(v_r_1509_) == 0)
{
lean_object* v_a_1510_; lean_object* v___x_1511_; 
v_a_1510_ = lean_ctor_get(v_r_1509_, 0);
lean_inc(v_a_1510_);
lean_dec_ref_known(v_r_1509_, 1);
v___x_1511_ = l_Lean_Meta_Grind_SavedState_restore___redArg(v_a_1508_, v___y_1499_, v___y_1503_, v___y_1505_);
if (lean_obj_tag(v___x_1511_) == 0)
{
lean_object* v___x_1513_; uint8_t v_isShared_1514_; uint8_t v_isSharedCheck_1518_; 
v_isSharedCheck_1518_ = !lean_is_exclusive(v___x_1511_);
if (v_isSharedCheck_1518_ == 0)
{
lean_object* v_unused_1519_; 
v_unused_1519_ = lean_ctor_get(v___x_1511_, 0);
lean_dec(v_unused_1519_);
v___x_1513_ = v___x_1511_;
v_isShared_1514_ = v_isSharedCheck_1518_;
goto v_resetjp_1512_;
}
else
{
lean_dec(v___x_1511_);
v___x_1513_ = lean_box(0);
v_isShared_1514_ = v_isSharedCheck_1518_;
goto v_resetjp_1512_;
}
v_resetjp_1512_:
{
lean_object* v___x_1516_; 
if (v_isShared_1514_ == 0)
{
lean_ctor_set(v___x_1513_, 0, v_a_1510_);
v___x_1516_ = v___x_1513_;
goto v_reusejp_1515_;
}
else
{
lean_object* v_reuseFailAlloc_1517_; 
v_reuseFailAlloc_1517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1517_, 0, v_a_1510_);
v___x_1516_ = v_reuseFailAlloc_1517_;
goto v_reusejp_1515_;
}
v_reusejp_1515_:
{
return v___x_1516_;
}
}
}
else
{
lean_object* v_a_1520_; lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1527_; 
lean_dec(v_a_1510_);
v_a_1520_ = lean_ctor_get(v___x_1511_, 0);
v_isSharedCheck_1527_ = !lean_is_exclusive(v___x_1511_);
if (v_isSharedCheck_1527_ == 0)
{
v___x_1522_ = v___x_1511_;
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
else
{
lean_inc(v_a_1520_);
lean_dec(v___x_1511_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
lean_object* v___x_1525_; 
if (v_isShared_1523_ == 0)
{
v___x_1525_ = v___x_1522_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v_a_1520_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
return v___x_1525_;
}
}
}
}
else
{
lean_object* v_a_1528_; lean_object* v___x_1529_; 
v_a_1528_ = lean_ctor_get(v_r_1509_, 0);
lean_inc(v_a_1528_);
lean_dec_ref_known(v_r_1509_, 1);
v___x_1529_ = l_Lean_Meta_Grind_SavedState_restore___redArg(v_a_1508_, v___y_1499_, v___y_1503_, v___y_1505_);
if (lean_obj_tag(v___x_1529_) == 0)
{
lean_object* v___x_1531_; uint8_t v_isShared_1532_; uint8_t v_isSharedCheck_1536_; 
v_isSharedCheck_1536_ = !lean_is_exclusive(v___x_1529_);
if (v_isSharedCheck_1536_ == 0)
{
lean_object* v_unused_1537_; 
v_unused_1537_ = lean_ctor_get(v___x_1529_, 0);
lean_dec(v_unused_1537_);
v___x_1531_ = v___x_1529_;
v_isShared_1532_ = v_isSharedCheck_1536_;
goto v_resetjp_1530_;
}
else
{
lean_dec(v___x_1529_);
v___x_1531_ = lean_box(0);
v_isShared_1532_ = v_isSharedCheck_1536_;
goto v_resetjp_1530_;
}
v_resetjp_1530_:
{
lean_object* v___x_1534_; 
if (v_isShared_1532_ == 0)
{
lean_ctor_set_tag(v___x_1531_, 1);
lean_ctor_set(v___x_1531_, 0, v_a_1528_);
v___x_1534_ = v___x_1531_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v_a_1528_);
v___x_1534_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
return v___x_1534_;
}
}
}
else
{
lean_object* v_a_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1545_; 
lean_dec(v_a_1528_);
v_a_1538_ = lean_ctor_get(v___x_1529_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v___x_1529_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1540_ = v___x_1529_;
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_a_1538_);
lean_dec(v___x_1529_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v___x_1543_; 
if (v_isShared_1541_ == 0)
{
v___x_1543_ = v___x_1540_;
goto v_reusejp_1542_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v_a_1538_);
v___x_1543_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1542_;
}
v_reusejp_1542_:
{
return v___x_1543_;
}
}
}
}
}
else
{
lean_object* v_a_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1553_; 
lean_dec_ref(v_x_1496_);
v_a_1546_ = lean_ctor_get(v___x_1507_, 0);
v_isSharedCheck_1553_ = !lean_is_exclusive(v___x_1507_);
if (v_isSharedCheck_1553_ == 0)
{
v___x_1548_ = v___x_1507_;
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_a_1546_);
lean_dec(v___x_1507_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v___x_1551_; 
if (v_isShared_1549_ == 0)
{
v___x_1551_ = v___x_1548_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v_a_1546_);
v___x_1551_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
return v___x_1551_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Meta_Grind_Action_checkSeqAt_spec__0___redArg___boxed(lean_object* v_x_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_){
_start:
{
lean_object* v_res_1565_; 
v_res_1565_ = l_Lean_withoutModifyingState___at___00Lean_Meta_Grind_Action_checkSeqAt_spec__0___redArg(v_x_1554_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_);
lean_dec(v___y_1563_);
lean_dec_ref(v___y_1562_);
lean_dec(v___y_1561_);
lean_dec_ref(v___y_1560_);
lean_dec(v___y_1559_);
lean_dec_ref(v___y_1558_);
lean_dec(v___y_1557_);
lean_dec_ref(v___y_1556_);
lean_dec(v___y_1555_);
return v_res_1565_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Meta_Grind_Action_checkSeqAt_spec__0(lean_object* v_00_u03b1_1566_, lean_object* v_x_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_){
_start:
{
lean_object* v___x_1578_; 
v___x_1578_ = l_Lean_withoutModifyingState___at___00Lean_Meta_Grind_Action_checkSeqAt_spec__0___redArg(v_x_1567_, v___y_1568_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_, v___y_1576_);
return v___x_1578_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Meta_Grind_Action_checkSeqAt_spec__0___boxed(lean_object* v_00_u03b1_1579_, lean_object* v_x_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_){
_start:
{
lean_object* v_res_1591_; 
v_res_1591_ = l_Lean_withoutModifyingState___at___00Lean_Meta_Grind_Action_checkSeqAt_spec__0(v_00_u03b1_1579_, v_x_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_);
lean_dec(v___y_1589_);
lean_dec_ref(v___y_1588_);
lean_dec(v___y_1587_);
lean_dec_ref(v___y_1586_);
lean_dec(v___y_1585_);
lean_dec_ref(v___y_1584_);
lean_dec(v___y_1583_);
lean_dec_ref(v___y_1582_);
lean_dec(v___y_1581_);
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_checkSeqAt___lam__0(lean_object* v_val_1592_, lean_object* v_seq_1593_, lean_object* v_goal_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_){
_start:
{
lean_object* v___x_1605_; 
v___x_1605_ = l_Lean_Meta_Grind_SavedState_restore___redArg(v_val_1592_, v___y_1597_, v___y_1601_, v___y_1603_);
if (lean_obj_tag(v___x_1605_) == 0)
{
lean_object* v___x_1606_; lean_object* v_config_1607_; lean_object* v_a_1608_; lean_object* v_simp_1609_; lean_object* v_simpMethods_1610_; lean_object* v_symSimpMethods_1611_; lean_object* v_symDSimpMethods_1612_; lean_object* v_identity_1613_; lean_object* v_activeSolvers_1614_; lean_object* v_anchorRefs_x3f_1615_; uint8_t v_anchors_1616_; uint8_t v_cheapCases_1617_; uint8_t v_reportMVarIssue_1618_; lean_object* v_splitSource_1619_; lean_object* v_ematchDiagSource_1620_; lean_object* v_symPrios_1621_; lean_object* v_extensions_1622_; uint8_t v_debug_1623_; uint8_t v_ematchDiag_1624_; uint8_t v_markInstances_1625_; uint8_t v_lax_1626_; uint8_t v_suggestions_1627_; uint8_t v_locals_1628_; lean_object* v_branches_1629_; lean_object* v_splits_1630_; lean_object* v_ematch_1631_; lean_object* v_gen_1632_; lean_object* v_genLocal_1633_; lean_object* v_instances_1634_; uint8_t v_matchEqs_1635_; uint8_t v_splitMatch_1636_; uint8_t v_splitIte_1637_; uint8_t v_splitIndPred_1638_; uint8_t v_splitImp_1639_; lean_object* v_canonHeartbeats_1640_; uint8_t v_ext_1641_; uint8_t v_extAll_1642_; uint8_t v_etaStruct_1643_; uint8_t v_funext_1644_; uint8_t v_lookahead_1645_; uint8_t v_verbose_1646_; uint8_t v_clean_1647_; uint8_t v_qlia_1648_; uint8_t v_mbtc_1649_; uint8_t v_zetaDelta_1650_; uint8_t v_zeta_1651_; uint8_t v_distrib_1652_; lean_object* v_maxChar_1653_; uint8_t v_ring_1654_; lean_object* v_ringSteps_1655_; lean_object* v_ringMaxDegree_1656_; uint8_t v_linarith_1657_; uint8_t v_lia_1658_; lean_object* v_liaSteps_1659_; lean_object* v_liaReorders_1660_; lean_object* v_liaReorderCases_1661_; uint8_t v_hom_1662_; uint8_t v_ac_1663_; lean_object* v_acSteps_1664_; lean_object* v_exp_1665_; uint8_t v_abstractProof_1666_; uint8_t v_inj_1667_; uint8_t v_order_1668_; lean_object* v_min_1669_; lean_object* v_detailed_1670_; uint8_t v_useSorry_1671_; uint8_t v_revert_1672_; uint8_t v_funCC_1673_; uint8_t v_reducible_1674_; lean_object* v_maxSuggestions_1675_; uint8_t v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; 
lean_dec_ref_known(v___x_1605_, 1);
v___x_1606_ = l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_mkGrindParen___redArg(v_seq_1593_, v___y_1602_);
v_config_1607_ = lean_ctor_get(v___y_1596_, 4);
v_a_1608_ = lean_ctor_get(v___x_1606_, 0);
lean_inc(v_a_1608_);
lean_dec_ref(v___x_1606_);
v_simp_1609_ = lean_ctor_get(v___y_1596_, 0);
v_simpMethods_1610_ = lean_ctor_get(v___y_1596_, 1);
v_symSimpMethods_1611_ = lean_ctor_get(v___y_1596_, 2);
v_symDSimpMethods_1612_ = lean_ctor_get(v___y_1596_, 3);
v_identity_1613_ = lean_ctor_get(v___y_1596_, 5);
v_activeSolvers_1614_ = lean_ctor_get(v___y_1596_, 6);
v_anchorRefs_x3f_1615_ = lean_ctor_get(v___y_1596_, 7);
v_anchors_1616_ = lean_ctor_get_uint8(v___y_1596_, sizeof(void*)*12);
v_cheapCases_1617_ = lean_ctor_get_uint8(v___y_1596_, sizeof(void*)*12 + 1);
v_reportMVarIssue_1618_ = lean_ctor_get_uint8(v___y_1596_, sizeof(void*)*12 + 2);
v_splitSource_1619_ = lean_ctor_get(v___y_1596_, 8);
v_ematchDiagSource_1620_ = lean_ctor_get(v___y_1596_, 9);
v_symPrios_1621_ = lean_ctor_get(v___y_1596_, 10);
v_extensions_1622_ = lean_ctor_get(v___y_1596_, 11);
v_debug_1623_ = lean_ctor_get_uint8(v___y_1596_, sizeof(void*)*12 + 3);
v_ematchDiag_1624_ = lean_ctor_get_uint8(v___y_1596_, sizeof(void*)*12 + 4);
v_markInstances_1625_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 1);
v_lax_1626_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 2);
v_suggestions_1627_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 3);
v_locals_1628_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 4);
v_branches_1629_ = lean_ctor_get(v_config_1607_, 0);
v_splits_1630_ = lean_ctor_get(v_config_1607_, 1);
v_ematch_1631_ = lean_ctor_get(v_config_1607_, 2);
v_gen_1632_ = lean_ctor_get(v_config_1607_, 3);
v_genLocal_1633_ = lean_ctor_get(v_config_1607_, 4);
v_instances_1634_ = lean_ctor_get(v_config_1607_, 5);
v_matchEqs_1635_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 5);
v_splitMatch_1636_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 6);
v_splitIte_1637_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 7);
v_splitIndPred_1638_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 8);
v_splitImp_1639_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 9);
v_canonHeartbeats_1640_ = lean_ctor_get(v_config_1607_, 6);
v_ext_1641_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 10);
v_extAll_1642_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 11);
v_etaStruct_1643_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 12);
v_funext_1644_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 13);
v_lookahead_1645_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 14);
v_verbose_1646_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 15);
v_clean_1647_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 16);
v_qlia_1648_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 17);
v_mbtc_1649_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 18);
v_zetaDelta_1650_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 19);
v_zeta_1651_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 20);
v_distrib_1652_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 21);
v_maxChar_1653_ = lean_ctor_get(v_config_1607_, 7);
v_ring_1654_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 22);
v_ringSteps_1655_ = lean_ctor_get(v_config_1607_, 8);
v_ringMaxDegree_1656_ = lean_ctor_get(v_config_1607_, 9);
v_linarith_1657_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 23);
v_lia_1658_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 24);
v_liaSteps_1659_ = lean_ctor_get(v_config_1607_, 10);
v_liaReorders_1660_ = lean_ctor_get(v_config_1607_, 11);
v_liaReorderCases_1661_ = lean_ctor_get(v_config_1607_, 12);
v_hom_1662_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 25);
v_ac_1663_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 26);
v_acSteps_1664_ = lean_ctor_get(v_config_1607_, 13);
v_exp_1665_ = lean_ctor_get(v_config_1607_, 14);
v_abstractProof_1666_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 27);
v_inj_1667_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 28);
v_order_1668_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 29);
v_min_1669_ = lean_ctor_get(v_config_1607_, 15);
v_detailed_1670_ = lean_ctor_get(v_config_1607_, 16);
v_useSorry_1671_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 30);
v_revert_1672_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 31);
v_funCC_1673_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 32);
v_reducible_1674_ = lean_ctor_get_uint8(v_config_1607_, sizeof(void*)*18 + 33);
v_maxSuggestions_1675_ = lean_ctor_get(v_config_1607_, 17);
v___x_1676_ = 0;
lean_inc(v_maxSuggestions_1675_);
lean_inc(v_detailed_1670_);
lean_inc(v_min_1669_);
lean_inc(v_exp_1665_);
lean_inc(v_acSteps_1664_);
lean_inc(v_liaReorderCases_1661_);
lean_inc(v_liaReorders_1660_);
lean_inc(v_liaSteps_1659_);
lean_inc(v_ringMaxDegree_1656_);
lean_inc(v_ringSteps_1655_);
lean_inc(v_maxChar_1653_);
lean_inc(v_canonHeartbeats_1640_);
lean_inc(v_instances_1634_);
lean_inc(v_genLocal_1633_);
lean_inc(v_gen_1632_);
lean_inc(v_ematch_1631_);
lean_inc(v_splits_1630_);
lean_inc(v_branches_1629_);
v___x_1677_ = lean_alloc_ctor(0, 18, 34);
lean_ctor_set(v___x_1677_, 0, v_branches_1629_);
lean_ctor_set(v___x_1677_, 1, v_splits_1630_);
lean_ctor_set(v___x_1677_, 2, v_ematch_1631_);
lean_ctor_set(v___x_1677_, 3, v_gen_1632_);
lean_ctor_set(v___x_1677_, 4, v_genLocal_1633_);
lean_ctor_set(v___x_1677_, 5, v_instances_1634_);
lean_ctor_set(v___x_1677_, 6, v_canonHeartbeats_1640_);
lean_ctor_set(v___x_1677_, 7, v_maxChar_1653_);
lean_ctor_set(v___x_1677_, 8, v_ringSteps_1655_);
lean_ctor_set(v___x_1677_, 9, v_ringMaxDegree_1656_);
lean_ctor_set(v___x_1677_, 10, v_liaSteps_1659_);
lean_ctor_set(v___x_1677_, 11, v_liaReorders_1660_);
lean_ctor_set(v___x_1677_, 12, v_liaReorderCases_1661_);
lean_ctor_set(v___x_1677_, 13, v_acSteps_1664_);
lean_ctor_set(v___x_1677_, 14, v_exp_1665_);
lean_ctor_set(v___x_1677_, 15, v_min_1669_);
lean_ctor_set(v___x_1677_, 16, v_detailed_1670_);
lean_ctor_set(v___x_1677_, 17, v_maxSuggestions_1675_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18, v___x_1676_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 1, v_markInstances_1625_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 2, v_lax_1626_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 3, v_suggestions_1627_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 4, v_locals_1628_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 5, v_matchEqs_1635_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 6, v_splitMatch_1636_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 7, v_splitIte_1637_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 8, v_splitIndPred_1638_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 9, v_splitImp_1639_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 10, v_ext_1641_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 11, v_extAll_1642_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 12, v_etaStruct_1643_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 13, v_funext_1644_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 14, v_lookahead_1645_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 15, v_verbose_1646_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 16, v_clean_1647_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 17, v_qlia_1648_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 18, v_mbtc_1649_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 19, v_zetaDelta_1650_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 20, v_zeta_1651_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 21, v_distrib_1652_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 22, v_ring_1654_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 23, v_linarith_1657_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 24, v_lia_1658_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 25, v_hom_1662_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 26, v_ac_1663_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 27, v_abstractProof_1666_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 28, v_inj_1667_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 29, v_order_1668_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 30, v_useSorry_1671_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 31, v_revert_1672_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 32, v_funCC_1673_);
lean_ctor_set_uint8(v___x_1677_, sizeof(void*)*18 + 33, v_reducible_1674_);
lean_inc_ref(v_extensions_1622_);
lean_inc_ref(v_symPrios_1621_);
lean_inc(v_ematchDiagSource_1620_);
lean_inc(v_splitSource_1619_);
lean_inc(v_anchorRefs_x3f_1615_);
lean_inc_ref(v_activeSolvers_1614_);
lean_inc(v_identity_1613_);
lean_inc_ref(v_symDSimpMethods_1612_);
lean_inc_ref(v_symSimpMethods_1611_);
lean_inc_ref(v_simpMethods_1610_);
lean_inc_ref(v_simp_1609_);
v___x_1678_ = lean_alloc_ctor(0, 12, 5);
lean_ctor_set(v___x_1678_, 0, v_simp_1609_);
lean_ctor_set(v___x_1678_, 1, v_simpMethods_1610_);
lean_ctor_set(v___x_1678_, 2, v_symSimpMethods_1611_);
lean_ctor_set(v___x_1678_, 3, v_symDSimpMethods_1612_);
lean_ctor_set(v___x_1678_, 4, v___x_1677_);
lean_ctor_set(v___x_1678_, 5, v_identity_1613_);
lean_ctor_set(v___x_1678_, 6, v_activeSolvers_1614_);
lean_ctor_set(v___x_1678_, 7, v_anchorRefs_x3f_1615_);
lean_ctor_set(v___x_1678_, 8, v_splitSource_1619_);
lean_ctor_set(v___x_1678_, 9, v_ematchDiagSource_1620_);
lean_ctor_set(v___x_1678_, 10, v_symPrios_1621_);
lean_ctor_set(v___x_1678_, 11, v_extensions_1622_);
lean_ctor_set_uint8(v___x_1678_, sizeof(void*)*12, v_anchors_1616_);
lean_ctor_set_uint8(v___x_1678_, sizeof(void*)*12 + 1, v_cheapCases_1617_);
lean_ctor_set_uint8(v___x_1678_, sizeof(void*)*12 + 2, v_reportMVarIssue_1618_);
lean_ctor_set_uint8(v___x_1678_, sizeof(void*)*12 + 3, v_debug_1623_);
lean_ctor_set_uint8(v___x_1678_, sizeof(void*)*12 + 4, v_ematchDiag_1624_);
v___x_1679_ = l_Lean_Meta_Grind_evalTactic(v_goal_1594_, v_a_1608_, v___y_1595_, v___x_1678_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_, v___y_1602_, v___y_1603_);
lean_dec_ref_known(v___x_1678_, 12);
if (lean_obj_tag(v___x_1679_) == 0)
{
lean_object* v_a_1680_; lean_object* v___x_1682_; uint8_t v_isShared_1683_; uint8_t v_isSharedCheck_1689_; 
v_a_1680_ = lean_ctor_get(v___x_1679_, 0);
v_isSharedCheck_1689_ = !lean_is_exclusive(v___x_1679_);
if (v_isSharedCheck_1689_ == 0)
{
v___x_1682_ = v___x_1679_;
v_isShared_1683_ = v_isSharedCheck_1689_;
goto v_resetjp_1681_;
}
else
{
lean_inc(v_a_1680_);
lean_dec(v___x_1679_);
v___x_1682_ = lean_box(0);
v_isShared_1683_ = v_isSharedCheck_1689_;
goto v_resetjp_1681_;
}
v_resetjp_1681_:
{
uint8_t v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1687_; 
v___x_1684_ = l_List_isEmpty___redArg(v_a_1680_);
lean_dec(v_a_1680_);
v___x_1685_ = lean_box(v___x_1684_);
if (v_isShared_1683_ == 0)
{
lean_ctor_set(v___x_1682_, 0, v___x_1685_);
v___x_1687_ = v___x_1682_;
goto v_reusejp_1686_;
}
else
{
lean_object* v_reuseFailAlloc_1688_; 
v_reuseFailAlloc_1688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1688_, 0, v___x_1685_);
v___x_1687_ = v_reuseFailAlloc_1688_;
goto v_reusejp_1686_;
}
v_reusejp_1686_:
{
return v___x_1687_;
}
}
}
else
{
lean_object* v_a_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1706_; 
v_a_1690_ = lean_ctor_get(v___x_1679_, 0);
v_isSharedCheck_1706_ = !lean_is_exclusive(v___x_1679_);
if (v_isSharedCheck_1706_ == 0)
{
v___x_1692_ = v___x_1679_;
v_isShared_1693_ = v_isSharedCheck_1706_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_a_1690_);
lean_dec(v___x_1679_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1706_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
uint8_t v___x_1694_; 
v___x_1694_ = l_Lean_Exception_isInterrupt(v_a_1690_);
if (v___x_1694_ == 0)
{
uint8_t v___x_1695_; 
lean_inc(v_a_1690_);
v___x_1695_ = l_Lean_Exception_isRuntime(v_a_1690_);
if (v___x_1695_ == 0)
{
lean_object* v___x_1696_; lean_object* v___x_1698_; 
lean_dec(v_a_1690_);
v___x_1696_ = lean_box(v___x_1695_);
if (v_isShared_1693_ == 0)
{
lean_ctor_set_tag(v___x_1692_, 0);
lean_ctor_set(v___x_1692_, 0, v___x_1696_);
v___x_1698_ = v___x_1692_;
goto v_reusejp_1697_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1699_, 0, v___x_1696_);
v___x_1698_ = v_reuseFailAlloc_1699_;
goto v_reusejp_1697_;
}
v_reusejp_1697_:
{
return v___x_1698_;
}
}
else
{
lean_object* v___x_1701_; 
if (v_isShared_1693_ == 0)
{
v___x_1701_ = v___x_1692_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v_a_1690_);
v___x_1701_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
return v___x_1701_;
}
}
}
else
{
lean_object* v___x_1704_; 
if (v_isShared_1693_ == 0)
{
v___x_1704_ = v___x_1692_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v_a_1690_);
v___x_1704_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
return v___x_1704_;
}
}
}
}
}
else
{
lean_object* v_a_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1714_; 
lean_dec_ref(v_goal_1594_);
lean_dec(v_seq_1593_);
v_a_1707_ = lean_ctor_get(v___x_1605_, 0);
v_isSharedCheck_1714_ = !lean_is_exclusive(v___x_1605_);
if (v_isSharedCheck_1714_ == 0)
{
v___x_1709_ = v___x_1605_;
v_isShared_1710_ = v_isSharedCheck_1714_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_a_1707_);
lean_dec(v___x_1605_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1714_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
lean_object* v___x_1712_; 
if (v_isShared_1710_ == 0)
{
v___x_1712_ = v___x_1709_;
goto v_reusejp_1711_;
}
else
{
lean_object* v_reuseFailAlloc_1713_; 
v_reuseFailAlloc_1713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1713_, 0, v_a_1707_);
v___x_1712_ = v_reuseFailAlloc_1713_;
goto v_reusejp_1711_;
}
v_reusejp_1711_:
{
return v___x_1712_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_checkSeqAt___lam__0___boxed(lean_object* v_val_1715_, lean_object* v_seq_1716_, lean_object* v_goal_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_){
_start:
{
lean_object* v_res_1728_; 
v_res_1728_ = l_Lean_Meta_Grind_Action_checkSeqAt___lam__0(v_val_1715_, v_seq_1716_, v_goal_1717_, v___y_1718_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_);
lean_dec(v___y_1726_);
lean_dec_ref(v___y_1725_);
lean_dec(v___y_1724_);
lean_dec_ref(v___y_1723_);
lean_dec(v___y_1722_);
lean_dec_ref(v___y_1721_);
lean_dec(v___y_1720_);
lean_dec_ref(v___y_1719_);
lean_dec(v___y_1718_);
return v_res_1728_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_checkSeqAt(lean_object* v_s_x3f_1729_, lean_object* v_goal_1730_, lean_object* v_seq_1731_, lean_object* v_a_1732_, lean_object* v_a_1733_, lean_object* v_a_1734_, lean_object* v_a_1735_, lean_object* v_a_1736_, lean_object* v_a_1737_, lean_object* v_a_1738_, lean_object* v_a_1739_, lean_object* v_a_1740_){
_start:
{
if (lean_obj_tag(v_s_x3f_1729_) == 1)
{
lean_object* v_val_1742_; lean_object* v___f_1743_; lean_object* v___x_1744_; 
v_val_1742_ = lean_ctor_get(v_s_x3f_1729_, 0);
lean_inc(v_val_1742_);
lean_dec_ref_known(v_s_x3f_1729_, 1);
v___f_1743_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_checkSeqAt___lam__0___boxed), 13, 3);
lean_closure_set(v___f_1743_, 0, v_val_1742_);
lean_closure_set(v___f_1743_, 1, v_seq_1731_);
lean_closure_set(v___f_1743_, 2, v_goal_1730_);
v___x_1744_ = l_Lean_withoutModifyingState___at___00Lean_Meta_Grind_Action_checkSeqAt_spec__0___redArg(v___f_1743_, v_a_1732_, v_a_1733_, v_a_1734_, v_a_1735_, v_a_1736_, v_a_1737_, v_a_1738_, v_a_1739_, v_a_1740_);
return v___x_1744_;
}
else
{
uint8_t v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; 
lean_dec(v_seq_1731_);
lean_dec_ref(v_goal_1730_);
lean_dec(v_s_x3f_1729_);
v___x_1745_ = 1;
v___x_1746_ = lean_box(v___x_1745_);
v___x_1747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1747_, 0, v___x_1746_);
return v___x_1747_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_checkSeqAt___boxed(lean_object* v_s_x3f_1748_, lean_object* v_goal_1749_, lean_object* v_seq_1750_, lean_object* v_a_1751_, lean_object* v_a_1752_, lean_object* v_a_1753_, lean_object* v_a_1754_, lean_object* v_a_1755_, lean_object* v_a_1756_, lean_object* v_a_1757_, lean_object* v_a_1758_, lean_object* v_a_1759_, lean_object* v_a_1760_){
_start:
{
lean_object* v_res_1761_; 
v_res_1761_ = l_Lean_Meta_Grind_Action_checkSeqAt(v_s_x3f_1748_, v_goal_1749_, v_seq_1750_, v_a_1751_, v_a_1752_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_, v_a_1758_, v_a_1759_);
lean_dec(v_a_1759_);
lean_dec_ref(v_a_1758_);
lean_dec(v_a_1757_);
lean_dec_ref(v_a_1756_);
lean_dec(v_a_1755_);
lean_dec_ref(v_a_1754_);
lean_dec(v_a_1753_);
lean_dec_ref(v_a_1752_);
lean_dec(v_a_1751_);
return v_res_1761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_recordIfNeeded(lean_object* v_s_x3f_1762_, lean_object* v_goal_1763_, lean_object* v_r_1764_, lean_object* v_mkTac_1765_, lean_object* v_a_1766_, lean_object* v_a_1767_, lean_object* v_a_1768_, lean_object* v_a_1769_, lean_object* v_a_1770_, lean_object* v_a_1771_, lean_object* v_a_1772_, lean_object* v_a_1773_, lean_object* v_a_1774_){
_start:
{
if (lean_obj_tag(v_r_1764_) == 0)
{
lean_object* v_seq_1776_; lean_object* v___x_1777_; 
v_seq_1776_ = lean_ctor_get(v_r_1764_, 0);
lean_inc(v_seq_1776_);
v___x_1777_ = l_Lean_Meta_Grind_Action_checkSeqAt(v_s_x3f_1762_, v_goal_1763_, v_seq_1776_, v_a_1766_, v_a_1767_, v_a_1768_, v_a_1769_, v_a_1770_, v_a_1771_, v_a_1772_, v_a_1773_, v_a_1774_);
if (lean_obj_tag(v___x_1777_) == 0)
{
lean_object* v_a_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1812_; 
v_a_1778_ = lean_ctor_get(v___x_1777_, 0);
v_isSharedCheck_1812_ = !lean_is_exclusive(v___x_1777_);
if (v_isSharedCheck_1812_ == 0)
{
v___x_1780_ = v___x_1777_;
v_isShared_1781_ = v_isSharedCheck_1812_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_a_1778_);
lean_dec(v___x_1777_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1812_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
uint8_t v___x_1782_; 
v___x_1782_ = lean_unbox(v_a_1778_);
lean_dec(v_a_1778_);
if (v___x_1782_ == 0)
{
lean_object* v___x_1784_; uint8_t v_isShared_1785_; uint8_t v_isSharedCheck_1807_; 
lean_inc(v_seq_1776_);
lean_del_object(v___x_1780_);
v_isSharedCheck_1807_ = !lean_is_exclusive(v_r_1764_);
if (v_isSharedCheck_1807_ == 0)
{
lean_object* v_unused_1808_; 
v_unused_1808_ = lean_ctor_get(v_r_1764_, 0);
lean_dec(v_unused_1808_);
v___x_1784_ = v_r_1764_;
v_isShared_1785_ = v_isSharedCheck_1807_;
goto v_resetjp_1783_;
}
else
{
lean_dec(v_r_1764_);
v___x_1784_ = lean_box(0);
v_isShared_1785_ = v_isSharedCheck_1807_;
goto v_resetjp_1783_;
}
v_resetjp_1783_:
{
lean_object* v___x_1786_; 
lean_inc(v_a_1774_);
lean_inc_ref(v_a_1773_);
lean_inc(v_a_1772_);
lean_inc_ref(v_a_1771_);
lean_inc(v_a_1770_);
lean_inc_ref(v_a_1769_);
lean_inc(v_a_1768_);
lean_inc_ref(v_a_1767_);
lean_inc(v_a_1766_);
v___x_1786_ = lean_apply_10(v_mkTac_1765_, v_a_1766_, v_a_1767_, v_a_1768_, v_a_1769_, v_a_1770_, v_a_1771_, v_a_1772_, v_a_1773_, v_a_1774_, lean_box(0));
if (lean_obj_tag(v___x_1786_) == 0)
{
lean_object* v_a_1787_; lean_object* v___x_1789_; uint8_t v_isShared_1790_; uint8_t v_isSharedCheck_1798_; 
v_a_1787_ = lean_ctor_get(v___x_1786_, 0);
v_isSharedCheck_1798_ = !lean_is_exclusive(v___x_1786_);
if (v_isSharedCheck_1798_ == 0)
{
v___x_1789_ = v___x_1786_;
v_isShared_1790_ = v_isSharedCheck_1798_;
goto v_resetjp_1788_;
}
else
{
lean_inc(v_a_1787_);
lean_dec(v___x_1786_);
v___x_1789_ = lean_box(0);
v_isShared_1790_ = v_isSharedCheck_1798_;
goto v_resetjp_1788_;
}
v_resetjp_1788_:
{
lean_object* v___x_1791_; lean_object* v___x_1793_; 
v___x_1791_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1791_, 0, v_a_1787_);
lean_ctor_set(v___x_1791_, 1, v_seq_1776_);
if (v_isShared_1785_ == 0)
{
lean_ctor_set(v___x_1784_, 0, v___x_1791_);
v___x_1793_ = v___x_1784_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1797_; 
v_reuseFailAlloc_1797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1797_, 0, v___x_1791_);
v___x_1793_ = v_reuseFailAlloc_1797_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
lean_object* v___x_1795_; 
if (v_isShared_1790_ == 0)
{
lean_ctor_set(v___x_1789_, 0, v___x_1793_);
v___x_1795_ = v___x_1789_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v___x_1793_);
v___x_1795_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
return v___x_1795_;
}
}
}
}
else
{
lean_object* v_a_1799_; lean_object* v___x_1801_; uint8_t v_isShared_1802_; uint8_t v_isSharedCheck_1806_; 
lean_del_object(v___x_1784_);
lean_dec(v_seq_1776_);
v_a_1799_ = lean_ctor_get(v___x_1786_, 0);
v_isSharedCheck_1806_ = !lean_is_exclusive(v___x_1786_);
if (v_isSharedCheck_1806_ == 0)
{
v___x_1801_ = v___x_1786_;
v_isShared_1802_ = v_isSharedCheck_1806_;
goto v_resetjp_1800_;
}
else
{
lean_inc(v_a_1799_);
lean_dec(v___x_1786_);
v___x_1801_ = lean_box(0);
v_isShared_1802_ = v_isSharedCheck_1806_;
goto v_resetjp_1800_;
}
v_resetjp_1800_:
{
lean_object* v___x_1804_; 
if (v_isShared_1802_ == 0)
{
v___x_1804_ = v___x_1801_;
goto v_reusejp_1803_;
}
else
{
lean_object* v_reuseFailAlloc_1805_; 
v_reuseFailAlloc_1805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1805_, 0, v_a_1799_);
v___x_1804_ = v_reuseFailAlloc_1805_;
goto v_reusejp_1803_;
}
v_reusejp_1803_:
{
return v___x_1804_;
}
}
}
}
}
else
{
lean_object* v___x_1810_; 
lean_dec_ref(v_mkTac_1765_);
if (v_isShared_1781_ == 0)
{
lean_ctor_set(v___x_1780_, 0, v_r_1764_);
v___x_1810_ = v___x_1780_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v_r_1764_);
v___x_1810_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
return v___x_1810_;
}
}
}
}
else
{
lean_object* v_a_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1820_; 
lean_dec_ref_known(v_r_1764_, 1);
lean_dec_ref(v_mkTac_1765_);
v_a_1813_ = lean_ctor_get(v___x_1777_, 0);
v_isSharedCheck_1820_ = !lean_is_exclusive(v___x_1777_);
if (v_isSharedCheck_1820_ == 0)
{
v___x_1815_ = v___x_1777_;
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_a_1813_);
lean_dec(v___x_1777_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v___x_1818_; 
if (v_isShared_1816_ == 0)
{
v___x_1818_ = v___x_1815_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1819_; 
v_reuseFailAlloc_1819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1819_, 0, v_a_1813_);
v___x_1818_ = v_reuseFailAlloc_1819_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
return v___x_1818_;
}
}
}
}
else
{
lean_object* v___x_1821_; 
lean_dec_ref(v_mkTac_1765_);
lean_dec_ref(v_goal_1763_);
lean_dec(v_s_x3f_1762_);
v___x_1821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1821_, 0, v_r_1764_);
return v___x_1821_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_recordIfNeeded___boxed(lean_object* v_s_x3f_1822_, lean_object* v_goal_1823_, lean_object* v_r_1824_, lean_object* v_mkTac_1825_, lean_object* v_a_1826_, lean_object* v_a_1827_, lean_object* v_a_1828_, lean_object* v_a_1829_, lean_object* v_a_1830_, lean_object* v_a_1831_, lean_object* v_a_1832_, lean_object* v_a_1833_, lean_object* v_a_1834_, lean_object* v_a_1835_){
_start:
{
lean_object* v_res_1836_; 
v_res_1836_ = l_Lean_Meta_Grind_Action_recordIfNeeded(v_s_x3f_1822_, v_goal_1823_, v_r_1824_, v_mkTac_1825_, v_a_1826_, v_a_1827_, v_a_1828_, v_a_1829_, v_a_1830_, v_a_1831_, v_a_1832_, v_a_1833_, v_a_1834_);
lean_dec(v_a_1834_);
lean_dec_ref(v_a_1833_);
lean_dec(v_a_1832_);
lean_dec_ref(v_a_1831_);
lean_dec(v_a_1830_);
lean_dec_ref(v_a_1829_);
lean_dec(v_a_1828_);
lean_dec_ref(v_a_1827_);
lean_dec(v_a_1826_);
return v_res_1836_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Action_terminalAction_spec__0___redArg___lam__0(lean_object* v_x_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_){
_start:
{
lean_object* v___x_1848_; 
lean_inc(v___y_1842_);
lean_inc_ref(v___y_1841_);
lean_inc(v___y_1840_);
lean_inc_ref(v___y_1839_);
lean_inc(v___y_1838_);
v___x_1848_ = lean_apply_10(v_x_1837_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_, v___y_1842_, v___y_1843_, v___y_1844_, v___y_1845_, v___y_1846_, lean_box(0));
return v___x_1848_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Action_terminalAction_spec__0___redArg___lam__0___boxed(lean_object* v_x_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_){
_start:
{
lean_object* v_res_1860_; 
v_res_1860_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Action_terminalAction_spec__0___redArg___lam__0(v_x_1849_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_, v___y_1857_, v___y_1858_);
lean_dec(v___y_1854_);
lean_dec_ref(v___y_1853_);
lean_dec(v___y_1852_);
lean_dec_ref(v___y_1851_);
lean_dec(v___y_1850_);
return v_res_1860_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Action_terminalAction_spec__0___redArg(lean_object* v_mvarId_1861_, lean_object* v_x_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_){
_start:
{
lean_object* v___f_1873_; lean_object* v___x_1874_; 
lean_inc(v___y_1867_);
lean_inc_ref(v___y_1866_);
lean_inc(v___y_1865_);
lean_inc_ref(v___y_1864_);
lean_inc(v___y_1863_);
v___f_1873_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Action_terminalAction_spec__0___redArg___lam__0___boxed), 11, 6);
lean_closure_set(v___f_1873_, 0, v_x_1862_);
lean_closure_set(v___f_1873_, 1, v___y_1863_);
lean_closure_set(v___f_1873_, 2, v___y_1864_);
lean_closure_set(v___f_1873_, 3, v___y_1865_);
lean_closure_set(v___f_1873_, 4, v___y_1866_);
lean_closure_set(v___f_1873_, 5, v___y_1867_);
v___x_1874_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1861_, v___f_1873_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_);
if (lean_obj_tag(v___x_1874_) == 0)
{
return v___x_1874_;
}
else
{
lean_object* v_a_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1882_; 
v_a_1875_ = lean_ctor_get(v___x_1874_, 0);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___x_1874_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1877_ = v___x_1874_;
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
else
{
lean_inc(v_a_1875_);
lean_dec(v___x_1874_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v___x_1880_; 
if (v_isShared_1878_ == 0)
{
v___x_1880_ = v___x_1877_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v_a_1875_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
return v___x_1880_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Action_terminalAction_spec__0___redArg___boxed(lean_object* v_mvarId_1883_, lean_object* v_x_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_){
_start:
{
lean_object* v_res_1895_; 
v_res_1895_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Action_terminalAction_spec__0___redArg(v_mvarId_1883_, v_x_1884_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_);
lean_dec(v___y_1893_);
lean_dec_ref(v___y_1892_);
lean_dec(v___y_1891_);
lean_dec_ref(v___y_1890_);
lean_dec(v___y_1889_);
lean_dec_ref(v___y_1888_);
lean_dec(v___y_1887_);
lean_dec_ref(v___y_1886_);
lean_dec(v___y_1885_);
return v_res_1895_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Action_terminalAction_spec__0(lean_object* v_00_u03b1_1896_, lean_object* v_mvarId_1897_, lean_object* v_x_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_){
_start:
{
lean_object* v___x_1909_; 
v___x_1909_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Action_terminalAction_spec__0___redArg(v_mvarId_1897_, v_x_1898_, v___y_1899_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_);
return v___x_1909_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Action_terminalAction_spec__0___boxed(lean_object* v_00_u03b1_1910_, lean_object* v_mvarId_1911_, lean_object* v_x_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_){
_start:
{
lean_object* v_res_1923_; 
v_res_1923_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Action_terminalAction_spec__0(v_00_u03b1_1910_, v_mvarId_1911_, v_x_1912_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_, v___y_1918_, v___y_1919_, v___y_1920_, v___y_1921_);
lean_dec(v___y_1921_);
lean_dec_ref(v___y_1920_);
lean_dec(v___y_1919_);
lean_dec_ref(v___y_1918_);
lean_dec(v___y_1917_);
lean_dec_ref(v___y_1916_);
lean_dec(v___y_1915_);
lean_dec_ref(v___y_1914_);
lean_dec(v___y_1913_);
return v_res_1923_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_terminalAction___lam__0(lean_object* v_goal_1924_, lean_object* v_check_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_){
_start:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; 
v___x_1936_ = lean_st_mk_ref(v_goal_1924_);
lean_inc(v___x_1936_);
v___x_1937_ = lean_apply_11(v_check_1925_, v___x_1936_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_, v___y_1934_, lean_box(0));
if (lean_obj_tag(v___x_1937_) == 0)
{
lean_object* v_a_1938_; lean_object* v___x_1940_; uint8_t v_isShared_1941_; uint8_t v_isSharedCheck_1947_; 
v_a_1938_ = lean_ctor_get(v___x_1937_, 0);
v_isSharedCheck_1947_ = !lean_is_exclusive(v___x_1937_);
if (v_isSharedCheck_1947_ == 0)
{
v___x_1940_ = v___x_1937_;
v_isShared_1941_ = v_isSharedCheck_1947_;
goto v_resetjp_1939_;
}
else
{
lean_inc(v_a_1938_);
lean_dec(v___x_1937_);
v___x_1940_ = lean_box(0);
v_isShared_1941_ = v_isSharedCheck_1947_;
goto v_resetjp_1939_;
}
v_resetjp_1939_:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1945_; 
v___x_1942_ = lean_st_ref_get(v___x_1936_);
lean_dec(v___x_1936_);
v___x_1943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1943_, 0, v_a_1938_);
lean_ctor_set(v___x_1943_, 1, v___x_1942_);
if (v_isShared_1941_ == 0)
{
lean_ctor_set(v___x_1940_, 0, v___x_1943_);
v___x_1945_ = v___x_1940_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v___x_1943_);
v___x_1945_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
return v___x_1945_;
}
}
}
else
{
lean_object* v_a_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1955_; 
lean_dec(v___x_1936_);
v_a_1948_ = lean_ctor_get(v___x_1937_, 0);
v_isSharedCheck_1955_ = !lean_is_exclusive(v___x_1937_);
if (v_isSharedCheck_1955_ == 0)
{
v___x_1950_ = v___x_1937_;
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_a_1948_);
lean_dec(v___x_1937_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v___x_1953_; 
if (v_isShared_1951_ == 0)
{
v___x_1953_ = v___x_1950_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1954_; 
v_reuseFailAlloc_1954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1954_, 0, v_a_1948_);
v___x_1953_ = v_reuseFailAlloc_1954_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
return v___x_1953_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_terminalAction___lam__0___boxed(lean_object* v_goal_1956_, lean_object* v_check_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_){
_start:
{
lean_object* v_res_1968_; 
v_res_1968_ = l_Lean_Meta_Grind_Action_terminalAction___lam__0(v_goal_1956_, v_check_1957_, v___y_1958_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_, v___y_1966_);
return v_res_1968_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_terminalAction(lean_object* v_check_1969_, lean_object* v_mkTac_1970_, lean_object* v_goal_1971_, lean_object* v_kna_1972_, lean_object* v_kp_1973_, lean_object* v_a_1974_, lean_object* v_a_1975_, lean_object* v_a_1976_, lean_object* v_a_1977_, lean_object* v_a_1978_, lean_object* v_a_1979_, lean_object* v_a_1980_, lean_object* v_a_1981_, lean_object* v_a_1982_){
_start:
{
lean_object* v___f_1984_; lean_object* v___x_1985_; 
lean_inc_ref(v_goal_1971_);
v___f_1984_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_terminalAction___lam__0___boxed), 12, 2);
lean_closure_set(v___f_1984_, 0, v_goal_1971_);
lean_closure_set(v___f_1984_, 1, v_check_1969_);
v___x_1985_ = l_Lean_Meta_Grind_Action_saveStateIfTracing___redArg(v_a_1975_, v_a_1976_, v_a_1980_, v_a_1982_);
if (lean_obj_tag(v___x_1985_) == 0)
{
lean_object* v_a_1986_; lean_object* v_mvarId_1987_; lean_object* v___x_1988_; 
v_a_1986_ = lean_ctor_get(v___x_1985_, 0);
lean_inc(v_a_1986_);
lean_dec_ref_known(v___x_1985_, 1);
v_mvarId_1987_ = lean_ctor_get(v_goal_1971_, 1);
lean_inc(v_mvarId_1987_);
v___x_1988_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Action_terminalAction_spec__0___redArg(v_mvarId_1987_, v___f_1984_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_, v_a_1978_, v_a_1979_, v_a_1980_, v_a_1981_, v_a_1982_);
if (lean_obj_tag(v___x_1988_) == 0)
{
lean_object* v_a_1989_; lean_object* v_fst_1990_; uint8_t v___x_1991_; 
v_a_1989_ = lean_ctor_get(v___x_1988_, 0);
lean_inc(v_a_1989_);
lean_dec_ref_known(v___x_1988_, 1);
v_fst_1990_ = lean_ctor_get(v_a_1989_, 0);
v___x_1991_ = lean_unbox(v_fst_1990_);
if (v___x_1991_ == 0)
{
lean_object* v_snd_1992_; lean_object* v___x_1993_; 
lean_dec(v_a_1986_);
lean_dec_ref(v_kp_1973_);
lean_dec_ref(v_goal_1971_);
lean_dec_ref(v_mkTac_1970_);
v_snd_1992_ = lean_ctor_get(v_a_1989_, 1);
lean_inc(v_snd_1992_);
lean_dec(v_a_1989_);
lean_inc(v_a_1982_);
lean_inc_ref(v_a_1981_);
lean_inc(v_a_1980_);
lean_inc_ref(v_a_1979_);
lean_inc(v_a_1978_);
lean_inc_ref(v_a_1977_);
lean_inc(v_a_1976_);
lean_inc_ref(v_a_1975_);
lean_inc(v_a_1974_);
v___x_1993_ = lean_apply_11(v_kna_1972_, v_snd_1992_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_, v_a_1978_, v_a_1979_, v_a_1980_, v_a_1981_, v_a_1982_, lean_box(0));
return v___x_1993_;
}
else
{
lean_object* v_snd_1994_; lean_object* v_toGoalState_1995_; uint8_t v_inconsistent_1996_; 
lean_dec_ref(v_kna_1972_);
v_snd_1994_ = lean_ctor_get(v_a_1989_, 1);
lean_inc(v_snd_1994_);
lean_dec(v_a_1989_);
v_toGoalState_1995_ = lean_ctor_get(v_snd_1994_, 0);
v_inconsistent_1996_ = lean_ctor_get_uint8(v_toGoalState_1995_, sizeof(void*)*21 + 8);
if (v_inconsistent_1996_ == 0)
{
lean_object* v___x_1997_; 
v___x_1997_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_1975_);
if (lean_obj_tag(v___x_1997_) == 0)
{
lean_object* v_a_1998_; uint8_t v_trace_1999_; 
v_a_1998_ = lean_ctor_get(v___x_1997_, 0);
lean_inc(v_a_1998_);
lean_dec_ref_known(v___x_1997_, 1);
v_trace_1999_ = lean_ctor_get_uint8(v_a_1998_, sizeof(void*)*18);
lean_dec(v_a_1998_);
if (v_trace_1999_ == 0)
{
lean_object* v___x_2000_; 
lean_dec(v_a_1986_);
lean_dec_ref(v_goal_1971_);
lean_dec_ref(v_mkTac_1970_);
lean_inc(v_a_1982_);
lean_inc_ref(v_a_1981_);
lean_inc(v_a_1980_);
lean_inc_ref(v_a_1979_);
lean_inc(v_a_1978_);
lean_inc_ref(v_a_1977_);
lean_inc(v_a_1976_);
lean_inc_ref(v_a_1975_);
lean_inc(v_a_1974_);
v___x_2000_ = lean_apply_11(v_kp_1973_, v_snd_1994_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_, v_a_1978_, v_a_1979_, v_a_1980_, v_a_1981_, v_a_1982_, lean_box(0));
return v___x_2000_;
}
else
{
lean_object* v___x_2001_; 
lean_inc(v_a_1982_);
lean_inc_ref(v_a_1981_);
lean_inc(v_a_1980_);
lean_inc_ref(v_a_1979_);
lean_inc(v_a_1978_);
lean_inc_ref(v_a_1977_);
lean_inc(v_a_1976_);
lean_inc_ref(v_a_1975_);
lean_inc(v_a_1974_);
v___x_2001_ = lean_apply_11(v_kp_1973_, v_snd_1994_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_, v_a_1978_, v_a_1979_, v_a_1980_, v_a_1981_, v_a_1982_, lean_box(0));
if (lean_obj_tag(v___x_2001_) == 0)
{
lean_object* v_a_2002_; lean_object* v___x_2003_; 
v_a_2002_ = lean_ctor_get(v___x_2001_, 0);
lean_inc(v_a_2002_);
lean_dec_ref_known(v___x_2001_, 1);
v___x_2003_ = l_Lean_Meta_Grind_Action_recordIfNeeded(v_a_1986_, v_goal_1971_, v_a_2002_, v_mkTac_1970_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_, v_a_1978_, v_a_1979_, v_a_1980_, v_a_1981_, v_a_1982_);
return v___x_2003_;
}
else
{
lean_dec(v_a_1986_);
lean_dec_ref(v_goal_1971_);
lean_dec_ref(v_mkTac_1970_);
return v___x_2001_;
}
}
}
else
{
lean_object* v_a_2004_; lean_object* v___x_2006_; uint8_t v_isShared_2007_; uint8_t v_isSharedCheck_2011_; 
lean_dec(v_snd_1994_);
lean_dec(v_a_1986_);
lean_dec_ref(v_kp_1973_);
lean_dec_ref(v_goal_1971_);
lean_dec_ref(v_mkTac_1970_);
v_a_2004_ = lean_ctor_get(v___x_1997_, 0);
v_isSharedCheck_2011_ = !lean_is_exclusive(v___x_1997_);
if (v_isSharedCheck_2011_ == 0)
{
v___x_2006_ = v___x_1997_;
v_isShared_2007_ = v_isSharedCheck_2011_;
goto v_resetjp_2005_;
}
else
{
lean_inc(v_a_2004_);
lean_dec(v___x_1997_);
v___x_2006_ = lean_box(0);
v_isShared_2007_ = v_isSharedCheck_2011_;
goto v_resetjp_2005_;
}
v_resetjp_2005_:
{
lean_object* v___x_2009_; 
if (v_isShared_2007_ == 0)
{
v___x_2009_ = v___x_2006_;
goto v_reusejp_2008_;
}
else
{
lean_object* v_reuseFailAlloc_2010_; 
v_reuseFailAlloc_2010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2010_, 0, v_a_2004_);
v___x_2009_ = v_reuseFailAlloc_2010_;
goto v_reusejp_2008_;
}
v_reusejp_2008_:
{
return v___x_2009_;
}
}
}
}
else
{
lean_object* v___x_2012_; 
lean_dec(v_snd_1994_);
lean_dec(v_a_1986_);
lean_dec_ref(v_kp_1973_);
lean_dec_ref(v_goal_1971_);
v___x_2012_ = l_Lean_Meta_Grind_Action_closeWith(v_mkTac_1970_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_, v_a_1978_, v_a_1979_, v_a_1980_, v_a_1981_, v_a_1982_);
return v___x_2012_;
}
}
}
else
{
lean_object* v_a_2013_; lean_object* v___x_2015_; uint8_t v_isShared_2016_; uint8_t v_isSharedCheck_2020_; 
lean_dec(v_a_1986_);
lean_dec_ref(v_kp_1973_);
lean_dec_ref(v_kna_1972_);
lean_dec_ref(v_goal_1971_);
lean_dec_ref(v_mkTac_1970_);
v_a_2013_ = lean_ctor_get(v___x_1988_, 0);
v_isSharedCheck_2020_ = !lean_is_exclusive(v___x_1988_);
if (v_isSharedCheck_2020_ == 0)
{
v___x_2015_ = v___x_1988_;
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
else
{
lean_inc(v_a_2013_);
lean_dec(v___x_1988_);
v___x_2015_ = lean_box(0);
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
v_resetjp_2014_:
{
lean_object* v___x_2018_; 
if (v_isShared_2016_ == 0)
{
v___x_2018_ = v___x_2015_;
goto v_reusejp_2017_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v_a_2013_);
v___x_2018_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2017_;
}
v_reusejp_2017_:
{
return v___x_2018_;
}
}
}
}
else
{
lean_object* v_a_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2028_; 
lean_dec_ref(v___f_1984_);
lean_dec_ref(v_kp_1973_);
lean_dec_ref(v_kna_1972_);
lean_dec_ref(v_goal_1971_);
lean_dec_ref(v_mkTac_1970_);
v_a_2021_ = lean_ctor_get(v___x_1985_, 0);
v_isSharedCheck_2028_ = !lean_is_exclusive(v___x_1985_);
if (v_isSharedCheck_2028_ == 0)
{
v___x_2023_ = v___x_1985_;
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_a_2021_);
lean_dec(v___x_1985_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
lean_object* v___x_2026_; 
if (v_isShared_2024_ == 0)
{
v___x_2026_ = v___x_2023_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v_a_2021_);
v___x_2026_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
return v___x_2026_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_terminalAction___boxed(lean_object* v_check_2029_, lean_object* v_mkTac_2030_, lean_object* v_goal_2031_, lean_object* v_kna_2032_, lean_object* v_kp_2033_, lean_object* v_a_2034_, lean_object* v_a_2035_, lean_object* v_a_2036_, lean_object* v_a_2037_, lean_object* v_a_2038_, lean_object* v_a_2039_, lean_object* v_a_2040_, lean_object* v_a_2041_, lean_object* v_a_2042_, lean_object* v_a_2043_){
_start:
{
lean_object* v_res_2044_; 
v_res_2044_ = l_Lean_Meta_Grind_Action_terminalAction(v_check_2029_, v_mkTac_2030_, v_goal_2031_, v_kna_2032_, v_kp_2033_, v_a_2034_, v_a_2035_, v_a_2036_, v_a_2037_, v_a_2038_, v_a_2039_, v_a_2040_, v_a_2041_, v_a_2042_);
lean_dec(v_a_2042_);
lean_dec_ref(v_a_2041_);
lean_dec(v_a_2040_);
lean_dec_ref(v_a_2039_);
lean_dec(v_a_2038_);
lean_dec_ref(v_a_2037_);
lean_dec(v_a_2036_);
lean_dec_ref(v_a_2035_);
lean_dec(v_a_2034_);
return v_res_2044_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Action_checkTactic_spec__0_spec__0(lean_object* v_msgData_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_){
_start:
{
lean_object* v___x_2051_; lean_object* v_env_2052_; uint8_t v___x_2053_; lean_object* v_env_2054_; lean_object* v___x_2055_; lean_object* v_toCold_2056_; lean_object* v_mctx_2057_; lean_object* v_lctx_2058_; lean_object* v_options_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; 
v___x_2051_ = lean_st_ref_get(v___y_2049_);
v_env_2052_ = lean_ctor_get(v___x_2051_, 0);
lean_inc_ref(v_env_2052_);
lean_dec(v___x_2051_);
v___x_2053_ = 0;
v_env_2054_ = l_Lean_Environment_setRecordingDeps(v_env_2052_, v___x_2053_);
v___x_2055_ = lean_st_ref_get(v___y_2047_);
v_toCold_2056_ = lean_ctor_get(v___y_2048_, 0);
v_mctx_2057_ = lean_ctor_get(v___x_2055_, 0);
lean_inc_ref(v_mctx_2057_);
lean_dec(v___x_2055_);
v_lctx_2058_ = lean_ctor_get(v___y_2046_, 2);
v_options_2059_ = lean_ctor_get(v_toCold_2056_, 2);
lean_inc_ref(v_options_2059_);
lean_inc_ref(v_lctx_2058_);
v___x_2060_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2060_, 0, v_env_2054_);
lean_ctor_set(v___x_2060_, 1, v_mctx_2057_);
lean_ctor_set(v___x_2060_, 2, v_lctx_2058_);
lean_ctor_set(v___x_2060_, 3, v_options_2059_);
v___x_2061_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2061_, 0, v___x_2060_);
lean_ctor_set(v___x_2061_, 1, v_msgData_2045_);
v___x_2062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2062_, 0, v___x_2061_);
return v___x_2062_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Action_checkTactic_spec__0_spec__0___boxed(lean_object* v_msgData_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_){
_start:
{
lean_object* v_res_2069_; 
v_res_2069_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Action_checkTactic_spec__0_spec__0(v_msgData_2063_, v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_);
lean_dec(v___y_2067_);
lean_dec_ref(v___y_2066_);
lean_dec(v___y_2065_);
lean_dec_ref(v___y_2064_);
return v_res_2069_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Action_checkTactic_spec__0___redArg(lean_object* v_msg_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_){
_start:
{
lean_object* v_ref_2076_; lean_object* v___x_2077_; lean_object* v_a_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2086_; 
v_ref_2076_ = lean_ctor_get(v___y_2073_, 2);
v___x_2077_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Action_checkTactic_spec__0_spec__0(v_msg_2070_, v___y_2071_, v___y_2072_, v___y_2073_, v___y_2074_);
v_a_2078_ = lean_ctor_get(v___x_2077_, 0);
v_isSharedCheck_2086_ = !lean_is_exclusive(v___x_2077_);
if (v_isSharedCheck_2086_ == 0)
{
v___x_2080_ = v___x_2077_;
v_isShared_2081_ = v_isSharedCheck_2086_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_a_2078_);
lean_dec(v___x_2077_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2086_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
lean_object* v___x_2082_; lean_object* v___x_2084_; 
lean_inc(v_ref_2076_);
v___x_2082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2082_, 0, v_ref_2076_);
lean_ctor_set(v___x_2082_, 1, v_a_2078_);
if (v_isShared_2081_ == 0)
{
lean_ctor_set_tag(v___x_2080_, 1);
lean_ctor_set(v___x_2080_, 0, v___x_2082_);
v___x_2084_ = v___x_2080_;
goto v_reusejp_2083_;
}
else
{
lean_object* v_reuseFailAlloc_2085_; 
v_reuseFailAlloc_2085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2085_, 0, v___x_2082_);
v___x_2084_ = v_reuseFailAlloc_2085_;
goto v_reusejp_2083_;
}
v_reusejp_2083_:
{
return v___x_2084_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Action_checkTactic_spec__0___redArg___boxed(lean_object* v_msg_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_){
_start:
{
lean_object* v_res_2093_; 
v_res_2093_ = l_Lean_throwError___at___00Lean_Meta_Grind_Action_checkTactic_spec__0___redArg(v_msg_2087_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_);
lean_dec(v___y_2091_);
lean_dec_ref(v___y_2090_);
lean_dec(v___y_2089_);
lean_dec_ref(v___y_2088_);
return v_res_2093_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3_spec__4(lean_object* v_opts_2094_, lean_object* v_opt_2095_){
_start:
{
lean_object* v_name_2096_; lean_object* v_defValue_2097_; lean_object* v_map_2098_; lean_object* v___x_2099_; 
v_name_2096_ = lean_ctor_get(v_opt_2095_, 0);
v_defValue_2097_ = lean_ctor_get(v_opt_2095_, 1);
v_map_2098_ = lean_ctor_get(v_opts_2094_, 0);
v___x_2099_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2098_, v_name_2096_);
if (lean_obj_tag(v___x_2099_) == 0)
{
uint8_t v___x_2100_; 
v___x_2100_ = lean_unbox(v_defValue_2097_);
return v___x_2100_;
}
else
{
lean_object* v_val_2101_; 
v_val_2101_ = lean_ctor_get(v___x_2099_, 0);
lean_inc(v_val_2101_);
lean_dec_ref_known(v___x_2099_, 1);
if (lean_obj_tag(v_val_2101_) == 1)
{
uint8_t v_v_2102_; 
v_v_2102_ = lean_ctor_get_uint8(v_val_2101_, 0);
lean_dec_ref_known(v_val_2101_, 0);
return v_v_2102_;
}
else
{
uint8_t v___x_2103_; 
lean_dec(v_val_2101_);
v___x_2103_ = lean_unbox(v_defValue_2097_);
return v___x_2103_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_opts_2104_, lean_object* v_opt_2105_){
_start:
{
uint8_t v_res_2106_; lean_object* v_r_2107_; 
v_res_2106_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3_spec__4(v_opts_2104_, v_opt_2105_);
lean_dec_ref(v_opt_2105_);
lean_dec_ref(v_opts_2104_);
v_r_2107_ = lean_box(v_res_2106_);
return v_r_2107_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0(uint8_t v___x_2115_, lean_object* v_x_2116_){
_start:
{
if (lean_obj_tag(v_x_2116_) == 1)
{
lean_object* v_pre_2117_; 
v_pre_2117_ = lean_ctor_get(v_x_2116_, 0);
switch(lean_obj_tag(v_pre_2117_))
{
case 1:
{
lean_object* v_pre_2118_; 
v_pre_2118_ = lean_ctor_get(v_pre_2117_, 0);
switch(lean_obj_tag(v_pre_2118_))
{
case 0:
{
lean_object* v_str_2119_; lean_object* v_str_2120_; lean_object* v___x_2121_; uint8_t v___x_2122_; 
v_str_2119_ = lean_ctor_get(v_x_2116_, 1);
v_str_2120_ = lean_ctor_get(v_pre_2117_, 1);
v___x_2121_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__0));
v___x_2122_ = lean_string_dec_eq(v_str_2120_, v___x_2121_);
if (v___x_2122_ == 0)
{
lean_object* v___x_2123_; uint8_t v___x_2124_; 
v___x_2123_ = ((lean_object*)(l_Lean_Meta_Grind_Action_run___lam__0___closed__2));
v___x_2124_ = lean_string_dec_eq(v_str_2120_, v___x_2123_);
if (v___x_2124_ == 0)
{
return v___x_2124_;
}
else
{
lean_object* v___x_2125_; uint8_t v___x_2126_; 
v___x_2125_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__1));
v___x_2126_ = lean_string_dec_eq(v_str_2119_, v___x_2125_);
return v___x_2126_;
}
}
else
{
lean_object* v___x_2127_; uint8_t v___x_2128_; 
v___x_2127_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__2));
v___x_2128_ = lean_string_dec_eq(v_str_2119_, v___x_2127_);
return v___x_2128_;
}
}
case 1:
{
lean_object* v_pre_2129_; 
v_pre_2129_ = lean_ctor_get(v_pre_2118_, 0);
if (lean_obj_tag(v_pre_2129_) == 0)
{
lean_object* v_str_2130_; lean_object* v_str_2131_; lean_object* v_str_2132_; lean_object* v___x_2133_; uint8_t v___x_2134_; 
v_str_2130_ = lean_ctor_get(v_x_2116_, 1);
v_str_2131_ = lean_ctor_get(v_pre_2117_, 1);
v_str_2132_ = lean_ctor_get(v_pre_2118_, 1);
v___x_2133_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__3));
v___x_2134_ = lean_string_dec_eq(v_str_2132_, v___x_2133_);
if (v___x_2134_ == 0)
{
return v___x_2134_;
}
else
{
lean_object* v___x_2135_; uint8_t v___x_2136_; 
v___x_2135_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__4));
v___x_2136_ = lean_string_dec_eq(v_str_2131_, v___x_2135_);
if (v___x_2136_ == 0)
{
return v___x_2136_;
}
else
{
lean_object* v___x_2137_; uint8_t v___x_2138_; 
v___x_2137_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__5));
v___x_2138_ = lean_string_dec_eq(v_str_2130_, v___x_2137_);
return v___x_2138_;
}
}
}
else
{
return v___x_2115_;
}
}
default: 
{
return v___x_2115_;
}
}
}
case 0:
{
lean_object* v_str_2139_; lean_object* v___x_2140_; uint8_t v___x_2141_; 
v_str_2139_ = lean_ctor_get(v_x_2116_, 1);
v___x_2140_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___closed__6));
v___x_2141_ = lean_string_dec_eq(v_str_2139_, v___x_2140_);
return v___x_2141_;
}
default: 
{
return v___x_2115_;
}
}
}
else
{
return v___x_2115_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0___boxed(lean_object* v___x_2142_, lean_object* v_x_2143_){
_start:
{
uint8_t v___x_24922__boxed_2144_; uint8_t v_res_2145_; lean_object* v_r_2146_; 
v___x_24922__boxed_2144_ = lean_unbox(v___x_2142_);
v_res_2145_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___lam__0(v___x_24922__boxed_2144_, v_x_2143_);
lean_dec(v_x_2143_);
v_r_2146_ = lean_box(v_res_2145_);
return v_r_2146_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg(lean_object* v_ref_2151_, lean_object* v_msgData_2152_, uint8_t v_severity_2153_, uint8_t v_isSilent_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_){
_start:
{
lean_object* v___y_2161_; uint8_t v___y_2162_; lean_object* v___y_2163_; lean_object* v___y_2164_; lean_object* v___y_2165_; uint8_t v___y_2166_; lean_object* v___y_2167_; lean_object* v_toCold_2168_; lean_object* v___y_2169_; lean_object* v___y_2198_; lean_object* v___y_2199_; uint8_t v___y_2200_; uint8_t v___y_2201_; lean_object* v___y_2202_; uint8_t v___y_2203_; lean_object* v___y_2204_; lean_object* v___y_2205_; lean_object* v___y_2225_; uint8_t v___y_2226_; lean_object* v___y_2227_; uint8_t v___y_2228_; lean_object* v___y_2229_; uint8_t v___y_2230_; lean_object* v___y_2231_; uint8_t v___y_2235_; uint8_t v___x_2252_; uint8_t v___x_2253_; 
v___x_2252_ = 2;
v___x_2253_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2153_, v___x_2252_);
if (v___x_2253_ == 0)
{
goto v___jp_2245_;
}
else
{
uint8_t v___x_2254_; 
lean_inc_ref(v_msgData_2152_);
v___x_2254_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_2152_);
if (v___x_2254_ == 0)
{
goto v___jp_2245_;
}
else
{
lean_object* v___x_2255_; lean_object* v___x_2256_; 
lean_dec_ref(v_msgData_2152_);
v___x_2255_ = lean_box(0);
v___x_2256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2255_);
return v___x_2256_;
}
}
v___jp_2160_:
{
lean_object* v_currNamespace_2170_; lean_object* v_openDecls_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v_env_2176_; lean_object* v_nextMacroScope_2177_; lean_object* v_ngen_2178_; lean_object* v_auxDeclNGen_2179_; lean_object* v_traceState_2180_; lean_object* v_cache_2181_; lean_object* v_recordedDeps_2182_; lean_object* v_messages_2183_; lean_object* v_infoState_2184_; lean_object* v_snapshotTasks_2185_; lean_object* v___x_2187_; uint8_t v_isShared_2188_; uint8_t v_isSharedCheck_2196_; 
v_currNamespace_2170_ = lean_ctor_get(v_toCold_2168_, 4);
v_openDecls_2171_ = lean_ctor_get(v_toCold_2168_, 5);
lean_inc(v_openDecls_2171_);
lean_inc(v_currNamespace_2170_);
v___x_2172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2172_, 0, v_currNamespace_2170_);
lean_ctor_set(v___x_2172_, 1, v_openDecls_2171_);
v___x_2173_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2173_, 0, v___x_2172_);
lean_ctor_set(v___x_2173_, 1, v___y_2165_);
lean_inc_ref(v___y_2167_);
lean_inc_ref(v___y_2164_);
v___x_2174_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2174_, 0, v___y_2164_);
lean_ctor_set(v___x_2174_, 1, v___y_2161_);
lean_ctor_set(v___x_2174_, 2, v___y_2163_);
lean_ctor_set(v___x_2174_, 3, v___y_2167_);
lean_ctor_set(v___x_2174_, 4, v___x_2173_);
lean_ctor_set_uint8(v___x_2174_, sizeof(void*)*5, v___y_2162_);
lean_ctor_set_uint8(v___x_2174_, sizeof(void*)*5 + 1, v___y_2166_);
lean_ctor_set_uint8(v___x_2174_, sizeof(void*)*5 + 2, v_isSilent_2154_);
v___x_2175_ = lean_st_ref_take(v___y_2169_);
v_env_2176_ = lean_ctor_get(v___x_2175_, 0);
v_nextMacroScope_2177_ = lean_ctor_get(v___x_2175_, 1);
v_ngen_2178_ = lean_ctor_get(v___x_2175_, 2);
v_auxDeclNGen_2179_ = lean_ctor_get(v___x_2175_, 3);
v_traceState_2180_ = lean_ctor_get(v___x_2175_, 4);
v_cache_2181_ = lean_ctor_get(v___x_2175_, 5);
v_recordedDeps_2182_ = lean_ctor_get(v___x_2175_, 6);
v_messages_2183_ = lean_ctor_get(v___x_2175_, 7);
v_infoState_2184_ = lean_ctor_get(v___x_2175_, 8);
v_snapshotTasks_2185_ = lean_ctor_get(v___x_2175_, 9);
v_isSharedCheck_2196_ = !lean_is_exclusive(v___x_2175_);
if (v_isSharedCheck_2196_ == 0)
{
v___x_2187_ = v___x_2175_;
v_isShared_2188_ = v_isSharedCheck_2196_;
goto v_resetjp_2186_;
}
else
{
lean_inc(v_snapshotTasks_2185_);
lean_inc(v_infoState_2184_);
lean_inc(v_messages_2183_);
lean_inc(v_recordedDeps_2182_);
lean_inc(v_cache_2181_);
lean_inc(v_traceState_2180_);
lean_inc(v_auxDeclNGen_2179_);
lean_inc(v_ngen_2178_);
lean_inc(v_nextMacroScope_2177_);
lean_inc(v_env_2176_);
lean_dec(v___x_2175_);
v___x_2187_ = lean_box(0);
v_isShared_2188_ = v_isSharedCheck_2196_;
goto v_resetjp_2186_;
}
v_resetjp_2186_:
{
lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2192_; 
v___x_2189_ = lean_box(0);
v___x_2190_ = l_Lean_MessageLog_add(v___x_2174_, v_messages_2183_);
if (v_isShared_2188_ == 0)
{
lean_ctor_set(v___x_2187_, 7, v___x_2190_);
v___x_2192_ = v___x_2187_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2195_; 
v_reuseFailAlloc_2195_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2195_, 0, v_env_2176_);
lean_ctor_set(v_reuseFailAlloc_2195_, 1, v_nextMacroScope_2177_);
lean_ctor_set(v_reuseFailAlloc_2195_, 2, v_ngen_2178_);
lean_ctor_set(v_reuseFailAlloc_2195_, 3, v_auxDeclNGen_2179_);
lean_ctor_set(v_reuseFailAlloc_2195_, 4, v_traceState_2180_);
lean_ctor_set(v_reuseFailAlloc_2195_, 5, v_cache_2181_);
lean_ctor_set(v_reuseFailAlloc_2195_, 6, v_recordedDeps_2182_);
lean_ctor_set(v_reuseFailAlloc_2195_, 7, v___x_2190_);
lean_ctor_set(v_reuseFailAlloc_2195_, 8, v_infoState_2184_);
lean_ctor_set(v_reuseFailAlloc_2195_, 9, v_snapshotTasks_2185_);
v___x_2192_ = v_reuseFailAlloc_2195_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
lean_object* v___x_2193_; lean_object* v___x_2194_; 
v___x_2193_ = lean_st_ref_put(v___y_2169_, v___x_2192_);
v___x_2194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2194_, 0, v___x_2189_);
return v___x_2194_;
}
}
}
v___jp_2197_:
{
lean_object* v_fileName_2206_; lean_object* v_fileMap_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v_a_2210_; lean_object* v___x_2212_; uint8_t v_isShared_2213_; uint8_t v_isSharedCheck_2223_; 
v_fileName_2206_ = lean_ctor_get(v___y_2202_, 0);
v_fileMap_2207_ = lean_ctor_get(v___y_2202_, 1);
v___x_2208_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_2152_);
v___x_2209_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Action_checkTactic_spec__0_spec__0(v___x_2208_, v___y_2155_, v___y_2156_, v___y_2157_, v___y_2158_);
v_a_2210_ = lean_ctor_get(v___x_2209_, 0);
v_isSharedCheck_2223_ = !lean_is_exclusive(v___x_2209_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2212_ = v___x_2209_;
v_isShared_2213_ = v_isSharedCheck_2223_;
goto v_resetjp_2211_;
}
else
{
lean_inc(v_a_2210_);
lean_dec(v___x_2209_);
v___x_2212_ = lean_box(0);
v_isShared_2213_ = v_isSharedCheck_2223_;
goto v_resetjp_2211_;
}
v_resetjp_2211_:
{
lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; 
lean_inc_ref_n(v_fileMap_2207_, 2);
v___x_2214_ = l_Lean_FileMap_toPosition(v_fileMap_2207_, v___y_2204_);
lean_dec(v___y_2204_);
v___x_2215_ = l_Lean_FileMap_toPosition(v_fileMap_2207_, v___y_2205_);
lean_dec(v___y_2205_);
v___x_2216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2216_, 0, v___x_2215_);
v___x_2217_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___closed__0));
if (v___y_2200_ == 0)
{
lean_del_object(v___x_2212_);
v___y_2161_ = v___x_2214_;
v___y_2162_ = v___y_2201_;
v___y_2163_ = v___x_2216_;
v___y_2164_ = v_fileName_2206_;
v___y_2165_ = v_a_2210_;
v___y_2166_ = v___y_2203_;
v___y_2167_ = v___x_2217_;
v_toCold_2168_ = v___y_2198_;
v___y_2169_ = v___y_2158_;
goto v___jp_2160_;
}
else
{
uint8_t v___x_2218_; 
lean_inc(v_a_2210_);
lean_inc_ref(v___y_2199_);
v___x_2218_ = l_Lean_MessageData_hasTag(v___y_2199_, v_a_2210_);
if (v___x_2218_ == 0)
{
lean_object* v___x_2219_; lean_object* v___x_2221_; 
lean_dec_ref_known(v___x_2216_, 1);
lean_dec_ref(v___x_2214_);
lean_dec(v_a_2210_);
v___x_2219_ = lean_box(0);
if (v_isShared_2213_ == 0)
{
lean_ctor_set(v___x_2212_, 0, v___x_2219_);
v___x_2221_ = v___x_2212_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v___x_2219_);
v___x_2221_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
return v___x_2221_;
}
}
else
{
lean_del_object(v___x_2212_);
v___y_2161_ = v___x_2214_;
v___y_2162_ = v___y_2201_;
v___y_2163_ = v___x_2216_;
v___y_2164_ = v_fileName_2206_;
v___y_2165_ = v_a_2210_;
v___y_2166_ = v___y_2203_;
v___y_2167_ = v___x_2217_;
v_toCold_2168_ = v___y_2198_;
v___y_2169_ = v___y_2158_;
goto v___jp_2160_;
}
}
}
}
v___jp_2224_:
{
lean_object* v___x_2232_; 
v___x_2232_ = l_Lean_Syntax_getTailPos_x3f(v___y_2225_, v___y_2228_);
lean_dec(v___y_2225_);
if (lean_obj_tag(v___x_2232_) == 0)
{
lean_inc(v___y_2231_);
v___y_2198_ = v___y_2227_;
v___y_2199_ = v___y_2229_;
v___y_2200_ = v___y_2226_;
v___y_2201_ = v___y_2228_;
v___y_2202_ = v___y_2227_;
v___y_2203_ = v___y_2230_;
v___y_2204_ = v___y_2231_;
v___y_2205_ = v___y_2231_;
goto v___jp_2197_;
}
else
{
lean_object* v_val_2233_; 
v_val_2233_ = lean_ctor_get(v___x_2232_, 0);
lean_inc(v_val_2233_);
lean_dec_ref_known(v___x_2232_, 1);
v___y_2198_ = v___y_2227_;
v___y_2199_ = v___y_2229_;
v___y_2200_ = v___y_2226_;
v___y_2201_ = v___y_2228_;
v___y_2202_ = v___y_2227_;
v___y_2203_ = v___y_2230_;
v___y_2204_ = v___y_2231_;
v___y_2205_ = v_val_2233_;
goto v___jp_2197_;
}
}
v___jp_2234_:
{
lean_object* v_toCold_2236_; lean_object* v_ref_2237_; uint8_t v_suppressElabErrors_2238_; lean_object* v_ref_2239_; uint8_t v___x_2240_; lean_object* v___f_2241_; lean_object* v___x_2242_; 
v_toCold_2236_ = lean_ctor_get(v___y_2157_, 0);
v_ref_2237_ = lean_ctor_get(v___y_2157_, 2);
v_suppressElabErrors_2238_ = lean_ctor_get_uint8(v___y_2157_, sizeof(void*)*3 + 2);
v_ref_2239_ = l_Lean_replaceRef(v_ref_2151_, v_ref_2237_);
v___x_2240_ = 0;
v___f_2241_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___closed__1));
v___x_2242_ = l_Lean_Syntax_getPos_x3f(v_ref_2239_, v___x_2240_);
if (lean_obj_tag(v___x_2242_) == 0)
{
lean_object* v___x_2243_; 
v___x_2243_ = lean_unsigned_to_nat(0u);
v___y_2225_ = v_ref_2239_;
v___y_2226_ = v_suppressElabErrors_2238_;
v___y_2227_ = v_toCold_2236_;
v___y_2228_ = v___x_2240_;
v___y_2229_ = v___f_2241_;
v___y_2230_ = v___y_2235_;
v___y_2231_ = v___x_2243_;
goto v___jp_2224_;
}
else
{
lean_object* v_val_2244_; 
v_val_2244_ = lean_ctor_get(v___x_2242_, 0);
lean_inc(v_val_2244_);
lean_dec_ref_known(v___x_2242_, 1);
v___y_2225_ = v_ref_2239_;
v___y_2226_ = v_suppressElabErrors_2238_;
v___y_2227_ = v_toCold_2236_;
v___y_2228_ = v___x_2240_;
v___y_2229_ = v___f_2241_;
v___y_2230_ = v___y_2235_;
v___y_2231_ = v_val_2244_;
goto v___jp_2224_;
}
}
v___jp_2245_:
{
uint8_t v___x_2246_; uint8_t v___x_2247_; 
v___x_2246_ = 1;
v___x_2247_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2153_, v___x_2246_);
if (v___x_2247_ == 0)
{
v___y_2235_ = v_severity_2153_;
goto v___jp_2234_;
}
else
{
lean_object* v___x_2248_; lean_object* v___x_2249_; uint8_t v___x_2250_; 
v___x_2248_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2157_);
v___x_2249_ = l_Lean_warningAsError;
v___x_2250_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3_spec__4(v___x_2248_, v___x_2249_);
lean_dec_ref(v___x_2248_);
if (v___x_2250_ == 0)
{
v___y_2235_ = v_severity_2153_;
goto v___jp_2234_;
}
else
{
uint8_t v___x_2251_; 
v___x_2251_ = 2;
v___y_2235_ = v___x_2251_;
goto v___jp_2234_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_ref_2257_, lean_object* v_msgData_2258_, lean_object* v_severity_2259_, lean_object* v_isSilent_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_){
_start:
{
uint8_t v_severity_boxed_2266_; uint8_t v_isSilent_boxed_2267_; lean_object* v_res_2268_; 
v_severity_boxed_2266_ = lean_unbox(v_severity_2259_);
v_isSilent_boxed_2267_ = lean_unbox(v_isSilent_2260_);
v_res_2268_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg(v_ref_2257_, v_msgData_2258_, v_severity_boxed_2266_, v_isSilent_boxed_2267_, v___y_2261_, v___y_2262_, v___y_2263_, v___y_2264_);
lean_dec(v___y_2264_);
lean_dec_ref(v___y_2263_);
lean_dec(v___y_2262_);
lean_dec_ref(v___y_2261_);
lean_dec(v_ref_2257_);
return v_res_2268_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2(lean_object* v_msgData_2269_, uint8_t v_severity_2270_, uint8_t v_isSilent_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_){
_start:
{
lean_object* v_ref_2282_; lean_object* v___x_2283_; 
v_ref_2282_ = lean_ctor_get(v___y_2279_, 2);
v___x_2283_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg(v_ref_2282_, v_msgData_2269_, v_severity_2270_, v_isSilent_2271_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_);
return v___x_2283_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2___boxed(lean_object* v_msgData_2284_, lean_object* v_severity_2285_, lean_object* v_isSilent_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_){
_start:
{
uint8_t v_severity_boxed_2297_; uint8_t v_isSilent_boxed_2298_; lean_object* v_res_2299_; 
v_severity_boxed_2297_ = lean_unbox(v_severity_2285_);
v_isSilent_boxed_2298_ = lean_unbox(v_isSilent_2286_);
v_res_2299_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2(v_msgData_2284_, v_severity_boxed_2297_, v_isSilent_boxed_2298_, v___y_2287_, v___y_2288_, v___y_2289_, v___y_2290_, v___y_2291_, v___y_2292_, v___y_2293_, v___y_2294_, v___y_2295_);
lean_dec(v___y_2295_);
lean_dec_ref(v___y_2294_);
lean_dec(v___y_2293_);
lean_dec_ref(v___y_2292_);
lean_dec(v___y_2291_);
lean_dec_ref(v___y_2290_);
lean_dec(v___y_2289_);
lean_dec_ref(v___y_2288_);
lean_dec(v___y_2287_);
return v_res_2299_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1(lean_object* v_msgData_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_){
_start:
{
uint8_t v___x_2311_; uint8_t v___x_2312_; lean_object* v___x_2313_; 
v___x_2311_ = 1;
v___x_2312_ = 0;
v___x_2313_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2(v_msgData_2300_, v___x_2311_, v___x_2312_, v___y_2301_, v___y_2302_, v___y_2303_, v___y_2304_, v___y_2305_, v___y_2306_, v___y_2307_, v___y_2308_, v___y_2309_);
return v___x_2313_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1___boxed(lean_object* v_msgData_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_){
_start:
{
lean_object* v_res_2325_; 
v_res_2325_ = l_Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1(v_msgData_2314_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_, v___y_2322_, v___y_2323_);
lean_dec(v___y_2323_);
lean_dec_ref(v___y_2322_);
lean_dec(v___y_2321_);
lean_dec_ref(v___y_2320_);
lean_dec(v___y_2319_);
lean_dec_ref(v___y_2318_);
lean_dec(v___y_2317_);
lean_dec_ref(v___y_2316_);
lean_dec(v___y_2315_);
return v_res_2325_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Action_checkTactic___redArg___closed__1(void){
_start:
{
lean_object* v___x_2327_; lean_object* v___x_2328_; 
v___x_2327_ = ((lean_object*)(l_Lean_Meta_Grind_Action_checkTactic___redArg___closed__0));
v___x_2328_ = l_Lean_stringToMessageData(v___x_2327_);
return v___x_2328_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Action_checkTactic___redArg___closed__3(void){
_start:
{
lean_object* v___x_2330_; lean_object* v___x_2331_; 
v___x_2330_ = ((lean_object*)(l_Lean_Meta_Grind_Action_checkTactic___redArg___closed__2));
v___x_2331_ = l_Lean_stringToMessageData(v___x_2330_);
return v___x_2331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_checkTactic___redArg(uint8_t v_warnOnly_2332_, lean_object* v_goal_2333_, lean_object* v_kp_2334_, lean_object* v_a_2335_, lean_object* v_a_2336_, lean_object* v_a_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_, lean_object* v_a_2342_, lean_object* v_a_2343_){
_start:
{
lean_object* v___x_2345_; 
v___x_2345_ = l_Lean_Meta_Grind_Action_saveStateIfTracing___redArg(v_a_2336_, v_a_2337_, v_a_2341_, v_a_2343_);
if (lean_obj_tag(v___x_2345_) == 0)
{
lean_object* v_a_2346_; lean_object* v___x_2347_; 
v_a_2346_ = lean_ctor_get(v___x_2345_, 0);
lean_inc(v_a_2346_);
lean_dec_ref_known(v___x_2345_, 1);
lean_inc(v_a_2343_);
lean_inc_ref(v_a_2342_);
lean_inc(v_a_2341_);
lean_inc_ref(v_a_2340_);
lean_inc(v_a_2339_);
lean_inc_ref(v_a_2338_);
lean_inc(v_a_2337_);
lean_inc_ref(v_a_2336_);
lean_inc(v_a_2335_);
lean_inc_ref(v_goal_2333_);
v___x_2347_ = lean_apply_11(v_kp_2334_, v_goal_2333_, v_a_2335_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_, v_a_2340_, v_a_2341_, v_a_2342_, v_a_2343_, lean_box(0));
if (lean_obj_tag(v___x_2347_) == 0)
{
lean_object* v_a_2348_; 
v_a_2348_ = lean_ctor_get(v___x_2347_, 0);
lean_inc(v_a_2348_);
if (lean_obj_tag(v_a_2348_) == 0)
{
lean_object* v_seq_2349_; lean_object* v___x_2350_; 
lean_dec_ref_known(v___x_2347_, 1);
v_seq_2349_ = lean_ctor_get(v_a_2348_, 0);
lean_inc(v_seq_2349_);
lean_inc_ref(v_goal_2333_);
v___x_2350_ = l_Lean_Meta_Grind_Action_checkSeqAt(v_a_2346_, v_goal_2333_, v_seq_2349_, v_a_2335_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_, v_a_2340_, v_a_2341_, v_a_2342_, v_a_2343_);
if (lean_obj_tag(v___x_2350_) == 0)
{
lean_object* v_a_2351_; lean_object* v___x_2353_; uint8_t v_isShared_2354_; uint8_t v_isSharedCheck_2409_; 
v_a_2351_ = lean_ctor_get(v___x_2350_, 0);
v_isSharedCheck_2409_ = !lean_is_exclusive(v___x_2350_);
if (v_isSharedCheck_2409_ == 0)
{
v___x_2353_ = v___x_2350_;
v_isShared_2354_ = v_isSharedCheck_2409_;
goto v_resetjp_2352_;
}
else
{
lean_inc(v_a_2351_);
lean_dec(v___x_2350_);
v___x_2353_ = lean_box(0);
v_isShared_2354_ = v_isSharedCheck_2409_;
goto v_resetjp_2352_;
}
v_resetjp_2352_:
{
uint8_t v___x_2355_; 
v___x_2355_ = lean_unbox(v_a_2351_);
lean_dec(v_a_2351_);
if (v___x_2355_ == 0)
{
lean_object* v___x_2356_; lean_object* v_a_2357_; lean_object* v___x_2359_; uint8_t v_isShared_2360_; uint8_t v_isSharedCheck_2405_; 
lean_del_object(v___x_2353_);
lean_inc(v_seq_2349_);
v___x_2356_ = l_Lean_Meta_Grind_Action_mkGrindNext___redArg(v_seq_2349_, v_a_2342_);
v_a_2357_ = lean_ctor_get(v___x_2356_, 0);
v_isSharedCheck_2405_ = !lean_is_exclusive(v___x_2356_);
if (v_isSharedCheck_2405_ == 0)
{
v___x_2359_ = v___x_2356_;
v_isShared_2360_ = v_isSharedCheck_2405_;
goto v_resetjp_2358_;
}
else
{
lean_inc(v_a_2357_);
lean_dec(v___x_2356_);
v___x_2359_ = lean_box(0);
v_isShared_2360_ = v_isSharedCheck_2405_;
goto v_resetjp_2358_;
}
v_resetjp_2358_:
{
lean_object* v_mvarId_2361_; lean_object* v___x_2363_; uint8_t v_isShared_2364_; uint8_t v_isSharedCheck_2403_; 
v_mvarId_2361_ = lean_ctor_get(v_goal_2333_, 1);
v_isSharedCheck_2403_ = !lean_is_exclusive(v_goal_2333_);
if (v_isSharedCheck_2403_ == 0)
{
lean_object* v_unused_2404_; 
v_unused_2404_ = lean_ctor_get(v_goal_2333_, 0);
lean_dec(v_unused_2404_);
v___x_2363_ = v_goal_2333_;
v_isShared_2364_ = v_isSharedCheck_2403_;
goto v_resetjp_2362_;
}
else
{
lean_inc(v_mvarId_2361_);
lean_dec(v_goal_2333_);
v___x_2363_ = lean_box(0);
v_isShared_2364_ = v_isSharedCheck_2403_;
goto v_resetjp_2362_;
}
v_resetjp_2362_:
{
lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2369_; 
v___x_2365_ = lean_obj_once(&l_Lean_Meta_Grind_Action_checkTactic___redArg___closed__1, &l_Lean_Meta_Grind_Action_checkTactic___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Action_checkTactic___redArg___closed__1);
v___x_2366_ = l_Lean_MessageData_ofSyntax(v_a_2357_);
v___x_2367_ = l_Lean_indentD(v___x_2366_);
if (v_isShared_2364_ == 0)
{
lean_ctor_set_tag(v___x_2363_, 7);
lean_ctor_set(v___x_2363_, 1, v___x_2367_);
lean_ctor_set(v___x_2363_, 0, v___x_2365_);
v___x_2369_ = v___x_2363_;
goto v_reusejp_2368_;
}
else
{
lean_object* v_reuseFailAlloc_2402_; 
v_reuseFailAlloc_2402_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2402_, 0, v___x_2365_);
lean_ctor_set(v_reuseFailAlloc_2402_, 1, v___x_2367_);
v___x_2369_ = v_reuseFailAlloc_2402_;
goto v_reusejp_2368_;
}
v_reusejp_2368_:
{
lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2373_; 
v___x_2370_ = lean_obj_once(&l_Lean_Meta_Grind_Action_checkTactic___redArg___closed__3, &l_Lean_Meta_Grind_Action_checkTactic___redArg___closed__3_once, _init_l_Lean_Meta_Grind_Action_checkTactic___redArg___closed__3);
v___x_2371_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2371_, 0, v___x_2369_);
lean_ctor_set(v___x_2371_, 1, v___x_2370_);
if (v_isShared_2360_ == 0)
{
lean_ctor_set_tag(v___x_2359_, 1);
lean_ctor_set(v___x_2359_, 0, v_mvarId_2361_);
v___x_2373_ = v___x_2359_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2401_; 
v_reuseFailAlloc_2401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2401_, 0, v_mvarId_2361_);
v___x_2373_ = v_reuseFailAlloc_2401_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
lean_object* v___x_2374_; 
v___x_2374_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2374_, 0, v___x_2371_);
lean_ctor_set(v___x_2374_, 1, v___x_2373_);
if (v_warnOnly_2332_ == 0)
{
lean_object* v___x_2375_; lean_object* v_a_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2383_; 
lean_dec_ref_known(v_a_2348_, 1);
v___x_2375_ = l_Lean_throwError___at___00Lean_Meta_Grind_Action_checkTactic_spec__0___redArg(v___x_2374_, v_a_2340_, v_a_2341_, v_a_2342_, v_a_2343_);
v_a_2376_ = lean_ctor_get(v___x_2375_, 0);
v_isSharedCheck_2383_ = !lean_is_exclusive(v___x_2375_);
if (v_isSharedCheck_2383_ == 0)
{
v___x_2378_ = v___x_2375_;
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_a_2376_);
lean_dec(v___x_2375_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v___x_2381_; 
if (v_isShared_2379_ == 0)
{
v___x_2381_ = v___x_2378_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v_a_2376_);
v___x_2381_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
return v___x_2381_;
}
}
}
else
{
lean_object* v___x_2384_; 
v___x_2384_ = l_Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1(v___x_2374_, v_a_2335_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_, v_a_2340_, v_a_2341_, v_a_2342_, v_a_2343_);
if (lean_obj_tag(v___x_2384_) == 0)
{
lean_object* v___x_2386_; uint8_t v_isShared_2387_; uint8_t v_isSharedCheck_2391_; 
v_isSharedCheck_2391_ = !lean_is_exclusive(v___x_2384_);
if (v_isSharedCheck_2391_ == 0)
{
lean_object* v_unused_2392_; 
v_unused_2392_ = lean_ctor_get(v___x_2384_, 0);
lean_dec(v_unused_2392_);
v___x_2386_ = v___x_2384_;
v_isShared_2387_ = v_isSharedCheck_2391_;
goto v_resetjp_2385_;
}
else
{
lean_dec(v___x_2384_);
v___x_2386_ = lean_box(0);
v_isShared_2387_ = v_isSharedCheck_2391_;
goto v_resetjp_2385_;
}
v_resetjp_2385_:
{
lean_object* v___x_2389_; 
if (v_isShared_2387_ == 0)
{
lean_ctor_set(v___x_2386_, 0, v_a_2348_);
v___x_2389_ = v___x_2386_;
goto v_reusejp_2388_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v_a_2348_);
v___x_2389_ = v_reuseFailAlloc_2390_;
goto v_reusejp_2388_;
}
v_reusejp_2388_:
{
return v___x_2389_;
}
}
}
else
{
lean_object* v_a_2393_; lean_object* v___x_2395_; uint8_t v_isShared_2396_; uint8_t v_isSharedCheck_2400_; 
lean_dec_ref_known(v_a_2348_, 1);
v_a_2393_ = lean_ctor_get(v___x_2384_, 0);
v_isSharedCheck_2400_ = !lean_is_exclusive(v___x_2384_);
if (v_isSharedCheck_2400_ == 0)
{
v___x_2395_ = v___x_2384_;
v_isShared_2396_ = v_isSharedCheck_2400_;
goto v_resetjp_2394_;
}
else
{
lean_inc(v_a_2393_);
lean_dec(v___x_2384_);
v___x_2395_ = lean_box(0);
v_isShared_2396_ = v_isSharedCheck_2400_;
goto v_resetjp_2394_;
}
v_resetjp_2394_:
{
lean_object* v___x_2398_; 
if (v_isShared_2396_ == 0)
{
v___x_2398_ = v___x_2395_;
goto v_reusejp_2397_;
}
else
{
lean_object* v_reuseFailAlloc_2399_; 
v_reuseFailAlloc_2399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2399_, 0, v_a_2393_);
v___x_2398_ = v_reuseFailAlloc_2399_;
goto v_reusejp_2397_;
}
v_reusejp_2397_:
{
return v___x_2398_;
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
lean_object* v___x_2407_; 
lean_dec_ref(v_goal_2333_);
if (v_isShared_2354_ == 0)
{
lean_ctor_set(v___x_2353_, 0, v_a_2348_);
v___x_2407_ = v___x_2353_;
goto v_reusejp_2406_;
}
else
{
lean_object* v_reuseFailAlloc_2408_; 
v_reuseFailAlloc_2408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2408_, 0, v_a_2348_);
v___x_2407_ = v_reuseFailAlloc_2408_;
goto v_reusejp_2406_;
}
v_reusejp_2406_:
{
return v___x_2407_;
}
}
}
}
else
{
lean_object* v_a_2410_; lean_object* v___x_2412_; uint8_t v_isShared_2413_; uint8_t v_isSharedCheck_2417_; 
lean_dec_ref_known(v_a_2348_, 1);
lean_dec_ref(v_goal_2333_);
v_a_2410_ = lean_ctor_get(v___x_2350_, 0);
v_isSharedCheck_2417_ = !lean_is_exclusive(v___x_2350_);
if (v_isSharedCheck_2417_ == 0)
{
v___x_2412_ = v___x_2350_;
v_isShared_2413_ = v_isSharedCheck_2417_;
goto v_resetjp_2411_;
}
else
{
lean_inc(v_a_2410_);
lean_dec(v___x_2350_);
v___x_2412_ = lean_box(0);
v_isShared_2413_ = v_isSharedCheck_2417_;
goto v_resetjp_2411_;
}
v_resetjp_2411_:
{
lean_object* v___x_2415_; 
if (v_isShared_2413_ == 0)
{
v___x_2415_ = v___x_2412_;
goto v_reusejp_2414_;
}
else
{
lean_object* v_reuseFailAlloc_2416_; 
v_reuseFailAlloc_2416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2416_, 0, v_a_2410_);
v___x_2415_ = v_reuseFailAlloc_2416_;
goto v_reusejp_2414_;
}
v_reusejp_2414_:
{
return v___x_2415_;
}
}
}
}
else
{
lean_dec(v_a_2348_);
lean_dec(v_a_2346_);
lean_dec_ref(v_goal_2333_);
return v___x_2347_;
}
}
else
{
lean_dec(v_a_2346_);
lean_dec_ref(v_goal_2333_);
return v___x_2347_;
}
}
else
{
lean_object* v_a_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2425_; 
lean_dec_ref(v_kp_2334_);
lean_dec_ref(v_goal_2333_);
v_a_2418_ = lean_ctor_get(v___x_2345_, 0);
v_isSharedCheck_2425_ = !lean_is_exclusive(v___x_2345_);
if (v_isSharedCheck_2425_ == 0)
{
v___x_2420_ = v___x_2345_;
v_isShared_2421_ = v_isSharedCheck_2425_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_a_2418_);
lean_dec(v___x_2345_);
v___x_2420_ = lean_box(0);
v_isShared_2421_ = v_isSharedCheck_2425_;
goto v_resetjp_2419_;
}
v_resetjp_2419_:
{
lean_object* v___x_2423_; 
if (v_isShared_2421_ == 0)
{
v___x_2423_ = v___x_2420_;
goto v_reusejp_2422_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v_a_2418_);
v___x_2423_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2422_;
}
v_reusejp_2422_:
{
return v___x_2423_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_checkTactic___redArg___boxed(lean_object* v_warnOnly_2426_, lean_object* v_goal_2427_, lean_object* v_kp_2428_, lean_object* v_a_2429_, lean_object* v_a_2430_, lean_object* v_a_2431_, lean_object* v_a_2432_, lean_object* v_a_2433_, lean_object* v_a_2434_, lean_object* v_a_2435_, lean_object* v_a_2436_, lean_object* v_a_2437_, lean_object* v_a_2438_){
_start:
{
uint8_t v_warnOnly_boxed_2439_; lean_object* v_res_2440_; 
v_warnOnly_boxed_2439_ = lean_unbox(v_warnOnly_2426_);
v_res_2440_ = l_Lean_Meta_Grind_Action_checkTactic___redArg(v_warnOnly_boxed_2439_, v_goal_2427_, v_kp_2428_, v_a_2429_, v_a_2430_, v_a_2431_, v_a_2432_, v_a_2433_, v_a_2434_, v_a_2435_, v_a_2436_, v_a_2437_);
lean_dec(v_a_2437_);
lean_dec_ref(v_a_2436_);
lean_dec(v_a_2435_);
lean_dec_ref(v_a_2434_);
lean_dec(v_a_2433_);
lean_dec_ref(v_a_2432_);
lean_dec(v_a_2431_);
lean_dec_ref(v_a_2430_);
lean_dec(v_a_2429_);
return v_res_2440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_checkTactic(uint8_t v_warnOnly_2441_, lean_object* v_goal_2442_, lean_object* v_x_2443_, lean_object* v_kp_2444_, lean_object* v_a_2445_, lean_object* v_a_2446_, lean_object* v_a_2447_, lean_object* v_a_2448_, lean_object* v_a_2449_, lean_object* v_a_2450_, lean_object* v_a_2451_, lean_object* v_a_2452_, lean_object* v_a_2453_){
_start:
{
lean_object* v___x_2455_; 
v___x_2455_ = l_Lean_Meta_Grind_Action_checkTactic___redArg(v_warnOnly_2441_, v_goal_2442_, v_kp_2444_, v_a_2445_, v_a_2446_, v_a_2447_, v_a_2448_, v_a_2449_, v_a_2450_, v_a_2451_, v_a_2452_, v_a_2453_);
return v___x_2455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_checkTactic___boxed(lean_object* v_warnOnly_2456_, lean_object* v_goal_2457_, lean_object* v_x_2458_, lean_object* v_kp_2459_, lean_object* v_a_2460_, lean_object* v_a_2461_, lean_object* v_a_2462_, lean_object* v_a_2463_, lean_object* v_a_2464_, lean_object* v_a_2465_, lean_object* v_a_2466_, lean_object* v_a_2467_, lean_object* v_a_2468_, lean_object* v_a_2469_){
_start:
{
uint8_t v_warnOnly_boxed_2470_; lean_object* v_res_2471_; 
v_warnOnly_boxed_2470_ = lean_unbox(v_warnOnly_2456_);
v_res_2471_ = l_Lean_Meta_Grind_Action_checkTactic(v_warnOnly_boxed_2470_, v_goal_2457_, v_x_2458_, v_kp_2459_, v_a_2460_, v_a_2461_, v_a_2462_, v_a_2463_, v_a_2464_, v_a_2465_, v_a_2466_, v_a_2467_, v_a_2468_);
lean_dec(v_a_2468_);
lean_dec_ref(v_a_2467_);
lean_dec(v_a_2466_);
lean_dec_ref(v_a_2465_);
lean_dec(v_a_2464_);
lean_dec_ref(v_a_2463_);
lean_dec(v_a_2462_);
lean_dec_ref(v_a_2461_);
lean_dec(v_a_2460_);
lean_dec_ref(v_x_2458_);
return v_res_2471_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Action_checkTactic_spec__0(lean_object* v_00_u03b1_2472_, lean_object* v_msg_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_){
_start:
{
lean_object* v___x_2484_; 
v___x_2484_ = l_Lean_throwError___at___00Lean_Meta_Grind_Action_checkTactic_spec__0___redArg(v_msg_2473_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_);
return v___x_2484_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Action_checkTactic_spec__0___boxed(lean_object* v_00_u03b1_2485_, lean_object* v_msg_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_){
_start:
{
lean_object* v_res_2497_; 
v_res_2497_ = l_Lean_throwError___at___00Lean_Meta_Grind_Action_checkTactic_spec__0(v_00_u03b1_2485_, v_msg_2486_, v___y_2487_, v___y_2488_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_);
lean_dec(v___y_2495_);
lean_dec_ref(v___y_2494_);
lean_dec(v___y_2493_);
lean_dec_ref(v___y_2492_);
lean_dec(v___y_2491_);
lean_dec_ref(v___y_2490_);
lean_dec(v___y_2489_);
lean_dec_ref(v___y_2488_);
lean_dec(v___y_2487_);
return v_res_2497_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3(lean_object* v_ref_2498_, lean_object* v_msgData_2499_, uint8_t v_severity_2500_, uint8_t v_isSilent_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_){
_start:
{
lean_object* v___x_2512_; 
v___x_2512_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___redArg(v_ref_2498_, v_msgData_2499_, v_severity_2500_, v_isSilent_2501_, v___y_2507_, v___y_2508_, v___y_2509_, v___y_2510_);
return v___x_2512_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3___boxed(lean_object* v_ref_2513_, lean_object* v_msgData_2514_, lean_object* v_severity_2515_, lean_object* v_isSilent_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_){
_start:
{
uint8_t v_severity_boxed_2527_; uint8_t v_isSilent_boxed_2528_; lean_object* v_res_2529_; 
v_severity_boxed_2527_ = lean_unbox(v_severity_2515_);
v_isSilent_boxed_2528_ = lean_unbox(v_isSilent_2516_);
v_res_2529_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_Grind_Action_checkTactic_spec__1_spec__2_spec__3(v_ref_2513_, v_msgData_2514_, v_severity_boxed_2527_, v_isSilent_boxed_2528_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_, v___y_2522_, v___y_2523_, v___y_2524_, v___y_2525_);
lean_dec(v___y_2525_);
lean_dec_ref(v___y_2524_);
lean_dec(v___y_2523_);
lean_dec_ref(v___y_2522_);
lean_dec(v___y_2521_);
lean_dec_ref(v___y_2520_);
lean_dec(v___y_2519_);
lean_dec_ref(v___y_2518_);
lean_dec(v___y_2517_);
lean_dec(v_ref_2513_);
return v_res_2529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_solverAction___lam__0(lean_object* v_goal_2530_, lean_object* v_check_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_){
_start:
{
lean_object* v___x_2542_; lean_object* v___x_2543_; 
v___x_2542_ = lean_st_mk_ref(v_goal_2530_);
lean_inc(v___x_2542_);
v___x_2543_ = lean_apply_11(v_check_2531_, v___x_2542_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_, lean_box(0));
if (lean_obj_tag(v___x_2543_) == 0)
{
lean_object* v_a_2544_; lean_object* v___x_2546_; uint8_t v_isShared_2547_; uint8_t v_isSharedCheck_2553_; 
v_a_2544_ = lean_ctor_get(v___x_2543_, 0);
v_isSharedCheck_2553_ = !lean_is_exclusive(v___x_2543_);
if (v_isSharedCheck_2553_ == 0)
{
v___x_2546_ = v___x_2543_;
v_isShared_2547_ = v_isSharedCheck_2553_;
goto v_resetjp_2545_;
}
else
{
lean_inc(v_a_2544_);
lean_dec(v___x_2543_);
v___x_2546_ = lean_box(0);
v_isShared_2547_ = v_isSharedCheck_2553_;
goto v_resetjp_2545_;
}
v_resetjp_2545_:
{
lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2551_; 
v___x_2548_ = lean_st_ref_get(v___x_2542_);
lean_dec(v___x_2542_);
v___x_2549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2549_, 0, v_a_2544_);
lean_ctor_set(v___x_2549_, 1, v___x_2548_);
if (v_isShared_2547_ == 0)
{
lean_ctor_set(v___x_2546_, 0, v___x_2549_);
v___x_2551_ = v___x_2546_;
goto v_reusejp_2550_;
}
else
{
lean_object* v_reuseFailAlloc_2552_; 
v_reuseFailAlloc_2552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2552_, 0, v___x_2549_);
v___x_2551_ = v_reuseFailAlloc_2552_;
goto v_reusejp_2550_;
}
v_reusejp_2550_:
{
return v___x_2551_;
}
}
}
else
{
lean_object* v_a_2554_; lean_object* v___x_2556_; uint8_t v_isShared_2557_; uint8_t v_isSharedCheck_2561_; 
lean_dec(v___x_2542_);
v_a_2554_ = lean_ctor_get(v___x_2543_, 0);
v_isSharedCheck_2561_ = !lean_is_exclusive(v___x_2543_);
if (v_isSharedCheck_2561_ == 0)
{
v___x_2556_ = v___x_2543_;
v_isShared_2557_ = v_isSharedCheck_2561_;
goto v_resetjp_2555_;
}
else
{
lean_inc(v_a_2554_);
lean_dec(v___x_2543_);
v___x_2556_ = lean_box(0);
v_isShared_2557_ = v_isSharedCheck_2561_;
goto v_resetjp_2555_;
}
v_resetjp_2555_:
{
lean_object* v___x_2559_; 
if (v_isShared_2557_ == 0)
{
v___x_2559_ = v___x_2556_;
goto v_reusejp_2558_;
}
else
{
lean_object* v_reuseFailAlloc_2560_; 
v_reuseFailAlloc_2560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2560_, 0, v_a_2554_);
v___x_2559_ = v_reuseFailAlloc_2560_;
goto v_reusejp_2558_;
}
v_reusejp_2558_:
{
return v___x_2559_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_solverAction___lam__0___boxed(lean_object* v_goal_2562_, lean_object* v_check_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_){
_start:
{
lean_object* v_res_2574_; 
v_res_2574_ = l_Lean_Meta_Grind_Action_solverAction___lam__0(v_goal_2562_, v_check_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_, v___y_2569_, v___y_2570_, v___y_2571_, v___y_2572_);
return v_res_2574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_solverAction___lam__1(lean_object* v_snd_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_){
_start:
{
lean_object* v___x_2586_; lean_object* v___x_2587_; 
v___x_2586_ = lean_st_mk_ref(v_snd_2575_);
lean_inc(v___y_2584_);
lean_inc_ref(v___y_2583_);
lean_inc(v___y_2582_);
lean_inc_ref(v___y_2581_);
lean_inc(v___y_2580_);
lean_inc_ref(v___y_2579_);
lean_inc(v___y_2578_);
lean_inc_ref(v___y_2577_);
lean_inc(v___y_2576_);
lean_inc(v___x_2586_);
v___x_2587_ = lean_grind_process_to_do(v___x_2586_, v___y_2576_, v___y_2577_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_);
if (lean_obj_tag(v___x_2587_) == 0)
{
lean_object* v___x_2589_; uint8_t v_isShared_2590_; uint8_t v_isSharedCheck_2596_; 
v_isSharedCheck_2596_ = !lean_is_exclusive(v___x_2587_);
if (v_isSharedCheck_2596_ == 0)
{
lean_object* v_unused_2597_; 
v_unused_2597_ = lean_ctor_get(v___x_2587_, 0);
lean_dec(v_unused_2597_);
v___x_2589_ = v___x_2587_;
v_isShared_2590_ = v_isSharedCheck_2596_;
goto v_resetjp_2588_;
}
else
{
lean_dec(v___x_2587_);
v___x_2589_ = lean_box(0);
v_isShared_2590_ = v_isSharedCheck_2596_;
goto v_resetjp_2588_;
}
v_resetjp_2588_:
{
lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2594_; 
v___x_2591_ = lean_st_ref_get(v___x_2586_);
v___x_2592_ = lean_st_ref_get(v___x_2586_);
lean_dec(v___x_2586_);
lean_dec(v___x_2592_);
if (v_isShared_2590_ == 0)
{
lean_ctor_set(v___x_2589_, 0, v___x_2591_);
v___x_2594_ = v___x_2589_;
goto v_reusejp_2593_;
}
else
{
lean_object* v_reuseFailAlloc_2595_; 
v_reuseFailAlloc_2595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2595_, 0, v___x_2591_);
v___x_2594_ = v_reuseFailAlloc_2595_;
goto v_reusejp_2593_;
}
v_reusejp_2593_:
{
return v___x_2594_;
}
}
}
else
{
lean_object* v_a_2598_; lean_object* v___x_2600_; uint8_t v_isShared_2601_; uint8_t v_isSharedCheck_2605_; 
lean_dec(v___x_2586_);
v_a_2598_ = lean_ctor_get(v___x_2587_, 0);
v_isSharedCheck_2605_ = !lean_is_exclusive(v___x_2587_);
if (v_isSharedCheck_2605_ == 0)
{
v___x_2600_ = v___x_2587_;
v_isShared_2601_ = v_isSharedCheck_2605_;
goto v_resetjp_2599_;
}
else
{
lean_inc(v_a_2598_);
lean_dec(v___x_2587_);
v___x_2600_ = lean_box(0);
v_isShared_2601_ = v_isSharedCheck_2605_;
goto v_resetjp_2599_;
}
v_resetjp_2599_:
{
lean_object* v___x_2603_; 
if (v_isShared_2601_ == 0)
{
v___x_2603_ = v___x_2600_;
goto v_reusejp_2602_;
}
else
{
lean_object* v_reuseFailAlloc_2604_; 
v_reuseFailAlloc_2604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2604_, 0, v_a_2598_);
v___x_2603_ = v_reuseFailAlloc_2604_;
goto v_reusejp_2602_;
}
v_reusejp_2602_:
{
return v___x_2603_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_solverAction___lam__1___boxed(lean_object* v_snd_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_){
_start:
{
lean_object* v_res_2617_; 
v_res_2617_ = l_Lean_Meta_Grind_Action_solverAction___lam__1(v_snd_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_, v___y_2611_, v___y_2612_, v___y_2613_, v___y_2614_, v___y_2615_);
lean_dec(v___y_2615_);
lean_dec_ref(v___y_2614_);
lean_dec(v___y_2613_);
lean_dec_ref(v___y_2612_);
lean_dec(v___y_2611_);
lean_dec_ref(v___y_2610_);
lean_dec(v___y_2609_);
lean_dec_ref(v___y_2608_);
lean_dec(v___y_2607_);
return v_res_2617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_solverAction(lean_object* v_check_2618_, lean_object* v_mkTac_2619_, lean_object* v_goal_2620_, lean_object* v_kna_2621_, lean_object* v_kp_2622_, lean_object* v_a_2623_, lean_object* v_a_2624_, lean_object* v_a_2625_, lean_object* v_a_2626_, lean_object* v_a_2627_, lean_object* v_a_2628_, lean_object* v_a_2629_, lean_object* v_a_2630_, lean_object* v_a_2631_){
_start:
{
lean_object* v___f_2633_; lean_object* v___x_2634_; 
lean_inc_ref(v_goal_2620_);
v___f_2633_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_solverAction___lam__0___boxed), 12, 2);
lean_closure_set(v___f_2633_, 0, v_goal_2620_);
lean_closure_set(v___f_2633_, 1, v_check_2618_);
v___x_2634_ = l_Lean_Meta_Grind_Action_saveStateIfTracing___redArg(v_a_2624_, v_a_2625_, v_a_2629_, v_a_2631_);
if (lean_obj_tag(v___x_2634_) == 0)
{
lean_object* v_a_2635_; lean_object* v_mvarId_2636_; lean_object* v___x_2637_; 
v_a_2635_ = lean_ctor_get(v___x_2634_, 0);
lean_inc(v_a_2635_);
lean_dec_ref_known(v___x_2634_, 1);
v_mvarId_2636_ = lean_ctor_get(v_goal_2620_, 1);
lean_inc(v_mvarId_2636_);
v___x_2637_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Action_terminalAction_spec__0___redArg(v_mvarId_2636_, v___f_2633_, v_a_2623_, v_a_2624_, v_a_2625_, v_a_2626_, v_a_2627_, v_a_2628_, v_a_2629_, v_a_2630_, v_a_2631_);
if (lean_obj_tag(v___x_2637_) == 0)
{
lean_object* v_a_2638_; lean_object* v_fst_2639_; lean_object* v_snd_2640_; lean_object* v___f_2641_; lean_object* v___y_2643_; lean_object* v___y_2644_; lean_object* v___y_2645_; lean_object* v___y_2646_; lean_object* v___y_2647_; lean_object* v___y_2648_; lean_object* v___y_2649_; lean_object* v___y_2650_; lean_object* v___y_2651_; uint8_t v___x_2681_; 
v_a_2638_ = lean_ctor_get(v___x_2637_, 0);
lean_inc(v_a_2638_);
lean_dec_ref_known(v___x_2637_, 1);
v_fst_2639_ = lean_ctor_get(v_a_2638_, 0);
lean_inc(v_fst_2639_);
v_snd_2640_ = lean_ctor_get(v_a_2638_, 1);
lean_inc_n(v_snd_2640_, 2);
lean_dec(v_a_2638_);
v___f_2641_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_solverAction___lam__1___boxed), 11, 1);
lean_closure_set(v___f_2641_, 0, v_snd_2640_);
v___x_2681_ = lean_unbox(v_fst_2639_);
lean_dec(v_fst_2639_);
switch(v___x_2681_)
{
case 0:
{
lean_object* v___x_2682_; 
lean_dec_ref(v___f_2641_);
lean_dec(v_a_2635_);
lean_dec_ref(v_kp_2622_);
lean_dec_ref(v_goal_2620_);
lean_dec_ref(v_mkTac_2619_);
lean_inc(v_a_2631_);
lean_inc_ref(v_a_2630_);
lean_inc(v_a_2629_);
lean_inc_ref(v_a_2628_);
lean_inc(v_a_2627_);
lean_inc_ref(v_a_2626_);
lean_inc(v_a_2625_);
lean_inc_ref(v_a_2624_);
lean_inc(v_a_2623_);
v___x_2682_ = lean_apply_11(v_kna_2621_, v_snd_2640_, v_a_2623_, v_a_2624_, v_a_2625_, v_a_2626_, v_a_2627_, v_a_2628_, v_a_2629_, v_a_2630_, v_a_2631_, lean_box(0));
return v___x_2682_;
}
case 3:
{
lean_object* v___x_2683_; 
lean_dec_ref(v___f_2641_);
lean_dec(v_snd_2640_);
lean_dec(v_a_2635_);
lean_dec_ref(v_kp_2622_);
lean_dec_ref(v_kna_2621_);
lean_dec_ref(v_goal_2620_);
v___x_2683_ = l_Lean_Meta_Grind_Action_closeWith(v_mkTac_2619_, v_a_2623_, v_a_2624_, v_a_2625_, v_a_2626_, v_a_2627_, v_a_2628_, v_a_2629_, v_a_2630_, v_a_2631_);
return v___x_2683_;
}
default: 
{
lean_dec_ref(v_kna_2621_);
v___y_2643_ = v_a_2623_;
v___y_2644_ = v_a_2624_;
v___y_2645_ = v_a_2625_;
v___y_2646_ = v_a_2626_;
v___y_2647_ = v_a_2627_;
v___y_2648_ = v_a_2628_;
v___y_2649_ = v_a_2629_;
v___y_2650_ = v_a_2630_;
v___y_2651_ = v_a_2631_;
goto v___jp_2642_;
}
}
v___jp_2642_:
{
lean_object* v_mvarId_2652_; lean_object* v___x_2653_; 
v_mvarId_2652_ = lean_ctor_get(v_snd_2640_, 1);
lean_inc(v_mvarId_2652_);
lean_dec(v_snd_2640_);
v___x_2653_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Action_terminalAction_spec__0___redArg(v_mvarId_2652_, v___f_2641_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_, v___y_2651_);
if (lean_obj_tag(v___x_2653_) == 0)
{
lean_object* v_a_2654_; lean_object* v_toGoalState_2655_; uint8_t v_inconsistent_2656_; 
v_a_2654_ = lean_ctor_get(v___x_2653_, 0);
lean_inc(v_a_2654_);
lean_dec_ref_known(v___x_2653_, 1);
v_toGoalState_2655_ = lean_ctor_get(v_a_2654_, 0);
v_inconsistent_2656_ = lean_ctor_get_uint8(v_toGoalState_2655_, sizeof(void*)*21 + 8);
if (v_inconsistent_2656_ == 0)
{
lean_object* v___x_2657_; 
v___x_2657_ = l_Lean_Meta_Grind_getConfig___redArg(v___y_2644_);
if (lean_obj_tag(v___x_2657_) == 0)
{
lean_object* v_a_2658_; uint8_t v_trace_2659_; 
v_a_2658_ = lean_ctor_get(v___x_2657_, 0);
lean_inc(v_a_2658_);
lean_dec_ref_known(v___x_2657_, 1);
v_trace_2659_ = lean_ctor_get_uint8(v_a_2658_, sizeof(void*)*18);
lean_dec(v_a_2658_);
if (v_trace_2659_ == 0)
{
lean_object* v___x_2660_; 
lean_dec(v_a_2635_);
lean_dec_ref(v_goal_2620_);
lean_dec_ref(v_mkTac_2619_);
lean_inc(v___y_2651_);
lean_inc_ref(v___y_2650_);
lean_inc(v___y_2649_);
lean_inc_ref(v___y_2648_);
lean_inc(v___y_2647_);
lean_inc_ref(v___y_2646_);
lean_inc(v___y_2645_);
lean_inc_ref(v___y_2644_);
lean_inc(v___y_2643_);
v___x_2660_ = lean_apply_11(v_kp_2622_, v_a_2654_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_, v___y_2651_, lean_box(0));
return v___x_2660_;
}
else
{
lean_object* v___x_2661_; 
lean_inc(v___y_2651_);
lean_inc_ref(v___y_2650_);
lean_inc(v___y_2649_);
lean_inc_ref(v___y_2648_);
lean_inc(v___y_2647_);
lean_inc_ref(v___y_2646_);
lean_inc(v___y_2645_);
lean_inc_ref(v___y_2644_);
lean_inc(v___y_2643_);
v___x_2661_ = lean_apply_11(v_kp_2622_, v_a_2654_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_, v___y_2651_, lean_box(0));
if (lean_obj_tag(v___x_2661_) == 0)
{
lean_object* v_a_2662_; lean_object* v___x_2663_; 
v_a_2662_ = lean_ctor_get(v___x_2661_, 0);
lean_inc(v_a_2662_);
lean_dec_ref_known(v___x_2661_, 1);
v___x_2663_ = l_Lean_Meta_Grind_Action_recordIfNeeded(v_a_2635_, v_goal_2620_, v_a_2662_, v_mkTac_2619_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_, v___y_2651_);
return v___x_2663_;
}
else
{
lean_dec(v_a_2635_);
lean_dec_ref(v_goal_2620_);
lean_dec_ref(v_mkTac_2619_);
return v___x_2661_;
}
}
}
else
{
lean_object* v_a_2664_; lean_object* v___x_2666_; uint8_t v_isShared_2667_; uint8_t v_isSharedCheck_2671_; 
lean_dec(v_a_2654_);
lean_dec(v_a_2635_);
lean_dec_ref(v_kp_2622_);
lean_dec_ref(v_goal_2620_);
lean_dec_ref(v_mkTac_2619_);
v_a_2664_ = lean_ctor_get(v___x_2657_, 0);
v_isSharedCheck_2671_ = !lean_is_exclusive(v___x_2657_);
if (v_isSharedCheck_2671_ == 0)
{
v___x_2666_ = v___x_2657_;
v_isShared_2667_ = v_isSharedCheck_2671_;
goto v_resetjp_2665_;
}
else
{
lean_inc(v_a_2664_);
lean_dec(v___x_2657_);
v___x_2666_ = lean_box(0);
v_isShared_2667_ = v_isSharedCheck_2671_;
goto v_resetjp_2665_;
}
v_resetjp_2665_:
{
lean_object* v___x_2669_; 
if (v_isShared_2667_ == 0)
{
v___x_2669_ = v___x_2666_;
goto v_reusejp_2668_;
}
else
{
lean_object* v_reuseFailAlloc_2670_; 
v_reuseFailAlloc_2670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2670_, 0, v_a_2664_);
v___x_2669_ = v_reuseFailAlloc_2670_;
goto v_reusejp_2668_;
}
v_reusejp_2668_:
{
return v___x_2669_;
}
}
}
}
else
{
lean_object* v___x_2672_; 
lean_dec(v_a_2654_);
lean_dec(v_a_2635_);
lean_dec_ref(v_kp_2622_);
lean_dec_ref(v_goal_2620_);
v___x_2672_ = l_Lean_Meta_Grind_Action_closeWith(v_mkTac_2619_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_, v___y_2651_);
return v___x_2672_;
}
}
else
{
lean_object* v_a_2673_; lean_object* v___x_2675_; uint8_t v_isShared_2676_; uint8_t v_isSharedCheck_2680_; 
lean_dec(v_a_2635_);
lean_dec_ref(v_kp_2622_);
lean_dec_ref(v_goal_2620_);
lean_dec_ref(v_mkTac_2619_);
v_a_2673_ = lean_ctor_get(v___x_2653_, 0);
v_isSharedCheck_2680_ = !lean_is_exclusive(v___x_2653_);
if (v_isSharedCheck_2680_ == 0)
{
v___x_2675_ = v___x_2653_;
v_isShared_2676_ = v_isSharedCheck_2680_;
goto v_resetjp_2674_;
}
else
{
lean_inc(v_a_2673_);
lean_dec(v___x_2653_);
v___x_2675_ = lean_box(0);
v_isShared_2676_ = v_isSharedCheck_2680_;
goto v_resetjp_2674_;
}
v_resetjp_2674_:
{
lean_object* v___x_2678_; 
if (v_isShared_2676_ == 0)
{
v___x_2678_ = v___x_2675_;
goto v_reusejp_2677_;
}
else
{
lean_object* v_reuseFailAlloc_2679_; 
v_reuseFailAlloc_2679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2679_, 0, v_a_2673_);
v___x_2678_ = v_reuseFailAlloc_2679_;
goto v_reusejp_2677_;
}
v_reusejp_2677_:
{
return v___x_2678_;
}
}
}
}
}
else
{
lean_object* v_a_2684_; lean_object* v___x_2686_; uint8_t v_isShared_2687_; uint8_t v_isSharedCheck_2691_; 
lean_dec(v_a_2635_);
lean_dec_ref(v_kp_2622_);
lean_dec_ref(v_kna_2621_);
lean_dec_ref(v_goal_2620_);
lean_dec_ref(v_mkTac_2619_);
v_a_2684_ = lean_ctor_get(v___x_2637_, 0);
v_isSharedCheck_2691_ = !lean_is_exclusive(v___x_2637_);
if (v_isSharedCheck_2691_ == 0)
{
v___x_2686_ = v___x_2637_;
v_isShared_2687_ = v_isSharedCheck_2691_;
goto v_resetjp_2685_;
}
else
{
lean_inc(v_a_2684_);
lean_dec(v___x_2637_);
v___x_2686_ = lean_box(0);
v_isShared_2687_ = v_isSharedCheck_2691_;
goto v_resetjp_2685_;
}
v_resetjp_2685_:
{
lean_object* v___x_2689_; 
if (v_isShared_2687_ == 0)
{
v___x_2689_ = v___x_2686_;
goto v_reusejp_2688_;
}
else
{
lean_object* v_reuseFailAlloc_2690_; 
v_reuseFailAlloc_2690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2690_, 0, v_a_2684_);
v___x_2689_ = v_reuseFailAlloc_2690_;
goto v_reusejp_2688_;
}
v_reusejp_2688_:
{
return v___x_2689_;
}
}
}
}
else
{
lean_object* v_a_2692_; lean_object* v___x_2694_; uint8_t v_isShared_2695_; uint8_t v_isSharedCheck_2699_; 
lean_dec_ref(v___f_2633_);
lean_dec_ref(v_kp_2622_);
lean_dec_ref(v_kna_2621_);
lean_dec_ref(v_goal_2620_);
lean_dec_ref(v_mkTac_2619_);
v_a_2692_ = lean_ctor_get(v___x_2634_, 0);
v_isSharedCheck_2699_ = !lean_is_exclusive(v___x_2634_);
if (v_isSharedCheck_2699_ == 0)
{
v___x_2694_ = v___x_2634_;
v_isShared_2695_ = v_isSharedCheck_2699_;
goto v_resetjp_2693_;
}
else
{
lean_inc(v_a_2692_);
lean_dec(v___x_2634_);
v___x_2694_ = lean_box(0);
v_isShared_2695_ = v_isSharedCheck_2699_;
goto v_resetjp_2693_;
}
v_resetjp_2693_:
{
lean_object* v___x_2697_; 
if (v_isShared_2695_ == 0)
{
v___x_2697_ = v___x_2694_;
goto v_reusejp_2696_;
}
else
{
lean_object* v_reuseFailAlloc_2698_; 
v_reuseFailAlloc_2698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2698_, 0, v_a_2692_);
v___x_2697_ = v_reuseFailAlloc_2698_;
goto v_reusejp_2696_;
}
v_reusejp_2696_:
{
return v___x_2697_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_solverAction___boxed(lean_object* v_check_2700_, lean_object* v_mkTac_2701_, lean_object* v_goal_2702_, lean_object* v_kna_2703_, lean_object* v_kp_2704_, lean_object* v_a_2705_, lean_object* v_a_2706_, lean_object* v_a_2707_, lean_object* v_a_2708_, lean_object* v_a_2709_, lean_object* v_a_2710_, lean_object* v_a_2711_, lean_object* v_a_2712_, lean_object* v_a_2713_, lean_object* v_a_2714_){
_start:
{
lean_object* v_res_2715_; 
v_res_2715_ = l_Lean_Meta_Grind_Action_solverAction(v_check_2700_, v_mkTac_2701_, v_goal_2702_, v_kna_2703_, v_kp_2704_, v_a_2705_, v_a_2706_, v_a_2707_, v_a_2708_, v_a_2709_, v_a_2710_, v_a_2711_, v_a_2712_, v_a_2713_);
lean_dec(v_a_2713_);
lean_dec_ref(v_a_2712_);
lean_dec(v_a_2711_);
lean_dec_ref(v_a_2710_);
lean_dec(v_a_2709_);
lean_dec_ref(v_a_2708_);
lean_dec(v_a_2707_);
lean_dec_ref(v_a_2706_);
lean_dec(v_a_2705_);
return v_res_2715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_mbtc___lam__0(lean_object* v_goal_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_){
_start:
{
lean_object* v___x_2727_; lean_object* v___x_2728_; 
v___x_2727_ = lean_st_mk_ref(v_goal_2716_);
v___x_2728_ = l_Lean_Meta_Grind_Solvers_mbtc(v___x_2727_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_);
if (lean_obj_tag(v___x_2728_) == 0)
{
lean_object* v_a_2729_; lean_object* v___x_2731_; uint8_t v_isShared_2732_; uint8_t v_isSharedCheck_2738_; 
v_a_2729_ = lean_ctor_get(v___x_2728_, 0);
v_isSharedCheck_2738_ = !lean_is_exclusive(v___x_2728_);
if (v_isSharedCheck_2738_ == 0)
{
v___x_2731_ = v___x_2728_;
v_isShared_2732_ = v_isSharedCheck_2738_;
goto v_resetjp_2730_;
}
else
{
lean_inc(v_a_2729_);
lean_dec(v___x_2728_);
v___x_2731_ = lean_box(0);
v_isShared_2732_ = v_isSharedCheck_2738_;
goto v_resetjp_2730_;
}
v_resetjp_2730_:
{
lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2736_; 
v___x_2733_ = lean_st_ref_get(v___x_2727_);
lean_dec(v___x_2727_);
v___x_2734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2734_, 0, v_a_2729_);
lean_ctor_set(v___x_2734_, 1, v___x_2733_);
if (v_isShared_2732_ == 0)
{
lean_ctor_set(v___x_2731_, 0, v___x_2734_);
v___x_2736_ = v___x_2731_;
goto v_reusejp_2735_;
}
else
{
lean_object* v_reuseFailAlloc_2737_; 
v_reuseFailAlloc_2737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2737_, 0, v___x_2734_);
v___x_2736_ = v_reuseFailAlloc_2737_;
goto v_reusejp_2735_;
}
v_reusejp_2735_:
{
return v___x_2736_;
}
}
}
else
{
lean_object* v_a_2739_; lean_object* v___x_2741_; uint8_t v_isShared_2742_; uint8_t v_isSharedCheck_2746_; 
lean_dec(v___x_2727_);
v_a_2739_ = lean_ctor_get(v___x_2728_, 0);
v_isSharedCheck_2746_ = !lean_is_exclusive(v___x_2728_);
if (v_isSharedCheck_2746_ == 0)
{
v___x_2741_ = v___x_2728_;
v_isShared_2742_ = v_isSharedCheck_2746_;
goto v_resetjp_2740_;
}
else
{
lean_inc(v_a_2739_);
lean_dec(v___x_2728_);
v___x_2741_ = lean_box(0);
v_isShared_2742_ = v_isSharedCheck_2746_;
goto v_resetjp_2740_;
}
v_resetjp_2740_:
{
lean_object* v___x_2744_; 
if (v_isShared_2742_ == 0)
{
v___x_2744_ = v___x_2741_;
goto v_reusejp_2743_;
}
else
{
lean_object* v_reuseFailAlloc_2745_; 
v_reuseFailAlloc_2745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2745_, 0, v_a_2739_);
v___x_2744_ = v_reuseFailAlloc_2745_;
goto v_reusejp_2743_;
}
v_reusejp_2743_:
{
return v___x_2744_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_mbtc___lam__0___boxed(lean_object* v_goal_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_){
_start:
{
lean_object* v_res_2758_; 
v_res_2758_ = l_Lean_Meta_Grind_Action_mbtc___lam__0(v_goal_2747_, v___y_2748_, v___y_2749_, v___y_2750_, v___y_2751_, v___y_2752_, v___y_2753_, v___y_2754_, v___y_2755_, v___y_2756_);
lean_dec(v___y_2756_);
lean_dec_ref(v___y_2755_);
lean_dec(v___y_2754_);
lean_dec_ref(v___y_2753_);
lean_dec(v___y_2752_);
lean_dec_ref(v___y_2751_);
lean_dec(v___y_2750_);
lean_dec_ref(v___y_2749_);
lean_dec(v___y_2748_);
return v_res_2758_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_mbtc___lam__1(lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_){
_start:
{
lean_object* v_ref_2776_; uint8_t v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; 
v_ref_2776_ = lean_ctor_get(v___y_2773_, 2);
v___x_2777_ = 0;
v___x_2778_ = l_Lean_SourceInfo_fromRef(v_ref_2776_, v___x_2777_);
v___x_2779_ = ((lean_object*)(l_Lean_Meta_Grind_Action_mbtc___lam__1___closed__0));
v___x_2780_ = ((lean_object*)(l_Lean_Meta_Grind_Action_mbtc___lam__1___closed__1));
lean_inc(v___x_2778_);
v___x_2781_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2781_, 0, v___x_2778_);
lean_ctor_set(v___x_2781_, 1, v___x_2779_);
v___x_2782_ = l_Lean_Syntax_node1(v___x_2778_, v___x_2780_, v___x_2781_);
v___x_2783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2783_, 0, v___x_2782_);
return v___x_2783_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_mbtc___lam__1___boxed(lean_object* v___y_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_){
_start:
{
lean_object* v_res_2794_; 
v_res_2794_ = l_Lean_Meta_Grind_Action_mbtc___lam__1(v___y_2784_, v___y_2785_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_, v___y_2790_, v___y_2791_, v___y_2792_);
lean_dec(v___y_2792_);
lean_dec_ref(v___y_2791_);
lean_dec(v___y_2790_);
lean_dec_ref(v___y_2789_);
lean_dec(v___y_2788_);
lean_dec_ref(v___y_2787_);
lean_dec(v___y_2786_);
lean_dec_ref(v___y_2785_);
lean_dec(v___y_2784_);
return v_res_2794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_mbtc(lean_object* v_goal_2796_, lean_object* v_kna_2797_, lean_object* v_kp_2798_, lean_object* v_a_2799_, lean_object* v_a_2800_, lean_object* v_a_2801_, lean_object* v_a_2802_, lean_object* v_a_2803_, lean_object* v_a_2804_, lean_object* v_a_2805_, lean_object* v_a_2806_, lean_object* v_a_2807_){
_start:
{
lean_object* v___f_2809_; lean_object* v___f_2810_; lean_object* v___x_2811_; 
lean_inc_ref(v_goal_2796_);
v___f_2809_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_mbtc___lam__0___boxed), 11, 1);
lean_closure_set(v___f_2809_, 0, v_goal_2796_);
v___f_2810_ = ((lean_object*)(l_Lean_Meta_Grind_Action_mbtc___closed__0));
v___x_2811_ = l_Lean_Meta_Grind_Action_saveStateIfTracing___redArg(v_a_2800_, v_a_2801_, v_a_2805_, v_a_2807_);
if (lean_obj_tag(v___x_2811_) == 0)
{
lean_object* v_a_2812_; lean_object* v_mvarId_2813_; lean_object* v___x_2814_; 
v_a_2812_ = lean_ctor_get(v___x_2811_, 0);
lean_inc(v_a_2812_);
lean_dec_ref_known(v___x_2811_, 1);
v_mvarId_2813_ = lean_ctor_get(v_goal_2796_, 1);
lean_inc(v_mvarId_2813_);
v___x_2814_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Action_terminalAction_spec__0___redArg(v_mvarId_2813_, v___f_2809_, v_a_2799_, v_a_2800_, v_a_2801_, v_a_2802_, v_a_2803_, v_a_2804_, v_a_2805_, v_a_2806_, v_a_2807_);
if (lean_obj_tag(v___x_2814_) == 0)
{
lean_object* v_a_2815_; lean_object* v_fst_2816_; uint8_t v___x_2817_; 
v_a_2815_ = lean_ctor_get(v___x_2814_, 0);
lean_inc(v_a_2815_);
lean_dec_ref_known(v___x_2814_, 1);
v_fst_2816_ = lean_ctor_get(v_a_2815_, 0);
v___x_2817_ = lean_unbox(v_fst_2816_);
if (v___x_2817_ == 0)
{
lean_object* v_snd_2818_; lean_object* v___x_2819_; 
lean_dec(v_a_2812_);
lean_dec_ref(v_kp_2798_);
lean_dec_ref(v_goal_2796_);
v_snd_2818_ = lean_ctor_get(v_a_2815_, 1);
lean_inc(v_snd_2818_);
lean_dec(v_a_2815_);
lean_inc(v_a_2807_);
lean_inc_ref(v_a_2806_);
lean_inc(v_a_2805_);
lean_inc_ref(v_a_2804_);
lean_inc(v_a_2803_);
lean_inc_ref(v_a_2802_);
lean_inc(v_a_2801_);
lean_inc_ref(v_a_2800_);
lean_inc(v_a_2799_);
v___x_2819_ = lean_apply_11(v_kna_2797_, v_snd_2818_, v_a_2799_, v_a_2800_, v_a_2801_, v_a_2802_, v_a_2803_, v_a_2804_, v_a_2805_, v_a_2806_, v_a_2807_, lean_box(0));
return v___x_2819_;
}
else
{
lean_object* v_snd_2820_; lean_object* v___x_2821_; 
lean_dec_ref(v_kna_2797_);
v_snd_2820_ = lean_ctor_get(v_a_2815_, 1);
lean_inc(v_snd_2820_);
lean_dec(v_a_2815_);
v___x_2821_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_2800_);
if (lean_obj_tag(v___x_2821_) == 0)
{
lean_object* v_a_2822_; uint8_t v_trace_2823_; 
v_a_2822_ = lean_ctor_get(v___x_2821_, 0);
lean_inc(v_a_2822_);
lean_dec_ref_known(v___x_2821_, 1);
v_trace_2823_ = lean_ctor_get_uint8(v_a_2822_, sizeof(void*)*18);
lean_dec(v_a_2822_);
if (v_trace_2823_ == 0)
{
lean_object* v___x_2824_; 
lean_dec(v_a_2812_);
lean_dec_ref(v_goal_2796_);
lean_inc(v_a_2807_);
lean_inc_ref(v_a_2806_);
lean_inc(v_a_2805_);
lean_inc_ref(v_a_2804_);
lean_inc(v_a_2803_);
lean_inc_ref(v_a_2802_);
lean_inc(v_a_2801_);
lean_inc_ref(v_a_2800_);
lean_inc(v_a_2799_);
v___x_2824_ = lean_apply_11(v_kp_2798_, v_snd_2820_, v_a_2799_, v_a_2800_, v_a_2801_, v_a_2802_, v_a_2803_, v_a_2804_, v_a_2805_, v_a_2806_, v_a_2807_, lean_box(0));
return v___x_2824_;
}
else
{
lean_object* v___x_2825_; 
lean_inc(v_a_2807_);
lean_inc_ref(v_a_2806_);
lean_inc(v_a_2805_);
lean_inc_ref(v_a_2804_);
lean_inc(v_a_2803_);
lean_inc_ref(v_a_2802_);
lean_inc(v_a_2801_);
lean_inc_ref(v_a_2800_);
lean_inc(v_a_2799_);
v___x_2825_ = lean_apply_11(v_kp_2798_, v_snd_2820_, v_a_2799_, v_a_2800_, v_a_2801_, v_a_2802_, v_a_2803_, v_a_2804_, v_a_2805_, v_a_2806_, v_a_2807_, lean_box(0));
if (lean_obj_tag(v___x_2825_) == 0)
{
lean_object* v_a_2826_; lean_object* v___x_2827_; 
v_a_2826_ = lean_ctor_get(v___x_2825_, 0);
lean_inc(v_a_2826_);
lean_dec_ref_known(v___x_2825_, 1);
v___x_2827_ = l_Lean_Meta_Grind_Action_recordIfNeeded(v_a_2812_, v_goal_2796_, v_a_2826_, v___f_2810_, v_a_2799_, v_a_2800_, v_a_2801_, v_a_2802_, v_a_2803_, v_a_2804_, v_a_2805_, v_a_2806_, v_a_2807_);
return v___x_2827_;
}
else
{
lean_dec(v_a_2812_);
lean_dec_ref(v_goal_2796_);
return v___x_2825_;
}
}
}
else
{
lean_object* v_a_2828_; lean_object* v___x_2830_; uint8_t v_isShared_2831_; uint8_t v_isSharedCheck_2835_; 
lean_dec(v_snd_2820_);
lean_dec(v_a_2812_);
lean_dec_ref(v_kp_2798_);
lean_dec_ref(v_goal_2796_);
v_a_2828_ = lean_ctor_get(v___x_2821_, 0);
v_isSharedCheck_2835_ = !lean_is_exclusive(v___x_2821_);
if (v_isSharedCheck_2835_ == 0)
{
v___x_2830_ = v___x_2821_;
v_isShared_2831_ = v_isSharedCheck_2835_;
goto v_resetjp_2829_;
}
else
{
lean_inc(v_a_2828_);
lean_dec(v___x_2821_);
v___x_2830_ = lean_box(0);
v_isShared_2831_ = v_isSharedCheck_2835_;
goto v_resetjp_2829_;
}
v_resetjp_2829_:
{
lean_object* v___x_2833_; 
if (v_isShared_2831_ == 0)
{
v___x_2833_ = v___x_2830_;
goto v_reusejp_2832_;
}
else
{
lean_object* v_reuseFailAlloc_2834_; 
v_reuseFailAlloc_2834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2834_, 0, v_a_2828_);
v___x_2833_ = v_reuseFailAlloc_2834_;
goto v_reusejp_2832_;
}
v_reusejp_2832_:
{
return v___x_2833_;
}
}
}
}
}
else
{
lean_object* v_a_2836_; lean_object* v___x_2838_; uint8_t v_isShared_2839_; uint8_t v_isSharedCheck_2843_; 
lean_dec(v_a_2812_);
lean_dec_ref(v_kp_2798_);
lean_dec_ref(v_kna_2797_);
lean_dec_ref(v_goal_2796_);
v_a_2836_ = lean_ctor_get(v___x_2814_, 0);
v_isSharedCheck_2843_ = !lean_is_exclusive(v___x_2814_);
if (v_isSharedCheck_2843_ == 0)
{
v___x_2838_ = v___x_2814_;
v_isShared_2839_ = v_isSharedCheck_2843_;
goto v_resetjp_2837_;
}
else
{
lean_inc(v_a_2836_);
lean_dec(v___x_2814_);
v___x_2838_ = lean_box(0);
v_isShared_2839_ = v_isSharedCheck_2843_;
goto v_resetjp_2837_;
}
v_resetjp_2837_:
{
lean_object* v___x_2841_; 
if (v_isShared_2839_ == 0)
{
v___x_2841_ = v___x_2838_;
goto v_reusejp_2840_;
}
else
{
lean_object* v_reuseFailAlloc_2842_; 
v_reuseFailAlloc_2842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2842_, 0, v_a_2836_);
v___x_2841_ = v_reuseFailAlloc_2842_;
goto v_reusejp_2840_;
}
v_reusejp_2840_:
{
return v___x_2841_;
}
}
}
}
else
{
lean_object* v_a_2844_; lean_object* v___x_2846_; uint8_t v_isShared_2847_; uint8_t v_isSharedCheck_2851_; 
lean_dec_ref(v___f_2809_);
lean_dec_ref(v_kp_2798_);
lean_dec_ref(v_kna_2797_);
lean_dec_ref(v_goal_2796_);
v_a_2844_ = lean_ctor_get(v___x_2811_, 0);
v_isSharedCheck_2851_ = !lean_is_exclusive(v___x_2811_);
if (v_isSharedCheck_2851_ == 0)
{
v___x_2846_ = v___x_2811_;
v_isShared_2847_ = v_isSharedCheck_2851_;
goto v_resetjp_2845_;
}
else
{
lean_inc(v_a_2844_);
lean_dec(v___x_2811_);
v___x_2846_ = lean_box(0);
v_isShared_2847_ = v_isSharedCheck_2851_;
goto v_resetjp_2845_;
}
v_resetjp_2845_:
{
lean_object* v___x_2849_; 
if (v_isShared_2847_ == 0)
{
v___x_2849_ = v___x_2846_;
goto v_reusejp_2848_;
}
else
{
lean_object* v_reuseFailAlloc_2850_; 
v_reuseFailAlloc_2850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2850_, 0, v_a_2844_);
v___x_2849_ = v_reuseFailAlloc_2850_;
goto v_reusejp_2848_;
}
v_reusejp_2848_:
{
return v___x_2849_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_mbtc___boxed(lean_object* v_goal_2852_, lean_object* v_kna_2853_, lean_object* v_kp_2854_, lean_object* v_a_2855_, lean_object* v_a_2856_, lean_object* v_a_2857_, lean_object* v_a_2858_, lean_object* v_a_2859_, lean_object* v_a_2860_, lean_object* v_a_2861_, lean_object* v_a_2862_, lean_object* v_a_2863_, lean_object* v_a_2864_){
_start:
{
lean_object* v_res_2865_; 
v_res_2865_ = l_Lean_Meta_Grind_Action_mbtc(v_goal_2852_, v_kna_2853_, v_kp_2854_, v_a_2855_, v_a_2856_, v_a_2857_, v_a_2858_, v_a_2859_, v_a_2860_, v_a_2861_, v_a_2862_, v_a_2863_);
lean_dec(v_a_2863_);
lean_dec_ref(v_a_2862_);
lean_dec(v_a_2861_);
lean_dec_ref(v_a_2860_);
lean_dec(v_a_2859_);
lean_dec_ref(v_a_2858_);
lean_dec(v_a_2857_);
lean_dec_ref(v_a_2856_);
lean_dec(v_a_2855_);
return v_res_2865_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_loop_match__1_splitter___redArg(lean_object* v_n_2866_, lean_object* v_h__1_2867_, lean_object* v_h__2_2868_){
_start:
{
lean_object* v_zero_2869_; uint8_t v_isZero_2870_; 
v_zero_2869_ = lean_unsigned_to_nat(0u);
v_isZero_2870_ = lean_nat_dec_eq(v_n_2866_, v_zero_2869_);
if (v_isZero_2870_ == 1)
{
lean_object* v___x_2871_; lean_object* v___x_2872_; 
lean_dec(v_h__2_2868_);
v___x_2871_ = lean_box(0);
v___x_2872_ = lean_apply_1(v_h__1_2867_, v___x_2871_);
return v___x_2872_;
}
else
{
lean_object* v_one_2873_; lean_object* v_n_2874_; lean_object* v___x_2875_; 
lean_dec(v_h__1_2867_);
v_one_2873_ = lean_unsigned_to_nat(1u);
v_n_2874_ = lean_nat_sub(v_n_2866_, v_one_2873_);
v___x_2875_ = lean_apply_1(v_h__2_2868_, v_n_2874_);
return v___x_2875_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_loop_match__1_splitter___redArg___boxed(lean_object* v_n_2876_, lean_object* v_h__1_2877_, lean_object* v_h__2_2878_){
_start:
{
lean_object* v_res_2879_; 
v_res_2879_ = l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_loop_match__1_splitter___redArg(v_n_2876_, v_h__1_2877_, v_h__2_2878_);
lean_dec(v_n_2876_);
return v_res_2879_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_loop_match__1_splitter(lean_object* v_motive_2880_, lean_object* v_n_2881_, lean_object* v_h__1_2882_, lean_object* v_h__2_2883_){
_start:
{
lean_object* v_zero_2884_; uint8_t v_isZero_2885_; 
v_zero_2884_ = lean_unsigned_to_nat(0u);
v_isZero_2885_ = lean_nat_dec_eq(v_n_2881_, v_zero_2884_);
if (v_isZero_2885_ == 1)
{
lean_object* v___x_2886_; lean_object* v___x_2887_; 
lean_dec(v_h__2_2883_);
v___x_2886_ = lean_box(0);
v___x_2887_ = lean_apply_1(v_h__1_2882_, v___x_2886_);
return v___x_2887_;
}
else
{
lean_object* v_one_2888_; lean_object* v_n_2889_; lean_object* v___x_2890_; 
lean_dec(v_h__1_2882_);
v_one_2888_ = lean_unsigned_to_nat(1u);
v_n_2889_ = lean_nat_sub(v_n_2881_, v_one_2888_);
v___x_2890_ = lean_apply_1(v_h__2_2883_, v_n_2889_);
return v___x_2890_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_loop_match__1_splitter___boxed(lean_object* v_motive_2891_, lean_object* v_n_2892_, lean_object* v_h__1_2893_, lean_object* v_h__2_2894_){
_start:
{
lean_object* v_res_2895_; 
v_res_2895_ = l___private_Lean_Meta_Tactic_Grind_Action_0__Lean_Meta_Grind_Action_loop_match__1_splitter(v_motive_2891_, v_n_2892_, v_h__1_2893_, v_h__2_2894_);
lean_dec(v_n_2892_);
return v_res_2895_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Action(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Action(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Action(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Action(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Action(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Action(builtin);
}
#ifdef __cplusplus
}
#endif
