// Lean compiler output
// Module: Lean.Elab.Tactic.Simpa
// Imports: public import Lean.Meta.Tactic.TryThis public import Lean.Elab.Tactic.Simp public import Lean.Elab.App
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
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_mkArray3___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_instInhabitedTacticM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_saveState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray2___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Syntax_unsetTrailing(lean_object*);
lean_object* l_Lean_Elab_Tactic_mkSimpOnly(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Context_setFailIfUnchanged(lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_Tactic_mkInitialTacticInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Meta_simpGoal(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_rename(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_filterOldMVars___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_logUnassignedAndAbort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_pushGoal___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_closeMainGoal___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Elab_Term_throwTypeMismatchError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_note(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_Linter_instInhabitedLinterSetsState_default;
extern lean_object* l_Lean_Linter_linterSetsExt;
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_LocalContext_getRoundtrippingUserName_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
extern lean_object* l_Lean_Linter_linterMessageTag;
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Meta_Tactic_TryThis_isValidTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_hint(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_elabTerm(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getExprAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvar___override(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_LocalContext_findFromUserName_x3f(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_MVarId_assumption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Simp_DischargeWrapper_with___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tactic_simp_trace;
lean_object* l_Lean_Meta_getSimpTheorems___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_mkSimpContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Context_setAutoUnfold(lean_object*);
lean_object* l_Lean_Elab_Tactic_withSimpDiagnostics___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_focus___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_initFn_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_initFn_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__0_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "linter"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__0_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__0_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__1_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "unnecessarySimpa"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__1_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__1_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__2_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__0_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__2_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__2_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__1_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(182, 23, 154, 96, 189, 166, 9, 1)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__2_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__2_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__3_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "enable the 'unnecessary simpa' linter"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__3_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__3_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__4_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__3_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__4_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__4_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__5_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__5_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__5_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__6_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__5_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__6_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__6_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__0_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(219, 182, 224, 198, 198, 122, 225, 30)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__6_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__6_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__1_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(171, 130, 7, 230, 108, 210, 159, 46)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__6_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__6_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_linter_unnecessarySimpa;
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Simpa_getLinterUnnecessarySimpa(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_getLinterUnnecessarySimpa___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "This linter can be disabled with `set_option "};
static const lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__0 = (const lean_object*)&l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__1;
static const lean_string_object l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " false`"};
static const lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__2 = (const lean_object*)&l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "`simp` already closes the goal"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__2_value),LEAN_SCALAR_PTR_LITERAL(99, 76, 33, 121, 85, 143, 17, 224)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Use `simp` instead of `simpa`:"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__4_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_instInhabitedTacticM___redArg___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "only"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "simpAutoUnfold"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "simp!"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__8_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simpTrace"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__9_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "simp\?"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__10_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "simpTraceArgsRest"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__11 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__11_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "simpArgs"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__12_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "tacticSimp\?!_"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__13 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__13_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simp\?!"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__14 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__14_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Type mismatch: After simplification, term"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17_spec__19_spec__23___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17_spec__19___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__19___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__20___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12___closed__0 = (const lean_object*)&l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12___closed__0_value;
static const lean_ctor_object l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12___closed__1 = (const lean_object*)&l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___closed__0;
static lean_once_cell_t l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___closed__1;
LEAN_EXPORT lean_object* l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__11_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__11___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__12___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "locationHyp"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "at"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "location"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Occurs check failed: Expression"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__6;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "\ncontains the goal "};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__7_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__8;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "this"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__9_value),LEAN_SCALAR_PTR_LITERAL(38, 116, 214, 236, 212, 160, 188, 150)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__10_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___boxed(lean_object**);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___boxed(lean_object**);
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Try this:"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Elab.Tactic.Simpa"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "_private.Lean.Elab.Tactic.Simpa.0.Lean.Elab.Tactic.Simpa.evalSimpaCore"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__4;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "using"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "using!"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "simpaUsingBang"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "simpaUsingBangArgsRest"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__8_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "!"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__9_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "tacticSimpa!_"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__10_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simpa!"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__11 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__11_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__12;
static const lean_closure_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_getSimpTheorems___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__13 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__13_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___boxed(lean_object**);
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "simpa"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__5_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__2_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(197, 186, 141, 63, 66, 208, 56, 113)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__2_value;
static const lean_closure_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__5_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__4_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(158, 198, 190, 154, 66, 126, 242, 208)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "simpaArgsRest"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__5_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__6_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__6_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__5_value),LEAN_SCALAR_PTR_LITERAL(137, 133, 181, 17, 86, 74, 251, 208)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__5_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__8_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__7_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__12(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__11_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17_spec__19(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17_spec__19_spec__23(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Simpa"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "evalSimpa"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__5_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2_value_aux_0),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(188, 230, 37, 137, 25, 71, 189, 138)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(228, 111, 162, 89, 60, 103, 42, 221)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(31) << 1) | 1)),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(90) << 1) | 1)),((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__0_value),((lean_object*)(((size_t)(43) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__1_value),((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(31) << 1) | 1)),((lean_object*)(((size_t)(47) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(31) << 1) | 1)),((lean_object*)(((size_t)(56) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__3_value),((lean_object*)(((size_t)(47) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__4_value),((lean_object*)(((size_t)(56) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___boxed(lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0___boxed(lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__5_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__0_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__0_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__7_value),LEAN_SCALAR_PTR_LITERAL(207, 241, 251, 37, 131, 174, 231, 55)}};
static const lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__5_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__2_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__8_value),LEAN_SCALAR_PTR_LITERAL(8, 141, 117, 125, 176, 67, 228, 117)}};
static const lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "evalSimpaUsingBang"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__5_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__1_value_aux_0),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__1_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(188, 230, 37, 137, 25, 71, 189, 138)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(114, 14, 13, 235, 216, 153, 126, 237)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_initFn_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
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
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_initFn_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_initFn_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_51_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__2_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_));
v___x_52_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__4_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_));
v___x_53_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__6_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_));
v___x_54_ = l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_initFn_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__spec__0(v___x_51_, v___x_52_, v___x_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4____boxed(lean_object* v_a_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_();
return v_res_56_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Simpa_getLinterUnnecessarySimpa(lean_object* v_o_57_){
_start:
{
lean_object* v___x_58_; uint8_t v___x_59_; 
v___x_58_ = l_Lean_linter_unnecessarySimpa;
v___x_59_ = l_Lean_Linter_getLinterValue(v___x_58_, v_o_57_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_getLinterUnnecessarySimpa___boxed(lean_object* v_o_60_){
_start:
{
uint8_t v_res_61_; lean_object* v_r_62_; 
v_res_61_ = l_Lean_Elab_Tactic_Simpa_getLinterUnnecessarySimpa(v_o_60_);
lean_dec_ref(v_o_60_);
v_r_62_ = lean_box(v_res_61_);
return v_r_62_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__3(lean_object* v_opts_63_, lean_object* v_opt_64_){
_start:
{
lean_object* v_name_65_; lean_object* v_defValue_66_; lean_object* v_map_67_; lean_object* v___x_68_; 
v_name_65_ = lean_ctor_get(v_opt_64_, 0);
v_defValue_66_ = lean_ctor_get(v_opt_64_, 1);
v_map_67_ = lean_ctor_get(v_opts_63_, 0);
v___x_68_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_67_, v_name_65_);
if (lean_obj_tag(v___x_68_) == 0)
{
uint8_t v___x_69_; 
v___x_69_ = lean_unbox(v_defValue_66_);
return v___x_69_;
}
else
{
lean_object* v_val_70_; 
v_val_70_ = lean_ctor_get(v___x_68_, 0);
lean_inc(v_val_70_);
lean_dec_ref_known(v___x_68_, 1);
if (lean_obj_tag(v_val_70_) == 1)
{
uint8_t v_v_71_; 
v_v_71_ = lean_ctor_get_uint8(v_val_70_, 0);
lean_dec_ref_known(v_val_70_, 0);
return v_v_71_;
}
else
{
uint8_t v___x_72_; 
lean_dec(v_val_70_);
v___x_72_ = lean_unbox(v_defValue_66_);
return v___x_72_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_opts_73_, lean_object* v_opt_74_){
_start:
{
uint8_t v_res_75_; lean_object* v_r_76_; 
v_res_75_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__3(v_opts_73_, v_opt_74_);
lean_dec_ref(v_opt_74_);
lean_dec_ref(v_opts_73_);
v_r_76_ = lean_box(v_res_75_);
return v_r_76_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0(uint8_t v___x_85_, lean_object* v_x_86_){
_start:
{
if (lean_obj_tag(v_x_86_) == 1)
{
lean_object* v_pre_87_; 
v_pre_87_ = lean_ctor_get(v_x_86_, 0);
switch(lean_obj_tag(v_pre_87_))
{
case 1:
{
lean_object* v_pre_88_; 
v_pre_88_ = lean_ctor_get(v_pre_87_, 0);
switch(lean_obj_tag(v_pre_88_))
{
case 0:
{
lean_object* v_str_89_; lean_object* v_str_90_; lean_object* v___x_91_; uint8_t v___x_92_; 
v_str_89_ = lean_ctor_get(v_x_86_, 1);
v_str_90_ = lean_ctor_get(v_pre_87_, 1);
v___x_91_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__0));
v___x_92_ = lean_string_dec_eq(v_str_90_, v___x_91_);
if (v___x_92_ == 0)
{
lean_object* v___x_93_; uint8_t v___x_94_; 
v___x_93_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__1));
v___x_94_ = lean_string_dec_eq(v_str_90_, v___x_93_);
if (v___x_94_ == 0)
{
return v___x_94_;
}
else
{
lean_object* v___x_95_; uint8_t v___x_96_; 
v___x_95_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__2));
v___x_96_ = lean_string_dec_eq(v_str_89_, v___x_95_);
return v___x_96_;
}
}
else
{
lean_object* v___x_97_; uint8_t v___x_98_; 
v___x_97_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__3));
v___x_98_ = lean_string_dec_eq(v_str_89_, v___x_97_);
return v___x_98_;
}
}
case 1:
{
lean_object* v_pre_99_; 
v_pre_99_ = lean_ctor_get(v_pre_88_, 0);
if (lean_obj_tag(v_pre_99_) == 0)
{
lean_object* v_str_100_; lean_object* v_str_101_; lean_object* v_str_102_; lean_object* v___x_103_; uint8_t v___x_104_; 
v_str_100_ = lean_ctor_get(v_x_86_, 1);
v_str_101_ = lean_ctor_get(v_pre_87_, 1);
v_str_102_ = lean_ctor_get(v_pre_88_, 1);
v___x_103_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__4));
v___x_104_ = lean_string_dec_eq(v_str_102_, v___x_103_);
if (v___x_104_ == 0)
{
return v___x_104_;
}
else
{
lean_object* v___x_105_; uint8_t v___x_106_; 
v___x_105_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__5));
v___x_106_ = lean_string_dec_eq(v_str_101_, v___x_105_);
if (v___x_106_ == 0)
{
return v___x_106_;
}
else
{
lean_object* v___x_107_; uint8_t v___x_108_; 
v___x_107_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__6));
v___x_108_ = lean_string_dec_eq(v_str_100_, v___x_107_);
return v___x_108_;
}
}
}
else
{
return v___x_85_;
}
}
default: 
{
return v___x_85_;
}
}
}
case 0:
{
lean_object* v_str_109_; lean_object* v___x_110_; uint8_t v___x_111_; 
v_str_109_ = lean_ctor_get(v_x_86_, 1);
v___x_110_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__7));
v___x_111_ = lean_string_dec_eq(v_str_109_, v___x_110_);
return v___x_111_;
}
default: 
{
return v___x_85_;
}
}
}
else
{
return v___x_85_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___boxed(lean_object* v___x_112_, lean_object* v_x_113_){
_start:
{
uint8_t v___x_4692__boxed_114_; uint8_t v_res_115_; lean_object* v_r_116_; 
v___x_4692__boxed_114_ = lean_unbox(v___x_112_);
v_res_115_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0(v___x_4692__boxed_114_, v_x_113_);
lean_dec(v_x_113_);
v_r_116_ = lean_box(v_res_115_);
return v_r_116_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__2(lean_object* v_msgData_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_){
_start:
{
lean_object* v___x_123_; lean_object* v_env_124_; uint8_t v___x_125_; lean_object* v_env_126_; lean_object* v___x_127_; lean_object* v_toCold_128_; lean_object* v_mctx_129_; lean_object* v_lctx_130_; lean_object* v_options_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_123_ = lean_st_ref_get(v___y_121_);
v_env_124_ = lean_ctor_get(v___x_123_, 0);
lean_inc_ref(v_env_124_);
lean_dec(v___x_123_);
v___x_125_ = 0;
v_env_126_ = l_Lean_Environment_setRecordingDeps(v_env_124_, v___x_125_);
v___x_127_ = lean_st_ref_get(v___y_119_);
v_toCold_128_ = lean_ctor_get(v___y_120_, 0);
v_mctx_129_ = lean_ctor_get(v___x_127_, 0);
lean_inc_ref(v_mctx_129_);
lean_dec(v___x_127_);
v_lctx_130_ = lean_ctor_get(v___y_118_, 2);
v_options_131_ = lean_ctor_get(v_toCold_128_, 2);
lean_inc_ref(v_options_131_);
lean_inc_ref(v_lctx_130_);
v___x_132_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_132_, 0, v_env_126_);
lean_ctor_set(v___x_132_, 1, v_mctx_129_);
lean_ctor_set(v___x_132_, 2, v_lctx_130_);
lean_ctor_set(v___x_132_, 3, v_options_131_);
v___x_133_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
lean_ctor_set(v___x_133_, 1, v_msgData_117_);
v___x_134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_134_, 0, v___x_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_msgData_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__2(v_msgData_135_, v___y_136_, v___y_137_, v___y_138_, v___y_139_);
lean_dec(v___y_139_);
lean_dec_ref(v___y_138_);
lean_dec(v___y_137_);
lean_dec_ref(v___y_136_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_146_, lean_object* v_msgData_147_, uint8_t v_severity_148_, uint8_t v_isSilent_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_){
_start:
{
uint8_t v___y_156_; uint8_t v___y_157_; lean_object* v___y_158_; lean_object* v___y_159_; lean_object* v___y_160_; lean_object* v___y_161_; lean_object* v___y_162_; lean_object* v_toCold_163_; lean_object* v___y_164_; lean_object* v___y_193_; lean_object* v___y_194_; lean_object* v___y_195_; uint8_t v___y_196_; uint8_t v___y_197_; uint8_t v___y_198_; lean_object* v___y_199_; lean_object* v___y_200_; lean_object* v___y_220_; lean_object* v___y_221_; uint8_t v___y_222_; lean_object* v___y_223_; uint8_t v___y_224_; uint8_t v___y_225_; lean_object* v___y_226_; uint8_t v___y_230_; uint8_t v___x_247_; uint8_t v___x_248_; 
v___x_247_ = 2;
v___x_248_ = l_Lean_instBEqMessageSeverity_beq(v_severity_148_, v___x_247_);
if (v___x_248_ == 0)
{
goto v___jp_240_;
}
else
{
uint8_t v___x_249_; 
lean_inc_ref(v_msgData_147_);
v___x_249_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_147_);
if (v___x_249_ == 0)
{
goto v___jp_240_;
}
else
{
lean_object* v___x_250_; lean_object* v___x_251_; 
lean_dec_ref(v_msgData_147_);
v___x_250_ = lean_box(0);
v___x_251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_251_, 0, v___x_250_);
return v___x_251_;
}
}
v___jp_155_:
{
lean_object* v_currNamespace_165_; lean_object* v_openDecls_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v_env_171_; lean_object* v_nextMacroScope_172_; lean_object* v_ngen_173_; lean_object* v_auxDeclNGen_174_; lean_object* v_traceState_175_; lean_object* v_cache_176_; lean_object* v_recordedDeps_177_; lean_object* v_messages_178_; lean_object* v_infoState_179_; lean_object* v_snapshotTasks_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_191_; 
v_currNamespace_165_ = lean_ctor_get(v_toCold_163_, 4);
v_openDecls_166_ = lean_ctor_get(v_toCold_163_, 5);
lean_inc(v_openDecls_166_);
lean_inc(v_currNamespace_165_);
v___x_167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_167_, 0, v_currNamespace_165_);
lean_ctor_set(v___x_167_, 1, v_openDecls_166_);
v___x_168_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_168_, 0, v___x_167_);
lean_ctor_set(v___x_168_, 1, v___y_161_);
lean_inc_ref(v___y_158_);
lean_inc_ref(v___y_162_);
v___x_169_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_169_, 0, v___y_162_);
lean_ctor_set(v___x_169_, 1, v___y_160_);
lean_ctor_set(v___x_169_, 2, v___y_159_);
lean_ctor_set(v___x_169_, 3, v___y_158_);
lean_ctor_set(v___x_169_, 4, v___x_168_);
lean_ctor_set_uint8(v___x_169_, sizeof(void*)*5, v___y_157_);
lean_ctor_set_uint8(v___x_169_, sizeof(void*)*5 + 1, v___y_156_);
lean_ctor_set_uint8(v___x_169_, sizeof(void*)*5 + 2, v_isSilent_149_);
v___x_170_ = lean_st_ref_take(v___y_164_);
v_env_171_ = lean_ctor_get(v___x_170_, 0);
v_nextMacroScope_172_ = lean_ctor_get(v___x_170_, 1);
v_ngen_173_ = lean_ctor_get(v___x_170_, 2);
v_auxDeclNGen_174_ = lean_ctor_get(v___x_170_, 3);
v_traceState_175_ = lean_ctor_get(v___x_170_, 4);
v_cache_176_ = lean_ctor_get(v___x_170_, 5);
v_recordedDeps_177_ = lean_ctor_get(v___x_170_, 6);
v_messages_178_ = lean_ctor_get(v___x_170_, 7);
v_infoState_179_ = lean_ctor_get(v___x_170_, 8);
v_snapshotTasks_180_ = lean_ctor_get(v___x_170_, 9);
v_isSharedCheck_191_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_191_ == 0)
{
v___x_182_ = v___x_170_;
v_isShared_183_ = v_isSharedCheck_191_;
goto v_resetjp_181_;
}
else
{
lean_inc(v_snapshotTasks_180_);
lean_inc(v_infoState_179_);
lean_inc(v_messages_178_);
lean_inc(v_recordedDeps_177_);
lean_inc(v_cache_176_);
lean_inc(v_traceState_175_);
lean_inc(v_auxDeclNGen_174_);
lean_inc(v_ngen_173_);
lean_inc(v_nextMacroScope_172_);
lean_inc(v_env_171_);
lean_dec(v___x_170_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_191_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_187_; 
v___x_184_ = lean_box(0);
v___x_185_ = l_Lean_MessageLog_add(v___x_169_, v_messages_178_);
if (v_isShared_183_ == 0)
{
lean_ctor_set(v___x_182_, 7, v___x_185_);
v___x_187_ = v___x_182_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v_env_171_);
lean_ctor_set(v_reuseFailAlloc_190_, 1, v_nextMacroScope_172_);
lean_ctor_set(v_reuseFailAlloc_190_, 2, v_ngen_173_);
lean_ctor_set(v_reuseFailAlloc_190_, 3, v_auxDeclNGen_174_);
lean_ctor_set(v_reuseFailAlloc_190_, 4, v_traceState_175_);
lean_ctor_set(v_reuseFailAlloc_190_, 5, v_cache_176_);
lean_ctor_set(v_reuseFailAlloc_190_, 6, v_recordedDeps_177_);
lean_ctor_set(v_reuseFailAlloc_190_, 7, v___x_185_);
lean_ctor_set(v_reuseFailAlloc_190_, 8, v_infoState_179_);
lean_ctor_set(v_reuseFailAlloc_190_, 9, v_snapshotTasks_180_);
v___x_187_ = v_reuseFailAlloc_190_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_188_ = lean_st_ref_put(v___y_164_, v___x_187_);
v___x_189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_189_, 0, v___x_184_);
return v___x_189_;
}
}
}
v___jp_192_:
{
lean_object* v_fileName_201_; lean_object* v_fileMap_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v_a_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_218_; 
v_fileName_201_ = lean_ctor_get(v___y_195_, 0);
v_fileMap_202_ = lean_ctor_get(v___y_195_, 1);
v___x_203_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_147_);
v___x_204_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__2(v___x_203_, v___y_150_, v___y_151_, v___y_152_, v___y_153_);
v_a_205_ = lean_ctor_get(v___x_204_, 0);
v_isSharedCheck_218_ = !lean_is_exclusive(v___x_204_);
if (v_isSharedCheck_218_ == 0)
{
v___x_207_ = v___x_204_;
v_isShared_208_ = v_isSharedCheck_218_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_a_205_);
lean_dec(v___x_204_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_218_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
lean_inc_ref_n(v_fileMap_202_, 2);
v___x_209_ = l_Lean_FileMap_toPosition(v_fileMap_202_, v___y_199_);
lean_dec(v___y_199_);
v___x_210_ = l_Lean_FileMap_toPosition(v_fileMap_202_, v___y_200_);
lean_dec(v___y_200_);
v___x_211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_211_, 0, v___x_210_);
v___x_212_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___closed__0));
if (v___y_198_ == 0)
{
lean_del_object(v___x_207_);
v___y_156_ = v___y_196_;
v___y_157_ = v___y_197_;
v___y_158_ = v___x_212_;
v___y_159_ = v___x_211_;
v___y_160_ = v___x_209_;
v___y_161_ = v_a_205_;
v___y_162_ = v_fileName_201_;
v_toCold_163_ = v___y_194_;
v___y_164_ = v___y_153_;
goto v___jp_155_;
}
else
{
uint8_t v___x_213_; 
lean_inc(v_a_205_);
lean_inc_ref(v___y_193_);
v___x_213_ = l_Lean_MessageData_hasTag(v___y_193_, v_a_205_);
if (v___x_213_ == 0)
{
lean_object* v___x_214_; lean_object* v___x_216_; 
lean_dec_ref_known(v___x_211_, 1);
lean_dec_ref(v___x_209_);
lean_dec(v_a_205_);
v___x_214_ = lean_box(0);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v___x_214_);
v___x_216_ = v___x_207_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v___x_214_);
v___x_216_ = v_reuseFailAlloc_217_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
return v___x_216_;
}
}
else
{
lean_del_object(v___x_207_);
v___y_156_ = v___y_196_;
v___y_157_ = v___y_197_;
v___y_158_ = v___x_212_;
v___y_159_ = v___x_211_;
v___y_160_ = v___x_209_;
v___y_161_ = v_a_205_;
v___y_162_ = v_fileName_201_;
v_toCold_163_ = v___y_194_;
v___y_164_ = v___y_153_;
goto v___jp_155_;
}
}
}
}
v___jp_219_:
{
lean_object* v___x_227_; 
v___x_227_ = l_Lean_Syntax_getTailPos_x3f(v___y_223_, v___y_222_);
lean_dec(v___y_223_);
if (lean_obj_tag(v___x_227_) == 0)
{
lean_inc(v___y_226_);
v___y_193_ = v___y_220_;
v___y_194_ = v___y_221_;
v___y_195_ = v___y_221_;
v___y_196_ = v___y_225_;
v___y_197_ = v___y_222_;
v___y_198_ = v___y_224_;
v___y_199_ = v___y_226_;
v___y_200_ = v___y_226_;
goto v___jp_192_;
}
else
{
lean_object* v_val_228_; 
v_val_228_ = lean_ctor_get(v___x_227_, 0);
lean_inc(v_val_228_);
lean_dec_ref_known(v___x_227_, 1);
v___y_193_ = v___y_220_;
v___y_194_ = v___y_221_;
v___y_195_ = v___y_221_;
v___y_196_ = v___y_225_;
v___y_197_ = v___y_222_;
v___y_198_ = v___y_224_;
v___y_199_ = v___y_226_;
v___y_200_ = v_val_228_;
goto v___jp_192_;
}
}
v___jp_229_:
{
lean_object* v_toCold_231_; lean_object* v_ref_232_; uint8_t v_suppressElabErrors_233_; lean_object* v_ref_234_; uint8_t v___x_235_; lean_object* v___f_236_; lean_object* v___x_237_; 
v_toCold_231_ = lean_ctor_get(v___y_152_, 0);
v_ref_232_ = lean_ctor_get(v___y_152_, 2);
v_suppressElabErrors_233_ = lean_ctor_get_uint8(v___y_152_, sizeof(void*)*3 + 2);
v_ref_234_ = l_Lean_replaceRef(v_ref_146_, v_ref_232_);
v___x_235_ = 0;
v___f_236_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___closed__1));
v___x_237_ = l_Lean_Syntax_getPos_x3f(v_ref_234_, v___x_235_);
if (lean_obj_tag(v___x_237_) == 0)
{
lean_object* v___x_238_; 
v___x_238_ = lean_unsigned_to_nat(0u);
v___y_220_ = v___f_236_;
v___y_221_ = v_toCold_231_;
v___y_222_ = v___x_235_;
v___y_223_ = v_ref_234_;
v___y_224_ = v_suppressElabErrors_233_;
v___y_225_ = v___y_230_;
v___y_226_ = v___x_238_;
goto v___jp_219_;
}
else
{
lean_object* v_val_239_; 
v_val_239_ = lean_ctor_get(v___x_237_, 0);
lean_inc(v_val_239_);
lean_dec_ref_known(v___x_237_, 1);
v___y_220_ = v___f_236_;
v___y_221_ = v_toCold_231_;
v___y_222_ = v___x_235_;
v___y_223_ = v_ref_234_;
v___y_224_ = v_suppressElabErrors_233_;
v___y_225_ = v___y_230_;
v___y_226_ = v_val_239_;
goto v___jp_219_;
}
}
v___jp_240_:
{
uint8_t v___x_241_; uint8_t v___x_242_; 
v___x_241_ = 1;
v___x_242_ = l_Lean_instBEqMessageSeverity_beq(v_severity_148_, v___x_241_);
if (v___x_242_ == 0)
{
v___y_230_ = v_severity_148_;
goto v___jp_229_;
}
else
{
lean_object* v___x_243_; lean_object* v___x_244_; uint8_t v___x_245_; 
v___x_243_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_152_);
v___x_244_ = l_Lean_warningAsError;
v___x_245_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__3(v___x_243_, v___x_244_);
lean_dec_ref(v___x_243_);
if (v___x_245_ == 0)
{
v___y_230_ = v_severity_148_;
goto v___jp_229_;
}
else
{
uint8_t v___x_246_; 
v___x_246_ = 2;
v___y_230_ = v___x_246_;
goto v___jp_229_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_252_, lean_object* v_msgData_253_, lean_object* v_severity_254_, lean_object* v_isSilent_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_){
_start:
{
uint8_t v_severity_boxed_261_; uint8_t v_isSilent_boxed_262_; lean_object* v_res_263_; 
v_severity_boxed_261_ = lean_unbox(v_severity_254_);
v_isSilent_boxed_262_ = lean_unbox(v_isSilent_255_);
v_res_263_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg(v_ref_252_, v_msgData_253_, v_severity_boxed_261_, v_isSilent_boxed_262_, v___y_256_, v___y_257_, v___y_258_, v___y_259_);
lean_dec(v___y_259_);
lean_dec_ref(v___y_258_);
lean_dec(v___y_257_);
lean_dec_ref(v___y_256_);
lean_dec(v_ref_252_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0(lean_object* v_ref_264_, lean_object* v_msgData_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_){
_start:
{
uint8_t v___x_275_; uint8_t v___x_276_; lean_object* v___x_277_; 
v___x_275_ = 1;
v___x_276_ = 0;
v___x_277_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg(v_ref_264_, v_msgData_265_, v___x_275_, v___x_276_, v___y_270_, v___y_271_, v___y_272_, v___y_273_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0___boxed(lean_object* v_ref_278_, lean_object* v_msgData_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0(v_ref_278_, v_msgData_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_, v___y_287_);
lean_dec(v___y_287_);
lean_dec_ref(v___y_286_);
lean_dec(v___y_285_);
lean_dec_ref(v___y_284_);
lean_dec(v___y_283_);
lean_dec_ref(v___y_282_);
lean_dec(v___y_281_);
lean_dec_ref(v___y_280_);
lean_dec(v_ref_278_);
return v_res_289_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__1(void){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_291_ = ((lean_object*)(l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__0));
v___x_292_ = l_Lean_stringToMessageData(v___x_291_);
return v___x_292_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__3(void){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = ((lean_object*)(l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__2));
v___x_295_ = l_Lean_stringToMessageData(v___x_294_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0(lean_object* v_linterOption_296_, lean_object* v_stx_297_, lean_object* v_msg_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_){
_start:
{
lean_object* v_name_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_326_; 
v_name_308_ = lean_ctor_get(v_linterOption_296_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v_linterOption_296_);
if (v_isSharedCheck_326_ == 0)
{
lean_object* v_unused_327_; 
v_unused_327_ = lean_ctor_get(v_linterOption_296_, 1);
lean_dec(v_unused_327_);
v___x_310_ = v_linterOption_296_;
v_isShared_311_ = v_isSharedCheck_326_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_name_308_);
lean_dec(v_linterOption_296_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_326_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_315_; 
v___x_312_ = lean_obj_once(&l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__1, &l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__1_once, _init_l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__1);
lean_inc(v_name_308_);
v___x_313_ = l_Lean_MessageData_ofName(v_name_308_);
if (v_isShared_311_ == 0)
{
lean_ctor_set_tag(v___x_310_, 7);
lean_ctor_set(v___x_310_, 1, v___x_313_);
lean_ctor_set(v___x_310_, 0, v___x_312_);
v___x_315_ = v___x_310_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v___x_312_);
lean_ctor_set(v_reuseFailAlloc_325_, 1, v___x_313_);
v___x_315_ = v_reuseFailAlloc_325_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v_disable_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
v___x_316_ = lean_obj_once(&l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__3, &l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__3_once, _init_l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__3);
v___x_317_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_317_, 0, v___x_315_);
lean_ctor_set(v___x_317_, 1, v___x_316_);
v_disable_318_ = l_Lean_MessageData_note(v___x_317_);
v___x_319_ = l_Lean_Linter_linterMessageTag;
v___x_320_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_320_, 0, v_msg_298_);
lean_ctor_set(v___x_320_, 1, v_disable_318_);
v___x_321_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_321_, 0, v___x_319_);
lean_ctor_set(v___x_321_, 1, v___x_320_);
v___x_322_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_322_, 0, v_name_308_);
lean_ctor_set(v___x_322_, 1, v___x_321_);
lean_inc(v_stx_297_);
v___x_323_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_323_, 0, v_stx_297_);
lean_ctor_set(v___x_323_, 1, v___x_322_);
v___x_324_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0(v_stx_297_, v___x_323_, v___y_299_, v___y_300_, v___y_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_, v___y_306_);
lean_dec(v_stx_297_);
return v___x_324_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___boxed(lean_object* v_linterOption_328_, lean_object* v_stx_329_, lean_object* v_msg_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0(v_linterOption_328_, v_stx_329_, v_msg_330_, v___y_331_, v___y_332_, v___y_333_, v___y_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_);
lean_dec(v___y_338_);
lean_dec_ref(v___y_337_);
lean_dec(v___y_336_);
lean_dec_ref(v___y_335_);
lean_dec(v___y_334_);
lean_dec_ref(v___y_333_);
lean_dec(v___y_332_);
lean_dec_ref(v___y_331_);
return v_res_340_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__1(void){
_start:
{
lean_object* v___x_342_; lean_object* v_msg_343_; 
v___x_342_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__0));
v_msg_343_ = l_Lean_stringToMessageData(v___x_342_);
return v_msg_343_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__6(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__5));
v___x_351_ = l_Lean_MessageData_ofFormat(v___x_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa(lean_object* v_initialState_352_, lean_object* v_ref_353_, lean_object* v_replacement_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_, lean_object* v_a_362_){
_start:
{
lean_object* v_msg_365_; lean_object* v___y_366_; lean_object* v___y_367_; lean_object* v___y_368_; lean_object* v___y_369_; lean_object* v___y_370_; lean_object* v___y_371_; lean_object* v___y_372_; lean_object* v___y_373_; lean_object* v_msg_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v_msg_376_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__1, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__1_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__1);
v___x_377_ = lean_box(0);
lean_inc(v_replacement_354_);
v___x_378_ = l_Lean_Meta_Tactic_TryThis_isValidTactic(v_initialState_352_, v_replacement_354_, v___x_377_, v_a_355_, v_a_356_, v_a_357_, v_a_358_, v_a_359_, v_a_360_, v_a_361_, v_a_362_);
if (lean_obj_tag(v___x_378_) == 0)
{
lean_object* v_a_379_; uint8_t v___x_380_; 
v_a_379_ = lean_ctor_get(v___x_378_, 0);
lean_inc(v_a_379_);
lean_dec_ref_known(v___x_378_, 1);
v___x_380_ = lean_unbox(v_a_379_);
lean_dec(v_a_379_);
if (v___x_380_ == 0)
{
lean_dec(v_replacement_354_);
v_msg_365_ = v_msg_376_;
v___y_366_ = v_a_355_;
v___y_367_ = v_a_356_;
v___y_368_ = v_a_357_;
v___y_369_ = v_a_358_;
v___y_370_ = v_a_359_;
v___y_371_ = v_a_360_;
v___y_372_ = v_a_361_;
v___y_373_ = v_a_362_;
goto v___jp_364_;
}
else
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; uint8_t v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; uint8_t v___x_391_; lean_object* v___x_392_; 
v___x_381_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__3));
v___x_382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_382_, 0, v___x_381_);
lean_ctor_set(v___x_382_, 1, v_replacement_354_);
v___x_383_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_383_, 0, v___x_382_);
lean_ctor_set(v___x_383_, 1, v___x_377_);
lean_ctor_set(v___x_383_, 2, v___x_377_);
lean_ctor_set(v___x_383_, 3, v___x_377_);
lean_ctor_set(v___x_383_, 4, v___x_377_);
lean_ctor_set(v___x_383_, 5, v___x_377_);
lean_inc(v_ref_353_);
v___x_384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_384_, 0, v_ref_353_);
v___x_385_ = 4;
lean_inc_ref(v___x_384_);
v___x_386_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_386_, 0, v___x_383_);
lean_ctor_set(v___x_386_, 1, v___x_384_);
lean_ctor_set(v___x_386_, 2, v___x_377_);
lean_ctor_set_uint8(v___x_386_, sizeof(void*)*3, v___x_385_);
v___x_387_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__6, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__6_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__6);
v___x_388_ = lean_unsigned_to_nat(1u);
v___x_389_ = lean_mk_empty_array_with_capacity(v___x_388_);
v___x_390_ = lean_array_push(v___x_389_, v___x_386_);
v___x_391_ = 0;
v___x_392_ = l_Lean_MessageData_hint(v___x_387_, v___x_390_, v___x_384_, v___x_377_, v___x_391_, v_a_361_, v_a_362_);
lean_dec_ref(v___x_390_);
if (lean_obj_tag(v___x_392_) == 0)
{
lean_object* v_a_393_; lean_object* v___x_394_; 
v_a_393_ = lean_ctor_get(v___x_392_, 0);
lean_inc(v_a_393_);
lean_dec_ref_known(v___x_392_, 1);
v___x_394_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_394_, 0, v_msg_376_);
lean_ctor_set(v___x_394_, 1, v_a_393_);
v_msg_365_ = v___x_394_;
v___y_366_ = v_a_355_;
v___y_367_ = v_a_356_;
v___y_368_ = v_a_357_;
v___y_369_ = v_a_358_;
v___y_370_ = v_a_359_;
v___y_371_ = v_a_360_;
v___y_372_ = v_a_361_;
v___y_373_ = v_a_362_;
goto v___jp_364_;
}
else
{
lean_object* v_a_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_402_; 
lean_dec(v_ref_353_);
v_a_395_ = lean_ctor_get(v___x_392_, 0);
v_isSharedCheck_402_ = !lean_is_exclusive(v___x_392_);
if (v_isSharedCheck_402_ == 0)
{
v___x_397_ = v___x_392_;
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_a_395_);
lean_dec(v___x_392_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_400_; 
if (v_isShared_398_ == 0)
{
v___x_400_ = v___x_397_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_a_395_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
}
}
}
else
{
lean_object* v_a_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_410_; 
lean_dec(v_replacement_354_);
lean_dec(v_ref_353_);
v_a_403_ = lean_ctor_get(v___x_378_, 0);
v_isSharedCheck_410_ = !lean_is_exclusive(v___x_378_);
if (v_isSharedCheck_410_ == 0)
{
v___x_405_ = v___x_378_;
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_a_403_);
lean_dec(v___x_378_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_408_; 
if (v_isShared_406_ == 0)
{
v___x_408_ = v___x_405_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v_a_403_);
v___x_408_ = v_reuseFailAlloc_409_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
return v___x_408_;
}
}
}
v___jp_364_:
{
lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_374_ = l_Lean_linter_unnecessarySimpa;
v___x_375_ = l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0(v___x_374_, v_ref_353_, v_msg_365_, v___y_366_, v___y_367_, v___y_368_, v___y_369_, v___y_370_, v___y_371_, v___y_372_, v___y_373_);
return v___x_375_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___boxed(lean_object* v_initialState_411_, lean_object* v_ref_412_, lean_object* v_replacement_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_, lean_object* v_a_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa(v_initialState_411_, v_ref_412_, v_replacement_413_, v_a_414_, v_a_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_, v_a_420_, v_a_421_);
lean_dec(v_a_421_);
lean_dec_ref(v_a_420_);
lean_dec(v_a_419_);
lean_dec_ref(v_a_418_);
lean_dec(v_a_417_);
lean_dec_ref(v_a_416_);
lean_dec(v_a_415_);
lean_dec_ref(v_a_414_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1(lean_object* v_ref_424_, lean_object* v_msgData_425_, uint8_t v_severity_426_, uint8_t v_isSilent_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_){
_start:
{
lean_object* v___x_437_; 
v___x_437_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg(v_ref_424_, v_msgData_425_, v_severity_426_, v_isSilent_427_, v___y_432_, v___y_433_, v___y_434_, v___y_435_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___boxed(lean_object* v_ref_438_, lean_object* v_msgData_439_, lean_object* v_severity_440_, lean_object* v_isSilent_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_){
_start:
{
uint8_t v_severity_boxed_451_; uint8_t v_isSilent_boxed_452_; lean_object* v_res_453_; 
v_severity_boxed_451_ = lean_unbox(v_severity_440_);
v_isSilent_boxed_452_ = lean_unbox(v_isSilent_441_);
v_res_453_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1(v_ref_438_, v_msgData_439_, v_severity_boxed_451_, v_isSilent_boxed_452_, v___y_442_, v___y_443_, v___y_444_, v___y_445_, v___y_446_, v___y_447_, v___y_448_, v___y_449_);
lean_dec(v___y_449_);
lean_dec_ref(v___y_448_);
lean_dec(v___y_447_);
lean_dec_ref(v___y_446_);
lean_dec(v___y_445_);
lean_dec_ref(v___y_444_);
lean_dec(v___y_443_);
lean_dec_ref(v___y_442_);
lean_dec(v_ref_438_);
return v_res_453_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; 
v___x_454_ = lean_box(0);
v___x_455_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_456_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_456_, 0, v___x_455_);
lean_ctor_set(v___x_456_, 1, v___x_454_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg(){
_start:
{
lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_458_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg___closed__0);
v___x_459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_459_, 0, v___x_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg___boxed(lean_object* v___y_460_){
_start:
{
lean_object* v_res_461_; 
v_res_461_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v_res_461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0(lean_object* v_00_u03b1_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_){
_start:
{
lean_object* v___x_472_; 
v___x_472_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___boxed(lean_object* v_00_u03b1_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0(v_00_u03b1_473_, v___y_474_, v___y_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_);
lean_dec(v___y_481_);
lean_dec_ref(v___y_480_);
lean_dec(v___y_479_);
lean_dec_ref(v___y_478_);
lean_dec(v___y_477_);
lean_dec_ref(v___y_476_);
lean_dec(v___y_475_);
lean_dec_ref(v___y_474_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg___lam__0(lean_object* v_x_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_){
_start:
{
lean_object* v___x_494_; 
lean_inc(v___y_488_);
lean_inc_ref(v___y_487_);
lean_inc(v___y_486_);
lean_inc_ref(v___y_485_);
v___x_494_ = lean_apply_9(v_x_484_, v___y_485_, v___y_486_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_, lean_box(0));
return v___x_494_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg___lam__0___boxed(lean_object* v_x_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg___lam__0(v_x_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_);
lean_dec(v___y_499_);
lean_dec_ref(v___y_498_);
lean_dec(v___y_497_);
lean_dec_ref(v___y_496_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg(lean_object* v_mvarId_506_, lean_object* v_x_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_){
_start:
{
lean_object* v___f_517_; lean_object* v___x_518_; 
lean_inc(v___y_511_);
lean_inc_ref(v___y_510_);
lean_inc(v___y_509_);
lean_inc_ref(v___y_508_);
v___f_517_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_517_, 0, v_x_507_);
lean_closure_set(v___f_517_, 1, v___y_508_);
lean_closure_set(v___f_517_, 2, v___y_509_);
lean_closure_set(v___f_517_, 3, v___y_510_);
lean_closure_set(v___f_517_, 4, v___y_511_);
v___x_518_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_506_, v___f_517_, v___y_512_, v___y_513_, v___y_514_, v___y_515_);
if (lean_obj_tag(v___x_518_) == 0)
{
return v___x_518_;
}
else
{
lean_object* v_a_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_526_; 
v_a_519_ = lean_ctor_get(v___x_518_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_518_);
if (v_isSharedCheck_526_ == 0)
{
v___x_521_ = v___x_518_;
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_a_519_);
lean_dec(v___x_518_);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg___boxed(lean_object* v_mvarId_527_, lean_object* v_x_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_){
_start:
{
lean_object* v_res_538_; 
v_res_538_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg(v_mvarId_527_, v_x_528_, v___y_529_, v___y_530_, v___y_531_, v___y_532_, v___y_533_, v___y_534_, v___y_535_, v___y_536_);
lean_dec(v___y_536_);
lean_dec_ref(v___y_535_);
lean_dec(v___y_534_);
lean_dec_ref(v___y_533_);
lean_dec(v___y_532_);
lean_dec_ref(v___y_531_);
lean_dec(v___y_530_);
lean_dec_ref(v___y_529_);
return v_res_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3(lean_object* v_00_u03b1_539_, lean_object* v_mvarId_540_, lean_object* v_x_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_){
_start:
{
lean_object* v___x_551_; 
v___x_551_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg(v_mvarId_540_, v_x_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_, v___y_547_, v___y_548_, v___y_549_);
return v___x_551_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___boxed(lean_object* v_00_u03b1_552_, lean_object* v_mvarId_553_, lean_object* v_x_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3(v_00_u03b1_552_, v_mvarId_553_, v_x_554_, v___y_555_, v___y_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_, v___y_561_, v___y_562_);
lean_dec(v___y_562_);
lean_dec_ref(v___y_561_);
lean_dec(v___y_560_);
lean_dec_ref(v___y_559_);
lean_dec(v___y_558_);
lean_dec_ref(v___y_557_);
lean_dec(v___y_556_);
lean_dec_ref(v___y_555_);
return v_res_564_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_565_ = lean_unsigned_to_nat(32u);
v___x_566_ = lean_mk_empty_array_with_capacity(v___x_565_);
v___x_567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_567_, 0, v___x_566_);
return v___x_567_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___closed__1(void){
_start:
{
size_t v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_568_ = ((size_t)5ULL);
v___x_569_ = lean_unsigned_to_nat(0u);
v___x_570_ = lean_unsigned_to_nat(32u);
v___x_571_ = lean_mk_empty_array_with_capacity(v___x_570_);
v___x_572_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___closed__0, &l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___closed__0);
v___x_573_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_573_, 0, v___x_572_);
lean_ctor_set(v___x_573_, 1, v___x_571_);
lean_ctor_set(v___x_573_, 2, v___x_569_);
lean_ctor_set(v___x_573_, 3, v___x_569_);
lean_ctor_set_usize(v___x_573_, 4, v___x_568_);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg(lean_object* v___y_574_){
_start:
{
lean_object* v___x_576_; lean_object* v_infoState_577_; lean_object* v_trees_578_; lean_object* v___x_579_; lean_object* v_infoState_580_; lean_object* v_env_581_; lean_object* v_nextMacroScope_582_; lean_object* v_ngen_583_; lean_object* v_auxDeclNGen_584_; lean_object* v_traceState_585_; lean_object* v_cache_586_; lean_object* v_recordedDeps_587_; lean_object* v_messages_588_; lean_object* v_snapshotTasks_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_610_; 
v___x_576_ = lean_st_ref_get(v___y_574_);
v_infoState_577_ = lean_ctor_get(v___x_576_, 8);
lean_inc_ref(v_infoState_577_);
lean_dec(v___x_576_);
v_trees_578_ = lean_ctor_get(v_infoState_577_, 2);
lean_inc_ref(v_trees_578_);
lean_dec_ref(v_infoState_577_);
v___x_579_ = lean_st_ref_take(v___y_574_);
v_infoState_580_ = lean_ctor_get(v___x_579_, 8);
v_env_581_ = lean_ctor_get(v___x_579_, 0);
v_nextMacroScope_582_ = lean_ctor_get(v___x_579_, 1);
v_ngen_583_ = lean_ctor_get(v___x_579_, 2);
v_auxDeclNGen_584_ = lean_ctor_get(v___x_579_, 3);
v_traceState_585_ = lean_ctor_get(v___x_579_, 4);
v_cache_586_ = lean_ctor_get(v___x_579_, 5);
v_recordedDeps_587_ = lean_ctor_get(v___x_579_, 6);
v_messages_588_ = lean_ctor_get(v___x_579_, 7);
v_snapshotTasks_589_ = lean_ctor_get(v___x_579_, 9);
v_isSharedCheck_610_ = !lean_is_exclusive(v___x_579_);
if (v_isSharedCheck_610_ == 0)
{
v___x_591_ = v___x_579_;
v_isShared_592_ = v_isSharedCheck_610_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_snapshotTasks_589_);
lean_inc(v_infoState_580_);
lean_inc(v_messages_588_);
lean_inc(v_recordedDeps_587_);
lean_inc(v_cache_586_);
lean_inc(v_traceState_585_);
lean_inc(v_auxDeclNGen_584_);
lean_inc(v_ngen_583_);
lean_inc(v_nextMacroScope_582_);
lean_inc(v_env_581_);
lean_dec(v___x_579_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_610_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
uint8_t v_enabled_593_; lean_object* v_assignment_594_; lean_object* v_lazyAssignment_595_; lean_object* v___x_597_; uint8_t v_isShared_598_; uint8_t v_isSharedCheck_608_; 
v_enabled_593_ = lean_ctor_get_uint8(v_infoState_580_, sizeof(void*)*3);
v_assignment_594_ = lean_ctor_get(v_infoState_580_, 0);
v_lazyAssignment_595_ = lean_ctor_get(v_infoState_580_, 1);
v_isSharedCheck_608_ = !lean_is_exclusive(v_infoState_580_);
if (v_isSharedCheck_608_ == 0)
{
lean_object* v_unused_609_; 
v_unused_609_ = lean_ctor_get(v_infoState_580_, 2);
lean_dec(v_unused_609_);
v___x_597_ = v_infoState_580_;
v_isShared_598_ = v_isSharedCheck_608_;
goto v_resetjp_596_;
}
else
{
lean_inc(v_lazyAssignment_595_);
lean_inc(v_assignment_594_);
lean_dec(v_infoState_580_);
v___x_597_ = lean_box(0);
v_isShared_598_ = v_isSharedCheck_608_;
goto v_resetjp_596_;
}
v_resetjp_596_:
{
lean_object* v___x_599_; lean_object* v___x_601_; 
v___x_599_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___closed__1, &l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___closed__1);
if (v_isShared_598_ == 0)
{
lean_ctor_set(v___x_597_, 2, v___x_599_);
v___x_601_ = v___x_597_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v_assignment_594_);
lean_ctor_set(v_reuseFailAlloc_607_, 1, v_lazyAssignment_595_);
lean_ctor_set(v_reuseFailAlloc_607_, 2, v___x_599_);
lean_ctor_set_uint8(v_reuseFailAlloc_607_, sizeof(void*)*3, v_enabled_593_);
v___x_601_ = v_reuseFailAlloc_607_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
lean_object* v___x_603_; 
if (v_isShared_592_ == 0)
{
lean_ctor_set(v___x_591_, 8, v___x_601_);
v___x_603_ = v___x_591_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v_env_581_);
lean_ctor_set(v_reuseFailAlloc_606_, 1, v_nextMacroScope_582_);
lean_ctor_set(v_reuseFailAlloc_606_, 2, v_ngen_583_);
lean_ctor_set(v_reuseFailAlloc_606_, 3, v_auxDeclNGen_584_);
lean_ctor_set(v_reuseFailAlloc_606_, 4, v_traceState_585_);
lean_ctor_set(v_reuseFailAlloc_606_, 5, v_cache_586_);
lean_ctor_set(v_reuseFailAlloc_606_, 6, v_recordedDeps_587_);
lean_ctor_set(v_reuseFailAlloc_606_, 7, v_messages_588_);
lean_ctor_set(v_reuseFailAlloc_606_, 8, v___x_601_);
lean_ctor_set(v_reuseFailAlloc_606_, 9, v_snapshotTasks_589_);
v___x_603_ = v_reuseFailAlloc_606_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_604_ = lean_st_ref_put(v___y_574_, v___x_603_);
v___x_605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_605_, 0, v_trees_578_);
return v___x_605_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___boxed(lean_object* v___y_611_, lean_object* v___y_612_){
_start:
{
lean_object* v_res_613_; 
v_res_613_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg(v___y_611_);
lean_dec(v___y_611_);
return v_res_613_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6(lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_){
_start:
{
lean_object* v___x_623_; 
v___x_623_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg(v___y_621_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___boxed(lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_){
_start:
{
lean_object* v_res_633_; 
v_res_633_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6(v___y_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
lean_dec(v___y_631_);
lean_dec_ref(v___y_630_);
lean_dec(v___y_629_);
lean_dec_ref(v___y_628_);
lean_dec(v___y_627_);
lean_dec_ref(v___y_626_);
lean_dec(v___y_625_);
lean_dec_ref(v___y_624_);
return v_res_633_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8(lean_object* v_msg_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_){
_start:
{
lean_object* v___f_645_; lean_object* v___x_91436__overap_646_; lean_object* v___x_647_; 
v___f_645_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8___closed__0));
v___x_91436__overap_646_ = lean_panic_fn_borrowed(v___f_645_, v_msg_635_);
lean_inc(v___y_643_);
lean_inc_ref(v___y_642_);
lean_inc(v___y_641_);
lean_inc_ref(v___y_640_);
lean_inc(v___y_639_);
lean_inc_ref(v___y_638_);
lean_inc(v___y_637_);
lean_inc_ref(v___y_636_);
v___x_647_ = lean_apply_9(v___x_91436__overap_646_, v___y_636_, v___y_637_, v___y_638_, v___y_639_, v___y_640_, v___y_641_, v___y_642_, v___y_643_, lean_box(0));
return v___x_647_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8___boxed(lean_object* v_msg_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_){
_start:
{
lean_object* v_res_658_; 
v_res_658_ = l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8(v_msg_648_, v___y_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_, v___y_656_);
lean_dec(v___y_656_);
lean_dec_ref(v___y_655_);
lean_dec(v___y_654_);
lean_dec_ref(v___y_653_);
lean_dec(v___y_652_);
lean_dec_ref(v___y_651_);
lean_dec(v___y_650_);
lean_dec_ref(v___y_649_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__0(lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_){
_start:
{
lean_object* v_ref_668_; uint8_t v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
v_ref_668_ = lean_ctor_get(v___y_665_, 2);
v___x_669_ = 0;
v___x_670_ = l_Lean_SourceInfo_fromRef(v_ref_668_, v___x_669_);
v___x_671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_671_, 0, v___x_670_);
return v___x_671_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__0___boxed(lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_){
_start:
{
lean_object* v_res_681_; 
v_res_681_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__0(v___y_672_, v___y_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_);
lean_dec(v___y_679_);
lean_dec_ref(v___y_678_);
lean_dec(v___y_677_);
lean_dec_ref(v___y_676_);
lean_dec(v___y_675_);
lean_dec_ref(v___y_674_);
lean_dec(v___y_673_);
lean_dec_ref(v___y_672_);
return v_res_681_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3(void){
_start:
{
lean_object* v___x_686_; 
v___x_686_ = l_Array_mkArray0___redArg();
return v___x_686_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1(lean_object* v_squeeze_698_, lean_object* v_unfold_699_, lean_object* v___x_700_, lean_object* v___x_701_, lean_object* v___x_702_, lean_object* v___x_703_, lean_object* v___x_704_, lean_object* v_args_705_, lean_object* v_only_706_, uint8_t v___x_707_, lean_object* v___y_708_, lean_object* v_loc_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_){
_start:
{
if (lean_obj_tag(v_squeeze_698_) == 0)
{
uint8_t v___x_719_; 
v___x_719_ = 0;
if (lean_obj_tag(v_unfold_699_) == 0)
{
lean_object* v_ref_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___y_728_; lean_object* v___y_729_; lean_object* v___y_730_; lean_object* v___y_731_; lean_object* v___y_737_; lean_object* v___y_738_; lean_object* v___y_739_; lean_object* v___y_746_; lean_object* v___y_747_; lean_object* v___y_760_; 
v_ref_720_ = lean_ctor_get(v___y_716_, 2);
v___x_721_ = l_Lean_SourceInfo_fromRef(v_ref_720_, v___x_719_);
v___x_722_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__0));
v___x_723_ = l_Lean_Name_mkStr4(v___x_700_, v___x_701_, v___x_702_, v___x_722_);
lean_inc(v___x_721_);
v___x_724_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_724_, 0, v___x_721_);
lean_ctor_set(v___x_724_, 1, v___x_722_);
v___x_725_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__2));
v___x_726_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3);
if (lean_obj_tag(v___y_708_) == 0)
{
lean_object* v___x_769_; 
v___x_769_ = lean_mk_empty_array_with_capacity(v___x_704_);
v___y_760_ = v___x_769_;
goto v___jp_759_;
}
else
{
lean_object* v_val_770_; lean_object* v___x_771_; lean_object* v___x_772_; 
v_val_770_ = lean_ctor_get(v___y_708_, 0);
lean_inc(v_val_770_);
lean_dec_ref_known(v___y_708_, 1);
v___x_771_ = lean_mk_empty_array_with_capacity(v___x_704_);
v___x_772_ = lean_array_push(v___x_771_, v_val_770_);
v___y_760_ = v___x_772_;
goto v___jp_759_;
}
v___jp_727_:
{
lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_732_ = l_Array_append___redArg(v___x_726_, v___y_731_);
lean_dec_ref(v___y_731_);
lean_inc(v___x_721_);
v___x_733_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_733_, 0, v___x_721_);
lean_ctor_set(v___x_733_, 1, v___x_725_);
lean_ctor_set(v___x_733_, 2, v___x_732_);
v___x_734_ = l_Lean_Syntax_node6(v___x_721_, v___x_723_, v___x_724_, v___x_703_, v___y_729_, v___y_730_, v___y_728_, v___x_733_);
v___x_735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_735_, 0, v___x_734_);
return v___x_735_;
}
v___jp_736_:
{
lean_object* v___x_740_; lean_object* v___x_741_; 
v___x_740_ = l_Array_append___redArg(v___x_726_, v___y_739_);
lean_dec_ref(v___y_739_);
lean_inc(v___x_721_);
v___x_741_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_741_, 0, v___x_721_);
lean_ctor_set(v___x_741_, 1, v___x_725_);
lean_ctor_set(v___x_741_, 2, v___x_740_);
if (lean_obj_tag(v_loc_709_) == 1)
{
lean_object* v_val_742_; lean_object* v___x_743_; 
v_val_742_ = lean_ctor_get(v_loc_709_, 0);
lean_inc(v_val_742_);
lean_dec_ref_known(v_loc_709_, 1);
v___x_743_ = l_Array_mkArray1___redArg(v_val_742_);
v___y_728_ = v___x_741_;
v___y_729_ = v___y_737_;
v___y_730_ = v___y_738_;
v___y_731_ = v___x_743_;
goto v___jp_727_;
}
else
{
lean_object* v___x_744_; 
lean_dec(v_loc_709_);
v___x_744_ = lean_mk_empty_array_with_capacity(v___x_704_);
v___y_728_ = v___x_741_;
v___y_729_ = v___y_737_;
v___y_730_ = v___y_738_;
v___y_731_ = v___x_744_;
goto v___jp_727_;
}
}
v___jp_745_:
{
lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_748_ = l_Array_append___redArg(v___x_726_, v___y_747_);
lean_dec_ref(v___y_747_);
lean_inc(v___x_721_);
v___x_749_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_749_, 0, v___x_721_);
lean_ctor_set(v___x_749_, 1, v___x_725_);
lean_ctor_set(v___x_749_, 2, v___x_748_);
if (lean_obj_tag(v_args_705_) == 1)
{
lean_object* v_val_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; 
v_val_750_ = lean_ctor_get(v_args_705_, 0);
v___x_751_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__4));
lean_inc_n(v___x_721_, 3);
v___x_752_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_752_, 0, v___x_721_);
lean_ctor_set(v___x_752_, 1, v___x_751_);
v___x_753_ = l_Array_append___redArg(v___x_726_, v_val_750_);
v___x_754_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_754_, 0, v___x_721_);
lean_ctor_set(v___x_754_, 1, v___x_725_);
lean_ctor_set(v___x_754_, 2, v___x_753_);
v___x_755_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__5));
v___x_756_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_756_, 0, v___x_721_);
lean_ctor_set(v___x_756_, 1, v___x_755_);
v___x_757_ = l_Array_mkArray3___redArg(v___x_752_, v___x_754_, v___x_756_);
v___y_737_ = v___y_746_;
v___y_738_ = v___x_749_;
v___y_739_ = v___x_757_;
goto v___jp_736_;
}
else
{
lean_object* v___x_758_; 
v___x_758_ = lean_mk_empty_array_with_capacity(v___x_704_);
v___y_737_ = v___y_746_;
v___y_738_ = v___x_749_;
v___y_739_ = v___x_758_;
goto v___jp_736_;
}
}
v___jp_759_:
{
lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_761_ = l_Array_append___redArg(v___x_726_, v___y_760_);
lean_dec_ref(v___y_760_);
lean_inc(v___x_721_);
v___x_762_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_762_, 0, v___x_721_);
lean_ctor_set(v___x_762_, 1, v___x_725_);
lean_ctor_set(v___x_762_, 2, v___x_761_);
if (lean_obj_tag(v_only_706_) == 1)
{
lean_object* v_val_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v_val_763_ = lean_ctor_get(v_only_706_, 0);
v___x_764_ = l_Lean_SourceInfo_fromRef(v_val_763_, v___x_707_);
v___x_765_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__6));
v___x_766_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_766_, 0, v___x_764_);
lean_ctor_set(v___x_766_, 1, v___x_765_);
v___x_767_ = l_Array_mkArray1___redArg(v___x_766_);
v___y_746_ = v___x_762_;
v___y_747_ = v___x_767_;
goto v___jp_745_;
}
else
{
lean_object* v___x_768_; 
v___x_768_ = lean_mk_empty_array_with_capacity(v___x_704_);
v___y_746_ = v___x_762_;
v___y_747_ = v___x_768_;
goto v___jp_745_;
}
}
}
else
{
lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_832_; 
v_isSharedCheck_832_ = !lean_is_exclusive(v_unfold_699_);
if (v_isSharedCheck_832_ == 0)
{
lean_object* v_unused_833_; 
v_unused_833_ = lean_ctor_get(v_unfold_699_, 0);
lean_dec(v_unused_833_);
v___x_774_ = v_unfold_699_;
v_isShared_775_ = v_isSharedCheck_832_;
goto v_resetjp_773_;
}
else
{
lean_dec(v_unfold_699_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_832_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v_ref_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___y_785_; lean_object* v___y_786_; lean_object* v___y_787_; lean_object* v___y_788_; lean_object* v___y_796_; lean_object* v___y_797_; lean_object* v___y_798_; lean_object* v___y_805_; lean_object* v___y_806_; lean_object* v___y_819_; 
v_ref_776_ = lean_ctor_get(v___y_716_, 2);
v___x_777_ = l_Lean_SourceInfo_fromRef(v_ref_776_, v___x_719_);
v___x_778_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__7));
v___x_779_ = l_Lean_Name_mkStr4(v___x_700_, v___x_701_, v___x_702_, v___x_778_);
v___x_780_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__8));
lean_inc(v___x_777_);
v___x_781_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_781_, 0, v___x_777_);
lean_ctor_set(v___x_781_, 1, v___x_780_);
v___x_782_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__2));
v___x_783_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3);
if (lean_obj_tag(v___y_708_) == 0)
{
lean_object* v___x_828_; 
v___x_828_ = lean_mk_empty_array_with_capacity(v___x_704_);
v___y_819_ = v___x_828_;
goto v___jp_818_;
}
else
{
lean_object* v_val_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v_val_829_ = lean_ctor_get(v___y_708_, 0);
lean_inc(v_val_829_);
lean_dec_ref_known(v___y_708_, 1);
v___x_830_ = lean_mk_empty_array_with_capacity(v___x_704_);
v___x_831_ = lean_array_push(v___x_830_, v_val_829_);
v___y_819_ = v___x_831_;
goto v___jp_818_;
}
v___jp_784_:
{
lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_793_; 
v___x_789_ = l_Array_append___redArg(v___x_783_, v___y_788_);
lean_dec_ref(v___y_788_);
lean_inc(v___x_777_);
v___x_790_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_790_, 0, v___x_777_);
lean_ctor_set(v___x_790_, 1, v___x_782_);
lean_ctor_set(v___x_790_, 2, v___x_789_);
v___x_791_ = l_Lean_Syntax_node6(v___x_777_, v___x_779_, v___x_781_, v___x_703_, v___y_786_, v___y_785_, v___y_787_, v___x_790_);
if (v_isShared_775_ == 0)
{
lean_ctor_set_tag(v___x_774_, 0);
lean_ctor_set(v___x_774_, 0, v___x_791_);
v___x_793_ = v___x_774_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v___x_791_);
v___x_793_ = v_reuseFailAlloc_794_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
return v___x_793_;
}
}
v___jp_795_:
{
lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_799_ = l_Array_append___redArg(v___x_783_, v___y_798_);
lean_dec_ref(v___y_798_);
lean_inc(v___x_777_);
v___x_800_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_800_, 0, v___x_777_);
lean_ctor_set(v___x_800_, 1, v___x_782_);
lean_ctor_set(v___x_800_, 2, v___x_799_);
if (lean_obj_tag(v_loc_709_) == 1)
{
lean_object* v_val_801_; lean_object* v___x_802_; 
v_val_801_ = lean_ctor_get(v_loc_709_, 0);
lean_inc(v_val_801_);
lean_dec_ref_known(v_loc_709_, 1);
v___x_802_ = l_Array_mkArray1___redArg(v_val_801_);
v___y_785_ = v___y_797_;
v___y_786_ = v___y_796_;
v___y_787_ = v___x_800_;
v___y_788_ = v___x_802_;
goto v___jp_784_;
}
else
{
lean_object* v___x_803_; 
lean_dec(v_loc_709_);
v___x_803_ = lean_mk_empty_array_with_capacity(v___x_704_);
v___y_785_ = v___y_797_;
v___y_786_ = v___y_796_;
v___y_787_ = v___x_800_;
v___y_788_ = v___x_803_;
goto v___jp_784_;
}
}
v___jp_804_:
{
lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_807_ = l_Array_append___redArg(v___x_783_, v___y_806_);
lean_dec_ref(v___y_806_);
lean_inc(v___x_777_);
v___x_808_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_808_, 0, v___x_777_);
lean_ctor_set(v___x_808_, 1, v___x_782_);
lean_ctor_set(v___x_808_, 2, v___x_807_);
if (lean_obj_tag(v_args_705_) == 1)
{
lean_object* v_val_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
v_val_809_ = lean_ctor_get(v_args_705_, 0);
v___x_810_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__4));
lean_inc_n(v___x_777_, 3);
v___x_811_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_811_, 0, v___x_777_);
lean_ctor_set(v___x_811_, 1, v___x_810_);
v___x_812_ = l_Array_append___redArg(v___x_783_, v_val_809_);
v___x_813_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_813_, 0, v___x_777_);
lean_ctor_set(v___x_813_, 1, v___x_782_);
lean_ctor_set(v___x_813_, 2, v___x_812_);
v___x_814_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__5));
v___x_815_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_815_, 0, v___x_777_);
lean_ctor_set(v___x_815_, 1, v___x_814_);
v___x_816_ = l_Array_mkArray3___redArg(v___x_811_, v___x_813_, v___x_815_);
v___y_796_ = v___y_805_;
v___y_797_ = v___x_808_;
v___y_798_ = v___x_816_;
goto v___jp_795_;
}
else
{
lean_object* v___x_817_; 
v___x_817_ = lean_mk_empty_array_with_capacity(v___x_704_);
v___y_796_ = v___y_805_;
v___y_797_ = v___x_808_;
v___y_798_ = v___x_817_;
goto v___jp_795_;
}
}
v___jp_818_:
{
lean_object* v___x_820_; lean_object* v___x_821_; 
v___x_820_ = l_Array_append___redArg(v___x_783_, v___y_819_);
lean_dec_ref(v___y_819_);
lean_inc(v___x_777_);
v___x_821_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_821_, 0, v___x_777_);
lean_ctor_set(v___x_821_, 1, v___x_782_);
lean_ctor_set(v___x_821_, 2, v___x_820_);
if (lean_obj_tag(v_only_706_) == 1)
{
lean_object* v_val_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; 
v_val_822_ = lean_ctor_get(v_only_706_, 0);
v___x_823_ = l_Lean_SourceInfo_fromRef(v_val_822_, v___x_707_);
v___x_824_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__6));
v___x_825_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_825_, 0, v___x_823_);
lean_ctor_set(v___x_825_, 1, v___x_824_);
v___x_826_ = l_Array_mkArray1___redArg(v___x_825_);
v___y_805_ = v___x_821_;
v___y_806_ = v___x_826_;
goto v___jp_804_;
}
else
{
lean_object* v___x_827_; 
v___x_827_ = lean_mk_empty_array_with_capacity(v___x_704_);
v___y_805_ = v___x_821_;
v___y_806_ = v___x_827_;
goto v___jp_804_;
}
}
}
}
}
else
{
lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_969_; 
v_isSharedCheck_969_ = !lean_is_exclusive(v_squeeze_698_);
if (v_isSharedCheck_969_ == 0)
{
lean_object* v_unused_970_; 
v_unused_970_ = lean_ctor_get(v_squeeze_698_, 0);
lean_dec(v_unused_970_);
v___x_835_ = v_squeeze_698_;
v_isShared_836_ = v_isSharedCheck_969_;
goto v_resetjp_834_;
}
else
{
lean_dec(v_squeeze_698_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_969_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
if (lean_obj_tag(v_unfold_699_) == 0)
{
lean_object* v_ref_837_; uint8_t v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___y_850_; lean_object* v___y_851_; lean_object* v___y_852_; lean_object* v___y_853_; lean_object* v___y_862_; lean_object* v___y_863_; lean_object* v___y_864_; lean_object* v___y_871_; lean_object* v___y_872_; lean_object* v___y_888_; 
v_ref_837_ = lean_ctor_get(v___y_716_, 2);
v___x_838_ = 0;
v___x_839_ = l_Lean_SourceInfo_fromRef(v_ref_837_, v___x_838_);
v___x_840_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__9));
lean_inc_ref_n(v___x_702_, 2);
lean_inc_ref_n(v___x_701_, 2);
lean_inc_ref_n(v___x_700_, 2);
v___x_841_ = l_Lean_Name_mkStr4(v___x_700_, v___x_701_, v___x_702_, v___x_840_);
v___x_842_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__10));
lean_inc_n(v___x_839_, 2);
v___x_843_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_843_, 0, v___x_839_);
lean_ctor_set(v___x_843_, 1, v___x_842_);
v___x_844_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__2));
v___x_845_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3);
v___x_846_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_846_, 0, v___x_839_);
lean_ctor_set(v___x_846_, 1, v___x_844_);
lean_ctor_set(v___x_846_, 2, v___x_845_);
v___x_847_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__11));
v___x_848_ = l_Lean_Name_mkStr4(v___x_700_, v___x_701_, v___x_702_, v___x_847_);
if (lean_obj_tag(v___y_708_) == 0)
{
lean_object* v___x_897_; 
v___x_897_ = lean_mk_empty_array_with_capacity(v___x_704_);
v___y_888_ = v___x_897_;
goto v___jp_887_;
}
else
{
lean_object* v_val_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
v_val_898_ = lean_ctor_get(v___y_708_, 0);
lean_inc(v_val_898_);
lean_dec_ref_known(v___y_708_, 1);
v___x_899_ = lean_mk_empty_array_with_capacity(v___x_704_);
v___x_900_ = lean_array_push(v___x_899_, v_val_898_);
v___y_888_ = v___x_900_;
goto v___jp_887_;
}
v___jp_849_:
{
lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_859_; 
v___x_854_ = l_Array_append___redArg(v___x_845_, v___y_853_);
lean_dec_ref(v___y_853_);
lean_inc_n(v___x_839_, 2);
v___x_855_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_855_, 0, v___x_839_);
lean_ctor_set(v___x_855_, 1, v___x_844_);
lean_ctor_set(v___x_855_, 2, v___x_854_);
v___x_856_ = l_Lean_Syntax_node5(v___x_839_, v___x_848_, v___x_703_, v___y_850_, v___y_851_, v___y_852_, v___x_855_);
v___x_857_ = l_Lean_Syntax_node3(v___x_839_, v___x_841_, v___x_843_, v___x_846_, v___x_856_);
if (v_isShared_836_ == 0)
{
lean_ctor_set_tag(v___x_835_, 0);
lean_ctor_set(v___x_835_, 0, v___x_857_);
v___x_859_ = v___x_835_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v___x_857_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
return v___x_859_;
}
}
v___jp_861_:
{
lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_865_ = l_Array_append___redArg(v___x_845_, v___y_864_);
lean_dec_ref(v___y_864_);
lean_inc(v___x_839_);
v___x_866_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_866_, 0, v___x_839_);
lean_ctor_set(v___x_866_, 1, v___x_844_);
lean_ctor_set(v___x_866_, 2, v___x_865_);
if (lean_obj_tag(v_loc_709_) == 1)
{
lean_object* v_val_867_; lean_object* v___x_868_; 
v_val_867_ = lean_ctor_get(v_loc_709_, 0);
lean_inc(v_val_867_);
lean_dec_ref_known(v_loc_709_, 1);
v___x_868_ = l_Array_mkArray1___redArg(v_val_867_);
v___y_850_ = v___y_862_;
v___y_851_ = v___y_863_;
v___y_852_ = v___x_866_;
v___y_853_ = v___x_868_;
goto v___jp_849_;
}
else
{
lean_object* v___x_869_; 
lean_dec(v_loc_709_);
v___x_869_ = lean_mk_empty_array_with_capacity(v___x_704_);
v___y_850_ = v___y_862_;
v___y_851_ = v___y_863_;
v___y_852_ = v___x_866_;
v___y_853_ = v___x_869_;
goto v___jp_849_;
}
}
v___jp_870_:
{
lean_object* v___x_873_; lean_object* v___x_874_; 
v___x_873_ = l_Array_append___redArg(v___x_845_, v___y_872_);
lean_dec_ref(v___y_872_);
lean_inc(v___x_839_);
v___x_874_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_874_, 0, v___x_839_);
lean_ctor_set(v___x_874_, 1, v___x_844_);
lean_ctor_set(v___x_874_, 2, v___x_873_);
if (lean_obj_tag(v_args_705_) == 1)
{
lean_object* v_val_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v_val_875_ = lean_ctor_get(v_args_705_, 0);
v___x_876_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__12));
v___x_877_ = l_Lean_Name_mkStr4(v___x_700_, v___x_701_, v___x_702_, v___x_876_);
v___x_878_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__4));
lean_inc_n(v___x_839_, 4);
v___x_879_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_879_, 0, v___x_839_);
lean_ctor_set(v___x_879_, 1, v___x_878_);
v___x_880_ = l_Array_append___redArg(v___x_845_, v_val_875_);
v___x_881_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_881_, 0, v___x_839_);
lean_ctor_set(v___x_881_, 1, v___x_844_);
lean_ctor_set(v___x_881_, 2, v___x_880_);
v___x_882_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__5));
v___x_883_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_883_, 0, v___x_839_);
lean_ctor_set(v___x_883_, 1, v___x_882_);
v___x_884_ = l_Lean_Syntax_node3(v___x_839_, v___x_877_, v___x_879_, v___x_881_, v___x_883_);
v___x_885_ = l_Array_mkArray1___redArg(v___x_884_);
v___y_862_ = v___y_871_;
v___y_863_ = v___x_874_;
v___y_864_ = v___x_885_;
goto v___jp_861_;
}
else
{
lean_object* v___x_886_; 
lean_dec_ref(v___x_702_);
lean_dec_ref(v___x_701_);
lean_dec_ref(v___x_700_);
v___x_886_ = lean_mk_empty_array_with_capacity(v___x_704_);
v___y_862_ = v___y_871_;
v___y_863_ = v___x_874_;
v___y_864_ = v___x_886_;
goto v___jp_861_;
}
}
v___jp_887_:
{
lean_object* v___x_889_; lean_object* v___x_890_; 
v___x_889_ = l_Array_append___redArg(v___x_845_, v___y_888_);
lean_dec_ref(v___y_888_);
lean_inc(v___x_839_);
v___x_890_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_890_, 0, v___x_839_);
lean_ctor_set(v___x_890_, 1, v___x_844_);
lean_ctor_set(v___x_890_, 2, v___x_889_);
if (lean_obj_tag(v_only_706_) == 1)
{
lean_object* v_val_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
v_val_891_ = lean_ctor_get(v_only_706_, 0);
v___x_892_ = l_Lean_SourceInfo_fromRef(v_val_891_, v___x_707_);
v___x_893_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__6));
v___x_894_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_894_, 0, v___x_892_);
lean_ctor_set(v___x_894_, 1, v___x_893_);
v___x_895_ = l_Array_mkArray1___redArg(v___x_894_);
v___y_871_ = v___x_890_;
v___y_872_ = v___x_895_;
goto v___jp_870_;
}
else
{
lean_object* v___x_896_; 
v___x_896_ = lean_mk_empty_array_with_capacity(v___x_704_);
v___y_871_ = v___x_890_;
v___y_872_ = v___x_896_;
goto v___jp_870_;
}
}
}
else
{
lean_object* v___x_902_; uint8_t v_isShared_903_; uint8_t v_isSharedCheck_967_; 
lean_del_object(v___x_835_);
v_isSharedCheck_967_ = !lean_is_exclusive(v_unfold_699_);
if (v_isSharedCheck_967_ == 0)
{
lean_object* v_unused_968_; 
v_unused_968_ = lean_ctor_get(v_unfold_699_, 0);
lean_dec(v_unused_968_);
v___x_902_ = v_unfold_699_;
v_isShared_903_ = v_isSharedCheck_967_;
goto v_resetjp_901_;
}
else
{
lean_dec(v_unfold_699_);
v___x_902_ = lean_box(0);
v_isShared_903_ = v_isSharedCheck_967_;
goto v_resetjp_901_;
}
v_resetjp_901_:
{
lean_object* v_ref_904_; uint8_t v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___y_916_; lean_object* v___y_917_; lean_object* v___y_918_; lean_object* v___y_919_; lean_object* v___y_928_; lean_object* v___y_929_; lean_object* v___y_930_; lean_object* v___y_937_; lean_object* v___y_938_; lean_object* v___y_954_; 
v_ref_904_ = lean_ctor_get(v___y_716_, 2);
v___x_905_ = 0;
v___x_906_ = l_Lean_SourceInfo_fromRef(v_ref_904_, v___x_905_);
v___x_907_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__13));
lean_inc_ref_n(v___x_702_, 2);
lean_inc_ref_n(v___x_701_, 2);
lean_inc_ref_n(v___x_700_, 2);
v___x_908_ = l_Lean_Name_mkStr4(v___x_700_, v___x_701_, v___x_702_, v___x_907_);
v___x_909_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__14));
lean_inc(v___x_906_);
v___x_910_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_910_, 0, v___x_906_);
lean_ctor_set(v___x_910_, 1, v___x_909_);
v___x_911_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__11));
v___x_912_ = l_Lean_Name_mkStr4(v___x_700_, v___x_701_, v___x_702_, v___x_911_);
v___x_913_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__2));
v___x_914_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3);
if (lean_obj_tag(v___y_708_) == 0)
{
lean_object* v___x_963_; 
v___x_963_ = lean_mk_empty_array_with_capacity(v___x_704_);
v___y_954_ = v___x_963_;
goto v___jp_953_;
}
else
{
lean_object* v_val_964_; lean_object* v___x_965_; lean_object* v___x_966_; 
v_val_964_ = lean_ctor_get(v___y_708_, 0);
lean_inc(v_val_964_);
lean_dec_ref_known(v___y_708_, 1);
v___x_965_ = lean_mk_empty_array_with_capacity(v___x_704_);
v___x_966_ = lean_array_push(v___x_965_, v_val_964_);
v___y_954_ = v___x_966_;
goto v___jp_953_;
}
v___jp_915_:
{
lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_925_; 
v___x_920_ = l_Array_append___redArg(v___x_914_, v___y_919_);
lean_dec_ref(v___y_919_);
lean_inc_n(v___x_906_, 2);
v___x_921_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_921_, 0, v___x_906_);
lean_ctor_set(v___x_921_, 1, v___x_913_);
lean_ctor_set(v___x_921_, 2, v___x_920_);
v___x_922_ = l_Lean_Syntax_node5(v___x_906_, v___x_912_, v___x_703_, v___y_918_, v___y_916_, v___y_917_, v___x_921_);
v___x_923_ = l_Lean_Syntax_node2(v___x_906_, v___x_908_, v___x_910_, v___x_922_);
if (v_isShared_903_ == 0)
{
lean_ctor_set_tag(v___x_902_, 0);
lean_ctor_set(v___x_902_, 0, v___x_923_);
v___x_925_ = v___x_902_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v___x_923_);
v___x_925_ = v_reuseFailAlloc_926_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
return v___x_925_;
}
}
v___jp_927_:
{
lean_object* v___x_931_; lean_object* v___x_932_; 
v___x_931_ = l_Array_append___redArg(v___x_914_, v___y_930_);
lean_dec_ref(v___y_930_);
lean_inc(v___x_906_);
v___x_932_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_932_, 0, v___x_906_);
lean_ctor_set(v___x_932_, 1, v___x_913_);
lean_ctor_set(v___x_932_, 2, v___x_931_);
if (lean_obj_tag(v_loc_709_) == 1)
{
lean_object* v_val_933_; lean_object* v___x_934_; 
v_val_933_ = lean_ctor_get(v_loc_709_, 0);
lean_inc(v_val_933_);
lean_dec_ref_known(v_loc_709_, 1);
v___x_934_ = l_Array_mkArray1___redArg(v_val_933_);
v___y_916_ = v___y_928_;
v___y_917_ = v___x_932_;
v___y_918_ = v___y_929_;
v___y_919_ = v___x_934_;
goto v___jp_915_;
}
else
{
lean_object* v___x_935_; 
lean_dec(v_loc_709_);
v___x_935_ = lean_mk_empty_array_with_capacity(v___x_704_);
v___y_916_ = v___y_928_;
v___y_917_ = v___x_932_;
v___y_918_ = v___y_929_;
v___y_919_ = v___x_935_;
goto v___jp_915_;
}
}
v___jp_936_:
{
lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_939_ = l_Array_append___redArg(v___x_914_, v___y_938_);
lean_dec_ref(v___y_938_);
lean_inc(v___x_906_);
v___x_940_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_940_, 0, v___x_906_);
lean_ctor_set(v___x_940_, 1, v___x_913_);
lean_ctor_set(v___x_940_, 2, v___x_939_);
if (lean_obj_tag(v_args_705_) == 1)
{
lean_object* v_val_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; 
v_val_941_ = lean_ctor_get(v_args_705_, 0);
v___x_942_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__12));
v___x_943_ = l_Lean_Name_mkStr4(v___x_700_, v___x_701_, v___x_702_, v___x_942_);
v___x_944_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__4));
lean_inc_n(v___x_906_, 4);
v___x_945_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_945_, 0, v___x_906_);
lean_ctor_set(v___x_945_, 1, v___x_944_);
v___x_946_ = l_Array_append___redArg(v___x_914_, v_val_941_);
v___x_947_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_947_, 0, v___x_906_);
lean_ctor_set(v___x_947_, 1, v___x_913_);
lean_ctor_set(v___x_947_, 2, v___x_946_);
v___x_948_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__5));
v___x_949_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_949_, 0, v___x_906_);
lean_ctor_set(v___x_949_, 1, v___x_948_);
v___x_950_ = l_Lean_Syntax_node3(v___x_906_, v___x_943_, v___x_945_, v___x_947_, v___x_949_);
v___x_951_ = l_Array_mkArray1___redArg(v___x_950_);
v___y_928_ = v___x_940_;
v___y_929_ = v___y_937_;
v___y_930_ = v___x_951_;
goto v___jp_927_;
}
else
{
lean_object* v___x_952_; 
lean_dec_ref(v___x_702_);
lean_dec_ref(v___x_701_);
lean_dec_ref(v___x_700_);
v___x_952_ = lean_mk_empty_array_with_capacity(v___x_704_);
v___y_928_ = v___x_940_;
v___y_929_ = v___y_937_;
v___y_930_ = v___x_952_;
goto v___jp_927_;
}
}
v___jp_953_:
{
lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_955_ = l_Array_append___redArg(v___x_914_, v___y_954_);
lean_dec_ref(v___y_954_);
lean_inc(v___x_906_);
v___x_956_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_956_, 0, v___x_906_);
lean_ctor_set(v___x_956_, 1, v___x_913_);
lean_ctor_set(v___x_956_, 2, v___x_955_);
if (lean_obj_tag(v_only_706_) == 1)
{
lean_object* v_val_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; 
v_val_957_ = lean_ctor_get(v_only_706_, 0);
v___x_958_ = l_Lean_SourceInfo_fromRef(v_val_957_, v___x_707_);
v___x_959_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__6));
v___x_960_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_960_, 0, v___x_958_);
lean_ctor_set(v___x_960_, 1, v___x_959_);
v___x_961_ = l_Array_mkArray1___redArg(v___x_960_);
v___y_937_ = v___x_956_;
v___y_938_ = v___x_961_;
goto v___jp_936_;
}
else
{
lean_object* v___x_962_; 
v___x_962_ = lean_mk_empty_array_with_capacity(v___x_704_);
v___y_937_ = v___x_956_;
v___y_938_ = v___x_962_;
goto v___jp_936_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___boxed(lean_object** _args){
lean_object* v_squeeze_971_ = _args[0];
lean_object* v_unfold_972_ = _args[1];
lean_object* v___x_973_ = _args[2];
lean_object* v___x_974_ = _args[3];
lean_object* v___x_975_ = _args[4];
lean_object* v___x_976_ = _args[5];
lean_object* v___x_977_ = _args[6];
lean_object* v_args_978_ = _args[7];
lean_object* v_only_979_ = _args[8];
lean_object* v___x_980_ = _args[9];
lean_object* v___y_981_ = _args[10];
lean_object* v_loc_982_ = _args[11];
lean_object* v___y_983_ = _args[12];
lean_object* v___y_984_ = _args[13];
lean_object* v___y_985_ = _args[14];
lean_object* v___y_986_ = _args[15];
lean_object* v___y_987_ = _args[16];
lean_object* v___y_988_ = _args[17];
lean_object* v___y_989_ = _args[18];
lean_object* v___y_990_ = _args[19];
lean_object* v___y_991_ = _args[20];
_start:
{
uint8_t v___x_100577__boxed_992_; lean_object* v_res_993_; 
v___x_100577__boxed_992_ = lean_unbox(v___x_980_);
v_res_993_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1(v_squeeze_971_, v_unfold_972_, v___x_973_, v___x_974_, v___x_975_, v___x_976_, v___x_977_, v_args_978_, v_only_979_, v___x_100577__boxed_992_, v___y_981_, v_loc_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_);
lean_dec(v___y_990_);
lean_dec_ref(v___y_989_);
lean_dec(v___y_988_);
lean_dec_ref(v___y_987_);
lean_dec(v___y_986_);
lean_dec_ref(v___y_985_);
lean_dec(v___y_984_);
lean_dec_ref(v___y_983_);
lean_dec(v_only_979_);
lean_dec(v_args_978_);
lean_dec(v___x_977_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__2(lean_object* v_a_994_, lean_object* v_trees_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_){
_start:
{
lean_object* v___x_1005_; 
lean_inc(v___y_1003_);
lean_inc_ref(v___y_1002_);
lean_inc(v___y_1001_);
lean_inc_ref(v___y_1000_);
lean_inc(v___y_999_);
lean_inc_ref(v___y_998_);
lean_inc(v___y_997_);
lean_inc_ref(v___y_996_);
v___x_1005_ = lean_apply_9(v_a_994_, v___y_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_, lean_box(0));
if (lean_obj_tag(v___x_1005_) == 0)
{
lean_object* v_a_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1014_; 
v_a_1006_ = lean_ctor_get(v___x_1005_, 0);
v_isSharedCheck_1014_ = !lean_is_exclusive(v___x_1005_);
if (v_isSharedCheck_1014_ == 0)
{
v___x_1008_ = v___x_1005_;
v_isShared_1009_ = v_isSharedCheck_1014_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_a_1006_);
lean_dec(v___x_1005_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1014_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v___x_1010_; lean_object* v___x_1012_; 
v___x_1010_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1010_, 0, v_a_1006_);
lean_ctor_set(v___x_1010_, 1, v_trees_995_);
if (v_isShared_1009_ == 0)
{
lean_ctor_set(v___x_1008_, 0, v___x_1010_);
v___x_1012_ = v___x_1008_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v___x_1010_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
return v___x_1012_;
}
}
}
else
{
lean_object* v_a_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1022_; 
lean_dec_ref(v_trees_995_);
v_a_1015_ = lean_ctor_get(v___x_1005_, 0);
v_isSharedCheck_1022_ = !lean_is_exclusive(v___x_1005_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_1017_ = v___x_1005_;
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
else
{
lean_inc(v_a_1015_);
lean_dec(v___x_1005_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
lean_object* v___x_1020_; 
if (v_isShared_1018_ == 0)
{
v___x_1020_ = v___x_1017_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v_a_1015_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
return v___x_1020_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__2___boxed(lean_object* v_a_1023_, lean_object* v_trees_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_){
_start:
{
lean_object* v_res_1034_; 
v_res_1034_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__2(v_a_1023_, v_trees_1024_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_);
lean_dec(v___y_1032_);
lean_dec_ref(v___y_1031_);
lean_dec(v___y_1030_);
lean_dec_ref(v___y_1029_);
lean_dec(v___y_1028_);
lean_dec_ref(v___y_1027_);
lean_dec(v___y_1026_);
lean_dec_ref(v___y_1025_);
return v_res_1034_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3(uint8_t v_useReducible_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_){
_start:
{
lean_object* v___x_1047_; uint8_t v_foApprox_1048_; uint8_t v_ctxApprox_1049_; uint8_t v_quasiPatternApprox_1050_; uint8_t v_constApprox_1051_; uint8_t v_isDefEqStuckEx_1052_; uint8_t v_unificationHints_1053_; uint8_t v_proofIrrelevance_1054_; uint8_t v_offsetCnstrs_1055_; uint8_t v_transparency_1056_; uint8_t v_etaStruct_1057_; uint8_t v_univApprox_1058_; uint8_t v_iota_1059_; uint8_t v_beta_1060_; uint8_t v_proj_1061_; uint8_t v_zeta_1062_; uint8_t v_zetaDelta_1063_; uint8_t v_zetaUnused_1064_; uint8_t v_zetaHave_1065_; uint8_t v_canUnfoldPredicateConfig_1066_; lean_object* v___x_1068_; uint8_t v_isShared_1069_; uint8_t v_isSharedCheck_1087_; 
v___x_1047_ = l_Lean_Meta_Context_config(v___y_1042_);
v_foApprox_1048_ = lean_ctor_get_uint8(v___x_1047_, 0);
v_ctxApprox_1049_ = lean_ctor_get_uint8(v___x_1047_, 1);
v_quasiPatternApprox_1050_ = lean_ctor_get_uint8(v___x_1047_, 2);
v_constApprox_1051_ = lean_ctor_get_uint8(v___x_1047_, 3);
v_isDefEqStuckEx_1052_ = lean_ctor_get_uint8(v___x_1047_, 4);
v_unificationHints_1053_ = lean_ctor_get_uint8(v___x_1047_, 5);
v_proofIrrelevance_1054_ = lean_ctor_get_uint8(v___x_1047_, 6);
v_offsetCnstrs_1055_ = lean_ctor_get_uint8(v___x_1047_, 8);
v_transparency_1056_ = lean_ctor_get_uint8(v___x_1047_, 9);
v_etaStruct_1057_ = lean_ctor_get_uint8(v___x_1047_, 10);
v_univApprox_1058_ = lean_ctor_get_uint8(v___x_1047_, 11);
v_iota_1059_ = lean_ctor_get_uint8(v___x_1047_, 12);
v_beta_1060_ = lean_ctor_get_uint8(v___x_1047_, 13);
v_proj_1061_ = lean_ctor_get_uint8(v___x_1047_, 14);
v_zeta_1062_ = lean_ctor_get_uint8(v___x_1047_, 15);
v_zetaDelta_1063_ = lean_ctor_get_uint8(v___x_1047_, 16);
v_zetaUnused_1064_ = lean_ctor_get_uint8(v___x_1047_, 17);
v_zetaHave_1065_ = lean_ctor_get_uint8(v___x_1047_, 18);
v_canUnfoldPredicateConfig_1066_ = lean_ctor_get_uint8(v___x_1047_, 19);
v_isSharedCheck_1087_ = !lean_is_exclusive(v___x_1047_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1068_ = v___x_1047_;
v_isShared_1069_ = v_isSharedCheck_1087_;
goto v_resetjp_1067_;
}
else
{
lean_dec(v___x_1047_);
v___x_1068_ = lean_box(0);
v_isShared_1069_ = v_isSharedCheck_1087_;
goto v_resetjp_1067_;
}
v_resetjp_1067_:
{
uint8_t v_trackZetaDelta_1070_; lean_object* v_zetaDeltaSet_1071_; lean_object* v_lctx_1072_; lean_object* v_localInstances_1073_; lean_object* v_defEqCtx_x3f_1074_; lean_object* v_synthPendingDepth_1075_; lean_object* v_customCanUnfoldPredicate_x3f_1076_; uint8_t v_univApprox_1077_; uint8_t v_inTypeClassResolution_1078_; uint8_t v_cacheInferType_1079_; lean_object* v___x_1081_; 
v_trackZetaDelta_1070_ = lean_ctor_get_uint8(v___y_1042_, sizeof(void*)*7);
v_zetaDeltaSet_1071_ = lean_ctor_get(v___y_1042_, 1);
v_lctx_1072_ = lean_ctor_get(v___y_1042_, 2);
v_localInstances_1073_ = lean_ctor_get(v___y_1042_, 3);
v_defEqCtx_x3f_1074_ = lean_ctor_get(v___y_1042_, 4);
v_synthPendingDepth_1075_ = lean_ctor_get(v___y_1042_, 5);
v_customCanUnfoldPredicate_x3f_1076_ = lean_ctor_get(v___y_1042_, 6);
v_univApprox_1077_ = lean_ctor_get_uint8(v___y_1042_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1078_ = lean_ctor_get_uint8(v___y_1042_, sizeof(void*)*7 + 2);
v_cacheInferType_1079_ = lean_ctor_get_uint8(v___y_1042_, sizeof(void*)*7 + 3);
if (v_isShared_1069_ == 0)
{
v___x_1081_ = v___x_1068_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_1086_, 0, v_foApprox_1048_);
lean_ctor_set_uint8(v_reuseFailAlloc_1086_, 1, v_ctxApprox_1049_);
lean_ctor_set_uint8(v_reuseFailAlloc_1086_, 2, v_quasiPatternApprox_1050_);
lean_ctor_set_uint8(v_reuseFailAlloc_1086_, 3, v_constApprox_1051_);
lean_ctor_set_uint8(v_reuseFailAlloc_1086_, 4, v_isDefEqStuckEx_1052_);
lean_ctor_set_uint8(v_reuseFailAlloc_1086_, 5, v_unificationHints_1053_);
lean_ctor_set_uint8(v_reuseFailAlloc_1086_, 6, v_proofIrrelevance_1054_);
lean_ctor_set_uint8(v_reuseFailAlloc_1086_, 8, v_offsetCnstrs_1055_);
lean_ctor_set_uint8(v_reuseFailAlloc_1086_, 9, v_transparency_1056_);
lean_ctor_set_uint8(v_reuseFailAlloc_1086_, 10, v_etaStruct_1057_);
lean_ctor_set_uint8(v_reuseFailAlloc_1086_, 11, v_univApprox_1058_);
lean_ctor_set_uint8(v_reuseFailAlloc_1086_, 12, v_iota_1059_);
lean_ctor_set_uint8(v_reuseFailAlloc_1086_, 13, v_beta_1060_);
lean_ctor_set_uint8(v_reuseFailAlloc_1086_, 14, v_proj_1061_);
lean_ctor_set_uint8(v_reuseFailAlloc_1086_, 15, v_zeta_1062_);
lean_ctor_set_uint8(v_reuseFailAlloc_1086_, 16, v_zetaDelta_1063_);
lean_ctor_set_uint8(v_reuseFailAlloc_1086_, 17, v_zetaUnused_1064_);
lean_ctor_set_uint8(v_reuseFailAlloc_1086_, 18, v_zetaHave_1065_);
lean_ctor_set_uint8(v_reuseFailAlloc_1086_, 19, v_canUnfoldPredicateConfig_1066_);
v___x_1081_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
uint64_t v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; 
lean_ctor_set_uint8(v___x_1081_, 7, v_useReducible_1035_);
v___x_1082_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1081_);
v___x_1083_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1083_, 0, v___x_1081_);
lean_ctor_set_uint64(v___x_1083_, sizeof(void*)*1, v___x_1082_);
lean_inc(v_customCanUnfoldPredicate_x3f_1076_);
lean_inc(v_synthPendingDepth_1075_);
lean_inc(v_defEqCtx_x3f_1074_);
lean_inc_ref(v_localInstances_1073_);
lean_inc_ref(v_lctx_1072_);
lean_inc(v_zetaDeltaSet_1071_);
v___x_1084_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1084_, 0, v___x_1083_);
lean_ctor_set(v___x_1084_, 1, v_zetaDeltaSet_1071_);
lean_ctor_set(v___x_1084_, 2, v_lctx_1072_);
lean_ctor_set(v___x_1084_, 3, v_localInstances_1073_);
lean_ctor_set(v___x_1084_, 4, v_defEqCtx_x3f_1074_);
lean_ctor_set(v___x_1084_, 5, v_synthPendingDepth_1075_);
lean_ctor_set(v___x_1084_, 6, v_customCanUnfoldPredicate_x3f_1076_);
lean_ctor_set_uint8(v___x_1084_, sizeof(void*)*7, v_trackZetaDelta_1070_);
lean_ctor_set_uint8(v___x_1084_, sizeof(void*)*7 + 1, v_univApprox_1077_);
lean_ctor_set_uint8(v___x_1084_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1078_);
lean_ctor_set_uint8(v___x_1084_, sizeof(void*)*7 + 3, v_cacheInferType_1079_);
v___x_1085_ = l_Lean_Meta_isExprDefEq(v_a_1036_, v_a_1037_, v___x_1084_, v___y_1043_, v___y_1044_, v___y_1045_);
lean_dec_ref_known(v___x_1084_, 7);
return v___x_1085_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3___boxed(lean_object* v_useReducible_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_){
_start:
{
uint8_t v_useReducible_boxed_1100_; lean_object* v_res_1101_; 
v_useReducible_boxed_1100_ = lean_unbox(v_useReducible_1088_);
v_res_1101_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3(v_useReducible_boxed_1100_, v_a_1089_, v_a_1090_, v___y_1091_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_, v___y_1097_, v___y_1098_);
lean_dec(v___y_1098_);
lean_dec_ref(v___y_1097_);
lean_dec(v___y_1096_);
lean_dec_ref(v___y_1095_);
lean_dec(v___y_1094_);
lean_dec_ref(v___y_1093_);
lean_dec(v___y_1092_);
lean_dec_ref(v___y_1091_);
return v_res_1101_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4___closed__1(void){
_start:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1103_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4___closed__0));
v___x_1104_ = l_Lean_stringToMessageData(v___x_1103_);
return v___x_1104_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4___closed__3(void){
_start:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; 
v___x_1106_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4___closed__2));
v___x_1107_ = l_Lean_stringToMessageData(v___x_1106_);
return v___x_1107_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4(lean_object* v_a_1108_, lean_object* v_a_1109_, uint8_t v___x_1110_, lean_object* v_a_1111_, lean_object* v_mvarCounter_1112_, lean_object* v___x_1113_, uint8_t v___x_1114_, lean_object* v___x_1115_, uint8_t v_useReducible_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_){
_start:
{
lean_object* v___x_1126_; 
lean_inc(v_a_1108_);
v___x_1126_ = l_Lean_MVarId_getType(v_a_1108_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_);
if (lean_obj_tag(v___x_1126_) == 0)
{
lean_object* v_a_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; 
v_a_1127_ = lean_ctor_get(v___x_1126_, 0);
lean_inc_n(v_a_1127_, 2);
lean_dec_ref_known(v___x_1126_, 1);
v___x_1128_ = l_Lean_mkIdent(v_a_1109_);
v___x_1129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1129_, 0, v_a_1127_);
v___x_1130_ = l_Lean_Elab_Term_elabTerm(v___x_1128_, v___x_1129_, v___x_1110_, v___x_1110_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_);
if (lean_obj_tag(v___x_1130_) == 0)
{
lean_object* v_a_1131_; lean_object* v___y_1133_; lean_object* v___y_1134_; lean_object* v___y_1135_; lean_object* v___y_1136_; lean_object* v___y_1137_; lean_object* v___y_1138_; lean_object* v___y_1139_; lean_object* v___y_1140_; lean_object* v___x_1165_; 
v_a_1131_ = lean_ctor_get(v___x_1130_, 0);
lean_inc(v_a_1131_);
lean_dec_ref_known(v___x_1130_, 1);
v___x_1165_ = l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(v___x_1114_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_);
if (lean_obj_tag(v___x_1165_) == 0)
{
lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1280_; 
v_isSharedCheck_1280_ = !lean_is_exclusive(v___x_1165_);
if (v_isSharedCheck_1280_ == 0)
{
lean_object* v_unused_1281_; 
v_unused_1281_ = lean_ctor_get(v___x_1165_, 0);
lean_dec(v_unused_1281_);
v___x_1167_ = v___x_1165_;
v_isShared_1168_ = v_isSharedCheck_1280_;
goto v_resetjp_1166_;
}
else
{
lean_dec(v___x_1165_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1280_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v___x_1169_; 
lean_inc(v___y_1124_);
lean_inc_ref(v___y_1123_);
lean_inc(v___y_1122_);
lean_inc_ref(v___y_1121_);
lean_inc(v_a_1131_);
v___x_1169_ = lean_infer_type(v_a_1131_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_);
if (lean_obj_tag(v___x_1169_) == 0)
{
lean_object* v_a_1170_; uint8_t v_____do__lift_1172_; lean_object* v___y_1173_; lean_object* v___y_1174_; lean_object* v___y_1175_; lean_object* v___y_1176_; lean_object* v___y_1177_; lean_object* v___y_1178_; lean_object* v___y_1179_; lean_object* v___y_1180_; lean_object* v___y_1191_; 
v_a_1170_ = lean_ctor_get(v___x_1169_, 0);
lean_inc(v_a_1170_);
lean_dec_ref_known(v___x_1169_, 1);
if (v_useReducible_1116_ == 0)
{
lean_object* v___x_1202_; uint8_t v_foApprox_1203_; uint8_t v_ctxApprox_1204_; uint8_t v_quasiPatternApprox_1205_; uint8_t v_constApprox_1206_; uint8_t v_isDefEqStuckEx_1207_; uint8_t v_unificationHints_1208_; uint8_t v_proofIrrelevance_1209_; uint8_t v_offsetCnstrs_1210_; uint8_t v_transparency_1211_; uint8_t v_etaStruct_1212_; uint8_t v_univApprox_1213_; uint8_t v_iota_1214_; uint8_t v_beta_1215_; uint8_t v_proj_1216_; uint8_t v_zeta_1217_; uint8_t v_zetaDelta_1218_; uint8_t v_zetaUnused_1219_; uint8_t v_zetaHave_1220_; uint8_t v_canUnfoldPredicateConfig_1221_; lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1252_; 
v___x_1202_ = l_Lean_Meta_Context_config(v___y_1121_);
v_foApprox_1203_ = lean_ctor_get_uint8(v___x_1202_, 0);
v_ctxApprox_1204_ = lean_ctor_get_uint8(v___x_1202_, 1);
v_quasiPatternApprox_1205_ = lean_ctor_get_uint8(v___x_1202_, 2);
v_constApprox_1206_ = lean_ctor_get_uint8(v___x_1202_, 3);
v_isDefEqStuckEx_1207_ = lean_ctor_get_uint8(v___x_1202_, 4);
v_unificationHints_1208_ = lean_ctor_get_uint8(v___x_1202_, 5);
v_proofIrrelevance_1209_ = lean_ctor_get_uint8(v___x_1202_, 6);
v_offsetCnstrs_1210_ = lean_ctor_get_uint8(v___x_1202_, 8);
v_transparency_1211_ = lean_ctor_get_uint8(v___x_1202_, 9);
v_etaStruct_1212_ = lean_ctor_get_uint8(v___x_1202_, 10);
v_univApprox_1213_ = lean_ctor_get_uint8(v___x_1202_, 11);
v_iota_1214_ = lean_ctor_get_uint8(v___x_1202_, 12);
v_beta_1215_ = lean_ctor_get_uint8(v___x_1202_, 13);
v_proj_1216_ = lean_ctor_get_uint8(v___x_1202_, 14);
v_zeta_1217_ = lean_ctor_get_uint8(v___x_1202_, 15);
v_zetaDelta_1218_ = lean_ctor_get_uint8(v___x_1202_, 16);
v_zetaUnused_1219_ = lean_ctor_get_uint8(v___x_1202_, 17);
v_zetaHave_1220_ = lean_ctor_get_uint8(v___x_1202_, 18);
v_canUnfoldPredicateConfig_1221_ = lean_ctor_get_uint8(v___x_1202_, 19);
v_isSharedCheck_1252_ = !lean_is_exclusive(v___x_1202_);
if (v_isSharedCheck_1252_ == 0)
{
v___x_1223_ = v___x_1202_;
v_isShared_1224_ = v_isSharedCheck_1252_;
goto v_resetjp_1222_;
}
else
{
lean_dec(v___x_1202_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1252_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
uint8_t v_trackZetaDelta_1225_; lean_object* v_zetaDeltaSet_1226_; lean_object* v_lctx_1227_; lean_object* v_localInstances_1228_; lean_object* v_defEqCtx_x3f_1229_; lean_object* v_synthPendingDepth_1230_; lean_object* v_customCanUnfoldPredicate_x3f_1231_; uint8_t v_univApprox_1232_; uint8_t v_inTypeClassResolution_1233_; uint8_t v_cacheInferType_1234_; lean_object* v___x_1236_; 
v_trackZetaDelta_1225_ = lean_ctor_get_uint8(v___y_1121_, sizeof(void*)*7);
v_zetaDeltaSet_1226_ = lean_ctor_get(v___y_1121_, 1);
v_lctx_1227_ = lean_ctor_get(v___y_1121_, 2);
v_localInstances_1228_ = lean_ctor_get(v___y_1121_, 3);
v_defEqCtx_x3f_1229_ = lean_ctor_get(v___y_1121_, 4);
v_synthPendingDepth_1230_ = lean_ctor_get(v___y_1121_, 5);
v_customCanUnfoldPredicate_x3f_1231_ = lean_ctor_get(v___y_1121_, 6);
v_univApprox_1232_ = lean_ctor_get_uint8(v___y_1121_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1233_ = lean_ctor_get_uint8(v___y_1121_, sizeof(void*)*7 + 2);
v_cacheInferType_1234_ = lean_ctor_get_uint8(v___y_1121_, sizeof(void*)*7 + 3);
if (v_isShared_1224_ == 0)
{
v___x_1236_ = v___x_1223_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_1251_, 0, v_foApprox_1203_);
lean_ctor_set_uint8(v_reuseFailAlloc_1251_, 1, v_ctxApprox_1204_);
lean_ctor_set_uint8(v_reuseFailAlloc_1251_, 2, v_quasiPatternApprox_1205_);
lean_ctor_set_uint8(v_reuseFailAlloc_1251_, 3, v_constApprox_1206_);
lean_ctor_set_uint8(v_reuseFailAlloc_1251_, 4, v_isDefEqStuckEx_1207_);
lean_ctor_set_uint8(v_reuseFailAlloc_1251_, 5, v_unificationHints_1208_);
lean_ctor_set_uint8(v_reuseFailAlloc_1251_, 6, v_proofIrrelevance_1209_);
lean_ctor_set_uint8(v_reuseFailAlloc_1251_, 8, v_offsetCnstrs_1210_);
lean_ctor_set_uint8(v_reuseFailAlloc_1251_, 9, v_transparency_1211_);
lean_ctor_set_uint8(v_reuseFailAlloc_1251_, 10, v_etaStruct_1212_);
lean_ctor_set_uint8(v_reuseFailAlloc_1251_, 11, v_univApprox_1213_);
lean_ctor_set_uint8(v_reuseFailAlloc_1251_, 12, v_iota_1214_);
lean_ctor_set_uint8(v_reuseFailAlloc_1251_, 13, v_beta_1215_);
lean_ctor_set_uint8(v_reuseFailAlloc_1251_, 14, v_proj_1216_);
lean_ctor_set_uint8(v_reuseFailAlloc_1251_, 15, v_zeta_1217_);
lean_ctor_set_uint8(v_reuseFailAlloc_1251_, 16, v_zetaDelta_1218_);
lean_ctor_set_uint8(v_reuseFailAlloc_1251_, 17, v_zetaUnused_1219_);
lean_ctor_set_uint8(v_reuseFailAlloc_1251_, 18, v_zetaHave_1220_);
lean_ctor_set_uint8(v_reuseFailAlloc_1251_, 19, v_canUnfoldPredicateConfig_1221_);
v___x_1236_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
uint64_t v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; 
lean_ctor_set_uint8(v___x_1236_, 7, v___x_1110_);
v___x_1237_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1236_);
v___x_1238_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1238_, 0, v___x_1236_);
lean_ctor_set_uint64(v___x_1238_, sizeof(void*)*1, v___x_1237_);
lean_inc(v_customCanUnfoldPredicate_x3f_1231_);
lean_inc(v_synthPendingDepth_1230_);
lean_inc(v_defEqCtx_x3f_1229_);
lean_inc_ref(v_localInstances_1228_);
lean_inc_ref(v_lctx_1227_);
lean_inc(v_zetaDeltaSet_1226_);
v___x_1239_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1239_, 0, v___x_1238_);
lean_ctor_set(v___x_1239_, 1, v_zetaDeltaSet_1226_);
lean_ctor_set(v___x_1239_, 2, v_lctx_1227_);
lean_ctor_set(v___x_1239_, 3, v_localInstances_1228_);
lean_ctor_set(v___x_1239_, 4, v_defEqCtx_x3f_1229_);
lean_ctor_set(v___x_1239_, 5, v_synthPendingDepth_1230_);
lean_ctor_set(v___x_1239_, 6, v_customCanUnfoldPredicate_x3f_1231_);
lean_ctor_set_uint8(v___x_1239_, sizeof(void*)*7, v_trackZetaDelta_1225_);
lean_ctor_set_uint8(v___x_1239_, sizeof(void*)*7 + 1, v_univApprox_1232_);
lean_ctor_set_uint8(v___x_1239_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1233_);
lean_ctor_set_uint8(v___x_1239_, sizeof(void*)*7 + 3, v_cacheInferType_1234_);
lean_inc(v_a_1170_);
lean_inc(v_a_1127_);
v___x_1240_ = l_Lean_Meta_isExprDefEq(v_a_1127_, v_a_1170_, v___x_1239_, v___y_1122_, v___y_1123_, v___y_1124_);
lean_dec_ref_known(v___x_1239_, 7);
if (lean_obj_tag(v___x_1240_) == 0)
{
lean_object* v_a_1241_; uint8_t v___x_1242_; 
v_a_1241_ = lean_ctor_get(v___x_1240_, 0);
lean_inc(v_a_1241_);
lean_dec_ref_known(v___x_1240_, 1);
v___x_1242_ = lean_unbox(v_a_1241_);
lean_dec(v_a_1241_);
v_____do__lift_1172_ = v___x_1242_;
v___y_1173_ = v___y_1117_;
v___y_1174_ = v___y_1118_;
v___y_1175_ = v___y_1119_;
v___y_1176_ = v___y_1120_;
v___y_1177_ = v___y_1121_;
v___y_1178_ = v___y_1122_;
v___y_1179_ = v___y_1123_;
v___y_1180_ = v___y_1124_;
goto v___jp_1171_;
}
else
{
lean_object* v_a_1243_; lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1250_; 
lean_dec(v_a_1170_);
lean_del_object(v___x_1167_);
lean_dec(v_a_1131_);
lean_dec(v_a_1127_);
lean_dec(v___y_1124_);
lean_dec_ref(v___y_1123_);
lean_dec(v___y_1122_);
lean_dec_ref(v___y_1121_);
lean_dec(v___x_1115_);
lean_dec_ref(v___x_1113_);
lean_dec_ref(v_a_1111_);
lean_dec(v_a_1108_);
v_a_1243_ = lean_ctor_get(v___x_1240_, 0);
v_isSharedCheck_1250_ = !lean_is_exclusive(v___x_1240_);
if (v_isSharedCheck_1250_ == 0)
{
v___x_1245_ = v___x_1240_;
v_isShared_1246_ = v_isSharedCheck_1250_;
goto v_resetjp_1244_;
}
else
{
lean_inc(v_a_1243_);
lean_dec(v___x_1240_);
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
}
}
else
{
lean_object* v___x_1253_; uint8_t v_transparency_1254_; uint8_t v___x_1255_; uint8_t v___x_1256_; 
v___x_1253_ = l_Lean_Meta_Context_config(v___y_1121_);
v_transparency_1254_ = lean_ctor_get_uint8(v___x_1253_, 9);
lean_dec_ref(v___x_1253_);
v___x_1255_ = 2;
v___x_1256_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1254_, v___x_1255_);
if (v___x_1256_ == 0)
{
lean_object* v_keyedConfig_1257_; uint8_t v_trackZetaDelta_1258_; lean_object* v_zetaDeltaSet_1259_; lean_object* v_lctx_1260_; lean_object* v_localInstances_1261_; lean_object* v_defEqCtx_x3f_1262_; lean_object* v_synthPendingDepth_1263_; lean_object* v_customCanUnfoldPredicate_x3f_1264_; uint8_t v_univApprox_1265_; uint8_t v_inTypeClassResolution_1266_; uint8_t v_cacheInferType_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; 
v_keyedConfig_1257_ = lean_ctor_get(v___y_1121_, 0);
v_trackZetaDelta_1258_ = lean_ctor_get_uint8(v___y_1121_, sizeof(void*)*7);
v_zetaDeltaSet_1259_ = lean_ctor_get(v___y_1121_, 1);
v_lctx_1260_ = lean_ctor_get(v___y_1121_, 2);
v_localInstances_1261_ = lean_ctor_get(v___y_1121_, 3);
v_defEqCtx_x3f_1262_ = lean_ctor_get(v___y_1121_, 4);
v_synthPendingDepth_1263_ = lean_ctor_get(v___y_1121_, 5);
v_customCanUnfoldPredicate_x3f_1264_ = lean_ctor_get(v___y_1121_, 6);
v_univApprox_1265_ = lean_ctor_get_uint8(v___y_1121_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1266_ = lean_ctor_get_uint8(v___y_1121_, sizeof(void*)*7 + 2);
v_cacheInferType_1267_ = lean_ctor_get_uint8(v___y_1121_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_1257_);
v___x_1268_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1255_, v_keyedConfig_1257_);
lean_inc(v_customCanUnfoldPredicate_x3f_1264_);
lean_inc(v_synthPendingDepth_1263_);
lean_inc(v_defEqCtx_x3f_1262_);
lean_inc_ref(v_localInstances_1261_);
lean_inc_ref(v_lctx_1260_);
lean_inc(v_zetaDeltaSet_1259_);
v___x_1269_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1269_, 0, v___x_1268_);
lean_ctor_set(v___x_1269_, 1, v_zetaDeltaSet_1259_);
lean_ctor_set(v___x_1269_, 2, v_lctx_1260_);
lean_ctor_set(v___x_1269_, 3, v_localInstances_1261_);
lean_ctor_set(v___x_1269_, 4, v_defEqCtx_x3f_1262_);
lean_ctor_set(v___x_1269_, 5, v_synthPendingDepth_1263_);
lean_ctor_set(v___x_1269_, 6, v_customCanUnfoldPredicate_x3f_1264_);
lean_ctor_set_uint8(v___x_1269_, sizeof(void*)*7, v_trackZetaDelta_1258_);
lean_ctor_set_uint8(v___x_1269_, sizeof(void*)*7 + 1, v_univApprox_1265_);
lean_ctor_set_uint8(v___x_1269_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1266_);
lean_ctor_set_uint8(v___x_1269_, sizeof(void*)*7 + 3, v_cacheInferType_1267_);
lean_inc(v_a_1170_);
lean_inc(v_a_1127_);
v___x_1270_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3(v_useReducible_1116_, v_a_1127_, v_a_1170_, v___y_1117_, v___y_1118_, v___y_1119_, v___y_1120_, v___x_1269_, v___y_1122_, v___y_1123_, v___y_1124_);
lean_dec_ref_known(v___x_1269_, 7);
v___y_1191_ = v___x_1270_;
goto v___jp_1190_;
}
else
{
lean_object* v___x_1271_; 
lean_inc(v_a_1170_);
lean_inc(v_a_1127_);
v___x_1271_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3(v_useReducible_1116_, v_a_1127_, v_a_1170_, v___y_1117_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_);
v___y_1191_ = v___x_1271_;
goto v___jp_1190_;
}
}
v___jp_1171_:
{
if (v_____do__lift_1172_ == 0)
{
lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1187_; 
v___x_1181_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4___closed__1, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4___closed__1_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4___closed__1);
lean_inc_ref(v_a_1111_);
v___x_1182_ = l_Lean_indentExpr(v_a_1111_);
v___x_1183_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1183_, 0, v___x_1181_);
lean_ctor_set(v___x_1183_, 1, v___x_1182_);
v___x_1184_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4___closed__3, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4___closed__3_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4___closed__3);
v___x_1185_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1185_, 0, v___x_1183_);
lean_ctor_set(v___x_1185_, 1, v___x_1184_);
if (v_isShared_1168_ == 0)
{
lean_ctor_set_tag(v___x_1167_, 1);
lean_ctor_set(v___x_1167_, 0, v___x_1185_);
v___x_1187_ = v___x_1167_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v___x_1185_);
v___x_1187_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
lean_object* v___x_1188_; 
lean_inc(v_a_1131_);
v___x_1188_ = l_Lean_Elab_Term_throwTypeMismatchError___redArg(v___x_1187_, v_a_1127_, v_a_1170_, v_a_1131_, v___x_1115_, v___y_1177_, v___y_1178_, v___y_1179_, v___y_1180_);
lean_dec_ref(v___x_1187_);
if (lean_obj_tag(v___x_1188_) == 0)
{
lean_dec_ref_known(v___x_1188_, 1);
v___y_1133_ = v___y_1173_;
v___y_1134_ = v___y_1174_;
v___y_1135_ = v___y_1175_;
v___y_1136_ = v___y_1176_;
v___y_1137_ = v___y_1177_;
v___y_1138_ = v___y_1178_;
v___y_1139_ = v___y_1179_;
v___y_1140_ = v___y_1180_;
goto v___jp_1132_;
}
else
{
lean_dec(v___y_1180_);
lean_dec_ref(v___y_1179_);
lean_dec(v___y_1178_);
lean_dec_ref(v___y_1177_);
lean_dec(v_a_1131_);
lean_dec_ref(v___x_1113_);
lean_dec_ref(v_a_1111_);
lean_dec(v_a_1108_);
return v___x_1188_;
}
}
}
else
{
lean_dec(v_a_1170_);
lean_del_object(v___x_1167_);
lean_dec(v_a_1127_);
lean_dec(v___x_1115_);
v___y_1133_ = v___y_1173_;
v___y_1134_ = v___y_1174_;
v___y_1135_ = v___y_1175_;
v___y_1136_ = v___y_1176_;
v___y_1137_ = v___y_1177_;
v___y_1138_ = v___y_1178_;
v___y_1139_ = v___y_1179_;
v___y_1140_ = v___y_1180_;
goto v___jp_1132_;
}
}
v___jp_1190_:
{
if (lean_obj_tag(v___y_1191_) == 0)
{
lean_object* v_a_1192_; uint8_t v___x_1193_; 
v_a_1192_ = lean_ctor_get(v___y_1191_, 0);
lean_inc(v_a_1192_);
lean_dec_ref_known(v___y_1191_, 1);
v___x_1193_ = lean_unbox(v_a_1192_);
lean_dec(v_a_1192_);
v_____do__lift_1172_ = v___x_1193_;
v___y_1173_ = v___y_1117_;
v___y_1174_ = v___y_1118_;
v___y_1175_ = v___y_1119_;
v___y_1176_ = v___y_1120_;
v___y_1177_ = v___y_1121_;
v___y_1178_ = v___y_1122_;
v___y_1179_ = v___y_1123_;
v___y_1180_ = v___y_1124_;
goto v___jp_1171_;
}
else
{
lean_object* v_a_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1201_; 
lean_dec(v_a_1170_);
lean_del_object(v___x_1167_);
lean_dec(v_a_1131_);
lean_dec(v_a_1127_);
lean_dec(v___y_1124_);
lean_dec_ref(v___y_1123_);
lean_dec(v___y_1122_);
lean_dec_ref(v___y_1121_);
lean_dec(v___x_1115_);
lean_dec_ref(v___x_1113_);
lean_dec_ref(v_a_1111_);
lean_dec(v_a_1108_);
v_a_1194_ = lean_ctor_get(v___y_1191_, 0);
v_isSharedCheck_1201_ = !lean_is_exclusive(v___y_1191_);
if (v_isSharedCheck_1201_ == 0)
{
v___x_1196_ = v___y_1191_;
v_isShared_1197_ = v_isSharedCheck_1201_;
goto v_resetjp_1195_;
}
else
{
lean_inc(v_a_1194_);
lean_dec(v___y_1191_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1201_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v___x_1199_; 
if (v_isShared_1197_ == 0)
{
v___x_1199_ = v___x_1196_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v_a_1194_);
v___x_1199_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
return v___x_1199_;
}
}
}
}
}
else
{
lean_object* v_a_1272_; lean_object* v___x_1274_; uint8_t v_isShared_1275_; uint8_t v_isSharedCheck_1279_; 
lean_del_object(v___x_1167_);
lean_dec(v_a_1131_);
lean_dec(v_a_1127_);
lean_dec(v___y_1124_);
lean_dec_ref(v___y_1123_);
lean_dec(v___y_1122_);
lean_dec_ref(v___y_1121_);
lean_dec(v___x_1115_);
lean_dec_ref(v___x_1113_);
lean_dec_ref(v_a_1111_);
lean_dec(v_a_1108_);
v_a_1272_ = lean_ctor_get(v___x_1169_, 0);
v_isSharedCheck_1279_ = !lean_is_exclusive(v___x_1169_);
if (v_isSharedCheck_1279_ == 0)
{
v___x_1274_ = v___x_1169_;
v_isShared_1275_ = v_isSharedCheck_1279_;
goto v_resetjp_1273_;
}
else
{
lean_inc(v_a_1272_);
lean_dec(v___x_1169_);
v___x_1274_ = lean_box(0);
v_isShared_1275_ = v_isSharedCheck_1279_;
goto v_resetjp_1273_;
}
v_resetjp_1273_:
{
lean_object* v___x_1277_; 
if (v_isShared_1275_ == 0)
{
v___x_1277_ = v___x_1274_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v_a_1272_);
v___x_1277_ = v_reuseFailAlloc_1278_;
goto v_reusejp_1276_;
}
v_reusejp_1276_:
{
return v___x_1277_;
}
}
}
}
}
else
{
lean_dec(v_a_1131_);
lean_dec(v_a_1127_);
lean_dec(v___y_1124_);
lean_dec_ref(v___y_1123_);
lean_dec(v___y_1122_);
lean_dec_ref(v___y_1121_);
lean_dec(v___x_1115_);
lean_dec_ref(v___x_1113_);
lean_dec_ref(v_a_1111_);
lean_dec(v_a_1108_);
return v___x_1165_;
}
v___jp_1132_:
{
lean_object* v___x_1141_; 
v___x_1141_ = l_Lean_Meta_getMVars(v_a_1111_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_);
if (lean_obj_tag(v___x_1141_) == 0)
{
lean_object* v_a_1142_; lean_object* v___x_1143_; 
v_a_1142_ = lean_ctor_get(v___x_1141_, 0);
lean_inc(v_a_1142_);
lean_dec_ref_known(v___x_1141_, 1);
v___x_1143_ = l_Lean_Elab_Tactic_filterOldMVars___redArg(v_a_1142_, v_mvarCounter_1112_, v___y_1138_);
lean_dec(v_a_1142_);
if (lean_obj_tag(v___x_1143_) == 0)
{
lean_object* v_a_1144_; lean_object* v___x_1145_; 
v_a_1144_ = lean_ctor_get(v___x_1143_, 0);
lean_inc(v_a_1144_);
lean_dec_ref_known(v___x_1143_, 1);
v___x_1145_ = l_Lean_Elab_Tactic_logUnassignedAndAbort(v_a_1144_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_);
lean_dec(v_a_1144_);
if (lean_obj_tag(v___x_1145_) == 0)
{
lean_object* v___x_1146_; 
lean_dec_ref_known(v___x_1145_, 1);
v___x_1146_ = l_Lean_Elab_Tactic_pushGoal___redArg(v_a_1108_, v___y_1134_);
if (lean_obj_tag(v___x_1146_) == 0)
{
lean_object* v___x_1147_; lean_object* v___x_1148_; 
lean_dec_ref_known(v___x_1146_, 1);
v___x_1147_ = l_Lean_Name_mkStr1(v___x_1113_);
v___x_1148_ = l_Lean_Elab_Tactic_closeMainGoal___redArg(v___x_1147_, v_a_1131_, v___x_1114_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_);
lean_dec(v___y_1140_);
lean_dec_ref(v___y_1139_);
lean_dec(v___y_1138_);
lean_dec_ref(v___y_1137_);
return v___x_1148_;
}
else
{
lean_dec(v___y_1140_);
lean_dec_ref(v___y_1139_);
lean_dec(v___y_1138_);
lean_dec_ref(v___y_1137_);
lean_dec(v_a_1131_);
lean_dec_ref(v___x_1113_);
return v___x_1146_;
}
}
else
{
lean_dec(v___y_1140_);
lean_dec_ref(v___y_1139_);
lean_dec(v___y_1138_);
lean_dec_ref(v___y_1137_);
lean_dec(v_a_1131_);
lean_dec_ref(v___x_1113_);
lean_dec(v_a_1108_);
return v___x_1145_;
}
}
else
{
lean_object* v_a_1149_; lean_object* v___x_1151_; uint8_t v_isShared_1152_; uint8_t v_isSharedCheck_1156_; 
lean_dec(v___y_1140_);
lean_dec_ref(v___y_1139_);
lean_dec(v___y_1138_);
lean_dec_ref(v___y_1137_);
lean_dec(v_a_1131_);
lean_dec_ref(v___x_1113_);
lean_dec(v_a_1108_);
v_a_1149_ = lean_ctor_get(v___x_1143_, 0);
v_isSharedCheck_1156_ = !lean_is_exclusive(v___x_1143_);
if (v_isSharedCheck_1156_ == 0)
{
v___x_1151_ = v___x_1143_;
v_isShared_1152_ = v_isSharedCheck_1156_;
goto v_resetjp_1150_;
}
else
{
lean_inc(v_a_1149_);
lean_dec(v___x_1143_);
v___x_1151_ = lean_box(0);
v_isShared_1152_ = v_isSharedCheck_1156_;
goto v_resetjp_1150_;
}
v_resetjp_1150_:
{
lean_object* v___x_1154_; 
if (v_isShared_1152_ == 0)
{
v___x_1154_ = v___x_1151_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v_a_1149_);
v___x_1154_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
return v___x_1154_;
}
}
}
}
else
{
lean_object* v_a_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1164_; 
lean_dec(v___y_1140_);
lean_dec_ref(v___y_1139_);
lean_dec(v___y_1138_);
lean_dec_ref(v___y_1137_);
lean_dec(v_a_1131_);
lean_dec_ref(v___x_1113_);
lean_dec(v_a_1108_);
v_a_1157_ = lean_ctor_get(v___x_1141_, 0);
v_isSharedCheck_1164_ = !lean_is_exclusive(v___x_1141_);
if (v_isSharedCheck_1164_ == 0)
{
v___x_1159_ = v___x_1141_;
v_isShared_1160_ = v_isSharedCheck_1164_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_a_1157_);
lean_dec(v___x_1141_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1164_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1162_; 
if (v_isShared_1160_ == 0)
{
v___x_1162_ = v___x_1159_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v_a_1157_);
v___x_1162_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
return v___x_1162_;
}
}
}
}
}
else
{
lean_object* v_a_1282_; lean_object* v___x_1284_; uint8_t v_isShared_1285_; uint8_t v_isSharedCheck_1289_; 
lean_dec(v_a_1127_);
lean_dec(v___y_1124_);
lean_dec_ref(v___y_1123_);
lean_dec(v___y_1122_);
lean_dec_ref(v___y_1121_);
lean_dec(v___x_1115_);
lean_dec_ref(v___x_1113_);
lean_dec_ref(v_a_1111_);
lean_dec(v_a_1108_);
v_a_1282_ = lean_ctor_get(v___x_1130_, 0);
v_isSharedCheck_1289_ = !lean_is_exclusive(v___x_1130_);
if (v_isSharedCheck_1289_ == 0)
{
v___x_1284_ = v___x_1130_;
v_isShared_1285_ = v_isSharedCheck_1289_;
goto v_resetjp_1283_;
}
else
{
lean_inc(v_a_1282_);
lean_dec(v___x_1130_);
v___x_1284_ = lean_box(0);
v_isShared_1285_ = v_isSharedCheck_1289_;
goto v_resetjp_1283_;
}
v_resetjp_1283_:
{
lean_object* v___x_1287_; 
if (v_isShared_1285_ == 0)
{
v___x_1287_ = v___x_1284_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v_a_1282_);
v___x_1287_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
return v___x_1287_;
}
}
}
}
else
{
lean_object* v_a_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1297_; 
lean_dec(v___y_1124_);
lean_dec_ref(v___y_1123_);
lean_dec(v___y_1122_);
lean_dec_ref(v___y_1121_);
lean_dec(v___x_1115_);
lean_dec_ref(v___x_1113_);
lean_dec_ref(v_a_1111_);
lean_dec(v_a_1109_);
lean_dec(v_a_1108_);
v_a_1290_ = lean_ctor_get(v___x_1126_, 0);
v_isSharedCheck_1297_ = !lean_is_exclusive(v___x_1126_);
if (v_isSharedCheck_1297_ == 0)
{
v___x_1292_ = v___x_1126_;
v_isShared_1293_ = v_isSharedCheck_1297_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_a_1290_);
lean_dec(v___x_1126_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1297_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
lean_object* v___x_1295_; 
if (v_isShared_1293_ == 0)
{
v___x_1295_ = v___x_1292_;
goto v_reusejp_1294_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v_a_1290_);
v___x_1295_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1294_;
}
v_reusejp_1294_:
{
return v___x_1295_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4___boxed(lean_object** _args){
lean_object* v_a_1298_ = _args[0];
lean_object* v_a_1299_ = _args[1];
lean_object* v___x_1300_ = _args[2];
lean_object* v_a_1301_ = _args[3];
lean_object* v_mvarCounter_1302_ = _args[4];
lean_object* v___x_1303_ = _args[5];
lean_object* v___x_1304_ = _args[6];
lean_object* v___x_1305_ = _args[7];
lean_object* v_useReducible_1306_ = _args[8];
lean_object* v___y_1307_ = _args[9];
lean_object* v___y_1308_ = _args[10];
lean_object* v___y_1309_ = _args[11];
lean_object* v___y_1310_ = _args[12];
lean_object* v___y_1311_ = _args[13];
lean_object* v___y_1312_ = _args[14];
lean_object* v___y_1313_ = _args[15];
lean_object* v___y_1314_ = _args[16];
lean_object* v___y_1315_ = _args[17];
_start:
{
uint8_t v___x_101269__boxed_1316_; uint8_t v___x_101272__boxed_1317_; uint8_t v_useReducible_boxed_1318_; lean_object* v_res_1319_; 
v___x_101269__boxed_1316_ = lean_unbox(v___x_1300_);
v___x_101272__boxed_1317_ = lean_unbox(v___x_1304_);
v_useReducible_boxed_1318_ = lean_unbox(v_useReducible_1306_);
v_res_1319_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4(v_a_1298_, v_a_1299_, v___x_101269__boxed_1316_, v_a_1301_, v_mvarCounter_1302_, v___x_1303_, v___x_101272__boxed_1317_, v___x_1305_, v_useReducible_boxed_1318_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_);
lean_dec(v___y_1310_);
lean_dec_ref(v___y_1309_);
lean_dec(v___y_1308_);
lean_dec_ref(v___y_1307_);
lean_dec(v_mvarCounter_1302_);
return v_res_1319_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5(lean_object* v_a_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_){
_start:
{
lean_object* v___x_1330_; lean_object* v_infoState_1331_; lean_object* v_env_1332_; lean_object* v_nextMacroScope_1333_; lean_object* v_ngen_1334_; lean_object* v_auxDeclNGen_1335_; lean_object* v_traceState_1336_; lean_object* v_cache_1337_; lean_object* v_recordedDeps_1338_; lean_object* v_messages_1339_; lean_object* v_snapshotTasks_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1361_; 
v___x_1330_ = lean_st_ref_take(v___y_1328_);
v_infoState_1331_ = lean_ctor_get(v___x_1330_, 8);
v_env_1332_ = lean_ctor_get(v___x_1330_, 0);
v_nextMacroScope_1333_ = lean_ctor_get(v___x_1330_, 1);
v_ngen_1334_ = lean_ctor_get(v___x_1330_, 2);
v_auxDeclNGen_1335_ = lean_ctor_get(v___x_1330_, 3);
v_traceState_1336_ = lean_ctor_get(v___x_1330_, 4);
v_cache_1337_ = lean_ctor_get(v___x_1330_, 5);
v_recordedDeps_1338_ = lean_ctor_get(v___x_1330_, 6);
v_messages_1339_ = lean_ctor_get(v___x_1330_, 7);
v_snapshotTasks_1340_ = lean_ctor_get(v___x_1330_, 9);
v_isSharedCheck_1361_ = !lean_is_exclusive(v___x_1330_);
if (v_isSharedCheck_1361_ == 0)
{
v___x_1342_ = v___x_1330_;
v_isShared_1343_ = v_isSharedCheck_1361_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_snapshotTasks_1340_);
lean_inc(v_infoState_1331_);
lean_inc(v_messages_1339_);
lean_inc(v_recordedDeps_1338_);
lean_inc(v_cache_1337_);
lean_inc(v_traceState_1336_);
lean_inc(v_auxDeclNGen_1335_);
lean_inc(v_ngen_1334_);
lean_inc(v_nextMacroScope_1333_);
lean_inc(v_env_1332_);
lean_dec(v___x_1330_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1361_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
uint8_t v_enabled_1344_; lean_object* v_assignment_1345_; lean_object* v_lazyAssignment_1346_; lean_object* v___x_1348_; uint8_t v_isShared_1349_; uint8_t v_isSharedCheck_1359_; 
v_enabled_1344_ = lean_ctor_get_uint8(v_infoState_1331_, sizeof(void*)*3);
v_assignment_1345_ = lean_ctor_get(v_infoState_1331_, 0);
v_lazyAssignment_1346_ = lean_ctor_get(v_infoState_1331_, 1);
v_isSharedCheck_1359_ = !lean_is_exclusive(v_infoState_1331_);
if (v_isSharedCheck_1359_ == 0)
{
lean_object* v_unused_1360_; 
v_unused_1360_ = lean_ctor_get(v_infoState_1331_, 2);
lean_dec(v_unused_1360_);
v___x_1348_ = v_infoState_1331_;
v_isShared_1349_ = v_isSharedCheck_1359_;
goto v_resetjp_1347_;
}
else
{
lean_inc(v_lazyAssignment_1346_);
lean_inc(v_assignment_1345_);
lean_dec(v_infoState_1331_);
v___x_1348_ = lean_box(0);
v_isShared_1349_ = v_isSharedCheck_1359_;
goto v_resetjp_1347_;
}
v_resetjp_1347_:
{
lean_object* v___x_1350_; lean_object* v___x_1352_; 
v___x_1350_ = lean_box(0);
if (v_isShared_1349_ == 0)
{
lean_ctor_set(v___x_1348_, 2, v_a_1320_);
v___x_1352_ = v___x_1348_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v_assignment_1345_);
lean_ctor_set(v_reuseFailAlloc_1358_, 1, v_lazyAssignment_1346_);
lean_ctor_set(v_reuseFailAlloc_1358_, 2, v_a_1320_);
lean_ctor_set_uint8(v_reuseFailAlloc_1358_, sizeof(void*)*3, v_enabled_1344_);
v___x_1352_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
lean_object* v___x_1354_; 
if (v_isShared_1343_ == 0)
{
lean_ctor_set(v___x_1342_, 8, v___x_1352_);
v___x_1354_ = v___x_1342_;
goto v_reusejp_1353_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v_env_1332_);
lean_ctor_set(v_reuseFailAlloc_1357_, 1, v_nextMacroScope_1333_);
lean_ctor_set(v_reuseFailAlloc_1357_, 2, v_ngen_1334_);
lean_ctor_set(v_reuseFailAlloc_1357_, 3, v_auxDeclNGen_1335_);
lean_ctor_set(v_reuseFailAlloc_1357_, 4, v_traceState_1336_);
lean_ctor_set(v_reuseFailAlloc_1357_, 5, v_cache_1337_);
lean_ctor_set(v_reuseFailAlloc_1357_, 6, v_recordedDeps_1338_);
lean_ctor_set(v_reuseFailAlloc_1357_, 7, v_messages_1339_);
lean_ctor_set(v_reuseFailAlloc_1357_, 8, v___x_1352_);
lean_ctor_set(v_reuseFailAlloc_1357_, 9, v_snapshotTasks_1340_);
v___x_1354_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1353_;
}
v_reusejp_1353_:
{
lean_object* v___x_1355_; lean_object* v___x_1356_; 
v___x_1355_ = lean_st_ref_put(v___y_1328_, v___x_1354_);
v___x_1356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1356_, 0, v___x_1350_);
return v___x_1356_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___boxed(lean_object* v_a_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_){
_start:
{
lean_object* v_res_1372_; 
v_res_1372_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5(v_a_1362_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_);
lean_dec(v___y_1370_);
lean_dec_ref(v___y_1369_);
lean_dec(v___y_1368_);
lean_dec_ref(v___y_1367_);
lean_dec(v___y_1366_);
lean_dec_ref(v___y_1365_);
lean_dec(v___y_1364_);
lean_dec_ref(v___y_1363_);
return v_res_1372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg___lam__0(lean_object* v___y_1373_, lean_object* v_mkInfoTree_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v_a_1382_, lean_object* v_a_x3f_1383_){
_start:
{
lean_object* v___x_1385_; lean_object* v_infoState_1386_; lean_object* v_trees_1387_; lean_object* v___x_1388_; 
v___x_1385_ = lean_st_ref_get(v___y_1373_);
v_infoState_1386_ = lean_ctor_get(v___x_1385_, 8);
lean_inc_ref(v_infoState_1386_);
lean_dec(v___x_1385_);
v_trees_1387_ = lean_ctor_get(v_infoState_1386_, 2);
lean_inc_ref(v_trees_1387_);
lean_dec_ref(v_infoState_1386_);
lean_inc(v___y_1373_);
lean_inc_ref(v___y_1381_);
lean_inc(v___y_1380_);
lean_inc_ref(v___y_1379_);
lean_inc(v___y_1378_);
lean_inc_ref(v___y_1377_);
lean_inc(v___y_1376_);
lean_inc_ref(v___y_1375_);
v___x_1388_ = lean_apply_10(v_mkInfoTree_1374_, v_trees_1387_, v___y_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1373_, lean_box(0));
if (lean_obj_tag(v___x_1388_) == 0)
{
lean_object* v_a_1389_; lean_object* v___x_1391_; uint8_t v_isShared_1392_; uint8_t v_isSharedCheck_1428_; 
v_a_1389_ = lean_ctor_get(v___x_1388_, 0);
v_isSharedCheck_1428_ = !lean_is_exclusive(v___x_1388_);
if (v_isSharedCheck_1428_ == 0)
{
v___x_1391_ = v___x_1388_;
v_isShared_1392_ = v_isSharedCheck_1428_;
goto v_resetjp_1390_;
}
else
{
lean_inc(v_a_1389_);
lean_dec(v___x_1388_);
v___x_1391_ = lean_box(0);
v_isShared_1392_ = v_isSharedCheck_1428_;
goto v_resetjp_1390_;
}
v_resetjp_1390_:
{
lean_object* v___x_1393_; lean_object* v_infoState_1394_; lean_object* v_env_1395_; lean_object* v_nextMacroScope_1396_; lean_object* v_ngen_1397_; lean_object* v_auxDeclNGen_1398_; lean_object* v_traceState_1399_; lean_object* v_cache_1400_; lean_object* v_recordedDeps_1401_; lean_object* v_messages_1402_; lean_object* v_snapshotTasks_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1427_; 
v___x_1393_ = lean_st_ref_take(v___y_1373_);
v_infoState_1394_ = lean_ctor_get(v___x_1393_, 8);
v_env_1395_ = lean_ctor_get(v___x_1393_, 0);
v_nextMacroScope_1396_ = lean_ctor_get(v___x_1393_, 1);
v_ngen_1397_ = lean_ctor_get(v___x_1393_, 2);
v_auxDeclNGen_1398_ = lean_ctor_get(v___x_1393_, 3);
v_traceState_1399_ = lean_ctor_get(v___x_1393_, 4);
v_cache_1400_ = lean_ctor_get(v___x_1393_, 5);
v_recordedDeps_1401_ = lean_ctor_get(v___x_1393_, 6);
v_messages_1402_ = lean_ctor_get(v___x_1393_, 7);
v_snapshotTasks_1403_ = lean_ctor_get(v___x_1393_, 9);
v_isSharedCheck_1427_ = !lean_is_exclusive(v___x_1393_);
if (v_isSharedCheck_1427_ == 0)
{
v___x_1405_ = v___x_1393_;
v_isShared_1406_ = v_isSharedCheck_1427_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_snapshotTasks_1403_);
lean_inc(v_infoState_1394_);
lean_inc(v_messages_1402_);
lean_inc(v_recordedDeps_1401_);
lean_inc(v_cache_1400_);
lean_inc(v_traceState_1399_);
lean_inc(v_auxDeclNGen_1398_);
lean_inc(v_ngen_1397_);
lean_inc(v_nextMacroScope_1396_);
lean_inc(v_env_1395_);
lean_dec(v___x_1393_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1427_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
uint8_t v_enabled_1407_; lean_object* v_assignment_1408_; lean_object* v_lazyAssignment_1409_; lean_object* v___x_1411_; uint8_t v_isShared_1412_; uint8_t v_isSharedCheck_1425_; 
v_enabled_1407_ = lean_ctor_get_uint8(v_infoState_1394_, sizeof(void*)*3);
v_assignment_1408_ = lean_ctor_get(v_infoState_1394_, 0);
v_lazyAssignment_1409_ = lean_ctor_get(v_infoState_1394_, 1);
v_isSharedCheck_1425_ = !lean_is_exclusive(v_infoState_1394_);
if (v_isSharedCheck_1425_ == 0)
{
lean_object* v_unused_1426_; 
v_unused_1426_ = lean_ctor_get(v_infoState_1394_, 2);
lean_dec(v_unused_1426_);
v___x_1411_ = v_infoState_1394_;
v_isShared_1412_ = v_isSharedCheck_1425_;
goto v_resetjp_1410_;
}
else
{
lean_inc(v_lazyAssignment_1409_);
lean_inc(v_assignment_1408_);
lean_dec(v_infoState_1394_);
v___x_1411_ = lean_box(0);
v_isShared_1412_ = v_isSharedCheck_1425_;
goto v_resetjp_1410_;
}
v_resetjp_1410_:
{
lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1416_; 
v___x_1413_ = lean_box(0);
v___x_1414_ = l_Lean_PersistentArray_push___redArg(v_a_1382_, v_a_1389_);
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 2, v___x_1414_);
v___x_1416_ = v___x_1411_;
goto v_reusejp_1415_;
}
else
{
lean_object* v_reuseFailAlloc_1424_; 
v_reuseFailAlloc_1424_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1424_, 0, v_assignment_1408_);
lean_ctor_set(v_reuseFailAlloc_1424_, 1, v_lazyAssignment_1409_);
lean_ctor_set(v_reuseFailAlloc_1424_, 2, v___x_1414_);
lean_ctor_set_uint8(v_reuseFailAlloc_1424_, sizeof(void*)*3, v_enabled_1407_);
v___x_1416_ = v_reuseFailAlloc_1424_;
goto v_reusejp_1415_;
}
v_reusejp_1415_:
{
lean_object* v___x_1418_; 
if (v_isShared_1406_ == 0)
{
lean_ctor_set(v___x_1405_, 8, v___x_1416_);
v___x_1418_ = v___x_1405_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1423_; 
v_reuseFailAlloc_1423_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1423_, 0, v_env_1395_);
lean_ctor_set(v_reuseFailAlloc_1423_, 1, v_nextMacroScope_1396_);
lean_ctor_set(v_reuseFailAlloc_1423_, 2, v_ngen_1397_);
lean_ctor_set(v_reuseFailAlloc_1423_, 3, v_auxDeclNGen_1398_);
lean_ctor_set(v_reuseFailAlloc_1423_, 4, v_traceState_1399_);
lean_ctor_set(v_reuseFailAlloc_1423_, 5, v_cache_1400_);
lean_ctor_set(v_reuseFailAlloc_1423_, 6, v_recordedDeps_1401_);
lean_ctor_set(v_reuseFailAlloc_1423_, 7, v_messages_1402_);
lean_ctor_set(v_reuseFailAlloc_1423_, 8, v___x_1416_);
lean_ctor_set(v_reuseFailAlloc_1423_, 9, v_snapshotTasks_1403_);
v___x_1418_ = v_reuseFailAlloc_1423_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
lean_object* v___x_1419_; lean_object* v___x_1421_; 
v___x_1419_ = lean_st_ref_put(v___y_1373_, v___x_1418_);
if (v_isShared_1392_ == 0)
{
lean_ctor_set(v___x_1391_, 0, v___x_1413_);
v___x_1421_ = v___x_1391_;
goto v_reusejp_1420_;
}
else
{
lean_object* v_reuseFailAlloc_1422_; 
v_reuseFailAlloc_1422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1422_, 0, v___x_1413_);
v___x_1421_ = v_reuseFailAlloc_1422_;
goto v_reusejp_1420_;
}
v_reusejp_1420_:
{
return v___x_1421_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1436_; 
lean_dec_ref(v_a_1382_);
v_a_1429_ = lean_ctor_get(v___x_1388_, 0);
v_isSharedCheck_1436_ = !lean_is_exclusive(v___x_1388_);
if (v_isSharedCheck_1436_ == 0)
{
v___x_1431_ = v___x_1388_;
v_isShared_1432_ = v_isSharedCheck_1436_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_a_1429_);
lean_dec(v___x_1388_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1436_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
lean_object* v___x_1434_; 
if (v_isShared_1432_ == 0)
{
v___x_1434_ = v___x_1431_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v_a_1429_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
return v___x_1434_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg___lam__0___boxed(lean_object* v___y_1437_, lean_object* v_mkInfoTree_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v_a_1446_, lean_object* v_a_x3f_1447_, lean_object* v___y_1448_){
_start:
{
lean_object* v_res_1449_; 
v_res_1449_ = l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg___lam__0(v___y_1437_, v_mkInfoTree_1438_, v___y_1439_, v___y_1440_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_, v_a_1446_, v_a_x3f_1447_);
lean_dec(v_a_x3f_1447_);
lean_dec_ref(v___y_1445_);
lean_dec(v___y_1444_);
lean_dec_ref(v___y_1443_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1441_);
lean_dec(v___y_1440_);
lean_dec_ref(v___y_1439_);
lean_dec(v___y_1437_);
return v_res_1449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg(lean_object* v_x_1450_, lean_object* v_mkInfoTree_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_){
_start:
{
lean_object* v___x_1461_; lean_object* v_infoState_1462_; uint8_t v_enabled_1463_; 
v___x_1461_ = lean_st_ref_get(v___y_1459_);
v_infoState_1462_ = lean_ctor_get(v___x_1461_, 8);
lean_inc_ref(v_infoState_1462_);
lean_dec(v___x_1461_);
v_enabled_1463_ = lean_ctor_get_uint8(v_infoState_1462_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1462_);
if (v_enabled_1463_ == 0)
{
lean_object* v___x_1464_; 
lean_dec_ref(v_mkInfoTree_1451_);
lean_inc(v___y_1459_);
lean_inc_ref(v___y_1458_);
lean_inc(v___y_1457_);
lean_inc_ref(v___y_1456_);
lean_inc(v___y_1455_);
lean_inc_ref(v___y_1454_);
lean_inc(v___y_1453_);
lean_inc_ref(v___y_1452_);
v___x_1464_ = lean_apply_9(v_x_1450_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_, lean_box(0));
return v___x_1464_;
}
else
{
lean_object* v___x_1465_; lean_object* v_a_1466_; lean_object* v_r_1467_; 
v___x_1465_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg(v___y_1459_);
v_a_1466_ = lean_ctor_get(v___x_1465_, 0);
lean_inc(v_a_1466_);
lean_dec_ref(v___x_1465_);
lean_inc(v___y_1459_);
lean_inc_ref(v___y_1458_);
lean_inc(v___y_1457_);
lean_inc_ref(v___y_1456_);
lean_inc(v___y_1455_);
lean_inc_ref(v___y_1454_);
lean_inc(v___y_1453_);
lean_inc_ref(v___y_1452_);
v_r_1467_ = lean_apply_9(v_x_1450_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_, lean_box(0));
if (lean_obj_tag(v_r_1467_) == 0)
{
lean_object* v_a_1468_; lean_object* v___x_1470_; uint8_t v_isShared_1471_; uint8_t v_isSharedCheck_1492_; 
v_a_1468_ = lean_ctor_get(v_r_1467_, 0);
v_isSharedCheck_1492_ = !lean_is_exclusive(v_r_1467_);
if (v_isSharedCheck_1492_ == 0)
{
v___x_1470_ = v_r_1467_;
v_isShared_1471_ = v_isSharedCheck_1492_;
goto v_resetjp_1469_;
}
else
{
lean_inc(v_a_1468_);
lean_dec(v_r_1467_);
v___x_1470_ = lean_box(0);
v_isShared_1471_ = v_isSharedCheck_1492_;
goto v_resetjp_1469_;
}
v_resetjp_1469_:
{
lean_object* v___x_1473_; 
lean_inc(v_a_1468_);
if (v_isShared_1471_ == 0)
{
lean_ctor_set_tag(v___x_1470_, 1);
v___x_1473_ = v___x_1470_;
goto v_reusejp_1472_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v_a_1468_);
v___x_1473_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1472_;
}
v_reusejp_1472_:
{
lean_object* v___x_1474_; 
v___x_1474_ = l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg___lam__0(v___y_1459_, v_mkInfoTree_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v_a_1466_, v___x_1473_);
lean_dec_ref(v___x_1473_);
if (lean_obj_tag(v___x_1474_) == 0)
{
lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1481_; 
v_isSharedCheck_1481_ = !lean_is_exclusive(v___x_1474_);
if (v_isSharedCheck_1481_ == 0)
{
lean_object* v_unused_1482_; 
v_unused_1482_ = lean_ctor_get(v___x_1474_, 0);
lean_dec(v_unused_1482_);
v___x_1476_ = v___x_1474_;
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
else
{
lean_dec(v___x_1474_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v___x_1479_; 
if (v_isShared_1477_ == 0)
{
lean_ctor_set(v___x_1476_, 0, v_a_1468_);
v___x_1479_ = v___x_1476_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v_a_1468_);
v___x_1479_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
return v___x_1479_;
}
}
}
else
{
lean_object* v_a_1483_; lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1490_; 
lean_dec(v_a_1468_);
v_a_1483_ = lean_ctor_get(v___x_1474_, 0);
v_isSharedCheck_1490_ = !lean_is_exclusive(v___x_1474_);
if (v_isSharedCheck_1490_ == 0)
{
v___x_1485_ = v___x_1474_;
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
else
{
lean_inc(v_a_1483_);
lean_dec(v___x_1474_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
lean_object* v___x_1488_; 
if (v_isShared_1486_ == 0)
{
v___x_1488_ = v___x_1485_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v_a_1483_);
v___x_1488_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
return v___x_1488_;
}
}
}
}
}
}
else
{
lean_object* v_a_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; 
v_a_1493_ = lean_ctor_get(v_r_1467_, 0);
lean_inc(v_a_1493_);
lean_dec_ref_known(v_r_1467_, 1);
v___x_1494_ = lean_box(0);
v___x_1495_ = l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg___lam__0(v___y_1459_, v_mkInfoTree_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v_a_1466_, v___x_1494_);
if (lean_obj_tag(v___x_1495_) == 0)
{
lean_object* v___x_1497_; uint8_t v_isShared_1498_; uint8_t v_isSharedCheck_1502_; 
v_isSharedCheck_1502_ = !lean_is_exclusive(v___x_1495_);
if (v_isSharedCheck_1502_ == 0)
{
lean_object* v_unused_1503_; 
v_unused_1503_ = lean_ctor_get(v___x_1495_, 0);
lean_dec(v_unused_1503_);
v___x_1497_ = v___x_1495_;
v_isShared_1498_ = v_isSharedCheck_1502_;
goto v_resetjp_1496_;
}
else
{
lean_dec(v___x_1495_);
v___x_1497_ = lean_box(0);
v_isShared_1498_ = v_isSharedCheck_1502_;
goto v_resetjp_1496_;
}
v_resetjp_1496_:
{
lean_object* v___x_1500_; 
if (v_isShared_1498_ == 0)
{
lean_ctor_set_tag(v___x_1497_, 1);
lean_ctor_set(v___x_1497_, 0, v_a_1493_);
v___x_1500_ = v___x_1497_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1501_; 
v_reuseFailAlloc_1501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1501_, 0, v_a_1493_);
v___x_1500_ = v_reuseFailAlloc_1501_;
goto v_reusejp_1499_;
}
v_reusejp_1499_:
{
return v___x_1500_;
}
}
}
else
{
lean_object* v_a_1504_; lean_object* v___x_1506_; uint8_t v_isShared_1507_; uint8_t v_isSharedCheck_1511_; 
lean_dec(v_a_1493_);
v_a_1504_ = lean_ctor_get(v___x_1495_, 0);
v_isSharedCheck_1511_ = !lean_is_exclusive(v___x_1495_);
if (v_isSharedCheck_1511_ == 0)
{
v___x_1506_ = v___x_1495_;
v_isShared_1507_ = v_isSharedCheck_1511_;
goto v_resetjp_1505_;
}
else
{
lean_inc(v_a_1504_);
lean_dec(v___x_1495_);
v___x_1506_ = lean_box(0);
v_isShared_1507_ = v_isSharedCheck_1511_;
goto v_resetjp_1505_;
}
v_resetjp_1505_:
{
lean_object* v___x_1509_; 
if (v_isShared_1507_ == 0)
{
v___x_1509_ = v___x_1506_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v_a_1504_);
v___x_1509_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
return v___x_1509_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg___boxed(lean_object* v_x_1512_, lean_object* v_mkInfoTree_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_){
_start:
{
lean_object* v_res_1523_; 
v_res_1523_ = l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg(v_x_1512_, v_mkInfoTree_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_);
lean_dec(v___y_1521_);
lean_dec_ref(v___y_1520_);
lean_dec(v___y_1519_);
lean_dec_ref(v___y_1518_);
lean_dec(v___y_1517_);
lean_dec_ref(v___y_1516_);
lean_dec(v___y_1515_);
lean_dec_ref(v___y_1514_);
return v_res_1523_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__5___redArg(lean_object* v_msg_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_){
_start:
{
lean_object* v_ref_1530_; lean_object* v___x_1531_; lean_object* v_a_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1540_; 
v_ref_1530_ = lean_ctor_get(v___y_1527_, 2);
v___x_1531_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__2(v_msg_1524_, v___y_1525_, v___y_1526_, v___y_1527_, v___y_1528_);
v_a_1532_ = lean_ctor_get(v___x_1531_, 0);
v_isSharedCheck_1540_ = !lean_is_exclusive(v___x_1531_);
if (v_isSharedCheck_1540_ == 0)
{
v___x_1534_ = v___x_1531_;
v_isShared_1535_ = v_isSharedCheck_1540_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_a_1532_);
lean_dec(v___x_1531_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1540_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___x_1536_; lean_object* v___x_1538_; 
lean_inc(v_ref_1530_);
v___x_1536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1536_, 0, v_ref_1530_);
lean_ctor_set(v___x_1536_, 1, v_a_1532_);
if (v_isShared_1535_ == 0)
{
lean_ctor_set_tag(v___x_1534_, 1);
lean_ctor_set(v___x_1534_, 0, v___x_1536_);
v___x_1538_ = v___x_1534_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v___x_1536_);
v___x_1538_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
return v___x_1538_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__5___redArg___boxed(lean_object* v_msg_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_){
_start:
{
lean_object* v_res_1547_; 
v_res_1547_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__5___redArg(v_msg_1541_, v___y_1542_, v___y_1543_, v___y_1544_, v___y_1545_);
lean_dec(v___y_1545_);
lean_dec_ref(v___y_1544_);
lean_dec(v___y_1543_);
lean_dec_ref(v___y_1542_);
return v_res_1547_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10_spec__15___redArg(lean_object* v_a_1548_, lean_object* v_x_1549_){
_start:
{
if (lean_obj_tag(v_x_1549_) == 0)
{
uint8_t v___x_1550_; 
v___x_1550_ = 0;
return v___x_1550_;
}
else
{
lean_object* v_key_1551_; lean_object* v_tail_1552_; uint8_t v___x_1553_; 
v_key_1551_ = lean_ctor_get(v_x_1549_, 0);
v_tail_1552_ = lean_ctor_get(v_x_1549_, 2);
v___x_1553_ = lean_expr_eqv(v_key_1551_, v_a_1548_);
if (v___x_1553_ == 0)
{
v_x_1549_ = v_tail_1552_;
goto _start;
}
else
{
return v___x_1553_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10_spec__15___redArg___boxed(lean_object* v_a_1555_, lean_object* v_x_1556_){
_start:
{
uint8_t v_res_1557_; lean_object* v_r_1558_; 
v_res_1557_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10_spec__15___redArg(v_a_1555_, v_x_1556_);
lean_dec(v_x_1556_);
lean_dec_ref(v_a_1555_);
v_r_1558_ = lean_box(v_res_1557_);
return v_r_1558_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17_spec__19_spec__23___redArg(lean_object* v_x_1559_, lean_object* v_x_1560_){
_start:
{
if (lean_obj_tag(v_x_1560_) == 0)
{
return v_x_1559_;
}
else
{
lean_object* v_key_1561_; lean_object* v_value_1562_; lean_object* v_tail_1563_; lean_object* v___x_1565_; uint8_t v_isShared_1566_; uint8_t v_isSharedCheck_1586_; 
v_key_1561_ = lean_ctor_get(v_x_1560_, 0);
v_value_1562_ = lean_ctor_get(v_x_1560_, 1);
v_tail_1563_ = lean_ctor_get(v_x_1560_, 2);
v_isSharedCheck_1586_ = !lean_is_exclusive(v_x_1560_);
if (v_isSharedCheck_1586_ == 0)
{
v___x_1565_ = v_x_1560_;
v_isShared_1566_ = v_isSharedCheck_1586_;
goto v_resetjp_1564_;
}
else
{
lean_inc(v_tail_1563_);
lean_inc(v_value_1562_);
lean_inc(v_key_1561_);
lean_dec(v_x_1560_);
v___x_1565_ = lean_box(0);
v_isShared_1566_ = v_isSharedCheck_1586_;
goto v_resetjp_1564_;
}
v_resetjp_1564_:
{
lean_object* v___x_1567_; uint64_t v___x_1568_; uint64_t v___x_1569_; uint64_t v___x_1570_; uint64_t v_fold_1571_; uint64_t v___x_1572_; uint64_t v___x_1573_; uint64_t v___x_1574_; size_t v___x_1575_; size_t v___x_1576_; size_t v___x_1577_; size_t v___x_1578_; size_t v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1582_; 
v___x_1567_ = lean_array_get_size(v_x_1559_);
v___x_1568_ = l_Lean_Expr_hash(v_key_1561_);
v___x_1569_ = 32ULL;
v___x_1570_ = lean_uint64_shift_right(v___x_1568_, v___x_1569_);
v_fold_1571_ = lean_uint64_xor(v___x_1568_, v___x_1570_);
v___x_1572_ = 16ULL;
v___x_1573_ = lean_uint64_shift_right(v_fold_1571_, v___x_1572_);
v___x_1574_ = lean_uint64_xor(v_fold_1571_, v___x_1573_);
v___x_1575_ = lean_uint64_to_usize(v___x_1574_);
v___x_1576_ = lean_usize_of_nat(v___x_1567_);
v___x_1577_ = ((size_t)1ULL);
v___x_1578_ = lean_usize_sub(v___x_1576_, v___x_1577_);
v___x_1579_ = lean_usize_land(v___x_1575_, v___x_1578_);
v___x_1580_ = lean_array_uget_borrowed(v_x_1559_, v___x_1579_);
lean_inc(v___x_1580_);
if (v_isShared_1566_ == 0)
{
lean_ctor_set(v___x_1565_, 2, v___x_1580_);
v___x_1582_ = v___x_1565_;
goto v_reusejp_1581_;
}
else
{
lean_object* v_reuseFailAlloc_1585_; 
v_reuseFailAlloc_1585_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1585_, 0, v_key_1561_);
lean_ctor_set(v_reuseFailAlloc_1585_, 1, v_value_1562_);
lean_ctor_set(v_reuseFailAlloc_1585_, 2, v___x_1580_);
v___x_1582_ = v_reuseFailAlloc_1585_;
goto v_reusejp_1581_;
}
v_reusejp_1581_:
{
lean_object* v___x_1583_; 
v___x_1583_ = lean_array_uset(v_x_1559_, v___x_1579_, v___x_1582_);
v_x_1559_ = v___x_1583_;
v_x_1560_ = v_tail_1563_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17_spec__19___redArg(lean_object* v_i_1587_, lean_object* v_source_1588_, lean_object* v_target_1589_){
_start:
{
lean_object* v___x_1590_; uint8_t v___x_1591_; 
v___x_1590_ = lean_array_get_size(v_source_1588_);
v___x_1591_ = lean_nat_dec_lt(v_i_1587_, v___x_1590_);
if (v___x_1591_ == 0)
{
lean_dec_ref(v_source_1588_);
lean_dec(v_i_1587_);
return v_target_1589_;
}
else
{
lean_object* v_es_1592_; lean_object* v___x_1593_; lean_object* v_source_1594_; lean_object* v_target_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; 
v_es_1592_ = lean_array_fget(v_source_1588_, v_i_1587_);
v___x_1593_ = lean_box(0);
v_source_1594_ = lean_array_fset(v_source_1588_, v_i_1587_, v___x_1593_);
v_target_1595_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17_spec__19_spec__23___redArg(v_target_1589_, v_es_1592_);
v___x_1596_ = lean_unsigned_to_nat(1u);
v___x_1597_ = lean_nat_add(v_i_1587_, v___x_1596_);
lean_dec(v_i_1587_);
v_i_1587_ = v___x_1597_;
v_source_1588_ = v_source_1594_;
v_target_1589_ = v_target_1595_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17___redArg(lean_object* v_data_1599_){
_start:
{
lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v_nbuckets_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; 
v___x_1600_ = lean_array_get_size(v_data_1599_);
v___x_1601_ = lean_unsigned_to_nat(2u);
v_nbuckets_1602_ = lean_nat_mul(v___x_1600_, v___x_1601_);
v___x_1603_ = lean_unsigned_to_nat(0u);
v___x_1604_ = lean_box(0);
v___x_1605_ = lean_mk_array(v_nbuckets_1602_, v___x_1604_);
v___x_1606_ = lean_array_propagate_mark(v_data_1599_, v___x_1605_);
v___x_1607_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17_spec__19___redArg(v___x_1603_, v_data_1599_, v___x_1606_);
return v___x_1607_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11___redArg(lean_object* v_m_1608_, lean_object* v_a_1609_, lean_object* v_b_1610_){
_start:
{
lean_object* v_size_1611_; lean_object* v_buckets_1612_; lean_object* v___x_1613_; uint64_t v___x_1614_; uint64_t v___x_1615_; uint64_t v___x_1616_; uint64_t v_fold_1617_; uint64_t v___x_1618_; uint64_t v___x_1619_; uint64_t v___x_1620_; size_t v___x_1621_; size_t v___x_1622_; size_t v___x_1623_; size_t v___x_1624_; size_t v___x_1625_; lean_object* v_bkt_1626_; uint8_t v___x_1627_; 
v_size_1611_ = lean_ctor_get(v_m_1608_, 0);
v_buckets_1612_ = lean_ctor_get(v_m_1608_, 1);
v___x_1613_ = lean_array_get_size(v_buckets_1612_);
v___x_1614_ = l_Lean_Expr_hash(v_a_1609_);
v___x_1615_ = 32ULL;
v___x_1616_ = lean_uint64_shift_right(v___x_1614_, v___x_1615_);
v_fold_1617_ = lean_uint64_xor(v___x_1614_, v___x_1616_);
v___x_1618_ = 16ULL;
v___x_1619_ = lean_uint64_shift_right(v_fold_1617_, v___x_1618_);
v___x_1620_ = lean_uint64_xor(v_fold_1617_, v___x_1619_);
v___x_1621_ = lean_uint64_to_usize(v___x_1620_);
v___x_1622_ = lean_usize_of_nat(v___x_1613_);
v___x_1623_ = ((size_t)1ULL);
v___x_1624_ = lean_usize_sub(v___x_1622_, v___x_1623_);
v___x_1625_ = lean_usize_land(v___x_1621_, v___x_1624_);
v_bkt_1626_ = lean_array_uget_borrowed(v_buckets_1612_, v___x_1625_);
v___x_1627_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10_spec__15___redArg(v_a_1609_, v_bkt_1626_);
if (v___x_1627_ == 0)
{
lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1648_; 
lean_inc_ref(v_buckets_1612_);
lean_inc(v_size_1611_);
v_isSharedCheck_1648_ = !lean_is_exclusive(v_m_1608_);
if (v_isSharedCheck_1648_ == 0)
{
lean_object* v_unused_1649_; lean_object* v_unused_1650_; 
v_unused_1649_ = lean_ctor_get(v_m_1608_, 1);
lean_dec(v_unused_1649_);
v_unused_1650_ = lean_ctor_get(v_m_1608_, 0);
lean_dec(v_unused_1650_);
v___x_1629_ = v_m_1608_;
v_isShared_1630_ = v_isSharedCheck_1648_;
goto v_resetjp_1628_;
}
else
{
lean_dec(v_m_1608_);
v___x_1629_ = lean_box(0);
v_isShared_1630_ = v_isSharedCheck_1648_;
goto v_resetjp_1628_;
}
v_resetjp_1628_:
{
lean_object* v___x_1631_; lean_object* v_size_x27_1632_; lean_object* v___x_1633_; lean_object* v_buckets_x27_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; uint8_t v___x_1640_; 
v___x_1631_ = lean_unsigned_to_nat(1u);
v_size_x27_1632_ = lean_nat_add(v_size_1611_, v___x_1631_);
lean_dec(v_size_1611_);
lean_inc(v_bkt_1626_);
v___x_1633_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1633_, 0, v_a_1609_);
lean_ctor_set(v___x_1633_, 1, v_b_1610_);
lean_ctor_set(v___x_1633_, 2, v_bkt_1626_);
v_buckets_x27_1634_ = lean_array_uset(v_buckets_1612_, v___x_1625_, v___x_1633_);
v___x_1635_ = lean_unsigned_to_nat(4u);
v___x_1636_ = lean_nat_mul(v_size_x27_1632_, v___x_1635_);
v___x_1637_ = lean_unsigned_to_nat(3u);
v___x_1638_ = lean_nat_div(v___x_1636_, v___x_1637_);
lean_dec(v___x_1636_);
v___x_1639_ = lean_array_get_size(v_buckets_x27_1634_);
v___x_1640_ = lean_nat_dec_le(v___x_1638_, v___x_1639_);
lean_dec(v___x_1638_);
if (v___x_1640_ == 0)
{
lean_object* v_val_1641_; lean_object* v___x_1643_; 
v_val_1641_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17___redArg(v_buckets_x27_1634_);
if (v_isShared_1630_ == 0)
{
lean_ctor_set(v___x_1629_, 1, v_val_1641_);
lean_ctor_set(v___x_1629_, 0, v_size_x27_1632_);
v___x_1643_ = v___x_1629_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v_size_x27_1632_);
lean_ctor_set(v_reuseFailAlloc_1644_, 1, v_val_1641_);
v___x_1643_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
return v___x_1643_;
}
}
else
{
lean_object* v___x_1646_; 
if (v_isShared_1630_ == 0)
{
lean_ctor_set(v___x_1629_, 1, v_buckets_x27_1634_);
lean_ctor_set(v___x_1629_, 0, v_size_x27_1632_);
v___x_1646_ = v___x_1629_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v_size_x27_1632_);
lean_ctor_set(v_reuseFailAlloc_1647_, 1, v_buckets_x27_1634_);
v___x_1646_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
return v___x_1646_;
}
}
}
}
else
{
lean_dec(v_b_1610_);
lean_dec_ref(v_a_1609_);
return v_m_1608_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__19___redArg(lean_object* v_mvarId_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_){
_start:
{
lean_object* v___x_1655_; lean_object* v_mctx_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; 
v___x_1655_ = lean_st_ref_get(v___y_1653_);
v_mctx_1656_ = lean_ctor_get(v___x_1655_, 0);
lean_inc_ref(v_mctx_1656_);
lean_dec(v___x_1655_);
v___x_1657_ = l_Lean_MetavarContext_getExprAssignmentCore_x3f(v_mctx_1656_, v_mvarId_1651_);
lean_dec_ref(v_mctx_1656_);
v___x_1658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1658_, 0, v___x_1657_);
v___x_1659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1659_, 0, v___x_1658_);
lean_ctor_set(v___x_1659_, 1, v___y_1652_);
v___x_1660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1660_, 0, v___x_1659_);
return v___x_1660_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__19___redArg___boxed(lean_object* v_mvarId_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_){
_start:
{
lean_object* v_res_1665_; 
v_res_1665_ = l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__19___redArg(v_mvarId_1661_, v___y_1662_, v___y_1663_);
lean_dec(v___y_1663_);
lean_dec(v_mvarId_1661_);
return v_res_1665_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__20___redArg(lean_object* v_mvarId_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_){
_start:
{
lean_object* v___x_1670_; lean_object* v_mctx_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; 
v___x_1670_ = lean_st_ref_get(v___y_1668_);
v_mctx_1671_ = lean_ctor_get(v___x_1670_, 0);
lean_inc_ref(v_mctx_1671_);
lean_dec(v___x_1670_);
v___x_1672_ = l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(v_mctx_1671_, v_mvarId_1666_);
lean_dec_ref(v_mctx_1671_);
v___x_1673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1673_, 0, v___x_1672_);
v___x_1674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1674_, 0, v___x_1673_);
lean_ctor_set(v___x_1674_, 1, v___y_1667_);
v___x_1675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1675_, 0, v___x_1674_);
return v___x_1675_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__20___redArg___boxed(lean_object* v_mvarId_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_){
_start:
{
lean_object* v_res_1680_; 
v_res_1680_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__20___redArg(v_mvarId_1676_, v___y_1677_, v___y_1678_);
lean_dec(v___y_1678_);
lean_dec(v_mvarId_1676_);
return v_res_1680_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10___redArg(lean_object* v_m_1681_, lean_object* v_a_1682_){
_start:
{
lean_object* v_buckets_1683_; lean_object* v___x_1684_; uint64_t v___x_1685_; uint64_t v___x_1686_; uint64_t v___x_1687_; uint64_t v_fold_1688_; uint64_t v___x_1689_; uint64_t v___x_1690_; uint64_t v___x_1691_; size_t v___x_1692_; size_t v___x_1693_; size_t v___x_1694_; size_t v___x_1695_; size_t v___x_1696_; lean_object* v___x_1697_; uint8_t v___x_1698_; 
v_buckets_1683_ = lean_ctor_get(v_m_1681_, 1);
v___x_1684_ = lean_array_get_size(v_buckets_1683_);
v___x_1685_ = l_Lean_Expr_hash(v_a_1682_);
v___x_1686_ = 32ULL;
v___x_1687_ = lean_uint64_shift_right(v___x_1685_, v___x_1686_);
v_fold_1688_ = lean_uint64_xor(v___x_1685_, v___x_1687_);
v___x_1689_ = 16ULL;
v___x_1690_ = lean_uint64_shift_right(v_fold_1688_, v___x_1689_);
v___x_1691_ = lean_uint64_xor(v_fold_1688_, v___x_1690_);
v___x_1692_ = lean_uint64_to_usize(v___x_1691_);
v___x_1693_ = lean_usize_of_nat(v___x_1684_);
v___x_1694_ = ((size_t)1ULL);
v___x_1695_ = lean_usize_sub(v___x_1693_, v___x_1694_);
v___x_1696_ = lean_usize_land(v___x_1692_, v___x_1695_);
v___x_1697_ = lean_array_uget_borrowed(v_buckets_1683_, v___x_1696_);
v___x_1698_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10_spec__15___redArg(v_a_1682_, v___x_1697_);
return v___x_1698_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10___redArg___boxed(lean_object* v_m_1699_, lean_object* v_a_1700_){
_start:
{
uint8_t v_res_1701_; lean_object* v_r_1702_; 
v_res_1701_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10___redArg(v_m_1699_, v_a_1700_);
lean_dec_ref(v_a_1700_);
lean_dec_ref(v_m_1699_);
v_r_1702_ = lean_box(v_res_1701_);
return v_r_1702_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6(lean_object* v_mvarId_1707_, lean_object* v_e_1708_, lean_object* v_a_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_){
_start:
{
lean_object* v___y_1720_; lean_object* v_d_1725_; lean_object* v_b_1726_; lean_object* v___y_1727_; uint8_t v___x_1733_; 
v___x_1733_ = l_Lean_Expr_hasExprMVar(v_e_1708_);
if (v___x_1733_ == 0)
{
lean_dec_ref(v_e_1708_);
v___y_1720_ = v_a_1709_;
goto v___jp_1719_;
}
else
{
uint8_t v___x_1734_; 
v___x_1734_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10___redArg(v_a_1709_, v_e_1708_);
if (v___x_1734_ == 0)
{
lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1735_ = lean_box(0);
lean_inc_ref(v_e_1708_);
v___x_1736_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11___redArg(v_a_1709_, v_e_1708_, v___x_1735_);
switch(lean_obj_tag(v_e_1708_))
{
case 11:
{
lean_object* v_struct_1737_; 
v_struct_1737_ = lean_ctor_get(v_e_1708_, 2);
lean_inc_ref(v_struct_1737_);
lean_dec_ref_known(v_e_1708_, 3);
v_e_1708_ = v_struct_1737_;
v_a_1709_ = v___x_1736_;
goto _start;
}
case 7:
{
lean_object* v_binderType_1739_; lean_object* v_body_1740_; 
v_binderType_1739_ = lean_ctor_get(v_e_1708_, 1);
lean_inc_ref(v_binderType_1739_);
v_body_1740_ = lean_ctor_get(v_e_1708_, 2);
lean_inc_ref(v_body_1740_);
lean_dec_ref_known(v_e_1708_, 3);
v_d_1725_ = v_binderType_1739_;
v_b_1726_ = v_body_1740_;
v___y_1727_ = v___x_1736_;
goto v___jp_1724_;
}
case 6:
{
lean_object* v_binderType_1741_; lean_object* v_body_1742_; 
v_binderType_1741_ = lean_ctor_get(v_e_1708_, 1);
lean_inc_ref(v_binderType_1741_);
v_body_1742_ = lean_ctor_get(v_e_1708_, 2);
lean_inc_ref(v_body_1742_);
lean_dec_ref_known(v_e_1708_, 3);
v_d_1725_ = v_binderType_1741_;
v_b_1726_ = v_body_1742_;
v___y_1727_ = v___x_1736_;
goto v___jp_1724_;
}
case 8:
{
lean_object* v_type_1743_; lean_object* v_value_1744_; lean_object* v_body_1745_; lean_object* v___x_1746_; 
v_type_1743_ = lean_ctor_get(v_e_1708_, 1);
lean_inc_ref(v_type_1743_);
v_value_1744_ = lean_ctor_get(v_e_1708_, 2);
lean_inc_ref(v_value_1744_);
v_body_1745_ = lean_ctor_get(v_e_1708_, 3);
lean_inc_ref(v_body_1745_);
lean_dec_ref_known(v_e_1708_, 4);
v___x_1746_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6(v_mvarId_1707_, v_type_1743_, v___x_1736_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_);
if (lean_obj_tag(v___x_1746_) == 0)
{
lean_object* v_a_1747_; lean_object* v_fst_1748_; 
v_a_1747_ = lean_ctor_get(v___x_1746_, 0);
v_fst_1748_ = lean_ctor_get(v_a_1747_, 0);
if (lean_obj_tag(v_fst_1748_) == 0)
{
lean_dec_ref(v_body_1745_);
lean_dec_ref(v_value_1744_);
return v___x_1746_;
}
else
{
lean_object* v_snd_1749_; lean_object* v___x_1750_; 
lean_inc(v_a_1747_);
lean_dec_ref_known(v___x_1746_, 1);
v_snd_1749_ = lean_ctor_get(v_a_1747_, 1);
lean_inc(v_snd_1749_);
lean_dec(v_a_1747_);
v___x_1750_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6(v_mvarId_1707_, v_value_1744_, v_snd_1749_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_);
if (lean_obj_tag(v___x_1750_) == 0)
{
lean_object* v_a_1751_; lean_object* v_fst_1752_; 
v_a_1751_ = lean_ctor_get(v___x_1750_, 0);
v_fst_1752_ = lean_ctor_get(v_a_1751_, 0);
if (lean_obj_tag(v_fst_1752_) == 0)
{
lean_dec_ref(v_body_1745_);
return v___x_1750_;
}
else
{
lean_object* v_snd_1753_; 
lean_inc(v_a_1751_);
lean_dec_ref_known(v___x_1750_, 1);
v_snd_1753_ = lean_ctor_get(v_a_1751_, 1);
lean_inc(v_snd_1753_);
lean_dec(v_a_1751_);
v_e_1708_ = v_body_1745_;
v_a_1709_ = v_snd_1753_;
goto _start;
}
}
else
{
lean_dec_ref(v_body_1745_);
return v___x_1750_;
}
}
}
else
{
lean_dec_ref(v_body_1745_);
lean_dec_ref(v_value_1744_);
return v___x_1746_;
}
}
case 10:
{
lean_object* v_expr_1755_; 
v_expr_1755_ = lean_ctor_get(v_e_1708_, 1);
lean_inc_ref(v_expr_1755_);
lean_dec_ref_known(v_e_1708_, 2);
v_e_1708_ = v_expr_1755_;
v_a_1709_ = v___x_1736_;
goto _start;
}
case 5:
{
lean_object* v_fn_1757_; lean_object* v_arg_1758_; lean_object* v___x_1759_; 
v_fn_1757_ = lean_ctor_get(v_e_1708_, 0);
lean_inc_ref(v_fn_1757_);
v_arg_1758_ = lean_ctor_get(v_e_1708_, 1);
lean_inc_ref(v_arg_1758_);
lean_dec_ref_known(v_e_1708_, 2);
v___x_1759_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6(v_mvarId_1707_, v_fn_1757_, v___x_1736_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_);
if (lean_obj_tag(v___x_1759_) == 0)
{
lean_object* v_a_1760_; lean_object* v_fst_1761_; 
v_a_1760_ = lean_ctor_get(v___x_1759_, 0);
v_fst_1761_ = lean_ctor_get(v_a_1760_, 0);
if (lean_obj_tag(v_fst_1761_) == 0)
{
lean_dec_ref(v_arg_1758_);
return v___x_1759_;
}
else
{
lean_object* v_snd_1762_; 
lean_inc(v_a_1760_);
lean_dec_ref_known(v___x_1759_, 1);
v_snd_1762_ = lean_ctor_get(v_a_1760_, 1);
lean_inc(v_snd_1762_);
lean_dec(v_a_1760_);
v_e_1708_ = v_arg_1758_;
v_a_1709_ = v_snd_1762_;
goto _start;
}
}
else
{
lean_dec_ref(v_arg_1758_);
return v___x_1759_;
}
}
case 2:
{
lean_object* v_mvarId_1764_; lean_object* v___x_1765_; 
v_mvarId_1764_ = lean_ctor_get(v_e_1708_, 0);
lean_inc(v_mvarId_1764_);
lean_dec_ref_known(v_e_1708_, 1);
v___x_1765_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12(v_mvarId_1707_, v_mvarId_1764_, v___x_1736_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_);
return v___x_1765_;
}
default: 
{
lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; 
lean_dec_ref(v_e_1708_);
v___x_1766_ = ((lean_object*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12___closed__0));
v___x_1767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1767_, 0, v___x_1766_);
lean_ctor_set(v___x_1767_, 1, v___x_1736_);
v___x_1768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1768_, 0, v___x_1767_);
return v___x_1768_;
}
}
}
else
{
lean_dec_ref(v_e_1708_);
v___y_1720_ = v_a_1709_;
goto v___jp_1719_;
}
}
v___jp_1719_:
{
lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; 
v___x_1721_ = ((lean_object*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12___closed__0));
v___x_1722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1722_, 0, v___x_1721_);
lean_ctor_set(v___x_1722_, 1, v___y_1720_);
v___x_1723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1723_, 0, v___x_1722_);
return v___x_1723_;
}
v___jp_1724_:
{
lean_object* v___x_1728_; 
v___x_1728_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6(v_mvarId_1707_, v_d_1725_, v___y_1727_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_);
if (lean_obj_tag(v___x_1728_) == 0)
{
lean_object* v_a_1729_; lean_object* v_fst_1730_; 
v_a_1729_ = lean_ctor_get(v___x_1728_, 0);
v_fst_1730_ = lean_ctor_get(v_a_1729_, 0);
if (lean_obj_tag(v_fst_1730_) == 0)
{
lean_dec_ref(v_b_1726_);
return v___x_1728_;
}
else
{
lean_object* v_snd_1731_; 
lean_inc(v_a_1729_);
lean_dec_ref_known(v___x_1728_, 1);
v_snd_1731_ = lean_ctor_get(v_a_1729_, 1);
lean_inc(v_snd_1731_);
lean_dec(v_a_1729_);
v_e_1708_ = v_b_1726_;
v_a_1709_ = v_snd_1731_;
goto _start;
}
}
else
{
lean_dec_ref(v_b_1726_);
return v___x_1728_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12(lean_object* v_mvarId_1769_, lean_object* v_mvarId_x27_1770_, lean_object* v_a_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_){
_start:
{
uint8_t v___x_1781_; 
v___x_1781_ = l_Lean_instBEqMVarId_beq(v_mvarId_1769_, v_mvarId_x27_1770_);
if (v___x_1781_ == 0)
{
lean_object* v___x_1782_; 
v___x_1782_ = l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__19___redArg(v_mvarId_x27_1770_, v_a_1771_, v___y_1777_);
if (lean_obj_tag(v___x_1782_) == 0)
{
lean_object* v_a_1783_; lean_object* v___x_1785_; uint8_t v_isShared_1786_; uint8_t v_isSharedCheck_1866_; 
v_a_1783_ = lean_ctor_get(v___x_1782_, 0);
v_isSharedCheck_1866_ = !lean_is_exclusive(v___x_1782_);
if (v_isSharedCheck_1866_ == 0)
{
v___x_1785_ = v___x_1782_;
v_isShared_1786_ = v_isSharedCheck_1866_;
goto v_resetjp_1784_;
}
else
{
lean_inc(v_a_1783_);
lean_dec(v___x_1782_);
v___x_1785_ = lean_box(0);
v_isShared_1786_ = v_isSharedCheck_1866_;
goto v_resetjp_1784_;
}
v_resetjp_1784_:
{
lean_object* v_fst_1787_; 
v_fst_1787_ = lean_ctor_get(v_a_1783_, 0);
lean_inc(v_fst_1787_);
if (lean_obj_tag(v_fst_1787_) == 0)
{
lean_object* v_snd_1788_; lean_object* v___x_1790_; uint8_t v_isShared_1791_; uint8_t v_isSharedCheck_1806_; 
lean_dec(v_mvarId_x27_1770_);
v_snd_1788_ = lean_ctor_get(v_a_1783_, 1);
v_isSharedCheck_1806_ = !lean_is_exclusive(v_a_1783_);
if (v_isSharedCheck_1806_ == 0)
{
lean_object* v_unused_1807_; 
v_unused_1807_ = lean_ctor_get(v_a_1783_, 0);
lean_dec(v_unused_1807_);
v___x_1790_ = v_a_1783_;
v_isShared_1791_ = v_isSharedCheck_1806_;
goto v_resetjp_1789_;
}
else
{
lean_inc(v_snd_1788_);
lean_dec(v_a_1783_);
v___x_1790_ = lean_box(0);
v_isShared_1791_ = v_isSharedCheck_1806_;
goto v_resetjp_1789_;
}
v_resetjp_1789_:
{
lean_object* v_a_1792_; lean_object* v___x_1794_; uint8_t v_isShared_1795_; uint8_t v_isSharedCheck_1805_; 
v_a_1792_ = lean_ctor_get(v_fst_1787_, 0);
v_isSharedCheck_1805_ = !lean_is_exclusive(v_fst_1787_);
if (v_isSharedCheck_1805_ == 0)
{
v___x_1794_ = v_fst_1787_;
v_isShared_1795_ = v_isSharedCheck_1805_;
goto v_resetjp_1793_;
}
else
{
lean_inc(v_a_1792_);
lean_dec(v_fst_1787_);
v___x_1794_ = lean_box(0);
v_isShared_1795_ = v_isSharedCheck_1805_;
goto v_resetjp_1793_;
}
v_resetjp_1793_:
{
lean_object* v___x_1797_; 
if (v_isShared_1795_ == 0)
{
v___x_1797_ = v___x_1794_;
goto v_reusejp_1796_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v_a_1792_);
v___x_1797_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1796_;
}
v_reusejp_1796_:
{
lean_object* v___x_1799_; 
if (v_isShared_1791_ == 0)
{
lean_ctor_set(v___x_1790_, 0, v___x_1797_);
v___x_1799_ = v___x_1790_;
goto v_reusejp_1798_;
}
else
{
lean_object* v_reuseFailAlloc_1803_; 
v_reuseFailAlloc_1803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1803_, 0, v___x_1797_);
lean_ctor_set(v_reuseFailAlloc_1803_, 1, v_snd_1788_);
v___x_1799_ = v_reuseFailAlloc_1803_;
goto v_reusejp_1798_;
}
v_reusejp_1798_:
{
lean_object* v___x_1801_; 
if (v_isShared_1786_ == 0)
{
lean_ctor_set(v___x_1785_, 0, v___x_1799_);
v___x_1801_ = v___x_1785_;
goto v_reusejp_1800_;
}
else
{
lean_object* v_reuseFailAlloc_1802_; 
v_reuseFailAlloc_1802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1802_, 0, v___x_1799_);
v___x_1801_ = v_reuseFailAlloc_1802_;
goto v_reusejp_1800_;
}
v_reusejp_1800_:
{
return v___x_1801_;
}
}
}
}
}
}
else
{
lean_object* v_a_1808_; 
lean_del_object(v___x_1785_);
v_a_1808_ = lean_ctor_get(v_fst_1787_, 0);
lean_inc(v_a_1808_);
lean_dec_ref_known(v_fst_1787_, 1);
if (lean_obj_tag(v_a_1808_) == 0)
{
lean_object* v_snd_1809_; lean_object* v___x_1810_; 
v_snd_1809_ = lean_ctor_get(v_a_1783_, 1);
lean_inc(v_snd_1809_);
lean_dec(v_a_1783_);
v___x_1810_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__20___redArg(v_mvarId_x27_1770_, v_snd_1809_, v___y_1777_);
lean_dec(v_mvarId_x27_1770_);
if (lean_obj_tag(v___x_1810_) == 0)
{
lean_object* v_a_1811_; lean_object* v___x_1813_; uint8_t v_isShared_1814_; uint8_t v_isSharedCheck_1854_; 
v_a_1811_ = lean_ctor_get(v___x_1810_, 0);
v_isSharedCheck_1854_ = !lean_is_exclusive(v___x_1810_);
if (v_isSharedCheck_1854_ == 0)
{
v___x_1813_ = v___x_1810_;
v_isShared_1814_ = v_isSharedCheck_1854_;
goto v_resetjp_1812_;
}
else
{
lean_inc(v_a_1811_);
lean_dec(v___x_1810_);
v___x_1813_ = lean_box(0);
v_isShared_1814_ = v_isSharedCheck_1854_;
goto v_resetjp_1812_;
}
v_resetjp_1812_:
{
lean_object* v_fst_1815_; 
v_fst_1815_ = lean_ctor_get(v_a_1811_, 0);
lean_inc(v_fst_1815_);
if (lean_obj_tag(v_fst_1815_) == 0)
{
lean_object* v_snd_1816_; lean_object* v___x_1818_; uint8_t v_isShared_1819_; uint8_t v_isSharedCheck_1834_; 
v_snd_1816_ = lean_ctor_get(v_a_1811_, 1);
v_isSharedCheck_1834_ = !lean_is_exclusive(v_a_1811_);
if (v_isSharedCheck_1834_ == 0)
{
lean_object* v_unused_1835_; 
v_unused_1835_ = lean_ctor_get(v_a_1811_, 0);
lean_dec(v_unused_1835_);
v___x_1818_ = v_a_1811_;
v_isShared_1819_ = v_isSharedCheck_1834_;
goto v_resetjp_1817_;
}
else
{
lean_inc(v_snd_1816_);
lean_dec(v_a_1811_);
v___x_1818_ = lean_box(0);
v_isShared_1819_ = v_isSharedCheck_1834_;
goto v_resetjp_1817_;
}
v_resetjp_1817_:
{
lean_object* v_a_1820_; lean_object* v___x_1822_; uint8_t v_isShared_1823_; uint8_t v_isSharedCheck_1833_; 
v_a_1820_ = lean_ctor_get(v_fst_1815_, 0);
v_isSharedCheck_1833_ = !lean_is_exclusive(v_fst_1815_);
if (v_isSharedCheck_1833_ == 0)
{
v___x_1822_ = v_fst_1815_;
v_isShared_1823_ = v_isSharedCheck_1833_;
goto v_resetjp_1821_;
}
else
{
lean_inc(v_a_1820_);
lean_dec(v_fst_1815_);
v___x_1822_ = lean_box(0);
v_isShared_1823_ = v_isSharedCheck_1833_;
goto v_resetjp_1821_;
}
v_resetjp_1821_:
{
lean_object* v___x_1825_; 
if (v_isShared_1823_ == 0)
{
v___x_1825_ = v___x_1822_;
goto v_reusejp_1824_;
}
else
{
lean_object* v_reuseFailAlloc_1832_; 
v_reuseFailAlloc_1832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1832_, 0, v_a_1820_);
v___x_1825_ = v_reuseFailAlloc_1832_;
goto v_reusejp_1824_;
}
v_reusejp_1824_:
{
lean_object* v___x_1827_; 
if (v_isShared_1819_ == 0)
{
lean_ctor_set(v___x_1818_, 0, v___x_1825_);
v___x_1827_ = v___x_1818_;
goto v_reusejp_1826_;
}
else
{
lean_object* v_reuseFailAlloc_1831_; 
v_reuseFailAlloc_1831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1831_, 0, v___x_1825_);
lean_ctor_set(v_reuseFailAlloc_1831_, 1, v_snd_1816_);
v___x_1827_ = v_reuseFailAlloc_1831_;
goto v_reusejp_1826_;
}
v_reusejp_1826_:
{
lean_object* v___x_1829_; 
if (v_isShared_1814_ == 0)
{
lean_ctor_set(v___x_1813_, 0, v___x_1827_);
v___x_1829_ = v___x_1813_;
goto v_reusejp_1828_;
}
else
{
lean_object* v_reuseFailAlloc_1830_; 
v_reuseFailAlloc_1830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1830_, 0, v___x_1827_);
v___x_1829_ = v_reuseFailAlloc_1830_;
goto v_reusejp_1828_;
}
v_reusejp_1828_:
{
return v___x_1829_;
}
}
}
}
}
}
else
{
lean_object* v_a_1836_; 
v_a_1836_ = lean_ctor_get(v_fst_1815_, 0);
lean_inc(v_a_1836_);
lean_dec_ref_known(v_fst_1815_, 1);
if (lean_obj_tag(v_a_1836_) == 0)
{
lean_object* v_snd_1837_; lean_object* v___x_1839_; uint8_t v_isShared_1840_; uint8_t v_isSharedCheck_1848_; 
v_snd_1837_ = lean_ctor_get(v_a_1811_, 1);
v_isSharedCheck_1848_ = !lean_is_exclusive(v_a_1811_);
if (v_isSharedCheck_1848_ == 0)
{
lean_object* v_unused_1849_; 
v_unused_1849_ = lean_ctor_get(v_a_1811_, 0);
lean_dec(v_unused_1849_);
v___x_1839_ = v_a_1811_;
v_isShared_1840_ = v_isSharedCheck_1848_;
goto v_resetjp_1838_;
}
else
{
lean_inc(v_snd_1837_);
lean_dec(v_a_1811_);
v___x_1839_ = lean_box(0);
v_isShared_1840_ = v_isSharedCheck_1848_;
goto v_resetjp_1838_;
}
v_resetjp_1838_:
{
lean_object* v___x_1841_; lean_object* v___x_1843_; 
v___x_1841_ = ((lean_object*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12___closed__0));
if (v_isShared_1840_ == 0)
{
lean_ctor_set(v___x_1839_, 0, v___x_1841_);
v___x_1843_ = v___x_1839_;
goto v_reusejp_1842_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v___x_1841_);
lean_ctor_set(v_reuseFailAlloc_1847_, 1, v_snd_1837_);
v___x_1843_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1842_;
}
v_reusejp_1842_:
{
lean_object* v___x_1845_; 
if (v_isShared_1814_ == 0)
{
lean_ctor_set(v___x_1813_, 0, v___x_1843_);
v___x_1845_ = v___x_1813_;
goto v_reusejp_1844_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v___x_1843_);
v___x_1845_ = v_reuseFailAlloc_1846_;
goto v_reusejp_1844_;
}
v_reusejp_1844_:
{
return v___x_1845_;
}
}
}
}
else
{
lean_object* v_val_1850_; lean_object* v_snd_1851_; lean_object* v_mvarIdPending_1852_; 
lean_del_object(v___x_1813_);
v_val_1850_ = lean_ctor_get(v_a_1836_, 0);
lean_inc(v_val_1850_);
lean_dec_ref_known(v_a_1836_, 1);
v_snd_1851_ = lean_ctor_get(v_a_1811_, 1);
lean_inc(v_snd_1851_);
lean_dec(v_a_1811_);
v_mvarIdPending_1852_ = lean_ctor_get(v_val_1850_, 1);
lean_inc(v_mvarIdPending_1852_);
lean_dec(v_val_1850_);
v_mvarId_x27_1770_ = v_mvarIdPending_1852_;
v_a_1771_ = v_snd_1851_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1855_; lean_object* v___x_1857_; uint8_t v_isShared_1858_; uint8_t v_isSharedCheck_1862_; 
v_a_1855_ = lean_ctor_get(v___x_1810_, 0);
v_isSharedCheck_1862_ = !lean_is_exclusive(v___x_1810_);
if (v_isSharedCheck_1862_ == 0)
{
v___x_1857_ = v___x_1810_;
v_isShared_1858_ = v_isSharedCheck_1862_;
goto v_resetjp_1856_;
}
else
{
lean_inc(v_a_1855_);
lean_dec(v___x_1810_);
v___x_1857_ = lean_box(0);
v_isShared_1858_ = v_isSharedCheck_1862_;
goto v_resetjp_1856_;
}
v_resetjp_1856_:
{
lean_object* v___x_1860_; 
if (v_isShared_1858_ == 0)
{
v___x_1860_ = v___x_1857_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v_a_1855_);
v___x_1860_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
return v___x_1860_;
}
}
}
}
else
{
lean_object* v_snd_1863_; lean_object* v_val_1864_; lean_object* v___x_1865_; 
lean_dec(v_mvarId_x27_1770_);
v_snd_1863_ = lean_ctor_get(v_a_1783_, 1);
lean_inc(v_snd_1863_);
lean_dec(v_a_1783_);
v_val_1864_ = lean_ctor_get(v_a_1808_, 0);
lean_inc(v_val_1864_);
lean_dec_ref_known(v_a_1808_, 1);
v___x_1865_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6(v_mvarId_1769_, v_val_1864_, v_snd_1863_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_);
return v___x_1865_;
}
}
}
}
else
{
lean_object* v_a_1867_; lean_object* v___x_1869_; uint8_t v_isShared_1870_; uint8_t v_isSharedCheck_1874_; 
lean_dec(v_mvarId_x27_1770_);
v_a_1867_ = lean_ctor_get(v___x_1782_, 0);
v_isSharedCheck_1874_ = !lean_is_exclusive(v___x_1782_);
if (v_isSharedCheck_1874_ == 0)
{
v___x_1869_ = v___x_1782_;
v_isShared_1870_ = v_isSharedCheck_1874_;
goto v_resetjp_1868_;
}
else
{
lean_inc(v_a_1867_);
lean_dec(v___x_1782_);
v___x_1869_ = lean_box(0);
v_isShared_1870_ = v_isSharedCheck_1874_;
goto v_resetjp_1868_;
}
v_resetjp_1868_:
{
lean_object* v___x_1872_; 
if (v_isShared_1870_ == 0)
{
v___x_1872_ = v___x_1869_;
goto v_reusejp_1871_;
}
else
{
lean_object* v_reuseFailAlloc_1873_; 
v_reuseFailAlloc_1873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1873_, 0, v_a_1867_);
v___x_1872_ = v_reuseFailAlloc_1873_;
goto v_reusejp_1871_;
}
v_reusejp_1871_:
{
return v___x_1872_;
}
}
}
}
else
{
lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; 
lean_dec(v_mvarId_x27_1770_);
v___x_1875_ = ((lean_object*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12___closed__1));
v___x_1876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1876_, 0, v___x_1875_);
lean_ctor_set(v___x_1876_, 1, v_a_1771_);
v___x_1877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1877_, 0, v___x_1876_);
return v___x_1877_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12___boxed(lean_object* v_mvarId_1878_, lean_object* v_mvarId_x27_1879_, lean_object* v_a_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_){
_start:
{
lean_object* v_res_1890_; 
v_res_1890_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12(v_mvarId_1878_, v_mvarId_x27_1879_, v_a_1880_, v___y_1881_, v___y_1882_, v___y_1883_, v___y_1884_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_);
lean_dec(v___y_1888_);
lean_dec_ref(v___y_1887_);
lean_dec(v___y_1886_);
lean_dec_ref(v___y_1885_);
lean_dec(v___y_1884_);
lean_dec_ref(v___y_1883_);
lean_dec(v___y_1882_);
lean_dec_ref(v___y_1881_);
lean_dec(v_mvarId_1878_);
return v_res_1890_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6___boxed(lean_object* v_mvarId_1891_, lean_object* v_e_1892_, lean_object* v_a_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_){
_start:
{
lean_object* v_res_1903_; 
v_res_1903_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6(v_mvarId_1891_, v_e_1892_, v_a_1893_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_, v___y_1901_);
lean_dec(v___y_1901_);
lean_dec_ref(v___y_1900_);
lean_dec(v___y_1899_);
lean_dec_ref(v___y_1898_);
lean_dec(v___y_1897_);
lean_dec_ref(v___y_1896_);
lean_dec(v___y_1895_);
lean_dec_ref(v___y_1894_);
lean_dec(v_mvarId_1891_);
return v_res_1903_;
}
}
static lean_object* _init_l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___closed__0(void){
_start:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; 
v___x_1904_ = lean_box(0);
v___x_1905_ = lean_unsigned_to_nat(16u);
v___x_1906_ = lean_mk_array(v___x_1905_, v___x_1904_);
return v___x_1906_;
}
}
static lean_object* _init_l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___closed__1(void){
_start:
{
lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; 
v___x_1907_ = lean_obj_once(&l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___closed__0, &l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___closed__0_once, _init_l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___closed__0);
v___x_1908_ = lean_unsigned_to_nat(0u);
v___x_1909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1909_, 0, v___x_1908_);
lean_ctor_set(v___x_1909_, 1, v___x_1907_);
return v___x_1909_;
}
}
LEAN_EXPORT lean_object* l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4(lean_object* v_mvarId_1910_, lean_object* v_e_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_){
_start:
{
uint8_t v___x_1921_; 
v___x_1921_ = l_Lean_Expr_hasExprMVar(v_e_1911_);
if (v___x_1921_ == 0)
{
uint8_t v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; 
lean_dec_ref(v_e_1911_);
v___x_1922_ = 1;
v___x_1923_ = lean_box(v___x_1922_);
v___x_1924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1924_, 0, v___x_1923_);
return v___x_1924_;
}
else
{
lean_object* v___x_1925_; lean_object* v___x_1926_; 
v___x_1925_ = lean_obj_once(&l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___closed__1, &l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___closed__1_once, _init_l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___closed__1);
v___x_1926_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6(v_mvarId_1910_, v_e_1911_, v___x_1925_, v___y_1912_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_, v___y_1918_, v___y_1919_);
if (lean_obj_tag(v___x_1926_) == 0)
{
lean_object* v_a_1927_; lean_object* v___x_1929_; uint8_t v_isShared_1930_; uint8_t v_isSharedCheck_1941_; 
v_a_1927_ = lean_ctor_get(v___x_1926_, 0);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___x_1926_);
if (v_isSharedCheck_1941_ == 0)
{
v___x_1929_ = v___x_1926_;
v_isShared_1930_ = v_isSharedCheck_1941_;
goto v_resetjp_1928_;
}
else
{
lean_inc(v_a_1927_);
lean_dec(v___x_1926_);
v___x_1929_ = lean_box(0);
v_isShared_1930_ = v_isSharedCheck_1941_;
goto v_resetjp_1928_;
}
v_resetjp_1928_:
{
lean_object* v_fst_1931_; 
v_fst_1931_ = lean_ctor_get(v_a_1927_, 0);
lean_inc(v_fst_1931_);
lean_dec(v_a_1927_);
if (lean_obj_tag(v_fst_1931_) == 0)
{
uint8_t v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1935_; 
lean_dec_ref_known(v_fst_1931_, 1);
v___x_1932_ = 0;
v___x_1933_ = lean_box(v___x_1932_);
if (v_isShared_1930_ == 0)
{
lean_ctor_set(v___x_1929_, 0, v___x_1933_);
v___x_1935_ = v___x_1929_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v___x_1933_);
v___x_1935_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
return v___x_1935_;
}
}
else
{
lean_object* v___x_1937_; lean_object* v___x_1939_; 
lean_dec_ref_known(v_fst_1931_, 1);
v___x_1937_ = lean_box(v___x_1921_);
if (v_isShared_1930_ == 0)
{
lean_ctor_set(v___x_1929_, 0, v___x_1937_);
v___x_1939_ = v___x_1929_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v___x_1937_);
v___x_1939_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
return v___x_1939_;
}
}
}
}
else
{
lean_object* v_a_1942_; lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1949_; 
v_a_1942_ = lean_ctor_get(v___x_1926_, 0);
v_isSharedCheck_1949_ = !lean_is_exclusive(v___x_1926_);
if (v_isSharedCheck_1949_ == 0)
{
v___x_1944_ = v___x_1926_;
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
else
{
lean_inc(v_a_1942_);
lean_dec(v___x_1926_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
lean_object* v___x_1947_; 
if (v_isShared_1945_ == 0)
{
v___x_1947_ = v___x_1944_;
goto v_reusejp_1946_;
}
else
{
lean_object* v_reuseFailAlloc_1948_; 
v_reuseFailAlloc_1948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1948_, 0, v_a_1942_);
v___x_1947_ = v_reuseFailAlloc_1948_;
goto v_reusejp_1946_;
}
v_reusejp_1946_:
{
return v___x_1947_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___boxed(lean_object* v_mvarId_1950_, lean_object* v_e_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_){
_start:
{
lean_object* v_res_1961_; 
v_res_1961_ = l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4(v_mvarId_1950_, v_e_1951_, v___y_1952_, v___y_1953_, v___y_1954_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_, v___y_1959_);
lean_dec(v___y_1959_);
lean_dec_ref(v___y_1958_);
lean_dec(v___y_1957_);
lean_dec_ref(v___y_1956_);
lean_dec(v___y_1955_);
lean_dec_ref(v___y_1954_);
lean_dec(v___y_1953_);
lean_dec_ref(v___y_1952_);
lean_dec(v_mvarId_1950_);
return v_res_1961_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__11_spec__13___redArg(lean_object* v_x_1962_, lean_object* v_x_1963_, lean_object* v_x_1964_, lean_object* v_x_1965_){
_start:
{
lean_object* v_ks_1966_; lean_object* v_vs_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_1991_; 
v_ks_1966_ = lean_ctor_get(v_x_1962_, 0);
v_vs_1967_ = lean_ctor_get(v_x_1962_, 1);
v_isSharedCheck_1991_ = !lean_is_exclusive(v_x_1962_);
if (v_isSharedCheck_1991_ == 0)
{
v___x_1969_ = v_x_1962_;
v_isShared_1970_ = v_isSharedCheck_1991_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_vs_1967_);
lean_inc(v_ks_1966_);
lean_dec(v_x_1962_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_1991_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v___x_1971_; uint8_t v___x_1972_; 
v___x_1971_ = lean_array_get_size(v_ks_1966_);
v___x_1972_ = lean_nat_dec_lt(v_x_1963_, v___x_1971_);
if (v___x_1972_ == 0)
{
lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1976_; 
lean_dec(v_x_1963_);
v___x_1973_ = lean_array_push(v_ks_1966_, v_x_1964_);
v___x_1974_ = lean_array_push(v_vs_1967_, v_x_1965_);
if (v_isShared_1970_ == 0)
{
lean_ctor_set(v___x_1969_, 1, v___x_1974_);
lean_ctor_set(v___x_1969_, 0, v___x_1973_);
v___x_1976_ = v___x_1969_;
goto v_reusejp_1975_;
}
else
{
lean_object* v_reuseFailAlloc_1977_; 
v_reuseFailAlloc_1977_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1977_, 0, v___x_1973_);
lean_ctor_set(v_reuseFailAlloc_1977_, 1, v___x_1974_);
v___x_1976_ = v_reuseFailAlloc_1977_;
goto v_reusejp_1975_;
}
v_reusejp_1975_:
{
return v___x_1976_;
}
}
else
{
lean_object* v_k_x27_1978_; uint8_t v___x_1979_; 
v_k_x27_1978_ = lean_array_fget_borrowed(v_ks_1966_, v_x_1963_);
v___x_1979_ = l_Lean_instBEqMVarId_beq(v_x_1964_, v_k_x27_1978_);
if (v___x_1979_ == 0)
{
lean_object* v___x_1981_; 
if (v_isShared_1970_ == 0)
{
v___x_1981_ = v___x_1969_;
goto v_reusejp_1980_;
}
else
{
lean_object* v_reuseFailAlloc_1985_; 
v_reuseFailAlloc_1985_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1985_, 0, v_ks_1966_);
lean_ctor_set(v_reuseFailAlloc_1985_, 1, v_vs_1967_);
v___x_1981_ = v_reuseFailAlloc_1985_;
goto v_reusejp_1980_;
}
v_reusejp_1980_:
{
lean_object* v___x_1982_; lean_object* v___x_1983_; 
v___x_1982_ = lean_unsigned_to_nat(1u);
v___x_1983_ = lean_nat_add(v_x_1963_, v___x_1982_);
lean_dec(v_x_1963_);
v_x_1962_ = v___x_1981_;
v_x_1963_ = v___x_1983_;
goto _start;
}
}
else
{
lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1989_; 
v___x_1986_ = lean_array_fset(v_ks_1966_, v_x_1963_, v_x_1964_);
v___x_1987_ = lean_array_fset(v_vs_1967_, v_x_1963_, v_x_1965_);
lean_dec(v_x_1963_);
if (v_isShared_1970_ == 0)
{
lean_ctor_set(v___x_1969_, 1, v___x_1987_);
lean_ctor_set(v___x_1969_, 0, v___x_1986_);
v___x_1989_ = v___x_1969_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v___x_1986_);
lean_ctor_set(v_reuseFailAlloc_1990_, 1, v___x_1987_);
v___x_1989_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
return v___x_1989_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__11___redArg(lean_object* v_n_1992_, lean_object* v_k_1993_, lean_object* v_v_1994_){
_start:
{
lean_object* v___x_1995_; lean_object* v___x_1996_; 
v___x_1995_ = lean_unsigned_to_nat(0u);
v___x_1996_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__11_spec__13___redArg(v_n_1992_, v___x_1995_, v_k_1993_, v_v_1994_);
return v___x_1996_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_1997_; 
v___x_1997_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1997_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg(lean_object* v_x_1998_, size_t v_x_1999_, size_t v_x_2000_, lean_object* v_x_2001_, lean_object* v_x_2002_){
_start:
{
if (lean_obj_tag(v_x_1998_) == 0)
{
lean_object* v_es_2003_; size_t v___x_2004_; size_t v___x_2005_; lean_object* v_j_2006_; lean_object* v___x_2007_; uint8_t v___x_2008_; 
v_es_2003_ = lean_ctor_get(v_x_1998_, 0);
v___x_2004_ = ((size_t)31ULL);
v___x_2005_ = lean_usize_land(v_x_1999_, v___x_2004_);
v_j_2006_ = lean_usize_to_nat(v___x_2005_);
v___x_2007_ = lean_array_get_size(v_es_2003_);
v___x_2008_ = lean_nat_dec_lt(v_j_2006_, v___x_2007_);
if (v___x_2008_ == 0)
{
lean_dec(v_j_2006_);
lean_dec(v_x_2002_);
lean_dec(v_x_2001_);
return v_x_1998_;
}
else
{
lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2047_; 
lean_inc_ref(v_es_2003_);
v_isSharedCheck_2047_ = !lean_is_exclusive(v_x_1998_);
if (v_isSharedCheck_2047_ == 0)
{
lean_object* v_unused_2048_; 
v_unused_2048_ = lean_ctor_get(v_x_1998_, 0);
lean_dec(v_unused_2048_);
v___x_2010_ = v_x_1998_;
v_isShared_2011_ = v_isSharedCheck_2047_;
goto v_resetjp_2009_;
}
else
{
lean_dec(v_x_1998_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2047_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v_v_2012_; lean_object* v___x_2013_; lean_object* v_xs_x27_2014_; lean_object* v___y_2016_; 
v_v_2012_ = lean_array_fget(v_es_2003_, v_j_2006_);
v___x_2013_ = lean_box(0);
v_xs_x27_2014_ = lean_array_fset(v_es_2003_, v_j_2006_, v___x_2013_);
switch(lean_obj_tag(v_v_2012_))
{
case 0:
{
lean_object* v_key_2021_; lean_object* v_val_2022_; lean_object* v___x_2024_; uint8_t v_isShared_2025_; uint8_t v_isSharedCheck_2032_; 
v_key_2021_ = lean_ctor_get(v_v_2012_, 0);
v_val_2022_ = lean_ctor_get(v_v_2012_, 1);
v_isSharedCheck_2032_ = !lean_is_exclusive(v_v_2012_);
if (v_isSharedCheck_2032_ == 0)
{
v___x_2024_ = v_v_2012_;
v_isShared_2025_ = v_isSharedCheck_2032_;
goto v_resetjp_2023_;
}
else
{
lean_inc(v_val_2022_);
lean_inc(v_key_2021_);
lean_dec(v_v_2012_);
v___x_2024_ = lean_box(0);
v_isShared_2025_ = v_isSharedCheck_2032_;
goto v_resetjp_2023_;
}
v_resetjp_2023_:
{
uint8_t v___x_2026_; 
v___x_2026_ = l_Lean_instBEqMVarId_beq(v_x_2001_, v_key_2021_);
if (v___x_2026_ == 0)
{
lean_object* v___x_2027_; lean_object* v___x_2028_; 
lean_del_object(v___x_2024_);
v___x_2027_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2021_, v_val_2022_, v_x_2001_, v_x_2002_);
v___x_2028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2028_, 0, v___x_2027_);
v___y_2016_ = v___x_2028_;
goto v___jp_2015_;
}
else
{
lean_object* v___x_2030_; 
lean_dec(v_val_2022_);
lean_dec(v_key_2021_);
if (v_isShared_2025_ == 0)
{
lean_ctor_set(v___x_2024_, 1, v_x_2002_);
lean_ctor_set(v___x_2024_, 0, v_x_2001_);
v___x_2030_ = v___x_2024_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v_x_2001_);
lean_ctor_set(v_reuseFailAlloc_2031_, 1, v_x_2002_);
v___x_2030_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
v___y_2016_ = v___x_2030_;
goto v___jp_2015_;
}
}
}
}
case 1:
{
lean_object* v_node_2033_; lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2045_; 
v_node_2033_ = lean_ctor_get(v_v_2012_, 0);
v_isSharedCheck_2045_ = !lean_is_exclusive(v_v_2012_);
if (v_isSharedCheck_2045_ == 0)
{
v___x_2035_ = v_v_2012_;
v_isShared_2036_ = v_isSharedCheck_2045_;
goto v_resetjp_2034_;
}
else
{
lean_inc(v_node_2033_);
lean_dec(v_v_2012_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2045_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
size_t v___x_2037_; size_t v___x_2038_; size_t v___x_2039_; size_t v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2043_; 
v___x_2037_ = ((size_t)5ULL);
v___x_2038_ = lean_usize_shift_right(v_x_1999_, v___x_2037_);
v___x_2039_ = ((size_t)1ULL);
v___x_2040_ = lean_usize_add(v_x_2000_, v___x_2039_);
v___x_2041_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg(v_node_2033_, v___x_2038_, v___x_2040_, v_x_2001_, v_x_2002_);
if (v_isShared_2036_ == 0)
{
lean_ctor_set(v___x_2035_, 0, v___x_2041_);
v___x_2043_ = v___x_2035_;
goto v_reusejp_2042_;
}
else
{
lean_object* v_reuseFailAlloc_2044_; 
v_reuseFailAlloc_2044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2044_, 0, v___x_2041_);
v___x_2043_ = v_reuseFailAlloc_2044_;
goto v_reusejp_2042_;
}
v_reusejp_2042_:
{
v___y_2016_ = v___x_2043_;
goto v___jp_2015_;
}
}
}
default: 
{
lean_object* v___x_2046_; 
v___x_2046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2046_, 0, v_x_2001_);
lean_ctor_set(v___x_2046_, 1, v_x_2002_);
v___y_2016_ = v___x_2046_;
goto v___jp_2015_;
}
}
v___jp_2015_:
{
lean_object* v___x_2017_; lean_object* v___x_2019_; 
v___x_2017_ = lean_array_fset(v_xs_x27_2014_, v_j_2006_, v___y_2016_);
lean_dec(v_j_2006_);
if (v_isShared_2011_ == 0)
{
lean_ctor_set(v___x_2010_, 0, v___x_2017_);
v___x_2019_ = v___x_2010_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v___x_2017_);
v___x_2019_ = v_reuseFailAlloc_2020_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
return v___x_2019_;
}
}
}
}
}
else
{
lean_object* v_ks_2049_; lean_object* v_vs_2050_; lean_object* v___x_2052_; uint8_t v_isShared_2053_; uint8_t v_isSharedCheck_2068_; 
v_ks_2049_ = lean_ctor_get(v_x_1998_, 0);
v_vs_2050_ = lean_ctor_get(v_x_1998_, 1);
v_isSharedCheck_2068_ = !lean_is_exclusive(v_x_1998_);
if (v_isSharedCheck_2068_ == 0)
{
v___x_2052_ = v_x_1998_;
v_isShared_2053_ = v_isSharedCheck_2068_;
goto v_resetjp_2051_;
}
else
{
lean_inc(v_vs_2050_);
lean_inc(v_ks_2049_);
lean_dec(v_x_1998_);
v___x_2052_ = lean_box(0);
v_isShared_2053_ = v_isSharedCheck_2068_;
goto v_resetjp_2051_;
}
v_resetjp_2051_:
{
lean_object* v___x_2055_; 
if (v_isShared_2053_ == 0)
{
v___x_2055_ = v___x_2052_;
goto v_reusejp_2054_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v_ks_2049_);
lean_ctor_set(v_reuseFailAlloc_2067_, 1, v_vs_2050_);
v___x_2055_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2054_;
}
v_reusejp_2054_:
{
lean_object* v_newNode_2056_; size_t v___x_2057_; uint8_t v___x_2058_; 
v_newNode_2056_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__11___redArg(v___x_2055_, v_x_2001_, v_x_2002_);
v___x_2057_ = ((size_t)7ULL);
v___x_2058_ = lean_usize_dec_le(v___x_2057_, v_x_2000_);
if (v___x_2058_ == 0)
{
lean_object* v___x_2059_; lean_object* v___x_2060_; uint8_t v___x_2061_; 
v___x_2059_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2056_);
v___x_2060_ = lean_unsigned_to_nat(4u);
v___x_2061_ = lean_nat_dec_lt(v___x_2059_, v___x_2060_);
lean_dec(v___x_2059_);
if (v___x_2061_ == 0)
{
lean_object* v_ks_2062_; lean_object* v_vs_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; 
v_ks_2062_ = lean_ctor_get(v_newNode_2056_, 0);
lean_inc_ref(v_ks_2062_);
v_vs_2063_ = lean_ctor_get(v_newNode_2056_, 1);
lean_inc_ref(v_vs_2063_);
lean_dec_ref(v_newNode_2056_);
v___x_2064_ = lean_unsigned_to_nat(0u);
v___x_2065_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg___closed__0);
v___x_2066_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__12___redArg(v_x_2000_, v_ks_2062_, v_vs_2063_, v___x_2064_, v___x_2065_);
lean_dec_ref(v_vs_2063_);
lean_dec_ref(v_ks_2062_);
return v___x_2066_;
}
else
{
return v_newNode_2056_;
}
}
else
{
return v_newNode_2056_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__12___redArg(size_t v_depth_2069_, lean_object* v_keys_2070_, lean_object* v_vals_2071_, lean_object* v_i_2072_, lean_object* v_entries_2073_){
_start:
{
lean_object* v___x_2074_; uint8_t v___x_2075_; 
v___x_2074_ = lean_array_get_size(v_keys_2070_);
v___x_2075_ = lean_nat_dec_lt(v_i_2072_, v___x_2074_);
if (v___x_2075_ == 0)
{
lean_dec(v_i_2072_);
return v_entries_2073_;
}
else
{
lean_object* v_k_2076_; lean_object* v_v_2077_; uint64_t v___x_2078_; size_t v_h_2079_; size_t v___x_2080_; lean_object* v___x_2081_; size_t v___x_2082_; size_t v___x_2083_; size_t v___x_2084_; size_t v_h_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; 
v_k_2076_ = lean_array_fget_borrowed(v_keys_2070_, v_i_2072_);
v_v_2077_ = lean_array_fget_borrowed(v_vals_2071_, v_i_2072_);
v___x_2078_ = l_Lean_instHashableMVarId_hash(v_k_2076_);
v_h_2079_ = lean_uint64_to_usize(v___x_2078_);
v___x_2080_ = ((size_t)5ULL);
v___x_2081_ = lean_unsigned_to_nat(1u);
v___x_2082_ = ((size_t)1ULL);
v___x_2083_ = lean_usize_sub(v_depth_2069_, v___x_2082_);
v___x_2084_ = lean_usize_mul(v___x_2080_, v___x_2083_);
v_h_2085_ = lean_usize_shift_right(v_h_2079_, v___x_2084_);
v___x_2086_ = lean_nat_add(v_i_2072_, v___x_2081_);
lean_dec(v_i_2072_);
lean_inc(v_v_2077_);
lean_inc(v_k_2076_);
v___x_2087_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg(v_entries_2073_, v_h_2085_, v_depth_2069_, v_k_2076_, v_v_2077_);
v_i_2072_ = v___x_2086_;
v_entries_2073_ = v___x_2087_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__12___redArg___boxed(lean_object* v_depth_2089_, lean_object* v_keys_2090_, lean_object* v_vals_2091_, lean_object* v_i_2092_, lean_object* v_entries_2093_){
_start:
{
size_t v_depth_boxed_2094_; lean_object* v_res_2095_; 
v_depth_boxed_2094_ = lean_unbox_usize(v_depth_2089_);
lean_dec(v_depth_2089_);
v_res_2095_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__12___redArg(v_depth_boxed_2094_, v_keys_2090_, v_vals_2091_, v_i_2092_, v_entries_2093_);
lean_dec_ref(v_vals_2091_);
lean_dec_ref(v_keys_2090_);
return v_res_2095_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg___boxed(lean_object* v_x_2096_, lean_object* v_x_2097_, lean_object* v_x_2098_, lean_object* v_x_2099_, lean_object* v_x_2100_){
_start:
{
size_t v_x_102728__boxed_2101_; size_t v_x_102729__boxed_2102_; lean_object* v_res_2103_; 
v_x_102728__boxed_2101_ = lean_unbox_usize(v_x_2097_);
lean_dec(v_x_2097_);
v_x_102729__boxed_2102_ = lean_unbox_usize(v_x_2098_);
lean_dec(v_x_2098_);
v_res_2103_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg(v_x_2096_, v_x_102728__boxed_2101_, v_x_102729__boxed_2102_, v_x_2099_, v_x_2100_);
return v_res_2103_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1___redArg(lean_object* v_x_2104_, lean_object* v_x_2105_, lean_object* v_x_2106_){
_start:
{
uint64_t v___x_2107_; size_t v___x_2108_; size_t v___x_2109_; lean_object* v___x_2110_; 
v___x_2107_ = l_Lean_instHashableMVarId_hash(v_x_2105_);
v___x_2108_ = lean_uint64_to_usize(v___x_2107_);
v___x_2109_ = ((size_t)1ULL);
v___x_2110_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg(v_x_2104_, v___x_2108_, v___x_2109_, v_x_2105_, v_x_2106_);
return v___x_2110_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1___redArg(lean_object* v_mvarId_2111_, lean_object* v_val_2112_, lean_object* v___y_2113_){
_start:
{
lean_object* v___x_2115_; lean_object* v_mctx_2116_; lean_object* v_cache_2117_; lean_object* v_zetaDeltaFVarIds_2118_; lean_object* v_postponed_2119_; lean_object* v_diag_2120_; lean_object* v___x_2122_; uint8_t v_isShared_2123_; uint8_t v_isSharedCheck_2149_; 
v___x_2115_ = lean_st_ref_take(v___y_2113_);
v_mctx_2116_ = lean_ctor_get(v___x_2115_, 0);
v_cache_2117_ = lean_ctor_get(v___x_2115_, 1);
v_zetaDeltaFVarIds_2118_ = lean_ctor_get(v___x_2115_, 2);
v_postponed_2119_ = lean_ctor_get(v___x_2115_, 3);
v_diag_2120_ = lean_ctor_get(v___x_2115_, 4);
v_isSharedCheck_2149_ = !lean_is_exclusive(v___x_2115_);
if (v_isSharedCheck_2149_ == 0)
{
v___x_2122_ = v___x_2115_;
v_isShared_2123_ = v_isSharedCheck_2149_;
goto v_resetjp_2121_;
}
else
{
lean_inc(v_diag_2120_);
lean_inc(v_postponed_2119_);
lean_inc(v_zetaDeltaFVarIds_2118_);
lean_inc(v_cache_2117_);
lean_inc(v_mctx_2116_);
lean_dec(v___x_2115_);
v___x_2122_ = lean_box(0);
v_isShared_2123_ = v_isSharedCheck_2149_;
goto v_resetjp_2121_;
}
v_resetjp_2121_:
{
lean_object* v_depth_2124_; lean_object* v_levelAssignDepth_2125_; lean_object* v_lmvarCounter_2126_; lean_object* v_mvarCounter_2127_; lean_object* v_lDecls_2128_; lean_object* v_decls_2129_; lean_object* v_userNames_2130_; lean_object* v_lAssignment_2131_; lean_object* v_eAssignment_2132_; lean_object* v_dAssignment_2133_; lean_object* v_instanceTypedMVars_2134_; lean_object* v___x_2136_; uint8_t v_isShared_2137_; uint8_t v_isSharedCheck_2148_; 
v_depth_2124_ = lean_ctor_get(v_mctx_2116_, 0);
v_levelAssignDepth_2125_ = lean_ctor_get(v_mctx_2116_, 1);
v_lmvarCounter_2126_ = lean_ctor_get(v_mctx_2116_, 2);
v_mvarCounter_2127_ = lean_ctor_get(v_mctx_2116_, 3);
v_lDecls_2128_ = lean_ctor_get(v_mctx_2116_, 4);
v_decls_2129_ = lean_ctor_get(v_mctx_2116_, 5);
v_userNames_2130_ = lean_ctor_get(v_mctx_2116_, 6);
v_lAssignment_2131_ = lean_ctor_get(v_mctx_2116_, 7);
v_eAssignment_2132_ = lean_ctor_get(v_mctx_2116_, 8);
v_dAssignment_2133_ = lean_ctor_get(v_mctx_2116_, 9);
v_instanceTypedMVars_2134_ = lean_ctor_get(v_mctx_2116_, 10);
v_isSharedCheck_2148_ = !lean_is_exclusive(v_mctx_2116_);
if (v_isSharedCheck_2148_ == 0)
{
v___x_2136_ = v_mctx_2116_;
v_isShared_2137_ = v_isSharedCheck_2148_;
goto v_resetjp_2135_;
}
else
{
lean_inc(v_instanceTypedMVars_2134_);
lean_inc(v_dAssignment_2133_);
lean_inc(v_eAssignment_2132_);
lean_inc(v_lAssignment_2131_);
lean_inc(v_userNames_2130_);
lean_inc(v_decls_2129_);
lean_inc(v_lDecls_2128_);
lean_inc(v_mvarCounter_2127_);
lean_inc(v_lmvarCounter_2126_);
lean_inc(v_levelAssignDepth_2125_);
lean_inc(v_depth_2124_);
lean_dec(v_mctx_2116_);
v___x_2136_ = lean_box(0);
v_isShared_2137_ = v_isSharedCheck_2148_;
goto v_resetjp_2135_;
}
v_resetjp_2135_:
{
lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2141_; 
v___x_2138_ = lean_box(0);
v___x_2139_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1___redArg(v_eAssignment_2132_, v_mvarId_2111_, v_val_2112_);
if (v_isShared_2137_ == 0)
{
lean_ctor_set(v___x_2136_, 8, v___x_2139_);
v___x_2141_ = v___x_2136_;
goto v_reusejp_2140_;
}
else
{
lean_object* v_reuseFailAlloc_2147_; 
v_reuseFailAlloc_2147_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_2147_, 0, v_depth_2124_);
lean_ctor_set(v_reuseFailAlloc_2147_, 1, v_levelAssignDepth_2125_);
lean_ctor_set(v_reuseFailAlloc_2147_, 2, v_lmvarCounter_2126_);
lean_ctor_set(v_reuseFailAlloc_2147_, 3, v_mvarCounter_2127_);
lean_ctor_set(v_reuseFailAlloc_2147_, 4, v_lDecls_2128_);
lean_ctor_set(v_reuseFailAlloc_2147_, 5, v_decls_2129_);
lean_ctor_set(v_reuseFailAlloc_2147_, 6, v_userNames_2130_);
lean_ctor_set(v_reuseFailAlloc_2147_, 7, v_lAssignment_2131_);
lean_ctor_set(v_reuseFailAlloc_2147_, 8, v___x_2139_);
lean_ctor_set(v_reuseFailAlloc_2147_, 9, v_dAssignment_2133_);
lean_ctor_set(v_reuseFailAlloc_2147_, 10, v_instanceTypedMVars_2134_);
v___x_2141_ = v_reuseFailAlloc_2147_;
goto v_reusejp_2140_;
}
v_reusejp_2140_:
{
lean_object* v___x_2143_; 
if (v_isShared_2123_ == 0)
{
lean_ctor_set(v___x_2122_, 0, v___x_2141_);
v___x_2143_ = v___x_2122_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2146_; 
v_reuseFailAlloc_2146_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2146_, 0, v___x_2141_);
lean_ctor_set(v_reuseFailAlloc_2146_, 1, v_cache_2117_);
lean_ctor_set(v_reuseFailAlloc_2146_, 2, v_zetaDeltaFVarIds_2118_);
lean_ctor_set(v_reuseFailAlloc_2146_, 3, v_postponed_2119_);
lean_ctor_set(v_reuseFailAlloc_2146_, 4, v_diag_2120_);
v___x_2143_ = v_reuseFailAlloc_2146_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
lean_object* v___x_2144_; lean_object* v___x_2145_; 
v___x_2144_ = lean_st_ref_put(v___y_2113_, v___x_2143_);
v___x_2145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2145_, 0, v___x_2138_);
return v___x_2145_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1___redArg___boxed(lean_object* v_mvarId_2150_, lean_object* v_val_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_){
_start:
{
lean_object* v_res_2154_; 
v_res_2154_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1___redArg(v_mvarId_2150_, v_val_2151_, v___y_2152_);
lean_dec(v___y_2152_);
return v_res_2154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2_spec__3___redArg(lean_object* v_o_2155_, lean_object* v___y_2156_){
_start:
{
lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v_env_2160_; lean_object* v___x_2161_; lean_object* v_toEnvExtension_2162_; lean_object* v_asyncMode_2163_; lean_object* v___x_2164_; uint8_t v___x_2165_; lean_object* v___x_2166_; lean_object* v_merged_2167_; lean_object* v___x_2169_; uint8_t v_isShared_2170_; uint8_t v_isSharedCheck_2175_; 
v___x_2158_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_2159_ = lean_st_ref_get(v___y_2156_);
v_env_2160_ = lean_ctor_get(v___x_2159_, 0);
lean_inc_ref(v_env_2160_);
lean_dec(v___x_2159_);
v___x_2161_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_2162_ = lean_ctor_get(v___x_2161_, 0);
v_asyncMode_2163_ = lean_ctor_get(v_toEnvExtension_2162_, 2);
v___x_2164_ = lean_box(0);
v___x_2165_ = 0;
v___x_2166_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2158_, v___x_2161_, v_env_2160_, v_asyncMode_2163_, v___x_2164_, v___x_2165_);
v_merged_2167_ = lean_ctor_get(v___x_2166_, 0);
v_isSharedCheck_2175_ = !lean_is_exclusive(v___x_2166_);
if (v_isSharedCheck_2175_ == 0)
{
lean_object* v_unused_2176_; 
v_unused_2176_ = lean_ctor_get(v___x_2166_, 1);
lean_dec(v_unused_2176_);
v___x_2169_ = v___x_2166_;
v_isShared_2170_ = v_isSharedCheck_2175_;
goto v_resetjp_2168_;
}
else
{
lean_inc(v_merged_2167_);
lean_dec(v___x_2166_);
v___x_2169_ = lean_box(0);
v_isShared_2170_ = v_isSharedCheck_2175_;
goto v_resetjp_2168_;
}
v_resetjp_2168_:
{
lean_object* v___x_2172_; 
if (v_isShared_2170_ == 0)
{
lean_ctor_set(v___x_2169_, 1, v_merged_2167_);
lean_ctor_set(v___x_2169_, 0, v_o_2155_);
v___x_2172_ = v___x_2169_;
goto v_reusejp_2171_;
}
else
{
lean_object* v_reuseFailAlloc_2174_; 
v_reuseFailAlloc_2174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2174_, 0, v_o_2155_);
lean_ctor_set(v_reuseFailAlloc_2174_, 1, v_merged_2167_);
v___x_2172_ = v_reuseFailAlloc_2174_;
goto v_reusejp_2171_;
}
v_reusejp_2171_:
{
lean_object* v___x_2173_; 
v___x_2173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2173_, 0, v___x_2172_);
return v___x_2173_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2_spec__3___redArg___boxed(lean_object* v_o_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_){
_start:
{
lean_object* v_res_2180_; 
v_res_2180_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2_spec__3___redArg(v_o_2177_, v___y_2178_);
lean_dec(v___y_2178_);
return v_res_2180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2(lean_object* v___y_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_){
_start:
{
lean_object* v___x_2190_; lean_object* v___x_2191_; 
v___x_2190_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2187_);
v___x_2191_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2_spec__3___redArg(v___x_2190_, v___y_2188_);
return v___x_2191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2___boxed(lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_){
_start:
{
lean_object* v_res_2201_; 
v_res_2201_ = l_Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2(v___y_2192_, v___y_2193_, v___y_2194_, v___y_2195_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_);
lean_dec(v___y_2199_);
lean_dec_ref(v___y_2198_);
lean_dec(v___y_2197_);
lean_dec_ref(v___y_2196_);
lean_dec(v___y_2195_);
lean_dec_ref(v___y_2194_);
lean_dec(v___y_2193_);
lean_dec_ref(v___y_2192_);
return v_res_2201_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__6(void){
_start:
{
lean_object* v___x_2209_; lean_object* v___x_2210_; 
v___x_2209_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__5));
v___x_2210_ = l_Lean_stringToMessageData(v___x_2209_);
return v___x_2210_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__8(void){
_start:
{
lean_object* v___x_2212_; lean_object* v___x_2213_; 
v___x_2212_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__7));
v___x_2213_ = l_Lean_stringToMessageData(v___x_2212_);
return v___x_2213_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6(lean_object* v_usingArg_2217_, lean_object* v_snd_2218_, uint8_t v___x_2219_, lean_object* v___x_2220_, uint8_t v___x_2221_, uint8_t v_useReducible_2222_, lean_object* v___x_2223_, lean_object* v___x_2224_, lean_object* v_simprocs_2225_, lean_object* v_discharge_x3f_2226_, lean_object* v_snd_2227_, lean_object* v___f_2228_, lean_object* v___x_2229_, lean_object* v___x_2230_, lean_object* v___x_2231_, lean_object* v___x_2232_, lean_object* v___f_2233_, lean_object* v_a_2234_, lean_object* v___x_2235_, lean_object* v___f_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_){
_start:
{
lean_object* v___y_2247_; lean_object* v___y_2248_; lean_object* v___y_2249_; lean_object* v___y_2260_; lean_object* v___y_2261_; lean_object* v___y_2262_; lean_object* v___y_2263_; lean_object* v___y_2264_; lean_object* v___y_2265_; lean_object* v___y_2266_; lean_object* v___y_2267_; lean_object* v___y_2268_; lean_object* v___y_2269_; lean_object* v___y_2270_; lean_object* v___y_2271_; lean_object* v___y_2272_; lean_object* v___y_2273_; lean_object* v___y_2274_; lean_object* v___y_2275_; lean_object* v___y_2310_; lean_object* v___y_2311_; lean_object* v___y_2312_; lean_object* v___y_2313_; lean_object* v___y_2314_; lean_object* v___y_2315_; lean_object* v___y_2316_; lean_object* v___y_2317_; lean_object* v___y_2318_; lean_object* v___y_2319_; lean_object* v___y_2320_; lean_object* v___y_2321_; 
if (lean_obj_tag(v_usingArg_2217_) == 1)
{
lean_object* v_val_2458_; lean_object* v___y_2460_; lean_object* v___y_2461_; lean_object* v___y_2462_; lean_object* v___y_2463_; lean_object* v___y_2464_; lean_object* v___y_2465_; lean_object* v___y_2466_; lean_object* v___y_2467_; lean_object* v___x_2510_; lean_object* v_infoState_2511_; uint8_t v_enabled_2512_; 
v_val_2458_ = lean_ctor_get(v_usingArg_2217_, 0);
lean_inc(v_val_2458_);
lean_dec_ref_known(v_usingArg_2217_, 1);
v___x_2510_ = lean_st_ref_get(v___y_2244_);
v_infoState_2511_ = lean_ctor_get(v___x_2510_, 8);
lean_inc_ref(v_infoState_2511_);
lean_dec(v___x_2510_);
v_enabled_2512_ = lean_ctor_get_uint8(v_infoState_2511_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2511_);
if (v_enabled_2512_ == 0)
{
lean_dec_ref(v___f_2236_);
v___y_2460_ = v___y_2237_;
v___y_2461_ = v___y_2238_;
v___y_2462_ = v___y_2239_;
v___y_2463_ = v___y_2240_;
v___y_2464_ = v___y_2241_;
v___y_2465_ = v___y_2242_;
v___y_2466_ = v___y_2243_;
v___y_2467_ = v___y_2244_;
goto v___jp_2459_;
}
else
{
lean_object* v___x_2513_; lean_object* v_a_2514_; lean_object* v___f_2515_; lean_object* v___x_2516_; 
v___x_2513_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg(v___y_2244_);
v_a_2514_ = lean_ctor_get(v___x_2513_, 0);
lean_inc(v_a_2514_);
lean_dec_ref(v___x_2513_);
v___f_2515_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___boxed), 10, 1);
lean_closure_set(v___f_2515_, 0, v_a_2514_);
v___x_2516_ = l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg(v___f_2515_, v___f_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
if (lean_obj_tag(v___x_2516_) == 0)
{
lean_dec_ref_known(v___x_2516_, 1);
v___y_2460_ = v___y_2237_;
v___y_2461_ = v___y_2238_;
v___y_2462_ = v___y_2239_;
v___y_2463_ = v___y_2240_;
v___y_2464_ = v___y_2241_;
v___y_2465_ = v___y_2242_;
v___y_2466_ = v___y_2243_;
v___y_2467_ = v___y_2244_;
goto v___jp_2459_;
}
else
{
lean_object* v_a_2517_; lean_object* v___x_2519_; uint8_t v_isShared_2520_; uint8_t v_isSharedCheck_2524_; 
lean_dec(v_val_2458_);
lean_dec_ref(v_a_2234_);
lean_dec_ref(v___f_2233_);
lean_dec(v___x_2232_);
lean_dec_ref(v___x_2231_);
lean_dec_ref(v___x_2230_);
lean_dec_ref(v___x_2229_);
lean_dec_ref(v___f_2228_);
lean_dec_ref(v_snd_2227_);
lean_dec(v_discharge_x3f_2226_);
lean_dec_ref(v_simprocs_2225_);
lean_dec_ref(v___x_2224_);
lean_dec_ref(v___x_2220_);
lean_dec(v_snd_2218_);
v_a_2517_ = lean_ctor_get(v___x_2516_, 0);
v_isSharedCheck_2524_ = !lean_is_exclusive(v___x_2516_);
if (v_isSharedCheck_2524_ == 0)
{
v___x_2519_ = v___x_2516_;
v_isShared_2520_ = v_isSharedCheck_2524_;
goto v_resetjp_2518_;
}
else
{
lean_inc(v_a_2517_);
lean_dec(v___x_2516_);
v___x_2519_ = lean_box(0);
v_isShared_2520_ = v_isSharedCheck_2524_;
goto v_resetjp_2518_;
}
v_resetjp_2518_:
{
lean_object* v___x_2522_; 
if (v_isShared_2520_ == 0)
{
v___x_2522_ = v___x_2519_;
goto v_reusejp_2521_;
}
else
{
lean_object* v_reuseFailAlloc_2523_; 
v_reuseFailAlloc_2523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2523_, 0, v_a_2517_);
v___x_2522_ = v_reuseFailAlloc_2523_;
goto v_reusejp_2521_;
}
v_reusejp_2521_:
{
return v___x_2522_;
}
}
}
}
v___jp_2459_:
{
lean_object* v___x_2468_; lean_object* v_mctx_2469_; lean_object* v_mvarCounter_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; 
v___x_2468_ = lean_st_ref_get(v___y_2465_);
v_mctx_2469_ = lean_ctor_get(v___x_2468_, 0);
lean_inc_ref(v_mctx_2469_);
lean_dec(v___x_2468_);
v_mvarCounter_2470_ = lean_ctor_get(v_mctx_2469_, 3);
lean_inc(v_mvarCounter_2470_);
lean_dec_ref(v_mctx_2469_);
v___x_2471_ = lean_box(0);
v___x_2472_ = l_Lean_Elab_Tactic_elabTerm(v_val_2458_, v___x_2471_, v___x_2219_, v___y_2460_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_);
if (lean_obj_tag(v___x_2472_) == 0)
{
lean_object* v_a_2473_; lean_object* v___x_2474_; 
v_a_2473_ = lean_ctor_get(v___x_2472_, 0);
lean_inc_n(v_a_2473_, 2);
lean_dec_ref_known(v___x_2472_, 1);
v___x_2474_ = l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4(v_snd_2218_, v_a_2473_, v___y_2460_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_);
if (lean_obj_tag(v___x_2474_) == 0)
{
lean_object* v_a_2475_; uint8_t v___x_2476_; 
v_a_2475_ = lean_ctor_get(v___x_2474_, 0);
lean_inc(v_a_2475_);
lean_dec_ref_known(v___x_2474_, 1);
v___x_2476_ = lean_unbox(v_a_2475_);
lean_dec(v_a_2475_);
if (v___x_2476_ == 0)
{
lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v_a_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2493_; 
lean_dec(v_mvarCounter_2470_);
lean_dec_ref(v_a_2234_);
lean_dec_ref(v___f_2233_);
lean_dec(v___x_2232_);
lean_dec_ref(v___x_2231_);
lean_dec_ref(v___x_2230_);
lean_dec_ref(v___x_2229_);
lean_dec_ref(v___f_2228_);
lean_dec_ref(v_snd_2227_);
lean_dec(v_discharge_x3f_2226_);
lean_dec_ref(v_simprocs_2225_);
lean_dec_ref(v___x_2224_);
lean_dec_ref(v___x_2220_);
v___x_2477_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__6, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__6_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__6);
v___x_2478_ = l_Lean_indentExpr(v_a_2473_);
v___x_2479_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2479_, 0, v___x_2477_);
lean_ctor_set(v___x_2479_, 1, v___x_2478_);
v___x_2480_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__8, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__8_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__8);
v___x_2481_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2481_, 0, v___x_2479_);
lean_ctor_set(v___x_2481_, 1, v___x_2480_);
v___x_2482_ = l_Lean_Expr_mvar___override(v_snd_2218_);
v___x_2483_ = l_Lean_MessageData_ofExpr(v___x_2482_);
v___x_2484_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2484_, 0, v___x_2481_);
lean_ctor_set(v___x_2484_, 1, v___x_2483_);
v___x_2485_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__5___redArg(v___x_2484_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_);
v_a_2486_ = lean_ctor_get(v___x_2485_, 0);
v_isSharedCheck_2493_ = !lean_is_exclusive(v___x_2485_);
if (v_isSharedCheck_2493_ == 0)
{
v___x_2488_ = v___x_2485_;
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_a_2486_);
lean_dec(v___x_2485_);
v___x_2488_ = lean_box(0);
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
v_resetjp_2487_:
{
lean_object* v___x_2491_; 
if (v_isShared_2489_ == 0)
{
v___x_2491_ = v___x_2488_;
goto v_reusejp_2490_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v_a_2486_);
v___x_2491_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2490_;
}
v_reusejp_2490_:
{
return v___x_2491_;
}
}
}
else
{
v___y_2310_ = v_a_2473_;
v___y_2311_ = v___x_2471_;
v___y_2312_ = v_mvarCounter_2470_;
v___y_2313_ = v___x_2471_;
v___y_2314_ = v___y_2460_;
v___y_2315_ = v___y_2461_;
v___y_2316_ = v___y_2462_;
v___y_2317_ = v___y_2463_;
v___y_2318_ = v___y_2464_;
v___y_2319_ = v___y_2465_;
v___y_2320_ = v___y_2466_;
v___y_2321_ = v___y_2467_;
goto v___jp_2309_;
}
}
else
{
lean_object* v_a_2494_; lean_object* v___x_2496_; uint8_t v_isShared_2497_; uint8_t v_isSharedCheck_2501_; 
lean_dec(v_a_2473_);
lean_dec(v_mvarCounter_2470_);
lean_dec_ref(v_a_2234_);
lean_dec_ref(v___f_2233_);
lean_dec(v___x_2232_);
lean_dec_ref(v___x_2231_);
lean_dec_ref(v___x_2230_);
lean_dec_ref(v___x_2229_);
lean_dec_ref(v___f_2228_);
lean_dec_ref(v_snd_2227_);
lean_dec(v_discharge_x3f_2226_);
lean_dec_ref(v_simprocs_2225_);
lean_dec_ref(v___x_2224_);
lean_dec_ref(v___x_2220_);
lean_dec(v_snd_2218_);
v_a_2494_ = lean_ctor_get(v___x_2474_, 0);
v_isSharedCheck_2501_ = !lean_is_exclusive(v___x_2474_);
if (v_isSharedCheck_2501_ == 0)
{
v___x_2496_ = v___x_2474_;
v_isShared_2497_ = v_isSharedCheck_2501_;
goto v_resetjp_2495_;
}
else
{
lean_inc(v_a_2494_);
lean_dec(v___x_2474_);
v___x_2496_ = lean_box(0);
v_isShared_2497_ = v_isSharedCheck_2501_;
goto v_resetjp_2495_;
}
v_resetjp_2495_:
{
lean_object* v___x_2499_; 
if (v_isShared_2497_ == 0)
{
v___x_2499_ = v___x_2496_;
goto v_reusejp_2498_;
}
else
{
lean_object* v_reuseFailAlloc_2500_; 
v_reuseFailAlloc_2500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2500_, 0, v_a_2494_);
v___x_2499_ = v_reuseFailAlloc_2500_;
goto v_reusejp_2498_;
}
v_reusejp_2498_:
{
return v___x_2499_;
}
}
}
}
else
{
lean_object* v_a_2502_; lean_object* v___x_2504_; uint8_t v_isShared_2505_; uint8_t v_isSharedCheck_2509_; 
lean_dec(v_mvarCounter_2470_);
lean_dec_ref(v_a_2234_);
lean_dec_ref(v___f_2233_);
lean_dec(v___x_2232_);
lean_dec_ref(v___x_2231_);
lean_dec_ref(v___x_2230_);
lean_dec_ref(v___x_2229_);
lean_dec_ref(v___f_2228_);
lean_dec_ref(v_snd_2227_);
lean_dec(v_discharge_x3f_2226_);
lean_dec_ref(v_simprocs_2225_);
lean_dec_ref(v___x_2224_);
lean_dec_ref(v___x_2220_);
lean_dec(v_snd_2218_);
v_a_2502_ = lean_ctor_get(v___x_2472_, 0);
v_isSharedCheck_2509_ = !lean_is_exclusive(v___x_2472_);
if (v_isSharedCheck_2509_ == 0)
{
v___x_2504_ = v___x_2472_;
v_isShared_2505_ = v_isSharedCheck_2509_;
goto v_resetjp_2503_;
}
else
{
lean_inc(v_a_2502_);
lean_dec(v___x_2472_);
v___x_2504_ = lean_box(0);
v_isShared_2505_ = v_isSharedCheck_2509_;
goto v_resetjp_2503_;
}
v_resetjp_2503_:
{
lean_object* v___x_2507_; 
if (v_isShared_2505_ == 0)
{
v___x_2507_ = v___x_2504_;
goto v_reusejp_2506_;
}
else
{
lean_object* v_reuseFailAlloc_2508_; 
v_reuseFailAlloc_2508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2508_, 0, v_a_2502_);
v___x_2507_ = v_reuseFailAlloc_2508_;
goto v_reusejp_2506_;
}
v_reusejp_2506_:
{
return v___x_2507_;
}
}
}
}
}
else
{
lean_object* v_lctx_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; 
lean_dec_ref(v___f_2236_);
lean_dec_ref(v_a_2234_);
lean_dec_ref(v___f_2233_);
lean_dec(v___x_2232_);
lean_dec_ref(v___x_2231_);
lean_dec_ref(v___x_2230_);
lean_dec_ref(v___x_2229_);
lean_dec_ref(v___f_2228_);
lean_dec_ref(v___x_2220_);
lean_dec(v_usingArg_2217_);
v_lctx_2525_ = lean_ctor_get(v___y_2241_, 2);
v___x_2526_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__10));
v___x_2527_ = l_Lean_LocalContext_findFromUserName_x3f(v_lctx_2525_, v___x_2526_);
if (lean_obj_tag(v___x_2527_) == 1)
{
lean_object* v_val_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; 
v_val_2528_ = lean_ctor_get(v___x_2527_, 0);
lean_inc(v_val_2528_);
lean_dec_ref_known(v___x_2527_, 1);
v___x_2529_ = l_Lean_LocalDecl_fvarId(v_val_2528_);
lean_dec(v_val_2528_);
v___x_2530_ = lean_mk_empty_array_with_capacity(v___x_2223_);
v___x_2531_ = lean_array_push(v___x_2530_, v___x_2529_);
lean_inc_ref(v_snd_2227_);
v___x_2532_ = l_Lean_Meta_simpGoal(v_snd_2218_, v___x_2224_, v_simprocs_2225_, v_discharge_x3f_2226_, v___x_2221_, v___x_2531_, v_snd_2227_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
if (lean_obj_tag(v___x_2532_) == 0)
{
lean_object* v_a_2533_; lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2561_; 
v_a_2533_ = lean_ctor_get(v___x_2532_, 0);
v_isSharedCheck_2561_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2561_ == 0)
{
v___x_2535_ = v___x_2532_;
v_isShared_2536_ = v_isSharedCheck_2561_;
goto v_resetjp_2534_;
}
else
{
lean_inc(v_a_2533_);
lean_dec(v___x_2532_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2561_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
lean_object* v_fst_2537_; 
v_fst_2537_ = lean_ctor_get(v_a_2533_, 0);
if (lean_obj_tag(v_fst_2537_) == 1)
{
lean_object* v_val_2538_; lean_object* v_snd_2539_; lean_object* v_snd_2540_; lean_object* v___x_2541_; 
lean_del_object(v___x_2535_);
lean_dec_ref(v_snd_2227_);
v_val_2538_ = lean_ctor_get(v_fst_2537_, 0);
lean_inc(v_val_2538_);
v_snd_2539_ = lean_ctor_get(v_a_2533_, 1);
lean_inc(v_snd_2539_);
lean_dec(v_a_2533_);
v_snd_2540_ = lean_ctor_get(v_val_2538_, 1);
lean_inc(v_snd_2540_);
lean_dec(v_val_2538_);
v___x_2541_ = l_Lean_MVarId_assumption(v_snd_2540_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
if (lean_obj_tag(v___x_2541_) == 0)
{
lean_object* v___x_2543_; uint8_t v_isShared_2544_; uint8_t v_isSharedCheck_2548_; 
v_isSharedCheck_2548_ = !lean_is_exclusive(v___x_2541_);
if (v_isSharedCheck_2548_ == 0)
{
lean_object* v_unused_2549_; 
v_unused_2549_ = lean_ctor_get(v___x_2541_, 0);
lean_dec(v_unused_2549_);
v___x_2543_ = v___x_2541_;
v_isShared_2544_ = v_isSharedCheck_2548_;
goto v_resetjp_2542_;
}
else
{
lean_dec(v___x_2541_);
v___x_2543_ = lean_box(0);
v_isShared_2544_ = v_isSharedCheck_2548_;
goto v_resetjp_2542_;
}
v_resetjp_2542_:
{
lean_object* v___x_2546_; 
if (v_isShared_2544_ == 0)
{
lean_ctor_set(v___x_2543_, 0, v_snd_2539_);
v___x_2546_ = v___x_2543_;
goto v_reusejp_2545_;
}
else
{
lean_object* v_reuseFailAlloc_2547_; 
v_reuseFailAlloc_2547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2547_, 0, v_snd_2539_);
v___x_2546_ = v_reuseFailAlloc_2547_;
goto v_reusejp_2545_;
}
v_reusejp_2545_:
{
return v___x_2546_;
}
}
}
else
{
lean_object* v_a_2550_; lean_object* v___x_2552_; uint8_t v_isShared_2553_; uint8_t v_isSharedCheck_2557_; 
lean_dec(v_snd_2539_);
v_a_2550_ = lean_ctor_get(v___x_2541_, 0);
v_isSharedCheck_2557_ = !lean_is_exclusive(v___x_2541_);
if (v_isSharedCheck_2557_ == 0)
{
v___x_2552_ = v___x_2541_;
v_isShared_2553_ = v_isSharedCheck_2557_;
goto v_resetjp_2551_;
}
else
{
lean_inc(v_a_2550_);
lean_dec(v___x_2541_);
v___x_2552_ = lean_box(0);
v_isShared_2553_ = v_isSharedCheck_2557_;
goto v_resetjp_2551_;
}
v_resetjp_2551_:
{
lean_object* v___x_2555_; 
if (v_isShared_2553_ == 0)
{
v___x_2555_ = v___x_2552_;
goto v_reusejp_2554_;
}
else
{
lean_object* v_reuseFailAlloc_2556_; 
v_reuseFailAlloc_2556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2556_, 0, v_a_2550_);
v___x_2555_ = v_reuseFailAlloc_2556_;
goto v_reusejp_2554_;
}
v_reusejp_2554_:
{
return v___x_2555_;
}
}
}
}
else
{
lean_object* v___x_2559_; 
lean_dec(v_a_2533_);
if (v_isShared_2536_ == 0)
{
lean_ctor_set(v___x_2535_, 0, v_snd_2227_);
v___x_2559_ = v___x_2535_;
goto v_reusejp_2558_;
}
else
{
lean_object* v_reuseFailAlloc_2560_; 
v_reuseFailAlloc_2560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2560_, 0, v_snd_2227_);
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
else
{
lean_object* v_a_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2569_; 
lean_dec_ref(v_snd_2227_);
v_a_2562_ = lean_ctor_get(v___x_2532_, 0);
v_isSharedCheck_2569_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2569_ == 0)
{
v___x_2564_ = v___x_2532_;
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_a_2562_);
lean_dec(v___x_2532_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v___x_2567_; 
if (v_isShared_2565_ == 0)
{
v___x_2567_ = v___x_2564_;
goto v_reusejp_2566_;
}
else
{
lean_object* v_reuseFailAlloc_2568_; 
v_reuseFailAlloc_2568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2568_, 0, v_a_2562_);
v___x_2567_ = v_reuseFailAlloc_2568_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
return v___x_2567_;
}
}
}
}
else
{
lean_object* v___x_2570_; 
lean_dec(v___x_2527_);
lean_dec(v_discharge_x3f_2226_);
lean_dec_ref(v_simprocs_2225_);
lean_dec_ref(v___x_2224_);
v___x_2570_ = l_Lean_MVarId_assumption(v_snd_2218_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
if (lean_obj_tag(v___x_2570_) == 0)
{
lean_object* v___x_2572_; uint8_t v_isShared_2573_; uint8_t v_isSharedCheck_2577_; 
v_isSharedCheck_2577_ = !lean_is_exclusive(v___x_2570_);
if (v_isSharedCheck_2577_ == 0)
{
lean_object* v_unused_2578_; 
v_unused_2578_ = lean_ctor_get(v___x_2570_, 0);
lean_dec(v_unused_2578_);
v___x_2572_ = v___x_2570_;
v_isShared_2573_ = v_isSharedCheck_2577_;
goto v_resetjp_2571_;
}
else
{
lean_dec(v___x_2570_);
v___x_2572_ = lean_box(0);
v_isShared_2573_ = v_isSharedCheck_2577_;
goto v_resetjp_2571_;
}
v_resetjp_2571_:
{
lean_object* v___x_2575_; 
if (v_isShared_2573_ == 0)
{
lean_ctor_set(v___x_2572_, 0, v_snd_2227_);
v___x_2575_ = v___x_2572_;
goto v_reusejp_2574_;
}
else
{
lean_object* v_reuseFailAlloc_2576_; 
v_reuseFailAlloc_2576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2576_, 0, v_snd_2227_);
v___x_2575_ = v_reuseFailAlloc_2576_;
goto v_reusejp_2574_;
}
v_reusejp_2574_:
{
return v___x_2575_;
}
}
}
else
{
lean_object* v_a_2579_; lean_object* v___x_2581_; uint8_t v_isShared_2582_; uint8_t v_isSharedCheck_2586_; 
lean_dec_ref(v_snd_2227_);
v_a_2579_ = lean_ctor_get(v___x_2570_, 0);
v_isSharedCheck_2586_ = !lean_is_exclusive(v___x_2570_);
if (v_isSharedCheck_2586_ == 0)
{
v___x_2581_ = v___x_2570_;
v_isShared_2582_ = v_isSharedCheck_2586_;
goto v_resetjp_2580_;
}
else
{
lean_inc(v_a_2579_);
lean_dec(v___x_2570_);
v___x_2581_ = lean_box(0);
v_isShared_2582_ = v_isSharedCheck_2586_;
goto v_resetjp_2580_;
}
v_resetjp_2580_:
{
lean_object* v___x_2584_; 
if (v_isShared_2582_ == 0)
{
v___x_2584_ = v___x_2581_;
goto v_reusejp_2583_;
}
else
{
lean_object* v_reuseFailAlloc_2585_; 
v_reuseFailAlloc_2585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2585_, 0, v_a_2579_);
v___x_2584_ = v_reuseFailAlloc_2585_;
goto v_reusejp_2583_;
}
v_reusejp_2583_:
{
return v___x_2584_;
}
}
}
}
}
v___jp_2246_:
{
lean_object* v___x_2250_; lean_object* v___x_2252_; uint8_t v_isShared_2253_; uint8_t v_isSharedCheck_2257_; 
v___x_2250_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1___redArg(v_snd_2218_, v___y_2248_, v___y_2249_);
v_isSharedCheck_2257_ = !lean_is_exclusive(v___x_2250_);
if (v_isSharedCheck_2257_ == 0)
{
lean_object* v_unused_2258_; 
v_unused_2258_ = lean_ctor_get(v___x_2250_, 0);
lean_dec(v_unused_2258_);
v___x_2252_ = v___x_2250_;
v_isShared_2253_ = v_isSharedCheck_2257_;
goto v_resetjp_2251_;
}
else
{
lean_dec(v___x_2250_);
v___x_2252_ = lean_box(0);
v_isShared_2253_ = v_isSharedCheck_2257_;
goto v_resetjp_2251_;
}
v_resetjp_2251_:
{
lean_object* v___x_2255_; 
if (v_isShared_2253_ == 0)
{
lean_ctor_set(v___x_2252_, 0, v___y_2247_);
v___x_2255_ = v___x_2252_;
goto v_reusejp_2254_;
}
else
{
lean_object* v_reuseFailAlloc_2256_; 
v_reuseFailAlloc_2256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2256_, 0, v___y_2247_);
v___x_2255_ = v_reuseFailAlloc_2256_;
goto v_reusejp_2254_;
}
v_reusejp_2254_:
{
return v___x_2255_;
}
}
}
v___jp_2259_:
{
lean_object* v___x_2276_; 
v___x_2276_ = l_Lean_Core_mkFreshUserName(v___y_2270_, v___y_2263_, v___y_2271_);
if (lean_obj_tag(v___x_2276_) == 0)
{
lean_object* v_a_2277_; lean_object* v___x_2278_; 
v_a_2277_ = lean_ctor_get(v___x_2276_, 0);
lean_inc_n(v_a_2277_, 2);
lean_dec_ref_known(v___x_2276_, 1);
v___x_2278_ = l_Lean_MVarId_rename(v___y_2273_, v___y_2275_, v_a_2277_, v___y_2265_, v___y_2268_, v___y_2263_, v___y_2271_);
if (lean_obj_tag(v___x_2278_) == 0)
{
lean_object* v_a_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___f_2283_; lean_object* v___x_2284_; 
v_a_2279_ = lean_ctor_get(v___x_2278_, 0);
lean_inc_n(v_a_2279_, 2);
lean_dec_ref_known(v___x_2278_, 1);
v___x_2280_ = lean_box(v___x_2219_);
v___x_2281_ = lean_box(v___x_2221_);
v___x_2282_ = lean_box(v_useReducible_2222_);
v___f_2283_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4___boxed), 18, 9);
lean_closure_set(v___f_2283_, 0, v_a_2279_);
lean_closure_set(v___f_2283_, 1, v_a_2277_);
lean_closure_set(v___f_2283_, 2, v___x_2280_);
lean_closure_set(v___f_2283_, 3, v___y_2260_);
lean_closure_set(v___f_2283_, 4, v___y_2262_);
lean_closure_set(v___f_2283_, 5, v___x_2220_);
lean_closure_set(v___f_2283_, 6, v___x_2281_);
lean_closure_set(v___f_2283_, 7, v___y_2261_);
lean_closure_set(v___f_2283_, 8, v___x_2282_);
v___x_2284_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg(v_a_2279_, v___f_2283_, v___y_2264_, v___y_2266_, v___y_2267_, v___y_2272_, v___y_2265_, v___y_2268_, v___y_2263_, v___y_2271_);
if (lean_obj_tag(v___x_2284_) == 0)
{
lean_dec_ref_known(v___x_2284_, 1);
v___y_2247_ = v___y_2269_;
v___y_2248_ = v___y_2274_;
v___y_2249_ = v___y_2268_;
goto v___jp_2246_;
}
else
{
lean_object* v_a_2285_; lean_object* v___x_2287_; uint8_t v_isShared_2288_; uint8_t v_isSharedCheck_2292_; 
lean_dec_ref(v___y_2274_);
lean_dec_ref(v___y_2269_);
lean_dec(v_snd_2218_);
v_a_2285_ = lean_ctor_get(v___x_2284_, 0);
v_isSharedCheck_2292_ = !lean_is_exclusive(v___x_2284_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2287_ = v___x_2284_;
v_isShared_2288_ = v_isSharedCheck_2292_;
goto v_resetjp_2286_;
}
else
{
lean_inc(v_a_2285_);
lean_dec(v___x_2284_);
v___x_2287_ = lean_box(0);
v_isShared_2288_ = v_isSharedCheck_2292_;
goto v_resetjp_2286_;
}
v_resetjp_2286_:
{
lean_object* v___x_2290_; 
if (v_isShared_2288_ == 0)
{
v___x_2290_ = v___x_2287_;
goto v_reusejp_2289_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v_a_2285_);
v___x_2290_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2289_;
}
v_reusejp_2289_:
{
return v___x_2290_;
}
}
}
}
else
{
lean_object* v_a_2293_; lean_object* v___x_2295_; uint8_t v_isShared_2296_; uint8_t v_isSharedCheck_2300_; 
lean_dec(v_a_2277_);
lean_dec_ref(v___y_2274_);
lean_dec_ref(v___y_2269_);
lean_dec(v___y_2262_);
lean_dec(v___y_2261_);
lean_dec_ref(v___y_2260_);
lean_dec_ref(v___x_2220_);
lean_dec(v_snd_2218_);
v_a_2293_ = lean_ctor_get(v___x_2278_, 0);
v_isSharedCheck_2300_ = !lean_is_exclusive(v___x_2278_);
if (v_isSharedCheck_2300_ == 0)
{
v___x_2295_ = v___x_2278_;
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
else
{
lean_inc(v_a_2293_);
lean_dec(v___x_2278_);
v___x_2295_ = lean_box(0);
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
v_resetjp_2294_:
{
lean_object* v___x_2298_; 
if (v_isShared_2296_ == 0)
{
v___x_2298_ = v___x_2295_;
goto v_reusejp_2297_;
}
else
{
lean_object* v_reuseFailAlloc_2299_; 
v_reuseFailAlloc_2299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2299_, 0, v_a_2293_);
v___x_2298_ = v_reuseFailAlloc_2299_;
goto v_reusejp_2297_;
}
v_reusejp_2297_:
{
return v___x_2298_;
}
}
}
}
else
{
lean_object* v_a_2301_; lean_object* v___x_2303_; uint8_t v_isShared_2304_; uint8_t v_isSharedCheck_2308_; 
lean_dec(v___y_2275_);
lean_dec_ref(v___y_2274_);
lean_dec(v___y_2273_);
lean_dec_ref(v___y_2269_);
lean_dec(v___y_2262_);
lean_dec(v___y_2261_);
lean_dec_ref(v___y_2260_);
lean_dec_ref(v___x_2220_);
lean_dec(v_snd_2218_);
v_a_2301_ = lean_ctor_get(v___x_2276_, 0);
v_isSharedCheck_2308_ = !lean_is_exclusive(v___x_2276_);
if (v_isSharedCheck_2308_ == 0)
{
v___x_2303_ = v___x_2276_;
v_isShared_2304_ = v_isSharedCheck_2308_;
goto v_resetjp_2302_;
}
else
{
lean_inc(v_a_2301_);
lean_dec(v___x_2276_);
v___x_2303_ = lean_box(0);
v_isShared_2304_ = v_isSharedCheck_2308_;
goto v_resetjp_2302_;
}
v_resetjp_2302_:
{
lean_object* v___x_2306_; 
if (v_isShared_2304_ == 0)
{
v___x_2306_ = v___x_2303_;
goto v_reusejp_2305_;
}
else
{
lean_object* v_reuseFailAlloc_2307_; 
v_reuseFailAlloc_2307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2307_, 0, v_a_2301_);
v___x_2306_ = v_reuseFailAlloc_2307_;
goto v_reusejp_2305_;
}
v_reusejp_2305_:
{
return v___x_2306_;
}
}
}
}
v___jp_2309_:
{
lean_object* v___x_2322_; 
lean_inc(v_snd_2218_);
v___x_2322_ = l_Lean_MVarId_getType(v_snd_2218_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_);
if (lean_obj_tag(v___x_2322_) == 0)
{
lean_object* v_a_2323_; lean_object* v___x_2324_; 
v_a_2323_ = lean_ctor_get(v___x_2322_, 0);
lean_inc(v_a_2323_);
lean_dec_ref_known(v___x_2322_, 1);
lean_inc(v_snd_2218_);
v___x_2324_ = l_Lean_MVarId_getTag(v_snd_2218_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_);
if (lean_obj_tag(v___x_2324_) == 0)
{
lean_object* v_a_2325_; lean_object* v___x_2326_; 
v_a_2325_ = lean_ctor_get(v___x_2324_, 0);
lean_inc(v_a_2325_);
lean_dec_ref_known(v___x_2324_, 1);
v___x_2326_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_2323_, v_a_2325_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_);
if (lean_obj_tag(v___x_2326_) == 0)
{
lean_object* v_a_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; 
v_a_2327_ = lean_ctor_get(v___x_2326_, 0);
lean_inc(v_a_2327_);
lean_dec_ref_known(v___x_2326_, 1);
v___x_2328_ = l_Lean_Expr_mvarId_x21(v_a_2327_);
v___x_2329_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__1));
lean_inc_ref(v___y_2310_);
v___x_2330_ = l_Lean_MVarId_note(v___x_2328_, v___x_2329_, v___y_2310_, v___y_2313_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_);
if (lean_obj_tag(v___x_2330_) == 0)
{
lean_object* v_a_2331_; lean_object* v_fst_2332_; lean_object* v_snd_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; 
v_a_2331_ = lean_ctor_get(v___x_2330_, 0);
lean_inc(v_a_2331_);
lean_dec_ref_known(v___x_2330_, 1);
v_fst_2332_ = lean_ctor_get(v_a_2331_, 0);
lean_inc_n(v_fst_2332_, 2);
v_snd_2333_ = lean_ctor_get(v_a_2331_, 1);
lean_inc(v_snd_2333_);
lean_dec(v_a_2331_);
v___x_2334_ = lean_mk_empty_array_with_capacity(v___x_2223_);
v___x_2335_ = lean_array_push(v___x_2334_, v_fst_2332_);
v___x_2336_ = l_Lean_Meta_simpGoal(v_snd_2333_, v___x_2224_, v_simprocs_2225_, v_discharge_x3f_2226_, v___x_2221_, v___x_2335_, v_snd_2227_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_);
if (lean_obj_tag(v___x_2336_) == 0)
{
lean_object* v_a_2337_; lean_object* v_fst_2338_; 
v_a_2337_ = lean_ctor_get(v___x_2336_, 0);
lean_inc(v_a_2337_);
lean_dec_ref_known(v___x_2336_, 1);
v_fst_2338_ = lean_ctor_get(v_a_2337_, 0);
if (lean_obj_tag(v_fst_2338_) == 0)
{
lean_object* v_snd_2339_; lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2409_; 
lean_dec(v_fst_2332_);
lean_dec(v___y_2312_);
lean_dec(v___y_2311_);
lean_dec_ref(v___x_2220_);
v_snd_2339_ = lean_ctor_get(v_a_2337_, 1);
v_isSharedCheck_2409_ = !lean_is_exclusive(v_a_2337_);
if (v_isSharedCheck_2409_ == 0)
{
lean_object* v_unused_2410_; 
v_unused_2410_ = lean_ctor_get(v_a_2337_, 0);
lean_dec(v_unused_2410_);
v___x_2341_ = v_a_2337_;
v_isShared_2342_ = v_isSharedCheck_2409_;
goto v_resetjp_2340_;
}
else
{
lean_inc(v_snd_2339_);
lean_dec(v_a_2337_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2409_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
lean_object* v___x_2343_; lean_object* v_a_2344_; uint8_t v___x_2345_; 
v___x_2343_ = l_Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2(v___y_2314_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_);
v_a_2344_ = lean_ctor_get(v___x_2343_, 0);
lean_inc(v_a_2344_);
lean_dec_ref(v___x_2343_);
v___x_2345_ = l_Lean_Elab_Tactic_Simpa_getLinterUnnecessarySimpa(v_a_2344_);
lean_dec(v_a_2344_);
if (v___x_2345_ == 0)
{
lean_del_object(v___x_2341_);
lean_dec_ref(v___y_2310_);
lean_dec_ref(v_a_2234_);
lean_dec_ref(v___f_2233_);
lean_dec(v___x_2232_);
lean_dec_ref(v___x_2231_);
lean_dec_ref(v___x_2230_);
lean_dec_ref(v___x_2229_);
lean_dec_ref(v___f_2228_);
v___y_2247_ = v_snd_2339_;
v___y_2248_ = v_a_2327_;
v___y_2249_ = v___y_2319_;
goto v___jp_2246_;
}
else
{
if (lean_obj_tag(v___y_2310_) == 1)
{
lean_object* v_fvarId_2346_; lean_object* v_lctx_2347_; lean_object* v___x_2348_; 
v_fvarId_2346_ = lean_ctor_get(v___y_2310_, 0);
lean_inc(v_fvarId_2346_);
lean_dec_ref_known(v___y_2310_, 1);
v_lctx_2347_ = lean_ctor_get(v___y_2318_, 2);
lean_inc_ref(v_lctx_2347_);
v___x_2348_ = l_Lean_LocalContext_getRoundtrippingUserName_x3f(v_lctx_2347_, v_fvarId_2346_);
if (lean_obj_tag(v___x_2348_) == 1)
{
lean_object* v_val_2349_; lean_object* v___x_2351_; uint8_t v_isShared_2352_; uint8_t v_isSharedCheck_2408_; 
v_val_2349_ = lean_ctor_get(v___x_2348_, 0);
v_isSharedCheck_2408_ = !lean_is_exclusive(v___x_2348_);
if (v_isSharedCheck_2408_ == 0)
{
v___x_2351_ = v___x_2348_;
v_isShared_2352_ = v_isSharedCheck_2408_;
goto v_resetjp_2350_;
}
else
{
lean_inc(v_val_2349_);
lean_dec(v___x_2348_);
v___x_2351_ = lean_box(0);
v_isShared_2352_ = v_isSharedCheck_2408_;
goto v_resetjp_2350_;
}
v_resetjp_2350_:
{
lean_object* v___x_2353_; lean_object* v___x_2354_; 
v___x_2353_ = l_Lean_mkIdent(v_val_2349_);
lean_inc_ref(v___f_2228_);
lean_inc(v___y_2321_);
lean_inc_ref(v___y_2320_);
lean_inc(v___y_2319_);
lean_inc_ref(v___y_2318_);
lean_inc(v___y_2317_);
lean_inc_ref(v___y_2316_);
lean_inc(v___y_2315_);
lean_inc_ref(v___y_2314_);
v___x_2354_ = lean_apply_9(v___f_2228_, v___y_2314_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_, lean_box(0));
if (lean_obj_tag(v___x_2354_) == 0)
{
lean_object* v_a_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; 
v_a_2355_ = lean_ctor_get(v___x_2354_, 0);
lean_inc_n(v_a_2355_, 2);
lean_dec_ref_known(v___x_2354_, 1);
v___x_2356_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__2));
lean_inc_ref(v___x_2231_);
lean_inc_ref(v___x_2230_);
lean_inc_ref(v___x_2229_);
v___x_2357_ = l_Lean_Name_mkStr4(v___x_2229_, v___x_2230_, v___x_2231_, v___x_2356_);
v___x_2358_ = l_Lean_Syntax_node1(v_a_2355_, v___x_2232_, v___x_2353_);
v___x_2359_ = l_Lean_Syntax_node1(v_a_2355_, v___x_2357_, v___x_2358_);
lean_inc(v___y_2321_);
lean_inc_ref(v___y_2320_);
lean_inc(v___y_2319_);
lean_inc_ref(v___y_2318_);
lean_inc(v___y_2317_);
lean_inc_ref(v___y_2316_);
lean_inc(v___y_2315_);
lean_inc_ref(v___y_2314_);
v___x_2360_ = lean_apply_9(v___f_2228_, v___y_2314_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_, lean_box(0));
if (lean_obj_tag(v___x_2360_) == 0)
{
lean_object* v_a_2361_; lean_object* v_ref_2362_; lean_object* v___x_2363_; lean_object* v___x_2365_; 
v_a_2361_ = lean_ctor_get(v___x_2360_, 0);
lean_inc_n(v_a_2361_, 2);
lean_dec_ref_known(v___x_2360_, 1);
v_ref_2362_ = lean_ctor_get(v___y_2320_, 2);
v___x_2363_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__3));
if (v_isShared_2342_ == 0)
{
lean_ctor_set_tag(v___x_2341_, 2);
lean_ctor_set(v___x_2341_, 1, v___x_2363_);
lean_ctor_set(v___x_2341_, 0, v_a_2361_);
v___x_2365_ = v___x_2341_;
goto v_reusejp_2364_;
}
else
{
lean_object* v_reuseFailAlloc_2391_; 
v_reuseFailAlloc_2391_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2391_, 0, v_a_2361_);
lean_ctor_set(v_reuseFailAlloc_2391_, 1, v___x_2363_);
v___x_2365_ = v_reuseFailAlloc_2391_;
goto v_reusejp_2364_;
}
v_reusejp_2364_:
{
lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2370_; 
v___x_2366_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__4));
v___x_2367_ = l_Lean_Name_mkStr4(v___x_2229_, v___x_2230_, v___x_2231_, v___x_2366_);
v___x_2368_ = l_Lean_Syntax_node2(v_a_2361_, v___x_2367_, v___x_2365_, v___x_2359_);
if (v_isShared_2352_ == 0)
{
lean_ctor_set(v___x_2351_, 0, v___x_2368_);
v___x_2370_ = v___x_2351_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v___x_2368_);
v___x_2370_ = v_reuseFailAlloc_2390_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
lean_object* v___x_2371_; 
lean_inc(v___y_2321_);
lean_inc_ref(v___y_2320_);
lean_inc(v___y_2319_);
lean_inc_ref(v___y_2318_);
lean_inc(v___y_2317_);
lean_inc_ref(v___y_2316_);
lean_inc(v___y_2315_);
lean_inc_ref(v___y_2314_);
v___x_2371_ = lean_apply_10(v___f_2233_, v___x_2370_, v___y_2314_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_, lean_box(0));
if (lean_obj_tag(v___x_2371_) == 0)
{
lean_object* v_a_2372_; lean_object* v___x_2373_; 
v_a_2372_ = lean_ctor_get(v___x_2371_, 0);
lean_inc(v_a_2372_);
lean_dec_ref_known(v___x_2371_, 1);
lean_inc(v_ref_2362_);
v___x_2373_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa(v_a_2234_, v_ref_2362_, v_a_2372_, v___y_2314_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_);
if (lean_obj_tag(v___x_2373_) == 0)
{
lean_dec_ref_known(v___x_2373_, 1);
v___y_2247_ = v_snd_2339_;
v___y_2248_ = v_a_2327_;
v___y_2249_ = v___y_2319_;
goto v___jp_2246_;
}
else
{
lean_object* v_a_2374_; lean_object* v___x_2376_; uint8_t v_isShared_2377_; uint8_t v_isSharedCheck_2381_; 
lean_dec(v_snd_2339_);
lean_dec(v_a_2327_);
lean_dec(v_snd_2218_);
v_a_2374_ = lean_ctor_get(v___x_2373_, 0);
v_isSharedCheck_2381_ = !lean_is_exclusive(v___x_2373_);
if (v_isSharedCheck_2381_ == 0)
{
v___x_2376_ = v___x_2373_;
v_isShared_2377_ = v_isSharedCheck_2381_;
goto v_resetjp_2375_;
}
else
{
lean_inc(v_a_2374_);
lean_dec(v___x_2373_);
v___x_2376_ = lean_box(0);
v_isShared_2377_ = v_isSharedCheck_2381_;
goto v_resetjp_2375_;
}
v_resetjp_2375_:
{
lean_object* v___x_2379_; 
if (v_isShared_2377_ == 0)
{
v___x_2379_ = v___x_2376_;
goto v_reusejp_2378_;
}
else
{
lean_object* v_reuseFailAlloc_2380_; 
v_reuseFailAlloc_2380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2380_, 0, v_a_2374_);
v___x_2379_ = v_reuseFailAlloc_2380_;
goto v_reusejp_2378_;
}
v_reusejp_2378_:
{
return v___x_2379_;
}
}
}
}
else
{
lean_object* v_a_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2389_; 
lean_dec(v_snd_2339_);
lean_dec(v_a_2327_);
lean_dec_ref(v_a_2234_);
lean_dec(v_snd_2218_);
v_a_2382_ = lean_ctor_get(v___x_2371_, 0);
v_isSharedCheck_2389_ = !lean_is_exclusive(v___x_2371_);
if (v_isSharedCheck_2389_ == 0)
{
v___x_2384_ = v___x_2371_;
v_isShared_2385_ = v_isSharedCheck_2389_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_a_2382_);
lean_dec(v___x_2371_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2389_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
lean_object* v___x_2387_; 
if (v_isShared_2385_ == 0)
{
v___x_2387_ = v___x_2384_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v_a_2382_);
v___x_2387_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
return v___x_2387_;
}
}
}
}
}
}
else
{
lean_object* v_a_2392_; lean_object* v___x_2394_; uint8_t v_isShared_2395_; uint8_t v_isSharedCheck_2399_; 
lean_dec(v___x_2359_);
lean_del_object(v___x_2351_);
lean_del_object(v___x_2341_);
lean_dec(v_snd_2339_);
lean_dec(v_a_2327_);
lean_dec_ref(v_a_2234_);
lean_dec_ref(v___f_2233_);
lean_dec_ref(v___x_2231_);
lean_dec_ref(v___x_2230_);
lean_dec_ref(v___x_2229_);
lean_dec(v_snd_2218_);
v_a_2392_ = lean_ctor_get(v___x_2360_, 0);
v_isSharedCheck_2399_ = !lean_is_exclusive(v___x_2360_);
if (v_isSharedCheck_2399_ == 0)
{
v___x_2394_ = v___x_2360_;
v_isShared_2395_ = v_isSharedCheck_2399_;
goto v_resetjp_2393_;
}
else
{
lean_inc(v_a_2392_);
lean_dec(v___x_2360_);
v___x_2394_ = lean_box(0);
v_isShared_2395_ = v_isSharedCheck_2399_;
goto v_resetjp_2393_;
}
v_resetjp_2393_:
{
lean_object* v___x_2397_; 
if (v_isShared_2395_ == 0)
{
v___x_2397_ = v___x_2394_;
goto v_reusejp_2396_;
}
else
{
lean_object* v_reuseFailAlloc_2398_; 
v_reuseFailAlloc_2398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2398_, 0, v_a_2392_);
v___x_2397_ = v_reuseFailAlloc_2398_;
goto v_reusejp_2396_;
}
v_reusejp_2396_:
{
return v___x_2397_;
}
}
}
}
else
{
lean_object* v_a_2400_; lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2407_; 
lean_dec(v___x_2353_);
lean_del_object(v___x_2351_);
lean_del_object(v___x_2341_);
lean_dec(v_snd_2339_);
lean_dec(v_a_2327_);
lean_dec_ref(v_a_2234_);
lean_dec_ref(v___f_2233_);
lean_dec(v___x_2232_);
lean_dec_ref(v___x_2231_);
lean_dec_ref(v___x_2230_);
lean_dec_ref(v___x_2229_);
lean_dec_ref(v___f_2228_);
lean_dec(v_snd_2218_);
v_a_2400_ = lean_ctor_get(v___x_2354_, 0);
v_isSharedCheck_2407_ = !lean_is_exclusive(v___x_2354_);
if (v_isSharedCheck_2407_ == 0)
{
v___x_2402_ = v___x_2354_;
v_isShared_2403_ = v_isSharedCheck_2407_;
goto v_resetjp_2401_;
}
else
{
lean_inc(v_a_2400_);
lean_dec(v___x_2354_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2407_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
lean_object* v___x_2405_; 
if (v_isShared_2403_ == 0)
{
v___x_2405_ = v___x_2402_;
goto v_reusejp_2404_;
}
else
{
lean_object* v_reuseFailAlloc_2406_; 
v_reuseFailAlloc_2406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2406_, 0, v_a_2400_);
v___x_2405_ = v_reuseFailAlloc_2406_;
goto v_reusejp_2404_;
}
v_reusejp_2404_:
{
return v___x_2405_;
}
}
}
}
}
else
{
lean_dec(v___x_2348_);
lean_del_object(v___x_2341_);
lean_dec_ref(v_a_2234_);
lean_dec_ref(v___f_2233_);
lean_dec(v___x_2232_);
lean_dec_ref(v___x_2231_);
lean_dec_ref(v___x_2230_);
lean_dec_ref(v___x_2229_);
lean_dec_ref(v___f_2228_);
v___y_2247_ = v_snd_2339_;
v___y_2248_ = v_a_2327_;
v___y_2249_ = v___y_2319_;
goto v___jp_2246_;
}
}
else
{
lean_del_object(v___x_2341_);
lean_dec_ref(v___y_2310_);
lean_dec_ref(v_a_2234_);
lean_dec_ref(v___f_2233_);
lean_dec(v___x_2232_);
lean_dec_ref(v___x_2231_);
lean_dec_ref(v___x_2230_);
lean_dec_ref(v___x_2229_);
lean_dec_ref(v___f_2228_);
v___y_2247_ = v_snd_2339_;
v___y_2248_ = v_a_2327_;
v___y_2249_ = v___y_2319_;
goto v___jp_2246_;
}
}
}
}
else
{
lean_object* v_val_2411_; lean_object* v_snd_2412_; lean_object* v_fst_2413_; lean_object* v_snd_2414_; lean_object* v___x_2415_; uint8_t v___x_2416_; 
lean_dec_ref(v_a_2234_);
lean_dec_ref(v___f_2233_);
lean_dec(v___x_2232_);
lean_dec_ref(v___x_2231_);
lean_dec_ref(v___x_2230_);
lean_dec_ref(v___x_2229_);
lean_dec_ref(v___f_2228_);
v_val_2411_ = lean_ctor_get(v_fst_2338_, 0);
lean_inc(v_val_2411_);
v_snd_2412_ = lean_ctor_get(v_a_2337_, 1);
lean_inc(v_snd_2412_);
lean_dec(v_a_2337_);
v_fst_2413_ = lean_ctor_get(v_val_2411_, 0);
lean_inc(v_fst_2413_);
v_snd_2414_ = lean_ctor_get(v_val_2411_, 1);
lean_inc(v_snd_2414_);
lean_dec(v_val_2411_);
v___x_2415_ = lean_array_get_size(v_fst_2413_);
v___x_2416_ = lean_nat_dec_lt(v___x_2235_, v___x_2415_);
if (v___x_2416_ == 0)
{
lean_dec(v_fst_2413_);
v___y_2260_ = v___y_2310_;
v___y_2261_ = v___y_2311_;
v___y_2262_ = v___y_2312_;
v___y_2263_ = v___y_2320_;
v___y_2264_ = v___y_2314_;
v___y_2265_ = v___y_2318_;
v___y_2266_ = v___y_2315_;
v___y_2267_ = v___y_2316_;
v___y_2268_ = v___y_2319_;
v___y_2269_ = v_snd_2412_;
v___y_2270_ = v___x_2329_;
v___y_2271_ = v___y_2321_;
v___y_2272_ = v___y_2317_;
v___y_2273_ = v_snd_2414_;
v___y_2274_ = v_a_2327_;
v___y_2275_ = v_fst_2332_;
goto v___jp_2259_;
}
else
{
lean_object* v___x_2417_; 
lean_dec(v_fst_2332_);
v___x_2417_ = lean_array_fget(v_fst_2413_, v___x_2235_);
lean_dec(v_fst_2413_);
v___y_2260_ = v___y_2310_;
v___y_2261_ = v___y_2311_;
v___y_2262_ = v___y_2312_;
v___y_2263_ = v___y_2320_;
v___y_2264_ = v___y_2314_;
v___y_2265_ = v___y_2318_;
v___y_2266_ = v___y_2315_;
v___y_2267_ = v___y_2316_;
v___y_2268_ = v___y_2319_;
v___y_2269_ = v_snd_2412_;
v___y_2270_ = v___x_2329_;
v___y_2271_ = v___y_2321_;
v___y_2272_ = v___y_2317_;
v___y_2273_ = v_snd_2414_;
v___y_2274_ = v_a_2327_;
v___y_2275_ = v___x_2417_;
goto v___jp_2259_;
}
}
}
else
{
lean_object* v_a_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2425_; 
lean_dec(v_fst_2332_);
lean_dec(v_a_2327_);
lean_dec(v___y_2312_);
lean_dec(v___y_2311_);
lean_dec_ref(v___y_2310_);
lean_dec_ref(v_a_2234_);
lean_dec_ref(v___f_2233_);
lean_dec(v___x_2232_);
lean_dec_ref(v___x_2231_);
lean_dec_ref(v___x_2230_);
lean_dec_ref(v___x_2229_);
lean_dec_ref(v___f_2228_);
lean_dec_ref(v___x_2220_);
lean_dec(v_snd_2218_);
v_a_2418_ = lean_ctor_get(v___x_2336_, 0);
v_isSharedCheck_2425_ = !lean_is_exclusive(v___x_2336_);
if (v_isSharedCheck_2425_ == 0)
{
v___x_2420_ = v___x_2336_;
v_isShared_2421_ = v_isSharedCheck_2425_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_a_2418_);
lean_dec(v___x_2336_);
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
else
{
lean_object* v_a_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2433_; 
lean_dec(v_a_2327_);
lean_dec(v___y_2312_);
lean_dec(v___y_2311_);
lean_dec_ref(v___y_2310_);
lean_dec_ref(v_a_2234_);
lean_dec_ref(v___f_2233_);
lean_dec(v___x_2232_);
lean_dec_ref(v___x_2231_);
lean_dec_ref(v___x_2230_);
lean_dec_ref(v___x_2229_);
lean_dec_ref(v___f_2228_);
lean_dec_ref(v_snd_2227_);
lean_dec(v_discharge_x3f_2226_);
lean_dec_ref(v_simprocs_2225_);
lean_dec_ref(v___x_2224_);
lean_dec_ref(v___x_2220_);
lean_dec(v_snd_2218_);
v_a_2426_ = lean_ctor_get(v___x_2330_, 0);
v_isSharedCheck_2433_ = !lean_is_exclusive(v___x_2330_);
if (v_isSharedCheck_2433_ == 0)
{
v___x_2428_ = v___x_2330_;
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_a_2426_);
lean_dec(v___x_2330_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v___x_2431_; 
if (v_isShared_2429_ == 0)
{
v___x_2431_ = v___x_2428_;
goto v_reusejp_2430_;
}
else
{
lean_object* v_reuseFailAlloc_2432_; 
v_reuseFailAlloc_2432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2432_, 0, v_a_2426_);
v___x_2431_ = v_reuseFailAlloc_2432_;
goto v_reusejp_2430_;
}
v_reusejp_2430_:
{
return v___x_2431_;
}
}
}
}
else
{
lean_object* v_a_2434_; lean_object* v___x_2436_; uint8_t v_isShared_2437_; uint8_t v_isSharedCheck_2441_; 
lean_dec(v___y_2313_);
lean_dec(v___y_2312_);
lean_dec(v___y_2311_);
lean_dec_ref(v___y_2310_);
lean_dec_ref(v_a_2234_);
lean_dec_ref(v___f_2233_);
lean_dec(v___x_2232_);
lean_dec_ref(v___x_2231_);
lean_dec_ref(v___x_2230_);
lean_dec_ref(v___x_2229_);
lean_dec_ref(v___f_2228_);
lean_dec_ref(v_snd_2227_);
lean_dec(v_discharge_x3f_2226_);
lean_dec_ref(v_simprocs_2225_);
lean_dec_ref(v___x_2224_);
lean_dec_ref(v___x_2220_);
lean_dec(v_snd_2218_);
v_a_2434_ = lean_ctor_get(v___x_2326_, 0);
v_isSharedCheck_2441_ = !lean_is_exclusive(v___x_2326_);
if (v_isSharedCheck_2441_ == 0)
{
v___x_2436_ = v___x_2326_;
v_isShared_2437_ = v_isSharedCheck_2441_;
goto v_resetjp_2435_;
}
else
{
lean_inc(v_a_2434_);
lean_dec(v___x_2326_);
v___x_2436_ = lean_box(0);
v_isShared_2437_ = v_isSharedCheck_2441_;
goto v_resetjp_2435_;
}
v_resetjp_2435_:
{
lean_object* v___x_2439_; 
if (v_isShared_2437_ == 0)
{
v___x_2439_ = v___x_2436_;
goto v_reusejp_2438_;
}
else
{
lean_object* v_reuseFailAlloc_2440_; 
v_reuseFailAlloc_2440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2440_, 0, v_a_2434_);
v___x_2439_ = v_reuseFailAlloc_2440_;
goto v_reusejp_2438_;
}
v_reusejp_2438_:
{
return v___x_2439_;
}
}
}
}
else
{
lean_object* v_a_2442_; lean_object* v___x_2444_; uint8_t v_isShared_2445_; uint8_t v_isSharedCheck_2449_; 
lean_dec(v_a_2323_);
lean_dec(v___y_2313_);
lean_dec(v___y_2312_);
lean_dec(v___y_2311_);
lean_dec_ref(v___y_2310_);
lean_dec_ref(v_a_2234_);
lean_dec_ref(v___f_2233_);
lean_dec(v___x_2232_);
lean_dec_ref(v___x_2231_);
lean_dec_ref(v___x_2230_);
lean_dec_ref(v___x_2229_);
lean_dec_ref(v___f_2228_);
lean_dec_ref(v_snd_2227_);
lean_dec(v_discharge_x3f_2226_);
lean_dec_ref(v_simprocs_2225_);
lean_dec_ref(v___x_2224_);
lean_dec_ref(v___x_2220_);
lean_dec(v_snd_2218_);
v_a_2442_ = lean_ctor_get(v___x_2324_, 0);
v_isSharedCheck_2449_ = !lean_is_exclusive(v___x_2324_);
if (v_isSharedCheck_2449_ == 0)
{
v___x_2444_ = v___x_2324_;
v_isShared_2445_ = v_isSharedCheck_2449_;
goto v_resetjp_2443_;
}
else
{
lean_inc(v_a_2442_);
lean_dec(v___x_2324_);
v___x_2444_ = lean_box(0);
v_isShared_2445_ = v_isSharedCheck_2449_;
goto v_resetjp_2443_;
}
v_resetjp_2443_:
{
lean_object* v___x_2447_; 
if (v_isShared_2445_ == 0)
{
v___x_2447_ = v___x_2444_;
goto v_reusejp_2446_;
}
else
{
lean_object* v_reuseFailAlloc_2448_; 
v_reuseFailAlloc_2448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2448_, 0, v_a_2442_);
v___x_2447_ = v_reuseFailAlloc_2448_;
goto v_reusejp_2446_;
}
v_reusejp_2446_:
{
return v___x_2447_;
}
}
}
}
else
{
lean_object* v_a_2450_; lean_object* v___x_2452_; uint8_t v_isShared_2453_; uint8_t v_isSharedCheck_2457_; 
lean_dec(v___y_2313_);
lean_dec(v___y_2312_);
lean_dec(v___y_2311_);
lean_dec_ref(v___y_2310_);
lean_dec_ref(v_a_2234_);
lean_dec_ref(v___f_2233_);
lean_dec(v___x_2232_);
lean_dec_ref(v___x_2231_);
lean_dec_ref(v___x_2230_);
lean_dec_ref(v___x_2229_);
lean_dec_ref(v___f_2228_);
lean_dec_ref(v_snd_2227_);
lean_dec(v_discharge_x3f_2226_);
lean_dec_ref(v_simprocs_2225_);
lean_dec_ref(v___x_2224_);
lean_dec_ref(v___x_2220_);
lean_dec(v_snd_2218_);
v_a_2450_ = lean_ctor_get(v___x_2322_, 0);
v_isSharedCheck_2457_ = !lean_is_exclusive(v___x_2322_);
if (v_isSharedCheck_2457_ == 0)
{
v___x_2452_ = v___x_2322_;
v_isShared_2453_ = v_isSharedCheck_2457_;
goto v_resetjp_2451_;
}
else
{
lean_inc(v_a_2450_);
lean_dec(v___x_2322_);
v___x_2452_ = lean_box(0);
v_isShared_2453_ = v_isSharedCheck_2457_;
goto v_resetjp_2451_;
}
v_resetjp_2451_:
{
lean_object* v___x_2455_; 
if (v_isShared_2453_ == 0)
{
v___x_2455_ = v___x_2452_;
goto v_reusejp_2454_;
}
else
{
lean_object* v_reuseFailAlloc_2456_; 
v_reuseFailAlloc_2456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2456_, 0, v_a_2450_);
v___x_2455_ = v_reuseFailAlloc_2456_;
goto v_reusejp_2454_;
}
v_reusejp_2454_:
{
return v___x_2455_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___boxed(lean_object** _args){
lean_object* v_usingArg_2587_ = _args[0];
lean_object* v_snd_2588_ = _args[1];
lean_object* v___x_2589_ = _args[2];
lean_object* v___x_2590_ = _args[3];
lean_object* v___x_2591_ = _args[4];
lean_object* v_useReducible_2592_ = _args[5];
lean_object* v___x_2593_ = _args[6];
lean_object* v___x_2594_ = _args[7];
lean_object* v_simprocs_2595_ = _args[8];
lean_object* v_discharge_x3f_2596_ = _args[9];
lean_object* v_snd_2597_ = _args[10];
lean_object* v___f_2598_ = _args[11];
lean_object* v___x_2599_ = _args[12];
lean_object* v___x_2600_ = _args[13];
lean_object* v___x_2601_ = _args[14];
lean_object* v___x_2602_ = _args[15];
lean_object* v___f_2603_ = _args[16];
lean_object* v_a_2604_ = _args[17];
lean_object* v___x_2605_ = _args[18];
lean_object* v___f_2606_ = _args[19];
lean_object* v___y_2607_ = _args[20];
lean_object* v___y_2608_ = _args[21];
lean_object* v___y_2609_ = _args[22];
lean_object* v___y_2610_ = _args[23];
lean_object* v___y_2611_ = _args[24];
lean_object* v___y_2612_ = _args[25];
lean_object* v___y_2613_ = _args[26];
lean_object* v___y_2614_ = _args[27];
lean_object* v___y_2615_ = _args[28];
_start:
{
uint8_t v___x_103041__boxed_2616_; uint8_t v___x_103043__boxed_2617_; uint8_t v_useReducible_boxed_2618_; lean_object* v_res_2619_; 
v___x_103041__boxed_2616_ = lean_unbox(v___x_2589_);
v___x_103043__boxed_2617_ = lean_unbox(v___x_2591_);
v_useReducible_boxed_2618_ = lean_unbox(v_useReducible_2592_);
v_res_2619_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6(v_usingArg_2587_, v_snd_2588_, v___x_103041__boxed_2616_, v___x_2590_, v___x_103043__boxed_2617_, v_useReducible_boxed_2618_, v___x_2593_, v___x_2594_, v_simprocs_2595_, v_discharge_x3f_2596_, v_snd_2597_, v___f_2598_, v___x_2599_, v___x_2600_, v___x_2601_, v___x_2602_, v___f_2603_, v_a_2604_, v___x_2605_, v___f_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_, v___y_2611_, v___y_2612_, v___y_2613_, v___y_2614_);
lean_dec(v___y_2614_);
lean_dec_ref(v___y_2613_);
lean_dec(v___y_2612_);
lean_dec_ref(v___y_2611_);
lean_dec(v___y_2610_);
lean_dec_ref(v___y_2609_);
lean_dec(v___y_2608_);
lean_dec_ref(v___y_2607_);
lean_dec(v___x_2605_);
lean_dec(v___x_2593_);
return v_res_2619_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__0(void){
_start:
{
lean_object* v___x_2620_; 
v___x_2620_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2620_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__1(void){
_start:
{
lean_object* v___x_2621_; lean_object* v___x_2622_; 
v___x_2621_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__0, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__0_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__0);
v___x_2622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2622_, 0, v___x_2621_);
return v___x_2622_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__2(void){
_start:
{
lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; 
v___x_2623_ = lean_unsigned_to_nat(32u);
v___x_2624_ = lean_mk_empty_array_with_capacity(v___x_2623_);
v___x_2625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2625_, 0, v___x_2624_);
return v___x_2625_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7(lean_object* v___x_2626_, lean_object* v_tk_2627_, lean_object* v___x_2628_, lean_object* v___x_2629_, lean_object* v___x_2630_, lean_object* v_simprocs_2631_, uint8_t v___x_2632_, lean_object* v_usingArg_2633_, lean_object* v___x_2634_, uint8_t v___x_2635_, uint8_t v_useReducible_2636_, lean_object* v___x_2637_, lean_object* v___f_2638_, lean_object* v___x_2639_, lean_object* v___x_2640_, lean_object* v___x_2641_, lean_object* v___f_2642_, lean_object* v_a_2643_, lean_object* v_usingTk_x3f_2644_, lean_object* v_discharge_x3f_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_){
_start:
{
lean_object* v___y_2656_; 
if (lean_obj_tag(v_usingTk_x3f_2644_) == 0)
{
lean_object* v___x_2769_; 
v___x_2769_ = lean_box(0);
v___y_2656_ = v___x_2769_;
goto v___jp_2655_;
}
else
{
lean_object* v_val_2770_; 
v_val_2770_ = lean_ctor_get(v_usingTk_x3f_2644_, 0);
lean_inc(v_val_2770_);
lean_dec_ref_known(v_usingTk_x3f_2644_, 1);
v___y_2656_ = v_val_2770_;
goto v___jp_2655_;
}
v___jp_2655_:
{
lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; 
v___x_2657_ = lean_mk_empty_array_with_capacity(v___x_2626_);
v___x_2658_ = lean_array_push(v___x_2657_, v_tk_2627_);
v___x_2659_ = lean_array_push(v___x_2658_, v___y_2656_);
v___x_2660_ = lean_box(2);
lean_inc(v___x_2628_);
v___x_2661_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2661_, 0, v___x_2660_);
lean_ctor_set(v___x_2661_, 1, v___x_2628_);
lean_ctor_set(v___x_2661_, 2, v___x_2659_);
v___x_2662_ = l_Lean_Elab_Tactic_mkInitialTacticInfo(v___x_2661_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_, v___y_2651_, v___y_2652_, v___y_2653_);
if (lean_obj_tag(v___x_2662_) == 0)
{
lean_object* v_a_2663_; lean_object* v___f_2664_; lean_object* v___x_2665_; 
v_a_2663_ = lean_ctor_get(v___x_2662_, 0);
lean_inc(v_a_2663_);
lean_dec_ref_known(v___x_2662_, 1);
v___f_2664_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__2___boxed), 11, 1);
lean_closure_set(v___f_2664_, 0, v_a_2663_);
v___x_2665_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_2647_, v___y_2650_, v___y_2651_, v___y_2652_, v___y_2653_);
if (lean_obj_tag(v___x_2665_) == 0)
{
lean_object* v_a_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; size_t v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; 
v_a_2666_ = lean_ctor_get(v___x_2665_, 0);
lean_inc(v_a_2666_);
lean_dec_ref_known(v___x_2665_, 1);
v___x_2667_ = lean_mk_empty_array_with_capacity(v___x_2629_);
v___x_2668_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__1, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__1_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__1);
lean_inc_n(v___x_2629_, 3);
v___x_2669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2669_, 0, v___x_2668_);
lean_ctor_set(v___x_2669_, 1, v___x_2629_);
v___x_2670_ = lean_unsigned_to_nat(32u);
v___x_2671_ = lean_mk_empty_array_with_capacity(v___x_2670_);
v___x_2672_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__2, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__2_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__2);
v___x_2673_ = ((size_t)5ULL);
v___x_2674_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2674_, 0, v___x_2672_);
lean_ctor_set(v___x_2674_, 1, v___x_2671_);
lean_ctor_set(v___x_2674_, 2, v___x_2629_);
lean_ctor_set(v___x_2674_, 3, v___x_2629_);
lean_ctor_set_usize(v___x_2674_, 4, v___x_2673_);
v___x_2675_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2675_, 0, v___x_2668_);
lean_ctor_set(v___x_2675_, 1, v___x_2668_);
lean_ctor_set(v___x_2675_, 2, v___x_2668_);
lean_ctor_set(v___x_2675_, 3, v___x_2674_);
v___x_2676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2676_, 0, v___x_2669_);
lean_ctor_set(v___x_2676_, 1, v___x_2675_);
lean_inc_ref(v___x_2676_);
lean_inc(v_discharge_x3f_2645_);
lean_inc_ref(v_simprocs_2631_);
lean_inc_ref(v___x_2630_);
v___x_2677_ = l_Lean_Meta_simpGoal(v_a_2666_, v___x_2630_, v_simprocs_2631_, v_discharge_x3f_2645_, v___x_2632_, v___x_2667_, v___x_2676_, v___y_2650_, v___y_2651_, v___y_2652_, v___y_2653_);
if (lean_obj_tag(v___x_2677_) == 0)
{
lean_object* v_a_2678_; lean_object* v_fst_2679_; 
v_a_2678_ = lean_ctor_get(v___x_2677_, 0);
lean_inc(v_a_2678_);
lean_dec_ref_known(v___x_2677_, 1);
v_fst_2679_ = lean_ctor_get(v_a_2678_, 0);
if (lean_obj_tag(v_fst_2679_) == 1)
{
lean_object* v_val_2680_; lean_object* v_snd_2681_; lean_object* v_snd_2682_; lean_object* v___x_2684_; uint8_t v_isShared_2685_; uint8_t v_isSharedCheck_2704_; 
lean_dec_ref_known(v___x_2676_, 2);
v_val_2680_ = lean_ctor_get(v_fst_2679_, 0);
lean_inc(v_val_2680_);
v_snd_2681_ = lean_ctor_get(v_a_2678_, 1);
lean_inc(v_snd_2681_);
lean_dec(v_a_2678_);
v_snd_2682_ = lean_ctor_get(v_val_2680_, 1);
v_isSharedCheck_2704_ = !lean_is_exclusive(v_val_2680_);
if (v_isSharedCheck_2704_ == 0)
{
lean_object* v_unused_2705_; 
v_unused_2705_ = lean_ctor_get(v_val_2680_, 0);
lean_dec(v_unused_2705_);
v___x_2684_ = v_val_2680_;
v_isShared_2685_ = v_isSharedCheck_2704_;
goto v_resetjp_2683_;
}
else
{
lean_inc(v_snd_2682_);
lean_dec(v_val_2680_);
v___x_2684_ = lean_box(0);
v_isShared_2685_ = v_isSharedCheck_2704_;
goto v_resetjp_2683_;
}
v_resetjp_2683_:
{
lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___y_2689_; lean_object* v___x_2690_; lean_object* v___x_2692_; 
v___x_2686_ = lean_box(v___x_2632_);
v___x_2687_ = lean_box(v___x_2635_);
v___x_2688_ = lean_box(v_useReducible_2636_);
lean_inc_n(v_snd_2682_, 2);
v___y_2689_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___boxed), 29, 20);
lean_closure_set(v___y_2689_, 0, v_usingArg_2633_);
lean_closure_set(v___y_2689_, 1, v_snd_2682_);
lean_closure_set(v___y_2689_, 2, v___x_2686_);
lean_closure_set(v___y_2689_, 3, v___x_2634_);
lean_closure_set(v___y_2689_, 4, v___x_2687_);
lean_closure_set(v___y_2689_, 5, v___x_2688_);
lean_closure_set(v___y_2689_, 6, v___x_2637_);
lean_closure_set(v___y_2689_, 7, v___x_2630_);
lean_closure_set(v___y_2689_, 8, v_simprocs_2631_);
lean_closure_set(v___y_2689_, 9, v_discharge_x3f_2645_);
lean_closure_set(v___y_2689_, 10, v_snd_2681_);
lean_closure_set(v___y_2689_, 11, v___f_2638_);
lean_closure_set(v___y_2689_, 12, v___x_2639_);
lean_closure_set(v___y_2689_, 13, v___x_2640_);
lean_closure_set(v___y_2689_, 14, v___x_2641_);
lean_closure_set(v___y_2689_, 15, v___x_2628_);
lean_closure_set(v___y_2689_, 16, v___f_2642_);
lean_closure_set(v___y_2689_, 17, v_a_2643_);
lean_closure_set(v___y_2689_, 18, v___x_2629_);
lean_closure_set(v___y_2689_, 19, v___f_2664_);
v___x_2690_ = lean_box(0);
if (v_isShared_2685_ == 0)
{
lean_ctor_set_tag(v___x_2684_, 1);
lean_ctor_set(v___x_2684_, 1, v___x_2690_);
lean_ctor_set(v___x_2684_, 0, v_snd_2682_);
v___x_2692_ = v___x_2684_;
goto v_reusejp_2691_;
}
else
{
lean_object* v_reuseFailAlloc_2703_; 
v_reuseFailAlloc_2703_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2703_, 0, v_snd_2682_);
lean_ctor_set(v_reuseFailAlloc_2703_, 1, v___x_2690_);
v___x_2692_ = v_reuseFailAlloc_2703_;
goto v_reusejp_2691_;
}
v_reusejp_2691_:
{
lean_object* v___x_2693_; 
v___x_2693_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2692_, v___y_2647_, v___y_2650_, v___y_2651_, v___y_2652_, v___y_2653_);
if (lean_obj_tag(v___x_2693_) == 0)
{
lean_object* v___x_2694_; 
lean_dec_ref_known(v___x_2693_, 1);
v___x_2694_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg(v_snd_2682_, v___y_2689_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_, v___y_2651_, v___y_2652_, v___y_2653_);
return v___x_2694_;
}
else
{
lean_object* v_a_2695_; lean_object* v___x_2697_; uint8_t v_isShared_2698_; uint8_t v_isSharedCheck_2702_; 
lean_dec_ref(v___y_2689_);
lean_dec(v_snd_2682_);
v_a_2695_ = lean_ctor_get(v___x_2693_, 0);
v_isSharedCheck_2702_ = !lean_is_exclusive(v___x_2693_);
if (v_isSharedCheck_2702_ == 0)
{
v___x_2697_ = v___x_2693_;
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
else
{
lean_inc(v_a_2695_);
lean_dec(v___x_2693_);
v___x_2697_ = lean_box(0);
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
v_resetjp_2696_:
{
lean_object* v___x_2700_; 
if (v_isShared_2698_ == 0)
{
v___x_2700_ = v___x_2697_;
goto v_reusejp_2699_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v_a_2695_);
v___x_2700_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2699_;
}
v_reusejp_2699_:
{
return v___x_2700_;
}
}
}
}
}
}
else
{
lean_object* v___x_2706_; lean_object* v_a_2707_; lean_object* v___x_2709_; uint8_t v_isShared_2710_; uint8_t v_isSharedCheck_2744_; 
lean_dec(v_a_2678_);
lean_dec_ref(v___f_2664_);
lean_dec(v_discharge_x3f_2645_);
lean_dec_ref(v___x_2641_);
lean_dec_ref(v___x_2640_);
lean_dec_ref(v___x_2639_);
lean_dec_ref(v___f_2638_);
lean_dec(v___x_2637_);
lean_dec_ref(v___x_2634_);
lean_dec(v_usingArg_2633_);
lean_dec_ref(v_simprocs_2631_);
lean_dec_ref(v___x_2630_);
lean_dec(v___x_2629_);
lean_dec(v___x_2628_);
v___x_2706_ = l_Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2(v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_, v___y_2651_, v___y_2652_, v___y_2653_);
v_a_2707_ = lean_ctor_get(v___x_2706_, 0);
v_isSharedCheck_2744_ = !lean_is_exclusive(v___x_2706_);
if (v_isSharedCheck_2744_ == 0)
{
v___x_2709_ = v___x_2706_;
v_isShared_2710_ = v_isSharedCheck_2744_;
goto v_resetjp_2708_;
}
else
{
lean_inc(v_a_2707_);
lean_dec(v___x_2706_);
v___x_2709_ = lean_box(0);
v_isShared_2710_ = v_isSharedCheck_2744_;
goto v_resetjp_2708_;
}
v_resetjp_2708_:
{
uint8_t v___x_2711_; 
v___x_2711_ = l_Lean_Elab_Tactic_Simpa_getLinterUnnecessarySimpa(v_a_2707_);
lean_dec(v_a_2707_);
if (v___x_2711_ == 0)
{
lean_object* v___x_2713_; 
lean_dec_ref(v_a_2643_);
lean_dec_ref(v___f_2642_);
if (v_isShared_2710_ == 0)
{
lean_ctor_set(v___x_2709_, 0, v___x_2676_);
v___x_2713_ = v___x_2709_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2714_; 
v_reuseFailAlloc_2714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2714_, 0, v___x_2676_);
v___x_2713_ = v_reuseFailAlloc_2714_;
goto v_reusejp_2712_;
}
v_reusejp_2712_:
{
return v___x_2713_;
}
}
else
{
lean_object* v_ref_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; 
lean_del_object(v___x_2709_);
v_ref_2715_ = lean_ctor_get(v___y_2652_, 2);
v___x_2716_ = lean_box(0);
lean_inc(v___y_2653_);
lean_inc_ref(v___y_2652_);
lean_inc(v___y_2651_);
lean_inc_ref(v___y_2650_);
lean_inc(v___y_2649_);
lean_inc_ref(v___y_2648_);
lean_inc(v___y_2647_);
lean_inc_ref(v___y_2646_);
v___x_2717_ = lean_apply_10(v___f_2642_, v___x_2716_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_, v___y_2651_, v___y_2652_, v___y_2653_, lean_box(0));
if (lean_obj_tag(v___x_2717_) == 0)
{
lean_object* v_a_2718_; lean_object* v___x_2719_; 
v_a_2718_ = lean_ctor_get(v___x_2717_, 0);
lean_inc(v_a_2718_);
lean_dec_ref_known(v___x_2717_, 1);
lean_inc(v_ref_2715_);
v___x_2719_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa(v_a_2643_, v_ref_2715_, v_a_2718_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_, v___y_2651_, v___y_2652_, v___y_2653_);
if (lean_obj_tag(v___x_2719_) == 0)
{
lean_object* v___x_2721_; uint8_t v_isShared_2722_; uint8_t v_isSharedCheck_2726_; 
v_isSharedCheck_2726_ = !lean_is_exclusive(v___x_2719_);
if (v_isSharedCheck_2726_ == 0)
{
lean_object* v_unused_2727_; 
v_unused_2727_ = lean_ctor_get(v___x_2719_, 0);
lean_dec(v_unused_2727_);
v___x_2721_ = v___x_2719_;
v_isShared_2722_ = v_isSharedCheck_2726_;
goto v_resetjp_2720_;
}
else
{
lean_dec(v___x_2719_);
v___x_2721_ = lean_box(0);
v_isShared_2722_ = v_isSharedCheck_2726_;
goto v_resetjp_2720_;
}
v_resetjp_2720_:
{
lean_object* v___x_2724_; 
if (v_isShared_2722_ == 0)
{
lean_ctor_set(v___x_2721_, 0, v___x_2676_);
v___x_2724_ = v___x_2721_;
goto v_reusejp_2723_;
}
else
{
lean_object* v_reuseFailAlloc_2725_; 
v_reuseFailAlloc_2725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2725_, 0, v___x_2676_);
v___x_2724_ = v_reuseFailAlloc_2725_;
goto v_reusejp_2723_;
}
v_reusejp_2723_:
{
return v___x_2724_;
}
}
}
else
{
lean_object* v_a_2728_; lean_object* v___x_2730_; uint8_t v_isShared_2731_; uint8_t v_isSharedCheck_2735_; 
lean_dec_ref_known(v___x_2676_, 2);
v_a_2728_ = lean_ctor_get(v___x_2719_, 0);
v_isSharedCheck_2735_ = !lean_is_exclusive(v___x_2719_);
if (v_isSharedCheck_2735_ == 0)
{
v___x_2730_ = v___x_2719_;
v_isShared_2731_ = v_isSharedCheck_2735_;
goto v_resetjp_2729_;
}
else
{
lean_inc(v_a_2728_);
lean_dec(v___x_2719_);
v___x_2730_ = lean_box(0);
v_isShared_2731_ = v_isSharedCheck_2735_;
goto v_resetjp_2729_;
}
v_resetjp_2729_:
{
lean_object* v___x_2733_; 
if (v_isShared_2731_ == 0)
{
v___x_2733_ = v___x_2730_;
goto v_reusejp_2732_;
}
else
{
lean_object* v_reuseFailAlloc_2734_; 
v_reuseFailAlloc_2734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2734_, 0, v_a_2728_);
v___x_2733_ = v_reuseFailAlloc_2734_;
goto v_reusejp_2732_;
}
v_reusejp_2732_:
{
return v___x_2733_;
}
}
}
}
else
{
lean_object* v_a_2736_; lean_object* v___x_2738_; uint8_t v_isShared_2739_; uint8_t v_isSharedCheck_2743_; 
lean_dec_ref_known(v___x_2676_, 2);
lean_dec_ref(v_a_2643_);
v_a_2736_ = lean_ctor_get(v___x_2717_, 0);
v_isSharedCheck_2743_ = !lean_is_exclusive(v___x_2717_);
if (v_isSharedCheck_2743_ == 0)
{
v___x_2738_ = v___x_2717_;
v_isShared_2739_ = v_isSharedCheck_2743_;
goto v_resetjp_2737_;
}
else
{
lean_inc(v_a_2736_);
lean_dec(v___x_2717_);
v___x_2738_ = lean_box(0);
v_isShared_2739_ = v_isSharedCheck_2743_;
goto v_resetjp_2737_;
}
v_resetjp_2737_:
{
lean_object* v___x_2741_; 
if (v_isShared_2739_ == 0)
{
v___x_2741_ = v___x_2738_;
goto v_reusejp_2740_;
}
else
{
lean_object* v_reuseFailAlloc_2742_; 
v_reuseFailAlloc_2742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2742_, 0, v_a_2736_);
v___x_2741_ = v_reuseFailAlloc_2742_;
goto v_reusejp_2740_;
}
v_reusejp_2740_:
{
return v___x_2741_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2745_; lean_object* v___x_2747_; uint8_t v_isShared_2748_; uint8_t v_isSharedCheck_2752_; 
lean_dec_ref_known(v___x_2676_, 2);
lean_dec_ref(v___f_2664_);
lean_dec(v_discharge_x3f_2645_);
lean_dec_ref(v_a_2643_);
lean_dec_ref(v___f_2642_);
lean_dec_ref(v___x_2641_);
lean_dec_ref(v___x_2640_);
lean_dec_ref(v___x_2639_);
lean_dec_ref(v___f_2638_);
lean_dec(v___x_2637_);
lean_dec_ref(v___x_2634_);
lean_dec(v_usingArg_2633_);
lean_dec_ref(v_simprocs_2631_);
lean_dec_ref(v___x_2630_);
lean_dec(v___x_2629_);
lean_dec(v___x_2628_);
v_a_2745_ = lean_ctor_get(v___x_2677_, 0);
v_isSharedCheck_2752_ = !lean_is_exclusive(v___x_2677_);
if (v_isSharedCheck_2752_ == 0)
{
v___x_2747_ = v___x_2677_;
v_isShared_2748_ = v_isSharedCheck_2752_;
goto v_resetjp_2746_;
}
else
{
lean_inc(v_a_2745_);
lean_dec(v___x_2677_);
v___x_2747_ = lean_box(0);
v_isShared_2748_ = v_isSharedCheck_2752_;
goto v_resetjp_2746_;
}
v_resetjp_2746_:
{
lean_object* v___x_2750_; 
if (v_isShared_2748_ == 0)
{
v___x_2750_ = v___x_2747_;
goto v_reusejp_2749_;
}
else
{
lean_object* v_reuseFailAlloc_2751_; 
v_reuseFailAlloc_2751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2751_, 0, v_a_2745_);
v___x_2750_ = v_reuseFailAlloc_2751_;
goto v_reusejp_2749_;
}
v_reusejp_2749_:
{
return v___x_2750_;
}
}
}
}
else
{
lean_object* v_a_2753_; lean_object* v___x_2755_; uint8_t v_isShared_2756_; uint8_t v_isSharedCheck_2760_; 
lean_dec_ref(v___f_2664_);
lean_dec(v_discharge_x3f_2645_);
lean_dec_ref(v_a_2643_);
lean_dec_ref(v___f_2642_);
lean_dec_ref(v___x_2641_);
lean_dec_ref(v___x_2640_);
lean_dec_ref(v___x_2639_);
lean_dec_ref(v___f_2638_);
lean_dec(v___x_2637_);
lean_dec_ref(v___x_2634_);
lean_dec(v_usingArg_2633_);
lean_dec_ref(v_simprocs_2631_);
lean_dec_ref(v___x_2630_);
lean_dec(v___x_2629_);
lean_dec(v___x_2628_);
v_a_2753_ = lean_ctor_get(v___x_2665_, 0);
v_isSharedCheck_2760_ = !lean_is_exclusive(v___x_2665_);
if (v_isSharedCheck_2760_ == 0)
{
v___x_2755_ = v___x_2665_;
v_isShared_2756_ = v_isSharedCheck_2760_;
goto v_resetjp_2754_;
}
else
{
lean_inc(v_a_2753_);
lean_dec(v___x_2665_);
v___x_2755_ = lean_box(0);
v_isShared_2756_ = v_isSharedCheck_2760_;
goto v_resetjp_2754_;
}
v_resetjp_2754_:
{
lean_object* v___x_2758_; 
if (v_isShared_2756_ == 0)
{
v___x_2758_ = v___x_2755_;
goto v_reusejp_2757_;
}
else
{
lean_object* v_reuseFailAlloc_2759_; 
v_reuseFailAlloc_2759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2759_, 0, v_a_2753_);
v___x_2758_ = v_reuseFailAlloc_2759_;
goto v_reusejp_2757_;
}
v_reusejp_2757_:
{
return v___x_2758_;
}
}
}
}
else
{
lean_object* v_a_2761_; lean_object* v___x_2763_; uint8_t v_isShared_2764_; uint8_t v_isSharedCheck_2768_; 
lean_dec(v_discharge_x3f_2645_);
lean_dec_ref(v_a_2643_);
lean_dec_ref(v___f_2642_);
lean_dec_ref(v___x_2641_);
lean_dec_ref(v___x_2640_);
lean_dec_ref(v___x_2639_);
lean_dec_ref(v___f_2638_);
lean_dec(v___x_2637_);
lean_dec_ref(v___x_2634_);
lean_dec(v_usingArg_2633_);
lean_dec_ref(v_simprocs_2631_);
lean_dec_ref(v___x_2630_);
lean_dec(v___x_2629_);
lean_dec(v___x_2628_);
v_a_2761_ = lean_ctor_get(v___x_2662_, 0);
v_isSharedCheck_2768_ = !lean_is_exclusive(v___x_2662_);
if (v_isSharedCheck_2768_ == 0)
{
v___x_2763_ = v___x_2662_;
v_isShared_2764_ = v_isSharedCheck_2768_;
goto v_resetjp_2762_;
}
else
{
lean_inc(v_a_2761_);
lean_dec(v___x_2662_);
v___x_2763_ = lean_box(0);
v_isShared_2764_ = v_isSharedCheck_2768_;
goto v_resetjp_2762_;
}
v_resetjp_2762_:
{
lean_object* v___x_2766_; 
if (v_isShared_2764_ == 0)
{
v___x_2766_ = v___x_2763_;
goto v_reusejp_2765_;
}
else
{
lean_object* v_reuseFailAlloc_2767_; 
v_reuseFailAlloc_2767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2767_, 0, v_a_2761_);
v___x_2766_ = v_reuseFailAlloc_2767_;
goto v_reusejp_2765_;
}
v_reusejp_2765_:
{
return v___x_2766_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___boxed(lean_object** _args){
lean_object* v___x_2771_ = _args[0];
lean_object* v_tk_2772_ = _args[1];
lean_object* v___x_2773_ = _args[2];
lean_object* v___x_2774_ = _args[3];
lean_object* v___x_2775_ = _args[4];
lean_object* v_simprocs_2776_ = _args[5];
lean_object* v___x_2777_ = _args[6];
lean_object* v_usingArg_2778_ = _args[7];
lean_object* v___x_2779_ = _args[8];
lean_object* v___x_2780_ = _args[9];
lean_object* v_useReducible_2781_ = _args[10];
lean_object* v___x_2782_ = _args[11];
lean_object* v___f_2783_ = _args[12];
lean_object* v___x_2784_ = _args[13];
lean_object* v___x_2785_ = _args[14];
lean_object* v___x_2786_ = _args[15];
lean_object* v___f_2787_ = _args[16];
lean_object* v_a_2788_ = _args[17];
lean_object* v_usingTk_x3f_2789_ = _args[18];
lean_object* v_discharge_x3f_2790_ = _args[19];
lean_object* v___y_2791_ = _args[20];
lean_object* v___y_2792_ = _args[21];
lean_object* v___y_2793_ = _args[22];
lean_object* v___y_2794_ = _args[23];
lean_object* v___y_2795_ = _args[24];
lean_object* v___y_2796_ = _args[25];
lean_object* v___y_2797_ = _args[26];
lean_object* v___y_2798_ = _args[27];
lean_object* v___y_2799_ = _args[28];
_start:
{
uint8_t v___x_103829__boxed_2800_; uint8_t v___x_103831__boxed_2801_; uint8_t v_useReducible_boxed_2802_; lean_object* v_res_2803_; 
v___x_103829__boxed_2800_ = lean_unbox(v___x_2777_);
v___x_103831__boxed_2801_ = lean_unbox(v___x_2780_);
v_useReducible_boxed_2802_ = lean_unbox(v_useReducible_2781_);
v_res_2803_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7(v___x_2771_, v_tk_2772_, v___x_2773_, v___x_2774_, v___x_2775_, v_simprocs_2776_, v___x_103829__boxed_2800_, v_usingArg_2778_, v___x_2779_, v___x_103831__boxed_2801_, v_useReducible_boxed_2802_, v___x_2782_, v___f_2783_, v___x_2784_, v___x_2785_, v___x_2786_, v___f_2787_, v_a_2788_, v_usingTk_x3f_2789_, v_discharge_x3f_2790_, v___y_2791_, v___y_2792_, v___y_2793_, v___y_2794_, v___y_2795_, v___y_2796_, v___y_2797_, v___y_2798_);
lean_dec(v___y_2798_);
lean_dec_ref(v___y_2797_);
lean_dec(v___y_2796_);
lean_dec_ref(v___y_2795_);
lean_dec(v___y_2794_);
lean_dec_ref(v___y_2793_);
lean_dec(v___y_2792_);
lean_dec_ref(v___y_2791_);
lean_dec(v___x_2771_);
return v_res_2803_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__4(void){
_start:
{
lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; 
v___x_2808_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__3));
v___x_2809_ = lean_unsigned_to_nat(38u);
v___x_2810_ = lean_unsigned_to_nat(159u);
v___x_2811_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__2));
v___x_2812_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__1));
v___x_2813_ = l_mkPanicMessageWithDecl(v___x_2812_, v___x_2811_, v___x_2810_, v___x_2809_, v___x_2808_);
return v___x_2813_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__12(void){
_start:
{
lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; 
v___x_2821_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__3));
v___x_2822_ = lean_unsigned_to_nat(15u);
v___x_2823_ = lean_unsigned_to_nat(160u);
v___x_2824_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__2));
v___x_2825_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__1));
v___x_2826_ = l_mkPanicMessageWithDecl(v___x_2825_, v___x_2824_, v___x_2823_, v___x_2822_, v___x_2821_);
return v___x_2826_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8(lean_object* v_tk_2828_, lean_object* v___x_2829_, lean_object* v___x_2830_, lean_object* v___x_2831_, lean_object* v___x_2832_, lean_object* v___x_2833_, lean_object* v___x_2834_, uint8_t v_useReducible_2835_, lean_object* v___f_2836_, lean_object* v___x_2837_, lean_object* v___x_2838_, lean_object* v___x_2839_, lean_object* v___x_2840_, lean_object* v___x_2841_, lean_object* v___x_2842_, lean_object* v_usingArg_2843_, lean_object* v___x_2844_, uint8_t v___x_2845_, lean_object* v___f_2846_, lean_object* v_usingTk_x3f_2847_, lean_object* v_squeeze_2848_, lean_object* v_unfold_2849_, lean_object* v_args_2850_, lean_object* v_only_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_){
_start:
{
lean_object* v___y_2863_; lean_object* v___y_2867_; lean_object* v_stx_2868_; lean_object* v___y_2869_; lean_object* v_ref_2870_; lean_object* v___y_2871_; lean_object* v___y_2890_; lean_object* v_stx_2891_; lean_object* v___y_2892_; lean_object* v___y_2893_; lean_object* v___y_2896_; lean_object* v___y_2897_; lean_object* v___y_2898_; lean_object* v___y_2899_; lean_object* v___y_2900_; lean_object* v___y_2901_; lean_object* v___y_2902_; lean_object* v___y_2903_; lean_object* v___y_2904_; lean_object* v___x_2916_; 
v___x_2916_ = l_Lean_Elab_Tactic_saveState___redArg(v___y_2854_, v___y_2856_, v___y_2858_, v___y_2860_);
if (lean_obj_tag(v___x_2916_) == 0)
{
lean_object* v_a_2917_; lean_object* v_ref_2918_; uint8_t v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___y_2927_; lean_object* v___y_2928_; lean_object* v___y_2929_; lean_object* v___y_2930_; lean_object* v___y_2931_; lean_object* v___y_2932_; lean_object* v___y_2933_; lean_object* v___y_2934_; lean_object* v___y_2935_; lean_object* v___y_2936_; lean_object* v___y_2937_; lean_object* v___y_2943_; lean_object* v___y_2944_; lean_object* v___y_2945_; lean_object* v___y_2946_; lean_object* v___y_2947_; lean_object* v___y_2948_; lean_object* v___y_2949_; lean_object* v___y_2950_; lean_object* v___y_2951_; lean_object* v___y_2952_; lean_object* v___y_2953_; lean_object* v___y_2962_; lean_object* v___y_2963_; lean_object* v___y_2964_; lean_object* v___y_2965_; lean_object* v___y_2966_; lean_object* v___y_2967_; lean_object* v___y_2968_; lean_object* v___y_2969_; lean_object* v___y_2970_; lean_object* v___y_2971_; lean_object* v___y_2972_; lean_object* v___y_2988_; lean_object* v___y_2989_; lean_object* v___y_2990_; lean_object* v___y_2991_; lean_object* v___y_2992_; lean_object* v___y_2993_; lean_object* v___y_2994_; lean_object* v___y_2995_; lean_object* v___y_2996_; lean_object* v___y_2997_; lean_object* v___y_2998_; lean_object* v___y_3008_; lean_object* v___y_3009_; lean_object* v___y_3010_; lean_object* v___y_3011_; lean_object* v___y_3012_; lean_object* v___y_3013_; lean_object* v___y_3014_; lean_object* v___y_3015_; lean_object* v___y_3016_; lean_object* v___y_3017_; lean_object* v___y_3018_; lean_object* v___y_3019_; lean_object* v___y_3020_; lean_object* v___y_3021_; lean_object* v___y_3029_; lean_object* v___y_3030_; lean_object* v___y_3031_; lean_object* v___y_3032_; lean_object* v___y_3033_; lean_object* v___y_3034_; lean_object* v___y_3035_; lean_object* v___y_3036_; lean_object* v___y_3037_; lean_object* v___y_3038_; lean_object* v___y_3039_; lean_object* v___y_3040_; lean_object* v___y_3041_; lean_object* v___y_3042_; lean_object* v___y_3058_; lean_object* v___y_3059_; lean_object* v___y_3060_; lean_object* v___y_3061_; lean_object* v___y_3062_; lean_object* v___y_3063_; lean_object* v___y_3064_; lean_object* v___y_3065_; lean_object* v___y_3066_; lean_object* v___y_3067_; lean_object* v___y_3068_; lean_object* v___y_3069_; lean_object* v___y_3070_; uint8_t v___y_3071_; lean_object* v___y_3072_; lean_object* v___y_3082_; lean_object* v___y_3083_; lean_object* v___y_3084_; lean_object* v___y_3085_; lean_object* v___y_3086_; lean_object* v___y_3087_; lean_object* v___y_3088_; lean_object* v___y_3089_; lean_object* v___y_3090_; lean_object* v___y_3091_; lean_object* v___y_3092_; lean_object* v___y_3098_; lean_object* v___y_3099_; lean_object* v___y_3100_; lean_object* v___y_3101_; lean_object* v___y_3102_; lean_object* v___y_3103_; lean_object* v___y_3104_; lean_object* v___y_3105_; lean_object* v___y_3106_; lean_object* v___y_3107_; lean_object* v___y_3108_; lean_object* v___y_3117_; lean_object* v___y_3118_; lean_object* v___y_3119_; lean_object* v___y_3120_; lean_object* v___y_3121_; lean_object* v___y_3122_; lean_object* v___y_3123_; lean_object* v___y_3124_; lean_object* v___y_3125_; lean_object* v___y_3126_; lean_object* v___y_3127_; lean_object* v___y_3143_; lean_object* v___y_3144_; lean_object* v___y_3145_; lean_object* v___y_3146_; lean_object* v___y_3147_; lean_object* v___y_3148_; lean_object* v___y_3149_; lean_object* v___y_3150_; lean_object* v___y_3151_; lean_object* v___y_3152_; lean_object* v___y_3153_; lean_object* v___y_3163_; lean_object* v___y_3164_; lean_object* v___y_3165_; lean_object* v___y_3166_; lean_object* v___y_3167_; lean_object* v___y_3168_; lean_object* v___y_3169_; lean_object* v___y_3170_; lean_object* v___y_3171_; lean_object* v___y_3172_; lean_object* v___y_3173_; lean_object* v___y_3174_; lean_object* v___y_3175_; lean_object* v___y_3183_; lean_object* v___y_3184_; lean_object* v___y_3185_; lean_object* v___y_3186_; lean_object* v___y_3187_; lean_object* v___y_3188_; lean_object* v___y_3189_; lean_object* v___y_3190_; lean_object* v___y_3191_; lean_object* v___y_3192_; lean_object* v___y_3193_; lean_object* v___y_3194_; lean_object* v___y_3195_; lean_object* v___y_3211_; lean_object* v___y_3212_; lean_object* v___y_3213_; uint8_t v___y_3214_; lean_object* v___y_3215_; lean_object* v___y_3216_; lean_object* v___y_3217_; lean_object* v___y_3218_; lean_object* v___y_3219_; lean_object* v___y_3220_; lean_object* v___y_3221_; lean_object* v___y_3222_; lean_object* v___y_3223_; lean_object* v___y_3224_; lean_object* v___y_3234_; lean_object* v___y_3235_; lean_object* v___y_3236_; lean_object* v___y_3237_; uint8_t v___y_3238_; lean_object* v___y_3239_; lean_object* v___y_3240_; lean_object* v___y_3241_; lean_object* v___y_3242_; lean_object* v___y_3243_; lean_object* v___y_3244_; lean_object* v___y_3245_; lean_object* v___y_3246_; lean_object* v___y_3247_; uint8_t v___y_3248_; lean_object* v___y_3249_; lean_object* v___y_3330_; lean_object* v___y_3331_; lean_object* v___y_3332_; lean_object* v___y_3333_; lean_object* v___y_3334_; lean_object* v___y_3335_; uint8_t v___y_3336_; lean_object* v_args_3337_; lean_object* v___y_3338_; lean_object* v___y_3339_; lean_object* v___y_3340_; lean_object* v___y_3341_; lean_object* v___y_3342_; lean_object* v___y_3343_; lean_object* v___y_3344_; lean_object* v___y_3345_; lean_object* v___y_3371_; lean_object* v___y_3372_; lean_object* v___y_3373_; lean_object* v___y_3374_; lean_object* v___y_3375_; uint8_t v___y_3376_; lean_object* v_only_3377_; lean_object* v___y_3378_; lean_object* v___y_3379_; lean_object* v___y_3380_; lean_object* v___y_3381_; lean_object* v___y_3382_; lean_object* v___y_3383_; lean_object* v___y_3384_; lean_object* v___y_3385_; lean_object* v___y_3405_; lean_object* v___y_3406_; uint8_t v___y_3407_; lean_object* v___y_3408_; lean_object* v___y_3465_; lean_object* v___y_3466_; uint8_t v___y_3467_; lean_object* v___y_3478_; lean_object* v___y_3479_; lean_object* v___y_3480_; uint8_t v___y_3481_; lean_object* v___y_3482_; lean_object* v___y_3502_; lean_object* v___y_3503_; lean_object* v___y_3504_; lean_object* v___y_3533_; lean_object* v___y_3534_; lean_object* v___y_3547_; 
v_a_2917_ = lean_ctor_get(v___x_2916_, 0);
lean_inc(v_a_2917_);
lean_dec_ref_known(v___x_2916_, 1);
v_ref_2918_ = lean_ctor_get(v___y_2859_, 2);
v___x_2919_ = 0;
v___x_2920_ = l_Lean_SourceInfo_fromRef(v_ref_2918_, v___x_2919_);
v___x_2921_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__0));
lean_inc_ref(v___x_2831_);
lean_inc_ref(v___x_2830_);
lean_inc_ref(v___x_2829_);
v___x_2922_ = l_Lean_Name_mkStr4(v___x_2829_, v___x_2830_, v___x_2831_, v___x_2921_);
lean_inc(v___x_2920_);
v___x_2923_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2923_, 0, v___x_2920_);
lean_ctor_set(v___x_2923_, 1, v___x_2921_);
v___x_2924_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__2));
v___x_2925_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3);
if (lean_obj_tag(v___y_2852_) == 0)
{
lean_object* v___x_3556_; 
v___x_3556_ = lean_mk_empty_array_with_capacity(v___x_2832_);
v___y_3547_ = v___x_3556_;
goto v___jp_3546_;
}
else
{
lean_object* v_val_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; 
v_val_3557_ = lean_ctor_get(v___y_2852_, 0);
lean_inc(v_val_3557_);
lean_dec_ref_known(v___y_2852_, 1);
v___x_3558_ = lean_mk_empty_array_with_capacity(v___x_2832_);
v___x_3559_ = lean_array_push(v___x_3558_, v_val_3557_);
v___y_3547_ = v___x_3559_;
goto v___jp_3546_;
}
v___jp_2926_:
{
lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; 
v___x_2938_ = l_Array_append___redArg(v___x_2925_, v___y_2937_);
lean_dec_ref(v___y_2937_);
lean_inc_n(v___y_2936_, 2);
v___x_2939_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2939_, 0, v___y_2936_);
lean_ctor_set(v___x_2939_, 1, v___x_2924_);
lean_ctor_set(v___x_2939_, 2, v___x_2938_);
v___x_2940_ = l_Lean_Syntax_node5(v___y_2936_, v___x_2833_, v___y_2930_, v___y_2935_, v___y_2932_, v___y_2928_, v___x_2939_);
v___x_2941_ = l_Lean_Syntax_node2(v___y_2936_, v___y_2934_, v___y_2929_, v___x_2940_);
v___y_2890_ = v___y_2933_;
v_stx_2891_ = v___x_2941_;
v___y_2892_ = v___y_2931_;
v___y_2893_ = v___y_2927_;
goto v___jp_2889_;
}
v___jp_2942_:
{
lean_object* v___x_2954_; lean_object* v___x_2955_; 
v___x_2954_ = l_Array_append___redArg(v___x_2925_, v___y_2953_);
lean_dec_ref(v___y_2953_);
lean_inc(v___y_2952_);
v___x_2955_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2955_, 0, v___y_2952_);
lean_ctor_set(v___x_2955_, 1, v___x_2924_);
lean_ctor_set(v___x_2955_, 2, v___x_2954_);
if (lean_obj_tag(v___y_2950_) == 1)
{
lean_object* v_val_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; 
lean_dec(v___x_2832_);
v_val_2956_ = lean_ctor_get(v___y_2950_, 0);
lean_inc(v_val_2956_);
lean_dec_ref_known(v___y_2950_, 1);
v___x_2957_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__5));
lean_inc(v___y_2952_);
v___x_2958_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2958_, 0, v___y_2952_);
lean_ctor_set(v___x_2958_, 1, v___x_2957_);
v___x_2959_ = l_Array_mkArray2___redArg(v___x_2958_, v_val_2956_);
v___y_2927_ = v___y_2943_;
v___y_2928_ = v___x_2955_;
v___y_2929_ = v___y_2945_;
v___y_2930_ = v___y_2944_;
v___y_2931_ = v___y_2947_;
v___y_2932_ = v___y_2946_;
v___y_2933_ = v___y_2948_;
v___y_2934_ = v___y_2949_;
v___y_2935_ = v___y_2951_;
v___y_2936_ = v___y_2952_;
v___y_2937_ = v___x_2959_;
goto v___jp_2926_;
}
else
{
lean_object* v___x_2960_; 
lean_dec(v___y_2950_);
v___x_2960_ = lean_mk_empty_array_with_capacity(v___x_2832_);
lean_dec(v___x_2832_);
v___y_2927_ = v___y_2943_;
v___y_2928_ = v___x_2955_;
v___y_2929_ = v___y_2945_;
v___y_2930_ = v___y_2944_;
v___y_2931_ = v___y_2947_;
v___y_2932_ = v___y_2946_;
v___y_2933_ = v___y_2948_;
v___y_2934_ = v___y_2949_;
v___y_2935_ = v___y_2951_;
v___y_2936_ = v___y_2952_;
v___y_2937_ = v___x_2960_;
goto v___jp_2926_;
}
}
v___jp_2961_:
{
lean_object* v___x_2973_; lean_object* v___x_2974_; 
v___x_2973_ = l_Array_append___redArg(v___x_2925_, v___y_2972_);
lean_dec_ref(v___y_2972_);
lean_inc(v___y_2971_);
v___x_2974_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2974_, 0, v___y_2971_);
lean_ctor_set(v___x_2974_, 1, v___x_2924_);
lean_ctor_set(v___x_2974_, 2, v___x_2973_);
if (lean_obj_tag(v___y_2970_) == 1)
{
lean_object* v_val_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; 
v_val_2975_ = lean_ctor_get(v___y_2970_, 0);
lean_inc(v_val_2975_);
lean_dec_ref_known(v___y_2970_, 1);
v___x_2976_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__12));
v___x_2977_ = l_Lean_Name_mkStr4(v___x_2829_, v___x_2830_, v___x_2831_, v___x_2976_);
v___x_2978_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__4));
lean_inc_n(v___y_2971_, 4);
v___x_2979_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2979_, 0, v___y_2971_);
lean_ctor_set(v___x_2979_, 1, v___x_2978_);
v___x_2980_ = l_Array_append___redArg(v___x_2925_, v_val_2975_);
lean_dec(v_val_2975_);
v___x_2981_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2981_, 0, v___y_2971_);
lean_ctor_set(v___x_2981_, 1, v___x_2924_);
lean_ctor_set(v___x_2981_, 2, v___x_2980_);
v___x_2982_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__5));
v___x_2983_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2983_, 0, v___y_2971_);
lean_ctor_set(v___x_2983_, 1, v___x_2982_);
v___x_2984_ = l_Lean_Syntax_node3(v___y_2971_, v___x_2977_, v___x_2979_, v___x_2981_, v___x_2983_);
v___x_2985_ = l_Array_mkArray1___redArg(v___x_2984_);
v___y_2943_ = v___y_2962_;
v___y_2944_ = v___y_2964_;
v___y_2945_ = v___y_2963_;
v___y_2946_ = v___x_2974_;
v___y_2947_ = v___y_2965_;
v___y_2948_ = v___y_2966_;
v___y_2949_ = v___y_2967_;
v___y_2950_ = v___y_2968_;
v___y_2951_ = v___y_2969_;
v___y_2952_ = v___y_2971_;
v___y_2953_ = v___x_2985_;
goto v___jp_2942_;
}
else
{
lean_object* v___x_2986_; 
lean_dec(v___y_2970_);
lean_dec_ref(v___x_2831_);
lean_dec_ref(v___x_2830_);
lean_dec_ref(v___x_2829_);
v___x_2986_ = lean_mk_empty_array_with_capacity(v___x_2832_);
v___y_2943_ = v___y_2962_;
v___y_2944_ = v___y_2964_;
v___y_2945_ = v___y_2963_;
v___y_2946_ = v___x_2974_;
v___y_2947_ = v___y_2965_;
v___y_2948_ = v___y_2966_;
v___y_2949_ = v___y_2967_;
v___y_2950_ = v___y_2968_;
v___y_2951_ = v___y_2969_;
v___y_2952_ = v___y_2971_;
v___y_2953_ = v___x_2986_;
goto v___jp_2942_;
}
}
v___jp_2987_:
{
lean_object* v___x_2999_; lean_object* v___x_3000_; 
v___x_2999_ = l_Array_append___redArg(v___x_2925_, v___y_2998_);
lean_dec_ref(v___y_2998_);
lean_inc(v___y_2997_);
v___x_3000_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3000_, 0, v___y_2997_);
lean_ctor_set(v___x_3000_, 1, v___x_2924_);
lean_ctor_set(v___x_3000_, 2, v___x_2999_);
if (lean_obj_tag(v___y_2988_) == 1)
{
lean_object* v_val_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; 
v_val_3001_ = lean_ctor_get(v___y_2988_, 0);
lean_inc(v_val_3001_);
lean_dec_ref_known(v___y_2988_, 1);
v___x_3002_ = l_Lean_SourceInfo_fromRef(v_val_3001_, v_useReducible_2835_);
lean_dec(v_val_3001_);
v___x_3003_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__6));
v___x_3004_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3004_, 0, v___x_3002_);
lean_ctor_set(v___x_3004_, 1, v___x_3003_);
v___x_3005_ = l_Array_mkArray1___redArg(v___x_3004_);
v___y_2962_ = v___y_2989_;
v___y_2963_ = v___y_2991_;
v___y_2964_ = v___y_2990_;
v___y_2965_ = v___y_2992_;
v___y_2966_ = v___y_2993_;
v___y_2967_ = v___y_2994_;
v___y_2968_ = v___y_2995_;
v___y_2969_ = v___x_3000_;
v___y_2970_ = v___y_2996_;
v___y_2971_ = v___y_2997_;
v___y_2972_ = v___x_3005_;
goto v___jp_2961_;
}
else
{
lean_object* v___x_3006_; 
lean_dec(v___y_2988_);
v___x_3006_ = lean_mk_empty_array_with_capacity(v___x_2832_);
v___y_2962_ = v___y_2989_;
v___y_2963_ = v___y_2991_;
v___y_2964_ = v___y_2990_;
v___y_2965_ = v___y_2992_;
v___y_2966_ = v___y_2993_;
v___y_2967_ = v___y_2994_;
v___y_2968_ = v___y_2995_;
v___y_2969_ = v___x_3000_;
v___y_2970_ = v___y_2996_;
v___y_2971_ = v___y_2997_;
v___y_2972_ = v___x_3006_;
goto v___jp_2961_;
}
}
v___jp_3007_:
{
lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; 
v___x_3022_ = l_Array_append___redArg(v___x_2925_, v___y_3021_);
lean_dec_ref(v___y_3021_);
lean_inc_n(v___y_3012_, 3);
v___x_3023_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3023_, 0, v___y_3012_);
lean_ctor_set(v___x_3023_, 1, v___x_2924_);
lean_ctor_set(v___x_3023_, 2, v___x_3022_);
v___x_3024_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__6));
v___x_3025_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3025_, 0, v___y_3012_);
lean_ctor_set(v___x_3025_, 1, v___x_3024_);
v___x_3026_ = l_Lean_Syntax_node6(v___y_3012_, v___y_3013_, v___y_3017_, v___y_3015_, v___y_3019_, v___x_3023_, v___x_3025_, v___y_3014_);
v___x_3027_ = l_Lean_Syntax_node4(v___y_3012_, v___y_3016_, v___y_3020_, v___y_3010_, v___y_3009_, v___x_3026_);
v___y_2890_ = v___y_3011_;
v_stx_2891_ = v___x_3027_;
v___y_2892_ = v___y_3018_;
v___y_2893_ = v___y_3008_;
goto v___jp_2889_;
}
v___jp_3028_:
{
lean_object* v___x_3043_; lean_object* v___x_3044_; 
v___x_3043_ = l_Array_append___redArg(v___x_2925_, v___y_3042_);
lean_dec_ref(v___y_3042_);
lean_inc(v___y_3033_);
v___x_3044_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3044_, 0, v___y_3033_);
lean_ctor_set(v___x_3044_, 1, v___x_2924_);
lean_ctor_set(v___x_3044_, 2, v___x_3043_);
if (lean_obj_tag(v___y_3034_) == 1)
{
lean_object* v_val_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; 
lean_dec(v___x_2832_);
v_val_3045_ = lean_ctor_get(v___y_3034_, 0);
lean_inc(v_val_3045_);
lean_dec_ref_known(v___y_3034_, 1);
v___x_3046_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__12));
v___x_3047_ = l_Lean_Name_mkStr4(v___x_2829_, v___x_2830_, v___x_2831_, v___x_3046_);
v___x_3048_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__4));
lean_inc_n(v___y_3033_, 4);
v___x_3049_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3049_, 0, v___y_3033_);
lean_ctor_set(v___x_3049_, 1, v___x_3048_);
v___x_3050_ = l_Array_append___redArg(v___x_2925_, v_val_3045_);
lean_dec(v_val_3045_);
v___x_3051_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3051_, 0, v___y_3033_);
lean_ctor_set(v___x_3051_, 1, v___x_2924_);
lean_ctor_set(v___x_3051_, 2, v___x_3050_);
v___x_3052_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__5));
v___x_3053_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3053_, 0, v___y_3033_);
lean_ctor_set(v___x_3053_, 1, v___x_3052_);
v___x_3054_ = l_Lean_Syntax_node3(v___y_3033_, v___x_3047_, v___x_3049_, v___x_3051_, v___x_3053_);
v___x_3055_ = l_Array_mkArray1___redArg(v___x_3054_);
v___y_3008_ = v___y_3029_;
v___y_3009_ = v___y_3030_;
v___y_3010_ = v___y_3031_;
v___y_3011_ = v___y_3032_;
v___y_3012_ = v___y_3033_;
v___y_3013_ = v___y_3035_;
v___y_3014_ = v___y_3036_;
v___y_3015_ = v___y_3037_;
v___y_3016_ = v___y_3038_;
v___y_3017_ = v___y_3039_;
v___y_3018_ = v___y_3040_;
v___y_3019_ = v___x_3044_;
v___y_3020_ = v___y_3041_;
v___y_3021_ = v___x_3055_;
goto v___jp_3007_;
}
else
{
lean_object* v___x_3056_; 
lean_dec(v___y_3034_);
lean_dec_ref(v___x_2831_);
lean_dec_ref(v___x_2830_);
lean_dec_ref(v___x_2829_);
v___x_3056_ = lean_mk_empty_array_with_capacity(v___x_2832_);
lean_dec(v___x_2832_);
v___y_3008_ = v___y_3029_;
v___y_3009_ = v___y_3030_;
v___y_3010_ = v___y_3031_;
v___y_3011_ = v___y_3032_;
v___y_3012_ = v___y_3033_;
v___y_3013_ = v___y_3035_;
v___y_3014_ = v___y_3036_;
v___y_3015_ = v___y_3037_;
v___y_3016_ = v___y_3038_;
v___y_3017_ = v___y_3039_;
v___y_3018_ = v___y_3040_;
v___y_3019_ = v___x_3044_;
v___y_3020_ = v___y_3041_;
v___y_3021_ = v___x_3056_;
goto v___jp_3007_;
}
}
v___jp_3057_:
{
lean_object* v___x_3073_; lean_object* v___x_3074_; 
v___x_3073_ = l_Array_append___redArg(v___x_2925_, v___y_3072_);
lean_dec_ref(v___y_3072_);
lean_inc(v___y_3062_);
v___x_3074_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3074_, 0, v___y_3062_);
lean_ctor_set(v___x_3074_, 1, v___x_2924_);
lean_ctor_set(v___x_3074_, 2, v___x_3073_);
if (lean_obj_tag(v___y_3064_) == 1)
{
lean_object* v_val_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; 
v_val_3075_ = lean_ctor_get(v___y_3064_, 0);
lean_inc(v_val_3075_);
lean_dec_ref_known(v___y_3064_, 1);
v___x_3076_ = l_Lean_SourceInfo_fromRef(v_val_3075_, v___y_3071_);
lean_dec(v_val_3075_);
v___x_3077_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__6));
v___x_3078_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3078_, 0, v___x_3076_);
lean_ctor_set(v___x_3078_, 1, v___x_3077_);
v___x_3079_ = l_Array_mkArray1___redArg(v___x_3078_);
v___y_3029_ = v___y_3058_;
v___y_3030_ = v___y_3059_;
v___y_3031_ = v___y_3060_;
v___y_3032_ = v___y_3061_;
v___y_3033_ = v___y_3062_;
v___y_3034_ = v___y_3063_;
v___y_3035_ = v___y_3065_;
v___y_3036_ = v___y_3066_;
v___y_3037_ = v___x_3074_;
v___y_3038_ = v___y_3067_;
v___y_3039_ = v___y_3068_;
v___y_3040_ = v___y_3069_;
v___y_3041_ = v___y_3070_;
v___y_3042_ = v___x_3079_;
goto v___jp_3028_;
}
else
{
lean_object* v___x_3080_; 
lean_dec(v___y_3064_);
v___x_3080_ = lean_mk_empty_array_with_capacity(v___x_2832_);
v___y_3029_ = v___y_3058_;
v___y_3030_ = v___y_3059_;
v___y_3031_ = v___y_3060_;
v___y_3032_ = v___y_3061_;
v___y_3033_ = v___y_3062_;
v___y_3034_ = v___y_3063_;
v___y_3035_ = v___y_3065_;
v___y_3036_ = v___y_3066_;
v___y_3037_ = v___x_3074_;
v___y_3038_ = v___y_3067_;
v___y_3039_ = v___y_3068_;
v___y_3040_ = v___y_3069_;
v___y_3041_ = v___y_3070_;
v___y_3042_ = v___x_3080_;
goto v___jp_3028_;
}
}
v___jp_3081_:
{
lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; 
v___x_3093_ = l_Array_append___redArg(v___x_2925_, v___y_3092_);
lean_dec_ref(v___y_3092_);
lean_inc_n(v___y_3083_, 2);
v___x_3094_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3094_, 0, v___y_3083_);
lean_ctor_set(v___x_3094_, 1, v___x_2924_);
lean_ctor_set(v___x_3094_, 2, v___x_3093_);
v___x_3095_ = l_Lean_Syntax_node5(v___y_3083_, v___x_2833_, v___y_3086_, v___y_3084_, v___y_3091_, v___y_3090_, v___x_3094_);
lean_inc(v___y_3089_);
v___x_3096_ = l_Lean_Syntax_node4(v___y_3083_, v___x_2834_, v___y_3085_, v___y_3089_, v___y_3089_, v___x_3095_);
v___y_2890_ = v___y_3088_;
v_stx_2891_ = v___x_3096_;
v___y_2892_ = v___y_3087_;
v___y_2893_ = v___y_3082_;
goto v___jp_2889_;
}
v___jp_3097_:
{
lean_object* v___x_3109_; lean_object* v___x_3110_; 
v___x_3109_ = l_Array_append___redArg(v___x_2925_, v___y_3108_);
lean_dec_ref(v___y_3108_);
lean_inc(v___y_3099_);
v___x_3110_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3110_, 0, v___y_3099_);
lean_ctor_set(v___x_3110_, 1, v___x_2924_);
lean_ctor_set(v___x_3110_, 2, v___x_3109_);
if (lean_obj_tag(v___y_3106_) == 1)
{
lean_object* v_val_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; 
lean_dec(v___x_2832_);
v_val_3111_ = lean_ctor_get(v___y_3106_, 0);
lean_inc(v_val_3111_);
lean_dec_ref_known(v___y_3106_, 1);
v___x_3112_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__5));
lean_inc(v___y_3099_);
v___x_3113_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3113_, 0, v___y_3099_);
lean_ctor_set(v___x_3113_, 1, v___x_3112_);
v___x_3114_ = l_Array_mkArray2___redArg(v___x_3113_, v_val_3111_);
v___y_3082_ = v___y_3098_;
v___y_3083_ = v___y_3099_;
v___y_3084_ = v___y_3100_;
v___y_3085_ = v___y_3102_;
v___y_3086_ = v___y_3101_;
v___y_3087_ = v___y_3103_;
v___y_3088_ = v___y_3104_;
v___y_3089_ = v___y_3105_;
v___y_3090_ = v___x_3110_;
v___y_3091_ = v___y_3107_;
v___y_3092_ = v___x_3114_;
goto v___jp_3081_;
}
else
{
lean_object* v___x_3115_; 
lean_dec(v___y_3106_);
v___x_3115_ = lean_mk_empty_array_with_capacity(v___x_2832_);
lean_dec(v___x_2832_);
v___y_3082_ = v___y_3098_;
v___y_3083_ = v___y_3099_;
v___y_3084_ = v___y_3100_;
v___y_3085_ = v___y_3102_;
v___y_3086_ = v___y_3101_;
v___y_3087_ = v___y_3103_;
v___y_3088_ = v___y_3104_;
v___y_3089_ = v___y_3105_;
v___y_3090_ = v___x_3110_;
v___y_3091_ = v___y_3107_;
v___y_3092_ = v___x_3115_;
goto v___jp_3081_;
}
}
v___jp_3116_:
{
lean_object* v___x_3128_; lean_object* v___x_3129_; 
v___x_3128_ = l_Array_append___redArg(v___x_2925_, v___y_3127_);
lean_dec_ref(v___y_3127_);
lean_inc(v___y_3118_);
v___x_3129_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3129_, 0, v___y_3118_);
lean_ctor_set(v___x_3129_, 1, v___x_2924_);
lean_ctor_set(v___x_3129_, 2, v___x_3128_);
if (lean_obj_tag(v___y_3126_) == 1)
{
lean_object* v_val_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; 
v_val_3130_ = lean_ctor_get(v___y_3126_, 0);
lean_inc(v_val_3130_);
lean_dec_ref_known(v___y_3126_, 1);
v___x_3131_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__12));
v___x_3132_ = l_Lean_Name_mkStr4(v___x_2829_, v___x_2830_, v___x_2831_, v___x_3131_);
v___x_3133_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__4));
lean_inc_n(v___y_3118_, 4);
v___x_3134_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3134_, 0, v___y_3118_);
lean_ctor_set(v___x_3134_, 1, v___x_3133_);
v___x_3135_ = l_Array_append___redArg(v___x_2925_, v_val_3130_);
lean_dec(v_val_3130_);
v___x_3136_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3136_, 0, v___y_3118_);
lean_ctor_set(v___x_3136_, 1, v___x_2924_);
lean_ctor_set(v___x_3136_, 2, v___x_3135_);
v___x_3137_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__5));
v___x_3138_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3138_, 0, v___y_3118_);
lean_ctor_set(v___x_3138_, 1, v___x_3137_);
v___x_3139_ = l_Lean_Syntax_node3(v___y_3118_, v___x_3132_, v___x_3134_, v___x_3136_, v___x_3138_);
v___x_3140_ = l_Array_mkArray1___redArg(v___x_3139_);
v___y_3098_ = v___y_3117_;
v___y_3099_ = v___y_3118_;
v___y_3100_ = v___y_3119_;
v___y_3101_ = v___y_3121_;
v___y_3102_ = v___y_3120_;
v___y_3103_ = v___y_3122_;
v___y_3104_ = v___y_3123_;
v___y_3105_ = v___y_3124_;
v___y_3106_ = v___y_3125_;
v___y_3107_ = v___x_3129_;
v___y_3108_ = v___x_3140_;
goto v___jp_3097_;
}
else
{
lean_object* v___x_3141_; 
lean_dec(v___y_3126_);
lean_dec_ref(v___x_2831_);
lean_dec_ref(v___x_2830_);
lean_dec_ref(v___x_2829_);
v___x_3141_ = lean_mk_empty_array_with_capacity(v___x_2832_);
v___y_3098_ = v___y_3117_;
v___y_3099_ = v___y_3118_;
v___y_3100_ = v___y_3119_;
v___y_3101_ = v___y_3121_;
v___y_3102_ = v___y_3120_;
v___y_3103_ = v___y_3122_;
v___y_3104_ = v___y_3123_;
v___y_3105_ = v___y_3124_;
v___y_3106_ = v___y_3125_;
v___y_3107_ = v___x_3129_;
v___y_3108_ = v___x_3141_;
goto v___jp_3097_;
}
}
v___jp_3142_:
{
lean_object* v___x_3154_; lean_object* v___x_3155_; 
v___x_3154_ = l_Array_append___redArg(v___x_2925_, v___y_3153_);
lean_dec_ref(v___y_3153_);
lean_inc(v___y_3145_);
v___x_3155_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3155_, 0, v___y_3145_);
lean_ctor_set(v___x_3155_, 1, v___x_2924_);
lean_ctor_set(v___x_3155_, 2, v___x_3154_);
if (lean_obj_tag(v___y_3143_) == 1)
{
lean_object* v_val_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; 
v_val_3156_ = lean_ctor_get(v___y_3143_, 0);
lean_inc(v_val_3156_);
lean_dec_ref_known(v___y_3143_, 1);
v___x_3157_ = l_Lean_SourceInfo_fromRef(v_val_3156_, v_useReducible_2835_);
lean_dec(v_val_3156_);
v___x_3158_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__6));
v___x_3159_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3159_, 0, v___x_3157_);
lean_ctor_set(v___x_3159_, 1, v___x_3158_);
v___x_3160_ = l_Array_mkArray1___redArg(v___x_3159_);
v___y_3117_ = v___y_3144_;
v___y_3118_ = v___y_3145_;
v___y_3119_ = v___x_3155_;
v___y_3120_ = v___y_3147_;
v___y_3121_ = v___y_3146_;
v___y_3122_ = v___y_3148_;
v___y_3123_ = v___y_3149_;
v___y_3124_ = v___y_3150_;
v___y_3125_ = v___y_3151_;
v___y_3126_ = v___y_3152_;
v___y_3127_ = v___x_3160_;
goto v___jp_3116_;
}
else
{
lean_object* v___x_3161_; 
lean_dec(v___y_3143_);
v___x_3161_ = lean_mk_empty_array_with_capacity(v___x_2832_);
v___y_3117_ = v___y_3144_;
v___y_3118_ = v___y_3145_;
v___y_3119_ = v___x_3155_;
v___y_3120_ = v___y_3147_;
v___y_3121_ = v___y_3146_;
v___y_3122_ = v___y_3148_;
v___y_3123_ = v___y_3149_;
v___y_3124_ = v___y_3150_;
v___y_3125_ = v___y_3151_;
v___y_3126_ = v___y_3152_;
v___y_3127_ = v___x_3161_;
goto v___jp_3116_;
}
}
v___jp_3162_:
{
lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; 
v___x_3176_ = l_Array_append___redArg(v___x_2925_, v___y_3175_);
lean_dec_ref(v___y_3175_);
lean_inc_n(v___y_3167_, 3);
v___x_3177_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3177_, 0, v___y_3167_);
lean_ctor_set(v___x_3177_, 1, v___x_2924_);
lean_ctor_set(v___x_3177_, 2, v___x_3176_);
v___x_3178_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__6));
v___x_3179_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3179_, 0, v___y_3167_);
lean_ctor_set(v___x_3179_, 1, v___x_3178_);
v___x_3180_ = l_Lean_Syntax_node6(v___y_3167_, v___y_3173_, v___y_3169_, v___y_3172_, v___y_3164_, v___x_3177_, v___x_3179_, v___y_3165_);
lean_inc(v___y_3174_);
v___x_3181_ = l_Lean_Syntax_node4(v___y_3167_, v___y_3168_, v___y_3170_, v___y_3174_, v___y_3174_, v___x_3180_);
v___y_2890_ = v___y_3166_;
v_stx_2891_ = v___x_3181_;
v___y_2892_ = v___y_3171_;
v___y_2893_ = v___y_3163_;
goto v___jp_2889_;
}
v___jp_3182_:
{
lean_object* v___x_3196_; lean_object* v___x_3197_; 
v___x_3196_ = l_Array_append___redArg(v___x_2925_, v___y_3195_);
lean_dec_ref(v___y_3195_);
lean_inc(v___y_3186_);
v___x_3197_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3197_, 0, v___y_3186_);
lean_ctor_set(v___x_3197_, 1, v___x_2924_);
lean_ctor_set(v___x_3197_, 2, v___x_3196_);
if (lean_obj_tag(v___y_3187_) == 1)
{
lean_object* v_val_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; 
lean_dec(v___x_2832_);
v_val_3198_ = lean_ctor_get(v___y_3187_, 0);
lean_inc(v_val_3198_);
lean_dec_ref_known(v___y_3187_, 1);
v___x_3199_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__12));
v___x_3200_ = l_Lean_Name_mkStr4(v___x_2829_, v___x_2830_, v___x_2831_, v___x_3199_);
v___x_3201_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__4));
lean_inc_n(v___y_3186_, 4);
v___x_3202_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3202_, 0, v___y_3186_);
lean_ctor_set(v___x_3202_, 1, v___x_3201_);
v___x_3203_ = l_Array_append___redArg(v___x_2925_, v_val_3198_);
lean_dec(v_val_3198_);
v___x_3204_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3204_, 0, v___y_3186_);
lean_ctor_set(v___x_3204_, 1, v___x_2924_);
lean_ctor_set(v___x_3204_, 2, v___x_3203_);
v___x_3205_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__5));
v___x_3206_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3206_, 0, v___y_3186_);
lean_ctor_set(v___x_3206_, 1, v___x_3205_);
v___x_3207_ = l_Lean_Syntax_node3(v___y_3186_, v___x_3200_, v___x_3202_, v___x_3204_, v___x_3206_);
v___x_3208_ = l_Array_mkArray1___redArg(v___x_3207_);
v___y_3163_ = v___y_3183_;
v___y_3164_ = v___x_3197_;
v___y_3165_ = v___y_3184_;
v___y_3166_ = v___y_3185_;
v___y_3167_ = v___y_3186_;
v___y_3168_ = v___y_3188_;
v___y_3169_ = v___y_3189_;
v___y_3170_ = v___y_3190_;
v___y_3171_ = v___y_3191_;
v___y_3172_ = v___y_3192_;
v___y_3173_ = v___y_3193_;
v___y_3174_ = v___y_3194_;
v___y_3175_ = v___x_3208_;
goto v___jp_3162_;
}
else
{
lean_object* v___x_3209_; 
lean_dec(v___y_3187_);
lean_dec_ref(v___x_2831_);
lean_dec_ref(v___x_2830_);
lean_dec_ref(v___x_2829_);
v___x_3209_ = lean_mk_empty_array_with_capacity(v___x_2832_);
lean_dec(v___x_2832_);
v___y_3163_ = v___y_3183_;
v___y_3164_ = v___x_3197_;
v___y_3165_ = v___y_3184_;
v___y_3166_ = v___y_3185_;
v___y_3167_ = v___y_3186_;
v___y_3168_ = v___y_3188_;
v___y_3169_ = v___y_3189_;
v___y_3170_ = v___y_3190_;
v___y_3171_ = v___y_3191_;
v___y_3172_ = v___y_3192_;
v___y_3173_ = v___y_3193_;
v___y_3174_ = v___y_3194_;
v___y_3175_ = v___x_3209_;
goto v___jp_3162_;
}
}
v___jp_3210_:
{
lean_object* v___x_3225_; lean_object* v___x_3226_; 
v___x_3225_ = l_Array_append___redArg(v___x_2925_, v___y_3224_);
lean_dec_ref(v___y_3224_);
lean_inc(v___y_3215_);
v___x_3226_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3226_, 0, v___y_3215_);
lean_ctor_set(v___x_3226_, 1, v___x_2924_);
lean_ctor_set(v___x_3226_, 2, v___x_3225_);
if (lean_obj_tag(v___y_3217_) == 1)
{
lean_object* v_val_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; 
v_val_3227_ = lean_ctor_get(v___y_3217_, 0);
lean_inc(v_val_3227_);
lean_dec_ref_known(v___y_3217_, 1);
v___x_3228_ = l_Lean_SourceInfo_fromRef(v_val_3227_, v___y_3214_);
lean_dec(v_val_3227_);
v___x_3229_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__6));
v___x_3230_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3230_, 0, v___x_3228_);
lean_ctor_set(v___x_3230_, 1, v___x_3229_);
v___x_3231_ = l_Array_mkArray1___redArg(v___x_3230_);
v___y_3183_ = v___y_3211_;
v___y_3184_ = v___y_3212_;
v___y_3185_ = v___y_3213_;
v___y_3186_ = v___y_3215_;
v___y_3187_ = v___y_3216_;
v___y_3188_ = v___y_3218_;
v___y_3189_ = v___y_3219_;
v___y_3190_ = v___y_3220_;
v___y_3191_ = v___y_3221_;
v___y_3192_ = v___x_3226_;
v___y_3193_ = v___y_3222_;
v___y_3194_ = v___y_3223_;
v___y_3195_ = v___x_3231_;
goto v___jp_3182_;
}
else
{
lean_object* v___x_3232_; 
lean_dec(v___y_3217_);
v___x_3232_ = lean_mk_empty_array_with_capacity(v___x_2832_);
v___y_3183_ = v___y_3211_;
v___y_3184_ = v___y_3212_;
v___y_3185_ = v___y_3213_;
v___y_3186_ = v___y_3215_;
v___y_3187_ = v___y_3216_;
v___y_3188_ = v___y_3218_;
v___y_3189_ = v___y_3219_;
v___y_3190_ = v___y_3220_;
v___y_3191_ = v___y_3221_;
v___y_3192_ = v___x_3226_;
v___y_3193_ = v___y_3222_;
v___y_3194_ = v___y_3223_;
v___y_3195_ = v___x_3232_;
goto v___jp_3182_;
}
}
v___jp_3233_:
{
if (v___y_3248_ == 0)
{
if (v_useReducible_2835_ == 0)
{
lean_dec(v___x_2834_);
lean_dec(v___x_2833_);
if (lean_obj_tag(v___y_3246_) == 0)
{
lean_dec(v___y_3249_);
lean_dec(v___y_3244_);
lean_dec(v___y_3240_);
lean_dec(v___y_3239_);
lean_dec_ref(v___x_2837_);
lean_dec_ref(v___f_2836_);
lean_dec(v___x_2832_);
lean_dec_ref(v___x_2831_);
lean_dec_ref(v___x_2830_);
lean_dec_ref(v___x_2829_);
v___y_2896_ = v___y_3237_;
v___y_2897_ = v___y_3247_;
v___y_2898_ = v___y_3242_;
v___y_2899_ = v___y_3236_;
v___y_2900_ = v___y_3235_;
v___y_2901_ = v___y_3241_;
v___y_2902_ = v___y_3243_;
v___y_2903_ = v___y_3245_;
v___y_2904_ = v___y_3234_;
goto v___jp_2895_;
}
else
{
lean_object* v_val_3250_; lean_object* v___x_3251_; 
v_val_3250_ = lean_ctor_get(v___y_3246_, 0);
lean_inc(v_val_3250_);
lean_dec_ref_known(v___y_3246_, 1);
lean_inc(v___y_3234_);
lean_inc_ref(v___y_3245_);
v___x_3251_ = lean_apply_9(v___f_2836_, v___y_3247_, v___y_3242_, v___y_3236_, v___y_3235_, v___y_3241_, v___y_3243_, v___y_3245_, v___y_3234_, lean_box(0));
if (lean_obj_tag(v___x_3251_) == 0)
{
lean_object* v_a_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; 
v_a_3252_ = lean_ctor_get(v___x_3251_, 0);
lean_inc_n(v_a_3252_, 3);
lean_dec_ref_known(v___x_3251_, 1);
v___x_3253_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__7));
lean_inc_ref_n(v___x_2831_, 2);
lean_inc_ref_n(v___x_2830_, 2);
lean_inc_ref_n(v___x_2829_, 2);
v___x_3254_ = l_Lean_Name_mkStr4(v___x_2829_, v___x_2830_, v___x_2831_, v___x_3253_);
v___x_3255_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3255_, 0, v_a_3252_);
lean_ctor_set(v___x_3255_, 1, v___x_2837_);
v___x_3256_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3256_, 0, v_a_3252_);
lean_ctor_set(v___x_3256_, 1, v___x_2924_);
lean_ctor_set(v___x_3256_, 2, v___x_2925_);
v___x_3257_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__8));
v___x_3258_ = l_Lean_Name_mkStr4(v___x_2829_, v___x_2830_, v___x_2831_, v___x_3257_);
if (lean_obj_tag(v___y_3249_) == 0)
{
lean_object* v___x_3259_; 
v___x_3259_ = lean_mk_empty_array_with_capacity(v___x_2832_);
v___y_3211_ = v___y_3234_;
v___y_3212_ = v_val_3250_;
v___y_3213_ = v___y_3237_;
v___y_3214_ = v___y_3238_;
v___y_3215_ = v_a_3252_;
v___y_3216_ = v___y_3239_;
v___y_3217_ = v___y_3240_;
v___y_3218_ = v___x_3254_;
v___y_3219_ = v___y_3244_;
v___y_3220_ = v___x_3255_;
v___y_3221_ = v___y_3245_;
v___y_3222_ = v___x_3258_;
v___y_3223_ = v___x_3256_;
v___y_3224_ = v___x_3259_;
goto v___jp_3210_;
}
else
{
lean_object* v_val_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; 
v_val_3260_ = lean_ctor_get(v___y_3249_, 0);
lean_inc(v_val_3260_);
lean_dec_ref_known(v___y_3249_, 1);
v___x_3261_ = lean_mk_empty_array_with_capacity(v___x_2832_);
v___x_3262_ = lean_array_push(v___x_3261_, v_val_3260_);
v___y_3211_ = v___y_3234_;
v___y_3212_ = v_val_3250_;
v___y_3213_ = v___y_3237_;
v___y_3214_ = v___y_3238_;
v___y_3215_ = v_a_3252_;
v___y_3216_ = v___y_3239_;
v___y_3217_ = v___y_3240_;
v___y_3218_ = v___x_3254_;
v___y_3219_ = v___y_3244_;
v___y_3220_ = v___x_3255_;
v___y_3221_ = v___y_3245_;
v___y_3222_ = v___x_3258_;
v___y_3223_ = v___x_3256_;
v___y_3224_ = v___x_3262_;
goto v___jp_3210_;
}
}
else
{
lean_object* v_a_3263_; lean_object* v___x_3265_; uint8_t v_isShared_3266_; uint8_t v_isSharedCheck_3270_; 
lean_dec(v_val_3250_);
lean_dec(v___y_3249_);
lean_dec_ref(v___y_3245_);
lean_dec(v___y_3244_);
lean_dec(v___y_3240_);
lean_dec(v___y_3239_);
lean_dec_ref(v___y_3237_);
lean_dec(v___y_3234_);
lean_dec_ref(v___x_2837_);
lean_dec(v___x_2832_);
lean_dec_ref(v___x_2831_);
lean_dec_ref(v___x_2830_);
lean_dec_ref(v___x_2829_);
lean_dec(v_tk_2828_);
v_a_3263_ = lean_ctor_get(v___x_3251_, 0);
v_isSharedCheck_3270_ = !lean_is_exclusive(v___x_3251_);
if (v_isSharedCheck_3270_ == 0)
{
v___x_3265_ = v___x_3251_;
v_isShared_3266_ = v_isSharedCheck_3270_;
goto v_resetjp_3264_;
}
else
{
lean_inc(v_a_3263_);
lean_dec(v___x_3251_);
v___x_3265_ = lean_box(0);
v_isShared_3266_ = v_isSharedCheck_3270_;
goto v_resetjp_3264_;
}
v_resetjp_3264_:
{
lean_object* v___x_3268_; 
if (v_isShared_3266_ == 0)
{
v___x_3268_ = v___x_3265_;
goto v_reusejp_3267_;
}
else
{
lean_object* v_reuseFailAlloc_3269_; 
v_reuseFailAlloc_3269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3269_, 0, v_a_3263_);
v___x_3268_ = v_reuseFailAlloc_3269_;
goto v_reusejp_3267_;
}
v_reusejp_3267_:
{
return v___x_3268_;
}
}
}
}
}
else
{
lean_object* v___x_3271_; 
lean_inc(v___y_3234_);
lean_inc_ref(v___y_3245_);
v___x_3271_ = lean_apply_9(v___f_2836_, v___y_3247_, v___y_3242_, v___y_3236_, v___y_3235_, v___y_3241_, v___y_3243_, v___y_3245_, v___y_3234_, lean_box(0));
if (lean_obj_tag(v___x_3271_) == 0)
{
lean_object* v_a_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; 
v_a_3272_ = lean_ctor_get(v___x_3271_, 0);
lean_inc_n(v_a_3272_, 3);
lean_dec_ref_known(v___x_3271_, 1);
v___x_3273_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3273_, 0, v_a_3272_);
lean_ctor_set(v___x_3273_, 1, v___x_2837_);
v___x_3274_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3274_, 0, v_a_3272_);
lean_ctor_set(v___x_3274_, 1, v___x_2924_);
lean_ctor_set(v___x_3274_, 2, v___x_2925_);
if (lean_obj_tag(v___y_3249_) == 0)
{
lean_object* v___x_3275_; 
v___x_3275_ = lean_mk_empty_array_with_capacity(v___x_2832_);
v___y_3143_ = v___y_3240_;
v___y_3144_ = v___y_3234_;
v___y_3145_ = v_a_3272_;
v___y_3146_ = v___y_3244_;
v___y_3147_ = v___x_3273_;
v___y_3148_ = v___y_3245_;
v___y_3149_ = v___y_3237_;
v___y_3150_ = v___x_3274_;
v___y_3151_ = v___y_3246_;
v___y_3152_ = v___y_3239_;
v___y_3153_ = v___x_3275_;
goto v___jp_3142_;
}
else
{
lean_object* v_val_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; 
v_val_3276_ = lean_ctor_get(v___y_3249_, 0);
lean_inc(v_val_3276_);
lean_dec_ref_known(v___y_3249_, 1);
v___x_3277_ = lean_mk_empty_array_with_capacity(v___x_2832_);
v___x_3278_ = lean_array_push(v___x_3277_, v_val_3276_);
v___y_3143_ = v___y_3240_;
v___y_3144_ = v___y_3234_;
v___y_3145_ = v_a_3272_;
v___y_3146_ = v___y_3244_;
v___y_3147_ = v___x_3273_;
v___y_3148_ = v___y_3245_;
v___y_3149_ = v___y_3237_;
v___y_3150_ = v___x_3274_;
v___y_3151_ = v___y_3246_;
v___y_3152_ = v___y_3239_;
v___y_3153_ = v___x_3278_;
goto v___jp_3142_;
}
}
else
{
lean_object* v_a_3279_; lean_object* v___x_3281_; uint8_t v_isShared_3282_; uint8_t v_isSharedCheck_3286_; 
lean_dec(v___y_3249_);
lean_dec(v___y_3246_);
lean_dec_ref(v___y_3245_);
lean_dec(v___y_3244_);
lean_dec(v___y_3240_);
lean_dec(v___y_3239_);
lean_dec_ref(v___y_3237_);
lean_dec(v___y_3234_);
lean_dec_ref(v___x_2837_);
lean_dec(v___x_2834_);
lean_dec(v___x_2833_);
lean_dec(v___x_2832_);
lean_dec_ref(v___x_2831_);
lean_dec_ref(v___x_2830_);
lean_dec_ref(v___x_2829_);
lean_dec(v_tk_2828_);
v_a_3279_ = lean_ctor_get(v___x_3271_, 0);
v_isSharedCheck_3286_ = !lean_is_exclusive(v___x_3271_);
if (v_isSharedCheck_3286_ == 0)
{
v___x_3281_ = v___x_3271_;
v_isShared_3282_ = v_isSharedCheck_3286_;
goto v_resetjp_3280_;
}
else
{
lean_inc(v_a_3279_);
lean_dec(v___x_3271_);
v___x_3281_ = lean_box(0);
v_isShared_3282_ = v_isSharedCheck_3286_;
goto v_resetjp_3280_;
}
v_resetjp_3280_:
{
lean_object* v___x_3284_; 
if (v_isShared_3282_ == 0)
{
v___x_3284_ = v___x_3281_;
goto v_reusejp_3283_;
}
else
{
lean_object* v_reuseFailAlloc_3285_; 
v_reuseFailAlloc_3285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3285_, 0, v_a_3279_);
v___x_3284_ = v_reuseFailAlloc_3285_;
goto v_reusejp_3283_;
}
v_reusejp_3283_:
{
return v___x_3284_;
}
}
}
}
}
else
{
lean_dec(v___x_2834_);
if (v_useReducible_2835_ == 0)
{
lean_dec(v___x_2833_);
if (lean_obj_tag(v___y_3246_) == 0)
{
lean_dec(v___y_3249_);
lean_dec(v___y_3244_);
lean_dec(v___y_3240_);
lean_dec(v___y_3239_);
lean_dec_ref(v___x_2837_);
lean_dec_ref(v___f_2836_);
lean_dec(v___x_2832_);
lean_dec_ref(v___x_2831_);
lean_dec_ref(v___x_2830_);
lean_dec_ref(v___x_2829_);
v___y_2896_ = v___y_3237_;
v___y_2897_ = v___y_3247_;
v___y_2898_ = v___y_3242_;
v___y_2899_ = v___y_3236_;
v___y_2900_ = v___y_3235_;
v___y_2901_ = v___y_3241_;
v___y_2902_ = v___y_3243_;
v___y_2903_ = v___y_3245_;
v___y_2904_ = v___y_3234_;
goto v___jp_2895_;
}
else
{
lean_object* v_val_3287_; lean_object* v___x_3288_; 
v_val_3287_ = lean_ctor_get(v___y_3246_, 0);
lean_inc(v_val_3287_);
lean_dec_ref_known(v___y_3246_, 1);
lean_inc(v___y_3234_);
lean_inc_ref(v___y_3245_);
v___x_3288_ = lean_apply_9(v___f_2836_, v___y_3247_, v___y_3242_, v___y_3236_, v___y_3235_, v___y_3241_, v___y_3243_, v___y_3245_, v___y_3234_, lean_box(0));
if (lean_obj_tag(v___x_3288_) == 0)
{
lean_object* v_a_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; 
v_a_3289_ = lean_ctor_get(v___x_3288_, 0);
lean_inc_n(v_a_3289_, 5);
lean_dec_ref_known(v___x_3288_, 1);
v___x_3290_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__7));
lean_inc_ref_n(v___x_2831_, 2);
lean_inc_ref_n(v___x_2830_, 2);
lean_inc_ref_n(v___x_2829_, 2);
v___x_3291_ = l_Lean_Name_mkStr4(v___x_2829_, v___x_2830_, v___x_2831_, v___x_3290_);
v___x_3292_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3292_, 0, v_a_3289_);
lean_ctor_set(v___x_3292_, 1, v___x_2837_);
v___x_3293_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3293_, 0, v_a_3289_);
lean_ctor_set(v___x_3293_, 1, v___x_2924_);
lean_ctor_set(v___x_3293_, 2, v___x_2925_);
v___x_3294_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__9));
v___x_3295_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3295_, 0, v_a_3289_);
lean_ctor_set(v___x_3295_, 1, v___x_3294_);
v___x_3296_ = l_Lean_Syntax_node1(v_a_3289_, v___x_2924_, v___x_3295_);
v___x_3297_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__8));
v___x_3298_ = l_Lean_Name_mkStr4(v___x_2829_, v___x_2830_, v___x_2831_, v___x_3297_);
if (lean_obj_tag(v___y_3249_) == 0)
{
lean_object* v___x_3299_; 
v___x_3299_ = lean_mk_empty_array_with_capacity(v___x_2832_);
v___y_3058_ = v___y_3234_;
v___y_3059_ = v___x_3296_;
v___y_3060_ = v___x_3293_;
v___y_3061_ = v___y_3237_;
v___y_3062_ = v_a_3289_;
v___y_3063_ = v___y_3239_;
v___y_3064_ = v___y_3240_;
v___y_3065_ = v___x_3298_;
v___y_3066_ = v_val_3287_;
v___y_3067_ = v___x_3291_;
v___y_3068_ = v___y_3244_;
v___y_3069_ = v___y_3245_;
v___y_3070_ = v___x_3292_;
v___y_3071_ = v___y_3248_;
v___y_3072_ = v___x_3299_;
goto v___jp_3057_;
}
else
{
lean_object* v_val_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; 
v_val_3300_ = lean_ctor_get(v___y_3249_, 0);
lean_inc(v_val_3300_);
lean_dec_ref_known(v___y_3249_, 1);
v___x_3301_ = lean_mk_empty_array_with_capacity(v___x_2832_);
v___x_3302_ = lean_array_push(v___x_3301_, v_val_3300_);
v___y_3058_ = v___y_3234_;
v___y_3059_ = v___x_3296_;
v___y_3060_ = v___x_3293_;
v___y_3061_ = v___y_3237_;
v___y_3062_ = v_a_3289_;
v___y_3063_ = v___y_3239_;
v___y_3064_ = v___y_3240_;
v___y_3065_ = v___x_3298_;
v___y_3066_ = v_val_3287_;
v___y_3067_ = v___x_3291_;
v___y_3068_ = v___y_3244_;
v___y_3069_ = v___y_3245_;
v___y_3070_ = v___x_3292_;
v___y_3071_ = v___y_3248_;
v___y_3072_ = v___x_3302_;
goto v___jp_3057_;
}
}
else
{
lean_object* v_a_3303_; lean_object* v___x_3305_; uint8_t v_isShared_3306_; uint8_t v_isSharedCheck_3310_; 
lean_dec(v_val_3287_);
lean_dec(v___y_3249_);
lean_dec_ref(v___y_3245_);
lean_dec(v___y_3244_);
lean_dec(v___y_3240_);
lean_dec(v___y_3239_);
lean_dec_ref(v___y_3237_);
lean_dec(v___y_3234_);
lean_dec_ref(v___x_2837_);
lean_dec(v___x_2832_);
lean_dec_ref(v___x_2831_);
lean_dec_ref(v___x_2830_);
lean_dec_ref(v___x_2829_);
lean_dec(v_tk_2828_);
v_a_3303_ = lean_ctor_get(v___x_3288_, 0);
v_isSharedCheck_3310_ = !lean_is_exclusive(v___x_3288_);
if (v_isSharedCheck_3310_ == 0)
{
v___x_3305_ = v___x_3288_;
v_isShared_3306_ = v_isSharedCheck_3310_;
goto v_resetjp_3304_;
}
else
{
lean_inc(v_a_3303_);
lean_dec(v___x_3288_);
v___x_3305_ = lean_box(0);
v_isShared_3306_ = v_isSharedCheck_3310_;
goto v_resetjp_3304_;
}
v_resetjp_3304_:
{
lean_object* v___x_3308_; 
if (v_isShared_3306_ == 0)
{
v___x_3308_ = v___x_3305_;
goto v_reusejp_3307_;
}
else
{
lean_object* v_reuseFailAlloc_3309_; 
v_reuseFailAlloc_3309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3309_, 0, v_a_3303_);
v___x_3308_ = v_reuseFailAlloc_3309_;
goto v_reusejp_3307_;
}
v_reusejp_3307_:
{
return v___x_3308_;
}
}
}
}
}
else
{
lean_object* v___x_3311_; 
lean_dec_ref(v___x_2837_);
lean_inc(v___y_3234_);
lean_inc_ref(v___y_3245_);
v___x_3311_ = lean_apply_9(v___f_2836_, v___y_3247_, v___y_3242_, v___y_3236_, v___y_3235_, v___y_3241_, v___y_3243_, v___y_3245_, v___y_3234_, lean_box(0));
if (lean_obj_tag(v___x_3311_) == 0)
{
lean_object* v_a_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; 
v_a_3312_ = lean_ctor_get(v___x_3311_, 0);
lean_inc_n(v_a_3312_, 2);
lean_dec_ref_known(v___x_3311_, 1);
v___x_3313_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__10));
lean_inc_ref(v___x_2831_);
lean_inc_ref(v___x_2830_);
lean_inc_ref(v___x_2829_);
v___x_3314_ = l_Lean_Name_mkStr4(v___x_2829_, v___x_2830_, v___x_2831_, v___x_3313_);
v___x_3315_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__11));
v___x_3316_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3316_, 0, v_a_3312_);
lean_ctor_set(v___x_3316_, 1, v___x_3315_);
if (lean_obj_tag(v___y_3249_) == 0)
{
lean_object* v___x_3317_; 
v___x_3317_ = lean_mk_empty_array_with_capacity(v___x_2832_);
v___y_2988_ = v___y_3240_;
v___y_2989_ = v___y_3234_;
v___y_2990_ = v___y_3244_;
v___y_2991_ = v___x_3316_;
v___y_2992_ = v___y_3245_;
v___y_2993_ = v___y_3237_;
v___y_2994_ = v___x_3314_;
v___y_2995_ = v___y_3246_;
v___y_2996_ = v___y_3239_;
v___y_2997_ = v_a_3312_;
v___y_2998_ = v___x_3317_;
goto v___jp_2987_;
}
else
{
lean_object* v_val_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; 
v_val_3318_ = lean_ctor_get(v___y_3249_, 0);
lean_inc(v_val_3318_);
lean_dec_ref_known(v___y_3249_, 1);
v___x_3319_ = lean_mk_empty_array_with_capacity(v___x_2832_);
v___x_3320_ = lean_array_push(v___x_3319_, v_val_3318_);
v___y_2988_ = v___y_3240_;
v___y_2989_ = v___y_3234_;
v___y_2990_ = v___y_3244_;
v___y_2991_ = v___x_3316_;
v___y_2992_ = v___y_3245_;
v___y_2993_ = v___y_3237_;
v___y_2994_ = v___x_3314_;
v___y_2995_ = v___y_3246_;
v___y_2996_ = v___y_3239_;
v___y_2997_ = v_a_3312_;
v___y_2998_ = v___x_3320_;
goto v___jp_2987_;
}
}
else
{
lean_object* v_a_3321_; lean_object* v___x_3323_; uint8_t v_isShared_3324_; uint8_t v_isSharedCheck_3328_; 
lean_dec(v___y_3249_);
lean_dec(v___y_3246_);
lean_dec_ref(v___y_3245_);
lean_dec(v___y_3244_);
lean_dec(v___y_3240_);
lean_dec(v___y_3239_);
lean_dec_ref(v___y_3237_);
lean_dec(v___y_3234_);
lean_dec(v___x_2833_);
lean_dec(v___x_2832_);
lean_dec_ref(v___x_2831_);
lean_dec_ref(v___x_2830_);
lean_dec_ref(v___x_2829_);
lean_dec(v_tk_2828_);
v_a_3321_ = lean_ctor_get(v___x_3311_, 0);
v_isSharedCheck_3328_ = !lean_is_exclusive(v___x_3311_);
if (v_isSharedCheck_3328_ == 0)
{
v___x_3323_ = v___x_3311_;
v_isShared_3324_ = v_isSharedCheck_3328_;
goto v_resetjp_3322_;
}
else
{
lean_inc(v_a_3321_);
lean_dec(v___x_3311_);
v___x_3323_ = lean_box(0);
v_isShared_3324_ = v_isSharedCheck_3328_;
goto v_resetjp_3322_;
}
v_resetjp_3322_:
{
lean_object* v___x_3326_; 
if (v_isShared_3324_ == 0)
{
v___x_3326_ = v___x_3323_;
goto v_reusejp_3325_;
}
else
{
lean_object* v_reuseFailAlloc_3327_; 
v_reuseFailAlloc_3327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3327_, 0, v_a_3321_);
v___x_3326_ = v_reuseFailAlloc_3327_;
goto v_reusejp_3325_;
}
v_reusejp_3325_:
{
return v___x_3326_;
}
}
}
}
}
}
v___jp_3329_:
{
lean_object* v___x_3346_; lean_object* v___x_3347_; uint8_t v___x_3348_; 
v___x_3346_ = lean_unsigned_to_nat(5u);
v___x_3347_ = l_Lean_Syntax_getArg(v___y_3334_, v___x_3346_);
lean_dec(v___y_3334_);
v___x_3348_ = l_Lean_Syntax_matchesNull(v___x_3347_, v___x_2832_);
if (v___x_3348_ == 0)
{
lean_object* v___x_3349_; lean_object* v___x_3350_; 
lean_dec(v_args_3337_);
lean_dec(v___y_3335_);
lean_dec(v___y_3332_);
lean_dec(v___y_3331_);
lean_dec(v___y_3330_);
lean_dec_ref(v___x_2837_);
lean_dec_ref(v___f_2836_);
lean_dec(v___x_2834_);
lean_dec(v___x_2833_);
lean_dec(v___x_2832_);
lean_dec_ref(v___x_2831_);
lean_dec_ref(v___x_2830_);
lean_dec_ref(v___x_2829_);
v___x_3349_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__12, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__12_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__12);
v___x_3350_ = l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8(v___x_3349_, v___y_3338_, v___y_3339_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_, v___y_3345_);
lean_dec(v___y_3343_);
lean_dec_ref(v___y_3342_);
lean_dec(v___y_3341_);
lean_dec_ref(v___y_3340_);
lean_dec(v___y_3339_);
lean_dec_ref(v___y_3338_);
if (lean_obj_tag(v___x_3350_) == 0)
{
lean_object* v_a_3351_; 
v_a_3351_ = lean_ctor_get(v___x_3350_, 0);
lean_inc(v_a_3351_);
lean_dec_ref_known(v___x_3350_, 1);
v___y_2890_ = v___y_3333_;
v_stx_2891_ = v_a_3351_;
v___y_2892_ = v___y_3344_;
v___y_2893_ = v___y_3345_;
goto v___jp_2889_;
}
else
{
lean_object* v_a_3352_; lean_object* v___x_3354_; uint8_t v_isShared_3355_; uint8_t v_isSharedCheck_3359_; 
lean_dec(v___y_3345_);
lean_dec_ref(v___y_3344_);
lean_dec_ref(v___y_3333_);
lean_dec(v_tk_2828_);
v_a_3352_ = lean_ctor_get(v___x_3350_, 0);
v_isSharedCheck_3359_ = !lean_is_exclusive(v___x_3350_);
if (v_isSharedCheck_3359_ == 0)
{
v___x_3354_ = v___x_3350_;
v_isShared_3355_ = v_isSharedCheck_3359_;
goto v_resetjp_3353_;
}
else
{
lean_inc(v_a_3352_);
lean_dec(v___x_3350_);
v___x_3354_ = lean_box(0);
v_isShared_3355_ = v_isSharedCheck_3359_;
goto v_resetjp_3353_;
}
v_resetjp_3353_:
{
lean_object* v___x_3357_; 
if (v_isShared_3355_ == 0)
{
v___x_3357_ = v___x_3354_;
goto v_reusejp_3356_;
}
else
{
lean_object* v_reuseFailAlloc_3358_; 
v_reuseFailAlloc_3358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3358_, 0, v_a_3352_);
v___x_3357_ = v_reuseFailAlloc_3358_;
goto v_reusejp_3356_;
}
v_reusejp_3356_:
{
return v___x_3357_;
}
}
}
}
else
{
lean_object* v___x_3360_; 
v___x_3360_ = l_Lean_Syntax_getOptional_x3f(v___y_3331_);
lean_dec(v___y_3331_);
if (lean_obj_tag(v___x_3360_) == 0)
{
lean_object* v___x_3361_; 
v___x_3361_ = lean_box(0);
v___y_3234_ = v___y_3345_;
v___y_3235_ = v___y_3341_;
v___y_3236_ = v___y_3340_;
v___y_3237_ = v___y_3333_;
v___y_3238_ = v___x_3348_;
v___y_3239_ = v_args_3337_;
v___y_3240_ = v___y_3330_;
v___y_3241_ = v___y_3342_;
v___y_3242_ = v___y_3339_;
v___y_3243_ = v___y_3343_;
v___y_3244_ = v___y_3332_;
v___y_3245_ = v___y_3344_;
v___y_3246_ = v___y_3335_;
v___y_3247_ = v___y_3338_;
v___y_3248_ = v___y_3336_;
v___y_3249_ = v___x_3361_;
goto v___jp_3233_;
}
else
{
lean_object* v_val_3362_; lean_object* v___x_3364_; uint8_t v_isShared_3365_; uint8_t v_isSharedCheck_3369_; 
v_val_3362_ = lean_ctor_get(v___x_3360_, 0);
v_isSharedCheck_3369_ = !lean_is_exclusive(v___x_3360_);
if (v_isSharedCheck_3369_ == 0)
{
v___x_3364_ = v___x_3360_;
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
else
{
lean_inc(v_val_3362_);
lean_dec(v___x_3360_);
v___x_3364_ = lean_box(0);
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
v_resetjp_3363_:
{
lean_object* v___x_3367_; 
if (v_isShared_3365_ == 0)
{
v___x_3367_ = v___x_3364_;
goto v_reusejp_3366_;
}
else
{
lean_object* v_reuseFailAlloc_3368_; 
v_reuseFailAlloc_3368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3368_, 0, v_val_3362_);
v___x_3367_ = v_reuseFailAlloc_3368_;
goto v_reusejp_3366_;
}
v_reusejp_3366_:
{
v___y_3234_ = v___y_3345_;
v___y_3235_ = v___y_3341_;
v___y_3236_ = v___y_3340_;
v___y_3237_ = v___y_3333_;
v___y_3238_ = v___x_3348_;
v___y_3239_ = v_args_3337_;
v___y_3240_ = v___y_3330_;
v___y_3241_ = v___y_3342_;
v___y_3242_ = v___y_3339_;
v___y_3243_ = v___y_3343_;
v___y_3244_ = v___y_3332_;
v___y_3245_ = v___y_3344_;
v___y_3246_ = v___y_3335_;
v___y_3247_ = v___y_3338_;
v___y_3248_ = v___y_3336_;
v___y_3249_ = v___x_3367_;
goto v___jp_3233_;
}
}
}
}
}
v___jp_3370_:
{
lean_object* v___x_3386_; uint8_t v___x_3387_; 
v___x_3386_ = l_Lean_Syntax_getArg(v___y_3374_, v___x_2838_);
v___x_3387_ = l_Lean_Syntax_isNone(v___x_3386_);
if (v___x_3387_ == 0)
{
uint8_t v___x_3388_; 
lean_inc(v___x_3386_);
v___x_3388_ = l_Lean_Syntax_matchesNull(v___x_3386_, v___x_2839_);
if (v___x_3388_ == 0)
{
lean_object* v___x_3389_; lean_object* v___x_3390_; 
lean_dec(v___x_3386_);
lean_dec(v_only_3377_);
lean_dec(v___y_3375_);
lean_dec(v___y_3374_);
lean_dec(v___y_3372_);
lean_dec(v___y_3371_);
lean_dec(v___x_2840_);
lean_dec_ref(v___x_2837_);
lean_dec_ref(v___f_2836_);
lean_dec(v___x_2834_);
lean_dec(v___x_2833_);
lean_dec(v___x_2832_);
lean_dec_ref(v___x_2831_);
lean_dec_ref(v___x_2830_);
lean_dec_ref(v___x_2829_);
v___x_3389_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__12, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__12_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__12);
v___x_3390_ = l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8(v___x_3389_, v___y_3378_, v___y_3379_, v___y_3380_, v___y_3381_, v___y_3382_, v___y_3383_, v___y_3384_, v___y_3385_);
lean_dec(v___y_3383_);
lean_dec_ref(v___y_3382_);
lean_dec(v___y_3381_);
lean_dec_ref(v___y_3380_);
lean_dec(v___y_3379_);
lean_dec_ref(v___y_3378_);
if (lean_obj_tag(v___x_3390_) == 0)
{
lean_object* v_a_3391_; 
v_a_3391_ = lean_ctor_get(v___x_3390_, 0);
lean_inc(v_a_3391_);
lean_dec_ref_known(v___x_3390_, 1);
v___y_2890_ = v___y_3373_;
v_stx_2891_ = v_a_3391_;
v___y_2892_ = v___y_3384_;
v___y_2893_ = v___y_3385_;
goto v___jp_2889_;
}
else
{
lean_object* v_a_3392_; lean_object* v___x_3394_; uint8_t v_isShared_3395_; uint8_t v_isSharedCheck_3399_; 
lean_dec(v___y_3385_);
lean_dec_ref(v___y_3384_);
lean_dec_ref(v___y_3373_);
lean_dec(v_tk_2828_);
v_a_3392_ = lean_ctor_get(v___x_3390_, 0);
v_isSharedCheck_3399_ = !lean_is_exclusive(v___x_3390_);
if (v_isSharedCheck_3399_ == 0)
{
v___x_3394_ = v___x_3390_;
v_isShared_3395_ = v_isSharedCheck_3399_;
goto v_resetjp_3393_;
}
else
{
lean_inc(v_a_3392_);
lean_dec(v___x_3390_);
v___x_3394_ = lean_box(0);
v_isShared_3395_ = v_isSharedCheck_3399_;
goto v_resetjp_3393_;
}
v_resetjp_3393_:
{
lean_object* v___x_3397_; 
if (v_isShared_3395_ == 0)
{
v___x_3397_ = v___x_3394_;
goto v_reusejp_3396_;
}
else
{
lean_object* v_reuseFailAlloc_3398_; 
v_reuseFailAlloc_3398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3398_, 0, v_a_3392_);
v___x_3397_ = v_reuseFailAlloc_3398_;
goto v_reusejp_3396_;
}
v_reusejp_3396_:
{
return v___x_3397_;
}
}
}
}
else
{
lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; 
v___x_3400_ = l_Lean_Syntax_getArg(v___x_3386_, v___x_2840_);
lean_dec(v___x_2840_);
lean_dec(v___x_3386_);
v___x_3401_ = l_Lean_Syntax_getArgs(v___x_3400_);
lean_dec(v___x_3400_);
v___x_3402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3402_, 0, v___x_3401_);
v___y_3330_ = v_only_3377_;
v___y_3331_ = v___y_3371_;
v___y_3332_ = v___y_3372_;
v___y_3333_ = v___y_3373_;
v___y_3334_ = v___y_3374_;
v___y_3335_ = v___y_3375_;
v___y_3336_ = v___y_3376_;
v_args_3337_ = v___x_3402_;
v___y_3338_ = v___y_3378_;
v___y_3339_ = v___y_3379_;
v___y_3340_ = v___y_3380_;
v___y_3341_ = v___y_3381_;
v___y_3342_ = v___y_3382_;
v___y_3343_ = v___y_3383_;
v___y_3344_ = v___y_3384_;
v___y_3345_ = v___y_3385_;
goto v___jp_3329_;
}
}
else
{
lean_object* v___x_3403_; 
lean_dec(v___x_3386_);
lean_dec(v___x_2840_);
v___x_3403_ = lean_box(0);
v___y_3330_ = v_only_3377_;
v___y_3331_ = v___y_3371_;
v___y_3332_ = v___y_3372_;
v___y_3333_ = v___y_3373_;
v___y_3334_ = v___y_3374_;
v___y_3335_ = v___y_3375_;
v___y_3336_ = v___y_3376_;
v_args_3337_ = v___x_3403_;
v___y_3338_ = v___y_3378_;
v___y_3339_ = v___y_3379_;
v___y_3340_ = v___y_3380_;
v___y_3341_ = v___y_3381_;
v___y_3342_ = v___y_3382_;
v___y_3343_ = v___y_3383_;
v___y_3344_ = v___y_3384_;
v___y_3345_ = v___y_3385_;
goto v___jp_3329_;
}
}
v___jp_3404_:
{
lean_object* v_usedTheorems_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; 
v_usedTheorems_3409_ = lean_ctor_get(v___y_3406_, 0);
v___x_3410_ = l_Lean_Syntax_unsetTrailing(v___y_3405_);
v___x_3411_ = l_Lean_Elab_Tactic_mkSimpOnly(v___x_3410_, v_usedTheorems_3409_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
if (lean_obj_tag(v___x_3411_) == 0)
{
lean_object* v_a_3412_; uint8_t v___x_3413_; 
v_a_3412_ = lean_ctor_get(v___x_3411_, 0);
lean_inc_n(v_a_3412_, 2);
lean_dec_ref_known(v___x_3411_, 1);
v___x_3413_ = l_Lean_Syntax_isOfKind(v_a_3412_, v___x_2922_);
lean_dec(v___x_2922_);
if (v___x_3413_ == 0)
{
lean_object* v___x_3414_; lean_object* v___x_3415_; 
lean_inc(v_ref_2918_);
lean_dec(v_a_3412_);
lean_dec(v___y_3408_);
lean_dec(v___x_2842_);
lean_dec(v___x_2840_);
lean_dec_ref(v___x_2837_);
lean_dec_ref(v___f_2836_);
lean_dec(v___x_2834_);
lean_dec(v___x_2833_);
lean_dec(v___x_2832_);
lean_dec_ref(v___x_2831_);
lean_dec_ref(v___x_2830_);
lean_dec_ref(v___x_2829_);
v___x_3414_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__12, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__12_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__12);
v___x_3415_ = l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8(v___x_3414_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
lean_dec(v___y_2858_);
lean_dec_ref(v___y_2857_);
lean_dec(v___y_2856_);
lean_dec_ref(v___y_2855_);
lean_dec(v___y_2854_);
lean_dec_ref(v___y_2853_);
if (lean_obj_tag(v___x_3415_) == 0)
{
lean_object* v_a_3416_; 
v_a_3416_ = lean_ctor_get(v___x_3415_, 0);
lean_inc(v_a_3416_);
lean_dec_ref_known(v___x_3415_, 1);
v___y_2867_ = v___y_3406_;
v_stx_2868_ = v_a_3416_;
v___y_2869_ = v___y_2859_;
v_ref_2870_ = v_ref_2918_;
v___y_2871_ = v___y_2860_;
goto v___jp_2866_;
}
else
{
lean_object* v_a_3417_; lean_object* v___x_3419_; uint8_t v_isShared_3420_; uint8_t v_isSharedCheck_3424_; 
lean_dec_ref(v___y_3406_);
lean_dec(v_ref_2918_);
lean_dec(v___y_2860_);
lean_dec_ref(v___y_2859_);
lean_dec(v_tk_2828_);
v_a_3417_ = lean_ctor_get(v___x_3415_, 0);
v_isSharedCheck_3424_ = !lean_is_exclusive(v___x_3415_);
if (v_isSharedCheck_3424_ == 0)
{
v___x_3419_ = v___x_3415_;
v_isShared_3420_ = v_isSharedCheck_3424_;
goto v_resetjp_3418_;
}
else
{
lean_inc(v_a_3417_);
lean_dec(v___x_3415_);
v___x_3419_ = lean_box(0);
v_isShared_3420_ = v_isSharedCheck_3424_;
goto v_resetjp_3418_;
}
v_resetjp_3418_:
{
lean_object* v___x_3422_; 
if (v_isShared_3420_ == 0)
{
v___x_3422_ = v___x_3419_;
goto v_reusejp_3421_;
}
else
{
lean_object* v_reuseFailAlloc_3423_; 
v_reuseFailAlloc_3423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3423_, 0, v_a_3417_);
v___x_3422_ = v_reuseFailAlloc_3423_;
goto v_reusejp_3421_;
}
v_reusejp_3421_:
{
return v___x_3422_;
}
}
}
}
else
{
lean_object* v___x_3425_; uint8_t v___x_3426_; 
v___x_3425_ = l_Lean_Syntax_getArg(v_a_3412_, v___x_2840_);
lean_inc(v___x_3425_);
v___x_3426_ = l_Lean_Syntax_isOfKind(v___x_3425_, v___x_2841_);
if (v___x_3426_ == 0)
{
lean_object* v___x_3427_; lean_object* v___x_3428_; 
lean_inc(v_ref_2918_);
lean_dec(v___x_3425_);
lean_dec(v_a_3412_);
lean_dec(v___y_3408_);
lean_dec(v___x_2842_);
lean_dec(v___x_2840_);
lean_dec_ref(v___x_2837_);
lean_dec_ref(v___f_2836_);
lean_dec(v___x_2834_);
lean_dec(v___x_2833_);
lean_dec(v___x_2832_);
lean_dec_ref(v___x_2831_);
lean_dec_ref(v___x_2830_);
lean_dec_ref(v___x_2829_);
v___x_3427_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__12, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__12_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__12);
v___x_3428_ = l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8(v___x_3427_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
lean_dec(v___y_2858_);
lean_dec_ref(v___y_2857_);
lean_dec(v___y_2856_);
lean_dec_ref(v___y_2855_);
lean_dec(v___y_2854_);
lean_dec_ref(v___y_2853_);
if (lean_obj_tag(v___x_3428_) == 0)
{
lean_object* v_a_3429_; 
v_a_3429_ = lean_ctor_get(v___x_3428_, 0);
lean_inc(v_a_3429_);
lean_dec_ref_known(v___x_3428_, 1);
v___y_2867_ = v___y_3406_;
v_stx_2868_ = v_a_3429_;
v___y_2869_ = v___y_2859_;
v_ref_2870_ = v_ref_2918_;
v___y_2871_ = v___y_2860_;
goto v___jp_2866_;
}
else
{
lean_object* v_a_3430_; lean_object* v___x_3432_; uint8_t v_isShared_3433_; uint8_t v_isSharedCheck_3437_; 
lean_dec_ref(v___y_3406_);
lean_dec(v_ref_2918_);
lean_dec(v___y_2860_);
lean_dec_ref(v___y_2859_);
lean_dec(v_tk_2828_);
v_a_3430_ = lean_ctor_get(v___x_3428_, 0);
v_isSharedCheck_3437_ = !lean_is_exclusive(v___x_3428_);
if (v_isSharedCheck_3437_ == 0)
{
v___x_3432_ = v___x_3428_;
v_isShared_3433_ = v_isSharedCheck_3437_;
goto v_resetjp_3431_;
}
else
{
lean_inc(v_a_3430_);
lean_dec(v___x_3428_);
v___x_3432_ = lean_box(0);
v_isShared_3433_ = v_isSharedCheck_3437_;
goto v_resetjp_3431_;
}
v_resetjp_3431_:
{
lean_object* v___x_3435_; 
if (v_isShared_3433_ == 0)
{
v___x_3435_ = v___x_3432_;
goto v_reusejp_3434_;
}
else
{
lean_object* v_reuseFailAlloc_3436_; 
v_reuseFailAlloc_3436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3436_, 0, v_a_3430_);
v___x_3435_ = v_reuseFailAlloc_3436_;
goto v_reusejp_3434_;
}
v_reusejp_3434_:
{
return v___x_3435_;
}
}
}
}
else
{
lean_object* v___x_3438_; lean_object* v___x_3439_; uint8_t v___x_3440_; 
v___x_3438_ = l_Lean_Syntax_getArg(v_a_3412_, v___x_2842_);
lean_dec(v___x_2842_);
v___x_3439_ = l_Lean_Syntax_getArg(v_a_3412_, v___x_2839_);
v___x_3440_ = l_Lean_Syntax_isNone(v___x_3439_);
if (v___x_3440_ == 0)
{
uint8_t v___x_3441_; 
lean_inc(v___x_3439_);
v___x_3441_ = l_Lean_Syntax_matchesNull(v___x_3439_, v___x_2840_);
if (v___x_3441_ == 0)
{
lean_object* v___x_3442_; lean_object* v___x_3443_; 
lean_inc(v_ref_2918_);
lean_dec(v___x_3439_);
lean_dec(v___x_3438_);
lean_dec(v___x_3425_);
lean_dec(v_a_3412_);
lean_dec(v___y_3408_);
lean_dec(v___x_2840_);
lean_dec_ref(v___x_2837_);
lean_dec_ref(v___f_2836_);
lean_dec(v___x_2834_);
lean_dec(v___x_2833_);
lean_dec(v___x_2832_);
lean_dec_ref(v___x_2831_);
lean_dec_ref(v___x_2830_);
lean_dec_ref(v___x_2829_);
v___x_3442_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__12, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__12_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__12);
v___x_3443_ = l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8(v___x_3442_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
lean_dec(v___y_2858_);
lean_dec_ref(v___y_2857_);
lean_dec(v___y_2856_);
lean_dec_ref(v___y_2855_);
lean_dec(v___y_2854_);
lean_dec_ref(v___y_2853_);
if (lean_obj_tag(v___x_3443_) == 0)
{
lean_object* v_a_3444_; 
v_a_3444_ = lean_ctor_get(v___x_3443_, 0);
lean_inc(v_a_3444_);
lean_dec_ref_known(v___x_3443_, 1);
v___y_2867_ = v___y_3406_;
v_stx_2868_ = v_a_3444_;
v___y_2869_ = v___y_2859_;
v_ref_2870_ = v_ref_2918_;
v___y_2871_ = v___y_2860_;
goto v___jp_2866_;
}
else
{
lean_object* v_a_3445_; lean_object* v___x_3447_; uint8_t v_isShared_3448_; uint8_t v_isSharedCheck_3452_; 
lean_dec_ref(v___y_3406_);
lean_dec(v_ref_2918_);
lean_dec(v___y_2860_);
lean_dec_ref(v___y_2859_);
lean_dec(v_tk_2828_);
v_a_3445_ = lean_ctor_get(v___x_3443_, 0);
v_isSharedCheck_3452_ = !lean_is_exclusive(v___x_3443_);
if (v_isSharedCheck_3452_ == 0)
{
v___x_3447_ = v___x_3443_;
v_isShared_3448_ = v_isSharedCheck_3452_;
goto v_resetjp_3446_;
}
else
{
lean_inc(v_a_3445_);
lean_dec(v___x_3443_);
v___x_3447_ = lean_box(0);
v_isShared_3448_ = v_isSharedCheck_3452_;
goto v_resetjp_3446_;
}
v_resetjp_3446_:
{
lean_object* v___x_3450_; 
if (v_isShared_3448_ == 0)
{
v___x_3450_ = v___x_3447_;
goto v_reusejp_3449_;
}
else
{
lean_object* v_reuseFailAlloc_3451_; 
v_reuseFailAlloc_3451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3451_, 0, v_a_3445_);
v___x_3450_ = v_reuseFailAlloc_3451_;
goto v_reusejp_3449_;
}
v_reusejp_3449_:
{
return v___x_3450_;
}
}
}
}
else
{
lean_object* v___x_3453_; lean_object* v___x_3454_; 
v___x_3453_ = l_Lean_Syntax_getArg(v___x_3439_, v___x_2832_);
lean_dec(v___x_3439_);
v___x_3454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3454_, 0, v___x_3453_);
v___y_3371_ = v___x_3438_;
v___y_3372_ = v___x_3425_;
v___y_3373_ = v___y_3406_;
v___y_3374_ = v_a_3412_;
v___y_3375_ = v___y_3408_;
v___y_3376_ = v___y_3407_;
v_only_3377_ = v___x_3454_;
v___y_3378_ = v___y_2853_;
v___y_3379_ = v___y_2854_;
v___y_3380_ = v___y_2855_;
v___y_3381_ = v___y_2856_;
v___y_3382_ = v___y_2857_;
v___y_3383_ = v___y_2858_;
v___y_3384_ = v___y_2859_;
v___y_3385_ = v___y_2860_;
goto v___jp_3370_;
}
}
else
{
lean_object* v___x_3455_; 
lean_dec(v___x_3439_);
v___x_3455_ = lean_box(0);
v___y_3371_ = v___x_3438_;
v___y_3372_ = v___x_3425_;
v___y_3373_ = v___y_3406_;
v___y_3374_ = v_a_3412_;
v___y_3375_ = v___y_3408_;
v___y_3376_ = v___y_3407_;
v_only_3377_ = v___x_3455_;
v___y_3378_ = v___y_2853_;
v___y_3379_ = v___y_2854_;
v___y_3380_ = v___y_2855_;
v___y_3381_ = v___y_2856_;
v___y_3382_ = v___y_2857_;
v___y_3383_ = v___y_2858_;
v___y_3384_ = v___y_2859_;
v___y_3385_ = v___y_2860_;
goto v___jp_3370_;
}
}
}
}
else
{
lean_object* v_a_3456_; lean_object* v___x_3458_; uint8_t v_isShared_3459_; uint8_t v_isSharedCheck_3463_; 
lean_dec(v___y_3408_);
lean_dec_ref(v___y_3406_);
lean_dec(v___x_2922_);
lean_dec(v___y_2860_);
lean_dec_ref(v___y_2859_);
lean_dec(v___y_2858_);
lean_dec_ref(v___y_2857_);
lean_dec(v___y_2856_);
lean_dec_ref(v___y_2855_);
lean_dec(v___y_2854_);
lean_dec_ref(v___y_2853_);
lean_dec(v___x_2842_);
lean_dec(v___x_2840_);
lean_dec_ref(v___x_2837_);
lean_dec_ref(v___f_2836_);
lean_dec(v___x_2834_);
lean_dec(v___x_2833_);
lean_dec(v___x_2832_);
lean_dec_ref(v___x_2831_);
lean_dec_ref(v___x_2830_);
lean_dec_ref(v___x_2829_);
lean_dec(v_tk_2828_);
v_a_3456_ = lean_ctor_get(v___x_3411_, 0);
v_isSharedCheck_3463_ = !lean_is_exclusive(v___x_3411_);
if (v_isSharedCheck_3463_ == 0)
{
v___x_3458_ = v___x_3411_;
v_isShared_3459_ = v_isSharedCheck_3463_;
goto v_resetjp_3457_;
}
else
{
lean_inc(v_a_3456_);
lean_dec(v___x_3411_);
v___x_3458_ = lean_box(0);
v_isShared_3459_ = v_isSharedCheck_3463_;
goto v_resetjp_3457_;
}
v_resetjp_3457_:
{
lean_object* v___x_3461_; 
if (v_isShared_3459_ == 0)
{
v___x_3461_ = v___x_3458_;
goto v_reusejp_3460_;
}
else
{
lean_object* v_reuseFailAlloc_3462_; 
v_reuseFailAlloc_3462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3462_, 0, v_a_3456_);
v___x_3461_ = v_reuseFailAlloc_3462_;
goto v_reusejp_3460_;
}
v_reusejp_3460_:
{
return v___x_3461_;
}
}
}
}
v___jp_3464_:
{
if (lean_obj_tag(v_usingArg_2843_) == 0)
{
v___y_3405_ = v___y_3465_;
v___y_3406_ = v___y_3466_;
v___y_3407_ = v___y_3467_;
v___y_3408_ = v_usingArg_2843_;
goto v___jp_3404_;
}
else
{
lean_object* v_val_3468_; lean_object* v___x_3470_; uint8_t v_isShared_3471_; uint8_t v_isSharedCheck_3476_; 
v_val_3468_ = lean_ctor_get(v_usingArg_2843_, 0);
v_isSharedCheck_3476_ = !lean_is_exclusive(v_usingArg_2843_);
if (v_isSharedCheck_3476_ == 0)
{
v___x_3470_ = v_usingArg_2843_;
v_isShared_3471_ = v_isSharedCheck_3476_;
goto v_resetjp_3469_;
}
else
{
lean_inc(v_val_3468_);
lean_dec(v_usingArg_2843_);
v___x_3470_ = lean_box(0);
v_isShared_3471_ = v_isSharedCheck_3476_;
goto v_resetjp_3469_;
}
v_resetjp_3469_:
{
lean_object* v___x_3472_; lean_object* v___x_3474_; 
v___x_3472_ = l_Lean_Syntax_unsetTrailing(v_val_3468_);
if (v_isShared_3471_ == 0)
{
lean_ctor_set(v___x_3470_, 0, v___x_3472_);
v___x_3474_ = v___x_3470_;
goto v_reusejp_3473_;
}
else
{
lean_object* v_reuseFailAlloc_3475_; 
v_reuseFailAlloc_3475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3475_, 0, v___x_3472_);
v___x_3474_ = v_reuseFailAlloc_3475_;
goto v_reusejp_3473_;
}
v_reusejp_3473_:
{
v___y_3405_ = v___y_3465_;
v___y_3406_ = v___y_3466_;
v___y_3407_ = v___y_3467_;
v___y_3408_ = v___x_3474_;
goto v___jp_3404_;
}
}
}
}
v___jp_3477_:
{
lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___f_3487_; lean_object* v___x_3488_; 
v___x_3483_ = l_Lean_Meta_Simp_Context_setFailIfUnchanged(v___y_3482_, v___x_2919_);
v___x_3484_ = lean_box(v___x_2845_);
v___x_3485_ = lean_box(v___x_2919_);
v___x_3486_ = lean_box(v_useReducible_2835_);
lean_inc_ref(v___x_2831_);
lean_inc_ref(v___x_2830_);
lean_inc_ref(v___x_2829_);
lean_inc_ref(v___f_2836_);
lean_inc(v___x_2840_);
lean_inc_ref(v___x_2837_);
lean_inc(v_usingArg_2843_);
lean_inc(v___x_2832_);
lean_inc(v_tk_2828_);
lean_inc(v___x_2842_);
v___f_3487_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___boxed), 29, 19);
lean_closure_set(v___f_3487_, 0, v___x_2842_);
lean_closure_set(v___f_3487_, 1, v_tk_2828_);
lean_closure_set(v___f_3487_, 2, v___x_2924_);
lean_closure_set(v___f_3487_, 3, v___x_2832_);
lean_closure_set(v___f_3487_, 4, v___x_3483_);
lean_closure_set(v___f_3487_, 5, v___y_3478_);
lean_closure_set(v___f_3487_, 6, v___x_3484_);
lean_closure_set(v___f_3487_, 7, v_usingArg_2843_);
lean_closure_set(v___f_3487_, 8, v___x_2837_);
lean_closure_set(v___f_3487_, 9, v___x_3485_);
lean_closure_set(v___f_3487_, 10, v___x_3486_);
lean_closure_set(v___f_3487_, 11, v___x_2840_);
lean_closure_set(v___f_3487_, 12, v___f_2836_);
lean_closure_set(v___f_3487_, 13, v___x_2829_);
lean_closure_set(v___f_3487_, 14, v___x_2830_);
lean_closure_set(v___f_3487_, 15, v___x_2831_);
lean_closure_set(v___f_3487_, 16, v___f_2846_);
lean_closure_set(v___f_3487_, 17, v_a_2917_);
lean_closure_set(v___f_3487_, 18, v_usingTk_x3f_2847_);
v___x_3488_ = l_Lean_Elab_Tactic_Simp_DischargeWrapper_with___redArg(v___y_3479_, v___f_3487_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
lean_dec(v___y_3479_);
if (lean_obj_tag(v___x_3488_) == 0)
{
lean_object* v_a_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; uint8_t v___x_3492_; 
v_a_3489_ = lean_ctor_get(v___x_3488_, 0);
lean_inc(v_a_3489_);
lean_dec_ref_known(v___x_3488_, 1);
v___x_3490_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2859_);
v___x_3491_ = l_Lean_Elab_Tactic_tactic_simp_trace;
v___x_3492_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__3(v___x_3490_, v___x_3491_);
lean_dec_ref(v___x_3490_);
if (v___x_3492_ == 0)
{
if (lean_obj_tag(v_squeeze_2848_) == 0)
{
lean_dec(v___y_3480_);
lean_dec(v___x_2922_);
lean_dec(v___y_2860_);
lean_dec_ref(v___y_2859_);
lean_dec(v___y_2858_);
lean_dec_ref(v___y_2857_);
lean_dec(v___y_2856_);
lean_dec_ref(v___y_2855_);
lean_dec(v___y_2854_);
lean_dec_ref(v___y_2853_);
lean_dec(v_usingArg_2843_);
lean_dec(v___x_2842_);
lean_dec(v___x_2840_);
lean_dec_ref(v___x_2837_);
lean_dec_ref(v___f_2836_);
lean_dec(v___x_2834_);
lean_dec(v___x_2833_);
lean_dec(v___x_2832_);
lean_dec_ref(v___x_2831_);
lean_dec_ref(v___x_2830_);
lean_dec_ref(v___x_2829_);
lean_dec(v_tk_2828_);
v___y_2863_ = v_a_3489_;
goto v___jp_2862_;
}
else
{
v___y_3465_ = v___y_3480_;
v___y_3466_ = v_a_3489_;
v___y_3467_ = v___y_3481_;
goto v___jp_3464_;
}
}
else
{
v___y_3465_ = v___y_3480_;
v___y_3466_ = v_a_3489_;
v___y_3467_ = v___y_3481_;
goto v___jp_3464_;
}
}
else
{
lean_object* v_a_3493_; lean_object* v___x_3495_; uint8_t v_isShared_3496_; uint8_t v_isSharedCheck_3500_; 
lean_dec(v___y_3480_);
lean_dec(v___x_2922_);
lean_dec(v___y_2860_);
lean_dec_ref(v___y_2859_);
lean_dec(v___y_2858_);
lean_dec_ref(v___y_2857_);
lean_dec(v___y_2856_);
lean_dec_ref(v___y_2855_);
lean_dec(v___y_2854_);
lean_dec_ref(v___y_2853_);
lean_dec(v_usingArg_2843_);
lean_dec(v___x_2842_);
lean_dec(v___x_2840_);
lean_dec_ref(v___x_2837_);
lean_dec_ref(v___f_2836_);
lean_dec(v___x_2834_);
lean_dec(v___x_2833_);
lean_dec(v___x_2832_);
lean_dec_ref(v___x_2831_);
lean_dec_ref(v___x_2830_);
lean_dec_ref(v___x_2829_);
lean_dec(v_tk_2828_);
v_a_3493_ = lean_ctor_get(v___x_3488_, 0);
v_isSharedCheck_3500_ = !lean_is_exclusive(v___x_3488_);
if (v_isSharedCheck_3500_ == 0)
{
v___x_3495_ = v___x_3488_;
v_isShared_3496_ = v_isSharedCheck_3500_;
goto v_resetjp_3494_;
}
else
{
lean_inc(v_a_3493_);
lean_dec(v___x_3488_);
v___x_3495_ = lean_box(0);
v_isShared_3496_ = v_isSharedCheck_3500_;
goto v_resetjp_3494_;
}
v_resetjp_3494_:
{
lean_object* v___x_3498_; 
if (v_isShared_3496_ == 0)
{
v___x_3498_ = v___x_3495_;
goto v_reusejp_3497_;
}
else
{
lean_object* v_reuseFailAlloc_3499_; 
v_reuseFailAlloc_3499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3499_, 0, v_a_3493_);
v___x_3498_ = v_reuseFailAlloc_3499_;
goto v_reusejp_3497_;
}
v_reusejp_3497_:
{
return v___x_3498_;
}
}
}
}
v___jp_3501_:
{
lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; uint8_t v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; 
v___x_3505_ = l_Array_append___redArg(v___x_2925_, v___y_3504_);
lean_dec_ref(v___y_3504_);
lean_inc_n(v___x_2920_, 2);
v___x_3506_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3506_, 0, v___x_2920_);
lean_ctor_set(v___x_3506_, 1, v___x_2924_);
lean_ctor_set(v___x_3506_, 2, v___x_3505_);
v___x_3507_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3507_, 0, v___x_2920_);
lean_ctor_set(v___x_3507_, 1, v___x_2924_);
lean_ctor_set(v___x_3507_, 2, v___x_2925_);
lean_inc(v___x_2922_);
v___x_3508_ = l_Lean_Syntax_node6(v___x_2920_, v___x_2922_, v___x_2923_, v___x_2844_, v___y_3502_, v___y_3503_, v___x_3506_, v___x_3507_);
v___x_3509_ = 0;
v___x_3510_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__13));
v___x_3511_ = lean_box(v___x_2919_);
v___x_3512_ = lean_box(v___x_3509_);
v___x_3513_ = lean_box(v___x_2919_);
lean_inc(v___x_3508_);
v___x_3514_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_mkSimpContext___boxed), 14, 5);
lean_closure_set(v___x_3514_, 0, v___x_3508_);
lean_closure_set(v___x_3514_, 1, v___x_3511_);
lean_closure_set(v___x_3514_, 2, v___x_3512_);
lean_closure_set(v___x_3514_, 3, v___x_3513_);
lean_closure_set(v___x_3514_, 4, v___x_3510_);
v___x_3515_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___x_3514_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
if (lean_obj_tag(v___x_3515_) == 0)
{
lean_object* v_a_3516_; 
v_a_3516_ = lean_ctor_get(v___x_3515_, 0);
lean_inc(v_a_3516_);
lean_dec_ref_known(v___x_3515_, 1);
if (lean_obj_tag(v_unfold_2849_) == 0)
{
lean_object* v_ctx_3517_; lean_object* v_simprocs_3518_; lean_object* v_dischargeWrapper_3519_; 
v_ctx_3517_ = lean_ctor_get(v_a_3516_, 0);
lean_inc_ref(v_ctx_3517_);
v_simprocs_3518_ = lean_ctor_get(v_a_3516_, 1);
lean_inc_ref(v_simprocs_3518_);
v_dischargeWrapper_3519_ = lean_ctor_get(v_a_3516_, 2);
lean_inc(v_dischargeWrapper_3519_);
lean_dec(v_a_3516_);
v___y_3478_ = v_simprocs_3518_;
v___y_3479_ = v_dischargeWrapper_3519_;
v___y_3480_ = v___x_3508_;
v___y_3481_ = v___x_2919_;
v___y_3482_ = v_ctx_3517_;
goto v___jp_3477_;
}
else
{
lean_object* v_ctx_3520_; lean_object* v_simprocs_3521_; lean_object* v_dischargeWrapper_3522_; lean_object* v___x_3523_; 
v_ctx_3520_ = lean_ctor_get(v_a_3516_, 0);
lean_inc_ref(v_ctx_3520_);
v_simprocs_3521_ = lean_ctor_get(v_a_3516_, 1);
lean_inc_ref(v_simprocs_3521_);
v_dischargeWrapper_3522_ = lean_ctor_get(v_a_3516_, 2);
lean_inc(v_dischargeWrapper_3522_);
lean_dec(v_a_3516_);
v___x_3523_ = l_Lean_Meta_Simp_Context_setAutoUnfold(v_ctx_3520_);
v___y_3478_ = v_simprocs_3521_;
v___y_3479_ = v_dischargeWrapper_3522_;
v___y_3480_ = v___x_3508_;
v___y_3481_ = v___x_2845_;
v___y_3482_ = v___x_3523_;
goto v___jp_3477_;
}
}
else
{
lean_object* v_a_3524_; lean_object* v___x_3526_; uint8_t v_isShared_3527_; uint8_t v_isSharedCheck_3531_; 
lean_dec(v___x_3508_);
lean_dec(v___x_2922_);
lean_dec(v_a_2917_);
lean_dec(v___y_2860_);
lean_dec_ref(v___y_2859_);
lean_dec(v___y_2858_);
lean_dec_ref(v___y_2857_);
lean_dec(v___y_2856_);
lean_dec_ref(v___y_2855_);
lean_dec(v___y_2854_);
lean_dec_ref(v___y_2853_);
lean_dec(v_usingTk_x3f_2847_);
lean_dec_ref(v___f_2846_);
lean_dec(v_usingArg_2843_);
lean_dec(v___x_2842_);
lean_dec(v___x_2840_);
lean_dec_ref(v___x_2837_);
lean_dec_ref(v___f_2836_);
lean_dec(v___x_2834_);
lean_dec(v___x_2833_);
lean_dec(v___x_2832_);
lean_dec_ref(v___x_2831_);
lean_dec_ref(v___x_2830_);
lean_dec_ref(v___x_2829_);
lean_dec(v_tk_2828_);
v_a_3524_ = lean_ctor_get(v___x_3515_, 0);
v_isSharedCheck_3531_ = !lean_is_exclusive(v___x_3515_);
if (v_isSharedCheck_3531_ == 0)
{
v___x_3526_ = v___x_3515_;
v_isShared_3527_ = v_isSharedCheck_3531_;
goto v_resetjp_3525_;
}
else
{
lean_inc(v_a_3524_);
lean_dec(v___x_3515_);
v___x_3526_ = lean_box(0);
v_isShared_3527_ = v_isSharedCheck_3531_;
goto v_resetjp_3525_;
}
v_resetjp_3525_:
{
lean_object* v___x_3529_; 
if (v_isShared_3527_ == 0)
{
v___x_3529_ = v___x_3526_;
goto v_reusejp_3528_;
}
else
{
lean_object* v_reuseFailAlloc_3530_; 
v_reuseFailAlloc_3530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3530_, 0, v_a_3524_);
v___x_3529_ = v_reuseFailAlloc_3530_;
goto v_reusejp_3528_;
}
v_reusejp_3528_:
{
return v___x_3529_;
}
}
}
}
v___jp_3532_:
{
lean_object* v___x_3535_; lean_object* v___x_3536_; 
v___x_3535_ = l_Array_append___redArg(v___x_2925_, v___y_3534_);
lean_dec_ref(v___y_3534_);
lean_inc(v___x_2920_);
v___x_3536_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3536_, 0, v___x_2920_);
lean_ctor_set(v___x_3536_, 1, v___x_2924_);
lean_ctor_set(v___x_3536_, 2, v___x_3535_);
if (lean_obj_tag(v_args_2850_) == 1)
{
lean_object* v_val_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; 
v_val_3537_ = lean_ctor_get(v_args_2850_, 0);
v___x_3538_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__4));
lean_inc_n(v___x_2920_, 3);
v___x_3539_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3539_, 0, v___x_2920_);
lean_ctor_set(v___x_3539_, 1, v___x_3538_);
v___x_3540_ = l_Array_append___redArg(v___x_2925_, v_val_3537_);
v___x_3541_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3541_, 0, v___x_2920_);
lean_ctor_set(v___x_3541_, 1, v___x_2924_);
lean_ctor_set(v___x_3541_, 2, v___x_3540_);
v___x_3542_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__5));
v___x_3543_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3543_, 0, v___x_2920_);
lean_ctor_set(v___x_3543_, 1, v___x_3542_);
v___x_3544_ = l_Array_mkArray3___redArg(v___x_3539_, v___x_3541_, v___x_3543_);
v___y_3502_ = v___y_3533_;
v___y_3503_ = v___x_3536_;
v___y_3504_ = v___x_3544_;
goto v___jp_3501_;
}
else
{
lean_object* v___x_3545_; 
v___x_3545_ = lean_mk_empty_array_with_capacity(v___x_2832_);
v___y_3502_ = v___y_3533_;
v___y_3503_ = v___x_3536_;
v___y_3504_ = v___x_3545_;
goto v___jp_3501_;
}
}
v___jp_3546_:
{
lean_object* v___x_3548_; lean_object* v___x_3549_; 
v___x_3548_ = l_Array_append___redArg(v___x_2925_, v___y_3547_);
lean_dec_ref(v___y_3547_);
lean_inc(v___x_2920_);
v___x_3549_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3549_, 0, v___x_2920_);
lean_ctor_set(v___x_3549_, 1, v___x_2924_);
lean_ctor_set(v___x_3549_, 2, v___x_3548_);
if (lean_obj_tag(v_only_2851_) == 1)
{
lean_object* v_val_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; 
v_val_3550_ = lean_ctor_get(v_only_2851_, 0);
v___x_3551_ = l_Lean_SourceInfo_fromRef(v_val_3550_, v___x_2845_);
v___x_3552_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__6));
v___x_3553_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3553_, 0, v___x_3551_);
lean_ctor_set(v___x_3553_, 1, v___x_3552_);
v___x_3554_ = l_Array_mkArray1___redArg(v___x_3553_);
v___y_3533_ = v___x_3549_;
v___y_3534_ = v___x_3554_;
goto v___jp_3532_;
}
else
{
lean_object* v___x_3555_; 
v___x_3555_ = lean_mk_empty_array_with_capacity(v___x_2832_);
v___y_3533_ = v___x_3549_;
v___y_3534_ = v___x_3555_;
goto v___jp_3532_;
}
}
}
else
{
lean_object* v_a_3560_; lean_object* v___x_3562_; uint8_t v_isShared_3563_; uint8_t v_isSharedCheck_3567_; 
lean_dec(v___y_2860_);
lean_dec_ref(v___y_2859_);
lean_dec(v___y_2858_);
lean_dec_ref(v___y_2857_);
lean_dec(v___y_2856_);
lean_dec_ref(v___y_2855_);
lean_dec(v___y_2854_);
lean_dec_ref(v___y_2853_);
lean_dec(v___y_2852_);
lean_dec(v_usingTk_x3f_2847_);
lean_dec_ref(v___f_2846_);
lean_dec(v___x_2844_);
lean_dec(v_usingArg_2843_);
lean_dec(v___x_2842_);
lean_dec(v___x_2840_);
lean_dec_ref(v___x_2837_);
lean_dec_ref(v___f_2836_);
lean_dec(v___x_2834_);
lean_dec(v___x_2833_);
lean_dec(v___x_2832_);
lean_dec_ref(v___x_2831_);
lean_dec_ref(v___x_2830_);
lean_dec_ref(v___x_2829_);
lean_dec(v_tk_2828_);
v_a_3560_ = lean_ctor_get(v___x_2916_, 0);
v_isSharedCheck_3567_ = !lean_is_exclusive(v___x_2916_);
if (v_isSharedCheck_3567_ == 0)
{
v___x_3562_ = v___x_2916_;
v_isShared_3563_ = v_isSharedCheck_3567_;
goto v_resetjp_3561_;
}
else
{
lean_inc(v_a_3560_);
lean_dec(v___x_2916_);
v___x_3562_ = lean_box(0);
v_isShared_3563_ = v_isSharedCheck_3567_;
goto v_resetjp_3561_;
}
v_resetjp_3561_:
{
lean_object* v___x_3565_; 
if (v_isShared_3563_ == 0)
{
v___x_3565_ = v___x_3562_;
goto v_reusejp_3564_;
}
else
{
lean_object* v_reuseFailAlloc_3566_; 
v_reuseFailAlloc_3566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3566_, 0, v_a_3560_);
v___x_3565_ = v_reuseFailAlloc_3566_;
goto v_reusejp_3564_;
}
v_reusejp_3564_:
{
return v___x_3565_;
}
}
}
v___jp_2862_:
{
lean_object* v_diag_2864_; lean_object* v___x_2865_; 
v_diag_2864_ = lean_ctor_get(v___y_2863_, 1);
lean_inc_ref(v_diag_2864_);
lean_dec_ref(v___y_2863_);
v___x_2865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2865_, 0, v_diag_2864_);
return v___x_2865_;
}
v___jp_2866_:
{
lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; uint8_t v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; 
v___x_2872_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__3));
v___x_2873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2873_, 0, v___x_2872_);
lean_ctor_set(v___x_2873_, 1, v_stx_2868_);
v___x_2874_ = lean_box(0);
v___x_2875_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2875_, 0, v___x_2873_);
lean_ctor_set(v___x_2875_, 1, v___x_2874_);
lean_ctor_set(v___x_2875_, 2, v___x_2874_);
lean_ctor_set(v___x_2875_, 3, v___x_2874_);
lean_ctor_set(v___x_2875_, 4, v___x_2874_);
lean_ctor_set(v___x_2875_, 5, v___x_2874_);
v___x_2876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2876_, 0, v_ref_2870_);
v___x_2877_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__0));
v___x_2878_ = 4;
v___x_2879_ = l_Lean_MessageData_nil;
v___x_2880_ = l_Lean_Meta_Tactic_TryThis_addSuggestion(v_tk_2828_, v___x_2875_, v___x_2876_, v___x_2877_, v___x_2874_, v___x_2878_, v___x_2879_, v___y_2869_, v___y_2871_);
lean_dec(v___y_2871_);
lean_dec_ref(v___y_2869_);
if (lean_obj_tag(v___x_2880_) == 0)
{
lean_dec_ref_known(v___x_2880_, 1);
v___y_2863_ = v___y_2867_;
goto v___jp_2862_;
}
else
{
lean_object* v_a_2881_; lean_object* v___x_2883_; uint8_t v_isShared_2884_; uint8_t v_isSharedCheck_2888_; 
lean_dec_ref(v___y_2867_);
v_a_2881_ = lean_ctor_get(v___x_2880_, 0);
v_isSharedCheck_2888_ = !lean_is_exclusive(v___x_2880_);
if (v_isSharedCheck_2888_ == 0)
{
v___x_2883_ = v___x_2880_;
v_isShared_2884_ = v_isSharedCheck_2888_;
goto v_resetjp_2882_;
}
else
{
lean_inc(v_a_2881_);
lean_dec(v___x_2880_);
v___x_2883_ = lean_box(0);
v_isShared_2884_ = v_isSharedCheck_2888_;
goto v_resetjp_2882_;
}
v_resetjp_2882_:
{
lean_object* v___x_2886_; 
if (v_isShared_2884_ == 0)
{
v___x_2886_ = v___x_2883_;
goto v_reusejp_2885_;
}
else
{
lean_object* v_reuseFailAlloc_2887_; 
v_reuseFailAlloc_2887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2887_, 0, v_a_2881_);
v___x_2886_ = v_reuseFailAlloc_2887_;
goto v_reusejp_2885_;
}
v_reusejp_2885_:
{
return v___x_2886_;
}
}
}
}
v___jp_2889_:
{
lean_object* v_ref_2894_; 
v_ref_2894_ = lean_ctor_get(v___y_2892_, 2);
lean_inc(v_ref_2894_);
v___y_2867_ = v___y_2890_;
v_stx_2868_ = v_stx_2891_;
v___y_2869_ = v___y_2892_;
v_ref_2870_ = v_ref_2894_;
v___y_2871_ = v___y_2893_;
goto v___jp_2866_;
}
v___jp_2895_:
{
lean_object* v___x_2905_; lean_object* v___x_2906_; 
v___x_2905_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__4, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__4_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__4);
v___x_2906_ = l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8(v___x_2905_, v___y_2897_, v___y_2898_, v___y_2899_, v___y_2900_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_);
lean_dec(v___y_2902_);
lean_dec_ref(v___y_2901_);
lean_dec(v___y_2900_);
lean_dec_ref(v___y_2899_);
lean_dec(v___y_2898_);
lean_dec_ref(v___y_2897_);
if (lean_obj_tag(v___x_2906_) == 0)
{
lean_object* v_a_2907_; 
v_a_2907_ = lean_ctor_get(v___x_2906_, 0);
lean_inc(v_a_2907_);
lean_dec_ref_known(v___x_2906_, 1);
v___y_2890_ = v___y_2896_;
v_stx_2891_ = v_a_2907_;
v___y_2892_ = v___y_2903_;
v___y_2893_ = v___y_2904_;
goto v___jp_2889_;
}
else
{
lean_object* v_a_2908_; lean_object* v___x_2910_; uint8_t v_isShared_2911_; uint8_t v_isSharedCheck_2915_; 
lean_dec(v___y_2904_);
lean_dec_ref(v___y_2903_);
lean_dec_ref(v___y_2896_);
lean_dec(v_tk_2828_);
v_a_2908_ = lean_ctor_get(v___x_2906_, 0);
v_isSharedCheck_2915_ = !lean_is_exclusive(v___x_2906_);
if (v_isSharedCheck_2915_ == 0)
{
v___x_2910_ = v___x_2906_;
v_isShared_2911_ = v_isSharedCheck_2915_;
goto v_resetjp_2909_;
}
else
{
lean_inc(v_a_2908_);
lean_dec(v___x_2906_);
v___x_2910_ = lean_box(0);
v_isShared_2911_ = v_isSharedCheck_2915_;
goto v_resetjp_2909_;
}
v_resetjp_2909_:
{
lean_object* v___x_2913_; 
if (v_isShared_2911_ == 0)
{
v___x_2913_ = v___x_2910_;
goto v_reusejp_2912_;
}
else
{
lean_object* v_reuseFailAlloc_2914_; 
v_reuseFailAlloc_2914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2914_, 0, v_a_2908_);
v___x_2913_ = v_reuseFailAlloc_2914_;
goto v_reusejp_2912_;
}
v_reusejp_2912_:
{
return v___x_2913_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___boxed(lean_object** _args){
lean_object* v_tk_3568_ = _args[0];
lean_object* v___x_3569_ = _args[1];
lean_object* v___x_3570_ = _args[2];
lean_object* v___x_3571_ = _args[3];
lean_object* v___x_3572_ = _args[4];
lean_object* v___x_3573_ = _args[5];
lean_object* v___x_3574_ = _args[6];
lean_object* v_useReducible_3575_ = _args[7];
lean_object* v___f_3576_ = _args[8];
lean_object* v___x_3577_ = _args[9];
lean_object* v___x_3578_ = _args[10];
lean_object* v___x_3579_ = _args[11];
lean_object* v___x_3580_ = _args[12];
lean_object* v___x_3581_ = _args[13];
lean_object* v___x_3582_ = _args[14];
lean_object* v_usingArg_3583_ = _args[15];
lean_object* v___x_3584_ = _args[16];
lean_object* v___x_3585_ = _args[17];
lean_object* v___f_3586_ = _args[18];
lean_object* v_usingTk_x3f_3587_ = _args[19];
lean_object* v_squeeze_3588_ = _args[20];
lean_object* v_unfold_3589_ = _args[21];
lean_object* v_args_3590_ = _args[22];
lean_object* v_only_3591_ = _args[23];
lean_object* v___y_3592_ = _args[24];
lean_object* v___y_3593_ = _args[25];
lean_object* v___y_3594_ = _args[26];
lean_object* v___y_3595_ = _args[27];
lean_object* v___y_3596_ = _args[28];
lean_object* v___y_3597_ = _args[29];
lean_object* v___y_3598_ = _args[30];
lean_object* v___y_3599_ = _args[31];
lean_object* v___y_3600_ = _args[32];
lean_object* v___y_3601_ = _args[33];
_start:
{
uint8_t v_useReducible_boxed_3602_; uint8_t v___x_104269__boxed_3603_; lean_object* v_res_3604_; 
v_useReducible_boxed_3602_ = lean_unbox(v_useReducible_3575_);
v___x_104269__boxed_3603_ = lean_unbox(v___x_3585_);
v_res_3604_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8(v_tk_3568_, v___x_3569_, v___x_3570_, v___x_3571_, v___x_3572_, v___x_3573_, v___x_3574_, v_useReducible_boxed_3602_, v___f_3576_, v___x_3577_, v___x_3578_, v___x_3579_, v___x_3580_, v___x_3581_, v___x_3582_, v_usingArg_3583_, v___x_3584_, v___x_104269__boxed_3603_, v___f_3586_, v_usingTk_x3f_3587_, v_squeeze_3588_, v_unfold_3589_, v_args_3590_, v_only_3591_, v___y_3592_, v___y_3593_, v___y_3594_, v___y_3595_, v___y_3596_, v___y_3597_, v___y_3598_, v___y_3599_, v___y_3600_);
lean_dec(v_only_3591_);
lean_dec(v_args_3590_);
lean_dec(v_unfold_3589_);
lean_dec(v_squeeze_3588_);
lean_dec(v___x_3581_);
lean_dec(v___x_3579_);
lean_dec(v___x_3578_);
return v_res_3604_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore(uint8_t v_useReducible_3630_, lean_object* v_stx_3631_, lean_object* v_a_3632_, lean_object* v_a_3633_, lean_object* v_a_3634_, lean_object* v_a_3635_, lean_object* v_a_3636_, lean_object* v_a_3637_, lean_object* v_a_3638_, lean_object* v_a_3639_){
_start:
{
lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; uint8_t v___x_3646_; 
v___x_3641_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__5_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_));
v___x_3642_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__0));
v___x_3643_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__1));
v___x_3644_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__1));
v___x_3645_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__2));
lean_inc(v_stx_3631_);
v___x_3646_ = l_Lean_Syntax_isOfKind(v_stx_3631_, v___x_3645_);
if (v___x_3646_ == 0)
{
lean_object* v___x_3647_; 
lean_dec(v_stx_3631_);
v___x_3647_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_3647_;
}
else
{
lean_object* v___f_3648_; lean_object* v___x_3649_; lean_object* v_tk_3650_; lean_object* v___x_3651_; lean_object* v___y_3653_; lean_object* v___y_3654_; lean_object* v___y_3655_; uint8_t v___y_3656_; lean_object* v___y_3657_; lean_object* v___y_3658_; lean_object* v___y_3659_; lean_object* v___y_3660_; lean_object* v___y_3661_; lean_object* v___y_3662_; lean_object* v___y_3663_; lean_object* v___y_3664_; lean_object* v___y_3665_; lean_object* v___y_3666_; lean_object* v___y_3667_; lean_object* v___y_3668_; lean_object* v___y_3669_; lean_object* v___y_3670_; lean_object* v___y_3671_; lean_object* v___y_3672_; lean_object* v___y_3673_; lean_object* v___y_3674_; lean_object* v___y_3683_; lean_object* v___y_3684_; lean_object* v___y_3685_; uint8_t v___y_3686_; lean_object* v___y_3687_; lean_object* v___y_3688_; lean_object* v___y_3689_; lean_object* v___y_3690_; lean_object* v___y_3691_; lean_object* v___y_3692_; lean_object* v___y_3693_; lean_object* v___y_3694_; lean_object* v___y_3695_; lean_object* v___y_3696_; lean_object* v___y_3697_; lean_object* v___y_3698_; lean_object* v___y_3699_; lean_object* v___y_3700_; lean_object* v___y_3701_; lean_object* v___y_3702_; lean_object* v_usingTk_x3f_3703_; lean_object* v_usingArg_3704_; lean_object* v___y_3716_; lean_object* v___y_3717_; lean_object* v___y_3718_; uint8_t v___y_3719_; lean_object* v___y_3720_; lean_object* v___y_3721_; lean_object* v___y_3722_; lean_object* v___y_3723_; lean_object* v___y_3724_; lean_object* v___y_3725_; lean_object* v___y_3726_; lean_object* v___y_3727_; lean_object* v___y_3728_; lean_object* v___y_3729_; lean_object* v___y_3730_; lean_object* v___y_3731_; lean_object* v___y_3732_; lean_object* v___y_3733_; lean_object* v___y_3734_; lean_object* v___y_3735_; lean_object* v_args_3736_; lean_object* v___y_3748_; uint8_t v___y_3749_; lean_object* v___y_3750_; lean_object* v___y_3751_; lean_object* v___y_3752_; lean_object* v___y_3753_; lean_object* v___y_3754_; lean_object* v___y_3755_; lean_object* v___y_3756_; lean_object* v___y_3757_; lean_object* v___y_3758_; lean_object* v___y_3759_; lean_object* v_only_3760_; lean_object* v___y_3761_; lean_object* v___y_3762_; lean_object* v___y_3763_; lean_object* v___y_3764_; lean_object* v___y_3765_; lean_object* v___y_3766_; lean_object* v___y_3767_; lean_object* v___y_3768_; lean_object* v___y_3782_; lean_object* v___y_3783_; lean_object* v___y_3784_; lean_object* v___y_3785_; lean_object* v___y_3786_; lean_object* v___y_3787_; lean_object* v___y_3788_; lean_object* v___y_3789_; lean_object* v___y_3790_; lean_object* v___y_3791_; lean_object* v_unfold_3792_; lean_object* v_squeeze_3811_; lean_object* v___y_3812_; lean_object* v___y_3813_; lean_object* v___y_3814_; lean_object* v___y_3815_; lean_object* v___y_3816_; lean_object* v___y_3817_; lean_object* v___y_3818_; lean_object* v___y_3819_; lean_object* v___x_3828_; uint8_t v___x_3829_; 
v___f_3648_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__3));
v___x_3649_ = lean_unsigned_to_nat(0u);
v_tk_3650_ = l_Lean_Syntax_getArg(v_stx_3631_, v___x_3649_);
v___x_3651_ = lean_unsigned_to_nat(1u);
v___x_3828_ = l_Lean_Syntax_getArg(v_stx_3631_, v___x_3651_);
v___x_3829_ = l_Lean_Syntax_isNone(v___x_3828_);
if (v___x_3829_ == 0)
{
uint8_t v___x_3830_; 
lean_inc(v___x_3828_);
v___x_3830_ = l_Lean_Syntax_matchesNull(v___x_3828_, v___x_3651_);
if (v___x_3830_ == 0)
{
lean_object* v___x_3831_; 
lean_dec(v___x_3828_);
lean_dec(v_tk_3650_);
lean_dec(v_stx_3631_);
v___x_3831_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_3831_;
}
else
{
lean_object* v_squeeze_3832_; lean_object* v___x_3833_; 
v_squeeze_3832_ = l_Lean_Syntax_getArg(v___x_3828_, v___x_3649_);
lean_dec(v___x_3828_);
v___x_3833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3833_, 0, v_squeeze_3832_);
v_squeeze_3811_ = v___x_3833_;
v___y_3812_ = v_a_3632_;
v___y_3813_ = v_a_3633_;
v___y_3814_ = v_a_3634_;
v___y_3815_ = v_a_3635_;
v___y_3816_ = v_a_3636_;
v___y_3817_ = v_a_3637_;
v___y_3818_ = v_a_3638_;
v___y_3819_ = v_a_3639_;
goto v___jp_3810_;
}
}
else
{
lean_object* v___x_3834_; 
lean_dec(v___x_3828_);
v___x_3834_ = lean_box(0);
v_squeeze_3811_ = v___x_3834_;
v___y_3812_ = v_a_3632_;
v___y_3813_ = v_a_3633_;
v___y_3814_ = v_a_3634_;
v___y_3815_ = v_a_3635_;
v___y_3816_ = v_a_3636_;
v___y_3817_ = v_a_3637_;
v___y_3818_ = v_a_3638_;
v___y_3819_ = v_a_3639_;
goto v___jp_3810_;
}
v___jp_3652_:
{
lean_object* v___x_3675_; lean_object* v___f_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___f_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; 
v___x_3675_ = lean_box(v___y_3656_);
lean_inc(v___y_3674_);
lean_inc(v___y_3657_);
lean_inc(v___y_3665_);
lean_inc(v___y_3655_);
lean_inc(v___y_3654_);
lean_inc(v___y_3664_);
v___f_3676_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___boxed), 21, 11);
lean_closure_set(v___f_3676_, 0, v___y_3664_);
lean_closure_set(v___f_3676_, 1, v___y_3654_);
lean_closure_set(v___f_3676_, 2, v___x_3641_);
lean_closure_set(v___f_3676_, 3, v___x_3642_);
lean_closure_set(v___f_3676_, 4, v___x_3643_);
lean_closure_set(v___f_3676_, 5, v___y_3655_);
lean_closure_set(v___f_3676_, 6, v___x_3649_);
lean_closure_set(v___f_3676_, 7, v___y_3665_);
lean_closure_set(v___f_3676_, 8, v___y_3657_);
lean_closure_set(v___f_3676_, 9, v___x_3675_);
lean_closure_set(v___f_3676_, 10, v___y_3674_);
v___x_3677_ = lean_box(v_useReducible_3630_);
v___x_3678_ = lean_box(v___y_3656_);
lean_inc(v___y_3671_);
lean_inc(v___y_3659_);
v___f_3679_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___boxed), 34, 25);
lean_closure_set(v___f_3679_, 0, v_tk_3650_);
lean_closure_set(v___f_3679_, 1, v___x_3641_);
lean_closure_set(v___f_3679_, 2, v___x_3642_);
lean_closure_set(v___f_3679_, 3, v___x_3643_);
lean_closure_set(v___f_3679_, 4, v___x_3649_);
lean_closure_set(v___f_3679_, 5, v___y_3659_);
lean_closure_set(v___f_3679_, 6, v___x_3645_);
lean_closure_set(v___f_3679_, 7, v___x_3677_);
lean_closure_set(v___f_3679_, 8, v___f_3648_);
lean_closure_set(v___f_3679_, 9, v___x_3644_);
lean_closure_set(v___f_3679_, 10, v___y_3670_);
lean_closure_set(v___f_3679_, 11, v___y_3669_);
lean_closure_set(v___f_3679_, 12, v___x_3651_);
lean_closure_set(v___f_3679_, 13, v___y_3671_);
lean_closure_set(v___f_3679_, 14, v___y_3666_);
lean_closure_set(v___f_3679_, 15, v___y_3658_);
lean_closure_set(v___f_3679_, 16, v___y_3655_);
lean_closure_set(v___f_3679_, 17, v___x_3678_);
lean_closure_set(v___f_3679_, 18, v___f_3676_);
lean_closure_set(v___f_3679_, 19, v___y_3661_);
lean_closure_set(v___f_3679_, 20, v___y_3664_);
lean_closure_set(v___f_3679_, 21, v___y_3654_);
lean_closure_set(v___f_3679_, 22, v___y_3665_);
lean_closure_set(v___f_3679_, 23, v___y_3657_);
lean_closure_set(v___f_3679_, 24, v___y_3674_);
v___x_3680_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withSimpDiagnostics___boxed), 10, 1);
lean_closure_set(v___x_3680_, 0, v___f_3679_);
v___x_3681_ = l_Lean_Elab_Tactic_focus___redArg(v___x_3680_, v___y_3673_, v___y_3660_, v___y_3672_, v___y_3668_, v___y_3667_, v___y_3662_, v___y_3653_, v___y_3663_);
return v___x_3681_;
}
v___jp_3682_:
{
lean_object* v___x_3705_; 
v___x_3705_ = l_Lean_Syntax_getOptional_x3f(v___y_3689_);
lean_dec(v___y_3689_);
if (lean_obj_tag(v___x_3705_) == 0)
{
lean_object* v___x_3706_; 
v___x_3706_ = lean_box(0);
v___y_3653_ = v___y_3683_;
v___y_3654_ = v___y_3684_;
v___y_3655_ = v___y_3685_;
v___y_3656_ = v___y_3686_;
v___y_3657_ = v___y_3687_;
v___y_3658_ = v_usingArg_3704_;
v___y_3659_ = v___y_3688_;
v___y_3660_ = v___y_3690_;
v___y_3661_ = v_usingTk_x3f_3703_;
v___y_3662_ = v___y_3691_;
v___y_3663_ = v___y_3692_;
v___y_3664_ = v___y_3693_;
v___y_3665_ = v___y_3694_;
v___y_3666_ = v___y_3695_;
v___y_3667_ = v___y_3696_;
v___y_3668_ = v___y_3698_;
v___y_3669_ = v___y_3697_;
v___y_3670_ = v___y_3699_;
v___y_3671_ = v___y_3700_;
v___y_3672_ = v___y_3702_;
v___y_3673_ = v___y_3701_;
v___y_3674_ = v___x_3706_;
goto v___jp_3652_;
}
else
{
lean_object* v_val_3707_; lean_object* v___x_3709_; uint8_t v_isShared_3710_; uint8_t v_isSharedCheck_3714_; 
v_val_3707_ = lean_ctor_get(v___x_3705_, 0);
v_isSharedCheck_3714_ = !lean_is_exclusive(v___x_3705_);
if (v_isSharedCheck_3714_ == 0)
{
v___x_3709_ = v___x_3705_;
v_isShared_3710_ = v_isSharedCheck_3714_;
goto v_resetjp_3708_;
}
else
{
lean_inc(v_val_3707_);
lean_dec(v___x_3705_);
v___x_3709_ = lean_box(0);
v_isShared_3710_ = v_isSharedCheck_3714_;
goto v_resetjp_3708_;
}
v_resetjp_3708_:
{
lean_object* v___x_3712_; 
if (v_isShared_3710_ == 0)
{
v___x_3712_ = v___x_3709_;
goto v_reusejp_3711_;
}
else
{
lean_object* v_reuseFailAlloc_3713_; 
v_reuseFailAlloc_3713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3713_, 0, v_val_3707_);
v___x_3712_ = v_reuseFailAlloc_3713_;
goto v_reusejp_3711_;
}
v_reusejp_3711_:
{
v___y_3653_ = v___y_3683_;
v___y_3654_ = v___y_3684_;
v___y_3655_ = v___y_3685_;
v___y_3656_ = v___y_3686_;
v___y_3657_ = v___y_3687_;
v___y_3658_ = v_usingArg_3704_;
v___y_3659_ = v___y_3688_;
v___y_3660_ = v___y_3690_;
v___y_3661_ = v_usingTk_x3f_3703_;
v___y_3662_ = v___y_3691_;
v___y_3663_ = v___y_3692_;
v___y_3664_ = v___y_3693_;
v___y_3665_ = v___y_3694_;
v___y_3666_ = v___y_3695_;
v___y_3667_ = v___y_3696_;
v___y_3668_ = v___y_3698_;
v___y_3669_ = v___y_3697_;
v___y_3670_ = v___y_3699_;
v___y_3671_ = v___y_3700_;
v___y_3672_ = v___y_3702_;
v___y_3673_ = v___y_3701_;
v___y_3674_ = v___x_3712_;
goto v___jp_3652_;
}
}
}
}
v___jp_3715_:
{
lean_object* v___x_3737_; lean_object* v___x_3738_; uint8_t v___x_3739_; 
v___x_3737_ = lean_unsigned_to_nat(4u);
v___x_3738_ = l_Lean_Syntax_getArg(v___y_3726_, v___x_3737_);
lean_dec(v___y_3726_);
v___x_3739_ = l_Lean_Syntax_isNone(v___x_3738_);
if (v___x_3739_ == 0)
{
uint8_t v___x_3740_; 
lean_inc(v___x_3738_);
v___x_3740_ = l_Lean_Syntax_matchesNull(v___x_3738_, v___y_3729_);
lean_dec(v___y_3729_);
if (v___x_3740_ == 0)
{
lean_object* v___x_3741_; 
lean_dec(v___x_3738_);
lean_dec(v_args_3736_);
lean_dec(v___y_3732_);
lean_dec(v___y_3728_);
lean_dec(v___y_3727_);
lean_dec(v___y_3722_);
lean_dec(v___y_3720_);
lean_dec(v___y_3718_);
lean_dec(v___y_3717_);
lean_dec(v_tk_3650_);
v___x_3741_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_3741_;
}
else
{
lean_object* v_usingTk_x3f_3742_; lean_object* v_usingArg_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; 
v_usingTk_x3f_3742_ = l_Lean_Syntax_getArg(v___x_3738_, v___x_3649_);
v_usingArg_3743_ = l_Lean_Syntax_getArg(v___x_3738_, v___x_3651_);
lean_dec(v___x_3738_);
v___x_3744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3744_, 0, v_usingTk_x3f_3742_);
v___x_3745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3745_, 0, v_usingArg_3743_);
v___y_3683_ = v___y_3716_;
v___y_3684_ = v___y_3717_;
v___y_3685_ = v___y_3718_;
v___y_3686_ = v___y_3719_;
v___y_3687_ = v___y_3720_;
v___y_3688_ = v___y_3721_;
v___y_3689_ = v___y_3722_;
v___y_3690_ = v___y_3723_;
v___y_3691_ = v___y_3724_;
v___y_3692_ = v___y_3725_;
v___y_3693_ = v___y_3727_;
v___y_3694_ = v_args_3736_;
v___y_3695_ = v___y_3728_;
v___y_3696_ = v___y_3730_;
v___y_3697_ = v___y_3732_;
v___y_3698_ = v___y_3731_;
v___y_3699_ = v___x_3737_;
v___y_3700_ = v___y_3733_;
v___y_3701_ = v___y_3735_;
v___y_3702_ = v___y_3734_;
v_usingTk_x3f_3703_ = v___x_3744_;
v_usingArg_3704_ = v___x_3745_;
goto v___jp_3682_;
}
}
else
{
lean_object* v___x_3746_; 
lean_dec(v___x_3738_);
lean_dec(v___y_3729_);
v___x_3746_ = lean_box(0);
v___y_3683_ = v___y_3716_;
v___y_3684_ = v___y_3717_;
v___y_3685_ = v___y_3718_;
v___y_3686_ = v___y_3719_;
v___y_3687_ = v___y_3720_;
v___y_3688_ = v___y_3721_;
v___y_3689_ = v___y_3722_;
v___y_3690_ = v___y_3723_;
v___y_3691_ = v___y_3724_;
v___y_3692_ = v___y_3725_;
v___y_3693_ = v___y_3727_;
v___y_3694_ = v_args_3736_;
v___y_3695_ = v___y_3728_;
v___y_3696_ = v___y_3730_;
v___y_3697_ = v___y_3732_;
v___y_3698_ = v___y_3731_;
v___y_3699_ = v___x_3737_;
v___y_3700_ = v___y_3733_;
v___y_3701_ = v___y_3735_;
v___y_3702_ = v___y_3734_;
v_usingTk_x3f_3703_ = v___x_3746_;
v_usingArg_3704_ = v___x_3746_;
goto v___jp_3682_;
}
}
v___jp_3747_:
{
lean_object* v___x_3769_; uint8_t v___x_3770_; 
v___x_3769_ = l_Lean_Syntax_getArg(v___y_3757_, v___y_3758_);
lean_dec(v___y_3758_);
v___x_3770_ = l_Lean_Syntax_isNone(v___x_3769_);
if (v___x_3770_ == 0)
{
uint8_t v___x_3771_; 
lean_inc(v___x_3769_);
v___x_3771_ = l_Lean_Syntax_matchesNull(v___x_3769_, v___x_3651_);
if (v___x_3771_ == 0)
{
lean_object* v___x_3772_; 
lean_dec(v___x_3769_);
lean_dec(v_only_3760_);
lean_dec(v___y_3759_);
lean_dec(v___y_3757_);
lean_dec(v___y_3756_);
lean_dec(v___y_3754_);
lean_dec(v___y_3752_);
lean_dec(v___y_3751_);
lean_dec(v___y_3750_);
lean_dec(v___y_3748_);
lean_dec(v_tk_3650_);
v___x_3772_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_3772_;
}
else
{
lean_object* v___x_3773_; lean_object* v___x_3774_; uint8_t v___x_3775_; 
v___x_3773_ = l_Lean_Syntax_getArg(v___x_3769_, v___x_3649_);
lean_dec(v___x_3769_);
v___x_3774_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__4));
lean_inc(v___x_3773_);
v___x_3775_ = l_Lean_Syntax_isOfKind(v___x_3773_, v___x_3774_);
if (v___x_3775_ == 0)
{
lean_object* v___x_3776_; 
lean_dec(v___x_3773_);
lean_dec(v_only_3760_);
lean_dec(v___y_3759_);
lean_dec(v___y_3757_);
lean_dec(v___y_3756_);
lean_dec(v___y_3754_);
lean_dec(v___y_3752_);
lean_dec(v___y_3751_);
lean_dec(v___y_3750_);
lean_dec(v___y_3748_);
lean_dec(v_tk_3650_);
v___x_3776_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_3776_;
}
else
{
lean_object* v___x_3777_; lean_object* v_args_3778_; lean_object* v___x_3779_; 
v___x_3777_ = l_Lean_Syntax_getArg(v___x_3773_, v___x_3651_);
lean_dec(v___x_3773_);
v_args_3778_ = l_Lean_Syntax_getArgs(v___x_3777_);
lean_dec(v___x_3777_);
v___x_3779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3779_, 0, v_args_3778_);
v___y_3716_ = v___y_3767_;
v___y_3717_ = v___y_3751_;
v___y_3718_ = v___y_3750_;
v___y_3719_ = v___y_3749_;
v___y_3720_ = v_only_3760_;
v___y_3721_ = v___y_3753_;
v___y_3722_ = v___y_3759_;
v___y_3723_ = v___y_3762_;
v___y_3724_ = v___y_3766_;
v___y_3725_ = v___y_3768_;
v___y_3726_ = v___y_3757_;
v___y_3727_ = v___y_3748_;
v___y_3728_ = v___y_3752_;
v___y_3729_ = v___y_3756_;
v___y_3730_ = v___y_3765_;
v___y_3731_ = v___y_3764_;
v___y_3732_ = v___y_3754_;
v___y_3733_ = v___y_3755_;
v___y_3734_ = v___y_3763_;
v___y_3735_ = v___y_3761_;
v_args_3736_ = v___x_3779_;
goto v___jp_3715_;
}
}
}
else
{
lean_object* v___x_3780_; 
lean_dec(v___x_3769_);
v___x_3780_ = lean_box(0);
v___y_3716_ = v___y_3767_;
v___y_3717_ = v___y_3751_;
v___y_3718_ = v___y_3750_;
v___y_3719_ = v___y_3749_;
v___y_3720_ = v_only_3760_;
v___y_3721_ = v___y_3753_;
v___y_3722_ = v___y_3759_;
v___y_3723_ = v___y_3762_;
v___y_3724_ = v___y_3766_;
v___y_3725_ = v___y_3768_;
v___y_3726_ = v___y_3757_;
v___y_3727_ = v___y_3748_;
v___y_3728_ = v___y_3752_;
v___y_3729_ = v___y_3756_;
v___y_3730_ = v___y_3765_;
v___y_3731_ = v___y_3764_;
v___y_3732_ = v___y_3754_;
v___y_3733_ = v___y_3755_;
v___y_3734_ = v___y_3763_;
v___y_3735_ = v___y_3761_;
v_args_3736_ = v___x_3780_;
goto v___jp_3715_;
}
}
v___jp_3781_:
{
lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; uint8_t v___x_3796_; 
v___x_3793_ = lean_unsigned_to_nat(3u);
v___x_3794_ = l_Lean_Syntax_getArg(v_stx_3631_, v___x_3793_);
lean_dec(v_stx_3631_);
v___x_3795_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__6));
lean_inc(v___x_3794_);
v___x_3796_ = l_Lean_Syntax_isOfKind(v___x_3794_, v___x_3795_);
if (v___x_3796_ == 0)
{
lean_object* v___x_3797_; 
lean_dec(v___x_3794_);
lean_dec(v_unfold_3792_);
lean_dec(v___y_3784_);
lean_dec(v___y_3782_);
lean_dec(v_tk_3650_);
v___x_3797_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_3797_;
}
else
{
lean_object* v___x_3798_; lean_object* v___x_3799_; uint8_t v___x_3800_; 
v___x_3798_ = l_Lean_Syntax_getArg(v___x_3794_, v___x_3649_);
v___x_3799_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__8));
lean_inc(v___x_3798_);
v___x_3800_ = l_Lean_Syntax_isOfKind(v___x_3798_, v___x_3799_);
if (v___x_3800_ == 0)
{
lean_object* v___x_3801_; 
lean_dec(v___x_3798_);
lean_dec(v___x_3794_);
lean_dec(v_unfold_3792_);
lean_dec(v___y_3784_);
lean_dec(v___y_3782_);
lean_dec(v_tk_3650_);
v___x_3801_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_3801_;
}
else
{
lean_object* v___x_3802_; lean_object* v___x_3803_; uint8_t v___x_3804_; 
v___x_3802_ = l_Lean_Syntax_getArg(v___x_3794_, v___x_3651_);
v___x_3803_ = l_Lean_Syntax_getArg(v___x_3794_, v___y_3784_);
v___x_3804_ = l_Lean_Syntax_isNone(v___x_3803_);
if (v___x_3804_ == 0)
{
uint8_t v___x_3805_; 
lean_inc(v___x_3803_);
v___x_3805_ = l_Lean_Syntax_matchesNull(v___x_3803_, v___x_3651_);
if (v___x_3805_ == 0)
{
lean_object* v___x_3806_; 
lean_dec(v___x_3803_);
lean_dec(v___x_3802_);
lean_dec(v___x_3798_);
lean_dec(v___x_3794_);
lean_dec(v_unfold_3792_);
lean_dec(v___y_3784_);
lean_dec(v___y_3782_);
lean_dec(v_tk_3650_);
v___x_3806_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_3806_;
}
else
{
lean_object* v_only_3807_; lean_object* v___x_3808_; 
v_only_3807_ = l_Lean_Syntax_getArg(v___x_3803_, v___x_3649_);
lean_dec(v___x_3803_);
v___x_3808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3808_, 0, v_only_3807_);
lean_inc(v___y_3784_);
v___y_3748_ = v___y_3782_;
v___y_3749_ = v___x_3800_;
v___y_3750_ = v___x_3798_;
v___y_3751_ = v_unfold_3792_;
v___y_3752_ = v___y_3784_;
v___y_3753_ = v___x_3795_;
v___y_3754_ = v___x_3793_;
v___y_3755_ = v___x_3799_;
v___y_3756_ = v___y_3784_;
v___y_3757_ = v___x_3794_;
v___y_3758_ = v___x_3793_;
v___y_3759_ = v___x_3802_;
v_only_3760_ = v___x_3808_;
v___y_3761_ = v___y_3789_;
v___y_3762_ = v___y_3785_;
v___y_3763_ = v___y_3791_;
v___y_3764_ = v___y_3790_;
v___y_3765_ = v___y_3783_;
v___y_3766_ = v___y_3787_;
v___y_3767_ = v___y_3786_;
v___y_3768_ = v___y_3788_;
goto v___jp_3747_;
}
}
else
{
lean_object* v___x_3809_; 
lean_dec(v___x_3803_);
v___x_3809_ = lean_box(0);
lean_inc(v___y_3784_);
v___y_3748_ = v___y_3782_;
v___y_3749_ = v___x_3800_;
v___y_3750_ = v___x_3798_;
v___y_3751_ = v_unfold_3792_;
v___y_3752_ = v___y_3784_;
v___y_3753_ = v___x_3795_;
v___y_3754_ = v___x_3793_;
v___y_3755_ = v___x_3799_;
v___y_3756_ = v___y_3784_;
v___y_3757_ = v___x_3794_;
v___y_3758_ = v___x_3793_;
v___y_3759_ = v___x_3802_;
v_only_3760_ = v___x_3809_;
v___y_3761_ = v___y_3789_;
v___y_3762_ = v___y_3785_;
v___y_3763_ = v___y_3791_;
v___y_3764_ = v___y_3790_;
v___y_3765_ = v___y_3783_;
v___y_3766_ = v___y_3787_;
v___y_3767_ = v___y_3786_;
v___y_3768_ = v___y_3788_;
goto v___jp_3747_;
}
}
}
}
v___jp_3810_:
{
lean_object* v___x_3820_; lean_object* v___x_3821_; uint8_t v___x_3822_; 
v___x_3820_ = lean_unsigned_to_nat(2u);
v___x_3821_ = l_Lean_Syntax_getArg(v_stx_3631_, v___x_3820_);
v___x_3822_ = l_Lean_Syntax_isNone(v___x_3821_);
if (v___x_3822_ == 0)
{
uint8_t v___x_3823_; 
lean_inc(v___x_3821_);
v___x_3823_ = l_Lean_Syntax_matchesNull(v___x_3821_, v___x_3651_);
if (v___x_3823_ == 0)
{
lean_object* v___x_3824_; 
lean_dec(v___x_3821_);
lean_dec(v_squeeze_3811_);
lean_dec(v_tk_3650_);
lean_dec(v_stx_3631_);
v___x_3824_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_3824_;
}
else
{
lean_object* v_unfold_3825_; lean_object* v___x_3826_; 
v_unfold_3825_ = l_Lean_Syntax_getArg(v___x_3821_, v___x_3649_);
lean_dec(v___x_3821_);
v___x_3826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3826_, 0, v_unfold_3825_);
v___y_3782_ = v_squeeze_3811_;
v___y_3783_ = v___y_3816_;
v___y_3784_ = v___x_3820_;
v___y_3785_ = v___y_3813_;
v___y_3786_ = v___y_3818_;
v___y_3787_ = v___y_3817_;
v___y_3788_ = v___y_3819_;
v___y_3789_ = v___y_3812_;
v___y_3790_ = v___y_3815_;
v___y_3791_ = v___y_3814_;
v_unfold_3792_ = v___x_3826_;
goto v___jp_3781_;
}
}
else
{
lean_object* v___x_3827_; 
lean_dec(v___x_3821_);
v___x_3827_ = lean_box(0);
v___y_3782_ = v_squeeze_3811_;
v___y_3783_ = v___y_3816_;
v___y_3784_ = v___x_3820_;
v___y_3785_ = v___y_3813_;
v___y_3786_ = v___y_3818_;
v___y_3787_ = v___y_3817_;
v___y_3788_ = v___y_3819_;
v___y_3789_ = v___y_3812_;
v___y_3790_ = v___y_3815_;
v___y_3791_ = v___y_3814_;
v_unfold_3792_ = v___x_3827_;
goto v___jp_3781_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___boxed(lean_object* v_useReducible_3835_, lean_object* v_stx_3836_, lean_object* v_a_3837_, lean_object* v_a_3838_, lean_object* v_a_3839_, lean_object* v_a_3840_, lean_object* v_a_3841_, lean_object* v_a_3842_, lean_object* v_a_3843_, lean_object* v_a_3844_, lean_object* v_a_3845_){
_start:
{
uint8_t v_useReducible_boxed_3846_; lean_object* v_res_3847_; 
v_useReducible_boxed_3846_ = lean_unbox(v_useReducible_3835_);
v_res_3847_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore(v_useReducible_boxed_3846_, v_stx_3836_, v_a_3837_, v_a_3838_, v_a_3839_, v_a_3840_, v_a_3841_, v_a_3842_, v_a_3843_, v_a_3844_);
lean_dec(v_a_3844_);
lean_dec_ref(v_a_3843_);
lean_dec(v_a_3842_);
lean_dec_ref(v_a_3841_);
lean_dec(v_a_3840_);
lean_dec_ref(v_a_3839_);
lean_dec(v_a_3838_);
lean_dec_ref(v_a_3837_);
return v_res_3847_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1(lean_object* v_mvarId_3848_, lean_object* v_val_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_, lean_object* v___y_3856_, lean_object* v___y_3857_){
_start:
{
lean_object* v___x_3859_; 
v___x_3859_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1___redArg(v_mvarId_3848_, v_val_3849_, v___y_3855_);
return v___x_3859_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1___boxed(lean_object* v_mvarId_3860_, lean_object* v_val_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_, lean_object* v___y_3864_, lean_object* v___y_3865_, lean_object* v___y_3866_, lean_object* v___y_3867_, lean_object* v___y_3868_, lean_object* v___y_3869_, lean_object* v___y_3870_){
_start:
{
lean_object* v_res_3871_; 
v_res_3871_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1(v_mvarId_3860_, v_val_3861_, v___y_3862_, v___y_3863_, v___y_3864_, v___y_3865_, v___y_3866_, v___y_3867_, v___y_3868_, v___y_3869_);
lean_dec(v___y_3869_);
lean_dec_ref(v___y_3868_);
lean_dec(v___y_3867_);
lean_dec_ref(v___y_3866_);
lean_dec(v___y_3865_);
lean_dec_ref(v___y_3864_);
lean_dec(v___y_3863_);
lean_dec_ref(v___y_3862_);
return v_res_3871_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2_spec__3(lean_object* v_o_3872_, lean_object* v___y_3873_, lean_object* v___y_3874_, lean_object* v___y_3875_, lean_object* v___y_3876_, lean_object* v___y_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_){
_start:
{
lean_object* v___x_3882_; 
v___x_3882_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2_spec__3___redArg(v_o_3872_, v___y_3880_);
return v___x_3882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2_spec__3___boxed(lean_object* v_o_3883_, lean_object* v___y_3884_, lean_object* v___y_3885_, lean_object* v___y_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_, lean_object* v___y_3892_){
_start:
{
lean_object* v_res_3893_; 
v_res_3893_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2_spec__3(v_o_3883_, v___y_3884_, v___y_3885_, v___y_3886_, v___y_3887_, v___y_3888_, v___y_3889_, v___y_3890_, v___y_3891_);
lean_dec(v___y_3891_);
lean_dec_ref(v___y_3890_);
lean_dec(v___y_3889_);
lean_dec_ref(v___y_3888_);
lean_dec(v___y_3887_);
lean_dec_ref(v___y_3886_);
lean_dec(v___y_3885_);
lean_dec_ref(v___y_3884_);
return v_res_3893_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__5(lean_object* v_00_u03b1_3894_, lean_object* v_msg_3895_, lean_object* v___y_3896_, lean_object* v___y_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_, lean_object* v___y_3900_, lean_object* v___y_3901_, lean_object* v___y_3902_, lean_object* v___y_3903_){
_start:
{
lean_object* v___x_3905_; 
v___x_3905_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__5___redArg(v_msg_3895_, v___y_3900_, v___y_3901_, v___y_3902_, v___y_3903_);
return v___x_3905_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__5___boxed(lean_object* v_00_u03b1_3906_, lean_object* v_msg_3907_, lean_object* v___y_3908_, lean_object* v___y_3909_, lean_object* v___y_3910_, lean_object* v___y_3911_, lean_object* v___y_3912_, lean_object* v___y_3913_, lean_object* v___y_3914_, lean_object* v___y_3915_, lean_object* v___y_3916_){
_start:
{
lean_object* v_res_3917_; 
v_res_3917_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__5(v_00_u03b1_3906_, v_msg_3907_, v___y_3908_, v___y_3909_, v___y_3910_, v___y_3911_, v___y_3912_, v___y_3913_, v___y_3914_, v___y_3915_);
lean_dec(v___y_3915_);
lean_dec_ref(v___y_3914_);
lean_dec(v___y_3913_);
lean_dec_ref(v___y_3912_);
lean_dec(v___y_3911_);
lean_dec_ref(v___y_3910_);
lean_dec(v___y_3909_);
lean_dec_ref(v___y_3908_);
return v_res_3917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7(lean_object* v_00_u03b1_3918_, lean_object* v_x_3919_, lean_object* v_mkInfoTree_3920_, lean_object* v___y_3921_, lean_object* v___y_3922_, lean_object* v___y_3923_, lean_object* v___y_3924_, lean_object* v___y_3925_, lean_object* v___y_3926_, lean_object* v___y_3927_, lean_object* v___y_3928_){
_start:
{
lean_object* v___x_3930_; 
v___x_3930_ = l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg(v_x_3919_, v_mkInfoTree_3920_, v___y_3921_, v___y_3922_, v___y_3923_, v___y_3924_, v___y_3925_, v___y_3926_, v___y_3927_, v___y_3928_);
return v___x_3930_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___boxed(lean_object* v_00_u03b1_3931_, lean_object* v_x_3932_, lean_object* v_mkInfoTree_3933_, lean_object* v___y_3934_, lean_object* v___y_3935_, lean_object* v___y_3936_, lean_object* v___y_3937_, lean_object* v___y_3938_, lean_object* v___y_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_){
_start:
{
lean_object* v_res_3943_; 
v_res_3943_ = l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7(v_00_u03b1_3931_, v_x_3932_, v_mkInfoTree_3933_, v___y_3934_, v___y_3935_, v___y_3936_, v___y_3937_, v___y_3938_, v___y_3939_, v___y_3940_, v___y_3941_);
lean_dec(v___y_3941_);
lean_dec_ref(v___y_3940_);
lean_dec(v___y_3939_);
lean_dec_ref(v___y_3938_);
lean_dec(v___y_3937_);
lean_dec_ref(v___y_3936_);
lean_dec(v___y_3935_);
lean_dec_ref(v___y_3934_);
return v_res_3943_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1(lean_object* v_00_u03b2_3944_, lean_object* v_x_3945_, lean_object* v_x_3946_, lean_object* v_x_3947_){
_start:
{
lean_object* v___x_3948_; 
v___x_3948_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1___redArg(v_x_3945_, v_x_3946_, v_x_3947_);
return v___x_3948_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5(lean_object* v_00_u03b2_3949_, lean_object* v_x_3950_, size_t v_x_3951_, size_t v_x_3952_, lean_object* v_x_3953_, lean_object* v_x_3954_){
_start:
{
lean_object* v___x_3955_; 
v___x_3955_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg(v_x_3950_, v_x_3951_, v_x_3952_, v_x_3953_, v_x_3954_);
return v___x_3955_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___boxed(lean_object* v_00_u03b2_3956_, lean_object* v_x_3957_, lean_object* v_x_3958_, lean_object* v_x_3959_, lean_object* v_x_3960_, lean_object* v_x_3961_){
_start:
{
size_t v_x_106405__boxed_3962_; size_t v_x_106406__boxed_3963_; lean_object* v_res_3964_; 
v_x_106405__boxed_3962_ = lean_unbox_usize(v_x_3958_);
lean_dec(v_x_3958_);
v_x_106406__boxed_3963_ = lean_unbox_usize(v_x_3959_);
lean_dec(v_x_3959_);
v_res_3964_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5(v_00_u03b2_3956_, v_x_3957_, v_x_106405__boxed_3962_, v_x_106406__boxed_3963_, v_x_3960_, v_x_3961_);
return v_res_3964_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10(lean_object* v_00_u03b2_3965_, lean_object* v_m_3966_, lean_object* v_a_3967_){
_start:
{
uint8_t v___x_3968_; 
v___x_3968_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10___redArg(v_m_3966_, v_a_3967_);
return v___x_3968_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10___boxed(lean_object* v_00_u03b2_3969_, lean_object* v_m_3970_, lean_object* v_a_3971_){
_start:
{
uint8_t v_res_3972_; lean_object* v_r_3973_; 
v_res_3972_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10(v_00_u03b2_3969_, v_m_3970_, v_a_3971_);
lean_dec_ref(v_a_3971_);
lean_dec_ref(v_m_3970_);
v_r_3973_ = lean_box(v_res_3972_);
return v_r_3973_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11(lean_object* v_00_u03b2_3974_, lean_object* v_m_3975_, lean_object* v_a_3976_, lean_object* v_b_3977_){
_start:
{
lean_object* v___x_3978_; 
v___x_3978_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11___redArg(v_m_3975_, v_a_3976_, v_b_3977_);
return v___x_3978_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__19(lean_object* v_mvarId_3979_, lean_object* v___y_3980_, lean_object* v___y_3981_, lean_object* v___y_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_, lean_object* v___y_3988_){
_start:
{
lean_object* v___x_3990_; 
v___x_3990_ = l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__19___redArg(v_mvarId_3979_, v___y_3980_, v___y_3986_);
return v___x_3990_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__19___boxed(lean_object* v_mvarId_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_){
_start:
{
lean_object* v_res_4002_; 
v_res_4002_ = l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__19(v_mvarId_3991_, v___y_3992_, v___y_3993_, v___y_3994_, v___y_3995_, v___y_3996_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_);
lean_dec(v___y_4000_);
lean_dec_ref(v___y_3999_);
lean_dec(v___y_3998_);
lean_dec_ref(v___y_3997_);
lean_dec(v___y_3996_);
lean_dec_ref(v___y_3995_);
lean_dec(v___y_3994_);
lean_dec_ref(v___y_3993_);
lean_dec(v_mvarId_3991_);
return v_res_4002_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__20(lean_object* v_mvarId_4003_, lean_object* v___y_4004_, lean_object* v___y_4005_, lean_object* v___y_4006_, lean_object* v___y_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_, lean_object* v___y_4010_, lean_object* v___y_4011_, lean_object* v___y_4012_){
_start:
{
lean_object* v___x_4014_; 
v___x_4014_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__20___redArg(v_mvarId_4003_, v___y_4004_, v___y_4010_);
return v___x_4014_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__20___boxed(lean_object* v_mvarId_4015_, lean_object* v___y_4016_, lean_object* v___y_4017_, lean_object* v___y_4018_, lean_object* v___y_4019_, lean_object* v___y_4020_, lean_object* v___y_4021_, lean_object* v___y_4022_, lean_object* v___y_4023_, lean_object* v___y_4024_, lean_object* v___y_4025_){
_start:
{
lean_object* v_res_4026_; 
v_res_4026_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__20(v_mvarId_4015_, v___y_4016_, v___y_4017_, v___y_4018_, v___y_4019_, v___y_4020_, v___y_4021_, v___y_4022_, v___y_4023_, v___y_4024_);
lean_dec(v___y_4024_);
lean_dec_ref(v___y_4023_);
lean_dec(v___y_4022_);
lean_dec_ref(v___y_4021_);
lean_dec(v___y_4020_);
lean_dec_ref(v___y_4019_);
lean_dec(v___y_4018_);
lean_dec_ref(v___y_4017_);
lean_dec(v_mvarId_4015_);
return v_res_4026_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__11(lean_object* v_00_u03b2_4027_, lean_object* v_n_4028_, lean_object* v_k_4029_, lean_object* v_v_4030_){
_start:
{
lean_object* v___x_4031_; 
v___x_4031_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__11___redArg(v_n_4028_, v_k_4029_, v_v_4030_);
return v___x_4031_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__12(lean_object* v_00_u03b2_4032_, size_t v_depth_4033_, lean_object* v_keys_4034_, lean_object* v_vals_4035_, lean_object* v_heq_4036_, lean_object* v_i_4037_, lean_object* v_entries_4038_){
_start:
{
lean_object* v___x_4039_; 
v___x_4039_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__12___redArg(v_depth_4033_, v_keys_4034_, v_vals_4035_, v_i_4037_, v_entries_4038_);
return v___x_4039_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__12___boxed(lean_object* v_00_u03b2_4040_, lean_object* v_depth_4041_, lean_object* v_keys_4042_, lean_object* v_vals_4043_, lean_object* v_heq_4044_, lean_object* v_i_4045_, lean_object* v_entries_4046_){
_start:
{
size_t v_depth_boxed_4047_; lean_object* v_res_4048_; 
v_depth_boxed_4047_ = lean_unbox_usize(v_depth_4041_);
lean_dec(v_depth_4041_);
v_res_4048_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__12(v_00_u03b2_4040_, v_depth_boxed_4047_, v_keys_4042_, v_vals_4043_, v_heq_4044_, v_i_4045_, v_entries_4046_);
lean_dec_ref(v_vals_4043_);
lean_dec_ref(v_keys_4042_);
return v_res_4048_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10_spec__15(lean_object* v_00_u03b2_4049_, lean_object* v_a_4050_, lean_object* v_x_4051_){
_start:
{
uint8_t v___x_4052_; 
v___x_4052_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10_spec__15___redArg(v_a_4050_, v_x_4051_);
return v___x_4052_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10_spec__15___boxed(lean_object* v_00_u03b2_4053_, lean_object* v_a_4054_, lean_object* v_x_4055_){
_start:
{
uint8_t v_res_4056_; lean_object* v_r_4057_; 
v_res_4056_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10_spec__15(v_00_u03b2_4053_, v_a_4054_, v_x_4055_);
lean_dec(v_x_4055_);
lean_dec_ref(v_a_4054_);
v_r_4057_ = lean_box(v_res_4056_);
return v_r_4057_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17(lean_object* v_00_u03b2_4058_, lean_object* v_data_4059_){
_start:
{
lean_object* v___x_4060_; 
v___x_4060_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17___redArg(v_data_4059_);
return v___x_4060_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__11_spec__13(lean_object* v_00_u03b2_4061_, lean_object* v_x_4062_, lean_object* v_x_4063_, lean_object* v_x_4064_, lean_object* v_x_4065_){
_start:
{
lean_object* v___x_4066_; 
v___x_4066_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__11_spec__13___redArg(v_x_4062_, v_x_4063_, v_x_4064_, v_x_4065_);
return v___x_4066_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17_spec__19(lean_object* v_00_u03b2_4067_, lean_object* v_i_4068_, lean_object* v_source_4069_, lean_object* v_target_4070_){
_start:
{
lean_object* v___x_4071_; 
v___x_4071_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17_spec__19___redArg(v_i_4068_, v_source_4069_, v_target_4070_);
return v___x_4071_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17_spec__19_spec__23(lean_object* v_00_u03b2_4072_, lean_object* v_x_4073_, lean_object* v_x_4074_){
_start:
{
lean_object* v___x_4075_; 
v___x_4075_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17_spec__19_spec__23___redArg(v_x_4073_, v_x_4074_);
return v___x_4075_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa(lean_object* v_a_4076_, lean_object* v_a_4077_, lean_object* v_a_4078_, lean_object* v_a_4079_, lean_object* v_a_4080_, lean_object* v_a_4081_, lean_object* v_a_4082_, lean_object* v_a_4083_, lean_object* v_a_4084_){
_start:
{
uint8_t v___x_4086_; lean_object* v___x_4087_; 
v___x_4086_ = 1;
v___x_4087_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore(v___x_4086_, v_a_4076_, v_a_4077_, v_a_4078_, v_a_4079_, v_a_4080_, v_a_4081_, v_a_4082_, v_a_4083_, v_a_4084_);
return v___x_4087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___boxed(lean_object* v_a_4088_, lean_object* v_a_4089_, lean_object* v_a_4090_, lean_object* v_a_4091_, lean_object* v_a_4092_, lean_object* v_a_4093_, lean_object* v_a_4094_, lean_object* v_a_4095_, lean_object* v_a_4096_, lean_object* v_a_4097_){
_start:
{
lean_object* v_res_4098_; 
v_res_4098_ = l_Lean_Elab_Tactic_Simpa_evalSimpa(v_a_4088_, v_a_4089_, v_a_4090_, v_a_4091_, v_a_4092_, v_a_4093_, v_a_4094_, v_a_4095_, v_a_4096_);
lean_dec(v_a_4096_);
lean_dec_ref(v_a_4095_);
lean_dec(v_a_4094_);
lean_dec_ref(v_a_4093_);
lean_dec(v_a_4092_);
lean_dec_ref(v_a_4091_);
lean_dec(v_a_4090_);
lean_dec_ref(v_a_4089_);
return v_res_4098_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1(){
_start:
{
lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; 
v___x_4108_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_4109_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__2));
v___x_4110_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2));
v___x_4111_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Simpa_evalSimpa___boxed), 10, 0);
v___x_4112_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4108_, v___x_4109_, v___x_4110_, v___x_4111_);
return v___x_4112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___boxed(lean_object* v_a_4113_){
_start:
{
lean_object* v_res_4114_; 
v_res_4114_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1();
return v_res_4114_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3(){
_start:
{
lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; 
v___x_4141_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2));
v___x_4142_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__6));
v___x_4143_ = l_Lean_addBuiltinDeclarationRanges(v___x_4141_, v___x_4142_);
return v___x_4143_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___boxed(lean_object* v_a_4144_){
_start:
{
lean_object* v_res_4145_; 
v_res_4145_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3();
return v_res_4145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0(lean_object* v_x_4148_){
_start:
{
lean_object* v___x_4149_; 
v___x_4149_ = ((lean_object*)(l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0___closed__0));
return v___x_4149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0___boxed(lean_object* v_x_4150_){
_start:
{
lean_object* v_res_4151_; 
v_res_4151_ = l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0(v_x_4150_);
lean_dec(v_x_4150_);
return v_res_4151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang(lean_object* v_stx_4163_, lean_object* v_a_4164_, lean_object* v_a_4165_, lean_object* v_a_4166_, lean_object* v_a_4167_, lean_object* v_a_4168_, lean_object* v_a_4169_, lean_object* v_a_4170_, lean_object* v_a_4171_){
_start:
{
lean_object* v___y_4174_; lean_object* v___y_4175_; lean_object* v___y_4176_; lean_object* v___y_4177_; lean_object* v___y_4178_; lean_object* v___y_4179_; lean_object* v___y_4180_; lean_object* v___y_4181_; lean_object* v___y_4182_; lean_object* v___y_4183_; lean_object* v___y_4184_; lean_object* v___y_4185_; lean_object* v___y_4186_; lean_object* v___y_4187_; lean_object* v___y_4188_; lean_object* v___y_4189_; lean_object* v___y_4190_; lean_object* v___y_4191_; lean_object* v___y_4192_; uint8_t v___y_4193_; lean_object* v___y_4194_; lean_object* v___y_4195_; lean_object* v___x_4204_; uint8_t v___x_4205_; 
v___x_4204_ = ((lean_object*)(l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__0));
lean_inc(v_stx_4163_);
v___x_4205_ = l_Lean_Syntax_isOfKind(v_stx_4163_, v___x_4204_);
if (v___x_4205_ == 0)
{
lean_object* v___x_4206_; 
lean_dec(v_stx_4163_);
v___x_4206_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_4206_;
}
else
{
lean_object* v___x_4207_; lean_object* v___y_4209_; lean_object* v___y_4210_; lean_object* v___y_4211_; lean_object* v___y_4212_; lean_object* v___y_4213_; lean_object* v___y_4214_; lean_object* v___y_4215_; lean_object* v___y_4216_; lean_object* v___y_4217_; lean_object* v___y_4218_; lean_object* v___y_4219_; lean_object* v___y_4220_; lean_object* v___y_4221_; lean_object* v___y_4222_; lean_object* v___y_4223_; lean_object* v___y_4224_; lean_object* v___y_4225_; lean_object* v___y_4226_; lean_object* v___y_4227_; uint8_t v___y_4228_; lean_object* v___y_4229_; lean_object* v___y_4230_; lean_object* v___y_4245_; lean_object* v___y_4246_; lean_object* v___y_4247_; lean_object* v___y_4248_; lean_object* v___y_4249_; lean_object* v___y_4250_; lean_object* v___y_4251_; lean_object* v___y_4252_; lean_object* v___y_4253_; uint8_t v___y_4254_; lean_object* v___y_4255_; lean_object* v___y_4256_; lean_object* v___y_4257_; lean_object* v___y_4258_; lean_object* v___y_4259_; lean_object* v___y_4260_; lean_object* v___y_4261_; lean_object* v___y_4262_; lean_object* v___y_4263_; lean_object* v___y_4264_; uint8_t v___y_4265_; lean_object* v___y_4266_; lean_object* v___y_4267_; lean_object* v___y_4277_; lean_object* v___y_4278_; lean_object* v___y_4279_; lean_object* v___y_4280_; lean_object* v___y_4281_; lean_object* v___y_4282_; lean_object* v___y_4283_; lean_object* v___y_4284_; lean_object* v___y_4285_; uint8_t v___y_4286_; lean_object* v___y_4287_; lean_object* v___y_4288_; lean_object* v___y_4289_; lean_object* v___y_4290_; lean_object* v___y_4291_; lean_object* v___y_4292_; lean_object* v___y_4293_; lean_object* v___y_4294_; uint8_t v___y_4295_; lean_object* v___y_4296_; lean_object* v___y_4297_; lean_object* v___y_4298_; lean_object* v___y_4307_; lean_object* v___y_4308_; lean_object* v___y_4309_; lean_object* v___y_4310_; lean_object* v___y_4311_; lean_object* v___y_4312_; lean_object* v___y_4313_; lean_object* v___y_4314_; uint8_t v___y_4315_; lean_object* v___y_4316_; lean_object* v___y_4317_; lean_object* v___y_4318_; lean_object* v___y_4319_; lean_object* v___y_4320_; lean_object* v___y_4321_; lean_object* v___y_4322_; lean_object* v___y_4323_; lean_object* v___y_4324_; lean_object* v___y_4325_; uint8_t v___y_4326_; lean_object* v___y_4327_; lean_object* v___y_4328_; lean_object* v_tk_4337_; lean_object* v___y_4339_; lean_object* v___y_4340_; lean_object* v___y_4341_; lean_object* v___y_4342_; lean_object* v___y_4343_; lean_object* v___y_4344_; uint8_t v___y_4345_; lean_object* v___y_4346_; lean_object* v___y_4347_; lean_object* v___y_4348_; lean_object* v___y_4349_; lean_object* v___y_4350_; lean_object* v___y_4351_; lean_object* v___y_4352_; lean_object* v___y_4353_; lean_object* v___y_4354_; lean_object* v___y_4371_; lean_object* v___y_4372_; lean_object* v___y_4373_; lean_object* v___y_4374_; lean_object* v___y_4375_; uint8_t v___y_4376_; lean_object* v___y_4377_; lean_object* v_args_4378_; lean_object* v___y_4379_; lean_object* v___y_4380_; lean_object* v___y_4381_; lean_object* v___y_4382_; lean_object* v___y_4383_; lean_object* v___y_4384_; lean_object* v___y_4385_; lean_object* v___y_4386_; lean_object* v___x_4399_; lean_object* v___y_4401_; lean_object* v___y_4402_; lean_object* v___y_4403_; lean_object* v___y_4404_; uint8_t v___y_4405_; lean_object* v___y_4406_; lean_object* v___y_4407_; lean_object* v_only_4408_; lean_object* v___y_4409_; lean_object* v___y_4410_; lean_object* v___y_4411_; lean_object* v___y_4412_; lean_object* v___y_4413_; lean_object* v___y_4414_; lean_object* v___y_4415_; lean_object* v___y_4416_; lean_object* v___y_4430_; lean_object* v___y_4431_; lean_object* v_unfold_4432_; lean_object* v___y_4433_; lean_object* v___y_4434_; lean_object* v___y_4435_; lean_object* v___y_4436_; lean_object* v___y_4437_; lean_object* v___y_4438_; lean_object* v___y_4439_; lean_object* v___y_4440_; lean_object* v_squeeze_4459_; lean_object* v___y_4460_; lean_object* v___y_4461_; lean_object* v___y_4462_; lean_object* v___y_4463_; lean_object* v___y_4464_; lean_object* v___y_4465_; lean_object* v___y_4466_; lean_object* v___y_4467_; lean_object* v___x_4476_; uint8_t v___x_4477_; 
v___x_4207_ = lean_unsigned_to_nat(0u);
v_tk_4337_ = l_Lean_Syntax_getArg(v_stx_4163_, v___x_4207_);
v___x_4399_ = lean_unsigned_to_nat(1u);
v___x_4476_ = l_Lean_Syntax_getArg(v_stx_4163_, v___x_4399_);
v___x_4477_ = l_Lean_Syntax_isNone(v___x_4476_);
if (v___x_4477_ == 0)
{
uint8_t v___x_4478_; 
lean_inc(v___x_4476_);
v___x_4478_ = l_Lean_Syntax_matchesNull(v___x_4476_, v___x_4399_);
if (v___x_4478_ == 0)
{
lean_object* v___x_4479_; 
lean_dec(v___x_4476_);
lean_dec(v_tk_4337_);
lean_dec(v_stx_4163_);
v___x_4479_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_4479_;
}
else
{
lean_object* v_squeeze_4480_; lean_object* v___x_4481_; 
v_squeeze_4480_ = l_Lean_Syntax_getArg(v___x_4476_, v___x_4207_);
lean_dec(v___x_4476_);
v___x_4481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4481_, 0, v_squeeze_4480_);
v_squeeze_4459_ = v___x_4481_;
v___y_4460_ = v_a_4164_;
v___y_4461_ = v_a_4165_;
v___y_4462_ = v_a_4166_;
v___y_4463_ = v_a_4167_;
v___y_4464_ = v_a_4168_;
v___y_4465_ = v_a_4169_;
v___y_4466_ = v_a_4170_;
v___y_4467_ = v_a_4171_;
goto v___jp_4458_;
}
}
else
{
lean_object* v___x_4482_; 
lean_dec(v___x_4476_);
v___x_4482_ = lean_box(0);
v_squeeze_4459_ = v___x_4482_;
v___y_4460_ = v_a_4164_;
v___y_4461_ = v_a_4165_;
v___y_4462_ = v_a_4166_;
v___y_4463_ = v_a_4167_;
v___y_4464_ = v_a_4168_;
v___y_4465_ = v_a_4169_;
v___y_4466_ = v_a_4170_;
v___y_4467_ = v_a_4171_;
goto v___jp_4458_;
}
v___jp_4208_:
{
lean_object* v___x_4231_; lean_object* v___x_4232_; 
lean_inc_ref(v___y_4211_);
v___x_4231_ = l_Array_append___redArg(v___y_4211_, v___y_4230_);
lean_dec_ref(v___y_4230_);
lean_inc(v___y_4220_);
lean_inc(v___y_4221_);
v___x_4232_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4232_, 0, v___y_4221_);
lean_ctor_set(v___x_4232_, 1, v___y_4220_);
lean_ctor_set(v___x_4232_, 2, v___x_4231_);
if (lean_obj_tag(v___y_4212_) == 1)
{
lean_object* v_val_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; 
v_val_4233_ = lean_ctor_get(v___y_4212_, 0);
lean_inc(v_val_4233_);
lean_dec_ref_known(v___y_4212_, 1);
v___x_4234_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__4));
v___x_4235_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__4));
lean_inc_n(v___y_4221_, 4);
v___x_4236_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4236_, 0, v___y_4221_);
lean_ctor_set(v___x_4236_, 1, v___x_4235_);
lean_inc_ref(v___y_4211_);
v___x_4237_ = l_Array_append___redArg(v___y_4211_, v_val_4233_);
lean_dec(v_val_4233_);
lean_inc(v___y_4220_);
v___x_4238_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4238_, 0, v___y_4221_);
lean_ctor_set(v___x_4238_, 1, v___y_4220_);
lean_ctor_set(v___x_4238_, 2, v___x_4237_);
v___x_4239_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__5));
v___x_4240_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4240_, 0, v___y_4221_);
lean_ctor_set(v___x_4240_, 1, v___x_4239_);
v___x_4241_ = l_Lean_Syntax_node3(v___y_4221_, v___x_4234_, v___x_4236_, v___x_4238_, v___x_4240_);
v___x_4242_ = l_Array_mkArray1___redArg(v___x_4241_);
v___y_4174_ = v___y_4209_;
v___y_4175_ = v___y_4210_;
v___y_4176_ = v___y_4211_;
v___y_4177_ = v___y_4213_;
v___y_4178_ = v___y_4214_;
v___y_4179_ = v___y_4215_;
v___y_4180_ = v___y_4216_;
v___y_4181_ = v___y_4217_;
v___y_4182_ = v___y_4218_;
v___y_4183_ = v___y_4219_;
v___y_4184_ = v___y_4220_;
v___y_4185_ = v___y_4221_;
v___y_4186_ = v___y_4222_;
v___y_4187_ = v___y_4223_;
v___y_4188_ = v___y_4224_;
v___y_4189_ = v___y_4225_;
v___y_4190_ = v___y_4226_;
v___y_4191_ = v___y_4227_;
v___y_4192_ = v___x_4232_;
v___y_4193_ = v___y_4228_;
v___y_4194_ = v___y_4229_;
v___y_4195_ = v___x_4242_;
goto v___jp_4173_;
}
else
{
lean_object* v___x_4243_; 
lean_dec(v___y_4212_);
v___x_4243_ = ((lean_object*)(l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0___closed__0));
v___y_4174_ = v___y_4209_;
v___y_4175_ = v___y_4210_;
v___y_4176_ = v___y_4211_;
v___y_4177_ = v___y_4213_;
v___y_4178_ = v___y_4214_;
v___y_4179_ = v___y_4215_;
v___y_4180_ = v___y_4216_;
v___y_4181_ = v___y_4217_;
v___y_4182_ = v___y_4218_;
v___y_4183_ = v___y_4219_;
v___y_4184_ = v___y_4220_;
v___y_4185_ = v___y_4221_;
v___y_4186_ = v___y_4222_;
v___y_4187_ = v___y_4223_;
v___y_4188_ = v___y_4224_;
v___y_4189_ = v___y_4225_;
v___y_4190_ = v___y_4226_;
v___y_4191_ = v___y_4227_;
v___y_4192_ = v___x_4232_;
v___y_4193_ = v___y_4228_;
v___y_4194_ = v___y_4229_;
v___y_4195_ = v___x_4243_;
goto v___jp_4173_;
}
}
v___jp_4244_:
{
lean_object* v___x_4268_; lean_object* v___x_4269_; 
lean_inc_ref(v___y_4247_);
v___x_4268_ = l_Array_append___redArg(v___y_4247_, v___y_4267_);
lean_dec_ref(v___y_4267_);
lean_inc(v___y_4257_);
lean_inc(v___y_4258_);
v___x_4269_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4269_, 0, v___y_4258_);
lean_ctor_set(v___x_4269_, 1, v___y_4257_);
lean_ctor_set(v___x_4269_, 2, v___x_4268_);
if (lean_obj_tag(v___y_4264_) == 1)
{
lean_object* v_val_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; 
v_val_4270_ = lean_ctor_get(v___y_4264_, 0);
lean_inc(v_val_4270_);
lean_dec_ref_known(v___y_4264_, 1);
v___x_4271_ = l_Lean_SourceInfo_fromRef(v_val_4270_, v___y_4254_);
lean_dec(v_val_4270_);
v___x_4272_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__6));
v___x_4273_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4273_, 0, v___x_4271_);
lean_ctor_set(v___x_4273_, 1, v___x_4272_);
v___x_4274_ = l_Array_mkArray1___redArg(v___x_4273_);
v___y_4209_ = v___y_4245_;
v___y_4210_ = v___y_4246_;
v___y_4211_ = v___y_4247_;
v___y_4212_ = v___y_4248_;
v___y_4213_ = v___y_4249_;
v___y_4214_ = v___y_4250_;
v___y_4215_ = v___y_4251_;
v___y_4216_ = v___y_4252_;
v___y_4217_ = v___y_4253_;
v___y_4218_ = v___y_4256_;
v___y_4219_ = v___y_4255_;
v___y_4220_ = v___y_4257_;
v___y_4221_ = v___y_4258_;
v___y_4222_ = v___x_4269_;
v___y_4223_ = v___y_4259_;
v___y_4224_ = v___y_4260_;
v___y_4225_ = v___y_4261_;
v___y_4226_ = v___y_4262_;
v___y_4227_ = v___y_4263_;
v___y_4228_ = v___y_4265_;
v___y_4229_ = v___y_4266_;
v___y_4230_ = v___x_4274_;
goto v___jp_4208_;
}
else
{
lean_object* v___x_4275_; 
v___x_4275_ = l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0(v___y_4264_);
lean_dec(v___y_4264_);
v___y_4209_ = v___y_4245_;
v___y_4210_ = v___y_4246_;
v___y_4211_ = v___y_4247_;
v___y_4212_ = v___y_4248_;
v___y_4213_ = v___y_4249_;
v___y_4214_ = v___y_4250_;
v___y_4215_ = v___y_4251_;
v___y_4216_ = v___y_4252_;
v___y_4217_ = v___y_4253_;
v___y_4218_ = v___y_4256_;
v___y_4219_ = v___y_4255_;
v___y_4220_ = v___y_4257_;
v___y_4221_ = v___y_4258_;
v___y_4222_ = v___x_4269_;
v___y_4223_ = v___y_4259_;
v___y_4224_ = v___y_4260_;
v___y_4225_ = v___y_4261_;
v___y_4226_ = v___y_4262_;
v___y_4227_ = v___y_4263_;
v___y_4228_ = v___y_4265_;
v___y_4229_ = v___y_4266_;
v___y_4230_ = v___x_4275_;
goto v___jp_4208_;
}
}
v___jp_4276_:
{
lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; 
lean_inc_ref(v___y_4279_);
v___x_4299_ = l_Array_append___redArg(v___y_4279_, v___y_4298_);
lean_dec_ref(v___y_4298_);
lean_inc(v___y_4289_);
lean_inc(v___y_4290_);
v___x_4300_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4300_, 0, v___y_4290_);
lean_ctor_set(v___x_4300_, 1, v___y_4289_);
lean_ctor_set(v___x_4300_, 2, v___x_4299_);
v___x_4301_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__6));
if (lean_obj_tag(v___y_4287_) == 0)
{
lean_object* v___x_4302_; 
v___x_4302_ = ((lean_object*)(l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0___closed__0));
v___y_4245_ = v___y_4277_;
v___y_4246_ = v___y_4278_;
v___y_4247_ = v___y_4279_;
v___y_4248_ = v___y_4280_;
v___y_4249_ = v___y_4281_;
v___y_4250_ = v___y_4282_;
v___y_4251_ = v___y_4283_;
v___y_4252_ = v___y_4284_;
v___y_4253_ = v___y_4285_;
v___y_4254_ = v___y_4286_;
v___y_4255_ = v___x_4301_;
v___y_4256_ = v___y_4288_;
v___y_4257_ = v___y_4289_;
v___y_4258_ = v___y_4290_;
v___y_4259_ = v___y_4291_;
v___y_4260_ = v___y_4292_;
v___y_4261_ = v___y_4293_;
v___y_4262_ = v___x_4300_;
v___y_4263_ = v___y_4294_;
v___y_4264_ = v___y_4296_;
v___y_4265_ = v___y_4295_;
v___y_4266_ = v___y_4297_;
v___y_4267_ = v___x_4302_;
goto v___jp_4244_;
}
else
{
lean_object* v_val_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; 
v_val_4303_ = lean_ctor_get(v___y_4287_, 0);
lean_inc(v_val_4303_);
lean_dec_ref_known(v___y_4287_, 1);
v___x_4304_ = ((lean_object*)(l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0___closed__0));
v___x_4305_ = lean_array_push(v___x_4304_, v_val_4303_);
v___y_4245_ = v___y_4277_;
v___y_4246_ = v___y_4278_;
v___y_4247_ = v___y_4279_;
v___y_4248_ = v___y_4280_;
v___y_4249_ = v___y_4281_;
v___y_4250_ = v___y_4282_;
v___y_4251_ = v___y_4283_;
v___y_4252_ = v___y_4284_;
v___y_4253_ = v___y_4285_;
v___y_4254_ = v___y_4286_;
v___y_4255_ = v___x_4301_;
v___y_4256_ = v___y_4288_;
v___y_4257_ = v___y_4289_;
v___y_4258_ = v___y_4290_;
v___y_4259_ = v___y_4291_;
v___y_4260_ = v___y_4292_;
v___y_4261_ = v___y_4293_;
v___y_4262_ = v___x_4300_;
v___y_4263_ = v___y_4294_;
v___y_4264_ = v___y_4296_;
v___y_4265_ = v___y_4295_;
v___y_4266_ = v___y_4297_;
v___y_4267_ = v___x_4305_;
goto v___jp_4244_;
}
}
v___jp_4306_:
{
lean_object* v___x_4329_; lean_object* v___x_4330_; 
lean_inc_ref(v___y_4309_);
v___x_4329_ = l_Array_append___redArg(v___y_4309_, v___y_4328_);
lean_dec_ref(v___y_4328_);
lean_inc(v___y_4318_);
lean_inc(v___y_4319_);
v___x_4330_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4330_, 0, v___y_4319_);
lean_ctor_set(v___x_4330_, 1, v___y_4318_);
lean_ctor_set(v___x_4330_, 2, v___x_4329_);
if (lean_obj_tag(v___y_4322_) == 1)
{
lean_object* v_val_4331_; lean_object* v___x_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; lean_object* v___x_4335_; 
v_val_4331_ = lean_ctor_get(v___y_4322_, 0);
lean_inc(v_val_4331_);
lean_dec_ref_known(v___y_4322_, 1);
v___x_4332_ = l_Lean_SourceInfo_fromRef(v_val_4331_, v___y_4315_);
lean_dec(v_val_4331_);
v___x_4333_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__9));
v___x_4334_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4334_, 0, v___x_4332_);
lean_ctor_set(v___x_4334_, 1, v___x_4333_);
v___x_4335_ = l_Array_mkArray1___redArg(v___x_4334_);
v___y_4277_ = v___y_4307_;
v___y_4278_ = v___y_4308_;
v___y_4279_ = v___y_4309_;
v___y_4280_ = v___y_4310_;
v___y_4281_ = v___y_4311_;
v___y_4282_ = v___x_4330_;
v___y_4283_ = v___y_4312_;
v___y_4284_ = v___y_4313_;
v___y_4285_ = v___y_4314_;
v___y_4286_ = v___y_4315_;
v___y_4287_ = v___y_4317_;
v___y_4288_ = v___y_4316_;
v___y_4289_ = v___y_4318_;
v___y_4290_ = v___y_4319_;
v___y_4291_ = v___y_4320_;
v___y_4292_ = v___y_4321_;
v___y_4293_ = v___y_4323_;
v___y_4294_ = v___y_4324_;
v___y_4295_ = v___y_4326_;
v___y_4296_ = v___y_4325_;
v___y_4297_ = v___y_4327_;
v___y_4298_ = v___x_4335_;
goto v___jp_4276_;
}
else
{
lean_object* v___x_4336_; 
v___x_4336_ = l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0(v___y_4322_);
lean_dec(v___y_4322_);
v___y_4277_ = v___y_4307_;
v___y_4278_ = v___y_4308_;
v___y_4279_ = v___y_4309_;
v___y_4280_ = v___y_4310_;
v___y_4281_ = v___y_4311_;
v___y_4282_ = v___x_4330_;
v___y_4283_ = v___y_4312_;
v___y_4284_ = v___y_4313_;
v___y_4285_ = v___y_4314_;
v___y_4286_ = v___y_4315_;
v___y_4287_ = v___y_4317_;
v___y_4288_ = v___y_4316_;
v___y_4289_ = v___y_4318_;
v___y_4290_ = v___y_4319_;
v___y_4291_ = v___y_4320_;
v___y_4292_ = v___y_4321_;
v___y_4293_ = v___y_4323_;
v___y_4294_ = v___y_4324_;
v___y_4295_ = v___y_4326_;
v___y_4296_ = v___y_4325_;
v___y_4297_ = v___y_4327_;
v___y_4298_ = v___x_4336_;
goto v___jp_4276_;
}
}
v___jp_4338_:
{
lean_object* v_ref_4355_; uint8_t v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; 
v_ref_4355_ = lean_ctor_get(v___y_4350_, 2);
v___x_4356_ = 0;
v___x_4357_ = l_Lean_SourceInfo_fromRef(v_ref_4355_, v___x_4356_);
v___x_4358_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__1));
v___x_4359_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__2));
v___x_4360_ = l_Lean_SourceInfo_fromRef(v_tk_4337_, v___y_4345_);
lean_dec(v_tk_4337_);
v___x_4361_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4361_, 0, v___x_4360_);
lean_ctor_set(v___x_4361_, 1, v___x_4358_);
v___x_4362_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__2));
v___x_4363_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3);
if (lean_obj_tag(v___y_4347_) == 1)
{
lean_object* v_val_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; 
v_val_4364_ = lean_ctor_get(v___y_4347_, 0);
lean_inc(v_val_4364_);
lean_dec_ref_known(v___y_4347_, 1);
v___x_4365_ = l_Lean_SourceInfo_fromRef(v_val_4364_, v___y_4345_);
lean_dec(v_val_4364_);
v___x_4366_ = ((lean_object*)(l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__1));
v___x_4367_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4367_, 0, v___x_4365_);
lean_ctor_set(v___x_4367_, 1, v___x_4366_);
v___x_4368_ = l_Array_mkArray1___redArg(v___x_4367_);
v___y_4307_ = v___y_4339_;
v___y_4308_ = v___y_4340_;
v___y_4309_ = v___x_4363_;
v___y_4310_ = v___y_4341_;
v___y_4311_ = v___y_4342_;
v___y_4312_ = v___x_4359_;
v___y_4313_ = v___y_4343_;
v___y_4314_ = v___y_4344_;
v___y_4315_ = v___y_4345_;
v___y_4316_ = v___y_4346_;
v___y_4317_ = v___y_4354_;
v___y_4318_ = v___x_4362_;
v___y_4319_ = v___x_4357_;
v___y_4320_ = v___x_4361_;
v___y_4321_ = v___y_4348_;
v___y_4322_ = v___y_4349_;
v___y_4323_ = v___y_4350_;
v___y_4324_ = v___y_4351_;
v___y_4325_ = v___y_4352_;
v___y_4326_ = v___x_4356_;
v___y_4327_ = v___y_4353_;
v___y_4328_ = v___x_4368_;
goto v___jp_4306_;
}
else
{
lean_object* v___x_4369_; 
v___x_4369_ = l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0(v___y_4347_);
lean_dec(v___y_4347_);
v___y_4307_ = v___y_4339_;
v___y_4308_ = v___y_4340_;
v___y_4309_ = v___x_4363_;
v___y_4310_ = v___y_4341_;
v___y_4311_ = v___y_4342_;
v___y_4312_ = v___x_4359_;
v___y_4313_ = v___y_4343_;
v___y_4314_ = v___y_4344_;
v___y_4315_ = v___y_4345_;
v___y_4316_ = v___y_4346_;
v___y_4317_ = v___y_4354_;
v___y_4318_ = v___x_4362_;
v___y_4319_ = v___x_4357_;
v___y_4320_ = v___x_4361_;
v___y_4321_ = v___y_4348_;
v___y_4322_ = v___y_4349_;
v___y_4323_ = v___y_4350_;
v___y_4324_ = v___y_4351_;
v___y_4325_ = v___y_4352_;
v___y_4326_ = v___x_4356_;
v___y_4327_ = v___y_4353_;
v___y_4328_ = v___x_4369_;
goto v___jp_4306_;
}
}
v___jp_4370_:
{
lean_object* v___x_4387_; lean_object* v___x_4388_; lean_object* v___x_4389_; 
v___x_4387_ = lean_unsigned_to_nat(5u);
v___x_4388_ = l_Lean_Syntax_getArg(v___y_4374_, v___x_4387_);
lean_dec(v___y_4374_);
v___x_4389_ = l_Lean_Syntax_getOptional_x3f(v___y_4377_);
lean_dec(v___y_4377_);
if (lean_obj_tag(v___x_4389_) == 0)
{
lean_object* v___x_4390_; 
v___x_4390_ = lean_box(0);
v___y_4339_ = v___y_4381_;
v___y_4340_ = v___y_4380_;
v___y_4341_ = v_args_4378_;
v___y_4342_ = v___y_4383_;
v___y_4343_ = v___y_4386_;
v___y_4344_ = v___y_4379_;
v___y_4345_ = v___y_4376_;
v___y_4346_ = v___y_4384_;
v___y_4347_ = v___y_4371_;
v___y_4348_ = v___y_4372_;
v___y_4349_ = v___y_4373_;
v___y_4350_ = v___y_4385_;
v___y_4351_ = v___y_4382_;
v___y_4352_ = v___y_4375_;
v___y_4353_ = v___x_4388_;
v___y_4354_ = v___x_4390_;
goto v___jp_4338_;
}
else
{
lean_object* v_val_4391_; lean_object* v___x_4393_; uint8_t v_isShared_4394_; uint8_t v_isSharedCheck_4398_; 
v_val_4391_ = lean_ctor_get(v___x_4389_, 0);
v_isSharedCheck_4398_ = !lean_is_exclusive(v___x_4389_);
if (v_isSharedCheck_4398_ == 0)
{
v___x_4393_ = v___x_4389_;
v_isShared_4394_ = v_isSharedCheck_4398_;
goto v_resetjp_4392_;
}
else
{
lean_inc(v_val_4391_);
lean_dec(v___x_4389_);
v___x_4393_ = lean_box(0);
v_isShared_4394_ = v_isSharedCheck_4398_;
goto v_resetjp_4392_;
}
v_resetjp_4392_:
{
lean_object* v___x_4396_; 
if (v_isShared_4394_ == 0)
{
v___x_4396_ = v___x_4393_;
goto v_reusejp_4395_;
}
else
{
lean_object* v_reuseFailAlloc_4397_; 
v_reuseFailAlloc_4397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4397_, 0, v_val_4391_);
v___x_4396_ = v_reuseFailAlloc_4397_;
goto v_reusejp_4395_;
}
v_reusejp_4395_:
{
v___y_4339_ = v___y_4381_;
v___y_4340_ = v___y_4380_;
v___y_4341_ = v_args_4378_;
v___y_4342_ = v___y_4383_;
v___y_4343_ = v___y_4386_;
v___y_4344_ = v___y_4379_;
v___y_4345_ = v___y_4376_;
v___y_4346_ = v___y_4384_;
v___y_4347_ = v___y_4371_;
v___y_4348_ = v___y_4372_;
v___y_4349_ = v___y_4373_;
v___y_4350_ = v___y_4385_;
v___y_4351_ = v___y_4382_;
v___y_4352_ = v___y_4375_;
v___y_4353_ = v___x_4388_;
v___y_4354_ = v___x_4396_;
goto v___jp_4338_;
}
}
}
}
v___jp_4400_:
{
lean_object* v___x_4417_; uint8_t v___x_4418_; 
v___x_4417_ = l_Lean_Syntax_getArg(v___y_4404_, v___y_4407_);
v___x_4418_ = l_Lean_Syntax_isNone(v___x_4417_);
if (v___x_4418_ == 0)
{
uint8_t v___x_4419_; 
lean_inc(v___x_4417_);
v___x_4419_ = l_Lean_Syntax_matchesNull(v___x_4417_, v___x_4399_);
if (v___x_4419_ == 0)
{
lean_object* v___x_4420_; 
lean_dec(v___x_4417_);
lean_dec(v_only_4408_);
lean_dec(v___y_4406_);
lean_dec(v___y_4404_);
lean_dec(v___y_4403_);
lean_dec(v___y_4402_);
lean_dec(v___y_4401_);
lean_dec(v_tk_4337_);
v___x_4420_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_4420_;
}
else
{
lean_object* v___x_4421_; lean_object* v___x_4422_; uint8_t v___x_4423_; 
v___x_4421_ = l_Lean_Syntax_getArg(v___x_4417_, v___x_4207_);
lean_dec(v___x_4417_);
v___x_4422_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__4));
lean_inc(v___x_4421_);
v___x_4423_ = l_Lean_Syntax_isOfKind(v___x_4421_, v___x_4422_);
if (v___x_4423_ == 0)
{
lean_object* v___x_4424_; 
lean_dec(v___x_4421_);
lean_dec(v_only_4408_);
lean_dec(v___y_4406_);
lean_dec(v___y_4404_);
lean_dec(v___y_4403_);
lean_dec(v___y_4402_);
lean_dec(v___y_4401_);
lean_dec(v_tk_4337_);
v___x_4424_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_4424_;
}
else
{
lean_object* v___x_4425_; lean_object* v_args_4426_; lean_object* v___x_4427_; 
v___x_4425_ = l_Lean_Syntax_getArg(v___x_4421_, v___x_4399_);
lean_dec(v___x_4421_);
v_args_4426_ = l_Lean_Syntax_getArgs(v___x_4425_);
lean_dec(v___x_4425_);
v___x_4427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4427_, 0, v_args_4426_);
v___y_4371_ = v___y_4401_;
v___y_4372_ = v___y_4402_;
v___y_4373_ = v___y_4403_;
v___y_4374_ = v___y_4404_;
v___y_4375_ = v_only_4408_;
v___y_4376_ = v___y_4405_;
v___y_4377_ = v___y_4406_;
v_args_4378_ = v___x_4427_;
v___y_4379_ = v___y_4409_;
v___y_4380_ = v___y_4410_;
v___y_4381_ = v___y_4411_;
v___y_4382_ = v___y_4412_;
v___y_4383_ = v___y_4413_;
v___y_4384_ = v___y_4414_;
v___y_4385_ = v___y_4415_;
v___y_4386_ = v___y_4416_;
goto v___jp_4370_;
}
}
}
else
{
lean_object* v___x_4428_; 
lean_dec(v___x_4417_);
v___x_4428_ = lean_box(0);
v___y_4371_ = v___y_4401_;
v___y_4372_ = v___y_4402_;
v___y_4373_ = v___y_4403_;
v___y_4374_ = v___y_4404_;
v___y_4375_ = v_only_4408_;
v___y_4376_ = v___y_4405_;
v___y_4377_ = v___y_4406_;
v_args_4378_ = v___x_4428_;
v___y_4379_ = v___y_4409_;
v___y_4380_ = v___y_4410_;
v___y_4381_ = v___y_4411_;
v___y_4382_ = v___y_4412_;
v___y_4383_ = v___y_4413_;
v___y_4384_ = v___y_4414_;
v___y_4385_ = v___y_4415_;
v___y_4386_ = v___y_4416_;
goto v___jp_4370_;
}
}
v___jp_4429_:
{
lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; uint8_t v___x_4444_; 
v___x_4441_ = lean_unsigned_to_nat(3u);
v___x_4442_ = l_Lean_Syntax_getArg(v_stx_4163_, v___x_4441_);
lean_dec(v_stx_4163_);
v___x_4443_ = ((lean_object*)(l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__2));
lean_inc(v___x_4442_);
v___x_4444_ = l_Lean_Syntax_isOfKind(v___x_4442_, v___x_4443_);
if (v___x_4444_ == 0)
{
lean_object* v___x_4445_; 
lean_dec(v___x_4442_);
lean_dec(v_unfold_4432_);
lean_dec(v___y_4430_);
lean_dec(v_tk_4337_);
v___x_4445_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_4445_;
}
else
{
lean_object* v___x_4446_; lean_object* v___x_4447_; uint8_t v___x_4448_; 
v___x_4446_ = l_Lean_Syntax_getArg(v___x_4442_, v___x_4207_);
v___x_4447_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__8));
lean_inc(v___x_4446_);
v___x_4448_ = l_Lean_Syntax_isOfKind(v___x_4446_, v___x_4447_);
if (v___x_4448_ == 0)
{
lean_object* v___x_4449_; 
lean_dec(v___x_4446_);
lean_dec(v___x_4442_);
lean_dec(v_unfold_4432_);
lean_dec(v___y_4430_);
lean_dec(v_tk_4337_);
v___x_4449_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_4449_;
}
else
{
lean_object* v___x_4450_; lean_object* v___x_4451_; uint8_t v___x_4452_; 
v___x_4450_ = l_Lean_Syntax_getArg(v___x_4442_, v___x_4399_);
v___x_4451_ = l_Lean_Syntax_getArg(v___x_4442_, v___y_4431_);
v___x_4452_ = l_Lean_Syntax_isNone(v___x_4451_);
if (v___x_4452_ == 0)
{
uint8_t v___x_4453_; 
lean_inc(v___x_4451_);
v___x_4453_ = l_Lean_Syntax_matchesNull(v___x_4451_, v___x_4399_);
if (v___x_4453_ == 0)
{
lean_object* v___x_4454_; 
lean_dec(v___x_4451_);
lean_dec(v___x_4450_);
lean_dec(v___x_4446_);
lean_dec(v___x_4442_);
lean_dec(v_unfold_4432_);
lean_dec(v___y_4430_);
lean_dec(v_tk_4337_);
v___x_4454_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_4454_;
}
else
{
lean_object* v_only_4455_; lean_object* v___x_4456_; 
v_only_4455_ = l_Lean_Syntax_getArg(v___x_4451_, v___x_4207_);
lean_dec(v___x_4451_);
v___x_4456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4456_, 0, v_only_4455_);
v___y_4401_ = v___y_4430_;
v___y_4402_ = v___x_4446_;
v___y_4403_ = v_unfold_4432_;
v___y_4404_ = v___x_4442_;
v___y_4405_ = v___x_4448_;
v___y_4406_ = v___x_4450_;
v___y_4407_ = v___x_4441_;
v_only_4408_ = v___x_4456_;
v___y_4409_ = v___y_4433_;
v___y_4410_ = v___y_4434_;
v___y_4411_ = v___y_4435_;
v___y_4412_ = v___y_4436_;
v___y_4413_ = v___y_4437_;
v___y_4414_ = v___y_4438_;
v___y_4415_ = v___y_4439_;
v___y_4416_ = v___y_4440_;
goto v___jp_4400_;
}
}
else
{
lean_object* v___x_4457_; 
lean_dec(v___x_4451_);
v___x_4457_ = lean_box(0);
v___y_4401_ = v___y_4430_;
v___y_4402_ = v___x_4446_;
v___y_4403_ = v_unfold_4432_;
v___y_4404_ = v___x_4442_;
v___y_4405_ = v___x_4448_;
v___y_4406_ = v___x_4450_;
v___y_4407_ = v___x_4441_;
v_only_4408_ = v___x_4457_;
v___y_4409_ = v___y_4433_;
v___y_4410_ = v___y_4434_;
v___y_4411_ = v___y_4435_;
v___y_4412_ = v___y_4436_;
v___y_4413_ = v___y_4437_;
v___y_4414_ = v___y_4438_;
v___y_4415_ = v___y_4439_;
v___y_4416_ = v___y_4440_;
goto v___jp_4400_;
}
}
}
}
v___jp_4458_:
{
lean_object* v___x_4468_; lean_object* v___x_4469_; uint8_t v___x_4470_; 
v___x_4468_ = lean_unsigned_to_nat(2u);
v___x_4469_ = l_Lean_Syntax_getArg(v_stx_4163_, v___x_4468_);
v___x_4470_ = l_Lean_Syntax_isNone(v___x_4469_);
if (v___x_4470_ == 0)
{
uint8_t v___x_4471_; 
lean_inc(v___x_4469_);
v___x_4471_ = l_Lean_Syntax_matchesNull(v___x_4469_, v___x_4399_);
if (v___x_4471_ == 0)
{
lean_object* v___x_4472_; 
lean_dec(v___x_4469_);
lean_dec(v_squeeze_4459_);
lean_dec(v_tk_4337_);
lean_dec(v_stx_4163_);
v___x_4472_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_4472_;
}
else
{
lean_object* v_unfold_4473_; lean_object* v___x_4474_; 
v_unfold_4473_ = l_Lean_Syntax_getArg(v___x_4469_, v___x_4207_);
lean_dec(v___x_4469_);
v___x_4474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4474_, 0, v_unfold_4473_);
v___y_4430_ = v_squeeze_4459_;
v___y_4431_ = v___x_4468_;
v_unfold_4432_ = v___x_4474_;
v___y_4433_ = v___y_4460_;
v___y_4434_ = v___y_4461_;
v___y_4435_ = v___y_4462_;
v___y_4436_ = v___y_4463_;
v___y_4437_ = v___y_4464_;
v___y_4438_ = v___y_4465_;
v___y_4439_ = v___y_4466_;
v___y_4440_ = v___y_4467_;
goto v___jp_4429_;
}
}
else
{
lean_object* v___x_4475_; 
lean_dec(v___x_4469_);
v___x_4475_ = lean_box(0);
v___y_4430_ = v_squeeze_4459_;
v___y_4431_ = v___x_4468_;
v_unfold_4432_ = v___x_4475_;
v___y_4433_ = v___y_4460_;
v___y_4434_ = v___y_4461_;
v___y_4435_ = v___y_4462_;
v___y_4436_ = v___y_4463_;
v___y_4437_ = v___y_4464_;
v___y_4438_ = v___y_4465_;
v___y_4439_ = v___y_4466_;
v___y_4440_ = v___y_4467_;
goto v___jp_4429_;
}
}
}
v___jp_4173_:
{
lean_object* v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; 
lean_inc_ref(v___y_4176_);
v___x_4196_ = l_Array_append___redArg(v___y_4176_, v___y_4195_);
lean_dec_ref(v___y_4195_);
lean_inc_n(v___y_4184_, 2);
lean_inc_n(v___y_4185_, 4);
v___x_4197_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4197_, 0, v___y_4185_);
lean_ctor_set(v___x_4197_, 1, v___y_4184_);
lean_ctor_set(v___x_4197_, 2, v___x_4196_);
v___x_4198_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__8___closed__5));
v___x_4199_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4199_, 0, v___y_4185_);
lean_ctor_set(v___x_4199_, 1, v___x_4198_);
v___x_4200_ = l_Lean_Syntax_node2(v___y_4185_, v___y_4184_, v___x_4199_, v___y_4194_);
lean_inc(v___y_4183_);
v___x_4201_ = l_Lean_Syntax_node5(v___y_4185_, v___y_4183_, v___y_4188_, v___y_4186_, v___y_4192_, v___x_4197_, v___x_4200_);
lean_inc(v___y_4179_);
v___x_4202_ = l_Lean_Syntax_node4(v___y_4185_, v___y_4179_, v___y_4187_, v___y_4178_, v___y_4190_, v___x_4201_);
v___x_4203_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore(v___y_4193_, v___x_4202_, v___y_4181_, v___y_4175_, v___y_4174_, v___y_4191_, v___y_4177_, v___y_4182_, v___y_4189_, v___y_4180_);
return v___x_4203_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___boxed(lean_object* v_stx_4483_, lean_object* v_a_4484_, lean_object* v_a_4485_, lean_object* v_a_4486_, lean_object* v_a_4487_, lean_object* v_a_4488_, lean_object* v_a_4489_, lean_object* v_a_4490_, lean_object* v_a_4491_, lean_object* v_a_4492_){
_start:
{
lean_object* v_res_4493_; 
v_res_4493_ = l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang(v_stx_4483_, v_a_4484_, v_a_4485_, v_a_4486_, v_a_4487_, v_a_4488_, v_a_4489_, v_a_4490_, v_a_4491_);
lean_dec(v_a_4491_);
lean_dec_ref(v_a_4490_);
lean_dec(v_a_4489_);
lean_dec_ref(v_a_4488_);
lean_dec(v_a_4487_);
lean_dec_ref(v_a_4486_);
lean_dec(v_a_4485_);
lean_dec_ref(v_a_4484_);
return v_res_4493_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1(){
_start:
{
lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; lean_object* v___x_4506_; 
v___x_4502_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_4503_ = ((lean_object*)(l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__0));
v___x_4504_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__1));
v___x_4505_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___boxed), 10, 0);
v___x_4506_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4502_, v___x_4503_, v___x_4504_, v___x_4505_);
return v___x_4506_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___boxed(lean_object* v_a_4507_){
_start:
{
lean_object* v_res_4508_; 
v_res_4508_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1();
return v_res_4508_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_TryThis(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Simp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_App(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Simpa(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_linter_unnecessarySimpa = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_linter_unnecessarySimpa);
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Simpa(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_TryThis(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Simp(uint8_t builtin);
lean_object* initialize_Lean_Elab_App(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Simpa(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Simpa(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Simpa(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Simpa(builtin);
}
#ifdef __cplusplus
}
#endif
