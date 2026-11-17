// Lean compiler output
// Module: Lean.Elab.Tactic.Grind.ShowState
// Imports: public import Lean.Elab.Tactic.Grind.Filter import Lean.Meta.Tactic.Grind.PP import Lean.Meta.Tactic.Grind.EMatchTheoremParam import Lean.Meta.Tactic.Grind.Split
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getEqcs(lean_object*, uint8_t);
uint8_t l_Lean_Expr_isTrue(lean_object*);
uint8_t l_Lean_Expr_isFalse(lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Grind_Filter_0__Lean_Meta_Grind_Filter_eval_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isSupportApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_ppEqc(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_liftGoalM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_elabFilter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Meta_Grind_ppExprArray(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_Grind_Goal_getEqc(lean_object*, lean_object*, uint8_t);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_Meta_Sym_getFalseExpr___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_getTrueExpr___redArg(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
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
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getLocalTheoremAnchors___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_anchorToString(lean_object*, uint64_t);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_evalGrindTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Filter_eval___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getSplitCandidateAnchors___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "facts"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(5, 104, 51, 228, 98, 188, 251, 80)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Asserted facts"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(168, 60, 211, 188, 58, 220, 100, 184)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "no facts"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "grindFilter"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "showAsserted"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__4_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__4_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__4_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__3_value),LEAN_SCALAR_PTR_LITERAL(19, 9, 52, 210, 246, 83, 42, 129)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__1_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__2_value),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__3_value),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 58, 227, 168, 195, 28, 19, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__4_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value),LEAN_SCALAR_PTR_LITERAL(243, 88, 6, 248, 93, 59, 25, 68)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ShowState"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__5_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(5, 25, 164, 64, 171, 22, 6, 69)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(208, 19, 40, 233, 34, 161, 117, 130)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__8_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value),LEAN_SCALAR_PTR_LITERAL(169, 78, 84, 89, 236, 187, 159, 237)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__9_value),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(231, 245, 207, 60, 37, 134, 98, 64)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__10_value),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(38, 49, 162, 201, 131, 208, 27, 108)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__11 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__11_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value),LEAN_SCALAR_PTR_LITERAL(20, 71, 128, 234, 115, 187, 122, 105)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__12_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "evalShowAsserted"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__13 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__12_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(200, 208, 203, 159, 70, 103, 81, 118)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__14 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__14_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "props"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(81, 109, 51, 84, 90, 92, 70, 19)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " propositions"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "no "};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "showTrue"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__1_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(138, 221, 230, 107, 62, 158, 128, 182)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__2_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(55, 133, 155, 61, 50, 240, 42, 169)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "evalShowTrue"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__12_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(84, 147, 90, 193, 92, 229, 28, 140)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "showFalse"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__1_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 23, 10, 157, 249, 80, 147, 23)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "evalShowFalse"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__12_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(197, 252, 51, 157, 108, 134, 132, 153)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__3___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__0___boxed(lean_object*);
static const lean_array_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "eqc"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(125, 40, 20, 175, 160, 100, 35, 190)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Equivalence classes"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__2_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__4;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "others"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__3(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "no equivalence classes"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "showEqcs"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__1_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__0_value),LEAN_SCALAR_PTR_LITERAL(118, 148, 3, 250, 60, 240, 18, 216)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "evalShowEqcs"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__12_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(174, 119, 28, 131, 183, 128, 4, 252)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_pushIfSome(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Grind_showState___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l_Lean_Elab_Tactic_Grind_showState___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Grind_showState___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Grind_showState___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Grind_showState___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_object* l_Lean_Elab_Tactic_Grind_showState___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Grind_showState___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Grind_showState___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Elab_Tactic_Grind_showState___redArg___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Grind_showState___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Grind_showState___redArg___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_Grind_showState___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Grind state"};
static const lean_object* l_Lean_Elab_Tactic_Grind_showState___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Grind_showState___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Grind_showState___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Grind_showState___redArg___closed__4_value)}};
static const lean_object* l_Lean_Elab_Tactic_Grind_showState___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Grind_showState___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Grind_showState___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Grind_showState___redArg___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_showState___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_showState___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_showState(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_showState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "showState"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__1_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__0_value),LEAN_SCALAR_PTR_LITERAL(200, 80, 82, 248, 223, 67, 174, 140)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "evalShowState"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__12_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(217, 96, 229, 223, 171, 103, 139, 248)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1___boxed(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "split"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(249, 90, 54, 167, 41, 130, 106, 252)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__5;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "splits"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(232, 201, 206, 84, 124, 223, 95, 96)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__2;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Case split candidates"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__3_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__5;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "no case splits"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "showCases"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__1_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__0_value),LEAN_SCALAR_PTR_LITERAL(116, 129, 48, 5, 176, 175, 163, 129)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "evalShowCases"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__12_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(146, 115, 106, 2, 47, 9, 123, 219)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__7___redArg(uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6_spec__7_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__5___redArg(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2___redArg(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1_spec__3___redArg(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1___redArg(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0___boxed(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "thm"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 106, 229, 125, 19, 158, 75, 156)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "thms"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 43, 249, 113, 45, 82, 7, 129)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__2;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Local theorems"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__3_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2(lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1_spec__3(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__5(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__7(lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6_spec__7_spec__9(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "showLocalThms"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__1_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(65, 164, 136, 213, 0, 240, 18, 240)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "evalShowLocalThms"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__12_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(25, 150, 229, 48, 187, 110, 180, 220)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "showTerm"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__1_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 150, 74, 14, 71, 142, 109, 156)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindSeq"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__3_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__2_value),LEAN_SCALAR_PTR_LITERAL(158, 229, 98, 59, 247, 194, 34, 174)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "evalShowTerm"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__12_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(63, 168, 61, 18, 39, 162, 48, 77)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f_spec__0___redArg(lean_object* v_filter_1_, lean_object* v_as_2_, size_t v_i_3_, size_t v_stop_4_, lean_object* v_b_5_, lean_object* v___y_6_, lean_object* v___y_7_){
_start:
{
lean_object* v_a_10_; uint8_t v___x_14_; 
v___x_14_ = lean_usize_dec_eq(v_i_3_, v_stop_4_);
if (v___x_14_ == 0)
{
lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_15_ = lean_array_uget_borrowed(v_as_2_, v_i_3_);
lean_inc(v_filter_1_);
lean_inc(v___x_15_);
v___x_16_ = l___private_Lean_Meta_Tactic_Grind_Filter_0__Lean_Meta_Grind_Filter_eval_go___redArg(v___x_15_, v_filter_1_, v___y_6_, v___y_7_);
if (lean_obj_tag(v___x_16_) == 0)
{
lean_object* v_a_17_; uint8_t v___x_18_; 
v_a_17_ = lean_ctor_get(v___x_16_, 0);
lean_inc(v_a_17_);
lean_dec_ref_known(v___x_16_, 1);
v___x_18_ = lean_unbox(v_a_17_);
lean_dec(v_a_17_);
if (v___x_18_ == 0)
{
v_a_10_ = v_b_5_;
goto v___jp_9_;
}
else
{
lean_object* v___x_19_; 
lean_inc(v___x_15_);
v___x_19_ = lean_array_push(v_b_5_, v___x_15_);
v_a_10_ = v___x_19_;
goto v___jp_9_;
}
}
else
{
lean_object* v_a_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_27_; 
lean_dec_ref(v_b_5_);
lean_dec(v_filter_1_);
v_a_20_ = lean_ctor_get(v___x_16_, 0);
v_isSharedCheck_27_ = !lean_is_exclusive(v___x_16_);
if (v_isSharedCheck_27_ == 0)
{
v___x_22_ = v___x_16_;
v_isShared_23_ = v_isSharedCheck_27_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_a_20_);
lean_dec(v___x_16_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_27_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v___x_25_; 
if (v_isShared_23_ == 0)
{
v___x_25_ = v___x_22_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v_a_20_);
v___x_25_ = v_reuseFailAlloc_26_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
return v___x_25_;
}
}
}
}
else
{
lean_object* v___x_28_; 
lean_dec(v_filter_1_);
v___x_28_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_28_, 0, v_b_5_);
return v___x_28_;
}
v___jp_9_:
{
size_t v___x_11_; size_t v___x_12_; 
v___x_11_ = ((size_t)1ULL);
v___x_12_ = lean_usize_add(v_i_3_, v___x_11_);
v_i_3_ = v___x_12_;
v_b_5_ = v_a_10_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f_spec__0___redArg___boxed(lean_object* v_filter_29_, lean_object* v_as_30_, lean_object* v_i_31_, lean_object* v_stop_32_, lean_object* v_b_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_){
_start:
{
size_t v_i_boxed_37_; size_t v_stop_boxed_38_; lean_object* v_res_39_; 
v_i_boxed_37_ = lean_unbox_usize(v_i_31_);
lean_dec(v_i_31_);
v_stop_boxed_38_ = lean_unbox_usize(v_stop_32_);
lean_dec(v_stop_32_);
v_res_39_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f_spec__0___redArg(v_filter_29_, v_as_30_, v_i_boxed_37_, v_stop_boxed_38_, v_b_33_, v___y_34_, v___y_35_);
lean_dec(v___y_35_);
lean_dec(v___y_34_);
lean_dec_ref(v_as_30_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___lam__0(lean_object* v_filter_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_){
_start:
{
lean_object* v___x_54_; lean_object* v_toGoalState_55_; lean_object* v_facts_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; uint8_t v___x_61_; 
v___x_54_ = lean_st_ref_get(v___y_43_);
v_toGoalState_55_ = lean_ctor_get(v___x_54_, 0);
lean_inc_ref(v_toGoalState_55_);
lean_dec(v___x_54_);
v_facts_56_ = lean_ctor_get(v_toGoalState_55_, 12);
lean_inc_ref(v_facts_56_);
lean_dec_ref(v_toGoalState_55_);
v___x_57_ = l_Lean_PersistentArray_toArray___redArg(v_facts_56_);
lean_dec_ref(v_facts_56_);
v___x_58_ = lean_unsigned_to_nat(0u);
v___x_59_ = lean_array_get_size(v___x_57_);
v___x_60_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___lam__0___closed__0));
v___x_61_ = lean_nat_dec_lt(v___x_58_, v___x_59_);
if (v___x_61_ == 0)
{
lean_object* v___x_62_; 
lean_dec_ref(v___x_57_);
lean_dec(v_filter_42_);
v___x_62_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_62_, 0, v___x_60_);
return v___x_62_;
}
else
{
size_t v___x_63_; size_t v___x_64_; lean_object* v___x_65_; 
v___x_63_ = ((size_t)0ULL);
v___x_64_ = lean_usize_of_nat(v___x_59_);
v___x_65_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f_spec__0___redArg(v_filter_42_, v___x_57_, v___x_63_, v___x_64_, v___x_60_, v___y_43_, v___y_50_);
lean_dec_ref(v___x_57_);
return v___x_65_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___lam__0___boxed(lean_object* v_filter_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___lam__0(v_filter_66_, v___y_67_, v___y_68_, v___y_69_, v___y_70_, v___y_71_, v___y_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_);
lean_dec(v___y_76_);
lean_dec_ref(v___y_75_);
lean_dec(v___y_74_);
lean_dec_ref(v___y_73_);
lean_dec(v___y_72_);
lean_dec_ref(v___y_71_);
lean_dec(v___y_70_);
lean_dec_ref(v___y_69_);
lean_dec(v___y_68_);
lean_dec(v___y_67_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg(lean_object* v_filter_87_, uint8_t v_collapsed_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_){
_start:
{
lean_object* v___f_96_; lean_object* v___x_97_; 
v___f_96_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___lam__0___boxed), 12, 1);
lean_closure_set(v___f_96_, 0, v_filter_87_);
v___x_97_ = l_Lean_Elab_Tactic_Grind_liftGoalM___redArg(v___f_96_, v_a_89_, v_a_90_, v_a_91_, v_a_92_, v_a_93_, v_a_94_);
if (lean_obj_tag(v___x_97_) == 0)
{
lean_object* v_a_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_117_; 
v_a_98_ = lean_ctor_get(v___x_97_, 0);
v_isSharedCheck_117_ = !lean_is_exclusive(v___x_97_);
if (v_isSharedCheck_117_ == 0)
{
v___x_100_ = v___x_97_;
v_isShared_101_ = v_isSharedCheck_117_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_a_98_);
lean_dec(v___x_97_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_117_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v___x_102_; lean_object* v___x_103_; uint8_t v___x_104_; 
v___x_102_ = lean_array_get_size(v_a_98_);
v___x_103_ = lean_unsigned_to_nat(0u);
v___x_104_ = lean_nat_dec_eq(v___x_102_, v___x_103_);
if (v___x_104_ == 0)
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_111_; 
v___x_105_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___closed__1));
v___x_106_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___closed__2));
v___x_107_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___closed__4));
v___x_108_ = l_Lean_Meta_Grind_ppExprArray(v___x_105_, v___x_106_, v_a_98_, v___x_107_, v_collapsed_88_);
v___x_109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_109_, 0, v___x_108_);
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 0, v___x_109_);
v___x_111_ = v___x_100_;
goto v_reusejp_110_;
}
else
{
lean_object* v_reuseFailAlloc_112_; 
v_reuseFailAlloc_112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_112_, 0, v___x_109_);
v___x_111_ = v_reuseFailAlloc_112_;
goto v_reusejp_110_;
}
v_reusejp_110_:
{
return v___x_111_;
}
}
else
{
lean_object* v___x_113_; lean_object* v___x_115_; 
lean_dec(v_a_98_);
v___x_113_ = lean_box(0);
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 0, v___x_113_);
v___x_115_ = v___x_100_;
goto v_reusejp_114_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_116_, 0, v___x_113_);
v___x_115_ = v_reuseFailAlloc_116_;
goto v_reusejp_114_;
}
v_reusejp_114_:
{
return v___x_115_;
}
}
}
}
else
{
lean_object* v_a_118_; lean_object* v___x_120_; uint8_t v_isShared_121_; uint8_t v_isSharedCheck_125_; 
v_a_118_ = lean_ctor_get(v___x_97_, 0);
v_isSharedCheck_125_ = !lean_is_exclusive(v___x_97_);
if (v_isSharedCheck_125_ == 0)
{
v___x_120_ = v___x_97_;
v_isShared_121_ = v_isSharedCheck_125_;
goto v_resetjp_119_;
}
else
{
lean_inc(v_a_118_);
lean_dec(v___x_97_);
v___x_120_ = lean_box(0);
v_isShared_121_ = v_isSharedCheck_125_;
goto v_resetjp_119_;
}
v_resetjp_119_:
{
lean_object* v___x_123_; 
if (v_isShared_121_ == 0)
{
v___x_123_ = v___x_120_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v_a_118_);
v___x_123_ = v_reuseFailAlloc_124_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
return v___x_123_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___boxed(lean_object* v_filter_126_, lean_object* v_collapsed_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_){
_start:
{
uint8_t v_collapsed_boxed_135_; lean_object* v_res_136_; 
v_collapsed_boxed_135_ = lean_unbox(v_collapsed_127_);
v_res_136_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg(v_filter_126_, v_collapsed_boxed_135_, v_a_128_, v_a_129_, v_a_130_, v_a_131_, v_a_132_, v_a_133_);
lean_dec(v_a_133_);
lean_dec_ref(v_a_132_);
lean_dec(v_a_131_);
lean_dec_ref(v_a_130_);
lean_dec(v_a_129_);
lean_dec_ref(v_a_128_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f(lean_object* v_filter_137_, uint8_t v_collapsed_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg(v_filter_137_, v_collapsed_138_, v_a_139_, v_a_140_, v_a_143_, v_a_144_, v_a_145_, v_a_146_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___boxed(lean_object* v_filter_149_, lean_object* v_collapsed_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_){
_start:
{
uint8_t v_collapsed_boxed_160_; lean_object* v_res_161_; 
v_collapsed_boxed_160_ = lean_unbox(v_collapsed_150_);
v_res_161_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f(v_filter_149_, v_collapsed_boxed_160_, v_a_151_, v_a_152_, v_a_153_, v_a_154_, v_a_155_, v_a_156_, v_a_157_, v_a_158_);
lean_dec(v_a_158_);
lean_dec_ref(v_a_157_);
lean_dec(v_a_156_);
lean_dec_ref(v_a_155_);
lean_dec(v_a_154_);
lean_dec_ref(v_a_153_);
lean_dec(v_a_152_);
lean_dec_ref(v_a_151_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f_spec__0(lean_object* v_filter_162_, lean_object* v_as_163_, size_t v_i_164_, size_t v_stop_165_, lean_object* v_b_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_){
_start:
{
lean_object* v___x_178_; 
v___x_178_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f_spec__0___redArg(v_filter_162_, v_as_163_, v_i_164_, v_stop_165_, v_b_166_, v___y_167_, v___y_174_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f_spec__0___boxed(lean_object* v_filter_179_, lean_object* v_as_180_, lean_object* v_i_181_, lean_object* v_stop_182_, lean_object* v_b_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_){
_start:
{
size_t v_i_boxed_195_; size_t v_stop_boxed_196_; lean_object* v_res_197_; 
v_i_boxed_195_ = lean_unbox_usize(v_i_181_);
lean_dec(v_i_181_);
v_stop_boxed_196_ = lean_unbox_usize(v_stop_182_);
lean_dec(v_stop_182_);
v_res_197_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f_spec__0(v_filter_179_, v_as_180_, v_i_boxed_195_, v_stop_boxed_196_, v_b_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_, v___y_188_, v___y_189_, v___y_190_, v___y_191_, v___y_192_, v___y_193_);
lean_dec(v___y_193_);
lean_dec_ref(v___y_192_);
lean_dec(v___y_191_);
lean_dec_ref(v___y_190_);
lean_dec(v___y_189_);
lean_dec_ref(v___y_188_);
lean_dec(v___y_187_);
lean_dec_ref(v___y_186_);
lean_dec(v___y_185_);
lean_dec(v___y_184_);
lean_dec_ref(v_as_180_);
return v_res_197_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_198_ = lean_box(0);
v___x_199_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_200_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_200_, 0, v___x_199_);
lean_ctor_set(v___x_200_, 1, v___x_198_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg(){
_start:
{
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg___closed__0);
v___x_203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_203_, 0, v___x_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg___boxed(lean_object* v___y_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2(lean_object* v_00_u03b1_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_){
_start:
{
lean_object* v___x_216_; 
v___x_216_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___boxed(lean_object* v_00_u03b1_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2(v_00_u03b1_217_, v___y_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_, v___y_224_, v___y_225_);
lean_dec(v___y_225_);
lean_dec_ref(v___y_224_);
lean_dec(v___y_223_);
lean_dec_ref(v___y_222_);
lean_dec(v___y_221_);
lean_dec_ref(v___y_220_);
lean_dec(v___y_219_);
lean_dec_ref(v___y_218_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1_spec__2(lean_object* v_msgData_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_){
_start:
{
lean_object* v___x_234_; lean_object* v_env_235_; uint8_t v___x_236_; lean_object* v_env_237_; lean_object* v___x_238_; lean_object* v_toCold_239_; lean_object* v_mctx_240_; lean_object* v_lctx_241_; lean_object* v_options_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_234_ = lean_st_ref_get(v___y_232_);
v_env_235_ = lean_ctor_get(v___x_234_, 0);
lean_inc_ref(v_env_235_);
lean_dec(v___x_234_);
v___x_236_ = 0;
v_env_237_ = l_Lean_Environment_setRecordingDeps(v_env_235_, v___x_236_);
v___x_238_ = lean_st_ref_get(v___y_230_);
v_toCold_239_ = lean_ctor_get(v___y_231_, 0);
v_mctx_240_ = lean_ctor_get(v___x_238_, 0);
lean_inc_ref(v_mctx_240_);
lean_dec(v___x_238_);
v_lctx_241_ = lean_ctor_get(v___y_229_, 2);
v_options_242_ = lean_ctor_get(v_toCold_239_, 2);
lean_inc_ref(v_options_242_);
lean_inc_ref(v_lctx_241_);
v___x_243_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_243_, 0, v_env_237_);
lean_ctor_set(v___x_243_, 1, v_mctx_240_);
lean_ctor_set(v___x_243_, 2, v_lctx_241_);
lean_ctor_set(v___x_243_, 3, v_options_242_);
v___x_244_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_243_);
lean_ctor_set(v___x_244_, 1, v_msgData_228_);
v___x_245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1_spec__2___boxed(lean_object* v_msgData_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1_spec__2(v_msgData_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_);
lean_dec(v___y_250_);
lean_dec_ref(v___y_249_);
lean_dec(v___y_248_);
lean_dec_ref(v___y_247_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1___redArg(lean_object* v_msg_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_){
_start:
{
lean_object* v_ref_259_; lean_object* v___x_260_; lean_object* v_a_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_269_; 
v_ref_259_ = lean_ctor_get(v___y_256_, 2);
v___x_260_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1_spec__2(v_msg_253_, v___y_254_, v___y_255_, v___y_256_, v___y_257_);
v_a_261_ = lean_ctor_get(v___x_260_, 0);
v_isSharedCheck_269_ = !lean_is_exclusive(v___x_260_);
if (v_isSharedCheck_269_ == 0)
{
v___x_263_ = v___x_260_;
v_isShared_264_ = v_isSharedCheck_269_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_a_261_);
lean_dec(v___x_260_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_269_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_265_; lean_object* v___x_267_; 
lean_inc(v_ref_259_);
v___x_265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_265_, 0, v_ref_259_);
lean_ctor_set(v___x_265_, 1, v_a_261_);
if (v_isShared_264_ == 0)
{
lean_ctor_set_tag(v___x_263_, 1);
lean_ctor_set(v___x_263_, 0, v___x_265_);
v___x_267_ = v___x_263_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v___x_265_);
v___x_267_ = v_reuseFailAlloc_268_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
return v___x_267_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1___redArg___boxed(lean_object* v_msg_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1___redArg(v_msg_270_, v___y_271_, v___y_272_, v___y_273_, v___y_274_);
lean_dec(v___y_274_);
lean_dec_ref(v___y_273_);
lean_dec(v___y_272_);
lean_dec_ref(v___y_271_);
return v_res_276_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2_spec__5(lean_object* v_opts_277_, lean_object* v_opt_278_){
_start:
{
lean_object* v_name_279_; lean_object* v_defValue_280_; lean_object* v_map_281_; lean_object* v___x_282_; 
v_name_279_ = lean_ctor_get(v_opt_278_, 0);
v_defValue_280_ = lean_ctor_get(v_opt_278_, 1);
v_map_281_ = lean_ctor_get(v_opts_277_, 0);
v___x_282_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_281_, v_name_279_);
if (lean_obj_tag(v___x_282_) == 0)
{
uint8_t v___x_283_; 
v___x_283_ = lean_unbox(v_defValue_280_);
return v___x_283_;
}
else
{
lean_object* v_val_284_; 
v_val_284_ = lean_ctor_get(v___x_282_, 0);
lean_inc(v_val_284_);
lean_dec_ref_known(v___x_282_, 1);
if (lean_obj_tag(v_val_284_) == 1)
{
uint8_t v_v_285_; 
v_v_285_ = lean_ctor_get_uint8(v_val_284_, 0);
lean_dec_ref_known(v_val_284_, 0);
return v_v_285_;
}
else
{
uint8_t v___x_286_; 
lean_dec(v_val_284_);
v___x_286_ = lean_unbox(v_defValue_280_);
return v___x_286_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_opts_287_, lean_object* v_opt_288_){
_start:
{
uint8_t v_res_289_; lean_object* v_r_290_; 
v_res_289_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2_spec__5(v_opts_287_, v_opt_288_);
lean_dec_ref(v_opt_288_);
lean_dec_ref(v_opts_287_);
v_r_290_ = lean_box(v_res_289_);
return v_r_290_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0(uint8_t v___x_299_, lean_object* v_x_300_){
_start:
{
if (lean_obj_tag(v_x_300_) == 1)
{
lean_object* v_pre_301_; 
v_pre_301_ = lean_ctor_get(v_x_300_, 0);
switch(lean_obj_tag(v_pre_301_))
{
case 1:
{
lean_object* v_pre_302_; 
v_pre_302_ = lean_ctor_get(v_pre_301_, 0);
switch(lean_obj_tag(v_pre_302_))
{
case 0:
{
lean_object* v_str_303_; lean_object* v_str_304_; lean_object* v___x_305_; uint8_t v___x_306_; 
v_str_303_ = lean_ctor_get(v_x_300_, 1);
v_str_304_ = lean_ctor_get(v_pre_301_, 1);
v___x_305_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__0));
v___x_306_ = lean_string_dec_eq(v_str_304_, v___x_305_);
if (v___x_306_ == 0)
{
lean_object* v___x_307_; uint8_t v___x_308_; 
v___x_307_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1));
v___x_308_ = lean_string_dec_eq(v_str_304_, v___x_307_);
if (v___x_308_ == 0)
{
return v___x_308_;
}
else
{
lean_object* v___x_309_; uint8_t v___x_310_; 
v___x_309_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__2));
v___x_310_ = lean_string_dec_eq(v_str_303_, v___x_309_);
return v___x_310_;
}
}
else
{
lean_object* v___x_311_; uint8_t v___x_312_; 
v___x_311_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__3));
v___x_312_ = lean_string_dec_eq(v_str_303_, v___x_311_);
return v___x_312_;
}
}
case 1:
{
lean_object* v_pre_313_; 
v_pre_313_ = lean_ctor_get(v_pre_302_, 0);
if (lean_obj_tag(v_pre_313_) == 0)
{
lean_object* v_str_314_; lean_object* v_str_315_; lean_object* v_str_316_; lean_object* v___x_317_; uint8_t v___x_318_; 
v_str_314_ = lean_ctor_get(v_x_300_, 1);
v_str_315_ = lean_ctor_get(v_pre_301_, 1);
v_str_316_ = lean_ctor_get(v_pre_302_, 1);
v___x_317_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__4));
v___x_318_ = lean_string_dec_eq(v_str_316_, v___x_317_);
if (v___x_318_ == 0)
{
return v___x_318_;
}
else
{
lean_object* v___x_319_; uint8_t v___x_320_; 
v___x_319_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__5));
v___x_320_ = lean_string_dec_eq(v_str_315_, v___x_319_);
if (v___x_320_ == 0)
{
return v___x_320_;
}
else
{
lean_object* v___x_321_; uint8_t v___x_322_; 
v___x_321_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__6));
v___x_322_ = lean_string_dec_eq(v_str_314_, v___x_321_);
return v___x_322_;
}
}
}
else
{
return v___x_299_;
}
}
default: 
{
return v___x_299_;
}
}
}
case 0:
{
lean_object* v_str_323_; lean_object* v___x_324_; uint8_t v___x_325_; 
v_str_323_ = lean_ctor_get(v_x_300_, 1);
v___x_324_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__7));
v___x_325_ = lean_string_dec_eq(v_str_323_, v___x_324_);
return v___x_325_;
}
default: 
{
return v___x_299_;
}
}
}
else
{
return v___x_299_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___boxed(lean_object* v___x_326_, lean_object* v_x_327_){
_start:
{
uint8_t v___x_6609__boxed_328_; uint8_t v_res_329_; lean_object* v_r_330_; 
v___x_6609__boxed_328_ = lean_unbox(v___x_326_);
v_res_329_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0(v___x_6609__boxed_328_, v_x_327_);
lean_dec(v_x_327_);
v_r_330_ = lean_box(v_res_329_);
return v_r_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg(lean_object* v_ref_335_, lean_object* v_msgData_336_, uint8_t v_severity_337_, uint8_t v_isSilent_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_){
_start:
{
lean_object* v___y_345_; uint8_t v___y_346_; lean_object* v___y_347_; lean_object* v___y_348_; uint8_t v___y_349_; lean_object* v___y_350_; lean_object* v___y_351_; lean_object* v_toCold_352_; lean_object* v___y_353_; lean_object* v___y_382_; lean_object* v___y_383_; lean_object* v___y_384_; lean_object* v___y_385_; uint8_t v___y_386_; uint8_t v___y_387_; uint8_t v___y_388_; lean_object* v___y_389_; lean_object* v___y_409_; lean_object* v___y_410_; uint8_t v___y_411_; lean_object* v___y_412_; uint8_t v___y_413_; uint8_t v___y_414_; lean_object* v___y_415_; uint8_t v___y_419_; uint8_t v___x_436_; uint8_t v___x_437_; 
v___x_436_ = 2;
v___x_437_ = l_Lean_instBEqMessageSeverity_beq(v_severity_337_, v___x_436_);
if (v___x_437_ == 0)
{
goto v___jp_429_;
}
else
{
uint8_t v___x_438_; 
lean_inc_ref(v_msgData_336_);
v___x_438_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_336_);
if (v___x_438_ == 0)
{
goto v___jp_429_;
}
else
{
lean_object* v___x_439_; lean_object* v___x_440_; 
lean_dec_ref(v_msgData_336_);
v___x_439_ = lean_box(0);
v___x_440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_440_, 0, v___x_439_);
return v___x_440_;
}
}
v___jp_344_:
{
lean_object* v_currNamespace_354_; lean_object* v_openDecls_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v_env_360_; lean_object* v_nextMacroScope_361_; lean_object* v_ngen_362_; lean_object* v_auxDeclNGen_363_; lean_object* v_traceState_364_; lean_object* v_cache_365_; lean_object* v_recordedDeps_366_; lean_object* v_messages_367_; lean_object* v_infoState_368_; lean_object* v_snapshotTasks_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_380_; 
v_currNamespace_354_ = lean_ctor_get(v_toCold_352_, 4);
v_openDecls_355_ = lean_ctor_get(v_toCold_352_, 5);
lean_inc(v_openDecls_355_);
lean_inc(v_currNamespace_354_);
v___x_356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_356_, 0, v_currNamespace_354_);
lean_ctor_set(v___x_356_, 1, v_openDecls_355_);
v___x_357_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_357_, 0, v___x_356_);
lean_ctor_set(v___x_357_, 1, v___y_347_);
lean_inc_ref(v___y_345_);
lean_inc_ref(v___y_348_);
v___x_358_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_358_, 0, v___y_348_);
lean_ctor_set(v___x_358_, 1, v___y_351_);
lean_ctor_set(v___x_358_, 2, v___y_350_);
lean_ctor_set(v___x_358_, 3, v___y_345_);
lean_ctor_set(v___x_358_, 4, v___x_357_);
lean_ctor_set_uint8(v___x_358_, sizeof(void*)*5, v___y_349_);
lean_ctor_set_uint8(v___x_358_, sizeof(void*)*5 + 1, v___y_346_);
lean_ctor_set_uint8(v___x_358_, sizeof(void*)*5 + 2, v_isSilent_338_);
v___x_359_ = lean_st_ref_take(v___y_353_);
v_env_360_ = lean_ctor_get(v___x_359_, 0);
v_nextMacroScope_361_ = lean_ctor_get(v___x_359_, 1);
v_ngen_362_ = lean_ctor_get(v___x_359_, 2);
v_auxDeclNGen_363_ = lean_ctor_get(v___x_359_, 3);
v_traceState_364_ = lean_ctor_get(v___x_359_, 4);
v_cache_365_ = lean_ctor_get(v___x_359_, 5);
v_recordedDeps_366_ = lean_ctor_get(v___x_359_, 6);
v_messages_367_ = lean_ctor_get(v___x_359_, 7);
v_infoState_368_ = lean_ctor_get(v___x_359_, 8);
v_snapshotTasks_369_ = lean_ctor_get(v___x_359_, 9);
v_isSharedCheck_380_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_380_ == 0)
{
v___x_371_ = v___x_359_;
v_isShared_372_ = v_isSharedCheck_380_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_snapshotTasks_369_);
lean_inc(v_infoState_368_);
lean_inc(v_messages_367_);
lean_inc(v_recordedDeps_366_);
lean_inc(v_cache_365_);
lean_inc(v_traceState_364_);
lean_inc(v_auxDeclNGen_363_);
lean_inc(v_ngen_362_);
lean_inc(v_nextMacroScope_361_);
lean_inc(v_env_360_);
lean_dec(v___x_359_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_380_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_376_; 
v___x_373_ = lean_box(0);
v___x_374_ = l_Lean_MessageLog_add(v___x_358_, v_messages_367_);
if (v_isShared_372_ == 0)
{
lean_ctor_set(v___x_371_, 7, v___x_374_);
v___x_376_ = v___x_371_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v_env_360_);
lean_ctor_set(v_reuseFailAlloc_379_, 1, v_nextMacroScope_361_);
lean_ctor_set(v_reuseFailAlloc_379_, 2, v_ngen_362_);
lean_ctor_set(v_reuseFailAlloc_379_, 3, v_auxDeclNGen_363_);
lean_ctor_set(v_reuseFailAlloc_379_, 4, v_traceState_364_);
lean_ctor_set(v_reuseFailAlloc_379_, 5, v_cache_365_);
lean_ctor_set(v_reuseFailAlloc_379_, 6, v_recordedDeps_366_);
lean_ctor_set(v_reuseFailAlloc_379_, 7, v___x_374_);
lean_ctor_set(v_reuseFailAlloc_379_, 8, v_infoState_368_);
lean_ctor_set(v_reuseFailAlloc_379_, 9, v_snapshotTasks_369_);
v___x_376_ = v_reuseFailAlloc_379_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_377_ = lean_st_ref_put(v___y_353_, v___x_376_);
v___x_378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_378_, 0, v___x_373_);
return v___x_378_;
}
}
}
v___jp_381_:
{
lean_object* v_fileName_390_; lean_object* v_fileMap_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v_a_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_407_; 
v_fileName_390_ = lean_ctor_get(v___y_385_, 0);
v_fileMap_391_ = lean_ctor_get(v___y_385_, 1);
v___x_392_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_336_);
v___x_393_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1_spec__2(v___x_392_, v___y_339_, v___y_340_, v___y_341_, v___y_342_);
v_a_394_ = lean_ctor_get(v___x_393_, 0);
v_isSharedCheck_407_ = !lean_is_exclusive(v___x_393_);
if (v_isSharedCheck_407_ == 0)
{
v___x_396_ = v___x_393_;
v_isShared_397_ = v_isSharedCheck_407_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_a_394_);
lean_dec(v___x_393_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_407_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
lean_inc_ref_n(v_fileMap_391_, 2);
v___x_398_ = l_Lean_FileMap_toPosition(v_fileMap_391_, v___y_384_);
lean_dec(v___y_384_);
v___x_399_ = l_Lean_FileMap_toPosition(v_fileMap_391_, v___y_389_);
lean_dec(v___y_389_);
v___x_400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_400_, 0, v___x_399_);
v___x_401_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___closed__0));
if (v___y_387_ == 0)
{
lean_del_object(v___x_396_);
v___y_345_ = v___x_401_;
v___y_346_ = v___y_386_;
v___y_347_ = v_a_394_;
v___y_348_ = v_fileName_390_;
v___y_349_ = v___y_388_;
v___y_350_ = v___x_400_;
v___y_351_ = v___x_398_;
v_toCold_352_ = v___y_382_;
v___y_353_ = v___y_342_;
goto v___jp_344_;
}
else
{
uint8_t v___x_402_; 
lean_inc(v_a_394_);
lean_inc_ref(v___y_383_);
v___x_402_ = l_Lean_MessageData_hasTag(v___y_383_, v_a_394_);
if (v___x_402_ == 0)
{
lean_object* v___x_403_; lean_object* v___x_405_; 
lean_dec_ref_known(v___x_400_, 1);
lean_dec_ref(v___x_398_);
lean_dec(v_a_394_);
v___x_403_ = lean_box(0);
if (v_isShared_397_ == 0)
{
lean_ctor_set(v___x_396_, 0, v___x_403_);
v___x_405_ = v___x_396_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v___x_403_);
v___x_405_ = v_reuseFailAlloc_406_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
return v___x_405_;
}
}
else
{
lean_del_object(v___x_396_);
v___y_345_ = v___x_401_;
v___y_346_ = v___y_386_;
v___y_347_ = v_a_394_;
v___y_348_ = v_fileName_390_;
v___y_349_ = v___y_388_;
v___y_350_ = v___x_400_;
v___y_351_ = v___x_398_;
v_toCold_352_ = v___y_382_;
v___y_353_ = v___y_342_;
goto v___jp_344_;
}
}
}
}
v___jp_408_:
{
lean_object* v___x_416_; 
v___x_416_ = l_Lean_Syntax_getTailPos_x3f(v___y_410_, v___y_413_);
lean_dec(v___y_410_);
if (lean_obj_tag(v___x_416_) == 0)
{
lean_inc(v___y_415_);
v___y_382_ = v___y_409_;
v___y_383_ = v___y_412_;
v___y_384_ = v___y_415_;
v___y_385_ = v___y_409_;
v___y_386_ = v___y_414_;
v___y_387_ = v___y_411_;
v___y_388_ = v___y_413_;
v___y_389_ = v___y_415_;
goto v___jp_381_;
}
else
{
lean_object* v_val_417_; 
v_val_417_ = lean_ctor_get(v___x_416_, 0);
lean_inc(v_val_417_);
lean_dec_ref_known(v___x_416_, 1);
v___y_382_ = v___y_409_;
v___y_383_ = v___y_412_;
v___y_384_ = v___y_415_;
v___y_385_ = v___y_409_;
v___y_386_ = v___y_414_;
v___y_387_ = v___y_411_;
v___y_388_ = v___y_413_;
v___y_389_ = v_val_417_;
goto v___jp_381_;
}
}
v___jp_418_:
{
lean_object* v_toCold_420_; lean_object* v_ref_421_; uint8_t v_suppressElabErrors_422_; lean_object* v_ref_423_; uint8_t v___x_424_; lean_object* v___f_425_; lean_object* v___x_426_; 
v_toCold_420_ = lean_ctor_get(v___y_341_, 0);
v_ref_421_ = lean_ctor_get(v___y_341_, 2);
v_suppressElabErrors_422_ = lean_ctor_get_uint8(v___y_341_, sizeof(void*)*3 + 2);
v_ref_423_ = l_Lean_replaceRef(v_ref_335_, v_ref_421_);
v___x_424_ = 0;
v___f_425_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___closed__1));
v___x_426_ = l_Lean_Syntax_getPos_x3f(v_ref_423_, v___x_424_);
if (lean_obj_tag(v___x_426_) == 0)
{
lean_object* v___x_427_; 
v___x_427_ = lean_unsigned_to_nat(0u);
v___y_409_ = v_toCold_420_;
v___y_410_ = v_ref_423_;
v___y_411_ = v_suppressElabErrors_422_;
v___y_412_ = v___f_425_;
v___y_413_ = v___x_424_;
v___y_414_ = v___y_419_;
v___y_415_ = v___x_427_;
goto v___jp_408_;
}
else
{
lean_object* v_val_428_; 
v_val_428_ = lean_ctor_get(v___x_426_, 0);
lean_inc(v_val_428_);
lean_dec_ref_known(v___x_426_, 1);
v___y_409_ = v_toCold_420_;
v___y_410_ = v_ref_423_;
v___y_411_ = v_suppressElabErrors_422_;
v___y_412_ = v___f_425_;
v___y_413_ = v___x_424_;
v___y_414_ = v___y_419_;
v___y_415_ = v_val_428_;
goto v___jp_408_;
}
}
v___jp_429_:
{
uint8_t v___x_430_; uint8_t v___x_431_; 
v___x_430_ = 1;
v___x_431_ = l_Lean_instBEqMessageSeverity_beq(v_severity_337_, v___x_430_);
if (v___x_431_ == 0)
{
v___y_419_ = v_severity_337_;
goto v___jp_418_;
}
else
{
lean_object* v___x_432_; lean_object* v___x_433_; uint8_t v___x_434_; 
v___x_432_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_341_);
v___x_433_ = l_Lean_warningAsError;
v___x_434_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2_spec__5(v___x_432_, v___x_433_);
lean_dec_ref(v___x_432_);
if (v___x_434_ == 0)
{
v___y_419_ = v_severity_337_;
goto v___jp_418_;
}
else
{
uint8_t v___x_435_; 
v___x_435_ = 2;
v___y_419_ = v___x_435_;
goto v___jp_418_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_ref_441_, lean_object* v_msgData_442_, lean_object* v_severity_443_, lean_object* v_isSilent_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_){
_start:
{
uint8_t v_severity_boxed_450_; uint8_t v_isSilent_boxed_451_; lean_object* v_res_452_; 
v_severity_boxed_450_ = lean_unbox(v_severity_443_);
v_isSilent_boxed_451_ = lean_unbox(v_isSilent_444_);
v_res_452_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg(v_ref_441_, v_msgData_442_, v_severity_boxed_450_, v_isSilent_boxed_451_, v___y_445_, v___y_446_, v___y_447_, v___y_448_);
lean_dec(v___y_448_);
lean_dec_ref(v___y_447_);
lean_dec(v___y_446_);
lean_dec_ref(v___y_445_);
lean_dec(v_ref_441_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0(lean_object* v_msgData_453_, uint8_t v_severity_454_, uint8_t v_isSilent_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_){
_start:
{
lean_object* v_ref_465_; lean_object* v___x_466_; 
v_ref_465_ = lean_ctor_get(v___y_462_, 2);
v___x_466_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg(v_ref_465_, v_msgData_453_, v_severity_454_, v_isSilent_455_, v___y_460_, v___y_461_, v___y_462_, v___y_463_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0___boxed(lean_object* v_msgData_467_, lean_object* v_severity_468_, lean_object* v_isSilent_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_){
_start:
{
uint8_t v_severity_boxed_479_; uint8_t v_isSilent_boxed_480_; lean_object* v_res_481_; 
v_severity_boxed_479_ = lean_unbox(v_severity_468_);
v_isSilent_boxed_480_ = lean_unbox(v_isSilent_469_);
v_res_481_ = l_Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0(v_msgData_467_, v_severity_boxed_479_, v_isSilent_boxed_480_, v___y_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_, v___y_477_);
lean_dec(v___y_477_);
lean_dec_ref(v___y_476_);
lean_dec(v___y_475_);
lean_dec_ref(v___y_474_);
lean_dec(v___y_473_);
lean_dec_ref(v___y_472_);
lean_dec(v___y_471_);
lean_dec_ref(v___y_470_);
return v_res_481_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0(lean_object* v_msgData_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_){
_start:
{
uint8_t v___x_492_; uint8_t v___x_493_; lean_object* v___x_494_; 
v___x_492_ = 0;
v___x_493_ = 0;
v___x_494_ = l_Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0(v_msgData_482_, v___x_492_, v___x_493_, v___y_483_, v___y_484_, v___y_485_, v___y_486_, v___y_487_, v___y_488_, v___y_489_, v___y_490_);
return v___x_494_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0___boxed(lean_object* v_msgData_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0(v_msgData_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_);
lean_dec(v___y_503_);
lean_dec_ref(v___y_502_);
lean_dec(v___y_501_);
lean_dec_ref(v___y_500_);
lean_dec(v___y_499_);
lean_dec_ref(v___y_498_);
lean_dec(v___y_497_);
lean_dec_ref(v___y_496_);
return v_res_505_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__1(void){
_start:
{
lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_507_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__0));
v___x_508_ = l_Lean_stringToMessageData(v___x_507_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0(uint8_t v___x_510_, lean_object* v_stx_511_, lean_object* v___x_512_, lean_object* v___x_513_, lean_object* v___x_514_, lean_object* v___x_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_){
_start:
{
lean_object* v_filter_x3f_526_; lean_object* v___y_527_; lean_object* v___y_528_; lean_object* v___y_529_; lean_object* v___y_530_; lean_object* v___y_531_; lean_object* v___y_532_; lean_object* v___y_533_; lean_object* v___y_534_; 
if (v___x_510_ == 0)
{
lean_object* v___x_560_; 
lean_dec_ref(v___x_515_);
lean_dec_ref(v___x_514_);
lean_dec_ref(v___x_513_);
lean_dec_ref(v___x_512_);
v___x_560_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_560_;
}
else
{
lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; uint8_t v___x_565_; 
v___x_561_ = lean_unsigned_to_nat(1u);
v___x_562_ = l_Lean_Syntax_getArg(v_stx_511_, v___x_561_);
v___x_563_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__2));
v___x_564_ = l_Lean_Name_mkStr5(v___x_512_, v___x_513_, v___x_514_, v___x_515_, v___x_563_);
lean_inc(v___x_562_);
v___x_565_ = l_Lean_Syntax_isOfKind(v___x_562_, v___x_564_);
lean_dec(v___x_564_);
if (v___x_565_ == 0)
{
lean_object* v___x_566_; 
lean_dec(v___x_562_);
v___x_566_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_566_;
}
else
{
lean_object* v___x_567_; lean_object* v___x_568_; uint8_t v___x_569_; 
v___x_567_ = lean_unsigned_to_nat(0u);
v___x_568_ = l_Lean_Syntax_getArg(v___x_562_, v___x_567_);
lean_dec(v___x_562_);
v___x_569_ = l_Lean_Syntax_isNone(v___x_568_);
if (v___x_569_ == 0)
{
uint8_t v___x_570_; 
lean_inc(v___x_568_);
v___x_570_ = l_Lean_Syntax_matchesNull(v___x_568_, v___x_561_);
if (v___x_570_ == 0)
{
lean_object* v___x_571_; 
lean_dec(v___x_568_);
v___x_571_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_571_;
}
else
{
lean_object* v_filter_x3f_572_; lean_object* v___x_573_; 
v_filter_x3f_572_ = l_Lean_Syntax_getArg(v___x_568_, v___x_567_);
lean_dec(v___x_568_);
v___x_573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_573_, 0, v_filter_x3f_572_);
v_filter_x3f_526_ = v___x_573_;
v___y_527_ = v___y_516_;
v___y_528_ = v___y_517_;
v___y_529_ = v___y_518_;
v___y_530_ = v___y_519_;
v___y_531_ = v___y_520_;
v___y_532_ = v___y_521_;
v___y_533_ = v___y_522_;
v___y_534_ = v___y_523_;
goto v___jp_525_;
}
}
else
{
lean_object* v___x_574_; 
lean_dec(v___x_568_);
v___x_574_ = lean_box(0);
v_filter_x3f_526_ = v___x_574_;
v___y_527_ = v___y_516_;
v___y_528_ = v___y_517_;
v___y_529_ = v___y_518_;
v___y_530_ = v___y_519_;
v___y_531_ = v___y_520_;
v___y_532_ = v___y_521_;
v___y_533_ = v___y_522_;
v___y_534_ = v___y_523_;
goto v___jp_525_;
}
}
}
v___jp_525_:
{
lean_object* v___x_535_; 
v___x_535_ = l_Lean_Elab_Tactic_Grind_elabFilter(v_filter_x3f_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_, v___y_531_, v___y_532_, v___y_533_, v___y_534_);
if (lean_obj_tag(v___x_535_) == 0)
{
lean_object* v_a_536_; uint8_t v___x_537_; lean_object* v___x_538_; 
v_a_536_ = lean_ctor_get(v___x_535_, 0);
lean_inc(v_a_536_);
lean_dec_ref_known(v___x_535_, 1);
v___x_537_ = 0;
v___x_538_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg(v_a_536_, v___x_537_, v___y_527_, v___y_528_, v___y_531_, v___y_532_, v___y_533_, v___y_534_);
if (lean_obj_tag(v___x_538_) == 0)
{
lean_object* v_a_539_; 
v_a_539_ = lean_ctor_get(v___x_538_, 0);
lean_inc(v_a_539_);
lean_dec_ref_known(v___x_538_, 1);
if (lean_obj_tag(v_a_539_) == 1)
{
lean_object* v_val_540_; lean_object* v___x_541_; 
v_val_540_ = lean_ctor_get(v_a_539_, 0);
lean_inc(v_val_540_);
lean_dec_ref_known(v_a_539_, 1);
v___x_541_ = l_Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0(v_val_540_, v___y_527_, v___y_528_, v___y_529_, v___y_530_, v___y_531_, v___y_532_, v___y_533_, v___y_534_);
return v___x_541_;
}
else
{
lean_object* v___x_542_; lean_object* v___x_543_; 
lean_dec(v_a_539_);
v___x_542_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__1, &l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__1);
v___x_543_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1___redArg(v___x_542_, v___y_531_, v___y_532_, v___y_533_, v___y_534_);
return v___x_543_;
}
}
else
{
lean_object* v_a_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_551_; 
v_a_544_ = lean_ctor_get(v___x_538_, 0);
v_isSharedCheck_551_ = !lean_is_exclusive(v___x_538_);
if (v_isSharedCheck_551_ == 0)
{
v___x_546_ = v___x_538_;
v_isShared_547_ = v_isSharedCheck_551_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_a_544_);
lean_dec(v___x_538_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_551_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_549_; 
if (v_isShared_547_ == 0)
{
v___x_549_ = v___x_546_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v_a_544_);
v___x_549_ = v_reuseFailAlloc_550_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
return v___x_549_;
}
}
}
}
else
{
lean_object* v_a_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_559_; 
v_a_552_ = lean_ctor_get(v___x_535_, 0);
v_isSharedCheck_559_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_559_ == 0)
{
v___x_554_ = v___x_535_;
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_a_552_);
lean_dec(v___x_535_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___boxed(lean_object* v___x_575_, lean_object* v_stx_576_, lean_object* v___x_577_, lean_object* v___x_578_, lean_object* v___x_579_, lean_object* v___x_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_){
_start:
{
uint8_t v___x_6933__boxed_590_; lean_object* v_res_591_; 
v___x_6933__boxed_590_ = lean_unbox(v___x_575_);
v_res_591_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0(v___x_6933__boxed_590_, v_stx_576_, v___x_577_, v___x_578_, v___x_579_, v___x_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_);
lean_dec(v___y_588_);
lean_dec_ref(v___y_587_);
lean_dec(v___y_586_);
lean_dec_ref(v___y_585_);
lean_dec(v___y_584_);
lean_dec_ref(v___y_583_);
lean_dec(v___y_582_);
lean_dec_ref(v___y_581_);
lean_dec(v_stx_576_);
return v_res_591_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted(lean_object* v_stx_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_, lean_object* v_a_606_, lean_object* v_a_607_, lean_object* v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_){
_start:
{
lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; uint8_t v___x_617_; lean_object* v___x_618_; lean_object* v___y_619_; lean_object* v___x_620_; 
v___x_612_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0));
v___x_613_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1));
v___x_614_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1));
v___x_615_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2));
v___x_616_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__4));
lean_inc(v_stx_602_);
v___x_617_ = l_Lean_Syntax_isOfKind(v_stx_602_, v___x_616_);
v___x_618_ = lean_box(v___x_617_);
v___y_619_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___boxed), 15, 6);
lean_closure_set(v___y_619_, 0, v___x_618_);
lean_closure_set(v___y_619_, 1, v_stx_602_);
lean_closure_set(v___y_619_, 2, v___x_612_);
lean_closure_set(v___y_619_, 3, v___x_613_);
lean_closure_set(v___y_619_, 4, v___x_614_);
lean_closure_set(v___y_619_, 5, v___x_615_);
v___x_620_ = l_Lean_Elab_Tactic_Grind_withMainContext___redArg(v___y_619_, v_a_603_, v_a_604_, v_a_605_, v_a_606_, v_a_607_, v_a_608_, v_a_609_, v_a_610_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___boxed(lean_object* v_stx_621_, lean_object* v_a_622_, lean_object* v_a_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_, lean_object* v_a_628_, lean_object* v_a_629_, lean_object* v_a_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted(v_stx_621_, v_a_622_, v_a_623_, v_a_624_, v_a_625_, v_a_626_, v_a_627_, v_a_628_, v_a_629_);
lean_dec(v_a_629_);
lean_dec_ref(v_a_628_);
lean_dec(v_a_627_);
lean_dec_ref(v_a_626_);
lean_dec(v_a_625_);
lean_dec_ref(v_a_624_);
lean_dec(v_a_623_);
lean_dec_ref(v_a_622_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1(lean_object* v_00_u03b1_632_, lean_object* v_msg_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_){
_start:
{
lean_object* v___x_643_; 
v___x_643_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1___redArg(v_msg_633_, v___y_638_, v___y_639_, v___y_640_, v___y_641_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1___boxed(lean_object* v_00_u03b1_644_, lean_object* v_msg_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_){
_start:
{
lean_object* v_res_655_; 
v_res_655_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1(v_00_u03b1_644_, v_msg_645_, v___y_646_, v___y_647_, v___y_648_, v___y_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_);
lean_dec(v___y_653_);
lean_dec_ref(v___y_652_);
lean_dec(v___y_651_);
lean_dec_ref(v___y_650_);
lean_dec(v___y_649_);
lean_dec_ref(v___y_648_);
lean_dec(v___y_647_);
lean_dec_ref(v___y_646_);
return v_res_655_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2(lean_object* v_ref_656_, lean_object* v_msgData_657_, uint8_t v_severity_658_, uint8_t v_isSilent_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_){
_start:
{
lean_object* v___x_669_; 
v___x_669_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg(v_ref_656_, v_msgData_657_, v_severity_658_, v_isSilent_659_, v___y_664_, v___y_665_, v___y_666_, v___y_667_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___boxed(lean_object* v_ref_670_, lean_object* v_msgData_671_, lean_object* v_severity_672_, lean_object* v_isSilent_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_){
_start:
{
uint8_t v_severity_boxed_683_; uint8_t v_isSilent_boxed_684_; lean_object* v_res_685_; 
v_severity_boxed_683_ = lean_unbox(v_severity_672_);
v_isSilent_boxed_684_ = lean_unbox(v_isSilent_673_);
v_res_685_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2(v_ref_670_, v_msgData_671_, v_severity_boxed_683_, v_isSilent_boxed_684_, v___y_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_, v___y_680_, v___y_681_);
lean_dec(v___y_681_);
lean_dec_ref(v___y_680_);
lean_dec(v___y_679_);
lean_dec_ref(v___y_678_);
lean_dec(v___y_677_);
lean_dec_ref(v___y_676_);
lean_dec(v___y_675_);
lean_dec_ref(v___y_674_);
lean_dec(v_ref_670_);
return v_res_685_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1(){
_start:
{
lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; 
v___x_726_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_727_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__4));
v___x_728_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__14));
v___x_729_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___boxed), 10, 0);
v___x_730_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_726_, v___x_727_, v___x_728_, v___x_729_);
return v___x_730_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___boxed(lean_object* v_a_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1();
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f_spec__0___redArg(lean_object* v_filter_733_, lean_object* v_as_734_, size_t v_i_735_, size_t v_stop_736_, lean_object* v_b_737_, lean_object* v___y_738_, lean_object* v___y_739_){
_start:
{
lean_object* v_a_742_; uint8_t v___x_746_; 
v___x_746_ = lean_usize_dec_eq(v_i_735_, v_stop_736_);
if (v___x_746_ == 0)
{
lean_object* v___x_747_; lean_object* v___x_748_; 
v___x_747_ = lean_array_uget_borrowed(v_as_734_, v_i_735_);
lean_inc(v_filter_733_);
lean_inc(v___x_747_);
v___x_748_ = l___private_Lean_Meta_Tactic_Grind_Filter_0__Lean_Meta_Grind_Filter_eval_go___redArg(v___x_747_, v_filter_733_, v___y_738_, v___y_739_);
if (lean_obj_tag(v___x_748_) == 0)
{
lean_object* v_a_749_; uint8_t v___x_750_; 
v_a_749_ = lean_ctor_get(v___x_748_, 0);
lean_inc(v_a_749_);
lean_dec_ref_known(v___x_748_, 1);
v___x_750_ = lean_unbox(v_a_749_);
lean_dec(v_a_749_);
if (v___x_750_ == 0)
{
v_a_742_ = v_b_737_;
goto v___jp_741_;
}
else
{
uint8_t v___x_751_; 
v___x_751_ = l_Lean_Expr_isTrue(v___x_747_);
if (v___x_751_ == 0)
{
uint8_t v___x_752_; 
v___x_752_ = l_Lean_Expr_isFalse(v___x_747_);
if (v___x_752_ == 0)
{
lean_object* v___x_753_; 
lean_inc(v___x_747_);
v___x_753_ = lean_array_push(v_b_737_, v___x_747_);
v_a_742_ = v___x_753_;
goto v___jp_741_;
}
else
{
v_a_742_ = v_b_737_;
goto v___jp_741_;
}
}
else
{
v_a_742_ = v_b_737_;
goto v___jp_741_;
}
}
}
else
{
lean_object* v_a_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_761_; 
lean_dec_ref(v_b_737_);
lean_dec(v_filter_733_);
v_a_754_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_761_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_761_ == 0)
{
v___x_756_ = v___x_748_;
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_a_754_);
lean_dec(v___x_748_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_759_; 
if (v_isShared_757_ == 0)
{
v___x_759_ = v___x_756_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v_a_754_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
}
}
else
{
lean_object* v___x_762_; 
lean_dec(v_filter_733_);
v___x_762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_762_, 0, v_b_737_);
return v___x_762_;
}
v___jp_741_:
{
size_t v___x_743_; size_t v___x_744_; 
v___x_743_ = ((size_t)1ULL);
v___x_744_ = lean_usize_add(v_i_735_, v___x_743_);
v_i_735_ = v___x_744_;
v_b_737_ = v_a_742_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f_spec__0___redArg___boxed(lean_object* v_filter_763_, lean_object* v_as_764_, lean_object* v_i_765_, lean_object* v_stop_766_, lean_object* v_b_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_){
_start:
{
size_t v_i_boxed_771_; size_t v_stop_boxed_772_; lean_object* v_res_773_; 
v_i_boxed_771_ = lean_unbox_usize(v_i_765_);
lean_dec(v_i_765_);
v_stop_boxed_772_ = lean_unbox_usize(v_stop_766_);
lean_dec(v_stop_766_);
v_res_773_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f_spec__0___redArg(v_filter_763_, v_as_764_, v_i_boxed_771_, v_stop_boxed_772_, v_b_767_, v___y_768_, v___y_769_);
lean_dec(v___y_769_);
lean_dec(v___y_768_);
lean_dec_ref(v_as_764_);
return v_res_773_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___lam__0(lean_object* v_filter_774_, lean_object* v_____do__lift_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_){
_start:
{
uint8_t v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; uint8_t v___x_794_; 
v___x_787_ = 0;
v___x_788_ = lean_st_ref_get(v___y_776_);
v___x_789_ = l_Lean_Meta_Grind_Goal_getEqc(v___x_788_, v_____do__lift_775_, v___x_787_);
lean_dec(v___x_788_);
v___x_790_ = lean_array_mk(v___x_789_);
v___x_791_ = lean_unsigned_to_nat(0u);
v___x_792_ = lean_array_get_size(v___x_790_);
v___x_793_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___lam__0___closed__0));
v___x_794_ = lean_nat_dec_lt(v___x_791_, v___x_792_);
if (v___x_794_ == 0)
{
lean_object* v___x_795_; 
lean_dec_ref(v___x_790_);
lean_dec(v_filter_774_);
v___x_795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_795_, 0, v___x_793_);
return v___x_795_;
}
else
{
size_t v___x_796_; size_t v___x_797_; lean_object* v___x_798_; 
v___x_796_ = ((size_t)0ULL);
v___x_797_ = lean_usize_of_nat(v___x_792_);
v___x_798_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f_spec__0___redArg(v_filter_774_, v___x_790_, v___x_796_, v___x_797_, v___x_793_, v___y_776_, v___y_783_);
lean_dec_ref(v___x_790_);
return v___x_798_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___lam__0___boxed(lean_object* v_filter_799_, lean_object* v_____do__lift_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
lean_object* v_res_812_; 
v_res_812_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___lam__0(v_filter_799_, v_____do__lift_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_, v___y_805_, v___y_806_, v___y_807_, v___y_808_, v___y_809_, v___y_810_);
lean_dec(v___y_810_);
lean_dec_ref(v___y_809_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
lean_dec(v___y_806_);
lean_dec_ref(v___y_805_);
lean_dec(v___y_804_);
lean_dec_ref(v___y_803_);
lean_dec(v___y_802_);
lean_dec(v___y_801_);
return v_res_812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___lam__1(uint8_t v_isTrue_813_, lean_object* v___f_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_){
_start:
{
if (v_isTrue_813_ == 0)
{
lean_object* v___x_826_; 
v___x_826_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v___y_819_);
if (lean_obj_tag(v___x_826_) == 0)
{
lean_object* v_a_827_; lean_object* v___x_828_; 
v_a_827_ = lean_ctor_get(v___x_826_, 0);
lean_inc(v_a_827_);
lean_dec_ref_known(v___x_826_, 1);
lean_inc(v___y_824_);
lean_inc_ref(v___y_823_);
lean_inc(v___y_822_);
lean_inc_ref(v___y_821_);
lean_inc(v___y_820_);
lean_inc_ref(v___y_819_);
lean_inc(v___y_818_);
lean_inc_ref(v___y_817_);
lean_inc(v___y_816_);
lean_inc(v___y_815_);
v___x_828_ = lean_apply_12(v___f_814_, v_a_827_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_, lean_box(0));
return v___x_828_;
}
else
{
lean_object* v_a_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_836_; 
lean_dec_ref(v___f_814_);
v_a_829_ = lean_ctor_get(v___x_826_, 0);
v_isSharedCheck_836_ = !lean_is_exclusive(v___x_826_);
if (v_isSharedCheck_836_ == 0)
{
v___x_831_ = v___x_826_;
v_isShared_832_ = v_isSharedCheck_836_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_a_829_);
lean_dec(v___x_826_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_836_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
lean_object* v___x_834_; 
if (v_isShared_832_ == 0)
{
v___x_834_ = v___x_831_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v_a_829_);
v___x_834_ = v_reuseFailAlloc_835_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
return v___x_834_;
}
}
}
}
else
{
lean_object* v___x_837_; 
v___x_837_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v___y_819_);
if (lean_obj_tag(v___x_837_) == 0)
{
lean_object* v_a_838_; lean_object* v___x_839_; 
v_a_838_ = lean_ctor_get(v___x_837_, 0);
lean_inc(v_a_838_);
lean_dec_ref_known(v___x_837_, 1);
lean_inc(v___y_824_);
lean_inc_ref(v___y_823_);
lean_inc(v___y_822_);
lean_inc_ref(v___y_821_);
lean_inc(v___y_820_);
lean_inc_ref(v___y_819_);
lean_inc(v___y_818_);
lean_inc_ref(v___y_817_);
lean_inc(v___y_816_);
lean_inc(v___y_815_);
v___x_839_ = lean_apply_12(v___f_814_, v_a_838_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_, lean_box(0));
return v___x_839_;
}
else
{
lean_object* v_a_840_; lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_847_; 
lean_dec_ref(v___f_814_);
v_a_840_ = lean_ctor_get(v___x_837_, 0);
v_isSharedCheck_847_ = !lean_is_exclusive(v___x_837_);
if (v_isSharedCheck_847_ == 0)
{
v___x_842_ = v___x_837_;
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
else
{
lean_inc(v_a_840_);
lean_dec(v___x_837_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___x_845_; 
if (v_isShared_843_ == 0)
{
v___x_845_ = v___x_842_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v_a_840_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
return v___x_845_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___lam__1___boxed(lean_object* v_isTrue_848_, lean_object* v___f_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_){
_start:
{
uint8_t v_isTrue_boxed_861_; lean_object* v_res_862_; 
v_isTrue_boxed_861_ = lean_unbox(v_isTrue_848_);
v_res_862_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___lam__1(v_isTrue_boxed_861_, v___f_849_, v___y_850_, v___y_851_, v___y_852_, v___y_853_, v___y_854_, v___y_855_, v___y_856_, v___y_857_, v___y_858_, v___y_859_);
lean_dec(v___y_859_);
lean_dec_ref(v___y_858_);
lean_dec(v___y_857_);
lean_dec_ref(v___y_856_);
lean_dec(v___y_855_);
lean_dec_ref(v___y_854_);
lean_dec(v___y_853_);
lean_dec_ref(v___y_852_);
lean_dec(v___y_851_);
lean_dec(v___y_850_);
return v_res_862_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg(lean_object* v_filter_869_, uint8_t v_isTrue_870_, uint8_t v_collapsed_871_, lean_object* v_a_872_, lean_object* v_a_873_, lean_object* v_a_874_, lean_object* v_a_875_, lean_object* v_a_876_, lean_object* v_a_877_){
_start:
{
lean_object* v___f_879_; lean_object* v___x_880_; lean_object* v___y_881_; lean_object* v___x_882_; 
v___f_879_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___lam__0___boxed), 13, 1);
lean_closure_set(v___f_879_, 0, v_filter_869_);
v___x_880_ = lean_box(v_isTrue_870_);
v___y_881_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___lam__1___boxed), 13, 2);
lean_closure_set(v___y_881_, 0, v___x_880_);
lean_closure_set(v___y_881_, 1, v___f_879_);
v___x_882_ = l_Lean_Elab_Tactic_Grind_liftGoalM___redArg(v___y_881_, v_a_872_, v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_);
if (lean_obj_tag(v___x_882_) == 0)
{
lean_object* v_a_883_; lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_907_; 
v_a_883_ = lean_ctor_get(v___x_882_, 0);
v_isSharedCheck_907_ = !lean_is_exclusive(v___x_882_);
if (v_isSharedCheck_907_ == 0)
{
v___x_885_ = v___x_882_;
v_isShared_886_ = v_isSharedCheck_907_;
goto v_resetjp_884_;
}
else
{
lean_inc(v_a_883_);
lean_dec(v___x_882_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_907_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v___x_887_; lean_object* v___x_888_; uint8_t v___x_889_; 
v___x_887_ = lean_array_get_size(v_a_883_);
v___x_888_ = lean_unsigned_to_nat(0u);
v___x_889_ = lean_nat_dec_eq(v___x_887_, v___x_888_);
if (v___x_889_ == 0)
{
lean_object* v___x_890_; lean_object* v___y_892_; 
v___x_890_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___closed__1));
if (v_isTrue_870_ == 0)
{
lean_object* v___x_901_; 
v___x_901_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___closed__3));
v___y_892_ = v___x_901_;
goto v___jp_891_;
}
else
{
lean_object* v___x_902_; 
v___x_902_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___closed__4));
v___y_892_ = v___x_902_;
goto v___jp_891_;
}
v___jp_891_:
{
lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_899_; 
v___x_893_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___closed__2));
lean_inc_ref(v___y_892_);
v___x_894_ = lean_string_append(v___y_892_, v___x_893_);
v___x_895_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg___closed__4));
v___x_896_ = l_Lean_Meta_Grind_ppExprArray(v___x_890_, v___x_894_, v_a_883_, v___x_895_, v_collapsed_871_);
v___x_897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_897_, 0, v___x_896_);
if (v_isShared_886_ == 0)
{
lean_ctor_set(v___x_885_, 0, v___x_897_);
v___x_899_ = v___x_885_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v___x_897_);
v___x_899_ = v_reuseFailAlloc_900_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
return v___x_899_;
}
}
}
else
{
lean_object* v___x_903_; lean_object* v___x_905_; 
lean_dec(v_a_883_);
v___x_903_ = lean_box(0);
if (v_isShared_886_ == 0)
{
lean_ctor_set(v___x_885_, 0, v___x_903_);
v___x_905_ = v___x_885_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v___x_903_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
return v___x_905_;
}
}
}
}
else
{
lean_object* v_a_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_915_; 
v_a_908_ = lean_ctor_get(v___x_882_, 0);
v_isSharedCheck_915_ = !lean_is_exclusive(v___x_882_);
if (v_isSharedCheck_915_ == 0)
{
v___x_910_ = v___x_882_;
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_a_908_);
lean_dec(v___x_882_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v___x_913_; 
if (v_isShared_911_ == 0)
{
v___x_913_ = v___x_910_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v_a_908_);
v___x_913_ = v_reuseFailAlloc_914_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
return v___x_913_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___boxed(lean_object* v_filter_916_, lean_object* v_isTrue_917_, lean_object* v_collapsed_918_, lean_object* v_a_919_, lean_object* v_a_920_, lean_object* v_a_921_, lean_object* v_a_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_){
_start:
{
uint8_t v_isTrue_boxed_926_; uint8_t v_collapsed_boxed_927_; lean_object* v_res_928_; 
v_isTrue_boxed_926_ = lean_unbox(v_isTrue_917_);
v_collapsed_boxed_927_ = lean_unbox(v_collapsed_918_);
v_res_928_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg(v_filter_916_, v_isTrue_boxed_926_, v_collapsed_boxed_927_, v_a_919_, v_a_920_, v_a_921_, v_a_922_, v_a_923_, v_a_924_);
lean_dec(v_a_924_);
lean_dec_ref(v_a_923_);
lean_dec(v_a_922_);
lean_dec_ref(v_a_921_);
lean_dec(v_a_920_);
lean_dec_ref(v_a_919_);
return v_res_928_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f(lean_object* v_filter_929_, uint8_t v_isTrue_930_, uint8_t v_collapsed_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_){
_start:
{
lean_object* v___x_941_; 
v___x_941_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg(v_filter_929_, v_isTrue_930_, v_collapsed_931_, v_a_932_, v_a_933_, v_a_936_, v_a_937_, v_a_938_, v_a_939_);
return v___x_941_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___boxed(lean_object* v_filter_942_, lean_object* v_isTrue_943_, lean_object* v_collapsed_944_, lean_object* v_a_945_, lean_object* v_a_946_, lean_object* v_a_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_){
_start:
{
uint8_t v_isTrue_boxed_954_; uint8_t v_collapsed_boxed_955_; lean_object* v_res_956_; 
v_isTrue_boxed_954_ = lean_unbox(v_isTrue_943_);
v_collapsed_boxed_955_ = lean_unbox(v_collapsed_944_);
v_res_956_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f(v_filter_942_, v_isTrue_boxed_954_, v_collapsed_boxed_955_, v_a_945_, v_a_946_, v_a_947_, v_a_948_, v_a_949_, v_a_950_, v_a_951_, v_a_952_);
lean_dec(v_a_952_);
lean_dec_ref(v_a_951_);
lean_dec(v_a_950_);
lean_dec_ref(v_a_949_);
lean_dec(v_a_948_);
lean_dec_ref(v_a_947_);
lean_dec(v_a_946_);
lean_dec_ref(v_a_945_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f_spec__0(lean_object* v_filter_957_, lean_object* v_as_958_, size_t v_i_959_, size_t v_stop_960_, lean_object* v_b_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_){
_start:
{
lean_object* v___x_973_; 
v___x_973_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f_spec__0___redArg(v_filter_957_, v_as_958_, v_i_959_, v_stop_960_, v_b_961_, v___y_962_, v___y_969_);
return v___x_973_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f_spec__0___boxed(lean_object* v_filter_974_, lean_object* v_as_975_, lean_object* v_i_976_, lean_object* v_stop_977_, lean_object* v_b_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_){
_start:
{
size_t v_i_boxed_990_; size_t v_stop_boxed_991_; lean_object* v_res_992_; 
v_i_boxed_990_ = lean_unbox_usize(v_i_976_);
lean_dec(v_i_976_);
v_stop_boxed_991_ = lean_unbox_usize(v_stop_977_);
lean_dec(v_stop_977_);
v_res_992_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f_spec__0(v_filter_974_, v_as_975_, v_i_boxed_990_, v_stop_boxed_991_, v_b_978_, v___y_979_, v___y_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_);
lean_dec(v___y_988_);
lean_dec_ref(v___y_987_);
lean_dec(v___y_986_);
lean_dec_ref(v___y_985_);
lean_dec(v___y_984_);
lean_dec_ref(v___y_983_);
lean_dec(v___y_982_);
lean_dec_ref(v___y_981_);
lean_dec(v___y_980_);
lean_dec(v___y_979_);
lean_dec_ref(v_as_975_);
return v_res_992_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0(lean_object* v_filter_x3f_996_, uint8_t v_isTrue_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_){
_start:
{
lean_object* v___x_1007_; 
v___x_1007_ = l_Lean_Elab_Tactic_Grind_elabFilter(v_filter_x3f_996_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_, v___y_1004_, v___y_1005_);
if (lean_obj_tag(v___x_1007_) == 0)
{
lean_object* v_a_1008_; uint8_t v___x_1009_; lean_object* v___x_1010_; 
v_a_1008_ = lean_ctor_get(v___x_1007_, 0);
lean_inc(v_a_1008_);
lean_dec_ref_known(v___x_1007_, 1);
v___x_1009_ = 0;
v___x_1010_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg(v_a_1008_, v_isTrue_997_, v___x_1009_, v___y_998_, v___y_999_, v___y_1002_, v___y_1003_, v___y_1004_, v___y_1005_);
if (lean_obj_tag(v___x_1010_) == 0)
{
lean_object* v_a_1011_; 
v_a_1011_ = lean_ctor_get(v___x_1010_, 0);
lean_inc(v_a_1011_);
lean_dec_ref_known(v___x_1010_, 1);
if (lean_obj_tag(v_a_1011_) == 1)
{
lean_object* v_val_1012_; lean_object* v___x_1013_; 
v_val_1012_ = lean_ctor_get(v_a_1011_, 0);
lean_inc(v_val_1012_);
lean_dec_ref_known(v_a_1011_, 1);
v___x_1013_ = l_Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0(v_val_1012_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_, v___y_1004_, v___y_1005_);
return v___x_1013_;
}
else
{
lean_object* v___x_1014_; lean_object* v___y_1016_; 
lean_dec(v_a_1011_);
v___x_1014_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___closed__0));
if (v_isTrue_997_ == 0)
{
lean_object* v___x_1023_; 
v___x_1023_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___closed__1));
v___y_1016_ = v___x_1023_;
goto v___jp_1015_;
}
else
{
lean_object* v___x_1024_; 
v___x_1024_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___closed__2));
v___y_1016_ = v___x_1024_;
goto v___jp_1015_;
}
v___jp_1015_:
{
lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1017_ = lean_string_append(v___x_1014_, v___y_1016_);
v___x_1018_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg___closed__2));
v___x_1019_ = lean_string_append(v___x_1017_, v___x_1018_);
v___x_1020_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1019_);
v___x_1021_ = l_Lean_MessageData_ofFormat(v___x_1020_);
v___x_1022_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1___redArg(v___x_1021_, v___y_1002_, v___y_1003_, v___y_1004_, v___y_1005_);
return v___x_1022_;
}
}
}
else
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1032_; 
v_a_1025_ = lean_ctor_get(v___x_1010_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_1010_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1027_ = v___x_1010_;
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_1010_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1030_; 
if (v_isShared_1028_ == 0)
{
v___x_1030_ = v___x_1027_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v_a_1025_);
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
else
{
lean_object* v_a_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1040_; 
v_a_1033_ = lean_ctor_get(v___x_1007_, 0);
v_isSharedCheck_1040_ = !lean_is_exclusive(v___x_1007_);
if (v_isSharedCheck_1040_ == 0)
{
v___x_1035_ = v___x_1007_;
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_a_1033_);
lean_dec(v___x_1007_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___boxed(lean_object* v_filter_x3f_1041_, lean_object* v_isTrue_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_){
_start:
{
uint8_t v_isTrue_boxed_1052_; lean_object* v_res_1053_; 
v_isTrue_boxed_1052_ = lean_unbox(v_isTrue_1042_);
v_res_1053_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0(v_filter_x3f_1041_, v_isTrue_boxed_1052_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
lean_dec(v___y_1050_);
lean_dec_ref(v___y_1049_);
lean_dec(v___y_1048_);
lean_dec_ref(v___y_1047_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
lean_dec(v___y_1044_);
lean_dec_ref(v___y_1043_);
return v_res_1053_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps(lean_object* v_filter_x3f_1054_, uint8_t v_isTrue_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_){
_start:
{
lean_object* v___x_1065_; lean_object* v___f_1066_; lean_object* v___x_1067_; 
v___x_1065_ = lean_box(v_isTrue_1055_);
v___f_1066_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___boxed), 11, 2);
lean_closure_set(v___f_1066_, 0, v_filter_x3f_1054_);
lean_closure_set(v___f_1066_, 1, v___x_1065_);
v___x_1067_ = l_Lean_Elab_Tactic_Grind_withMainContext___redArg(v___f_1066_, v_a_1056_, v_a_1057_, v_a_1058_, v_a_1059_, v_a_1060_, v_a_1061_, v_a_1062_, v_a_1063_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___boxed(lean_object* v_filter_x3f_1068_, lean_object* v_isTrue_1069_, lean_object* v_a_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_, lean_object* v_a_1078_){
_start:
{
uint8_t v_isTrue_boxed_1079_; lean_object* v_res_1080_; 
v_isTrue_boxed_1079_ = lean_unbox(v_isTrue_1069_);
v_res_1080_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps(v_filter_x3f_1068_, v_isTrue_boxed_1079_, v_a_1070_, v_a_1071_, v_a_1072_, v_a_1073_, v_a_1074_, v_a_1075_, v_a_1076_, v_a_1077_);
lean_dec(v_a_1077_);
lean_dec_ref(v_a_1076_);
lean_dec(v_a_1075_);
lean_dec_ref(v_a_1074_);
lean_dec(v_a_1073_);
lean_dec_ref(v_a_1072_);
lean_dec(v_a_1071_);
lean_dec_ref(v_a_1070_);
return v_res_1080_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue(lean_object* v_stx_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_, lean_object* v_a_1098_, lean_object* v_a_1099_, lean_object* v_a_1100_, lean_object* v_a_1101_, lean_object* v_a_1102_){
_start:
{
lean_object* v___x_1104_; uint8_t v___x_1105_; 
v___x_1104_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__1));
lean_inc(v_stx_1094_);
v___x_1105_ = l_Lean_Syntax_isOfKind(v_stx_1094_, v___x_1104_);
if (v___x_1105_ == 0)
{
lean_object* v___x_1106_; 
lean_dec(v_stx_1094_);
v___x_1106_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_1106_;
}
else
{
lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; uint8_t v___x_1110_; 
v___x_1107_ = lean_unsigned_to_nat(1u);
v___x_1108_ = l_Lean_Syntax_getArg(v_stx_1094_, v___x_1107_);
lean_dec(v_stx_1094_);
v___x_1109_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__2));
lean_inc(v___x_1108_);
v___x_1110_ = l_Lean_Syntax_isOfKind(v___x_1108_, v___x_1109_);
if (v___x_1110_ == 0)
{
lean_object* v___x_1111_; 
lean_dec(v___x_1108_);
v___x_1111_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_1111_;
}
else
{
lean_object* v___x_1112_; lean_object* v___x_1113_; uint8_t v___x_1114_; 
v___x_1112_ = lean_unsigned_to_nat(0u);
v___x_1113_ = l_Lean_Syntax_getArg(v___x_1108_, v___x_1112_);
lean_dec(v___x_1108_);
v___x_1114_ = l_Lean_Syntax_isNone(v___x_1113_);
if (v___x_1114_ == 0)
{
uint8_t v___x_1115_; 
lean_inc(v___x_1113_);
v___x_1115_ = l_Lean_Syntax_matchesNull(v___x_1113_, v___x_1107_);
if (v___x_1115_ == 0)
{
lean_object* v___x_1116_; 
lean_dec(v___x_1113_);
v___x_1116_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_1116_;
}
else
{
lean_object* v_filter_x3f_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; 
v_filter_x3f_1117_ = l_Lean_Syntax_getArg(v___x_1113_, v___x_1112_);
lean_dec(v___x_1113_);
v___x_1118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1118_, 0, v_filter_x3f_1117_);
v___x_1119_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps(v___x_1118_, v___x_1110_, v_a_1095_, v_a_1096_, v_a_1097_, v_a_1098_, v_a_1099_, v_a_1100_, v_a_1101_, v_a_1102_);
return v___x_1119_;
}
}
else
{
lean_object* v___x_1120_; lean_object* v___x_1121_; 
lean_dec(v___x_1113_);
v___x_1120_ = lean_box(0);
v___x_1121_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps(v___x_1120_, v___x_1110_, v_a_1095_, v_a_1096_, v_a_1097_, v_a_1098_, v_a_1099_, v_a_1100_, v_a_1101_, v_a_1102_);
return v___x_1121_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___boxed(lean_object* v_stx_1122_, lean_object* v_a_1123_, lean_object* v_a_1124_, lean_object* v_a_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_, lean_object* v_a_1128_, lean_object* v_a_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_){
_start:
{
lean_object* v_res_1132_; 
v_res_1132_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue(v_stx_1122_, v_a_1123_, v_a_1124_, v_a_1125_, v_a_1126_, v_a_1127_, v_a_1128_, v_a_1129_, v_a_1130_);
lean_dec(v_a_1130_);
lean_dec_ref(v_a_1129_);
lean_dec(v_a_1128_);
lean_dec_ref(v_a_1127_);
lean_dec(v_a_1126_);
lean_dec_ref(v_a_1125_);
lean_dec(v_a_1124_);
lean_dec_ref(v_a_1123_);
return v_res_1132_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1(){
_start:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1138_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_1139_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__1));
v___x_1140_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1___closed__1));
v___x_1141_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___boxed), 10, 0);
v___x_1142_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1138_, v___x_1139_, v___x_1140_, v___x_1141_);
return v___x_1142_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1___boxed(lean_object* v_a_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1();
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse(lean_object* v_stx_1152_, lean_object* v_a_1153_, lean_object* v_a_1154_, lean_object* v_a_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_){
_start:
{
lean_object* v_filter_x3f_1163_; lean_object* v___y_1164_; lean_object* v___y_1165_; lean_object* v___y_1166_; lean_object* v___y_1167_; lean_object* v___y_1168_; lean_object* v___y_1169_; lean_object* v___y_1170_; lean_object* v___y_1171_; lean_object* v___x_1174_; uint8_t v___x_1175_; 
v___x_1174_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__1));
lean_inc(v_stx_1152_);
v___x_1175_ = l_Lean_Syntax_isOfKind(v_stx_1152_, v___x_1174_);
if (v___x_1175_ == 0)
{
lean_object* v___x_1176_; 
lean_dec(v_stx_1152_);
v___x_1176_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_1176_;
}
else
{
lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; uint8_t v___x_1180_; 
v___x_1177_ = lean_unsigned_to_nat(1u);
v___x_1178_ = l_Lean_Syntax_getArg(v_stx_1152_, v___x_1177_);
lean_dec(v_stx_1152_);
v___x_1179_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__2));
lean_inc(v___x_1178_);
v___x_1180_ = l_Lean_Syntax_isOfKind(v___x_1178_, v___x_1179_);
if (v___x_1180_ == 0)
{
lean_object* v___x_1181_; 
lean_dec(v___x_1178_);
v___x_1181_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_1181_;
}
else
{
lean_object* v___x_1182_; lean_object* v___x_1183_; uint8_t v___x_1184_; 
v___x_1182_ = lean_unsigned_to_nat(0u);
v___x_1183_ = l_Lean_Syntax_getArg(v___x_1178_, v___x_1182_);
lean_dec(v___x_1178_);
v___x_1184_ = l_Lean_Syntax_isNone(v___x_1183_);
if (v___x_1184_ == 0)
{
uint8_t v___x_1185_; 
lean_inc(v___x_1183_);
v___x_1185_ = l_Lean_Syntax_matchesNull(v___x_1183_, v___x_1177_);
if (v___x_1185_ == 0)
{
lean_object* v___x_1186_; 
lean_dec(v___x_1183_);
v___x_1186_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_1186_;
}
else
{
lean_object* v_filter_x3f_1187_; lean_object* v___x_1188_; 
v_filter_x3f_1187_ = l_Lean_Syntax_getArg(v___x_1183_, v___x_1182_);
lean_dec(v___x_1183_);
v___x_1188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1188_, 0, v_filter_x3f_1187_);
v_filter_x3f_1163_ = v___x_1188_;
v___y_1164_ = v_a_1153_;
v___y_1165_ = v_a_1154_;
v___y_1166_ = v_a_1155_;
v___y_1167_ = v_a_1156_;
v___y_1168_ = v_a_1157_;
v___y_1169_ = v_a_1158_;
v___y_1170_ = v_a_1159_;
v___y_1171_ = v_a_1160_;
goto v___jp_1162_;
}
}
else
{
lean_object* v___x_1189_; 
lean_dec(v___x_1183_);
v___x_1189_ = lean_box(0);
v_filter_x3f_1163_ = v___x_1189_;
v___y_1164_ = v_a_1153_;
v___y_1165_ = v_a_1154_;
v___y_1166_ = v_a_1155_;
v___y_1167_ = v_a_1156_;
v___y_1168_ = v_a_1157_;
v___y_1169_ = v_a_1158_;
v___y_1170_ = v_a_1159_;
v___y_1171_ = v_a_1160_;
goto v___jp_1162_;
}
}
}
v___jp_1162_:
{
uint8_t v___x_1172_; lean_object* v___x_1173_; 
v___x_1172_ = 0;
v___x_1173_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps(v_filter_x3f_1163_, v___x_1172_, v___y_1164_, v___y_1165_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_);
return v___x_1173_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___boxed(lean_object* v_stx_1190_, lean_object* v_a_1191_, lean_object* v_a_1192_, lean_object* v_a_1193_, lean_object* v_a_1194_, lean_object* v_a_1195_, lean_object* v_a_1196_, lean_object* v_a_1197_, lean_object* v_a_1198_, lean_object* v_a_1199_){
_start:
{
lean_object* v_res_1200_; 
v_res_1200_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse(v_stx_1190_, v_a_1191_, v_a_1192_, v_a_1193_, v_a_1194_, v_a_1195_, v_a_1196_, v_a_1197_, v_a_1198_);
lean_dec(v_a_1198_);
lean_dec_ref(v_a_1197_);
lean_dec(v_a_1196_);
lean_dec_ref(v_a_1195_);
lean_dec(v_a_1194_);
lean_dec_ref(v_a_1193_);
lean_dec(v_a_1192_);
lean_dec_ref(v_a_1191_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1(){
_start:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; 
v___x_1206_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_1207_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__1));
v___x_1208_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1___closed__1));
v___x_1209_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___boxed), 10, 0);
v___x_1210_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1206_, v___x_1207_, v___x_1208_, v___x_1209_);
return v___x_1210_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1___boxed(lean_object* v_a_1211_){
_start:
{
lean_object* v_res_1212_; 
v_res_1212_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1();
return v_res_1212_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__3___redArg(uint8_t v_a_1213_, uint8_t v_a_1214_, lean_object* v_x_1215_, lean_object* v_x_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_){
_start:
{
if (lean_obj_tag(v_x_1215_) == 0)
{
lean_object* v___x_1222_; 
v___x_1222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1222_, 0, v_x_1216_);
return v___x_1222_;
}
else
{
lean_object* v_head_1223_; lean_object* v_tail_1224_; lean_object* v___x_1226_; uint8_t v_isShared_1227_; uint8_t v_isSharedCheck_1246_; 
v_head_1223_ = lean_ctor_get(v_x_1215_, 0);
v_tail_1224_ = lean_ctor_get(v_x_1215_, 1);
v_isSharedCheck_1246_ = !lean_is_exclusive(v_x_1215_);
if (v_isSharedCheck_1246_ == 0)
{
v___x_1226_ = v_x_1215_;
v_isShared_1227_ = v_isSharedCheck_1246_;
goto v_resetjp_1225_;
}
else
{
lean_inc(v_tail_1224_);
lean_inc(v_head_1223_);
lean_dec(v_x_1215_);
v___x_1226_ = lean_box(0);
v_isShared_1227_ = v_isSharedCheck_1246_;
goto v_resetjp_1225_;
}
v_resetjp_1225_:
{
uint8_t v_a_1229_; lean_object* v___x_1235_; 
lean_inc(v_head_1223_);
v___x_1235_ = l_Lean_Meta_Grind_isSupportApp(v_head_1223_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_);
if (lean_obj_tag(v___x_1235_) == 0)
{
lean_object* v_a_1236_; uint8_t v___x_1237_; 
v_a_1236_ = lean_ctor_get(v___x_1235_, 0);
lean_inc(v_a_1236_);
lean_dec_ref_known(v___x_1235_, 1);
v___x_1237_ = lean_unbox(v_a_1236_);
lean_dec(v_a_1236_);
if (v___x_1237_ == 0)
{
v_a_1229_ = v_a_1213_;
goto v___jp_1228_;
}
else
{
v_a_1229_ = v_a_1214_;
goto v___jp_1228_;
}
}
else
{
lean_object* v_a_1238_; lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1245_; 
lean_del_object(v___x_1226_);
lean_dec(v_tail_1224_);
lean_dec(v_head_1223_);
lean_dec(v_x_1216_);
v_a_1238_ = lean_ctor_get(v___x_1235_, 0);
v_isSharedCheck_1245_ = !lean_is_exclusive(v___x_1235_);
if (v_isSharedCheck_1245_ == 0)
{
v___x_1240_ = v___x_1235_;
v_isShared_1241_ = v_isSharedCheck_1245_;
goto v_resetjp_1239_;
}
else
{
lean_inc(v_a_1238_);
lean_dec(v___x_1235_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1245_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v___x_1243_; 
if (v_isShared_1241_ == 0)
{
v___x_1243_ = v___x_1240_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1244_; 
v_reuseFailAlloc_1244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1244_, 0, v_a_1238_);
v___x_1243_ = v_reuseFailAlloc_1244_;
goto v_reusejp_1242_;
}
v_reusejp_1242_:
{
return v___x_1243_;
}
}
}
v___jp_1228_:
{
if (v_a_1229_ == 0)
{
lean_del_object(v___x_1226_);
lean_dec(v_head_1223_);
v_x_1215_ = v_tail_1224_;
goto _start;
}
else
{
lean_object* v___x_1232_; 
if (v_isShared_1227_ == 0)
{
lean_ctor_set(v___x_1226_, 1, v_x_1216_);
v___x_1232_ = v___x_1226_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v_head_1223_);
lean_ctor_set(v_reuseFailAlloc_1234_, 1, v_x_1216_);
v___x_1232_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
v_x_1215_ = v_tail_1224_;
v_x_1216_ = v___x_1232_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__3___redArg___boxed(lean_object* v_a_1247_, lean_object* v_a_1248_, lean_object* v_x_1249_, lean_object* v_x_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_){
_start:
{
uint8_t v_a_26039__boxed_1256_; uint8_t v_a_26040__boxed_1257_; lean_object* v_res_1258_; 
v_a_26039__boxed_1256_ = lean_unbox(v_a_1247_);
v_a_26040__boxed_1257_ = lean_unbox(v_a_1248_);
v_res_1258_ = l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__3___redArg(v_a_26039__boxed_1256_, v_a_26040__boxed_1257_, v_x_1249_, v_x_1250_, v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_);
lean_dec(v___y_1254_);
lean_dec_ref(v___y_1253_);
lean_dec(v___y_1252_);
lean_dec_ref(v___y_1251_);
return v_res_1258_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__1(lean_object* v_x_1259_){
_start:
{
if (lean_obj_tag(v_x_1259_) == 0)
{
lean_object* v___x_1260_; 
v___x_1260_ = lean_box(0);
return v___x_1260_;
}
else
{
lean_object* v_head_1261_; lean_object* v_tail_1262_; uint8_t v___x_1263_; 
v_head_1261_ = lean_ctor_get(v_x_1259_, 0);
v_tail_1262_ = lean_ctor_get(v_x_1259_, 1);
v___x_1263_ = l_Lean_Expr_isFalse(v_head_1261_);
if (v___x_1263_ == 0)
{
v_x_1259_ = v_tail_1262_;
goto _start;
}
else
{
lean_object* v___x_1265_; 
lean_inc(v_head_1261_);
v___x_1265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1265_, 0, v_head_1261_);
return v___x_1265_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__1___boxed(lean_object* v_x_1266_){
_start:
{
lean_object* v_res_1267_; 
v_res_1267_ = l_List_find_x3f___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__1(v_x_1266_);
lean_dec(v_x_1266_);
return v_res_1267_;
}
}
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__2___redArg(lean_object* v_filter_1268_, lean_object* v_x_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_){
_start:
{
if (lean_obj_tag(v_x_1269_) == 0)
{
uint8_t v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; 
lean_dec(v_filter_1268_);
v___x_1273_ = 0;
v___x_1274_ = lean_box(v___x_1273_);
v___x_1275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1274_);
return v___x_1275_;
}
else
{
lean_object* v_head_1276_; lean_object* v_tail_1277_; lean_object* v___x_1278_; 
v_head_1276_ = lean_ctor_get(v_x_1269_, 0);
lean_inc(v_head_1276_);
v_tail_1277_ = lean_ctor_get(v_x_1269_, 1);
lean_inc(v_tail_1277_);
lean_dec_ref_known(v_x_1269_, 2);
lean_inc(v_filter_1268_);
v___x_1278_ = l___private_Lean_Meta_Tactic_Grind_Filter_0__Lean_Meta_Grind_Filter_eval_go___redArg(v_head_1276_, v_filter_1268_, v___y_1270_, v___y_1271_);
if (lean_obj_tag(v___x_1278_) == 0)
{
lean_object* v_a_1279_; uint8_t v___x_1280_; 
v_a_1279_ = lean_ctor_get(v___x_1278_, 0);
v___x_1280_ = lean_unbox(v_a_1279_);
if (v___x_1280_ == 0)
{
lean_dec_ref_known(v___x_1278_, 1);
v_x_1269_ = v_tail_1277_;
goto _start;
}
else
{
lean_dec(v_tail_1277_);
lean_dec(v_filter_1268_);
return v___x_1278_;
}
}
else
{
lean_dec(v_tail_1277_);
lean_dec(v_filter_1268_);
return v___x_1278_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__2___redArg___boxed(lean_object* v_filter_1282_, lean_object* v_x_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_){
_start:
{
lean_object* v_res_1287_; 
v_res_1287_ = l_List_anyM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__2___redArg(v_filter_1282_, v_x_1283_, v___y_1284_, v___y_1285_);
lean_dec(v___y_1285_);
lean_dec(v___y_1284_);
return v_res_1287_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__4___redArg(lean_object* v_x_1288_, lean_object* v_x_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_){
_start:
{
if (lean_obj_tag(v_x_1288_) == 0)
{
lean_object* v___x_1295_; 
v___x_1295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1295_, 0, v_x_1289_);
return v___x_1295_;
}
else
{
lean_object* v_head_1296_; lean_object* v_tail_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1317_; 
v_head_1296_ = lean_ctor_get(v_x_1288_, 0);
v_tail_1297_ = lean_ctor_get(v_x_1288_, 1);
v_isSharedCheck_1317_ = !lean_is_exclusive(v_x_1288_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1299_ = v_x_1288_;
v_isShared_1300_ = v_isSharedCheck_1317_;
goto v_resetjp_1298_;
}
else
{
lean_inc(v_tail_1297_);
lean_inc(v_head_1296_);
lean_dec(v_x_1288_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1317_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
lean_object* v___x_1301_; 
lean_inc(v_head_1296_);
v___x_1301_ = l_Lean_Meta_Grind_isSupportApp(v_head_1296_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_);
if (lean_obj_tag(v___x_1301_) == 0)
{
lean_object* v_a_1302_; uint8_t v___x_1303_; 
v_a_1302_ = lean_ctor_get(v___x_1301_, 0);
lean_inc(v_a_1302_);
lean_dec_ref_known(v___x_1301_, 1);
v___x_1303_ = lean_unbox(v_a_1302_);
lean_dec(v_a_1302_);
if (v___x_1303_ == 0)
{
lean_del_object(v___x_1299_);
lean_dec(v_head_1296_);
v_x_1288_ = v_tail_1297_;
goto _start;
}
else
{
lean_object* v___x_1306_; 
if (v_isShared_1300_ == 0)
{
lean_ctor_set(v___x_1299_, 1, v_x_1289_);
v___x_1306_ = v___x_1299_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v_head_1296_);
lean_ctor_set(v_reuseFailAlloc_1308_, 1, v_x_1289_);
v___x_1306_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
v_x_1288_ = v_tail_1297_;
v_x_1289_ = v___x_1306_;
goto _start;
}
}
}
else
{
lean_object* v_a_1309_; lean_object* v___x_1311_; uint8_t v_isShared_1312_; uint8_t v_isSharedCheck_1316_; 
lean_del_object(v___x_1299_);
lean_dec(v_tail_1297_);
lean_dec(v_head_1296_);
lean_dec(v_x_1289_);
v_a_1309_ = lean_ctor_get(v___x_1301_, 0);
v_isSharedCheck_1316_ = !lean_is_exclusive(v___x_1301_);
if (v_isSharedCheck_1316_ == 0)
{
v___x_1311_ = v___x_1301_;
v_isShared_1312_ = v_isSharedCheck_1316_;
goto v_resetjp_1310_;
}
else
{
lean_inc(v_a_1309_);
lean_dec(v___x_1301_);
v___x_1311_ = lean_box(0);
v_isShared_1312_ = v_isSharedCheck_1316_;
goto v_resetjp_1310_;
}
v_resetjp_1310_:
{
lean_object* v___x_1314_; 
if (v_isShared_1312_ == 0)
{
v___x_1314_ = v___x_1311_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v_a_1309_);
v___x_1314_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
return v___x_1314_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__4___redArg___boxed(lean_object* v_x_1318_, lean_object* v_x_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_){
_start:
{
lean_object* v_res_1325_; 
v_res_1325_ = l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__4___redArg(v_x_1318_, v_x_1319_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_);
lean_dec(v___y_1323_);
lean_dec_ref(v___y_1322_);
lean_dec(v___y_1321_);
lean_dec_ref(v___y_1320_);
return v_res_1325_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__0(lean_object* v_x_1326_){
_start:
{
if (lean_obj_tag(v_x_1326_) == 0)
{
lean_object* v___x_1327_; 
v___x_1327_ = lean_box(0);
return v___x_1327_;
}
else
{
lean_object* v_head_1328_; lean_object* v_tail_1329_; uint8_t v___x_1330_; 
v_head_1328_ = lean_ctor_get(v_x_1326_, 0);
v_tail_1329_ = lean_ctor_get(v_x_1326_, 1);
v___x_1330_ = l_Lean_Expr_isTrue(v_head_1328_);
if (v___x_1330_ == 0)
{
v_x_1326_ = v_tail_1329_;
goto _start;
}
else
{
lean_object* v___x_1332_; 
lean_inc(v_head_1328_);
v___x_1332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1332_, 0, v_head_1328_);
return v___x_1332_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__0___boxed(lean_object* v_x_1333_){
_start:
{
lean_object* v_res_1334_; 
v_res_1334_ = l_List_find_x3f___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__0(v_x_1333_);
lean_dec(v_x_1333_);
return v_res_1334_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg(lean_object* v_filter_1337_, lean_object* v_as_x27_1338_, lean_object* v_b_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_){
_start:
{
if (lean_obj_tag(v_as_x27_1338_) == 0)
{
lean_object* v___x_1351_; 
lean_dec(v_filter_1337_);
v___x_1351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1351_, 0, v_b_1339_);
return v___x_1351_;
}
else
{
lean_object* v_head_1352_; lean_object* v_tail_1353_; lean_object* v_fst_1354_; lean_object* v_snd_1355_; lean_object* v___x_1357_; uint8_t v_isShared_1358_; uint8_t v_isSharedCheck_1438_; 
v_head_1352_ = lean_ctor_get(v_as_x27_1338_, 0);
v_tail_1353_ = lean_ctor_get(v_as_x27_1338_, 1);
v_fst_1354_ = lean_ctor_get(v_b_1339_, 0);
v_snd_1355_ = lean_ctor_get(v_b_1339_, 1);
v_isSharedCheck_1438_ = !lean_is_exclusive(v_b_1339_);
if (v_isSharedCheck_1438_ == 0)
{
v___x_1357_ = v_b_1339_;
v_isShared_1358_ = v_isSharedCheck_1438_;
goto v_resetjp_1356_;
}
else
{
lean_inc(v_snd_1355_);
lean_inc(v_fst_1354_);
lean_dec(v_b_1339_);
v___x_1357_ = lean_box(0);
v_isShared_1358_ = v_isSharedCheck_1438_;
goto v_resetjp_1356_;
}
v_resetjp_1356_:
{
lean_object* v___x_1367_; 
v___x_1367_ = l_List_find_x3f___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__0(v_head_1352_);
if (lean_obj_tag(v___x_1367_) == 0)
{
lean_object* v___x_1368_; 
v___x_1368_ = l_List_find_x3f___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__1(v_head_1352_);
if (lean_obj_tag(v___x_1368_) == 0)
{
if (lean_obj_tag(v_head_1352_) == 1)
{
lean_object* v_tail_1369_; 
v_tail_1369_ = lean_ctor_get(v_head_1352_, 1);
if (lean_obj_tag(v_tail_1369_) == 1)
{
lean_object* v_head_1370_; lean_object* v_regularEqcs_1371_; lean_object* v___x_1372_; 
lean_del_object(v___x_1357_);
v_head_1370_ = lean_ctor_get(v_head_1352_, 0);
v_regularEqcs_1371_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg___closed__0));
lean_inc(v_head_1370_);
v___x_1372_ = l_Lean_Meta_isProof(v_head_1370_, v___y_1346_, v___y_1347_, v___y_1348_, v___y_1349_);
if (lean_obj_tag(v___x_1372_) == 0)
{
lean_object* v_a_1373_; uint8_t v___x_1374_; 
v_a_1373_ = lean_ctor_get(v___x_1372_, 0);
lean_inc(v_a_1373_);
lean_dec_ref_known(v___x_1372_, 1);
v___x_1374_ = lean_unbox(v_a_1373_);
if (v___x_1374_ == 0)
{
lean_object* v___x_1375_; 
lean_inc_ref(v_head_1352_);
lean_inc(v_filter_1337_);
v___x_1375_ = l_List_anyM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__2___redArg(v_filter_1337_, v_head_1352_, v___y_1340_, v___y_1347_);
if (lean_obj_tag(v___x_1375_) == 0)
{
lean_object* v_a_1376_; uint8_t v___x_1377_; 
v_a_1376_ = lean_ctor_get(v___x_1375_, 0);
lean_inc(v_a_1376_);
lean_dec_ref_known(v___x_1375_, 1);
v___x_1377_ = lean_unbox(v_a_1376_);
if (v___x_1377_ == 0)
{
lean_dec(v_a_1376_);
lean_dec(v_a_1373_);
goto v___jp_1364_;
}
else
{
lean_object* v___x_1378_; uint8_t v___x_1379_; uint8_t v___x_1380_; lean_object* v___x_1381_; 
v___x_1378_ = lean_box(0);
v___x_1379_ = lean_unbox(v_a_1376_);
lean_dec(v_a_1376_);
v___x_1380_ = lean_unbox(v_a_1373_);
lean_dec(v_a_1373_);
lean_inc_ref(v_head_1352_);
v___x_1381_ = l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__3___redArg(v___x_1379_, v___x_1380_, v_head_1352_, v___x_1378_, v___y_1346_, v___y_1347_, v___y_1348_, v___y_1349_);
if (lean_obj_tag(v___x_1381_) == 0)
{
lean_object* v_a_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; uint8_t v___x_1386_; 
v_a_1382_ = lean_ctor_get(v___x_1381_, 0);
lean_inc(v_a_1382_);
lean_dec_ref_known(v___x_1381_, 1);
v___x_1383_ = l_List_reverse___redArg(v_a_1382_);
v___x_1384_ = l_List_lengthTR___redArg(v___x_1383_);
v___x_1385_ = lean_unsigned_to_nat(1u);
v___x_1386_ = lean_nat_dec_le(v___x_1384_, v___x_1385_);
lean_dec(v___x_1384_);
if (v___x_1386_ == 0)
{
lean_object* v___x_1387_; 
lean_inc_ref(v_head_1352_);
v___x_1387_ = l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__4___redArg(v_head_1352_, v___x_1378_, v___y_1346_, v___y_1347_, v___y_1348_, v___y_1349_);
if (lean_obj_tag(v___x_1387_) == 0)
{
lean_object* v_a_1388_; lean_object* v___x_1389_; uint8_t v___x_1390_; 
v_a_1388_ = lean_ctor_get(v___x_1387_, 0);
lean_inc(v_a_1388_);
lean_dec_ref_known(v___x_1387_, 1);
v___x_1389_ = l_List_reverse___redArg(v_a_1388_);
v___x_1390_ = l_List_isEmpty___redArg(v___x_1389_);
if (v___x_1390_ == 0)
{
lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; 
v___x_1391_ = l_Lean_Meta_Grind_ppEqc(v___x_1389_, v_regularEqcs_1371_);
v___x_1392_ = lean_mk_empty_array_with_capacity(v___x_1385_);
v___x_1393_ = lean_array_push(v___x_1392_, v___x_1391_);
v___x_1394_ = l_Lean_Meta_Grind_ppEqc(v___x_1383_, v___x_1393_);
v___x_1395_ = lean_array_push(v_fst_1354_, v___x_1394_);
v___x_1396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1396_, 0, v___x_1395_);
lean_ctor_set(v___x_1396_, 1, v_snd_1355_);
v_as_x27_1338_ = v_tail_1353_;
v_b_1339_ = v___x_1396_;
goto _start;
}
else
{
lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; 
lean_dec(v___x_1389_);
v___x_1398_ = l_Lean_Meta_Grind_ppEqc(v___x_1383_, v_regularEqcs_1371_);
v___x_1399_ = lean_array_push(v_fst_1354_, v___x_1398_);
v___x_1400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1400_, 0, v___x_1399_);
lean_ctor_set(v___x_1400_, 1, v_snd_1355_);
v_as_x27_1338_ = v_tail_1353_;
v_b_1339_ = v___x_1400_;
goto _start;
}
}
else
{
lean_object* v_a_1402_; lean_object* v___x_1404_; uint8_t v_isShared_1405_; uint8_t v_isSharedCheck_1409_; 
lean_dec(v___x_1383_);
lean_dec(v_snd_1355_);
lean_dec(v_fst_1354_);
lean_dec(v_filter_1337_);
v_a_1402_ = lean_ctor_get(v___x_1387_, 0);
v_isSharedCheck_1409_ = !lean_is_exclusive(v___x_1387_);
if (v_isSharedCheck_1409_ == 0)
{
v___x_1404_ = v___x_1387_;
v_isShared_1405_ = v_isSharedCheck_1409_;
goto v_resetjp_1403_;
}
else
{
lean_inc(v_a_1402_);
lean_dec(v___x_1387_);
v___x_1404_ = lean_box(0);
v_isShared_1405_ = v_isSharedCheck_1409_;
goto v_resetjp_1403_;
}
v_resetjp_1403_:
{
lean_object* v___x_1407_; 
if (v_isShared_1405_ == 0)
{
v___x_1407_ = v___x_1404_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1408_; 
v_reuseFailAlloc_1408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1408_, 0, v_a_1402_);
v___x_1407_ = v_reuseFailAlloc_1408_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
return v___x_1407_;
}
}
}
}
else
{
lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; 
lean_dec(v___x_1383_);
lean_inc_ref(v_head_1352_);
v___x_1410_ = l_Lean_Meta_Grind_ppEqc(v_head_1352_, v_regularEqcs_1371_);
v___x_1411_ = lean_array_push(v_snd_1355_, v___x_1410_);
v___x_1412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1412_, 0, v_fst_1354_);
lean_ctor_set(v___x_1412_, 1, v___x_1411_);
v_as_x27_1338_ = v_tail_1353_;
v_b_1339_ = v___x_1412_;
goto _start;
}
}
else
{
lean_object* v_a_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1421_; 
lean_dec(v_snd_1355_);
lean_dec(v_fst_1354_);
lean_dec(v_filter_1337_);
v_a_1414_ = lean_ctor_get(v___x_1381_, 0);
v_isSharedCheck_1421_ = !lean_is_exclusive(v___x_1381_);
if (v_isSharedCheck_1421_ == 0)
{
v___x_1416_ = v___x_1381_;
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_a_1414_);
lean_dec(v___x_1381_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1421_;
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
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v_a_1414_);
v___x_1419_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
return v___x_1419_;
}
}
}
}
}
else
{
lean_object* v_a_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1429_; 
lean_dec(v_a_1373_);
lean_dec(v_snd_1355_);
lean_dec(v_fst_1354_);
lean_dec(v_filter_1337_);
v_a_1422_ = lean_ctor_get(v___x_1375_, 0);
v_isSharedCheck_1429_ = !lean_is_exclusive(v___x_1375_);
if (v_isSharedCheck_1429_ == 0)
{
v___x_1424_ = v___x_1375_;
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_a_1422_);
lean_dec(v___x_1375_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v___x_1427_; 
if (v_isShared_1425_ == 0)
{
v___x_1427_ = v___x_1424_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v_a_1422_);
v___x_1427_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
return v___x_1427_;
}
}
}
}
else
{
lean_dec(v_a_1373_);
goto v___jp_1364_;
}
}
else
{
lean_object* v_a_1430_; lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1437_; 
lean_dec(v_snd_1355_);
lean_dec(v_fst_1354_);
lean_dec(v_filter_1337_);
v_a_1430_ = lean_ctor_get(v___x_1372_, 0);
v_isSharedCheck_1437_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1437_ == 0)
{
v___x_1432_ = v___x_1372_;
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
else
{
lean_inc(v_a_1430_);
lean_dec(v___x_1372_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1435_; 
if (v_isShared_1433_ == 0)
{
v___x_1435_ = v___x_1432_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v_a_1430_);
v___x_1435_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
return v___x_1435_;
}
}
}
}
else
{
goto v___jp_1359_;
}
}
else
{
goto v___jp_1359_;
}
}
else
{
lean_dec_ref_known(v___x_1368_, 1);
lean_del_object(v___x_1357_);
goto v___jp_1364_;
}
}
else
{
lean_dec_ref_known(v___x_1367_, 1);
lean_del_object(v___x_1357_);
goto v___jp_1364_;
}
v___jp_1359_:
{
lean_object* v___x_1361_; 
if (v_isShared_1358_ == 0)
{
v___x_1361_ = v___x_1357_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v_fst_1354_);
lean_ctor_set(v_reuseFailAlloc_1363_, 1, v_snd_1355_);
v___x_1361_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
v_as_x27_1338_ = v_tail_1353_;
v_b_1339_ = v___x_1361_;
goto _start;
}
}
v___jp_1364_:
{
lean_object* v___x_1365_; 
v___x_1365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1365_, 0, v_fst_1354_);
lean_ctor_set(v___x_1365_, 1, v_snd_1355_);
v_as_x27_1338_ = v_tail_1353_;
v_b_1339_ = v___x_1365_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg___boxed(lean_object* v_filter_1439_, lean_object* v_as_x27_1440_, lean_object* v_b_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_){
_start:
{
lean_object* v_res_1453_; 
v_res_1453_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg(v_filter_1439_, v_as_x27_1440_, v_b_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_, v___y_1451_);
lean_dec(v___y_1451_);
lean_dec_ref(v___y_1450_);
lean_dec(v___y_1449_);
lean_dec_ref(v___y_1448_);
lean_dec(v___y_1447_);
lean_dec_ref(v___y_1446_);
lean_dec(v___y_1445_);
lean_dec_ref(v___y_1444_);
lean_dec(v___y_1443_);
lean_dec(v___y_1442_);
lean_dec(v_as_x27_1440_);
return v_res_1453_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__4(void){
_start:
{
lean_object* v___x_1460_; lean_object* v___x_1461_; 
v___x_1460_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__3));
v___x_1461_ = l_Lean_MessageData_ofFormat(v___x_1460_);
return v___x_1461_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__7(void){
_start:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; 
v___x_1465_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__6));
v___x_1466_ = l_Lean_MessageData_ofFormat(v___x_1465_);
return v___x_1466_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0(lean_object* v___x_1467_, uint8_t v_collapsed_1468_, lean_object* v_regularEqcs_1469_, lean_object* v_filter_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_){
_start:
{
lean_object* v_regularEqcs_1483_; lean_object* v___x_1497_; uint8_t v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; 
v___x_1497_ = lean_st_ref_get(v___y_1471_);
v___x_1498_ = 1;
v___x_1499_ = l_Lean_Meta_Grind_Goal_getEqcs(v___x_1497_, v___x_1498_);
lean_dec(v___x_1497_);
lean_inc_ref(v_regularEqcs_1469_);
v___x_1500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1500_, 0, v_regularEqcs_1469_);
lean_ctor_set(v___x_1500_, 1, v_regularEqcs_1469_);
v___x_1501_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg(v_filter_1470_, v___x_1499_, v___x_1500_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_, v___y_1480_);
lean_dec(v___x_1499_);
if (lean_obj_tag(v___x_1501_) == 0)
{
lean_object* v_a_1502_; lean_object* v_fst_1503_; lean_object* v_snd_1504_; lean_object* v___x_1505_; uint8_t v___x_1506_; 
v_a_1502_ = lean_ctor_get(v___x_1501_, 0);
lean_inc(v_a_1502_);
lean_dec_ref_known(v___x_1501_, 1);
v_fst_1503_ = lean_ctor_get(v_a_1502_, 0);
lean_inc(v_fst_1503_);
v_snd_1504_ = lean_ctor_get(v_a_1502_, 1);
lean_inc(v_snd_1504_);
lean_dec(v_a_1502_);
v___x_1505_ = lean_array_get_size(v_snd_1504_);
v___x_1506_ = lean_nat_dec_eq(v___x_1505_, v___x_1467_);
if (v___x_1506_ == 0)
{
lean_object* v___x_1507_; lean_object* v___x_1508_; double v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; 
v___x_1507_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__1));
v___x_1508_ = lean_box(0);
lean_inc(v___x_1467_);
v___x_1509_ = lean_float_of_nat(v___x_1467_);
v___x_1510_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_1511_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1511_, 0, v___x_1507_);
lean_ctor_set(v___x_1511_, 1, v___x_1508_);
lean_ctor_set(v___x_1511_, 2, v___x_1510_);
lean_ctor_set_float(v___x_1511_, sizeof(void*)*3, v___x_1509_);
lean_ctor_set_float(v___x_1511_, sizeof(void*)*3 + 8, v___x_1509_);
lean_ctor_set_uint8(v___x_1511_, sizeof(void*)*3 + 16, v___x_1498_);
v___x_1512_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__7, &l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__7_once, _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__7);
v___x_1513_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1513_, 0, v___x_1511_);
lean_ctor_set(v___x_1513_, 1, v___x_1512_);
lean_ctor_set(v___x_1513_, 2, v_snd_1504_);
v___x_1514_ = lean_array_push(v_fst_1503_, v___x_1513_);
v_regularEqcs_1483_ = v___x_1514_;
goto v___jp_1482_;
}
else
{
lean_dec(v_snd_1504_);
v_regularEqcs_1483_ = v_fst_1503_;
goto v___jp_1482_;
}
}
else
{
lean_object* v_a_1515_; lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1522_; 
lean_dec(v___x_1467_);
v_a_1515_ = lean_ctor_get(v___x_1501_, 0);
v_isSharedCheck_1522_ = !lean_is_exclusive(v___x_1501_);
if (v_isSharedCheck_1522_ == 0)
{
v___x_1517_ = v___x_1501_;
v_isShared_1518_ = v_isSharedCheck_1522_;
goto v_resetjp_1516_;
}
else
{
lean_inc(v_a_1515_);
lean_dec(v___x_1501_);
v___x_1517_ = lean_box(0);
v_isShared_1518_ = v_isSharedCheck_1522_;
goto v_resetjp_1516_;
}
v_resetjp_1516_:
{
lean_object* v___x_1520_; 
if (v_isShared_1518_ == 0)
{
v___x_1520_ = v___x_1517_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v_a_1515_);
v___x_1520_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
return v___x_1520_;
}
}
}
v___jp_1482_:
{
lean_object* v___x_1484_; uint8_t v___x_1485_; 
v___x_1484_ = lean_array_get_size(v_regularEqcs_1483_);
v___x_1485_ = lean_nat_dec_eq(v___x_1484_, v___x_1467_);
if (v___x_1485_ == 0)
{
lean_object* v___x_1486_; lean_object* v___x_1487_; double v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1486_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__1));
v___x_1487_ = lean_box(0);
v___x_1488_ = lean_float_of_nat(v___x_1467_);
v___x_1489_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_1490_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1490_, 0, v___x_1486_);
lean_ctor_set(v___x_1490_, 1, v___x_1487_);
lean_ctor_set(v___x_1490_, 2, v___x_1489_);
lean_ctor_set_float(v___x_1490_, sizeof(void*)*3, v___x_1488_);
lean_ctor_set_float(v___x_1490_, sizeof(void*)*3 + 8, v___x_1488_);
lean_ctor_set_uint8(v___x_1490_, sizeof(void*)*3 + 16, v_collapsed_1468_);
v___x_1491_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__4, &l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__4_once, _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___closed__4);
v___x_1492_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1492_, 0, v___x_1490_);
lean_ctor_set(v___x_1492_, 1, v___x_1491_);
lean_ctor_set(v___x_1492_, 2, v_regularEqcs_1483_);
v___x_1493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1493_, 0, v___x_1492_);
v___x_1494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1494_, 0, v___x_1493_);
return v___x_1494_;
}
else
{
lean_object* v___x_1495_; lean_object* v___x_1496_; 
lean_dec_ref(v_regularEqcs_1483_);
lean_dec(v___x_1467_);
v___x_1495_ = lean_box(0);
v___x_1496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1496_, 0, v___x_1495_);
return v___x_1496_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___boxed(lean_object* v___x_1523_, lean_object* v_collapsed_1524_, lean_object* v_regularEqcs_1525_, lean_object* v_filter_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_){
_start:
{
uint8_t v_collapsed_boxed_1538_; lean_object* v_res_1539_; 
v_collapsed_boxed_1538_ = lean_unbox(v_collapsed_1524_);
v_res_1539_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0(v___x_1523_, v_collapsed_boxed_1538_, v_regularEqcs_1525_, v_filter_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_, v___y_1536_);
lean_dec(v___y_1536_);
lean_dec_ref(v___y_1535_);
lean_dec(v___y_1534_);
lean_dec_ref(v___y_1533_);
lean_dec(v___y_1532_);
lean_dec_ref(v___y_1531_);
lean_dec(v___y_1530_);
lean_dec_ref(v___y_1529_);
lean_dec(v___y_1528_);
lean_dec(v___y_1527_);
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg(lean_object* v_filter_1540_, uint8_t v_collapsed_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_, lean_object* v_a_1547_){
_start:
{
lean_object* v___x_1549_; lean_object* v_regularEqcs_1550_; lean_object* v___x_1551_; lean_object* v___f_1552_; lean_object* v___x_1553_; 
v___x_1549_ = lean_unsigned_to_nat(0u);
v_regularEqcs_1550_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg___closed__0));
v___x_1551_ = lean_box(v_collapsed_1541_);
v___f_1552_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___lam__0___boxed), 15, 4);
lean_closure_set(v___f_1552_, 0, v___x_1549_);
lean_closure_set(v___f_1552_, 1, v___x_1551_);
lean_closure_set(v___f_1552_, 2, v_regularEqcs_1550_);
lean_closure_set(v___f_1552_, 3, v_filter_1540_);
v___x_1553_ = l_Lean_Elab_Tactic_Grind_liftGoalM___redArg(v___f_1552_, v_a_1542_, v_a_1543_, v_a_1544_, v_a_1545_, v_a_1546_, v_a_1547_);
return v___x_1553_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg___boxed(lean_object* v_filter_1554_, lean_object* v_collapsed_1555_, lean_object* v_a_1556_, lean_object* v_a_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_, lean_object* v_a_1561_, lean_object* v_a_1562_){
_start:
{
uint8_t v_collapsed_boxed_1563_; lean_object* v_res_1564_; 
v_collapsed_boxed_1563_ = lean_unbox(v_collapsed_1555_);
v_res_1564_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg(v_filter_1554_, v_collapsed_boxed_1563_, v_a_1556_, v_a_1557_, v_a_1558_, v_a_1559_, v_a_1560_, v_a_1561_);
lean_dec(v_a_1561_);
lean_dec_ref(v_a_1560_);
lean_dec(v_a_1559_);
lean_dec_ref(v_a_1558_);
lean_dec(v_a_1557_);
lean_dec_ref(v_a_1556_);
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f(lean_object* v_filter_1565_, uint8_t v_collapsed_1566_, lean_object* v_a_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_, lean_object* v_a_1573_, lean_object* v_a_1574_){
_start:
{
lean_object* v___x_1576_; 
v___x_1576_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg(v_filter_1565_, v_collapsed_1566_, v_a_1567_, v_a_1568_, v_a_1571_, v_a_1572_, v_a_1573_, v_a_1574_);
return v___x_1576_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___boxed(lean_object* v_filter_1577_, lean_object* v_collapsed_1578_, lean_object* v_a_1579_, lean_object* v_a_1580_, lean_object* v_a_1581_, lean_object* v_a_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_){
_start:
{
uint8_t v_collapsed_boxed_1588_; lean_object* v_res_1589_; 
v_collapsed_boxed_1588_ = lean_unbox(v_collapsed_1578_);
v_res_1589_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f(v_filter_1577_, v_collapsed_boxed_1588_, v_a_1579_, v_a_1580_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_, v_a_1585_, v_a_1586_);
lean_dec(v_a_1586_);
lean_dec_ref(v_a_1585_);
lean_dec(v_a_1584_);
lean_dec_ref(v_a_1583_);
lean_dec(v_a_1582_);
lean_dec_ref(v_a_1581_);
lean_dec(v_a_1580_);
lean_dec_ref(v_a_1579_);
return v_res_1589_;
}
}
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__2(lean_object* v_filter_1590_, lean_object* v_x_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_){
_start:
{
lean_object* v___x_1603_; 
v___x_1603_ = l_List_anyM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__2___redArg(v_filter_1590_, v_x_1591_, v___y_1592_, v___y_1599_);
return v___x_1603_;
}
}
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__2___boxed(lean_object* v_filter_1604_, lean_object* v_x_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_){
_start:
{
lean_object* v_res_1617_; 
v_res_1617_ = l_List_anyM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__2(v_filter_1604_, v_x_1605_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_);
lean_dec(v___y_1615_);
lean_dec_ref(v___y_1614_);
lean_dec(v___y_1613_);
lean_dec_ref(v___y_1612_);
lean_dec(v___y_1611_);
lean_dec_ref(v___y_1610_);
lean_dec(v___y_1609_);
lean_dec_ref(v___y_1608_);
lean_dec(v___y_1607_);
lean_dec(v___y_1606_);
return v_res_1617_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__3(uint8_t v_a_1618_, uint8_t v_a_1619_, lean_object* v_x_1620_, lean_object* v_x_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_){
_start:
{
lean_object* v___x_1633_; 
v___x_1633_ = l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__3___redArg(v_a_1618_, v_a_1619_, v_x_1620_, v_x_1621_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_);
return v___x_1633_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__3___boxed(lean_object* v_a_1634_, lean_object* v_a_1635_, lean_object* v_x_1636_, lean_object* v_x_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_){
_start:
{
uint8_t v_a_26665__boxed_1649_; uint8_t v_a_26666__boxed_1650_; lean_object* v_res_1651_; 
v_a_26665__boxed_1649_ = lean_unbox(v_a_1634_);
v_a_26666__boxed_1650_ = lean_unbox(v_a_1635_);
v_res_1651_ = l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__3(v_a_26665__boxed_1649_, v_a_26666__boxed_1650_, v_x_1636_, v_x_1637_, v___y_1638_, v___y_1639_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_);
lean_dec(v___y_1647_);
lean_dec_ref(v___y_1646_);
lean_dec(v___y_1645_);
lean_dec_ref(v___y_1644_);
lean_dec(v___y_1643_);
lean_dec_ref(v___y_1642_);
lean_dec(v___y_1641_);
lean_dec_ref(v___y_1640_);
lean_dec(v___y_1639_);
lean_dec(v___y_1638_);
return v_res_1651_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__4(lean_object* v_x_1652_, lean_object* v_x_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_){
_start:
{
lean_object* v___x_1665_; 
v___x_1665_ = l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__4___redArg(v_x_1652_, v_x_1653_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_);
return v___x_1665_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__4___boxed(lean_object* v_x_1666_, lean_object* v_x_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_){
_start:
{
lean_object* v_res_1679_; 
v_res_1679_ = l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__4(v_x_1666_, v_x_1667_, v___y_1668_, v___y_1669_, v___y_1670_, v___y_1671_, v___y_1672_, v___y_1673_, v___y_1674_, v___y_1675_, v___y_1676_, v___y_1677_);
lean_dec(v___y_1677_);
lean_dec_ref(v___y_1676_);
lean_dec(v___y_1675_);
lean_dec_ref(v___y_1674_);
lean_dec(v___y_1673_);
lean_dec_ref(v___y_1672_);
lean_dec(v___y_1671_);
lean_dec_ref(v___y_1670_);
lean_dec(v___y_1669_);
lean_dec(v___y_1668_);
return v_res_1679_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5(lean_object* v_filter_1680_, lean_object* v_as_1681_, lean_object* v_as_x27_1682_, lean_object* v_b_1683_, lean_object* v_a_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_){
_start:
{
lean_object* v___x_1696_; 
v___x_1696_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg(v_filter_1680_, v_as_x27_1682_, v_b_1683_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_);
return v___x_1696_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___boxed(lean_object* v_filter_1697_, lean_object* v_as_1698_, lean_object* v_as_x27_1699_, lean_object* v_b_1700_, lean_object* v_a_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_){
_start:
{
lean_object* v_res_1713_; 
v_res_1713_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5(v_filter_1697_, v_as_1698_, v_as_x27_1699_, v_b_1700_, v_a_1701_, v___y_1702_, v___y_1703_, v___y_1704_, v___y_1705_, v___y_1706_, v___y_1707_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_);
lean_dec(v___y_1711_);
lean_dec_ref(v___y_1710_);
lean_dec(v___y_1709_);
lean_dec_ref(v___y_1708_);
lean_dec(v___y_1707_);
lean_dec_ref(v___y_1706_);
lean_dec(v___y_1705_);
lean_dec_ref(v___y_1704_);
lean_dec(v___y_1703_);
lean_dec(v___y_1702_);
lean_dec(v_as_x27_1699_);
lean_dec(v_as_1698_);
return v_res_1713_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1715_; lean_object* v___x_1716_; 
v___x_1715_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0___closed__0));
v___x_1716_ = l_Lean_stringToMessageData(v___x_1715_);
return v___x_1716_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0(uint8_t v___x_1717_, lean_object* v_stx_1718_, lean_object* v___x_1719_, lean_object* v___x_1720_, lean_object* v___x_1721_, lean_object* v___x_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_){
_start:
{
lean_object* v_filter_x3f_1733_; lean_object* v___y_1734_; lean_object* v___y_1735_; lean_object* v___y_1736_; lean_object* v___y_1737_; lean_object* v___y_1738_; lean_object* v___y_1739_; lean_object* v___y_1740_; lean_object* v___y_1741_; 
if (v___x_1717_ == 0)
{
lean_object* v___x_1767_; 
lean_dec_ref(v___x_1722_);
lean_dec_ref(v___x_1721_);
lean_dec_ref(v___x_1720_);
lean_dec_ref(v___x_1719_);
v___x_1767_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_1767_;
}
else
{
lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; uint8_t v___x_1772_; 
v___x_1768_ = lean_unsigned_to_nat(1u);
v___x_1769_ = l_Lean_Syntax_getArg(v_stx_1718_, v___x_1768_);
v___x_1770_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__2));
v___x_1771_ = l_Lean_Name_mkStr5(v___x_1719_, v___x_1720_, v___x_1721_, v___x_1722_, v___x_1770_);
lean_inc(v___x_1769_);
v___x_1772_ = l_Lean_Syntax_isOfKind(v___x_1769_, v___x_1771_);
lean_dec(v___x_1771_);
if (v___x_1772_ == 0)
{
lean_object* v___x_1773_; 
lean_dec(v___x_1769_);
v___x_1773_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_1773_;
}
else
{
lean_object* v___x_1774_; lean_object* v___x_1775_; uint8_t v___x_1776_; 
v___x_1774_ = lean_unsigned_to_nat(0u);
v___x_1775_ = l_Lean_Syntax_getArg(v___x_1769_, v___x_1774_);
lean_dec(v___x_1769_);
v___x_1776_ = l_Lean_Syntax_isNone(v___x_1775_);
if (v___x_1776_ == 0)
{
uint8_t v___x_1777_; 
lean_inc(v___x_1775_);
v___x_1777_ = l_Lean_Syntax_matchesNull(v___x_1775_, v___x_1768_);
if (v___x_1777_ == 0)
{
lean_object* v___x_1778_; 
lean_dec(v___x_1775_);
v___x_1778_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_1778_;
}
else
{
lean_object* v_filter_x3f_1779_; lean_object* v___x_1780_; 
v_filter_x3f_1779_ = l_Lean_Syntax_getArg(v___x_1775_, v___x_1774_);
lean_dec(v___x_1775_);
v___x_1780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1780_, 0, v_filter_x3f_1779_);
v_filter_x3f_1733_ = v___x_1780_;
v___y_1734_ = v___y_1723_;
v___y_1735_ = v___y_1724_;
v___y_1736_ = v___y_1725_;
v___y_1737_ = v___y_1726_;
v___y_1738_ = v___y_1727_;
v___y_1739_ = v___y_1728_;
v___y_1740_ = v___y_1729_;
v___y_1741_ = v___y_1730_;
goto v___jp_1732_;
}
}
else
{
lean_object* v___x_1781_; 
lean_dec(v___x_1775_);
v___x_1781_ = lean_box(0);
v_filter_x3f_1733_ = v___x_1781_;
v___y_1734_ = v___y_1723_;
v___y_1735_ = v___y_1724_;
v___y_1736_ = v___y_1725_;
v___y_1737_ = v___y_1726_;
v___y_1738_ = v___y_1727_;
v___y_1739_ = v___y_1728_;
v___y_1740_ = v___y_1729_;
v___y_1741_ = v___y_1730_;
goto v___jp_1732_;
}
}
}
v___jp_1732_:
{
lean_object* v___x_1742_; 
v___x_1742_ = l_Lean_Elab_Tactic_Grind_elabFilter(v_filter_x3f_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_);
if (lean_obj_tag(v___x_1742_) == 0)
{
lean_object* v_a_1743_; uint8_t v___x_1744_; lean_object* v___x_1745_; 
v_a_1743_ = lean_ctor_get(v___x_1742_, 0);
lean_inc(v_a_1743_);
lean_dec_ref_known(v___x_1742_, 1);
v___x_1744_ = 0;
v___x_1745_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg(v_a_1743_, v___x_1744_, v___y_1734_, v___y_1735_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_);
if (lean_obj_tag(v___x_1745_) == 0)
{
lean_object* v_a_1746_; 
v_a_1746_ = lean_ctor_get(v___x_1745_, 0);
lean_inc(v_a_1746_);
lean_dec_ref_known(v___x_1745_, 1);
if (lean_obj_tag(v_a_1746_) == 1)
{
lean_object* v_val_1747_; lean_object* v___x_1748_; 
v_val_1747_ = lean_ctor_get(v_a_1746_, 0);
lean_inc(v_val_1747_);
lean_dec_ref_known(v_a_1746_, 1);
v___x_1748_ = l_Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0(v_val_1747_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_);
return v___x_1748_;
}
else
{
lean_object* v___x_1749_; lean_object* v___x_1750_; 
lean_dec(v_a_1746_);
v___x_1749_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0___closed__1, &l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0___closed__1);
v___x_1750_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1___redArg(v___x_1749_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_);
return v___x_1750_;
}
}
else
{
lean_object* v_a_1751_; lean_object* v___x_1753_; uint8_t v_isShared_1754_; uint8_t v_isSharedCheck_1758_; 
v_a_1751_ = lean_ctor_get(v___x_1745_, 0);
v_isSharedCheck_1758_ = !lean_is_exclusive(v___x_1745_);
if (v_isSharedCheck_1758_ == 0)
{
v___x_1753_ = v___x_1745_;
v_isShared_1754_ = v_isSharedCheck_1758_;
goto v_resetjp_1752_;
}
else
{
lean_inc(v_a_1751_);
lean_dec(v___x_1745_);
v___x_1753_ = lean_box(0);
v_isShared_1754_ = v_isSharedCheck_1758_;
goto v_resetjp_1752_;
}
v_resetjp_1752_:
{
lean_object* v___x_1756_; 
if (v_isShared_1754_ == 0)
{
v___x_1756_ = v___x_1753_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1757_; 
v_reuseFailAlloc_1757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1757_, 0, v_a_1751_);
v___x_1756_ = v_reuseFailAlloc_1757_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
return v___x_1756_;
}
}
}
}
else
{
lean_object* v_a_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1766_; 
v_a_1759_ = lean_ctor_get(v___x_1742_, 0);
v_isSharedCheck_1766_ = !lean_is_exclusive(v___x_1742_);
if (v_isSharedCheck_1766_ == 0)
{
v___x_1761_ = v___x_1742_;
v_isShared_1762_ = v_isSharedCheck_1766_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_a_1759_);
lean_dec(v___x_1742_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1766_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
lean_object* v___x_1764_; 
if (v_isShared_1762_ == 0)
{
v___x_1764_ = v___x_1761_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v_a_1759_);
v___x_1764_ = v_reuseFailAlloc_1765_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
return v___x_1764_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0___boxed(lean_object* v___x_1782_, lean_object* v_stx_1783_, lean_object* v___x_1784_, lean_object* v___x_1785_, lean_object* v___x_1786_, lean_object* v___x_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_){
_start:
{
uint8_t v___x_860__boxed_1797_; lean_object* v_res_1798_; 
v___x_860__boxed_1797_ = lean_unbox(v___x_1782_);
v_res_1798_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0(v___x_860__boxed_1797_, v_stx_1783_, v___x_1784_, v___x_1785_, v___x_1786_, v___x_1787_, v___y_1788_, v___y_1789_, v___y_1790_, v___y_1791_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_);
lean_dec(v___y_1795_);
lean_dec_ref(v___y_1794_);
lean_dec(v___y_1793_);
lean_dec_ref(v___y_1792_);
lean_dec(v___y_1791_);
lean_dec_ref(v___y_1790_);
lean_dec(v___y_1789_);
lean_dec_ref(v___y_1788_);
lean_dec(v_stx_1783_);
return v_res_1798_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs(lean_object* v_stx_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_, lean_object* v_a_1809_, lean_object* v_a_1810_, lean_object* v_a_1811_, lean_object* v_a_1812_, lean_object* v_a_1813_, lean_object* v_a_1814_){
_start:
{
lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; uint8_t v___x_1821_; lean_object* v___x_1822_; lean_object* v___y_1823_; lean_object* v___x_1824_; 
v___x_1816_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0));
v___x_1817_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1));
v___x_1818_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1));
v___x_1819_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2));
v___x_1820_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__1));
lean_inc(v_stx_1806_);
v___x_1821_ = l_Lean_Syntax_isOfKind(v_stx_1806_, v___x_1820_);
v___x_1822_ = lean_box(v___x_1821_);
v___y_1823_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0___boxed), 15, 6);
lean_closure_set(v___y_1823_, 0, v___x_1822_);
lean_closure_set(v___y_1823_, 1, v_stx_1806_);
lean_closure_set(v___y_1823_, 2, v___x_1816_);
lean_closure_set(v___y_1823_, 3, v___x_1817_);
lean_closure_set(v___y_1823_, 4, v___x_1818_);
lean_closure_set(v___y_1823_, 5, v___x_1819_);
v___x_1824_ = l_Lean_Elab_Tactic_Grind_withMainContext___redArg(v___y_1823_, v_a_1807_, v_a_1808_, v_a_1809_, v_a_1810_, v_a_1811_, v_a_1812_, v_a_1813_, v_a_1814_);
return v___x_1824_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___boxed(lean_object* v_stx_1825_, lean_object* v_a_1826_, lean_object* v_a_1827_, lean_object* v_a_1828_, lean_object* v_a_1829_, lean_object* v_a_1830_, lean_object* v_a_1831_, lean_object* v_a_1832_, lean_object* v_a_1833_, lean_object* v_a_1834_){
_start:
{
lean_object* v_res_1835_; 
v_res_1835_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs(v_stx_1825_, v_a_1826_, v_a_1827_, v_a_1828_, v_a_1829_, v_a_1830_, v_a_1831_, v_a_1832_, v_a_1833_);
lean_dec(v_a_1833_);
lean_dec_ref(v_a_1832_);
lean_dec(v_a_1831_);
lean_dec_ref(v_a_1830_);
lean_dec(v_a_1829_);
lean_dec_ref(v_a_1828_);
lean_dec(v_a_1827_);
lean_dec_ref(v_a_1826_);
return v_res_1835_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1(){
_start:
{
lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; 
v___x_1841_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_1842_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__1));
v___x_1843_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1___closed__1));
v___x_1844_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___boxed), 10, 0);
v___x_1845_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1841_, v___x_1842_, v___x_1843_, v___x_1844_);
return v___x_1845_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1___boxed(lean_object* v_a_1846_){
_start:
{
lean_object* v_res_1847_; 
v_res_1847_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1();
return v_res_1847_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_pushIfSome(lean_object* v_msgs_1848_, lean_object* v_msg_x3f_1849_){
_start:
{
if (lean_obj_tag(v_msg_x3f_1849_) == 1)
{
lean_object* v_val_1850_; lean_object* v___x_1851_; 
v_val_1850_ = lean_ctor_get(v_msg_x3f_1849_, 0);
lean_inc(v_val_1850_);
lean_dec_ref_known(v_msg_x3f_1849_, 1);
v___x_1851_ = lean_array_push(v_msgs_1848_, v_val_1850_);
return v___x_1851_;
}
else
{
lean_dec(v_msg_x3f_1849_);
return v_msgs_1848_;
}
}
}
static double _init_l_Lean_Elab_Tactic_Grind_showState___redArg___closed__2(void){
_start:
{
lean_object* v___x_1855_; double v___x_1856_; 
v___x_1855_ = lean_unsigned_to_nat(0u);
v___x_1856_ = lean_float_of_nat(v___x_1855_);
return v___x_1856_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Grind_showState___redArg___closed__3(void){
_start:
{
lean_object* v___x_1857_; uint8_t v___x_1858_; double v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; 
v___x_1857_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_1858_ = 0;
v___x_1859_ = lean_float_once(&l_Lean_Elab_Tactic_Grind_showState___redArg___closed__2, &l_Lean_Elab_Tactic_Grind_showState___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Grind_showState___redArg___closed__2);
v___x_1860_ = lean_box(0);
v___x_1861_ = ((lean_object*)(l_Lean_Elab_Tactic_Grind_showState___redArg___closed__1));
v___x_1862_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1862_, 0, v___x_1861_);
lean_ctor_set(v___x_1862_, 1, v___x_1860_);
lean_ctor_set(v___x_1862_, 2, v___x_1857_);
lean_ctor_set_float(v___x_1862_, sizeof(void*)*3, v___x_1859_);
lean_ctor_set_float(v___x_1862_, sizeof(void*)*3 + 8, v___x_1859_);
lean_ctor_set_uint8(v___x_1862_, sizeof(void*)*3 + 16, v___x_1858_);
return v___x_1862_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Grind_showState___redArg___closed__6(void){
_start:
{
lean_object* v___x_1866_; lean_object* v___x_1867_; 
v___x_1866_ = ((lean_object*)(l_Lean_Elab_Tactic_Grind_showState___redArg___closed__5));
v___x_1867_ = l_Lean_MessageData_ofFormat(v___x_1866_);
return v___x_1867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_showState___redArg(lean_object* v_filter_1868_, uint8_t v_isSilent_1869_, lean_object* v_a_1870_, lean_object* v_a_1871_, lean_object* v_a_1872_, lean_object* v_a_1873_, lean_object* v_a_1874_, lean_object* v_a_1875_){
_start:
{
lean_object* v_msgs_1877_; uint8_t v___x_1878_; lean_object* v___x_1879_; 
v_msgs_1877_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg___closed__0));
v___x_1878_ = 1;
lean_inc(v_filter_1868_);
v___x_1879_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___redArg(v_filter_1868_, v___x_1878_, v_a_1870_, v_a_1871_, v_a_1872_, v_a_1873_, v_a_1874_, v_a_1875_);
if (lean_obj_tag(v___x_1879_) == 0)
{
lean_object* v_a_1880_; lean_object* v___x_1881_; uint8_t v___x_1882_; lean_object* v___x_1883_; 
v_a_1880_ = lean_ctor_get(v___x_1879_, 0);
lean_inc(v_a_1880_);
lean_dec_ref_known(v___x_1879_, 1);
v___x_1881_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_pushIfSome(v_msgs_1877_, v_a_1880_);
v___x_1882_ = 0;
lean_inc(v_filter_1868_);
v___x_1883_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg(v_filter_1868_, v___x_1878_, v___x_1882_, v_a_1870_, v_a_1871_, v_a_1872_, v_a_1873_, v_a_1874_, v_a_1875_);
if (lean_obj_tag(v___x_1883_) == 0)
{
lean_object* v_a_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; 
v_a_1884_ = lean_ctor_get(v___x_1883_, 0);
lean_inc(v_a_1884_);
lean_dec_ref_known(v___x_1883_, 1);
v___x_1885_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_pushIfSome(v___x_1881_, v_a_1884_);
lean_inc(v_filter_1868_);
v___x_1886_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___redArg(v_filter_1868_, v___x_1882_, v___x_1882_, v_a_1870_, v_a_1871_, v_a_1872_, v_a_1873_, v_a_1874_, v_a_1875_);
if (lean_obj_tag(v___x_1886_) == 0)
{
lean_object* v_a_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; 
v_a_1887_ = lean_ctor_get(v___x_1886_, 0);
lean_inc(v_a_1887_);
lean_dec_ref_known(v___x_1886_, 1);
v___x_1888_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_pushIfSome(v___x_1885_, v_a_1887_);
v___x_1889_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___redArg(v_filter_1868_, v___x_1882_, v_a_1870_, v_a_1871_, v_a_1872_, v_a_1873_, v_a_1874_, v_a_1875_);
if (lean_obj_tag(v___x_1889_) == 0)
{
lean_object* v_a_1890_; lean_object* v_ref_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; uint8_t v___x_1896_; lean_object* v___x_1897_; 
v_a_1890_ = lean_ctor_get(v___x_1889_, 0);
lean_inc(v_a_1890_);
lean_dec_ref_known(v___x_1889_, 1);
v_ref_1891_ = lean_ctor_get(v_a_1874_, 2);
v___x_1892_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_pushIfSome(v___x_1888_, v_a_1890_);
v___x_1893_ = lean_obj_once(&l_Lean_Elab_Tactic_Grind_showState___redArg___closed__3, &l_Lean_Elab_Tactic_Grind_showState___redArg___closed__3_once, _init_l_Lean_Elab_Tactic_Grind_showState___redArg___closed__3);
v___x_1894_ = lean_obj_once(&l_Lean_Elab_Tactic_Grind_showState___redArg___closed__6, &l_Lean_Elab_Tactic_Grind_showState___redArg___closed__6_once, _init_l_Lean_Elab_Tactic_Grind_showState___redArg___closed__6);
v___x_1895_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1895_, 0, v___x_1893_);
lean_ctor_set(v___x_1895_, 1, v___x_1894_);
lean_ctor_set(v___x_1895_, 2, v___x_1892_);
v___x_1896_ = 0;
v___x_1897_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg(v_ref_1891_, v___x_1895_, v___x_1896_, v_isSilent_1869_, v_a_1872_, v_a_1873_, v_a_1874_, v_a_1875_);
return v___x_1897_;
}
else
{
lean_object* v_a_1898_; lean_object* v___x_1900_; uint8_t v_isShared_1901_; uint8_t v_isSharedCheck_1905_; 
lean_dec_ref(v___x_1888_);
v_a_1898_ = lean_ctor_get(v___x_1889_, 0);
v_isSharedCheck_1905_ = !lean_is_exclusive(v___x_1889_);
if (v_isSharedCheck_1905_ == 0)
{
v___x_1900_ = v___x_1889_;
v_isShared_1901_ = v_isSharedCheck_1905_;
goto v_resetjp_1899_;
}
else
{
lean_inc(v_a_1898_);
lean_dec(v___x_1889_);
v___x_1900_ = lean_box(0);
v_isShared_1901_ = v_isSharedCheck_1905_;
goto v_resetjp_1899_;
}
v_resetjp_1899_:
{
lean_object* v___x_1903_; 
if (v_isShared_1901_ == 0)
{
v___x_1903_ = v___x_1900_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v_a_1898_);
v___x_1903_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
return v___x_1903_;
}
}
}
}
else
{
lean_object* v_a_1906_; lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1913_; 
lean_dec_ref(v___x_1885_);
lean_dec(v_filter_1868_);
v_a_1906_ = lean_ctor_get(v___x_1886_, 0);
v_isSharedCheck_1913_ = !lean_is_exclusive(v___x_1886_);
if (v_isSharedCheck_1913_ == 0)
{
v___x_1908_ = v___x_1886_;
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
else
{
lean_inc(v_a_1906_);
lean_dec(v___x_1886_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
lean_object* v___x_1911_; 
if (v_isShared_1909_ == 0)
{
v___x_1911_ = v___x_1908_;
goto v_reusejp_1910_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v_a_1906_);
v___x_1911_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1910_;
}
v_reusejp_1910_:
{
return v___x_1911_;
}
}
}
}
else
{
lean_object* v_a_1914_; lean_object* v___x_1916_; uint8_t v_isShared_1917_; uint8_t v_isSharedCheck_1921_; 
lean_dec_ref(v___x_1881_);
lean_dec(v_filter_1868_);
v_a_1914_ = lean_ctor_get(v___x_1883_, 0);
v_isSharedCheck_1921_ = !lean_is_exclusive(v___x_1883_);
if (v_isSharedCheck_1921_ == 0)
{
v___x_1916_ = v___x_1883_;
v_isShared_1917_ = v_isSharedCheck_1921_;
goto v_resetjp_1915_;
}
else
{
lean_inc(v_a_1914_);
lean_dec(v___x_1883_);
v___x_1916_ = lean_box(0);
v_isShared_1917_ = v_isSharedCheck_1921_;
goto v_resetjp_1915_;
}
v_resetjp_1915_:
{
lean_object* v___x_1919_; 
if (v_isShared_1917_ == 0)
{
v___x_1919_ = v___x_1916_;
goto v_reusejp_1918_;
}
else
{
lean_object* v_reuseFailAlloc_1920_; 
v_reuseFailAlloc_1920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1920_, 0, v_a_1914_);
v___x_1919_ = v_reuseFailAlloc_1920_;
goto v_reusejp_1918_;
}
v_reusejp_1918_:
{
return v___x_1919_;
}
}
}
}
else
{
lean_object* v_a_1922_; lean_object* v___x_1924_; uint8_t v_isShared_1925_; uint8_t v_isSharedCheck_1929_; 
lean_dec(v_filter_1868_);
v_a_1922_ = lean_ctor_get(v___x_1879_, 0);
v_isSharedCheck_1929_ = !lean_is_exclusive(v___x_1879_);
if (v_isSharedCheck_1929_ == 0)
{
v___x_1924_ = v___x_1879_;
v_isShared_1925_ = v_isSharedCheck_1929_;
goto v_resetjp_1923_;
}
else
{
lean_inc(v_a_1922_);
lean_dec(v___x_1879_);
v___x_1924_ = lean_box(0);
v_isShared_1925_ = v_isSharedCheck_1929_;
goto v_resetjp_1923_;
}
v_resetjp_1923_:
{
lean_object* v___x_1927_; 
if (v_isShared_1925_ == 0)
{
v___x_1927_ = v___x_1924_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v_a_1922_);
v___x_1927_ = v_reuseFailAlloc_1928_;
goto v_reusejp_1926_;
}
v_reusejp_1926_:
{
return v___x_1927_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_showState___redArg___boxed(lean_object* v_filter_1930_, lean_object* v_isSilent_1931_, lean_object* v_a_1932_, lean_object* v_a_1933_, lean_object* v_a_1934_, lean_object* v_a_1935_, lean_object* v_a_1936_, lean_object* v_a_1937_, lean_object* v_a_1938_){
_start:
{
uint8_t v_isSilent_boxed_1939_; lean_object* v_res_1940_; 
v_isSilent_boxed_1939_ = lean_unbox(v_isSilent_1931_);
v_res_1940_ = l_Lean_Elab_Tactic_Grind_showState___redArg(v_filter_1930_, v_isSilent_boxed_1939_, v_a_1932_, v_a_1933_, v_a_1934_, v_a_1935_, v_a_1936_, v_a_1937_);
lean_dec(v_a_1937_);
lean_dec_ref(v_a_1936_);
lean_dec(v_a_1935_);
lean_dec_ref(v_a_1934_);
lean_dec(v_a_1933_);
lean_dec_ref(v_a_1932_);
return v_res_1940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_showState(lean_object* v_filter_1941_, uint8_t v_isSilent_1942_, lean_object* v_a_1943_, lean_object* v_a_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_, lean_object* v_a_1948_, lean_object* v_a_1949_, lean_object* v_a_1950_){
_start:
{
lean_object* v___x_1952_; 
v___x_1952_ = l_Lean_Elab_Tactic_Grind_showState___redArg(v_filter_1941_, v_isSilent_1942_, v_a_1943_, v_a_1944_, v_a_1947_, v_a_1948_, v_a_1949_, v_a_1950_);
return v___x_1952_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_showState___boxed(lean_object* v_filter_1953_, lean_object* v_isSilent_1954_, lean_object* v_a_1955_, lean_object* v_a_1956_, lean_object* v_a_1957_, lean_object* v_a_1958_, lean_object* v_a_1959_, lean_object* v_a_1960_, lean_object* v_a_1961_, lean_object* v_a_1962_, lean_object* v_a_1963_){
_start:
{
uint8_t v_isSilent_boxed_1964_; lean_object* v_res_1965_; 
v_isSilent_boxed_1964_ = lean_unbox(v_isSilent_1954_);
v_res_1965_ = l_Lean_Elab_Tactic_Grind_showState(v_filter_1953_, v_isSilent_boxed_1964_, v_a_1955_, v_a_1956_, v_a_1957_, v_a_1958_, v_a_1959_, v_a_1960_, v_a_1961_, v_a_1962_);
lean_dec(v_a_1962_);
lean_dec_ref(v_a_1961_);
lean_dec(v_a_1960_);
lean_dec_ref(v_a_1959_);
lean_dec(v_a_1958_);
lean_dec_ref(v_a_1957_);
lean_dec(v_a_1956_);
lean_dec_ref(v_a_1955_);
return v_res_1965_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___lam__0(uint8_t v___x_1966_, lean_object* v_stx_1967_, lean_object* v___x_1968_, lean_object* v___x_1969_, lean_object* v___x_1970_, lean_object* v___x_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_){
_start:
{
lean_object* v_filter_x3f_1982_; lean_object* v___y_1983_; lean_object* v___y_1984_; lean_object* v___y_1985_; lean_object* v___y_1986_; lean_object* v___y_1987_; lean_object* v___y_1988_; lean_object* v___y_1989_; lean_object* v___y_1990_; 
if (v___x_1966_ == 0)
{
lean_object* v___x_2003_; 
lean_dec_ref(v___x_1971_);
lean_dec_ref(v___x_1970_);
lean_dec_ref(v___x_1969_);
lean_dec_ref(v___x_1968_);
v___x_2003_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_2003_;
}
else
{
lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; uint8_t v___x_2008_; 
v___x_2004_ = lean_unsigned_to_nat(1u);
v___x_2005_ = l_Lean_Syntax_getArg(v_stx_1967_, v___x_2004_);
v___x_2006_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__2));
v___x_2007_ = l_Lean_Name_mkStr5(v___x_1968_, v___x_1969_, v___x_1970_, v___x_1971_, v___x_2006_);
lean_inc(v___x_2005_);
v___x_2008_ = l_Lean_Syntax_isOfKind(v___x_2005_, v___x_2007_);
lean_dec(v___x_2007_);
if (v___x_2008_ == 0)
{
lean_object* v___x_2009_; 
lean_dec(v___x_2005_);
v___x_2009_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_2009_;
}
else
{
lean_object* v___x_2010_; lean_object* v___x_2011_; uint8_t v___x_2012_; 
v___x_2010_ = lean_unsigned_to_nat(0u);
v___x_2011_ = l_Lean_Syntax_getArg(v___x_2005_, v___x_2010_);
lean_dec(v___x_2005_);
v___x_2012_ = l_Lean_Syntax_isNone(v___x_2011_);
if (v___x_2012_ == 0)
{
uint8_t v___x_2013_; 
lean_inc(v___x_2011_);
v___x_2013_ = l_Lean_Syntax_matchesNull(v___x_2011_, v___x_2004_);
if (v___x_2013_ == 0)
{
lean_object* v___x_2014_; 
lean_dec(v___x_2011_);
v___x_2014_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_2014_;
}
else
{
lean_object* v_filter_x3f_2015_; lean_object* v___x_2016_; 
v_filter_x3f_2015_ = l_Lean_Syntax_getArg(v___x_2011_, v___x_2010_);
lean_dec(v___x_2011_);
v___x_2016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2016_, 0, v_filter_x3f_2015_);
v_filter_x3f_1982_ = v___x_2016_;
v___y_1983_ = v___y_1972_;
v___y_1984_ = v___y_1973_;
v___y_1985_ = v___y_1974_;
v___y_1986_ = v___y_1975_;
v___y_1987_ = v___y_1976_;
v___y_1988_ = v___y_1977_;
v___y_1989_ = v___y_1978_;
v___y_1990_ = v___y_1979_;
goto v___jp_1981_;
}
}
else
{
lean_object* v___x_2017_; 
lean_dec(v___x_2011_);
v___x_2017_ = lean_box(0);
v_filter_x3f_1982_ = v___x_2017_;
v___y_1983_ = v___y_1972_;
v___y_1984_ = v___y_1973_;
v___y_1985_ = v___y_1974_;
v___y_1986_ = v___y_1975_;
v___y_1987_ = v___y_1976_;
v___y_1988_ = v___y_1977_;
v___y_1989_ = v___y_1978_;
v___y_1990_ = v___y_1979_;
goto v___jp_1981_;
}
}
}
v___jp_1981_:
{
lean_object* v___x_1991_; 
v___x_1991_ = l_Lean_Elab_Tactic_Grind_elabFilter(v_filter_x3f_1982_, v___y_1983_, v___y_1984_, v___y_1985_, v___y_1986_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_);
if (lean_obj_tag(v___x_1991_) == 0)
{
lean_object* v_a_1992_; uint8_t v___x_1993_; lean_object* v___x_1994_; 
v_a_1992_ = lean_ctor_get(v___x_1991_, 0);
lean_inc(v_a_1992_);
lean_dec_ref_known(v___x_1991_, 1);
v___x_1993_ = 0;
v___x_1994_ = l_Lean_Elab_Tactic_Grind_showState___redArg(v_a_1992_, v___x_1993_, v___y_1983_, v___y_1984_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_);
return v___x_1994_;
}
else
{
lean_object* v_a_1995_; lean_object* v___x_1997_; uint8_t v_isShared_1998_; uint8_t v_isSharedCheck_2002_; 
v_a_1995_ = lean_ctor_get(v___x_1991_, 0);
v_isSharedCheck_2002_ = !lean_is_exclusive(v___x_1991_);
if (v_isSharedCheck_2002_ == 0)
{
v___x_1997_ = v___x_1991_;
v_isShared_1998_ = v_isSharedCheck_2002_;
goto v_resetjp_1996_;
}
else
{
lean_inc(v_a_1995_);
lean_dec(v___x_1991_);
v___x_1997_ = lean_box(0);
v_isShared_1998_ = v_isSharedCheck_2002_;
goto v_resetjp_1996_;
}
v_resetjp_1996_:
{
lean_object* v___x_2000_; 
if (v_isShared_1998_ == 0)
{
v___x_2000_ = v___x_1997_;
goto v_reusejp_1999_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v_a_1995_);
v___x_2000_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1999_;
}
v_reusejp_1999_:
{
return v___x_2000_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___lam__0___boxed(lean_object* v___x_2018_, lean_object* v_stx_2019_, lean_object* v___x_2020_, lean_object* v___x_2021_, lean_object* v___x_2022_, lean_object* v___x_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_){
_start:
{
uint8_t v___x_631__boxed_2033_; lean_object* v_res_2034_; 
v___x_631__boxed_2033_ = lean_unbox(v___x_2018_);
v_res_2034_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___lam__0(v___x_631__boxed_2033_, v_stx_2019_, v___x_2020_, v___x_2021_, v___x_2022_, v___x_2023_, v___y_2024_, v___y_2025_, v___y_2026_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_, v___y_2031_);
lean_dec(v___y_2031_);
lean_dec_ref(v___y_2030_);
lean_dec(v___y_2029_);
lean_dec_ref(v___y_2028_);
lean_dec(v___y_2027_);
lean_dec_ref(v___y_2026_);
lean_dec(v___y_2025_);
lean_dec_ref(v___y_2024_);
lean_dec(v_stx_2019_);
return v_res_2034_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState(lean_object* v_stx_2042_, lean_object* v_a_2043_, lean_object* v_a_2044_, lean_object* v_a_2045_, lean_object* v_a_2046_, lean_object* v_a_2047_, lean_object* v_a_2048_, lean_object* v_a_2049_, lean_object* v_a_2050_){
_start:
{
lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; uint8_t v___x_2057_; lean_object* v___x_2058_; lean_object* v___y_2059_; lean_object* v___x_2060_; 
v___x_2052_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0));
v___x_2053_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1));
v___x_2054_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1));
v___x_2055_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2));
v___x_2056_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__1));
lean_inc(v_stx_2042_);
v___x_2057_ = l_Lean_Syntax_isOfKind(v_stx_2042_, v___x_2056_);
v___x_2058_ = lean_box(v___x_2057_);
v___y_2059_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___lam__0___boxed), 15, 6);
lean_closure_set(v___y_2059_, 0, v___x_2058_);
lean_closure_set(v___y_2059_, 1, v_stx_2042_);
lean_closure_set(v___y_2059_, 2, v___x_2052_);
lean_closure_set(v___y_2059_, 3, v___x_2053_);
lean_closure_set(v___y_2059_, 4, v___x_2054_);
lean_closure_set(v___y_2059_, 5, v___x_2055_);
v___x_2060_ = l_Lean_Elab_Tactic_Grind_withMainContext___redArg(v___y_2059_, v_a_2043_, v_a_2044_, v_a_2045_, v_a_2046_, v_a_2047_, v_a_2048_, v_a_2049_, v_a_2050_);
return v___x_2060_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___boxed(lean_object* v_stx_2061_, lean_object* v_a_2062_, lean_object* v_a_2063_, lean_object* v_a_2064_, lean_object* v_a_2065_, lean_object* v_a_2066_, lean_object* v_a_2067_, lean_object* v_a_2068_, lean_object* v_a_2069_, lean_object* v_a_2070_){
_start:
{
lean_object* v_res_2071_; 
v_res_2071_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState(v_stx_2061_, v_a_2062_, v_a_2063_, v_a_2064_, v_a_2065_, v_a_2066_, v_a_2067_, v_a_2068_, v_a_2069_);
lean_dec(v_a_2069_);
lean_dec_ref(v_a_2068_);
lean_dec(v_a_2067_);
lean_dec_ref(v_a_2066_);
lean_dec(v_a_2065_);
lean_dec_ref(v_a_2064_);
lean_dec(v_a_2063_);
lean_dec_ref(v_a_2062_);
return v_res_2071_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1(){
_start:
{
lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; 
v___x_2077_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_2078_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__1));
v___x_2079_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1___closed__1));
v___x_2080_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___boxed), 10, 0);
v___x_2081_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2077_, v___x_2078_, v___x_2079_, v___x_2080_);
return v___x_2081_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1___boxed(lean_object* v_a_2082_){
_start:
{
lean_object* v_res_2083_; 
v_res_2083_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1();
return v_res_2083_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2088_; lean_object* v___x_2089_; 
v___x_2088_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__2));
v___x_2089_ = l_Lean_stringToMessageData(v___x_2088_);
return v___x_2089_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__5(void){
_start:
{
lean_object* v___x_2091_; lean_object* v___x_2092_; 
v___x_2091_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__4));
v___x_2092_ = l_Lean_stringToMessageData(v___x_2091_);
return v___x_2092_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0(uint8_t v___x_2093_, lean_object* v_numDigits_2094_, size_t v_sz_2095_, size_t v_i_2096_, lean_object* v_bs_2097_){
_start:
{
uint8_t v___x_2098_; 
v___x_2098_ = lean_usize_dec_lt(v_i_2096_, v_sz_2095_);
if (v___x_2098_ == 0)
{
return v_bs_2097_;
}
else
{
lean_object* v_v_2099_; lean_object* v_e_2100_; uint64_t v_anchor_2101_; lean_object* v___x_2102_; lean_object* v_bs_x27_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; double v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; size_t v___x_2119_; size_t v___x_2120_; lean_object* v___x_2121_; 
v_v_2099_ = lean_array_uget_borrowed(v_bs_2097_, v_i_2096_);
v_e_2100_ = lean_ctor_get(v_v_2099_, 2);
lean_inc_ref(v_e_2100_);
v_anchor_2101_ = lean_ctor_get_uint64(v_v_2099_, sizeof(void*)*3);
v___x_2102_ = lean_unsigned_to_nat(0u);
v_bs_x27_2103_ = lean_array_uset(v_bs_2097_, v_i_2096_, v___x_2102_);
v___x_2104_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__1));
v___x_2105_ = lean_box(0);
v___x_2106_ = lean_float_once(&l_Lean_Elab_Tactic_Grind_showState___redArg___closed__2, &l_Lean_Elab_Tactic_Grind_showState___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Grind_showState___redArg___closed__2);
v___x_2107_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_2108_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2108_, 0, v___x_2104_);
lean_ctor_set(v___x_2108_, 1, v___x_2105_);
lean_ctor_set(v___x_2108_, 2, v___x_2107_);
lean_ctor_set_float(v___x_2108_, sizeof(void*)*3, v___x_2106_);
lean_ctor_set_float(v___x_2108_, sizeof(void*)*3 + 8, v___x_2106_);
lean_ctor_set_uint8(v___x_2108_, sizeof(void*)*3 + 16, v___x_2093_);
v___x_2109_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__3);
v___x_2110_ = l_Lean_Meta_Grind_anchorToString(v_numDigits_2094_, v_anchor_2101_);
v___x_2111_ = l_Lean_stringToMessageData(v___x_2110_);
v___x_2112_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2112_, 0, v___x_2109_);
lean_ctor_set(v___x_2112_, 1, v___x_2111_);
v___x_2113_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__5, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__5);
v___x_2114_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2114_, 0, v___x_2112_);
lean_ctor_set(v___x_2114_, 1, v___x_2113_);
v___x_2115_ = l_Lean_MessageData_ofExpr(v_e_2100_);
v___x_2116_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2116_, 0, v___x_2114_);
lean_ctor_set(v___x_2116_, 1, v___x_2115_);
v___x_2117_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg___closed__0));
v___x_2118_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2118_, 0, v___x_2108_);
lean_ctor_set(v___x_2118_, 1, v___x_2116_);
lean_ctor_set(v___x_2118_, 2, v___x_2117_);
v___x_2119_ = ((size_t)1ULL);
v___x_2120_ = lean_usize_add(v_i_2096_, v___x_2119_);
v___x_2121_ = lean_array_uset(v_bs_x27_2103_, v_i_2096_, v___x_2118_);
v_i_2096_ = v___x_2120_;
v_bs_2097_ = v___x_2121_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___boxed(lean_object* v___x_2123_, lean_object* v_numDigits_2124_, lean_object* v_sz_2125_, lean_object* v_i_2126_, lean_object* v_bs_2127_){
_start:
{
uint8_t v___x_1881__boxed_2128_; size_t v_sz_boxed_2129_; size_t v_i_boxed_2130_; lean_object* v_res_2131_; 
v___x_1881__boxed_2128_ = lean_unbox(v___x_2123_);
v_sz_boxed_2129_ = lean_unbox_usize(v_sz_2125_);
lean_dec(v_sz_2125_);
v_i_boxed_2130_ = lean_unbox_usize(v_i_2126_);
lean_dec(v_i_2126_);
v_res_2131_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0(v___x_1881__boxed_2128_, v_numDigits_2124_, v_sz_boxed_2129_, v_i_boxed_2130_, v_bs_2127_);
lean_dec(v_numDigits_2124_);
return v_res_2131_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2135_; uint8_t v___x_2136_; double v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; 
v___x_2135_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_2136_ = 0;
v___x_2137_ = lean_float_once(&l_Lean_Elab_Tactic_Grind_showState___redArg___closed__2, &l_Lean_Elab_Tactic_Grind_showState___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Grind_showState___redArg___closed__2);
v___x_2138_ = lean_box(0);
v___x_2139_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__1));
v___x_2140_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2140_, 0, v___x_2139_);
lean_ctor_set(v___x_2140_, 1, v___x_2138_);
lean_ctor_set(v___x_2140_, 2, v___x_2135_);
lean_ctor_set_float(v___x_2140_, sizeof(void*)*3, v___x_2137_);
lean_ctor_set_float(v___x_2140_, sizeof(void*)*3 + 8, v___x_2137_);
lean_ctor_set_uint8(v___x_2140_, sizeof(void*)*3 + 16, v___x_2136_);
return v___x_2140_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2144_; lean_object* v___x_2145_; 
v___x_2144_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__4));
v___x_2145_ = l_Lean_MessageData_ofFormat(v___x_2144_);
return v___x_2145_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__7(void){
_start:
{
lean_object* v___x_2147_; lean_object* v___x_2148_; 
v___x_2147_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__6));
v___x_2148_ = l_Lean_stringToMessageData(v___x_2147_);
return v___x_2148_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0(uint8_t v___x_2149_, lean_object* v_stx_2150_, lean_object* v___x_2151_, lean_object* v___x_2152_, lean_object* v___x_2153_, lean_object* v___x_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_){
_start:
{
if (v___x_2149_ == 0)
{
lean_object* v___x_2164_; 
lean_dec_ref(v___x_2154_);
lean_dec_ref(v___x_2153_);
lean_dec_ref(v___x_2152_);
lean_dec_ref(v___x_2151_);
v___x_2164_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_2164_;
}
else
{
lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; uint8_t v___x_2169_; 
v___x_2165_ = lean_unsigned_to_nat(1u);
v___x_2166_ = l_Lean_Syntax_getArg(v_stx_2150_, v___x_2165_);
v___x_2167_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__2));
v___x_2168_ = l_Lean_Name_mkStr5(v___x_2151_, v___x_2152_, v___x_2153_, v___x_2154_, v___x_2167_);
lean_inc(v___x_2166_);
v___x_2169_ = l_Lean_Syntax_isOfKind(v___x_2166_, v___x_2168_);
lean_dec(v___x_2168_);
if (v___x_2169_ == 0)
{
lean_object* v___x_2170_; 
lean_dec(v___x_2166_);
v___x_2170_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_2170_;
}
else
{
lean_object* v___x_2171_; lean_object* v___y_2173_; lean_object* v___y_2174_; lean_object* v___y_2175_; lean_object* v___y_2176_; lean_object* v___y_2177_; lean_object* v___y_2178_; lean_object* v___y_2179_; lean_object* v___y_2180_; lean_object* v___y_2181_; lean_object* v___y_2182_; lean_object* v_filter_x3f_2191_; lean_object* v___y_2192_; lean_object* v___y_2193_; lean_object* v___y_2194_; lean_object* v___y_2195_; lean_object* v___y_2196_; lean_object* v___y_2197_; lean_object* v___y_2198_; lean_object* v___y_2199_; lean_object* v___x_2229_; uint8_t v___x_2230_; 
v___x_2171_ = lean_unsigned_to_nat(0u);
v___x_2229_ = l_Lean_Syntax_getArg(v___x_2166_, v___x_2171_);
lean_dec(v___x_2166_);
v___x_2230_ = l_Lean_Syntax_isNone(v___x_2229_);
if (v___x_2230_ == 0)
{
uint8_t v___x_2231_; 
lean_inc(v___x_2229_);
v___x_2231_ = l_Lean_Syntax_matchesNull(v___x_2229_, v___x_2165_);
if (v___x_2231_ == 0)
{
lean_object* v___x_2232_; 
lean_dec(v___x_2229_);
v___x_2232_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_2232_;
}
else
{
lean_object* v_filter_x3f_2233_; lean_object* v___x_2234_; 
v_filter_x3f_2233_ = l_Lean_Syntax_getArg(v___x_2229_, v___x_2171_);
lean_dec(v___x_2229_);
v___x_2234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2234_, 0, v_filter_x3f_2233_);
v_filter_x3f_2191_ = v___x_2234_;
v___y_2192_ = v___y_2155_;
v___y_2193_ = v___y_2156_;
v___y_2194_ = v___y_2157_;
v___y_2195_ = v___y_2158_;
v___y_2196_ = v___y_2159_;
v___y_2197_ = v___y_2160_;
v___y_2198_ = v___y_2161_;
v___y_2199_ = v___y_2162_;
goto v___jp_2190_;
}
}
else
{
lean_object* v___x_2235_; 
lean_dec(v___x_2229_);
v___x_2235_ = lean_box(0);
v_filter_x3f_2191_ = v___x_2235_;
v___y_2192_ = v___y_2155_;
v___y_2193_ = v___y_2156_;
v___y_2194_ = v___y_2157_;
v___y_2195_ = v___y_2158_;
v___y_2196_ = v___y_2159_;
v___y_2197_ = v___y_2160_;
v___y_2198_ = v___y_2161_;
v___y_2199_ = v___y_2162_;
goto v___jp_2190_;
}
v___jp_2172_:
{
size_t v_sz_2183_; size_t v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; 
v_sz_2183_ = lean_array_size(v___y_2174_);
v___x_2184_ = ((size_t)0ULL);
v___x_2185_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0(v___x_2169_, v___y_2173_, v_sz_2183_, v___x_2184_, v___y_2174_);
lean_dec(v___y_2173_);
v___x_2186_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__2, &l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__2_once, _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__2);
v___x_2187_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__5, &l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__5);
v___x_2188_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2188_, 0, v___x_2186_);
lean_ctor_set(v___x_2188_, 1, v___x_2187_);
lean_ctor_set(v___x_2188_, 2, v___x_2185_);
v___x_2189_ = l_Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0(v___x_2188_, v___y_2175_, v___y_2176_, v___y_2177_, v___y_2178_, v___y_2179_, v___y_2180_, v___y_2181_, v___y_2182_);
return v___x_2189_;
}
v___jp_2190_:
{
lean_object* v___x_2200_; 
v___x_2200_ = l_Lean_Elab_Tactic_Grind_elabFilter(v_filter_x3f_2191_, v___y_2192_, v___y_2193_, v___y_2194_, v___y_2195_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_);
if (lean_obj_tag(v___x_2200_) == 0)
{
lean_object* v_a_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; 
v_a_2201_ = lean_ctor_get(v___x_2200_, 0);
lean_inc(v_a_2201_);
lean_dec_ref_known(v___x_2200_, 1);
v___x_2202_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Filter_eval___boxed), 13, 1);
lean_closure_set(v___x_2202_, 0, v_a_2201_);
v___x_2203_ = lean_box(0);
v___x_2204_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_getSplitCandidateAnchors___boxed), 13, 2);
lean_closure_set(v___x_2204_, 0, v___x_2202_);
lean_closure_set(v___x_2204_, 1, v___x_2203_);
v___x_2205_ = l_Lean_Elab_Tactic_Grind_liftGoalM___redArg(v___x_2204_, v___y_2192_, v___y_2193_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_);
if (lean_obj_tag(v___x_2205_) == 0)
{
lean_object* v_a_2206_; lean_object* v_candidates_2207_; lean_object* v_numDigits_2208_; lean_object* v___x_2209_; uint8_t v___x_2210_; 
v_a_2206_ = lean_ctor_get(v___x_2205_, 0);
lean_inc(v_a_2206_);
lean_dec_ref_known(v___x_2205_, 1);
v_candidates_2207_ = lean_ctor_get(v_a_2206_, 0);
lean_inc_ref(v_candidates_2207_);
v_numDigits_2208_ = lean_ctor_get(v_a_2206_, 1);
lean_inc(v_numDigits_2208_);
lean_dec(v_a_2206_);
v___x_2209_ = lean_array_get_size(v_candidates_2207_);
v___x_2210_ = lean_nat_dec_eq(v___x_2209_, v___x_2171_);
if (v___x_2210_ == 0)
{
v___y_2173_ = v_numDigits_2208_;
v___y_2174_ = v_candidates_2207_;
v___y_2175_ = v___y_2192_;
v___y_2176_ = v___y_2193_;
v___y_2177_ = v___y_2194_;
v___y_2178_ = v___y_2195_;
v___y_2179_ = v___y_2196_;
v___y_2180_ = v___y_2197_;
v___y_2181_ = v___y_2198_;
v___y_2182_ = v___y_2199_;
goto v___jp_2172_;
}
else
{
lean_object* v___x_2211_; lean_object* v___x_2212_; 
lean_dec(v_numDigits_2208_);
lean_dec_ref(v_candidates_2207_);
v___x_2211_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__7, &l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__7_once, _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__7);
v___x_2212_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1___redArg(v___x_2211_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_);
return v___x_2212_;
}
}
else
{
lean_object* v_a_2213_; lean_object* v___x_2215_; uint8_t v_isShared_2216_; uint8_t v_isSharedCheck_2220_; 
v_a_2213_ = lean_ctor_get(v___x_2205_, 0);
v_isSharedCheck_2220_ = !lean_is_exclusive(v___x_2205_);
if (v_isSharedCheck_2220_ == 0)
{
v___x_2215_ = v___x_2205_;
v_isShared_2216_ = v_isSharedCheck_2220_;
goto v_resetjp_2214_;
}
else
{
lean_inc(v_a_2213_);
lean_dec(v___x_2205_);
v___x_2215_ = lean_box(0);
v_isShared_2216_ = v_isSharedCheck_2220_;
goto v_resetjp_2214_;
}
v_resetjp_2214_:
{
lean_object* v___x_2218_; 
if (v_isShared_2216_ == 0)
{
v___x_2218_ = v___x_2215_;
goto v_reusejp_2217_;
}
else
{
lean_object* v_reuseFailAlloc_2219_; 
v_reuseFailAlloc_2219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2219_, 0, v_a_2213_);
v___x_2218_ = v_reuseFailAlloc_2219_;
goto v_reusejp_2217_;
}
v_reusejp_2217_:
{
return v___x_2218_;
}
}
}
}
else
{
lean_object* v_a_2221_; lean_object* v___x_2223_; uint8_t v_isShared_2224_; uint8_t v_isSharedCheck_2228_; 
v_a_2221_ = lean_ctor_get(v___x_2200_, 0);
v_isSharedCheck_2228_ = !lean_is_exclusive(v___x_2200_);
if (v_isSharedCheck_2228_ == 0)
{
v___x_2223_ = v___x_2200_;
v_isShared_2224_ = v_isSharedCheck_2228_;
goto v_resetjp_2222_;
}
else
{
lean_inc(v_a_2221_);
lean_dec(v___x_2200_);
v___x_2223_ = lean_box(0);
v_isShared_2224_ = v_isSharedCheck_2228_;
goto v_resetjp_2222_;
}
v_resetjp_2222_:
{
lean_object* v___x_2226_; 
if (v_isShared_2224_ == 0)
{
v___x_2226_ = v___x_2223_;
goto v_reusejp_2225_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v_a_2221_);
v___x_2226_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2225_;
}
v_reusejp_2225_:
{
return v___x_2226_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___boxed(lean_object* v___x_2236_, lean_object* v_stx_2237_, lean_object* v___x_2238_, lean_object* v___x_2239_, lean_object* v___x_2240_, lean_object* v___x_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_){
_start:
{
uint8_t v___x_1985__boxed_2251_; lean_object* v_res_2252_; 
v___x_1985__boxed_2251_ = lean_unbox(v___x_2236_);
v_res_2252_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0(v___x_1985__boxed_2251_, v_stx_2237_, v___x_2238_, v___x_2239_, v___x_2240_, v___x_2241_, v___y_2242_, v___y_2243_, v___y_2244_, v___y_2245_, v___y_2246_, v___y_2247_, v___y_2248_, v___y_2249_);
lean_dec(v___y_2249_);
lean_dec_ref(v___y_2248_);
lean_dec(v___y_2247_);
lean_dec_ref(v___y_2246_);
lean_dec(v___y_2245_);
lean_dec_ref(v___y_2244_);
lean_dec(v___y_2243_);
lean_dec_ref(v___y_2242_);
lean_dec(v_stx_2237_);
return v_res_2252_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases(lean_object* v_stx_2260_, lean_object* v_a_2261_, lean_object* v_a_2262_, lean_object* v_a_2263_, lean_object* v_a_2264_, lean_object* v_a_2265_, lean_object* v_a_2266_, lean_object* v_a_2267_, lean_object* v_a_2268_){
_start:
{
lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; uint8_t v___x_2275_; lean_object* v___x_2276_; lean_object* v___y_2277_; lean_object* v___x_2278_; 
v___x_2270_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0));
v___x_2271_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1));
v___x_2272_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1));
v___x_2273_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2));
v___x_2274_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__1));
lean_inc(v_stx_2260_);
v___x_2275_ = l_Lean_Syntax_isOfKind(v_stx_2260_, v___x_2274_);
v___x_2276_ = lean_box(v___x_2275_);
v___y_2277_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___boxed), 15, 6);
lean_closure_set(v___y_2277_, 0, v___x_2276_);
lean_closure_set(v___y_2277_, 1, v_stx_2260_);
lean_closure_set(v___y_2277_, 2, v___x_2270_);
lean_closure_set(v___y_2277_, 3, v___x_2271_);
lean_closure_set(v___y_2277_, 4, v___x_2272_);
lean_closure_set(v___y_2277_, 5, v___x_2273_);
v___x_2278_ = l_Lean_Elab_Tactic_Grind_withMainContext___redArg(v___y_2277_, v_a_2261_, v_a_2262_, v_a_2263_, v_a_2264_, v_a_2265_, v_a_2266_, v_a_2267_, v_a_2268_);
return v___x_2278_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___boxed(lean_object* v_stx_2279_, lean_object* v_a_2280_, lean_object* v_a_2281_, lean_object* v_a_2282_, lean_object* v_a_2283_, lean_object* v_a_2284_, lean_object* v_a_2285_, lean_object* v_a_2286_, lean_object* v_a_2287_, lean_object* v_a_2288_){
_start:
{
lean_object* v_res_2289_; 
v_res_2289_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases(v_stx_2279_, v_a_2280_, v_a_2281_, v_a_2282_, v_a_2283_, v_a_2284_, v_a_2285_, v_a_2286_, v_a_2287_);
lean_dec(v_a_2287_);
lean_dec_ref(v_a_2286_);
lean_dec(v_a_2285_);
lean_dec_ref(v_a_2284_);
lean_dec(v_a_2283_);
lean_dec_ref(v_a_2282_);
lean_dec(v_a_2281_);
lean_dec_ref(v_a_2280_);
return v_res_2289_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1(){
_start:
{
lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; 
v___x_2295_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_2296_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__1));
v___x_2297_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1___closed__1));
v___x_2298_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___boxed), 10, 0);
v___x_2299_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2295_, v___x_2296_, v___x_2297_, v___x_2298_);
return v___x_2299_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1___boxed(lean_object* v_a_2300_){
_start:
{
lean_object* v_res_2301_; 
v_res_2301_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1();
return v_res_2301_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__7___redArg(uint64_t v_a_2302_, lean_object* v_b_2303_, lean_object* v_x_2304_){
_start:
{
if (lean_obj_tag(v_x_2304_) == 0)
{
lean_dec(v_b_2303_);
return v_x_2304_;
}
else
{
lean_object* v_key_2305_; lean_object* v_value_2306_; lean_object* v_tail_2307_; lean_object* v___x_2309_; uint8_t v_isShared_2310_; uint8_t v_isSharedCheck_2321_; 
v_key_2305_ = lean_ctor_get(v_x_2304_, 0);
v_value_2306_ = lean_ctor_get(v_x_2304_, 1);
v_tail_2307_ = lean_ctor_get(v_x_2304_, 2);
v_isSharedCheck_2321_ = !lean_is_exclusive(v_x_2304_);
if (v_isSharedCheck_2321_ == 0)
{
v___x_2309_ = v_x_2304_;
v_isShared_2310_ = v_isSharedCheck_2321_;
goto v_resetjp_2308_;
}
else
{
lean_inc(v_tail_2307_);
lean_inc(v_value_2306_);
lean_inc(v_key_2305_);
lean_dec(v_x_2304_);
v___x_2309_ = lean_box(0);
v_isShared_2310_ = v_isSharedCheck_2321_;
goto v_resetjp_2308_;
}
v_resetjp_2308_:
{
uint64_t v___x_2311_; uint8_t v___x_2312_; 
v___x_2311_ = lean_unbox_uint64(v_key_2305_);
v___x_2312_ = lean_uint64_dec_eq(v___x_2311_, v_a_2302_);
if (v___x_2312_ == 0)
{
lean_object* v___x_2313_; lean_object* v___x_2315_; 
v___x_2313_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__7___redArg(v_a_2302_, v_b_2303_, v_tail_2307_);
if (v_isShared_2310_ == 0)
{
lean_ctor_set(v___x_2309_, 2, v___x_2313_);
v___x_2315_ = v___x_2309_;
goto v_reusejp_2314_;
}
else
{
lean_object* v_reuseFailAlloc_2316_; 
v_reuseFailAlloc_2316_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2316_, 0, v_key_2305_);
lean_ctor_set(v_reuseFailAlloc_2316_, 1, v_value_2306_);
lean_ctor_set(v_reuseFailAlloc_2316_, 2, v___x_2313_);
v___x_2315_ = v_reuseFailAlloc_2316_;
goto v_reusejp_2314_;
}
v_reusejp_2314_:
{
return v___x_2315_;
}
}
else
{
lean_object* v___x_2317_; lean_object* v___x_2319_; 
lean_dec(v_value_2306_);
lean_dec(v_key_2305_);
v___x_2317_ = lean_box_uint64(v_a_2302_);
if (v_isShared_2310_ == 0)
{
lean_ctor_set(v___x_2309_, 1, v_b_2303_);
lean_ctor_set(v___x_2309_, 0, v___x_2317_);
v___x_2319_ = v___x_2309_;
goto v_reusejp_2318_;
}
else
{
lean_object* v_reuseFailAlloc_2320_; 
v_reuseFailAlloc_2320_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2320_, 0, v___x_2317_);
lean_ctor_set(v_reuseFailAlloc_2320_, 1, v_b_2303_);
lean_ctor_set(v_reuseFailAlloc_2320_, 2, v_tail_2307_);
v___x_2319_ = v_reuseFailAlloc_2320_;
goto v_reusejp_2318_;
}
v_reusejp_2318_:
{
return v___x_2319_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__7___redArg___boxed(lean_object* v_a_2322_, lean_object* v_b_2323_, lean_object* v_x_2324_){
_start:
{
uint64_t v_a_boxed_2325_; lean_object* v_res_2326_; 
v_a_boxed_2325_ = lean_unbox_uint64(v_a_2322_);
lean_dec_ref(v_a_2322_);
v_res_2326_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__7___redArg(v_a_boxed_2325_, v_b_2323_, v_x_2324_);
return v_res_2326_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6_spec__7_spec__9___redArg(lean_object* v_x_2327_, lean_object* v_x_2328_){
_start:
{
if (lean_obj_tag(v_x_2328_) == 0)
{
return v_x_2327_;
}
else
{
lean_object* v_key_2329_; lean_object* v_value_2330_; lean_object* v_tail_2331_; lean_object* v___x_2333_; uint8_t v_isShared_2334_; uint8_t v_isSharedCheck_2355_; 
v_key_2329_ = lean_ctor_get(v_x_2328_, 0);
v_value_2330_ = lean_ctor_get(v_x_2328_, 1);
v_tail_2331_ = lean_ctor_get(v_x_2328_, 2);
v_isSharedCheck_2355_ = !lean_is_exclusive(v_x_2328_);
if (v_isSharedCheck_2355_ == 0)
{
v___x_2333_ = v_x_2328_;
v_isShared_2334_ = v_isSharedCheck_2355_;
goto v_resetjp_2332_;
}
else
{
lean_inc(v_tail_2331_);
lean_inc(v_value_2330_);
lean_inc(v_key_2329_);
lean_dec(v_x_2328_);
v___x_2333_ = lean_box(0);
v_isShared_2334_ = v_isSharedCheck_2355_;
goto v_resetjp_2332_;
}
v_resetjp_2332_:
{
lean_object* v___x_2335_; uint64_t v___x_2336_; uint64_t v___x_2337_; uint64_t v___x_2338_; uint64_t v___x_2339_; uint64_t v_fold_2340_; uint64_t v___x_2341_; uint64_t v___x_2342_; uint64_t v___x_2343_; size_t v___x_2344_; size_t v___x_2345_; size_t v___x_2346_; size_t v___x_2347_; size_t v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2351_; 
v___x_2335_ = lean_array_get_size(v_x_2327_);
v___x_2336_ = 32ULL;
v___x_2337_ = lean_unbox_uint64(v_key_2329_);
v___x_2338_ = lean_uint64_shift_right(v___x_2337_, v___x_2336_);
v___x_2339_ = lean_unbox_uint64(v_key_2329_);
v_fold_2340_ = lean_uint64_xor(v___x_2339_, v___x_2338_);
v___x_2341_ = 16ULL;
v___x_2342_ = lean_uint64_shift_right(v_fold_2340_, v___x_2341_);
v___x_2343_ = lean_uint64_xor(v_fold_2340_, v___x_2342_);
v___x_2344_ = lean_uint64_to_usize(v___x_2343_);
v___x_2345_ = lean_usize_of_nat(v___x_2335_);
v___x_2346_ = ((size_t)1ULL);
v___x_2347_ = lean_usize_sub(v___x_2345_, v___x_2346_);
v___x_2348_ = lean_usize_land(v___x_2344_, v___x_2347_);
v___x_2349_ = lean_array_uget_borrowed(v_x_2327_, v___x_2348_);
lean_inc(v___x_2349_);
if (v_isShared_2334_ == 0)
{
lean_ctor_set(v___x_2333_, 2, v___x_2349_);
v___x_2351_ = v___x_2333_;
goto v_reusejp_2350_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v_key_2329_);
lean_ctor_set(v_reuseFailAlloc_2354_, 1, v_value_2330_);
lean_ctor_set(v_reuseFailAlloc_2354_, 2, v___x_2349_);
v___x_2351_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2350_;
}
v_reusejp_2350_:
{
lean_object* v___x_2352_; 
v___x_2352_ = lean_array_uset(v_x_2327_, v___x_2348_, v___x_2351_);
v_x_2327_ = v___x_2352_;
v_x_2328_ = v_tail_2331_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6_spec__7___redArg(lean_object* v_i_2356_, lean_object* v_source_2357_, lean_object* v_target_2358_){
_start:
{
lean_object* v___x_2359_; uint8_t v___x_2360_; 
v___x_2359_ = lean_array_get_size(v_source_2357_);
v___x_2360_ = lean_nat_dec_lt(v_i_2356_, v___x_2359_);
if (v___x_2360_ == 0)
{
lean_dec_ref(v_source_2357_);
lean_dec(v_i_2356_);
return v_target_2358_;
}
else
{
lean_object* v_es_2361_; lean_object* v___x_2362_; lean_object* v_source_2363_; lean_object* v_target_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; 
v_es_2361_ = lean_array_fget(v_source_2357_, v_i_2356_);
v___x_2362_ = lean_box(0);
v_source_2363_ = lean_array_fset(v_source_2357_, v_i_2356_, v___x_2362_);
v_target_2364_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6_spec__7_spec__9___redArg(v_target_2358_, v_es_2361_);
v___x_2365_ = lean_unsigned_to_nat(1u);
v___x_2366_ = lean_nat_add(v_i_2356_, v___x_2365_);
lean_dec(v_i_2356_);
v_i_2356_ = v___x_2366_;
v_source_2357_ = v_source_2363_;
v_target_2358_ = v_target_2364_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6___redArg(lean_object* v_data_2368_){
_start:
{
lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v_nbuckets_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; 
v___x_2369_ = lean_array_get_size(v_data_2368_);
v___x_2370_ = lean_unsigned_to_nat(2u);
v_nbuckets_2371_ = lean_nat_mul(v___x_2369_, v___x_2370_);
v___x_2372_ = lean_unsigned_to_nat(0u);
v___x_2373_ = lean_box(0);
v___x_2374_ = lean_mk_array(v_nbuckets_2371_, v___x_2373_);
v___x_2375_ = lean_array_propagate_mark(v_data_2368_, v___x_2374_);
v___x_2376_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6_spec__7___redArg(v___x_2372_, v_data_2368_, v___x_2375_);
return v___x_2376_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__5___redArg(uint64_t v_a_2377_, lean_object* v_x_2378_){
_start:
{
if (lean_obj_tag(v_x_2378_) == 0)
{
uint8_t v___x_2379_; 
v___x_2379_ = 0;
return v___x_2379_;
}
else
{
lean_object* v_key_2380_; lean_object* v_tail_2381_; uint64_t v___x_2382_; uint8_t v___x_2383_; 
v_key_2380_ = lean_ctor_get(v_x_2378_, 0);
v_tail_2381_ = lean_ctor_get(v_x_2378_, 2);
v___x_2382_ = lean_unbox_uint64(v_key_2380_);
v___x_2383_ = lean_uint64_dec_eq(v___x_2382_, v_a_2377_);
if (v___x_2383_ == 0)
{
v_x_2378_ = v_tail_2381_;
goto _start;
}
else
{
return v___x_2383_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_a_2385_, lean_object* v_x_2386_){
_start:
{
uint64_t v_a_boxed_2387_; uint8_t v_res_2388_; lean_object* v_r_2389_; 
v_a_boxed_2387_ = lean_unbox_uint64(v_a_2385_);
lean_dec_ref(v_a_2385_);
v_res_2388_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__5___redArg(v_a_boxed_2387_, v_x_2386_);
lean_dec(v_x_2386_);
v_r_2389_ = lean_box(v_res_2388_);
return v_r_2389_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2___redArg(lean_object* v_m_2390_, uint64_t v_a_2391_, lean_object* v_b_2392_){
_start:
{
lean_object* v_size_2393_; lean_object* v_buckets_2394_; lean_object* v___x_2396_; uint8_t v_isShared_2397_; uint8_t v_isSharedCheck_2437_; 
v_size_2393_ = lean_ctor_get(v_m_2390_, 0);
v_buckets_2394_ = lean_ctor_get(v_m_2390_, 1);
v_isSharedCheck_2437_ = !lean_is_exclusive(v_m_2390_);
if (v_isSharedCheck_2437_ == 0)
{
v___x_2396_ = v_m_2390_;
v_isShared_2397_ = v_isSharedCheck_2437_;
goto v_resetjp_2395_;
}
else
{
lean_inc(v_buckets_2394_);
lean_inc(v_size_2393_);
lean_dec(v_m_2390_);
v___x_2396_ = lean_box(0);
v_isShared_2397_ = v_isSharedCheck_2437_;
goto v_resetjp_2395_;
}
v_resetjp_2395_:
{
lean_object* v___x_2398_; uint64_t v___x_2399_; uint64_t v___x_2400_; uint64_t v_fold_2401_; uint64_t v___x_2402_; uint64_t v___x_2403_; uint64_t v___x_2404_; size_t v___x_2405_; size_t v___x_2406_; size_t v___x_2407_; size_t v___x_2408_; size_t v___x_2409_; lean_object* v_bkt_2410_; uint8_t v___x_2411_; 
v___x_2398_ = lean_array_get_size(v_buckets_2394_);
v___x_2399_ = 32ULL;
v___x_2400_ = lean_uint64_shift_right(v_a_2391_, v___x_2399_);
v_fold_2401_ = lean_uint64_xor(v_a_2391_, v___x_2400_);
v___x_2402_ = 16ULL;
v___x_2403_ = lean_uint64_shift_right(v_fold_2401_, v___x_2402_);
v___x_2404_ = lean_uint64_xor(v_fold_2401_, v___x_2403_);
v___x_2405_ = lean_uint64_to_usize(v___x_2404_);
v___x_2406_ = lean_usize_of_nat(v___x_2398_);
v___x_2407_ = ((size_t)1ULL);
v___x_2408_ = lean_usize_sub(v___x_2406_, v___x_2407_);
v___x_2409_ = lean_usize_land(v___x_2405_, v___x_2408_);
v_bkt_2410_ = lean_array_uget_borrowed(v_buckets_2394_, v___x_2409_);
v___x_2411_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__5___redArg(v_a_2391_, v_bkt_2410_);
if (v___x_2411_ == 0)
{
lean_object* v___x_2412_; lean_object* v_size_x27_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v_buckets_x27_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; uint8_t v___x_2422_; 
v___x_2412_ = lean_unsigned_to_nat(1u);
v_size_x27_2413_ = lean_nat_add(v_size_2393_, v___x_2412_);
lean_dec(v_size_2393_);
v___x_2414_ = lean_box_uint64(v_a_2391_);
lean_inc(v_bkt_2410_);
v___x_2415_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2415_, 0, v___x_2414_);
lean_ctor_set(v___x_2415_, 1, v_b_2392_);
lean_ctor_set(v___x_2415_, 2, v_bkt_2410_);
v_buckets_x27_2416_ = lean_array_uset(v_buckets_2394_, v___x_2409_, v___x_2415_);
v___x_2417_ = lean_unsigned_to_nat(4u);
v___x_2418_ = lean_nat_mul(v_size_x27_2413_, v___x_2417_);
v___x_2419_ = lean_unsigned_to_nat(3u);
v___x_2420_ = lean_nat_div(v___x_2418_, v___x_2419_);
lean_dec(v___x_2418_);
v___x_2421_ = lean_array_get_size(v_buckets_x27_2416_);
v___x_2422_ = lean_nat_dec_le(v___x_2420_, v___x_2421_);
lean_dec(v___x_2420_);
if (v___x_2422_ == 0)
{
lean_object* v_val_2423_; lean_object* v___x_2425_; 
v_val_2423_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6___redArg(v_buckets_x27_2416_);
if (v_isShared_2397_ == 0)
{
lean_ctor_set(v___x_2396_, 1, v_val_2423_);
lean_ctor_set(v___x_2396_, 0, v_size_x27_2413_);
v___x_2425_ = v___x_2396_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2426_; 
v_reuseFailAlloc_2426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2426_, 0, v_size_x27_2413_);
lean_ctor_set(v_reuseFailAlloc_2426_, 1, v_val_2423_);
v___x_2425_ = v_reuseFailAlloc_2426_;
goto v_reusejp_2424_;
}
v_reusejp_2424_:
{
return v___x_2425_;
}
}
else
{
lean_object* v___x_2428_; 
if (v_isShared_2397_ == 0)
{
lean_ctor_set(v___x_2396_, 1, v_buckets_x27_2416_);
lean_ctor_set(v___x_2396_, 0, v_size_x27_2413_);
v___x_2428_ = v___x_2396_;
goto v_reusejp_2427_;
}
else
{
lean_object* v_reuseFailAlloc_2429_; 
v_reuseFailAlloc_2429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2429_, 0, v_size_x27_2413_);
lean_ctor_set(v_reuseFailAlloc_2429_, 1, v_buckets_x27_2416_);
v___x_2428_ = v_reuseFailAlloc_2429_;
goto v_reusejp_2427_;
}
v_reusejp_2427_:
{
return v___x_2428_;
}
}
}
else
{
lean_object* v___x_2430_; lean_object* v_buckets_x27_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2435_; 
lean_inc(v_bkt_2410_);
v___x_2430_ = lean_box(0);
v_buckets_x27_2431_ = lean_array_uset(v_buckets_2394_, v___x_2409_, v___x_2430_);
v___x_2432_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__7___redArg(v_a_2391_, v_b_2392_, v_bkt_2410_);
v___x_2433_ = lean_array_uset(v_buckets_x27_2431_, v___x_2409_, v___x_2432_);
if (v_isShared_2397_ == 0)
{
lean_ctor_set(v___x_2396_, 1, v___x_2433_);
v___x_2435_ = v___x_2396_;
goto v_reusejp_2434_;
}
else
{
lean_object* v_reuseFailAlloc_2436_; 
v_reuseFailAlloc_2436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2436_, 0, v_size_2393_);
lean_ctor_set(v_reuseFailAlloc_2436_, 1, v___x_2433_);
v___x_2435_ = v_reuseFailAlloc_2436_;
goto v_reusejp_2434_;
}
v_reusejp_2434_:
{
return v___x_2435_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_m_2438_, lean_object* v_a_2439_, lean_object* v_b_2440_){
_start:
{
uint64_t v_a_boxed_2441_; lean_object* v_res_2442_; 
v_a_boxed_2441_ = lean_unbox_uint64(v_a_2439_);
lean_dec_ref(v_a_2439_);
v_res_2442_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2___redArg(v_m_2438_, v_a_boxed_2441_, v_b_2440_);
return v_res_2442_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1_spec__3___redArg(uint64_t v_a_2443_, lean_object* v_x_2444_){
_start:
{
if (lean_obj_tag(v_x_2444_) == 0)
{
lean_object* v___x_2445_; 
v___x_2445_ = lean_box(0);
return v___x_2445_;
}
else
{
lean_object* v_key_2446_; lean_object* v_value_2447_; lean_object* v_tail_2448_; uint64_t v___x_2449_; uint8_t v___x_2450_; 
v_key_2446_ = lean_ctor_get(v_x_2444_, 0);
v_value_2447_ = lean_ctor_get(v_x_2444_, 1);
v_tail_2448_ = lean_ctor_get(v_x_2444_, 2);
v___x_2449_ = lean_unbox_uint64(v_key_2446_);
v___x_2450_ = lean_uint64_dec_eq(v___x_2449_, v_a_2443_);
if (v___x_2450_ == 0)
{
v_x_2444_ = v_tail_2448_;
goto _start;
}
else
{
lean_object* v___x_2452_; 
lean_inc(v_value_2447_);
v___x_2452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2452_, 0, v_value_2447_);
return v___x_2452_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_a_2453_, lean_object* v_x_2454_){
_start:
{
uint64_t v_a_boxed_2455_; lean_object* v_res_2456_; 
v_a_boxed_2455_ = lean_unbox_uint64(v_a_2453_);
lean_dec_ref(v_a_2453_);
v_res_2456_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1_spec__3___redArg(v_a_boxed_2455_, v_x_2454_);
lean_dec(v_x_2454_);
return v_res_2456_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1___redArg(lean_object* v_m_2457_, uint64_t v_a_2458_){
_start:
{
lean_object* v_buckets_2459_; lean_object* v___x_2460_; uint64_t v___x_2461_; uint64_t v___x_2462_; uint64_t v_fold_2463_; uint64_t v___x_2464_; uint64_t v___x_2465_; uint64_t v___x_2466_; size_t v___x_2467_; size_t v___x_2468_; size_t v___x_2469_; size_t v___x_2470_; size_t v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; 
v_buckets_2459_ = lean_ctor_get(v_m_2457_, 1);
v___x_2460_ = lean_array_get_size(v_buckets_2459_);
v___x_2461_ = 32ULL;
v___x_2462_ = lean_uint64_shift_right(v_a_2458_, v___x_2461_);
v_fold_2463_ = lean_uint64_xor(v_a_2458_, v___x_2462_);
v___x_2464_ = 16ULL;
v___x_2465_ = lean_uint64_shift_right(v_fold_2463_, v___x_2464_);
v___x_2466_ = lean_uint64_xor(v_fold_2463_, v___x_2465_);
v___x_2467_ = lean_uint64_to_usize(v___x_2466_);
v___x_2468_ = lean_usize_of_nat(v___x_2460_);
v___x_2469_ = ((size_t)1ULL);
v___x_2470_ = lean_usize_sub(v___x_2468_, v___x_2469_);
v___x_2471_ = lean_usize_land(v___x_2467_, v___x_2470_);
v___x_2472_ = lean_array_uget_borrowed(v_buckets_2459_, v___x_2471_);
v___x_2473_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1_spec__3___redArg(v_a_2458_, v___x_2472_);
return v___x_2473_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_m_2474_, lean_object* v_a_2475_){
_start:
{
uint64_t v_a_boxed_2476_; lean_object* v_res_2477_; 
v_a_boxed_2476_ = lean_unbox_uint64(v_a_2475_);
lean_dec_ref(v_a_2475_);
v_res_2477_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1___redArg(v_m_2474_, v_a_boxed_2476_);
lean_dec_ref(v_m_2474_);
return v_res_2477_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; 
v___x_2478_ = lean_box(0);
v___x_2479_ = lean_unsigned_to_nat(16u);
v___x_2480_ = lean_mk_array(v___x_2479_, v___x_2478_);
return v___x_2480_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v_found_2483_; 
v___x_2481_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__0, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__0);
v___x_2482_ = lean_unsigned_to_nat(0u);
v_found_2483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_found_2483_, 0, v___x_2482_);
lean_ctor_set(v_found_2483_, 1, v___x_2481_);
return v_found_2483_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v_found_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; 
v_found_2484_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__1, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__1);
v___x_2485_ = lean_box(0);
v___x_2486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2486_, 0, v___x_2485_);
lean_ctor_set(v___x_2486_, 1, v_found_2484_);
return v___x_2486_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__3(lean_object* v_shift_2487_, lean_object* v_numDigits_2488_, lean_object* v_es_2489_, lean_object* v_as_2490_, size_t v_sz_2491_, size_t v_i_2492_, lean_object* v_b_2493_){
_start:
{
lean_object* v_a_2495_; uint8_t v___x_2499_; 
v___x_2499_ = lean_usize_dec_lt(v_i_2492_, v_sz_2491_);
if (v___x_2499_ == 0)
{
return v_b_2493_;
}
else
{
lean_object* v_snd_2500_; lean_object* v___x_2502_; uint8_t v_isShared_2503_; uint8_t v_isSharedCheck_2534_; 
v_snd_2500_ = lean_ctor_get(v_b_2493_, 1);
v_isSharedCheck_2534_ = !lean_is_exclusive(v_b_2493_);
if (v_isSharedCheck_2534_ == 0)
{
lean_object* v_unused_2535_; 
v_unused_2535_ = lean_ctor_get(v_b_2493_, 0);
lean_dec(v_unused_2535_);
v___x_2502_ = v_b_2493_;
v_isShared_2503_ = v_isSharedCheck_2534_;
goto v_resetjp_2501_;
}
else
{
lean_inc(v_snd_2500_);
lean_dec(v_b_2493_);
v___x_2502_ = lean_box(0);
v_isShared_2503_ = v_isSharedCheck_2534_;
goto v_resetjp_2501_;
}
v_resetjp_2501_:
{
lean_object* v_a_2504_; uint64_t v_anchor_2505_; lean_object* v___x_2506_; uint64_t v___x_2507_; uint64_t v___x_2508_; lean_object* v___x_2509_; 
v_a_2504_ = lean_array_uget_borrowed(v_as_2490_, v_i_2492_);
v_anchor_2505_ = lean_ctor_get_uint64(v_a_2504_, sizeof(void*)*1);
v___x_2506_ = lean_box(0);
v___x_2507_ = lean_uint64_of_nat(v_shift_2487_);
v___x_2508_ = lean_uint64_shift_right(v_anchor_2505_, v___x_2507_);
v___x_2509_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1___redArg(v_snd_2500_, v___x_2508_);
if (lean_obj_tag(v___x_2509_) == 1)
{
lean_object* v_val_2510_; lean_object* v___x_2512_; uint8_t v_isShared_2513_; uint8_t v_isSharedCheck_2528_; 
v_val_2510_ = lean_ctor_get(v___x_2509_, 0);
v_isSharedCheck_2528_ = !lean_is_exclusive(v___x_2509_);
if (v_isSharedCheck_2528_ == 0)
{
v___x_2512_ = v___x_2509_;
v_isShared_2513_ = v_isSharedCheck_2528_;
goto v_resetjp_2511_;
}
else
{
lean_inc(v_val_2510_);
lean_dec(v___x_2509_);
v___x_2512_ = lean_box(0);
v_isShared_2513_ = v_isSharedCheck_2528_;
goto v_resetjp_2511_;
}
v_resetjp_2511_:
{
uint64_t v___x_2514_; uint8_t v___x_2515_; 
v___x_2514_ = lean_unbox_uint64(v_val_2510_);
lean_dec(v_val_2510_);
v___x_2515_ = lean_uint64_dec_eq(v___x_2514_, v_anchor_2505_);
if (v___x_2515_ == 0)
{
lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2520_; 
v___x_2516_ = lean_unsigned_to_nat(1u);
v___x_2517_ = lean_nat_add(v_numDigits_2488_, v___x_2516_);
v___x_2518_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0(v_es_2489_, v___x_2517_);
lean_dec(v___x_2517_);
if (v_isShared_2513_ == 0)
{
lean_ctor_set(v___x_2512_, 0, v___x_2518_);
v___x_2520_ = v___x_2512_;
goto v_reusejp_2519_;
}
else
{
lean_object* v_reuseFailAlloc_2524_; 
v_reuseFailAlloc_2524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2524_, 0, v___x_2518_);
v___x_2520_ = v_reuseFailAlloc_2524_;
goto v_reusejp_2519_;
}
v_reusejp_2519_:
{
lean_object* v___x_2522_; 
if (v_isShared_2503_ == 0)
{
lean_ctor_set(v___x_2502_, 0, v___x_2520_);
v___x_2522_ = v___x_2502_;
goto v_reusejp_2521_;
}
else
{
lean_object* v_reuseFailAlloc_2523_; 
v_reuseFailAlloc_2523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2523_, 0, v___x_2520_);
lean_ctor_set(v_reuseFailAlloc_2523_, 1, v_snd_2500_);
v___x_2522_ = v_reuseFailAlloc_2523_;
goto v_reusejp_2521_;
}
v_reusejp_2521_:
{
return v___x_2522_;
}
}
}
else
{
lean_object* v___x_2526_; 
lean_del_object(v___x_2512_);
if (v_isShared_2503_ == 0)
{
lean_ctor_set(v___x_2502_, 0, v___x_2506_);
v___x_2526_ = v___x_2502_;
goto v_reusejp_2525_;
}
else
{
lean_object* v_reuseFailAlloc_2527_; 
v_reuseFailAlloc_2527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2527_, 0, v___x_2506_);
lean_ctor_set(v_reuseFailAlloc_2527_, 1, v_snd_2500_);
v___x_2526_ = v_reuseFailAlloc_2527_;
goto v_reusejp_2525_;
}
v_reusejp_2525_:
{
v_a_2495_ = v___x_2526_;
goto v___jp_2494_;
}
}
}
}
else
{
lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2532_; 
lean_dec(v___x_2509_);
v___x_2529_ = lean_box_uint64(v_anchor_2505_);
v___x_2530_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2___redArg(v_snd_2500_, v___x_2508_, v___x_2529_);
if (v_isShared_2503_ == 0)
{
lean_ctor_set(v___x_2502_, 1, v___x_2530_);
lean_ctor_set(v___x_2502_, 0, v___x_2506_);
v___x_2532_ = v___x_2502_;
goto v_reusejp_2531_;
}
else
{
lean_object* v_reuseFailAlloc_2533_; 
v_reuseFailAlloc_2533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2533_, 0, v___x_2506_);
lean_ctor_set(v_reuseFailAlloc_2533_, 1, v___x_2530_);
v___x_2532_ = v_reuseFailAlloc_2533_;
goto v_reusejp_2531_;
}
v_reusejp_2531_:
{
v_a_2495_ = v___x_2532_;
goto v___jp_2494_;
}
}
}
}
v___jp_2494_:
{
size_t v___x_2496_; size_t v___x_2497_; 
v___x_2496_ = ((size_t)1ULL);
v___x_2497_ = lean_usize_add(v_i_2492_, v___x_2496_);
v_i_2492_ = v___x_2497_;
v_b_2493_ = v_a_2495_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0(lean_object* v_es_2536_, lean_object* v_numDigits_2537_){
_start:
{
lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; uint8_t v___x_2541_; 
v___x_2538_ = lean_unsigned_to_nat(4u);
v___x_2539_ = lean_nat_mul(v___x_2538_, v_numDigits_2537_);
v___x_2540_ = lean_unsigned_to_nat(64u);
v___x_2541_ = lean_nat_dec_lt(v___x_2539_, v___x_2540_);
if (v___x_2541_ == 0)
{
lean_dec(v___x_2539_);
lean_inc(v_numDigits_2537_);
return v_numDigits_2537_;
}
else
{
lean_object* v_shift_2542_; lean_object* v___x_2543_; size_t v_sz_2544_; size_t v___x_2545_; lean_object* v___x_2546_; lean_object* v_fst_2547_; 
v_shift_2542_ = lean_nat_sub(v___x_2540_, v___x_2539_);
lean_dec(v___x_2539_);
v___x_2543_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__2, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__2);
v_sz_2544_ = lean_array_size(v_es_2536_);
v___x_2545_ = ((size_t)0ULL);
v___x_2546_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__3(v_shift_2542_, v_numDigits_2537_, v_es_2536_, v_es_2536_, v_sz_2544_, v___x_2545_, v___x_2543_);
lean_dec(v_shift_2542_);
v_fst_2547_ = lean_ctor_get(v___x_2546_, 0);
lean_inc(v_fst_2547_);
lean_dec_ref(v___x_2546_);
if (lean_obj_tag(v_fst_2547_) == 0)
{
lean_inc(v_numDigits_2537_);
return v_numDigits_2537_;
}
else
{
lean_object* v_val_2548_; 
v_val_2548_ = lean_ctor_get(v_fst_2547_, 0);
lean_inc(v_val_2548_);
lean_dec_ref_known(v_fst_2547_, 1);
return v_val_2548_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___boxed(lean_object* v_es_2549_, lean_object* v_numDigits_2550_){
_start:
{
lean_object* v_res_2551_; 
v_res_2551_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0(v_es_2549_, v_numDigits_2550_);
lean_dec(v_numDigits_2550_);
lean_dec_ref(v_es_2549_);
return v_res_2551_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__3___boxed(lean_object* v_shift_2552_, lean_object* v_numDigits_2553_, lean_object* v_es_2554_, lean_object* v_as_2555_, lean_object* v_sz_2556_, lean_object* v_i_2557_, lean_object* v_b_2558_){
_start:
{
size_t v_sz_boxed_2559_; size_t v_i_boxed_2560_; lean_object* v_res_2561_; 
v_sz_boxed_2559_ = lean_unbox_usize(v_sz_2556_);
lean_dec(v_sz_2556_);
v_i_boxed_2560_ = lean_unbox_usize(v_i_2557_);
lean_dec(v_i_2557_);
v_res_2561_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__3(v_shift_2552_, v_numDigits_2553_, v_es_2554_, v_as_2555_, v_sz_boxed_2559_, v_i_boxed_2560_, v_b_2558_);
lean_dec_ref(v_as_2555_);
lean_dec_ref(v_es_2554_);
lean_dec(v_numDigits_2553_);
lean_dec(v_shift_2552_);
return v_res_2561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0(lean_object* v_es_2562_){
_start:
{
lean_object* v___x_2563_; lean_object* v___x_2564_; 
v___x_2563_ = lean_unsigned_to_nat(4u);
v___x_2564_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0(v_es_2562_, v___x_2563_);
return v___x_2564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0___boxed(lean_object* v_es_2565_){
_start:
{
lean_object* v_res_2566_; 
v_res_2566_ = l_Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0(v_es_2565_);
lean_dec_ref(v_es_2565_);
return v_res_2566_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1(lean_object* v___x_2570_, size_t v_sz_2571_, size_t v_i_2572_, lean_object* v_bs_2573_){
_start:
{
uint8_t v___x_2574_; 
v___x_2574_ = lean_usize_dec_lt(v_i_2572_, v_sz_2571_);
if (v___x_2574_ == 0)
{
return v_bs_2573_;
}
else
{
lean_object* v_v_2575_; lean_object* v_e_2576_; uint64_t v_anchor_2577_; lean_object* v___x_2578_; lean_object* v_bs_x27_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; double v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; size_t v___x_2595_; size_t v___x_2596_; lean_object* v___x_2597_; 
v_v_2575_ = lean_array_uget_borrowed(v_bs_2573_, v_i_2572_);
v_e_2576_ = lean_ctor_get(v_v_2575_, 0);
lean_inc_ref(v_e_2576_);
v_anchor_2577_ = lean_ctor_get_uint64(v_v_2575_, sizeof(void*)*1);
v___x_2578_ = lean_unsigned_to_nat(0u);
v_bs_x27_2579_ = lean_array_uset(v_bs_2573_, v_i_2572_, v___x_2578_);
v___x_2580_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1___closed__1));
v___x_2581_ = lean_box(0);
v___x_2582_ = lean_float_once(&l_Lean_Elab_Tactic_Grind_showState___redArg___closed__2, &l_Lean_Elab_Tactic_Grind_showState___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Grind_showState___redArg___closed__2);
v___x_2583_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_2584_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2584_, 0, v___x_2580_);
lean_ctor_set(v___x_2584_, 1, v___x_2581_);
lean_ctor_set(v___x_2584_, 2, v___x_2583_);
lean_ctor_set_float(v___x_2584_, sizeof(void*)*3, v___x_2582_);
lean_ctor_set_float(v___x_2584_, sizeof(void*)*3 + 8, v___x_2582_);
lean_ctor_set_uint8(v___x_2584_, sizeof(void*)*3 + 16, v___x_2574_);
v___x_2585_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__3);
v___x_2586_ = l_Lean_Meta_Grind_anchorToString(v___x_2570_, v_anchor_2577_);
v___x_2587_ = l_Lean_stringToMessageData(v___x_2586_);
v___x_2588_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2588_, 0, v___x_2585_);
lean_ctor_set(v___x_2588_, 1, v___x_2587_);
v___x_2589_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__5, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__5);
v___x_2590_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2590_, 0, v___x_2588_);
lean_ctor_set(v___x_2590_, 1, v___x_2589_);
v___x_2591_ = l_Lean_MessageData_ofExpr(v_e_2576_);
v___x_2592_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2592_, 0, v___x_2590_);
lean_ctor_set(v___x_2592_, 1, v___x_2591_);
v___x_2593_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg___closed__0));
v___x_2594_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2594_, 0, v___x_2584_);
lean_ctor_set(v___x_2594_, 1, v___x_2592_);
lean_ctor_set(v___x_2594_, 2, v___x_2593_);
v___x_2595_ = ((size_t)1ULL);
v___x_2596_ = lean_usize_add(v_i_2572_, v___x_2595_);
v___x_2597_ = lean_array_uset(v_bs_x27_2579_, v_i_2572_, v___x_2594_);
v_i_2572_ = v___x_2596_;
v_bs_2573_ = v___x_2597_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1___boxed(lean_object* v___x_2599_, lean_object* v_sz_2600_, lean_object* v_i_2601_, lean_object* v_bs_2602_){
_start:
{
size_t v_sz_boxed_2603_; size_t v_i_boxed_2604_; lean_object* v_res_2605_; 
v_sz_boxed_2603_ = lean_unbox_usize(v_sz_2600_);
lean_dec(v_sz_2600_);
v_i_boxed_2604_ = lean_unbox_usize(v_i_2601_);
lean_dec(v_i_2601_);
v_res_2605_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1(v___x_2599_, v_sz_boxed_2603_, v_i_boxed_2604_, v_bs_2602_);
lean_dec(v___x_2599_);
return v_res_2605_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2609_; uint8_t v___x_2610_; double v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; 
v___x_2609_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_2610_ = 0;
v___x_2611_ = lean_float_once(&l_Lean_Elab_Tactic_Grind_showState___redArg___closed__2, &l_Lean_Elab_Tactic_Grind_showState___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Grind_showState___redArg___closed__2);
v___x_2612_ = lean_box(0);
v___x_2613_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__1));
v___x_2614_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2614_, 0, v___x_2613_);
lean_ctor_set(v___x_2614_, 1, v___x_2612_);
lean_ctor_set(v___x_2614_, 2, v___x_2609_);
lean_ctor_set_float(v___x_2614_, sizeof(void*)*3, v___x_2611_);
lean_ctor_set_float(v___x_2614_, sizeof(void*)*3 + 8, v___x_2611_);
lean_ctor_set_uint8(v___x_2614_, sizeof(void*)*3 + 16, v___x_2610_);
return v___x_2614_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2618_; lean_object* v___x_2619_; 
v___x_2618_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__4));
v___x_2619_ = l_Lean_MessageData_ofFormat(v___x_2618_);
return v___x_2619_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0(lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_){
_start:
{
lean_object* v___x_2629_; 
v___x_2629_ = l_Lean_Elab_Tactic_Grind_getMainGoal___redArg(v___y_2621_, v___y_2624_, v___y_2625_, v___y_2626_, v___y_2627_);
if (lean_obj_tag(v___x_2629_) == 0)
{
lean_object* v_a_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; 
v_a_2630_ = lean_ctor_get(v___x_2629_, 0);
lean_inc(v_a_2630_);
lean_dec_ref_known(v___x_2629_, 1);
v___x_2631_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_getLocalTheoremAnchors___boxed), 11, 1);
lean_closure_set(v___x_2631_, 0, v_a_2630_);
v___x_2632_ = l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(v___x_2631_, v___y_2620_, v___y_2621_, v___y_2624_, v___y_2625_, v___y_2626_, v___y_2627_);
if (lean_obj_tag(v___x_2632_) == 0)
{
lean_object* v_a_2633_; lean_object* v___x_2634_; size_t v_sz_2635_; size_t v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; 
v_a_2633_ = lean_ctor_get(v___x_2632_, 0);
lean_inc(v_a_2633_);
lean_dec_ref_known(v___x_2632_, 1);
v___x_2634_ = l_Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0(v_a_2633_);
v_sz_2635_ = lean_array_size(v_a_2633_);
v___x_2636_ = ((size_t)0ULL);
v___x_2637_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1(v___x_2634_, v_sz_2635_, v___x_2636_, v_a_2633_);
lean_dec(v___x_2634_);
v___x_2638_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__2, &l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__2_once, _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__2);
v___x_2639_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__5, &l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__5);
v___x_2640_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2640_, 0, v___x_2638_);
lean_ctor_set(v___x_2640_, 1, v___x_2639_);
lean_ctor_set(v___x_2640_, 2, v___x_2637_);
v___x_2641_ = l_Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0(v___x_2640_, v___y_2620_, v___y_2621_, v___y_2622_, v___y_2623_, v___y_2624_, v___y_2625_, v___y_2626_, v___y_2627_);
return v___x_2641_;
}
else
{
lean_object* v_a_2642_; lean_object* v___x_2644_; uint8_t v_isShared_2645_; uint8_t v_isSharedCheck_2649_; 
v_a_2642_ = lean_ctor_get(v___x_2632_, 0);
v_isSharedCheck_2649_ = !lean_is_exclusive(v___x_2632_);
if (v_isSharedCheck_2649_ == 0)
{
v___x_2644_ = v___x_2632_;
v_isShared_2645_ = v_isSharedCheck_2649_;
goto v_resetjp_2643_;
}
else
{
lean_inc(v_a_2642_);
lean_dec(v___x_2632_);
v___x_2644_ = lean_box(0);
v_isShared_2645_ = v_isSharedCheck_2649_;
goto v_resetjp_2643_;
}
v_resetjp_2643_:
{
lean_object* v___x_2647_; 
if (v_isShared_2645_ == 0)
{
v___x_2647_ = v___x_2644_;
goto v_reusejp_2646_;
}
else
{
lean_object* v_reuseFailAlloc_2648_; 
v_reuseFailAlloc_2648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2648_, 0, v_a_2642_);
v___x_2647_ = v_reuseFailAlloc_2648_;
goto v_reusejp_2646_;
}
v_reusejp_2646_:
{
return v___x_2647_;
}
}
}
}
else
{
lean_object* v_a_2650_; lean_object* v___x_2652_; uint8_t v_isShared_2653_; uint8_t v_isSharedCheck_2657_; 
v_a_2650_ = lean_ctor_get(v___x_2629_, 0);
v_isSharedCheck_2657_ = !lean_is_exclusive(v___x_2629_);
if (v_isSharedCheck_2657_ == 0)
{
v___x_2652_ = v___x_2629_;
v_isShared_2653_ = v_isSharedCheck_2657_;
goto v_resetjp_2651_;
}
else
{
lean_inc(v_a_2650_);
lean_dec(v___x_2629_);
v___x_2652_ = lean_box(0);
v_isShared_2653_ = v_isSharedCheck_2657_;
goto v_resetjp_2651_;
}
v_resetjp_2651_:
{
lean_object* v___x_2655_; 
if (v_isShared_2653_ == 0)
{
v___x_2655_ = v___x_2652_;
goto v_reusejp_2654_;
}
else
{
lean_object* v_reuseFailAlloc_2656_; 
v_reuseFailAlloc_2656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2656_, 0, v_a_2650_);
v___x_2655_ = v_reuseFailAlloc_2656_;
goto v_reusejp_2654_;
}
v_reusejp_2654_:
{
return v___x_2655_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___boxed(lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_){
_start:
{
lean_object* v_res_2667_; 
v_res_2667_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0(v___y_2658_, v___y_2659_, v___y_2660_, v___y_2661_, v___y_2662_, v___y_2663_, v___y_2664_, v___y_2665_);
lean_dec(v___y_2665_);
lean_dec_ref(v___y_2664_);
lean_dec(v___y_2663_);
lean_dec_ref(v___y_2662_);
lean_dec(v___y_2661_);
lean_dec_ref(v___y_2660_);
lean_dec(v___y_2659_);
lean_dec_ref(v___y_2658_);
return v_res_2667_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg(lean_object* v_a_2669_, lean_object* v_a_2670_, lean_object* v_a_2671_, lean_object* v_a_2672_, lean_object* v_a_2673_, lean_object* v_a_2674_, lean_object* v_a_2675_, lean_object* v_a_2676_){
_start:
{
lean_object* v___f_2678_; lean_object* v___x_2679_; 
v___f_2678_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___closed__0));
v___x_2679_ = l_Lean_Elab_Tactic_Grind_withMainContext___redArg(v___f_2678_, v_a_2669_, v_a_2670_, v_a_2671_, v_a_2672_, v_a_2673_, v_a_2674_, v_a_2675_, v_a_2676_);
return v___x_2679_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___boxed(lean_object* v_a_2680_, lean_object* v_a_2681_, lean_object* v_a_2682_, lean_object* v_a_2683_, lean_object* v_a_2684_, lean_object* v_a_2685_, lean_object* v_a_2686_, lean_object* v_a_2687_, lean_object* v_a_2688_){
_start:
{
lean_object* v_res_2689_; 
v_res_2689_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg(v_a_2680_, v_a_2681_, v_a_2682_, v_a_2683_, v_a_2684_, v_a_2685_, v_a_2686_, v_a_2687_);
lean_dec(v_a_2687_);
lean_dec_ref(v_a_2686_);
lean_dec(v_a_2685_);
lean_dec_ref(v_a_2684_);
lean_dec(v_a_2683_);
lean_dec_ref(v_a_2682_);
lean_dec(v_a_2681_);
lean_dec_ref(v_a_2680_);
return v_res_2689_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms(lean_object* v_x_2690_, lean_object* v_a_2691_, lean_object* v_a_2692_, lean_object* v_a_2693_, lean_object* v_a_2694_, lean_object* v_a_2695_, lean_object* v_a_2696_, lean_object* v_a_2697_, lean_object* v_a_2698_){
_start:
{
lean_object* v___x_2700_; 
v___x_2700_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg(v_a_2691_, v_a_2692_, v_a_2693_, v_a_2694_, v_a_2695_, v_a_2696_, v_a_2697_, v_a_2698_);
return v___x_2700_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___boxed(lean_object* v_x_2701_, lean_object* v_a_2702_, lean_object* v_a_2703_, lean_object* v_a_2704_, lean_object* v_a_2705_, lean_object* v_a_2706_, lean_object* v_a_2707_, lean_object* v_a_2708_, lean_object* v_a_2709_, lean_object* v_a_2710_){
_start:
{
lean_object* v_res_2711_; 
v_res_2711_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms(v_x_2701_, v_a_2702_, v_a_2703_, v_a_2704_, v_a_2705_, v_a_2706_, v_a_2707_, v_a_2708_, v_a_2709_);
lean_dec(v_a_2709_);
lean_dec_ref(v_a_2708_);
lean_dec(v_a_2707_);
lean_dec_ref(v_a_2706_);
lean_dec(v_a_2705_);
lean_dec_ref(v_a_2704_);
lean_dec(v_a_2703_);
lean_dec_ref(v_a_2702_);
lean_dec(v_x_2701_);
return v_res_2711_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2712_, lean_object* v_m_2713_, uint64_t v_a_2714_){
_start:
{
lean_object* v___x_2715_; 
v___x_2715_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1___redArg(v_m_2713_, v_a_2714_);
return v___x_2715_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2716_, lean_object* v_m_2717_, lean_object* v_a_2718_){
_start:
{
uint64_t v_a_boxed_2719_; lean_object* v_res_2720_; 
v_a_boxed_2719_ = lean_unbox_uint64(v_a_2718_);
lean_dec_ref(v_a_2718_);
v_res_2720_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1(v_00_u03b2_2716_, v_m_2717_, v_a_boxed_2719_);
lean_dec_ref(v_m_2717_);
return v_res_2720_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_2721_, lean_object* v_m_2722_, uint64_t v_a_2723_, lean_object* v_b_2724_){
_start:
{
lean_object* v___x_2725_; 
v___x_2725_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2___redArg(v_m_2722_, v_a_2723_, v_b_2724_);
return v___x_2725_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_2726_, lean_object* v_m_2727_, lean_object* v_a_2728_, lean_object* v_b_2729_){
_start:
{
uint64_t v_a_boxed_2730_; lean_object* v_res_2731_; 
v_a_boxed_2730_ = lean_unbox_uint64(v_a_2728_);
lean_dec_ref(v_a_2728_);
v_res_2731_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2(v_00_u03b2_2726_, v_m_2727_, v_a_boxed_2730_, v_b_2729_);
return v_res_2731_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_2732_, uint64_t v_a_2733_, lean_object* v_x_2734_){
_start:
{
lean_object* v___x_2735_; 
v___x_2735_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1_spec__3___redArg(v_a_2733_, v_x_2734_);
return v___x_2735_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_2736_, lean_object* v_a_2737_, lean_object* v_x_2738_){
_start:
{
uint64_t v_a_boxed_2739_; lean_object* v_res_2740_; 
v_a_boxed_2739_ = lean_unbox_uint64(v_a_2737_);
lean_dec_ref(v_a_2737_);
v_res_2740_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_2736_, v_a_boxed_2739_, v_x_2738_);
lean_dec(v_x_2738_);
return v_res_2740_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_2741_, uint64_t v_a_2742_, lean_object* v_x_2743_){
_start:
{
uint8_t v___x_2744_; 
v___x_2744_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__5___redArg(v_a_2742_, v_x_2743_);
return v___x_2744_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b2_2745_, lean_object* v_a_2746_, lean_object* v_x_2747_){
_start:
{
uint64_t v_a_boxed_2748_; uint8_t v_res_2749_; lean_object* v_r_2750_; 
v_a_boxed_2748_ = lean_unbox_uint64(v_a_2746_);
lean_dec_ref(v_a_2746_);
v_res_2749_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__5(v_00_u03b2_2745_, v_a_boxed_2748_, v_x_2747_);
lean_dec(v_x_2747_);
v_r_2750_ = lean_box(v_res_2749_);
return v_r_2750_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6(lean_object* v_00_u03b2_2751_, lean_object* v_data_2752_){
_start:
{
lean_object* v___x_2753_; 
v___x_2753_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6___redArg(v_data_2752_);
return v___x_2753_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__7(lean_object* v_00_u03b2_2754_, uint64_t v_a_2755_, lean_object* v_b_2756_, lean_object* v_x_2757_){
_start:
{
lean_object* v___x_2758_; 
v___x_2758_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__7___redArg(v_a_2755_, v_b_2756_, v_x_2757_);
return v___x_2758_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__7___boxed(lean_object* v_00_u03b2_2759_, lean_object* v_a_2760_, lean_object* v_b_2761_, lean_object* v_x_2762_){
_start:
{
uint64_t v_a_boxed_2763_; lean_object* v_res_2764_; 
v_a_boxed_2763_ = lean_unbox_uint64(v_a_2760_);
lean_dec_ref(v_a_2760_);
v_res_2764_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__7(v_00_u03b2_2759_, v_a_boxed_2763_, v_b_2761_, v_x_2762_);
return v_res_2764_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6_spec__7(lean_object* v_00_u03b2_2765_, lean_object* v_i_2766_, lean_object* v_source_2767_, lean_object* v_target_2768_){
_start:
{
lean_object* v___x_2769_; 
v___x_2769_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6_spec__7___redArg(v_i_2766_, v_source_2767_, v_target_2768_);
return v___x_2769_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6_spec__7_spec__9(lean_object* v_00_u03b2_2770_, lean_object* v_x_2771_, lean_object* v_x_2772_){
_start:
{
lean_object* v___x_2773_; 
v___x_2773_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6_spec__7_spec__9___redArg(v_x_2771_, v_x_2772_);
return v___x_2773_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1(){
_start:
{
lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; 
v___x_2786_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_2787_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__1));
v___x_2788_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__3));
v___x_2789_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___boxed), 10, 0);
v___x_2790_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2786_, v___x_2787_, v___x_2788_, v___x_2789_);
return v___x_2790_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___boxed(lean_object* v_a_2791_){
_start:
{
lean_object* v_res_2792_; 
v_res_2792_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1();
return v_res_2792_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__0___redArg(lean_object* v_e_2793_, lean_object* v___y_2794_){
_start:
{
uint8_t v___x_2796_; 
v___x_2796_ = l_Lean_Expr_hasMVar(v_e_2793_);
if (v___x_2796_ == 0)
{
lean_object* v___x_2797_; 
v___x_2797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2797_, 0, v_e_2793_);
return v___x_2797_;
}
else
{
lean_object* v___x_2798_; lean_object* v_mctx_2799_; lean_object* v___x_2800_; lean_object* v_fst_2801_; lean_object* v_snd_2802_; lean_object* v___x_2803_; lean_object* v_cache_2804_; lean_object* v_zetaDeltaFVarIds_2805_; lean_object* v_postponed_2806_; lean_object* v_diag_2807_; lean_object* v___x_2809_; uint8_t v_isShared_2810_; uint8_t v_isSharedCheck_2816_; 
v___x_2798_ = lean_st_ref_get(v___y_2794_);
v_mctx_2799_ = lean_ctor_get(v___x_2798_, 0);
lean_inc_ref(v_mctx_2799_);
lean_dec(v___x_2798_);
v___x_2800_ = l_Lean_instantiateMVarsCore(v_mctx_2799_, v_e_2793_);
v_fst_2801_ = lean_ctor_get(v___x_2800_, 0);
lean_inc(v_fst_2801_);
v_snd_2802_ = lean_ctor_get(v___x_2800_, 1);
lean_inc(v_snd_2802_);
lean_dec_ref(v___x_2800_);
v___x_2803_ = lean_st_ref_take(v___y_2794_);
v_cache_2804_ = lean_ctor_get(v___x_2803_, 1);
v_zetaDeltaFVarIds_2805_ = lean_ctor_get(v___x_2803_, 2);
v_postponed_2806_ = lean_ctor_get(v___x_2803_, 3);
v_diag_2807_ = lean_ctor_get(v___x_2803_, 4);
v_isSharedCheck_2816_ = !lean_is_exclusive(v___x_2803_);
if (v_isSharedCheck_2816_ == 0)
{
lean_object* v_unused_2817_; 
v_unused_2817_ = lean_ctor_get(v___x_2803_, 0);
lean_dec(v_unused_2817_);
v___x_2809_ = v___x_2803_;
v_isShared_2810_ = v_isSharedCheck_2816_;
goto v_resetjp_2808_;
}
else
{
lean_inc(v_diag_2807_);
lean_inc(v_postponed_2806_);
lean_inc(v_zetaDeltaFVarIds_2805_);
lean_inc(v_cache_2804_);
lean_dec(v___x_2803_);
v___x_2809_ = lean_box(0);
v_isShared_2810_ = v_isSharedCheck_2816_;
goto v_resetjp_2808_;
}
v_resetjp_2808_:
{
lean_object* v___x_2812_; 
if (v_isShared_2810_ == 0)
{
lean_ctor_set(v___x_2809_, 0, v_snd_2802_);
v___x_2812_ = v___x_2809_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2815_; 
v_reuseFailAlloc_2815_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2815_, 0, v_snd_2802_);
lean_ctor_set(v_reuseFailAlloc_2815_, 1, v_cache_2804_);
lean_ctor_set(v_reuseFailAlloc_2815_, 2, v_zetaDeltaFVarIds_2805_);
lean_ctor_set(v_reuseFailAlloc_2815_, 3, v_postponed_2806_);
lean_ctor_set(v_reuseFailAlloc_2815_, 4, v_diag_2807_);
v___x_2812_ = v_reuseFailAlloc_2815_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
lean_object* v___x_2813_; lean_object* v___x_2814_; 
v___x_2813_ = lean_st_ref_put(v___y_2794_, v___x_2812_);
v___x_2814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2814_, 0, v_fst_2801_);
return v___x_2814_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__0___redArg___boxed(lean_object* v_e_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_){
_start:
{
lean_object* v_res_2821_; 
v_res_2821_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__0___redArg(v_e_2818_, v___y_2819_);
lean_dec(v___y_2819_);
return v_res_2821_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__0(lean_object* v_e_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_){
_start:
{
lean_object* v___x_2832_; 
v___x_2832_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__0___redArg(v_e_2822_, v___y_2828_);
return v___x_2832_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__0___boxed(lean_object* v_e_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_){
_start:
{
lean_object* v_res_2843_; 
v_res_2843_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__0(v_e_2833_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_, v___y_2839_, v___y_2840_, v___y_2841_);
lean_dec(v___y_2841_);
lean_dec_ref(v___y_2840_);
lean_dec(v___y_2839_);
lean_dec_ref(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec_ref(v___y_2836_);
lean_dec(v___y_2835_);
lean_dec_ref(v___y_2834_);
return v_res_2843_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___redArg___lam__0(lean_object* v_x_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_){
_start:
{
lean_object* v___x_2854_; 
lean_inc(v___y_2848_);
lean_inc_ref(v___y_2847_);
lean_inc(v___y_2846_);
lean_inc_ref(v___y_2845_);
v___x_2854_ = lean_apply_9(v_x_2844_, v___y_2845_, v___y_2846_, v___y_2847_, v___y_2848_, v___y_2849_, v___y_2850_, v___y_2851_, v___y_2852_, lean_box(0));
return v___x_2854_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___redArg___lam__0___boxed(lean_object* v_x_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_){
_start:
{
lean_object* v_res_2865_; 
v_res_2865_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___redArg___lam__0(v_x_2855_, v___y_2856_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_);
lean_dec(v___y_2859_);
lean_dec_ref(v___y_2858_);
lean_dec(v___y_2857_);
lean_dec_ref(v___y_2856_);
return v_res_2865_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___redArg(lean_object* v_mvarId_2866_, lean_object* v_x_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_){
_start:
{
lean_object* v___f_2877_; lean_object* v___x_2878_; 
lean_inc(v___y_2871_);
lean_inc_ref(v___y_2870_);
lean_inc(v___y_2869_);
lean_inc_ref(v___y_2868_);
v___f_2877_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_2877_, 0, v_x_2867_);
lean_closure_set(v___f_2877_, 1, v___y_2868_);
lean_closure_set(v___f_2877_, 2, v___y_2869_);
lean_closure_set(v___f_2877_, 3, v___y_2870_);
lean_closure_set(v___f_2877_, 4, v___y_2871_);
v___x_2878_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_2866_, v___f_2877_, v___y_2872_, v___y_2873_, v___y_2874_, v___y_2875_);
if (lean_obj_tag(v___x_2878_) == 0)
{
return v___x_2878_;
}
else
{
lean_object* v_a_2879_; lean_object* v___x_2881_; uint8_t v_isShared_2882_; uint8_t v_isSharedCheck_2886_; 
v_a_2879_ = lean_ctor_get(v___x_2878_, 0);
v_isSharedCheck_2886_ = !lean_is_exclusive(v___x_2878_);
if (v_isSharedCheck_2886_ == 0)
{
v___x_2881_ = v___x_2878_;
v_isShared_2882_ = v_isSharedCheck_2886_;
goto v_resetjp_2880_;
}
else
{
lean_inc(v_a_2879_);
lean_dec(v___x_2878_);
v___x_2881_ = lean_box(0);
v_isShared_2882_ = v_isSharedCheck_2886_;
goto v_resetjp_2880_;
}
v_resetjp_2880_:
{
lean_object* v___x_2884_; 
if (v_isShared_2882_ == 0)
{
v___x_2884_ = v___x_2881_;
goto v_reusejp_2883_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v_a_2879_);
v___x_2884_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2883_;
}
v_reusejp_2883_:
{
return v___x_2884_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___redArg___boxed(lean_object* v_mvarId_2887_, lean_object* v_x_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_){
_start:
{
lean_object* v_res_2898_; 
v_res_2898_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___redArg(v_mvarId_2887_, v_x_2888_, v___y_2889_, v___y_2890_, v___y_2891_, v___y_2892_, v___y_2893_, v___y_2894_, v___y_2895_, v___y_2896_);
lean_dec(v___y_2896_);
lean_dec_ref(v___y_2895_);
lean_dec(v___y_2894_);
lean_dec_ref(v___y_2893_);
lean_dec(v___y_2892_);
lean_dec_ref(v___y_2891_);
lean_dec(v___y_2890_);
lean_dec_ref(v___y_2889_);
return v_res_2898_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1(lean_object* v_00_u03b1_2899_, lean_object* v_mvarId_2900_, lean_object* v_x_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_){
_start:
{
lean_object* v___x_2911_; 
v___x_2911_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___redArg(v_mvarId_2900_, v_x_2901_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_);
return v___x_2911_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___boxed(lean_object* v_00_u03b1_2912_, lean_object* v_mvarId_2913_, lean_object* v_x_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_){
_start:
{
lean_object* v_res_2924_; 
v_res_2924_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1(v_00_u03b1_2912_, v_mvarId_2913_, v_x_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_);
lean_dec(v___y_2922_);
lean_dec_ref(v___y_2921_);
lean_dec(v___y_2920_);
lean_dec_ref(v___y_2919_);
lean_dec(v___y_2918_);
lean_dec_ref(v___y_2917_);
lean_dec(v___y_2916_);
lean_dec_ref(v___y_2915_);
return v_res_2924_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___lam__0(lean_object* v___x_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_){
_start:
{
lean_object* v___x_2935_; lean_object* v_a_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; 
v___x_2935_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__0___redArg(v___x_2925_, v___y_2931_);
v_a_2936_ = lean_ctor_get(v___x_2935_, 0);
lean_inc(v_a_2936_);
lean_dec_ref(v___x_2935_);
v___x_2937_ = l_Lean_MessageData_ofExpr(v_a_2936_);
v___x_2938_ = l_Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0(v___x_2937_, v___y_2926_, v___y_2927_, v___y_2928_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_, v___y_2933_);
return v___x_2938_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___lam__0___boxed(lean_object* v___x_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_){
_start:
{
lean_object* v_res_2949_; 
v_res_2949_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___lam__0(v___x_2939_, v___y_2940_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_, v___y_2945_, v___y_2946_, v___y_2947_);
lean_dec(v___y_2947_);
lean_dec_ref(v___y_2946_);
lean_dec(v___y_2945_);
lean_dec_ref(v___y_2944_);
lean_dec(v___y_2943_);
lean_dec_ref(v___y_2942_);
lean_dec(v___y_2941_);
lean_dec_ref(v___y_2940_);
return v_res_2949_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm(lean_object* v_stx_2964_, lean_object* v_a_2965_, lean_object* v_a_2966_, lean_object* v_a_2967_, lean_object* v_a_2968_, lean_object* v_a_2969_, lean_object* v_a_2970_, lean_object* v_a_2971_, lean_object* v_a_2972_){
_start:
{
lean_object* v___x_2974_; uint8_t v___x_2975_; 
v___x_2974_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__1));
lean_inc(v_stx_2964_);
v___x_2975_ = l_Lean_Syntax_isOfKind(v_stx_2964_, v___x_2974_);
if (v___x_2975_ == 0)
{
lean_object* v___x_2976_; 
lean_dec(v_stx_2964_);
v___x_2976_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_2976_;
}
else
{
lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; uint8_t v___x_2980_; 
v___x_2977_ = lean_unsigned_to_nat(1u);
v___x_2978_ = l_Lean_Syntax_getArg(v_stx_2964_, v___x_2977_);
lean_dec(v_stx_2964_);
v___x_2979_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__3));
lean_inc(v___x_2978_);
v___x_2980_ = l_Lean_Syntax_isOfKind(v___x_2978_, v___x_2979_);
if (v___x_2980_ == 0)
{
lean_object* v___x_2981_; 
lean_dec(v___x_2978_);
v___x_2981_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_2981_;
}
else
{
lean_object* v___x_2982_; 
v___x_2982_ = l_Lean_Elab_Tactic_Grind_getMainGoal___redArg(v_a_2966_, v_a_2969_, v_a_2970_, v_a_2971_, v_a_2972_);
if (lean_obj_tag(v___x_2982_) == 0)
{
lean_object* v_a_2983_; lean_object* v_mvarId_2984_; lean_object* v___x_2985_; 
v_a_2983_ = lean_ctor_get(v___x_2982_, 0);
lean_inc(v_a_2983_);
lean_dec_ref_known(v___x_2982_, 1);
v_mvarId_2984_ = lean_ctor_get(v_a_2983_, 1);
lean_inc(v_mvarId_2984_);
lean_dec(v_a_2983_);
v___x_2985_ = l_Lean_Elab_Tactic_Grind_evalGrindTactic(v___x_2978_, v_a_2965_, v_a_2966_, v_a_2967_, v_a_2968_, v_a_2969_, v_a_2970_, v_a_2971_, v_a_2972_);
if (lean_obj_tag(v___x_2985_) == 0)
{
lean_object* v___x_2986_; lean_object* v___f_2987_; lean_object* v___x_2988_; 
lean_dec_ref_known(v___x_2985_, 1);
lean_inc(v_mvarId_2984_);
v___x_2986_ = l_Lean_mkMVar(v_mvarId_2984_);
v___f_2987_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___lam__0___boxed), 10, 1);
lean_closure_set(v___f_2987_, 0, v___x_2986_);
v___x_2988_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___redArg(v_mvarId_2984_, v___f_2987_, v_a_2965_, v_a_2966_, v_a_2967_, v_a_2968_, v_a_2969_, v_a_2970_, v_a_2971_, v_a_2972_);
return v___x_2988_;
}
else
{
lean_dec(v_mvarId_2984_);
return v___x_2985_;
}
}
else
{
lean_object* v_a_2989_; lean_object* v___x_2991_; uint8_t v_isShared_2992_; uint8_t v_isSharedCheck_2996_; 
lean_dec(v___x_2978_);
v_a_2989_ = lean_ctor_get(v___x_2982_, 0);
v_isSharedCheck_2996_ = !lean_is_exclusive(v___x_2982_);
if (v_isSharedCheck_2996_ == 0)
{
v___x_2991_ = v___x_2982_;
v_isShared_2992_ = v_isSharedCheck_2996_;
goto v_resetjp_2990_;
}
else
{
lean_inc(v_a_2989_);
lean_dec(v___x_2982_);
v___x_2991_ = lean_box(0);
v_isShared_2992_ = v_isSharedCheck_2996_;
goto v_resetjp_2990_;
}
v_resetjp_2990_:
{
lean_object* v___x_2994_; 
if (v_isShared_2992_ == 0)
{
v___x_2994_ = v___x_2991_;
goto v_reusejp_2993_;
}
else
{
lean_object* v_reuseFailAlloc_2995_; 
v_reuseFailAlloc_2995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2995_, 0, v_a_2989_);
v___x_2994_ = v_reuseFailAlloc_2995_;
goto v_reusejp_2993_;
}
v_reusejp_2993_:
{
return v___x_2994_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___boxed(lean_object* v_stx_2997_, lean_object* v_a_2998_, lean_object* v_a_2999_, lean_object* v_a_3000_, lean_object* v_a_3001_, lean_object* v_a_3002_, lean_object* v_a_3003_, lean_object* v_a_3004_, lean_object* v_a_3005_, lean_object* v_a_3006_){
_start:
{
lean_object* v_res_3007_; 
v_res_3007_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm(v_stx_2997_, v_a_2998_, v_a_2999_, v_a_3000_, v_a_3001_, v_a_3002_, v_a_3003_, v_a_3004_, v_a_3005_);
lean_dec(v_a_3005_);
lean_dec_ref(v_a_3004_);
lean_dec(v_a_3003_);
lean_dec_ref(v_a_3002_);
lean_dec(v_a_3001_);
lean_dec_ref(v_a_3000_);
lean_dec(v_a_2999_);
lean_dec_ref(v_a_2998_);
return v_res_3007_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1(){
_start:
{
lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; 
v___x_3013_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_3014_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__1));
v___x_3015_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1___closed__1));
v___x_3016_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___boxed), 10, 0);
v___x_3017_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3013_, v___x_3014_, v___x_3015_, v___x_3016_);
return v___x_3017_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1___boxed(lean_object* v_a_3018_){
_start:
{
lean_object* v_res_3019_; 
v_res_3019_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1();
return v_res_3019_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Filter(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_PP(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_EMatchTheoremParam(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Split(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_ShowState(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Grind_Filter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_PP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_EMatchTheoremParam(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Grind_ShowState(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Grind_Filter(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_PP(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_EMatchTheoremParam(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Split(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Grind_ShowState(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Grind_Filter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_PP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_EMatchTheoremParam(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Grind_ShowState(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Grind_ShowState(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Grind_ShowState(builtin);
}
#ifdef __cplusplus
}
#endif
