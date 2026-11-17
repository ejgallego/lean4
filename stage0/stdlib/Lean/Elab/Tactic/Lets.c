// Lean compiler output
// Module: Lean.Elab.Tactic.Lets
// Imports: public import Lean.Meta.Tactic.Lets public import Lean.Elab.Tactic.Location import Lean.Elab.Binders import Lean.Linter.Init import Lean.Elab.ConfigEval
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
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_liftLetsLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_ConfigEval_unsupportedExprExceptionId;
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_EvalConfigItem_defaultOnErr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
extern lean_object* l_Lean_Linter_linterMessageTag;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_throwInvalidOption___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_addCompletionInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_getRootStr(lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_shift(lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_evalBoolItem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Elab_ConfigEval_EvalExpr_withSimpleEvalExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
uint8_t l_Lean_instBEqInternalExceptionId_beq(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Lean_Meta_getMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_logUnassignedUsingErrorInfos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_abortTermExceptionId;
uint8_t l_Lean_Expr_hasSorry(lean_object*);
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Elab_ConfigEval_EvalConfigItem_setConfig_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_letToHave(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_letToHaveLocalDecl(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkOptionalNode(lean_object*);
lean_object* l_Lean_Elab_Tactic_expandOptLocation(lean_object*);
lean_object* l_Lean_Elab_Tactic_withLocation(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
extern lean_object* l_Lean_Linter_instInhabitedLinterSetsState_default;
extern lean_object* l_Lean_Linter_linterSetsExt;
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Elab_Term_addLocalVarInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_extractLetsLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_liftLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_Tactic_getNameOfIdent_x27(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_MVarId_extractLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_to_list(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__0_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "linter"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__0_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__0_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__1_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__1_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__1_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__2_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "unusedName"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__2_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__2_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__3_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__0_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__3_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__3_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__1_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(206, 206, 61, 199, 208, 244, 88, 253)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__3_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__3_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__2_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(251, 220, 201, 55, 250, 95, 85, 187)}};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__3_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__3_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__4_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "enable the 'unused name' tactic linter"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__4_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__4_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__5_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__4_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__5_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__5_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__6_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__6_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__6_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__7_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__7_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__7_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__8_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__8_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__8_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__9_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__6_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__9_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__9_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__7_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__9_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__9_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__8_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__9_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__9_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__0_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(232, 218, 239, 141, 209, 224, 98, 123)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__9_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__9_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__1_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(148, 199, 243, 68, 217, 216, 62, 142)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__9_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__9_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__2_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(57, 222, 21, 214, 118, 132, 172, 125)}};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__9_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__9_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_linter_tactic_unusedName;
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5_spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___closed__5_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "This linter can be disabled with `set_option "};
static const lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1___closed__1;
static const lean_string_object l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " false`"};
static const lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1___closed__2_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "unused name"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_extractLetsAddVarInfo___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_extractLetsAddVarInfo___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_extractLetsAddVarInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_extractLetsAddVarInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "failed"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__0;
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "ExtractLetsConfig"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__6_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(146, 95, 47, 57, 208, 157, 66, 165)}};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig;
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__2___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__2___redArg___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "\nof type `"};
static const lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__1;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__3;
static const lean_string_object l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__4_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__5;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__6;
static const lean_string_object l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Could not evaluate the expression"};
static const lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__7 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__7_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__8;
static const lean_string_object l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Expression contains `sorry`:"};
static const lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__9 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__9_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__10;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__3_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "preserveBinderNames"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "underBinder"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "useContext"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "usedOnly"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__6_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(146, 95, 47, 57, 208, 157, 66, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 226, 140, 93, 201, 161, 84, 201)}};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__6_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(146, 95, 47, 57, 208, 157, 66, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__6_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(211, 63, 87, 213, 28, 56, 122, 175)}};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__6_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(146, 95, 47, 57, 208, 157, 66, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__7_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(104, 222, 109, 10, 158, 231, 13, 6)}};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "proofs"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__8_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "types"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__6_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__10_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(146, 95, 47, 57, 208, 157, 66, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__10_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(43, 83, 70, 124, 33, 60, 74, 155)}};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__6_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__11_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__11_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(146, 95, 47, 57, 208, 157, 66, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__11_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(215, 88, 172, 225, 56, 154, 23, 10)}};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__11 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__6_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__12_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(146, 95, 47, 57, 208, 157, 66, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__12_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(144, 75, 207, 223, 242, 101, 87, 169)}};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__12_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lift"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__13 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__13_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "merge"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__14 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__14_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "onlyGivenNames"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__15 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__6_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__16_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__16_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(146, 95, 47, 57, 208, 157, 66, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__16_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__15_value),LEAN_SCALAR_PTR_LITERAL(11, 107, 77, 86, 119, 150, 185, 32)}};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__16 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__16_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__6_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__17_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__17_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(146, 95, 47, 57, 208, 157, 66, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__17_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__14_value),LEAN_SCALAR_PTR_LITERAL(58, 70, 65, 203, 53, 185, 57, 56)}};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__17 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__17_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__6_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__18_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__18_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(146, 95, 47, 57, 208, 157, 66, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__18_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(222, 214, 80, 45, 206, 182, 252, 196)}};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__18 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__18_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "config"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__19 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__19_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "descend"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__20 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__20_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "implicits"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__21 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__21_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__6_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__22_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__22_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(146, 95, 47, 57, 208, 157, 66, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__22_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__21_value),LEAN_SCALAR_PTR_LITERAL(106, 15, 76, 87, 16, 201, 16, 146)}};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__22 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__22_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__6_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__23_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__23_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(146, 95, 47, 57, 208, 157, 66, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__23_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__20_value),LEAN_SCALAR_PTR_LITERAL(69, 112, 9, 105, 11, 83, 6, 15)}};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__23 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__23_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabExtractLetsConfig(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabExtractLetsConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_evalExtractLets_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_evalExtractLets_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalExtractLets___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "`extract_lets` tactic failed"};
static const lean_object* l_Lean_Elab_Tactic_evalExtractLets___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalExtractLets___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_evalExtractLets___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalExtractLets___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExtractLets___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExtractLets___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExtractLets___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExtractLets___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExtractLets___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExtractLets___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExtractLets___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExtractLets___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExtractLets___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExtractLets___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_evalExtractLets_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_evalExtractLets_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalExtractLets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Tactic_evalExtractLets___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalExtractLets___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_evalExtractLets___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "extractLets"};
static const lean_object* l_Lean_Elab_Tactic_evalExtractLets___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalExtractLets___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalExtractLets___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__6_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalExtractLets___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalExtractLets___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExtractLets___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalExtractLets___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalExtractLets___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__8_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalExtractLets___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalExtractLets___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalExtractLets___closed__1_value),LEAN_SCALAR_PTR_LITERAL(101, 52, 152, 152, 121, 17, 54, 202)}};
static const lean_object* l_Lean_Elab_Tactic_evalExtractLets___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalExtractLets___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_evalExtractLets___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Elab_Tactic_evalExtractLets___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_evalExtractLets___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalExtractLets___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__6_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalExtractLets___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalExtractLets___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExtractLets___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalExtractLets___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalExtractLets___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__8_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalExtractLets___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalExtractLets___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalExtractLets___closed__3_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Lean_Elab_Tactic_evalExtractLets___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_evalExtractLets___closed__4_value;
static const lean_closure_object l_Lean_Elab_Tactic_evalExtractLets___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_evalExtractLets___lam__0___boxed, .m_arity = 10, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_evalExtractLets___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_evalExtractLets___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_evalExtractLets___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "location"};
static const lean_object* l_Lean_Elab_Tactic_evalExtractLets___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_evalExtractLets___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalExtractLets___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__6_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalExtractLets___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalExtractLets___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExtractLets___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalExtractLets___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalExtractLets___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__8_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalExtractLets___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalExtractLets___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalExtractLets___closed__6_value),LEAN_SCALAR_PTR_LITERAL(124, 82, 43, 228, 241, 102, 135, 24)}};
static const lean_object* l_Lean_Elab_Tactic_evalExtractLets___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_evalExtractLets___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExtractLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExtractLets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_evalExtractLets_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_evalExtractLets_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalExtractLets___regBuiltin_Lean_Elab_Tactic_evalExtractLets__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "evalExtractLets"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalExtractLets___regBuiltin_Lean_Elab_Tactic_evalExtractLets__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalExtractLets___regBuiltin_Lean_Elab_Tactic_evalExtractLets__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalExtractLets___regBuiltin_Lean_Elab_Tactic_evalExtractLets__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__6_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalExtractLets___regBuiltin_Lean_Elab_Tactic_evalExtractLets__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalExtractLets___regBuiltin_Lean_Elab_Tactic_evalExtractLets__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__7_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalExtractLets___regBuiltin_Lean_Elab_Tactic_evalExtractLets__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalExtractLets___regBuiltin_Lean_Elab_Tactic_evalExtractLets__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__8_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalExtractLets___regBuiltin_Lean_Elab_Tactic_evalExtractLets__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalExtractLets___regBuiltin_Lean_Elab_Tactic_evalExtractLets__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalExtractLets___regBuiltin_Lean_Elab_Tactic_evalExtractLets__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 187, 108, 174, 23, 225, 147, 32)}};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalExtractLets___regBuiltin_Lean_Elab_Tactic_evalExtractLets__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalExtractLets___regBuiltin_Lean_Elab_Tactic_evalExtractLets__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalExtractLets___regBuiltin_Lean_Elab_Tactic_evalExtractLets__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalExtractLets___regBuiltin_Lean_Elab_Tactic_evalExtractLets__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___closed__0;
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "LiftLetsConfig"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__6_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(15, 138, 90, 221, 135, 228, 98, 245)}};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem_spec__0___closed__0;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem_spec__0___closed__1;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem_spec__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___closed__2_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabLiftLetsConfig(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabLiftLetsConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalLiftLets___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "`lift_lets` tactic failed"};
static const lean_object* l_Lean_Elab_Tactic_evalLiftLets___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalLiftLets___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_evalLiftLets___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalLiftLets___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLiftLets___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLiftLets___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLiftLets___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLiftLets___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLiftLets___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLiftLets___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLiftLets___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLiftLets___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLiftLets___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLiftLets___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalLiftLets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "liftLets"};
static const lean_object* l_Lean_Elab_Tactic_evalLiftLets___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalLiftLets___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalLiftLets___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__6_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalLiftLets___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalLiftLets___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExtractLets___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalLiftLets___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalLiftLets___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__8_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalLiftLets___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalLiftLets___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalLiftLets___closed__0_value),LEAN_SCALAR_PTR_LITERAL(160, 154, 84, 113, 122, 200, 54, 62)}};
static const lean_object* l_Lean_Elab_Tactic_evalLiftLets___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalLiftLets___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_evalLiftLets___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_evalLiftLets___lam__0___boxed, .m_arity = 10, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_evalLiftLets___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalLiftLets___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLiftLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLiftLets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLiftLets___regBuiltin_Lean_Elab_Tactic_evalLiftLets__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "evalLiftLets"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLiftLets___regBuiltin_Lean_Elab_Tactic_evalLiftLets__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLiftLets___regBuiltin_Lean_Elab_Tactic_evalLiftLets__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLiftLets___regBuiltin_Lean_Elab_Tactic_evalLiftLets__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__6_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLiftLets___regBuiltin_Lean_Elab_Tactic_evalLiftLets__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLiftLets___regBuiltin_Lean_Elab_Tactic_evalLiftLets__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__7_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLiftLets___regBuiltin_Lean_Elab_Tactic_evalLiftLets__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLiftLets___regBuiltin_Lean_Elab_Tactic_evalLiftLets__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__8_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLiftLets___regBuiltin_Lean_Elab_Tactic_evalLiftLets__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLiftLets___regBuiltin_Lean_Elab_Tactic_evalLiftLets__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLiftLets___regBuiltin_Lean_Elab_Tactic_evalLiftLets__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(102, 204, 119, 233, 20, 201, 134, 20)}};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLiftLets___regBuiltin_Lean_Elab_Tactic_evalLiftLets__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLiftLets___regBuiltin_Lean_Elab_Tactic_evalLiftLets__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLiftLets___regBuiltin_Lean_Elab_Tactic_evalLiftLets__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLiftLets___regBuiltin_Lean_Elab_Tactic_evalLiftLets__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalLetToHave___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "`let_to_have` tactic failed"};
static const lean_object* l_Lean_Elab_Tactic_evalLetToHave___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalLetToHave___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_evalLetToHave___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalLetToHave___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLetToHave___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLetToHave___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLetToHave___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLetToHave___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLetToHave___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLetToHave___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLetToHave___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLetToHave___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalLetToHave___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letToHave"};
static const lean_object* l_Lean_Elab_Tactic_evalLetToHave___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalLetToHave___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalLetToHave___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__6_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalLetToHave___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalLetToHave___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExtractLets___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalLetToHave___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalLetToHave___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__8_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalLetToHave___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalLetToHave___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalLetToHave___closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 208, 147, 22, 140, 102, 111, 183)}};
static const lean_object* l_Lean_Elab_Tactic_evalLetToHave___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalLetToHave___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_evalLetToHave___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_evalLetToHave___lam__0___boxed, .m_arity = 10, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_evalLetToHave___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalLetToHave___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLetToHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLetToHave___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLetToHave___regBuiltin_Lean_Elab_Tactic_evalLetToHave__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "evalLetToHave"};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLetToHave___regBuiltin_Lean_Elab_Tactic_evalLetToHave__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLetToHave___regBuiltin_Lean_Elab_Tactic_evalLetToHave__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLetToHave___regBuiltin_Lean_Elab_Tactic_evalLetToHave__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__6_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLetToHave___regBuiltin_Lean_Elab_Tactic_evalLetToHave__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLetToHave___regBuiltin_Lean_Elab_Tactic_evalLetToHave__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__7_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLetToHave___regBuiltin_Lean_Elab_Tactic_evalLetToHave__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLetToHave___regBuiltin_Lean_Elab_Tactic_evalLetToHave__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__8_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLetToHave___regBuiltin_Lean_Elab_Tactic_evalLetToHave__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLetToHave___regBuiltin_Lean_Elab_Tactic_evalLetToHave__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLetToHave___regBuiltin_Lean_Elab_Tactic_evalLetToHave__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 67, 243, 172, 71, 255, 176, 225)}};
static const lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLetToHave___regBuiltin_Lean_Elab_Tactic_evalLetToHave__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLetToHave___regBuiltin_Lean_Elab_Tactic_evalLetToHave__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLetToHave___regBuiltin_Lean_Elab_Tactic_evalLetToHave__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLetToHave___regBuiltin_Lean_Elab_Tactic_evalLetToHave__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
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
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_58_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__3_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4_));
v___x_59_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__5_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4_));
v___x_60_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__9_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4_));
v___x_61_ = l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4__spec__0(v___x_58_, v___x_59_, v___x_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4____boxed(lean_object* v_a_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4_();
return v_res_63_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5_spec__7(lean_object* v_opts_64_, lean_object* v_opt_65_){
_start:
{
lean_object* v_name_66_; lean_object* v_defValue_67_; lean_object* v_map_68_; lean_object* v___x_69_; 
v_name_66_ = lean_ctor_get(v_opt_65_, 0);
v_defValue_67_ = lean_ctor_get(v_opt_65_, 1);
v_map_68_ = lean_ctor_get(v_opts_64_, 0);
v___x_69_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_68_, v_name_66_);
if (lean_obj_tag(v___x_69_) == 0)
{
uint8_t v___x_70_; 
v___x_70_ = lean_unbox(v_defValue_67_);
return v___x_70_;
}
else
{
lean_object* v_val_71_; 
v_val_71_ = lean_ctor_get(v___x_69_, 0);
lean_inc(v_val_71_);
lean_dec_ref_known(v___x_69_, 1);
if (lean_obj_tag(v_val_71_) == 1)
{
uint8_t v_v_72_; 
v_v_72_ = lean_ctor_get_uint8(v_val_71_, 0);
lean_dec_ref_known(v_val_71_, 0);
return v_v_72_;
}
else
{
uint8_t v___x_73_; 
lean_dec(v_val_71_);
v___x_73_ = lean_unbox(v_defValue_67_);
return v___x_73_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5_spec__7___boxed(lean_object* v_opts_74_, lean_object* v_opt_75_){
_start:
{
uint8_t v_res_76_; lean_object* v_r_77_; 
v_res_76_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5_spec__7(v_opts_74_, v_opt_75_);
lean_dec_ref(v_opt_75_);
lean_dec_ref(v_opts_74_);
v_r_77_ = lean_box(v_res_76_);
return v_r_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5_spec__6(lean_object* v_msgData_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_){
_start:
{
lean_object* v___x_84_; lean_object* v_env_85_; uint8_t v___x_86_; lean_object* v_env_87_; lean_object* v___x_88_; lean_object* v_toCold_89_; lean_object* v_mctx_90_; lean_object* v_lctx_91_; lean_object* v_options_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_84_ = lean_st_ref_get(v___y_82_);
v_env_85_ = lean_ctor_get(v___x_84_, 0);
lean_inc_ref(v_env_85_);
lean_dec(v___x_84_);
v___x_86_ = 0;
v_env_87_ = l_Lean_Environment_setRecordingDeps(v_env_85_, v___x_86_);
v___x_88_ = lean_st_ref_get(v___y_80_);
v_toCold_89_ = lean_ctor_get(v___y_81_, 0);
v_mctx_90_ = lean_ctor_get(v___x_88_, 0);
lean_inc_ref(v_mctx_90_);
lean_dec(v___x_88_);
v_lctx_91_ = lean_ctor_get(v___y_79_, 2);
v_options_92_ = lean_ctor_get(v_toCold_89_, 2);
lean_inc_ref(v_options_92_);
lean_inc_ref(v_lctx_91_);
v___x_93_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_93_, 0, v_env_87_);
lean_ctor_set(v___x_93_, 1, v_mctx_90_);
lean_ctor_set(v___x_93_, 2, v_lctx_91_);
lean_ctor_set(v___x_93_, 3, v_options_92_);
v___x_94_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
lean_ctor_set(v___x_94_, 1, v_msgData_78_);
v___x_95_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_95_, 0, v___x_94_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5_spec__6___boxed(lean_object* v_msgData_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5_spec__6(v_msgData_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_);
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
return v_res_102_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0(uint8_t v___x_109_, lean_object* v_x_110_){
_start:
{
if (lean_obj_tag(v_x_110_) == 1)
{
lean_object* v_pre_111_; 
v_pre_111_ = lean_ctor_get(v_x_110_, 0);
switch(lean_obj_tag(v_pre_111_))
{
case 1:
{
lean_object* v_pre_112_; 
v_pre_112_ = lean_ctor_get(v_pre_111_, 0);
switch(lean_obj_tag(v_pre_112_))
{
case 0:
{
lean_object* v_str_113_; lean_object* v_str_114_; lean_object* v___x_115_; uint8_t v___x_116_; 
v_str_113_ = lean_ctor_get(v_x_110_, 1);
v_str_114_ = lean_ctor_get(v_pre_111_, 1);
v___x_115_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__7_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4_));
v___x_116_ = lean_string_dec_eq(v_str_114_, v___x_115_);
if (v___x_116_ == 0)
{
lean_object* v___x_117_; uint8_t v___x_118_; 
v___x_117_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn___closed__8_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4_));
v___x_118_ = lean_string_dec_eq(v_str_114_, v___x_117_);
if (v___x_118_ == 0)
{
return v___x_118_;
}
else
{
lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_119_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___closed__0));
v___x_120_ = lean_string_dec_eq(v_str_113_, v___x_119_);
return v___x_120_;
}
}
else
{
lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_121_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___closed__1));
v___x_122_ = lean_string_dec_eq(v_str_113_, v___x_121_);
return v___x_122_;
}
}
case 1:
{
lean_object* v_pre_123_; 
v_pre_123_ = lean_ctor_get(v_pre_112_, 0);
if (lean_obj_tag(v_pre_123_) == 0)
{
lean_object* v_str_124_; lean_object* v_str_125_; lean_object* v_str_126_; lean_object* v___x_127_; uint8_t v___x_128_; 
v_str_124_ = lean_ctor_get(v_x_110_, 1);
v_str_125_ = lean_ctor_get(v_pre_111_, 1);
v_str_126_ = lean_ctor_get(v_pre_112_, 1);
v___x_127_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___closed__2));
v___x_128_ = lean_string_dec_eq(v_str_126_, v___x_127_);
if (v___x_128_ == 0)
{
return v___x_128_;
}
else
{
lean_object* v___x_129_; uint8_t v___x_130_; 
v___x_129_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___closed__3));
v___x_130_ = lean_string_dec_eq(v_str_125_, v___x_129_);
if (v___x_130_ == 0)
{
return v___x_130_;
}
else
{
lean_object* v___x_131_; uint8_t v___x_132_; 
v___x_131_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___closed__4));
v___x_132_ = lean_string_dec_eq(v_str_124_, v___x_131_);
return v___x_132_;
}
}
}
else
{
return v___x_109_;
}
}
default: 
{
return v___x_109_;
}
}
}
case 0:
{
lean_object* v_str_133_; lean_object* v___x_134_; uint8_t v___x_135_; 
v_str_133_ = lean_ctor_get(v_x_110_, 1);
v___x_134_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___closed__5));
v___x_135_ = lean_string_dec_eq(v_str_133_, v___x_134_);
return v___x_135_;
}
default: 
{
return v___x_109_;
}
}
}
else
{
return v___x_109_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0___boxed(lean_object* v___x_136_, lean_object* v_x_137_){
_start:
{
uint8_t v___x_6552__boxed_138_; uint8_t v_res_139_; lean_object* v_r_140_; 
v___x_6552__boxed_138_ = lean_unbox(v___x_136_);
v_res_139_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___lam__0(v___x_6552__boxed_138_, v_x_137_);
lean_dec(v_x_137_);
v_r_140_ = lean_box(v_res_139_);
return v_r_140_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg(lean_object* v_ref_145_, lean_object* v_msgData_146_, uint8_t v_severity_147_, uint8_t v_isSilent_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_){
_start:
{
uint8_t v___y_155_; lean_object* v___y_156_; uint8_t v___y_157_; lean_object* v___y_158_; lean_object* v___y_159_; lean_object* v___y_160_; lean_object* v___y_161_; lean_object* v_toCold_162_; lean_object* v___y_163_; lean_object* v___y_192_; lean_object* v___y_193_; uint8_t v___y_194_; uint8_t v___y_195_; uint8_t v___y_196_; lean_object* v___y_197_; lean_object* v___y_198_; lean_object* v___y_199_; uint8_t v___y_219_; lean_object* v___y_220_; lean_object* v___y_221_; uint8_t v___y_222_; lean_object* v___y_223_; uint8_t v___y_224_; lean_object* v___y_225_; uint8_t v___y_229_; uint8_t v___x_246_; uint8_t v___x_247_; 
v___x_246_ = 2;
v___x_247_ = l_Lean_instBEqMessageSeverity_beq(v_severity_147_, v___x_246_);
if (v___x_247_ == 0)
{
goto v___jp_239_;
}
else
{
uint8_t v___x_248_; 
lean_inc_ref(v_msgData_146_);
v___x_248_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_146_);
if (v___x_248_ == 0)
{
goto v___jp_239_;
}
else
{
lean_object* v___x_249_; lean_object* v___x_250_; 
lean_dec_ref(v_msgData_146_);
v___x_249_ = lean_box(0);
v___x_250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_250_, 0, v___x_249_);
return v___x_250_;
}
}
v___jp_154_:
{
lean_object* v_currNamespace_164_; lean_object* v_openDecls_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v_env_170_; lean_object* v_nextMacroScope_171_; lean_object* v_ngen_172_; lean_object* v_auxDeclNGen_173_; lean_object* v_traceState_174_; lean_object* v_cache_175_; lean_object* v_recordedDeps_176_; lean_object* v_messages_177_; lean_object* v_infoState_178_; lean_object* v_snapshotTasks_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_190_; 
v_currNamespace_164_ = lean_ctor_get(v_toCold_162_, 4);
v_openDecls_165_ = lean_ctor_get(v_toCold_162_, 5);
lean_inc(v_openDecls_165_);
lean_inc(v_currNamespace_164_);
v___x_166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_166_, 0, v_currNamespace_164_);
lean_ctor_set(v___x_166_, 1, v_openDecls_165_);
v___x_167_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_167_, 0, v___x_166_);
lean_ctor_set(v___x_167_, 1, v___y_160_);
lean_inc_ref(v___y_156_);
lean_inc_ref(v___y_158_);
v___x_168_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_168_, 0, v___y_158_);
lean_ctor_set(v___x_168_, 1, v___y_159_);
lean_ctor_set(v___x_168_, 2, v___y_161_);
lean_ctor_set(v___x_168_, 3, v___y_156_);
lean_ctor_set(v___x_168_, 4, v___x_167_);
lean_ctor_set_uint8(v___x_168_, sizeof(void*)*5, v___y_157_);
lean_ctor_set_uint8(v___x_168_, sizeof(void*)*5 + 1, v___y_155_);
lean_ctor_set_uint8(v___x_168_, sizeof(void*)*5 + 2, v_isSilent_148_);
v___x_169_ = lean_st_ref_take(v___y_163_);
v_env_170_ = lean_ctor_get(v___x_169_, 0);
v_nextMacroScope_171_ = lean_ctor_get(v___x_169_, 1);
v_ngen_172_ = lean_ctor_get(v___x_169_, 2);
v_auxDeclNGen_173_ = lean_ctor_get(v___x_169_, 3);
v_traceState_174_ = lean_ctor_get(v___x_169_, 4);
v_cache_175_ = lean_ctor_get(v___x_169_, 5);
v_recordedDeps_176_ = lean_ctor_get(v___x_169_, 6);
v_messages_177_ = lean_ctor_get(v___x_169_, 7);
v_infoState_178_ = lean_ctor_get(v___x_169_, 8);
v_snapshotTasks_179_ = lean_ctor_get(v___x_169_, 9);
v_isSharedCheck_190_ = !lean_is_exclusive(v___x_169_);
if (v_isSharedCheck_190_ == 0)
{
v___x_181_ = v___x_169_;
v_isShared_182_ = v_isSharedCheck_190_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_snapshotTasks_179_);
lean_inc(v_infoState_178_);
lean_inc(v_messages_177_);
lean_inc(v_recordedDeps_176_);
lean_inc(v_cache_175_);
lean_inc(v_traceState_174_);
lean_inc(v_auxDeclNGen_173_);
lean_inc(v_ngen_172_);
lean_inc(v_nextMacroScope_171_);
lean_inc(v_env_170_);
lean_dec(v___x_169_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_190_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_186_; 
v___x_183_ = lean_box(0);
v___x_184_ = l_Lean_MessageLog_add(v___x_168_, v_messages_177_);
if (v_isShared_182_ == 0)
{
lean_ctor_set(v___x_181_, 7, v___x_184_);
v___x_186_ = v___x_181_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v_env_170_);
lean_ctor_set(v_reuseFailAlloc_189_, 1, v_nextMacroScope_171_);
lean_ctor_set(v_reuseFailAlloc_189_, 2, v_ngen_172_);
lean_ctor_set(v_reuseFailAlloc_189_, 3, v_auxDeclNGen_173_);
lean_ctor_set(v_reuseFailAlloc_189_, 4, v_traceState_174_);
lean_ctor_set(v_reuseFailAlloc_189_, 5, v_cache_175_);
lean_ctor_set(v_reuseFailAlloc_189_, 6, v_recordedDeps_176_);
lean_ctor_set(v_reuseFailAlloc_189_, 7, v___x_184_);
lean_ctor_set(v_reuseFailAlloc_189_, 8, v_infoState_178_);
lean_ctor_set(v_reuseFailAlloc_189_, 9, v_snapshotTasks_179_);
v___x_186_ = v_reuseFailAlloc_189_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_187_ = lean_st_ref_put(v___y_163_, v___x_186_);
v___x_188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_188_, 0, v___x_183_);
return v___x_188_;
}
}
}
v___jp_191_:
{
lean_object* v_fileName_200_; lean_object* v_fileMap_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v_a_204_; lean_object* v___x_206_; uint8_t v_isShared_207_; uint8_t v_isSharedCheck_217_; 
v_fileName_200_ = lean_ctor_get(v___y_198_, 0);
v_fileMap_201_ = lean_ctor_get(v___y_198_, 1);
v___x_202_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_146_);
v___x_203_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5_spec__6(v___x_202_, v___y_149_, v___y_150_, v___y_151_, v___y_152_);
v_a_204_ = lean_ctor_get(v___x_203_, 0);
v_isSharedCheck_217_ = !lean_is_exclusive(v___x_203_);
if (v_isSharedCheck_217_ == 0)
{
v___x_206_ = v___x_203_;
v_isShared_207_ = v_isSharedCheck_217_;
goto v_resetjp_205_;
}
else
{
lean_inc(v_a_204_);
lean_dec(v___x_203_);
v___x_206_ = lean_box(0);
v_isShared_207_ = v_isSharedCheck_217_;
goto v_resetjp_205_;
}
v_resetjp_205_:
{
lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
lean_inc_ref_n(v_fileMap_201_, 2);
v___x_208_ = l_Lean_FileMap_toPosition(v_fileMap_201_, v___y_197_);
lean_dec(v___y_197_);
v___x_209_ = l_Lean_FileMap_toPosition(v_fileMap_201_, v___y_199_);
lean_dec(v___y_199_);
v___x_210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_210_, 0, v___x_209_);
v___x_211_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___closed__0));
if (v___y_196_ == 0)
{
lean_del_object(v___x_206_);
v___y_155_ = v___y_194_;
v___y_156_ = v___x_211_;
v___y_157_ = v___y_195_;
v___y_158_ = v_fileName_200_;
v___y_159_ = v___x_208_;
v___y_160_ = v_a_204_;
v___y_161_ = v___x_210_;
v_toCold_162_ = v___y_193_;
v___y_163_ = v___y_152_;
goto v___jp_154_;
}
else
{
uint8_t v___x_212_; 
lean_inc(v_a_204_);
lean_inc_ref(v___y_192_);
v___x_212_ = l_Lean_MessageData_hasTag(v___y_192_, v_a_204_);
if (v___x_212_ == 0)
{
lean_object* v___x_213_; lean_object* v___x_215_; 
lean_dec_ref_known(v___x_210_, 1);
lean_dec_ref(v___x_208_);
lean_dec(v_a_204_);
v___x_213_ = lean_box(0);
if (v_isShared_207_ == 0)
{
lean_ctor_set(v___x_206_, 0, v___x_213_);
v___x_215_ = v___x_206_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v___x_213_);
v___x_215_ = v_reuseFailAlloc_216_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
return v___x_215_;
}
}
else
{
lean_del_object(v___x_206_);
v___y_155_ = v___y_194_;
v___y_156_ = v___x_211_;
v___y_157_ = v___y_195_;
v___y_158_ = v_fileName_200_;
v___y_159_ = v___x_208_;
v___y_160_ = v_a_204_;
v___y_161_ = v___x_210_;
v_toCold_162_ = v___y_193_;
v___y_163_ = v___y_152_;
goto v___jp_154_;
}
}
}
}
v___jp_218_:
{
lean_object* v___x_226_; 
v___x_226_ = l_Lean_Syntax_getTailPos_x3f(v___y_221_, v___y_219_);
lean_dec(v___y_221_);
if (lean_obj_tag(v___x_226_) == 0)
{
lean_inc(v___y_225_);
v___y_192_ = v___y_220_;
v___y_193_ = v___y_223_;
v___y_194_ = v___y_224_;
v___y_195_ = v___y_219_;
v___y_196_ = v___y_222_;
v___y_197_ = v___y_225_;
v___y_198_ = v___y_223_;
v___y_199_ = v___y_225_;
goto v___jp_191_;
}
else
{
lean_object* v_val_227_; 
v_val_227_ = lean_ctor_get(v___x_226_, 0);
lean_inc(v_val_227_);
lean_dec_ref_known(v___x_226_, 1);
v___y_192_ = v___y_220_;
v___y_193_ = v___y_223_;
v___y_194_ = v___y_224_;
v___y_195_ = v___y_219_;
v___y_196_ = v___y_222_;
v___y_197_ = v___y_225_;
v___y_198_ = v___y_223_;
v___y_199_ = v_val_227_;
goto v___jp_191_;
}
}
v___jp_228_:
{
lean_object* v_toCold_230_; lean_object* v_ref_231_; uint8_t v_suppressElabErrors_232_; lean_object* v_ref_233_; uint8_t v___x_234_; lean_object* v___f_235_; lean_object* v___x_236_; 
v_toCold_230_ = lean_ctor_get(v___y_151_, 0);
v_ref_231_ = lean_ctor_get(v___y_151_, 2);
v_suppressElabErrors_232_ = lean_ctor_get_uint8(v___y_151_, sizeof(void*)*3 + 2);
v_ref_233_ = l_Lean_replaceRef(v_ref_145_, v_ref_231_);
v___x_234_ = 0;
v___f_235_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___closed__1));
v___x_236_ = l_Lean_Syntax_getPos_x3f(v_ref_233_, v___x_234_);
if (lean_obj_tag(v___x_236_) == 0)
{
lean_object* v___x_237_; 
v___x_237_ = lean_unsigned_to_nat(0u);
v___y_219_ = v___x_234_;
v___y_220_ = v___f_235_;
v___y_221_ = v_ref_233_;
v___y_222_ = v_suppressElabErrors_232_;
v___y_223_ = v_toCold_230_;
v___y_224_ = v___y_229_;
v___y_225_ = v___x_237_;
goto v___jp_218_;
}
else
{
lean_object* v_val_238_; 
v_val_238_ = lean_ctor_get(v___x_236_, 0);
lean_inc(v_val_238_);
lean_dec_ref_known(v___x_236_, 1);
v___y_219_ = v___x_234_;
v___y_220_ = v___f_235_;
v___y_221_ = v_ref_233_;
v___y_222_ = v_suppressElabErrors_232_;
v___y_223_ = v_toCold_230_;
v___y_224_ = v___y_229_;
v___y_225_ = v_val_238_;
goto v___jp_218_;
}
}
v___jp_239_:
{
uint8_t v___x_240_; uint8_t v___x_241_; 
v___x_240_ = 1;
v___x_241_ = l_Lean_instBEqMessageSeverity_beq(v_severity_147_, v___x_240_);
if (v___x_241_ == 0)
{
v___y_229_ = v_severity_147_;
goto v___jp_228_;
}
else
{
lean_object* v___x_242_; lean_object* v___x_243_; uint8_t v___x_244_; 
v___x_242_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_151_);
v___x_243_ = l_Lean_warningAsError;
v___x_244_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5_spec__7(v___x_242_, v___x_243_);
lean_dec_ref(v___x_242_);
if (v___x_244_ == 0)
{
v___y_229_ = v_severity_147_;
goto v___jp_228_;
}
else
{
uint8_t v___x_245_; 
v___x_245_ = 2;
v___y_229_ = v___x_245_;
goto v___jp_228_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg___boxed(lean_object* v_ref_251_, lean_object* v_msgData_252_, lean_object* v_severity_253_, lean_object* v_isSilent_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_){
_start:
{
uint8_t v_severity_boxed_260_; uint8_t v_isSilent_boxed_261_; lean_object* v_res_262_; 
v_severity_boxed_260_ = lean_unbox(v_severity_253_);
v_isSilent_boxed_261_ = lean_unbox(v_isSilent_254_);
v_res_262_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg(v_ref_251_, v_msgData_252_, v_severity_boxed_260_, v_isSilent_boxed_261_, v___y_255_, v___y_256_, v___y_257_, v___y_258_);
lean_dec(v___y_258_);
lean_dec_ref(v___y_257_);
lean_dec(v___y_256_);
lean_dec_ref(v___y_255_);
lean_dec(v_ref_251_);
return v_res_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3(lean_object* v_ref_263_, lean_object* v_msgData_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_){
_start:
{
uint8_t v___x_274_; uint8_t v___x_275_; lean_object* v___x_276_; 
v___x_274_ = 1;
v___x_275_ = 0;
v___x_276_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg(v_ref_263_, v_msgData_264_, v___x_274_, v___x_275_, v___y_269_, v___y_270_, v___y_271_, v___y_272_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3___boxed(lean_object* v_ref_277_, lean_object* v_msgData_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3(v_ref_277_, v_msgData_278_, v___y_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_);
lean_dec(v___y_286_);
lean_dec_ref(v___y_285_);
lean_dec(v___y_284_);
lean_dec_ref(v___y_283_);
lean_dec(v___y_282_);
lean_dec_ref(v___y_281_);
lean_dec(v___y_280_);
lean_dec_ref(v___y_279_);
lean_dec(v_ref_277_);
return v_res_288_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_290_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1___closed__0));
v___x_291_ = l_Lean_stringToMessageData(v___x_290_);
return v___x_291_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1___closed__3(void){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_293_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1___closed__2));
v___x_294_ = l_Lean_stringToMessageData(v___x_293_);
return v___x_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1(lean_object* v_linterOption_295_, lean_object* v_stx_296_, lean_object* v_msg_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_){
_start:
{
lean_object* v_name_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_325_; 
v_name_307_ = lean_ctor_get(v_linterOption_295_, 0);
v_isSharedCheck_325_ = !lean_is_exclusive(v_linterOption_295_);
if (v_isSharedCheck_325_ == 0)
{
lean_object* v_unused_326_; 
v_unused_326_ = lean_ctor_get(v_linterOption_295_, 1);
lean_dec(v_unused_326_);
v___x_309_ = v_linterOption_295_;
v_isShared_310_ = v_isSharedCheck_325_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_name_307_);
lean_dec(v_linterOption_295_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_325_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_314_; 
v___x_311_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1___closed__1, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1___closed__1_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1___closed__1);
lean_inc(v_name_307_);
v___x_312_ = l_Lean_MessageData_ofName(v_name_307_);
if (v_isShared_310_ == 0)
{
lean_ctor_set_tag(v___x_309_, 7);
lean_ctor_set(v___x_309_, 1, v___x_312_);
lean_ctor_set(v___x_309_, 0, v___x_311_);
v___x_314_ = v___x_309_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v___x_311_);
lean_ctor_set(v_reuseFailAlloc_324_, 1, v___x_312_);
v___x_314_ = v_reuseFailAlloc_324_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v_disable_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_315_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1___closed__3, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1___closed__3_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1___closed__3);
v___x_316_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_316_, 0, v___x_314_);
lean_ctor_set(v___x_316_, 1, v___x_315_);
v_disable_317_ = l_Lean_MessageData_note(v___x_316_);
v___x_318_ = l_Lean_Linter_linterMessageTag;
v___x_319_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_319_, 0, v_msg_297_);
lean_ctor_set(v___x_319_, 1, v_disable_317_);
v___x_320_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_320_, 0, v___x_318_);
lean_ctor_set(v___x_320_, 1, v___x_319_);
v___x_321_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_321_, 0, v_name_307_);
lean_ctor_set(v___x_321_, 1, v___x_320_);
lean_inc(v_stx_296_);
v___x_322_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_322_, 0, v_stx_296_);
lean_ctor_set(v___x_322_, 1, v___x_321_);
v___x_323_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3(v_stx_296_, v___x_322_, v___y_298_, v___y_299_, v___y_300_, v___y_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_);
lean_dec(v_stx_296_);
return v___x_323_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1___boxed(lean_object* v_linterOption_327_, lean_object* v_stx_328_, lean_object* v_msg_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1(v_linterOption_327_, v_stx_328_, v_msg_329_, v___y_330_, v___y_331_, v___y_332_, v___y_333_, v___y_334_, v___y_335_, v___y_336_, v___y_337_);
lean_dec(v___y_337_);
lean_dec_ref(v___y_336_);
lean_dec(v___y_335_);
lean_dec_ref(v___y_334_);
lean_dec(v___y_333_);
lean_dec_ref(v___y_332_);
lean_dec(v___y_331_);
lean_dec_ref(v___y_330_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__0_spec__1___redArg(lean_object* v_o_340_, lean_object* v___y_341_){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v_env_345_; lean_object* v___x_346_; lean_object* v_toEnvExtension_347_; lean_object* v_asyncMode_348_; lean_object* v___x_349_; uint8_t v___x_350_; lean_object* v___x_351_; lean_object* v_merged_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_360_; 
v___x_343_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_344_ = lean_st_ref_get(v___y_341_);
v_env_345_ = lean_ctor_get(v___x_344_, 0);
lean_inc_ref(v_env_345_);
lean_dec(v___x_344_);
v___x_346_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_347_ = lean_ctor_get(v___x_346_, 0);
v_asyncMode_348_ = lean_ctor_get(v_toEnvExtension_347_, 2);
v___x_349_ = lean_box(0);
v___x_350_ = 0;
v___x_351_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_343_, v___x_346_, v_env_345_, v_asyncMode_348_, v___x_349_, v___x_350_);
v_merged_352_ = lean_ctor_get(v___x_351_, 0);
v_isSharedCheck_360_ = !lean_is_exclusive(v___x_351_);
if (v_isSharedCheck_360_ == 0)
{
lean_object* v_unused_361_; 
v_unused_361_ = lean_ctor_get(v___x_351_, 1);
lean_dec(v_unused_361_);
v___x_354_ = v___x_351_;
v_isShared_355_ = v_isSharedCheck_360_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_merged_352_);
lean_dec(v___x_351_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_360_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_357_; 
if (v_isShared_355_ == 0)
{
lean_ctor_set(v___x_354_, 1, v_merged_352_);
lean_ctor_set(v___x_354_, 0, v_o_340_);
v___x_357_ = v___x_354_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v_o_340_);
lean_ctor_set(v_reuseFailAlloc_359_, 1, v_merged_352_);
v___x_357_ = v_reuseFailAlloc_359_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
lean_object* v___x_358_; 
v___x_358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_358_, 0, v___x_357_);
return v___x_358_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_o_362_, lean_object* v___y_363_, lean_object* v___y_364_){
_start:
{
lean_object* v_res_365_; 
v_res_365_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__0_spec__1___redArg(v_o_362_, v___y_363_);
lean_dec(v___y_363_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__0(lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_372_);
v___x_376_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__0_spec__1___redArg(v___x_375_, v___y_373_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__0___boxed(lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_){
_start:
{
lean_object* v_res_386_; 
v_res_386_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__0(v___y_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_);
lean_dec(v___y_384_);
lean_dec_ref(v___y_383_);
lean_dec(v___y_382_);
lean_dec_ref(v___y_381_);
lean_dec(v___y_380_);
lean_dec_ref(v___y_379_);
lean_dec(v___y_378_);
lean_dec_ref(v___y_377_);
return v_res_386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0(lean_object* v_linterOption_387_, lean_object* v_stx_388_, lean_object* v_msg_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_){
_start:
{
lean_object* v___x_399_; lean_object* v_a_400_; lean_object* v___x_402_; uint8_t v_isShared_403_; uint8_t v_isSharedCheck_410_; 
v___x_399_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__0(v___y_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_, v___y_397_);
v_a_400_ = lean_ctor_get(v___x_399_, 0);
v_isSharedCheck_410_ = !lean_is_exclusive(v___x_399_);
if (v_isSharedCheck_410_ == 0)
{
v___x_402_ = v___x_399_;
v_isShared_403_ = v_isSharedCheck_410_;
goto v_resetjp_401_;
}
else
{
lean_inc(v_a_400_);
lean_dec(v___x_399_);
v___x_402_ = lean_box(0);
v_isShared_403_ = v_isSharedCheck_410_;
goto v_resetjp_401_;
}
v_resetjp_401_:
{
uint8_t v___x_404_; 
v___x_404_ = l_Lean_Linter_getLinterValue(v_linterOption_387_, v_a_400_);
lean_dec(v_a_400_);
if (v___x_404_ == 0)
{
lean_object* v___x_405_; lean_object* v___x_407_; 
lean_dec_ref(v_msg_389_);
lean_dec(v_stx_388_);
lean_dec_ref(v_linterOption_387_);
v___x_405_ = lean_box(0);
if (v_isShared_403_ == 0)
{
lean_ctor_set(v___x_402_, 0, v___x_405_);
v___x_407_ = v___x_402_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v___x_405_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
else
{
lean_object* v___x_409_; 
lean_del_object(v___x_402_);
v___x_409_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1(v_linterOption_387_, v_stx_388_, v_msg_389_, v___y_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_, v___y_397_);
return v___x_409_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0___boxed(lean_object* v_linterOption_411_, lean_object* v_stx_412_, lean_object* v_msg_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0(v_linterOption_411_, v_stx_412_, v_msg_413_, v___y_414_, v___y_415_, v___y_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
lean_dec(v___y_419_);
lean_dec_ref(v___y_418_);
lean_dec(v___y_417_);
lean_dec_ref(v___y_416_);
lean_dec(v___y_415_);
lean_dec_ref(v___y_414_);
return v_res_423_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_425_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__1___redArg___closed__0));
v___x_426_ = l_Lean_stringToMessageData(v___x_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__1___redArg(lean_object* v_upperBound_427_, lean_object* v_fvars_428_, lean_object* v_ids_429_, lean_object* v_a_430_, lean_object* v_b_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_){
_start:
{
lean_object* v_a_442_; uint8_t v___x_446_; 
v___x_446_ = lean_nat_dec_lt(v_a_430_, v_upperBound_427_);
if (v___x_446_ == 0)
{
lean_object* v___x_447_; 
lean_dec(v_a_430_);
v___x_447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_447_, 0, v_b_431_);
return v___x_447_;
}
else
{
lean_object* v___x_448_; lean_object* v___x_449_; uint8_t v___x_450_; 
v___x_448_ = lean_box(0);
v___x_449_ = lean_array_get_size(v_fvars_428_);
v___x_450_ = lean_nat_dec_lt(v_a_430_, v___x_449_);
if (v___x_450_ == 0)
{
lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_451_ = l_Lean_Elab_Tactic_linter_tactic_unusedName;
v___x_452_ = lean_array_fget_borrowed(v_ids_429_, v_a_430_);
v___x_453_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__1___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__1___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__1___redArg___closed__1);
lean_inc(v___x_452_);
v___x_454_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0(v___x_451_, v___x_452_, v___x_453_, v___y_432_, v___y_433_, v___y_434_, v___y_435_, v___y_436_, v___y_437_, v___y_438_, v___y_439_);
if (lean_obj_tag(v___x_454_) == 0)
{
lean_dec_ref_known(v___x_454_, 1);
v_a_442_ = v___x_448_;
goto v___jp_441_;
}
else
{
lean_dec(v_a_430_);
return v___x_454_;
}
}
else
{
lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_455_ = lean_array_fget_borrowed(v_ids_429_, v_a_430_);
v___x_456_ = lean_array_fget_borrowed(v_fvars_428_, v_a_430_);
lean_inc(v___x_456_);
v___x_457_ = l_Lean_mkFVar(v___x_456_);
lean_inc(v___x_455_);
v___x_458_ = l_Lean_Elab_Term_addLocalVarInfo(v___x_455_, v___x_457_, v___y_434_, v___y_435_, v___y_436_, v___y_437_, v___y_438_, v___y_439_);
if (lean_obj_tag(v___x_458_) == 0)
{
lean_dec_ref_known(v___x_458_, 1);
v_a_442_ = v___x_448_;
goto v___jp_441_;
}
else
{
lean_dec(v_a_430_);
return v___x_458_;
}
}
}
v___jp_441_:
{
lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_443_ = lean_unsigned_to_nat(1u);
v___x_444_ = lean_nat_add(v_a_430_, v___x_443_);
lean_dec(v_a_430_);
v_a_430_ = v___x_444_;
v_b_431_ = v_a_442_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__1___redArg___boxed(lean_object* v_upperBound_459_, lean_object* v_fvars_460_, lean_object* v_ids_461_, lean_object* v_a_462_, lean_object* v_b_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__1___redArg(v_upperBound_459_, v_fvars_460_, v_ids_461_, v_a_462_, v_b_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_);
lean_dec(v___y_471_);
lean_dec_ref(v___y_470_);
lean_dec(v___y_469_);
lean_dec_ref(v___y_468_);
lean_dec(v___y_467_);
lean_dec_ref(v___y_466_);
lean_dec(v___y_465_);
lean_dec_ref(v___y_464_);
lean_dec_ref(v_ids_461_);
lean_dec_ref(v_fvars_460_);
lean_dec(v_upperBound_459_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_extractLetsAddVarInfo___lam__0(lean_object* v___x_474_, lean_object* v_fvars_475_, lean_object* v_ids_476_, lean_object* v___x_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_){
_start:
{
lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_487_ = lean_unsigned_to_nat(0u);
v___x_488_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__1___redArg(v___x_474_, v_fvars_475_, v_ids_476_, v___x_487_, v___x_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_, v___y_485_);
if (lean_obj_tag(v___x_488_) == 0)
{
lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_495_; 
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_488_);
if (v_isSharedCheck_495_ == 0)
{
lean_object* v_unused_496_; 
v_unused_496_ = lean_ctor_get(v___x_488_, 0);
lean_dec(v_unused_496_);
v___x_490_ = v___x_488_;
v_isShared_491_ = v_isSharedCheck_495_;
goto v_resetjp_489_;
}
else
{
lean_dec(v___x_488_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_495_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___x_493_; 
if (v_isShared_491_ == 0)
{
lean_ctor_set(v___x_490_, 0, v___x_477_);
v___x_493_ = v___x_490_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v___x_477_);
v___x_493_ = v_reuseFailAlloc_494_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
return v___x_493_;
}
}
}
else
{
return v___x_488_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_extractLetsAddVarInfo___lam__0___boxed(lean_object* v___x_497_, lean_object* v_fvars_498_, lean_object* v_ids_499_, lean_object* v___x_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_){
_start:
{
lean_object* v_res_510_; 
v_res_510_ = l_Lean_Elab_Tactic_extractLetsAddVarInfo___lam__0(v___x_497_, v_fvars_498_, v_ids_499_, v___x_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_, v___y_505_, v___y_506_, v___y_507_, v___y_508_);
lean_dec(v___y_508_);
lean_dec_ref(v___y_507_);
lean_dec(v___y_506_);
lean_dec_ref(v___y_505_);
lean_dec(v___y_504_);
lean_dec_ref(v___y_503_);
lean_dec(v___y_502_);
lean_dec_ref(v___y_501_);
lean_dec_ref(v_ids_499_);
lean_dec_ref(v_fvars_498_);
lean_dec(v___x_497_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_extractLetsAddVarInfo(lean_object* v_ids_511_, lean_object* v_fvars_512_, lean_object* v_a_513_, lean_object* v_a_514_, lean_object* v_a_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_){
_start:
{
lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___f_524_; lean_object* v___x_525_; 
v___x_522_ = lean_array_get_size(v_ids_511_);
v___x_523_ = lean_box(0);
v___f_524_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_extractLetsAddVarInfo___lam__0___boxed), 13, 4);
lean_closure_set(v___f_524_, 0, v___x_522_);
lean_closure_set(v___f_524_, 1, v_fvars_512_);
lean_closure_set(v___f_524_, 2, v_ids_511_);
lean_closure_set(v___f_524_, 3, v___x_523_);
v___x_525_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_524_, v_a_513_, v_a_514_, v_a_515_, v_a_516_, v_a_517_, v_a_518_, v_a_519_, v_a_520_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_extractLetsAddVarInfo___boxed(lean_object* v_ids_526_, lean_object* v_fvars_527_, lean_object* v_a_528_, lean_object* v_a_529_, lean_object* v_a_530_, lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_533_, lean_object* v_a_534_, lean_object* v_a_535_, lean_object* v_a_536_){
_start:
{
lean_object* v_res_537_; 
v_res_537_ = l_Lean_Elab_Tactic_extractLetsAddVarInfo(v_ids_526_, v_fvars_527_, v_a_528_, v_a_529_, v_a_530_, v_a_531_, v_a_532_, v_a_533_, v_a_534_, v_a_535_);
lean_dec(v_a_535_);
lean_dec_ref(v_a_534_);
lean_dec(v_a_533_);
lean_dec_ref(v_a_532_);
lean_dec(v_a_531_);
lean_dec_ref(v_a_530_);
lean_dec(v_a_529_);
lean_dec_ref(v_a_528_);
return v_res_537_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__1(lean_object* v_upperBound_538_, lean_object* v_fvars_539_, lean_object* v_ids_540_, lean_object* v_inst_541_, lean_object* v_R_542_, lean_object* v_a_543_, lean_object* v_b_544_, lean_object* v_c_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_){
_start:
{
lean_object* v___x_555_; 
v___x_555_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__1___redArg(v_upperBound_538_, v_fvars_539_, v_ids_540_, v_a_543_, v_b_544_, v___y_546_, v___y_547_, v___y_548_, v___y_549_, v___y_550_, v___y_551_, v___y_552_, v___y_553_);
return v___x_555_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__1___boxed(lean_object** _args){
lean_object* v_upperBound_556_ = _args[0];
lean_object* v_fvars_557_ = _args[1];
lean_object* v_ids_558_ = _args[2];
lean_object* v_inst_559_ = _args[3];
lean_object* v_R_560_ = _args[4];
lean_object* v_a_561_ = _args[5];
lean_object* v_b_562_ = _args[6];
lean_object* v_c_563_ = _args[7];
lean_object* v___y_564_ = _args[8];
lean_object* v___y_565_ = _args[9];
lean_object* v___y_566_ = _args[10];
lean_object* v___y_567_ = _args[11];
lean_object* v___y_568_ = _args[12];
lean_object* v___y_569_ = _args[13];
lean_object* v___y_570_ = _args[14];
lean_object* v___y_571_ = _args[15];
lean_object* v___y_572_ = _args[16];
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__1(v_upperBound_556_, v_fvars_557_, v_ids_558_, v_inst_559_, v_R_560_, v_a_561_, v_b_562_, v_c_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_, v___y_568_, v___y_569_, v___y_570_, v___y_571_);
lean_dec(v___y_571_);
lean_dec_ref(v___y_570_);
lean_dec(v___y_569_);
lean_dec_ref(v___y_568_);
lean_dec(v___y_567_);
lean_dec_ref(v___y_566_);
lean_dec(v___y_565_);
lean_dec_ref(v___y_564_);
lean_dec_ref(v_ids_558_);
lean_dec_ref(v_fvars_557_);
lean_dec(v_upperBound_556_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__0_spec__1(lean_object* v_o_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_){
_start:
{
lean_object* v___x_584_; 
v___x_584_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__0_spec__1___redArg(v_o_574_, v___y_582_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__0_spec__1___boxed(lean_object* v_o_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_){
_start:
{
lean_object* v_res_595_; 
v_res_595_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__0_spec__1(v_o_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
lean_dec(v___y_593_);
lean_dec_ref(v___y_592_);
lean_dec(v___y_591_);
lean_dec_ref(v___y_590_);
lean_dec(v___y_589_);
lean_dec_ref(v___y_588_);
lean_dec(v___y_587_);
lean_dec_ref(v___y_586_);
return v_res_595_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5(lean_object* v_ref_596_, lean_object* v_msgData_597_, uint8_t v_severity_598_, uint8_t v_isSilent_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_){
_start:
{
lean_object* v___x_609_; 
v___x_609_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___redArg(v_ref_596_, v_msgData_597_, v_severity_598_, v_isSilent_599_, v___y_604_, v___y_605_, v___y_606_, v___y_607_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5___boxed(lean_object* v_ref_610_, lean_object* v_msgData_611_, lean_object* v_severity_612_, lean_object* v_isSilent_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_){
_start:
{
uint8_t v_severity_boxed_623_; uint8_t v_isSilent_boxed_624_; lean_object* v_res_625_; 
v_severity_boxed_623_ = lean_unbox(v_severity_612_);
v_isSilent_boxed_624_ = lean_unbox(v_isSilent_613_);
v_res_625_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5(v_ref_610_, v_msgData_611_, v_severity_boxed_623_, v_isSilent_boxed_624_, v___y_614_, v___y_615_, v___y_616_, v___y_617_, v___y_618_, v___y_619_, v___y_620_, v___y_621_);
lean_dec(v___y_621_);
lean_dec_ref(v___y_620_);
lean_dec(v___y_619_);
lean_dec_ref(v___y_618_);
lean_dec(v___y_617_);
lean_dec_ref(v___y_616_);
lean_dec(v___y_615_);
lean_dec_ref(v___y_614_);
lean_dec(v_ref_610_);
return v_res_625_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_626_ = lean_box(0);
v___x_627_ = l_Lean_Elab_ConfigEval_unsupportedExprExceptionId;
v___x_628_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_628_, 0, v___x_627_);
lean_ctor_set(v___x_628_, 1, v___x_626_);
return v___x_628_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__0___redArg(){
_start:
{
lean_object* v___x_630_; lean_object* v___x_631_; 
v___x_630_ = lean_obj_once(&l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__0___redArg___closed__0, &l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__0___redArg___closed__0);
v___x_631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_631_, 0, v___x_630_);
return v___x_631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__0___redArg___boxed(lean_object* v___y_632_){
_start:
{
lean_object* v_res_633_; 
v_res_633_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__0___redArg();
return v_res_633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__0(lean_object* v_00_u03b1_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_){
_start:
{
lean_object* v___x_640_; 
v___x_640_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__0___redArg();
return v___x_640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__0___boxed(lean_object* v_00_u03b1_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__0(v_00_u03b1_641_, v___y_642_, v___y_643_, v___y_644_, v___y_645_);
lean_dec(v___y_645_);
lean_dec_ref(v___y_644_);
lean_dec(v___y_643_);
lean_dec_ref(v___y_642_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__1___redArg(lean_object* v_msg_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_){
_start:
{
lean_object* v_ref_654_; lean_object* v___x_655_; lean_object* v_a_656_; lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_664_; 
v_ref_654_ = lean_ctor_get(v___y_651_, 2);
v___x_655_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5_spec__6(v_msg_648_, v___y_649_, v___y_650_, v___y_651_, v___y_652_);
v_a_656_ = lean_ctor_get(v___x_655_, 0);
v_isSharedCheck_664_ = !lean_is_exclusive(v___x_655_);
if (v_isSharedCheck_664_ == 0)
{
v___x_658_ = v___x_655_;
v_isShared_659_ = v_isSharedCheck_664_;
goto v_resetjp_657_;
}
else
{
lean_inc(v_a_656_);
lean_dec(v___x_655_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_664_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
lean_object* v___x_660_; lean_object* v___x_662_; 
lean_inc(v_ref_654_);
v___x_660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_660_, 0, v_ref_654_);
lean_ctor_set(v___x_660_, 1, v_a_656_);
if (v_isShared_659_ == 0)
{
lean_ctor_set_tag(v___x_658_, 1);
lean_ctor_set(v___x_658_, 0, v___x_660_);
v___x_662_ = v___x_658_;
goto v_reusejp_661_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v___x_660_);
v___x_662_ = v_reuseFailAlloc_663_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
return v___x_662_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__1___redArg___boxed(lean_object* v_msg_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_){
_start:
{
lean_object* v_res_671_; 
v_res_671_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__1___redArg(v_msg_665_, v___y_666_, v___y_667_, v___y_668_, v___y_669_);
lean_dec(v___y_669_);
lean_dec_ref(v___y_668_);
lean_dec(v___y_667_);
lean_dec_ref(v___y_666_);
return v_res_671_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___lam__0___closed__2(void){
_start:
{
lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_674_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___lam__0___closed__1));
v___x_675_ = l_Lean_stringToMessageData(v___x_674_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___lam__0(lean_object* v___x_676_, lean_object* v_ctor_677_, lean_object* v_args_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_){
_start:
{
lean_object* v___x_836_; uint8_t v___x_837_; 
v___x_836_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___lam__0___closed__0));
v___x_837_ = lean_string_dec_eq(v_ctor_677_, v___x_836_);
if (v___x_837_ == 0)
{
lean_object* v___x_838_; 
v___x_838_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__0___redArg();
return v___x_838_;
}
else
{
lean_object* v___x_839_; lean_object* v___x_840_; uint8_t v___x_841_; 
v___x_839_ = lean_array_get_size(v_args_678_);
v___x_840_ = lean_unsigned_to_nat(11u);
v___x_841_ = lean_nat_dec_eq(v___x_839_, v___x_840_);
if (v___x_841_ == 0)
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v_a_844_; lean_object* v___x_846_; uint8_t v_isShared_847_; uint8_t v_isSharedCheck_851_; 
v___x_842_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___lam__0___closed__2, &l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___lam__0___closed__2_once, _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___lam__0___closed__2);
v___x_843_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__1___redArg(v___x_842_, v___y_679_, v___y_680_, v___y_681_, v___y_682_);
v_a_844_ = lean_ctor_get(v___x_843_, 0);
v_isSharedCheck_851_ = !lean_is_exclusive(v___x_843_);
if (v_isSharedCheck_851_ == 0)
{
v___x_846_ = v___x_843_;
v_isShared_847_ = v_isSharedCheck_851_;
goto v_resetjp_845_;
}
else
{
lean_inc(v_a_844_);
lean_dec(v___x_843_);
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
else
{
goto v___jp_684_;
}
}
v___jp_684_:
{
lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_685_ = lean_unsigned_to_nat(0u);
v___x_686_ = lean_array_get_borrowed(v___x_676_, v_args_678_, v___x_685_);
lean_inc(v___x_686_);
v___x_687_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(v___x_686_, v___y_679_, v___y_680_, v___y_681_, v___y_682_);
if (lean_obj_tag(v___x_687_) == 0)
{
lean_object* v_a_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
v_a_688_ = lean_ctor_get(v___x_687_, 0);
lean_inc(v_a_688_);
lean_dec_ref_known(v___x_687_, 1);
v___x_689_ = lean_unsigned_to_nat(1u);
v___x_690_ = lean_array_get_borrowed(v___x_676_, v_args_678_, v___x_689_);
lean_inc(v___x_690_);
v___x_691_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(v___x_690_, v___y_679_, v___y_680_, v___y_681_, v___y_682_);
if (lean_obj_tag(v___x_691_) == 0)
{
lean_object* v_a_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; 
v_a_692_ = lean_ctor_get(v___x_691_, 0);
lean_inc(v_a_692_);
lean_dec_ref_known(v___x_691_, 1);
v___x_693_ = lean_unsigned_to_nat(2u);
v___x_694_ = lean_array_get_borrowed(v___x_676_, v_args_678_, v___x_693_);
lean_inc(v___x_694_);
v___x_695_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(v___x_694_, v___y_679_, v___y_680_, v___y_681_, v___y_682_);
if (lean_obj_tag(v___x_695_) == 0)
{
lean_object* v_a_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; 
v_a_696_ = lean_ctor_get(v___x_695_, 0);
lean_inc(v_a_696_);
lean_dec_ref_known(v___x_695_, 1);
v___x_697_ = lean_unsigned_to_nat(3u);
v___x_698_ = lean_array_get_borrowed(v___x_676_, v_args_678_, v___x_697_);
lean_inc(v___x_698_);
v___x_699_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(v___x_698_, v___y_679_, v___y_680_, v___y_681_, v___y_682_);
if (lean_obj_tag(v___x_699_) == 0)
{
lean_object* v_a_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
v_a_700_ = lean_ctor_get(v___x_699_, 0);
lean_inc(v_a_700_);
lean_dec_ref_known(v___x_699_, 1);
v___x_701_ = lean_unsigned_to_nat(4u);
v___x_702_ = lean_array_get_borrowed(v___x_676_, v_args_678_, v___x_701_);
lean_inc(v___x_702_);
v___x_703_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(v___x_702_, v___y_679_, v___y_680_, v___y_681_, v___y_682_);
if (lean_obj_tag(v___x_703_) == 0)
{
lean_object* v_a_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
v_a_704_ = lean_ctor_get(v___x_703_, 0);
lean_inc(v_a_704_);
lean_dec_ref_known(v___x_703_, 1);
v___x_705_ = lean_unsigned_to_nat(5u);
v___x_706_ = lean_array_get_borrowed(v___x_676_, v_args_678_, v___x_705_);
lean_inc(v___x_706_);
v___x_707_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(v___x_706_, v___y_679_, v___y_680_, v___y_681_, v___y_682_);
if (lean_obj_tag(v___x_707_) == 0)
{
lean_object* v_a_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; 
v_a_708_ = lean_ctor_get(v___x_707_, 0);
lean_inc(v_a_708_);
lean_dec_ref_known(v___x_707_, 1);
v___x_709_ = lean_unsigned_to_nat(6u);
v___x_710_ = lean_array_get_borrowed(v___x_676_, v_args_678_, v___x_709_);
lean_inc(v___x_710_);
v___x_711_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(v___x_710_, v___y_679_, v___y_680_, v___y_681_, v___y_682_);
if (lean_obj_tag(v___x_711_) == 0)
{
lean_object* v_a_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; 
v_a_712_ = lean_ctor_get(v___x_711_, 0);
lean_inc(v_a_712_);
lean_dec_ref_known(v___x_711_, 1);
v___x_713_ = lean_unsigned_to_nat(7u);
v___x_714_ = lean_array_get_borrowed(v___x_676_, v_args_678_, v___x_713_);
lean_inc(v___x_714_);
v___x_715_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(v___x_714_, v___y_679_, v___y_680_, v___y_681_, v___y_682_);
if (lean_obj_tag(v___x_715_) == 0)
{
lean_object* v_a_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; 
v_a_716_ = lean_ctor_get(v___x_715_, 0);
lean_inc(v_a_716_);
lean_dec_ref_known(v___x_715_, 1);
v___x_717_ = lean_unsigned_to_nat(8u);
v___x_718_ = lean_array_get_borrowed(v___x_676_, v_args_678_, v___x_717_);
lean_inc(v___x_718_);
v___x_719_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(v___x_718_, v___y_679_, v___y_680_, v___y_681_, v___y_682_);
if (lean_obj_tag(v___x_719_) == 0)
{
lean_object* v_a_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
v_a_720_ = lean_ctor_get(v___x_719_, 0);
lean_inc(v_a_720_);
lean_dec_ref_known(v___x_719_, 1);
v___x_721_ = lean_unsigned_to_nat(9u);
v___x_722_ = lean_array_get_borrowed(v___x_676_, v_args_678_, v___x_721_);
lean_inc(v___x_722_);
v___x_723_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(v___x_722_, v___y_679_, v___y_680_, v___y_681_, v___y_682_);
if (lean_obj_tag(v___x_723_) == 0)
{
lean_object* v_a_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; 
v_a_724_ = lean_ctor_get(v___x_723_, 0);
lean_inc(v_a_724_);
lean_dec_ref_known(v___x_723_, 1);
v___x_725_ = lean_unsigned_to_nat(10u);
v___x_726_ = lean_array_get_borrowed(v___x_676_, v_args_678_, v___x_725_);
lean_inc(v___x_726_);
v___x_727_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(v___x_726_, v___y_679_, v___y_680_, v___y_681_, v___y_682_);
if (lean_obj_tag(v___x_727_) == 0)
{
lean_object* v_a_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_747_; 
v_a_728_ = lean_ctor_get(v___x_727_, 0);
v_isSharedCheck_747_ = !lean_is_exclusive(v___x_727_);
if (v_isSharedCheck_747_ == 0)
{
v___x_730_ = v___x_727_;
v_isShared_731_ = v_isSharedCheck_747_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_a_728_);
lean_dec(v___x_727_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_747_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_732_; uint8_t v___x_733_; uint8_t v___x_734_; uint8_t v___x_735_; uint8_t v___x_736_; uint8_t v___x_737_; uint8_t v___x_738_; uint8_t v___x_739_; uint8_t v___x_740_; uint8_t v___x_741_; uint8_t v___x_742_; uint8_t v___x_743_; lean_object* v___x_745_; 
v___x_732_ = lean_alloc_ctor(0, 0, 11);
v___x_733_ = lean_unbox(v_a_688_);
lean_dec(v_a_688_);
lean_ctor_set_uint8(v___x_732_, 0, v___x_733_);
v___x_734_ = lean_unbox(v_a_692_);
lean_dec(v_a_692_);
lean_ctor_set_uint8(v___x_732_, 1, v___x_734_);
v___x_735_ = lean_unbox(v_a_696_);
lean_dec(v_a_696_);
lean_ctor_set_uint8(v___x_732_, 2, v___x_735_);
v___x_736_ = lean_unbox(v_a_700_);
lean_dec(v_a_700_);
lean_ctor_set_uint8(v___x_732_, 3, v___x_736_);
v___x_737_ = lean_unbox(v_a_704_);
lean_dec(v_a_704_);
lean_ctor_set_uint8(v___x_732_, 4, v___x_737_);
v___x_738_ = lean_unbox(v_a_708_);
lean_dec(v_a_708_);
lean_ctor_set_uint8(v___x_732_, 5, v___x_738_);
v___x_739_ = lean_unbox(v_a_712_);
lean_dec(v_a_712_);
lean_ctor_set_uint8(v___x_732_, 6, v___x_739_);
v___x_740_ = lean_unbox(v_a_716_);
lean_dec(v_a_716_);
lean_ctor_set_uint8(v___x_732_, 7, v___x_740_);
v___x_741_ = lean_unbox(v_a_720_);
lean_dec(v_a_720_);
lean_ctor_set_uint8(v___x_732_, 8, v___x_741_);
v___x_742_ = lean_unbox(v_a_724_);
lean_dec(v_a_724_);
lean_ctor_set_uint8(v___x_732_, 9, v___x_742_);
v___x_743_ = lean_unbox(v_a_728_);
lean_dec(v_a_728_);
lean_ctor_set_uint8(v___x_732_, 10, v___x_743_);
if (v_isShared_731_ == 0)
{
lean_ctor_set(v___x_730_, 0, v___x_732_);
v___x_745_ = v___x_730_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v___x_732_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
}
}
}
else
{
lean_object* v_a_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_755_; 
lean_dec(v_a_724_);
lean_dec(v_a_720_);
lean_dec(v_a_716_);
lean_dec(v_a_712_);
lean_dec(v_a_708_);
lean_dec(v_a_704_);
lean_dec(v_a_700_);
lean_dec(v_a_696_);
lean_dec(v_a_692_);
lean_dec(v_a_688_);
v_a_748_ = lean_ctor_get(v___x_727_, 0);
v_isSharedCheck_755_ = !lean_is_exclusive(v___x_727_);
if (v_isSharedCheck_755_ == 0)
{
v___x_750_ = v___x_727_;
v_isShared_751_ = v_isSharedCheck_755_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_a_748_);
lean_dec(v___x_727_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_755_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v___x_753_; 
if (v_isShared_751_ == 0)
{
v___x_753_ = v___x_750_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v_a_748_);
v___x_753_ = v_reuseFailAlloc_754_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
return v___x_753_;
}
}
}
}
else
{
lean_object* v_a_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_763_; 
lean_dec(v_a_720_);
lean_dec(v_a_716_);
lean_dec(v_a_712_);
lean_dec(v_a_708_);
lean_dec(v_a_704_);
lean_dec(v_a_700_);
lean_dec(v_a_696_);
lean_dec(v_a_692_);
lean_dec(v_a_688_);
v_a_756_ = lean_ctor_get(v___x_723_, 0);
v_isSharedCheck_763_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_763_ == 0)
{
v___x_758_ = v___x_723_;
v_isShared_759_ = v_isSharedCheck_763_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_a_756_);
lean_dec(v___x_723_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_763_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v___x_761_; 
if (v_isShared_759_ == 0)
{
v___x_761_ = v___x_758_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_a_756_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
}
}
else
{
lean_object* v_a_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_771_; 
lean_dec(v_a_716_);
lean_dec(v_a_712_);
lean_dec(v_a_708_);
lean_dec(v_a_704_);
lean_dec(v_a_700_);
lean_dec(v_a_696_);
lean_dec(v_a_692_);
lean_dec(v_a_688_);
v_a_764_ = lean_ctor_get(v___x_719_, 0);
v_isSharedCheck_771_ = !lean_is_exclusive(v___x_719_);
if (v_isSharedCheck_771_ == 0)
{
v___x_766_ = v___x_719_;
v_isShared_767_ = v_isSharedCheck_771_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_a_764_);
lean_dec(v___x_719_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_771_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_769_; 
if (v_isShared_767_ == 0)
{
v___x_769_ = v___x_766_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v_a_764_);
v___x_769_ = v_reuseFailAlloc_770_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
return v___x_769_;
}
}
}
}
else
{
lean_object* v_a_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_779_; 
lean_dec(v_a_712_);
lean_dec(v_a_708_);
lean_dec(v_a_704_);
lean_dec(v_a_700_);
lean_dec(v_a_696_);
lean_dec(v_a_692_);
lean_dec(v_a_688_);
v_a_772_ = lean_ctor_get(v___x_715_, 0);
v_isSharedCheck_779_ = !lean_is_exclusive(v___x_715_);
if (v_isSharedCheck_779_ == 0)
{
v___x_774_ = v___x_715_;
v_isShared_775_ = v_isSharedCheck_779_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_a_772_);
lean_dec(v___x_715_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_779_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v___x_777_; 
if (v_isShared_775_ == 0)
{
v___x_777_ = v___x_774_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v_a_772_);
v___x_777_ = v_reuseFailAlloc_778_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
return v___x_777_;
}
}
}
}
else
{
lean_object* v_a_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_787_; 
lean_dec(v_a_708_);
lean_dec(v_a_704_);
lean_dec(v_a_700_);
lean_dec(v_a_696_);
lean_dec(v_a_692_);
lean_dec(v_a_688_);
v_a_780_ = lean_ctor_get(v___x_711_, 0);
v_isSharedCheck_787_ = !lean_is_exclusive(v___x_711_);
if (v_isSharedCheck_787_ == 0)
{
v___x_782_ = v___x_711_;
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_a_780_);
lean_dec(v___x_711_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v___x_785_; 
if (v_isShared_783_ == 0)
{
v___x_785_ = v___x_782_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_a_780_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
}
else
{
lean_object* v_a_788_; lean_object* v___x_790_; uint8_t v_isShared_791_; uint8_t v_isSharedCheck_795_; 
lean_dec(v_a_704_);
lean_dec(v_a_700_);
lean_dec(v_a_696_);
lean_dec(v_a_692_);
lean_dec(v_a_688_);
v_a_788_ = lean_ctor_get(v___x_707_, 0);
v_isSharedCheck_795_ = !lean_is_exclusive(v___x_707_);
if (v_isSharedCheck_795_ == 0)
{
v___x_790_ = v___x_707_;
v_isShared_791_ = v_isSharedCheck_795_;
goto v_resetjp_789_;
}
else
{
lean_inc(v_a_788_);
lean_dec(v___x_707_);
v___x_790_ = lean_box(0);
v_isShared_791_ = v_isSharedCheck_795_;
goto v_resetjp_789_;
}
v_resetjp_789_:
{
lean_object* v___x_793_; 
if (v_isShared_791_ == 0)
{
v___x_793_ = v___x_790_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v_a_788_);
v___x_793_ = v_reuseFailAlloc_794_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
return v___x_793_;
}
}
}
}
else
{
lean_object* v_a_796_; lean_object* v___x_798_; uint8_t v_isShared_799_; uint8_t v_isSharedCheck_803_; 
lean_dec(v_a_700_);
lean_dec(v_a_696_);
lean_dec(v_a_692_);
lean_dec(v_a_688_);
v_a_796_ = lean_ctor_get(v___x_703_, 0);
v_isSharedCheck_803_ = !lean_is_exclusive(v___x_703_);
if (v_isSharedCheck_803_ == 0)
{
v___x_798_ = v___x_703_;
v_isShared_799_ = v_isSharedCheck_803_;
goto v_resetjp_797_;
}
else
{
lean_inc(v_a_796_);
lean_dec(v___x_703_);
v___x_798_ = lean_box(0);
v_isShared_799_ = v_isSharedCheck_803_;
goto v_resetjp_797_;
}
v_resetjp_797_:
{
lean_object* v___x_801_; 
if (v_isShared_799_ == 0)
{
v___x_801_ = v___x_798_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v_a_796_);
v___x_801_ = v_reuseFailAlloc_802_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
return v___x_801_;
}
}
}
}
else
{
lean_object* v_a_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_811_; 
lean_dec(v_a_696_);
lean_dec(v_a_692_);
lean_dec(v_a_688_);
v_a_804_ = lean_ctor_get(v___x_699_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v___x_699_);
if (v_isSharedCheck_811_ == 0)
{
v___x_806_ = v___x_699_;
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_a_804_);
lean_dec(v___x_699_);
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
else
{
lean_object* v_a_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_819_; 
lean_dec(v_a_692_);
lean_dec(v_a_688_);
v_a_812_ = lean_ctor_get(v___x_695_, 0);
v_isSharedCheck_819_ = !lean_is_exclusive(v___x_695_);
if (v_isSharedCheck_819_ == 0)
{
v___x_814_ = v___x_695_;
v_isShared_815_ = v_isSharedCheck_819_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_a_812_);
lean_dec(v___x_695_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_819_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v___x_817_; 
if (v_isShared_815_ == 0)
{
v___x_817_ = v___x_814_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_818_; 
v_reuseFailAlloc_818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_818_, 0, v_a_812_);
v___x_817_ = v_reuseFailAlloc_818_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
return v___x_817_;
}
}
}
}
else
{
lean_object* v_a_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_827_; 
lean_dec(v_a_688_);
v_a_820_ = lean_ctor_get(v___x_691_, 0);
v_isSharedCheck_827_ = !lean_is_exclusive(v___x_691_);
if (v_isSharedCheck_827_ == 0)
{
v___x_822_ = v___x_691_;
v_isShared_823_ = v_isSharedCheck_827_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_a_820_);
lean_dec(v___x_691_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_827_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v___x_825_; 
if (v_isShared_823_ == 0)
{
v___x_825_ = v___x_822_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v_a_820_);
v___x_825_ = v_reuseFailAlloc_826_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
return v___x_825_;
}
}
}
}
else
{
lean_object* v_a_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_835_; 
v_a_828_ = lean_ctor_get(v___x_687_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v___x_687_);
if (v_isSharedCheck_835_ == 0)
{
v___x_830_ = v___x_687_;
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_a_828_);
lean_dec(v___x_687_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
lean_object* v___x_833_; 
if (v_isShared_831_ == 0)
{
v___x_833_ = v___x_830_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_a_828_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
return v___x_833_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___lam__0___boxed(lean_object* v___x_852_, lean_object* v_ctor_853_, lean_object* v_args_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_){
_start:
{
lean_object* v_res_860_; 
v_res_860_ = l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___lam__0(v___x_852_, v_ctor_853_, v_args_854_, v___y_855_, v___y_856_, v___y_857_, v___y_858_);
lean_dec(v___y_858_);
lean_dec_ref(v___y_857_);
lean_dec(v___y_856_);
lean_dec_ref(v___y_855_);
lean_dec_ref(v_args_854_);
lean_dec_ref(v_ctor_853_);
lean_dec_ref(v___x_852_);
return v_res_860_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__0(void){
_start:
{
lean_object* v___x_861_; lean_object* v___f_862_; 
v___x_861_ = l_Lean_instInhabitedExpr;
v___f_862_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___lam__0___boxed), 8, 1);
lean_closure_set(v___f_862_, 0, v___x_861_);
return v___f_862_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr(lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_){
_start:
{
lean_object* v___f_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
v___f_875_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__0, &l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__0_once, _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__0);
v___x_876_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__3));
v___x_877_ = l_Lean_Elab_ConfigEval_EvalExpr_withSimpleEvalExpr___redArg(v___x_876_, v___f_875_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___boxed(lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_, lean_object* v_a_881_, lean_object* v_a_882_, lean_object* v_a_883_){
_start:
{
lean_object* v_res_884_; 
v_res_884_ = l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr(v_a_878_, v_a_879_, v_a_880_, v_a_881_, v_a_882_);
lean_dec(v_a_882_);
lean_dec_ref(v_a_881_);
lean_dec(v_a_880_);
lean_dec_ref(v_a_879_);
return v_res_884_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__1(lean_object* v_00_u03b1_885_, lean_object* v_msg_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_){
_start:
{
lean_object* v___x_892_; 
v___x_892_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__1___redArg(v_msg_886_, v___y_887_, v___y_888_, v___y_889_, v___y_890_);
return v___x_892_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__1___boxed(lean_object* v_00_u03b1_893_, lean_object* v_msg_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_){
_start:
{
lean_object* v_res_900_; 
v_res_900_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__1(v_00_u03b1_893_, v_msg_894_, v___y_895_, v___y_896_, v___y_897_, v___y_898_);
lean_dec(v___y_898_);
lean_dec_ref(v___y_897_);
lean_dec(v___y_896_);
lean_dec_ref(v___y_895_);
return v_res_900_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__1(void){
_start:
{
lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; 
v___x_902_ = lean_box(0);
v___x_903_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__3));
v___x_904_ = l_Lean_Expr_const___override(v___x_903_, v___x_902_);
return v___x_904_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__2(void){
_start:
{
lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_905_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__1, &l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__1_once, _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__1);
v___x_906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_906_, 0, v___x_905_);
return v___x_906_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__3(void){
_start:
{
lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_907_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__2, &l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__2_once, _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__2);
v___x_908_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__0));
v___x_909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_909_, 0, v___x_908_);
lean_ctor_set(v___x_909_, 1, v___x_907_);
return v___x_909_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig(void){
_start:
{
lean_object* v___x_910_; 
v___x_910_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__3, &l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__3_once, _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__3);
return v___x_910_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__0___redArg(lean_object* v_e_911_, lean_object* v___y_912_){
_start:
{
uint8_t v___x_914_; 
v___x_914_ = l_Lean_Expr_hasMVar(v_e_911_);
if (v___x_914_ == 0)
{
lean_object* v___x_915_; 
v___x_915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_915_, 0, v_e_911_);
return v___x_915_;
}
else
{
lean_object* v___x_916_; lean_object* v_mctx_917_; lean_object* v___x_918_; lean_object* v_fst_919_; lean_object* v_snd_920_; lean_object* v___x_921_; lean_object* v_cache_922_; lean_object* v_zetaDeltaFVarIds_923_; lean_object* v_postponed_924_; lean_object* v_diag_925_; lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_934_; 
v___x_916_ = lean_st_ref_get(v___y_912_);
v_mctx_917_ = lean_ctor_get(v___x_916_, 0);
lean_inc_ref(v_mctx_917_);
lean_dec(v___x_916_);
v___x_918_ = l_Lean_instantiateMVarsCore(v_mctx_917_, v_e_911_);
v_fst_919_ = lean_ctor_get(v___x_918_, 0);
lean_inc(v_fst_919_);
v_snd_920_ = lean_ctor_get(v___x_918_, 1);
lean_inc(v_snd_920_);
lean_dec_ref(v___x_918_);
v___x_921_ = lean_st_ref_take(v___y_912_);
v_cache_922_ = lean_ctor_get(v___x_921_, 1);
v_zetaDeltaFVarIds_923_ = lean_ctor_get(v___x_921_, 2);
v_postponed_924_ = lean_ctor_get(v___x_921_, 3);
v_diag_925_ = lean_ctor_get(v___x_921_, 4);
v_isSharedCheck_934_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_934_ == 0)
{
lean_object* v_unused_935_; 
v_unused_935_ = lean_ctor_get(v___x_921_, 0);
lean_dec(v_unused_935_);
v___x_927_ = v___x_921_;
v_isShared_928_ = v_isSharedCheck_934_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_diag_925_);
lean_inc(v_postponed_924_);
lean_inc(v_zetaDeltaFVarIds_923_);
lean_inc(v_cache_922_);
lean_dec(v___x_921_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_934_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v___x_930_; 
if (v_isShared_928_ == 0)
{
lean_ctor_set(v___x_927_, 0, v_snd_920_);
v___x_930_ = v___x_927_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v_snd_920_);
lean_ctor_set(v_reuseFailAlloc_933_, 1, v_cache_922_);
lean_ctor_set(v_reuseFailAlloc_933_, 2, v_zetaDeltaFVarIds_923_);
lean_ctor_set(v_reuseFailAlloc_933_, 3, v_postponed_924_);
lean_ctor_set(v_reuseFailAlloc_933_, 4, v_diag_925_);
v___x_930_ = v_reuseFailAlloc_933_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
lean_object* v___x_931_; lean_object* v___x_932_; 
v___x_931_ = lean_st_ref_put(v___y_912_, v___x_930_);
v___x_932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_932_, 0, v_fst_919_);
return v___x_932_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__0___redArg___boxed(lean_object* v_e_936_, lean_object* v___y_937_, lean_object* v___y_938_){
_start:
{
lean_object* v_res_939_; 
v_res_939_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__0___redArg(v_e_936_, v___y_937_);
lean_dec(v___y_937_);
return v_res_939_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___closed__0(void){
_start:
{
lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_940_ = lean_box(1);
v___x_941_ = l_Lean_MessageData_ofFormat(v___x_940_);
return v___x_941_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___closed__3(void){
_start:
{
lean_object* v___x_945_; lean_object* v___x_946_; 
v___x_945_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___closed__2));
v___x_946_ = l_Lean_MessageData_ofFormat(v___x_945_);
return v___x_946_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4(lean_object* v_x_947_, lean_object* v_x_948_){
_start:
{
if (lean_obj_tag(v_x_948_) == 0)
{
return v_x_947_;
}
else
{
lean_object* v_head_949_; lean_object* v_tail_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_972_; 
v_head_949_ = lean_ctor_get(v_x_948_, 0);
v_tail_950_ = lean_ctor_get(v_x_948_, 1);
v_isSharedCheck_972_ = !lean_is_exclusive(v_x_948_);
if (v_isSharedCheck_972_ == 0)
{
v___x_952_ = v_x_948_;
v_isShared_953_ = v_isSharedCheck_972_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_tail_950_);
lean_inc(v_head_949_);
lean_dec(v_x_948_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_972_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
lean_object* v_before_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_970_; 
v_before_954_ = lean_ctor_get(v_head_949_, 0);
v_isSharedCheck_970_ = !lean_is_exclusive(v_head_949_);
if (v_isSharedCheck_970_ == 0)
{
lean_object* v_unused_971_; 
v_unused_971_ = lean_ctor_get(v_head_949_, 1);
lean_dec(v_unused_971_);
v___x_956_ = v_head_949_;
v_isShared_957_ = v_isSharedCheck_970_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_before_954_);
lean_dec(v_head_949_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_970_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_958_; lean_object* v___x_960_; 
v___x_958_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___closed__0);
if (v_isShared_957_ == 0)
{
lean_ctor_set_tag(v___x_956_, 7);
lean_ctor_set(v___x_956_, 1, v___x_958_);
lean_ctor_set(v___x_956_, 0, v_x_947_);
v___x_960_ = v___x_956_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v_x_947_);
lean_ctor_set(v_reuseFailAlloc_969_, 1, v___x_958_);
v___x_960_ = v_reuseFailAlloc_969_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
lean_object* v___x_961_; lean_object* v___x_963_; 
v___x_961_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___closed__3);
if (v_isShared_953_ == 0)
{
lean_ctor_set_tag(v___x_952_, 7);
lean_ctor_set(v___x_952_, 1, v___x_961_);
lean_ctor_set(v___x_952_, 0, v___x_960_);
v___x_963_ = v___x_952_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v___x_960_);
lean_ctor_set(v_reuseFailAlloc_968_, 1, v___x_961_);
v___x_963_ = v_reuseFailAlloc_968_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; 
v___x_964_ = l_Lean_MessageData_ofSyntax(v_before_954_);
v___x_965_ = l_Lean_indentD(v___x_964_);
v___x_966_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_966_, 0, v___x_963_);
lean_ctor_set(v___x_966_, 1, v___x_965_);
v_x_947_ = v___x_966_;
v_x_948_ = v_tail_950_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_976_; lean_object* v___x_977_; 
v___x_976_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__1));
v___x_977_ = l_Lean_MessageData_ofFormat(v___x_976_);
return v___x_977_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg(lean_object* v_msgData_978_, lean_object* v_macroStack_979_, lean_object* v___y_980_){
_start:
{
lean_object* v___x_982_; lean_object* v___x_983_; uint8_t v___x_984_; 
v___x_982_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_980_);
v___x_983_ = l_Lean_Elab_pp_macroStack;
v___x_984_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5_spec__7(v___x_982_, v___x_983_);
lean_dec_ref(v___x_982_);
if (v___x_984_ == 0)
{
lean_object* v___x_985_; 
lean_dec(v_macroStack_979_);
v___x_985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_985_, 0, v_msgData_978_);
return v___x_985_;
}
else
{
if (lean_obj_tag(v_macroStack_979_) == 0)
{
lean_object* v___x_986_; 
v___x_986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_986_, 0, v_msgData_978_);
return v___x_986_;
}
else
{
lean_object* v_head_987_; lean_object* v_after_988_; lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_1003_; 
v_head_987_ = lean_ctor_get(v_macroStack_979_, 0);
lean_inc(v_head_987_);
v_after_988_ = lean_ctor_get(v_head_987_, 1);
v_isSharedCheck_1003_ = !lean_is_exclusive(v_head_987_);
if (v_isSharedCheck_1003_ == 0)
{
lean_object* v_unused_1004_; 
v_unused_1004_ = lean_ctor_get(v_head_987_, 0);
lean_dec(v_unused_1004_);
v___x_990_ = v_head_987_;
v_isShared_991_ = v_isSharedCheck_1003_;
goto v_resetjp_989_;
}
else
{
lean_inc(v_after_988_);
lean_dec(v_head_987_);
v___x_990_ = lean_box(0);
v_isShared_991_ = v_isSharedCheck_1003_;
goto v_resetjp_989_;
}
v_resetjp_989_:
{
lean_object* v___x_992_; lean_object* v___x_994_; 
v___x_992_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___closed__0);
if (v_isShared_991_ == 0)
{
lean_ctor_set_tag(v___x_990_, 7);
lean_ctor_set(v___x_990_, 1, v___x_992_);
lean_ctor_set(v___x_990_, 0, v_msgData_978_);
v___x_994_ = v___x_990_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v_msgData_978_);
lean_ctor_set(v_reuseFailAlloc_1002_, 1, v___x_992_);
v___x_994_ = v_reuseFailAlloc_1002_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v_msgData_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; 
v___x_995_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__2);
v___x_996_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_996_, 0, v___x_994_);
lean_ctor_set(v___x_996_, 1, v___x_995_);
v___x_997_ = l_Lean_MessageData_ofSyntax(v_after_988_);
v___x_998_ = l_Lean_indentD(v___x_997_);
v_msgData_999_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_999_, 0, v___x_996_);
lean_ctor_set(v_msgData_999_, 1, v___x_998_);
v___x_1000_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4(v_msgData_999_, v_macroStack_979_);
v___x_1001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1001_, 0, v___x_1000_);
return v___x_1001_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_msgData_1005_, lean_object* v_macroStack_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_){
_start:
{
lean_object* v_res_1009_; 
v_res_1009_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg(v_msgData_1005_, v_macroStack_1006_, v___y_1007_);
lean_dec_ref(v___y_1007_);
return v_res_1009_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1___redArg(lean_object* v_msg_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_){
_start:
{
lean_object* v_ref_1018_; lean_object* v_macroStack_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v_a_1022_; lean_object* v___x_1023_; lean_object* v_a_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1032_; 
v_ref_1018_ = lean_ctor_get(v___y_1015_, 2);
v_macroStack_1019_ = lean_ctor_get(v___y_1011_, 1);
v___x_1020_ = l_Lean_Elab_getBetterRef(v_ref_1018_, v_macroStack_1019_);
v___x_1021_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5_spec__6(v_msg_1010_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
v_a_1022_ = lean_ctor_get(v___x_1021_, 0);
lean_inc(v_a_1022_);
lean_dec_ref(v___x_1021_);
lean_inc(v_macroStack_1019_);
v___x_1023_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg(v_a_1022_, v_macroStack_1019_, v___y_1015_);
v_a_1024_ = lean_ctor_get(v___x_1023_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1026_ = v___x_1023_;
v_isShared_1027_ = v_isSharedCheck_1032_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_a_1024_);
lean_dec(v___x_1023_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1032_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v___x_1028_; lean_object* v___x_1030_; 
v___x_1028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1020_);
lean_ctor_set(v___x_1028_, 1, v_a_1024_);
if (v_isShared_1027_ == 0)
{
lean_ctor_set_tag(v___x_1026_, 1);
lean_ctor_set(v___x_1026_, 0, v___x_1028_);
v___x_1030_ = v___x_1026_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v___x_1028_);
v___x_1030_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
return v___x_1030_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1___redArg___boxed(lean_object* v_msg_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1___redArg(v_msg_1033_, v___y_1034_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
lean_dec(v___y_1037_);
lean_dec_ref(v___y_1036_);
lean_dec(v___y_1035_);
lean_dec_ref(v___y_1034_);
return v_res_1041_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1042_ = lean_box(0);
v___x_1043_ = l_Lean_Elab_abortTermExceptionId;
v___x_1044_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1044_, 0, v___x_1043_);
lean_ctor_set(v___x_1044_, 1, v___x_1042_);
return v___x_1044_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__2___redArg(){
_start:
{
lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___x_1046_ = lean_obj_once(&l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__2___redArg___closed__0, &l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__2___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__2___redArg___closed__0);
v___x_1047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1046_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__2___redArg___boxed(lean_object* v___y_1048_){
_start:
{
lean_object* v_res_1049_; 
v_res_1049_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__2___redArg();
return v_res_1049_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1051_ = ((lean_object*)(l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__0));
v___x_1052_ = l_Lean_stringToMessageData(v___x_1051_);
return v___x_1052_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1053_; lean_object* v___x_1054_; 
v___x_1053_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__1, &l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__1_once, _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__1);
v___x_1054_ = l_Lean_MessageData_ofExpr(v___x_1053_);
return v___x_1054_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1055_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__2, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__2_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__2);
v___x_1056_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__1, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__1_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__1);
v___x_1057_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1056_);
lean_ctor_set(v___x_1057_, 1, v___x_1055_);
return v___x_1057_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__5(void){
_start:
{
lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1059_ = ((lean_object*)(l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__4));
v___x_1060_ = l_Lean_stringToMessageData(v___x_1059_);
return v___x_1060_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__6(void){
_start:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1061_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__5, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__5_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__5);
v___x_1062_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__3, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__3_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__3);
v___x_1063_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1062_);
lean_ctor_set(v___x_1063_, 1, v___x_1061_);
return v___x_1063_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__8(void){
_start:
{
lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1065_ = ((lean_object*)(l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__7));
v___x_1066_ = l_Lean_stringToMessageData(v___x_1065_);
return v___x_1066_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__10(void){
_start:
{
lean_object* v___x_1068_; lean_object* v___x_1069_; 
v___x_1068_ = ((lean_object*)(l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__9));
v___x_1069_ = l_Lean_stringToMessageData(v___x_1068_);
return v___x_1069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0(lean_object* v_stx_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_){
_start:
{
lean_object* v_ty_x3f_1078_; uint8_t v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v_toCold_1084_; lean_object* v_currRecDepth_1085_; lean_object* v_ref_1086_; uint16_t v_optionFlags_1087_; uint8_t v_suppressElabErrors_1088_; uint8_t v_checkDeprecated_1089_; uint8_t v_isRecordingDeps_1090_; uint8_t v___x_1091_; lean_object* v_ref_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; 
v_ty_x3f_1078_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__2, &l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__2_once, _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig___closed__2);
v___x_1079_ = 1;
v___x_1080_ = lean_box(0);
v___x_1081_ = lean_box(v___x_1079_);
v___x_1082_ = lean_box(v___x_1079_);
lean_inc(v_stx_1070_);
v___x_1083_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTermEnsuringType___boxed), 12, 5);
lean_closure_set(v___x_1083_, 0, v_stx_1070_);
lean_closure_set(v___x_1083_, 1, v_ty_x3f_1078_);
lean_closure_set(v___x_1083_, 2, v___x_1081_);
lean_closure_set(v___x_1083_, 3, v___x_1082_);
lean_closure_set(v___x_1083_, 4, v___x_1080_);
v_toCold_1084_ = lean_ctor_get(v_a_1075_, 0);
v_currRecDepth_1085_ = lean_ctor_get(v_a_1075_, 1);
v_ref_1086_ = lean_ctor_get(v_a_1075_, 2);
v_optionFlags_1087_ = lean_ctor_get_uint16(v_a_1075_, sizeof(void*)*3);
v_suppressElabErrors_1088_ = lean_ctor_get_uint8(v_a_1075_, sizeof(void*)*3 + 2);
v_checkDeprecated_1089_ = lean_ctor_get_uint8(v_a_1075_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1090_ = lean_ctor_get_uint8(v_a_1075_, sizeof(void*)*3 + 4);
v___x_1091_ = 1;
v_ref_1092_ = l_Lean_replaceRef(v_stx_1070_, v_ref_1086_);
lean_dec(v_stx_1070_);
lean_inc(v_currRecDepth_1085_);
lean_inc_ref(v_toCold_1084_);
v___x_1093_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1093_, 0, v_toCold_1084_);
lean_ctor_set(v___x_1093_, 1, v_currRecDepth_1085_);
lean_ctor_set(v___x_1093_, 2, v_ref_1092_);
lean_ctor_set_uint16(v___x_1093_, sizeof(void*)*3, v_optionFlags_1087_);
lean_ctor_set_uint8(v___x_1093_, sizeof(void*)*3 + 2, v_suppressElabErrors_1088_);
lean_ctor_set_uint8(v___x_1093_, sizeof(void*)*3 + 3, v_checkDeprecated_1089_);
lean_ctor_set_uint8(v___x_1093_, sizeof(void*)*3 + 4, v_isRecordingDeps_1090_);
v___x_1094_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___x_1083_, v___x_1091_, v_a_1071_, v_a_1072_, v_a_1073_, v_a_1074_, v___x_1093_, v_a_1076_);
if (lean_obj_tag(v___x_1094_) == 0)
{
lean_object* v_a_1095_; lean_object* v___x_1096_; lean_object* v_a_1097_; lean_object* v___y_1099_; lean_object* v___y_1100_; lean_object* v___y_1101_; lean_object* v___y_1102_; lean_object* v___y_1103_; lean_object* v___y_1104_; lean_object* v___y_1126_; lean_object* v___y_1127_; lean_object* v___y_1128_; lean_object* v___y_1129_; lean_object* v___y_1130_; lean_object* v___y_1131_; lean_object* v___y_1163_; lean_object* v___y_1164_; lean_object* v___y_1165_; lean_object* v___y_1166_; lean_object* v___y_1167_; lean_object* v___y_1168_; uint8_t v___x_1181_; 
v_a_1095_ = lean_ctor_get(v___x_1094_, 0);
lean_inc(v_a_1095_);
lean_dec_ref_known(v___x_1094_, 1);
v___x_1096_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__0___redArg(v_a_1095_, v_a_1074_);
v_a_1097_ = lean_ctor_get(v___x_1096_, 0);
lean_inc(v_a_1097_);
lean_dec_ref(v___x_1096_);
v___x_1181_ = l_Lean_Expr_hasSorry(v_a_1097_);
if (v___x_1181_ == 0)
{
v___y_1126_ = v_a_1071_;
v___y_1127_ = v_a_1072_;
v___y_1128_ = v_a_1073_;
v___y_1129_ = v_a_1074_;
v___y_1130_ = v___x_1093_;
v___y_1131_ = v_a_1076_;
goto v___jp_1125_;
}
else
{
uint8_t v___x_1182_; 
v___x_1182_ = l_Lean_Expr_hasSyntheticSorry(v_a_1097_);
if (v___x_1182_ == 0)
{
v___y_1163_ = v_a_1071_;
v___y_1164_ = v_a_1072_;
v___y_1165_ = v_a_1073_;
v___y_1166_ = v_a_1074_;
v___y_1167_ = v___x_1093_;
v___y_1168_ = v_a_1076_;
goto v___jp_1162_;
}
else
{
lean_object* v___x_1183_; lean_object* v_a_1184_; lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1191_; 
lean_dec(v_a_1097_);
lean_dec_ref_known(v___x_1093_, 3);
v___x_1183_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__2___redArg();
v_a_1184_ = lean_ctor_get(v___x_1183_, 0);
v_isSharedCheck_1191_ = !lean_is_exclusive(v___x_1183_);
if (v_isSharedCheck_1191_ == 0)
{
v___x_1186_ = v___x_1183_;
v_isShared_1187_ = v_isSharedCheck_1191_;
goto v_resetjp_1185_;
}
else
{
lean_inc(v_a_1184_);
lean_dec(v___x_1183_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1191_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
lean_object* v___x_1189_; 
if (v_isShared_1187_ == 0)
{
v___x_1189_ = v___x_1186_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v_a_1184_);
v___x_1189_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
return v___x_1189_;
}
}
}
}
v___jp_1098_:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; 
v___x_1105_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_inc(v_a_1097_);
v___x_1106_ = l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr(v_a_1097_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_);
if (lean_obj_tag(v___x_1106_) == 0)
{
lean_dec_ref(v___y_1103_);
lean_dec(v_a_1097_);
return v___x_1106_;
}
else
{
lean_object* v_a_1107_; uint8_t v___x_1108_; 
v_a_1107_ = lean_ctor_get(v___x_1106_, 0);
lean_inc(v_a_1107_);
v___x_1108_ = l_Lean_Exception_isInterrupt(v_a_1107_);
if (v___x_1108_ == 0)
{
uint8_t v___x_1109_; 
lean_inc(v_a_1107_);
v___x_1109_ = l_Lean_Exception_isRuntime(v_a_1107_);
if (v___x_1109_ == 0)
{
if (lean_obj_tag(v_a_1107_) == 0)
{
lean_dec_ref_known(v_a_1107_, 2);
lean_dec_ref(v___y_1103_);
lean_dec(v_a_1097_);
return v___x_1106_;
}
else
{
lean_object* v_id_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1123_; 
v_id_1110_ = lean_ctor_get(v_a_1107_, 0);
v_isSharedCheck_1123_ = !lean_is_exclusive(v_a_1107_);
if (v_isSharedCheck_1123_ == 0)
{
lean_object* v_unused_1124_; 
v_unused_1124_ = lean_ctor_get(v_a_1107_, 1);
lean_dec(v_unused_1124_);
v___x_1112_ = v_a_1107_;
v_isShared_1113_ = v_isSharedCheck_1123_;
goto v_resetjp_1111_;
}
else
{
lean_inc(v_id_1110_);
lean_dec(v_a_1107_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1123_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
uint8_t v___x_1114_; 
v___x_1114_ = l_Lean_instBEqInternalExceptionId_beq(v___x_1105_, v_id_1110_);
lean_dec(v_id_1110_);
if (v___x_1114_ == 0)
{
lean_del_object(v___x_1112_);
lean_dec_ref(v___y_1103_);
lean_dec(v_a_1097_);
return v___x_1106_;
}
else
{
lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1119_; 
lean_dec_ref_known(v___x_1106_, 1);
v___x_1115_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__6, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__6_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__6);
v___x_1116_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__8, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__8_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__8);
v___x_1117_ = l_Lean_indentExpr(v_a_1097_);
if (v_isShared_1113_ == 0)
{
lean_ctor_set_tag(v___x_1112_, 7);
lean_ctor_set(v___x_1112_, 1, v___x_1117_);
lean_ctor_set(v___x_1112_, 0, v___x_1116_);
v___x_1119_ = v___x_1112_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v___x_1116_);
lean_ctor_set(v_reuseFailAlloc_1122_, 1, v___x_1117_);
v___x_1119_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1120_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1120_, 0, v___x_1119_);
lean_ctor_set(v___x_1120_, 1, v___x_1115_);
v___x_1121_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1___redArg(v___x_1120_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_);
lean_dec_ref(v___y_1103_);
return v___x_1121_;
}
}
}
}
}
else
{
lean_dec(v_a_1107_);
lean_dec_ref(v___y_1103_);
lean_dec(v_a_1097_);
return v___x_1106_;
}
}
else
{
lean_dec(v_a_1107_);
lean_dec_ref(v___y_1103_);
lean_dec(v_a_1097_);
return v___x_1106_;
}
}
}
v___jp_1125_:
{
lean_object* v___x_1132_; 
lean_inc(v_a_1097_);
v___x_1132_ = l_Lean_Meta_getMVars(v_a_1097_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_);
if (lean_obj_tag(v___x_1132_) == 0)
{
lean_object* v_a_1133_; lean_object* v___x_1134_; 
v_a_1133_ = lean_ctor_get(v___x_1132_, 0);
lean_inc(v_a_1133_);
lean_dec_ref_known(v___x_1132_, 1);
v___x_1134_ = l_Lean_Elab_Term_logUnassignedUsingErrorInfos(v_a_1133_, v___x_1080_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_);
lean_dec(v_a_1133_);
if (lean_obj_tag(v___x_1134_) == 0)
{
lean_object* v_a_1135_; uint8_t v___x_1136_; 
v_a_1135_ = lean_ctor_get(v___x_1134_, 0);
lean_inc(v_a_1135_);
lean_dec_ref_known(v___x_1134_, 1);
v___x_1136_ = lean_unbox(v_a_1135_);
lean_dec(v_a_1135_);
if (v___x_1136_ == 0)
{
v___y_1099_ = v___y_1126_;
v___y_1100_ = v___y_1127_;
v___y_1101_ = v___y_1128_;
v___y_1102_ = v___y_1129_;
v___y_1103_ = v___y_1130_;
v___y_1104_ = v___y_1131_;
goto v___jp_1098_;
}
else
{
lean_object* v___x_1137_; lean_object* v_a_1138_; lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1145_; 
lean_dec_ref(v___y_1130_);
lean_dec(v_a_1097_);
v___x_1137_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__2___redArg();
v_a_1138_ = lean_ctor_get(v___x_1137_, 0);
v_isSharedCheck_1145_ = !lean_is_exclusive(v___x_1137_);
if (v_isSharedCheck_1145_ == 0)
{
v___x_1140_ = v___x_1137_;
v_isShared_1141_ = v_isSharedCheck_1145_;
goto v_resetjp_1139_;
}
else
{
lean_inc(v_a_1138_);
lean_dec(v___x_1137_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1145_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
lean_object* v___x_1143_; 
if (v_isShared_1141_ == 0)
{
v___x_1143_ = v___x_1140_;
goto v_reusejp_1142_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v_a_1138_);
v___x_1143_ = v_reuseFailAlloc_1144_;
goto v_reusejp_1142_;
}
v_reusejp_1142_:
{
return v___x_1143_;
}
}
}
}
else
{
lean_object* v_a_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1153_; 
lean_dec_ref(v___y_1130_);
lean_dec(v_a_1097_);
v_a_1146_ = lean_ctor_get(v___x_1134_, 0);
v_isSharedCheck_1153_ = !lean_is_exclusive(v___x_1134_);
if (v_isSharedCheck_1153_ == 0)
{
v___x_1148_ = v___x_1134_;
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_a_1146_);
lean_dec(v___x_1134_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
lean_object* v___x_1151_; 
if (v_isShared_1149_ == 0)
{
v___x_1151_ = v___x_1148_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v_a_1146_);
v___x_1151_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
return v___x_1151_;
}
}
}
}
else
{
lean_object* v_a_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1161_; 
lean_dec_ref(v___y_1130_);
lean_dec(v_a_1097_);
v_a_1154_ = lean_ctor_get(v___x_1132_, 0);
v_isSharedCheck_1161_ = !lean_is_exclusive(v___x_1132_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1156_ = v___x_1132_;
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_a_1154_);
lean_dec(v___x_1132_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v___x_1159_; 
if (v_isShared_1157_ == 0)
{
v___x_1159_ = v___x_1156_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_a_1154_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
return v___x_1159_;
}
}
}
}
v___jp_1162_:
{
lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v_a_1173_; lean_object* v___x_1175_; uint8_t v_isShared_1176_; uint8_t v_isSharedCheck_1180_; 
v___x_1169_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__10, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__10_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__10);
v___x_1170_ = l_Lean_indentExpr(v_a_1097_);
v___x_1171_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1171_, 0, v___x_1169_);
lean_ctor_set(v___x_1171_, 1, v___x_1170_);
v___x_1172_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1___redArg(v___x_1171_, v___y_1163_, v___y_1164_, v___y_1165_, v___y_1166_, v___y_1167_, v___y_1168_);
lean_dec_ref(v___y_1167_);
v_a_1173_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1180_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1180_ == 0)
{
v___x_1175_ = v___x_1172_;
v_isShared_1176_ = v_isSharedCheck_1180_;
goto v_resetjp_1174_;
}
else
{
lean_inc(v_a_1173_);
lean_dec(v___x_1172_);
v___x_1175_ = lean_box(0);
v_isShared_1176_ = v_isSharedCheck_1180_;
goto v_resetjp_1174_;
}
v_resetjp_1174_:
{
lean_object* v___x_1178_; 
if (v_isShared_1176_ == 0)
{
v___x_1178_ = v___x_1175_;
goto v_reusejp_1177_;
}
else
{
lean_object* v_reuseFailAlloc_1179_; 
v_reuseFailAlloc_1179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1179_, 0, v_a_1173_);
v___x_1178_ = v_reuseFailAlloc_1179_;
goto v_reusejp_1177_;
}
v_reusejp_1177_:
{
return v___x_1178_;
}
}
}
}
else
{
lean_object* v_a_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1199_; 
lean_dec_ref_known(v___x_1093_, 3);
v_a_1192_ = lean_ctor_get(v___x_1094_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1094_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1194_ = v___x_1094_;
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_a_1192_);
lean_dec(v___x_1094_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___x_1197_; 
if (v_isShared_1195_ == 0)
{
v___x_1197_ = v___x_1194_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v_a_1192_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___boxed(lean_object* v_stx_1200_, lean_object* v_a_1201_, lean_object* v_a_1202_, lean_object* v_a_1203_, lean_object* v_a_1204_, lean_object* v_a_1205_, lean_object* v_a_1206_, lean_object* v_a_1207_){
_start:
{
lean_object* v_res_1208_; 
v_res_1208_ = l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0(v_stx_1200_, v_a_1201_, v_a_1202_, v_a_1203_, v_a_1204_, v_a_1205_, v_a_1206_);
lean_dec(v_a_1206_);
lean_dec_ref(v_a_1205_);
lean_dec(v_a_1204_);
lean_dec_ref(v_a_1203_);
lean_dec(v_a_1202_);
lean_dec_ref(v_a_1201_);
return v_res_1208_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0(lean_object* v_config_1278_, lean_object* v_item_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_){
_start:
{
lean_object* v_item_1288_; lean_object* v___x_1291_; lean_object* v___x_1292_; 
v___x_1291_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__3));
v___x_1292_ = l_Lean_Elab_ConfigEval_ConfigItem_addCompletionInfo(v_item_1279_, v___x_1291_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
if (lean_obj_tag(v___x_1292_) == 0)
{
uint8_t v___x_1293_; 
lean_dec_ref_known(v___x_1292_, 1);
v___x_1293_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v_item_1279_);
if (v___x_1293_ == 0)
{
lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; uint8_t v___x_1297_; 
v___x_1294_ = l_Lean_Elab_ConfigEval_ConfigItem_getRootStr(v_item_1279_);
lean_inc_ref(v_item_1279_);
v___x_1295_ = l_Lean_Elab_ConfigEval_ConfigItem_shift(v_item_1279_);
v___x_1296_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__1));
v___x_1297_ = lean_string_dec_lt(v___x_1294_, v___x_1296_);
if (v___x_1297_ == 0)
{
lean_object* v___x_1298_; uint8_t v___x_1299_; 
v___x_1298_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__2));
v___x_1299_ = lean_string_dec_lt(v___x_1294_, v___x_1298_);
if (v___x_1299_ == 0)
{
uint8_t v___x_1300_; 
v___x_1300_ = lean_string_dec_eq(v___x_1294_, v___x_1298_);
if (v___x_1300_ == 0)
{
lean_object* v___x_1301_; uint8_t v___x_1302_; 
v___x_1301_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__3));
v___x_1302_ = lean_string_dec_eq(v___x_1294_, v___x_1301_);
if (v___x_1302_ == 0)
{
lean_object* v___x_1303_; uint8_t v___x_1304_; 
v___x_1303_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__4));
v___x_1304_ = lean_string_dec_eq(v___x_1294_, v___x_1303_);
lean_dec_ref(v___x_1294_);
if (v___x_1304_ == 0)
{
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_item_1288_ = v___x_1295_;
goto v___jp_1287_;
}
else
{
lean_object* v___x_1305_; lean_object* v___x_1306_; 
v___x_1305_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__5));
v___x_1306_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_1279_, v___x_1305_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
if (lean_obj_tag(v___x_1306_) == 0)
{
uint8_t v___x_1307_; 
lean_dec_ref_known(v___x_1306_, 1);
v___x_1307_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_1295_);
if (v___x_1307_ == 0)
{
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_item_1288_ = v___x_1295_;
goto v___jp_1287_;
}
else
{
lean_object* v___x_1308_; 
lean_dec_ref(v___x_1295_);
v___x_1308_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
if (lean_obj_tag(v___x_1308_) == 0)
{
lean_object* v_a_1309_; lean_object* v___x_1311_; uint8_t v_isShared_1312_; uint8_t v_isSharedCheck_1334_; 
v_a_1309_ = lean_ctor_get(v___x_1308_, 0);
v_isSharedCheck_1334_ = !lean_is_exclusive(v___x_1308_);
if (v_isSharedCheck_1334_ == 0)
{
v___x_1311_ = v___x_1308_;
v_isShared_1312_ = v_isSharedCheck_1334_;
goto v_resetjp_1310_;
}
else
{
lean_inc(v_a_1309_);
lean_dec(v___x_1308_);
v___x_1311_ = lean_box(0);
v_isShared_1312_ = v_isSharedCheck_1334_;
goto v_resetjp_1310_;
}
v_resetjp_1310_:
{
uint8_t v_proofs_1313_; uint8_t v_types_1314_; uint8_t v_implicits_1315_; uint8_t v_descend_1316_; uint8_t v_underBinder_1317_; uint8_t v_merge_1318_; uint8_t v_useContext_1319_; uint8_t v_onlyGivenNames_1320_; uint8_t v_preserveBinderNames_1321_; uint8_t v_lift_1322_; lean_object* v___x_1324_; uint8_t v_isShared_1325_; uint8_t v_isSharedCheck_1333_; 
v_proofs_1313_ = lean_ctor_get_uint8(v_config_1278_, 0);
v_types_1314_ = lean_ctor_get_uint8(v_config_1278_, 1);
v_implicits_1315_ = lean_ctor_get_uint8(v_config_1278_, 2);
v_descend_1316_ = lean_ctor_get_uint8(v_config_1278_, 3);
v_underBinder_1317_ = lean_ctor_get_uint8(v_config_1278_, 4);
v_merge_1318_ = lean_ctor_get_uint8(v_config_1278_, 6);
v_useContext_1319_ = lean_ctor_get_uint8(v_config_1278_, 7);
v_onlyGivenNames_1320_ = lean_ctor_get_uint8(v_config_1278_, 8);
v_preserveBinderNames_1321_ = lean_ctor_get_uint8(v_config_1278_, 9);
v_lift_1322_ = lean_ctor_get_uint8(v_config_1278_, 10);
v_isSharedCheck_1333_ = !lean_is_exclusive(v_config_1278_);
if (v_isSharedCheck_1333_ == 0)
{
v___x_1324_ = v_config_1278_;
v_isShared_1325_ = v_isSharedCheck_1333_;
goto v_resetjp_1323_;
}
else
{
lean_dec(v_config_1278_);
v___x_1324_ = lean_box(0);
v_isShared_1325_ = v_isSharedCheck_1333_;
goto v_resetjp_1323_;
}
v_resetjp_1323_:
{
lean_object* v___x_1327_; 
if (v_isShared_1325_ == 0)
{
v___x_1327_ = v___x_1324_;
goto v_reusejp_1326_;
}
else
{
lean_object* v_reuseFailAlloc_1332_; 
v_reuseFailAlloc_1332_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v_reuseFailAlloc_1332_, 0, v_proofs_1313_);
lean_ctor_set_uint8(v_reuseFailAlloc_1332_, 1, v_types_1314_);
lean_ctor_set_uint8(v_reuseFailAlloc_1332_, 2, v_implicits_1315_);
lean_ctor_set_uint8(v_reuseFailAlloc_1332_, 3, v_descend_1316_);
lean_ctor_set_uint8(v_reuseFailAlloc_1332_, 4, v_underBinder_1317_);
v___x_1327_ = v_reuseFailAlloc_1332_;
goto v_reusejp_1326_;
}
v_reusejp_1326_:
{
uint8_t v___x_1328_; lean_object* v___x_1330_; 
v___x_1328_ = lean_unbox(v_a_1309_);
lean_dec(v_a_1309_);
lean_ctor_set_uint8(v___x_1327_, 5, v___x_1328_);
lean_ctor_set_uint8(v___x_1327_, 6, v_merge_1318_);
lean_ctor_set_uint8(v___x_1327_, 7, v_useContext_1319_);
lean_ctor_set_uint8(v___x_1327_, 8, v_onlyGivenNames_1320_);
lean_ctor_set_uint8(v___x_1327_, 9, v_preserveBinderNames_1321_);
lean_ctor_set_uint8(v___x_1327_, 10, v_lift_1322_);
if (v_isShared_1312_ == 0)
{
lean_ctor_set(v___x_1311_, 0, v___x_1327_);
v___x_1330_ = v___x_1311_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v___x_1327_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
return v___x_1330_;
}
}
}
}
}
else
{
lean_object* v_a_1335_; lean_object* v___x_1337_; uint8_t v_isShared_1338_; uint8_t v_isSharedCheck_1342_; 
lean_dec_ref(v_config_1278_);
v_a_1335_ = lean_ctor_get(v___x_1308_, 0);
v_isSharedCheck_1342_ = !lean_is_exclusive(v___x_1308_);
if (v_isSharedCheck_1342_ == 0)
{
v___x_1337_ = v___x_1308_;
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
else
{
lean_inc(v_a_1335_);
lean_dec(v___x_1308_);
v___x_1337_ = lean_box(0);
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
v_resetjp_1336_:
{
lean_object* v___x_1340_; 
if (v_isShared_1338_ == 0)
{
v___x_1340_ = v___x_1337_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v_a_1335_);
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
lean_dec_ref(v___x_1295_);
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_a_1343_ = lean_ctor_get(v___x_1306_, 0);
v_isSharedCheck_1350_ = !lean_is_exclusive(v___x_1306_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1345_ = v___x_1306_;
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_a_1343_);
lean_dec(v___x_1306_);
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
else
{
lean_object* v___x_1351_; lean_object* v___x_1352_; 
lean_dec_ref(v___x_1294_);
v___x_1351_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__6));
v___x_1352_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_1279_, v___x_1351_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
if (lean_obj_tag(v___x_1352_) == 0)
{
uint8_t v___x_1353_; 
lean_dec_ref_known(v___x_1352_, 1);
v___x_1353_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_1295_);
if (v___x_1353_ == 0)
{
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_item_1288_ = v___x_1295_;
goto v___jp_1287_;
}
else
{
lean_object* v___x_1354_; 
lean_dec_ref(v___x_1295_);
v___x_1354_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
if (lean_obj_tag(v___x_1354_) == 0)
{
lean_object* v_a_1355_; lean_object* v___x_1357_; uint8_t v_isShared_1358_; uint8_t v_isSharedCheck_1380_; 
v_a_1355_ = lean_ctor_get(v___x_1354_, 0);
v_isSharedCheck_1380_ = !lean_is_exclusive(v___x_1354_);
if (v_isSharedCheck_1380_ == 0)
{
v___x_1357_ = v___x_1354_;
v_isShared_1358_ = v_isSharedCheck_1380_;
goto v_resetjp_1356_;
}
else
{
lean_inc(v_a_1355_);
lean_dec(v___x_1354_);
v___x_1357_ = lean_box(0);
v_isShared_1358_ = v_isSharedCheck_1380_;
goto v_resetjp_1356_;
}
v_resetjp_1356_:
{
uint8_t v_proofs_1359_; uint8_t v_types_1360_; uint8_t v_implicits_1361_; uint8_t v_descend_1362_; uint8_t v_underBinder_1363_; uint8_t v_usedOnly_1364_; uint8_t v_merge_1365_; uint8_t v_onlyGivenNames_1366_; uint8_t v_preserveBinderNames_1367_; uint8_t v_lift_1368_; lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1379_; 
v_proofs_1359_ = lean_ctor_get_uint8(v_config_1278_, 0);
v_types_1360_ = lean_ctor_get_uint8(v_config_1278_, 1);
v_implicits_1361_ = lean_ctor_get_uint8(v_config_1278_, 2);
v_descend_1362_ = lean_ctor_get_uint8(v_config_1278_, 3);
v_underBinder_1363_ = lean_ctor_get_uint8(v_config_1278_, 4);
v_usedOnly_1364_ = lean_ctor_get_uint8(v_config_1278_, 5);
v_merge_1365_ = lean_ctor_get_uint8(v_config_1278_, 6);
v_onlyGivenNames_1366_ = lean_ctor_get_uint8(v_config_1278_, 8);
v_preserveBinderNames_1367_ = lean_ctor_get_uint8(v_config_1278_, 9);
v_lift_1368_ = lean_ctor_get_uint8(v_config_1278_, 10);
v_isSharedCheck_1379_ = !lean_is_exclusive(v_config_1278_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1370_ = v_config_1278_;
v_isShared_1371_ = v_isSharedCheck_1379_;
goto v_resetjp_1369_;
}
else
{
lean_dec(v_config_1278_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1379_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v___x_1373_; 
if (v_isShared_1371_ == 0)
{
v___x_1373_ = v___x_1370_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v_reuseFailAlloc_1378_, 0, v_proofs_1359_);
lean_ctor_set_uint8(v_reuseFailAlloc_1378_, 1, v_types_1360_);
lean_ctor_set_uint8(v_reuseFailAlloc_1378_, 2, v_implicits_1361_);
lean_ctor_set_uint8(v_reuseFailAlloc_1378_, 3, v_descend_1362_);
lean_ctor_set_uint8(v_reuseFailAlloc_1378_, 4, v_underBinder_1363_);
lean_ctor_set_uint8(v_reuseFailAlloc_1378_, 5, v_usedOnly_1364_);
lean_ctor_set_uint8(v_reuseFailAlloc_1378_, 6, v_merge_1365_);
v___x_1373_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
uint8_t v___x_1374_; lean_object* v___x_1376_; 
v___x_1374_ = lean_unbox(v_a_1355_);
lean_dec(v_a_1355_);
lean_ctor_set_uint8(v___x_1373_, 7, v___x_1374_);
lean_ctor_set_uint8(v___x_1373_, 8, v_onlyGivenNames_1366_);
lean_ctor_set_uint8(v___x_1373_, 9, v_preserveBinderNames_1367_);
lean_ctor_set_uint8(v___x_1373_, 10, v_lift_1368_);
if (v_isShared_1358_ == 0)
{
lean_ctor_set(v___x_1357_, 0, v___x_1373_);
v___x_1376_ = v___x_1357_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v___x_1373_);
v___x_1376_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
return v___x_1376_;
}
}
}
}
}
else
{
lean_object* v_a_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1388_; 
lean_dec_ref(v_config_1278_);
v_a_1381_ = lean_ctor_get(v___x_1354_, 0);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1354_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1383_ = v___x_1354_;
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_a_1381_);
lean_dec(v___x_1354_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v___x_1386_; 
if (v_isShared_1384_ == 0)
{
v___x_1386_ = v___x_1383_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v_a_1381_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
}
}
}
else
{
lean_object* v_a_1389_; lean_object* v___x_1391_; uint8_t v_isShared_1392_; uint8_t v_isSharedCheck_1396_; 
lean_dec_ref(v___x_1295_);
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_a_1389_ = lean_ctor_get(v___x_1352_, 0);
v_isSharedCheck_1396_ = !lean_is_exclusive(v___x_1352_);
if (v_isSharedCheck_1396_ == 0)
{
v___x_1391_ = v___x_1352_;
v_isShared_1392_ = v_isSharedCheck_1396_;
goto v_resetjp_1390_;
}
else
{
lean_inc(v_a_1389_);
lean_dec(v___x_1352_);
v___x_1391_ = lean_box(0);
v_isShared_1392_ = v_isSharedCheck_1396_;
goto v_resetjp_1390_;
}
v_resetjp_1390_:
{
lean_object* v___x_1394_; 
if (v_isShared_1392_ == 0)
{
v___x_1394_ = v___x_1391_;
goto v_reusejp_1393_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v_a_1389_);
v___x_1394_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1393_;
}
v_reusejp_1393_:
{
return v___x_1394_;
}
}
}
}
}
else
{
lean_object* v___x_1397_; lean_object* v___x_1398_; 
lean_dec_ref(v___x_1294_);
v___x_1397_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__7));
v___x_1398_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_1279_, v___x_1397_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
if (lean_obj_tag(v___x_1398_) == 0)
{
uint8_t v___x_1399_; 
lean_dec_ref_known(v___x_1398_, 1);
v___x_1399_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_1295_);
if (v___x_1399_ == 0)
{
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_item_1288_ = v___x_1295_;
goto v___jp_1287_;
}
else
{
lean_object* v___x_1400_; 
lean_dec_ref(v___x_1295_);
v___x_1400_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
if (lean_obj_tag(v___x_1400_) == 0)
{
lean_object* v_a_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1426_; 
v_a_1401_ = lean_ctor_get(v___x_1400_, 0);
v_isSharedCheck_1426_ = !lean_is_exclusive(v___x_1400_);
if (v_isSharedCheck_1426_ == 0)
{
v___x_1403_ = v___x_1400_;
v_isShared_1404_ = v_isSharedCheck_1426_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_a_1401_);
lean_dec(v___x_1400_);
v___x_1403_ = lean_box(0);
v_isShared_1404_ = v_isSharedCheck_1426_;
goto v_resetjp_1402_;
}
v_resetjp_1402_:
{
uint8_t v_proofs_1405_; uint8_t v_types_1406_; uint8_t v_implicits_1407_; uint8_t v_descend_1408_; uint8_t v_usedOnly_1409_; uint8_t v_merge_1410_; uint8_t v_useContext_1411_; uint8_t v_onlyGivenNames_1412_; uint8_t v_preserveBinderNames_1413_; uint8_t v_lift_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1425_; 
v_proofs_1405_ = lean_ctor_get_uint8(v_config_1278_, 0);
v_types_1406_ = lean_ctor_get_uint8(v_config_1278_, 1);
v_implicits_1407_ = lean_ctor_get_uint8(v_config_1278_, 2);
v_descend_1408_ = lean_ctor_get_uint8(v_config_1278_, 3);
v_usedOnly_1409_ = lean_ctor_get_uint8(v_config_1278_, 5);
v_merge_1410_ = lean_ctor_get_uint8(v_config_1278_, 6);
v_useContext_1411_ = lean_ctor_get_uint8(v_config_1278_, 7);
v_onlyGivenNames_1412_ = lean_ctor_get_uint8(v_config_1278_, 8);
v_preserveBinderNames_1413_ = lean_ctor_get_uint8(v_config_1278_, 9);
v_lift_1414_ = lean_ctor_get_uint8(v_config_1278_, 10);
v_isSharedCheck_1425_ = !lean_is_exclusive(v_config_1278_);
if (v_isSharedCheck_1425_ == 0)
{
v___x_1416_ = v_config_1278_;
v_isShared_1417_ = v_isSharedCheck_1425_;
goto v_resetjp_1415_;
}
else
{
lean_dec(v_config_1278_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1425_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1419_; 
if (v_isShared_1417_ == 0)
{
v___x_1419_ = v___x_1416_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1424_; 
v_reuseFailAlloc_1424_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v_reuseFailAlloc_1424_, 0, v_proofs_1405_);
lean_ctor_set_uint8(v_reuseFailAlloc_1424_, 1, v_types_1406_);
lean_ctor_set_uint8(v_reuseFailAlloc_1424_, 2, v_implicits_1407_);
lean_ctor_set_uint8(v_reuseFailAlloc_1424_, 3, v_descend_1408_);
v___x_1419_ = v_reuseFailAlloc_1424_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
uint8_t v___x_1420_; lean_object* v___x_1422_; 
v___x_1420_ = lean_unbox(v_a_1401_);
lean_dec(v_a_1401_);
lean_ctor_set_uint8(v___x_1419_, 4, v___x_1420_);
lean_ctor_set_uint8(v___x_1419_, 5, v_usedOnly_1409_);
lean_ctor_set_uint8(v___x_1419_, 6, v_merge_1410_);
lean_ctor_set_uint8(v___x_1419_, 7, v_useContext_1411_);
lean_ctor_set_uint8(v___x_1419_, 8, v_onlyGivenNames_1412_);
lean_ctor_set_uint8(v___x_1419_, 9, v_preserveBinderNames_1413_);
lean_ctor_set_uint8(v___x_1419_, 10, v_lift_1414_);
if (v_isShared_1404_ == 0)
{
lean_ctor_set(v___x_1403_, 0, v___x_1419_);
v___x_1422_ = v___x_1403_;
goto v_reusejp_1421_;
}
else
{
lean_object* v_reuseFailAlloc_1423_; 
v_reuseFailAlloc_1423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1423_, 0, v___x_1419_);
v___x_1422_ = v_reuseFailAlloc_1423_;
goto v_reusejp_1421_;
}
v_reusejp_1421_:
{
return v___x_1422_;
}
}
}
}
}
else
{
lean_object* v_a_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1434_; 
lean_dec_ref(v_config_1278_);
v_a_1427_ = lean_ctor_get(v___x_1400_, 0);
v_isSharedCheck_1434_ = !lean_is_exclusive(v___x_1400_);
if (v_isSharedCheck_1434_ == 0)
{
v___x_1429_ = v___x_1400_;
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_a_1427_);
lean_dec(v___x_1400_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1432_; 
if (v_isShared_1430_ == 0)
{
v___x_1432_ = v___x_1429_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v_a_1427_);
v___x_1432_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
return v___x_1432_;
}
}
}
}
}
else
{
lean_object* v_a_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1442_; 
lean_dec_ref(v___x_1295_);
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_a_1435_ = lean_ctor_get(v___x_1398_, 0);
v_isSharedCheck_1442_ = !lean_is_exclusive(v___x_1398_);
if (v_isSharedCheck_1442_ == 0)
{
v___x_1437_ = v___x_1398_;
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_a_1435_);
lean_dec(v___x_1398_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1440_; 
if (v_isShared_1438_ == 0)
{
v___x_1440_ = v___x_1437_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v_a_1435_);
v___x_1440_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
return v___x_1440_;
}
}
}
}
}
else
{
uint8_t v___x_1443_; 
v___x_1443_ = lean_string_dec_eq(v___x_1294_, v___x_1296_);
if (v___x_1443_ == 0)
{
lean_object* v___x_1444_; uint8_t v___x_1445_; 
v___x_1444_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__8));
v___x_1445_ = lean_string_dec_eq(v___x_1294_, v___x_1444_);
if (v___x_1445_ == 0)
{
lean_object* v___x_1446_; uint8_t v___x_1447_; 
v___x_1446_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__9));
v___x_1447_ = lean_string_dec_eq(v___x_1294_, v___x_1446_);
lean_dec_ref(v___x_1294_);
if (v___x_1447_ == 0)
{
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_item_1288_ = v___x_1295_;
goto v___jp_1287_;
}
else
{
lean_object* v___x_1448_; lean_object* v___x_1449_; 
v___x_1448_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__10));
v___x_1449_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_1279_, v___x_1448_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
if (lean_obj_tag(v___x_1449_) == 0)
{
uint8_t v___x_1450_; 
lean_dec_ref_known(v___x_1449_, 1);
v___x_1450_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_1295_);
if (v___x_1450_ == 0)
{
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_item_1288_ = v___x_1295_;
goto v___jp_1287_;
}
else
{
lean_object* v___x_1451_; 
lean_dec_ref(v___x_1295_);
v___x_1451_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
if (lean_obj_tag(v___x_1451_) == 0)
{
lean_object* v_a_1452_; lean_object* v___x_1454_; uint8_t v_isShared_1455_; uint8_t v_isSharedCheck_1477_; 
v_a_1452_ = lean_ctor_get(v___x_1451_, 0);
v_isSharedCheck_1477_ = !lean_is_exclusive(v___x_1451_);
if (v_isSharedCheck_1477_ == 0)
{
v___x_1454_ = v___x_1451_;
v_isShared_1455_ = v_isSharedCheck_1477_;
goto v_resetjp_1453_;
}
else
{
lean_inc(v_a_1452_);
lean_dec(v___x_1451_);
v___x_1454_ = lean_box(0);
v_isShared_1455_ = v_isSharedCheck_1477_;
goto v_resetjp_1453_;
}
v_resetjp_1453_:
{
uint8_t v_proofs_1456_; uint8_t v_implicits_1457_; uint8_t v_descend_1458_; uint8_t v_underBinder_1459_; uint8_t v_usedOnly_1460_; uint8_t v_merge_1461_; uint8_t v_useContext_1462_; uint8_t v_onlyGivenNames_1463_; uint8_t v_preserveBinderNames_1464_; uint8_t v_lift_1465_; lean_object* v___x_1467_; uint8_t v_isShared_1468_; uint8_t v_isSharedCheck_1476_; 
v_proofs_1456_ = lean_ctor_get_uint8(v_config_1278_, 0);
v_implicits_1457_ = lean_ctor_get_uint8(v_config_1278_, 2);
v_descend_1458_ = lean_ctor_get_uint8(v_config_1278_, 3);
v_underBinder_1459_ = lean_ctor_get_uint8(v_config_1278_, 4);
v_usedOnly_1460_ = lean_ctor_get_uint8(v_config_1278_, 5);
v_merge_1461_ = lean_ctor_get_uint8(v_config_1278_, 6);
v_useContext_1462_ = lean_ctor_get_uint8(v_config_1278_, 7);
v_onlyGivenNames_1463_ = lean_ctor_get_uint8(v_config_1278_, 8);
v_preserveBinderNames_1464_ = lean_ctor_get_uint8(v_config_1278_, 9);
v_lift_1465_ = lean_ctor_get_uint8(v_config_1278_, 10);
v_isSharedCheck_1476_ = !lean_is_exclusive(v_config_1278_);
if (v_isSharedCheck_1476_ == 0)
{
v___x_1467_ = v_config_1278_;
v_isShared_1468_ = v_isSharedCheck_1476_;
goto v_resetjp_1466_;
}
else
{
lean_dec(v_config_1278_);
v___x_1467_ = lean_box(0);
v_isShared_1468_ = v_isSharedCheck_1476_;
goto v_resetjp_1466_;
}
v_resetjp_1466_:
{
lean_object* v___x_1470_; 
if (v_isShared_1468_ == 0)
{
v___x_1470_ = v___x_1467_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1475_; 
v_reuseFailAlloc_1475_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v_reuseFailAlloc_1475_, 0, v_proofs_1456_);
v___x_1470_ = v_reuseFailAlloc_1475_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
uint8_t v___x_1471_; lean_object* v___x_1473_; 
v___x_1471_ = lean_unbox(v_a_1452_);
lean_dec(v_a_1452_);
lean_ctor_set_uint8(v___x_1470_, 1, v___x_1471_);
lean_ctor_set_uint8(v___x_1470_, 2, v_implicits_1457_);
lean_ctor_set_uint8(v___x_1470_, 3, v_descend_1458_);
lean_ctor_set_uint8(v___x_1470_, 4, v_underBinder_1459_);
lean_ctor_set_uint8(v___x_1470_, 5, v_usedOnly_1460_);
lean_ctor_set_uint8(v___x_1470_, 6, v_merge_1461_);
lean_ctor_set_uint8(v___x_1470_, 7, v_useContext_1462_);
lean_ctor_set_uint8(v___x_1470_, 8, v_onlyGivenNames_1463_);
lean_ctor_set_uint8(v___x_1470_, 9, v_preserveBinderNames_1464_);
lean_ctor_set_uint8(v___x_1470_, 10, v_lift_1465_);
if (v_isShared_1455_ == 0)
{
lean_ctor_set(v___x_1454_, 0, v___x_1470_);
v___x_1473_ = v___x_1454_;
goto v_reusejp_1472_;
}
else
{
lean_object* v_reuseFailAlloc_1474_; 
v_reuseFailAlloc_1474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1474_, 0, v___x_1470_);
v___x_1473_ = v_reuseFailAlloc_1474_;
goto v_reusejp_1472_;
}
v_reusejp_1472_:
{
return v___x_1473_;
}
}
}
}
}
else
{
lean_object* v_a_1478_; lean_object* v___x_1480_; uint8_t v_isShared_1481_; uint8_t v_isSharedCheck_1485_; 
lean_dec_ref(v_config_1278_);
v_a_1478_ = lean_ctor_get(v___x_1451_, 0);
v_isSharedCheck_1485_ = !lean_is_exclusive(v___x_1451_);
if (v_isSharedCheck_1485_ == 0)
{
v___x_1480_ = v___x_1451_;
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
else
{
lean_inc(v_a_1478_);
lean_dec(v___x_1451_);
v___x_1480_ = lean_box(0);
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
v_resetjp_1479_:
{
lean_object* v___x_1483_; 
if (v_isShared_1481_ == 0)
{
v___x_1483_ = v___x_1480_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v_a_1478_);
v___x_1483_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
return v___x_1483_;
}
}
}
}
}
else
{
lean_object* v_a_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1493_; 
lean_dec_ref(v___x_1295_);
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_a_1486_ = lean_ctor_get(v___x_1449_, 0);
v_isSharedCheck_1493_ = !lean_is_exclusive(v___x_1449_);
if (v_isSharedCheck_1493_ == 0)
{
v___x_1488_ = v___x_1449_;
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
else
{
lean_inc(v_a_1486_);
lean_dec(v___x_1449_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1491_; 
if (v_isShared_1489_ == 0)
{
v___x_1491_ = v___x_1488_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v_a_1486_);
v___x_1491_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
return v___x_1491_;
}
}
}
}
}
else
{
lean_object* v___x_1494_; lean_object* v___x_1495_; 
lean_dec_ref(v___x_1294_);
v___x_1494_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__11));
v___x_1495_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_1279_, v___x_1494_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
if (lean_obj_tag(v___x_1495_) == 0)
{
uint8_t v___x_1496_; 
lean_dec_ref_known(v___x_1495_, 1);
v___x_1496_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_1295_);
if (v___x_1496_ == 0)
{
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_item_1288_ = v___x_1295_;
goto v___jp_1287_;
}
else
{
lean_object* v___x_1497_; 
lean_dec_ref(v___x_1295_);
v___x_1497_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
if (lean_obj_tag(v___x_1497_) == 0)
{
lean_object* v_a_1498_; lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1523_; 
v_a_1498_ = lean_ctor_get(v___x_1497_, 0);
v_isSharedCheck_1523_ = !lean_is_exclusive(v___x_1497_);
if (v_isSharedCheck_1523_ == 0)
{
v___x_1500_ = v___x_1497_;
v_isShared_1501_ = v_isSharedCheck_1523_;
goto v_resetjp_1499_;
}
else
{
lean_inc(v_a_1498_);
lean_dec(v___x_1497_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1523_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
uint8_t v_types_1502_; uint8_t v_implicits_1503_; uint8_t v_descend_1504_; uint8_t v_underBinder_1505_; uint8_t v_usedOnly_1506_; uint8_t v_merge_1507_; uint8_t v_useContext_1508_; uint8_t v_onlyGivenNames_1509_; uint8_t v_preserveBinderNames_1510_; uint8_t v_lift_1511_; lean_object* v___x_1513_; uint8_t v_isShared_1514_; uint8_t v_isSharedCheck_1522_; 
v_types_1502_ = lean_ctor_get_uint8(v_config_1278_, 1);
v_implicits_1503_ = lean_ctor_get_uint8(v_config_1278_, 2);
v_descend_1504_ = lean_ctor_get_uint8(v_config_1278_, 3);
v_underBinder_1505_ = lean_ctor_get_uint8(v_config_1278_, 4);
v_usedOnly_1506_ = lean_ctor_get_uint8(v_config_1278_, 5);
v_merge_1507_ = lean_ctor_get_uint8(v_config_1278_, 6);
v_useContext_1508_ = lean_ctor_get_uint8(v_config_1278_, 7);
v_onlyGivenNames_1509_ = lean_ctor_get_uint8(v_config_1278_, 8);
v_preserveBinderNames_1510_ = lean_ctor_get_uint8(v_config_1278_, 9);
v_lift_1511_ = lean_ctor_get_uint8(v_config_1278_, 10);
v_isSharedCheck_1522_ = !lean_is_exclusive(v_config_1278_);
if (v_isSharedCheck_1522_ == 0)
{
v___x_1513_ = v_config_1278_;
v_isShared_1514_ = v_isSharedCheck_1522_;
goto v_resetjp_1512_;
}
else
{
lean_dec(v_config_1278_);
v___x_1513_ = lean_box(0);
v_isShared_1514_ = v_isSharedCheck_1522_;
goto v_resetjp_1512_;
}
v_resetjp_1512_:
{
lean_object* v___x_1516_; 
if (v_isShared_1514_ == 0)
{
v___x_1516_ = v___x_1513_;
goto v_reusejp_1515_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(0, 0, 11);
v___x_1516_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1515_;
}
v_reusejp_1515_:
{
uint8_t v___x_1517_; lean_object* v___x_1519_; 
v___x_1517_ = lean_unbox(v_a_1498_);
lean_dec(v_a_1498_);
lean_ctor_set_uint8(v___x_1516_, 0, v___x_1517_);
lean_ctor_set_uint8(v___x_1516_, 1, v_types_1502_);
lean_ctor_set_uint8(v___x_1516_, 2, v_implicits_1503_);
lean_ctor_set_uint8(v___x_1516_, 3, v_descend_1504_);
lean_ctor_set_uint8(v___x_1516_, 4, v_underBinder_1505_);
lean_ctor_set_uint8(v___x_1516_, 5, v_usedOnly_1506_);
lean_ctor_set_uint8(v___x_1516_, 6, v_merge_1507_);
lean_ctor_set_uint8(v___x_1516_, 7, v_useContext_1508_);
lean_ctor_set_uint8(v___x_1516_, 8, v_onlyGivenNames_1509_);
lean_ctor_set_uint8(v___x_1516_, 9, v_preserveBinderNames_1510_);
lean_ctor_set_uint8(v___x_1516_, 10, v_lift_1511_);
if (v_isShared_1501_ == 0)
{
lean_ctor_set(v___x_1500_, 0, v___x_1516_);
v___x_1519_ = v___x_1500_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v___x_1516_);
v___x_1519_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1518_;
}
v_reusejp_1518_:
{
return v___x_1519_;
}
}
}
}
}
else
{
lean_object* v_a_1524_; lean_object* v___x_1526_; uint8_t v_isShared_1527_; uint8_t v_isSharedCheck_1531_; 
lean_dec_ref(v_config_1278_);
v_a_1524_ = lean_ctor_get(v___x_1497_, 0);
v_isSharedCheck_1531_ = !lean_is_exclusive(v___x_1497_);
if (v_isSharedCheck_1531_ == 0)
{
v___x_1526_ = v___x_1497_;
v_isShared_1527_ = v_isSharedCheck_1531_;
goto v_resetjp_1525_;
}
else
{
lean_inc(v_a_1524_);
lean_dec(v___x_1497_);
v___x_1526_ = lean_box(0);
v_isShared_1527_ = v_isSharedCheck_1531_;
goto v_resetjp_1525_;
}
v_resetjp_1525_:
{
lean_object* v___x_1529_; 
if (v_isShared_1527_ == 0)
{
v___x_1529_ = v___x_1526_;
goto v_reusejp_1528_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v_a_1524_);
v___x_1529_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1528_;
}
v_reusejp_1528_:
{
return v___x_1529_;
}
}
}
}
}
else
{
lean_object* v_a_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1539_; 
lean_dec_ref(v___x_1295_);
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_a_1532_ = lean_ctor_get(v___x_1495_, 0);
v_isSharedCheck_1539_ = !lean_is_exclusive(v___x_1495_);
if (v_isSharedCheck_1539_ == 0)
{
v___x_1534_ = v___x_1495_;
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_a_1532_);
lean_dec(v___x_1495_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___x_1537_; 
if (v_isShared_1535_ == 0)
{
v___x_1537_ = v___x_1534_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v_a_1532_);
v___x_1537_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
return v___x_1537_;
}
}
}
}
}
else
{
lean_object* v___x_1540_; lean_object* v___x_1541_; 
lean_dec_ref(v___x_1294_);
v___x_1540_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__12));
v___x_1541_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_1279_, v___x_1540_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
if (lean_obj_tag(v___x_1541_) == 0)
{
uint8_t v___x_1542_; 
lean_dec_ref_known(v___x_1541_, 1);
v___x_1542_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_1295_);
if (v___x_1542_ == 0)
{
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_item_1288_ = v___x_1295_;
goto v___jp_1287_;
}
else
{
lean_object* v___x_1543_; 
lean_dec_ref(v___x_1295_);
v___x_1543_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
if (lean_obj_tag(v___x_1543_) == 0)
{
lean_object* v_a_1544_; lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1569_; 
v_a_1544_ = lean_ctor_get(v___x_1543_, 0);
v_isSharedCheck_1569_ = !lean_is_exclusive(v___x_1543_);
if (v_isSharedCheck_1569_ == 0)
{
v___x_1546_ = v___x_1543_;
v_isShared_1547_ = v_isSharedCheck_1569_;
goto v_resetjp_1545_;
}
else
{
lean_inc(v_a_1544_);
lean_dec(v___x_1543_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1569_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
uint8_t v_proofs_1548_; uint8_t v_types_1549_; uint8_t v_implicits_1550_; uint8_t v_descend_1551_; uint8_t v_underBinder_1552_; uint8_t v_usedOnly_1553_; uint8_t v_merge_1554_; uint8_t v_useContext_1555_; uint8_t v_onlyGivenNames_1556_; uint8_t v_lift_1557_; lean_object* v___x_1559_; uint8_t v_isShared_1560_; uint8_t v_isSharedCheck_1568_; 
v_proofs_1548_ = lean_ctor_get_uint8(v_config_1278_, 0);
v_types_1549_ = lean_ctor_get_uint8(v_config_1278_, 1);
v_implicits_1550_ = lean_ctor_get_uint8(v_config_1278_, 2);
v_descend_1551_ = lean_ctor_get_uint8(v_config_1278_, 3);
v_underBinder_1552_ = lean_ctor_get_uint8(v_config_1278_, 4);
v_usedOnly_1553_ = lean_ctor_get_uint8(v_config_1278_, 5);
v_merge_1554_ = lean_ctor_get_uint8(v_config_1278_, 6);
v_useContext_1555_ = lean_ctor_get_uint8(v_config_1278_, 7);
v_onlyGivenNames_1556_ = lean_ctor_get_uint8(v_config_1278_, 8);
v_lift_1557_ = lean_ctor_get_uint8(v_config_1278_, 10);
v_isSharedCheck_1568_ = !lean_is_exclusive(v_config_1278_);
if (v_isSharedCheck_1568_ == 0)
{
v___x_1559_ = v_config_1278_;
v_isShared_1560_ = v_isSharedCheck_1568_;
goto v_resetjp_1558_;
}
else
{
lean_dec(v_config_1278_);
v___x_1559_ = lean_box(0);
v_isShared_1560_ = v_isSharedCheck_1568_;
goto v_resetjp_1558_;
}
v_resetjp_1558_:
{
lean_object* v___x_1562_; 
if (v_isShared_1560_ == 0)
{
v___x_1562_ = v___x_1559_;
goto v_reusejp_1561_;
}
else
{
lean_object* v_reuseFailAlloc_1567_; 
v_reuseFailAlloc_1567_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v_reuseFailAlloc_1567_, 0, v_proofs_1548_);
lean_ctor_set_uint8(v_reuseFailAlloc_1567_, 1, v_types_1549_);
lean_ctor_set_uint8(v_reuseFailAlloc_1567_, 2, v_implicits_1550_);
lean_ctor_set_uint8(v_reuseFailAlloc_1567_, 3, v_descend_1551_);
lean_ctor_set_uint8(v_reuseFailAlloc_1567_, 4, v_underBinder_1552_);
lean_ctor_set_uint8(v_reuseFailAlloc_1567_, 5, v_usedOnly_1553_);
lean_ctor_set_uint8(v_reuseFailAlloc_1567_, 6, v_merge_1554_);
lean_ctor_set_uint8(v_reuseFailAlloc_1567_, 7, v_useContext_1555_);
lean_ctor_set_uint8(v_reuseFailAlloc_1567_, 8, v_onlyGivenNames_1556_);
v___x_1562_ = v_reuseFailAlloc_1567_;
goto v_reusejp_1561_;
}
v_reusejp_1561_:
{
uint8_t v___x_1563_; lean_object* v___x_1565_; 
v___x_1563_ = lean_unbox(v_a_1544_);
lean_dec(v_a_1544_);
lean_ctor_set_uint8(v___x_1562_, 9, v___x_1563_);
lean_ctor_set_uint8(v___x_1562_, 10, v_lift_1557_);
if (v_isShared_1547_ == 0)
{
lean_ctor_set(v___x_1546_, 0, v___x_1562_);
v___x_1565_ = v___x_1546_;
goto v_reusejp_1564_;
}
else
{
lean_object* v_reuseFailAlloc_1566_; 
v_reuseFailAlloc_1566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1566_, 0, v___x_1562_);
v___x_1565_ = v_reuseFailAlloc_1566_;
goto v_reusejp_1564_;
}
v_reusejp_1564_:
{
return v___x_1565_;
}
}
}
}
}
else
{
lean_object* v_a_1570_; lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1577_; 
lean_dec_ref(v_config_1278_);
v_a_1570_ = lean_ctor_get(v___x_1543_, 0);
v_isSharedCheck_1577_ = !lean_is_exclusive(v___x_1543_);
if (v_isSharedCheck_1577_ == 0)
{
v___x_1572_ = v___x_1543_;
v_isShared_1573_ = v_isSharedCheck_1577_;
goto v_resetjp_1571_;
}
else
{
lean_inc(v_a_1570_);
lean_dec(v___x_1543_);
v___x_1572_ = lean_box(0);
v_isShared_1573_ = v_isSharedCheck_1577_;
goto v_resetjp_1571_;
}
v_resetjp_1571_:
{
lean_object* v___x_1575_; 
if (v_isShared_1573_ == 0)
{
v___x_1575_ = v___x_1572_;
goto v_reusejp_1574_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v_a_1570_);
v___x_1575_ = v_reuseFailAlloc_1576_;
goto v_reusejp_1574_;
}
v_reusejp_1574_:
{
return v___x_1575_;
}
}
}
}
}
else
{
lean_object* v_a_1578_; lean_object* v___x_1580_; uint8_t v_isShared_1581_; uint8_t v_isSharedCheck_1585_; 
lean_dec_ref(v___x_1295_);
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_a_1578_ = lean_ctor_get(v___x_1541_, 0);
v_isSharedCheck_1585_ = !lean_is_exclusive(v___x_1541_);
if (v_isSharedCheck_1585_ == 0)
{
v___x_1580_ = v___x_1541_;
v_isShared_1581_ = v_isSharedCheck_1585_;
goto v_resetjp_1579_;
}
else
{
lean_inc(v_a_1578_);
lean_dec(v___x_1541_);
v___x_1580_ = lean_box(0);
v_isShared_1581_ = v_isSharedCheck_1585_;
goto v_resetjp_1579_;
}
v_resetjp_1579_:
{
lean_object* v___x_1583_; 
if (v_isShared_1581_ == 0)
{
v___x_1583_ = v___x_1580_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v_a_1578_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
return v___x_1583_;
}
}
}
}
}
}
else
{
lean_object* v___x_1586_; uint8_t v___x_1587_; 
v___x_1586_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__13));
v___x_1587_ = lean_string_dec_lt(v___x_1294_, v___x_1586_);
if (v___x_1587_ == 0)
{
uint8_t v___x_1588_; 
v___x_1588_ = lean_string_dec_eq(v___x_1294_, v___x_1586_);
if (v___x_1588_ == 0)
{
lean_object* v___x_1589_; uint8_t v___x_1590_; 
v___x_1589_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__14));
v___x_1590_ = lean_string_dec_eq(v___x_1294_, v___x_1589_);
if (v___x_1590_ == 0)
{
lean_object* v___x_1591_; uint8_t v___x_1592_; 
v___x_1591_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__15));
v___x_1592_ = lean_string_dec_eq(v___x_1294_, v___x_1591_);
lean_dec_ref(v___x_1294_);
if (v___x_1592_ == 0)
{
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_item_1288_ = v___x_1295_;
goto v___jp_1287_;
}
else
{
lean_object* v___x_1593_; lean_object* v___x_1594_; 
v___x_1593_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__16));
v___x_1594_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_1279_, v___x_1593_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
if (lean_obj_tag(v___x_1594_) == 0)
{
uint8_t v___x_1595_; 
lean_dec_ref_known(v___x_1594_, 1);
v___x_1595_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_1295_);
if (v___x_1595_ == 0)
{
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_item_1288_ = v___x_1295_;
goto v___jp_1287_;
}
else
{
lean_object* v___x_1596_; 
lean_dec_ref(v___x_1295_);
v___x_1596_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
if (lean_obj_tag(v___x_1596_) == 0)
{
lean_object* v_a_1597_; lean_object* v___x_1599_; uint8_t v_isShared_1600_; uint8_t v_isSharedCheck_1622_; 
v_a_1597_ = lean_ctor_get(v___x_1596_, 0);
v_isSharedCheck_1622_ = !lean_is_exclusive(v___x_1596_);
if (v_isSharedCheck_1622_ == 0)
{
v___x_1599_ = v___x_1596_;
v_isShared_1600_ = v_isSharedCheck_1622_;
goto v_resetjp_1598_;
}
else
{
lean_inc(v_a_1597_);
lean_dec(v___x_1596_);
v___x_1599_ = lean_box(0);
v_isShared_1600_ = v_isSharedCheck_1622_;
goto v_resetjp_1598_;
}
v_resetjp_1598_:
{
uint8_t v_proofs_1601_; uint8_t v_types_1602_; uint8_t v_implicits_1603_; uint8_t v_descend_1604_; uint8_t v_underBinder_1605_; uint8_t v_usedOnly_1606_; uint8_t v_merge_1607_; uint8_t v_useContext_1608_; uint8_t v_preserveBinderNames_1609_; uint8_t v_lift_1610_; lean_object* v___x_1612_; uint8_t v_isShared_1613_; uint8_t v_isSharedCheck_1621_; 
v_proofs_1601_ = lean_ctor_get_uint8(v_config_1278_, 0);
v_types_1602_ = lean_ctor_get_uint8(v_config_1278_, 1);
v_implicits_1603_ = lean_ctor_get_uint8(v_config_1278_, 2);
v_descend_1604_ = lean_ctor_get_uint8(v_config_1278_, 3);
v_underBinder_1605_ = lean_ctor_get_uint8(v_config_1278_, 4);
v_usedOnly_1606_ = lean_ctor_get_uint8(v_config_1278_, 5);
v_merge_1607_ = lean_ctor_get_uint8(v_config_1278_, 6);
v_useContext_1608_ = lean_ctor_get_uint8(v_config_1278_, 7);
v_preserveBinderNames_1609_ = lean_ctor_get_uint8(v_config_1278_, 9);
v_lift_1610_ = lean_ctor_get_uint8(v_config_1278_, 10);
v_isSharedCheck_1621_ = !lean_is_exclusive(v_config_1278_);
if (v_isSharedCheck_1621_ == 0)
{
v___x_1612_ = v_config_1278_;
v_isShared_1613_ = v_isSharedCheck_1621_;
goto v_resetjp_1611_;
}
else
{
lean_dec(v_config_1278_);
v___x_1612_ = lean_box(0);
v_isShared_1613_ = v_isSharedCheck_1621_;
goto v_resetjp_1611_;
}
v_resetjp_1611_:
{
lean_object* v___x_1615_; 
if (v_isShared_1613_ == 0)
{
v___x_1615_ = v___x_1612_;
goto v_reusejp_1614_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v_reuseFailAlloc_1620_, 0, v_proofs_1601_);
lean_ctor_set_uint8(v_reuseFailAlloc_1620_, 1, v_types_1602_);
lean_ctor_set_uint8(v_reuseFailAlloc_1620_, 2, v_implicits_1603_);
lean_ctor_set_uint8(v_reuseFailAlloc_1620_, 3, v_descend_1604_);
lean_ctor_set_uint8(v_reuseFailAlloc_1620_, 4, v_underBinder_1605_);
lean_ctor_set_uint8(v_reuseFailAlloc_1620_, 5, v_usedOnly_1606_);
lean_ctor_set_uint8(v_reuseFailAlloc_1620_, 6, v_merge_1607_);
lean_ctor_set_uint8(v_reuseFailAlloc_1620_, 7, v_useContext_1608_);
v___x_1615_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1614_;
}
v_reusejp_1614_:
{
uint8_t v___x_1616_; lean_object* v___x_1618_; 
v___x_1616_ = lean_unbox(v_a_1597_);
lean_dec(v_a_1597_);
lean_ctor_set_uint8(v___x_1615_, 8, v___x_1616_);
lean_ctor_set_uint8(v___x_1615_, 9, v_preserveBinderNames_1609_);
lean_ctor_set_uint8(v___x_1615_, 10, v_lift_1610_);
if (v_isShared_1600_ == 0)
{
lean_ctor_set(v___x_1599_, 0, v___x_1615_);
v___x_1618_ = v___x_1599_;
goto v_reusejp_1617_;
}
else
{
lean_object* v_reuseFailAlloc_1619_; 
v_reuseFailAlloc_1619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1619_, 0, v___x_1615_);
v___x_1618_ = v_reuseFailAlloc_1619_;
goto v_reusejp_1617_;
}
v_reusejp_1617_:
{
return v___x_1618_;
}
}
}
}
}
else
{
lean_object* v_a_1623_; lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1630_; 
lean_dec_ref(v_config_1278_);
v_a_1623_ = lean_ctor_get(v___x_1596_, 0);
v_isSharedCheck_1630_ = !lean_is_exclusive(v___x_1596_);
if (v_isSharedCheck_1630_ == 0)
{
v___x_1625_ = v___x_1596_;
v_isShared_1626_ = v_isSharedCheck_1630_;
goto v_resetjp_1624_;
}
else
{
lean_inc(v_a_1623_);
lean_dec(v___x_1596_);
v___x_1625_ = lean_box(0);
v_isShared_1626_ = v_isSharedCheck_1630_;
goto v_resetjp_1624_;
}
v_resetjp_1624_:
{
lean_object* v___x_1628_; 
if (v_isShared_1626_ == 0)
{
v___x_1628_ = v___x_1625_;
goto v_reusejp_1627_;
}
else
{
lean_object* v_reuseFailAlloc_1629_; 
v_reuseFailAlloc_1629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1629_, 0, v_a_1623_);
v___x_1628_ = v_reuseFailAlloc_1629_;
goto v_reusejp_1627_;
}
v_reusejp_1627_:
{
return v___x_1628_;
}
}
}
}
}
else
{
lean_object* v_a_1631_; lean_object* v___x_1633_; uint8_t v_isShared_1634_; uint8_t v_isSharedCheck_1638_; 
lean_dec_ref(v___x_1295_);
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_a_1631_ = lean_ctor_get(v___x_1594_, 0);
v_isSharedCheck_1638_ = !lean_is_exclusive(v___x_1594_);
if (v_isSharedCheck_1638_ == 0)
{
v___x_1633_ = v___x_1594_;
v_isShared_1634_ = v_isSharedCheck_1638_;
goto v_resetjp_1632_;
}
else
{
lean_inc(v_a_1631_);
lean_dec(v___x_1594_);
v___x_1633_ = lean_box(0);
v_isShared_1634_ = v_isSharedCheck_1638_;
goto v_resetjp_1632_;
}
v_resetjp_1632_:
{
lean_object* v___x_1636_; 
if (v_isShared_1634_ == 0)
{
v___x_1636_ = v___x_1633_;
goto v_reusejp_1635_;
}
else
{
lean_object* v_reuseFailAlloc_1637_; 
v_reuseFailAlloc_1637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1637_, 0, v_a_1631_);
v___x_1636_ = v_reuseFailAlloc_1637_;
goto v_reusejp_1635_;
}
v_reusejp_1635_:
{
return v___x_1636_;
}
}
}
}
}
else
{
lean_object* v___x_1639_; lean_object* v___x_1640_; 
lean_dec_ref(v___x_1294_);
v___x_1639_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__17));
v___x_1640_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_1279_, v___x_1639_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
if (lean_obj_tag(v___x_1640_) == 0)
{
uint8_t v___x_1641_; 
lean_dec_ref_known(v___x_1640_, 1);
v___x_1641_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_1295_);
if (v___x_1641_ == 0)
{
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_item_1288_ = v___x_1295_;
goto v___jp_1287_;
}
else
{
lean_object* v___x_1642_; 
lean_dec_ref(v___x_1295_);
v___x_1642_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
if (lean_obj_tag(v___x_1642_) == 0)
{
lean_object* v_a_1643_; lean_object* v___x_1645_; uint8_t v_isShared_1646_; uint8_t v_isSharedCheck_1668_; 
v_a_1643_ = lean_ctor_get(v___x_1642_, 0);
v_isSharedCheck_1668_ = !lean_is_exclusive(v___x_1642_);
if (v_isSharedCheck_1668_ == 0)
{
v___x_1645_ = v___x_1642_;
v_isShared_1646_ = v_isSharedCheck_1668_;
goto v_resetjp_1644_;
}
else
{
lean_inc(v_a_1643_);
lean_dec(v___x_1642_);
v___x_1645_ = lean_box(0);
v_isShared_1646_ = v_isSharedCheck_1668_;
goto v_resetjp_1644_;
}
v_resetjp_1644_:
{
uint8_t v_proofs_1647_; uint8_t v_types_1648_; uint8_t v_implicits_1649_; uint8_t v_descend_1650_; uint8_t v_underBinder_1651_; uint8_t v_usedOnly_1652_; uint8_t v_useContext_1653_; uint8_t v_onlyGivenNames_1654_; uint8_t v_preserveBinderNames_1655_; uint8_t v_lift_1656_; lean_object* v___x_1658_; uint8_t v_isShared_1659_; uint8_t v_isSharedCheck_1667_; 
v_proofs_1647_ = lean_ctor_get_uint8(v_config_1278_, 0);
v_types_1648_ = lean_ctor_get_uint8(v_config_1278_, 1);
v_implicits_1649_ = lean_ctor_get_uint8(v_config_1278_, 2);
v_descend_1650_ = lean_ctor_get_uint8(v_config_1278_, 3);
v_underBinder_1651_ = lean_ctor_get_uint8(v_config_1278_, 4);
v_usedOnly_1652_ = lean_ctor_get_uint8(v_config_1278_, 5);
v_useContext_1653_ = lean_ctor_get_uint8(v_config_1278_, 7);
v_onlyGivenNames_1654_ = lean_ctor_get_uint8(v_config_1278_, 8);
v_preserveBinderNames_1655_ = lean_ctor_get_uint8(v_config_1278_, 9);
v_lift_1656_ = lean_ctor_get_uint8(v_config_1278_, 10);
v_isSharedCheck_1667_ = !lean_is_exclusive(v_config_1278_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1658_ = v_config_1278_;
v_isShared_1659_ = v_isSharedCheck_1667_;
goto v_resetjp_1657_;
}
else
{
lean_dec(v_config_1278_);
v___x_1658_ = lean_box(0);
v_isShared_1659_ = v_isSharedCheck_1667_;
goto v_resetjp_1657_;
}
v_resetjp_1657_:
{
lean_object* v___x_1661_; 
if (v_isShared_1659_ == 0)
{
v___x_1661_ = v___x_1658_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v_reuseFailAlloc_1666_, 0, v_proofs_1647_);
lean_ctor_set_uint8(v_reuseFailAlloc_1666_, 1, v_types_1648_);
lean_ctor_set_uint8(v_reuseFailAlloc_1666_, 2, v_implicits_1649_);
lean_ctor_set_uint8(v_reuseFailAlloc_1666_, 3, v_descend_1650_);
lean_ctor_set_uint8(v_reuseFailAlloc_1666_, 4, v_underBinder_1651_);
lean_ctor_set_uint8(v_reuseFailAlloc_1666_, 5, v_usedOnly_1652_);
v___x_1661_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
uint8_t v___x_1662_; lean_object* v___x_1664_; 
v___x_1662_ = lean_unbox(v_a_1643_);
lean_dec(v_a_1643_);
lean_ctor_set_uint8(v___x_1661_, 6, v___x_1662_);
lean_ctor_set_uint8(v___x_1661_, 7, v_useContext_1653_);
lean_ctor_set_uint8(v___x_1661_, 8, v_onlyGivenNames_1654_);
lean_ctor_set_uint8(v___x_1661_, 9, v_preserveBinderNames_1655_);
lean_ctor_set_uint8(v___x_1661_, 10, v_lift_1656_);
if (v_isShared_1646_ == 0)
{
lean_ctor_set(v___x_1645_, 0, v___x_1661_);
v___x_1664_ = v___x_1645_;
goto v_reusejp_1663_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v___x_1661_);
v___x_1664_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1663_;
}
v_reusejp_1663_:
{
return v___x_1664_;
}
}
}
}
}
else
{
lean_object* v_a_1669_; lean_object* v___x_1671_; uint8_t v_isShared_1672_; uint8_t v_isSharedCheck_1676_; 
lean_dec_ref(v_config_1278_);
v_a_1669_ = lean_ctor_get(v___x_1642_, 0);
v_isSharedCheck_1676_ = !lean_is_exclusive(v___x_1642_);
if (v_isSharedCheck_1676_ == 0)
{
v___x_1671_ = v___x_1642_;
v_isShared_1672_ = v_isSharedCheck_1676_;
goto v_resetjp_1670_;
}
else
{
lean_inc(v_a_1669_);
lean_dec(v___x_1642_);
v___x_1671_ = lean_box(0);
v_isShared_1672_ = v_isSharedCheck_1676_;
goto v_resetjp_1670_;
}
v_resetjp_1670_:
{
lean_object* v___x_1674_; 
if (v_isShared_1672_ == 0)
{
v___x_1674_ = v___x_1671_;
goto v_reusejp_1673_;
}
else
{
lean_object* v_reuseFailAlloc_1675_; 
v_reuseFailAlloc_1675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1675_, 0, v_a_1669_);
v___x_1674_ = v_reuseFailAlloc_1675_;
goto v_reusejp_1673_;
}
v_reusejp_1673_:
{
return v___x_1674_;
}
}
}
}
}
else
{
lean_object* v_a_1677_; lean_object* v___x_1679_; uint8_t v_isShared_1680_; uint8_t v_isSharedCheck_1684_; 
lean_dec_ref(v___x_1295_);
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_a_1677_ = lean_ctor_get(v___x_1640_, 0);
v_isSharedCheck_1684_ = !lean_is_exclusive(v___x_1640_);
if (v_isSharedCheck_1684_ == 0)
{
v___x_1679_ = v___x_1640_;
v_isShared_1680_ = v_isSharedCheck_1684_;
goto v_resetjp_1678_;
}
else
{
lean_inc(v_a_1677_);
lean_dec(v___x_1640_);
v___x_1679_ = lean_box(0);
v_isShared_1680_ = v_isSharedCheck_1684_;
goto v_resetjp_1678_;
}
v_resetjp_1678_:
{
lean_object* v___x_1682_; 
if (v_isShared_1680_ == 0)
{
v___x_1682_ = v___x_1679_;
goto v_reusejp_1681_;
}
else
{
lean_object* v_reuseFailAlloc_1683_; 
v_reuseFailAlloc_1683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1683_, 0, v_a_1677_);
v___x_1682_ = v_reuseFailAlloc_1683_;
goto v_reusejp_1681_;
}
v_reusejp_1681_:
{
return v___x_1682_;
}
}
}
}
}
else
{
lean_object* v___x_1685_; lean_object* v___x_1686_; 
lean_dec_ref(v___x_1294_);
v___x_1685_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__18));
v___x_1686_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_1279_, v___x_1685_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
if (lean_obj_tag(v___x_1686_) == 0)
{
uint8_t v___x_1687_; 
lean_dec_ref_known(v___x_1686_, 1);
v___x_1687_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_1295_);
if (v___x_1687_ == 0)
{
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_item_1288_ = v___x_1295_;
goto v___jp_1287_;
}
else
{
lean_object* v___x_1688_; 
lean_dec_ref(v___x_1295_);
v___x_1688_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
if (lean_obj_tag(v___x_1688_) == 0)
{
lean_object* v_a_1689_; lean_object* v___x_1691_; uint8_t v_isShared_1692_; uint8_t v_isSharedCheck_1714_; 
v_a_1689_ = lean_ctor_get(v___x_1688_, 0);
v_isSharedCheck_1714_ = !lean_is_exclusive(v___x_1688_);
if (v_isSharedCheck_1714_ == 0)
{
v___x_1691_ = v___x_1688_;
v_isShared_1692_ = v_isSharedCheck_1714_;
goto v_resetjp_1690_;
}
else
{
lean_inc(v_a_1689_);
lean_dec(v___x_1688_);
v___x_1691_ = lean_box(0);
v_isShared_1692_ = v_isSharedCheck_1714_;
goto v_resetjp_1690_;
}
v_resetjp_1690_:
{
uint8_t v_proofs_1693_; uint8_t v_types_1694_; uint8_t v_implicits_1695_; uint8_t v_descend_1696_; uint8_t v_underBinder_1697_; uint8_t v_usedOnly_1698_; uint8_t v_merge_1699_; uint8_t v_useContext_1700_; uint8_t v_onlyGivenNames_1701_; uint8_t v_preserveBinderNames_1702_; lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1713_; 
v_proofs_1693_ = lean_ctor_get_uint8(v_config_1278_, 0);
v_types_1694_ = lean_ctor_get_uint8(v_config_1278_, 1);
v_implicits_1695_ = lean_ctor_get_uint8(v_config_1278_, 2);
v_descend_1696_ = lean_ctor_get_uint8(v_config_1278_, 3);
v_underBinder_1697_ = lean_ctor_get_uint8(v_config_1278_, 4);
v_usedOnly_1698_ = lean_ctor_get_uint8(v_config_1278_, 5);
v_merge_1699_ = lean_ctor_get_uint8(v_config_1278_, 6);
v_useContext_1700_ = lean_ctor_get_uint8(v_config_1278_, 7);
v_onlyGivenNames_1701_ = lean_ctor_get_uint8(v_config_1278_, 8);
v_preserveBinderNames_1702_ = lean_ctor_get_uint8(v_config_1278_, 9);
v_isSharedCheck_1713_ = !lean_is_exclusive(v_config_1278_);
if (v_isSharedCheck_1713_ == 0)
{
v___x_1704_ = v_config_1278_;
v_isShared_1705_ = v_isSharedCheck_1713_;
goto v_resetjp_1703_;
}
else
{
lean_dec(v_config_1278_);
v___x_1704_ = lean_box(0);
v_isShared_1705_ = v_isSharedCheck_1713_;
goto v_resetjp_1703_;
}
v_resetjp_1703_:
{
lean_object* v___x_1707_; 
if (v_isShared_1705_ == 0)
{
v___x_1707_ = v___x_1704_;
goto v_reusejp_1706_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v_reuseFailAlloc_1712_, 0, v_proofs_1693_);
lean_ctor_set_uint8(v_reuseFailAlloc_1712_, 1, v_types_1694_);
lean_ctor_set_uint8(v_reuseFailAlloc_1712_, 2, v_implicits_1695_);
lean_ctor_set_uint8(v_reuseFailAlloc_1712_, 3, v_descend_1696_);
lean_ctor_set_uint8(v_reuseFailAlloc_1712_, 4, v_underBinder_1697_);
lean_ctor_set_uint8(v_reuseFailAlloc_1712_, 5, v_usedOnly_1698_);
lean_ctor_set_uint8(v_reuseFailAlloc_1712_, 6, v_merge_1699_);
lean_ctor_set_uint8(v_reuseFailAlloc_1712_, 7, v_useContext_1700_);
lean_ctor_set_uint8(v_reuseFailAlloc_1712_, 8, v_onlyGivenNames_1701_);
lean_ctor_set_uint8(v_reuseFailAlloc_1712_, 9, v_preserveBinderNames_1702_);
v___x_1707_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1706_;
}
v_reusejp_1706_:
{
uint8_t v___x_1708_; lean_object* v___x_1710_; 
v___x_1708_ = lean_unbox(v_a_1689_);
lean_dec(v_a_1689_);
lean_ctor_set_uint8(v___x_1707_, 10, v___x_1708_);
if (v_isShared_1692_ == 0)
{
lean_ctor_set(v___x_1691_, 0, v___x_1707_);
v___x_1710_ = v___x_1691_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v___x_1707_);
v___x_1710_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
return v___x_1710_;
}
}
}
}
}
else
{
lean_object* v_a_1715_; lean_object* v___x_1717_; uint8_t v_isShared_1718_; uint8_t v_isSharedCheck_1722_; 
lean_dec_ref(v_config_1278_);
v_a_1715_ = lean_ctor_get(v___x_1688_, 0);
v_isSharedCheck_1722_ = !lean_is_exclusive(v___x_1688_);
if (v_isSharedCheck_1722_ == 0)
{
v___x_1717_ = v___x_1688_;
v_isShared_1718_ = v_isSharedCheck_1722_;
goto v_resetjp_1716_;
}
else
{
lean_inc(v_a_1715_);
lean_dec(v___x_1688_);
v___x_1717_ = lean_box(0);
v_isShared_1718_ = v_isSharedCheck_1722_;
goto v_resetjp_1716_;
}
v_resetjp_1716_:
{
lean_object* v___x_1720_; 
if (v_isShared_1718_ == 0)
{
v___x_1720_ = v___x_1717_;
goto v_reusejp_1719_;
}
else
{
lean_object* v_reuseFailAlloc_1721_; 
v_reuseFailAlloc_1721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1721_, 0, v_a_1715_);
v___x_1720_ = v_reuseFailAlloc_1721_;
goto v_reusejp_1719_;
}
v_reusejp_1719_:
{
return v___x_1720_;
}
}
}
}
}
else
{
lean_object* v_a_1723_; lean_object* v___x_1725_; uint8_t v_isShared_1726_; uint8_t v_isSharedCheck_1730_; 
lean_dec_ref(v___x_1295_);
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_a_1723_ = lean_ctor_get(v___x_1686_, 0);
v_isSharedCheck_1730_ = !lean_is_exclusive(v___x_1686_);
if (v_isSharedCheck_1730_ == 0)
{
v___x_1725_ = v___x_1686_;
v_isShared_1726_ = v_isSharedCheck_1730_;
goto v_resetjp_1724_;
}
else
{
lean_inc(v_a_1723_);
lean_dec(v___x_1686_);
v___x_1725_ = lean_box(0);
v_isShared_1726_ = v_isSharedCheck_1730_;
goto v_resetjp_1724_;
}
v_resetjp_1724_:
{
lean_object* v___x_1728_; 
if (v_isShared_1726_ == 0)
{
v___x_1728_ = v___x_1725_;
goto v_reusejp_1727_;
}
else
{
lean_object* v_reuseFailAlloc_1729_; 
v_reuseFailAlloc_1729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1729_, 0, v_a_1723_);
v___x_1728_ = v_reuseFailAlloc_1729_;
goto v_reusejp_1727_;
}
v_reusejp_1727_:
{
return v___x_1728_;
}
}
}
}
}
else
{
lean_object* v___x_1731_; uint8_t v___x_1732_; 
v___x_1731_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__19));
v___x_1732_ = lean_string_dec_eq(v___x_1294_, v___x_1731_);
if (v___x_1732_ == 0)
{
lean_object* v___x_1733_; uint8_t v___x_1734_; 
v___x_1733_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__20));
v___x_1734_ = lean_string_dec_eq(v___x_1294_, v___x_1733_);
if (v___x_1734_ == 0)
{
lean_object* v___x_1735_; uint8_t v___x_1736_; 
v___x_1735_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__21));
v___x_1736_ = lean_string_dec_eq(v___x_1294_, v___x_1735_);
lean_dec_ref(v___x_1294_);
if (v___x_1736_ == 0)
{
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_item_1288_ = v___x_1295_;
goto v___jp_1287_;
}
else
{
lean_object* v___x_1737_; lean_object* v___x_1738_; 
v___x_1737_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__22));
v___x_1738_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_1279_, v___x_1737_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
if (lean_obj_tag(v___x_1738_) == 0)
{
uint8_t v___x_1739_; 
lean_dec_ref_known(v___x_1738_, 1);
v___x_1739_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_1295_);
if (v___x_1739_ == 0)
{
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_item_1288_ = v___x_1295_;
goto v___jp_1287_;
}
else
{
lean_object* v___x_1740_; 
lean_dec_ref(v___x_1295_);
v___x_1740_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
if (lean_obj_tag(v___x_1740_) == 0)
{
lean_object* v_a_1741_; lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1766_; 
v_a_1741_ = lean_ctor_get(v___x_1740_, 0);
v_isSharedCheck_1766_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1766_ == 0)
{
v___x_1743_ = v___x_1740_;
v_isShared_1744_ = v_isSharedCheck_1766_;
goto v_resetjp_1742_;
}
else
{
lean_inc(v_a_1741_);
lean_dec(v___x_1740_);
v___x_1743_ = lean_box(0);
v_isShared_1744_ = v_isSharedCheck_1766_;
goto v_resetjp_1742_;
}
v_resetjp_1742_:
{
uint8_t v_proofs_1745_; uint8_t v_types_1746_; uint8_t v_descend_1747_; uint8_t v_underBinder_1748_; uint8_t v_usedOnly_1749_; uint8_t v_merge_1750_; uint8_t v_useContext_1751_; uint8_t v_onlyGivenNames_1752_; uint8_t v_preserveBinderNames_1753_; uint8_t v_lift_1754_; lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1765_; 
v_proofs_1745_ = lean_ctor_get_uint8(v_config_1278_, 0);
v_types_1746_ = lean_ctor_get_uint8(v_config_1278_, 1);
v_descend_1747_ = lean_ctor_get_uint8(v_config_1278_, 3);
v_underBinder_1748_ = lean_ctor_get_uint8(v_config_1278_, 4);
v_usedOnly_1749_ = lean_ctor_get_uint8(v_config_1278_, 5);
v_merge_1750_ = lean_ctor_get_uint8(v_config_1278_, 6);
v_useContext_1751_ = lean_ctor_get_uint8(v_config_1278_, 7);
v_onlyGivenNames_1752_ = lean_ctor_get_uint8(v_config_1278_, 8);
v_preserveBinderNames_1753_ = lean_ctor_get_uint8(v_config_1278_, 9);
v_lift_1754_ = lean_ctor_get_uint8(v_config_1278_, 10);
v_isSharedCheck_1765_ = !lean_is_exclusive(v_config_1278_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1756_ = v_config_1278_;
v_isShared_1757_ = v_isSharedCheck_1765_;
goto v_resetjp_1755_;
}
else
{
lean_dec(v_config_1278_);
v___x_1756_ = lean_box(0);
v_isShared_1757_ = v_isSharedCheck_1765_;
goto v_resetjp_1755_;
}
v_resetjp_1755_:
{
lean_object* v___x_1759_; 
if (v_isShared_1757_ == 0)
{
v___x_1759_ = v___x_1756_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v_reuseFailAlloc_1764_, 0, v_proofs_1745_);
lean_ctor_set_uint8(v_reuseFailAlloc_1764_, 1, v_types_1746_);
v___x_1759_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
uint8_t v___x_1760_; lean_object* v___x_1762_; 
v___x_1760_ = lean_unbox(v_a_1741_);
lean_dec(v_a_1741_);
lean_ctor_set_uint8(v___x_1759_, 2, v___x_1760_);
lean_ctor_set_uint8(v___x_1759_, 3, v_descend_1747_);
lean_ctor_set_uint8(v___x_1759_, 4, v_underBinder_1748_);
lean_ctor_set_uint8(v___x_1759_, 5, v_usedOnly_1749_);
lean_ctor_set_uint8(v___x_1759_, 6, v_merge_1750_);
lean_ctor_set_uint8(v___x_1759_, 7, v_useContext_1751_);
lean_ctor_set_uint8(v___x_1759_, 8, v_onlyGivenNames_1752_);
lean_ctor_set_uint8(v___x_1759_, 9, v_preserveBinderNames_1753_);
lean_ctor_set_uint8(v___x_1759_, 10, v_lift_1754_);
if (v_isShared_1744_ == 0)
{
lean_ctor_set(v___x_1743_, 0, v___x_1759_);
v___x_1762_ = v___x_1743_;
goto v_reusejp_1761_;
}
else
{
lean_object* v_reuseFailAlloc_1763_; 
v_reuseFailAlloc_1763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1763_, 0, v___x_1759_);
v___x_1762_ = v_reuseFailAlloc_1763_;
goto v_reusejp_1761_;
}
v_reusejp_1761_:
{
return v___x_1762_;
}
}
}
}
}
else
{
lean_object* v_a_1767_; lean_object* v___x_1769_; uint8_t v_isShared_1770_; uint8_t v_isSharedCheck_1774_; 
lean_dec_ref(v_config_1278_);
v_a_1767_ = lean_ctor_get(v___x_1740_, 0);
v_isSharedCheck_1774_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1774_ == 0)
{
v___x_1769_ = v___x_1740_;
v_isShared_1770_ = v_isSharedCheck_1774_;
goto v_resetjp_1768_;
}
else
{
lean_inc(v_a_1767_);
lean_dec(v___x_1740_);
v___x_1769_ = lean_box(0);
v_isShared_1770_ = v_isSharedCheck_1774_;
goto v_resetjp_1768_;
}
v_resetjp_1768_:
{
lean_object* v___x_1772_; 
if (v_isShared_1770_ == 0)
{
v___x_1772_ = v___x_1769_;
goto v_reusejp_1771_;
}
else
{
lean_object* v_reuseFailAlloc_1773_; 
v_reuseFailAlloc_1773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1773_, 0, v_a_1767_);
v___x_1772_ = v_reuseFailAlloc_1773_;
goto v_reusejp_1771_;
}
v_reusejp_1771_:
{
return v___x_1772_;
}
}
}
}
}
else
{
lean_object* v_a_1775_; lean_object* v___x_1777_; uint8_t v_isShared_1778_; uint8_t v_isSharedCheck_1782_; 
lean_dec_ref(v___x_1295_);
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_a_1775_ = lean_ctor_get(v___x_1738_, 0);
v_isSharedCheck_1782_ = !lean_is_exclusive(v___x_1738_);
if (v_isSharedCheck_1782_ == 0)
{
v___x_1777_ = v___x_1738_;
v_isShared_1778_ = v_isSharedCheck_1782_;
goto v_resetjp_1776_;
}
else
{
lean_inc(v_a_1775_);
lean_dec(v___x_1738_);
v___x_1777_ = lean_box(0);
v_isShared_1778_ = v_isSharedCheck_1782_;
goto v_resetjp_1776_;
}
v_resetjp_1776_:
{
lean_object* v___x_1780_; 
if (v_isShared_1778_ == 0)
{
v___x_1780_ = v___x_1777_;
goto v_reusejp_1779_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v_a_1775_);
v___x_1780_ = v_reuseFailAlloc_1781_;
goto v_reusejp_1779_;
}
v_reusejp_1779_:
{
return v___x_1780_;
}
}
}
}
}
else
{
lean_object* v___x_1783_; lean_object* v___x_1784_; 
lean_dec_ref(v___x_1294_);
v___x_1783_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__23));
v___x_1784_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_1279_, v___x_1783_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
if (lean_obj_tag(v___x_1784_) == 0)
{
uint8_t v___x_1785_; 
lean_dec_ref_known(v___x_1784_, 1);
v___x_1785_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_1295_);
if (v___x_1785_ == 0)
{
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_item_1288_ = v___x_1295_;
goto v___jp_1287_;
}
else
{
lean_object* v___x_1786_; 
lean_dec_ref(v___x_1295_);
v___x_1786_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
if (lean_obj_tag(v___x_1786_) == 0)
{
lean_object* v_a_1787_; lean_object* v___x_1789_; uint8_t v_isShared_1790_; uint8_t v_isSharedCheck_1812_; 
v_a_1787_ = lean_ctor_get(v___x_1786_, 0);
v_isSharedCheck_1812_ = !lean_is_exclusive(v___x_1786_);
if (v_isSharedCheck_1812_ == 0)
{
v___x_1789_ = v___x_1786_;
v_isShared_1790_ = v_isSharedCheck_1812_;
goto v_resetjp_1788_;
}
else
{
lean_inc(v_a_1787_);
lean_dec(v___x_1786_);
v___x_1789_ = lean_box(0);
v_isShared_1790_ = v_isSharedCheck_1812_;
goto v_resetjp_1788_;
}
v_resetjp_1788_:
{
uint8_t v_proofs_1791_; uint8_t v_types_1792_; uint8_t v_implicits_1793_; uint8_t v_underBinder_1794_; uint8_t v_usedOnly_1795_; uint8_t v_merge_1796_; uint8_t v_useContext_1797_; uint8_t v_onlyGivenNames_1798_; uint8_t v_preserveBinderNames_1799_; uint8_t v_lift_1800_; lean_object* v___x_1802_; uint8_t v_isShared_1803_; uint8_t v_isSharedCheck_1811_; 
v_proofs_1791_ = lean_ctor_get_uint8(v_config_1278_, 0);
v_types_1792_ = lean_ctor_get_uint8(v_config_1278_, 1);
v_implicits_1793_ = lean_ctor_get_uint8(v_config_1278_, 2);
v_underBinder_1794_ = lean_ctor_get_uint8(v_config_1278_, 4);
v_usedOnly_1795_ = lean_ctor_get_uint8(v_config_1278_, 5);
v_merge_1796_ = lean_ctor_get_uint8(v_config_1278_, 6);
v_useContext_1797_ = lean_ctor_get_uint8(v_config_1278_, 7);
v_onlyGivenNames_1798_ = lean_ctor_get_uint8(v_config_1278_, 8);
v_preserveBinderNames_1799_ = lean_ctor_get_uint8(v_config_1278_, 9);
v_lift_1800_ = lean_ctor_get_uint8(v_config_1278_, 10);
v_isSharedCheck_1811_ = !lean_is_exclusive(v_config_1278_);
if (v_isSharedCheck_1811_ == 0)
{
v___x_1802_ = v_config_1278_;
v_isShared_1803_ = v_isSharedCheck_1811_;
goto v_resetjp_1801_;
}
else
{
lean_dec(v_config_1278_);
v___x_1802_ = lean_box(0);
v_isShared_1803_ = v_isSharedCheck_1811_;
goto v_resetjp_1801_;
}
v_resetjp_1801_:
{
lean_object* v___x_1805_; 
if (v_isShared_1803_ == 0)
{
v___x_1805_ = v___x_1802_;
goto v_reusejp_1804_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v_reuseFailAlloc_1810_, 0, v_proofs_1791_);
lean_ctor_set_uint8(v_reuseFailAlloc_1810_, 1, v_types_1792_);
lean_ctor_set_uint8(v_reuseFailAlloc_1810_, 2, v_implicits_1793_);
v___x_1805_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1804_;
}
v_reusejp_1804_:
{
uint8_t v___x_1806_; lean_object* v___x_1808_; 
v___x_1806_ = lean_unbox(v_a_1787_);
lean_dec(v_a_1787_);
lean_ctor_set_uint8(v___x_1805_, 3, v___x_1806_);
lean_ctor_set_uint8(v___x_1805_, 4, v_underBinder_1794_);
lean_ctor_set_uint8(v___x_1805_, 5, v_usedOnly_1795_);
lean_ctor_set_uint8(v___x_1805_, 6, v_merge_1796_);
lean_ctor_set_uint8(v___x_1805_, 7, v_useContext_1797_);
lean_ctor_set_uint8(v___x_1805_, 8, v_onlyGivenNames_1798_);
lean_ctor_set_uint8(v___x_1805_, 9, v_preserveBinderNames_1799_);
lean_ctor_set_uint8(v___x_1805_, 10, v_lift_1800_);
if (v_isShared_1790_ == 0)
{
lean_ctor_set(v___x_1789_, 0, v___x_1805_);
v___x_1808_ = v___x_1789_;
goto v_reusejp_1807_;
}
else
{
lean_object* v_reuseFailAlloc_1809_; 
v_reuseFailAlloc_1809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1809_, 0, v___x_1805_);
v___x_1808_ = v_reuseFailAlloc_1809_;
goto v_reusejp_1807_;
}
v_reusejp_1807_:
{
return v___x_1808_;
}
}
}
}
}
else
{
lean_object* v_a_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1820_; 
lean_dec_ref(v_config_1278_);
v_a_1813_ = lean_ctor_get(v___x_1786_, 0);
v_isSharedCheck_1820_ = !lean_is_exclusive(v___x_1786_);
if (v_isSharedCheck_1820_ == 0)
{
v___x_1815_ = v___x_1786_;
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_a_1813_);
lean_dec(v___x_1786_);
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
}
else
{
lean_object* v_a_1821_; lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1828_; 
lean_dec_ref(v___x_1295_);
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_a_1821_ = lean_ctor_get(v___x_1784_, 0);
v_isSharedCheck_1828_ = !lean_is_exclusive(v___x_1784_);
if (v_isSharedCheck_1828_ == 0)
{
v___x_1823_ = v___x_1784_;
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
else
{
lean_inc(v_a_1821_);
lean_dec(v___x_1784_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v___x_1826_; 
if (v_isShared_1824_ == 0)
{
v___x_1826_ = v___x_1823_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v_a_1821_);
v___x_1826_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
return v___x_1826_;
}
}
}
}
}
else
{
uint8_t v___x_1829_; 
lean_dec_ref(v___x_1294_);
lean_dec_ref(v_config_1278_);
v___x_1829_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_1295_);
if (v___x_1829_ == 0)
{
lean_dec_ref(v_item_1279_);
v_item_1288_ = v___x_1295_;
goto v___jp_1287_;
}
else
{
lean_object* v_value_1830_; lean_object* v___x_1831_; 
lean_dec_ref(v___x_1295_);
v_value_1830_ = lean_ctor_get(v_item_1279_, 2);
lean_inc(v_value_1830_);
lean_dec_ref(v_item_1279_);
v___x_1831_ = l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0(v_value_1830_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
return v___x_1831_;
}
}
}
}
}
else
{
lean_dec_ref(v_config_1278_);
v_item_1288_ = v_item_1279_;
goto v___jp_1287_;
}
}
else
{
lean_object* v_a_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1839_; 
lean_dec_ref(v_item_1279_);
lean_dec_ref(v_config_1278_);
v_a_1832_ = lean_ctor_get(v___x_1292_, 0);
v_isSharedCheck_1839_ = !lean_is_exclusive(v___x_1292_);
if (v_isSharedCheck_1839_ == 0)
{
v___x_1834_ = v___x_1292_;
v_isShared_1835_ = v_isSharedCheck_1839_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_a_1832_);
lean_dec(v___x_1292_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1839_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
lean_object* v___x_1837_; 
if (v_isShared_1835_ == 0)
{
v___x_1837_ = v___x_1834_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v_a_1832_);
v___x_1837_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
return v___x_1837_;
}
}
}
v___jp_1287_:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1289_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__0));
v___x_1290_ = l_Lean_Elab_ConfigEval_ConfigItem_throwInvalidOption___redArg(v_item_1288_, v___x_1289_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
return v___x_1290_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___boxed(lean_object* v_config_1840_, lean_object* v_item_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_){
_start:
{
lean_object* v_res_1849_; 
v_res_1849_ = l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0(v_config_1840_, v_item_1841_, v___y_1842_, v___y_1843_, v___y_1844_, v___y_1845_, v___y_1846_, v___y_1847_);
lean_dec(v___y_1847_);
lean_dec_ref(v___y_1846_);
lean_dec(v___y_1845_);
lean_dec_ref(v___y_1844_);
lean_dec(v___y_1843_);
lean_dec_ref(v___y_1842_);
return v_res_1849_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__0(lean_object* v_e_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_){
_start:
{
lean_object* v___x_1860_; 
v___x_1860_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__0___redArg(v_e_1852_, v___y_1856_);
return v___x_1860_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__0___boxed(lean_object* v_e_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_){
_start:
{
lean_object* v_res_1869_; 
v_res_1869_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__0(v_e_1861_, v___y_1862_, v___y_1863_, v___y_1864_, v___y_1865_, v___y_1866_, v___y_1867_);
lean_dec(v___y_1867_);
lean_dec_ref(v___y_1866_);
lean_dec(v___y_1865_);
lean_dec_ref(v___y_1864_);
lean_dec(v___y_1863_);
lean_dec_ref(v___y_1862_);
return v_res_1869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__2(lean_object* v_00_u03b1_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_){
_start:
{
lean_object* v___x_1878_; 
v___x_1878_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__2___redArg();
return v___x_1878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__2___boxed(lean_object* v_00_u03b1_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_){
_start:
{
lean_object* v_res_1887_; 
v_res_1887_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__2(v_00_u03b1_1879_, v___y_1880_, v___y_1881_, v___y_1882_, v___y_1883_, v___y_1884_, v___y_1885_);
lean_dec(v___y_1885_);
lean_dec_ref(v___y_1884_);
lean_dec(v___y_1883_);
lean_dec_ref(v___y_1882_);
lean_dec(v___y_1881_);
lean_dec_ref(v___y_1880_);
return v_res_1887_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1(lean_object* v_00_u03b1_1888_, lean_object* v_msg_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_){
_start:
{
lean_object* v___x_1897_; 
v___x_1897_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1___redArg(v_msg_1889_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
return v___x_1897_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1898_, lean_object* v_msg_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_){
_start:
{
lean_object* v_res_1907_; 
v_res_1907_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1(v_00_u03b1_1898_, v_msg_1899_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_, v___y_1905_);
lean_dec(v___y_1905_);
lean_dec_ref(v___y_1904_);
lean_dec(v___y_1903_);
lean_dec_ref(v___y_1902_);
lean_dec(v___y_1901_);
lean_dec_ref(v___y_1900_);
return v_res_1907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2(lean_object* v_msgData_1908_, lean_object* v_macroStack_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_){
_start:
{
lean_object* v___x_1917_; 
v___x_1917_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg(v_msgData_1908_, v_macroStack_1909_, v___y_1914_);
return v___x_1917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2___boxed(lean_object* v_msgData_1918_, lean_object* v_macroStack_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_){
_start:
{
lean_object* v_res_1927_; 
v_res_1927_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1_spec__2(v_msgData_1918_, v_macroStack_1919_, v___y_1920_, v___y_1921_, v___y_1922_, v___y_1923_, v___y_1924_, v___y_1925_);
lean_dec(v___y_1925_);
lean_dec_ref(v___y_1924_);
lean_dec(v___y_1923_);
lean_dec_ref(v___y_1922_);
lean_dec(v___y_1921_);
lean_dec_ref(v___y_1920_);
return v_res_1927_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; 
v___x_1928_ = lean_box(0);
v___x_1929_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___closed__3));
v___x_1930_ = l_Lean_mkConst(v___x_1929_, v___x_1928_);
return v___x_1930_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1931_; lean_object* v___x_1932_; 
v___x_1931_ = lean_obj_once(&l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg___lam__0___closed__0, &l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg___lam__0___closed__0);
v___x_1932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1932_, 0, v___x_1931_);
return v___x_1932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg___lam__0(lean_object* v_cfg_1933_, lean_object* v_cfgItem_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_){
_start:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; 
v___x_1942_ = lean_obj_once(&l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg___lam__0___closed__1, &l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg___lam__0___closed__1);
v___x_1943_ = l_Lean_Elab_ConfigEval_EvalConfigItem_defaultOnErr___redArg(v_cfg_1933_, v_cfgItem_1934_, v___x_1942_, v___y_1935_, v___y_1936_, v___y_1937_, v___y_1938_, v___y_1939_, v___y_1940_);
return v___x_1943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg___lam__0___boxed(lean_object* v_cfg_1944_, lean_object* v_cfgItem_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_){
_start:
{
lean_object* v_res_1953_; 
v_res_1953_ = l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg___lam__0(v_cfg_1944_, v_cfgItem_1945_, v___y_1946_, v___y_1947_, v___y_1948_, v___y_1949_, v___y_1950_, v___y_1951_);
lean_dec(v___y_1951_);
lean_dec_ref(v___y_1950_);
lean_dec(v___y_1949_);
lean_dec_ref(v___y_1948_);
lean_dec(v___y_1947_);
lean_dec_ref(v___y_1946_);
lean_dec(v_cfgItem_1945_);
return v_res_1953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg(lean_object* v_cfg_1955_, lean_object* v_init_1956_, uint8_t v_logExceptions_1957_, lean_object* v_a_1958_, lean_object* v_a_1959_, lean_object* v_a_1960_){
_start:
{
lean_object* v_onErr_1962_; lean_object* v_eval_1963_; 
v_onErr_1962_ = ((lean_object*)(l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg___closed__0));
v_eval_1963_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___closed__0));
if (v_logExceptions_1957_ == 0)
{
lean_object* v___x_1964_; 
v___x_1964_ = l_Lean_Elab_ConfigEval_EvalConfigItem_setConfig_x27___redArg(v_eval_1963_, v_init_1956_, v_cfg_1955_, v_onErr_1962_, v_logExceptions_1957_, v_a_1959_, v_a_1960_);
return v___x_1964_;
}
else
{
uint8_t v_recover_1965_; lean_object* v___x_1966_; 
v_recover_1965_ = lean_ctor_get_uint8(v_a_1958_, sizeof(void*)*1);
v___x_1966_ = l_Lean_Elab_ConfigEval_EvalConfigItem_setConfig_x27___redArg(v_eval_1963_, v_init_1956_, v_cfg_1955_, v_onErr_1962_, v_recover_1965_, v_a_1959_, v_a_1960_);
return v___x_1966_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg___boxed(lean_object* v_cfg_1967_, lean_object* v_init_1968_, lean_object* v_logExceptions_1969_, lean_object* v_a_1970_, lean_object* v_a_1971_, lean_object* v_a_1972_, lean_object* v_a_1973_){
_start:
{
uint8_t v_logExceptions_boxed_1974_; lean_object* v_res_1975_; 
v_logExceptions_boxed_1974_ = lean_unbox(v_logExceptions_1969_);
v_res_1975_ = l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg(v_cfg_1967_, v_init_1968_, v_logExceptions_boxed_1974_, v_a_1970_, v_a_1971_, v_a_1972_);
lean_dec(v_a_1972_);
lean_dec_ref(v_a_1971_);
lean_dec_ref(v_a_1970_);
return v_res_1975_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabExtractLetsConfig(lean_object* v_cfg_1976_, lean_object* v_init_1977_, uint8_t v_logExceptions_1978_, lean_object* v_a_1979_, lean_object* v_a_1980_, lean_object* v_a_1981_, lean_object* v_a_1982_, lean_object* v_a_1983_, lean_object* v_a_1984_, lean_object* v_a_1985_, lean_object* v_a_1986_){
_start:
{
lean_object* v___x_1988_; 
v___x_1988_ = l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg(v_cfg_1976_, v_init_1977_, v_logExceptions_1978_, v_a_1979_, v_a_1985_, v_a_1986_);
return v___x_1988_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabExtractLetsConfig___boxed(lean_object* v_cfg_1989_, lean_object* v_init_1990_, lean_object* v_logExceptions_1991_, lean_object* v_a_1992_, lean_object* v_a_1993_, lean_object* v_a_1994_, lean_object* v_a_1995_, lean_object* v_a_1996_, lean_object* v_a_1997_, lean_object* v_a_1998_, lean_object* v_a_1999_, lean_object* v_a_2000_){
_start:
{
uint8_t v_logExceptions_boxed_2001_; lean_object* v_res_2002_; 
v_logExceptions_boxed_2001_ = lean_unbox(v_logExceptions_1991_);
v_res_2002_ = l_Lean_Elab_Tactic_elabExtractLetsConfig(v_cfg_1989_, v_init_1990_, v_logExceptions_boxed_2001_, v_a_1992_, v_a_1993_, v_a_1994_, v_a_1995_, v_a_1996_, v_a_1997_, v_a_1998_, v_a_1999_);
lean_dec(v_a_1999_);
lean_dec_ref(v_a_1998_);
lean_dec(v_a_1997_);
lean_dec_ref(v_a_1996_);
lean_dec(v_a_1995_);
lean_dec_ref(v_a_1994_);
lean_dec(v_a_1993_);
lean_dec_ref(v_a_1992_);
return v_res_2002_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; 
v___x_2003_ = lean_box(0);
v___x_2004_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_2005_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2005_, 0, v___x_2004_);
lean_ctor_set(v___x_2005_, 1, v___x_2003_);
return v___x_2005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1___redArg(){
_start:
{
lean_object* v___x_2007_; lean_object* v___x_2008_; 
v___x_2007_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1___redArg___closed__0);
v___x_2008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2008_, 0, v___x_2007_);
return v___x_2008_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1___redArg___boxed(lean_object* v___y_2009_){
_start:
{
lean_object* v_res_2010_; 
v_res_2010_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1___redArg();
return v_res_2010_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1(lean_object* v_00_u03b1_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_){
_start:
{
lean_object* v___x_2021_; 
v___x_2021_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1___redArg();
return v___x_2021_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1___boxed(lean_object* v_00_u03b1_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_){
_start:
{
lean_object* v_res_2032_; 
v_res_2032_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1(v_00_u03b1_2022_, v___y_2023_, v___y_2024_, v___y_2025_, v___y_2026_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_);
lean_dec(v___y_2030_);
lean_dec_ref(v___y_2029_);
lean_dec(v___y_2028_);
lean_dec_ref(v___y_2027_);
lean_dec(v___y_2026_);
lean_dec_ref(v___y_2025_);
lean_dec(v___y_2024_);
lean_dec_ref(v___y_2023_);
return v_res_2032_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_evalExtractLets_spec__0___redArg(lean_object* v_msg_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_){
_start:
{
lean_object* v_ref_2039_; lean_object* v___x_2040_; lean_object* v_a_2041_; lean_object* v___x_2043_; uint8_t v_isShared_2044_; uint8_t v_isSharedCheck_2049_; 
v_ref_2039_ = lean_ctor_get(v___y_2036_, 2);
v___x_2040_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Tactic_extractLetsAddVarInfo_spec__0_spec__1_spec__3_spec__5_spec__6(v_msg_2033_, v___y_2034_, v___y_2035_, v___y_2036_, v___y_2037_);
v_a_2041_ = lean_ctor_get(v___x_2040_, 0);
v_isSharedCheck_2049_ = !lean_is_exclusive(v___x_2040_);
if (v_isSharedCheck_2049_ == 0)
{
v___x_2043_ = v___x_2040_;
v_isShared_2044_ = v_isSharedCheck_2049_;
goto v_resetjp_2042_;
}
else
{
lean_inc(v_a_2041_);
lean_dec(v___x_2040_);
v___x_2043_ = lean_box(0);
v_isShared_2044_ = v_isSharedCheck_2049_;
goto v_resetjp_2042_;
}
v_resetjp_2042_:
{
lean_object* v___x_2045_; lean_object* v___x_2047_; 
lean_inc(v_ref_2039_);
v___x_2045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2045_, 0, v_ref_2039_);
lean_ctor_set(v___x_2045_, 1, v_a_2041_);
if (v_isShared_2044_ == 0)
{
lean_ctor_set_tag(v___x_2043_, 1);
lean_ctor_set(v___x_2043_, 0, v___x_2045_);
v___x_2047_ = v___x_2043_;
goto v_reusejp_2046_;
}
else
{
lean_object* v_reuseFailAlloc_2048_; 
v_reuseFailAlloc_2048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2048_, 0, v___x_2045_);
v___x_2047_ = v_reuseFailAlloc_2048_;
goto v_reusejp_2046_;
}
v_reusejp_2046_:
{
return v___x_2047_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_evalExtractLets_spec__0___redArg___boxed(lean_object* v_msg_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_){
_start:
{
lean_object* v_res_2056_; 
v_res_2056_ = l_Lean_throwError___at___00Lean_Elab_Tactic_evalExtractLets_spec__0___redArg(v_msg_2050_, v___y_2051_, v___y_2052_, v___y_2053_, v___y_2054_);
lean_dec(v___y_2054_);
lean_dec_ref(v___y_2053_);
lean_dec(v___y_2052_);
lean_dec_ref(v___y_2051_);
return v_res_2056_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalExtractLets___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2058_; lean_object* v___x_2059_; 
v___x_2058_ = ((lean_object*)(l_Lean_Elab_Tactic_evalExtractLets___lam__0___closed__0));
v___x_2059_ = l_Lean_stringToMessageData(v___x_2058_);
return v___x_2059_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExtractLets___lam__0(lean_object* v_x_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_){
_start:
{
lean_object* v___x_2070_; lean_object* v___x_2071_; 
v___x_2070_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExtractLets___lam__0___closed__1, &l_Lean_Elab_Tactic_evalExtractLets___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_evalExtractLets___lam__0___closed__1);
v___x_2071_ = l_Lean_throwError___at___00Lean_Elab_Tactic_evalExtractLets_spec__0___redArg(v___x_2070_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_);
return v___x_2071_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExtractLets___lam__0___boxed(lean_object* v_x_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_){
_start:
{
lean_object* v_res_2082_; 
v_res_2082_ = l_Lean_Elab_Tactic_evalExtractLets___lam__0(v_x_2072_, v___y_2073_, v___y_2074_, v___y_2075_, v___y_2076_, v___y_2077_, v___y_2078_, v___y_2079_, v___y_2080_);
lean_dec(v___y_2080_);
lean_dec_ref(v___y_2079_);
lean_dec(v___y_2078_);
lean_dec_ref(v___y_2077_);
lean_dec(v___y_2076_);
lean_dec_ref(v___y_2075_);
lean_dec(v___y_2074_);
lean_dec_ref(v___y_2073_);
lean_dec(v_x_2072_);
return v_res_2082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExtractLets___lam__1(lean_object* v_h_2083_, lean_object* v___x_2084_, lean_object* v_a_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_){
_start:
{
lean_object* v___x_2095_; 
v___x_2095_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_2087_, v___y_2090_, v___y_2091_, v___y_2092_, v___y_2093_);
if (lean_obj_tag(v___x_2095_) == 0)
{
lean_object* v_a_2096_; lean_object* v___x_2097_; 
v_a_2096_ = lean_ctor_get(v___x_2095_, 0);
lean_inc(v_a_2096_);
lean_dec_ref_known(v___x_2095_, 1);
v___x_2097_ = l_Lean_MVarId_extractLetsLocalDecl(v_a_2096_, v_h_2083_, v___x_2084_, v_a_2085_, v___y_2090_, v___y_2091_, v___y_2092_, v___y_2093_);
if (lean_obj_tag(v___x_2097_) == 0)
{
lean_object* v_a_2098_; lean_object* v_fst_2099_; lean_object* v_snd_2100_; lean_object* v_fst_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2126_; 
v_a_2098_ = lean_ctor_get(v___x_2097_, 0);
lean_inc(v_a_2098_);
lean_dec_ref_known(v___x_2097_, 1);
v_fst_2099_ = lean_ctor_get(v_a_2098_, 0);
lean_inc(v_fst_2099_);
v_snd_2100_ = lean_ctor_get(v_a_2098_, 1);
lean_inc(v_snd_2100_);
lean_dec(v_a_2098_);
v_fst_2101_ = lean_ctor_get(v_fst_2099_, 0);
v_isSharedCheck_2126_ = !lean_is_exclusive(v_fst_2099_);
if (v_isSharedCheck_2126_ == 0)
{
lean_object* v_unused_2127_; 
v_unused_2127_ = lean_ctor_get(v_fst_2099_, 1);
lean_dec(v_unused_2127_);
v___x_2103_ = v_fst_2099_;
v_isShared_2104_ = v_isSharedCheck_2126_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_fst_2101_);
lean_dec(v_fst_2099_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2126_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v___x_2105_; lean_object* v___x_2107_; 
v___x_2105_ = lean_box(0);
if (v_isShared_2104_ == 0)
{
lean_ctor_set_tag(v___x_2103_, 1);
lean_ctor_set(v___x_2103_, 1, v___x_2105_);
lean_ctor_set(v___x_2103_, 0, v_snd_2100_);
v___x_2107_ = v___x_2103_;
goto v_reusejp_2106_;
}
else
{
lean_object* v_reuseFailAlloc_2125_; 
v_reuseFailAlloc_2125_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2125_, 0, v_snd_2100_);
lean_ctor_set(v_reuseFailAlloc_2125_, 1, v___x_2105_);
v___x_2107_ = v_reuseFailAlloc_2125_;
goto v_reusejp_2106_;
}
v_reusejp_2106_:
{
lean_object* v___x_2108_; 
v___x_2108_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2107_, v___y_2087_, v___y_2090_, v___y_2091_, v___y_2092_, v___y_2093_);
if (lean_obj_tag(v___x_2108_) == 0)
{
lean_object* v___x_2110_; uint8_t v_isShared_2111_; uint8_t v_isSharedCheck_2115_; 
v_isSharedCheck_2115_ = !lean_is_exclusive(v___x_2108_);
if (v_isSharedCheck_2115_ == 0)
{
lean_object* v_unused_2116_; 
v_unused_2116_ = lean_ctor_get(v___x_2108_, 0);
lean_dec(v_unused_2116_);
v___x_2110_ = v___x_2108_;
v_isShared_2111_ = v_isSharedCheck_2115_;
goto v_resetjp_2109_;
}
else
{
lean_dec(v___x_2108_);
v___x_2110_ = lean_box(0);
v_isShared_2111_ = v_isSharedCheck_2115_;
goto v_resetjp_2109_;
}
v_resetjp_2109_:
{
lean_object* v___x_2113_; 
if (v_isShared_2111_ == 0)
{
lean_ctor_set(v___x_2110_, 0, v_fst_2101_);
v___x_2113_ = v___x_2110_;
goto v_reusejp_2112_;
}
else
{
lean_object* v_reuseFailAlloc_2114_; 
v_reuseFailAlloc_2114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2114_, 0, v_fst_2101_);
v___x_2113_ = v_reuseFailAlloc_2114_;
goto v_reusejp_2112_;
}
v_reusejp_2112_:
{
return v___x_2113_;
}
}
}
else
{
lean_object* v_a_2117_; lean_object* v___x_2119_; uint8_t v_isShared_2120_; uint8_t v_isSharedCheck_2124_; 
lean_dec(v_fst_2101_);
v_a_2117_ = lean_ctor_get(v___x_2108_, 0);
v_isSharedCheck_2124_ = !lean_is_exclusive(v___x_2108_);
if (v_isSharedCheck_2124_ == 0)
{
v___x_2119_ = v___x_2108_;
v_isShared_2120_ = v_isSharedCheck_2124_;
goto v_resetjp_2118_;
}
else
{
lean_inc(v_a_2117_);
lean_dec(v___x_2108_);
v___x_2119_ = lean_box(0);
v_isShared_2120_ = v_isSharedCheck_2124_;
goto v_resetjp_2118_;
}
v_resetjp_2118_:
{
lean_object* v___x_2122_; 
if (v_isShared_2120_ == 0)
{
v___x_2122_ = v___x_2119_;
goto v_reusejp_2121_;
}
else
{
lean_object* v_reuseFailAlloc_2123_; 
v_reuseFailAlloc_2123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2123_, 0, v_a_2117_);
v___x_2122_ = v_reuseFailAlloc_2123_;
goto v_reusejp_2121_;
}
v_reusejp_2121_:
{
return v___x_2122_;
}
}
}
}
}
}
else
{
lean_object* v_a_2128_; lean_object* v___x_2130_; uint8_t v_isShared_2131_; uint8_t v_isSharedCheck_2135_; 
v_a_2128_ = lean_ctor_get(v___x_2097_, 0);
v_isSharedCheck_2135_ = !lean_is_exclusive(v___x_2097_);
if (v_isSharedCheck_2135_ == 0)
{
v___x_2130_ = v___x_2097_;
v_isShared_2131_ = v_isSharedCheck_2135_;
goto v_resetjp_2129_;
}
else
{
lean_inc(v_a_2128_);
lean_dec(v___x_2097_);
v___x_2130_ = lean_box(0);
v_isShared_2131_ = v_isSharedCheck_2135_;
goto v_resetjp_2129_;
}
v_resetjp_2129_:
{
lean_object* v___x_2133_; 
if (v_isShared_2131_ == 0)
{
v___x_2133_ = v___x_2130_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v_a_2128_);
v___x_2133_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
return v___x_2133_;
}
}
}
}
else
{
lean_object* v_a_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2143_; 
lean_dec_ref(v_a_2085_);
lean_dec(v___x_2084_);
lean_dec(v_h_2083_);
v_a_2136_ = lean_ctor_get(v___x_2095_, 0);
v_isSharedCheck_2143_ = !lean_is_exclusive(v___x_2095_);
if (v_isSharedCheck_2143_ == 0)
{
v___x_2138_ = v___x_2095_;
v_isShared_2139_ = v_isSharedCheck_2143_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_a_2136_);
lean_dec(v___x_2095_);
v___x_2138_ = lean_box(0);
v_isShared_2139_ = v_isSharedCheck_2143_;
goto v_resetjp_2137_;
}
v_resetjp_2137_:
{
lean_object* v___x_2141_; 
if (v_isShared_2139_ == 0)
{
v___x_2141_ = v___x_2138_;
goto v_reusejp_2140_;
}
else
{
lean_object* v_reuseFailAlloc_2142_; 
v_reuseFailAlloc_2142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2142_, 0, v_a_2136_);
v___x_2141_ = v_reuseFailAlloc_2142_;
goto v_reusejp_2140_;
}
v_reusejp_2140_:
{
return v___x_2141_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExtractLets___lam__1___boxed(lean_object* v_h_2144_, lean_object* v___x_2145_, lean_object* v_a_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_){
_start:
{
lean_object* v_res_2156_; 
v_res_2156_ = l_Lean_Elab_Tactic_evalExtractLets___lam__1(v_h_2144_, v___x_2145_, v_a_2146_, v___y_2147_, v___y_2148_, v___y_2149_, v___y_2150_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_);
lean_dec(v___y_2154_);
lean_dec_ref(v___y_2153_);
lean_dec(v___y_2152_);
lean_dec_ref(v___y_2151_);
lean_dec(v___y_2150_);
lean_dec_ref(v___y_2149_);
lean_dec(v___y_2148_);
lean_dec_ref(v___y_2147_);
return v_res_2156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExtractLets___lam__2(lean_object* v___x_2157_, lean_object* v_a_2158_, lean_object* v_ids_2159_, lean_object* v_h_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_){
_start:
{
lean_object* v___f_2170_; lean_object* v___x_2171_; 
v___f_2170_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalExtractLets___lam__1___boxed), 12, 3);
lean_closure_set(v___f_2170_, 0, v_h_2160_);
lean_closure_set(v___f_2170_, 1, v___x_2157_);
lean_closure_set(v___f_2170_, 2, v_a_2158_);
v___x_2171_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_2170_, v___y_2161_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_);
if (lean_obj_tag(v___x_2171_) == 0)
{
lean_object* v_a_2172_; lean_object* v___x_2173_; 
v_a_2172_ = lean_ctor_get(v___x_2171_, 0);
lean_inc(v_a_2172_);
lean_dec_ref_known(v___x_2171_, 1);
v___x_2173_ = l_Lean_Elab_Tactic_extractLetsAddVarInfo(v_ids_2159_, v_a_2172_, v___y_2161_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_);
return v___x_2173_;
}
else
{
lean_object* v_a_2174_; lean_object* v___x_2176_; uint8_t v_isShared_2177_; uint8_t v_isSharedCheck_2181_; 
lean_dec_ref(v_ids_2159_);
v_a_2174_ = lean_ctor_get(v___x_2171_, 0);
v_isSharedCheck_2181_ = !lean_is_exclusive(v___x_2171_);
if (v_isSharedCheck_2181_ == 0)
{
v___x_2176_ = v___x_2171_;
v_isShared_2177_ = v_isSharedCheck_2181_;
goto v_resetjp_2175_;
}
else
{
lean_inc(v_a_2174_);
lean_dec(v___x_2171_);
v___x_2176_ = lean_box(0);
v_isShared_2177_ = v_isSharedCheck_2181_;
goto v_resetjp_2175_;
}
v_resetjp_2175_:
{
lean_object* v___x_2179_; 
if (v_isShared_2177_ == 0)
{
v___x_2179_ = v___x_2176_;
goto v_reusejp_2178_;
}
else
{
lean_object* v_reuseFailAlloc_2180_; 
v_reuseFailAlloc_2180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2180_, 0, v_a_2174_);
v___x_2179_ = v_reuseFailAlloc_2180_;
goto v_reusejp_2178_;
}
v_reusejp_2178_:
{
return v___x_2179_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExtractLets___lam__2___boxed(lean_object* v___x_2182_, lean_object* v_a_2183_, lean_object* v_ids_2184_, lean_object* v_h_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_){
_start:
{
lean_object* v_res_2195_; 
v_res_2195_ = l_Lean_Elab_Tactic_evalExtractLets___lam__2(v___x_2182_, v_a_2183_, v_ids_2184_, v_h_2185_, v___y_2186_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_, v___y_2193_);
lean_dec(v___y_2193_);
lean_dec_ref(v___y_2192_);
lean_dec(v___y_2191_);
lean_dec_ref(v___y_2190_);
lean_dec(v___y_2189_);
lean_dec_ref(v___y_2188_);
lean_dec(v___y_2187_);
lean_dec_ref(v___y_2186_);
return v_res_2195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExtractLets___lam__3(lean_object* v___x_2196_, lean_object* v_a_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_){
_start:
{
lean_object* v___x_2207_; 
v___x_2207_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_2199_, v___y_2202_, v___y_2203_, v___y_2204_, v___y_2205_);
if (lean_obj_tag(v___x_2207_) == 0)
{
lean_object* v_a_2208_; lean_object* v___x_2209_; 
v_a_2208_ = lean_ctor_get(v___x_2207_, 0);
lean_inc(v_a_2208_);
lean_dec_ref_known(v___x_2207_, 1);
v___x_2209_ = l_Lean_MVarId_extractLets(v_a_2208_, v___x_2196_, v_a_2197_, v___y_2202_, v___y_2203_, v___y_2204_, v___y_2205_);
if (lean_obj_tag(v___x_2209_) == 0)
{
lean_object* v_a_2210_; lean_object* v_fst_2211_; lean_object* v_snd_2212_; lean_object* v_fst_2213_; lean_object* v___x_2215_; uint8_t v_isShared_2216_; uint8_t v_isSharedCheck_2238_; 
v_a_2210_ = lean_ctor_get(v___x_2209_, 0);
lean_inc(v_a_2210_);
lean_dec_ref_known(v___x_2209_, 1);
v_fst_2211_ = lean_ctor_get(v_a_2210_, 0);
lean_inc(v_fst_2211_);
v_snd_2212_ = lean_ctor_get(v_a_2210_, 1);
lean_inc(v_snd_2212_);
lean_dec(v_a_2210_);
v_fst_2213_ = lean_ctor_get(v_fst_2211_, 0);
v_isSharedCheck_2238_ = !lean_is_exclusive(v_fst_2211_);
if (v_isSharedCheck_2238_ == 0)
{
lean_object* v_unused_2239_; 
v_unused_2239_ = lean_ctor_get(v_fst_2211_, 1);
lean_dec(v_unused_2239_);
v___x_2215_ = v_fst_2211_;
v_isShared_2216_ = v_isSharedCheck_2238_;
goto v_resetjp_2214_;
}
else
{
lean_inc(v_fst_2213_);
lean_dec(v_fst_2211_);
v___x_2215_ = lean_box(0);
v_isShared_2216_ = v_isSharedCheck_2238_;
goto v_resetjp_2214_;
}
v_resetjp_2214_:
{
lean_object* v___x_2217_; lean_object* v___x_2219_; 
v___x_2217_ = lean_box(0);
if (v_isShared_2216_ == 0)
{
lean_ctor_set_tag(v___x_2215_, 1);
lean_ctor_set(v___x_2215_, 1, v___x_2217_);
lean_ctor_set(v___x_2215_, 0, v_snd_2212_);
v___x_2219_ = v___x_2215_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v_snd_2212_);
lean_ctor_set(v_reuseFailAlloc_2237_, 1, v___x_2217_);
v___x_2219_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
lean_object* v___x_2220_; 
v___x_2220_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2219_, v___y_2199_, v___y_2202_, v___y_2203_, v___y_2204_, v___y_2205_);
if (lean_obj_tag(v___x_2220_) == 0)
{
lean_object* v___x_2222_; uint8_t v_isShared_2223_; uint8_t v_isSharedCheck_2227_; 
v_isSharedCheck_2227_ = !lean_is_exclusive(v___x_2220_);
if (v_isSharedCheck_2227_ == 0)
{
lean_object* v_unused_2228_; 
v_unused_2228_ = lean_ctor_get(v___x_2220_, 0);
lean_dec(v_unused_2228_);
v___x_2222_ = v___x_2220_;
v_isShared_2223_ = v_isSharedCheck_2227_;
goto v_resetjp_2221_;
}
else
{
lean_dec(v___x_2220_);
v___x_2222_ = lean_box(0);
v_isShared_2223_ = v_isSharedCheck_2227_;
goto v_resetjp_2221_;
}
v_resetjp_2221_:
{
lean_object* v___x_2225_; 
if (v_isShared_2223_ == 0)
{
lean_ctor_set(v___x_2222_, 0, v_fst_2213_);
v___x_2225_ = v___x_2222_;
goto v_reusejp_2224_;
}
else
{
lean_object* v_reuseFailAlloc_2226_; 
v_reuseFailAlloc_2226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2226_, 0, v_fst_2213_);
v___x_2225_ = v_reuseFailAlloc_2226_;
goto v_reusejp_2224_;
}
v_reusejp_2224_:
{
return v___x_2225_;
}
}
}
else
{
lean_object* v_a_2229_; lean_object* v___x_2231_; uint8_t v_isShared_2232_; uint8_t v_isSharedCheck_2236_; 
lean_dec(v_fst_2213_);
v_a_2229_ = lean_ctor_get(v___x_2220_, 0);
v_isSharedCheck_2236_ = !lean_is_exclusive(v___x_2220_);
if (v_isSharedCheck_2236_ == 0)
{
v___x_2231_ = v___x_2220_;
v_isShared_2232_ = v_isSharedCheck_2236_;
goto v_resetjp_2230_;
}
else
{
lean_inc(v_a_2229_);
lean_dec(v___x_2220_);
v___x_2231_ = lean_box(0);
v_isShared_2232_ = v_isSharedCheck_2236_;
goto v_resetjp_2230_;
}
v_resetjp_2230_:
{
lean_object* v___x_2234_; 
if (v_isShared_2232_ == 0)
{
v___x_2234_ = v___x_2231_;
goto v_reusejp_2233_;
}
else
{
lean_object* v_reuseFailAlloc_2235_; 
v_reuseFailAlloc_2235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2235_, 0, v_a_2229_);
v___x_2234_ = v_reuseFailAlloc_2235_;
goto v_reusejp_2233_;
}
v_reusejp_2233_:
{
return v___x_2234_;
}
}
}
}
}
}
else
{
lean_object* v_a_2240_; lean_object* v___x_2242_; uint8_t v_isShared_2243_; uint8_t v_isSharedCheck_2247_; 
v_a_2240_ = lean_ctor_get(v___x_2209_, 0);
v_isSharedCheck_2247_ = !lean_is_exclusive(v___x_2209_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2242_ = v___x_2209_;
v_isShared_2243_ = v_isSharedCheck_2247_;
goto v_resetjp_2241_;
}
else
{
lean_inc(v_a_2240_);
lean_dec(v___x_2209_);
v___x_2242_ = lean_box(0);
v_isShared_2243_ = v_isSharedCheck_2247_;
goto v_resetjp_2241_;
}
v_resetjp_2241_:
{
lean_object* v___x_2245_; 
if (v_isShared_2243_ == 0)
{
v___x_2245_ = v___x_2242_;
goto v_reusejp_2244_;
}
else
{
lean_object* v_reuseFailAlloc_2246_; 
v_reuseFailAlloc_2246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2246_, 0, v_a_2240_);
v___x_2245_ = v_reuseFailAlloc_2246_;
goto v_reusejp_2244_;
}
v_reusejp_2244_:
{
return v___x_2245_;
}
}
}
}
else
{
lean_object* v_a_2248_; lean_object* v___x_2250_; uint8_t v_isShared_2251_; uint8_t v_isSharedCheck_2255_; 
lean_dec_ref(v_a_2197_);
lean_dec(v___x_2196_);
v_a_2248_ = lean_ctor_get(v___x_2207_, 0);
v_isSharedCheck_2255_ = !lean_is_exclusive(v___x_2207_);
if (v_isSharedCheck_2255_ == 0)
{
v___x_2250_ = v___x_2207_;
v_isShared_2251_ = v_isSharedCheck_2255_;
goto v_resetjp_2249_;
}
else
{
lean_inc(v_a_2248_);
lean_dec(v___x_2207_);
v___x_2250_ = lean_box(0);
v_isShared_2251_ = v_isSharedCheck_2255_;
goto v_resetjp_2249_;
}
v_resetjp_2249_:
{
lean_object* v___x_2253_; 
if (v_isShared_2251_ == 0)
{
v___x_2253_ = v___x_2250_;
goto v_reusejp_2252_;
}
else
{
lean_object* v_reuseFailAlloc_2254_; 
v_reuseFailAlloc_2254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2254_, 0, v_a_2248_);
v___x_2253_ = v_reuseFailAlloc_2254_;
goto v_reusejp_2252_;
}
v_reusejp_2252_:
{
return v___x_2253_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExtractLets___lam__3___boxed(lean_object* v___x_2256_, lean_object* v_a_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_){
_start:
{
lean_object* v_res_2267_; 
v_res_2267_ = l_Lean_Elab_Tactic_evalExtractLets___lam__3(v___x_2256_, v_a_2257_, v___y_2258_, v___y_2259_, v___y_2260_, v___y_2261_, v___y_2262_, v___y_2263_, v___y_2264_, v___y_2265_);
lean_dec(v___y_2265_);
lean_dec_ref(v___y_2264_);
lean_dec(v___y_2263_);
lean_dec_ref(v___y_2262_);
lean_dec(v___y_2261_);
lean_dec_ref(v___y_2260_);
lean_dec(v___y_2259_);
lean_dec_ref(v___y_2258_);
return v_res_2267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExtractLets___lam__4(lean_object* v___f_2268_, lean_object* v_ids_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_){
_start:
{
lean_object* v___x_2279_; 
v___x_2279_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_2268_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_);
if (lean_obj_tag(v___x_2279_) == 0)
{
lean_object* v_a_2280_; lean_object* v___x_2281_; 
v_a_2280_ = lean_ctor_get(v___x_2279_, 0);
lean_inc(v_a_2280_);
lean_dec_ref_known(v___x_2279_, 1);
v___x_2281_ = l_Lean_Elab_Tactic_extractLetsAddVarInfo(v_ids_2269_, v_a_2280_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_);
return v___x_2281_;
}
else
{
lean_object* v_a_2282_; lean_object* v___x_2284_; uint8_t v_isShared_2285_; uint8_t v_isSharedCheck_2289_; 
lean_dec_ref(v_ids_2269_);
v_a_2282_ = lean_ctor_get(v___x_2279_, 0);
v_isSharedCheck_2289_ = !lean_is_exclusive(v___x_2279_);
if (v_isSharedCheck_2289_ == 0)
{
v___x_2284_ = v___x_2279_;
v_isShared_2285_ = v_isSharedCheck_2289_;
goto v_resetjp_2283_;
}
else
{
lean_inc(v_a_2282_);
lean_dec(v___x_2279_);
v___x_2284_ = lean_box(0);
v_isShared_2285_ = v_isSharedCheck_2289_;
goto v_resetjp_2283_;
}
v_resetjp_2283_:
{
lean_object* v___x_2287_; 
if (v_isShared_2285_ == 0)
{
v___x_2287_ = v___x_2284_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v_a_2282_);
v___x_2287_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2286_;
}
v_reusejp_2286_:
{
return v___x_2287_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExtractLets___lam__4___boxed(lean_object* v___f_2290_, lean_object* v_ids_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_){
_start:
{
lean_object* v_res_2301_; 
v_res_2301_ = l_Lean_Elab_Tactic_evalExtractLets___lam__4(v___f_2290_, v_ids_2291_, v___y_2292_, v___y_2293_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_);
lean_dec(v___y_2299_);
lean_dec_ref(v___y_2298_);
lean_dec(v___y_2297_);
lean_dec_ref(v___y_2296_);
lean_dec(v___y_2295_);
lean_dec_ref(v___y_2294_);
lean_dec(v___y_2293_);
lean_dec_ref(v___y_2292_);
return v_res_2301_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_evalExtractLets_spec__2(size_t v_sz_2302_, size_t v_i_2303_, lean_object* v_bs_2304_){
_start:
{
uint8_t v___x_2305_; 
v___x_2305_ = lean_usize_dec_lt(v_i_2303_, v_sz_2302_);
if (v___x_2305_ == 0)
{
return v_bs_2304_;
}
else
{
lean_object* v_v_2306_; lean_object* v___x_2307_; lean_object* v_bs_x27_2308_; lean_object* v___x_2309_; size_t v___x_2310_; size_t v___x_2311_; lean_object* v___x_2312_; 
v_v_2306_ = lean_array_uget(v_bs_2304_, v_i_2303_);
v___x_2307_ = lean_unsigned_to_nat(0u);
v_bs_x27_2308_ = lean_array_uset(v_bs_2304_, v_i_2303_, v___x_2307_);
v___x_2309_ = l_Lean_Elab_Tactic_getNameOfIdent_x27(v_v_2306_);
lean_dec(v_v_2306_);
v___x_2310_ = ((size_t)1ULL);
v___x_2311_ = lean_usize_add(v_i_2303_, v___x_2310_);
v___x_2312_ = lean_array_uset(v_bs_x27_2308_, v_i_2303_, v___x_2309_);
v_i_2303_ = v___x_2311_;
v_bs_2304_ = v___x_2312_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_evalExtractLets_spec__2___boxed(lean_object* v_sz_2314_, lean_object* v_i_2315_, lean_object* v_bs_2316_){
_start:
{
size_t v_sz_boxed_2317_; size_t v_i_boxed_2318_; lean_object* v_res_2319_; 
v_sz_boxed_2317_ = lean_unbox_usize(v_sz_2314_);
lean_dec(v_sz_2314_);
v_i_boxed_2318_ = lean_unbox_usize(v_i_2315_);
lean_dec(v_i_2315_);
v_res_2319_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_evalExtractLets_spec__2(v_sz_boxed_2317_, v_i_boxed_2318_, v_bs_2316_);
return v_res_2319_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExtractLets(lean_object* v_x_2340_, lean_object* v_a_2341_, lean_object* v_a_2342_, lean_object* v_a_2343_, lean_object* v_a_2344_, lean_object* v_a_2345_, lean_object* v_a_2346_, lean_object* v_a_2347_, lean_object* v_a_2348_){
_start:
{
lean_object* v___x_2350_; uint8_t v___x_2351_; 
v___x_2350_ = ((lean_object*)(l_Lean_Elab_Tactic_evalExtractLets___closed__2));
lean_inc(v_x_2340_);
v___x_2351_ = l_Lean_Syntax_isOfKind(v_x_2340_, v___x_2350_);
if (v___x_2351_ == 0)
{
lean_object* v___x_2352_; 
lean_dec(v_x_2340_);
v___x_2352_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1___redArg();
return v___x_2352_;
}
else
{
lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; uint8_t v___x_2356_; 
v___x_2353_ = lean_unsigned_to_nat(1u);
v___x_2354_ = l_Lean_Syntax_getArg(v_x_2340_, v___x_2353_);
v___x_2355_ = ((lean_object*)(l_Lean_Elab_Tactic_evalExtractLets___closed__4));
lean_inc(v___x_2354_);
v___x_2356_ = l_Lean_Syntax_isOfKind(v___x_2354_, v___x_2355_);
if (v___x_2356_ == 0)
{
lean_object* v___x_2357_; 
lean_dec(v___x_2354_);
lean_dec(v_x_2340_);
v___x_2357_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1___redArg();
return v___x_2357_;
}
else
{
lean_object* v___f_2358_; lean_object* v___y_2360_; lean_object* v___y_2361_; lean_object* v___y_2362_; lean_object* v___y_2363_; lean_object* v___y_2364_; lean_object* v___y_2365_; lean_object* v___y_2366_; lean_object* v___y_2367_; lean_object* v___y_2368_; lean_object* v___y_2369_; lean_object* v___y_2370_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v_loc_x3f_2377_; lean_object* v___y_2378_; lean_object* v___y_2379_; lean_object* v___y_2380_; lean_object* v___y_2381_; lean_object* v___y_2382_; lean_object* v___y_2383_; lean_object* v___y_2384_; lean_object* v___y_2385_; lean_object* v___x_2415_; lean_object* v___x_2416_; uint8_t v___x_2417_; 
v___f_2358_ = ((lean_object*)(l_Lean_Elab_Tactic_evalExtractLets___closed__5));
v___x_2374_ = lean_unsigned_to_nat(2u);
v___x_2375_ = l_Lean_Syntax_getArg(v_x_2340_, v___x_2374_);
v___x_2415_ = lean_unsigned_to_nat(3u);
v___x_2416_ = l_Lean_Syntax_getArg(v_x_2340_, v___x_2415_);
lean_dec(v_x_2340_);
v___x_2417_ = l_Lean_Syntax_isNone(v___x_2416_);
if (v___x_2417_ == 0)
{
uint8_t v___x_2418_; 
lean_inc(v___x_2416_);
v___x_2418_ = l_Lean_Syntax_matchesNull(v___x_2416_, v___x_2353_);
if (v___x_2418_ == 0)
{
lean_object* v___x_2419_; 
lean_dec(v___x_2416_);
lean_dec(v___x_2375_);
lean_dec(v___x_2354_);
v___x_2419_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1___redArg();
return v___x_2419_;
}
else
{
lean_object* v___x_2420_; lean_object* v_loc_x3f_2421_; lean_object* v___x_2422_; uint8_t v___x_2423_; 
v___x_2420_ = lean_unsigned_to_nat(0u);
v_loc_x3f_2421_ = l_Lean_Syntax_getArg(v___x_2416_, v___x_2420_);
lean_dec(v___x_2416_);
v___x_2422_ = ((lean_object*)(l_Lean_Elab_Tactic_evalExtractLets___closed__7));
lean_inc(v_loc_x3f_2421_);
v___x_2423_ = l_Lean_Syntax_isOfKind(v_loc_x3f_2421_, v___x_2422_);
if (v___x_2423_ == 0)
{
lean_object* v___x_2424_; 
lean_dec(v_loc_x3f_2421_);
lean_dec(v___x_2375_);
lean_dec(v___x_2354_);
v___x_2424_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1___redArg();
return v___x_2424_;
}
else
{
lean_object* v___x_2425_; 
v___x_2425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2425_, 0, v_loc_x3f_2421_);
v_loc_x3f_2377_ = v___x_2425_;
v___y_2378_ = v_a_2341_;
v___y_2379_ = v_a_2342_;
v___y_2380_ = v_a_2343_;
v___y_2381_ = v_a_2344_;
v___y_2382_ = v_a_2345_;
v___y_2383_ = v_a_2346_;
v___y_2384_ = v_a_2347_;
v___y_2385_ = v_a_2348_;
goto v___jp_2376_;
}
}
}
else
{
lean_object* v___x_2426_; 
lean_dec(v___x_2416_);
v___x_2426_ = lean_box(0);
v_loc_x3f_2377_ = v___x_2426_;
v___y_2378_ = v_a_2341_;
v___y_2379_ = v_a_2342_;
v___y_2380_ = v_a_2343_;
v___y_2381_ = v_a_2344_;
v___y_2382_ = v_a_2345_;
v___y_2383_ = v_a_2346_;
v___y_2384_ = v_a_2347_;
v___y_2385_ = v_a_2348_;
goto v___jp_2376_;
}
v___jp_2359_:
{
lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; 
v___x_2371_ = l_Lean_mkOptionalNode(v___y_2370_);
v___x_2372_ = l_Lean_Elab_Tactic_expandOptLocation(v___x_2371_);
lean_dec(v___x_2371_);
v___x_2373_ = l_Lean_Elab_Tactic_withLocation(v___x_2372_, v___y_2363_, v___y_2367_, v___f_2358_, v___y_2364_, v___y_2366_, v___y_2368_, v___y_2365_, v___y_2362_, v___y_2360_, v___y_2369_, v___y_2361_);
lean_dec(v___x_2372_);
return v___x_2373_;
}
v___jp_2376_:
{
lean_object* v_ids_2386_; uint8_t v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; 
v_ids_2386_ = l_Lean_Syntax_getArgs(v___x_2375_);
lean_dec(v___x_2375_);
v___x_2387_ = 0;
v___x_2388_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v___x_2388_, 0, v___x_2387_);
lean_ctor_set_uint8(v___x_2388_, 1, v___x_2356_);
lean_ctor_set_uint8(v___x_2388_, 2, v___x_2387_);
lean_ctor_set_uint8(v___x_2388_, 3, v___x_2356_);
lean_ctor_set_uint8(v___x_2388_, 4, v___x_2356_);
lean_ctor_set_uint8(v___x_2388_, 5, v___x_2387_);
lean_ctor_set_uint8(v___x_2388_, 6, v___x_2356_);
lean_ctor_set_uint8(v___x_2388_, 7, v___x_2356_);
lean_ctor_set_uint8(v___x_2388_, 8, v___x_2387_);
lean_ctor_set_uint8(v___x_2388_, 9, v___x_2387_);
lean_ctor_set_uint8(v___x_2388_, 10, v___x_2387_);
v___x_2389_ = l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg(v___x_2354_, v___x_2388_, v___x_2356_, v___y_2378_, v___y_2384_, v___y_2385_);
if (lean_obj_tag(v___x_2389_) == 0)
{
lean_object* v_a_2390_; size_t v_sz_2391_; size_t v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___f_2395_; lean_object* v___f_2396_; lean_object* v___f_2397_; 
v_a_2390_ = lean_ctor_get(v___x_2389_, 0);
lean_inc_n(v_a_2390_, 2);
lean_dec_ref_known(v___x_2389_, 1);
v_sz_2391_ = lean_array_size(v_ids_2386_);
v___x_2392_ = ((size_t)0ULL);
lean_inc_ref_n(v_ids_2386_, 2);
v___x_2393_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_evalExtractLets_spec__2(v_sz_2391_, v___x_2392_, v_ids_2386_);
v___x_2394_ = lean_array_to_list(v___x_2393_);
lean_inc(v___x_2394_);
v___f_2395_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalExtractLets___lam__2___boxed), 13, 3);
lean_closure_set(v___f_2395_, 0, v___x_2394_);
lean_closure_set(v___f_2395_, 1, v_a_2390_);
lean_closure_set(v___f_2395_, 2, v_ids_2386_);
v___f_2396_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalExtractLets___lam__3___boxed), 11, 2);
lean_closure_set(v___f_2396_, 0, v___x_2394_);
lean_closure_set(v___f_2396_, 1, v_a_2390_);
v___f_2397_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalExtractLets___lam__4___boxed), 11, 2);
lean_closure_set(v___f_2397_, 0, v___f_2396_);
lean_closure_set(v___f_2397_, 1, v_ids_2386_);
if (lean_obj_tag(v_loc_x3f_2377_) == 0)
{
lean_object* v___x_2398_; 
v___x_2398_ = lean_box(0);
v___y_2360_ = v___y_2383_;
v___y_2361_ = v___y_2385_;
v___y_2362_ = v___y_2382_;
v___y_2363_ = v___f_2395_;
v___y_2364_ = v___y_2378_;
v___y_2365_ = v___y_2381_;
v___y_2366_ = v___y_2379_;
v___y_2367_ = v___f_2397_;
v___y_2368_ = v___y_2380_;
v___y_2369_ = v___y_2384_;
v___y_2370_ = v___x_2398_;
goto v___jp_2359_;
}
else
{
lean_object* v_val_2399_; lean_object* v___x_2401_; uint8_t v_isShared_2402_; uint8_t v_isSharedCheck_2406_; 
v_val_2399_ = lean_ctor_get(v_loc_x3f_2377_, 0);
v_isSharedCheck_2406_ = !lean_is_exclusive(v_loc_x3f_2377_);
if (v_isSharedCheck_2406_ == 0)
{
v___x_2401_ = v_loc_x3f_2377_;
v_isShared_2402_ = v_isSharedCheck_2406_;
goto v_resetjp_2400_;
}
else
{
lean_inc(v_val_2399_);
lean_dec(v_loc_x3f_2377_);
v___x_2401_ = lean_box(0);
v_isShared_2402_ = v_isSharedCheck_2406_;
goto v_resetjp_2400_;
}
v_resetjp_2400_:
{
lean_object* v___x_2404_; 
if (v_isShared_2402_ == 0)
{
v___x_2404_ = v___x_2401_;
goto v_reusejp_2403_;
}
else
{
lean_object* v_reuseFailAlloc_2405_; 
v_reuseFailAlloc_2405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2405_, 0, v_val_2399_);
v___x_2404_ = v_reuseFailAlloc_2405_;
goto v_reusejp_2403_;
}
v_reusejp_2403_:
{
v___y_2360_ = v___y_2383_;
v___y_2361_ = v___y_2385_;
v___y_2362_ = v___y_2382_;
v___y_2363_ = v___f_2395_;
v___y_2364_ = v___y_2378_;
v___y_2365_ = v___y_2381_;
v___y_2366_ = v___y_2379_;
v___y_2367_ = v___f_2397_;
v___y_2368_ = v___y_2380_;
v___y_2369_ = v___y_2384_;
v___y_2370_ = v___x_2404_;
goto v___jp_2359_;
}
}
}
}
else
{
lean_object* v_a_2407_; lean_object* v___x_2409_; uint8_t v_isShared_2410_; uint8_t v_isSharedCheck_2414_; 
lean_dec_ref(v_ids_2386_);
lean_dec(v_loc_x3f_2377_);
v_a_2407_ = lean_ctor_get(v___x_2389_, 0);
v_isSharedCheck_2414_ = !lean_is_exclusive(v___x_2389_);
if (v_isSharedCheck_2414_ == 0)
{
v___x_2409_ = v___x_2389_;
v_isShared_2410_ = v_isSharedCheck_2414_;
goto v_resetjp_2408_;
}
else
{
lean_inc(v_a_2407_);
lean_dec(v___x_2389_);
v___x_2409_ = lean_box(0);
v_isShared_2410_ = v_isSharedCheck_2414_;
goto v_resetjp_2408_;
}
v_resetjp_2408_:
{
lean_object* v___x_2412_; 
if (v_isShared_2410_ == 0)
{
v___x_2412_ = v___x_2409_;
goto v_reusejp_2411_;
}
else
{
lean_object* v_reuseFailAlloc_2413_; 
v_reuseFailAlloc_2413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2413_, 0, v_a_2407_);
v___x_2412_ = v_reuseFailAlloc_2413_;
goto v_reusejp_2411_;
}
v_reusejp_2411_:
{
return v___x_2412_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExtractLets___boxed(lean_object* v_x_2427_, lean_object* v_a_2428_, lean_object* v_a_2429_, lean_object* v_a_2430_, lean_object* v_a_2431_, lean_object* v_a_2432_, lean_object* v_a_2433_, lean_object* v_a_2434_, lean_object* v_a_2435_, lean_object* v_a_2436_){
_start:
{
lean_object* v_res_2437_; 
v_res_2437_ = l_Lean_Elab_Tactic_evalExtractLets(v_x_2427_, v_a_2428_, v_a_2429_, v_a_2430_, v_a_2431_, v_a_2432_, v_a_2433_, v_a_2434_, v_a_2435_);
lean_dec(v_a_2435_);
lean_dec_ref(v_a_2434_);
lean_dec(v_a_2433_);
lean_dec_ref(v_a_2432_);
lean_dec(v_a_2431_);
lean_dec_ref(v_a_2430_);
lean_dec(v_a_2429_);
lean_dec_ref(v_a_2428_);
return v_res_2437_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_evalExtractLets_spec__0(lean_object* v_00_u03b1_2438_, lean_object* v_msg_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_){
_start:
{
lean_object* v___x_2449_; 
v___x_2449_ = l_Lean_throwError___at___00Lean_Elab_Tactic_evalExtractLets_spec__0___redArg(v_msg_2439_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_);
return v___x_2449_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_evalExtractLets_spec__0___boxed(lean_object* v_00_u03b1_2450_, lean_object* v_msg_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_){
_start:
{
lean_object* v_res_2461_; 
v_res_2461_ = l_Lean_throwError___at___00Lean_Elab_Tactic_evalExtractLets_spec__0(v_00_u03b1_2450_, v_msg_2451_, v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_);
lean_dec(v___y_2459_);
lean_dec_ref(v___y_2458_);
lean_dec(v___y_2457_);
lean_dec_ref(v___y_2456_);
lean_dec(v___y_2455_);
lean_dec_ref(v___y_2454_);
lean_dec(v___y_2453_);
lean_dec_ref(v___y_2452_);
return v_res_2461_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalExtractLets___regBuiltin_Lean_Elab_Tactic_evalExtractLets__1(){
_start:
{
lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; 
v___x_2469_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_2470_ = ((lean_object*)(l_Lean_Elab_Tactic_evalExtractLets___closed__2));
v___x_2471_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalExtractLets___regBuiltin_Lean_Elab_Tactic_evalExtractLets__1___closed__1));
v___x_2472_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalExtractLets___boxed), 10, 0);
v___x_2473_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2469_, v___x_2470_, v___x_2471_, v___x_2472_);
return v___x_2473_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalExtractLets___regBuiltin_Lean_Elab_Tactic_evalExtractLets__1___boxed(lean_object* v_a_2474_){
_start:
{
lean_object* v_res_2475_; 
v_res_2475_ = l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalExtractLets___regBuiltin_Lean_Elab_Tactic_evalExtractLets__1();
return v_res_2475_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___lam__0(lean_object* v___x_2476_, lean_object* v_ctor_2477_, lean_object* v_args_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_){
_start:
{
lean_object* v___x_2504_; uint8_t v___x_2505_; 
v___x_2504_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___lam__0___closed__0));
v___x_2505_ = lean_string_dec_eq(v_ctor_2477_, v___x_2504_);
if (v___x_2505_ == 0)
{
lean_object* v___x_2506_; 
v___x_2506_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__0___redArg();
return v___x_2506_;
}
else
{
lean_object* v___x_2507_; lean_object* v___x_2508_; uint8_t v___x_2509_; 
v___x_2507_ = lean_array_get_size(v_args_2478_);
v___x_2508_ = lean_unsigned_to_nat(1u);
v___x_2509_ = lean_nat_dec_eq(v___x_2507_, v___x_2508_);
if (v___x_2509_ == 0)
{
lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v_a_2512_; lean_object* v___x_2514_; uint8_t v_isShared_2515_; uint8_t v_isSharedCheck_2519_; 
v___x_2510_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___lam__0___closed__2, &l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___lam__0___closed__2_once, _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr___lam__0___closed__2);
v___x_2511_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr_spec__1___redArg(v___x_2510_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_);
v_a_2512_ = lean_ctor_get(v___x_2511_, 0);
v_isSharedCheck_2519_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2519_ == 0)
{
v___x_2514_ = v___x_2511_;
v_isShared_2515_ = v_isSharedCheck_2519_;
goto v_resetjp_2513_;
}
else
{
lean_inc(v_a_2512_);
lean_dec(v___x_2511_);
v___x_2514_ = lean_box(0);
v_isShared_2515_ = v_isSharedCheck_2519_;
goto v_resetjp_2513_;
}
v_resetjp_2513_:
{
lean_object* v___x_2517_; 
if (v_isShared_2515_ == 0)
{
v___x_2517_ = v___x_2514_;
goto v_reusejp_2516_;
}
else
{
lean_object* v_reuseFailAlloc_2518_; 
v_reuseFailAlloc_2518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2518_, 0, v_a_2512_);
v___x_2517_ = v_reuseFailAlloc_2518_;
goto v_reusejp_2516_;
}
v_reusejp_2516_:
{
return v___x_2517_;
}
}
}
else
{
goto v___jp_2484_;
}
}
v___jp_2484_:
{
lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; 
v___x_2485_ = lean_unsigned_to_nat(0u);
v___x_2486_ = lean_array_get_borrowed(v___x_2476_, v_args_2478_, v___x_2485_);
lean_inc(v___x_2486_);
v___x_2487_ = l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig_evalExpr(v___x_2486_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_);
if (lean_obj_tag(v___x_2487_) == 0)
{
lean_object* v_a_2488_; lean_object* v___x_2490_; uint8_t v_isShared_2491_; uint8_t v_isSharedCheck_2495_; 
v_a_2488_ = lean_ctor_get(v___x_2487_, 0);
v_isSharedCheck_2495_ = !lean_is_exclusive(v___x_2487_);
if (v_isSharedCheck_2495_ == 0)
{
v___x_2490_ = v___x_2487_;
v_isShared_2491_ = v_isSharedCheck_2495_;
goto v_resetjp_2489_;
}
else
{
lean_inc(v_a_2488_);
lean_dec(v___x_2487_);
v___x_2490_ = lean_box(0);
v_isShared_2491_ = v_isSharedCheck_2495_;
goto v_resetjp_2489_;
}
v_resetjp_2489_:
{
lean_object* v___x_2493_; 
if (v_isShared_2491_ == 0)
{
v___x_2493_ = v___x_2490_;
goto v_reusejp_2492_;
}
else
{
lean_object* v_reuseFailAlloc_2494_; 
v_reuseFailAlloc_2494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2494_, 0, v_a_2488_);
v___x_2493_ = v_reuseFailAlloc_2494_;
goto v_reusejp_2492_;
}
v_reusejp_2492_:
{
return v___x_2493_;
}
}
}
else
{
lean_object* v_a_2496_; lean_object* v___x_2498_; uint8_t v_isShared_2499_; uint8_t v_isSharedCheck_2503_; 
v_a_2496_ = lean_ctor_get(v___x_2487_, 0);
v_isSharedCheck_2503_ = !lean_is_exclusive(v___x_2487_);
if (v_isSharedCheck_2503_ == 0)
{
v___x_2498_ = v___x_2487_;
v_isShared_2499_ = v_isSharedCheck_2503_;
goto v_resetjp_2497_;
}
else
{
lean_inc(v_a_2496_);
lean_dec(v___x_2487_);
v___x_2498_ = lean_box(0);
v_isShared_2499_ = v_isSharedCheck_2503_;
goto v_resetjp_2497_;
}
v_resetjp_2497_:
{
lean_object* v___x_2501_; 
if (v_isShared_2499_ == 0)
{
v___x_2501_ = v___x_2498_;
goto v_reusejp_2500_;
}
else
{
lean_object* v_reuseFailAlloc_2502_; 
v_reuseFailAlloc_2502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2502_, 0, v_a_2496_);
v___x_2501_ = v_reuseFailAlloc_2502_;
goto v_reusejp_2500_;
}
v_reusejp_2500_:
{
return v___x_2501_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___lam__0___boxed(lean_object* v___x_2520_, lean_object* v_ctor_2521_, lean_object* v_args_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_){
_start:
{
lean_object* v_res_2528_; 
v_res_2528_ = l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___lam__0(v___x_2520_, v_ctor_2521_, v_args_2522_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_);
lean_dec(v___y_2526_);
lean_dec_ref(v___y_2525_);
lean_dec(v___y_2524_);
lean_dec_ref(v___y_2523_);
lean_dec_ref(v_args_2522_);
lean_dec_ref(v_ctor_2521_);
lean_dec_ref(v___x_2520_);
return v_res_2528_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___closed__0(void){
_start:
{
lean_object* v___x_2529_; lean_object* v___f_2530_; 
v___x_2529_ = l_Lean_instInhabitedExpr;
v___f_2530_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2530_, 0, v___x_2529_);
return v___f_2530_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr(lean_object* v_a_2536_, lean_object* v_a_2537_, lean_object* v_a_2538_, lean_object* v_a_2539_, lean_object* v_a_2540_){
_start:
{
lean_object* v___f_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___f_2542_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___closed__0, &l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___closed__0_once, _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___closed__0);
v___x_2543_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___closed__2));
v___x_2544_ = l_Lean_Elab_ConfigEval_EvalExpr_withSimpleEvalExpr___redArg(v___x_2543_, v___f_2542_, v_a_2536_, v_a_2537_, v_a_2538_, v_a_2539_, v_a_2540_);
return v___x_2544_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___boxed(lean_object* v_a_2545_, lean_object* v_a_2546_, lean_object* v_a_2547_, lean_object* v_a_2548_, lean_object* v_a_2549_, lean_object* v_a_2550_){
_start:
{
lean_object* v_res_2551_; 
v_res_2551_ = l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr(v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_);
lean_dec(v_a_2549_);
lean_dec_ref(v_a_2548_);
lean_dec(v_a_2547_);
lean_dec_ref(v_a_2546_);
return v_res_2551_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__1(void){
_start:
{
lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; 
v___x_2553_ = lean_box(0);
v___x_2554_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___closed__2));
v___x_2555_ = l_Lean_Expr_const___override(v___x_2554_, v___x_2553_);
return v___x_2555_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__2(void){
_start:
{
lean_object* v___x_2556_; lean_object* v___x_2557_; 
v___x_2556_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__1, &l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__1_once, _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__1);
v___x_2557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2557_, 0, v___x_2556_);
return v___x_2557_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__3(void){
_start:
{
lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; 
v___x_2558_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__2, &l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__2_once, _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__2);
v___x_2559_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__0));
v___x_2560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2560_, 0, v___x_2559_);
lean_ctor_set(v___x_2560_, 1, v___x_2558_);
return v___x_2560_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig(void){
_start:
{
lean_object* v___x_2561_; 
v___x_2561_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__3, &l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__3_once, _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__3);
return v___x_2561_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2562_; lean_object* v___x_2563_; 
v___x_2562_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__1, &l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__1_once, _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__1);
v___x_2563_ = l_Lean_MessageData_ofExpr(v___x_2562_);
return v___x_2563_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; 
v___x_2564_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem_spec__0___closed__0, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem_spec__0___closed__0_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem_spec__0___closed__0);
v___x_2565_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__1, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__1_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__1);
v___x_2566_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2566_, 0, v___x_2565_);
lean_ctor_set(v___x_2566_, 1, v___x_2564_);
return v___x_2566_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem_spec__0___closed__2(void){
_start:
{
lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; 
v___x_2567_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__5, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__5_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__5);
v___x_2568_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem_spec__0___closed__1, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem_spec__0___closed__1_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem_spec__0___closed__1);
v___x_2569_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2569_, 0, v___x_2568_);
lean_ctor_set(v___x_2569_, 1, v___x_2567_);
return v___x_2569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem_spec__0(lean_object* v_stx_2570_, lean_object* v_a_2571_, lean_object* v_a_2572_, lean_object* v_a_2573_, lean_object* v_a_2574_, lean_object* v_a_2575_, lean_object* v_a_2576_){
_start:
{
lean_object* v_ty_x3f_2578_; uint8_t v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v_toCold_2584_; lean_object* v_currRecDepth_2585_; lean_object* v_ref_2586_; uint16_t v_optionFlags_2587_; uint8_t v_suppressElabErrors_2588_; uint8_t v_checkDeprecated_2589_; uint8_t v_isRecordingDeps_2590_; uint8_t v___x_2591_; lean_object* v_ref_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; 
v_ty_x3f_2578_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__2, &l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__2_once, _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig___closed__2);
v___x_2579_ = 1;
v___x_2580_ = lean_box(0);
v___x_2581_ = lean_box(v___x_2579_);
v___x_2582_ = lean_box(v___x_2579_);
lean_inc(v_stx_2570_);
v___x_2583_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTermEnsuringType___boxed), 12, 5);
lean_closure_set(v___x_2583_, 0, v_stx_2570_);
lean_closure_set(v___x_2583_, 1, v_ty_x3f_2578_);
lean_closure_set(v___x_2583_, 2, v___x_2581_);
lean_closure_set(v___x_2583_, 3, v___x_2582_);
lean_closure_set(v___x_2583_, 4, v___x_2580_);
v_toCold_2584_ = lean_ctor_get(v_a_2575_, 0);
v_currRecDepth_2585_ = lean_ctor_get(v_a_2575_, 1);
v_ref_2586_ = lean_ctor_get(v_a_2575_, 2);
v_optionFlags_2587_ = lean_ctor_get_uint16(v_a_2575_, sizeof(void*)*3);
v_suppressElabErrors_2588_ = lean_ctor_get_uint8(v_a_2575_, sizeof(void*)*3 + 2);
v_checkDeprecated_2589_ = lean_ctor_get_uint8(v_a_2575_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2590_ = lean_ctor_get_uint8(v_a_2575_, sizeof(void*)*3 + 4);
v___x_2591_ = 1;
v_ref_2592_ = l_Lean_replaceRef(v_stx_2570_, v_ref_2586_);
lean_dec(v_stx_2570_);
lean_inc(v_currRecDepth_2585_);
lean_inc_ref(v_toCold_2584_);
v___x_2593_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2593_, 0, v_toCold_2584_);
lean_ctor_set(v___x_2593_, 1, v_currRecDepth_2585_);
lean_ctor_set(v___x_2593_, 2, v_ref_2592_);
lean_ctor_set_uint16(v___x_2593_, sizeof(void*)*3, v_optionFlags_2587_);
lean_ctor_set_uint8(v___x_2593_, sizeof(void*)*3 + 2, v_suppressElabErrors_2588_);
lean_ctor_set_uint8(v___x_2593_, sizeof(void*)*3 + 3, v_checkDeprecated_2589_);
lean_ctor_set_uint8(v___x_2593_, sizeof(void*)*3 + 4, v_isRecordingDeps_2590_);
v___x_2594_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___x_2583_, v___x_2591_, v_a_2571_, v_a_2572_, v_a_2573_, v_a_2574_, v___x_2593_, v_a_2576_);
if (lean_obj_tag(v___x_2594_) == 0)
{
lean_object* v_a_2595_; lean_object* v___x_2596_; lean_object* v_a_2597_; lean_object* v___y_2599_; lean_object* v___y_2600_; lean_object* v___y_2601_; lean_object* v___y_2602_; lean_object* v___y_2603_; lean_object* v___y_2604_; lean_object* v___y_2626_; lean_object* v___y_2627_; lean_object* v___y_2628_; lean_object* v___y_2629_; lean_object* v___y_2630_; lean_object* v___y_2631_; lean_object* v___y_2663_; lean_object* v___y_2664_; lean_object* v___y_2665_; lean_object* v___y_2666_; lean_object* v___y_2667_; lean_object* v___y_2668_; uint8_t v___x_2681_; 
v_a_2595_ = lean_ctor_get(v___x_2594_, 0);
lean_inc(v_a_2595_);
lean_dec_ref_known(v___x_2594_, 1);
v___x_2596_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__0___redArg(v_a_2595_, v_a_2574_);
v_a_2597_ = lean_ctor_get(v___x_2596_, 0);
lean_inc(v_a_2597_);
lean_dec_ref(v___x_2596_);
v___x_2681_ = l_Lean_Expr_hasSorry(v_a_2597_);
if (v___x_2681_ == 0)
{
v___y_2626_ = v_a_2571_;
v___y_2627_ = v_a_2572_;
v___y_2628_ = v_a_2573_;
v___y_2629_ = v_a_2574_;
v___y_2630_ = v___x_2593_;
v___y_2631_ = v_a_2576_;
goto v___jp_2625_;
}
else
{
uint8_t v___x_2682_; 
v___x_2682_ = l_Lean_Expr_hasSyntheticSorry(v_a_2597_);
if (v___x_2682_ == 0)
{
v___y_2663_ = v_a_2571_;
v___y_2664_ = v_a_2572_;
v___y_2665_ = v_a_2573_;
v___y_2666_ = v_a_2574_;
v___y_2667_ = v___x_2593_;
v___y_2668_ = v_a_2576_;
goto v___jp_2662_;
}
else
{
lean_object* v___x_2683_; lean_object* v_a_2684_; lean_object* v___x_2686_; uint8_t v_isShared_2687_; uint8_t v_isSharedCheck_2691_; 
lean_dec(v_a_2597_);
lean_dec_ref_known(v___x_2593_, 3);
v___x_2683_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__2___redArg();
v_a_2684_ = lean_ctor_get(v___x_2683_, 0);
v_isSharedCheck_2691_ = !lean_is_exclusive(v___x_2683_);
if (v_isSharedCheck_2691_ == 0)
{
v___x_2686_ = v___x_2683_;
v_isShared_2687_ = v_isSharedCheck_2691_;
goto v_resetjp_2685_;
}
else
{
lean_inc(v_a_2684_);
lean_dec(v___x_2683_);
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
v___jp_2598_:
{
lean_object* v___x_2605_; lean_object* v___x_2606_; 
v___x_2605_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_inc(v_a_2597_);
v___x_2606_ = l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr(v_a_2597_, v___y_2601_, v___y_2602_, v___y_2603_, v___y_2604_);
if (lean_obj_tag(v___x_2606_) == 0)
{
lean_dec_ref(v___y_2603_);
lean_dec(v_a_2597_);
return v___x_2606_;
}
else
{
lean_object* v_a_2607_; uint8_t v___x_2608_; 
v_a_2607_ = lean_ctor_get(v___x_2606_, 0);
lean_inc(v_a_2607_);
v___x_2608_ = l_Lean_Exception_isInterrupt(v_a_2607_);
if (v___x_2608_ == 0)
{
uint8_t v___x_2609_; 
lean_inc(v_a_2607_);
v___x_2609_ = l_Lean_Exception_isRuntime(v_a_2607_);
if (v___x_2609_ == 0)
{
if (lean_obj_tag(v_a_2607_) == 0)
{
lean_dec_ref_known(v_a_2607_, 2);
lean_dec_ref(v___y_2603_);
lean_dec(v_a_2597_);
return v___x_2606_;
}
else
{
lean_object* v_id_2610_; lean_object* v___x_2612_; uint8_t v_isShared_2613_; uint8_t v_isSharedCheck_2623_; 
v_id_2610_ = lean_ctor_get(v_a_2607_, 0);
v_isSharedCheck_2623_ = !lean_is_exclusive(v_a_2607_);
if (v_isSharedCheck_2623_ == 0)
{
lean_object* v_unused_2624_; 
v_unused_2624_ = lean_ctor_get(v_a_2607_, 1);
lean_dec(v_unused_2624_);
v___x_2612_ = v_a_2607_;
v_isShared_2613_ = v_isSharedCheck_2623_;
goto v_resetjp_2611_;
}
else
{
lean_inc(v_id_2610_);
lean_dec(v_a_2607_);
v___x_2612_ = lean_box(0);
v_isShared_2613_ = v_isSharedCheck_2623_;
goto v_resetjp_2611_;
}
v_resetjp_2611_:
{
uint8_t v___x_2614_; 
v___x_2614_ = l_Lean_instBEqInternalExceptionId_beq(v___x_2605_, v_id_2610_);
lean_dec(v_id_2610_);
if (v___x_2614_ == 0)
{
lean_del_object(v___x_2612_);
lean_dec_ref(v___y_2603_);
lean_dec(v_a_2597_);
return v___x_2606_;
}
else
{
lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2619_; 
lean_dec_ref_known(v___x_2606_, 1);
v___x_2615_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem_spec__0___closed__2, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem_spec__0___closed__2_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem_spec__0___closed__2);
v___x_2616_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__8, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__8_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__8);
v___x_2617_ = l_Lean_indentExpr(v_a_2597_);
if (v_isShared_2613_ == 0)
{
lean_ctor_set_tag(v___x_2612_, 7);
lean_ctor_set(v___x_2612_, 1, v___x_2617_);
lean_ctor_set(v___x_2612_, 0, v___x_2616_);
v___x_2619_ = v___x_2612_;
goto v_reusejp_2618_;
}
else
{
lean_object* v_reuseFailAlloc_2622_; 
v_reuseFailAlloc_2622_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2622_, 0, v___x_2616_);
lean_ctor_set(v_reuseFailAlloc_2622_, 1, v___x_2617_);
v___x_2619_ = v_reuseFailAlloc_2622_;
goto v_reusejp_2618_;
}
v_reusejp_2618_:
{
lean_object* v___x_2620_; lean_object* v___x_2621_; 
v___x_2620_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2620_, 0, v___x_2619_);
lean_ctor_set(v___x_2620_, 1, v___x_2615_);
v___x_2621_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1___redArg(v___x_2620_, v___y_2599_, v___y_2600_, v___y_2601_, v___y_2602_, v___y_2603_, v___y_2604_);
lean_dec_ref(v___y_2603_);
return v___x_2621_;
}
}
}
}
}
else
{
lean_dec(v_a_2607_);
lean_dec_ref(v___y_2603_);
lean_dec(v_a_2597_);
return v___x_2606_;
}
}
else
{
lean_dec(v_a_2607_);
lean_dec_ref(v___y_2603_);
lean_dec(v_a_2597_);
return v___x_2606_;
}
}
}
v___jp_2625_:
{
lean_object* v___x_2632_; 
lean_inc(v_a_2597_);
v___x_2632_ = l_Lean_Meta_getMVars(v_a_2597_, v___y_2628_, v___y_2629_, v___y_2630_, v___y_2631_);
if (lean_obj_tag(v___x_2632_) == 0)
{
lean_object* v_a_2633_; lean_object* v___x_2634_; 
v_a_2633_ = lean_ctor_get(v___x_2632_, 0);
lean_inc(v_a_2633_);
lean_dec_ref_known(v___x_2632_, 1);
v___x_2634_ = l_Lean_Elab_Term_logUnassignedUsingErrorInfos(v_a_2633_, v___x_2580_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_, v___y_2631_);
lean_dec(v_a_2633_);
if (lean_obj_tag(v___x_2634_) == 0)
{
lean_object* v_a_2635_; uint8_t v___x_2636_; 
v_a_2635_ = lean_ctor_get(v___x_2634_, 0);
lean_inc(v_a_2635_);
lean_dec_ref_known(v___x_2634_, 1);
v___x_2636_ = lean_unbox(v_a_2635_);
lean_dec(v_a_2635_);
if (v___x_2636_ == 0)
{
v___y_2599_ = v___y_2626_;
v___y_2600_ = v___y_2627_;
v___y_2601_ = v___y_2628_;
v___y_2602_ = v___y_2629_;
v___y_2603_ = v___y_2630_;
v___y_2604_ = v___y_2631_;
goto v___jp_2598_;
}
else
{
lean_object* v___x_2637_; lean_object* v_a_2638_; lean_object* v___x_2640_; uint8_t v_isShared_2641_; uint8_t v_isSharedCheck_2645_; 
lean_dec_ref(v___y_2630_);
lean_dec(v_a_2597_);
v___x_2637_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__2___redArg();
v_a_2638_ = lean_ctor_get(v___x_2637_, 0);
v_isSharedCheck_2645_ = !lean_is_exclusive(v___x_2637_);
if (v_isSharedCheck_2645_ == 0)
{
v___x_2640_ = v___x_2637_;
v_isShared_2641_ = v_isSharedCheck_2645_;
goto v_resetjp_2639_;
}
else
{
lean_inc(v_a_2638_);
lean_dec(v___x_2637_);
v___x_2640_ = lean_box(0);
v_isShared_2641_ = v_isSharedCheck_2645_;
goto v_resetjp_2639_;
}
v_resetjp_2639_:
{
lean_object* v___x_2643_; 
if (v_isShared_2641_ == 0)
{
v___x_2643_ = v___x_2640_;
goto v_reusejp_2642_;
}
else
{
lean_object* v_reuseFailAlloc_2644_; 
v_reuseFailAlloc_2644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2644_, 0, v_a_2638_);
v___x_2643_ = v_reuseFailAlloc_2644_;
goto v_reusejp_2642_;
}
v_reusejp_2642_:
{
return v___x_2643_;
}
}
}
}
else
{
lean_object* v_a_2646_; lean_object* v___x_2648_; uint8_t v_isShared_2649_; uint8_t v_isSharedCheck_2653_; 
lean_dec_ref(v___y_2630_);
lean_dec(v_a_2597_);
v_a_2646_ = lean_ctor_get(v___x_2634_, 0);
v_isSharedCheck_2653_ = !lean_is_exclusive(v___x_2634_);
if (v_isSharedCheck_2653_ == 0)
{
v___x_2648_ = v___x_2634_;
v_isShared_2649_ = v_isSharedCheck_2653_;
goto v_resetjp_2647_;
}
else
{
lean_inc(v_a_2646_);
lean_dec(v___x_2634_);
v___x_2648_ = lean_box(0);
v_isShared_2649_ = v_isSharedCheck_2653_;
goto v_resetjp_2647_;
}
v_resetjp_2647_:
{
lean_object* v___x_2651_; 
if (v_isShared_2649_ == 0)
{
v___x_2651_ = v___x_2648_;
goto v_reusejp_2650_;
}
else
{
lean_object* v_reuseFailAlloc_2652_; 
v_reuseFailAlloc_2652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2652_, 0, v_a_2646_);
v___x_2651_ = v_reuseFailAlloc_2652_;
goto v_reusejp_2650_;
}
v_reusejp_2650_:
{
return v___x_2651_;
}
}
}
}
else
{
lean_object* v_a_2654_; lean_object* v___x_2656_; uint8_t v_isShared_2657_; uint8_t v_isSharedCheck_2661_; 
lean_dec_ref(v___y_2630_);
lean_dec(v_a_2597_);
v_a_2654_ = lean_ctor_get(v___x_2632_, 0);
v_isSharedCheck_2661_ = !lean_is_exclusive(v___x_2632_);
if (v_isSharedCheck_2661_ == 0)
{
v___x_2656_ = v___x_2632_;
v_isShared_2657_ = v_isSharedCheck_2661_;
goto v_resetjp_2655_;
}
else
{
lean_inc(v_a_2654_);
lean_dec(v___x_2632_);
v___x_2656_ = lean_box(0);
v_isShared_2657_ = v_isSharedCheck_2661_;
goto v_resetjp_2655_;
}
v_resetjp_2655_:
{
lean_object* v___x_2659_; 
if (v_isShared_2657_ == 0)
{
v___x_2659_ = v___x_2656_;
goto v_reusejp_2658_;
}
else
{
lean_object* v_reuseFailAlloc_2660_; 
v_reuseFailAlloc_2660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2660_, 0, v_a_2654_);
v___x_2659_ = v_reuseFailAlloc_2660_;
goto v_reusejp_2658_;
}
v_reusejp_2658_:
{
return v___x_2659_;
}
}
}
}
v___jp_2662_:
{
lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v_a_2673_; lean_object* v___x_2675_; uint8_t v_isShared_2676_; uint8_t v_isSharedCheck_2680_; 
v___x_2669_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__10, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__10_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0___closed__10);
v___x_2670_ = l_Lean_indentExpr(v_a_2597_);
v___x_2671_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2671_, 0, v___x_2669_);
lean_ctor_set(v___x_2671_, 1, v___x_2670_);
v___x_2672_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem_spec__0_spec__1___redArg(v___x_2671_, v___y_2663_, v___y_2664_, v___y_2665_, v___y_2666_, v___y_2667_, v___y_2668_);
lean_dec_ref(v___y_2667_);
v_a_2673_ = lean_ctor_get(v___x_2672_, 0);
v_isSharedCheck_2680_ = !lean_is_exclusive(v___x_2672_);
if (v_isSharedCheck_2680_ == 0)
{
v___x_2675_ = v___x_2672_;
v_isShared_2676_ = v_isSharedCheck_2680_;
goto v_resetjp_2674_;
}
else
{
lean_inc(v_a_2673_);
lean_dec(v___x_2672_);
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
else
{
lean_object* v_a_2692_; lean_object* v___x_2694_; uint8_t v_isShared_2695_; uint8_t v_isSharedCheck_2699_; 
lean_dec_ref_known(v___x_2593_, 3);
v_a_2692_ = lean_ctor_get(v___x_2594_, 0);
v_isSharedCheck_2699_ = !lean_is_exclusive(v___x_2594_);
if (v_isSharedCheck_2699_ == 0)
{
v___x_2694_ = v___x_2594_;
v_isShared_2695_ = v_isSharedCheck_2699_;
goto v_resetjp_2693_;
}
else
{
lean_inc(v_a_2692_);
lean_dec(v___x_2594_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem_spec__0___boxed(lean_object* v_stx_2700_, lean_object* v_a_2701_, lean_object* v_a_2702_, lean_object* v_a_2703_, lean_object* v_a_2704_, lean_object* v_a_2705_, lean_object* v_a_2706_, lean_object* v_a_2707_){
_start:
{
lean_object* v_res_2708_; 
v_res_2708_ = l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem_spec__0(v_stx_2700_, v_a_2701_, v_a_2702_, v_a_2703_, v_a_2704_, v_a_2705_, v_a_2706_);
lean_dec(v_a_2706_);
lean_dec_ref(v_a_2705_);
lean_dec(v_a_2704_);
lean_dec_ref(v_a_2703_);
lean_dec(v_a_2702_);
lean_dec_ref(v_a_2701_);
return v_res_2708_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem___lam__0(lean_object* v_config_2711_, lean_object* v_item_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_){
_start:
{
lean_object* v_item_2721_; lean_object* v___x_2724_; lean_object* v___x_2725_; 
v___x_2724_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___closed__2));
v___x_2725_ = l_Lean_Elab_ConfigEval_ConfigItem_addCompletionInfo(v_item_2712_, v___x_2724_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_2725_) == 0)
{
uint8_t v___x_2726_; 
lean_dec_ref_known(v___x_2725_, 1);
v___x_2726_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v_item_2712_);
if (v___x_2726_ == 0)
{
lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; uint8_t v___x_2730_; 
v___x_2727_ = l_Lean_Elab_ConfigEval_ConfigItem_getRootStr(v_item_2712_);
lean_inc_ref(v_item_2712_);
v___x_2728_ = l_Lean_Elab_ConfigEval_ConfigItem_shift(v_item_2712_);
v___x_2729_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__1));
v___x_2730_ = lean_string_dec_lt(v___x_2727_, v___x_2729_);
if (v___x_2730_ == 0)
{
lean_object* v___x_2731_; uint8_t v___x_2732_; 
v___x_2731_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__2));
v___x_2732_ = lean_string_dec_lt(v___x_2727_, v___x_2731_);
if (v___x_2732_ == 0)
{
uint8_t v___x_2733_; 
v___x_2733_ = lean_string_dec_eq(v___x_2727_, v___x_2731_);
if (v___x_2733_ == 0)
{
lean_object* v___x_2734_; uint8_t v___x_2735_; 
v___x_2734_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__3));
v___x_2735_ = lean_string_dec_eq(v___x_2727_, v___x_2734_);
if (v___x_2735_ == 0)
{
lean_object* v___x_2736_; uint8_t v___x_2737_; 
v___x_2736_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__4));
v___x_2737_ = lean_string_dec_eq(v___x_2727_, v___x_2736_);
lean_dec_ref(v___x_2727_);
if (v___x_2737_ == 0)
{
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_item_2721_ = v___x_2728_;
goto v___jp_2720_;
}
else
{
lean_object* v___x_2738_; lean_object* v___x_2739_; 
v___x_2738_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__5));
v___x_2739_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_2712_, v___x_2738_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_2739_) == 0)
{
uint8_t v___x_2740_; 
lean_dec_ref_known(v___x_2739_, 1);
v___x_2740_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_2728_);
if (v___x_2740_ == 0)
{
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_item_2721_ = v___x_2728_;
goto v___jp_2720_;
}
else
{
lean_object* v___x_2741_; 
lean_dec_ref(v___x_2728_);
v___x_2741_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_2741_) == 0)
{
lean_object* v_a_2742_; lean_object* v___x_2744_; uint8_t v_isShared_2745_; uint8_t v_isSharedCheck_2767_; 
v_a_2742_ = lean_ctor_get(v___x_2741_, 0);
v_isSharedCheck_2767_ = !lean_is_exclusive(v___x_2741_);
if (v_isSharedCheck_2767_ == 0)
{
v___x_2744_ = v___x_2741_;
v_isShared_2745_ = v_isSharedCheck_2767_;
goto v_resetjp_2743_;
}
else
{
lean_inc(v_a_2742_);
lean_dec(v___x_2741_);
v___x_2744_ = lean_box(0);
v_isShared_2745_ = v_isSharedCheck_2767_;
goto v_resetjp_2743_;
}
v_resetjp_2743_:
{
uint8_t v_proofs_2746_; uint8_t v_types_2747_; uint8_t v_implicits_2748_; uint8_t v_descend_2749_; uint8_t v_underBinder_2750_; uint8_t v_merge_2751_; uint8_t v_useContext_2752_; uint8_t v_onlyGivenNames_2753_; uint8_t v_preserveBinderNames_2754_; uint8_t v_lift_2755_; lean_object* v___x_2757_; uint8_t v_isShared_2758_; uint8_t v_isSharedCheck_2766_; 
v_proofs_2746_ = lean_ctor_get_uint8(v_config_2711_, 0);
v_types_2747_ = lean_ctor_get_uint8(v_config_2711_, 1);
v_implicits_2748_ = lean_ctor_get_uint8(v_config_2711_, 2);
v_descend_2749_ = lean_ctor_get_uint8(v_config_2711_, 3);
v_underBinder_2750_ = lean_ctor_get_uint8(v_config_2711_, 4);
v_merge_2751_ = lean_ctor_get_uint8(v_config_2711_, 6);
v_useContext_2752_ = lean_ctor_get_uint8(v_config_2711_, 7);
v_onlyGivenNames_2753_ = lean_ctor_get_uint8(v_config_2711_, 8);
v_preserveBinderNames_2754_ = lean_ctor_get_uint8(v_config_2711_, 9);
v_lift_2755_ = lean_ctor_get_uint8(v_config_2711_, 10);
v_isSharedCheck_2766_ = !lean_is_exclusive(v_config_2711_);
if (v_isSharedCheck_2766_ == 0)
{
v___x_2757_ = v_config_2711_;
v_isShared_2758_ = v_isSharedCheck_2766_;
goto v_resetjp_2756_;
}
else
{
lean_dec(v_config_2711_);
v___x_2757_ = lean_box(0);
v_isShared_2758_ = v_isSharedCheck_2766_;
goto v_resetjp_2756_;
}
v_resetjp_2756_:
{
lean_object* v___x_2760_; 
if (v_isShared_2758_ == 0)
{
v___x_2760_ = v___x_2757_;
goto v_reusejp_2759_;
}
else
{
lean_object* v_reuseFailAlloc_2765_; 
v_reuseFailAlloc_2765_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v_reuseFailAlloc_2765_, 0, v_proofs_2746_);
lean_ctor_set_uint8(v_reuseFailAlloc_2765_, 1, v_types_2747_);
lean_ctor_set_uint8(v_reuseFailAlloc_2765_, 2, v_implicits_2748_);
lean_ctor_set_uint8(v_reuseFailAlloc_2765_, 3, v_descend_2749_);
lean_ctor_set_uint8(v_reuseFailAlloc_2765_, 4, v_underBinder_2750_);
v___x_2760_ = v_reuseFailAlloc_2765_;
goto v_reusejp_2759_;
}
v_reusejp_2759_:
{
uint8_t v___x_2761_; lean_object* v___x_2763_; 
v___x_2761_ = lean_unbox(v_a_2742_);
lean_dec(v_a_2742_);
lean_ctor_set_uint8(v___x_2760_, 5, v___x_2761_);
lean_ctor_set_uint8(v___x_2760_, 6, v_merge_2751_);
lean_ctor_set_uint8(v___x_2760_, 7, v_useContext_2752_);
lean_ctor_set_uint8(v___x_2760_, 8, v_onlyGivenNames_2753_);
lean_ctor_set_uint8(v___x_2760_, 9, v_preserveBinderNames_2754_);
lean_ctor_set_uint8(v___x_2760_, 10, v_lift_2755_);
if (v_isShared_2745_ == 0)
{
lean_ctor_set(v___x_2744_, 0, v___x_2760_);
v___x_2763_ = v___x_2744_;
goto v_reusejp_2762_;
}
else
{
lean_object* v_reuseFailAlloc_2764_; 
v_reuseFailAlloc_2764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2764_, 0, v___x_2760_);
v___x_2763_ = v_reuseFailAlloc_2764_;
goto v_reusejp_2762_;
}
v_reusejp_2762_:
{
return v___x_2763_;
}
}
}
}
}
else
{
lean_object* v_a_2768_; lean_object* v___x_2770_; uint8_t v_isShared_2771_; uint8_t v_isSharedCheck_2775_; 
lean_dec_ref(v_config_2711_);
v_a_2768_ = lean_ctor_get(v___x_2741_, 0);
v_isSharedCheck_2775_ = !lean_is_exclusive(v___x_2741_);
if (v_isSharedCheck_2775_ == 0)
{
v___x_2770_ = v___x_2741_;
v_isShared_2771_ = v_isSharedCheck_2775_;
goto v_resetjp_2769_;
}
else
{
lean_inc(v_a_2768_);
lean_dec(v___x_2741_);
v___x_2770_ = lean_box(0);
v_isShared_2771_ = v_isSharedCheck_2775_;
goto v_resetjp_2769_;
}
v_resetjp_2769_:
{
lean_object* v___x_2773_; 
if (v_isShared_2771_ == 0)
{
v___x_2773_ = v___x_2770_;
goto v_reusejp_2772_;
}
else
{
lean_object* v_reuseFailAlloc_2774_; 
v_reuseFailAlloc_2774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2774_, 0, v_a_2768_);
v___x_2773_ = v_reuseFailAlloc_2774_;
goto v_reusejp_2772_;
}
v_reusejp_2772_:
{
return v___x_2773_;
}
}
}
}
}
else
{
lean_object* v_a_2776_; lean_object* v___x_2778_; uint8_t v_isShared_2779_; uint8_t v_isSharedCheck_2783_; 
lean_dec_ref(v___x_2728_);
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_a_2776_ = lean_ctor_get(v___x_2739_, 0);
v_isSharedCheck_2783_ = !lean_is_exclusive(v___x_2739_);
if (v_isSharedCheck_2783_ == 0)
{
v___x_2778_ = v___x_2739_;
v_isShared_2779_ = v_isSharedCheck_2783_;
goto v_resetjp_2777_;
}
else
{
lean_inc(v_a_2776_);
lean_dec(v___x_2739_);
v___x_2778_ = lean_box(0);
v_isShared_2779_ = v_isSharedCheck_2783_;
goto v_resetjp_2777_;
}
v_resetjp_2777_:
{
lean_object* v___x_2781_; 
if (v_isShared_2779_ == 0)
{
v___x_2781_ = v___x_2778_;
goto v_reusejp_2780_;
}
else
{
lean_object* v_reuseFailAlloc_2782_; 
v_reuseFailAlloc_2782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2782_, 0, v_a_2776_);
v___x_2781_ = v_reuseFailAlloc_2782_;
goto v_reusejp_2780_;
}
v_reusejp_2780_:
{
return v___x_2781_;
}
}
}
}
}
else
{
lean_object* v___x_2784_; lean_object* v___x_2785_; 
lean_dec_ref(v___x_2727_);
v___x_2784_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__6));
v___x_2785_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_2712_, v___x_2784_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_2785_) == 0)
{
uint8_t v___x_2786_; 
lean_dec_ref_known(v___x_2785_, 1);
v___x_2786_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_2728_);
if (v___x_2786_ == 0)
{
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_item_2721_ = v___x_2728_;
goto v___jp_2720_;
}
else
{
lean_object* v___x_2787_; 
lean_dec_ref(v___x_2728_);
v___x_2787_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_2787_) == 0)
{
lean_object* v_a_2788_; lean_object* v___x_2790_; uint8_t v_isShared_2791_; uint8_t v_isSharedCheck_2813_; 
v_a_2788_ = lean_ctor_get(v___x_2787_, 0);
v_isSharedCheck_2813_ = !lean_is_exclusive(v___x_2787_);
if (v_isSharedCheck_2813_ == 0)
{
v___x_2790_ = v___x_2787_;
v_isShared_2791_ = v_isSharedCheck_2813_;
goto v_resetjp_2789_;
}
else
{
lean_inc(v_a_2788_);
lean_dec(v___x_2787_);
v___x_2790_ = lean_box(0);
v_isShared_2791_ = v_isSharedCheck_2813_;
goto v_resetjp_2789_;
}
v_resetjp_2789_:
{
uint8_t v_proofs_2792_; uint8_t v_types_2793_; uint8_t v_implicits_2794_; uint8_t v_descend_2795_; uint8_t v_underBinder_2796_; uint8_t v_usedOnly_2797_; uint8_t v_merge_2798_; uint8_t v_onlyGivenNames_2799_; uint8_t v_preserveBinderNames_2800_; uint8_t v_lift_2801_; lean_object* v___x_2803_; uint8_t v_isShared_2804_; uint8_t v_isSharedCheck_2812_; 
v_proofs_2792_ = lean_ctor_get_uint8(v_config_2711_, 0);
v_types_2793_ = lean_ctor_get_uint8(v_config_2711_, 1);
v_implicits_2794_ = lean_ctor_get_uint8(v_config_2711_, 2);
v_descend_2795_ = lean_ctor_get_uint8(v_config_2711_, 3);
v_underBinder_2796_ = lean_ctor_get_uint8(v_config_2711_, 4);
v_usedOnly_2797_ = lean_ctor_get_uint8(v_config_2711_, 5);
v_merge_2798_ = lean_ctor_get_uint8(v_config_2711_, 6);
v_onlyGivenNames_2799_ = lean_ctor_get_uint8(v_config_2711_, 8);
v_preserveBinderNames_2800_ = lean_ctor_get_uint8(v_config_2711_, 9);
v_lift_2801_ = lean_ctor_get_uint8(v_config_2711_, 10);
v_isSharedCheck_2812_ = !lean_is_exclusive(v_config_2711_);
if (v_isSharedCheck_2812_ == 0)
{
v___x_2803_ = v_config_2711_;
v_isShared_2804_ = v_isSharedCheck_2812_;
goto v_resetjp_2802_;
}
else
{
lean_dec(v_config_2711_);
v___x_2803_ = lean_box(0);
v_isShared_2804_ = v_isSharedCheck_2812_;
goto v_resetjp_2802_;
}
v_resetjp_2802_:
{
lean_object* v___x_2806_; 
if (v_isShared_2804_ == 0)
{
v___x_2806_ = v___x_2803_;
goto v_reusejp_2805_;
}
else
{
lean_object* v_reuseFailAlloc_2811_; 
v_reuseFailAlloc_2811_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v_reuseFailAlloc_2811_, 0, v_proofs_2792_);
lean_ctor_set_uint8(v_reuseFailAlloc_2811_, 1, v_types_2793_);
lean_ctor_set_uint8(v_reuseFailAlloc_2811_, 2, v_implicits_2794_);
lean_ctor_set_uint8(v_reuseFailAlloc_2811_, 3, v_descend_2795_);
lean_ctor_set_uint8(v_reuseFailAlloc_2811_, 4, v_underBinder_2796_);
lean_ctor_set_uint8(v_reuseFailAlloc_2811_, 5, v_usedOnly_2797_);
lean_ctor_set_uint8(v_reuseFailAlloc_2811_, 6, v_merge_2798_);
v___x_2806_ = v_reuseFailAlloc_2811_;
goto v_reusejp_2805_;
}
v_reusejp_2805_:
{
uint8_t v___x_2807_; lean_object* v___x_2809_; 
v___x_2807_ = lean_unbox(v_a_2788_);
lean_dec(v_a_2788_);
lean_ctor_set_uint8(v___x_2806_, 7, v___x_2807_);
lean_ctor_set_uint8(v___x_2806_, 8, v_onlyGivenNames_2799_);
lean_ctor_set_uint8(v___x_2806_, 9, v_preserveBinderNames_2800_);
lean_ctor_set_uint8(v___x_2806_, 10, v_lift_2801_);
if (v_isShared_2791_ == 0)
{
lean_ctor_set(v___x_2790_, 0, v___x_2806_);
v___x_2809_ = v___x_2790_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2810_; 
v_reuseFailAlloc_2810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2810_, 0, v___x_2806_);
v___x_2809_ = v_reuseFailAlloc_2810_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
return v___x_2809_;
}
}
}
}
}
else
{
lean_object* v_a_2814_; lean_object* v___x_2816_; uint8_t v_isShared_2817_; uint8_t v_isSharedCheck_2821_; 
lean_dec_ref(v_config_2711_);
v_a_2814_ = lean_ctor_get(v___x_2787_, 0);
v_isSharedCheck_2821_ = !lean_is_exclusive(v___x_2787_);
if (v_isSharedCheck_2821_ == 0)
{
v___x_2816_ = v___x_2787_;
v_isShared_2817_ = v_isSharedCheck_2821_;
goto v_resetjp_2815_;
}
else
{
lean_inc(v_a_2814_);
lean_dec(v___x_2787_);
v___x_2816_ = lean_box(0);
v_isShared_2817_ = v_isSharedCheck_2821_;
goto v_resetjp_2815_;
}
v_resetjp_2815_:
{
lean_object* v___x_2819_; 
if (v_isShared_2817_ == 0)
{
v___x_2819_ = v___x_2816_;
goto v_reusejp_2818_;
}
else
{
lean_object* v_reuseFailAlloc_2820_; 
v_reuseFailAlloc_2820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2820_, 0, v_a_2814_);
v___x_2819_ = v_reuseFailAlloc_2820_;
goto v_reusejp_2818_;
}
v_reusejp_2818_:
{
return v___x_2819_;
}
}
}
}
}
else
{
lean_object* v_a_2822_; lean_object* v___x_2824_; uint8_t v_isShared_2825_; uint8_t v_isSharedCheck_2829_; 
lean_dec_ref(v___x_2728_);
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_a_2822_ = lean_ctor_get(v___x_2785_, 0);
v_isSharedCheck_2829_ = !lean_is_exclusive(v___x_2785_);
if (v_isSharedCheck_2829_ == 0)
{
v___x_2824_ = v___x_2785_;
v_isShared_2825_ = v_isSharedCheck_2829_;
goto v_resetjp_2823_;
}
else
{
lean_inc(v_a_2822_);
lean_dec(v___x_2785_);
v___x_2824_ = lean_box(0);
v_isShared_2825_ = v_isSharedCheck_2829_;
goto v_resetjp_2823_;
}
v_resetjp_2823_:
{
lean_object* v___x_2827_; 
if (v_isShared_2825_ == 0)
{
v___x_2827_ = v___x_2824_;
goto v_reusejp_2826_;
}
else
{
lean_object* v_reuseFailAlloc_2828_; 
v_reuseFailAlloc_2828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2828_, 0, v_a_2822_);
v___x_2827_ = v_reuseFailAlloc_2828_;
goto v_reusejp_2826_;
}
v_reusejp_2826_:
{
return v___x_2827_;
}
}
}
}
}
else
{
lean_object* v___x_2830_; lean_object* v___x_2831_; 
lean_dec_ref(v___x_2727_);
v___x_2830_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__7));
v___x_2831_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_2712_, v___x_2830_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_2831_) == 0)
{
uint8_t v___x_2832_; 
lean_dec_ref_known(v___x_2831_, 1);
v___x_2832_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_2728_);
if (v___x_2832_ == 0)
{
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_item_2721_ = v___x_2728_;
goto v___jp_2720_;
}
else
{
lean_object* v___x_2833_; 
lean_dec_ref(v___x_2728_);
v___x_2833_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_2833_) == 0)
{
lean_object* v_a_2834_; lean_object* v___x_2836_; uint8_t v_isShared_2837_; uint8_t v_isSharedCheck_2859_; 
v_a_2834_ = lean_ctor_get(v___x_2833_, 0);
v_isSharedCheck_2859_ = !lean_is_exclusive(v___x_2833_);
if (v_isSharedCheck_2859_ == 0)
{
v___x_2836_ = v___x_2833_;
v_isShared_2837_ = v_isSharedCheck_2859_;
goto v_resetjp_2835_;
}
else
{
lean_inc(v_a_2834_);
lean_dec(v___x_2833_);
v___x_2836_ = lean_box(0);
v_isShared_2837_ = v_isSharedCheck_2859_;
goto v_resetjp_2835_;
}
v_resetjp_2835_:
{
uint8_t v_proofs_2838_; uint8_t v_types_2839_; uint8_t v_implicits_2840_; uint8_t v_descend_2841_; uint8_t v_usedOnly_2842_; uint8_t v_merge_2843_; uint8_t v_useContext_2844_; uint8_t v_onlyGivenNames_2845_; uint8_t v_preserveBinderNames_2846_; uint8_t v_lift_2847_; lean_object* v___x_2849_; uint8_t v_isShared_2850_; uint8_t v_isSharedCheck_2858_; 
v_proofs_2838_ = lean_ctor_get_uint8(v_config_2711_, 0);
v_types_2839_ = lean_ctor_get_uint8(v_config_2711_, 1);
v_implicits_2840_ = lean_ctor_get_uint8(v_config_2711_, 2);
v_descend_2841_ = lean_ctor_get_uint8(v_config_2711_, 3);
v_usedOnly_2842_ = lean_ctor_get_uint8(v_config_2711_, 5);
v_merge_2843_ = lean_ctor_get_uint8(v_config_2711_, 6);
v_useContext_2844_ = lean_ctor_get_uint8(v_config_2711_, 7);
v_onlyGivenNames_2845_ = lean_ctor_get_uint8(v_config_2711_, 8);
v_preserveBinderNames_2846_ = lean_ctor_get_uint8(v_config_2711_, 9);
v_lift_2847_ = lean_ctor_get_uint8(v_config_2711_, 10);
v_isSharedCheck_2858_ = !lean_is_exclusive(v_config_2711_);
if (v_isSharedCheck_2858_ == 0)
{
v___x_2849_ = v_config_2711_;
v_isShared_2850_ = v_isSharedCheck_2858_;
goto v_resetjp_2848_;
}
else
{
lean_dec(v_config_2711_);
v___x_2849_ = lean_box(0);
v_isShared_2850_ = v_isSharedCheck_2858_;
goto v_resetjp_2848_;
}
v_resetjp_2848_:
{
lean_object* v___x_2852_; 
if (v_isShared_2850_ == 0)
{
v___x_2852_ = v___x_2849_;
goto v_reusejp_2851_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v_reuseFailAlloc_2857_, 0, v_proofs_2838_);
lean_ctor_set_uint8(v_reuseFailAlloc_2857_, 1, v_types_2839_);
lean_ctor_set_uint8(v_reuseFailAlloc_2857_, 2, v_implicits_2840_);
lean_ctor_set_uint8(v_reuseFailAlloc_2857_, 3, v_descend_2841_);
v___x_2852_ = v_reuseFailAlloc_2857_;
goto v_reusejp_2851_;
}
v_reusejp_2851_:
{
uint8_t v___x_2853_; lean_object* v___x_2855_; 
v___x_2853_ = lean_unbox(v_a_2834_);
lean_dec(v_a_2834_);
lean_ctor_set_uint8(v___x_2852_, 4, v___x_2853_);
lean_ctor_set_uint8(v___x_2852_, 5, v_usedOnly_2842_);
lean_ctor_set_uint8(v___x_2852_, 6, v_merge_2843_);
lean_ctor_set_uint8(v___x_2852_, 7, v_useContext_2844_);
lean_ctor_set_uint8(v___x_2852_, 8, v_onlyGivenNames_2845_);
lean_ctor_set_uint8(v___x_2852_, 9, v_preserveBinderNames_2846_);
lean_ctor_set_uint8(v___x_2852_, 10, v_lift_2847_);
if (v_isShared_2837_ == 0)
{
lean_ctor_set(v___x_2836_, 0, v___x_2852_);
v___x_2855_ = v___x_2836_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2856_; 
v_reuseFailAlloc_2856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2856_, 0, v___x_2852_);
v___x_2855_ = v_reuseFailAlloc_2856_;
goto v_reusejp_2854_;
}
v_reusejp_2854_:
{
return v___x_2855_;
}
}
}
}
}
else
{
lean_object* v_a_2860_; lean_object* v___x_2862_; uint8_t v_isShared_2863_; uint8_t v_isSharedCheck_2867_; 
lean_dec_ref(v_config_2711_);
v_a_2860_ = lean_ctor_get(v___x_2833_, 0);
v_isSharedCheck_2867_ = !lean_is_exclusive(v___x_2833_);
if (v_isSharedCheck_2867_ == 0)
{
v___x_2862_ = v___x_2833_;
v_isShared_2863_ = v_isSharedCheck_2867_;
goto v_resetjp_2861_;
}
else
{
lean_inc(v_a_2860_);
lean_dec(v___x_2833_);
v___x_2862_ = lean_box(0);
v_isShared_2863_ = v_isSharedCheck_2867_;
goto v_resetjp_2861_;
}
v_resetjp_2861_:
{
lean_object* v___x_2865_; 
if (v_isShared_2863_ == 0)
{
v___x_2865_ = v___x_2862_;
goto v_reusejp_2864_;
}
else
{
lean_object* v_reuseFailAlloc_2866_; 
v_reuseFailAlloc_2866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2866_, 0, v_a_2860_);
v___x_2865_ = v_reuseFailAlloc_2866_;
goto v_reusejp_2864_;
}
v_reusejp_2864_:
{
return v___x_2865_;
}
}
}
}
}
else
{
lean_object* v_a_2868_; lean_object* v___x_2870_; uint8_t v_isShared_2871_; uint8_t v_isSharedCheck_2875_; 
lean_dec_ref(v___x_2728_);
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_a_2868_ = lean_ctor_get(v___x_2831_, 0);
v_isSharedCheck_2875_ = !lean_is_exclusive(v___x_2831_);
if (v_isSharedCheck_2875_ == 0)
{
v___x_2870_ = v___x_2831_;
v_isShared_2871_ = v_isSharedCheck_2875_;
goto v_resetjp_2869_;
}
else
{
lean_inc(v_a_2868_);
lean_dec(v___x_2831_);
v___x_2870_ = lean_box(0);
v_isShared_2871_ = v_isSharedCheck_2875_;
goto v_resetjp_2869_;
}
v_resetjp_2869_:
{
lean_object* v___x_2873_; 
if (v_isShared_2871_ == 0)
{
v___x_2873_ = v___x_2870_;
goto v_reusejp_2872_;
}
else
{
lean_object* v_reuseFailAlloc_2874_; 
v_reuseFailAlloc_2874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2874_, 0, v_a_2868_);
v___x_2873_ = v_reuseFailAlloc_2874_;
goto v_reusejp_2872_;
}
v_reusejp_2872_:
{
return v___x_2873_;
}
}
}
}
}
else
{
uint8_t v___x_2876_; 
v___x_2876_ = lean_string_dec_eq(v___x_2727_, v___x_2729_);
if (v___x_2876_ == 0)
{
lean_object* v___x_2877_; uint8_t v___x_2878_; 
v___x_2877_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__8));
v___x_2878_ = lean_string_dec_eq(v___x_2727_, v___x_2877_);
if (v___x_2878_ == 0)
{
lean_object* v___x_2879_; uint8_t v___x_2880_; 
v___x_2879_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__9));
v___x_2880_ = lean_string_dec_eq(v___x_2727_, v___x_2879_);
lean_dec_ref(v___x_2727_);
if (v___x_2880_ == 0)
{
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_item_2721_ = v___x_2728_;
goto v___jp_2720_;
}
else
{
lean_object* v___x_2881_; lean_object* v___x_2882_; 
v___x_2881_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__10));
v___x_2882_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_2712_, v___x_2881_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_2882_) == 0)
{
uint8_t v___x_2883_; 
lean_dec_ref_known(v___x_2882_, 1);
v___x_2883_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_2728_);
if (v___x_2883_ == 0)
{
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_item_2721_ = v___x_2728_;
goto v___jp_2720_;
}
else
{
lean_object* v___x_2884_; 
lean_dec_ref(v___x_2728_);
v___x_2884_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_2884_) == 0)
{
lean_object* v_a_2885_; lean_object* v___x_2887_; uint8_t v_isShared_2888_; uint8_t v_isSharedCheck_2910_; 
v_a_2885_ = lean_ctor_get(v___x_2884_, 0);
v_isSharedCheck_2910_ = !lean_is_exclusive(v___x_2884_);
if (v_isSharedCheck_2910_ == 0)
{
v___x_2887_ = v___x_2884_;
v_isShared_2888_ = v_isSharedCheck_2910_;
goto v_resetjp_2886_;
}
else
{
lean_inc(v_a_2885_);
lean_dec(v___x_2884_);
v___x_2887_ = lean_box(0);
v_isShared_2888_ = v_isSharedCheck_2910_;
goto v_resetjp_2886_;
}
v_resetjp_2886_:
{
uint8_t v_proofs_2889_; uint8_t v_implicits_2890_; uint8_t v_descend_2891_; uint8_t v_underBinder_2892_; uint8_t v_usedOnly_2893_; uint8_t v_merge_2894_; uint8_t v_useContext_2895_; uint8_t v_onlyGivenNames_2896_; uint8_t v_preserveBinderNames_2897_; uint8_t v_lift_2898_; lean_object* v___x_2900_; uint8_t v_isShared_2901_; uint8_t v_isSharedCheck_2909_; 
v_proofs_2889_ = lean_ctor_get_uint8(v_config_2711_, 0);
v_implicits_2890_ = lean_ctor_get_uint8(v_config_2711_, 2);
v_descend_2891_ = lean_ctor_get_uint8(v_config_2711_, 3);
v_underBinder_2892_ = lean_ctor_get_uint8(v_config_2711_, 4);
v_usedOnly_2893_ = lean_ctor_get_uint8(v_config_2711_, 5);
v_merge_2894_ = lean_ctor_get_uint8(v_config_2711_, 6);
v_useContext_2895_ = lean_ctor_get_uint8(v_config_2711_, 7);
v_onlyGivenNames_2896_ = lean_ctor_get_uint8(v_config_2711_, 8);
v_preserveBinderNames_2897_ = lean_ctor_get_uint8(v_config_2711_, 9);
v_lift_2898_ = lean_ctor_get_uint8(v_config_2711_, 10);
v_isSharedCheck_2909_ = !lean_is_exclusive(v_config_2711_);
if (v_isSharedCheck_2909_ == 0)
{
v___x_2900_ = v_config_2711_;
v_isShared_2901_ = v_isSharedCheck_2909_;
goto v_resetjp_2899_;
}
else
{
lean_dec(v_config_2711_);
v___x_2900_ = lean_box(0);
v_isShared_2901_ = v_isSharedCheck_2909_;
goto v_resetjp_2899_;
}
v_resetjp_2899_:
{
lean_object* v___x_2903_; 
if (v_isShared_2901_ == 0)
{
v___x_2903_ = v___x_2900_;
goto v_reusejp_2902_;
}
else
{
lean_object* v_reuseFailAlloc_2908_; 
v_reuseFailAlloc_2908_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v_reuseFailAlloc_2908_, 0, v_proofs_2889_);
v___x_2903_ = v_reuseFailAlloc_2908_;
goto v_reusejp_2902_;
}
v_reusejp_2902_:
{
uint8_t v___x_2904_; lean_object* v___x_2906_; 
v___x_2904_ = lean_unbox(v_a_2885_);
lean_dec(v_a_2885_);
lean_ctor_set_uint8(v___x_2903_, 1, v___x_2904_);
lean_ctor_set_uint8(v___x_2903_, 2, v_implicits_2890_);
lean_ctor_set_uint8(v___x_2903_, 3, v_descend_2891_);
lean_ctor_set_uint8(v___x_2903_, 4, v_underBinder_2892_);
lean_ctor_set_uint8(v___x_2903_, 5, v_usedOnly_2893_);
lean_ctor_set_uint8(v___x_2903_, 6, v_merge_2894_);
lean_ctor_set_uint8(v___x_2903_, 7, v_useContext_2895_);
lean_ctor_set_uint8(v___x_2903_, 8, v_onlyGivenNames_2896_);
lean_ctor_set_uint8(v___x_2903_, 9, v_preserveBinderNames_2897_);
lean_ctor_set_uint8(v___x_2903_, 10, v_lift_2898_);
if (v_isShared_2888_ == 0)
{
lean_ctor_set(v___x_2887_, 0, v___x_2903_);
v___x_2906_ = v___x_2887_;
goto v_reusejp_2905_;
}
else
{
lean_object* v_reuseFailAlloc_2907_; 
v_reuseFailAlloc_2907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2907_, 0, v___x_2903_);
v___x_2906_ = v_reuseFailAlloc_2907_;
goto v_reusejp_2905_;
}
v_reusejp_2905_:
{
return v___x_2906_;
}
}
}
}
}
else
{
lean_object* v_a_2911_; lean_object* v___x_2913_; uint8_t v_isShared_2914_; uint8_t v_isSharedCheck_2918_; 
lean_dec_ref(v_config_2711_);
v_a_2911_ = lean_ctor_get(v___x_2884_, 0);
v_isSharedCheck_2918_ = !lean_is_exclusive(v___x_2884_);
if (v_isSharedCheck_2918_ == 0)
{
v___x_2913_ = v___x_2884_;
v_isShared_2914_ = v_isSharedCheck_2918_;
goto v_resetjp_2912_;
}
else
{
lean_inc(v_a_2911_);
lean_dec(v___x_2884_);
v___x_2913_ = lean_box(0);
v_isShared_2914_ = v_isSharedCheck_2918_;
goto v_resetjp_2912_;
}
v_resetjp_2912_:
{
lean_object* v___x_2916_; 
if (v_isShared_2914_ == 0)
{
v___x_2916_ = v___x_2913_;
goto v_reusejp_2915_;
}
else
{
lean_object* v_reuseFailAlloc_2917_; 
v_reuseFailAlloc_2917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2917_, 0, v_a_2911_);
v___x_2916_ = v_reuseFailAlloc_2917_;
goto v_reusejp_2915_;
}
v_reusejp_2915_:
{
return v___x_2916_;
}
}
}
}
}
else
{
lean_object* v_a_2919_; lean_object* v___x_2921_; uint8_t v_isShared_2922_; uint8_t v_isSharedCheck_2926_; 
lean_dec_ref(v___x_2728_);
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_a_2919_ = lean_ctor_get(v___x_2882_, 0);
v_isSharedCheck_2926_ = !lean_is_exclusive(v___x_2882_);
if (v_isSharedCheck_2926_ == 0)
{
v___x_2921_ = v___x_2882_;
v_isShared_2922_ = v_isSharedCheck_2926_;
goto v_resetjp_2920_;
}
else
{
lean_inc(v_a_2919_);
lean_dec(v___x_2882_);
v___x_2921_ = lean_box(0);
v_isShared_2922_ = v_isSharedCheck_2926_;
goto v_resetjp_2920_;
}
v_resetjp_2920_:
{
lean_object* v___x_2924_; 
if (v_isShared_2922_ == 0)
{
v___x_2924_ = v___x_2921_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v_a_2919_);
v___x_2924_ = v_reuseFailAlloc_2925_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
return v___x_2924_;
}
}
}
}
}
else
{
lean_object* v___x_2927_; lean_object* v___x_2928_; 
lean_dec_ref(v___x_2727_);
v___x_2927_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__11));
v___x_2928_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_2712_, v___x_2927_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_2928_) == 0)
{
uint8_t v___x_2929_; 
lean_dec_ref_known(v___x_2928_, 1);
v___x_2929_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_2728_);
if (v___x_2929_ == 0)
{
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_item_2721_ = v___x_2728_;
goto v___jp_2720_;
}
else
{
lean_object* v___x_2930_; 
lean_dec_ref(v___x_2728_);
v___x_2930_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_2930_) == 0)
{
lean_object* v_a_2931_; lean_object* v___x_2933_; uint8_t v_isShared_2934_; uint8_t v_isSharedCheck_2956_; 
v_a_2931_ = lean_ctor_get(v___x_2930_, 0);
v_isSharedCheck_2956_ = !lean_is_exclusive(v___x_2930_);
if (v_isSharedCheck_2956_ == 0)
{
v___x_2933_ = v___x_2930_;
v_isShared_2934_ = v_isSharedCheck_2956_;
goto v_resetjp_2932_;
}
else
{
lean_inc(v_a_2931_);
lean_dec(v___x_2930_);
v___x_2933_ = lean_box(0);
v_isShared_2934_ = v_isSharedCheck_2956_;
goto v_resetjp_2932_;
}
v_resetjp_2932_:
{
uint8_t v_types_2935_; uint8_t v_implicits_2936_; uint8_t v_descend_2937_; uint8_t v_underBinder_2938_; uint8_t v_usedOnly_2939_; uint8_t v_merge_2940_; uint8_t v_useContext_2941_; uint8_t v_onlyGivenNames_2942_; uint8_t v_preserveBinderNames_2943_; uint8_t v_lift_2944_; lean_object* v___x_2946_; uint8_t v_isShared_2947_; uint8_t v_isSharedCheck_2955_; 
v_types_2935_ = lean_ctor_get_uint8(v_config_2711_, 1);
v_implicits_2936_ = lean_ctor_get_uint8(v_config_2711_, 2);
v_descend_2937_ = lean_ctor_get_uint8(v_config_2711_, 3);
v_underBinder_2938_ = lean_ctor_get_uint8(v_config_2711_, 4);
v_usedOnly_2939_ = lean_ctor_get_uint8(v_config_2711_, 5);
v_merge_2940_ = lean_ctor_get_uint8(v_config_2711_, 6);
v_useContext_2941_ = lean_ctor_get_uint8(v_config_2711_, 7);
v_onlyGivenNames_2942_ = lean_ctor_get_uint8(v_config_2711_, 8);
v_preserveBinderNames_2943_ = lean_ctor_get_uint8(v_config_2711_, 9);
v_lift_2944_ = lean_ctor_get_uint8(v_config_2711_, 10);
v_isSharedCheck_2955_ = !lean_is_exclusive(v_config_2711_);
if (v_isSharedCheck_2955_ == 0)
{
v___x_2946_ = v_config_2711_;
v_isShared_2947_ = v_isSharedCheck_2955_;
goto v_resetjp_2945_;
}
else
{
lean_dec(v_config_2711_);
v___x_2946_ = lean_box(0);
v_isShared_2947_ = v_isSharedCheck_2955_;
goto v_resetjp_2945_;
}
v_resetjp_2945_:
{
lean_object* v___x_2949_; 
if (v_isShared_2947_ == 0)
{
v___x_2949_ = v___x_2946_;
goto v_reusejp_2948_;
}
else
{
lean_object* v_reuseFailAlloc_2954_; 
v_reuseFailAlloc_2954_ = lean_alloc_ctor(0, 0, 11);
v___x_2949_ = v_reuseFailAlloc_2954_;
goto v_reusejp_2948_;
}
v_reusejp_2948_:
{
uint8_t v___x_2950_; lean_object* v___x_2952_; 
v___x_2950_ = lean_unbox(v_a_2931_);
lean_dec(v_a_2931_);
lean_ctor_set_uint8(v___x_2949_, 0, v___x_2950_);
lean_ctor_set_uint8(v___x_2949_, 1, v_types_2935_);
lean_ctor_set_uint8(v___x_2949_, 2, v_implicits_2936_);
lean_ctor_set_uint8(v___x_2949_, 3, v_descend_2937_);
lean_ctor_set_uint8(v___x_2949_, 4, v_underBinder_2938_);
lean_ctor_set_uint8(v___x_2949_, 5, v_usedOnly_2939_);
lean_ctor_set_uint8(v___x_2949_, 6, v_merge_2940_);
lean_ctor_set_uint8(v___x_2949_, 7, v_useContext_2941_);
lean_ctor_set_uint8(v___x_2949_, 8, v_onlyGivenNames_2942_);
lean_ctor_set_uint8(v___x_2949_, 9, v_preserveBinderNames_2943_);
lean_ctor_set_uint8(v___x_2949_, 10, v_lift_2944_);
if (v_isShared_2934_ == 0)
{
lean_ctor_set(v___x_2933_, 0, v___x_2949_);
v___x_2952_ = v___x_2933_;
goto v_reusejp_2951_;
}
else
{
lean_object* v_reuseFailAlloc_2953_; 
v_reuseFailAlloc_2953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2953_, 0, v___x_2949_);
v___x_2952_ = v_reuseFailAlloc_2953_;
goto v_reusejp_2951_;
}
v_reusejp_2951_:
{
return v___x_2952_;
}
}
}
}
}
else
{
lean_object* v_a_2957_; lean_object* v___x_2959_; uint8_t v_isShared_2960_; uint8_t v_isSharedCheck_2964_; 
lean_dec_ref(v_config_2711_);
v_a_2957_ = lean_ctor_get(v___x_2930_, 0);
v_isSharedCheck_2964_ = !lean_is_exclusive(v___x_2930_);
if (v_isSharedCheck_2964_ == 0)
{
v___x_2959_ = v___x_2930_;
v_isShared_2960_ = v_isSharedCheck_2964_;
goto v_resetjp_2958_;
}
else
{
lean_inc(v_a_2957_);
lean_dec(v___x_2930_);
v___x_2959_ = lean_box(0);
v_isShared_2960_ = v_isSharedCheck_2964_;
goto v_resetjp_2958_;
}
v_resetjp_2958_:
{
lean_object* v___x_2962_; 
if (v_isShared_2960_ == 0)
{
v___x_2962_ = v___x_2959_;
goto v_reusejp_2961_;
}
else
{
lean_object* v_reuseFailAlloc_2963_; 
v_reuseFailAlloc_2963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2963_, 0, v_a_2957_);
v___x_2962_ = v_reuseFailAlloc_2963_;
goto v_reusejp_2961_;
}
v_reusejp_2961_:
{
return v___x_2962_;
}
}
}
}
}
else
{
lean_object* v_a_2965_; lean_object* v___x_2967_; uint8_t v_isShared_2968_; uint8_t v_isSharedCheck_2972_; 
lean_dec_ref(v___x_2728_);
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_a_2965_ = lean_ctor_get(v___x_2928_, 0);
v_isSharedCheck_2972_ = !lean_is_exclusive(v___x_2928_);
if (v_isSharedCheck_2972_ == 0)
{
v___x_2967_ = v___x_2928_;
v_isShared_2968_ = v_isSharedCheck_2972_;
goto v_resetjp_2966_;
}
else
{
lean_inc(v_a_2965_);
lean_dec(v___x_2928_);
v___x_2967_ = lean_box(0);
v_isShared_2968_ = v_isSharedCheck_2972_;
goto v_resetjp_2966_;
}
v_resetjp_2966_:
{
lean_object* v___x_2970_; 
if (v_isShared_2968_ == 0)
{
v___x_2970_ = v___x_2967_;
goto v_reusejp_2969_;
}
else
{
lean_object* v_reuseFailAlloc_2971_; 
v_reuseFailAlloc_2971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2971_, 0, v_a_2965_);
v___x_2970_ = v_reuseFailAlloc_2971_;
goto v_reusejp_2969_;
}
v_reusejp_2969_:
{
return v___x_2970_;
}
}
}
}
}
else
{
lean_object* v___x_2973_; lean_object* v___x_2974_; 
lean_dec_ref(v___x_2727_);
v___x_2973_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__12));
v___x_2974_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_2712_, v___x_2973_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_2974_) == 0)
{
uint8_t v___x_2975_; 
lean_dec_ref_known(v___x_2974_, 1);
v___x_2975_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_2728_);
if (v___x_2975_ == 0)
{
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_item_2721_ = v___x_2728_;
goto v___jp_2720_;
}
else
{
lean_object* v___x_2976_; 
lean_dec_ref(v___x_2728_);
v___x_2976_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_2976_) == 0)
{
lean_object* v_a_2977_; lean_object* v___x_2979_; uint8_t v_isShared_2980_; uint8_t v_isSharedCheck_3002_; 
v_a_2977_ = lean_ctor_get(v___x_2976_, 0);
v_isSharedCheck_3002_ = !lean_is_exclusive(v___x_2976_);
if (v_isSharedCheck_3002_ == 0)
{
v___x_2979_ = v___x_2976_;
v_isShared_2980_ = v_isSharedCheck_3002_;
goto v_resetjp_2978_;
}
else
{
lean_inc(v_a_2977_);
lean_dec(v___x_2976_);
v___x_2979_ = lean_box(0);
v_isShared_2980_ = v_isSharedCheck_3002_;
goto v_resetjp_2978_;
}
v_resetjp_2978_:
{
uint8_t v_proofs_2981_; uint8_t v_types_2982_; uint8_t v_implicits_2983_; uint8_t v_descend_2984_; uint8_t v_underBinder_2985_; uint8_t v_usedOnly_2986_; uint8_t v_merge_2987_; uint8_t v_useContext_2988_; uint8_t v_onlyGivenNames_2989_; uint8_t v_lift_2990_; lean_object* v___x_2992_; uint8_t v_isShared_2993_; uint8_t v_isSharedCheck_3001_; 
v_proofs_2981_ = lean_ctor_get_uint8(v_config_2711_, 0);
v_types_2982_ = lean_ctor_get_uint8(v_config_2711_, 1);
v_implicits_2983_ = lean_ctor_get_uint8(v_config_2711_, 2);
v_descend_2984_ = lean_ctor_get_uint8(v_config_2711_, 3);
v_underBinder_2985_ = lean_ctor_get_uint8(v_config_2711_, 4);
v_usedOnly_2986_ = lean_ctor_get_uint8(v_config_2711_, 5);
v_merge_2987_ = lean_ctor_get_uint8(v_config_2711_, 6);
v_useContext_2988_ = lean_ctor_get_uint8(v_config_2711_, 7);
v_onlyGivenNames_2989_ = lean_ctor_get_uint8(v_config_2711_, 8);
v_lift_2990_ = lean_ctor_get_uint8(v_config_2711_, 10);
v_isSharedCheck_3001_ = !lean_is_exclusive(v_config_2711_);
if (v_isSharedCheck_3001_ == 0)
{
v___x_2992_ = v_config_2711_;
v_isShared_2993_ = v_isSharedCheck_3001_;
goto v_resetjp_2991_;
}
else
{
lean_dec(v_config_2711_);
v___x_2992_ = lean_box(0);
v_isShared_2993_ = v_isSharedCheck_3001_;
goto v_resetjp_2991_;
}
v_resetjp_2991_:
{
lean_object* v___x_2995_; 
if (v_isShared_2993_ == 0)
{
v___x_2995_ = v___x_2992_;
goto v_reusejp_2994_;
}
else
{
lean_object* v_reuseFailAlloc_3000_; 
v_reuseFailAlloc_3000_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v_reuseFailAlloc_3000_, 0, v_proofs_2981_);
lean_ctor_set_uint8(v_reuseFailAlloc_3000_, 1, v_types_2982_);
lean_ctor_set_uint8(v_reuseFailAlloc_3000_, 2, v_implicits_2983_);
lean_ctor_set_uint8(v_reuseFailAlloc_3000_, 3, v_descend_2984_);
lean_ctor_set_uint8(v_reuseFailAlloc_3000_, 4, v_underBinder_2985_);
lean_ctor_set_uint8(v_reuseFailAlloc_3000_, 5, v_usedOnly_2986_);
lean_ctor_set_uint8(v_reuseFailAlloc_3000_, 6, v_merge_2987_);
lean_ctor_set_uint8(v_reuseFailAlloc_3000_, 7, v_useContext_2988_);
lean_ctor_set_uint8(v_reuseFailAlloc_3000_, 8, v_onlyGivenNames_2989_);
v___x_2995_ = v_reuseFailAlloc_3000_;
goto v_reusejp_2994_;
}
v_reusejp_2994_:
{
uint8_t v___x_2996_; lean_object* v___x_2998_; 
v___x_2996_ = lean_unbox(v_a_2977_);
lean_dec(v_a_2977_);
lean_ctor_set_uint8(v___x_2995_, 9, v___x_2996_);
lean_ctor_set_uint8(v___x_2995_, 10, v_lift_2990_);
if (v_isShared_2980_ == 0)
{
lean_ctor_set(v___x_2979_, 0, v___x_2995_);
v___x_2998_ = v___x_2979_;
goto v_reusejp_2997_;
}
else
{
lean_object* v_reuseFailAlloc_2999_; 
v_reuseFailAlloc_2999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2999_, 0, v___x_2995_);
v___x_2998_ = v_reuseFailAlloc_2999_;
goto v_reusejp_2997_;
}
v_reusejp_2997_:
{
return v___x_2998_;
}
}
}
}
}
else
{
lean_object* v_a_3003_; lean_object* v___x_3005_; uint8_t v_isShared_3006_; uint8_t v_isSharedCheck_3010_; 
lean_dec_ref(v_config_2711_);
v_a_3003_ = lean_ctor_get(v___x_2976_, 0);
v_isSharedCheck_3010_ = !lean_is_exclusive(v___x_2976_);
if (v_isSharedCheck_3010_ == 0)
{
v___x_3005_ = v___x_2976_;
v_isShared_3006_ = v_isSharedCheck_3010_;
goto v_resetjp_3004_;
}
else
{
lean_inc(v_a_3003_);
lean_dec(v___x_2976_);
v___x_3005_ = lean_box(0);
v_isShared_3006_ = v_isSharedCheck_3010_;
goto v_resetjp_3004_;
}
v_resetjp_3004_:
{
lean_object* v___x_3008_; 
if (v_isShared_3006_ == 0)
{
v___x_3008_ = v___x_3005_;
goto v_reusejp_3007_;
}
else
{
lean_object* v_reuseFailAlloc_3009_; 
v_reuseFailAlloc_3009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3009_, 0, v_a_3003_);
v___x_3008_ = v_reuseFailAlloc_3009_;
goto v_reusejp_3007_;
}
v_reusejp_3007_:
{
return v___x_3008_;
}
}
}
}
}
else
{
lean_object* v_a_3011_; lean_object* v___x_3013_; uint8_t v_isShared_3014_; uint8_t v_isSharedCheck_3018_; 
lean_dec_ref(v___x_2728_);
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_a_3011_ = lean_ctor_get(v___x_2974_, 0);
v_isSharedCheck_3018_ = !lean_is_exclusive(v___x_2974_);
if (v_isSharedCheck_3018_ == 0)
{
v___x_3013_ = v___x_2974_;
v_isShared_3014_ = v_isSharedCheck_3018_;
goto v_resetjp_3012_;
}
else
{
lean_inc(v_a_3011_);
lean_dec(v___x_2974_);
v___x_3013_ = lean_box(0);
v_isShared_3014_ = v_isSharedCheck_3018_;
goto v_resetjp_3012_;
}
v_resetjp_3012_:
{
lean_object* v___x_3016_; 
if (v_isShared_3014_ == 0)
{
v___x_3016_ = v___x_3013_;
goto v_reusejp_3015_;
}
else
{
lean_object* v_reuseFailAlloc_3017_; 
v_reuseFailAlloc_3017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3017_, 0, v_a_3011_);
v___x_3016_ = v_reuseFailAlloc_3017_;
goto v_reusejp_3015_;
}
v_reusejp_3015_:
{
return v___x_3016_;
}
}
}
}
}
}
else
{
lean_object* v___x_3019_; uint8_t v___x_3020_; 
v___x_3019_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__13));
v___x_3020_ = lean_string_dec_lt(v___x_2727_, v___x_3019_);
if (v___x_3020_ == 0)
{
uint8_t v___x_3021_; 
v___x_3021_ = lean_string_dec_eq(v___x_2727_, v___x_3019_);
if (v___x_3021_ == 0)
{
lean_object* v___x_3022_; uint8_t v___x_3023_; 
v___x_3022_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__14));
v___x_3023_ = lean_string_dec_eq(v___x_2727_, v___x_3022_);
if (v___x_3023_ == 0)
{
lean_object* v___x_3024_; uint8_t v___x_3025_; 
v___x_3024_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__15));
v___x_3025_ = lean_string_dec_eq(v___x_2727_, v___x_3024_);
lean_dec_ref(v___x_2727_);
if (v___x_3025_ == 0)
{
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_item_2721_ = v___x_2728_;
goto v___jp_2720_;
}
else
{
lean_object* v___x_3026_; lean_object* v___x_3027_; 
v___x_3026_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__16));
v___x_3027_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_2712_, v___x_3026_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_3027_) == 0)
{
uint8_t v___x_3028_; 
lean_dec_ref_known(v___x_3027_, 1);
v___x_3028_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_2728_);
if (v___x_3028_ == 0)
{
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_item_2721_ = v___x_2728_;
goto v___jp_2720_;
}
else
{
lean_object* v___x_3029_; 
lean_dec_ref(v___x_2728_);
v___x_3029_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_3029_) == 0)
{
lean_object* v_a_3030_; lean_object* v___x_3032_; uint8_t v_isShared_3033_; uint8_t v_isSharedCheck_3055_; 
v_a_3030_ = lean_ctor_get(v___x_3029_, 0);
v_isSharedCheck_3055_ = !lean_is_exclusive(v___x_3029_);
if (v_isSharedCheck_3055_ == 0)
{
v___x_3032_ = v___x_3029_;
v_isShared_3033_ = v_isSharedCheck_3055_;
goto v_resetjp_3031_;
}
else
{
lean_inc(v_a_3030_);
lean_dec(v___x_3029_);
v___x_3032_ = lean_box(0);
v_isShared_3033_ = v_isSharedCheck_3055_;
goto v_resetjp_3031_;
}
v_resetjp_3031_:
{
uint8_t v_proofs_3034_; uint8_t v_types_3035_; uint8_t v_implicits_3036_; uint8_t v_descend_3037_; uint8_t v_underBinder_3038_; uint8_t v_usedOnly_3039_; uint8_t v_merge_3040_; uint8_t v_useContext_3041_; uint8_t v_preserveBinderNames_3042_; uint8_t v_lift_3043_; lean_object* v___x_3045_; uint8_t v_isShared_3046_; uint8_t v_isSharedCheck_3054_; 
v_proofs_3034_ = lean_ctor_get_uint8(v_config_2711_, 0);
v_types_3035_ = lean_ctor_get_uint8(v_config_2711_, 1);
v_implicits_3036_ = lean_ctor_get_uint8(v_config_2711_, 2);
v_descend_3037_ = lean_ctor_get_uint8(v_config_2711_, 3);
v_underBinder_3038_ = lean_ctor_get_uint8(v_config_2711_, 4);
v_usedOnly_3039_ = lean_ctor_get_uint8(v_config_2711_, 5);
v_merge_3040_ = lean_ctor_get_uint8(v_config_2711_, 6);
v_useContext_3041_ = lean_ctor_get_uint8(v_config_2711_, 7);
v_preserveBinderNames_3042_ = lean_ctor_get_uint8(v_config_2711_, 9);
v_lift_3043_ = lean_ctor_get_uint8(v_config_2711_, 10);
v_isSharedCheck_3054_ = !lean_is_exclusive(v_config_2711_);
if (v_isSharedCheck_3054_ == 0)
{
v___x_3045_ = v_config_2711_;
v_isShared_3046_ = v_isSharedCheck_3054_;
goto v_resetjp_3044_;
}
else
{
lean_dec(v_config_2711_);
v___x_3045_ = lean_box(0);
v_isShared_3046_ = v_isSharedCheck_3054_;
goto v_resetjp_3044_;
}
v_resetjp_3044_:
{
lean_object* v___x_3048_; 
if (v_isShared_3046_ == 0)
{
v___x_3048_ = v___x_3045_;
goto v_reusejp_3047_;
}
else
{
lean_object* v_reuseFailAlloc_3053_; 
v_reuseFailAlloc_3053_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v_reuseFailAlloc_3053_, 0, v_proofs_3034_);
lean_ctor_set_uint8(v_reuseFailAlloc_3053_, 1, v_types_3035_);
lean_ctor_set_uint8(v_reuseFailAlloc_3053_, 2, v_implicits_3036_);
lean_ctor_set_uint8(v_reuseFailAlloc_3053_, 3, v_descend_3037_);
lean_ctor_set_uint8(v_reuseFailAlloc_3053_, 4, v_underBinder_3038_);
lean_ctor_set_uint8(v_reuseFailAlloc_3053_, 5, v_usedOnly_3039_);
lean_ctor_set_uint8(v_reuseFailAlloc_3053_, 6, v_merge_3040_);
lean_ctor_set_uint8(v_reuseFailAlloc_3053_, 7, v_useContext_3041_);
v___x_3048_ = v_reuseFailAlloc_3053_;
goto v_reusejp_3047_;
}
v_reusejp_3047_:
{
uint8_t v___x_3049_; lean_object* v___x_3051_; 
v___x_3049_ = lean_unbox(v_a_3030_);
lean_dec(v_a_3030_);
lean_ctor_set_uint8(v___x_3048_, 8, v___x_3049_);
lean_ctor_set_uint8(v___x_3048_, 9, v_preserveBinderNames_3042_);
lean_ctor_set_uint8(v___x_3048_, 10, v_lift_3043_);
if (v_isShared_3033_ == 0)
{
lean_ctor_set(v___x_3032_, 0, v___x_3048_);
v___x_3051_ = v___x_3032_;
goto v_reusejp_3050_;
}
else
{
lean_object* v_reuseFailAlloc_3052_; 
v_reuseFailAlloc_3052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3052_, 0, v___x_3048_);
v___x_3051_ = v_reuseFailAlloc_3052_;
goto v_reusejp_3050_;
}
v_reusejp_3050_:
{
return v___x_3051_;
}
}
}
}
}
else
{
lean_object* v_a_3056_; lean_object* v___x_3058_; uint8_t v_isShared_3059_; uint8_t v_isSharedCheck_3063_; 
lean_dec_ref(v_config_2711_);
v_a_3056_ = lean_ctor_get(v___x_3029_, 0);
v_isSharedCheck_3063_ = !lean_is_exclusive(v___x_3029_);
if (v_isSharedCheck_3063_ == 0)
{
v___x_3058_ = v___x_3029_;
v_isShared_3059_ = v_isSharedCheck_3063_;
goto v_resetjp_3057_;
}
else
{
lean_inc(v_a_3056_);
lean_dec(v___x_3029_);
v___x_3058_ = lean_box(0);
v_isShared_3059_ = v_isSharedCheck_3063_;
goto v_resetjp_3057_;
}
v_resetjp_3057_:
{
lean_object* v___x_3061_; 
if (v_isShared_3059_ == 0)
{
v___x_3061_ = v___x_3058_;
goto v_reusejp_3060_;
}
else
{
lean_object* v_reuseFailAlloc_3062_; 
v_reuseFailAlloc_3062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3062_, 0, v_a_3056_);
v___x_3061_ = v_reuseFailAlloc_3062_;
goto v_reusejp_3060_;
}
v_reusejp_3060_:
{
return v___x_3061_;
}
}
}
}
}
else
{
lean_object* v_a_3064_; lean_object* v___x_3066_; uint8_t v_isShared_3067_; uint8_t v_isSharedCheck_3071_; 
lean_dec_ref(v___x_2728_);
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_a_3064_ = lean_ctor_get(v___x_3027_, 0);
v_isSharedCheck_3071_ = !lean_is_exclusive(v___x_3027_);
if (v_isSharedCheck_3071_ == 0)
{
v___x_3066_ = v___x_3027_;
v_isShared_3067_ = v_isSharedCheck_3071_;
goto v_resetjp_3065_;
}
else
{
lean_inc(v_a_3064_);
lean_dec(v___x_3027_);
v___x_3066_ = lean_box(0);
v_isShared_3067_ = v_isSharedCheck_3071_;
goto v_resetjp_3065_;
}
v_resetjp_3065_:
{
lean_object* v___x_3069_; 
if (v_isShared_3067_ == 0)
{
v___x_3069_ = v___x_3066_;
goto v_reusejp_3068_;
}
else
{
lean_object* v_reuseFailAlloc_3070_; 
v_reuseFailAlloc_3070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3070_, 0, v_a_3064_);
v___x_3069_ = v_reuseFailAlloc_3070_;
goto v_reusejp_3068_;
}
v_reusejp_3068_:
{
return v___x_3069_;
}
}
}
}
}
else
{
lean_object* v___x_3072_; lean_object* v___x_3073_; 
lean_dec_ref(v___x_2727_);
v___x_3072_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__17));
v___x_3073_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_2712_, v___x_3072_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_3073_) == 0)
{
uint8_t v___x_3074_; 
lean_dec_ref_known(v___x_3073_, 1);
v___x_3074_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_2728_);
if (v___x_3074_ == 0)
{
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_item_2721_ = v___x_2728_;
goto v___jp_2720_;
}
else
{
lean_object* v___x_3075_; 
lean_dec_ref(v___x_2728_);
v___x_3075_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_3075_) == 0)
{
lean_object* v_a_3076_; lean_object* v___x_3078_; uint8_t v_isShared_3079_; uint8_t v_isSharedCheck_3101_; 
v_a_3076_ = lean_ctor_get(v___x_3075_, 0);
v_isSharedCheck_3101_ = !lean_is_exclusive(v___x_3075_);
if (v_isSharedCheck_3101_ == 0)
{
v___x_3078_ = v___x_3075_;
v_isShared_3079_ = v_isSharedCheck_3101_;
goto v_resetjp_3077_;
}
else
{
lean_inc(v_a_3076_);
lean_dec(v___x_3075_);
v___x_3078_ = lean_box(0);
v_isShared_3079_ = v_isSharedCheck_3101_;
goto v_resetjp_3077_;
}
v_resetjp_3077_:
{
uint8_t v_proofs_3080_; uint8_t v_types_3081_; uint8_t v_implicits_3082_; uint8_t v_descend_3083_; uint8_t v_underBinder_3084_; uint8_t v_usedOnly_3085_; uint8_t v_useContext_3086_; uint8_t v_onlyGivenNames_3087_; uint8_t v_preserveBinderNames_3088_; uint8_t v_lift_3089_; lean_object* v___x_3091_; uint8_t v_isShared_3092_; uint8_t v_isSharedCheck_3100_; 
v_proofs_3080_ = lean_ctor_get_uint8(v_config_2711_, 0);
v_types_3081_ = lean_ctor_get_uint8(v_config_2711_, 1);
v_implicits_3082_ = lean_ctor_get_uint8(v_config_2711_, 2);
v_descend_3083_ = lean_ctor_get_uint8(v_config_2711_, 3);
v_underBinder_3084_ = lean_ctor_get_uint8(v_config_2711_, 4);
v_usedOnly_3085_ = lean_ctor_get_uint8(v_config_2711_, 5);
v_useContext_3086_ = lean_ctor_get_uint8(v_config_2711_, 7);
v_onlyGivenNames_3087_ = lean_ctor_get_uint8(v_config_2711_, 8);
v_preserveBinderNames_3088_ = lean_ctor_get_uint8(v_config_2711_, 9);
v_lift_3089_ = lean_ctor_get_uint8(v_config_2711_, 10);
v_isSharedCheck_3100_ = !lean_is_exclusive(v_config_2711_);
if (v_isSharedCheck_3100_ == 0)
{
v___x_3091_ = v_config_2711_;
v_isShared_3092_ = v_isSharedCheck_3100_;
goto v_resetjp_3090_;
}
else
{
lean_dec(v_config_2711_);
v___x_3091_ = lean_box(0);
v_isShared_3092_ = v_isSharedCheck_3100_;
goto v_resetjp_3090_;
}
v_resetjp_3090_:
{
lean_object* v___x_3094_; 
if (v_isShared_3092_ == 0)
{
v___x_3094_ = v___x_3091_;
goto v_reusejp_3093_;
}
else
{
lean_object* v_reuseFailAlloc_3099_; 
v_reuseFailAlloc_3099_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v_reuseFailAlloc_3099_, 0, v_proofs_3080_);
lean_ctor_set_uint8(v_reuseFailAlloc_3099_, 1, v_types_3081_);
lean_ctor_set_uint8(v_reuseFailAlloc_3099_, 2, v_implicits_3082_);
lean_ctor_set_uint8(v_reuseFailAlloc_3099_, 3, v_descend_3083_);
lean_ctor_set_uint8(v_reuseFailAlloc_3099_, 4, v_underBinder_3084_);
lean_ctor_set_uint8(v_reuseFailAlloc_3099_, 5, v_usedOnly_3085_);
v___x_3094_ = v_reuseFailAlloc_3099_;
goto v_reusejp_3093_;
}
v_reusejp_3093_:
{
uint8_t v___x_3095_; lean_object* v___x_3097_; 
v___x_3095_ = lean_unbox(v_a_3076_);
lean_dec(v_a_3076_);
lean_ctor_set_uint8(v___x_3094_, 6, v___x_3095_);
lean_ctor_set_uint8(v___x_3094_, 7, v_useContext_3086_);
lean_ctor_set_uint8(v___x_3094_, 8, v_onlyGivenNames_3087_);
lean_ctor_set_uint8(v___x_3094_, 9, v_preserveBinderNames_3088_);
lean_ctor_set_uint8(v___x_3094_, 10, v_lift_3089_);
if (v_isShared_3079_ == 0)
{
lean_ctor_set(v___x_3078_, 0, v___x_3094_);
v___x_3097_ = v___x_3078_;
goto v_reusejp_3096_;
}
else
{
lean_object* v_reuseFailAlloc_3098_; 
v_reuseFailAlloc_3098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3098_, 0, v___x_3094_);
v___x_3097_ = v_reuseFailAlloc_3098_;
goto v_reusejp_3096_;
}
v_reusejp_3096_:
{
return v___x_3097_;
}
}
}
}
}
else
{
lean_object* v_a_3102_; lean_object* v___x_3104_; uint8_t v_isShared_3105_; uint8_t v_isSharedCheck_3109_; 
lean_dec_ref(v_config_2711_);
v_a_3102_ = lean_ctor_get(v___x_3075_, 0);
v_isSharedCheck_3109_ = !lean_is_exclusive(v___x_3075_);
if (v_isSharedCheck_3109_ == 0)
{
v___x_3104_ = v___x_3075_;
v_isShared_3105_ = v_isSharedCheck_3109_;
goto v_resetjp_3103_;
}
else
{
lean_inc(v_a_3102_);
lean_dec(v___x_3075_);
v___x_3104_ = lean_box(0);
v_isShared_3105_ = v_isSharedCheck_3109_;
goto v_resetjp_3103_;
}
v_resetjp_3103_:
{
lean_object* v___x_3107_; 
if (v_isShared_3105_ == 0)
{
v___x_3107_ = v___x_3104_;
goto v_reusejp_3106_;
}
else
{
lean_object* v_reuseFailAlloc_3108_; 
v_reuseFailAlloc_3108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3108_, 0, v_a_3102_);
v___x_3107_ = v_reuseFailAlloc_3108_;
goto v_reusejp_3106_;
}
v_reusejp_3106_:
{
return v___x_3107_;
}
}
}
}
}
else
{
lean_object* v_a_3110_; lean_object* v___x_3112_; uint8_t v_isShared_3113_; uint8_t v_isSharedCheck_3117_; 
lean_dec_ref(v___x_2728_);
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_a_3110_ = lean_ctor_get(v___x_3073_, 0);
v_isSharedCheck_3117_ = !lean_is_exclusive(v___x_3073_);
if (v_isSharedCheck_3117_ == 0)
{
v___x_3112_ = v___x_3073_;
v_isShared_3113_ = v_isSharedCheck_3117_;
goto v_resetjp_3111_;
}
else
{
lean_inc(v_a_3110_);
lean_dec(v___x_3073_);
v___x_3112_ = lean_box(0);
v_isShared_3113_ = v_isSharedCheck_3117_;
goto v_resetjp_3111_;
}
v_resetjp_3111_:
{
lean_object* v___x_3115_; 
if (v_isShared_3113_ == 0)
{
v___x_3115_ = v___x_3112_;
goto v_reusejp_3114_;
}
else
{
lean_object* v_reuseFailAlloc_3116_; 
v_reuseFailAlloc_3116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3116_, 0, v_a_3110_);
v___x_3115_ = v_reuseFailAlloc_3116_;
goto v_reusejp_3114_;
}
v_reusejp_3114_:
{
return v___x_3115_;
}
}
}
}
}
else
{
lean_object* v___x_3118_; lean_object* v___x_3119_; 
lean_dec_ref(v___x_2727_);
v___x_3118_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__18));
v___x_3119_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_2712_, v___x_3118_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_3119_) == 0)
{
uint8_t v___x_3120_; 
lean_dec_ref_known(v___x_3119_, 1);
v___x_3120_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_2728_);
if (v___x_3120_ == 0)
{
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_item_2721_ = v___x_2728_;
goto v___jp_2720_;
}
else
{
lean_object* v___x_3121_; 
lean_dec_ref(v___x_2728_);
v___x_3121_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_3121_) == 0)
{
lean_object* v_a_3122_; lean_object* v___x_3124_; uint8_t v_isShared_3125_; uint8_t v_isSharedCheck_3147_; 
v_a_3122_ = lean_ctor_get(v___x_3121_, 0);
v_isSharedCheck_3147_ = !lean_is_exclusive(v___x_3121_);
if (v_isSharedCheck_3147_ == 0)
{
v___x_3124_ = v___x_3121_;
v_isShared_3125_ = v_isSharedCheck_3147_;
goto v_resetjp_3123_;
}
else
{
lean_inc(v_a_3122_);
lean_dec(v___x_3121_);
v___x_3124_ = lean_box(0);
v_isShared_3125_ = v_isSharedCheck_3147_;
goto v_resetjp_3123_;
}
v_resetjp_3123_:
{
uint8_t v_proofs_3126_; uint8_t v_types_3127_; uint8_t v_implicits_3128_; uint8_t v_descend_3129_; uint8_t v_underBinder_3130_; uint8_t v_usedOnly_3131_; uint8_t v_merge_3132_; uint8_t v_useContext_3133_; uint8_t v_onlyGivenNames_3134_; uint8_t v_preserveBinderNames_3135_; lean_object* v___x_3137_; uint8_t v_isShared_3138_; uint8_t v_isSharedCheck_3146_; 
v_proofs_3126_ = lean_ctor_get_uint8(v_config_2711_, 0);
v_types_3127_ = lean_ctor_get_uint8(v_config_2711_, 1);
v_implicits_3128_ = lean_ctor_get_uint8(v_config_2711_, 2);
v_descend_3129_ = lean_ctor_get_uint8(v_config_2711_, 3);
v_underBinder_3130_ = lean_ctor_get_uint8(v_config_2711_, 4);
v_usedOnly_3131_ = lean_ctor_get_uint8(v_config_2711_, 5);
v_merge_3132_ = lean_ctor_get_uint8(v_config_2711_, 6);
v_useContext_3133_ = lean_ctor_get_uint8(v_config_2711_, 7);
v_onlyGivenNames_3134_ = lean_ctor_get_uint8(v_config_2711_, 8);
v_preserveBinderNames_3135_ = lean_ctor_get_uint8(v_config_2711_, 9);
v_isSharedCheck_3146_ = !lean_is_exclusive(v_config_2711_);
if (v_isSharedCheck_3146_ == 0)
{
v___x_3137_ = v_config_2711_;
v_isShared_3138_ = v_isSharedCheck_3146_;
goto v_resetjp_3136_;
}
else
{
lean_dec(v_config_2711_);
v___x_3137_ = lean_box(0);
v_isShared_3138_ = v_isSharedCheck_3146_;
goto v_resetjp_3136_;
}
v_resetjp_3136_:
{
lean_object* v___x_3140_; 
if (v_isShared_3138_ == 0)
{
v___x_3140_ = v___x_3137_;
goto v_reusejp_3139_;
}
else
{
lean_object* v_reuseFailAlloc_3145_; 
v_reuseFailAlloc_3145_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v_reuseFailAlloc_3145_, 0, v_proofs_3126_);
lean_ctor_set_uint8(v_reuseFailAlloc_3145_, 1, v_types_3127_);
lean_ctor_set_uint8(v_reuseFailAlloc_3145_, 2, v_implicits_3128_);
lean_ctor_set_uint8(v_reuseFailAlloc_3145_, 3, v_descend_3129_);
lean_ctor_set_uint8(v_reuseFailAlloc_3145_, 4, v_underBinder_3130_);
lean_ctor_set_uint8(v_reuseFailAlloc_3145_, 5, v_usedOnly_3131_);
lean_ctor_set_uint8(v_reuseFailAlloc_3145_, 6, v_merge_3132_);
lean_ctor_set_uint8(v_reuseFailAlloc_3145_, 7, v_useContext_3133_);
lean_ctor_set_uint8(v_reuseFailAlloc_3145_, 8, v_onlyGivenNames_3134_);
lean_ctor_set_uint8(v_reuseFailAlloc_3145_, 9, v_preserveBinderNames_3135_);
v___x_3140_ = v_reuseFailAlloc_3145_;
goto v_reusejp_3139_;
}
v_reusejp_3139_:
{
uint8_t v___x_3141_; lean_object* v___x_3143_; 
v___x_3141_ = lean_unbox(v_a_3122_);
lean_dec(v_a_3122_);
lean_ctor_set_uint8(v___x_3140_, 10, v___x_3141_);
if (v_isShared_3125_ == 0)
{
lean_ctor_set(v___x_3124_, 0, v___x_3140_);
v___x_3143_ = v___x_3124_;
goto v_reusejp_3142_;
}
else
{
lean_object* v_reuseFailAlloc_3144_; 
v_reuseFailAlloc_3144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3144_, 0, v___x_3140_);
v___x_3143_ = v_reuseFailAlloc_3144_;
goto v_reusejp_3142_;
}
v_reusejp_3142_:
{
return v___x_3143_;
}
}
}
}
}
else
{
lean_object* v_a_3148_; lean_object* v___x_3150_; uint8_t v_isShared_3151_; uint8_t v_isSharedCheck_3155_; 
lean_dec_ref(v_config_2711_);
v_a_3148_ = lean_ctor_get(v___x_3121_, 0);
v_isSharedCheck_3155_ = !lean_is_exclusive(v___x_3121_);
if (v_isSharedCheck_3155_ == 0)
{
v___x_3150_ = v___x_3121_;
v_isShared_3151_ = v_isSharedCheck_3155_;
goto v_resetjp_3149_;
}
else
{
lean_inc(v_a_3148_);
lean_dec(v___x_3121_);
v___x_3150_ = lean_box(0);
v_isShared_3151_ = v_isSharedCheck_3155_;
goto v_resetjp_3149_;
}
v_resetjp_3149_:
{
lean_object* v___x_3153_; 
if (v_isShared_3151_ == 0)
{
v___x_3153_ = v___x_3150_;
goto v_reusejp_3152_;
}
else
{
lean_object* v_reuseFailAlloc_3154_; 
v_reuseFailAlloc_3154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3154_, 0, v_a_3148_);
v___x_3153_ = v_reuseFailAlloc_3154_;
goto v_reusejp_3152_;
}
v_reusejp_3152_:
{
return v___x_3153_;
}
}
}
}
}
else
{
lean_object* v_a_3156_; lean_object* v___x_3158_; uint8_t v_isShared_3159_; uint8_t v_isSharedCheck_3163_; 
lean_dec_ref(v___x_2728_);
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_a_3156_ = lean_ctor_get(v___x_3119_, 0);
v_isSharedCheck_3163_ = !lean_is_exclusive(v___x_3119_);
if (v_isSharedCheck_3163_ == 0)
{
v___x_3158_ = v___x_3119_;
v_isShared_3159_ = v_isSharedCheck_3163_;
goto v_resetjp_3157_;
}
else
{
lean_inc(v_a_3156_);
lean_dec(v___x_3119_);
v___x_3158_ = lean_box(0);
v_isShared_3159_ = v_isSharedCheck_3163_;
goto v_resetjp_3157_;
}
v_resetjp_3157_:
{
lean_object* v___x_3161_; 
if (v_isShared_3159_ == 0)
{
v___x_3161_ = v___x_3158_;
goto v_reusejp_3160_;
}
else
{
lean_object* v_reuseFailAlloc_3162_; 
v_reuseFailAlloc_3162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3162_, 0, v_a_3156_);
v___x_3161_ = v_reuseFailAlloc_3162_;
goto v_reusejp_3160_;
}
v_reusejp_3160_:
{
return v___x_3161_;
}
}
}
}
}
else
{
lean_object* v___x_3164_; uint8_t v___x_3165_; 
v___x_3164_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__19));
v___x_3165_ = lean_string_dec_eq(v___x_2727_, v___x_3164_);
if (v___x_3165_ == 0)
{
lean_object* v___x_3166_; uint8_t v___x_3167_; 
v___x_3166_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__20));
v___x_3167_ = lean_string_dec_eq(v___x_2727_, v___x_3166_);
if (v___x_3167_ == 0)
{
lean_object* v___x_3168_; uint8_t v___x_3169_; 
v___x_3168_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__21));
v___x_3169_ = lean_string_dec_eq(v___x_2727_, v___x_3168_);
lean_dec_ref(v___x_2727_);
if (v___x_3169_ == 0)
{
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_item_2721_ = v___x_2728_;
goto v___jp_2720_;
}
else
{
lean_object* v___x_3170_; lean_object* v___x_3171_; 
v___x_3170_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__22));
v___x_3171_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_2712_, v___x_3170_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_3171_) == 0)
{
uint8_t v___x_3172_; 
lean_dec_ref_known(v___x_3171_, 1);
v___x_3172_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_2728_);
if (v___x_3172_ == 0)
{
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_item_2721_ = v___x_2728_;
goto v___jp_2720_;
}
else
{
lean_object* v___x_3173_; 
lean_dec_ref(v___x_2728_);
v___x_3173_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_3173_) == 0)
{
lean_object* v_a_3174_; lean_object* v___x_3176_; uint8_t v_isShared_3177_; uint8_t v_isSharedCheck_3199_; 
v_a_3174_ = lean_ctor_get(v___x_3173_, 0);
v_isSharedCheck_3199_ = !lean_is_exclusive(v___x_3173_);
if (v_isSharedCheck_3199_ == 0)
{
v___x_3176_ = v___x_3173_;
v_isShared_3177_ = v_isSharedCheck_3199_;
goto v_resetjp_3175_;
}
else
{
lean_inc(v_a_3174_);
lean_dec(v___x_3173_);
v___x_3176_ = lean_box(0);
v_isShared_3177_ = v_isSharedCheck_3199_;
goto v_resetjp_3175_;
}
v_resetjp_3175_:
{
uint8_t v_proofs_3178_; uint8_t v_types_3179_; uint8_t v_descend_3180_; uint8_t v_underBinder_3181_; uint8_t v_usedOnly_3182_; uint8_t v_merge_3183_; uint8_t v_useContext_3184_; uint8_t v_onlyGivenNames_3185_; uint8_t v_preserveBinderNames_3186_; uint8_t v_lift_3187_; lean_object* v___x_3189_; uint8_t v_isShared_3190_; uint8_t v_isSharedCheck_3198_; 
v_proofs_3178_ = lean_ctor_get_uint8(v_config_2711_, 0);
v_types_3179_ = lean_ctor_get_uint8(v_config_2711_, 1);
v_descend_3180_ = lean_ctor_get_uint8(v_config_2711_, 3);
v_underBinder_3181_ = lean_ctor_get_uint8(v_config_2711_, 4);
v_usedOnly_3182_ = lean_ctor_get_uint8(v_config_2711_, 5);
v_merge_3183_ = lean_ctor_get_uint8(v_config_2711_, 6);
v_useContext_3184_ = lean_ctor_get_uint8(v_config_2711_, 7);
v_onlyGivenNames_3185_ = lean_ctor_get_uint8(v_config_2711_, 8);
v_preserveBinderNames_3186_ = lean_ctor_get_uint8(v_config_2711_, 9);
v_lift_3187_ = lean_ctor_get_uint8(v_config_2711_, 10);
v_isSharedCheck_3198_ = !lean_is_exclusive(v_config_2711_);
if (v_isSharedCheck_3198_ == 0)
{
v___x_3189_ = v_config_2711_;
v_isShared_3190_ = v_isSharedCheck_3198_;
goto v_resetjp_3188_;
}
else
{
lean_dec(v_config_2711_);
v___x_3189_ = lean_box(0);
v_isShared_3190_ = v_isSharedCheck_3198_;
goto v_resetjp_3188_;
}
v_resetjp_3188_:
{
lean_object* v___x_3192_; 
if (v_isShared_3190_ == 0)
{
v___x_3192_ = v___x_3189_;
goto v_reusejp_3191_;
}
else
{
lean_object* v_reuseFailAlloc_3197_; 
v_reuseFailAlloc_3197_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v_reuseFailAlloc_3197_, 0, v_proofs_3178_);
lean_ctor_set_uint8(v_reuseFailAlloc_3197_, 1, v_types_3179_);
v___x_3192_ = v_reuseFailAlloc_3197_;
goto v_reusejp_3191_;
}
v_reusejp_3191_:
{
uint8_t v___x_3193_; lean_object* v___x_3195_; 
v___x_3193_ = lean_unbox(v_a_3174_);
lean_dec(v_a_3174_);
lean_ctor_set_uint8(v___x_3192_, 2, v___x_3193_);
lean_ctor_set_uint8(v___x_3192_, 3, v_descend_3180_);
lean_ctor_set_uint8(v___x_3192_, 4, v_underBinder_3181_);
lean_ctor_set_uint8(v___x_3192_, 5, v_usedOnly_3182_);
lean_ctor_set_uint8(v___x_3192_, 6, v_merge_3183_);
lean_ctor_set_uint8(v___x_3192_, 7, v_useContext_3184_);
lean_ctor_set_uint8(v___x_3192_, 8, v_onlyGivenNames_3185_);
lean_ctor_set_uint8(v___x_3192_, 9, v_preserveBinderNames_3186_);
lean_ctor_set_uint8(v___x_3192_, 10, v_lift_3187_);
if (v_isShared_3177_ == 0)
{
lean_ctor_set(v___x_3176_, 0, v___x_3192_);
v___x_3195_ = v___x_3176_;
goto v_reusejp_3194_;
}
else
{
lean_object* v_reuseFailAlloc_3196_; 
v_reuseFailAlloc_3196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3196_, 0, v___x_3192_);
v___x_3195_ = v_reuseFailAlloc_3196_;
goto v_reusejp_3194_;
}
v_reusejp_3194_:
{
return v___x_3195_;
}
}
}
}
}
else
{
lean_object* v_a_3200_; lean_object* v___x_3202_; uint8_t v_isShared_3203_; uint8_t v_isSharedCheck_3207_; 
lean_dec_ref(v_config_2711_);
v_a_3200_ = lean_ctor_get(v___x_3173_, 0);
v_isSharedCheck_3207_ = !lean_is_exclusive(v___x_3173_);
if (v_isSharedCheck_3207_ == 0)
{
v___x_3202_ = v___x_3173_;
v_isShared_3203_ = v_isSharedCheck_3207_;
goto v_resetjp_3201_;
}
else
{
lean_inc(v_a_3200_);
lean_dec(v___x_3173_);
v___x_3202_ = lean_box(0);
v_isShared_3203_ = v_isSharedCheck_3207_;
goto v_resetjp_3201_;
}
v_resetjp_3201_:
{
lean_object* v___x_3205_; 
if (v_isShared_3203_ == 0)
{
v___x_3205_ = v___x_3202_;
goto v_reusejp_3204_;
}
else
{
lean_object* v_reuseFailAlloc_3206_; 
v_reuseFailAlloc_3206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3206_, 0, v_a_3200_);
v___x_3205_ = v_reuseFailAlloc_3206_;
goto v_reusejp_3204_;
}
v_reusejp_3204_:
{
return v___x_3205_;
}
}
}
}
}
else
{
lean_object* v_a_3208_; lean_object* v___x_3210_; uint8_t v_isShared_3211_; uint8_t v_isSharedCheck_3215_; 
lean_dec_ref(v___x_2728_);
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_a_3208_ = lean_ctor_get(v___x_3171_, 0);
v_isSharedCheck_3215_ = !lean_is_exclusive(v___x_3171_);
if (v_isSharedCheck_3215_ == 0)
{
v___x_3210_ = v___x_3171_;
v_isShared_3211_ = v_isSharedCheck_3215_;
goto v_resetjp_3209_;
}
else
{
lean_inc(v_a_3208_);
lean_dec(v___x_3171_);
v___x_3210_ = lean_box(0);
v_isShared_3211_ = v_isSharedCheck_3215_;
goto v_resetjp_3209_;
}
v_resetjp_3209_:
{
lean_object* v___x_3213_; 
if (v_isShared_3211_ == 0)
{
v___x_3213_ = v___x_3210_;
goto v_reusejp_3212_;
}
else
{
lean_object* v_reuseFailAlloc_3214_; 
v_reuseFailAlloc_3214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3214_, 0, v_a_3208_);
v___x_3213_ = v_reuseFailAlloc_3214_;
goto v_reusejp_3212_;
}
v_reusejp_3212_:
{
return v___x_3213_;
}
}
}
}
}
else
{
lean_object* v___x_3216_; lean_object* v___x_3217_; 
lean_dec_ref(v___x_2727_);
v___x_3216_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabExtractLetsConfig_evalConfigItem___lam__0___closed__23));
v___x_3217_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_2712_, v___x_3216_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_3217_) == 0)
{
uint8_t v___x_3218_; 
lean_dec_ref_known(v___x_3217_, 1);
v___x_3218_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_2728_);
if (v___x_3218_ == 0)
{
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_item_2721_ = v___x_2728_;
goto v___jp_2720_;
}
else
{
lean_object* v___x_3219_; 
lean_dec_ref(v___x_2728_);
v___x_3219_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_3219_) == 0)
{
lean_object* v_a_3220_; lean_object* v___x_3222_; uint8_t v_isShared_3223_; uint8_t v_isSharedCheck_3245_; 
v_a_3220_ = lean_ctor_get(v___x_3219_, 0);
v_isSharedCheck_3245_ = !lean_is_exclusive(v___x_3219_);
if (v_isSharedCheck_3245_ == 0)
{
v___x_3222_ = v___x_3219_;
v_isShared_3223_ = v_isSharedCheck_3245_;
goto v_resetjp_3221_;
}
else
{
lean_inc(v_a_3220_);
lean_dec(v___x_3219_);
v___x_3222_ = lean_box(0);
v_isShared_3223_ = v_isSharedCheck_3245_;
goto v_resetjp_3221_;
}
v_resetjp_3221_:
{
uint8_t v_proofs_3224_; uint8_t v_types_3225_; uint8_t v_implicits_3226_; uint8_t v_underBinder_3227_; uint8_t v_usedOnly_3228_; uint8_t v_merge_3229_; uint8_t v_useContext_3230_; uint8_t v_onlyGivenNames_3231_; uint8_t v_preserveBinderNames_3232_; uint8_t v_lift_3233_; lean_object* v___x_3235_; uint8_t v_isShared_3236_; uint8_t v_isSharedCheck_3244_; 
v_proofs_3224_ = lean_ctor_get_uint8(v_config_2711_, 0);
v_types_3225_ = lean_ctor_get_uint8(v_config_2711_, 1);
v_implicits_3226_ = lean_ctor_get_uint8(v_config_2711_, 2);
v_underBinder_3227_ = lean_ctor_get_uint8(v_config_2711_, 4);
v_usedOnly_3228_ = lean_ctor_get_uint8(v_config_2711_, 5);
v_merge_3229_ = lean_ctor_get_uint8(v_config_2711_, 6);
v_useContext_3230_ = lean_ctor_get_uint8(v_config_2711_, 7);
v_onlyGivenNames_3231_ = lean_ctor_get_uint8(v_config_2711_, 8);
v_preserveBinderNames_3232_ = lean_ctor_get_uint8(v_config_2711_, 9);
v_lift_3233_ = lean_ctor_get_uint8(v_config_2711_, 10);
v_isSharedCheck_3244_ = !lean_is_exclusive(v_config_2711_);
if (v_isSharedCheck_3244_ == 0)
{
v___x_3235_ = v_config_2711_;
v_isShared_3236_ = v_isSharedCheck_3244_;
goto v_resetjp_3234_;
}
else
{
lean_dec(v_config_2711_);
v___x_3235_ = lean_box(0);
v_isShared_3236_ = v_isSharedCheck_3244_;
goto v_resetjp_3234_;
}
v_resetjp_3234_:
{
lean_object* v___x_3238_; 
if (v_isShared_3236_ == 0)
{
v___x_3238_ = v___x_3235_;
goto v_reusejp_3237_;
}
else
{
lean_object* v_reuseFailAlloc_3243_; 
v_reuseFailAlloc_3243_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v_reuseFailAlloc_3243_, 0, v_proofs_3224_);
lean_ctor_set_uint8(v_reuseFailAlloc_3243_, 1, v_types_3225_);
lean_ctor_set_uint8(v_reuseFailAlloc_3243_, 2, v_implicits_3226_);
v___x_3238_ = v_reuseFailAlloc_3243_;
goto v_reusejp_3237_;
}
v_reusejp_3237_:
{
uint8_t v___x_3239_; lean_object* v___x_3241_; 
v___x_3239_ = lean_unbox(v_a_3220_);
lean_dec(v_a_3220_);
lean_ctor_set_uint8(v___x_3238_, 3, v___x_3239_);
lean_ctor_set_uint8(v___x_3238_, 4, v_underBinder_3227_);
lean_ctor_set_uint8(v___x_3238_, 5, v_usedOnly_3228_);
lean_ctor_set_uint8(v___x_3238_, 6, v_merge_3229_);
lean_ctor_set_uint8(v___x_3238_, 7, v_useContext_3230_);
lean_ctor_set_uint8(v___x_3238_, 8, v_onlyGivenNames_3231_);
lean_ctor_set_uint8(v___x_3238_, 9, v_preserveBinderNames_3232_);
lean_ctor_set_uint8(v___x_3238_, 10, v_lift_3233_);
if (v_isShared_3223_ == 0)
{
lean_ctor_set(v___x_3222_, 0, v___x_3238_);
v___x_3241_ = v___x_3222_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3242_; 
v_reuseFailAlloc_3242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3242_, 0, v___x_3238_);
v___x_3241_ = v_reuseFailAlloc_3242_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
return v___x_3241_;
}
}
}
}
}
else
{
lean_object* v_a_3246_; lean_object* v___x_3248_; uint8_t v_isShared_3249_; uint8_t v_isSharedCheck_3253_; 
lean_dec_ref(v_config_2711_);
v_a_3246_ = lean_ctor_get(v___x_3219_, 0);
v_isSharedCheck_3253_ = !lean_is_exclusive(v___x_3219_);
if (v_isSharedCheck_3253_ == 0)
{
v___x_3248_ = v___x_3219_;
v_isShared_3249_ = v_isSharedCheck_3253_;
goto v_resetjp_3247_;
}
else
{
lean_inc(v_a_3246_);
lean_dec(v___x_3219_);
v___x_3248_ = lean_box(0);
v_isShared_3249_ = v_isSharedCheck_3253_;
goto v_resetjp_3247_;
}
v_resetjp_3247_:
{
lean_object* v___x_3251_; 
if (v_isShared_3249_ == 0)
{
v___x_3251_ = v___x_3248_;
goto v_reusejp_3250_;
}
else
{
lean_object* v_reuseFailAlloc_3252_; 
v_reuseFailAlloc_3252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3252_, 0, v_a_3246_);
v___x_3251_ = v_reuseFailAlloc_3252_;
goto v_reusejp_3250_;
}
v_reusejp_3250_:
{
return v___x_3251_;
}
}
}
}
}
else
{
lean_object* v_a_3254_; lean_object* v___x_3256_; uint8_t v_isShared_3257_; uint8_t v_isSharedCheck_3261_; 
lean_dec_ref(v___x_2728_);
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_a_3254_ = lean_ctor_get(v___x_3217_, 0);
v_isSharedCheck_3261_ = !lean_is_exclusive(v___x_3217_);
if (v_isSharedCheck_3261_ == 0)
{
v___x_3256_ = v___x_3217_;
v_isShared_3257_ = v_isSharedCheck_3261_;
goto v_resetjp_3255_;
}
else
{
lean_inc(v_a_3254_);
lean_dec(v___x_3217_);
v___x_3256_ = lean_box(0);
v_isShared_3257_ = v_isSharedCheck_3261_;
goto v_resetjp_3255_;
}
v_resetjp_3255_:
{
lean_object* v___x_3259_; 
if (v_isShared_3257_ == 0)
{
v___x_3259_ = v___x_3256_;
goto v_reusejp_3258_;
}
else
{
lean_object* v_reuseFailAlloc_3260_; 
v_reuseFailAlloc_3260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3260_, 0, v_a_3254_);
v___x_3259_ = v_reuseFailAlloc_3260_;
goto v_reusejp_3258_;
}
v_reusejp_3258_:
{
return v___x_3259_;
}
}
}
}
}
else
{
uint8_t v___x_3262_; 
lean_dec_ref(v___x_2727_);
lean_dec_ref(v_config_2711_);
v___x_3262_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_2728_);
if (v___x_3262_ == 0)
{
lean_dec_ref(v_item_2712_);
v_item_2721_ = v___x_2728_;
goto v___jp_2720_;
}
else
{
lean_object* v_value_3263_; lean_object* v___x_3264_; 
lean_dec_ref(v___x_2728_);
v_value_3263_ = lean_ctor_get(v_item_2712_, 2);
lean_inc(v_value_3263_);
lean_dec_ref(v_item_2712_);
v___x_3264_ = l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem_spec__0(v_value_3263_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
return v___x_3264_;
}
}
}
}
}
else
{
lean_dec_ref(v_config_2711_);
v_item_2721_ = v_item_2712_;
goto v___jp_2720_;
}
}
else
{
lean_object* v_a_3265_; lean_object* v___x_3267_; uint8_t v_isShared_3268_; uint8_t v_isSharedCheck_3272_; 
lean_dec_ref(v_item_2712_);
lean_dec_ref(v_config_2711_);
v_a_3265_ = lean_ctor_get(v___x_2725_, 0);
v_isSharedCheck_3272_ = !lean_is_exclusive(v___x_2725_);
if (v_isSharedCheck_3272_ == 0)
{
v___x_3267_ = v___x_2725_;
v_isShared_3268_ = v_isSharedCheck_3272_;
goto v_resetjp_3266_;
}
else
{
lean_inc(v_a_3265_);
lean_dec(v___x_2725_);
v___x_3267_ = lean_box(0);
v_isShared_3268_ = v_isSharedCheck_3272_;
goto v_resetjp_3266_;
}
v_resetjp_3266_:
{
lean_object* v___x_3270_; 
if (v_isShared_3268_ == 0)
{
v___x_3270_ = v___x_3267_;
goto v_reusejp_3269_;
}
else
{
lean_object* v_reuseFailAlloc_3271_; 
v_reuseFailAlloc_3271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3271_, 0, v_a_3265_);
v___x_3270_ = v_reuseFailAlloc_3271_;
goto v_reusejp_3269_;
}
v_reusejp_3269_:
{
return v___x_3270_;
}
}
}
v___jp_2720_:
{
lean_object* v___x_2722_; lean_object* v___x_2723_; 
v___x_2722_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem___lam__0___closed__0));
v___x_2723_ = l_Lean_Elab_ConfigEval_ConfigItem_throwInvalidOption___redArg(v_item_2721_, v___x_2722_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
return v___x_2723_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem___lam__0___boxed(lean_object* v_config_3273_, lean_object* v_item_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_){
_start:
{
lean_object* v_res_3282_; 
v_res_3282_ = l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem___lam__0(v_config_3273_, v_item_3274_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_, v___y_3279_, v___y_3280_);
lean_dec(v___y_3280_);
lean_dec_ref(v___y_3279_);
lean_dec(v___y_3278_);
lean_dec_ref(v___y_3277_);
lean_dec(v___y_3276_);
lean_dec_ref(v___y_3275_);
return v_res_3282_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; 
v___x_3285_ = lean_box(0);
v___x_3286_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig_evalExpr___closed__2));
v___x_3287_ = l_Lean_mkConst(v___x_3286_, v___x_3285_);
return v___x_3287_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3288_; lean_object* v___x_3289_; 
v___x_3288_ = lean_obj_once(&l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg___lam__0___closed__0, &l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg___lam__0___closed__0);
v___x_3289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3289_, 0, v___x_3288_);
return v___x_3289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg___lam__0(lean_object* v_cfg_3290_, lean_object* v_cfgItem_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_, lean_object* v___y_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_){
_start:
{
lean_object* v___x_3299_; lean_object* v___x_3300_; 
v___x_3299_ = lean_obj_once(&l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg___lam__0___closed__1, &l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg___lam__0___closed__1);
v___x_3300_ = l_Lean_Elab_ConfigEval_EvalConfigItem_defaultOnErr___redArg(v_cfg_3290_, v_cfgItem_3291_, v___x_3299_, v___y_3292_, v___y_3293_, v___y_3294_, v___y_3295_, v___y_3296_, v___y_3297_);
return v___x_3300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg___lam__0___boxed(lean_object* v_cfg_3301_, lean_object* v_cfgItem_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_, lean_object* v___y_3307_, lean_object* v___y_3308_, lean_object* v___y_3309_){
_start:
{
lean_object* v_res_3310_; 
v_res_3310_ = l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg___lam__0(v_cfg_3301_, v_cfgItem_3302_, v___y_3303_, v___y_3304_, v___y_3305_, v___y_3306_, v___y_3307_, v___y_3308_);
lean_dec(v___y_3308_);
lean_dec_ref(v___y_3307_);
lean_dec(v___y_3306_);
lean_dec_ref(v___y_3305_);
lean_dec(v___y_3304_);
lean_dec_ref(v___y_3303_);
lean_dec(v_cfgItem_3302_);
return v_res_3310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg(lean_object* v_cfg_3312_, lean_object* v_init_3313_, uint8_t v_logExceptions_3314_, lean_object* v_a_3315_, lean_object* v_a_3316_, lean_object* v_a_3317_){
_start:
{
lean_object* v_onErr_3319_; lean_object* v_eval_3320_; 
v_onErr_3319_ = ((lean_object*)(l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg___closed__0));
v_eval_3320_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_elabLiftLetsConfig_evalConfigItem___closed__0));
if (v_logExceptions_3314_ == 0)
{
lean_object* v___x_3321_; 
v___x_3321_ = l_Lean_Elab_ConfigEval_EvalConfigItem_setConfig_x27___redArg(v_eval_3320_, v_init_3313_, v_cfg_3312_, v_onErr_3319_, v_logExceptions_3314_, v_a_3316_, v_a_3317_);
return v___x_3321_;
}
else
{
uint8_t v_recover_3322_; lean_object* v___x_3323_; 
v_recover_3322_ = lean_ctor_get_uint8(v_a_3315_, sizeof(void*)*1);
v___x_3323_ = l_Lean_Elab_ConfigEval_EvalConfigItem_setConfig_x27___redArg(v_eval_3320_, v_init_3313_, v_cfg_3312_, v_onErr_3319_, v_recover_3322_, v_a_3316_, v_a_3317_);
return v___x_3323_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg___boxed(lean_object* v_cfg_3324_, lean_object* v_init_3325_, lean_object* v_logExceptions_3326_, lean_object* v_a_3327_, lean_object* v_a_3328_, lean_object* v_a_3329_, lean_object* v_a_3330_){
_start:
{
uint8_t v_logExceptions_boxed_3331_; lean_object* v_res_3332_; 
v_logExceptions_boxed_3331_ = lean_unbox(v_logExceptions_3326_);
v_res_3332_ = l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg(v_cfg_3324_, v_init_3325_, v_logExceptions_boxed_3331_, v_a_3327_, v_a_3328_, v_a_3329_);
lean_dec(v_a_3329_);
lean_dec_ref(v_a_3328_);
lean_dec_ref(v_a_3327_);
return v_res_3332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabLiftLetsConfig(lean_object* v_cfg_3333_, lean_object* v_init_3334_, uint8_t v_logExceptions_3335_, lean_object* v_a_3336_, lean_object* v_a_3337_, lean_object* v_a_3338_, lean_object* v_a_3339_, lean_object* v_a_3340_, lean_object* v_a_3341_, lean_object* v_a_3342_, lean_object* v_a_3343_){
_start:
{
lean_object* v___x_3345_; 
v___x_3345_ = l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg(v_cfg_3333_, v_init_3334_, v_logExceptions_3335_, v_a_3336_, v_a_3342_, v_a_3343_);
return v___x_3345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabLiftLetsConfig___boxed(lean_object* v_cfg_3346_, lean_object* v_init_3347_, lean_object* v_logExceptions_3348_, lean_object* v_a_3349_, lean_object* v_a_3350_, lean_object* v_a_3351_, lean_object* v_a_3352_, lean_object* v_a_3353_, lean_object* v_a_3354_, lean_object* v_a_3355_, lean_object* v_a_3356_, lean_object* v_a_3357_){
_start:
{
uint8_t v_logExceptions_boxed_3358_; lean_object* v_res_3359_; 
v_logExceptions_boxed_3358_ = lean_unbox(v_logExceptions_3348_);
v_res_3359_ = l_Lean_Elab_Tactic_elabLiftLetsConfig(v_cfg_3346_, v_init_3347_, v_logExceptions_boxed_3358_, v_a_3349_, v_a_3350_, v_a_3351_, v_a_3352_, v_a_3353_, v_a_3354_, v_a_3355_, v_a_3356_);
lean_dec(v_a_3356_);
lean_dec_ref(v_a_3355_);
lean_dec(v_a_3354_);
lean_dec_ref(v_a_3353_);
lean_dec(v_a_3352_);
lean_dec_ref(v_a_3351_);
lean_dec(v_a_3350_);
lean_dec_ref(v_a_3349_);
return v_res_3359_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalLiftLets___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3361_; lean_object* v___x_3362_; 
v___x_3361_ = ((lean_object*)(l_Lean_Elab_Tactic_evalLiftLets___lam__0___closed__0));
v___x_3362_ = l_Lean_stringToMessageData(v___x_3361_);
return v___x_3362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLiftLets___lam__0(lean_object* v_x_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_){
_start:
{
lean_object* v___x_3373_; lean_object* v___x_3374_; 
v___x_3373_ = lean_obj_once(&l_Lean_Elab_Tactic_evalLiftLets___lam__0___closed__1, &l_Lean_Elab_Tactic_evalLiftLets___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_evalLiftLets___lam__0___closed__1);
v___x_3374_ = l_Lean_throwError___at___00Lean_Elab_Tactic_evalExtractLets_spec__0___redArg(v___x_3373_, v___y_3368_, v___y_3369_, v___y_3370_, v___y_3371_);
return v___x_3374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLiftLets___lam__0___boxed(lean_object* v_x_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_){
_start:
{
lean_object* v_res_3385_; 
v_res_3385_ = l_Lean_Elab_Tactic_evalLiftLets___lam__0(v_x_3375_, v___y_3376_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_, v___y_3381_, v___y_3382_, v___y_3383_);
lean_dec(v___y_3383_);
lean_dec_ref(v___y_3382_);
lean_dec(v___y_3381_);
lean_dec_ref(v___y_3380_);
lean_dec(v___y_3379_);
lean_dec_ref(v___y_3378_);
lean_dec(v___y_3377_);
lean_dec_ref(v___y_3376_);
lean_dec(v_x_3375_);
return v_res_3385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLiftLets___lam__1(lean_object* v_a_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_){
_start:
{
lean_object* v___x_3396_; 
v___x_3396_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_3388_, v___y_3391_, v___y_3392_, v___y_3393_, v___y_3394_);
if (lean_obj_tag(v___x_3396_) == 0)
{
lean_object* v_a_3397_; lean_object* v___x_3398_; 
v_a_3397_ = lean_ctor_get(v___x_3396_, 0);
lean_inc(v_a_3397_);
lean_dec_ref_known(v___x_3396_, 1);
v___x_3398_ = l_Lean_MVarId_liftLets(v_a_3397_, v_a_3386_, v___y_3391_, v___y_3392_, v___y_3393_, v___y_3394_);
if (lean_obj_tag(v___x_3398_) == 0)
{
lean_object* v_a_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; 
v_a_3399_ = lean_ctor_get(v___x_3398_, 0);
lean_inc(v_a_3399_);
lean_dec_ref_known(v___x_3398_, 1);
v___x_3400_ = lean_box(0);
v___x_3401_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3401_, 0, v_a_3399_);
lean_ctor_set(v___x_3401_, 1, v___x_3400_);
v___x_3402_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_3401_, v___y_3388_, v___y_3391_, v___y_3392_, v___y_3393_, v___y_3394_);
return v___x_3402_;
}
else
{
lean_object* v_a_3403_; lean_object* v___x_3405_; uint8_t v_isShared_3406_; uint8_t v_isSharedCheck_3410_; 
v_a_3403_ = lean_ctor_get(v___x_3398_, 0);
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3398_);
if (v_isSharedCheck_3410_ == 0)
{
v___x_3405_ = v___x_3398_;
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
else
{
lean_inc(v_a_3403_);
lean_dec(v___x_3398_);
v___x_3405_ = lean_box(0);
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
v_resetjp_3404_:
{
lean_object* v___x_3408_; 
if (v_isShared_3406_ == 0)
{
v___x_3408_ = v___x_3405_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v_a_3403_);
v___x_3408_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
return v___x_3408_;
}
}
}
}
else
{
lean_object* v_a_3411_; lean_object* v___x_3413_; uint8_t v_isShared_3414_; uint8_t v_isSharedCheck_3418_; 
lean_dec_ref(v_a_3386_);
v_a_3411_ = lean_ctor_get(v___x_3396_, 0);
v_isSharedCheck_3418_ = !lean_is_exclusive(v___x_3396_);
if (v_isSharedCheck_3418_ == 0)
{
v___x_3413_ = v___x_3396_;
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
else
{
lean_inc(v_a_3411_);
lean_dec(v___x_3396_);
v___x_3413_ = lean_box(0);
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
v_resetjp_3412_:
{
lean_object* v___x_3416_; 
if (v_isShared_3414_ == 0)
{
v___x_3416_ = v___x_3413_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3417_; 
v_reuseFailAlloc_3417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3417_, 0, v_a_3411_);
v___x_3416_ = v_reuseFailAlloc_3417_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
return v___x_3416_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLiftLets___lam__1___boxed(lean_object* v_a_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_, lean_object* v___y_3428_){
_start:
{
lean_object* v_res_3429_; 
v_res_3429_ = l_Lean_Elab_Tactic_evalLiftLets___lam__1(v_a_3419_, v___y_3420_, v___y_3421_, v___y_3422_, v___y_3423_, v___y_3424_, v___y_3425_, v___y_3426_, v___y_3427_);
lean_dec(v___y_3427_);
lean_dec_ref(v___y_3426_);
lean_dec(v___y_3425_);
lean_dec_ref(v___y_3424_);
lean_dec(v___y_3423_);
lean_dec_ref(v___y_3422_);
lean_dec(v___y_3421_);
lean_dec_ref(v___y_3420_);
return v_res_3429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLiftLets___lam__2(lean_object* v___f_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_){
_start:
{
lean_object* v___x_3440_; 
v___x_3440_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_3430_, v___y_3431_, v___y_3432_, v___y_3433_, v___y_3434_, v___y_3435_, v___y_3436_, v___y_3437_, v___y_3438_);
return v___x_3440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLiftLets___lam__2___boxed(lean_object* v___f_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_){
_start:
{
lean_object* v_res_3451_; 
v_res_3451_ = l_Lean_Elab_Tactic_evalLiftLets___lam__2(v___f_3441_, v___y_3442_, v___y_3443_, v___y_3444_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_, v___y_3449_);
lean_dec(v___y_3449_);
lean_dec_ref(v___y_3448_);
lean_dec(v___y_3447_);
lean_dec_ref(v___y_3446_);
lean_dec(v___y_3445_);
lean_dec_ref(v___y_3444_);
lean_dec(v___y_3443_);
lean_dec_ref(v___y_3442_);
return v_res_3451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLiftLets___lam__3(lean_object* v_h_3452_, lean_object* v_a_3453_, lean_object* v___y_3454_, lean_object* v___y_3455_, lean_object* v___y_3456_, lean_object* v___y_3457_, lean_object* v___y_3458_, lean_object* v___y_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_){
_start:
{
lean_object* v___x_3463_; 
v___x_3463_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_3455_, v___y_3458_, v___y_3459_, v___y_3460_, v___y_3461_);
if (lean_obj_tag(v___x_3463_) == 0)
{
lean_object* v_a_3464_; lean_object* v___x_3465_; 
v_a_3464_ = lean_ctor_get(v___x_3463_, 0);
lean_inc(v_a_3464_);
lean_dec_ref_known(v___x_3463_, 1);
v___x_3465_ = l_Lean_MVarId_liftLetsLocalDecl(v_a_3464_, v_h_3452_, v_a_3453_, v___y_3458_, v___y_3459_, v___y_3460_, v___y_3461_);
if (lean_obj_tag(v___x_3465_) == 0)
{
lean_object* v_a_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; 
v_a_3466_ = lean_ctor_get(v___x_3465_, 0);
lean_inc(v_a_3466_);
lean_dec_ref_known(v___x_3465_, 1);
v___x_3467_ = lean_box(0);
v___x_3468_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3468_, 0, v_a_3466_);
lean_ctor_set(v___x_3468_, 1, v___x_3467_);
v___x_3469_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_3468_, v___y_3455_, v___y_3458_, v___y_3459_, v___y_3460_, v___y_3461_);
return v___x_3469_;
}
else
{
lean_object* v_a_3470_; lean_object* v___x_3472_; uint8_t v_isShared_3473_; uint8_t v_isSharedCheck_3477_; 
v_a_3470_ = lean_ctor_get(v___x_3465_, 0);
v_isSharedCheck_3477_ = !lean_is_exclusive(v___x_3465_);
if (v_isSharedCheck_3477_ == 0)
{
v___x_3472_ = v___x_3465_;
v_isShared_3473_ = v_isSharedCheck_3477_;
goto v_resetjp_3471_;
}
else
{
lean_inc(v_a_3470_);
lean_dec(v___x_3465_);
v___x_3472_ = lean_box(0);
v_isShared_3473_ = v_isSharedCheck_3477_;
goto v_resetjp_3471_;
}
v_resetjp_3471_:
{
lean_object* v___x_3475_; 
if (v_isShared_3473_ == 0)
{
v___x_3475_ = v___x_3472_;
goto v_reusejp_3474_;
}
else
{
lean_object* v_reuseFailAlloc_3476_; 
v_reuseFailAlloc_3476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3476_, 0, v_a_3470_);
v___x_3475_ = v_reuseFailAlloc_3476_;
goto v_reusejp_3474_;
}
v_reusejp_3474_:
{
return v___x_3475_;
}
}
}
}
else
{
lean_object* v_a_3478_; lean_object* v___x_3480_; uint8_t v_isShared_3481_; uint8_t v_isSharedCheck_3485_; 
lean_dec_ref(v_a_3453_);
lean_dec(v_h_3452_);
v_a_3478_ = lean_ctor_get(v___x_3463_, 0);
v_isSharedCheck_3485_ = !lean_is_exclusive(v___x_3463_);
if (v_isSharedCheck_3485_ == 0)
{
v___x_3480_ = v___x_3463_;
v_isShared_3481_ = v_isSharedCheck_3485_;
goto v_resetjp_3479_;
}
else
{
lean_inc(v_a_3478_);
lean_dec(v___x_3463_);
v___x_3480_ = lean_box(0);
v_isShared_3481_ = v_isSharedCheck_3485_;
goto v_resetjp_3479_;
}
v_resetjp_3479_:
{
lean_object* v___x_3483_; 
if (v_isShared_3481_ == 0)
{
v___x_3483_ = v___x_3480_;
goto v_reusejp_3482_;
}
else
{
lean_object* v_reuseFailAlloc_3484_; 
v_reuseFailAlloc_3484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3484_, 0, v_a_3478_);
v___x_3483_ = v_reuseFailAlloc_3484_;
goto v_reusejp_3482_;
}
v_reusejp_3482_:
{
return v___x_3483_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLiftLets___lam__3___boxed(lean_object* v_h_3486_, lean_object* v_a_3487_, lean_object* v___y_3488_, lean_object* v___y_3489_, lean_object* v___y_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_, lean_object* v___y_3493_, lean_object* v___y_3494_, lean_object* v___y_3495_, lean_object* v___y_3496_){
_start:
{
lean_object* v_res_3497_; 
v_res_3497_ = l_Lean_Elab_Tactic_evalLiftLets___lam__3(v_h_3486_, v_a_3487_, v___y_3488_, v___y_3489_, v___y_3490_, v___y_3491_, v___y_3492_, v___y_3493_, v___y_3494_, v___y_3495_);
lean_dec(v___y_3495_);
lean_dec_ref(v___y_3494_);
lean_dec(v___y_3493_);
lean_dec_ref(v___y_3492_);
lean_dec(v___y_3491_);
lean_dec_ref(v___y_3490_);
lean_dec(v___y_3489_);
lean_dec_ref(v___y_3488_);
return v_res_3497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLiftLets___lam__4(lean_object* v_a_3498_, lean_object* v_h_3499_, lean_object* v___y_3500_, lean_object* v___y_3501_, lean_object* v___y_3502_, lean_object* v___y_3503_, lean_object* v___y_3504_, lean_object* v___y_3505_, lean_object* v___y_3506_, lean_object* v___y_3507_){
_start:
{
lean_object* v___f_3509_; lean_object* v___x_3510_; 
v___f_3509_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalLiftLets___lam__3___boxed), 11, 2);
lean_closure_set(v___f_3509_, 0, v_h_3499_);
lean_closure_set(v___f_3509_, 1, v_a_3498_);
v___x_3510_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_3509_, v___y_3500_, v___y_3501_, v___y_3502_, v___y_3503_, v___y_3504_, v___y_3505_, v___y_3506_, v___y_3507_);
return v___x_3510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLiftLets___lam__4___boxed(lean_object* v_a_3511_, lean_object* v_h_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_, lean_object* v___y_3515_, lean_object* v___y_3516_, lean_object* v___y_3517_, lean_object* v___y_3518_, lean_object* v___y_3519_, lean_object* v___y_3520_, lean_object* v___y_3521_){
_start:
{
lean_object* v_res_3522_; 
v_res_3522_ = l_Lean_Elab_Tactic_evalLiftLets___lam__4(v_a_3511_, v_h_3512_, v___y_3513_, v___y_3514_, v___y_3515_, v___y_3516_, v___y_3517_, v___y_3518_, v___y_3519_, v___y_3520_);
lean_dec(v___y_3520_);
lean_dec_ref(v___y_3519_);
lean_dec(v___y_3518_);
lean_dec_ref(v___y_3517_);
lean_dec(v___y_3516_);
lean_dec_ref(v___y_3515_);
lean_dec(v___y_3514_);
lean_dec_ref(v___y_3513_);
return v_res_3522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLiftLets(lean_object* v_x_3530_, lean_object* v_a_3531_, lean_object* v_a_3532_, lean_object* v_a_3533_, lean_object* v_a_3534_, lean_object* v_a_3535_, lean_object* v_a_3536_, lean_object* v_a_3537_, lean_object* v_a_3538_){
_start:
{
lean_object* v___x_3540_; uint8_t v___x_3541_; 
v___x_3540_ = ((lean_object*)(l_Lean_Elab_Tactic_evalLiftLets___closed__1));
lean_inc(v_x_3530_);
v___x_3541_ = l_Lean_Syntax_isOfKind(v_x_3530_, v___x_3540_);
if (v___x_3541_ == 0)
{
lean_object* v___x_3542_; 
lean_dec(v_x_3530_);
v___x_3542_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1___redArg();
return v___x_3542_;
}
else
{
lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; uint8_t v___x_3546_; 
v___x_3543_ = lean_unsigned_to_nat(1u);
v___x_3544_ = l_Lean_Syntax_getArg(v_x_3530_, v___x_3543_);
v___x_3545_ = ((lean_object*)(l_Lean_Elab_Tactic_evalExtractLets___closed__4));
lean_inc(v___x_3544_);
v___x_3546_ = l_Lean_Syntax_isOfKind(v___x_3544_, v___x_3545_);
if (v___x_3546_ == 0)
{
lean_object* v___x_3547_; 
lean_dec(v___x_3544_);
lean_dec(v_x_3530_);
v___x_3547_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1___redArg();
return v___x_3547_;
}
else
{
lean_object* v___f_3548_; lean_object* v___y_3550_; lean_object* v___y_3551_; lean_object* v___y_3552_; lean_object* v___y_3553_; lean_object* v___y_3554_; lean_object* v___y_3555_; lean_object* v___y_3556_; lean_object* v___y_3557_; lean_object* v___y_3558_; lean_object* v___y_3559_; lean_object* v___y_3560_; lean_object* v_loc_x3f_3565_; lean_object* v___y_3566_; lean_object* v___y_3567_; lean_object* v___y_3568_; lean_object* v___y_3569_; lean_object* v___y_3570_; lean_object* v___y_3571_; lean_object* v___y_3572_; lean_object* v___y_3573_; lean_object* v___x_3598_; lean_object* v___x_3599_; uint8_t v___x_3600_; 
v___f_3548_ = ((lean_object*)(l_Lean_Elab_Tactic_evalLiftLets___closed__2));
v___x_3598_ = lean_unsigned_to_nat(2u);
v___x_3599_ = l_Lean_Syntax_getArg(v_x_3530_, v___x_3598_);
lean_dec(v_x_3530_);
v___x_3600_ = l_Lean_Syntax_isNone(v___x_3599_);
if (v___x_3600_ == 0)
{
uint8_t v___x_3601_; 
lean_inc(v___x_3599_);
v___x_3601_ = l_Lean_Syntax_matchesNull(v___x_3599_, v___x_3543_);
if (v___x_3601_ == 0)
{
lean_object* v___x_3602_; 
lean_dec(v___x_3599_);
lean_dec(v___x_3544_);
v___x_3602_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1___redArg();
return v___x_3602_;
}
else
{
lean_object* v___x_3603_; lean_object* v_loc_x3f_3604_; lean_object* v___x_3605_; uint8_t v___x_3606_; 
v___x_3603_ = lean_unsigned_to_nat(0u);
v_loc_x3f_3604_ = l_Lean_Syntax_getArg(v___x_3599_, v___x_3603_);
lean_dec(v___x_3599_);
v___x_3605_ = ((lean_object*)(l_Lean_Elab_Tactic_evalExtractLets___closed__7));
lean_inc(v_loc_x3f_3604_);
v___x_3606_ = l_Lean_Syntax_isOfKind(v_loc_x3f_3604_, v___x_3605_);
if (v___x_3606_ == 0)
{
lean_object* v___x_3607_; 
lean_dec(v_loc_x3f_3604_);
lean_dec(v___x_3544_);
v___x_3607_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1___redArg();
return v___x_3607_;
}
else
{
lean_object* v___x_3608_; 
v___x_3608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3608_, 0, v_loc_x3f_3604_);
v_loc_x3f_3565_ = v___x_3608_;
v___y_3566_ = v_a_3531_;
v___y_3567_ = v_a_3532_;
v___y_3568_ = v_a_3533_;
v___y_3569_ = v_a_3534_;
v___y_3570_ = v_a_3535_;
v___y_3571_ = v_a_3536_;
v___y_3572_ = v_a_3537_;
v___y_3573_ = v_a_3538_;
goto v___jp_3564_;
}
}
}
else
{
lean_object* v___x_3609_; 
lean_dec(v___x_3599_);
v___x_3609_ = lean_box(0);
v_loc_x3f_3565_ = v___x_3609_;
v___y_3566_ = v_a_3531_;
v___y_3567_ = v_a_3532_;
v___y_3568_ = v_a_3533_;
v___y_3569_ = v_a_3534_;
v___y_3570_ = v_a_3535_;
v___y_3571_ = v_a_3536_;
v___y_3572_ = v_a_3537_;
v___y_3573_ = v_a_3538_;
goto v___jp_3564_;
}
v___jp_3549_:
{
lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; 
v___x_3561_ = l_Lean_mkOptionalNode(v___y_3560_);
v___x_3562_ = l_Lean_Elab_Tactic_expandOptLocation(v___x_3561_);
lean_dec(v___x_3561_);
v___x_3563_ = l_Lean_Elab_Tactic_withLocation(v___x_3562_, v___y_3554_, v___y_3550_, v___f_3548_, v___y_3551_, v___y_3555_, v___y_3558_, v___y_3556_, v___y_3552_, v___y_3559_, v___y_3557_, v___y_3553_);
lean_dec(v___x_3562_);
return v___x_3563_;
}
v___jp_3564_:
{
uint8_t v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; 
v___x_3574_ = 0;
v___x_3575_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v___x_3575_, 0, v___x_3574_);
lean_ctor_set_uint8(v___x_3575_, 1, v___x_3546_);
lean_ctor_set_uint8(v___x_3575_, 2, v___x_3574_);
lean_ctor_set_uint8(v___x_3575_, 3, v___x_3546_);
lean_ctor_set_uint8(v___x_3575_, 4, v___x_3546_);
lean_ctor_set_uint8(v___x_3575_, 5, v___x_3574_);
lean_ctor_set_uint8(v___x_3575_, 6, v___x_3546_);
lean_ctor_set_uint8(v___x_3575_, 7, v___x_3546_);
lean_ctor_set_uint8(v___x_3575_, 8, v___x_3574_);
lean_ctor_set_uint8(v___x_3575_, 9, v___x_3546_);
lean_ctor_set_uint8(v___x_3575_, 10, v___x_3546_);
v___x_3576_ = l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg(v___x_3544_, v___x_3575_, v___x_3546_, v___y_3566_, v___y_3572_, v___y_3573_);
if (lean_obj_tag(v___x_3576_) == 0)
{
lean_object* v_a_3577_; lean_object* v___f_3578_; lean_object* v___f_3579_; lean_object* v___f_3580_; 
v_a_3577_ = lean_ctor_get(v___x_3576_, 0);
lean_inc_n(v_a_3577_, 2);
lean_dec_ref_known(v___x_3576_, 1);
v___f_3578_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalLiftLets___lam__1___boxed), 10, 1);
lean_closure_set(v___f_3578_, 0, v_a_3577_);
v___f_3579_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalLiftLets___lam__2___boxed), 10, 1);
lean_closure_set(v___f_3579_, 0, v___f_3578_);
v___f_3580_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalLiftLets___lam__4___boxed), 11, 1);
lean_closure_set(v___f_3580_, 0, v_a_3577_);
if (lean_obj_tag(v_loc_x3f_3565_) == 0)
{
lean_object* v___x_3581_; 
v___x_3581_ = lean_box(0);
v___y_3550_ = v___f_3579_;
v___y_3551_ = v___y_3566_;
v___y_3552_ = v___y_3570_;
v___y_3553_ = v___y_3573_;
v___y_3554_ = v___f_3580_;
v___y_3555_ = v___y_3567_;
v___y_3556_ = v___y_3569_;
v___y_3557_ = v___y_3572_;
v___y_3558_ = v___y_3568_;
v___y_3559_ = v___y_3571_;
v___y_3560_ = v___x_3581_;
goto v___jp_3549_;
}
else
{
lean_object* v_val_3582_; lean_object* v___x_3584_; uint8_t v_isShared_3585_; uint8_t v_isSharedCheck_3589_; 
v_val_3582_ = lean_ctor_get(v_loc_x3f_3565_, 0);
v_isSharedCheck_3589_ = !lean_is_exclusive(v_loc_x3f_3565_);
if (v_isSharedCheck_3589_ == 0)
{
v___x_3584_ = v_loc_x3f_3565_;
v_isShared_3585_ = v_isSharedCheck_3589_;
goto v_resetjp_3583_;
}
else
{
lean_inc(v_val_3582_);
lean_dec(v_loc_x3f_3565_);
v___x_3584_ = lean_box(0);
v_isShared_3585_ = v_isSharedCheck_3589_;
goto v_resetjp_3583_;
}
v_resetjp_3583_:
{
lean_object* v___x_3587_; 
if (v_isShared_3585_ == 0)
{
v___x_3587_ = v___x_3584_;
goto v_reusejp_3586_;
}
else
{
lean_object* v_reuseFailAlloc_3588_; 
v_reuseFailAlloc_3588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3588_, 0, v_val_3582_);
v___x_3587_ = v_reuseFailAlloc_3588_;
goto v_reusejp_3586_;
}
v_reusejp_3586_:
{
v___y_3550_ = v___f_3579_;
v___y_3551_ = v___y_3566_;
v___y_3552_ = v___y_3570_;
v___y_3553_ = v___y_3573_;
v___y_3554_ = v___f_3580_;
v___y_3555_ = v___y_3567_;
v___y_3556_ = v___y_3569_;
v___y_3557_ = v___y_3572_;
v___y_3558_ = v___y_3568_;
v___y_3559_ = v___y_3571_;
v___y_3560_ = v___x_3587_;
goto v___jp_3549_;
}
}
}
}
else
{
lean_object* v_a_3590_; lean_object* v___x_3592_; uint8_t v_isShared_3593_; uint8_t v_isSharedCheck_3597_; 
lean_dec(v_loc_x3f_3565_);
v_a_3590_ = lean_ctor_get(v___x_3576_, 0);
v_isSharedCheck_3597_ = !lean_is_exclusive(v___x_3576_);
if (v_isSharedCheck_3597_ == 0)
{
v___x_3592_ = v___x_3576_;
v_isShared_3593_ = v_isSharedCheck_3597_;
goto v_resetjp_3591_;
}
else
{
lean_inc(v_a_3590_);
lean_dec(v___x_3576_);
v___x_3592_ = lean_box(0);
v_isShared_3593_ = v_isSharedCheck_3597_;
goto v_resetjp_3591_;
}
v_resetjp_3591_:
{
lean_object* v___x_3595_; 
if (v_isShared_3593_ == 0)
{
v___x_3595_ = v___x_3592_;
goto v_reusejp_3594_;
}
else
{
lean_object* v_reuseFailAlloc_3596_; 
v_reuseFailAlloc_3596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3596_, 0, v_a_3590_);
v___x_3595_ = v_reuseFailAlloc_3596_;
goto v_reusejp_3594_;
}
v_reusejp_3594_:
{
return v___x_3595_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLiftLets___boxed(lean_object* v_x_3610_, lean_object* v_a_3611_, lean_object* v_a_3612_, lean_object* v_a_3613_, lean_object* v_a_3614_, lean_object* v_a_3615_, lean_object* v_a_3616_, lean_object* v_a_3617_, lean_object* v_a_3618_, lean_object* v_a_3619_){
_start:
{
lean_object* v_res_3620_; 
v_res_3620_ = l_Lean_Elab_Tactic_evalLiftLets(v_x_3610_, v_a_3611_, v_a_3612_, v_a_3613_, v_a_3614_, v_a_3615_, v_a_3616_, v_a_3617_, v_a_3618_);
lean_dec(v_a_3618_);
lean_dec_ref(v_a_3617_);
lean_dec(v_a_3616_);
lean_dec_ref(v_a_3615_);
lean_dec(v_a_3614_);
lean_dec_ref(v_a_3613_);
lean_dec(v_a_3612_);
lean_dec_ref(v_a_3611_);
return v_res_3620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLiftLets___regBuiltin_Lean_Elab_Tactic_evalLiftLets__1(){
_start:
{
lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; 
v___x_3628_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3629_ = ((lean_object*)(l_Lean_Elab_Tactic_evalLiftLets___closed__1));
v___x_3630_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLiftLets___regBuiltin_Lean_Elab_Tactic_evalLiftLets__1___closed__1));
v___x_3631_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalLiftLets___boxed), 10, 0);
v___x_3632_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3628_, v___x_3629_, v___x_3630_, v___x_3631_);
return v___x_3632_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLiftLets___regBuiltin_Lean_Elab_Tactic_evalLiftLets__1___boxed(lean_object* v_a_3633_){
_start:
{
lean_object* v_res_3634_; 
v_res_3634_ = l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLiftLets___regBuiltin_Lean_Elab_Tactic_evalLiftLets__1();
return v_res_3634_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalLetToHave___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3636_; lean_object* v___x_3637_; 
v___x_3636_ = ((lean_object*)(l_Lean_Elab_Tactic_evalLetToHave___lam__0___closed__0));
v___x_3637_ = l_Lean_stringToMessageData(v___x_3636_);
return v___x_3637_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLetToHave___lam__0(lean_object* v_x_3638_, lean_object* v___y_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_, lean_object* v___y_3644_, lean_object* v___y_3645_, lean_object* v___y_3646_){
_start:
{
lean_object* v___x_3648_; lean_object* v___x_3649_; 
v___x_3648_ = lean_obj_once(&l_Lean_Elab_Tactic_evalLetToHave___lam__0___closed__1, &l_Lean_Elab_Tactic_evalLetToHave___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_evalLetToHave___lam__0___closed__1);
v___x_3649_ = l_Lean_throwError___at___00Lean_Elab_Tactic_evalExtractLets_spec__0___redArg(v___x_3648_, v___y_3643_, v___y_3644_, v___y_3645_, v___y_3646_);
return v___x_3649_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLetToHave___lam__0___boxed(lean_object* v_x_3650_, lean_object* v___y_3651_, lean_object* v___y_3652_, lean_object* v___y_3653_, lean_object* v___y_3654_, lean_object* v___y_3655_, lean_object* v___y_3656_, lean_object* v___y_3657_, lean_object* v___y_3658_, lean_object* v___y_3659_){
_start:
{
lean_object* v_res_3660_; 
v_res_3660_ = l_Lean_Elab_Tactic_evalLetToHave___lam__0(v_x_3650_, v___y_3651_, v___y_3652_, v___y_3653_, v___y_3654_, v___y_3655_, v___y_3656_, v___y_3657_, v___y_3658_);
lean_dec(v___y_3658_);
lean_dec_ref(v___y_3657_);
lean_dec(v___y_3656_);
lean_dec_ref(v___y_3655_);
lean_dec(v___y_3654_);
lean_dec_ref(v___y_3653_);
lean_dec(v___y_3652_);
lean_dec_ref(v___y_3651_);
lean_dec(v_x_3650_);
return v_res_3660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLetToHave___lam__1(uint8_t v___x_3661_, lean_object* v___y_3662_, lean_object* v___y_3663_, lean_object* v___y_3664_, lean_object* v___y_3665_, lean_object* v___y_3666_, lean_object* v___y_3667_, lean_object* v___y_3668_, lean_object* v___y_3669_){
_start:
{
lean_object* v___x_3671_; 
v___x_3671_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_3663_, v___y_3666_, v___y_3667_, v___y_3668_, v___y_3669_);
if (lean_obj_tag(v___x_3671_) == 0)
{
lean_object* v_a_3672_; lean_object* v___x_3673_; 
v_a_3672_ = lean_ctor_get(v___x_3671_, 0);
lean_inc(v_a_3672_);
lean_dec_ref_known(v___x_3671_, 1);
v___x_3673_ = l_Lean_MVarId_letToHave(v_a_3672_, v___x_3661_, v___y_3666_, v___y_3667_, v___y_3668_, v___y_3669_);
if (lean_obj_tag(v___x_3673_) == 0)
{
lean_object* v_a_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; 
v_a_3674_ = lean_ctor_get(v___x_3673_, 0);
lean_inc(v_a_3674_);
lean_dec_ref_known(v___x_3673_, 1);
v___x_3675_ = lean_box(0);
v___x_3676_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3676_, 0, v_a_3674_);
lean_ctor_set(v___x_3676_, 1, v___x_3675_);
v___x_3677_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_3676_, v___y_3663_, v___y_3666_, v___y_3667_, v___y_3668_, v___y_3669_);
return v___x_3677_;
}
else
{
lean_object* v_a_3678_; lean_object* v___x_3680_; uint8_t v_isShared_3681_; uint8_t v_isSharedCheck_3685_; 
v_a_3678_ = lean_ctor_get(v___x_3673_, 0);
v_isSharedCheck_3685_ = !lean_is_exclusive(v___x_3673_);
if (v_isSharedCheck_3685_ == 0)
{
v___x_3680_ = v___x_3673_;
v_isShared_3681_ = v_isSharedCheck_3685_;
goto v_resetjp_3679_;
}
else
{
lean_inc(v_a_3678_);
lean_dec(v___x_3673_);
v___x_3680_ = lean_box(0);
v_isShared_3681_ = v_isSharedCheck_3685_;
goto v_resetjp_3679_;
}
v_resetjp_3679_:
{
lean_object* v___x_3683_; 
if (v_isShared_3681_ == 0)
{
v___x_3683_ = v___x_3680_;
goto v_reusejp_3682_;
}
else
{
lean_object* v_reuseFailAlloc_3684_; 
v_reuseFailAlloc_3684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3684_, 0, v_a_3678_);
v___x_3683_ = v_reuseFailAlloc_3684_;
goto v_reusejp_3682_;
}
v_reusejp_3682_:
{
return v___x_3683_;
}
}
}
}
else
{
lean_object* v_a_3686_; lean_object* v___x_3688_; uint8_t v_isShared_3689_; uint8_t v_isSharedCheck_3693_; 
v_a_3686_ = lean_ctor_get(v___x_3671_, 0);
v_isSharedCheck_3693_ = !lean_is_exclusive(v___x_3671_);
if (v_isSharedCheck_3693_ == 0)
{
v___x_3688_ = v___x_3671_;
v_isShared_3689_ = v_isSharedCheck_3693_;
goto v_resetjp_3687_;
}
else
{
lean_inc(v_a_3686_);
lean_dec(v___x_3671_);
v___x_3688_ = lean_box(0);
v_isShared_3689_ = v_isSharedCheck_3693_;
goto v_resetjp_3687_;
}
v_resetjp_3687_:
{
lean_object* v___x_3691_; 
if (v_isShared_3689_ == 0)
{
v___x_3691_ = v___x_3688_;
goto v_reusejp_3690_;
}
else
{
lean_object* v_reuseFailAlloc_3692_; 
v_reuseFailAlloc_3692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3692_, 0, v_a_3686_);
v___x_3691_ = v_reuseFailAlloc_3692_;
goto v_reusejp_3690_;
}
v_reusejp_3690_:
{
return v___x_3691_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLetToHave___lam__1___boxed(lean_object* v___x_3694_, lean_object* v___y_3695_, lean_object* v___y_3696_, lean_object* v___y_3697_, lean_object* v___y_3698_, lean_object* v___y_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_, lean_object* v___y_3703_){
_start:
{
uint8_t v___x_1362__boxed_3704_; lean_object* v_res_3705_; 
v___x_1362__boxed_3704_ = lean_unbox(v___x_3694_);
v_res_3705_ = l_Lean_Elab_Tactic_evalLetToHave___lam__1(v___x_1362__boxed_3704_, v___y_3695_, v___y_3696_, v___y_3697_, v___y_3698_, v___y_3699_, v___y_3700_, v___y_3701_, v___y_3702_);
lean_dec(v___y_3702_);
lean_dec_ref(v___y_3701_);
lean_dec(v___y_3700_);
lean_dec_ref(v___y_3699_);
lean_dec(v___y_3698_);
lean_dec_ref(v___y_3697_);
lean_dec(v___y_3696_);
lean_dec_ref(v___y_3695_);
return v_res_3705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLetToHave___lam__3(lean_object* v_h_3706_, uint8_t v___x_3707_, lean_object* v___y_3708_, lean_object* v___y_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_){
_start:
{
lean_object* v___x_3717_; 
v___x_3717_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_3709_, v___y_3712_, v___y_3713_, v___y_3714_, v___y_3715_);
if (lean_obj_tag(v___x_3717_) == 0)
{
lean_object* v_a_3718_; lean_object* v___x_3719_; 
v_a_3718_ = lean_ctor_get(v___x_3717_, 0);
lean_inc(v_a_3718_);
lean_dec_ref_known(v___x_3717_, 1);
v___x_3719_ = l_Lean_MVarId_letToHaveLocalDecl(v_a_3718_, v_h_3706_, v___x_3707_, v___y_3712_, v___y_3713_, v___y_3714_, v___y_3715_);
if (lean_obj_tag(v___x_3719_) == 0)
{
lean_object* v_a_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; 
v_a_3720_ = lean_ctor_get(v___x_3719_, 0);
lean_inc(v_a_3720_);
lean_dec_ref_known(v___x_3719_, 1);
v___x_3721_ = lean_box(0);
v___x_3722_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3722_, 0, v_a_3720_);
lean_ctor_set(v___x_3722_, 1, v___x_3721_);
v___x_3723_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_3722_, v___y_3709_, v___y_3712_, v___y_3713_, v___y_3714_, v___y_3715_);
return v___x_3723_;
}
else
{
lean_object* v_a_3724_; lean_object* v___x_3726_; uint8_t v_isShared_3727_; uint8_t v_isSharedCheck_3731_; 
v_a_3724_ = lean_ctor_get(v___x_3719_, 0);
v_isSharedCheck_3731_ = !lean_is_exclusive(v___x_3719_);
if (v_isSharedCheck_3731_ == 0)
{
v___x_3726_ = v___x_3719_;
v_isShared_3727_ = v_isSharedCheck_3731_;
goto v_resetjp_3725_;
}
else
{
lean_inc(v_a_3724_);
lean_dec(v___x_3719_);
v___x_3726_ = lean_box(0);
v_isShared_3727_ = v_isSharedCheck_3731_;
goto v_resetjp_3725_;
}
v_resetjp_3725_:
{
lean_object* v___x_3729_; 
if (v_isShared_3727_ == 0)
{
v___x_3729_ = v___x_3726_;
goto v_reusejp_3728_;
}
else
{
lean_object* v_reuseFailAlloc_3730_; 
v_reuseFailAlloc_3730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3730_, 0, v_a_3724_);
v___x_3729_ = v_reuseFailAlloc_3730_;
goto v_reusejp_3728_;
}
v_reusejp_3728_:
{
return v___x_3729_;
}
}
}
}
else
{
lean_object* v_a_3732_; lean_object* v___x_3734_; uint8_t v_isShared_3735_; uint8_t v_isSharedCheck_3739_; 
lean_dec(v_h_3706_);
v_a_3732_ = lean_ctor_get(v___x_3717_, 0);
v_isSharedCheck_3739_ = !lean_is_exclusive(v___x_3717_);
if (v_isSharedCheck_3739_ == 0)
{
v___x_3734_ = v___x_3717_;
v_isShared_3735_ = v_isSharedCheck_3739_;
goto v_resetjp_3733_;
}
else
{
lean_inc(v_a_3732_);
lean_dec(v___x_3717_);
v___x_3734_ = lean_box(0);
v_isShared_3735_ = v_isSharedCheck_3739_;
goto v_resetjp_3733_;
}
v_resetjp_3733_:
{
lean_object* v___x_3737_; 
if (v_isShared_3735_ == 0)
{
v___x_3737_ = v___x_3734_;
goto v_reusejp_3736_;
}
else
{
lean_object* v_reuseFailAlloc_3738_; 
v_reuseFailAlloc_3738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3738_, 0, v_a_3732_);
v___x_3737_ = v_reuseFailAlloc_3738_;
goto v_reusejp_3736_;
}
v_reusejp_3736_:
{
return v___x_3737_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLetToHave___lam__3___boxed(lean_object* v_h_3740_, lean_object* v___x_3741_, lean_object* v___y_3742_, lean_object* v___y_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_, lean_object* v___y_3750_){
_start:
{
uint8_t v___x_1438__boxed_3751_; lean_object* v_res_3752_; 
v___x_1438__boxed_3751_ = lean_unbox(v___x_3741_);
v_res_3752_ = l_Lean_Elab_Tactic_evalLetToHave___lam__3(v_h_3740_, v___x_1438__boxed_3751_, v___y_3742_, v___y_3743_, v___y_3744_, v___y_3745_, v___y_3746_, v___y_3747_, v___y_3748_, v___y_3749_);
lean_dec(v___y_3749_);
lean_dec_ref(v___y_3748_);
lean_dec(v___y_3747_);
lean_dec_ref(v___y_3746_);
lean_dec(v___y_3745_);
lean_dec_ref(v___y_3744_);
lean_dec(v___y_3743_);
lean_dec_ref(v___y_3742_);
return v_res_3752_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLetToHave___lam__2(uint8_t v___x_3753_, lean_object* v_h_3754_, lean_object* v___y_3755_, lean_object* v___y_3756_, lean_object* v___y_3757_, lean_object* v___y_3758_, lean_object* v___y_3759_, lean_object* v___y_3760_, lean_object* v___y_3761_, lean_object* v___y_3762_){
_start:
{
lean_object* v___x_3764_; lean_object* v___f_3765_; lean_object* v___x_3766_; 
v___x_3764_ = lean_box(v___x_3753_);
v___f_3765_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalLetToHave___lam__3___boxed), 11, 2);
lean_closure_set(v___f_3765_, 0, v_h_3754_);
lean_closure_set(v___f_3765_, 1, v___x_3764_);
v___x_3766_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_3765_, v___y_3755_, v___y_3756_, v___y_3757_, v___y_3758_, v___y_3759_, v___y_3760_, v___y_3761_, v___y_3762_);
return v___x_3766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLetToHave___lam__2___boxed(lean_object* v___x_3767_, lean_object* v_h_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_, lean_object* v___y_3772_, lean_object* v___y_3773_, lean_object* v___y_3774_, lean_object* v___y_3775_, lean_object* v___y_3776_, lean_object* v___y_3777_){
_start:
{
uint8_t v___x_1514__boxed_3778_; lean_object* v_res_3779_; 
v___x_1514__boxed_3778_ = lean_unbox(v___x_3767_);
v_res_3779_ = l_Lean_Elab_Tactic_evalLetToHave___lam__2(v___x_1514__boxed_3778_, v_h_3768_, v___y_3769_, v___y_3770_, v___y_3771_, v___y_3772_, v___y_3773_, v___y_3774_, v___y_3775_, v___y_3776_);
lean_dec(v___y_3776_);
lean_dec_ref(v___y_3775_);
lean_dec(v___y_3774_);
lean_dec_ref(v___y_3773_);
lean_dec(v___y_3772_);
lean_dec_ref(v___y_3771_);
lean_dec(v___y_3770_);
lean_dec_ref(v___y_3769_);
return v_res_3779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLetToHave(lean_object* v_x_3787_, lean_object* v_a_3788_, lean_object* v_a_3789_, lean_object* v_a_3790_, lean_object* v_a_3791_, lean_object* v_a_3792_, lean_object* v_a_3793_, lean_object* v_a_3794_, lean_object* v_a_3795_){
_start:
{
lean_object* v___x_3797_; uint8_t v___x_3798_; 
v___x_3797_ = ((lean_object*)(l_Lean_Elab_Tactic_evalLetToHave___closed__1));
lean_inc(v_x_3787_);
v___x_3798_ = l_Lean_Syntax_isOfKind(v_x_3787_, v___x_3797_);
if (v___x_3798_ == 0)
{
lean_object* v___x_3799_; 
lean_dec(v_x_3787_);
v___x_3799_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1___redArg();
return v___x_3799_;
}
else
{
lean_object* v___f_3800_; lean_object* v___x_3801_; lean_object* v___f_3802_; lean_object* v___f_3803_; lean_object* v___x_3804_; lean_object* v___f_3805_; lean_object* v___y_3807_; lean_object* v___y_3808_; lean_object* v___y_3809_; lean_object* v___y_3810_; lean_object* v___y_3811_; lean_object* v___y_3812_; lean_object* v___y_3813_; lean_object* v___y_3814_; lean_object* v___y_3815_; lean_object* v___x_3819_; lean_object* v___x_3820_; uint8_t v___x_3821_; 
v___f_3800_ = ((lean_object*)(l_Lean_Elab_Tactic_evalLetToHave___closed__2));
v___x_3801_ = lean_box(v___x_3798_);
v___f_3802_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalLetToHave___lam__1___boxed), 10, 1);
lean_closure_set(v___f_3802_, 0, v___x_3801_);
v___f_3803_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalLiftLets___lam__2___boxed), 10, 1);
lean_closure_set(v___f_3803_, 0, v___f_3802_);
v___x_3804_ = lean_box(v___x_3798_);
v___f_3805_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalLetToHave___lam__2___boxed), 11, 1);
lean_closure_set(v___f_3805_, 0, v___x_3804_);
v___x_3819_ = lean_unsigned_to_nat(1u);
v___x_3820_ = l_Lean_Syntax_getArg(v_x_3787_, v___x_3819_);
lean_dec(v_x_3787_);
v___x_3821_ = l_Lean_Syntax_isNone(v___x_3820_);
if (v___x_3821_ == 0)
{
uint8_t v___x_3822_; 
lean_inc(v___x_3820_);
v___x_3822_ = l_Lean_Syntax_matchesNull(v___x_3820_, v___x_3819_);
if (v___x_3822_ == 0)
{
lean_object* v___x_3823_; 
lean_dec(v___x_3820_);
lean_dec_ref(v___f_3805_);
lean_dec_ref(v___f_3803_);
v___x_3823_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1___redArg();
return v___x_3823_;
}
else
{
lean_object* v___x_3824_; lean_object* v_loc_x3f_3825_; lean_object* v___x_3826_; uint8_t v___x_3827_; 
v___x_3824_ = lean_unsigned_to_nat(0u);
v_loc_x3f_3825_ = l_Lean_Syntax_getArg(v___x_3820_, v___x_3824_);
lean_dec(v___x_3820_);
v___x_3826_ = ((lean_object*)(l_Lean_Elab_Tactic_evalExtractLets___closed__7));
lean_inc(v_loc_x3f_3825_);
v___x_3827_ = l_Lean_Syntax_isOfKind(v_loc_x3f_3825_, v___x_3826_);
if (v___x_3827_ == 0)
{
lean_object* v___x_3828_; 
lean_dec(v_loc_x3f_3825_);
lean_dec_ref(v___f_3805_);
lean_dec_ref(v___f_3803_);
v___x_3828_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExtractLets_spec__1___redArg();
return v___x_3828_;
}
else
{
lean_object* v___x_3829_; 
v___x_3829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3829_, 0, v_loc_x3f_3825_);
v___y_3807_ = v_a_3793_;
v___y_3808_ = v_a_3795_;
v___y_3809_ = v_a_3792_;
v___y_3810_ = v_a_3791_;
v___y_3811_ = v_a_3789_;
v___y_3812_ = v_a_3788_;
v___y_3813_ = v_a_3794_;
v___y_3814_ = v_a_3790_;
v___y_3815_ = v___x_3829_;
goto v___jp_3806_;
}
}
}
else
{
lean_object* v___x_3830_; 
lean_dec(v___x_3820_);
v___x_3830_ = lean_box(0);
v___y_3807_ = v_a_3793_;
v___y_3808_ = v_a_3795_;
v___y_3809_ = v_a_3792_;
v___y_3810_ = v_a_3791_;
v___y_3811_ = v_a_3789_;
v___y_3812_ = v_a_3788_;
v___y_3813_ = v_a_3794_;
v___y_3814_ = v_a_3790_;
v___y_3815_ = v___x_3830_;
goto v___jp_3806_;
}
v___jp_3806_:
{
lean_object* v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; 
v___x_3816_ = l_Lean_mkOptionalNode(v___y_3815_);
v___x_3817_ = l_Lean_Elab_Tactic_expandOptLocation(v___x_3816_);
lean_dec(v___x_3816_);
v___x_3818_ = l_Lean_Elab_Tactic_withLocation(v___x_3817_, v___f_3805_, v___f_3803_, v___f_3800_, v___y_3812_, v___y_3811_, v___y_3814_, v___y_3810_, v___y_3809_, v___y_3807_, v___y_3813_, v___y_3808_);
lean_dec(v___x_3817_);
return v___x_3818_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalLetToHave___boxed(lean_object* v_x_3831_, lean_object* v_a_3832_, lean_object* v_a_3833_, lean_object* v_a_3834_, lean_object* v_a_3835_, lean_object* v_a_3836_, lean_object* v_a_3837_, lean_object* v_a_3838_, lean_object* v_a_3839_, lean_object* v_a_3840_){
_start:
{
lean_object* v_res_3841_; 
v_res_3841_ = l_Lean_Elab_Tactic_evalLetToHave(v_x_3831_, v_a_3832_, v_a_3833_, v_a_3834_, v_a_3835_, v_a_3836_, v_a_3837_, v_a_3838_, v_a_3839_);
lean_dec(v_a_3839_);
lean_dec_ref(v_a_3838_);
lean_dec(v_a_3837_);
lean_dec_ref(v_a_3836_);
lean_dec(v_a_3835_);
lean_dec_ref(v_a_3834_);
lean_dec(v_a_3833_);
lean_dec_ref(v_a_3832_);
return v_res_3841_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLetToHave___regBuiltin_Lean_Elab_Tactic_evalLetToHave__1(){
_start:
{
lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; 
v___x_3849_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3850_ = ((lean_object*)(l_Lean_Elab_Tactic_evalLetToHave___closed__1));
v___x_3851_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLetToHave___regBuiltin_Lean_Elab_Tactic_evalLetToHave__1___closed__1));
v___x_3852_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalLetToHave___boxed), 10, 0);
v___x_3853_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3849_, v___x_3850_, v___x_3851_, v___x_3852_);
return v___x_3853_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLetToHave___regBuiltin_Lean_Elab_Tactic_evalLetToHave__1___boxed(lean_object* v_a_3854_){
_start:
{
lean_object* v_res_3855_; 
v_res_3855_ = l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLetToHave___regBuiltin_Lean_Elab_Tactic_evalLetToHave__1();
return v_res_3855_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Lets(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Location(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Binders(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Init(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_ConfigEval(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Lets(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Lets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Location(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Binders(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ConfigEval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_initFn_00___x40_Lean_Elab_Tactic_Lets_363591437____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_Tactic_linter_tactic_unusedName = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_Tactic_linter_tactic_unusedName);
lean_dec_ref(res);
l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig = _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig();
lean_mark_persistent(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprExtractLetsConfig);
res = l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalExtractLets___regBuiltin_Lean_Elab_Tactic_evalExtractLets__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig = _init_l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig();
lean_mark_persistent(l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_instEvalExprLiftLetsConfig);
res = l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLiftLets___regBuiltin_Lean_Elab_Tactic_evalLiftLets__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Lets_0__Lean_Elab_Tactic_evalLetToHave___regBuiltin_Lean_Elab_Tactic_evalLetToHave__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Lets(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Lets(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Location(uint8_t builtin);
lean_object* initialize_Lean_Elab_Binders(uint8_t builtin);
lean_object* initialize_Lean_Linter_Init(uint8_t builtin);
lean_object* initialize_Lean_Elab_ConfigEval(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Lets(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Lets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Location(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Binders(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_ConfigEval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Lets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Lets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Lets(builtin);
}
#ifdef __cplusplus
}
#endif
