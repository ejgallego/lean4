// Lean compiler output
// Module: Lean.Elab.Extra
// Imports: public import Lean.Elab.App public import Lean.Elab.BuiltinNotation
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
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabAppArgs(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFunUnit___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withTermInfoContext_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ensureHasType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_coerceSimple_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Elab_Term_mkCoe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
extern lean_object* l_Lean_Meta_instInhabitedDefaultInstances_default;
lean_object* l_List_reverse___redArg(lean_object*);
extern lean_object* l_Lean_Meta_defaultInstanceExtension;
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_Expr_getForallBody(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
extern lean_object* l_Lean_Elab_Term_termElabAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_tryPostpone(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandMacroReportingDeprecated_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withDeprecationContextForSyntax___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getHygieneInfo(lean_object*);
uint8_t l_Lean_Elab_Term_hasCDot(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resolveId_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_instantiate_level_mvars(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeLightImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDefault(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkOfNonempty(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Meta_mkLabeledSorry(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__3___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__3___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__3___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__3___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__3___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__3___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__3___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "invalid 'for_in%' notation, expected type is not available"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn___closed__1;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 66, .m_data = "invalid 'for_in%' notation, expected type is not of the form `M α`"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn___closed__2 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_throwForInFailure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "failed to synthesize instance for 'for_in%' notation"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_throwForInFailure___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_throwForInFailure___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_throwForInFailure___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_throwForInFailure___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_throwForInFailure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_throwForInFailure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Term_elabForIn_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Term_elabForIn_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Term_elabForIn_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Term_elabForIn_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Term_elabForIn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Term_elabForIn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_elabForIn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Term_elabForIn___closed__0 = (const lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value;
static const lean_string_object l_Lean_Elab_Term_elabForIn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Term_elabForIn___closed__1 = (const lean_object*)&l_Lean_Elab_Term_elabForIn___closed__1_value;
static const lean_string_object l_Lean_Elab_Term_elabForIn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_Term_elabForIn___closed__2 = (const lean_object*)&l_Lean_Elab_Term_elabForIn___closed__2_value;
static const lean_string_object l_Lean_Elab_Term_elabForIn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "forInMacro"};
static const lean_object* l_Lean_Elab_Term_elabForIn___closed__3 = (const lean_object*)&l_Lean_Elab_Term_elabForIn___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Term_elabForIn___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_elabForIn___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Term_elabForIn___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Term_elabForIn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__3_value),LEAN_SCALAR_PTR_LITERAL(235, 146, 198, 65, 99, 218, 100, 233)}};
static const lean_object* l_Lean_Elab_Term_elabForIn___closed__4 = (const lean_object*)&l_Lean_Elab_Term_elabForIn___closed__4_value;
static const lean_string_object l_Lean_Elab_Term_elabForIn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ForIn"};
static const lean_object* l_Lean_Elab_Term_elabForIn___closed__5 = (const lean_object*)&l_Lean_Elab_Term_elabForIn___closed__5_value;
static const lean_string_object l_Lean_Elab_Term_elabForIn___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "forIn"};
static const lean_object* l_Lean_Elab_Term_elabForIn___closed__6 = (const lean_object*)&l_Lean_Elab_Term_elabForIn___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Term_elabForIn___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__5_value),LEAN_SCALAR_PTR_LITERAL(223, 152, 230, 155, 97, 233, 45, 158)}};
static const lean_ctor_object l_Lean_Elab_Term_elabForIn___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__6_value),LEAN_SCALAR_PTR_LITERAL(9, 12, 142, 239, 44, 138, 10, 93)}};
static const lean_object* l_Lean_Elab_Term_elabForIn___closed__7 = (const lean_object*)&l_Lean_Elab_Term_elabForIn___closed__7_value;
static const lean_string_object l_Lean_Elab_Term_elabForIn___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "m"};
static const lean_object* l_Lean_Elab_Term_elabForIn___closed__8 = (const lean_object*)&l_Lean_Elab_Term_elabForIn___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Term_elabForIn___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__8_value),LEAN_SCALAR_PTR_LITERAL(165, 239, 73, 172, 230, 126, 139, 134)}};
static const lean_object* l_Lean_Elab_Term_elabForIn___closed__9 = (const lean_object*)&l_Lean_Elab_Term_elabForIn___closed__9_value;
static const lean_string_object l_Lean_Elab_Term_elabForIn___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "α"};
static const lean_object* l_Lean_Elab_Term_elabForIn___closed__10 = (const lean_object*)&l_Lean_Elab_Term_elabForIn___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Term_elabForIn___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__10_value),LEAN_SCALAR_PTR_LITERAL(102, 24, 27, 80, 217, 159, 184, 13)}};
static const lean_object* l_Lean_Elab_Term_elabForIn___closed__11 = (const lean_object*)&l_Lean_Elab_Term_elabForIn___closed__11_value;
static const lean_string_object l_Lean_Elab_Term_elabForIn___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "self"};
static const lean_object* l_Lean_Elab_Term_elabForIn___closed__12 = (const lean_object*)&l_Lean_Elab_Term_elabForIn___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Term_elabForIn___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__12_value),LEAN_SCALAR_PTR_LITERAL(120, 226, 111, 209, 39, 160, 197, 219)}};
static const lean_object* l_Lean_Elab_Term_elabForIn___closed__13 = (const lean_object*)&l_Lean_Elab_Term_elabForIn___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Term_elabForIn___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__5_value),LEAN_SCALAR_PTR_LITERAL(223, 152, 230, 155, 97, 233, 45, 158)}};
static const lean_object* l_Lean_Elab_Term_elabForIn___closed__14 = (const lean_object*)&l_Lean_Elab_Term_elabForIn___closed__14_value;
static const lean_string_object l_Lean_Elab_Term_elabForIn___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "failed to construct 'ForIn' instance for collection"};
static const lean_object* l_Lean_Elab_Term_elabForIn___closed__15 = (const lean_object*)&l_Lean_Elab_Term_elabForIn___closed__15_value;
static lean_once_cell_t l_Lean_Elab_Term_elabForIn___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_elabForIn___closed__16;
static const lean_string_object l_Lean_Elab_Term_elabForIn___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "\nand monad"};
static const lean_object* l_Lean_Elab_Term_elabForIn___closed__17 = (const lean_object*)&l_Lean_Elab_Term_elabForIn___closed__17_value;
static lean_once_cell_t l_Lean_Elab_Term_elabForIn___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_elabForIn___closed__18;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabForIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabForIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "elabForIn"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(227, 34, 236, 223, 176, 152, 238, 124)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(26) << 1) | 1)),((lean_object*)(((size_t)(32) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__0_value),((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__1_value),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(26) << 1) | 1)),((lean_object*)(((size_t)(36) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(26) << 1) | 1)),((lean_object*)(((size_t)(45) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__3_value),((lean_object*)(((size_t)(36) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__4_value),((lean_object*)(((size_t)(45) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Term_elabForIn_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "forInMacro'"};
static const lean_object* l_Lean_Elab_Term_elabForIn_x27___closed__0 = (const lean_object*)&l_Lean_Elab_Term_elabForIn_x27___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_elabForIn_x27___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_elabForIn_x27___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_elabForIn_x27___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Term_elabForIn_x27___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_elabForIn_x27___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Term_elabForIn_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_elabForIn_x27___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Term_elabForIn_x27___closed__0_value),LEAN_SCALAR_PTR_LITERAL(7, 76, 157, 146, 186, 53, 21, 82)}};
static const lean_object* l_Lean_Elab_Term_elabForIn_x27___closed__1 = (const lean_object*)&l_Lean_Elab_Term_elabForIn_x27___closed__1_value;
static const lean_string_object l_Lean_Elab_Term_elabForIn_x27___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ForIn'"};
static const lean_object* l_Lean_Elab_Term_elabForIn_x27___closed__2 = (const lean_object*)&l_Lean_Elab_Term_elabForIn_x27___closed__2_value;
static const lean_string_object l_Lean_Elab_Term_elabForIn_x27___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "forIn'"};
static const lean_object* l_Lean_Elab_Term_elabForIn_x27___closed__3 = (const lean_object*)&l_Lean_Elab_Term_elabForIn_x27___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Term_elabForIn_x27___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn_x27___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 251, 229, 162, 252, 35, 196, 120)}};
static const lean_ctor_object l_Lean_Elab_Term_elabForIn_x27___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_elabForIn_x27___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Term_elabForIn_x27___closed__3_value),LEAN_SCALAR_PTR_LITERAL(10, 254, 232, 131, 195, 189, 138, 93)}};
static const lean_object* l_Lean_Elab_Term_elabForIn_x27___closed__4 = (const lean_object*)&l_Lean_Elab_Term_elabForIn_x27___closed__4_value;
static const lean_string_object l_Lean_Elab_Term_elabForIn_x27___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "failed to construct `ForIn'` instance for collection"};
static const lean_object* l_Lean_Elab_Term_elabForIn_x27___closed__5 = (const lean_object*)&l_Lean_Elab_Term_elabForIn_x27___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Term_elabForIn_x27___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_elabForIn_x27___closed__6;
static const lean_string_object l_Lean_Elab_Term_elabForIn_x27___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Membership"};
static const lean_object* l_Lean_Elab_Term_elabForIn_x27___closed__7 = (const lean_object*)&l_Lean_Elab_Term_elabForIn_x27___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Term_elabForIn_x27___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn_x27___closed__7_value),LEAN_SCALAR_PTR_LITERAL(205, 217, 109, 94, 255, 55, 82, 109)}};
static const lean_object* l_Lean_Elab_Term_elabForIn_x27___closed__8 = (const lean_object*)&l_Lean_Elab_Term_elabForIn_x27___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Term_elabForIn_x27___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn_x27___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 251, 229, 162, 252, 35, 196, 120)}};
static const lean_object* l_Lean_Elab_Term_elabForIn_x27___closed__9 = (const lean_object*)&l_Lean_Elab_Term_elabForIn_x27___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabForIn_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabForIn_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "elabForIn'"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 231, 47, 50, 253, 196, 183, 104)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(52) << 1) | 1)),((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(78) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__0_value),((lean_object*)(((size_t)(33) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__1_value),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(52) << 1) | 1)),((lean_object*)(((size_t)(37) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(52) << 1) | 1)),((lean_object*)(((size_t)(47) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__3_value),((lean_object*)(((size_t)(37) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__4_value),((lean_object*)(((size_t)(47) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_elabListLitAux_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_elabListLitAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_elabListLitAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "nil"};
static const lean_object* l_Lean_Elab_Term_elabListLitAux___closed__0 = (const lean_object*)&l_Lean_Elab_Term_elabListLitAux___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_elabListLitAux___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Elab_Term_elabListLitAux___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_elabListLitAux___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_elabListLitAux___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 150, 134, 113, 145, 38, 173, 251)}};
static const lean_object* l_Lean_Elab_Term_elabListLitAux___closed__1 = (const lean_object*)&l_Lean_Elab_Term_elabListLitAux___closed__1_value;
static const lean_string_object l_Lean_Elab_Term_elabListLitAux___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cons"};
static const lean_object* l_Lean_Elab_Term_elabListLitAux___closed__2 = (const lean_object*)&l_Lean_Elab_Term_elabListLitAux___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Term_elabListLitAux___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Elab_Term_elabListLitAux___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_elabListLitAux___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Term_elabListLitAux___closed__2_value),LEAN_SCALAR_PTR_LITERAL(98, 170, 59, 223, 79, 132, 139, 119)}};
static const lean_object* l_Lean_Elab_Term_elabListLitAux___closed__3 = (const lean_object*)&l_Lean_Elab_Term_elabListLitAux___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabListLitAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabListLitAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "listTreeLit"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(221, 194, 89, 43, 254, 92, 144, 135)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "elabListLitAux"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(59, 133, 140, 29, 244, 240, 116, 227)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_regular_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_regular_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_regular_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_regular_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_lazy_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_lazy_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_lazy_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_lazy_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_leftact_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_leftact_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_leftact_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_leftact_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_rightact_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_rightact_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_rightact_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_rightact_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_instBEqBinOpKind_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_instBEqBinOpKind_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_instBEqBinOpKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_instBEqBinOpKind_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_instBEqBinOpKind___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_instBEqBinOpKind___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_instBEqBinOpKind = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_instBEqBinOpKind___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_term_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_term_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_binop_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_binop_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_unop_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_unop_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_macroExpansion_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_macroExpansion_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "binop"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 253, 231, 222, 243, 42, 73, 191)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "binop_lazy"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__2 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__2_value),LEAN_SCALAR_PTR_LITERAL(35, 222, 106, 2, 24, 145, 254, 163)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__3 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "unop"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__4 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__4_value),LEAN_SCALAR_PTR_LITERAL(68, 253, 109, 39, 185, 175, 169, 133)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__5 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "leftact"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__6 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__7_value_aux_2),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__6_value),LEAN_SCALAR_PTR_LITERAL(235, 190, 22, 58, 115, 190, 112, 107)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__7 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "rightact"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__8 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__9_value_aux_2),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__8_value),LEAN_SCALAR_PTR_LITERAL(147, 6, 66, 125, 81, 188, 156, 70)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__9 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__9_value;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__10 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__11_value_aux_1),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__11_value_aux_2),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__10_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__11 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__11_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__12 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__12_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__13_value_aux_0),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__13_value_aux_1),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__13_value_aux_2),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__12_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__13 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__13_value;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__14 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__14_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__14_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__15 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__15_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processBinOp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processBinOp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "CoeT"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 0, 82, 253, 29, 221, 45, 84)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_isUnknown(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_isUnknown___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(153, 183, 237, 4, 181, 75, 109, 5)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__1_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__2 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__3;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "uncomparable types: "};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__4 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__5;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__6 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_mkBinOp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_mkBinOp___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_mkBinOp___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_mkBinOp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_mkBinOp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_mkUnOp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_mkUnOp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Meta_getDefaultInstances___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Meta_getDefaultInstances___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__2___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__2___redArg___closed__0_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__2___redArg___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__2___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__2___redArg___closed__1_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__2___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__2___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHomogeneousInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHomogeneousInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "added coercion: "};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__1;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__2 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__3;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " => "};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__4 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__5;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "visiting "};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__6 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__7;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " =\?= "};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__8 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__9;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "result: "};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__1;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", maxType: "};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__2 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__3;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "<not-available>"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__4 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__4_value)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__5 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__6;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "hasUncomparable: "};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__7 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__7_value;
static lean_once_cell_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__8;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = ", hasUnknown: "};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__9 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__9_value;
static lean_once_cell_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__10;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__11 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__11_value;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__12 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__12_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabOp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabOp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinOp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinOp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Op"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "elabBinOp"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(246, 133, 134, 85, 150, 239, 79, 84)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(254, 97, 163, 42, 200, 140, 10, 73)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(475) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(475) << 1) | 1)),((lean_object*)(((size_t)(61) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__0_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__1_value),((lean_object*)(((size_t)(61) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(475) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(475) << 1) | 1)),((lean_object*)(((size_t)(40) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__3_value),((lean_object*)(((size_t)(31) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__4_value),((lean_object*)(((size_t)(40) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinOpLazy(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinOpLazy___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "elabBinOpLazy"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(246, 133, 134, 85, 150, 239, 79, 84)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(44, 108, 46, 201, 207, 65, 172, 53)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(476) << 1) | 1)),((lean_object*)(((size_t)(32) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(476) << 1) | 1)),((lean_object*)(((size_t)(70) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__0_value),((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__1_value),((lean_object*)(((size_t)(70) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(476) << 1) | 1)),((lean_object*)(((size_t)(36) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(476) << 1) | 1)),((lean_object*)(((size_t)(49) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__3_value),((lean_object*)(((size_t)(36) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__4_value),((lean_object*)(((size_t)(49) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabLeftact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabLeftact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "elabLeftact"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(246, 133, 134, 85, 150, 239, 79, 84)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(244, 112, 240, 137, 172, 217, 159, 78)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(477) << 1) | 1)),((lean_object*)(((size_t)(29) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(477) << 1) | 1)),((lean_object*)(((size_t)(65) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__0_value),((lean_object*)(((size_t)(29) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__1_value),((lean_object*)(((size_t)(65) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(477) << 1) | 1)),((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(477) << 1) | 1)),((lean_object*)(((size_t)(44) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__3_value),((lean_object*)(((size_t)(33) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__4_value),((lean_object*)(((size_t)(44) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabRightact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabRightact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "elabRightact"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(246, 133, 134, 85, 150, 239, 79, 84)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(68, 136, 170, 17, 87, 119, 44, 244)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(478) << 1) | 1)),((lean_object*)(((size_t)(30) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(478) << 1) | 1)),((lean_object*)(((size_t)(67) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__0_value),((lean_object*)(((size_t)(30) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__1_value),((lean_object*)(((size_t)(67) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(478) << 1) | 1)),((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(478) << 1) | 1)),((lean_object*)(((size_t)(46) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__3_value),((lean_object*)(((size_t)(34) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__4_value),((lean_object*)(((size_t)(46) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabUnOp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabUnOp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "elabUnOp"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(246, 133, 134, 85, 150, 239, 79, 84)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(10, 173, 236, 6, 246, 162, 121, 135)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(479) << 1) | 1)),((lean_object*)(((size_t)(26) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(479) << 1) | 1)),((lean_object*)(((size_t)(59) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__0_value),((lean_object*)(((size_t)(26) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__1_value),((lean_object*)(((size_t)(59) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(479) << 1) | 1)),((lean_object*)(((size_t)(30) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(479) << 1) | 1)),((lean_object*)(((size_t)(38) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__3_value),((lean_object*)(((size_t)(30) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__4_value),((lean_object*)(((size_t)(38) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__0;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__1_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__2 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinRelCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinRelCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_Op_elabBinRelCore___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "binrel"};
static const lean_object* l_Lean_Elab_Term_Op_elabBinRelCore___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Term_Op_elabBinRelCore___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_Op_elabBinRelCore___lam__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l_Lean_Elab_Term_Op_elabBinRelCore___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_Op_elabBinRelCore___lam__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_Op_elabBinRelCore___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(231, 199, 148, 20, 207, 217, 213, 245)}};
static const lean_object* l_Lean_Elab_Term_Op_elabBinRelCore___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_Term_Op_elabBinRelCore___lam__1___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Term_Op_elabBinRelCore___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_Op_elabBinRelCore___lam__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinRelCore___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinRelCore___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinRelCore(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinRelCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinRel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinRel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__0_value_aux_1),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__0_value_aux_2),((lean_object*)&l_Lean_Elab_Term_Op_elabBinRelCore___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(81, 238, 75, 93, 70, 164, 233, 165)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "elabBinRel"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(246, 133, 134, 85, 150, 239, 79, 84)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(2, 176, 232, 149, 170, 221, 241, 244)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(561) << 1) | 1)),((lean_object*)(((size_t)(28) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(561) << 1) | 1)),((lean_object*)(((size_t)(77) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__0_value),((lean_object*)(((size_t)(28) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__1_value),((lean_object*)(((size_t)(77) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(561) << 1) | 1)),((lean_object*)(((size_t)(32) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(561) << 1) | 1)),((lean_object*)(((size_t)(42) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__3_value),((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__4_value),((lean_object*)(((size_t)(42) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinRelNoProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinRelNoProp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "binrel_no_prop"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 122, 90, 92, 171, 187, 176, 37)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "elabBinRelNoProp"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(246, 133, 134, 85, 150, 239, 79, 84)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(55, 6, 28, 236, 66, 74, 216, 19)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(563) << 1) | 1)),((lean_object*)(((size_t)(36) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(563) << 1) | 1)),((lean_object*)(((size_t)(90) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__0_value),((lean_object*)(((size_t)(36) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__1_value),((lean_object*)(((size_t)(90) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(563) << 1) | 1)),((lean_object*)(((size_t)(40) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(563) << 1) | 1)),((lean_object*)(((size_t)(56) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__3_value),((lean_object*)(((size_t)(40) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__4_value),((lean_object*)(((size_t)(56) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "invalid 'default_or_ofNonempty%', expected type is not known"};
static const lean_object* l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__0 = (const lean_object*)&l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__1;
static const lean_string_object l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "failed to synthesize '"};
static const lean_object* l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__2 = (const lean_object*)&l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__3;
static const lean_string_object l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Inhabited"};
static const lean_object* l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__4 = (const lean_object*)&l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__4_value),LEAN_SCALAR_PTR_LITERAL(164, 88, 86, 106, 191, 136, 33, 185)}};
static const lean_object* l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__5 = (const lean_object*)&l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__5_value;
static const lean_string_object l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "' or '"};
static const lean_object* l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__6 = (const lean_object*)&l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__7;
static const lean_string_object l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Nonempty"};
static const lean_object* l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__8 = (const lean_object*)&l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__8_value),LEAN_SCALAR_PTR_LITERAL(142, 191, 110, 220, 210, 100, 152, 183)}};
static const lean_object* l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__9 = (const lean_object*)&l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__9_value;
static const lean_string_object l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "' instance for"};
static const lean_object* l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__10 = (const lean_object*)&l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__10_value;
static lean_once_cell_t l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__11;
static const lean_string_object l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 127, .m_capacity = 127, .m_length = 126, .m_data = "\n\nIf this type is defined using the 'structure' or 'inductive' command, you can try adding a 'deriving Nonempty' clause to it."};
static const lean_object* l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__12 = (const lean_object*)&l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__12_value;
static lean_once_cell_t l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__13;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabDefaultOrNonempty(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabDefaultOrNonempty___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "defaultOrOfNonempty"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 19, 142, 204, 140, 85, 7, 204)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "elabDefaultOrNonempty"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(246, 133, 134, 85, 150, 239, 79, 84)}};
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(190, 13, 100, 67, 210, 117, 66, 19)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(566) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(581) << 1) | 1)),((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__1_value),((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(566) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(566) << 1) | 1)),((lean_object*)(((size_t)(25) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__3_value),((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__4_value),((lean_object*)(((size_t)(25) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__0_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__0_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__0_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__1_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__0_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__1_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__1_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__2_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__1_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__2_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__2_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__3_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__2_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__3_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__3_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__4_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Extra"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__4_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__4_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__5_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__3_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__4_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(3, 15, 182, 26, 247, 33, 203, 42)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__5_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__5_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__6_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__5_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(78, 187, 205, 52, 206, 14, 129, 139)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__6_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__6_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__7_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__6_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(247, 94, 85, 34, 130, 97, 241, 93)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__7_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__7_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__8_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__7_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(249, 42, 79, 210, 151, 194, 102, 238)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__8_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__8_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__9_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__8_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(85, 95, 84, 54, 245, 86, 126, 132)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__9_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__9_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__10_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__9_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(3, 233, 238, 46, 119, 252, 7, 141)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__10_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__10_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__11_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__11_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__11_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__12_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__10_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__11_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(98, 197, 135, 204, 22, 23, 200, 247)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__12_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__12_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__13_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__13_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__13_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__14_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__12_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__13_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(235, 92, 31, 51, 153, 79, 6, 21)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__14_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__14_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__15_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__14_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Elab_Term_elabForIn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 205, 169, 233, 33, 60, 131, 204)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__15_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__15_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__16_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__15_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(4, 175, 208, 212, 31, 237, 230, 118)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__16_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__16_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__17_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__16_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__4_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(199, 111, 29, 176, 220, 248, 251, 189)}};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__17_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__17_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__18_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__18_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__19_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__19_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__19_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__20_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__20_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__21_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__21_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__21_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__22_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__22_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__23_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__23_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_box(1);
v___x_2_ = l_Lean_MessageData_ofFormat(v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__3___closed__3(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_6_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__3___closed__2));
v___x_7_ = l_Lean_MessageData_ofFormat(v___x_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__3(lean_object* v_x_8_, lean_object* v_x_9_){
_start:
{
if (lean_obj_tag(v_x_9_) == 0)
{
return v_x_8_;
}
else
{
lean_object* v_head_10_; lean_object* v_tail_11_; lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_33_; 
v_head_10_ = lean_ctor_get(v_x_9_, 0);
v_tail_11_ = lean_ctor_get(v_x_9_, 1);
v_isSharedCheck_33_ = !lean_is_exclusive(v_x_9_);
if (v_isSharedCheck_33_ == 0)
{
v___x_13_ = v_x_9_;
v_isShared_14_ = v_isSharedCheck_33_;
goto v_resetjp_12_;
}
else
{
lean_inc(v_tail_11_);
lean_inc(v_head_10_);
lean_dec(v_x_9_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_33_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v_before_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_31_; 
v_before_15_ = lean_ctor_get(v_head_10_, 0);
v_isSharedCheck_31_ = !lean_is_exclusive(v_head_10_);
if (v_isSharedCheck_31_ == 0)
{
lean_object* v_unused_32_; 
v_unused_32_ = lean_ctor_get(v_head_10_, 1);
lean_dec(v_unused_32_);
v___x_17_ = v_head_10_;
v_isShared_18_ = v_isSharedCheck_31_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_before_15_);
lean_dec(v_head_10_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_31_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v___x_19_; lean_object* v___x_21_; 
v___x_19_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__3___closed__0);
if (v_isShared_18_ == 0)
{
lean_ctor_set_tag(v___x_17_, 7);
lean_ctor_set(v___x_17_, 1, v___x_19_);
lean_ctor_set(v___x_17_, 0, v_x_8_);
v___x_21_ = v___x_17_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_30_; 
v_reuseFailAlloc_30_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_30_, 0, v_x_8_);
lean_ctor_set(v_reuseFailAlloc_30_, 1, v___x_19_);
v___x_21_ = v_reuseFailAlloc_30_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
lean_object* v___x_22_; lean_object* v___x_24_; 
v___x_22_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__3___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__3___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__3___closed__3);
if (v_isShared_14_ == 0)
{
lean_ctor_set_tag(v___x_13_, 7);
lean_ctor_set(v___x_13_, 1, v___x_22_);
lean_ctor_set(v___x_13_, 0, v___x_21_);
v___x_24_ = v___x_13_;
goto v_reusejp_23_;
}
else
{
lean_object* v_reuseFailAlloc_29_; 
v_reuseFailAlloc_29_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_29_, 0, v___x_21_);
lean_ctor_set(v_reuseFailAlloc_29_, 1, v___x_22_);
v___x_24_ = v_reuseFailAlloc_29_;
goto v_reusejp_23_;
}
v_reusejp_23_:
{
lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_25_ = l_Lean_MessageData_ofSyntax(v_before_15_);
v___x_26_ = l_Lean_indentD(v___x_25_);
v___x_27_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_27_, 0, v___x_24_);
lean_ctor_set(v___x_27_, 1, v___x_26_);
v_x_8_ = v___x_27_;
v_x_9_ = v_tail_11_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__2(lean_object* v_opts_34_, lean_object* v_opt_35_){
_start:
{
lean_object* v_name_36_; lean_object* v_defValue_37_; lean_object* v_map_38_; lean_object* v___x_39_; 
v_name_36_ = lean_ctor_get(v_opt_35_, 0);
v_defValue_37_ = lean_ctor_get(v_opt_35_, 1);
v_map_38_ = lean_ctor_get(v_opts_34_, 0);
v___x_39_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_38_, v_name_36_);
if (lean_obj_tag(v___x_39_) == 0)
{
uint8_t v___x_40_; 
v___x_40_ = lean_unbox(v_defValue_37_);
return v___x_40_;
}
else
{
lean_object* v_val_41_; 
v_val_41_ = lean_ctor_get(v___x_39_, 0);
lean_inc(v_val_41_);
lean_dec_ref_known(v___x_39_, 1);
if (lean_obj_tag(v_val_41_) == 1)
{
uint8_t v_v_42_; 
v_v_42_ = lean_ctor_get_uint8(v_val_41_, 0);
lean_dec_ref_known(v_val_41_, 0);
return v_v_42_;
}
else
{
uint8_t v___x_43_; 
lean_dec(v_val_41_);
v___x_43_ = lean_unbox(v_defValue_37_);
return v___x_43_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__2___boxed(lean_object* v_opts_44_, lean_object* v_opt_45_){
_start:
{
uint8_t v_res_46_; lean_object* v_r_47_; 
v_res_46_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__2(v_opts_44_, v_opt_45_);
lean_dec_ref(v_opt_45_);
lean_dec_ref(v_opts_44_);
v_r_47_ = lean_box(v_res_46_);
return v_r_47_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1___redArg___closed__1));
v___x_52_ = l_Lean_MessageData_ofFormat(v___x_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1___redArg(lean_object* v_msgData_53_, lean_object* v_macroStack_54_, lean_object* v___y_55_){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; uint8_t v___x_59_; 
v___x_57_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_55_);
v___x_58_ = l_Lean_Elab_pp_macroStack;
v___x_59_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__2(v___x_57_, v___x_58_);
lean_dec_ref(v___x_57_);
if (v___x_59_ == 0)
{
lean_object* v___x_60_; 
lean_dec(v_macroStack_54_);
v___x_60_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_60_, 0, v_msgData_53_);
return v___x_60_;
}
else
{
if (lean_obj_tag(v_macroStack_54_) == 0)
{
lean_object* v___x_61_; 
v___x_61_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_61_, 0, v_msgData_53_);
return v___x_61_;
}
else
{
lean_object* v_head_62_; lean_object* v_after_63_; lean_object* v___x_65_; uint8_t v_isShared_66_; uint8_t v_isSharedCheck_78_; 
v_head_62_ = lean_ctor_get(v_macroStack_54_, 0);
lean_inc(v_head_62_);
v_after_63_ = lean_ctor_get(v_head_62_, 1);
v_isSharedCheck_78_ = !lean_is_exclusive(v_head_62_);
if (v_isSharedCheck_78_ == 0)
{
lean_object* v_unused_79_; 
v_unused_79_ = lean_ctor_get(v_head_62_, 0);
lean_dec(v_unused_79_);
v___x_65_ = v_head_62_;
v_isShared_66_ = v_isSharedCheck_78_;
goto v_resetjp_64_;
}
else
{
lean_inc(v_after_63_);
lean_dec(v_head_62_);
v___x_65_ = lean_box(0);
v_isShared_66_ = v_isSharedCheck_78_;
goto v_resetjp_64_;
}
v_resetjp_64_:
{
lean_object* v___x_67_; lean_object* v___x_69_; 
v___x_67_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__3___closed__0);
if (v_isShared_66_ == 0)
{
lean_ctor_set_tag(v___x_65_, 7);
lean_ctor_set(v___x_65_, 1, v___x_67_);
lean_ctor_set(v___x_65_, 0, v_msgData_53_);
v___x_69_ = v___x_65_;
goto v_reusejp_68_;
}
else
{
lean_object* v_reuseFailAlloc_77_; 
v_reuseFailAlloc_77_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_77_, 0, v_msgData_53_);
lean_ctor_set(v_reuseFailAlloc_77_, 1, v___x_67_);
v___x_69_ = v_reuseFailAlloc_77_;
goto v_reusejp_68_;
}
v_reusejp_68_:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v_msgData_74_; lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_70_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1___redArg___closed__2);
v___x_71_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_71_, 0, v___x_69_);
lean_ctor_set(v___x_71_, 1, v___x_70_);
v___x_72_ = l_Lean_MessageData_ofSyntax(v_after_63_);
v___x_73_ = l_Lean_indentD(v___x_72_);
v_msgData_74_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_74_, 0, v___x_71_);
lean_ctor_set(v_msgData_74_, 1, v___x_73_);
v___x_75_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1_spec__3(v_msgData_74_, v_macroStack_54_);
v___x_76_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_76_, 0, v___x_75_);
return v___x_76_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1___redArg___boxed(lean_object* v_msgData_80_, lean_object* v_macroStack_81_, lean_object* v___y_82_, lean_object* v___y_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1___redArg(v_msgData_80_, v_macroStack_81_, v___y_82_);
lean_dec_ref(v___y_82_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__0(lean_object* v_msgData_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_){
_start:
{
lean_object* v___x_91_; lean_object* v_env_92_; uint8_t v___x_93_; lean_object* v_env_94_; lean_object* v___x_95_; lean_object* v_toCold_96_; lean_object* v_mctx_97_; lean_object* v_lctx_98_; lean_object* v_options_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_91_ = lean_st_ref_get(v___y_89_);
v_env_92_ = lean_ctor_get(v___x_91_, 0);
lean_inc_ref(v_env_92_);
lean_dec(v___x_91_);
v___x_93_ = 0;
v_env_94_ = l_Lean_Environment_setRecordingDeps(v_env_92_, v___x_93_);
v___x_95_ = lean_st_ref_get(v___y_87_);
v_toCold_96_ = lean_ctor_get(v___y_88_, 0);
v_mctx_97_ = lean_ctor_get(v___x_95_, 0);
lean_inc_ref(v_mctx_97_);
lean_dec(v___x_95_);
v_lctx_98_ = lean_ctor_get(v___y_86_, 2);
v_options_99_ = lean_ctor_get(v_toCold_96_, 2);
lean_inc_ref(v_options_99_);
lean_inc_ref(v_lctx_98_);
v___x_100_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_100_, 0, v_env_94_);
lean_ctor_set(v___x_100_, 1, v_mctx_97_);
lean_ctor_set(v___x_100_, 2, v_lctx_98_);
lean_ctor_set(v___x_100_, 3, v_options_99_);
v___x_101_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
lean_ctor_set(v___x_101_, 1, v_msgData_85_);
v___x_102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_102_, 0, v___x_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__0___boxed(lean_object* v_msgData_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_){
_start:
{
lean_object* v_res_109_; 
v_res_109_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__0(v_msgData_103_, v___y_104_, v___y_105_, v___y_106_, v___y_107_);
lean_dec(v___y_107_);
lean_dec_ref(v___y_106_);
lean_dec(v___y_105_);
lean_dec_ref(v___y_104_);
return v_res_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0___redArg(lean_object* v_msg_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_){
_start:
{
lean_object* v_ref_118_; lean_object* v_macroStack_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v_a_122_; lean_object* v___x_123_; lean_object* v_a_124_; lean_object* v___x_126_; uint8_t v_isShared_127_; uint8_t v_isSharedCheck_132_; 
v_ref_118_ = lean_ctor_get(v___y_115_, 2);
v_macroStack_119_ = lean_ctor_get(v___y_111_, 1);
v___x_120_ = l_Lean_Elab_getBetterRef(v_ref_118_, v_macroStack_119_);
v___x_121_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__0(v_msg_110_, v___y_113_, v___y_114_, v___y_115_, v___y_116_);
v_a_122_ = lean_ctor_get(v___x_121_, 0);
lean_inc(v_a_122_);
lean_dec_ref(v___x_121_);
lean_inc(v_macroStack_119_);
v___x_123_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1___redArg(v_a_122_, v_macroStack_119_, v___y_115_);
v_a_124_ = lean_ctor_get(v___x_123_, 0);
v_isSharedCheck_132_ = !lean_is_exclusive(v___x_123_);
if (v_isSharedCheck_132_ == 0)
{
v___x_126_ = v___x_123_;
v_isShared_127_ = v_isSharedCheck_132_;
goto v_resetjp_125_;
}
else
{
lean_inc(v_a_124_);
lean_dec(v___x_123_);
v___x_126_ = lean_box(0);
v_isShared_127_ = v_isSharedCheck_132_;
goto v_resetjp_125_;
}
v_resetjp_125_:
{
lean_object* v___x_128_; lean_object* v___x_130_; 
v___x_128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_120_);
lean_ctor_set(v___x_128_, 1, v_a_124_);
if (v_isShared_127_ == 0)
{
lean_ctor_set_tag(v___x_126_, 1);
lean_ctor_set(v___x_126_, 0, v___x_128_);
v___x_130_ = v___x_126_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v___x_128_);
v___x_130_ = v_reuseFailAlloc_131_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
return v___x_130_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0___redArg___boxed(lean_object* v_msg_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = l_Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0___redArg(v_msg_133_, v___y_134_, v___y_135_, v___y_136_, v___y_137_, v___y_138_, v___y_139_);
lean_dec(v___y_139_);
lean_dec_ref(v___y_138_);
lean_dec(v___y_137_);
lean_dec_ref(v___y_136_);
lean_dec(v___y_135_);
lean_dec_ref(v___y_134_);
return v_res_141_;
}
}
static lean_object* _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn___closed__1(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_143_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn___closed__0));
v___x_144_ = l_Lean_stringToMessageData(v___x_143_);
return v___x_144_;
}
}
static lean_object* _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn___closed__3(void){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_146_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn___closed__2));
v___x_147_ = l_Lean_stringToMessageData(v___x_146_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn(lean_object* v_expectedType_x3f_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_){
_start:
{
if (lean_obj_tag(v_expectedType_x3f_148_) == 0)
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn___closed__1, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn___closed__1_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn___closed__1);
v___x_157_ = l_Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0___redArg(v___x_156_, v_a_149_, v_a_150_, v_a_151_, v_a_152_, v_a_153_, v_a_154_);
return v___x_157_;
}
else
{
lean_object* v_val_158_; lean_object* v___x_159_; 
v_val_158_ = lean_ctor_get(v_expectedType_x3f_148_, 0);
lean_inc_n(v_val_158_, 2);
lean_dec_ref_known(v_expectedType_x3f_148_, 1);
v___x_159_ = l_Lean_Meta_isTypeApp_x3f(v_val_158_, v_a_151_, v_a_152_, v_a_153_, v_a_154_);
if (lean_obj_tag(v___x_159_) == 0)
{
lean_object* v_a_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_173_; 
v_a_160_ = lean_ctor_get(v___x_159_, 0);
v_isSharedCheck_173_ = !lean_is_exclusive(v___x_159_);
if (v_isSharedCheck_173_ == 0)
{
v___x_162_ = v___x_159_;
v_isShared_163_ = v_isSharedCheck_173_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_a_160_);
lean_dec(v___x_159_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_173_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
if (lean_obj_tag(v_a_160_) == 0)
{
lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
lean_del_object(v___x_162_);
v___x_164_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn___closed__3, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn___closed__3_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn___closed__3);
v___x_165_ = l_Lean_indentExpr(v_val_158_);
v___x_166_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_166_, 0, v___x_164_);
lean_ctor_set(v___x_166_, 1, v___x_165_);
v___x_167_ = l_Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0___redArg(v___x_166_, v_a_149_, v_a_150_, v_a_151_, v_a_152_, v_a_153_, v_a_154_);
return v___x_167_;
}
else
{
lean_object* v_val_168_; lean_object* v_fst_169_; lean_object* v___x_171_; 
lean_dec(v_val_158_);
v_val_168_ = lean_ctor_get(v_a_160_, 0);
lean_inc(v_val_168_);
lean_dec_ref_known(v_a_160_, 1);
v_fst_169_ = lean_ctor_get(v_val_168_, 0);
lean_inc(v_fst_169_);
lean_dec(v_val_168_);
if (v_isShared_163_ == 0)
{
lean_ctor_set(v___x_162_, 0, v_fst_169_);
v___x_171_ = v___x_162_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v_fst_169_);
v___x_171_ = v_reuseFailAlloc_172_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
return v___x_171_;
}
}
}
}
else
{
lean_object* v_a_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_181_; 
lean_dec(v_val_158_);
v_a_174_ = lean_ctor_get(v___x_159_, 0);
v_isSharedCheck_181_ = !lean_is_exclusive(v___x_159_);
if (v_isSharedCheck_181_ == 0)
{
v___x_176_ = v___x_159_;
v_isShared_177_ = v_isSharedCheck_181_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_a_174_);
lean_dec(v___x_159_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_181_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
lean_object* v___x_179_; 
if (v_isShared_177_ == 0)
{
v___x_179_ = v___x_176_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v_a_174_);
v___x_179_ = v_reuseFailAlloc_180_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
return v___x_179_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn___boxed(lean_object* v_expectedType_x3f_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_){
_start:
{
lean_object* v_res_190_; 
v_res_190_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn(v_expectedType_x3f_182_, v_a_183_, v_a_184_, v_a_185_, v_a_186_, v_a_187_, v_a_188_);
lean_dec(v_a_188_);
lean_dec_ref(v_a_187_);
lean_dec(v_a_186_);
lean_dec_ref(v_a_185_);
lean_dec(v_a_184_);
lean_dec_ref(v_a_183_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0(lean_object* v_00_u03b1_191_, lean_object* v_msg_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = l_Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0___redArg(v_msg_192_, v___y_193_, v___y_194_, v___y_195_, v___y_196_, v___y_197_, v___y_198_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0___boxed(lean_object* v_00_u03b1_201_, lean_object* v_msg_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0(v_00_u03b1_201_, v_msg_202_, v___y_203_, v___y_204_, v___y_205_, v___y_206_, v___y_207_, v___y_208_);
lean_dec(v___y_208_);
lean_dec_ref(v___y_207_);
lean_dec(v___y_206_);
lean_dec_ref(v___y_205_);
lean_dec(v___y_204_);
lean_dec_ref(v___y_203_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1(lean_object* v_msgData_211_, lean_object* v_macroStack_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1___redArg(v_msgData_211_, v_macroStack_212_, v___y_217_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1___boxed(lean_object* v_msgData_221_, lean_object* v_macroStack_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__1(v_msgData_221_, v_macroStack_222_, v___y_223_, v___y_224_, v___y_225_, v___y_226_, v___y_227_, v___y_228_);
lean_dec(v___y_228_);
lean_dec_ref(v___y_227_);
lean_dec(v___y_226_);
lean_dec_ref(v___y_225_);
lean_dec(v___y_224_);
lean_dec_ref(v___y_223_);
return v_res_230_;
}
}
static lean_object* _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_throwForInFailure___closed__1(void){
_start:
{
lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_232_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_throwForInFailure___closed__0));
v___x_233_ = l_Lean_stringToMessageData(v___x_232_);
return v___x_233_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_throwForInFailure(lean_object* v_forInInstance_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_, lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_242_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_throwForInFailure___closed__1, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_throwForInFailure___closed__1_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_throwForInFailure___closed__1);
v___x_243_ = l_Lean_indentExpr(v_forInInstance_234_);
v___x_244_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_242_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
v___x_245_ = l_Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0___redArg(v___x_244_, v_a_235_, v_a_236_, v_a_237_, v_a_238_, v_a_239_, v_a_240_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_throwForInFailure___boxed(lean_object* v_forInInstance_246_, lean_object* v_a_247_, lean_object* v_a_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_, lean_object* v_a_252_, lean_object* v_a_253_){
_start:
{
lean_object* v_res_254_; 
v_res_254_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_throwForInFailure(v_forInInstance_246_, v_a_247_, v_a_248_, v_a_249_, v_a_250_, v_a_251_, v_a_252_);
lean_dec(v_a_252_);
lean_dec_ref(v_a_251_);
lean_dec(v_a_250_);
lean_dec_ref(v_a_249_);
lean_dec(v_a_248_);
lean_dec_ref(v_a_247_);
return v_res_254_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Term_elabForIn_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_255_ = lean_box(0);
v___x_256_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_257_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
lean_ctor_set(v___x_257_, 1, v___x_255_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Term_elabForIn_spec__0___redArg(){
_start:
{
lean_object* v___x_259_; lean_object* v___x_260_; 
v___x_259_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Term_elabForIn_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Term_elabForIn_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Term_elabForIn_spec__0___redArg___closed__0);
v___x_260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_260_, 0, v___x_259_);
return v___x_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Term_elabForIn_spec__0___redArg___boxed(lean_object* v___y_261_){
_start:
{
lean_object* v_res_262_; 
v_res_262_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Term_elabForIn_spec__0___redArg();
return v_res_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Term_elabForIn_spec__0(lean_object* v_00_u03b1_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_){
_start:
{
lean_object* v___x_271_; 
v___x_271_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Term_elabForIn_spec__0___redArg();
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Term_elabForIn_spec__0___boxed(lean_object* v_00_u03b1_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_){
_start:
{
lean_object* v_res_280_; 
v_res_280_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Term_elabForIn_spec__0(v_00_u03b1_272_, v___y_273_, v___y_274_, v___y_275_, v___y_276_, v___y_277_, v___y_278_);
lean_dec(v___y_278_);
lean_dec_ref(v___y_277_);
lean_dec(v___y_276_);
lean_dec_ref(v___y_275_);
lean_dec(v___y_274_);
lean_dec_ref(v___y_273_);
return v_res_280_;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabForIn___closed__16(void){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = ((lean_object*)(l_Lean_Elab_Term_elabForIn___closed__15));
v___x_308_ = l_Lean_stringToMessageData(v___x_307_);
return v___x_308_;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabForIn___closed__18(void){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_310_ = ((lean_object*)(l_Lean_Elab_Term_elabForIn___closed__17));
v___x_311_ = l_Lean_stringToMessageData(v___x_310_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabForIn(lean_object* v_stx_312_, lean_object* v_expectedType_x3f_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_){
_start:
{
lean_object* v___x_321_; uint8_t v___x_322_; 
v___x_321_ = ((lean_object*)(l_Lean_Elab_Term_elabForIn___closed__4));
lean_inc(v_stx_312_);
v___x_322_ = l_Lean_Syntax_isOfKind(v_stx_312_, v___x_321_);
if (v___x_322_ == 0)
{
lean_object* v___x_323_; 
lean_dec(v_expectedType_x3f_313_);
lean_dec(v_stx_312_);
v___x_323_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Term_elabForIn_spec__0___redArg();
return v___x_323_;
}
else
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_324_ = lean_unsigned_to_nat(0u);
v___x_325_ = lean_unsigned_to_nat(1u);
v___x_326_ = l_Lean_Syntax_getArg(v_stx_312_, v___x_325_);
v___x_327_ = lean_unsigned_to_nat(2u);
v___x_328_ = l_Lean_Syntax_getArg(v_stx_312_, v___x_327_);
v___x_329_ = lean_unsigned_to_nat(3u);
v___x_330_ = l_Lean_Syntax_getArg(v_stx_312_, v___x_329_);
lean_dec(v_stx_312_);
lean_inc(v_expectedType_x3f_313_);
v___x_331_ = l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(v_expectedType_x3f_313_, v_a_314_, v_a_315_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
if (lean_obj_tag(v___x_331_) == 0)
{
lean_object* v___x_332_; lean_object* v___x_333_; 
lean_dec_ref_known(v___x_331_, 1);
v___x_332_ = lean_box(0);
v___x_333_ = l_Lean_Elab_Term_elabTerm(v___x_326_, v___x_332_, v___x_322_, v___x_322_, v_a_314_, v_a_315_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
if (lean_obj_tag(v___x_333_) == 0)
{
lean_object* v_a_334_; lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_468_; 
v_a_334_ = lean_ctor_get(v___x_333_, 0);
v_isSharedCheck_468_ = !lean_is_exclusive(v___x_333_);
if (v_isSharedCheck_468_ == 0)
{
v___x_336_ = v___x_333_;
v_isShared_337_ = v_isSharedCheck_468_;
goto v_resetjp_335_;
}
else
{
lean_inc(v_a_334_);
lean_dec(v___x_333_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_468_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
lean_object* v___x_338_; 
lean_inc(v_expectedType_x3f_313_);
v___x_338_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn(v_expectedType_x3f_313_, v_a_314_, v_a_315_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
if (lean_obj_tag(v___x_338_) == 0)
{
lean_object* v_a_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_467_; 
v_a_339_ = lean_ctor_get(v___x_338_, 0);
v_isSharedCheck_467_ = !lean_is_exclusive(v___x_338_);
if (v_isSharedCheck_467_ == 0)
{
v___x_341_ = v___x_338_;
v_isShared_342_ = v_isSharedCheck_467_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_a_339_);
lean_dec(v___x_338_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_467_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
lean_object* v___x_343_; 
lean_inc(v_a_319_);
lean_inc_ref(v_a_318_);
lean_inc(v_a_317_);
lean_inc_ref(v_a_316_);
lean_inc(v_a_334_);
v___x_343_ = lean_infer_type(v_a_334_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
if (lean_obj_tag(v___x_343_) == 0)
{
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_466_; 
v_a_344_ = lean_ctor_get(v___x_343_, 0);
v_isSharedCheck_466_ = !lean_is_exclusive(v___x_343_);
if (v_isSharedCheck_466_ == 0)
{
v___x_346_ = v___x_343_;
v_isShared_347_ = v_isSharedCheck_466_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_343_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_466_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_348_; 
v___x_348_ = l_Lean_Meta_mkFreshLevelMVar(v_a_316_, v_a_317_, v_a_318_, v_a_319_);
if (lean_obj_tag(v___x_348_) == 0)
{
lean_object* v_a_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_353_; 
v_a_349_ = lean_ctor_get(v___x_348_, 0);
lean_inc(v_a_349_);
lean_dec_ref_known(v___x_348_, 1);
v___x_350_ = l_Lean_Level_succ___override(v_a_349_);
v___x_351_ = l_Lean_mkSort(v___x_350_);
if (v_isShared_347_ == 0)
{
lean_ctor_set_tag(v___x_346_, 1);
lean_ctor_set(v___x_346_, 0, v___x_351_);
v___x_353_ = v___x_346_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v___x_351_);
v___x_353_ = v_reuseFailAlloc_457_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
uint8_t v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_354_ = 0;
v___x_355_ = lean_box(0);
v___x_356_ = l_Lean_Meta_mkFreshExprMVar(v___x_353_, v___x_354_, v___x_355_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
if (lean_obj_tag(v___x_356_) == 0)
{
lean_object* v_a_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_456_; 
v_a_357_ = lean_ctor_get(v___x_356_, 0);
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_456_ == 0)
{
v___x_359_ = v___x_356_;
v_isShared_360_ = v_isSharedCheck_456_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_a_357_);
lean_dec(v___x_356_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_456_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v_a_362_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_429_ = ((lean_object*)(l_Lean_Elab_Term_elabForIn___closed__14));
v___x_430_ = lean_mk_empty_array_with_capacity(v___x_329_);
lean_inc(v_a_339_);
v___x_431_ = lean_array_push(v___x_430_, v_a_339_);
lean_inc(v_a_344_);
v___x_432_ = lean_array_push(v___x_431_, v_a_344_);
lean_inc(v_a_357_);
v___x_433_ = lean_array_push(v___x_432_, v_a_357_);
v___x_434_ = l_Lean_Meta_mkAppM(v___x_429_, v___x_433_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
if (lean_obj_tag(v___x_434_) == 0)
{
lean_object* v_a_435_; 
lean_dec(v_a_344_);
v_a_435_ = lean_ctor_get(v___x_434_, 0);
lean_inc(v_a_435_);
lean_dec_ref_known(v___x_434_, 1);
v_a_362_ = v_a_435_;
goto v___jp_361_;
}
else
{
lean_object* v_a_436_; uint8_t v___x_437_; 
lean_del_object(v___x_359_);
lean_dec(v_a_357_);
lean_del_object(v___x_341_);
lean_del_object(v___x_336_);
lean_dec(v_a_334_);
lean_dec(v___x_330_);
lean_dec(v___x_328_);
lean_dec(v_expectedType_x3f_313_);
v_a_436_ = lean_ctor_get(v___x_434_, 0);
v___x_437_ = l_Lean_Exception_isInterrupt(v_a_436_);
if (v___x_437_ == 0)
{
uint8_t v___x_438_; 
lean_inc(v_a_436_);
v___x_438_ = l_Lean_Exception_isRuntime(v_a_436_);
if (v___x_438_ == 0)
{
lean_object* v___x_439_; 
lean_dec_ref_known(v___x_434_, 1);
v___x_439_ = l_Lean_Elab_Term_tryPostpone(v_a_314_, v_a_315_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
if (lean_obj_tag(v___x_439_) == 0)
{
lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
lean_dec_ref_known(v___x_439_, 1);
v___x_440_ = lean_obj_once(&l_Lean_Elab_Term_elabForIn___closed__16, &l_Lean_Elab_Term_elabForIn___closed__16_once, _init_l_Lean_Elab_Term_elabForIn___closed__16);
v___x_441_ = l_Lean_indentExpr(v_a_344_);
v___x_442_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_442_, 0, v___x_440_);
lean_ctor_set(v___x_442_, 1, v___x_441_);
v___x_443_ = lean_obj_once(&l_Lean_Elab_Term_elabForIn___closed__18, &l_Lean_Elab_Term_elabForIn___closed__18_once, _init_l_Lean_Elab_Term_elabForIn___closed__18);
v___x_444_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_444_, 0, v___x_442_);
lean_ctor_set(v___x_444_, 1, v___x_443_);
v___x_445_ = l_Lean_indentExpr(v_a_339_);
v___x_446_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_446_, 0, v___x_444_);
lean_ctor_set(v___x_446_, 1, v___x_445_);
v___x_447_ = l_Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0___redArg(v___x_446_, v_a_314_, v_a_315_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
return v___x_447_;
}
else
{
lean_object* v_a_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_455_; 
lean_dec(v_a_344_);
lean_dec(v_a_339_);
v_a_448_ = lean_ctor_get(v___x_439_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_439_);
if (v_isSharedCheck_455_ == 0)
{
v___x_450_ = v___x_439_;
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_a_448_);
lean_dec(v___x_439_);
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
lean_dec(v_a_344_);
lean_dec(v_a_339_);
return v___x_434_;
}
}
else
{
lean_dec(v_a_344_);
lean_dec(v_a_339_);
return v___x_434_;
}
}
v___jp_361_:
{
lean_object* v___x_363_; 
lean_inc_ref(v_a_362_);
v___x_363_ = l_Lean_Meta_trySynthInstance(v_a_362_, v___x_332_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
if (lean_obj_tag(v___x_363_) == 0)
{
lean_object* v_a_364_; 
v_a_364_ = lean_ctor_get(v___x_363_, 0);
lean_inc(v_a_364_);
lean_dec_ref_known(v___x_363_, 1);
switch(lean_obj_tag(v_a_364_))
{
case 0:
{
lean_object* v___x_365_; 
lean_del_object(v___x_359_);
lean_dec(v_a_357_);
lean_del_object(v___x_341_);
lean_dec(v_a_339_);
lean_del_object(v___x_336_);
lean_dec(v_a_334_);
lean_dec(v___x_330_);
lean_dec(v___x_328_);
lean_dec(v_expectedType_x3f_313_);
v___x_365_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_throwForInFailure(v_a_362_, v_a_314_, v_a_315_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
return v___x_365_;
}
case 1:
{
lean_object* v_a_366_; lean_object* v___x_368_; uint8_t v_isShared_369_; uint8_t v_isSharedCheck_410_; 
lean_dec_ref(v_a_362_);
v_a_366_ = lean_ctor_get(v_a_364_, 0);
v_isSharedCheck_410_ = !lean_is_exclusive(v_a_364_);
if (v_isSharedCheck_410_ == 0)
{
v___x_368_ = v_a_364_;
v_isShared_369_ = v_isSharedCheck_410_;
goto v_resetjp_367_;
}
else
{
lean_inc(v_a_366_);
lean_dec(v_a_364_);
v___x_368_ = lean_box(0);
v_isShared_369_ = v_isSharedCheck_410_;
goto v_resetjp_367_;
}
v_resetjp_367_:
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_370_ = ((lean_object*)(l_Lean_Elab_Term_elabForIn___closed__7));
v___x_371_ = lean_box(0);
v___x_372_ = l_Lean_Elab_Term_mkConst(v___x_370_, v___x_371_, v_a_314_, v_a_315_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
if (lean_obj_tag(v___x_372_) == 0)
{
lean_object* v_a_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_409_; 
v_a_373_ = lean_ctor_get(v___x_372_, 0);
v_isSharedCheck_409_ = !lean_is_exclusive(v___x_372_);
if (v_isSharedCheck_409_ == 0)
{
v___x_375_ = v___x_372_;
v_isShared_376_ = v_isSharedCheck_409_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_a_373_);
lean_dec(v___x_372_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_409_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_380_; 
v___x_377_ = lean_box(0);
v___x_378_ = ((lean_object*)(l_Lean_Elab_Term_elabForIn___closed__9));
if (v_isShared_376_ == 0)
{
lean_ctor_set_tag(v___x_375_, 1);
lean_ctor_set(v___x_375_, 0, v_a_339_);
v___x_380_ = v___x_375_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_a_339_);
v___x_380_ = v_reuseFailAlloc_408_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_384_; 
v___x_381_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_381_, 0, v___x_377_);
lean_ctor_set(v___x_381_, 1, v___x_378_);
lean_ctor_set(v___x_381_, 2, v___x_380_);
lean_ctor_set(v___x_381_, 3, v___x_324_);
v___x_382_ = ((lean_object*)(l_Lean_Elab_Term_elabForIn___closed__11));
if (v_isShared_369_ == 0)
{
lean_ctor_set(v___x_368_, 0, v_a_357_);
v___x_384_ = v___x_368_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_a_357_);
v___x_384_ = v_reuseFailAlloc_407_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_388_; 
v___x_385_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_385_, 0, v___x_377_);
lean_ctor_set(v___x_385_, 1, v___x_382_);
lean_ctor_set(v___x_385_, 2, v___x_384_);
lean_ctor_set(v___x_385_, 3, v___x_324_);
v___x_386_ = ((lean_object*)(l_Lean_Elab_Term_elabForIn___closed__13));
if (v_isShared_360_ == 0)
{
lean_ctor_set_tag(v___x_359_, 1);
lean_ctor_set(v___x_359_, 0, v_a_366_);
v___x_388_ = v___x_359_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v_a_366_);
v___x_388_ = v_reuseFailAlloc_406_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_395_; 
v___x_389_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_389_, 0, v___x_377_);
lean_ctor_set(v___x_389_, 1, v___x_386_);
lean_ctor_set(v___x_389_, 2, v___x_388_);
lean_ctor_set(v___x_389_, 3, v___x_324_);
v___x_390_ = lean_mk_empty_array_with_capacity(v___x_329_);
lean_inc_ref(v___x_390_);
v___x_391_ = lean_array_push(v___x_390_, v___x_381_);
v___x_392_ = lean_array_push(v___x_391_, v___x_385_);
v___x_393_ = lean_array_push(v___x_392_, v___x_389_);
if (v_isShared_342_ == 0)
{
lean_ctor_set_tag(v___x_341_, 1);
lean_ctor_set(v___x_341_, 0, v_a_334_);
v___x_395_ = v___x_341_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v_a_334_);
v___x_395_ = v_reuseFailAlloc_405_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
lean_object* v___x_397_; 
if (v_isShared_337_ == 0)
{
lean_ctor_set(v___x_336_, 0, v___x_328_);
v___x_397_ = v___x_336_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v___x_328_);
v___x_397_ = v_reuseFailAlloc_404_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; uint8_t v___x_402_; lean_object* v___x_403_; 
v___x_398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_398_, 0, v___x_330_);
v___x_399_ = lean_array_push(v___x_390_, v___x_395_);
v___x_400_ = lean_array_push(v___x_399_, v___x_397_);
v___x_401_ = lean_array_push(v___x_400_, v___x_398_);
v___x_402_ = 0;
v___x_403_ = l_Lean_Elab_Term_elabAppArgs(v_a_373_, v___x_393_, v___x_401_, v_expectedType_x3f_313_, v___x_402_, v___x_402_, v___x_402_, v_a_314_, v_a_315_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
return v___x_403_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_368_);
lean_dec(v_a_366_);
lean_del_object(v___x_359_);
lean_dec(v_a_357_);
lean_del_object(v___x_341_);
lean_dec(v_a_339_);
lean_del_object(v___x_336_);
lean_dec(v_a_334_);
lean_dec(v___x_330_);
lean_dec(v___x_328_);
lean_dec(v_expectedType_x3f_313_);
return v___x_372_;
}
}
}
default: 
{
lean_object* v___x_411_; 
lean_del_object(v___x_359_);
lean_dec(v_a_357_);
lean_del_object(v___x_341_);
lean_dec(v_a_339_);
lean_del_object(v___x_336_);
lean_dec(v_a_334_);
lean_dec(v___x_330_);
lean_dec(v___x_328_);
lean_dec(v_expectedType_x3f_313_);
v___x_411_ = l_Lean_Elab_Term_tryPostpone(v_a_314_, v_a_315_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
if (lean_obj_tag(v___x_411_) == 0)
{
lean_object* v___x_412_; 
lean_dec_ref_known(v___x_411_, 1);
v___x_412_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_throwForInFailure(v_a_362_, v_a_314_, v_a_315_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
return v___x_412_;
}
else
{
lean_object* v_a_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_420_; 
lean_dec_ref(v_a_362_);
v_a_413_ = lean_ctor_get(v___x_411_, 0);
v_isSharedCheck_420_ = !lean_is_exclusive(v___x_411_);
if (v_isSharedCheck_420_ == 0)
{
v___x_415_ = v___x_411_;
v_isShared_416_ = v_isSharedCheck_420_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_a_413_);
lean_dec(v___x_411_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_420_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v___x_418_; 
if (v_isShared_416_ == 0)
{
v___x_418_ = v___x_415_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v_a_413_);
v___x_418_ = v_reuseFailAlloc_419_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
return v___x_418_;
}
}
}
}
}
}
else
{
lean_object* v_a_421_; lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_428_; 
lean_dec_ref(v_a_362_);
lean_del_object(v___x_359_);
lean_dec(v_a_357_);
lean_del_object(v___x_341_);
lean_dec(v_a_339_);
lean_del_object(v___x_336_);
lean_dec(v_a_334_);
lean_dec(v___x_330_);
lean_dec(v___x_328_);
lean_dec(v_expectedType_x3f_313_);
v_a_421_ = lean_ctor_get(v___x_363_, 0);
v_isSharedCheck_428_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_428_ == 0)
{
v___x_423_ = v___x_363_;
v_isShared_424_ = v_isSharedCheck_428_;
goto v_resetjp_422_;
}
else
{
lean_inc(v_a_421_);
lean_dec(v___x_363_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_428_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
lean_object* v___x_426_; 
if (v_isShared_424_ == 0)
{
v___x_426_ = v___x_423_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_a_421_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
return v___x_426_;
}
}
}
}
}
}
else
{
lean_dec(v_a_344_);
lean_del_object(v___x_341_);
lean_dec(v_a_339_);
lean_del_object(v___x_336_);
lean_dec(v_a_334_);
lean_dec(v___x_330_);
lean_dec(v___x_328_);
lean_dec(v_expectedType_x3f_313_);
return v___x_356_;
}
}
}
else
{
lean_object* v_a_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_465_; 
lean_del_object(v___x_346_);
lean_dec(v_a_344_);
lean_del_object(v___x_341_);
lean_dec(v_a_339_);
lean_del_object(v___x_336_);
lean_dec(v_a_334_);
lean_dec(v___x_330_);
lean_dec(v___x_328_);
lean_dec(v_expectedType_x3f_313_);
v_a_458_ = lean_ctor_get(v___x_348_, 0);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_348_);
if (v_isSharedCheck_465_ == 0)
{
v___x_460_ = v___x_348_;
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_a_458_);
lean_dec(v___x_348_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_463_; 
if (v_isShared_461_ == 0)
{
v___x_463_ = v___x_460_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_a_458_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
}
}
}
else
{
lean_del_object(v___x_341_);
lean_dec(v_a_339_);
lean_del_object(v___x_336_);
lean_dec(v_a_334_);
lean_dec(v___x_330_);
lean_dec(v___x_328_);
lean_dec(v_expectedType_x3f_313_);
return v___x_343_;
}
}
}
else
{
lean_del_object(v___x_336_);
lean_dec(v_a_334_);
lean_dec(v___x_330_);
lean_dec(v___x_328_);
lean_dec(v_expectedType_x3f_313_);
return v___x_338_;
}
}
}
else
{
lean_dec(v___x_330_);
lean_dec(v___x_328_);
lean_dec(v_expectedType_x3f_313_);
return v___x_333_;
}
}
else
{
lean_object* v_a_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_476_; 
lean_dec(v___x_330_);
lean_dec(v___x_328_);
lean_dec(v___x_326_);
lean_dec(v_expectedType_x3f_313_);
v_a_469_ = lean_ctor_get(v___x_331_, 0);
v_isSharedCheck_476_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_476_ == 0)
{
v___x_471_ = v___x_331_;
v_isShared_472_ = v_isSharedCheck_476_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_a_469_);
lean_dec(v___x_331_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_476_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___x_474_; 
if (v_isShared_472_ == 0)
{
v___x_474_ = v___x_471_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v_a_469_);
v___x_474_ = v_reuseFailAlloc_475_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
return v___x_474_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabForIn___boxed(lean_object* v_stx_477_, lean_object* v_expectedType_x3f_478_, lean_object* v_a_479_, lean_object* v_a_480_, lean_object* v_a_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l_Lean_Elab_Term_elabForIn(v_stx_477_, v_expectedType_x3f_478_, v_a_479_, v_a_480_, v_a_481_, v_a_482_, v_a_483_, v_a_484_);
lean_dec(v_a_484_);
lean_dec_ref(v_a_483_);
lean_dec(v_a_482_);
lean_dec_ref(v_a_481_);
lean_dec(v_a_480_);
lean_dec_ref(v_a_479_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1(){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_495_ = l_Lean_Elab_Term_termElabAttribute;
v___x_496_ = ((lean_object*)(l_Lean_Elab_Term_elabForIn___closed__4));
v___x_497_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__2));
v___x_498_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabForIn___boxed), 9, 0);
v___x_499_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_495_, v___x_496_, v___x_497_, v___x_498_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___boxed(lean_object* v_a_500_){
_start:
{
lean_object* v_res_501_; 
v_res_501_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1();
return v_res_501_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3(){
_start:
{
lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
v___x_528_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1___closed__2));
v___x_529_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___closed__6));
v___x_530_ = l_Lean_addBuiltinDeclarationRanges(v___x_528_, v___x_529_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3___boxed(lean_object* v_a_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3();
return v_res_532_;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabForIn_x27___closed__6(void){
_start:
{
lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_545_ = ((lean_object*)(l_Lean_Elab_Term_elabForIn_x27___closed__5));
v___x_546_ = l_Lean_stringToMessageData(v___x_545_);
return v___x_546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabForIn_x27(lean_object* v_stx_552_, lean_object* v_expectedType_x3f_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_){
_start:
{
lean_object* v___x_561_; uint8_t v___x_562_; 
v___x_561_ = ((lean_object*)(l_Lean_Elab_Term_elabForIn_x27___closed__1));
lean_inc(v_stx_552_);
v___x_562_ = l_Lean_Syntax_isOfKind(v_stx_552_, v___x_561_);
if (v___x_562_ == 0)
{
lean_object* v___x_563_; 
lean_dec(v_expectedType_x3f_553_);
lean_dec(v_stx_552_);
v___x_563_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Term_elabForIn_spec__0___redArg();
return v___x_563_;
}
else
{
lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_564_ = lean_unsigned_to_nat(0u);
v___x_565_ = lean_unsigned_to_nat(1u);
v___x_566_ = l_Lean_Syntax_getArg(v_stx_552_, v___x_565_);
v___x_567_ = lean_unsigned_to_nat(2u);
v___x_568_ = l_Lean_Syntax_getArg(v_stx_552_, v___x_567_);
v___x_569_ = lean_unsigned_to_nat(3u);
v___x_570_ = l_Lean_Syntax_getArg(v_stx_552_, v___x_569_);
lean_dec(v_stx_552_);
lean_inc(v_expectedType_x3f_553_);
v___x_571_ = l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(v_expectedType_x3f_553_, v_a_554_, v_a_555_, v_a_556_, v_a_557_, v_a_558_, v_a_559_);
if (lean_obj_tag(v___x_571_) == 0)
{
lean_object* v___x_572_; lean_object* v___x_573_; 
lean_dec_ref_known(v___x_571_, 1);
v___x_572_ = lean_box(0);
v___x_573_ = l_Lean_Elab_Term_elabTerm(v___x_566_, v___x_572_, v___x_562_, v___x_562_, v_a_554_, v_a_555_, v_a_556_, v_a_557_, v_a_558_, v_a_559_);
if (lean_obj_tag(v___x_573_) == 0)
{
lean_object* v_a_574_; lean_object* v___x_576_; uint8_t v_isShared_577_; uint8_t v_isSharedCheck_730_; 
v_a_574_ = lean_ctor_get(v___x_573_, 0);
v_isSharedCheck_730_ = !lean_is_exclusive(v___x_573_);
if (v_isSharedCheck_730_ == 0)
{
v___x_576_ = v___x_573_;
v_isShared_577_ = v_isSharedCheck_730_;
goto v_resetjp_575_;
}
else
{
lean_inc(v_a_574_);
lean_dec(v___x_573_);
v___x_576_ = lean_box(0);
v_isShared_577_ = v_isSharedCheck_730_;
goto v_resetjp_575_;
}
v_resetjp_575_:
{
lean_object* v___x_578_; 
lean_inc(v_expectedType_x3f_553_);
v___x_578_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn(v_expectedType_x3f_553_, v_a_554_, v_a_555_, v_a_556_, v_a_557_, v_a_558_, v_a_559_);
if (lean_obj_tag(v___x_578_) == 0)
{
lean_object* v_a_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_729_; 
v_a_579_ = lean_ctor_get(v___x_578_, 0);
v_isSharedCheck_729_ = !lean_is_exclusive(v___x_578_);
if (v_isSharedCheck_729_ == 0)
{
v___x_581_ = v___x_578_;
v_isShared_582_ = v_isSharedCheck_729_;
goto v_resetjp_580_;
}
else
{
lean_inc(v_a_579_);
lean_dec(v___x_578_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_729_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
lean_object* v___x_583_; 
lean_inc(v_a_559_);
lean_inc_ref(v_a_558_);
lean_inc(v_a_557_);
lean_inc_ref(v_a_556_);
lean_inc(v_a_574_);
v___x_583_ = lean_infer_type(v_a_574_, v_a_556_, v_a_557_, v_a_558_, v_a_559_);
if (lean_obj_tag(v___x_583_) == 0)
{
lean_object* v_a_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_728_; 
v_a_584_ = lean_ctor_get(v___x_583_, 0);
v_isSharedCheck_728_ = !lean_is_exclusive(v___x_583_);
if (v_isSharedCheck_728_ == 0)
{
v___x_586_ = v___x_583_;
v_isShared_587_ = v_isSharedCheck_728_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_a_584_);
lean_dec(v___x_583_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_728_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_588_; 
v___x_588_ = l_Lean_Meta_mkFreshLevelMVar(v_a_556_, v_a_557_, v_a_558_, v_a_559_);
if (lean_obj_tag(v___x_588_) == 0)
{
lean_object* v_a_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_593_; 
v_a_589_ = lean_ctor_get(v___x_588_, 0);
lean_inc(v_a_589_);
lean_dec_ref_known(v___x_588_, 1);
v___x_590_ = l_Lean_Level_succ___override(v_a_589_);
v___x_591_ = l_Lean_mkSort(v___x_590_);
if (v_isShared_587_ == 0)
{
lean_ctor_set_tag(v___x_586_, 1);
lean_ctor_set(v___x_586_, 0, v___x_591_);
v___x_593_ = v___x_586_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v___x_591_);
v___x_593_ = v_reuseFailAlloc_719_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
uint8_t v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; 
v___x_594_ = 0;
v___x_595_ = lean_box(0);
v___x_596_ = l_Lean_Meta_mkFreshExprMVar(v___x_593_, v___x_594_, v___x_595_, v_a_556_, v_a_557_, v_a_558_, v_a_559_);
if (lean_obj_tag(v___x_596_) == 0)
{
lean_object* v_a_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_718_; 
v_a_597_ = lean_ctor_get(v___x_596_, 0);
v_isSharedCheck_718_ = !lean_is_exclusive(v___x_596_);
if (v_isSharedCheck_718_ == 0)
{
v___x_599_ = v___x_596_;
v_isShared_600_ = v_isSharedCheck_718_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_a_597_);
lean_dec(v___x_596_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_718_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v_a_602_; lean_object* v___y_670_; lean_object* v_a_671_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_691_ = ((lean_object*)(l_Lean_Elab_Term_elabForIn_x27___closed__8));
v___x_692_ = lean_mk_empty_array_with_capacity(v___x_567_);
lean_inc(v_a_597_);
v___x_693_ = lean_array_push(v___x_692_, v_a_597_);
lean_inc(v_a_584_);
v___x_694_ = lean_array_push(v___x_693_, v_a_584_);
v___x_695_ = l_Lean_Meta_mkAppM(v___x_691_, v___x_694_, v_a_556_, v_a_557_, v_a_558_, v_a_559_);
if (lean_obj_tag(v___x_695_) == 0)
{
lean_object* v_a_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_716_; 
v_a_696_ = lean_ctor_get(v___x_695_, 0);
v_isSharedCheck_716_ = !lean_is_exclusive(v___x_695_);
if (v_isSharedCheck_716_ == 0)
{
v___x_698_ = v___x_695_;
v_isShared_699_ = v_isSharedCheck_716_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_a_696_);
lean_dec(v___x_695_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_716_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_701_; 
if (v_isShared_699_ == 0)
{
lean_ctor_set_tag(v___x_698_, 1);
v___x_701_ = v___x_698_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v_a_696_);
v___x_701_ = v_reuseFailAlloc_715_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
lean_object* v___x_702_; 
v___x_702_ = l_Lean_Meta_mkFreshExprMVar(v___x_701_, v___x_594_, v___x_595_, v_a_556_, v_a_557_, v_a_558_, v_a_559_);
if (lean_obj_tag(v___x_702_) == 0)
{
lean_object* v_a_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; 
v_a_703_ = lean_ctor_get(v___x_702_, 0);
lean_inc(v_a_703_);
lean_dec_ref_known(v___x_702_, 1);
v___x_704_ = ((lean_object*)(l_Lean_Elab_Term_elabForIn_x27___closed__9));
v___x_705_ = lean_unsigned_to_nat(4u);
v___x_706_ = lean_mk_empty_array_with_capacity(v___x_705_);
lean_inc(v_a_579_);
v___x_707_ = lean_array_push(v___x_706_, v_a_579_);
lean_inc(v_a_584_);
v___x_708_ = lean_array_push(v___x_707_, v_a_584_);
lean_inc(v_a_597_);
v___x_709_ = lean_array_push(v___x_708_, v_a_597_);
v___x_710_ = lean_array_push(v___x_709_, v_a_703_);
v___x_711_ = l_Lean_Meta_mkAppM(v___x_704_, v___x_710_, v_a_556_, v_a_557_, v_a_558_, v_a_559_);
if (lean_obj_tag(v___x_711_) == 0)
{
lean_object* v_a_712_; 
lean_dec(v_a_584_);
v_a_712_ = lean_ctor_get(v___x_711_, 0);
lean_inc(v_a_712_);
lean_dec_ref_known(v___x_711_, 1);
v_a_602_ = v_a_712_;
goto v___jp_601_;
}
else
{
lean_object* v_a_713_; 
lean_del_object(v___x_599_);
lean_dec(v_a_597_);
lean_del_object(v___x_581_);
lean_del_object(v___x_576_);
lean_dec(v_a_574_);
lean_dec(v___x_570_);
lean_dec(v___x_568_);
lean_dec(v_expectedType_x3f_553_);
v_a_713_ = lean_ctor_get(v___x_711_, 0);
lean_inc(v_a_713_);
v___y_670_ = v___x_711_;
v_a_671_ = v_a_713_;
goto v___jp_669_;
}
}
else
{
lean_object* v_a_714_; 
lean_del_object(v___x_599_);
lean_dec(v_a_597_);
lean_del_object(v___x_581_);
lean_del_object(v___x_576_);
lean_dec(v_a_574_);
lean_dec(v___x_570_);
lean_dec(v___x_568_);
lean_dec(v_expectedType_x3f_553_);
v_a_714_ = lean_ctor_get(v___x_702_, 0);
lean_inc(v_a_714_);
v___y_670_ = v___x_702_;
v_a_671_ = v_a_714_;
goto v___jp_669_;
}
}
}
}
else
{
lean_object* v_a_717_; 
lean_del_object(v___x_599_);
lean_dec(v_a_597_);
lean_del_object(v___x_581_);
lean_del_object(v___x_576_);
lean_dec(v_a_574_);
lean_dec(v___x_570_);
lean_dec(v___x_568_);
lean_dec(v_expectedType_x3f_553_);
v_a_717_ = lean_ctor_get(v___x_695_, 0);
lean_inc(v_a_717_);
v___y_670_ = v___x_695_;
v_a_671_ = v_a_717_;
goto v___jp_669_;
}
v___jp_601_:
{
lean_object* v___x_603_; 
lean_inc_ref(v_a_602_);
v___x_603_ = l_Lean_Meta_trySynthInstance(v_a_602_, v___x_572_, v_a_556_, v_a_557_, v_a_558_, v_a_559_);
if (lean_obj_tag(v___x_603_) == 0)
{
lean_object* v_a_604_; 
v_a_604_ = lean_ctor_get(v___x_603_, 0);
lean_inc(v_a_604_);
lean_dec_ref_known(v___x_603_, 1);
switch(lean_obj_tag(v_a_604_))
{
case 0:
{
lean_object* v___x_605_; 
lean_del_object(v___x_599_);
lean_dec(v_a_597_);
lean_del_object(v___x_581_);
lean_dec(v_a_579_);
lean_del_object(v___x_576_);
lean_dec(v_a_574_);
lean_dec(v___x_570_);
lean_dec(v___x_568_);
lean_dec(v_expectedType_x3f_553_);
v___x_605_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_throwForInFailure(v_a_602_, v_a_554_, v_a_555_, v_a_556_, v_a_557_, v_a_558_, v_a_559_);
return v___x_605_;
}
case 1:
{
lean_object* v_a_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_650_; 
lean_dec_ref(v_a_602_);
v_a_606_ = lean_ctor_get(v_a_604_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v_a_604_);
if (v_isSharedCheck_650_ == 0)
{
v___x_608_ = v_a_604_;
v_isShared_609_ = v_isSharedCheck_650_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_a_606_);
lean_dec(v_a_604_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_650_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_610_ = ((lean_object*)(l_Lean_Elab_Term_elabForIn_x27___closed__4));
v___x_611_ = lean_box(0);
v___x_612_ = l_Lean_Elab_Term_mkConst(v___x_610_, v___x_611_, v_a_554_, v_a_555_, v_a_556_, v_a_557_, v_a_558_, v_a_559_);
if (lean_obj_tag(v___x_612_) == 0)
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_649_; 
v_a_613_ = lean_ctor_get(v___x_612_, 0);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_612_);
if (v_isSharedCheck_649_ == 0)
{
v___x_615_ = v___x_612_;
v_isShared_616_ = v_isSharedCheck_649_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v___x_612_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_649_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_620_; 
v___x_617_ = lean_box(0);
v___x_618_ = ((lean_object*)(l_Lean_Elab_Term_elabForIn___closed__9));
if (v_isShared_616_ == 0)
{
lean_ctor_set_tag(v___x_615_, 1);
lean_ctor_set(v___x_615_, 0, v_a_579_);
v___x_620_ = v___x_615_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_a_579_);
v___x_620_ = v_reuseFailAlloc_648_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_624_; 
v___x_621_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_621_, 0, v___x_617_);
lean_ctor_set(v___x_621_, 1, v___x_618_);
lean_ctor_set(v___x_621_, 2, v___x_620_);
lean_ctor_set(v___x_621_, 3, v___x_564_);
v___x_622_ = ((lean_object*)(l_Lean_Elab_Term_elabForIn___closed__11));
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 0, v_a_597_);
v___x_624_ = v___x_608_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v_a_597_);
v___x_624_ = v_reuseFailAlloc_647_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_628_; 
v___x_625_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_625_, 0, v___x_617_);
lean_ctor_set(v___x_625_, 1, v___x_622_);
lean_ctor_set(v___x_625_, 2, v___x_624_);
lean_ctor_set(v___x_625_, 3, v___x_564_);
v___x_626_ = ((lean_object*)(l_Lean_Elab_Term_elabForIn___closed__13));
if (v_isShared_600_ == 0)
{
lean_ctor_set_tag(v___x_599_, 1);
lean_ctor_set(v___x_599_, 0, v_a_606_);
v___x_628_ = v___x_599_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v_a_606_);
v___x_628_ = v_reuseFailAlloc_646_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_635_; 
v___x_629_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_629_, 0, v___x_617_);
lean_ctor_set(v___x_629_, 1, v___x_626_);
lean_ctor_set(v___x_629_, 2, v___x_628_);
lean_ctor_set(v___x_629_, 3, v___x_564_);
v___x_630_ = lean_mk_empty_array_with_capacity(v___x_569_);
lean_inc_ref(v___x_630_);
v___x_631_ = lean_array_push(v___x_630_, v___x_621_);
v___x_632_ = lean_array_push(v___x_631_, v___x_625_);
v___x_633_ = lean_array_push(v___x_632_, v___x_629_);
if (v_isShared_582_ == 0)
{
lean_ctor_set_tag(v___x_581_, 1);
lean_ctor_set(v___x_581_, 0, v_a_574_);
v___x_635_ = v___x_581_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v_a_574_);
v___x_635_ = v_reuseFailAlloc_645_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
lean_object* v___x_637_; 
if (v_isShared_577_ == 0)
{
lean_ctor_set(v___x_576_, 0, v___x_568_);
v___x_637_ = v___x_576_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v___x_568_);
v___x_637_ = v_reuseFailAlloc_644_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; uint8_t v___x_642_; lean_object* v___x_643_; 
v___x_638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_638_, 0, v___x_570_);
v___x_639_ = lean_array_push(v___x_630_, v___x_635_);
v___x_640_ = lean_array_push(v___x_639_, v___x_637_);
v___x_641_ = lean_array_push(v___x_640_, v___x_638_);
v___x_642_ = 0;
v___x_643_ = l_Lean_Elab_Term_elabAppArgs(v_a_613_, v___x_633_, v___x_641_, v_expectedType_x3f_553_, v___x_642_, v___x_642_, v___x_642_, v_a_554_, v_a_555_, v_a_556_, v_a_557_, v_a_558_, v_a_559_);
return v___x_643_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_608_);
lean_dec(v_a_606_);
lean_del_object(v___x_599_);
lean_dec(v_a_597_);
lean_del_object(v___x_581_);
lean_dec(v_a_579_);
lean_del_object(v___x_576_);
lean_dec(v_a_574_);
lean_dec(v___x_570_);
lean_dec(v___x_568_);
lean_dec(v_expectedType_x3f_553_);
return v___x_612_;
}
}
}
default: 
{
lean_object* v___x_651_; 
lean_del_object(v___x_599_);
lean_dec(v_a_597_);
lean_del_object(v___x_581_);
lean_dec(v_a_579_);
lean_del_object(v___x_576_);
lean_dec(v_a_574_);
lean_dec(v___x_570_);
lean_dec(v___x_568_);
lean_dec(v_expectedType_x3f_553_);
v___x_651_ = l_Lean_Elab_Term_tryPostpone(v_a_554_, v_a_555_, v_a_556_, v_a_557_, v_a_558_, v_a_559_);
if (lean_obj_tag(v___x_651_) == 0)
{
lean_object* v___x_652_; 
lean_dec_ref_known(v___x_651_, 1);
v___x_652_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_throwForInFailure(v_a_602_, v_a_554_, v_a_555_, v_a_556_, v_a_557_, v_a_558_, v_a_559_);
return v___x_652_;
}
else
{
lean_object* v_a_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_660_; 
lean_dec_ref(v_a_602_);
v_a_653_ = lean_ctor_get(v___x_651_, 0);
v_isSharedCheck_660_ = !lean_is_exclusive(v___x_651_);
if (v_isSharedCheck_660_ == 0)
{
v___x_655_ = v___x_651_;
v_isShared_656_ = v_isSharedCheck_660_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_a_653_);
lean_dec(v___x_651_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_660_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v___x_658_; 
if (v_isShared_656_ == 0)
{
v___x_658_ = v___x_655_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v_a_653_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
return v___x_658_;
}
}
}
}
}
}
else
{
lean_object* v_a_661_; lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_668_; 
lean_dec_ref(v_a_602_);
lean_del_object(v___x_599_);
lean_dec(v_a_597_);
lean_del_object(v___x_581_);
lean_dec(v_a_579_);
lean_del_object(v___x_576_);
lean_dec(v_a_574_);
lean_dec(v___x_570_);
lean_dec(v___x_568_);
lean_dec(v_expectedType_x3f_553_);
v_a_661_ = lean_ctor_get(v___x_603_, 0);
v_isSharedCheck_668_ = !lean_is_exclusive(v___x_603_);
if (v_isSharedCheck_668_ == 0)
{
v___x_663_ = v___x_603_;
v_isShared_664_ = v_isSharedCheck_668_;
goto v_resetjp_662_;
}
else
{
lean_inc(v_a_661_);
lean_dec(v___x_603_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_668_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
lean_object* v___x_666_; 
if (v_isShared_664_ == 0)
{
v___x_666_ = v___x_663_;
goto v_reusejp_665_;
}
else
{
lean_object* v_reuseFailAlloc_667_; 
v_reuseFailAlloc_667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_667_, 0, v_a_661_);
v___x_666_ = v_reuseFailAlloc_667_;
goto v_reusejp_665_;
}
v_reusejp_665_:
{
return v___x_666_;
}
}
}
}
v___jp_669_:
{
uint8_t v___x_672_; 
v___x_672_ = l_Lean_Exception_isInterrupt(v_a_671_);
if (v___x_672_ == 0)
{
uint8_t v___x_673_; 
v___x_673_ = l_Lean_Exception_isRuntime(v_a_671_);
if (v___x_673_ == 0)
{
lean_object* v___x_674_; 
lean_dec_ref(v___y_670_);
v___x_674_ = l_Lean_Elab_Term_tryPostpone(v_a_554_, v_a_555_, v_a_556_, v_a_557_, v_a_558_, v_a_559_);
if (lean_obj_tag(v___x_674_) == 0)
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; 
lean_dec_ref_known(v___x_674_, 1);
v___x_675_ = lean_obj_once(&l_Lean_Elab_Term_elabForIn_x27___closed__6, &l_Lean_Elab_Term_elabForIn_x27___closed__6_once, _init_l_Lean_Elab_Term_elabForIn_x27___closed__6);
v___x_676_ = l_Lean_indentExpr(v_a_584_);
v___x_677_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_677_, 0, v___x_675_);
lean_ctor_set(v___x_677_, 1, v___x_676_);
v___x_678_ = lean_obj_once(&l_Lean_Elab_Term_elabForIn___closed__18, &l_Lean_Elab_Term_elabForIn___closed__18_once, _init_l_Lean_Elab_Term_elabForIn___closed__18);
v___x_679_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_679_, 0, v___x_677_);
lean_ctor_set(v___x_679_, 1, v___x_678_);
v___x_680_ = l_Lean_indentExpr(v_a_579_);
v___x_681_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_681_, 0, v___x_679_);
lean_ctor_set(v___x_681_, 1, v___x_680_);
v___x_682_ = l_Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0___redArg(v___x_681_, v_a_554_, v_a_555_, v_a_556_, v_a_557_, v_a_558_, v_a_559_);
return v___x_682_;
}
else
{
lean_object* v_a_683_; lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_690_; 
lean_dec(v_a_584_);
lean_dec(v_a_579_);
v_a_683_ = lean_ctor_get(v___x_674_, 0);
v_isSharedCheck_690_ = !lean_is_exclusive(v___x_674_);
if (v_isSharedCheck_690_ == 0)
{
v___x_685_ = v___x_674_;
v_isShared_686_ = v_isSharedCheck_690_;
goto v_resetjp_684_;
}
else
{
lean_inc(v_a_683_);
lean_dec(v___x_674_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_690_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
lean_object* v___x_688_; 
if (v_isShared_686_ == 0)
{
v___x_688_ = v___x_685_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v_a_683_);
v___x_688_ = v_reuseFailAlloc_689_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
return v___x_688_;
}
}
}
}
else
{
lean_dec(v_a_584_);
lean_dec(v_a_579_);
return v___y_670_;
}
}
else
{
lean_dec_ref(v_a_671_);
lean_dec(v_a_584_);
lean_dec(v_a_579_);
return v___y_670_;
}
}
}
}
else
{
lean_dec(v_a_584_);
lean_del_object(v___x_581_);
lean_dec(v_a_579_);
lean_del_object(v___x_576_);
lean_dec(v_a_574_);
lean_dec(v___x_570_);
lean_dec(v___x_568_);
lean_dec(v_expectedType_x3f_553_);
return v___x_596_;
}
}
}
else
{
lean_object* v_a_720_; lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_727_; 
lean_del_object(v___x_586_);
lean_dec(v_a_584_);
lean_del_object(v___x_581_);
lean_dec(v_a_579_);
lean_del_object(v___x_576_);
lean_dec(v_a_574_);
lean_dec(v___x_570_);
lean_dec(v___x_568_);
lean_dec(v_expectedType_x3f_553_);
v_a_720_ = lean_ctor_get(v___x_588_, 0);
v_isSharedCheck_727_ = !lean_is_exclusive(v___x_588_);
if (v_isSharedCheck_727_ == 0)
{
v___x_722_ = v___x_588_;
v_isShared_723_ = v_isSharedCheck_727_;
goto v_resetjp_721_;
}
else
{
lean_inc(v_a_720_);
lean_dec(v___x_588_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_727_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
lean_object* v___x_725_; 
if (v_isShared_723_ == 0)
{
v___x_725_ = v___x_722_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v_a_720_);
v___x_725_ = v_reuseFailAlloc_726_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
return v___x_725_;
}
}
}
}
}
else
{
lean_del_object(v___x_581_);
lean_dec(v_a_579_);
lean_del_object(v___x_576_);
lean_dec(v_a_574_);
lean_dec(v___x_570_);
lean_dec(v___x_568_);
lean_dec(v_expectedType_x3f_553_);
return v___x_583_;
}
}
}
else
{
lean_del_object(v___x_576_);
lean_dec(v_a_574_);
lean_dec(v___x_570_);
lean_dec(v___x_568_);
lean_dec(v_expectedType_x3f_553_);
return v___x_578_;
}
}
}
else
{
lean_dec(v___x_570_);
lean_dec(v___x_568_);
lean_dec(v_expectedType_x3f_553_);
return v___x_573_;
}
}
else
{
lean_object* v_a_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_738_; 
lean_dec(v___x_570_);
lean_dec(v___x_568_);
lean_dec(v___x_566_);
lean_dec(v_expectedType_x3f_553_);
v_a_731_ = lean_ctor_get(v___x_571_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_571_);
if (v_isSharedCheck_738_ == 0)
{
v___x_733_ = v___x_571_;
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_a_731_);
lean_dec(v___x_571_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v___x_736_; 
if (v_isShared_734_ == 0)
{
v___x_736_ = v___x_733_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v_a_731_);
v___x_736_ = v_reuseFailAlloc_737_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
return v___x_736_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabForIn_x27___boxed(lean_object* v_stx_739_, lean_object* v_expectedType_x3f_740_, lean_object* v_a_741_, lean_object* v_a_742_, lean_object* v_a_743_, lean_object* v_a_744_, lean_object* v_a_745_, lean_object* v_a_746_, lean_object* v_a_747_){
_start:
{
lean_object* v_res_748_; 
v_res_748_ = l_Lean_Elab_Term_elabForIn_x27(v_stx_739_, v_expectedType_x3f_740_, v_a_741_, v_a_742_, v_a_743_, v_a_744_, v_a_745_, v_a_746_);
lean_dec(v_a_746_);
lean_dec_ref(v_a_745_);
lean_dec(v_a_744_);
lean_dec_ref(v_a_743_);
lean_dec(v_a_742_);
lean_dec_ref(v_a_741_);
return v_res_748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27__1(){
_start:
{
lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; 
v___x_756_ = l_Lean_Elab_Term_termElabAttribute;
v___x_757_ = ((lean_object*)(l_Lean_Elab_Term_elabForIn_x27___closed__1));
v___x_758_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27__1___closed__1));
v___x_759_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabForIn_x27___boxed), 9, 0);
v___x_760_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_756_, v___x_757_, v___x_758_, v___x_759_);
return v___x_760_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27__1___boxed(lean_object* v_a_761_){
_start:
{
lean_object* v_res_762_; 
v_res_762_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27__1();
return v_res_762_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3(){
_start:
{
lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; 
v___x_789_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27__1___closed__1));
v___x_790_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___closed__6));
v___x_791_ = l_Lean_addBuiltinDeclarationRanges(v___x_789_, v___x_790_);
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3___boxed(lean_object* v_a_792_){
_start:
{
lean_object* v_res_793_; 
v_res_793_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3();
return v_res_793_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__0___redArg(lean_object* v_l_794_, lean_object* v___y_795_){
_start:
{
lean_object* v___x_797_; lean_object* v_mctx_798_; lean_object* v___x_799_; lean_object* v_fst_800_; lean_object* v_snd_801_; lean_object* v___x_802_; lean_object* v_cache_803_; lean_object* v_zetaDeltaFVarIds_804_; lean_object* v_postponed_805_; lean_object* v_diag_806_; lean_object* v___x_808_; uint8_t v_isShared_809_; uint8_t v_isSharedCheck_815_; 
v___x_797_ = lean_st_ref_get(v___y_795_);
v_mctx_798_ = lean_ctor_get(v___x_797_, 0);
lean_inc_ref(v_mctx_798_);
lean_dec(v___x_797_);
v___x_799_ = lean_instantiate_level_mvars(v_mctx_798_, v_l_794_);
v_fst_800_ = lean_ctor_get(v___x_799_, 0);
lean_inc(v_fst_800_);
v_snd_801_ = lean_ctor_get(v___x_799_, 1);
lean_inc(v_snd_801_);
lean_dec_ref(v___x_799_);
v___x_802_ = lean_st_ref_take(v___y_795_);
v_cache_803_ = lean_ctor_get(v___x_802_, 1);
v_zetaDeltaFVarIds_804_ = lean_ctor_get(v___x_802_, 2);
v_postponed_805_ = lean_ctor_get(v___x_802_, 3);
v_diag_806_ = lean_ctor_get(v___x_802_, 4);
v_isSharedCheck_815_ = !lean_is_exclusive(v___x_802_);
if (v_isSharedCheck_815_ == 0)
{
lean_object* v_unused_816_; 
v_unused_816_ = lean_ctor_get(v___x_802_, 0);
lean_dec(v_unused_816_);
v___x_808_ = v___x_802_;
v_isShared_809_ = v_isSharedCheck_815_;
goto v_resetjp_807_;
}
else
{
lean_inc(v_diag_806_);
lean_inc(v_postponed_805_);
lean_inc(v_zetaDeltaFVarIds_804_);
lean_inc(v_cache_803_);
lean_dec(v___x_802_);
v___x_808_ = lean_box(0);
v_isShared_809_ = v_isSharedCheck_815_;
goto v_resetjp_807_;
}
v_resetjp_807_:
{
lean_object* v___x_811_; 
if (v_isShared_809_ == 0)
{
lean_ctor_set(v___x_808_, 0, v_fst_800_);
v___x_811_ = v___x_808_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v_fst_800_);
lean_ctor_set(v_reuseFailAlloc_814_, 1, v_cache_803_);
lean_ctor_set(v_reuseFailAlloc_814_, 2, v_zetaDeltaFVarIds_804_);
lean_ctor_set(v_reuseFailAlloc_814_, 3, v_postponed_805_);
lean_ctor_set(v_reuseFailAlloc_814_, 4, v_diag_806_);
v___x_811_ = v_reuseFailAlloc_814_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_812_ = lean_st_ref_put(v___y_795_, v___x_811_);
v___x_813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_813_, 0, v_snd_801_);
return v___x_813_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__0___redArg___boxed(lean_object* v_l_817_, lean_object* v___y_818_, lean_object* v___y_819_){
_start:
{
lean_object* v_res_820_; 
v_res_820_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__0___redArg(v_l_817_, v___y_818_);
lean_dec(v___y_818_);
return v_res_820_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__0(lean_object* v_l_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_){
_start:
{
lean_object* v___x_829_; 
v___x_829_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__0___redArg(v_l_821_, v___y_825_);
return v___x_829_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__0___boxed(lean_object* v_l_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_){
_start:
{
lean_object* v_res_838_; 
v_res_838_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__0(v_l_830_, v___y_831_, v___y_832_, v___y_833_, v___y_834_, v___y_835_, v___y_836_);
lean_dec(v___y_836_);
lean_dec_ref(v___y_835_);
lean_dec(v___y_834_);
lean_dec_ref(v___y_833_);
lean_dec(v___y_832_);
lean_dec_ref(v___y_831_);
return v_res_838_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__1___redArg(lean_object* v_e_839_, lean_object* v___y_840_){
_start:
{
uint8_t v___x_842_; 
v___x_842_ = l_Lean_Expr_hasMVar(v_e_839_);
if (v___x_842_ == 0)
{
lean_object* v___x_843_; 
v___x_843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_843_, 0, v_e_839_);
return v___x_843_;
}
else
{
lean_object* v___x_844_; lean_object* v_mctx_845_; lean_object* v___x_846_; lean_object* v_fst_847_; lean_object* v_snd_848_; lean_object* v___x_849_; lean_object* v_cache_850_; lean_object* v_zetaDeltaFVarIds_851_; lean_object* v_postponed_852_; lean_object* v_diag_853_; lean_object* v___x_855_; uint8_t v_isShared_856_; uint8_t v_isSharedCheck_862_; 
v___x_844_ = lean_st_ref_get(v___y_840_);
v_mctx_845_ = lean_ctor_get(v___x_844_, 0);
lean_inc_ref(v_mctx_845_);
lean_dec(v___x_844_);
v___x_846_ = l_Lean_instantiateMVarsCore(v_mctx_845_, v_e_839_);
v_fst_847_ = lean_ctor_get(v___x_846_, 0);
lean_inc(v_fst_847_);
v_snd_848_ = lean_ctor_get(v___x_846_, 1);
lean_inc(v_snd_848_);
lean_dec_ref(v___x_846_);
v___x_849_ = lean_st_ref_take(v___y_840_);
v_cache_850_ = lean_ctor_get(v___x_849_, 1);
v_zetaDeltaFVarIds_851_ = lean_ctor_get(v___x_849_, 2);
v_postponed_852_ = lean_ctor_get(v___x_849_, 3);
v_diag_853_ = lean_ctor_get(v___x_849_, 4);
v_isSharedCheck_862_ = !lean_is_exclusive(v___x_849_);
if (v_isSharedCheck_862_ == 0)
{
lean_object* v_unused_863_; 
v_unused_863_ = lean_ctor_get(v___x_849_, 0);
lean_dec(v_unused_863_);
v___x_855_ = v___x_849_;
v_isShared_856_ = v_isSharedCheck_862_;
goto v_resetjp_854_;
}
else
{
lean_inc(v_diag_853_);
lean_inc(v_postponed_852_);
lean_inc(v_zetaDeltaFVarIds_851_);
lean_inc(v_cache_850_);
lean_dec(v___x_849_);
v___x_855_ = lean_box(0);
v_isShared_856_ = v_isSharedCheck_862_;
goto v_resetjp_854_;
}
v_resetjp_854_:
{
lean_object* v___x_858_; 
if (v_isShared_856_ == 0)
{
lean_ctor_set(v___x_855_, 0, v_snd_848_);
v___x_858_ = v___x_855_;
goto v_reusejp_857_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v_snd_848_);
lean_ctor_set(v_reuseFailAlloc_861_, 1, v_cache_850_);
lean_ctor_set(v_reuseFailAlloc_861_, 2, v_zetaDeltaFVarIds_851_);
lean_ctor_set(v_reuseFailAlloc_861_, 3, v_postponed_852_);
lean_ctor_set(v_reuseFailAlloc_861_, 4, v_diag_853_);
v___x_858_ = v_reuseFailAlloc_861_;
goto v_reusejp_857_;
}
v_reusejp_857_:
{
lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_859_ = lean_st_ref_put(v___y_840_, v___x_858_);
v___x_860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_860_, 0, v_fst_847_);
return v___x_860_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__1___redArg___boxed(lean_object* v_e_864_, lean_object* v___y_865_, lean_object* v___y_866_){
_start:
{
lean_object* v_res_867_; 
v_res_867_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__1___redArg(v_e_864_, v___y_865_);
lean_dec(v___y_865_);
return v_res_867_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__1(lean_object* v_e_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_){
_start:
{
lean_object* v___x_876_; 
v___x_876_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__1___redArg(v_e_868_, v___y_872_);
return v___x_876_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__1___boxed(lean_object* v_e_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_){
_start:
{
lean_object* v_res_885_; 
v_res_885_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__1(v_e_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_);
lean_dec(v___y_883_);
lean_dec_ref(v___y_882_);
lean_dec(v___y_881_);
lean_dec_ref(v___y_880_);
lean_dec(v___y_879_);
lean_dec_ref(v___y_878_);
return v_res_885_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo(lean_object* v_expectedType_x3f_889_, lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_, lean_object* v_a_893_, lean_object* v_a_894_, lean_object* v_a_895_){
_start:
{
lean_object* v_u_898_; lean_object* v_00_u03b1_899_; lean_object* v_listType_900_; lean_object* v___x_904_; 
v___x_904_ = l_Lean_Meta_mkFreshLevelMVar(v_a_892_, v_a_893_, v_a_894_, v_a_895_);
if (lean_obj_tag(v___x_904_) == 0)
{
lean_object* v_a_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; uint8_t v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; 
v_a_905_ = lean_ctor_get(v___x_904_, 0);
lean_inc_n(v_a_905_, 2);
lean_dec_ref_known(v___x_904_, 1);
v___x_906_ = l_Lean_Level_succ___override(v_a_905_);
v___x_907_ = l_Lean_mkSort(v___x_906_);
v___x_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_908_, 0, v___x_907_);
v___x_909_ = 0;
v___x_910_ = lean_box(0);
v___x_911_ = l_Lean_Meta_mkFreshExprMVar(v___x_908_, v___x_909_, v___x_910_, v_a_892_, v_a_893_, v_a_894_, v_a_895_);
if (lean_obj_tag(v___x_911_) == 0)
{
lean_object* v_a_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v_a_912_ = lean_ctor_get(v___x_911_, 0);
lean_inc_n(v_a_912_, 2);
lean_dec_ref_known(v___x_911_, 1);
v___x_913_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo___closed__1));
v___x_914_ = lean_box(0);
lean_inc(v_a_905_);
v___x_915_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_915_, 0, v_a_905_);
lean_ctor_set(v___x_915_, 1, v___x_914_);
v___x_916_ = l_Lean_mkConst(v___x_913_, v___x_915_);
v___x_917_ = l_Lean_Expr_app___override(v___x_916_, v_a_912_);
if (lean_obj_tag(v_expectedType_x3f_889_) == 1)
{
lean_object* v_val_918_; lean_object* v___x_919_; 
v_val_918_ = lean_ctor_get(v_expectedType_x3f_889_, 0);
lean_inc(v_val_918_);
lean_dec_ref_known(v_expectedType_x3f_889_, 1);
lean_inc_ref(v___x_917_);
v___x_919_ = l_Lean_Meta_isExprDefEq(v_val_918_, v___x_917_, v_a_892_, v_a_893_, v_a_894_, v_a_895_);
if (lean_obj_tag(v___x_919_) == 0)
{
lean_object* v___x_920_; lean_object* v_a_921_; lean_object* v___x_922_; lean_object* v_a_923_; lean_object* v___x_924_; lean_object* v_a_925_; 
lean_dec_ref_known(v___x_919_, 1);
v___x_920_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__0___redArg(v_a_905_, v_a_893_);
v_a_921_ = lean_ctor_get(v___x_920_, 0);
lean_inc(v_a_921_);
lean_dec_ref(v___x_920_);
v___x_922_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__1___redArg(v_a_912_, v_a_893_);
v_a_923_ = lean_ctor_get(v___x_922_, 0);
lean_inc(v_a_923_);
lean_dec_ref(v___x_922_);
v___x_924_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__1___redArg(v___x_917_, v_a_893_);
v_a_925_ = lean_ctor_get(v___x_924_, 0);
lean_inc(v_a_925_);
lean_dec_ref(v___x_924_);
v_u_898_ = v_a_921_;
v_00_u03b1_899_ = v_a_923_;
v_listType_900_ = v_a_925_;
goto v___jp_897_;
}
else
{
lean_object* v_a_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_933_; 
lean_dec_ref(v___x_917_);
lean_dec(v_a_912_);
lean_dec(v_a_905_);
v_a_926_ = lean_ctor_get(v___x_919_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_919_);
if (v_isSharedCheck_933_ == 0)
{
v___x_928_ = v___x_919_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v___x_919_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_931_; 
if (v_isShared_929_ == 0)
{
v___x_931_ = v___x_928_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_a_926_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
return v___x_931_;
}
}
}
}
else
{
lean_dec(v_expectedType_x3f_889_);
v_u_898_ = v_a_905_;
v_00_u03b1_899_ = v_a_912_;
v_listType_900_ = v___x_917_;
goto v___jp_897_;
}
}
else
{
lean_object* v_a_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_941_; 
lean_dec(v_a_905_);
lean_dec(v_expectedType_x3f_889_);
v_a_934_ = lean_ctor_get(v___x_911_, 0);
v_isSharedCheck_941_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_941_ == 0)
{
v___x_936_ = v___x_911_;
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_a_934_);
lean_dec(v___x_911_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v___x_939_; 
if (v_isShared_937_ == 0)
{
v___x_939_ = v___x_936_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v_a_934_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
return v___x_939_;
}
}
}
}
else
{
lean_object* v_a_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_949_; 
lean_dec(v_expectedType_x3f_889_);
v_a_942_ = lean_ctor_get(v___x_904_, 0);
v_isSharedCheck_949_ = !lean_is_exclusive(v___x_904_);
if (v_isSharedCheck_949_ == 0)
{
v___x_944_ = v___x_904_;
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_a_942_);
lean_dec(v___x_904_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v___x_947_; 
if (v_isShared_945_ == 0)
{
v___x_947_ = v___x_944_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v_a_942_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
}
v___jp_897_:
{
lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
v___x_901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_901_, 0, v_00_u03b1_899_);
lean_ctor_set(v___x_901_, 1, v_listType_900_);
v___x_902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_902_, 0, v_u_898_);
lean_ctor_set(v___x_902_, 1, v___x_901_);
v___x_903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_903_, 0, v___x_902_);
return v___x_903_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo___boxed(lean_object* v_expectedType_x3f_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_){
_start:
{
lean_object* v_res_958_; 
v_res_958_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo(v_expectedType_x3f_950_, v_a_951_, v_a_952_, v_a_953_, v_a_954_, v_a_955_, v_a_956_);
lean_dec(v_a_956_);
lean_dec_ref(v_a_955_);
lean_dec(v_a_954_);
lean_dec_ref(v_a_953_);
lean_dec(v_a_952_);
lean_dec_ref(v_a_951_);
return v_res_958_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree_spec__0(lean_object* v_cons_959_, lean_object* v_as_960_, size_t v_i_961_, size_t v_stop_962_, lean_object* v_b_963_){
_start:
{
uint8_t v___x_964_; 
v___x_964_ = lean_usize_dec_eq(v_i_961_, v_stop_962_);
if (v___x_964_ == 0)
{
size_t v___x_965_; size_t v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; 
v___x_965_ = ((size_t)1ULL);
v___x_966_ = lean_usize_sub(v_i_961_, v___x_965_);
v___x_967_ = lean_array_uget_borrowed(v_as_960_, v___x_966_);
lean_inc(v___x_967_);
lean_inc_ref(v_cons_959_);
v___x_968_ = l_Lean_mkAppB(v_cons_959_, v___x_967_, v_b_963_);
v_i_961_ = v___x_966_;
v_b_963_ = v___x_968_;
goto _start;
}
else
{
lean_dec_ref(v_cons_959_);
return v_b_963_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree_spec__0___boxed(lean_object* v_cons_970_, lean_object* v_as_971_, lean_object* v_i_972_, lean_object* v_stop_973_, lean_object* v_b_974_){
_start:
{
size_t v_i_boxed_975_; size_t v_stop_boxed_976_; lean_object* v_res_977_; 
v_i_boxed_975_ = lean_unbox_usize(v_i_972_);
lean_dec(v_i_972_);
v_stop_boxed_976_ = lean_unbox_usize(v_stop_973_);
lean_dec(v_stop_973_);
v_res_977_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree_spec__0(v_cons_970_, v_as_971_, v_i_boxed_975_, v_stop_boxed_976_, v_b_974_);
lean_dec_ref(v_as_971_);
return v_res_977_;
}
}
static lean_object* _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree___closed__2(void){
_start:
{
lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_981_ = lean_unsigned_to_nat(0u);
v___x_982_ = l_Lean_Expr_bvar___override(v___x_981_);
return v___x_982_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree(lean_object* v_cons_983_, lean_object* v_listType_984_, lean_object* v_elems_985_, lean_object* v_lo_986_, lean_object* v_hi_987_, lean_object* v_tail_988_){
_start:
{
lean_object* v___x_989_; lean_object* v___x_990_; uint8_t v___x_991_; 
v___x_989_ = lean_nat_sub(v_hi_987_, v_lo_986_);
v___x_990_ = lean_unsigned_to_nat(8u);
v___x_991_ = lean_nat_dec_lt(v___x_989_, v___x_990_);
if (v___x_991_ == 0)
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v_mid_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_992_ = lean_unsigned_to_nat(1u);
v___x_993_ = lean_nat_shiftr(v___x_989_, v___x_992_);
lean_dec(v___x_989_);
v_mid_994_ = lean_nat_add(v_lo_986_, v___x_993_);
lean_dec(v___x_993_);
v___x_995_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree___closed__1));
lean_inc_ref_n(v_listType_984_, 2);
lean_inc_ref(v_cons_983_);
v___x_996_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree(v_cons_983_, v_listType_984_, v_elems_985_, v_mid_994_, v_hi_987_, v_tail_988_);
v___x_997_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree___closed__2, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree___closed__2_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree___closed__2);
v___x_998_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree(v_cons_983_, v_listType_984_, v_elems_985_, v_lo_986_, v_mid_994_, v___x_997_);
lean_dec(v_mid_994_);
v___x_999_ = l_Lean_Expr_letE___override(v___x_995_, v_listType_984_, v___x_996_, v___x_998_, v___x_991_);
return v___x_999_;
}
else
{
lean_object* v___x_1000_; uint8_t v___x_1001_; 
lean_dec(v___x_989_);
lean_dec_ref(v_listType_984_);
v___x_1000_ = lean_array_get_size(v_elems_985_);
v___x_1001_ = lean_nat_dec_le(v_hi_987_, v___x_1000_);
if (v___x_1001_ == 0)
{
uint8_t v___x_1002_; 
v___x_1002_ = lean_nat_dec_lt(v_lo_986_, v___x_1000_);
if (v___x_1002_ == 0)
{
lean_dec_ref(v_cons_983_);
return v_tail_988_;
}
else
{
size_t v___x_1003_; size_t v___x_1004_; lean_object* v___x_1005_; 
v___x_1003_ = lean_usize_of_nat(v___x_1000_);
v___x_1004_ = lean_usize_of_nat(v_lo_986_);
v___x_1005_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree_spec__0(v_cons_983_, v_elems_985_, v___x_1003_, v___x_1004_, v_tail_988_);
return v___x_1005_;
}
}
else
{
uint8_t v___x_1006_; 
v___x_1006_ = lean_nat_dec_lt(v_lo_986_, v_hi_987_);
if (v___x_1006_ == 0)
{
lean_dec_ref(v_cons_983_);
return v_tail_988_;
}
else
{
size_t v___x_1007_; size_t v___x_1008_; lean_object* v___x_1009_; 
v___x_1007_ = lean_usize_of_nat(v_hi_987_);
v___x_1008_ = lean_usize_of_nat(v_lo_986_);
v___x_1009_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree_spec__0(v_cons_983_, v_elems_985_, v___x_1007_, v___x_1008_, v_tail_988_);
return v___x_1009_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree___boxed(lean_object* v_cons_1010_, lean_object* v_listType_1011_, lean_object* v_elems_1012_, lean_object* v_lo_1013_, lean_object* v_hi_1014_, lean_object* v_tail_1015_){
_start:
{
lean_object* v_res_1016_; 
v_res_1016_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree(v_cons_1010_, v_listType_1011_, v_elems_1012_, v_lo_1013_, v_hi_1014_, v_tail_1015_);
lean_dec(v_hi_1014_);
lean_dec(v_lo_1013_);
lean_dec_ref(v_elems_1012_);
return v_res_1016_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_elabListLitAux_spec__0(lean_object* v_fst_1017_, size_t v_sz_1018_, size_t v_i_1019_, lean_object* v_bs_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_){
_start:
{
uint8_t v___x_1028_; 
v___x_1028_ = lean_usize_dec_lt(v_i_1019_, v_sz_1018_);
if (v___x_1028_ == 0)
{
lean_object* v___x_1029_; 
lean_dec_ref(v_fst_1017_);
v___x_1029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1029_, 0, v_bs_1020_);
return v___x_1029_;
}
else
{
lean_object* v_v_1030_; lean_object* v___x_1031_; lean_object* v_bs_x27_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; 
v_v_1030_ = lean_array_uget(v_bs_1020_, v_i_1019_);
v___x_1031_ = lean_unsigned_to_nat(0u);
v_bs_x27_1032_ = lean_array_uset(v_bs_1020_, v_i_1019_, v___x_1031_);
lean_inc_ref(v_fst_1017_);
v___x_1033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1033_, 0, v_fst_1017_);
v___x_1034_ = lean_box(0);
v___x_1035_ = l_Lean_Elab_Term_elabTermEnsuringType(v_v_1030_, v___x_1033_, v___x_1028_, v___x_1028_, v___x_1034_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_);
if (lean_obj_tag(v___x_1035_) == 0)
{
lean_object* v_a_1036_; size_t v___x_1037_; size_t v___x_1038_; lean_object* v___x_1039_; 
v_a_1036_ = lean_ctor_get(v___x_1035_, 0);
lean_inc(v_a_1036_);
lean_dec_ref_known(v___x_1035_, 1);
v___x_1037_ = ((size_t)1ULL);
v___x_1038_ = lean_usize_add(v_i_1019_, v___x_1037_);
v___x_1039_ = lean_array_uset(v_bs_x27_1032_, v_i_1019_, v_a_1036_);
v_i_1019_ = v___x_1038_;
v_bs_1020_ = v___x_1039_;
goto _start;
}
else
{
lean_object* v_a_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1048_; 
lean_dec_ref(v_bs_x27_1032_);
lean_dec_ref(v_fst_1017_);
v_a_1041_ = lean_ctor_get(v___x_1035_, 0);
v_isSharedCheck_1048_ = !lean_is_exclusive(v___x_1035_);
if (v_isSharedCheck_1048_ == 0)
{
v___x_1043_ = v___x_1035_;
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_a_1041_);
lean_dec(v___x_1035_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
lean_object* v___x_1046_; 
if (v_isShared_1044_ == 0)
{
v___x_1046_ = v___x_1043_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v_a_1041_);
v___x_1046_ = v_reuseFailAlloc_1047_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
return v___x_1046_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_elabListLitAux_spec__0___boxed(lean_object* v_fst_1049_, lean_object* v_sz_1050_, lean_object* v_i_1051_, lean_object* v_bs_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_){
_start:
{
size_t v_sz_boxed_1060_; size_t v_i_boxed_1061_; lean_object* v_res_1062_; 
v_sz_boxed_1060_ = lean_unbox_usize(v_sz_1050_);
lean_dec(v_sz_1050_);
v_i_boxed_1061_ = lean_unbox_usize(v_i_1051_);
lean_dec(v_i_1051_);
v_res_1062_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_elabListLitAux_spec__0(v_fst_1049_, v_sz_boxed_1060_, v_i_boxed_1061_, v_bs_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_);
lean_dec(v___y_1058_);
lean_dec_ref(v___y_1057_);
lean_dec(v___y_1056_);
lean_dec_ref(v___y_1055_);
lean_dec(v___y_1054_);
lean_dec_ref(v___y_1053_);
return v_res_1062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabListLitAux(lean_object* v_stx_1071_, lean_object* v_expectedType_x3f_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_, lean_object* v_a_1078_){
_start:
{
lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v_elemStxs_1082_; lean_object* v___x_1083_; 
v___x_1080_ = lean_unsigned_to_nat(1u);
v___x_1081_ = l_Lean_Syntax_getArg(v_stx_1071_, v___x_1080_);
v_elemStxs_1082_ = l_Lean_Syntax_getSepArgs(v___x_1081_);
lean_dec(v___x_1081_);
v___x_1083_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo(v_expectedType_x3f_1072_, v_a_1073_, v_a_1074_, v_a_1075_, v_a_1076_, v_a_1077_, v_a_1078_);
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v_a_1084_; lean_object* v_snd_1085_; lean_object* v_fst_1086_; lean_object* v_fst_1087_; lean_object* v_snd_1088_; lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1124_; 
v_a_1084_ = lean_ctor_get(v___x_1083_, 0);
lean_inc(v_a_1084_);
lean_dec_ref_known(v___x_1083_, 1);
v_snd_1085_ = lean_ctor_get(v_a_1084_, 1);
lean_inc(v_snd_1085_);
v_fst_1086_ = lean_ctor_get(v_a_1084_, 0);
lean_inc(v_fst_1086_);
lean_dec(v_a_1084_);
v_fst_1087_ = lean_ctor_get(v_snd_1085_, 0);
v_snd_1088_ = lean_ctor_get(v_snd_1085_, 1);
v_isSharedCheck_1124_ = !lean_is_exclusive(v_snd_1085_);
if (v_isSharedCheck_1124_ == 0)
{
v___x_1090_ = v_snd_1085_;
v_isShared_1091_ = v_isSharedCheck_1124_;
goto v_resetjp_1089_;
}
else
{
lean_inc(v_snd_1088_);
lean_inc(v_fst_1087_);
lean_dec(v_snd_1085_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1124_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1095_; 
v___x_1092_ = ((lean_object*)(l_Lean_Elab_Term_elabListLitAux___closed__1));
v___x_1093_ = lean_box(0);
if (v_isShared_1091_ == 0)
{
lean_ctor_set_tag(v___x_1090_, 1);
lean_ctor_set(v___x_1090_, 1, v___x_1093_);
lean_ctor_set(v___x_1090_, 0, v_fst_1086_);
v___x_1095_ = v___x_1090_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v_fst_1086_);
lean_ctor_set(v_reuseFailAlloc_1123_, 1, v___x_1093_);
v___x_1095_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; size_t v_sz_1101_; size_t v___x_1102_; lean_object* v___x_1103_; 
lean_inc_ref(v___x_1095_);
v___x_1096_ = l_Lean_mkConst(v___x_1092_, v___x_1095_);
lean_inc_n(v_fst_1087_, 2);
v___x_1097_ = l_Lean_Expr_app___override(v___x_1096_, v_fst_1087_);
v___x_1098_ = ((lean_object*)(l_Lean_Elab_Term_elabListLitAux___closed__3));
v___x_1099_ = l_Lean_mkConst(v___x_1098_, v___x_1095_);
v___x_1100_ = l_Lean_Expr_app___override(v___x_1099_, v_fst_1087_);
v_sz_1101_ = lean_array_size(v_elemStxs_1082_);
v___x_1102_ = ((size_t)0ULL);
v___x_1103_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Term_elabListLitAux_spec__0(v_fst_1087_, v_sz_1101_, v___x_1102_, v_elemStxs_1082_, v_a_1073_, v_a_1074_, v_a_1075_, v_a_1076_, v_a_1077_, v_a_1078_);
if (lean_obj_tag(v___x_1103_) == 0)
{
lean_object* v_a_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1114_; 
v_a_1104_ = lean_ctor_get(v___x_1103_, 0);
v_isSharedCheck_1114_ = !lean_is_exclusive(v___x_1103_);
if (v_isSharedCheck_1114_ == 0)
{
v___x_1106_ = v___x_1103_;
v_isShared_1107_ = v_isSharedCheck_1114_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_a_1104_);
lean_dec(v___x_1103_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1114_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1112_; 
v___x_1108_ = lean_unsigned_to_nat(0u);
v___x_1109_ = lean_array_get_size(v_a_1104_);
v___x_1110_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree(v___x_1100_, v_snd_1088_, v_a_1104_, v___x_1108_, v___x_1109_, v___x_1097_);
lean_dec(v_a_1104_);
if (v_isShared_1107_ == 0)
{
lean_ctor_set(v___x_1106_, 0, v___x_1110_);
v___x_1112_ = v___x_1106_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v___x_1110_);
v___x_1112_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
return v___x_1112_;
}
}
}
else
{
lean_object* v_a_1115_; lean_object* v___x_1117_; uint8_t v_isShared_1118_; uint8_t v_isSharedCheck_1122_; 
lean_dec_ref(v___x_1100_);
lean_dec_ref(v___x_1097_);
lean_dec(v_snd_1088_);
v_a_1115_ = lean_ctor_get(v___x_1103_, 0);
v_isSharedCheck_1122_ = !lean_is_exclusive(v___x_1103_);
if (v_isSharedCheck_1122_ == 0)
{
v___x_1117_ = v___x_1103_;
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
else
{
lean_inc(v_a_1115_);
lean_dec(v___x_1103_);
v___x_1117_ = lean_box(0);
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
v_resetjp_1116_:
{
lean_object* v___x_1120_; 
if (v_isShared_1118_ == 0)
{
v___x_1120_ = v___x_1117_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v_a_1115_);
v___x_1120_ = v_reuseFailAlloc_1121_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
return v___x_1120_;
}
}
}
}
}
}
else
{
lean_object* v_a_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1132_; 
lean_dec_ref(v_elemStxs_1082_);
v_a_1125_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1132_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1132_ == 0)
{
v___x_1127_ = v___x_1083_;
v_isShared_1128_ = v_isSharedCheck_1132_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_a_1125_);
lean_dec(v___x_1083_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1132_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v___x_1130_; 
if (v_isShared_1128_ == 0)
{
v___x_1130_ = v___x_1127_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v_a_1125_);
v___x_1130_ = v_reuseFailAlloc_1131_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
return v___x_1130_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabListLitAux___boxed(lean_object* v_stx_1133_, lean_object* v_expectedType_x3f_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_){
_start:
{
lean_object* v_res_1142_; 
v_res_1142_ = l_Lean_Elab_Term_elabListLitAux(v_stx_1133_, v_expectedType_x3f_1134_, v_a_1135_, v_a_1136_, v_a_1137_, v_a_1138_, v_a_1139_, v_a_1140_);
lean_dec(v_a_1140_);
lean_dec_ref(v_a_1139_);
lean_dec(v_a_1138_);
lean_dec_ref(v_a_1137_);
lean_dec(v_a_1136_);
lean_dec_ref(v_a_1135_);
lean_dec(v_stx_1133_);
return v_res_1142_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1(){
_start:
{
lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; 
v___x_1153_ = l_Lean_Elab_Term_termElabAttribute;
v___x_1154_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1___closed__1));
v___x_1155_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1___closed__3));
v___x_1156_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabListLitAux___boxed), 9, 0);
v___x_1157_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1153_, v___x_1154_, v___x_1155_, v___x_1156_);
return v___x_1157_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1___boxed(lean_object* v_a_1158_){
_start:
{
lean_object* v_res_1159_; 
v_res_1159_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1();
return v_res_1159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_ctorIdx___impl(uint8_t v_x_1160_){
_start:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1161_ = lean_box(v_x_1160_);
v___x_1162_ = lean_obj_tag_nat(v___x_1161_);
lean_dec(v___x_1161_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_ctorIdx___impl___boxed(lean_object* v_x_1163_){
_start:
{
uint8_t v_x_4__boxed_1164_; lean_object* v_res_1165_; 
v_x_4__boxed_1164_ = lean_unbox(v_x_1163_);
v_res_1165_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_ctorIdx___impl(v_x_4__boxed_1164_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_ctorElim___redArg(lean_object* v_k_1166_){
_start:
{
lean_inc(v_k_1166_);
return v_k_1166_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_ctorElim___redArg___boxed(lean_object* v_k_1167_){
_start:
{
lean_object* v_res_1168_; 
v_res_1168_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_ctorElim___redArg(v_k_1167_);
lean_dec(v_k_1167_);
return v_res_1168_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_ctorElim(lean_object* v_motive_1169_, lean_object* v_ctorIdx_1170_, uint8_t v_t_1171_, lean_object* v_h_1172_, lean_object* v_k_1173_){
_start:
{
lean_inc(v_k_1173_);
return v_k_1173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_ctorElim___boxed(lean_object* v_motive_1174_, lean_object* v_ctorIdx_1175_, lean_object* v_t_1176_, lean_object* v_h_1177_, lean_object* v_k_1178_){
_start:
{
uint8_t v_t_boxed_1179_; lean_object* v_res_1180_; 
v_t_boxed_1179_ = lean_unbox(v_t_1176_);
v_res_1180_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_ctorElim(v_motive_1174_, v_ctorIdx_1175_, v_t_boxed_1179_, v_h_1177_, v_k_1178_);
lean_dec(v_k_1178_);
lean_dec(v_ctorIdx_1175_);
return v_res_1180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_regular_elim___redArg(lean_object* v_regular_1181_){
_start:
{
lean_inc(v_regular_1181_);
return v_regular_1181_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_regular_elim___redArg___boxed(lean_object* v_regular_1182_){
_start:
{
lean_object* v_res_1183_; 
v_res_1183_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_regular_elim___redArg(v_regular_1182_);
lean_dec(v_regular_1182_);
return v_res_1183_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_regular_elim(lean_object* v_motive_1184_, uint8_t v_t_1185_, lean_object* v_h_1186_, lean_object* v_regular_1187_){
_start:
{
lean_inc(v_regular_1187_);
return v_regular_1187_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_regular_elim___boxed(lean_object* v_motive_1188_, lean_object* v_t_1189_, lean_object* v_h_1190_, lean_object* v_regular_1191_){
_start:
{
uint8_t v_t_boxed_1192_; lean_object* v_res_1193_; 
v_t_boxed_1192_ = lean_unbox(v_t_1189_);
v_res_1193_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_regular_elim(v_motive_1188_, v_t_boxed_1192_, v_h_1190_, v_regular_1191_);
lean_dec(v_regular_1191_);
return v_res_1193_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_lazy_elim___redArg(lean_object* v_lazy_1194_){
_start:
{
lean_inc(v_lazy_1194_);
return v_lazy_1194_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_lazy_elim___redArg___boxed(lean_object* v_lazy_1195_){
_start:
{
lean_object* v_res_1196_; 
v_res_1196_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_lazy_elim___redArg(v_lazy_1195_);
lean_dec(v_lazy_1195_);
return v_res_1196_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_lazy_elim(lean_object* v_motive_1197_, uint8_t v_t_1198_, lean_object* v_h_1199_, lean_object* v_lazy_1200_){
_start:
{
lean_inc(v_lazy_1200_);
return v_lazy_1200_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_lazy_elim___boxed(lean_object* v_motive_1201_, lean_object* v_t_1202_, lean_object* v_h_1203_, lean_object* v_lazy_1204_){
_start:
{
uint8_t v_t_boxed_1205_; lean_object* v_res_1206_; 
v_t_boxed_1205_ = lean_unbox(v_t_1202_);
v_res_1206_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_lazy_elim(v_motive_1201_, v_t_boxed_1205_, v_h_1203_, v_lazy_1204_);
lean_dec(v_lazy_1204_);
return v_res_1206_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_leftact_elim___redArg(lean_object* v_leftact_1207_){
_start:
{
lean_inc(v_leftact_1207_);
return v_leftact_1207_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_leftact_elim___redArg___boxed(lean_object* v_leftact_1208_){
_start:
{
lean_object* v_res_1209_; 
v_res_1209_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_leftact_elim___redArg(v_leftact_1208_);
lean_dec(v_leftact_1208_);
return v_res_1209_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_leftact_elim(lean_object* v_motive_1210_, uint8_t v_t_1211_, lean_object* v_h_1212_, lean_object* v_leftact_1213_){
_start:
{
lean_inc(v_leftact_1213_);
return v_leftact_1213_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_leftact_elim___boxed(lean_object* v_motive_1214_, lean_object* v_t_1215_, lean_object* v_h_1216_, lean_object* v_leftact_1217_){
_start:
{
uint8_t v_t_boxed_1218_; lean_object* v_res_1219_; 
v_t_boxed_1218_ = lean_unbox(v_t_1215_);
v_res_1219_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_leftact_elim(v_motive_1214_, v_t_boxed_1218_, v_h_1216_, v_leftact_1217_);
lean_dec(v_leftact_1217_);
return v_res_1219_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_rightact_elim___redArg(lean_object* v_rightact_1220_){
_start:
{
lean_inc(v_rightact_1220_);
return v_rightact_1220_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_rightact_elim___redArg___boxed(lean_object* v_rightact_1221_){
_start:
{
lean_object* v_res_1222_; 
v_res_1222_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_rightact_elim___redArg(v_rightact_1221_);
lean_dec(v_rightact_1221_);
return v_res_1222_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_rightact_elim(lean_object* v_motive_1223_, uint8_t v_t_1224_, lean_object* v_h_1225_, lean_object* v_rightact_1226_){
_start:
{
lean_inc(v_rightact_1226_);
return v_rightact_1226_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_rightact_elim___boxed(lean_object* v_motive_1227_, lean_object* v_t_1228_, lean_object* v_h_1229_, lean_object* v_rightact_1230_){
_start:
{
uint8_t v_t_boxed_1231_; lean_object* v_res_1232_; 
v_t_boxed_1231_ = lean_unbox(v_t_1228_);
v_res_1232_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_BinOpKind_rightact_elim(v_motive_1227_, v_t_boxed_1231_, v_h_1229_, v_rightact_1230_);
lean_dec(v_rightact_1230_);
return v_res_1232_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_instBEqBinOpKind_beq(uint8_t v_x_1233_, uint8_t v_y_1234_){
_start:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; uint8_t v___x_1239_; 
v___x_1235_ = lean_box(v_x_1233_);
v___x_1236_ = lean_obj_tag_nat(v___x_1235_);
lean_dec(v___x_1235_);
v___x_1237_ = lean_box(v_y_1234_);
v___x_1238_ = lean_obj_tag_nat(v___x_1237_);
lean_dec(v___x_1237_);
v___x_1239_ = lean_nat_dec_eq(v___x_1236_, v___x_1238_);
return v___x_1239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_instBEqBinOpKind_beq___boxed(lean_object* v_x_1240_, lean_object* v_y_1241_){
_start:
{
uint8_t v_x_24__boxed_1242_; uint8_t v_y_25__boxed_1243_; uint8_t v_res_1244_; lean_object* v_r_1245_; 
v_x_24__boxed_1242_ = lean_unbox(v_x_1240_);
v_y_25__boxed_1243_ = lean_unbox(v_y_1241_);
v_res_1244_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_instBEqBinOpKind_beq(v_x_24__boxed_1242_, v_y_25__boxed_1243_);
v_r_1245_ = lean_box(v_res_1244_);
return v_r_1245_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_ctorIdx___impl(lean_object* v_x_1248_){
_start:
{
lean_object* v___x_1249_; 
v___x_1249_ = lean_obj_tag_nat(v_x_1248_);
return v___x_1249_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_ctorIdx___impl___boxed(lean_object* v_x_1250_){
_start:
{
lean_object* v_res_1251_; 
v_res_1251_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_ctorIdx___impl(v_x_1250_);
lean_dec_ref(v_x_1250_);
return v_res_1251_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_ctorElim___redArg(lean_object* v_t_1252_, lean_object* v_k_1253_){
_start:
{
switch(lean_obj_tag(v_t_1252_))
{
case 1:
{
lean_object* v_ref_1254_; uint8_t v_kind_1255_; lean_object* v_f_1256_; lean_object* v_lhs_1257_; lean_object* v_rhs_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; 
v_ref_1254_ = lean_ctor_get(v_t_1252_, 0);
lean_inc(v_ref_1254_);
v_kind_1255_ = lean_ctor_get_uint8(v_t_1252_, sizeof(void*)*4);
v_f_1256_ = lean_ctor_get(v_t_1252_, 1);
lean_inc_ref(v_f_1256_);
v_lhs_1257_ = lean_ctor_get(v_t_1252_, 2);
lean_inc_ref(v_lhs_1257_);
v_rhs_1258_ = lean_ctor_get(v_t_1252_, 3);
lean_inc_ref(v_rhs_1258_);
lean_dec_ref_known(v_t_1252_, 4);
v___x_1259_ = lean_box(v_kind_1255_);
v___x_1260_ = lean_apply_5(v_k_1253_, v_ref_1254_, v___x_1259_, v_f_1256_, v_lhs_1257_, v_rhs_1258_);
return v___x_1260_;
}
case 3:
{
lean_object* v_macroName_1261_; lean_object* v_stx_1262_; lean_object* v_stx_x27_1263_; lean_object* v_nested_1264_; lean_object* v___x_1265_; 
v_macroName_1261_ = lean_ctor_get(v_t_1252_, 0);
lean_inc(v_macroName_1261_);
v_stx_1262_ = lean_ctor_get(v_t_1252_, 1);
lean_inc(v_stx_1262_);
v_stx_x27_1263_ = lean_ctor_get(v_t_1252_, 2);
lean_inc(v_stx_x27_1263_);
v_nested_1264_ = lean_ctor_get(v_t_1252_, 3);
lean_inc_ref(v_nested_1264_);
lean_dec_ref_known(v_t_1252_, 4);
v___x_1265_ = lean_apply_4(v_k_1253_, v_macroName_1261_, v_stx_1262_, v_stx_x27_1263_, v_nested_1264_);
return v___x_1265_;
}
default: 
{
lean_object* v_ref_1266_; lean_object* v_infoTrees_1267_; lean_object* v_val_1268_; lean_object* v___x_1269_; 
v_ref_1266_ = lean_ctor_get(v_t_1252_, 0);
lean_inc(v_ref_1266_);
v_infoTrees_1267_ = lean_ctor_get(v_t_1252_, 1);
lean_inc_ref(v_infoTrees_1267_);
v_val_1268_ = lean_ctor_get(v_t_1252_, 2);
lean_inc_ref(v_val_1268_);
lean_dec_ref(v_t_1252_);
v___x_1269_ = lean_apply_3(v_k_1253_, v_ref_1266_, v_infoTrees_1267_, v_val_1268_);
return v___x_1269_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_ctorElim(lean_object* v_motive_1270_, lean_object* v_ctorIdx_1271_, lean_object* v_t_1272_, lean_object* v_h_1273_, lean_object* v_k_1274_){
_start:
{
lean_object* v___x_1275_; 
v___x_1275_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_ctorElim___redArg(v_t_1272_, v_k_1274_);
return v___x_1275_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_ctorElim___boxed(lean_object* v_motive_1276_, lean_object* v_ctorIdx_1277_, lean_object* v_t_1278_, lean_object* v_h_1279_, lean_object* v_k_1280_){
_start:
{
lean_object* v_res_1281_; 
v_res_1281_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_ctorElim(v_motive_1276_, v_ctorIdx_1277_, v_t_1278_, v_h_1279_, v_k_1280_);
lean_dec(v_ctorIdx_1277_);
return v_res_1281_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_term_elim___redArg(lean_object* v_t_1282_, lean_object* v_term_1283_){
_start:
{
lean_object* v___x_1284_; 
v___x_1284_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_ctorElim___redArg(v_t_1282_, v_term_1283_);
return v___x_1284_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_term_elim(lean_object* v_motive_1285_, lean_object* v_t_1286_, lean_object* v_h_1287_, lean_object* v_term_1288_){
_start:
{
lean_object* v___x_1289_; 
v___x_1289_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_ctorElim___redArg(v_t_1286_, v_term_1288_);
return v___x_1289_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_binop_elim___redArg(lean_object* v_t_1290_, lean_object* v_binop_1291_){
_start:
{
lean_object* v___x_1292_; 
v___x_1292_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_ctorElim___redArg(v_t_1290_, v_binop_1291_);
return v___x_1292_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_binop_elim(lean_object* v_motive_1293_, lean_object* v_t_1294_, lean_object* v_h_1295_, lean_object* v_binop_1296_){
_start:
{
lean_object* v___x_1297_; 
v___x_1297_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_ctorElim___redArg(v_t_1294_, v_binop_1296_);
return v___x_1297_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_unop_elim___redArg(lean_object* v_t_1298_, lean_object* v_unop_1299_){
_start:
{
lean_object* v___x_1300_; 
v___x_1300_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_ctorElim___redArg(v_t_1298_, v_unop_1299_);
return v___x_1300_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_unop_elim(lean_object* v_motive_1301_, lean_object* v_t_1302_, lean_object* v_h_1303_, lean_object* v_unop_1304_){
_start:
{
lean_object* v___x_1305_; 
v___x_1305_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_ctorElim___redArg(v_t_1302_, v_unop_1304_);
return v___x_1305_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_macroExpansion_elim___redArg(lean_object* v_t_1306_, lean_object* v_macroExpansion_1307_){
_start:
{
lean_object* v___x_1308_; 
v___x_1308_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_ctorElim___redArg(v_t_1306_, v_macroExpansion_1307_);
return v___x_1308_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_macroExpansion_elim(lean_object* v_motive_1309_, lean_object* v_t_1310_, lean_object* v_h_1311_, lean_object* v_macroExpansion_1312_){
_start:
{
lean_object* v___x_1313_; 
v___x_1313_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_Tree_ctorElim___redArg(v_t_1310_, v_macroExpansion_1312_);
return v___x_1313_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1314_ = lean_unsigned_to_nat(32u);
v___x_1315_ = lean_mk_empty_array_with_capacity(v___x_1314_);
v___x_1316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1315_);
return v___x_1316_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; 
v___x_1317_ = ((size_t)5ULL);
v___x_1318_ = lean_unsigned_to_nat(0u);
v___x_1319_ = lean_unsigned_to_nat(32u);
v___x_1320_ = lean_mk_empty_array_with_capacity(v___x_1319_);
v___x_1321_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf_spec__0___redArg___closed__0, &l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf_spec__0___redArg___closed__0);
v___x_1322_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1322_, 0, v___x_1321_);
lean_ctor_set(v___x_1322_, 1, v___x_1320_);
lean_ctor_set(v___x_1322_, 2, v___x_1318_);
lean_ctor_set(v___x_1322_, 3, v___x_1318_);
lean_ctor_set_usize(v___x_1322_, 4, v___x_1317_);
return v___x_1322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf_spec__0___redArg(lean_object* v___y_1323_){
_start:
{
lean_object* v___x_1325_; lean_object* v_infoState_1326_; lean_object* v_trees_1327_; lean_object* v___x_1328_; lean_object* v_infoState_1329_; lean_object* v_env_1330_; lean_object* v_nextMacroScope_1331_; lean_object* v_ngen_1332_; lean_object* v_auxDeclNGen_1333_; lean_object* v_traceState_1334_; lean_object* v_cache_1335_; lean_object* v_recordedDeps_1336_; lean_object* v_messages_1337_; lean_object* v_snapshotTasks_1338_; lean_object* v___x_1340_; uint8_t v_isShared_1341_; uint8_t v_isSharedCheck_1359_; 
v___x_1325_ = lean_st_ref_get(v___y_1323_);
v_infoState_1326_ = lean_ctor_get(v___x_1325_, 8);
lean_inc_ref(v_infoState_1326_);
lean_dec(v___x_1325_);
v_trees_1327_ = lean_ctor_get(v_infoState_1326_, 2);
lean_inc_ref(v_trees_1327_);
lean_dec_ref(v_infoState_1326_);
v___x_1328_ = lean_st_ref_take(v___y_1323_);
v_infoState_1329_ = lean_ctor_get(v___x_1328_, 8);
v_env_1330_ = lean_ctor_get(v___x_1328_, 0);
v_nextMacroScope_1331_ = lean_ctor_get(v___x_1328_, 1);
v_ngen_1332_ = lean_ctor_get(v___x_1328_, 2);
v_auxDeclNGen_1333_ = lean_ctor_get(v___x_1328_, 3);
v_traceState_1334_ = lean_ctor_get(v___x_1328_, 4);
v_cache_1335_ = lean_ctor_get(v___x_1328_, 5);
v_recordedDeps_1336_ = lean_ctor_get(v___x_1328_, 6);
v_messages_1337_ = lean_ctor_get(v___x_1328_, 7);
v_snapshotTasks_1338_ = lean_ctor_get(v___x_1328_, 9);
v_isSharedCheck_1359_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1340_ = v___x_1328_;
v_isShared_1341_ = v_isSharedCheck_1359_;
goto v_resetjp_1339_;
}
else
{
lean_inc(v_snapshotTasks_1338_);
lean_inc(v_infoState_1329_);
lean_inc(v_messages_1337_);
lean_inc(v_recordedDeps_1336_);
lean_inc(v_cache_1335_);
lean_inc(v_traceState_1334_);
lean_inc(v_auxDeclNGen_1333_);
lean_inc(v_ngen_1332_);
lean_inc(v_nextMacroScope_1331_);
lean_inc(v_env_1330_);
lean_dec(v___x_1328_);
v___x_1340_ = lean_box(0);
v_isShared_1341_ = v_isSharedCheck_1359_;
goto v_resetjp_1339_;
}
v_resetjp_1339_:
{
uint8_t v_enabled_1342_; lean_object* v_assignment_1343_; lean_object* v_lazyAssignment_1344_; lean_object* v___x_1346_; uint8_t v_isShared_1347_; uint8_t v_isSharedCheck_1357_; 
v_enabled_1342_ = lean_ctor_get_uint8(v_infoState_1329_, sizeof(void*)*3);
v_assignment_1343_ = lean_ctor_get(v_infoState_1329_, 0);
v_lazyAssignment_1344_ = lean_ctor_get(v_infoState_1329_, 1);
v_isSharedCheck_1357_ = !lean_is_exclusive(v_infoState_1329_);
if (v_isSharedCheck_1357_ == 0)
{
lean_object* v_unused_1358_; 
v_unused_1358_ = lean_ctor_get(v_infoState_1329_, 2);
lean_dec(v_unused_1358_);
v___x_1346_ = v_infoState_1329_;
v_isShared_1347_ = v_isSharedCheck_1357_;
goto v_resetjp_1345_;
}
else
{
lean_inc(v_lazyAssignment_1344_);
lean_inc(v_assignment_1343_);
lean_dec(v_infoState_1329_);
v___x_1346_ = lean_box(0);
v_isShared_1347_ = v_isSharedCheck_1357_;
goto v_resetjp_1345_;
}
v_resetjp_1345_:
{
lean_object* v___x_1348_; lean_object* v___x_1350_; 
v___x_1348_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf_spec__0___redArg___closed__1, &l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf_spec__0___redArg___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf_spec__0___redArg___closed__1);
if (v_isShared_1347_ == 0)
{
lean_ctor_set(v___x_1346_, 2, v___x_1348_);
v___x_1350_ = v___x_1346_;
goto v_reusejp_1349_;
}
else
{
lean_object* v_reuseFailAlloc_1356_; 
v_reuseFailAlloc_1356_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1356_, 0, v_assignment_1343_);
lean_ctor_set(v_reuseFailAlloc_1356_, 1, v_lazyAssignment_1344_);
lean_ctor_set(v_reuseFailAlloc_1356_, 2, v___x_1348_);
lean_ctor_set_uint8(v_reuseFailAlloc_1356_, sizeof(void*)*3, v_enabled_1342_);
v___x_1350_ = v_reuseFailAlloc_1356_;
goto v_reusejp_1349_;
}
v_reusejp_1349_:
{
lean_object* v___x_1352_; 
if (v_isShared_1341_ == 0)
{
lean_ctor_set(v___x_1340_, 8, v___x_1350_);
v___x_1352_ = v___x_1340_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1355_; 
v_reuseFailAlloc_1355_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1355_, 0, v_env_1330_);
lean_ctor_set(v_reuseFailAlloc_1355_, 1, v_nextMacroScope_1331_);
lean_ctor_set(v_reuseFailAlloc_1355_, 2, v_ngen_1332_);
lean_ctor_set(v_reuseFailAlloc_1355_, 3, v_auxDeclNGen_1333_);
lean_ctor_set(v_reuseFailAlloc_1355_, 4, v_traceState_1334_);
lean_ctor_set(v_reuseFailAlloc_1355_, 5, v_cache_1335_);
lean_ctor_set(v_reuseFailAlloc_1355_, 6, v_recordedDeps_1336_);
lean_ctor_set(v_reuseFailAlloc_1355_, 7, v_messages_1337_);
lean_ctor_set(v_reuseFailAlloc_1355_, 8, v___x_1350_);
lean_ctor_set(v_reuseFailAlloc_1355_, 9, v_snapshotTasks_1338_);
v___x_1352_ = v_reuseFailAlloc_1355_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; 
v___x_1353_ = lean_st_ref_put(v___y_1323_, v___x_1352_);
v___x_1354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1354_, 0, v_trees_1327_);
return v___x_1354_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf_spec__0___redArg___boxed(lean_object* v___y_1360_, lean_object* v___y_1361_){
_start:
{
lean_object* v_res_1362_; 
v_res_1362_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf_spec__0___redArg(v___y_1360_);
lean_dec(v___y_1360_);
return v_res_1362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf_spec__0(lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_){
_start:
{
lean_object* v___x_1370_; 
v___x_1370_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf_spec__0___redArg(v___y_1368_);
return v___x_1370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf_spec__0___boxed(lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_){
_start:
{
lean_object* v_res_1378_; 
v_res_1378_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf_spec__0(v___y_1371_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_, v___y_1376_);
lean_dec(v___y_1376_);
lean_dec_ref(v___y_1375_);
lean_dec(v___y_1374_);
lean_dec_ref(v___y_1373_);
lean_dec(v___y_1372_);
lean_dec_ref(v___y_1371_);
return v_res_1378_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf(lean_object* v_s_1379_, lean_object* v_a_1380_, lean_object* v_a_1381_, lean_object* v_a_1382_, lean_object* v_a_1383_, lean_object* v_a_1384_, lean_object* v_a_1385_){
_start:
{
lean_object* v___x_1387_; uint8_t v___x_1388_; lean_object* v___x_1389_; 
v___x_1387_ = lean_box(0);
v___x_1388_ = 1;
lean_inc(v_s_1379_);
v___x_1389_ = l_Lean_Elab_Term_elabTerm(v_s_1379_, v___x_1387_, v___x_1388_, v___x_1388_, v_a_1380_, v_a_1381_, v_a_1382_, v_a_1383_, v_a_1384_, v_a_1385_);
if (lean_obj_tag(v___x_1389_) == 0)
{
lean_object* v_a_1390_; lean_object* v___x_1391_; lean_object* v_a_1392_; lean_object* v___x_1394_; uint8_t v_isShared_1395_; uint8_t v_isSharedCheck_1400_; 
v_a_1390_ = lean_ctor_get(v___x_1389_, 0);
lean_inc(v_a_1390_);
lean_dec_ref_known(v___x_1389_, 1);
v___x_1391_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf_spec__0___redArg(v_a_1385_);
v_a_1392_ = lean_ctor_get(v___x_1391_, 0);
v_isSharedCheck_1400_ = !lean_is_exclusive(v___x_1391_);
if (v_isSharedCheck_1400_ == 0)
{
v___x_1394_ = v___x_1391_;
v_isShared_1395_ = v_isSharedCheck_1400_;
goto v_resetjp_1393_;
}
else
{
lean_inc(v_a_1392_);
lean_dec(v___x_1391_);
v___x_1394_ = lean_box(0);
v_isShared_1395_ = v_isSharedCheck_1400_;
goto v_resetjp_1393_;
}
v_resetjp_1393_:
{
lean_object* v___x_1396_; lean_object* v___x_1398_; 
v___x_1396_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1396_, 0, v_s_1379_);
lean_ctor_set(v___x_1396_, 1, v_a_1392_);
lean_ctor_set(v___x_1396_, 2, v_a_1390_);
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 0, v___x_1396_);
v___x_1398_ = v___x_1394_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1399_; 
v_reuseFailAlloc_1399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1399_, 0, v___x_1396_);
v___x_1398_ = v_reuseFailAlloc_1399_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
return v___x_1398_;
}
}
}
else
{
lean_object* v_a_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1408_; 
lean_dec(v_s_1379_);
v_a_1401_ = lean_ctor_get(v___x_1389_, 0);
v_isSharedCheck_1408_ = !lean_is_exclusive(v___x_1389_);
if (v_isSharedCheck_1408_ == 0)
{
v___x_1403_ = v___x_1389_;
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_a_1401_);
lean_dec(v___x_1389_);
v___x_1403_ = lean_box(0);
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
v_resetjp_1402_:
{
lean_object* v___x_1406_; 
if (v_isShared_1404_ == 0)
{
v___x_1406_ = v___x_1403_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v_a_1401_);
v___x_1406_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
return v___x_1406_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf___boxed(lean_object* v_s_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_, lean_object* v_a_1412_, lean_object* v_a_1413_, lean_object* v_a_1414_, lean_object* v_a_1415_, lean_object* v_a_1416_){
_start:
{
lean_object* v_res_1417_; 
v_res_1417_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf(v_s_1409_, v_a_1410_, v_a_1411_, v_a_1412_, v_a_1413_, v_a_1414_, v_a_1415_);
lean_dec(v_a_1415_);
lean_dec_ref(v_a_1414_);
lean_dec(v_a_1413_);
lean_dec_ref(v_a_1412_);
lean_dec(v_a_1411_);
lean_dec_ref(v_a_1410_);
return v_res_1417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go_spec__0___redArg(lean_object* v_beforeStx_1418_, lean_object* v_afterStx_1419_, lean_object* v_x_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_){
_start:
{
lean_object* v_declName_x3f_1428_; lean_object* v_macroStack_1429_; uint8_t v_mayPostpone_1430_; uint8_t v_errToSorry_1431_; lean_object* v_autoBoundImplicitContext_1432_; lean_object* v_autoBoundImplicitForbidden_1433_; lean_object* v_sectionVars_1434_; lean_object* v_sectionFVars_1435_; uint8_t v_implicitLambda_1436_; uint8_t v_heedElabAsElim_1437_; uint8_t v_isNoncomputableSection_1438_; uint8_t v_isMetaSection_1439_; uint8_t v_ignoreTCFailures_1440_; uint8_t v_inPattern_1441_; lean_object* v_tacSnap_x3f_1442_; uint8_t v_saveRecAppSyntax_1443_; uint8_t v_holesAsSyntheticOpaque_1444_; lean_object* v_fixedTermElabs_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; 
v_declName_x3f_1428_ = lean_ctor_get(v___y_1421_, 0);
v_macroStack_1429_ = lean_ctor_get(v___y_1421_, 1);
v_mayPostpone_1430_ = lean_ctor_get_uint8(v___y_1421_, sizeof(void*)*8);
v_errToSorry_1431_ = lean_ctor_get_uint8(v___y_1421_, sizeof(void*)*8 + 1);
v_autoBoundImplicitContext_1432_ = lean_ctor_get(v___y_1421_, 2);
v_autoBoundImplicitForbidden_1433_ = lean_ctor_get(v___y_1421_, 3);
v_sectionVars_1434_ = lean_ctor_get(v___y_1421_, 4);
v_sectionFVars_1435_ = lean_ctor_get(v___y_1421_, 5);
v_implicitLambda_1436_ = lean_ctor_get_uint8(v___y_1421_, sizeof(void*)*8 + 2);
v_heedElabAsElim_1437_ = lean_ctor_get_uint8(v___y_1421_, sizeof(void*)*8 + 3);
v_isNoncomputableSection_1438_ = lean_ctor_get_uint8(v___y_1421_, sizeof(void*)*8 + 4);
v_isMetaSection_1439_ = lean_ctor_get_uint8(v___y_1421_, sizeof(void*)*8 + 5);
v_ignoreTCFailures_1440_ = lean_ctor_get_uint8(v___y_1421_, sizeof(void*)*8 + 6);
v_inPattern_1441_ = lean_ctor_get_uint8(v___y_1421_, sizeof(void*)*8 + 7);
v_tacSnap_x3f_1442_ = lean_ctor_get(v___y_1421_, 6);
v_saveRecAppSyntax_1443_ = lean_ctor_get_uint8(v___y_1421_, sizeof(void*)*8 + 8);
v_holesAsSyntheticOpaque_1444_ = lean_ctor_get_uint8(v___y_1421_, sizeof(void*)*8 + 9);
v_fixedTermElabs_1445_ = lean_ctor_get(v___y_1421_, 7);
v___x_1446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1446_, 0, v_beforeStx_1418_);
lean_ctor_set(v___x_1446_, 1, v_afterStx_1419_);
lean_inc(v_macroStack_1429_);
v___x_1447_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1447_, 0, v___x_1446_);
lean_ctor_set(v___x_1447_, 1, v_macroStack_1429_);
lean_inc_ref(v_fixedTermElabs_1445_);
lean_inc(v_tacSnap_x3f_1442_);
lean_inc(v_sectionFVars_1435_);
lean_inc(v_sectionVars_1434_);
lean_inc_ref(v_autoBoundImplicitForbidden_1433_);
lean_inc(v_autoBoundImplicitContext_1432_);
lean_inc(v_declName_x3f_1428_);
v___x_1448_ = lean_alloc_ctor(0, 8, 10);
lean_ctor_set(v___x_1448_, 0, v_declName_x3f_1428_);
lean_ctor_set(v___x_1448_, 1, v___x_1447_);
lean_ctor_set(v___x_1448_, 2, v_autoBoundImplicitContext_1432_);
lean_ctor_set(v___x_1448_, 3, v_autoBoundImplicitForbidden_1433_);
lean_ctor_set(v___x_1448_, 4, v_sectionVars_1434_);
lean_ctor_set(v___x_1448_, 5, v_sectionFVars_1435_);
lean_ctor_set(v___x_1448_, 6, v_tacSnap_x3f_1442_);
lean_ctor_set(v___x_1448_, 7, v_fixedTermElabs_1445_);
lean_ctor_set_uint8(v___x_1448_, sizeof(void*)*8, v_mayPostpone_1430_);
lean_ctor_set_uint8(v___x_1448_, sizeof(void*)*8 + 1, v_errToSorry_1431_);
lean_ctor_set_uint8(v___x_1448_, sizeof(void*)*8 + 2, v_implicitLambda_1436_);
lean_ctor_set_uint8(v___x_1448_, sizeof(void*)*8 + 3, v_heedElabAsElim_1437_);
lean_ctor_set_uint8(v___x_1448_, sizeof(void*)*8 + 4, v_isNoncomputableSection_1438_);
lean_ctor_set_uint8(v___x_1448_, sizeof(void*)*8 + 5, v_isMetaSection_1439_);
lean_ctor_set_uint8(v___x_1448_, sizeof(void*)*8 + 6, v_ignoreTCFailures_1440_);
lean_ctor_set_uint8(v___x_1448_, sizeof(void*)*8 + 7, v_inPattern_1441_);
lean_ctor_set_uint8(v___x_1448_, sizeof(void*)*8 + 8, v_saveRecAppSyntax_1443_);
lean_ctor_set_uint8(v___x_1448_, sizeof(void*)*8 + 9, v_holesAsSyntheticOpaque_1444_);
lean_inc(v___y_1426_);
lean_inc_ref(v___y_1425_);
lean_inc(v___y_1424_);
lean_inc_ref(v___y_1423_);
lean_inc(v___y_1422_);
v___x_1449_ = lean_apply_7(v_x_1420_, v___x_1448_, v___y_1422_, v___y_1423_, v___y_1424_, v___y_1425_, v___y_1426_, lean_box(0));
return v___x_1449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go_spec__0___redArg___boxed(lean_object* v_beforeStx_1450_, lean_object* v_afterStx_1451_, lean_object* v_x_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_){
_start:
{
lean_object* v_res_1460_; 
v_res_1460_ = l_Lean_Elab_Term_withPushMacroExpansionStack___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go_spec__0___redArg(v_beforeStx_1450_, v_afterStx_1451_, v_x_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_);
lean_dec(v___y_1458_);
lean_dec_ref(v___y_1457_);
lean_dec(v___y_1456_);
lean_dec_ref(v___y_1455_);
lean_dec(v___y_1454_);
lean_dec_ref(v___y_1453_);
return v_res_1460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go_spec__0(lean_object* v_00_u03b1_1461_, lean_object* v_beforeStx_1462_, lean_object* v_afterStx_1463_, lean_object* v_x_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_){
_start:
{
lean_object* v___x_1472_; 
v___x_1472_ = l_Lean_Elab_Term_withPushMacroExpansionStack___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go_spec__0___redArg(v_beforeStx_1462_, v_afterStx_1463_, v_x_1464_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_);
return v___x_1472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go_spec__0___boxed(lean_object* v_00_u03b1_1473_, lean_object* v_beforeStx_1474_, lean_object* v_afterStx_1475_, lean_object* v_x_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_){
_start:
{
lean_object* v_res_1484_; 
v_res_1484_ = l_Lean_Elab_Term_withPushMacroExpansionStack___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go_spec__0(v_00_u03b1_1473_, v_beforeStx_1474_, v_afterStx_1475_, v_x_1476_, v___y_1477_, v___y_1478_, v___y_1479_, v___y_1480_, v___y_1481_, v___y_1482_);
lean_dec(v___y_1482_);
lean_dec_ref(v___y_1481_);
lean_dec(v___y_1480_);
lean_dec_ref(v___y_1479_);
lean_dec(v___y_1478_);
lean_dec_ref(v___y_1477_);
return v_res_1484_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___lam__0(lean_object* v_s_1485_, lean_object* v___x_1486_, lean_object* v_fst_1487_, lean_object* v_snd_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_){
_start:
{
lean_object* v___x_1496_; 
lean_inc(v_s_1485_);
v___x_1496_ = l_Lean_Elab_Term_withDeprecationContextForSyntax___redArg(v_s_1485_, v___x_1486_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_);
if (lean_obj_tag(v___x_1496_) == 0)
{
lean_object* v_a_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1505_; 
v_a_1497_ = lean_ctor_get(v___x_1496_, 0);
v_isSharedCheck_1505_ = !lean_is_exclusive(v___x_1496_);
if (v_isSharedCheck_1505_ == 0)
{
v___x_1499_ = v___x_1496_;
v_isShared_1500_ = v_isSharedCheck_1505_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_a_1497_);
lean_dec(v___x_1496_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1505_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v___x_1501_; lean_object* v___x_1503_; 
v___x_1501_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1501_, 0, v_fst_1487_);
lean_ctor_set(v___x_1501_, 1, v_s_1485_);
lean_ctor_set(v___x_1501_, 2, v_snd_1488_);
lean_ctor_set(v___x_1501_, 3, v_a_1497_);
if (v_isShared_1500_ == 0)
{
lean_ctor_set(v___x_1499_, 0, v___x_1501_);
v___x_1503_ = v___x_1499_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v___x_1501_);
v___x_1503_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1502_;
}
v_reusejp_1502_:
{
return v___x_1503_;
}
}
}
else
{
lean_dec(v_snd_1488_);
lean_dec(v_fst_1487_);
lean_dec(v_s_1485_);
return v___x_1496_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___lam__0___boxed(lean_object* v_s_1506_, lean_object* v___x_1507_, lean_object* v_fst_1508_, lean_object* v_snd_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_){
_start:
{
lean_object* v_res_1517_; 
v_res_1517_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___lam__0(v_s_1506_, v___x_1507_, v_fst_1508_, v_snd_1509_, v___y_1510_, v___y_1511_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_);
lean_dec(v___y_1515_);
lean_dec_ref(v___y_1514_);
lean_dec(v___y_1513_);
lean_dec_ref(v___y_1512_);
lean_dec(v___y_1511_);
lean_dec_ref(v___y_1510_);
return v_res_1517_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_1518_; 
v___x_1518_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1518_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_1519_; lean_object* v___x_1520_; 
v___x_1519_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__0);
v___x_1520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1520_, 0, v___x_1519_);
return v___x_1520_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__2(void){
_start:
{
lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; 
v___x_1521_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__1);
v___x_1522_ = lean_unsigned_to_nat(0u);
v___x_1523_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1523_, 0, v___x_1522_);
lean_ctor_set(v___x_1523_, 1, v___x_1522_);
lean_ctor_set(v___x_1523_, 2, v___x_1522_);
lean_ctor_set(v___x_1523_, 3, v___x_1522_);
lean_ctor_set(v___x_1523_, 4, v___x_1521_);
lean_ctor_set(v___x_1523_, 5, v___x_1521_);
lean_ctor_set(v___x_1523_, 6, v___x_1521_);
lean_ctor_set(v___x_1523_, 7, v___x_1521_);
lean_ctor_set(v___x_1523_, 8, v___x_1521_);
lean_ctor_set(v___x_1523_, 9, v___x_1521_);
lean_ctor_set(v___x_1523_, 10, v___x_1521_);
return v___x_1523_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__3(void){
_start:
{
lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; 
v___x_1524_ = lean_unsigned_to_nat(32u);
v___x_1525_ = lean_mk_empty_array_with_capacity(v___x_1524_);
v___x_1526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1526_, 0, v___x_1525_);
return v___x_1526_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__4(void){
_start:
{
size_t v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1527_ = ((size_t)5ULL);
v___x_1528_ = lean_unsigned_to_nat(0u);
v___x_1529_ = lean_unsigned_to_nat(32u);
v___x_1530_ = lean_mk_empty_array_with_capacity(v___x_1529_);
v___x_1531_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__3);
v___x_1532_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1532_, 0, v___x_1531_);
lean_ctor_set(v___x_1532_, 1, v___x_1530_);
lean_ctor_set(v___x_1532_, 2, v___x_1528_);
lean_ctor_set(v___x_1532_, 3, v___x_1528_);
lean_ctor_set_usize(v___x_1532_, 4, v___x_1527_);
return v___x_1532_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__5(void){
_start:
{
lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; 
v___x_1533_ = lean_box(1);
v___x_1534_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__4);
v___x_1535_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__1);
v___x_1536_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1536_, 0, v___x_1535_);
lean_ctor_set(v___x_1536_, 1, v___x_1534_);
lean_ctor_set(v___x_1536_, 2, v___x_1533_);
return v___x_1536_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__7(void){
_start:
{
lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___x_1538_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__6));
v___x_1539_ = l_Lean_stringToMessageData(v___x_1538_);
return v___x_1539_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__9(void){
_start:
{
lean_object* v___x_1541_; lean_object* v___x_1542_; 
v___x_1541_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__8));
v___x_1542_ = l_Lean_stringToMessageData(v___x_1541_);
return v___x_1542_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__11(void){
_start:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; 
v___x_1544_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__10));
v___x_1545_ = l_Lean_stringToMessageData(v___x_1544_);
return v___x_1545_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__13(void){
_start:
{
lean_object* v___x_1547_; lean_object* v___x_1548_; 
v___x_1547_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__12));
v___x_1548_ = l_Lean_stringToMessageData(v___x_1547_);
return v___x_1548_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__15(void){
_start:
{
lean_object* v___x_1550_; lean_object* v___x_1551_; 
v___x_1550_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__14));
v___x_1551_ = l_Lean_stringToMessageData(v___x_1550_);
return v___x_1551_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__17(void){
_start:
{
lean_object* v___x_1553_; lean_object* v___x_1554_; 
v___x_1553_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__16));
v___x_1554_ = l_Lean_stringToMessageData(v___x_1553_);
return v___x_1554_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__19(void){
_start:
{
lean_object* v___x_1556_; lean_object* v___x_1557_; 
v___x_1556_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__18));
v___x_1557_ = l_Lean_stringToMessageData(v___x_1556_);
return v___x_1557_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg(lean_object* v_msg_1558_, lean_object* v_declHint_1559_, lean_object* v___y_1560_){
_start:
{
lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v_env_1564_; uint8_t v___x_1565_; 
v___x_1562_ = lean_box(0);
v___x_1563_ = lean_st_ref_get(v___y_1560_);
v_env_1564_ = lean_ctor_get(v___x_1563_, 0);
lean_inc_ref(v_env_1564_);
lean_dec(v___x_1563_);
v___x_1565_ = l_Lean_Name_isAnonymous(v_declHint_1559_);
if (v___x_1565_ == 0)
{
uint8_t v_isExporting_1566_; 
v_isExporting_1566_ = lean_ctor_get_uint8(v_env_1564_, sizeof(void*)*13);
if (v_isExporting_1566_ == 0)
{
lean_object* v___x_1567_; 
lean_dec_ref(v_env_1564_);
lean_dec(v_declHint_1559_);
v___x_1567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1567_, 0, v_msg_1558_);
return v___x_1567_;
}
else
{
lean_object* v___x_1568_; uint8_t v___x_1569_; 
lean_inc_ref(v_env_1564_);
v___x_1568_ = l_Lean_Environment_setExporting(v_env_1564_, v___x_1565_);
lean_inc(v_declHint_1559_);
lean_inc_ref(v___x_1568_);
v___x_1569_ = l_Lean_Environment_contains(v___x_1568_, v_declHint_1559_, v_isExporting_1566_);
if (v___x_1569_ == 0)
{
lean_object* v___x_1570_; 
lean_dec_ref(v___x_1568_);
lean_dec_ref(v_env_1564_);
lean_dec(v_declHint_1559_);
v___x_1570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1570_, 0, v_msg_1558_);
return v___x_1570_;
}
else
{
lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v_c_1576_; lean_object* v___x_1577_; 
v___x_1571_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__2);
v___x_1572_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__5);
v___x_1573_ = l_Lean_Options_empty;
lean_inc_ref(v___x_1568_);
v___x_1574_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1574_, 0, v___x_1568_);
lean_ctor_set(v___x_1574_, 1, v___x_1571_);
lean_ctor_set(v___x_1574_, 2, v___x_1572_);
lean_ctor_set(v___x_1574_, 3, v___x_1573_);
lean_inc(v_declHint_1559_);
v___x_1575_ = l_Lean_MessageData_ofConstName(v_declHint_1559_, v___x_1565_);
v_c_1576_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1576_, 0, v___x_1574_);
lean_ctor_set(v_c_1576_, 1, v___x_1575_);
v___x_1577_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_1568_, v_declHint_1559_);
lean_dec_ref(v___x_1568_);
if (lean_obj_tag(v___x_1577_) == 0)
{
lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; 
lean_dec_ref(v_env_1564_);
lean_dec(v_declHint_1559_);
v___x_1578_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__7);
v___x_1579_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1579_, 0, v___x_1578_);
lean_ctor_set(v___x_1579_, 1, v_c_1576_);
v___x_1580_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__9);
v___x_1581_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1581_, 0, v___x_1579_);
lean_ctor_set(v___x_1581_, 1, v___x_1580_);
v___x_1582_ = l_Lean_MessageData_note(v___x_1581_);
v___x_1583_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1583_, 0, v_msg_1558_);
lean_ctor_set(v___x_1583_, 1, v___x_1582_);
v___x_1584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1584_, 0, v___x_1583_);
return v___x_1584_;
}
else
{
lean_object* v_val_1585_; lean_object* v___x_1587_; uint8_t v_isShared_1588_; uint8_t v_isSharedCheck_1619_; 
v_val_1585_ = lean_ctor_get(v___x_1577_, 0);
v_isSharedCheck_1619_ = !lean_is_exclusive(v___x_1577_);
if (v_isSharedCheck_1619_ == 0)
{
v___x_1587_ = v___x_1577_;
v_isShared_1588_ = v_isSharedCheck_1619_;
goto v_resetjp_1586_;
}
else
{
lean_inc(v_val_1585_);
lean_dec(v___x_1577_);
v___x_1587_ = lean_box(0);
v_isShared_1588_ = v_isSharedCheck_1619_;
goto v_resetjp_1586_;
}
v_resetjp_1586_:
{
lean_object* v___x_1589_; lean_object* v_moduleNames_1590_; lean_object* v_mod_1591_; uint8_t v___x_1592_; 
v___x_1589_ = l_Lean_Environment_header(v_env_1564_);
lean_dec_ref(v_env_1564_);
v_moduleNames_1590_ = lean_ctor_get(v___x_1589_, 4);
lean_inc_ref(v_moduleNames_1590_);
lean_dec_ref(v___x_1589_);
v_mod_1591_ = lean_array_get(v___x_1562_, v_moduleNames_1590_, v_val_1585_);
lean_dec(v_val_1585_);
lean_dec_ref(v_moduleNames_1590_);
v___x_1592_ = l_Lean_isPrivateName(v_declHint_1559_);
lean_dec(v_declHint_1559_);
if (v___x_1592_ == 0)
{
lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1604_; 
v___x_1593_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__11);
v___x_1594_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1594_, 0, v___x_1593_);
lean_ctor_set(v___x_1594_, 1, v_c_1576_);
v___x_1595_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__13);
v___x_1596_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1596_, 0, v___x_1594_);
lean_ctor_set(v___x_1596_, 1, v___x_1595_);
v___x_1597_ = l_Lean_MessageData_ofName(v_mod_1591_);
v___x_1598_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1598_, 0, v___x_1596_);
lean_ctor_set(v___x_1598_, 1, v___x_1597_);
v___x_1599_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__15);
v___x_1600_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1600_, 0, v___x_1598_);
lean_ctor_set(v___x_1600_, 1, v___x_1599_);
v___x_1601_ = l_Lean_MessageData_note(v___x_1600_);
v___x_1602_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1602_, 0, v_msg_1558_);
lean_ctor_set(v___x_1602_, 1, v___x_1601_);
if (v_isShared_1588_ == 0)
{
lean_ctor_set_tag(v___x_1587_, 0);
lean_ctor_set(v___x_1587_, 0, v___x_1602_);
v___x_1604_ = v___x_1587_;
goto v_reusejp_1603_;
}
else
{
lean_object* v_reuseFailAlloc_1605_; 
v_reuseFailAlloc_1605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1605_, 0, v___x_1602_);
v___x_1604_ = v_reuseFailAlloc_1605_;
goto v_reusejp_1603_;
}
v_reusejp_1603_:
{
return v___x_1604_;
}
}
else
{
lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1617_; 
v___x_1606_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__7);
v___x_1607_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1607_, 0, v___x_1606_);
lean_ctor_set(v___x_1607_, 1, v_c_1576_);
v___x_1608_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__17);
v___x_1609_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1609_, 0, v___x_1607_);
lean_ctor_set(v___x_1609_, 1, v___x_1608_);
v___x_1610_ = l_Lean_MessageData_ofName(v_mod_1591_);
v___x_1611_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1611_, 0, v___x_1609_);
lean_ctor_set(v___x_1611_, 1, v___x_1610_);
v___x_1612_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__19);
v___x_1613_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1613_, 0, v___x_1611_);
lean_ctor_set(v___x_1613_, 1, v___x_1612_);
v___x_1614_ = l_Lean_MessageData_note(v___x_1613_);
v___x_1615_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1615_, 0, v_msg_1558_);
lean_ctor_set(v___x_1615_, 1, v___x_1614_);
if (v_isShared_1588_ == 0)
{
lean_ctor_set_tag(v___x_1587_, 0);
lean_ctor_set(v___x_1587_, 0, v___x_1615_);
v___x_1617_ = v___x_1587_;
goto v_reusejp_1616_;
}
else
{
lean_object* v_reuseFailAlloc_1618_; 
v_reuseFailAlloc_1618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1618_, 0, v___x_1615_);
v___x_1617_ = v_reuseFailAlloc_1618_;
goto v_reusejp_1616_;
}
v_reusejp_1616_:
{
return v___x_1617_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1620_; 
lean_dec_ref(v_env_1564_);
lean_dec(v_declHint_1559_);
v___x_1620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1620_, 0, v_msg_1558_);
return v___x_1620_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___boxed(lean_object* v_msg_1621_, lean_object* v_declHint_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_){
_start:
{
lean_object* v_res_1625_; 
v_res_1625_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg(v_msg_1621_, v_declHint_1622_, v___y_1623_);
lean_dec(v___y_1623_);
return v_res_1625_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4(lean_object* v_msg_1626_, lean_object* v_declHint_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_){
_start:
{
lean_object* v___x_1635_; lean_object* v_a_1636_; lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1645_; 
v___x_1635_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg(v_msg_1626_, v_declHint_1627_, v___y_1633_);
v_a_1636_ = lean_ctor_get(v___x_1635_, 0);
v_isSharedCheck_1645_ = !lean_is_exclusive(v___x_1635_);
if (v_isSharedCheck_1645_ == 0)
{
v___x_1638_ = v___x_1635_;
v_isShared_1639_ = v_isSharedCheck_1645_;
goto v_resetjp_1637_;
}
else
{
lean_inc(v_a_1636_);
lean_dec(v___x_1635_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1645_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1643_; 
v___x_1640_ = l_Lean_unknownIdentifierMessageTag;
v___x_1641_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1640_);
lean_ctor_set(v___x_1641_, 1, v_a_1636_);
if (v_isShared_1639_ == 0)
{
lean_ctor_set(v___x_1638_, 0, v___x_1641_);
v___x_1643_ = v___x_1638_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v___x_1641_);
v___x_1643_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
return v___x_1643_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4___boxed(lean_object* v_msg_1646_, lean_object* v_declHint_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_){
_start:
{
lean_object* v_res_1655_; 
v_res_1655_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4(v_msg_1646_, v_declHint_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_);
lean_dec(v___y_1653_);
lean_dec_ref(v___y_1652_);
lean_dec(v___y_1651_);
lean_dec_ref(v___y_1650_);
lean_dec(v___y_1649_);
lean_dec_ref(v___y_1648_);
return v_res_1655_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__5___redArg(lean_object* v_ref_1656_, lean_object* v_msg_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_){
_start:
{
lean_object* v_toCold_1665_; lean_object* v_currRecDepth_1666_; lean_object* v_ref_1667_; uint16_t v_optionFlags_1668_; uint8_t v_suppressElabErrors_1669_; uint8_t v_checkDeprecated_1670_; uint8_t v_isRecordingDeps_1671_; lean_object* v_ref_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; 
v_toCold_1665_ = lean_ctor_get(v___y_1662_, 0);
v_currRecDepth_1666_ = lean_ctor_get(v___y_1662_, 1);
v_ref_1667_ = lean_ctor_get(v___y_1662_, 2);
v_optionFlags_1668_ = lean_ctor_get_uint16(v___y_1662_, sizeof(void*)*3);
v_suppressElabErrors_1669_ = lean_ctor_get_uint8(v___y_1662_, sizeof(void*)*3 + 2);
v_checkDeprecated_1670_ = lean_ctor_get_uint8(v___y_1662_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1671_ = lean_ctor_get_uint8(v___y_1662_, sizeof(void*)*3 + 4);
v_ref_1672_ = l_Lean_replaceRef(v_ref_1656_, v_ref_1667_);
lean_inc(v_currRecDepth_1666_);
lean_inc_ref(v_toCold_1665_);
v___x_1673_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1673_, 0, v_toCold_1665_);
lean_ctor_set(v___x_1673_, 1, v_currRecDepth_1666_);
lean_ctor_set(v___x_1673_, 2, v_ref_1672_);
lean_ctor_set_uint16(v___x_1673_, sizeof(void*)*3, v_optionFlags_1668_);
lean_ctor_set_uint8(v___x_1673_, sizeof(void*)*3 + 2, v_suppressElabErrors_1669_);
lean_ctor_set_uint8(v___x_1673_, sizeof(void*)*3 + 3, v_checkDeprecated_1670_);
lean_ctor_set_uint8(v___x_1673_, sizeof(void*)*3 + 4, v_isRecordingDeps_1671_);
v___x_1674_ = l_Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0___redArg(v_msg_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_, v___x_1673_, v___y_1663_);
lean_dec_ref_known(v___x_1673_, 3);
return v___x_1674_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__5___redArg___boxed(lean_object* v_ref_1675_, lean_object* v_msg_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_){
_start:
{
lean_object* v_res_1684_; 
v_res_1684_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__5___redArg(v_ref_1675_, v_msg_1676_, v___y_1677_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_);
lean_dec(v___y_1682_);
lean_dec_ref(v___y_1681_);
lean_dec(v___y_1680_);
lean_dec_ref(v___y_1679_);
lean_dec(v___y_1678_);
lean_dec_ref(v___y_1677_);
lean_dec(v_ref_1675_);
return v_res_1684_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2___redArg(lean_object* v_ref_1685_, lean_object* v_msg_1686_, lean_object* v_declHint_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_){
_start:
{
lean_object* v___x_1695_; lean_object* v_a_1696_; lean_object* v___x_1697_; 
v___x_1695_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4(v_msg_1686_, v_declHint_1687_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_);
v_a_1696_ = lean_ctor_get(v___x_1695_, 0);
lean_inc(v_a_1696_);
lean_dec_ref(v___x_1695_);
v___x_1697_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__5___redArg(v_ref_1685_, v_a_1696_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_);
return v___x_1697_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2___redArg___boxed(lean_object* v_ref_1698_, lean_object* v_msg_1699_, lean_object* v_declHint_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_){
_start:
{
lean_object* v_res_1708_; 
v_res_1708_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2___redArg(v_ref_1698_, v_msg_1699_, v_declHint_1700_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_, v___y_1705_, v___y_1706_);
lean_dec(v___y_1706_);
lean_dec_ref(v___y_1705_);
lean_dec(v___y_1704_);
lean_dec_ref(v___y_1703_);
lean_dec(v___y_1702_);
lean_dec_ref(v___y_1701_);
lean_dec(v_ref_1698_);
return v_res_1708_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_1710_; lean_object* v___x_1711_; 
v___x_1710_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___closed__0));
v___x_1711_ = l_Lean_stringToMessageData(v___x_1710_);
return v___x_1711_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_1713_; lean_object* v___x_1714_; 
v___x_1713_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___closed__2));
v___x_1714_ = l_Lean_stringToMessageData(v___x_1713_);
return v___x_1714_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg(lean_object* v_ref_1715_, lean_object* v_constName_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_){
_start:
{
lean_object* v___x_1724_; uint8_t v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; 
v___x_1724_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___closed__1);
v___x_1725_ = 0;
lean_inc(v_constName_1716_);
v___x_1726_ = l_Lean_MessageData_ofConstName(v_constName_1716_, v___x_1725_);
v___x_1727_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1727_, 0, v___x_1724_);
lean_ctor_set(v___x_1727_, 1, v___x_1726_);
v___x_1728_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___closed__3);
v___x_1729_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1729_, 0, v___x_1727_);
lean_ctor_set(v___x_1729_, 1, v___x_1728_);
v___x_1730_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2___redArg(v_ref_1715_, v___x_1729_, v_constName_1716_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_);
return v___x_1730_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___boxed(lean_object* v_ref_1731_, lean_object* v_constName_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_){
_start:
{
lean_object* v_res_1740_; 
v_res_1740_ = l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg(v_ref_1731_, v_constName_1732_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_);
lean_dec(v___y_1738_);
lean_dec_ref(v___y_1737_);
lean_dec(v___y_1736_);
lean_dec_ref(v___y_1735_);
lean_dec(v___y_1734_);
lean_dec_ref(v___y_1733_);
lean_dec(v_ref_1731_);
return v_res_1740_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___boxed(lean_object* v_s_1778_, lean_object* v_a_1779_, lean_object* v_a_1780_, lean_object* v_a_1781_, lean_object* v_a_1782_, lean_object* v_a_1783_, lean_object* v_a_1784_, lean_object* v_a_1785_){
_start:
{
lean_object* v_res_1786_; 
v_res_1786_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go(v_s_1778_, v_a_1779_, v_a_1780_, v_a_1781_, v_a_1782_, v_a_1783_, v_a_1784_);
lean_dec(v_a_1784_);
lean_dec_ref(v_a_1783_);
lean_dec(v_a_1782_);
lean_dec_ref(v_a_1781_);
lean_dec(v_a_1780_);
lean_dec_ref(v_a_1779_);
return v_res_1786_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processBinOp(lean_object* v_ref_1796_, uint8_t v_kind_1797_, lean_object* v_f_1798_, lean_object* v_lhs_1799_, lean_object* v_rhs_1800_, lean_object* v_a_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_, lean_object* v_a_1805_, lean_object* v_a_1806_){
_start:
{
lean_object* v___x_1808_; uint8_t v___x_1809_; lean_object* v___x_1810_; 
v___x_1808_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp___closed__0));
v___x_1809_ = 0;
lean_inc(v_f_1798_);
v___x_1810_ = l_Lean_Elab_Term_resolveId_x3f(v_f_1798_, v___x_1808_, v___x_1809_, v_a_1801_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_, v_a_1806_);
if (lean_obj_tag(v___x_1810_) == 0)
{
lean_object* v_a_1811_; lean_object* v___x_1813_; uint8_t v_isShared_1814_; uint8_t v_isSharedCheck_1845_; 
v_a_1811_ = lean_ctor_get(v___x_1810_, 0);
v_isSharedCheck_1845_ = !lean_is_exclusive(v___x_1810_);
if (v_isSharedCheck_1845_ == 0)
{
v___x_1813_ = v___x_1810_;
v_isShared_1814_ = v_isSharedCheck_1845_;
goto v_resetjp_1812_;
}
else
{
lean_inc(v_a_1811_);
lean_dec(v___x_1810_);
v___x_1813_ = lean_box(0);
v_isShared_1814_ = v_isSharedCheck_1845_;
goto v_resetjp_1812_;
}
v_resetjp_1812_:
{
if (lean_obj_tag(v_a_1811_) == 1)
{
lean_object* v_val_1815_; lean_object* v___y_1817_; lean_object* v_rhs_1818_; lean_object* v_lhs_1824_; lean_object* v___y_1825_; lean_object* v___y_1826_; lean_object* v___y_1827_; lean_object* v___y_1828_; lean_object* v___y_1829_; lean_object* v___y_1830_; uint8_t v___x_1837_; uint8_t v___x_1838_; 
lean_dec(v_f_1798_);
v_val_1815_ = lean_ctor_get(v_a_1811_, 0);
lean_inc(v_val_1815_);
lean_dec_ref_known(v_a_1811_, 1);
v___x_1837_ = 2;
v___x_1838_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_instBEqBinOpKind_beq(v_kind_1797_, v___x_1837_);
if (v___x_1838_ == 0)
{
lean_object* v___x_1839_; 
v___x_1839_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go(v_lhs_1799_, v_a_1801_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_, v_a_1806_);
if (lean_obj_tag(v___x_1839_) == 0)
{
lean_object* v_a_1840_; 
v_a_1840_ = lean_ctor_get(v___x_1839_, 0);
lean_inc(v_a_1840_);
lean_dec_ref_known(v___x_1839_, 1);
v_lhs_1824_ = v_a_1840_;
v___y_1825_ = v_a_1801_;
v___y_1826_ = v_a_1802_;
v___y_1827_ = v_a_1803_;
v___y_1828_ = v_a_1804_;
v___y_1829_ = v_a_1805_;
v___y_1830_ = v_a_1806_;
goto v___jp_1823_;
}
else
{
lean_dec(v_val_1815_);
lean_del_object(v___x_1813_);
lean_dec(v_rhs_1800_);
lean_dec(v_ref_1796_);
return v___x_1839_;
}
}
else
{
lean_object* v___x_1841_; 
v___x_1841_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf(v_lhs_1799_, v_a_1801_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_, v_a_1806_);
if (lean_obj_tag(v___x_1841_) == 0)
{
lean_object* v_a_1842_; 
v_a_1842_ = lean_ctor_get(v___x_1841_, 0);
lean_inc(v_a_1842_);
lean_dec_ref_known(v___x_1841_, 1);
v_lhs_1824_ = v_a_1842_;
v___y_1825_ = v_a_1801_;
v___y_1826_ = v_a_1802_;
v___y_1827_ = v_a_1803_;
v___y_1828_ = v_a_1804_;
v___y_1829_ = v_a_1805_;
v___y_1830_ = v_a_1806_;
goto v___jp_1823_;
}
else
{
lean_dec(v_val_1815_);
lean_del_object(v___x_1813_);
lean_dec(v_rhs_1800_);
lean_dec(v_ref_1796_);
return v___x_1841_;
}
}
v___jp_1816_:
{
lean_object* v___x_1819_; lean_object* v___x_1821_; 
v___x_1819_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1819_, 0, v_ref_1796_);
lean_ctor_set(v___x_1819_, 1, v_val_1815_);
lean_ctor_set(v___x_1819_, 2, v___y_1817_);
lean_ctor_set(v___x_1819_, 3, v_rhs_1818_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*4, v_kind_1797_);
if (v_isShared_1814_ == 0)
{
lean_ctor_set(v___x_1813_, 0, v___x_1819_);
v___x_1821_ = v___x_1813_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v___x_1819_);
v___x_1821_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
return v___x_1821_;
}
}
v___jp_1823_:
{
uint8_t v___x_1831_; uint8_t v___x_1832_; 
v___x_1831_ = 3;
v___x_1832_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_instBEqBinOpKind_beq(v_kind_1797_, v___x_1831_);
if (v___x_1832_ == 0)
{
lean_object* v___x_1833_; 
v___x_1833_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go(v_rhs_1800_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_);
if (lean_obj_tag(v___x_1833_) == 0)
{
lean_object* v_a_1834_; 
v_a_1834_ = lean_ctor_get(v___x_1833_, 0);
lean_inc(v_a_1834_);
lean_dec_ref_known(v___x_1833_, 1);
v___y_1817_ = v_lhs_1824_;
v_rhs_1818_ = v_a_1834_;
goto v___jp_1816_;
}
else
{
lean_dec_ref(v_lhs_1824_);
lean_dec(v_val_1815_);
lean_del_object(v___x_1813_);
lean_dec(v_ref_1796_);
return v___x_1833_;
}
}
else
{
lean_object* v___x_1835_; 
v___x_1835_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf(v_rhs_1800_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_);
if (lean_obj_tag(v___x_1835_) == 0)
{
lean_object* v_a_1836_; 
v_a_1836_ = lean_ctor_get(v___x_1835_, 0);
lean_inc(v_a_1836_);
lean_dec_ref_known(v___x_1835_, 1);
v___y_1817_ = v_lhs_1824_;
v_rhs_1818_ = v_a_1836_;
goto v___jp_1816_;
}
else
{
lean_dec_ref(v_lhs_1824_);
lean_dec(v_val_1815_);
lean_del_object(v___x_1813_);
lean_dec(v_ref_1796_);
return v___x_1835_;
}
}
}
}
else
{
lean_object* v___x_1843_; lean_object* v___x_1844_; 
lean_del_object(v___x_1813_);
lean_dec(v_a_1811_);
lean_dec(v_rhs_1800_);
lean_dec(v_lhs_1799_);
lean_dec(v_ref_1796_);
v___x_1843_ = l_Lean_Syntax_getId(v_f_1798_);
v___x_1844_ = l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg(v_f_1798_, v___x_1843_, v_a_1801_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_, v_a_1806_);
lean_dec(v_f_1798_);
return v___x_1844_;
}
}
}
else
{
lean_object* v_a_1846_; lean_object* v___x_1848_; uint8_t v_isShared_1849_; uint8_t v_isSharedCheck_1853_; 
lean_dec(v_rhs_1800_);
lean_dec(v_lhs_1799_);
lean_dec(v_f_1798_);
lean_dec(v_ref_1796_);
v_a_1846_ = lean_ctor_get(v___x_1810_, 0);
v_isSharedCheck_1853_ = !lean_is_exclusive(v___x_1810_);
if (v_isSharedCheck_1853_ == 0)
{
v___x_1848_ = v___x_1810_;
v_isShared_1849_ = v_isSharedCheck_1853_;
goto v_resetjp_1847_;
}
else
{
lean_inc(v_a_1846_);
lean_dec(v___x_1810_);
v___x_1848_ = lean_box(0);
v_isShared_1849_ = v_isSharedCheck_1853_;
goto v_resetjp_1847_;
}
v_resetjp_1847_:
{
lean_object* v___x_1851_; 
if (v_isShared_1849_ == 0)
{
v___x_1851_ = v___x_1848_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v_a_1846_);
v___x_1851_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
return v___x_1851_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go(lean_object* v_s_1854_, lean_object* v_a_1855_, lean_object* v_a_1856_, lean_object* v_a_1857_, lean_object* v_a_1858_, lean_object* v_a_1859_, lean_object* v_a_1860_){
_start:
{
lean_object* v___x_1862_; uint8_t v___x_1863_; 
v___x_1862_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__1));
lean_inc(v_s_1854_);
v___x_1863_ = l_Lean_Syntax_isOfKind(v_s_1854_, v___x_1862_);
if (v___x_1863_ == 0)
{
lean_object* v___x_1864_; uint8_t v___x_1865_; 
v___x_1864_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__3));
lean_inc(v_s_1854_);
v___x_1865_ = l_Lean_Syntax_isOfKind(v_s_1854_, v___x_1864_);
if (v___x_1865_ == 0)
{
lean_object* v___x_1866_; uint8_t v___x_1867_; 
v___x_1866_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__5));
lean_inc(v_s_1854_);
v___x_1867_ = l_Lean_Syntax_isOfKind(v_s_1854_, v___x_1866_);
if (v___x_1867_ == 0)
{
lean_object* v___x_1868_; uint8_t v___x_1869_; 
v___x_1868_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__7));
lean_inc(v_s_1854_);
v___x_1869_ = l_Lean_Syntax_isOfKind(v_s_1854_, v___x_1868_);
if (v___x_1869_ == 0)
{
lean_object* v___x_1870_; uint8_t v___x_1871_; 
v___x_1870_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__9));
lean_inc(v_s_1854_);
v___x_1871_ = l_Lean_Syntax_isOfKind(v_s_1854_, v___x_1870_);
if (v___x_1871_ == 0)
{
lean_object* v___x_1872_; uint8_t v___x_1873_; 
v___x_1872_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__11));
lean_inc(v_s_1854_);
v___x_1873_ = l_Lean_Syntax_isOfKind(v_s_1854_, v___x_1872_);
if (v___x_1873_ == 0)
{
lean_object* v_toCold_1874_; lean_object* v_currRecDepth_1875_; lean_object* v_ref_1876_; uint16_t v_optionFlags_1877_; uint8_t v_suppressElabErrors_1878_; uint8_t v_checkDeprecated_1879_; uint8_t v_isRecordingDeps_1880_; lean_object* v_ref_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; 
v_toCold_1874_ = lean_ctor_get(v_a_1859_, 0);
v_currRecDepth_1875_ = lean_ctor_get(v_a_1859_, 1);
v_ref_1876_ = lean_ctor_get(v_a_1859_, 2);
v_optionFlags_1877_ = lean_ctor_get_uint16(v_a_1859_, sizeof(void*)*3);
v_suppressElabErrors_1878_ = lean_ctor_get_uint8(v_a_1859_, sizeof(void*)*3 + 2);
v_checkDeprecated_1879_ = lean_ctor_get_uint8(v_a_1859_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1880_ = lean_ctor_get_uint8(v_a_1859_, sizeof(void*)*3 + 4);
v_ref_1881_ = l_Lean_replaceRef(v_s_1854_, v_ref_1876_);
lean_inc(v_currRecDepth_1875_);
lean_inc_ref(v_toCold_1874_);
v___x_1882_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1882_, 0, v_toCold_1874_);
lean_ctor_set(v___x_1882_, 1, v_currRecDepth_1875_);
lean_ctor_set(v___x_1882_, 2, v_ref_1881_);
lean_ctor_set_uint16(v___x_1882_, sizeof(void*)*3, v_optionFlags_1877_);
lean_ctor_set_uint8(v___x_1882_, sizeof(void*)*3 + 2, v_suppressElabErrors_1878_);
lean_ctor_set_uint8(v___x_1882_, sizeof(void*)*3 + 3, v_checkDeprecated_1879_);
lean_ctor_set_uint8(v___x_1882_, sizeof(void*)*3 + 4, v_isRecordingDeps_1880_);
lean_inc(v_s_1854_);
v___x_1883_ = l_Lean_Elab_Term_expandMacroReportingDeprecated_x3f(v_s_1854_, v_a_1855_, v_a_1856_, v_a_1857_, v_a_1858_, v___x_1882_, v_a_1860_);
if (lean_obj_tag(v___x_1883_) == 0)
{
lean_object* v_a_1884_; 
v_a_1884_ = lean_ctor_get(v___x_1883_, 0);
lean_inc(v_a_1884_);
lean_dec_ref_known(v___x_1883_, 1);
if (lean_obj_tag(v_a_1884_) == 0)
{
lean_object* v___x_1885_; 
v___x_1885_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf(v_s_1854_, v_a_1855_, v_a_1856_, v_a_1857_, v_a_1858_, v___x_1882_, v_a_1860_);
lean_dec_ref_known(v___x_1882_, 3);
return v___x_1885_;
}
else
{
lean_object* v_val_1886_; lean_object* v_fst_1887_; lean_object* v_snd_1888_; lean_object* v___x_1889_; lean_object* v___f_1890_; lean_object* v___x_1891_; 
v_val_1886_ = lean_ctor_get(v_a_1884_, 0);
lean_inc(v_val_1886_);
lean_dec_ref_known(v_a_1884_, 1);
v_fst_1887_ = lean_ctor_get(v_val_1886_, 0);
lean_inc(v_fst_1887_);
v_snd_1888_ = lean_ctor_get(v_val_1886_, 1);
lean_inc_n(v_snd_1888_, 3);
lean_dec(v_val_1886_);
v___x_1889_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___boxed), 8, 1);
lean_closure_set(v___x_1889_, 0, v_snd_1888_);
lean_inc(v_s_1854_);
v___f_1890_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___lam__0___boxed), 11, 4);
lean_closure_set(v___f_1890_, 0, v_s_1854_);
lean_closure_set(v___f_1890_, 1, v___x_1889_);
lean_closure_set(v___f_1890_, 2, v_fst_1887_);
lean_closure_set(v___f_1890_, 3, v_snd_1888_);
v___x_1891_ = l_Lean_Elab_Term_withPushMacroExpansionStack___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go_spec__0___redArg(v_s_1854_, v_snd_1888_, v___f_1890_, v_a_1855_, v_a_1856_, v_a_1857_, v_a_1858_, v___x_1882_, v_a_1860_);
lean_dec_ref_known(v___x_1882_, 3);
return v___x_1891_;
}
}
else
{
lean_object* v_a_1892_; lean_object* v___x_1894_; uint8_t v_isShared_1895_; uint8_t v_isSharedCheck_1899_; 
lean_dec_ref_known(v___x_1882_, 3);
lean_dec(v_s_1854_);
v_a_1892_ = lean_ctor_get(v___x_1883_, 0);
v_isSharedCheck_1899_ = !lean_is_exclusive(v___x_1883_);
if (v_isSharedCheck_1899_ == 0)
{
v___x_1894_ = v___x_1883_;
v_isShared_1895_ = v_isSharedCheck_1899_;
goto v_resetjp_1893_;
}
else
{
lean_inc(v_a_1892_);
lean_dec(v___x_1883_);
v___x_1894_ = lean_box(0);
v_isShared_1895_ = v_isSharedCheck_1899_;
goto v_resetjp_1893_;
}
v_resetjp_1893_:
{
lean_object* v___x_1897_; 
if (v_isShared_1895_ == 0)
{
v___x_1897_ = v___x_1894_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v_a_1892_);
v___x_1897_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
return v___x_1897_;
}
}
}
}
else
{
lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; uint8_t v___x_1903_; 
v___x_1900_ = lean_unsigned_to_nat(0u);
v___x_1901_ = l_Lean_Syntax_getArg(v_s_1854_, v___x_1900_);
v___x_1902_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__13));
lean_inc(v___x_1901_);
v___x_1903_ = l_Lean_Syntax_isOfKind(v___x_1901_, v___x_1902_);
if (v___x_1903_ == 0)
{
lean_object* v_toCold_1904_; lean_object* v_currRecDepth_1905_; lean_object* v_ref_1906_; uint16_t v_optionFlags_1907_; uint8_t v_suppressElabErrors_1908_; uint8_t v_checkDeprecated_1909_; uint8_t v_isRecordingDeps_1910_; lean_object* v_ref_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; 
lean_dec(v___x_1901_);
v_toCold_1904_ = lean_ctor_get(v_a_1859_, 0);
v_currRecDepth_1905_ = lean_ctor_get(v_a_1859_, 1);
v_ref_1906_ = lean_ctor_get(v_a_1859_, 2);
v_optionFlags_1907_ = lean_ctor_get_uint16(v_a_1859_, sizeof(void*)*3);
v_suppressElabErrors_1908_ = lean_ctor_get_uint8(v_a_1859_, sizeof(void*)*3 + 2);
v_checkDeprecated_1909_ = lean_ctor_get_uint8(v_a_1859_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1910_ = lean_ctor_get_uint8(v_a_1859_, sizeof(void*)*3 + 4);
v_ref_1911_ = l_Lean_replaceRef(v_s_1854_, v_ref_1906_);
lean_inc(v_currRecDepth_1905_);
lean_inc_ref(v_toCold_1904_);
v___x_1912_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1912_, 0, v_toCold_1904_);
lean_ctor_set(v___x_1912_, 1, v_currRecDepth_1905_);
lean_ctor_set(v___x_1912_, 2, v_ref_1911_);
lean_ctor_set_uint16(v___x_1912_, sizeof(void*)*3, v_optionFlags_1907_);
lean_ctor_set_uint8(v___x_1912_, sizeof(void*)*3 + 2, v_suppressElabErrors_1908_);
lean_ctor_set_uint8(v___x_1912_, sizeof(void*)*3 + 3, v_checkDeprecated_1909_);
lean_ctor_set_uint8(v___x_1912_, sizeof(void*)*3 + 4, v_isRecordingDeps_1910_);
lean_inc(v_s_1854_);
v___x_1913_ = l_Lean_Elab_Term_expandMacroReportingDeprecated_x3f(v_s_1854_, v_a_1855_, v_a_1856_, v_a_1857_, v_a_1858_, v___x_1912_, v_a_1860_);
if (lean_obj_tag(v___x_1913_) == 0)
{
lean_object* v_a_1914_; 
v_a_1914_ = lean_ctor_get(v___x_1913_, 0);
lean_inc(v_a_1914_);
lean_dec_ref_known(v___x_1913_, 1);
if (lean_obj_tag(v_a_1914_) == 0)
{
lean_object* v___x_1915_; 
v___x_1915_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf(v_s_1854_, v_a_1855_, v_a_1856_, v_a_1857_, v_a_1858_, v___x_1912_, v_a_1860_);
lean_dec_ref_known(v___x_1912_, 3);
return v___x_1915_;
}
else
{
lean_object* v_val_1916_; lean_object* v_fst_1917_; lean_object* v_snd_1918_; lean_object* v___x_1919_; lean_object* v___f_1920_; lean_object* v___x_1921_; 
v_val_1916_ = lean_ctor_get(v_a_1914_, 0);
lean_inc(v_val_1916_);
lean_dec_ref_known(v_a_1914_, 1);
v_fst_1917_ = lean_ctor_get(v_val_1916_, 0);
lean_inc(v_fst_1917_);
v_snd_1918_ = lean_ctor_get(v_val_1916_, 1);
lean_inc_n(v_snd_1918_, 3);
lean_dec(v_val_1916_);
v___x_1919_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___boxed), 8, 1);
lean_closure_set(v___x_1919_, 0, v_snd_1918_);
lean_inc(v_s_1854_);
v___f_1920_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___lam__0___boxed), 11, 4);
lean_closure_set(v___f_1920_, 0, v_s_1854_);
lean_closure_set(v___f_1920_, 1, v___x_1919_);
lean_closure_set(v___f_1920_, 2, v_fst_1917_);
lean_closure_set(v___f_1920_, 3, v_snd_1918_);
v___x_1921_ = l_Lean_Elab_Term_withPushMacroExpansionStack___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go_spec__0___redArg(v_s_1854_, v_snd_1918_, v___f_1920_, v_a_1855_, v_a_1856_, v_a_1857_, v_a_1858_, v___x_1912_, v_a_1860_);
lean_dec_ref_known(v___x_1912_, 3);
return v___x_1921_;
}
}
else
{
lean_object* v_a_1922_; lean_object* v___x_1924_; uint8_t v_isShared_1925_; uint8_t v_isSharedCheck_1929_; 
lean_dec_ref_known(v___x_1912_, 3);
lean_dec(v_s_1854_);
v_a_1922_ = lean_ctor_get(v___x_1913_, 0);
v_isSharedCheck_1929_ = !lean_is_exclusive(v___x_1913_);
if (v_isSharedCheck_1929_ == 0)
{
v___x_1924_ = v___x_1913_;
v_isShared_1925_ = v_isSharedCheck_1929_;
goto v_resetjp_1923_;
}
else
{
lean_inc(v_a_1922_);
lean_dec(v___x_1913_);
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
else
{
lean_object* v___x_1930_; lean_object* v_h_1931_; lean_object* v___x_1932_; uint8_t v___x_1933_; 
v___x_1930_ = lean_unsigned_to_nat(1u);
v_h_1931_ = l_Lean_Syntax_getArg(v___x_1901_, v___x_1930_);
lean_dec(v___x_1901_);
v___x_1932_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__15));
lean_inc(v_h_1931_);
v___x_1933_ = l_Lean_Syntax_isOfKind(v_h_1931_, v___x_1932_);
if (v___x_1933_ == 0)
{
lean_object* v_toCold_1934_; lean_object* v_currRecDepth_1935_; lean_object* v_ref_1936_; uint16_t v_optionFlags_1937_; uint8_t v_suppressElabErrors_1938_; uint8_t v_checkDeprecated_1939_; uint8_t v_isRecordingDeps_1940_; lean_object* v_ref_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; 
lean_dec(v_h_1931_);
v_toCold_1934_ = lean_ctor_get(v_a_1859_, 0);
v_currRecDepth_1935_ = lean_ctor_get(v_a_1859_, 1);
v_ref_1936_ = lean_ctor_get(v_a_1859_, 2);
v_optionFlags_1937_ = lean_ctor_get_uint16(v_a_1859_, sizeof(void*)*3);
v_suppressElabErrors_1938_ = lean_ctor_get_uint8(v_a_1859_, sizeof(void*)*3 + 2);
v_checkDeprecated_1939_ = lean_ctor_get_uint8(v_a_1859_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1940_ = lean_ctor_get_uint8(v_a_1859_, sizeof(void*)*3 + 4);
v_ref_1941_ = l_Lean_replaceRef(v_s_1854_, v_ref_1936_);
lean_inc(v_currRecDepth_1935_);
lean_inc_ref(v_toCold_1934_);
v___x_1942_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1942_, 0, v_toCold_1934_);
lean_ctor_set(v___x_1942_, 1, v_currRecDepth_1935_);
lean_ctor_set(v___x_1942_, 2, v_ref_1941_);
lean_ctor_set_uint16(v___x_1942_, sizeof(void*)*3, v_optionFlags_1937_);
lean_ctor_set_uint8(v___x_1942_, sizeof(void*)*3 + 2, v_suppressElabErrors_1938_);
lean_ctor_set_uint8(v___x_1942_, sizeof(void*)*3 + 3, v_checkDeprecated_1939_);
lean_ctor_set_uint8(v___x_1942_, sizeof(void*)*3 + 4, v_isRecordingDeps_1940_);
lean_inc(v_s_1854_);
v___x_1943_ = l_Lean_Elab_Term_expandMacroReportingDeprecated_x3f(v_s_1854_, v_a_1855_, v_a_1856_, v_a_1857_, v_a_1858_, v___x_1942_, v_a_1860_);
if (lean_obj_tag(v___x_1943_) == 0)
{
lean_object* v_a_1944_; 
v_a_1944_ = lean_ctor_get(v___x_1943_, 0);
lean_inc(v_a_1944_);
lean_dec_ref_known(v___x_1943_, 1);
if (lean_obj_tag(v_a_1944_) == 0)
{
lean_object* v___x_1945_; 
v___x_1945_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf(v_s_1854_, v_a_1855_, v_a_1856_, v_a_1857_, v_a_1858_, v___x_1942_, v_a_1860_);
lean_dec_ref_known(v___x_1942_, 3);
return v___x_1945_;
}
else
{
lean_object* v_val_1946_; lean_object* v_fst_1947_; lean_object* v_snd_1948_; lean_object* v___x_1949_; lean_object* v___f_1950_; lean_object* v___x_1951_; 
v_val_1946_ = lean_ctor_get(v_a_1944_, 0);
lean_inc(v_val_1946_);
lean_dec_ref_known(v_a_1944_, 1);
v_fst_1947_ = lean_ctor_get(v_val_1946_, 0);
lean_inc(v_fst_1947_);
v_snd_1948_ = lean_ctor_get(v_val_1946_, 1);
lean_inc_n(v_snd_1948_, 3);
lean_dec(v_val_1946_);
v___x_1949_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___boxed), 8, 1);
lean_closure_set(v___x_1949_, 0, v_snd_1948_);
lean_inc(v_s_1854_);
v___f_1950_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___lam__0___boxed), 11, 4);
lean_closure_set(v___f_1950_, 0, v_s_1854_);
lean_closure_set(v___f_1950_, 1, v___x_1949_);
lean_closure_set(v___f_1950_, 2, v_fst_1947_);
lean_closure_set(v___f_1950_, 3, v_snd_1948_);
v___x_1951_ = l_Lean_Elab_Term_withPushMacroExpansionStack___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go_spec__0___redArg(v_s_1854_, v_snd_1948_, v___f_1950_, v_a_1855_, v_a_1856_, v_a_1857_, v_a_1858_, v___x_1942_, v_a_1860_);
lean_dec_ref_known(v___x_1942_, 3);
return v___x_1951_;
}
}
else
{
lean_object* v_a_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_1959_; 
lean_dec_ref_known(v___x_1942_, 3);
lean_dec(v_s_1854_);
v_a_1952_ = lean_ctor_get(v___x_1943_, 0);
v_isSharedCheck_1959_ = !lean_is_exclusive(v___x_1943_);
if (v_isSharedCheck_1959_ == 0)
{
v___x_1954_ = v___x_1943_;
v_isShared_1955_ = v_isSharedCheck_1959_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_a_1952_);
lean_dec(v___x_1943_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_1959_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
lean_object* v___x_1957_; 
if (v_isShared_1955_ == 0)
{
v___x_1957_ = v___x_1954_;
goto v_reusejp_1956_;
}
else
{
lean_object* v_reuseFailAlloc_1958_; 
v_reuseFailAlloc_1958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1958_, 0, v_a_1952_);
v___x_1957_ = v_reuseFailAlloc_1958_;
goto v_reusejp_1956_;
}
v_reusejp_1956_:
{
return v___x_1957_;
}
}
}
}
else
{
lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; uint8_t v___x_1963_; 
v___x_1960_ = l_Lean_Syntax_getArg(v_s_1854_, v___x_1930_);
v___x_1961_ = l_Lean_TSyntax_getHygieneInfo(v_h_1931_);
lean_dec(v_h_1931_);
v___x_1962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1962_, 0, v___x_1961_);
lean_inc(v___x_1960_);
v___x_1963_ = l_Lean_Elab_Term_hasCDot(v___x_1960_, v___x_1962_);
lean_dec_ref_known(v___x_1962_, 1);
if (v___x_1963_ == 0)
{
lean_dec(v_s_1854_);
v_s_1854_ = v___x_1960_;
goto _start;
}
else
{
lean_object* v___x_1965_; 
lean_dec(v___x_1960_);
v___x_1965_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf(v_s_1854_, v_a_1855_, v_a_1856_, v_a_1857_, v_a_1858_, v_a_1859_, v_a_1860_);
return v___x_1965_;
}
}
}
}
}
else
{
lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; uint8_t v___x_1972_; lean_object* v___x_1973_; 
v___x_1966_ = lean_unsigned_to_nat(1u);
v___x_1967_ = l_Lean_Syntax_getArg(v_s_1854_, v___x_1966_);
v___x_1968_ = lean_unsigned_to_nat(2u);
v___x_1969_ = l_Lean_Syntax_getArg(v_s_1854_, v___x_1968_);
v___x_1970_ = lean_unsigned_to_nat(3u);
v___x_1971_ = l_Lean_Syntax_getArg(v_s_1854_, v___x_1970_);
v___x_1972_ = 3;
v___x_1973_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processBinOp(v_s_1854_, v___x_1972_, v___x_1967_, v___x_1969_, v___x_1971_, v_a_1855_, v_a_1856_, v_a_1857_, v_a_1858_, v_a_1859_, v_a_1860_);
return v___x_1973_;
}
}
else
{
lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; uint8_t v___x_1980_; lean_object* v___x_1981_; 
v___x_1974_ = lean_unsigned_to_nat(1u);
v___x_1975_ = l_Lean_Syntax_getArg(v_s_1854_, v___x_1974_);
v___x_1976_ = lean_unsigned_to_nat(2u);
v___x_1977_ = l_Lean_Syntax_getArg(v_s_1854_, v___x_1976_);
v___x_1978_ = lean_unsigned_to_nat(3u);
v___x_1979_ = l_Lean_Syntax_getArg(v_s_1854_, v___x_1978_);
v___x_1980_ = 2;
v___x_1981_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processBinOp(v_s_1854_, v___x_1980_, v___x_1975_, v___x_1977_, v___x_1979_, v_a_1855_, v_a_1856_, v_a_1857_, v_a_1858_, v_a_1859_, v_a_1860_);
return v___x_1981_;
}
}
else
{
lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; 
v___x_1982_ = lean_unsigned_to_nat(1u);
v___x_1983_ = l_Lean_Syntax_getArg(v_s_1854_, v___x_1982_);
v___x_1984_ = lean_unsigned_to_nat(2u);
v___x_1985_ = l_Lean_Syntax_getArg(v_s_1854_, v___x_1984_);
v___x_1986_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp(v_s_1854_, v___x_1983_, v___x_1985_, v_a_1855_, v_a_1856_, v_a_1857_, v_a_1858_, v_a_1859_, v_a_1860_);
return v___x_1986_;
}
}
else
{
lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; uint8_t v___x_1993_; lean_object* v___x_1994_; 
v___x_1987_ = lean_unsigned_to_nat(1u);
v___x_1988_ = l_Lean_Syntax_getArg(v_s_1854_, v___x_1987_);
v___x_1989_ = lean_unsigned_to_nat(2u);
v___x_1990_ = l_Lean_Syntax_getArg(v_s_1854_, v___x_1989_);
v___x_1991_ = lean_unsigned_to_nat(3u);
v___x_1992_ = l_Lean_Syntax_getArg(v_s_1854_, v___x_1991_);
v___x_1993_ = 1;
v___x_1994_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processBinOp(v_s_1854_, v___x_1993_, v___x_1988_, v___x_1990_, v___x_1992_, v_a_1855_, v_a_1856_, v_a_1857_, v_a_1858_, v_a_1859_, v_a_1860_);
return v___x_1994_;
}
}
else
{
lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; uint8_t v___x_2001_; lean_object* v___x_2002_; 
v___x_1995_ = lean_unsigned_to_nat(1u);
v___x_1996_ = l_Lean_Syntax_getArg(v_s_1854_, v___x_1995_);
v___x_1997_ = lean_unsigned_to_nat(2u);
v___x_1998_ = l_Lean_Syntax_getArg(v_s_1854_, v___x_1997_);
v___x_1999_ = lean_unsigned_to_nat(3u);
v___x_2000_ = l_Lean_Syntax_getArg(v_s_1854_, v___x_1999_);
v___x_2001_ = 0;
v___x_2002_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processBinOp(v_s_1854_, v___x_2001_, v___x_1996_, v___x_1998_, v___x_2000_, v_a_1855_, v_a_1856_, v_a_1857_, v_a_1858_, v_a_1859_, v_a_1860_);
return v___x_2002_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp(lean_object* v_ref_2003_, lean_object* v_f_2004_, lean_object* v_arg_2005_, lean_object* v_a_2006_, lean_object* v_a_2007_, lean_object* v_a_2008_, lean_object* v_a_2009_, lean_object* v_a_2010_, lean_object* v_a_2011_){
_start:
{
lean_object* v___x_2013_; uint8_t v___x_2014_; lean_object* v___x_2015_; 
v___x_2013_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp___closed__0));
v___x_2014_ = 0;
lean_inc(v_f_2004_);
v___x_2015_ = l_Lean_Elab_Term_resolveId_x3f(v_f_2004_, v___x_2013_, v___x_2014_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_);
if (lean_obj_tag(v___x_2015_) == 0)
{
lean_object* v_a_2016_; 
v_a_2016_ = lean_ctor_get(v___x_2015_, 0);
lean_inc(v_a_2016_);
lean_dec_ref_known(v___x_2015_, 1);
if (lean_obj_tag(v_a_2016_) == 1)
{
lean_object* v_val_2017_; lean_object* v___x_2018_; 
lean_dec(v_f_2004_);
v_val_2017_ = lean_ctor_get(v_a_2016_, 0);
lean_inc(v_val_2017_);
lean_dec_ref_known(v_a_2016_, 1);
v___x_2018_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go(v_arg_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_);
if (lean_obj_tag(v___x_2018_) == 0)
{
lean_object* v_a_2019_; lean_object* v___x_2021_; uint8_t v_isShared_2022_; uint8_t v_isSharedCheck_2027_; 
v_a_2019_ = lean_ctor_get(v___x_2018_, 0);
v_isSharedCheck_2027_ = !lean_is_exclusive(v___x_2018_);
if (v_isSharedCheck_2027_ == 0)
{
v___x_2021_ = v___x_2018_;
v_isShared_2022_ = v_isSharedCheck_2027_;
goto v_resetjp_2020_;
}
else
{
lean_inc(v_a_2019_);
lean_dec(v___x_2018_);
v___x_2021_ = lean_box(0);
v_isShared_2022_ = v_isSharedCheck_2027_;
goto v_resetjp_2020_;
}
v_resetjp_2020_:
{
lean_object* v___x_2023_; lean_object* v___x_2025_; 
v___x_2023_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_2023_, 0, v_ref_2003_);
lean_ctor_set(v___x_2023_, 1, v_val_2017_);
lean_ctor_set(v___x_2023_, 2, v_a_2019_);
if (v_isShared_2022_ == 0)
{
lean_ctor_set(v___x_2021_, 0, v___x_2023_);
v___x_2025_ = v___x_2021_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v___x_2023_);
v___x_2025_ = v_reuseFailAlloc_2026_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
return v___x_2025_;
}
}
}
else
{
lean_dec(v_val_2017_);
lean_dec(v_ref_2003_);
return v___x_2018_;
}
}
else
{
lean_object* v___x_2028_; lean_object* v___x_2029_; 
lean_dec(v_a_2016_);
lean_dec(v_arg_2005_);
lean_dec(v_ref_2003_);
v___x_2028_ = l_Lean_Syntax_getId(v_f_2004_);
v___x_2029_ = l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg(v_f_2004_, v___x_2028_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_);
lean_dec(v_f_2004_);
return v___x_2029_;
}
}
else
{
lean_object* v_a_2030_; lean_object* v___x_2032_; uint8_t v_isShared_2033_; uint8_t v_isSharedCheck_2037_; 
lean_dec(v_arg_2005_);
lean_dec(v_f_2004_);
lean_dec(v_ref_2003_);
v_a_2030_ = lean_ctor_get(v___x_2015_, 0);
v_isSharedCheck_2037_ = !lean_is_exclusive(v___x_2015_);
if (v_isSharedCheck_2037_ == 0)
{
v___x_2032_ = v___x_2015_;
v_isShared_2033_ = v_isSharedCheck_2037_;
goto v_resetjp_2031_;
}
else
{
lean_inc(v_a_2030_);
lean_dec(v___x_2015_);
v___x_2032_ = lean_box(0);
v_isShared_2033_ = v_isSharedCheck_2037_;
goto v_resetjp_2031_;
}
v_resetjp_2031_:
{
lean_object* v___x_2035_; 
if (v_isShared_2033_ == 0)
{
v___x_2035_ = v___x_2032_;
goto v_reusejp_2034_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v_a_2030_);
v___x_2035_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2034_;
}
v_reusejp_2034_:
{
return v___x_2035_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp___boxed(lean_object* v_ref_2038_, lean_object* v_f_2039_, lean_object* v_arg_2040_, lean_object* v_a_2041_, lean_object* v_a_2042_, lean_object* v_a_2043_, lean_object* v_a_2044_, lean_object* v_a_2045_, lean_object* v_a_2046_, lean_object* v_a_2047_){
_start:
{
lean_object* v_res_2048_; 
v_res_2048_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp(v_ref_2038_, v_f_2039_, v_arg_2040_, v_a_2041_, v_a_2042_, v_a_2043_, v_a_2044_, v_a_2045_, v_a_2046_);
lean_dec(v_a_2046_);
lean_dec_ref(v_a_2045_);
lean_dec(v_a_2044_);
lean_dec_ref(v_a_2043_);
lean_dec(v_a_2042_);
lean_dec_ref(v_a_2041_);
return v_res_2048_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processBinOp___boxed(lean_object* v_ref_2049_, lean_object* v_kind_2050_, lean_object* v_f_2051_, lean_object* v_lhs_2052_, lean_object* v_rhs_2053_, lean_object* v_a_2054_, lean_object* v_a_2055_, lean_object* v_a_2056_, lean_object* v_a_2057_, lean_object* v_a_2058_, lean_object* v_a_2059_, lean_object* v_a_2060_){
_start:
{
uint8_t v_kind_boxed_2061_; lean_object* v_res_2062_; 
v_kind_boxed_2061_ = lean_unbox(v_kind_2050_);
v_res_2062_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processBinOp(v_ref_2049_, v_kind_boxed_2061_, v_f_2051_, v_lhs_2052_, v_rhs_2053_, v_a_2054_, v_a_2055_, v_a_2056_, v_a_2057_, v_a_2058_, v_a_2059_);
lean_dec(v_a_2059_);
lean_dec_ref(v_a_2058_);
lean_dec(v_a_2057_);
lean_dec_ref(v_a_2056_);
lean_dec(v_a_2055_);
lean_dec_ref(v_a_2054_);
return v_res_2062_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2(lean_object* v_00_u03b1_2063_, lean_object* v_ref_2064_, lean_object* v_constName_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_){
_start:
{
lean_object* v___x_2073_; 
v___x_2073_ = l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg(v_ref_2064_, v_constName_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_, v___y_2071_);
return v___x_2073_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___boxed(lean_object* v_00_u03b1_2074_, lean_object* v_ref_2075_, lean_object* v_constName_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_){
_start:
{
lean_object* v_res_2084_; 
v_res_2084_ = l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2(v_00_u03b1_2074_, v_ref_2075_, v_constName_2076_, v___y_2077_, v___y_2078_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_);
lean_dec(v___y_2082_);
lean_dec_ref(v___y_2081_);
lean_dec(v___y_2080_);
lean_dec_ref(v___y_2079_);
lean_dec(v___y_2078_);
lean_dec_ref(v___y_2077_);
lean_dec(v_ref_2075_);
return v_res_2084_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2(lean_object* v_00_u03b1_2085_, lean_object* v_ref_2086_, lean_object* v_msg_2087_, lean_object* v_declHint_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_){
_start:
{
lean_object* v___x_2096_; 
v___x_2096_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2___redArg(v_ref_2086_, v_msg_2087_, v_declHint_2088_, v___y_2089_, v___y_2090_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_);
return v___x_2096_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2___boxed(lean_object* v_00_u03b1_2097_, lean_object* v_ref_2098_, lean_object* v_msg_2099_, lean_object* v_declHint_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_){
_start:
{
lean_object* v_res_2108_; 
v_res_2108_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2(v_00_u03b1_2097_, v_ref_2098_, v_msg_2099_, v_declHint_2100_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_);
lean_dec(v___y_2106_);
lean_dec_ref(v___y_2105_);
lean_dec(v___y_2104_);
lean_dec_ref(v___y_2103_);
lean_dec(v___y_2102_);
lean_dec_ref(v___y_2101_);
lean_dec(v_ref_2098_);
return v_res_2108_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5(lean_object* v_msg_2109_, lean_object* v_declHint_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_){
_start:
{
lean_object* v___x_2118_; 
v___x_2118_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg(v_msg_2109_, v_declHint_2110_, v___y_2116_);
return v___x_2118_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___boxed(lean_object* v_msg_2119_, lean_object* v_declHint_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_){
_start:
{
lean_object* v_res_2128_; 
v_res_2128_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5(v_msg_2119_, v_declHint_2120_, v___y_2121_, v___y_2122_, v___y_2123_, v___y_2124_, v___y_2125_, v___y_2126_);
lean_dec(v___y_2126_);
lean_dec_ref(v___y_2125_);
lean_dec(v___y_2124_);
lean_dec_ref(v___y_2123_);
lean_dec(v___y_2122_);
lean_dec_ref(v___y_2121_);
return v_res_2128_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__5(lean_object* v_00_u03b1_2129_, lean_object* v_ref_2130_, lean_object* v_msg_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_){
_start:
{
lean_object* v___x_2139_; 
v___x_2139_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__5___redArg(v_ref_2130_, v_msg_2131_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_);
return v___x_2139_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__5___boxed(lean_object* v_00_u03b1_2140_, lean_object* v_ref_2141_, lean_object* v_msg_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_){
_start:
{
lean_object* v_res_2150_; 
v_res_2150_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__5(v_00_u03b1_2140_, v_ref_2141_, v_msg_2142_, v___y_2143_, v___y_2144_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_);
lean_dec(v___y_2148_);
lean_dec_ref(v___y_2147_);
lean_dec(v___y_2146_);
lean_dec_ref(v___y_2145_);
lean_dec(v___y_2144_);
lean_dec_ref(v___y_2143_);
lean_dec(v_ref_2141_);
return v_res_2150_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree(lean_object* v_s_2151_, lean_object* v_a_2152_, lean_object* v_a_2153_, lean_object* v_a_2154_, lean_object* v_a_2155_, lean_object* v_a_2156_, lean_object* v_a_2157_){
_start:
{
lean_object* v___x_2159_; 
v___x_2159_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go(v_s_2151_, v_a_2152_, v_a_2153_, v_a_2154_, v_a_2155_, v_a_2156_, v_a_2157_);
if (lean_obj_tag(v___x_2159_) == 0)
{
lean_object* v_a_2160_; uint8_t v___x_2161_; uint8_t v___x_2162_; lean_object* v___x_2163_; 
v_a_2160_ = lean_ctor_get(v___x_2159_, 0);
lean_inc(v_a_2160_);
lean_dec_ref_known(v___x_2159_, 1);
v___x_2161_ = 0;
v___x_2162_ = 0;
v___x_2163_ = l_Lean_Elab_Term_synthesizeSyntheticMVars(v___x_2161_, v___x_2162_, v_a_2152_, v_a_2153_, v_a_2154_, v_a_2155_, v_a_2156_, v_a_2157_);
if (lean_obj_tag(v___x_2163_) == 0)
{
lean_object* v___x_2165_; uint8_t v_isShared_2166_; uint8_t v_isSharedCheck_2170_; 
v_isSharedCheck_2170_ = !lean_is_exclusive(v___x_2163_);
if (v_isSharedCheck_2170_ == 0)
{
lean_object* v_unused_2171_; 
v_unused_2171_ = lean_ctor_get(v___x_2163_, 0);
lean_dec(v_unused_2171_);
v___x_2165_ = v___x_2163_;
v_isShared_2166_ = v_isSharedCheck_2170_;
goto v_resetjp_2164_;
}
else
{
lean_dec(v___x_2163_);
v___x_2165_ = lean_box(0);
v_isShared_2166_ = v_isSharedCheck_2170_;
goto v_resetjp_2164_;
}
v_resetjp_2164_:
{
lean_object* v___x_2168_; 
if (v_isShared_2166_ == 0)
{
lean_ctor_set(v___x_2165_, 0, v_a_2160_);
v___x_2168_ = v___x_2165_;
goto v_reusejp_2167_;
}
else
{
lean_object* v_reuseFailAlloc_2169_; 
v_reuseFailAlloc_2169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2169_, 0, v_a_2160_);
v___x_2168_ = v_reuseFailAlloc_2169_;
goto v_reusejp_2167_;
}
v_reusejp_2167_:
{
return v___x_2168_;
}
}
}
else
{
lean_object* v_a_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2179_; 
lean_dec(v_a_2160_);
v_a_2172_ = lean_ctor_get(v___x_2163_, 0);
v_isSharedCheck_2179_ = !lean_is_exclusive(v___x_2163_);
if (v_isSharedCheck_2179_ == 0)
{
v___x_2174_ = v___x_2163_;
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_a_2172_);
lean_dec(v___x_2163_);
v___x_2174_ = lean_box(0);
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
v_resetjp_2173_:
{
lean_object* v___x_2177_; 
if (v_isShared_2175_ == 0)
{
v___x_2177_ = v___x_2174_;
goto v_reusejp_2176_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v_a_2172_);
v___x_2177_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2176_;
}
v_reusejp_2176_:
{
return v___x_2177_;
}
}
}
}
else
{
return v___x_2159_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree___boxed(lean_object* v_s_2180_, lean_object* v_a_2181_, lean_object* v_a_2182_, lean_object* v_a_2183_, lean_object* v_a_2184_, lean_object* v_a_2185_, lean_object* v_a_2186_, lean_object* v_a_2187_){
_start:
{
lean_object* v_res_2188_; 
v_res_2188_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree(v_s_2180_, v_a_2181_, v_a_2182_, v_a_2183_, v_a_2184_, v_a_2185_, v_a_2186_);
lean_dec(v_a_2186_);
lean_dec_ref(v_a_2185_);
lean_dec(v_a_2184_);
lean_dec_ref(v_a_2183_);
lean_dec(v_a_2182_);
lean_dec_ref(v_a_2181_);
return v_res_2188_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe___lam__0(lean_object* v_toType_2189_, uint8_t v___x_2190_, lean_object* v_x_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_){
_start:
{
lean_object* v___x_2199_; 
v___x_2199_ = l_Lean_Meta_coerceSimple_x3f(v_x_2191_, v_toType_2189_, v___y_2194_, v___y_2195_, v___y_2196_, v___y_2197_);
if (lean_obj_tag(v___x_2199_) == 0)
{
lean_object* v_a_2200_; lean_object* v___x_2202_; uint8_t v_isShared_2203_; uint8_t v_isSharedCheck_2213_; 
v_a_2200_ = lean_ctor_get(v___x_2199_, 0);
v_isSharedCheck_2213_ = !lean_is_exclusive(v___x_2199_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2202_ = v___x_2199_;
v_isShared_2203_ = v_isSharedCheck_2213_;
goto v_resetjp_2201_;
}
else
{
lean_inc(v_a_2200_);
lean_dec(v___x_2199_);
v___x_2202_ = lean_box(0);
v_isShared_2203_ = v_isSharedCheck_2213_;
goto v_resetjp_2201_;
}
v_resetjp_2201_:
{
if (lean_obj_tag(v_a_2200_) == 1)
{
lean_object* v___x_2204_; lean_object* v___x_2206_; 
lean_dec_ref_known(v_a_2200_, 1);
v___x_2204_ = lean_box(v___x_2190_);
if (v_isShared_2203_ == 0)
{
lean_ctor_set(v___x_2202_, 0, v___x_2204_);
v___x_2206_ = v___x_2202_;
goto v_reusejp_2205_;
}
else
{
lean_object* v_reuseFailAlloc_2207_; 
v_reuseFailAlloc_2207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2207_, 0, v___x_2204_);
v___x_2206_ = v_reuseFailAlloc_2207_;
goto v_reusejp_2205_;
}
v_reusejp_2205_:
{
return v___x_2206_;
}
}
else
{
uint8_t v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2211_; 
lean_dec(v_a_2200_);
v___x_2208_ = 0;
v___x_2209_ = lean_box(v___x_2208_);
if (v_isShared_2203_ == 0)
{
lean_ctor_set(v___x_2202_, 0, v___x_2209_);
v___x_2211_ = v___x_2202_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v___x_2209_);
v___x_2211_ = v_reuseFailAlloc_2212_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
return v___x_2211_;
}
}
}
}
else
{
lean_object* v_a_2214_; lean_object* v___x_2216_; uint8_t v_isShared_2217_; uint8_t v_isSharedCheck_2221_; 
v_a_2214_ = lean_ctor_get(v___x_2199_, 0);
v_isSharedCheck_2221_ = !lean_is_exclusive(v___x_2199_);
if (v_isSharedCheck_2221_ == 0)
{
v___x_2216_ = v___x_2199_;
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
else
{
lean_inc(v_a_2214_);
lean_dec(v___x_2199_);
v___x_2216_ = lean_box(0);
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
v_resetjp_2215_:
{
lean_object* v___x_2219_; 
if (v_isShared_2217_ == 0)
{
v___x_2219_ = v___x_2216_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2220_; 
v_reuseFailAlloc_2220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2220_, 0, v_a_2214_);
v___x_2219_ = v_reuseFailAlloc_2220_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
return v___x_2219_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe___lam__0___boxed(lean_object* v_toType_2222_, lean_object* v___x_2223_, lean_object* v_x_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_){
_start:
{
uint8_t v___x_1836__boxed_2232_; lean_object* v_res_2233_; 
v___x_1836__boxed_2232_ = lean_unbox(v___x_2223_);
v_res_2233_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe___lam__0(v_toType_2222_, v___x_1836__boxed_2232_, v_x_2224_, v___y_2225_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_, v___y_2230_);
lean_dec(v___y_2230_);
lean_dec_ref(v___y_2229_);
lean_dec(v___y_2228_);
lean_dec_ref(v___y_2227_);
lean_dec(v___y_2226_);
lean_dec_ref(v___y_2225_);
return v_res_2233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0_spec__0___redArg___lam__0(lean_object* v_k_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v_b_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_){
_start:
{
lean_object* v___x_2243_; 
lean_inc(v___y_2241_);
lean_inc_ref(v___y_2240_);
lean_inc(v___y_2239_);
lean_inc_ref(v___y_2238_);
lean_inc(v___y_2236_);
lean_inc_ref(v___y_2235_);
v___x_2243_ = lean_apply_8(v_k_2234_, v_b_2237_, v___y_2235_, v___y_2236_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, lean_box(0));
return v___x_2243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v_b_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_){
_start:
{
lean_object* v_res_2253_; 
v_res_2253_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0_spec__0___redArg___lam__0(v_k_2244_, v___y_2245_, v___y_2246_, v_b_2247_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_);
lean_dec(v___y_2251_);
lean_dec_ref(v___y_2250_);
lean_dec(v___y_2249_);
lean_dec_ref(v___y_2248_);
lean_dec(v___y_2246_);
lean_dec_ref(v___y_2245_);
return v_res_2253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0_spec__0___redArg(lean_object* v_name_2254_, uint8_t v_bi_2255_, lean_object* v_type_2256_, lean_object* v_k_2257_, uint8_t v_kind_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_){
_start:
{
lean_object* v___f_2266_; lean_object* v___x_2267_; 
lean_inc(v___y_2260_);
lean_inc_ref(v___y_2259_);
v___f_2266_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0_spec__0___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_2266_, 0, v_k_2257_);
lean_closure_set(v___f_2266_, 1, v___y_2259_);
lean_closure_set(v___f_2266_, 2, v___y_2260_);
v___x_2267_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_2254_, v_bi_2255_, v_type_2256_, v___f_2266_, v_kind_2258_, v___y_2261_, v___y_2262_, v___y_2263_, v___y_2264_);
if (lean_obj_tag(v___x_2267_) == 0)
{
return v___x_2267_;
}
else
{
lean_object* v_a_2268_; lean_object* v___x_2270_; uint8_t v_isShared_2271_; uint8_t v_isSharedCheck_2275_; 
v_a_2268_ = lean_ctor_get(v___x_2267_, 0);
v_isSharedCheck_2275_ = !lean_is_exclusive(v___x_2267_);
if (v_isSharedCheck_2275_ == 0)
{
v___x_2270_ = v___x_2267_;
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
else
{
lean_inc(v_a_2268_);
lean_dec(v___x_2267_);
v___x_2270_ = lean_box(0);
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
v_resetjp_2269_:
{
lean_object* v___x_2273_; 
if (v_isShared_2271_ == 0)
{
v___x_2273_ = v___x_2270_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v_a_2268_);
v___x_2273_ = v_reuseFailAlloc_2274_;
goto v_reusejp_2272_;
}
v_reusejp_2272_:
{
return v___x_2273_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0_spec__0___redArg___boxed(lean_object* v_name_2276_, lean_object* v_bi_2277_, lean_object* v_type_2278_, lean_object* v_k_2279_, lean_object* v_kind_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_){
_start:
{
uint8_t v_bi_boxed_2288_; uint8_t v_kind_boxed_2289_; lean_object* v_res_2290_; 
v_bi_boxed_2288_ = lean_unbox(v_bi_2277_);
v_kind_boxed_2289_ = lean_unbox(v_kind_2280_);
v_res_2290_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0_spec__0___redArg(v_name_2276_, v_bi_boxed_2288_, v_type_2278_, v_k_2279_, v_kind_boxed_2289_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_, v___y_2286_);
lean_dec(v___y_2286_);
lean_dec_ref(v___y_2285_);
lean_dec(v___y_2284_);
lean_dec_ref(v___y_2283_);
lean_dec(v___y_2282_);
lean_dec_ref(v___y_2281_);
return v_res_2290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0___redArg(lean_object* v_name_2291_, lean_object* v_type_2292_, lean_object* v_k_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_){
_start:
{
uint8_t v___x_2301_; uint8_t v___x_2302_; lean_object* v___x_2303_; 
v___x_2301_ = 0;
v___x_2302_ = 0;
v___x_2303_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0_spec__0___redArg(v_name_2291_, v___x_2301_, v_type_2292_, v_k_2293_, v___x_2302_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_);
return v___x_2303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0___redArg___boxed(lean_object* v_name_2304_, lean_object* v_type_2305_, lean_object* v_k_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_){
_start:
{
lean_object* v_res_2314_; 
v_res_2314_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0___redArg(v_name_2304_, v_type_2305_, v_k_2306_, v___y_2307_, v___y_2308_, v___y_2309_, v___y_2310_, v___y_2311_, v___y_2312_);
lean_dec(v___y_2312_);
lean_dec_ref(v___y_2311_);
lean_dec(v___y_2310_);
lean_dec_ref(v___y_2309_);
lean_dec(v___y_2308_);
lean_dec_ref(v___y_2307_);
return v_res_2314_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe(lean_object* v_fromType_2318_, lean_object* v_toType_2319_, lean_object* v_a_2320_, lean_object* v_a_2321_, lean_object* v_a_2322_, lean_object* v_a_2323_, lean_object* v_a_2324_, lean_object* v_a_2325_){
_start:
{
lean_object* v___x_2327_; lean_object* v_env_2328_; lean_object* v___x_2329_; uint8_t v___x_2330_; uint8_t v___x_2331_; 
v___x_2327_ = lean_st_ref_get(v_a_2325_);
v_env_2328_ = lean_ctor_get(v___x_2327_, 0);
lean_inc_ref(v_env_2328_);
lean_dec(v___x_2327_);
v___x_2329_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe___closed__1));
v___x_2330_ = 1;
v___x_2331_ = l_Lean_Environment_contains(v_env_2328_, v___x_2329_, v___x_2330_);
if (v___x_2331_ == 0)
{
lean_object* v___x_2332_; lean_object* v___x_2333_; 
lean_dec_ref(v_toType_2319_);
lean_dec_ref(v_fromType_2318_);
v___x_2332_ = lean_box(v___x_2331_);
v___x_2333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2333_, 0, v___x_2332_);
return v___x_2333_;
}
else
{
lean_object* v___x_2334_; lean_object* v___f_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; 
v___x_2334_ = lean_box(v___x_2331_);
v___f_2335_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe___lam__0___boxed), 10, 2);
lean_closure_set(v___f_2335_, 0, v_toType_2319_);
lean_closure_set(v___f_2335_, 1, v___x_2334_);
v___x_2336_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_mkTree___closed__1));
v___x_2337_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0___redArg(v___x_2336_, v_fromType_2318_, v___f_2335_, v_a_2320_, v_a_2321_, v_a_2322_, v_a_2323_, v_a_2324_, v_a_2325_);
return v___x_2337_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe___boxed(lean_object* v_fromType_2338_, lean_object* v_toType_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_, lean_object* v_a_2342_, lean_object* v_a_2343_, lean_object* v_a_2344_, lean_object* v_a_2345_, lean_object* v_a_2346_){
_start:
{
lean_object* v_res_2347_; 
v_res_2347_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe(v_fromType_2338_, v_toType_2339_, v_a_2340_, v_a_2341_, v_a_2342_, v_a_2343_, v_a_2344_, v_a_2345_);
lean_dec(v_a_2345_);
lean_dec_ref(v_a_2344_);
lean_dec(v_a_2343_);
lean_dec_ref(v_a_2342_);
lean_dec(v_a_2341_);
lean_dec_ref(v_a_2340_);
return v_res_2347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0_spec__0(lean_object* v_00_u03b1_2348_, lean_object* v_name_2349_, uint8_t v_bi_2350_, lean_object* v_type_2351_, lean_object* v_k_2352_, uint8_t v_kind_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_){
_start:
{
lean_object* v___x_2361_; 
v___x_2361_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0_spec__0___redArg(v_name_2349_, v_bi_2350_, v_type_2351_, v_k_2352_, v_kind_2353_, v___y_2354_, v___y_2355_, v___y_2356_, v___y_2357_, v___y_2358_, v___y_2359_);
return v___x_2361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2362_, lean_object* v_name_2363_, lean_object* v_bi_2364_, lean_object* v_type_2365_, lean_object* v_k_2366_, lean_object* v_kind_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_){
_start:
{
uint8_t v_bi_boxed_2375_; uint8_t v_kind_boxed_2376_; lean_object* v_res_2377_; 
v_bi_boxed_2375_ = lean_unbox(v_bi_2364_);
v_kind_boxed_2376_ = lean_unbox(v_kind_2367_);
v_res_2377_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0_spec__0(v_00_u03b1_2362_, v_name_2363_, v_bi_boxed_2375_, v_type_2365_, v_k_2366_, v_kind_boxed_2376_, v___y_2368_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_, v___y_2373_);
lean_dec(v___y_2373_);
lean_dec_ref(v___y_2372_);
lean_dec(v___y_2371_);
lean_dec_ref(v___y_2370_);
lean_dec(v___y_2369_);
lean_dec_ref(v___y_2368_);
return v_res_2377_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0(lean_object* v_00_u03b1_2378_, lean_object* v_name_2379_, lean_object* v_type_2380_, lean_object* v_k_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_){
_start:
{
lean_object* v___x_2389_; 
v___x_2389_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0___redArg(v_name_2379_, v_type_2380_, v_k_2381_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_, v___y_2387_);
return v___x_2389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0___boxed(lean_object* v_00_u03b1_2390_, lean_object* v_name_2391_, lean_object* v_type_2392_, lean_object* v_k_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_){
_start:
{
lean_object* v_res_2401_; 
v_res_2401_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe_spec__0(v_00_u03b1_2390_, v_name_2391_, v_type_2392_, v_k_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
lean_dec(v___y_2399_);
lean_dec_ref(v___y_2398_);
lean_dec(v___y_2397_);
lean_dec_ref(v___y_2396_);
lean_dec(v___y_2395_);
lean_dec_ref(v___y_2394_);
return v_res_2401_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_isUnknown(lean_object* v_x_2402_){
_start:
{
switch(lean_obj_tag(v_x_2402_))
{
case 2:
{
uint8_t v___x_2403_; 
v___x_2403_ = 1;
return v___x_2403_;
}
case 5:
{
lean_object* v_fn_2404_; 
v_fn_2404_ = lean_ctor_get(v_x_2402_, 0);
v_x_2402_ = v_fn_2404_;
goto _start;
}
case 8:
{
lean_object* v_body_2406_; 
v_body_2406_ = lean_ctor_get(v_x_2402_, 3);
v_x_2402_ = v_body_2406_;
goto _start;
}
case 10:
{
lean_object* v_expr_2408_; 
v_expr_2408_ = lean_ctor_get(v_x_2402_, 1);
v_x_2402_ = v_expr_2408_;
goto _start;
}
default: 
{
uint8_t v___x_2410_; 
v___x_2410_ = 0;
return v___x_2410_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_isUnknown___boxed(lean_object* v_x_2411_){
_start:
{
uint8_t v_res_2412_; lean_object* v_r_2413_; 
v_res_2412_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_isUnknown(v_x_2411_);
lean_dec_ref(v_x_2411_);
v_r_2413_ = lean_box(v_res_2412_);
return v_r_2413_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__0___redArg(lean_object* v_e_2414_, lean_object* v___y_2415_){
_start:
{
uint8_t v___x_2417_; 
v___x_2417_ = l_Lean_Expr_hasMVar(v_e_2414_);
if (v___x_2417_ == 0)
{
lean_object* v___x_2418_; 
v___x_2418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2418_, 0, v_e_2414_);
return v___x_2418_;
}
else
{
lean_object* v___x_2419_; lean_object* v_mctx_2420_; lean_object* v___x_2421_; lean_object* v_fst_2422_; lean_object* v_snd_2423_; lean_object* v___x_2424_; lean_object* v_cache_2425_; lean_object* v_zetaDeltaFVarIds_2426_; lean_object* v_postponed_2427_; lean_object* v_diag_2428_; lean_object* v___x_2430_; uint8_t v_isShared_2431_; uint8_t v_isSharedCheck_2437_; 
v___x_2419_ = lean_st_ref_get(v___y_2415_);
v_mctx_2420_ = lean_ctor_get(v___x_2419_, 0);
lean_inc_ref(v_mctx_2420_);
lean_dec(v___x_2419_);
v___x_2421_ = l_Lean_instantiateMVarsCore(v_mctx_2420_, v_e_2414_);
v_fst_2422_ = lean_ctor_get(v___x_2421_, 0);
lean_inc(v_fst_2422_);
v_snd_2423_ = lean_ctor_get(v___x_2421_, 1);
lean_inc(v_snd_2423_);
lean_dec_ref(v___x_2421_);
v___x_2424_ = lean_st_ref_take(v___y_2415_);
v_cache_2425_ = lean_ctor_get(v___x_2424_, 1);
v_zetaDeltaFVarIds_2426_ = lean_ctor_get(v___x_2424_, 2);
v_postponed_2427_ = lean_ctor_get(v___x_2424_, 3);
v_diag_2428_ = lean_ctor_get(v___x_2424_, 4);
v_isSharedCheck_2437_ = !lean_is_exclusive(v___x_2424_);
if (v_isSharedCheck_2437_ == 0)
{
lean_object* v_unused_2438_; 
v_unused_2438_ = lean_ctor_get(v___x_2424_, 0);
lean_dec(v_unused_2438_);
v___x_2430_ = v___x_2424_;
v_isShared_2431_ = v_isSharedCheck_2437_;
goto v_resetjp_2429_;
}
else
{
lean_inc(v_diag_2428_);
lean_inc(v_postponed_2427_);
lean_inc(v_zetaDeltaFVarIds_2426_);
lean_inc(v_cache_2425_);
lean_dec(v___x_2424_);
v___x_2430_ = lean_box(0);
v_isShared_2431_ = v_isSharedCheck_2437_;
goto v_resetjp_2429_;
}
v_resetjp_2429_:
{
lean_object* v___x_2433_; 
if (v_isShared_2431_ == 0)
{
lean_ctor_set(v___x_2430_, 0, v_snd_2423_);
v___x_2433_ = v___x_2430_;
goto v_reusejp_2432_;
}
else
{
lean_object* v_reuseFailAlloc_2436_; 
v_reuseFailAlloc_2436_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2436_, 0, v_snd_2423_);
lean_ctor_set(v_reuseFailAlloc_2436_, 1, v_cache_2425_);
lean_ctor_set(v_reuseFailAlloc_2436_, 2, v_zetaDeltaFVarIds_2426_);
lean_ctor_set(v_reuseFailAlloc_2436_, 3, v_postponed_2427_);
lean_ctor_set(v_reuseFailAlloc_2436_, 4, v_diag_2428_);
v___x_2433_ = v_reuseFailAlloc_2436_;
goto v_reusejp_2432_;
}
v_reusejp_2432_:
{
lean_object* v___x_2434_; lean_object* v___x_2435_; 
v___x_2434_ = lean_st_ref_put(v___y_2415_, v___x_2433_);
v___x_2435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2435_, 0, v_fst_2422_);
return v___x_2435_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__0___redArg___boxed(lean_object* v_e_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_){
_start:
{
lean_object* v_res_2442_; 
v_res_2442_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__0___redArg(v_e_2439_, v___y_2440_);
lean_dec(v___y_2440_);
return v_res_2442_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__0(lean_object* v_e_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_){
_start:
{
lean_object* v___x_2452_; 
v___x_2452_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__0___redArg(v_e_2443_, v___y_2448_);
return v___x_2452_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__0___boxed(lean_object* v_e_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_){
_start:
{
lean_object* v_res_2462_; 
v_res_2462_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__0(v_e_2453_, v___y_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_, v___y_2460_);
lean_dec(v___y_2460_);
lean_dec_ref(v___y_2459_);
lean_dec(v___y_2458_);
lean_dec_ref(v___y_2457_);
lean_dec(v___y_2456_);
lean_dec_ref(v___y_2455_);
lean_dec(v___y_2454_);
return v_res_2462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__1___redArg___lam__0(lean_object* v_k_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_){
_start:
{
lean_object* v___x_2472_; 
lean_inc(v___y_2466_);
lean_inc_ref(v___y_2465_);
lean_inc(v___y_2464_);
v___x_2472_ = lean_apply_8(v_k_2463_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_, v___y_2468_, v___y_2469_, v___y_2470_, lean_box(0));
return v___x_2472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__1___redArg___lam__0___boxed(lean_object* v_k_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_){
_start:
{
lean_object* v_res_2482_; 
v_res_2482_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__1___redArg___lam__0(v_k_2473_, v___y_2474_, v___y_2475_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_, v___y_2480_);
lean_dec(v___y_2476_);
lean_dec_ref(v___y_2475_);
lean_dec(v___y_2474_);
return v_res_2482_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__1___redArg(lean_object* v_k_2483_, uint8_t v_allowLevelAssignments_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_){
_start:
{
lean_object* v___f_2493_; lean_object* v___x_2494_; 
lean_inc(v___y_2487_);
lean_inc_ref(v___y_2486_);
lean_inc(v___y_2485_);
v___f_2493_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__1___redArg___lam__0___boxed), 9, 4);
lean_closure_set(v___f_2493_, 0, v_k_2483_);
lean_closure_set(v___f_2493_, 1, v___y_2485_);
lean_closure_set(v___f_2493_, 2, v___y_2486_);
lean_closure_set(v___f_2493_, 3, v___y_2487_);
v___x_2494_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_2484_, v___f_2493_, v___y_2488_, v___y_2489_, v___y_2490_, v___y_2491_);
if (lean_obj_tag(v___x_2494_) == 0)
{
return v___x_2494_;
}
else
{
lean_object* v_a_2495_; lean_object* v___x_2497_; uint8_t v_isShared_2498_; uint8_t v_isSharedCheck_2502_; 
v_a_2495_ = lean_ctor_get(v___x_2494_, 0);
v_isSharedCheck_2502_ = !lean_is_exclusive(v___x_2494_);
if (v_isSharedCheck_2502_ == 0)
{
v___x_2497_ = v___x_2494_;
v_isShared_2498_ = v_isSharedCheck_2502_;
goto v_resetjp_2496_;
}
else
{
lean_inc(v_a_2495_);
lean_dec(v___x_2494_);
v___x_2497_ = lean_box(0);
v_isShared_2498_ = v_isSharedCheck_2502_;
goto v_resetjp_2496_;
}
v_resetjp_2496_:
{
lean_object* v___x_2500_; 
if (v_isShared_2498_ == 0)
{
v___x_2500_ = v___x_2497_;
goto v_reusejp_2499_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v_a_2495_);
v___x_2500_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2499_;
}
v_reusejp_2499_:
{
return v___x_2500_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__1___redArg___boxed(lean_object* v_k_2503_, lean_object* v_allowLevelAssignments_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_2513_; lean_object* v_res_2514_; 
v_allowLevelAssignments_boxed_2513_ = lean_unbox(v_allowLevelAssignments_2504_);
v_res_2514_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__1___redArg(v_k_2503_, v_allowLevelAssignments_boxed_2513_, v___y_2505_, v___y_2506_, v___y_2507_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_);
lean_dec(v___y_2511_);
lean_dec_ref(v___y_2510_);
lean_dec(v___y_2509_);
lean_dec_ref(v___y_2508_);
lean_dec(v___y_2507_);
lean_dec_ref(v___y_2506_);
lean_dec(v___y_2505_);
return v_res_2514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__1(lean_object* v_00_u03b1_2515_, lean_object* v_k_2516_, uint8_t v_allowLevelAssignments_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_){
_start:
{
lean_object* v___x_2526_; 
v___x_2526_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__1___redArg(v_k_2516_, v_allowLevelAssignments_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_, v___y_2522_, v___y_2523_, v___y_2524_);
return v___x_2526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__1___boxed(lean_object* v_00_u03b1_2527_, lean_object* v_k_2528_, lean_object* v_allowLevelAssignments_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_2538_; lean_object* v_res_2539_; 
v_allowLevelAssignments_boxed_2538_ = lean_unbox(v_allowLevelAssignments_2529_);
v_res_2539_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__1(v_00_u03b1_2527_, v_k_2528_, v_allowLevelAssignments_boxed_2538_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_);
lean_dec(v___y_2536_);
lean_dec_ref(v___y_2535_);
lean_dec(v___y_2534_);
lean_dec_ref(v___y_2533_);
lean_dec(v___y_2532_);
lean_dec_ref(v___y_2531_);
lean_dec(v___y_2530_);
return v_res_2539_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___lam__0(lean_object* v_val_2540_, lean_object* v___x_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_){
_start:
{
lean_object* v___x_2550_; uint8_t v_foApprox_2551_; uint8_t v_ctxApprox_2552_; uint8_t v_quasiPatternApprox_2553_; uint8_t v_constApprox_2554_; uint8_t v_unificationHints_2555_; uint8_t v_proofIrrelevance_2556_; uint8_t v_assignSyntheticOpaque_2557_; uint8_t v_offsetCnstrs_2558_; uint8_t v_transparency_2559_; uint8_t v_etaStruct_2560_; uint8_t v_univApprox_2561_; uint8_t v_iota_2562_; uint8_t v_beta_2563_; uint8_t v_proj_2564_; uint8_t v_zeta_2565_; uint8_t v_zetaDelta_2566_; uint8_t v_zetaUnused_2567_; uint8_t v_zetaHave_2568_; uint8_t v_canUnfoldPredicateConfig_2569_; lean_object* v___x_2571_; uint8_t v_isShared_2572_; uint8_t v_isSharedCheck_2591_; 
v___x_2550_ = l_Lean_Meta_Context_config(v___y_2545_);
v_foApprox_2551_ = lean_ctor_get_uint8(v___x_2550_, 0);
v_ctxApprox_2552_ = lean_ctor_get_uint8(v___x_2550_, 1);
v_quasiPatternApprox_2553_ = lean_ctor_get_uint8(v___x_2550_, 2);
v_constApprox_2554_ = lean_ctor_get_uint8(v___x_2550_, 3);
v_unificationHints_2555_ = lean_ctor_get_uint8(v___x_2550_, 5);
v_proofIrrelevance_2556_ = lean_ctor_get_uint8(v___x_2550_, 6);
v_assignSyntheticOpaque_2557_ = lean_ctor_get_uint8(v___x_2550_, 7);
v_offsetCnstrs_2558_ = lean_ctor_get_uint8(v___x_2550_, 8);
v_transparency_2559_ = lean_ctor_get_uint8(v___x_2550_, 9);
v_etaStruct_2560_ = lean_ctor_get_uint8(v___x_2550_, 10);
v_univApprox_2561_ = lean_ctor_get_uint8(v___x_2550_, 11);
v_iota_2562_ = lean_ctor_get_uint8(v___x_2550_, 12);
v_beta_2563_ = lean_ctor_get_uint8(v___x_2550_, 13);
v_proj_2564_ = lean_ctor_get_uint8(v___x_2550_, 14);
v_zeta_2565_ = lean_ctor_get_uint8(v___x_2550_, 15);
v_zetaDelta_2566_ = lean_ctor_get_uint8(v___x_2550_, 16);
v_zetaUnused_2567_ = lean_ctor_get_uint8(v___x_2550_, 17);
v_zetaHave_2568_ = lean_ctor_get_uint8(v___x_2550_, 18);
v_canUnfoldPredicateConfig_2569_ = lean_ctor_get_uint8(v___x_2550_, 19);
v_isSharedCheck_2591_ = !lean_is_exclusive(v___x_2550_);
if (v_isSharedCheck_2591_ == 0)
{
v___x_2571_ = v___x_2550_;
v_isShared_2572_ = v_isSharedCheck_2591_;
goto v_resetjp_2570_;
}
else
{
lean_dec(v___x_2550_);
v___x_2571_ = lean_box(0);
v_isShared_2572_ = v_isSharedCheck_2591_;
goto v_resetjp_2570_;
}
v_resetjp_2570_:
{
uint8_t v_trackZetaDelta_2573_; lean_object* v_zetaDeltaSet_2574_; lean_object* v_lctx_2575_; lean_object* v_localInstances_2576_; lean_object* v_defEqCtx_x3f_2577_; lean_object* v_synthPendingDepth_2578_; lean_object* v_customCanUnfoldPredicate_x3f_2579_; uint8_t v_univApprox_2580_; uint8_t v_inTypeClassResolution_2581_; uint8_t v_cacheInferType_2582_; uint8_t v___x_2583_; lean_object* v___x_2585_; 
v_trackZetaDelta_2573_ = lean_ctor_get_uint8(v___y_2545_, sizeof(void*)*7);
v_zetaDeltaSet_2574_ = lean_ctor_get(v___y_2545_, 1);
v_lctx_2575_ = lean_ctor_get(v___y_2545_, 2);
v_localInstances_2576_ = lean_ctor_get(v___y_2545_, 3);
v_defEqCtx_x3f_2577_ = lean_ctor_get(v___y_2545_, 4);
v_synthPendingDepth_2578_ = lean_ctor_get(v___y_2545_, 5);
v_customCanUnfoldPredicate_x3f_2579_ = lean_ctor_get(v___y_2545_, 6);
v_univApprox_2580_ = lean_ctor_get_uint8(v___y_2545_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2581_ = lean_ctor_get_uint8(v___y_2545_, sizeof(void*)*7 + 2);
v_cacheInferType_2582_ = lean_ctor_get_uint8(v___y_2545_, sizeof(void*)*7 + 3);
v___x_2583_ = 1;
if (v_isShared_2572_ == 0)
{
v___x_2585_ = v___x_2571_;
goto v_reusejp_2584_;
}
else
{
lean_object* v_reuseFailAlloc_2590_; 
v_reuseFailAlloc_2590_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, 0, v_foApprox_2551_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, 1, v_ctxApprox_2552_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, 2, v_quasiPatternApprox_2553_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, 3, v_constApprox_2554_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, 5, v_unificationHints_2555_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, 6, v_proofIrrelevance_2556_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, 7, v_assignSyntheticOpaque_2557_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, 8, v_offsetCnstrs_2558_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, 9, v_transparency_2559_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, 10, v_etaStruct_2560_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, 11, v_univApprox_2561_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, 12, v_iota_2562_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, 13, v_beta_2563_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, 14, v_proj_2564_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, 15, v_zeta_2565_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, 16, v_zetaDelta_2566_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, 17, v_zetaUnused_2567_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, 18, v_zetaHave_2568_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, 19, v_canUnfoldPredicateConfig_2569_);
v___x_2585_ = v_reuseFailAlloc_2590_;
goto v_reusejp_2584_;
}
v_reusejp_2584_:
{
uint64_t v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; 
lean_ctor_set_uint8(v___x_2585_, 4, v___x_2583_);
v___x_2586_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2585_);
v___x_2587_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2587_, 0, v___x_2585_);
lean_ctor_set_uint64(v___x_2587_, sizeof(void*)*1, v___x_2586_);
lean_inc(v_customCanUnfoldPredicate_x3f_2579_);
lean_inc(v_synthPendingDepth_2578_);
lean_inc(v_defEqCtx_x3f_2577_);
lean_inc_ref(v_localInstances_2576_);
lean_inc_ref(v_lctx_2575_);
lean_inc(v_zetaDeltaSet_2574_);
v___x_2588_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2588_, 0, v___x_2587_);
lean_ctor_set(v___x_2588_, 1, v_zetaDeltaSet_2574_);
lean_ctor_set(v___x_2588_, 2, v_lctx_2575_);
lean_ctor_set(v___x_2588_, 3, v_localInstances_2576_);
lean_ctor_set(v___x_2588_, 4, v_defEqCtx_x3f_2577_);
lean_ctor_set(v___x_2588_, 5, v_synthPendingDepth_2578_);
lean_ctor_set(v___x_2588_, 6, v_customCanUnfoldPredicate_x3f_2579_);
lean_ctor_set_uint8(v___x_2588_, sizeof(void*)*7, v_trackZetaDelta_2573_);
lean_ctor_set_uint8(v___x_2588_, sizeof(void*)*7 + 1, v_univApprox_2580_);
lean_ctor_set_uint8(v___x_2588_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2581_);
lean_ctor_set_uint8(v___x_2588_, sizeof(void*)*7 + 3, v_cacheInferType_2582_);
v___x_2589_ = l_Lean_Meta_isExprDefEqGuarded(v_val_2540_, v___x_2541_, v___x_2588_, v___y_2546_, v___y_2547_, v___y_2548_);
lean_dec_ref_known(v___x_2588_, 7);
return v___x_2589_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___lam__0___boxed(lean_object* v_val_2592_, lean_object* v___x_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_){
_start:
{
lean_object* v_res_2602_; 
v_res_2602_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___lam__0(v_val_2592_, v___x_2593_, v___y_2594_, v___y_2595_, v___y_2596_, v___y_2597_, v___y_2598_, v___y_2599_, v___y_2600_);
lean_dec(v___y_2600_);
lean_dec_ref(v___y_2599_);
lean_dec(v___y_2598_);
lean_dec_ref(v___y_2597_);
lean_dec(v___y_2596_);
lean_dec_ref(v___y_2595_);
lean_dec(v___y_2594_);
return v_res_2602_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_2603_; double v___x_2604_; 
v___x_2603_ = lean_unsigned_to_nat(0u);
v___x_2604_ = lean_float_of_nat(v___x_2603_);
return v___x_2604_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___redArg(lean_object* v_cls_2608_, lean_object* v_msg_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_){
_start:
{
lean_object* v_ref_2615_; lean_object* v___x_2616_; lean_object* v_a_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2662_; 
v_ref_2615_ = lean_ctor_get(v___y_2612_, 2);
v___x_2616_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__0(v_msg_2609_, v___y_2610_, v___y_2611_, v___y_2612_, v___y_2613_);
v_a_2617_ = lean_ctor_get(v___x_2616_, 0);
v_isSharedCheck_2662_ = !lean_is_exclusive(v___x_2616_);
if (v_isSharedCheck_2662_ == 0)
{
v___x_2619_ = v___x_2616_;
v_isShared_2620_ = v_isSharedCheck_2662_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_a_2617_);
lean_dec(v___x_2616_);
v___x_2619_ = lean_box(0);
v_isShared_2620_ = v_isSharedCheck_2662_;
goto v_resetjp_2618_;
}
v_resetjp_2618_:
{
lean_object* v___x_2621_; lean_object* v_traceState_2622_; lean_object* v_env_2623_; lean_object* v_nextMacroScope_2624_; lean_object* v_ngen_2625_; lean_object* v_auxDeclNGen_2626_; lean_object* v_cache_2627_; lean_object* v_recordedDeps_2628_; lean_object* v_messages_2629_; lean_object* v_infoState_2630_; lean_object* v_snapshotTasks_2631_; lean_object* v___x_2633_; uint8_t v_isShared_2634_; uint8_t v_isSharedCheck_2661_; 
v___x_2621_ = lean_st_ref_take(v___y_2613_);
v_traceState_2622_ = lean_ctor_get(v___x_2621_, 4);
v_env_2623_ = lean_ctor_get(v___x_2621_, 0);
v_nextMacroScope_2624_ = lean_ctor_get(v___x_2621_, 1);
v_ngen_2625_ = lean_ctor_get(v___x_2621_, 2);
v_auxDeclNGen_2626_ = lean_ctor_get(v___x_2621_, 3);
v_cache_2627_ = lean_ctor_get(v___x_2621_, 5);
v_recordedDeps_2628_ = lean_ctor_get(v___x_2621_, 6);
v_messages_2629_ = lean_ctor_get(v___x_2621_, 7);
v_infoState_2630_ = lean_ctor_get(v___x_2621_, 8);
v_snapshotTasks_2631_ = lean_ctor_get(v___x_2621_, 9);
v_isSharedCheck_2661_ = !lean_is_exclusive(v___x_2621_);
if (v_isSharedCheck_2661_ == 0)
{
v___x_2633_ = v___x_2621_;
v_isShared_2634_ = v_isSharedCheck_2661_;
goto v_resetjp_2632_;
}
else
{
lean_inc(v_snapshotTasks_2631_);
lean_inc(v_infoState_2630_);
lean_inc(v_messages_2629_);
lean_inc(v_recordedDeps_2628_);
lean_inc(v_cache_2627_);
lean_inc(v_traceState_2622_);
lean_inc(v_auxDeclNGen_2626_);
lean_inc(v_ngen_2625_);
lean_inc(v_nextMacroScope_2624_);
lean_inc(v_env_2623_);
lean_dec(v___x_2621_);
v___x_2633_ = lean_box(0);
v_isShared_2634_ = v_isSharedCheck_2661_;
goto v_resetjp_2632_;
}
v_resetjp_2632_:
{
uint64_t v_tid_2635_; lean_object* v_traces_2636_; lean_object* v___x_2638_; uint8_t v_isShared_2639_; uint8_t v_isSharedCheck_2660_; 
v_tid_2635_ = lean_ctor_get_uint64(v_traceState_2622_, sizeof(void*)*1);
v_traces_2636_ = lean_ctor_get(v_traceState_2622_, 0);
v_isSharedCheck_2660_ = !lean_is_exclusive(v_traceState_2622_);
if (v_isSharedCheck_2660_ == 0)
{
v___x_2638_ = v_traceState_2622_;
v_isShared_2639_ = v_isSharedCheck_2660_;
goto v_resetjp_2637_;
}
else
{
lean_inc(v_traces_2636_);
lean_dec(v_traceState_2622_);
v___x_2638_ = lean_box(0);
v_isShared_2639_ = v_isSharedCheck_2660_;
goto v_resetjp_2637_;
}
v_resetjp_2637_:
{
lean_object* v___x_2640_; lean_object* v___x_2641_; double v___x_2642_; uint8_t v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2651_; 
v___x_2640_ = lean_box(0);
v___x_2641_ = lean_box(0);
v___x_2642_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___redArg___closed__0);
v___x_2643_ = 0;
v___x_2644_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___redArg___closed__1));
v___x_2645_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2645_, 0, v_cls_2608_);
lean_ctor_set(v___x_2645_, 1, v___x_2641_);
lean_ctor_set(v___x_2645_, 2, v___x_2644_);
lean_ctor_set_float(v___x_2645_, sizeof(void*)*3, v___x_2642_);
lean_ctor_set_float(v___x_2645_, sizeof(void*)*3 + 8, v___x_2642_);
lean_ctor_set_uint8(v___x_2645_, sizeof(void*)*3 + 16, v___x_2643_);
v___x_2646_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___redArg___closed__2));
v___x_2647_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2647_, 0, v___x_2645_);
lean_ctor_set(v___x_2647_, 1, v_a_2617_);
lean_ctor_set(v___x_2647_, 2, v___x_2646_);
lean_inc(v_ref_2615_);
v___x_2648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2648_, 0, v_ref_2615_);
lean_ctor_set(v___x_2648_, 1, v___x_2647_);
v___x_2649_ = l_Lean_PersistentArray_push___redArg(v_traces_2636_, v___x_2648_);
if (v_isShared_2639_ == 0)
{
lean_ctor_set(v___x_2638_, 0, v___x_2649_);
v___x_2651_ = v___x_2638_;
goto v_reusejp_2650_;
}
else
{
lean_object* v_reuseFailAlloc_2659_; 
v_reuseFailAlloc_2659_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2659_, 0, v___x_2649_);
lean_ctor_set_uint64(v_reuseFailAlloc_2659_, sizeof(void*)*1, v_tid_2635_);
v___x_2651_ = v_reuseFailAlloc_2659_;
goto v_reusejp_2650_;
}
v_reusejp_2650_:
{
lean_object* v___x_2653_; 
if (v_isShared_2634_ == 0)
{
lean_ctor_set(v___x_2633_, 4, v___x_2651_);
v___x_2653_ = v___x_2633_;
goto v_reusejp_2652_;
}
else
{
lean_object* v_reuseFailAlloc_2658_; 
v_reuseFailAlloc_2658_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2658_, 0, v_env_2623_);
lean_ctor_set(v_reuseFailAlloc_2658_, 1, v_nextMacroScope_2624_);
lean_ctor_set(v_reuseFailAlloc_2658_, 2, v_ngen_2625_);
lean_ctor_set(v_reuseFailAlloc_2658_, 3, v_auxDeclNGen_2626_);
lean_ctor_set(v_reuseFailAlloc_2658_, 4, v___x_2651_);
lean_ctor_set(v_reuseFailAlloc_2658_, 5, v_cache_2627_);
lean_ctor_set(v_reuseFailAlloc_2658_, 6, v_recordedDeps_2628_);
lean_ctor_set(v_reuseFailAlloc_2658_, 7, v_messages_2629_);
lean_ctor_set(v_reuseFailAlloc_2658_, 8, v_infoState_2630_);
lean_ctor_set(v_reuseFailAlloc_2658_, 9, v_snapshotTasks_2631_);
v___x_2653_ = v_reuseFailAlloc_2658_;
goto v_reusejp_2652_;
}
v_reusejp_2652_:
{
lean_object* v___x_2654_; lean_object* v___x_2656_; 
v___x_2654_ = lean_st_ref_put(v___y_2613_, v___x_2653_);
if (v_isShared_2620_ == 0)
{
lean_ctor_set(v___x_2619_, 0, v___x_2640_);
v___x_2656_ = v___x_2619_;
goto v_reusejp_2655_;
}
else
{
lean_object* v_reuseFailAlloc_2657_; 
v_reuseFailAlloc_2657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2657_, 0, v___x_2640_);
v___x_2656_ = v_reuseFailAlloc_2657_;
goto v_reusejp_2655_;
}
v_reusejp_2655_:
{
return v___x_2656_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___redArg___boxed(lean_object* v_cls_2663_, lean_object* v_msg_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_){
_start:
{
lean_object* v_res_2670_; 
v_res_2670_ = l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___redArg(v_cls_2663_, v_msg_2664_, v___y_2665_, v___y_2666_, v___y_2667_, v___y_2668_);
lean_dec(v___y_2668_);
lean_dec_ref(v___y_2667_);
lean_dec(v___y_2666_);
lean_dec_ref(v___y_2665_);
return v_res_2670_;
}
}
static lean_object* _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__3(void){
_start:
{
lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; 
v___x_2677_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__0));
v___x_2678_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__2));
v___x_2679_ = l_Lean_Name_append(v___x_2678_, v___x_2677_);
return v___x_2679_;
}
}
static lean_object* _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__5(void){
_start:
{
lean_object* v___x_2681_; lean_object* v___x_2682_; 
v___x_2681_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__4));
v___x_2682_ = l_Lean_stringToMessageData(v___x_2681_);
return v___x_2682_;
}
}
static lean_object* _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__7(void){
_start:
{
lean_object* v___x_2684_; lean_object* v___x_2685_; 
v___x_2684_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__6));
v___x_2685_ = l_Lean_stringToMessageData(v___x_2684_);
return v___x_2685_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go(lean_object* v_t_2686_, lean_object* v_a_2687_, lean_object* v_a_2688_, lean_object* v_a_2689_, lean_object* v_a_2690_, lean_object* v_a_2691_, lean_object* v_a_2692_, lean_object* v_a_2693_){
_start:
{
lean_object* v___y_2696_; lean_object* v___x_2714_; uint8_t v_hasUncomparable_2715_; 
v___x_2714_ = lean_st_ref_get(v_a_2687_);
v_hasUncomparable_2715_ = lean_ctor_get_uint8(v___x_2714_, sizeof(void*)*1);
lean_dec(v___x_2714_);
if (v_hasUncomparable_2715_ == 0)
{
switch(lean_obj_tag(v_t_2686_))
{
case 0:
{
lean_object* v_val_2716_; lean_object* v___x_2717_; 
v_val_2716_ = lean_ctor_get(v_t_2686_, 2);
lean_inc_ref(v_val_2716_);
lean_dec_ref_known(v_t_2686_, 3);
lean_inc(v_a_2693_);
lean_inc_ref(v_a_2692_);
lean_inc(v_a_2691_);
lean_inc_ref(v_a_2690_);
v___x_2717_ = lean_infer_type(v_val_2716_, v_a_2690_, v_a_2691_, v_a_2692_, v_a_2693_);
if (lean_obj_tag(v___x_2717_) == 0)
{
lean_object* v_a_2718_; lean_object* v___x_2720_; uint8_t v_isShared_2721_; uint8_t v_isSharedCheck_2816_; 
v_a_2718_ = lean_ctor_get(v___x_2717_, 0);
v_isSharedCheck_2816_ = !lean_is_exclusive(v___x_2717_);
if (v_isSharedCheck_2816_ == 0)
{
v___x_2720_ = v___x_2717_;
v_isShared_2721_ = v_isSharedCheck_2816_;
goto v_resetjp_2719_;
}
else
{
lean_inc(v_a_2718_);
lean_dec(v___x_2717_);
v___x_2720_ = lean_box(0);
v_isShared_2721_ = v_isSharedCheck_2816_;
goto v_resetjp_2719_;
}
v_resetjp_2719_:
{
lean_object* v___x_2722_; lean_object* v_a_2723_; lean_object* v___x_2725_; uint8_t v_isShared_2726_; uint8_t v_isSharedCheck_2815_; 
v___x_2722_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__0___redArg(v_a_2718_, v_a_2691_);
v_a_2723_ = lean_ctor_get(v___x_2722_, 0);
v_isSharedCheck_2815_ = !lean_is_exclusive(v___x_2722_);
if (v_isSharedCheck_2815_ == 0)
{
v___x_2725_ = v___x_2722_;
v_isShared_2726_ = v_isSharedCheck_2815_;
goto v_resetjp_2724_;
}
else
{
lean_inc(v_a_2723_);
lean_dec(v___x_2722_);
v___x_2725_ = lean_box(0);
v_isShared_2726_ = v_isSharedCheck_2815_;
goto v_resetjp_2724_;
}
v_resetjp_2724_:
{
lean_object* v___x_2727_; lean_object* v___y_2729_; uint8_t v___x_2747_; 
v___x_2727_ = l_Lean_Expr_cleanupAnnotations(v_a_2723_);
lean_dec(v_a_2723_);
v___x_2747_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_isUnknown(v___x_2727_);
if (v___x_2747_ == 0)
{
lean_object* v___x_2748_; lean_object* v_max_x3f_2749_; 
lean_del_object(v___x_2720_);
v___x_2748_ = lean_st_ref_get(v_a_2687_);
v_max_x3f_2749_ = lean_ctor_get(v___x_2748_, 0);
lean_inc(v_max_x3f_2749_);
lean_dec(v___x_2748_);
if (lean_obj_tag(v_max_x3f_2749_) == 0)
{
v___y_2729_ = v_a_2687_;
goto v___jp_2728_;
}
else
{
lean_object* v_val_2750_; lean_object* v___f_2751_; lean_object* v___x_2752_; 
v_val_2750_ = lean_ctor_get(v_max_x3f_2749_, 0);
lean_inc_n(v_val_2750_, 2);
lean_dec_ref_known(v_max_x3f_2749_, 1);
lean_inc_ref(v___x_2727_);
v___f_2751_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___lam__0___boxed), 10, 2);
lean_closure_set(v___f_2751_, 0, v_val_2750_);
lean_closure_set(v___f_2751_, 1, v___x_2727_);
v___x_2752_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__1___redArg(v___f_2751_, v___x_2747_, v_a_2687_, v_a_2688_, v_a_2689_, v_a_2690_, v_a_2691_, v_a_2692_, v_a_2693_);
if (lean_obj_tag(v___x_2752_) == 0)
{
lean_object* v_a_2753_; uint8_t v___x_2754_; 
v_a_2753_ = lean_ctor_get(v___x_2752_, 0);
lean_inc(v_a_2753_);
lean_dec_ref_known(v___x_2752_, 1);
v___x_2754_ = lean_unbox(v_a_2753_);
lean_dec(v_a_2753_);
if (v___x_2754_ == 0)
{
lean_object* v___x_2755_; 
lean_inc(v_val_2750_);
lean_inc_ref(v___x_2727_);
v___x_2755_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe(v___x_2727_, v_val_2750_, v_a_2688_, v_a_2689_, v_a_2690_, v_a_2691_, v_a_2692_, v_a_2693_);
if (lean_obj_tag(v___x_2755_) == 0)
{
lean_object* v_a_2756_; uint8_t v___x_2757_; 
v_a_2756_ = lean_ctor_get(v___x_2755_, 0);
lean_inc(v_a_2756_);
lean_dec_ref_known(v___x_2755_, 1);
v___x_2757_ = lean_unbox(v_a_2756_);
lean_dec(v_a_2756_);
if (v___x_2757_ == 0)
{
lean_object* v___x_2758_; 
lean_inc_ref(v___x_2727_);
lean_inc(v_val_2750_);
v___x_2758_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasCoe(v_val_2750_, v___x_2727_, v_a_2688_, v_a_2689_, v_a_2690_, v_a_2691_, v_a_2692_, v_a_2693_);
if (lean_obj_tag(v___x_2758_) == 0)
{
lean_object* v_a_2759_; uint8_t v___x_2760_; 
v_a_2759_ = lean_ctor_get(v___x_2758_, 0);
lean_inc(v_a_2759_);
lean_dec_ref_known(v___x_2758_, 1);
v___x_2760_ = lean_unbox(v_a_2759_);
lean_dec(v_a_2759_);
if (v___x_2760_ == 0)
{
lean_object* v_toCold_2761_; lean_object* v_options_2762_; uint8_t v_hasTrace_2763_; 
lean_del_object(v___x_2725_);
v_toCold_2761_ = lean_ctor_get(v_a_2692_, 0);
v_options_2762_ = lean_ctor_get(v_toCold_2761_, 2);
v_hasTrace_2763_ = lean_ctor_get_uint8(v_options_2762_, sizeof(void*)*1);
if (v_hasTrace_2763_ == 0)
{
lean_dec(v_val_2750_);
lean_dec_ref(v___x_2727_);
v___y_2696_ = v_a_2687_;
goto v___jp_2695_;
}
else
{
lean_object* v_inheritedTraceOptions_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; uint8_t v___x_2767_; 
v_inheritedTraceOptions_2764_ = lean_ctor_get(v_toCold_2761_, 11);
v___x_2765_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__0));
v___x_2766_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__3, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__3_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__3);
v___x_2767_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2764_, v_options_2762_, v___x_2766_);
if (v___x_2767_ == 0)
{
lean_dec(v_val_2750_);
lean_dec_ref(v___x_2727_);
v___y_2696_ = v_a_2687_;
goto v___jp_2695_;
}
else
{
lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; 
v___x_2768_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__5, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__5_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__5);
v___x_2769_ = l_Lean_MessageData_ofExpr(v_val_2750_);
v___x_2770_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2770_, 0, v___x_2768_);
lean_ctor_set(v___x_2770_, 1, v___x_2769_);
v___x_2771_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__7, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__7_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__7);
v___x_2772_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2772_, 0, v___x_2770_);
lean_ctor_set(v___x_2772_, 1, v___x_2771_);
v___x_2773_ = l_Lean_MessageData_ofExpr(v___x_2727_);
v___x_2774_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2774_, 0, v___x_2772_);
lean_ctor_set(v___x_2774_, 1, v___x_2773_);
v___x_2775_ = l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___redArg(v___x_2765_, v___x_2774_, v_a_2690_, v_a_2691_, v_a_2692_, v_a_2693_);
if (lean_obj_tag(v___x_2775_) == 0)
{
lean_dec_ref_known(v___x_2775_, 1);
v___y_2696_ = v_a_2687_;
goto v___jp_2695_;
}
else
{
return v___x_2775_;
}
}
}
}
else
{
lean_dec(v_val_2750_);
v___y_2729_ = v_a_2687_;
goto v___jp_2728_;
}
}
else
{
lean_object* v_a_2776_; lean_object* v___x_2778_; uint8_t v_isShared_2779_; uint8_t v_isSharedCheck_2783_; 
lean_dec(v_val_2750_);
lean_dec_ref(v___x_2727_);
lean_del_object(v___x_2725_);
v_a_2776_ = lean_ctor_get(v___x_2758_, 0);
v_isSharedCheck_2783_ = !lean_is_exclusive(v___x_2758_);
if (v_isSharedCheck_2783_ == 0)
{
v___x_2778_ = v___x_2758_;
v_isShared_2779_ = v_isSharedCheck_2783_;
goto v_resetjp_2777_;
}
else
{
lean_inc(v_a_2776_);
lean_dec(v___x_2758_);
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
else
{
lean_dec(v_val_2750_);
lean_dec_ref(v___x_2727_);
lean_del_object(v___x_2725_);
goto v___jp_2711_;
}
}
else
{
lean_object* v_a_2784_; lean_object* v___x_2786_; uint8_t v_isShared_2787_; uint8_t v_isSharedCheck_2791_; 
lean_dec(v_val_2750_);
lean_dec_ref(v___x_2727_);
lean_del_object(v___x_2725_);
v_a_2784_ = lean_ctor_get(v___x_2755_, 0);
v_isSharedCheck_2791_ = !lean_is_exclusive(v___x_2755_);
if (v_isSharedCheck_2791_ == 0)
{
v___x_2786_ = v___x_2755_;
v_isShared_2787_ = v_isSharedCheck_2791_;
goto v_resetjp_2785_;
}
else
{
lean_inc(v_a_2784_);
lean_dec(v___x_2755_);
v___x_2786_ = lean_box(0);
v_isShared_2787_ = v_isSharedCheck_2791_;
goto v_resetjp_2785_;
}
v_resetjp_2785_:
{
lean_object* v___x_2789_; 
if (v_isShared_2787_ == 0)
{
v___x_2789_ = v___x_2786_;
goto v_reusejp_2788_;
}
else
{
lean_object* v_reuseFailAlloc_2790_; 
v_reuseFailAlloc_2790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2790_, 0, v_a_2784_);
v___x_2789_ = v_reuseFailAlloc_2790_;
goto v_reusejp_2788_;
}
v_reusejp_2788_:
{
return v___x_2789_;
}
}
}
}
else
{
lean_dec(v_val_2750_);
lean_dec_ref(v___x_2727_);
lean_del_object(v___x_2725_);
goto v___jp_2711_;
}
}
else
{
lean_object* v_a_2792_; lean_object* v___x_2794_; uint8_t v_isShared_2795_; uint8_t v_isSharedCheck_2799_; 
lean_dec(v_val_2750_);
lean_dec_ref(v___x_2727_);
lean_del_object(v___x_2725_);
v_a_2792_ = lean_ctor_get(v___x_2752_, 0);
v_isSharedCheck_2799_ = !lean_is_exclusive(v___x_2752_);
if (v_isSharedCheck_2799_ == 0)
{
v___x_2794_ = v___x_2752_;
v_isShared_2795_ = v_isSharedCheck_2799_;
goto v_resetjp_2793_;
}
else
{
lean_inc(v_a_2792_);
lean_dec(v___x_2752_);
v___x_2794_ = lean_box(0);
v_isShared_2795_ = v_isSharedCheck_2799_;
goto v_resetjp_2793_;
}
v_resetjp_2793_:
{
lean_object* v___x_2797_; 
if (v_isShared_2795_ == 0)
{
v___x_2797_ = v___x_2794_;
goto v_reusejp_2796_;
}
else
{
lean_object* v_reuseFailAlloc_2798_; 
v_reuseFailAlloc_2798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2798_, 0, v_a_2792_);
v___x_2797_ = v_reuseFailAlloc_2798_;
goto v_reusejp_2796_;
}
v_reusejp_2796_:
{
return v___x_2797_;
}
}
}
}
}
else
{
lean_object* v___x_2800_; lean_object* v_max_x3f_2801_; uint8_t v_hasUncomparable_2802_; lean_object* v___x_2804_; uint8_t v_isShared_2805_; uint8_t v_isSharedCheck_2814_; 
lean_dec_ref(v___x_2727_);
lean_del_object(v___x_2725_);
v___x_2800_ = lean_st_ref_take(v_a_2687_);
v_max_x3f_2801_ = lean_ctor_get(v___x_2800_, 0);
v_hasUncomparable_2802_ = lean_ctor_get_uint8(v___x_2800_, sizeof(void*)*1);
v_isSharedCheck_2814_ = !lean_is_exclusive(v___x_2800_);
if (v_isSharedCheck_2814_ == 0)
{
v___x_2804_ = v___x_2800_;
v_isShared_2805_ = v_isSharedCheck_2814_;
goto v_resetjp_2803_;
}
else
{
lean_inc(v_max_x3f_2801_);
lean_dec(v___x_2800_);
v___x_2804_ = lean_box(0);
v_isShared_2805_ = v_isSharedCheck_2814_;
goto v_resetjp_2803_;
}
v_resetjp_2803_:
{
lean_object* v___x_2806_; lean_object* v___x_2808_; 
v___x_2806_ = lean_box(0);
if (v_isShared_2805_ == 0)
{
v___x_2808_ = v___x_2804_;
goto v_reusejp_2807_;
}
else
{
lean_object* v_reuseFailAlloc_2813_; 
v_reuseFailAlloc_2813_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_2813_, 0, v_max_x3f_2801_);
lean_ctor_set_uint8(v_reuseFailAlloc_2813_, sizeof(void*)*1, v_hasUncomparable_2802_);
v___x_2808_ = v_reuseFailAlloc_2813_;
goto v_reusejp_2807_;
}
v_reusejp_2807_:
{
lean_object* v___x_2809_; lean_object* v___x_2811_; 
lean_ctor_set_uint8(v___x_2808_, sizeof(void*)*1 + 1, v___x_2747_);
v___x_2809_ = lean_st_ref_put(v_a_2687_, v___x_2808_);
if (v_isShared_2721_ == 0)
{
lean_ctor_set(v___x_2720_, 0, v___x_2806_);
v___x_2811_ = v___x_2720_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v___x_2806_);
v___x_2811_ = v_reuseFailAlloc_2812_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
return v___x_2811_;
}
}
}
}
v___jp_2728_:
{
lean_object* v___x_2730_; uint8_t v_hasUncomparable_2731_; uint8_t v_hasUnknown_2732_; lean_object* v___x_2734_; uint8_t v_isShared_2735_; uint8_t v_isSharedCheck_2745_; 
v___x_2730_ = lean_st_ref_take(v___y_2729_);
v_hasUncomparable_2731_ = lean_ctor_get_uint8(v___x_2730_, sizeof(void*)*1);
v_hasUnknown_2732_ = lean_ctor_get_uint8(v___x_2730_, sizeof(void*)*1 + 1);
v_isSharedCheck_2745_ = !lean_is_exclusive(v___x_2730_);
if (v_isSharedCheck_2745_ == 0)
{
lean_object* v_unused_2746_; 
v_unused_2746_ = lean_ctor_get(v___x_2730_, 0);
lean_dec(v_unused_2746_);
v___x_2734_ = v___x_2730_;
v_isShared_2735_ = v_isSharedCheck_2745_;
goto v_resetjp_2733_;
}
else
{
lean_dec(v___x_2730_);
v___x_2734_ = lean_box(0);
v_isShared_2735_ = v_isSharedCheck_2745_;
goto v_resetjp_2733_;
}
v_resetjp_2733_:
{
lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2739_; 
v___x_2736_ = lean_box(0);
v___x_2737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2737_, 0, v___x_2727_);
if (v_isShared_2735_ == 0)
{
lean_ctor_set(v___x_2734_, 0, v___x_2737_);
v___x_2739_ = v___x_2734_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2744_; 
v_reuseFailAlloc_2744_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_2744_, 0, v___x_2737_);
lean_ctor_set_uint8(v_reuseFailAlloc_2744_, sizeof(void*)*1, v_hasUncomparable_2731_);
lean_ctor_set_uint8(v_reuseFailAlloc_2744_, sizeof(void*)*1 + 1, v_hasUnknown_2732_);
v___x_2739_ = v_reuseFailAlloc_2744_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
lean_object* v___x_2740_; lean_object* v___x_2742_; 
v___x_2740_ = lean_st_ref_put(v___y_2729_, v___x_2739_);
if (v_isShared_2726_ == 0)
{
lean_ctor_set(v___x_2725_, 0, v___x_2736_);
v___x_2742_ = v___x_2725_;
goto v_reusejp_2741_;
}
else
{
lean_object* v_reuseFailAlloc_2743_; 
v_reuseFailAlloc_2743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2743_, 0, v___x_2736_);
v___x_2742_ = v_reuseFailAlloc_2743_;
goto v_reusejp_2741_;
}
v_reusejp_2741_:
{
return v___x_2742_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2817_; lean_object* v___x_2819_; uint8_t v_isShared_2820_; uint8_t v_isSharedCheck_2824_; 
v_a_2817_ = lean_ctor_get(v___x_2717_, 0);
v_isSharedCheck_2824_ = !lean_is_exclusive(v___x_2717_);
if (v_isSharedCheck_2824_ == 0)
{
v___x_2819_ = v___x_2717_;
v_isShared_2820_ = v_isSharedCheck_2824_;
goto v_resetjp_2818_;
}
else
{
lean_inc(v_a_2817_);
lean_dec(v___x_2717_);
v___x_2819_ = lean_box(0);
v_isShared_2820_ = v_isSharedCheck_2824_;
goto v_resetjp_2818_;
}
v_resetjp_2818_:
{
lean_object* v___x_2822_; 
if (v_isShared_2820_ == 0)
{
v___x_2822_ = v___x_2819_;
goto v_reusejp_2821_;
}
else
{
lean_object* v_reuseFailAlloc_2823_; 
v_reuseFailAlloc_2823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2823_, 0, v_a_2817_);
v___x_2822_ = v_reuseFailAlloc_2823_;
goto v_reusejp_2821_;
}
v_reusejp_2821_:
{
return v___x_2822_;
}
}
}
}
case 1:
{
uint8_t v_kind_2825_; 
v_kind_2825_ = lean_ctor_get_uint8(v_t_2686_, sizeof(void*)*4);
switch(v_kind_2825_)
{
case 2:
{
lean_object* v_rhs_2826_; 
v_rhs_2826_ = lean_ctor_get(v_t_2686_, 3);
lean_inc_ref(v_rhs_2826_);
lean_dec_ref_known(v_t_2686_, 4);
v_t_2686_ = v_rhs_2826_;
goto _start;
}
case 3:
{
lean_object* v_lhs_2828_; 
v_lhs_2828_ = lean_ctor_get(v_t_2686_, 2);
lean_inc_ref(v_lhs_2828_);
lean_dec_ref_known(v_t_2686_, 4);
v_t_2686_ = v_lhs_2828_;
goto _start;
}
default: 
{
lean_object* v_lhs_2830_; lean_object* v_rhs_2831_; lean_object* v___x_2832_; 
v_lhs_2830_ = lean_ctor_get(v_t_2686_, 2);
lean_inc_ref(v_lhs_2830_);
v_rhs_2831_ = lean_ctor_get(v_t_2686_, 3);
lean_inc_ref(v_rhs_2831_);
lean_dec_ref_known(v_t_2686_, 4);
v___x_2832_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go(v_lhs_2830_, v_a_2687_, v_a_2688_, v_a_2689_, v_a_2690_, v_a_2691_, v_a_2692_, v_a_2693_);
if (lean_obj_tag(v___x_2832_) == 0)
{
lean_dec_ref_known(v___x_2832_, 1);
v_t_2686_ = v_rhs_2831_;
goto _start;
}
else
{
lean_dec_ref(v_rhs_2831_);
return v___x_2832_;
}
}
}
}
case 2:
{
lean_object* v_arg_2834_; 
v_arg_2834_ = lean_ctor_get(v_t_2686_, 2);
lean_inc_ref(v_arg_2834_);
lean_dec_ref_known(v_t_2686_, 3);
v_t_2686_ = v_arg_2834_;
goto _start;
}
default: 
{
lean_object* v_nested_2836_; 
v_nested_2836_ = lean_ctor_get(v_t_2686_, 3);
lean_inc_ref(v_nested_2836_);
lean_dec_ref_known(v_t_2686_, 4);
v_t_2686_ = v_nested_2836_;
goto _start;
}
}
}
else
{
lean_dec_ref(v_t_2686_);
goto v___jp_2711_;
}
v___jp_2695_:
{
lean_object* v___x_2697_; lean_object* v_max_x3f_2698_; uint8_t v_hasUnknown_2699_; lean_object* v___x_2701_; uint8_t v_isShared_2702_; uint8_t v_isSharedCheck_2710_; 
v___x_2697_ = lean_st_ref_take(v___y_2696_);
v_max_x3f_2698_ = lean_ctor_get(v___x_2697_, 0);
v_hasUnknown_2699_ = lean_ctor_get_uint8(v___x_2697_, sizeof(void*)*1 + 1);
v_isSharedCheck_2710_ = !lean_is_exclusive(v___x_2697_);
if (v_isSharedCheck_2710_ == 0)
{
v___x_2701_ = v___x_2697_;
v_isShared_2702_ = v_isSharedCheck_2710_;
goto v_resetjp_2700_;
}
else
{
lean_inc(v_max_x3f_2698_);
lean_dec(v___x_2697_);
v___x_2701_ = lean_box(0);
v_isShared_2702_ = v_isSharedCheck_2710_;
goto v_resetjp_2700_;
}
v_resetjp_2700_:
{
lean_object* v___x_2703_; uint8_t v___x_2704_; lean_object* v___x_2706_; 
v___x_2703_ = lean_box(0);
v___x_2704_ = 1;
if (v_isShared_2702_ == 0)
{
v___x_2706_ = v___x_2701_;
goto v_reusejp_2705_;
}
else
{
lean_object* v_reuseFailAlloc_2709_; 
v_reuseFailAlloc_2709_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_2709_, 0, v_max_x3f_2698_);
lean_ctor_set_uint8(v_reuseFailAlloc_2709_, sizeof(void*)*1 + 1, v_hasUnknown_2699_);
v___x_2706_ = v_reuseFailAlloc_2709_;
goto v_reusejp_2705_;
}
v_reusejp_2705_:
{
lean_object* v___x_2707_; lean_object* v___x_2708_; 
lean_ctor_set_uint8(v___x_2706_, sizeof(void*)*1, v___x_2704_);
v___x_2707_ = lean_st_ref_put(v___y_2696_, v___x_2706_);
v___x_2708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2708_, 0, v___x_2703_);
return v___x_2708_;
}
}
}
v___jp_2711_:
{
lean_object* v___x_2712_; lean_object* v___x_2713_; 
v___x_2712_ = lean_box(0);
v___x_2713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2713_, 0, v___x_2712_);
return v___x_2713_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___boxed(lean_object* v_t_2838_, lean_object* v_a_2839_, lean_object* v_a_2840_, lean_object* v_a_2841_, lean_object* v_a_2842_, lean_object* v_a_2843_, lean_object* v_a_2844_, lean_object* v_a_2845_, lean_object* v_a_2846_){
_start:
{
lean_object* v_res_2847_; 
v_res_2847_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go(v_t_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_, v_a_2843_, v_a_2844_, v_a_2845_);
lean_dec(v_a_2845_);
lean_dec_ref(v_a_2844_);
lean_dec(v_a_2843_);
lean_dec_ref(v_a_2842_);
lean_dec(v_a_2841_);
lean_dec_ref(v_a_2840_);
lean_dec(v_a_2839_);
return v_res_2847_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2(lean_object* v_cls_2848_, lean_object* v_msg_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_){
_start:
{
lean_object* v___x_2858_; 
v___x_2858_ = l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___redArg(v_cls_2848_, v_msg_2849_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_);
return v___x_2858_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___boxed(lean_object* v_cls_2859_, lean_object* v_msg_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_){
_start:
{
lean_object* v_res_2869_; 
v_res_2869_ = l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2(v_cls_2859_, v_msg_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_, v___y_2867_);
lean_dec(v___y_2867_);
lean_dec_ref(v___y_2866_);
lean_dec(v___y_2865_);
lean_dec_ref(v___y_2864_);
lean_dec(v___y_2863_);
lean_dec_ref(v___y_2862_);
lean_dec(v___y_2861_);
return v_res_2869_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze(lean_object* v_t_2870_, lean_object* v_expectedType_x3f_2871_, lean_object* v_a_2872_, lean_object* v_a_2873_, lean_object* v_a_2874_, lean_object* v_a_2875_, lean_object* v_a_2876_, lean_object* v_a_2877_){
_start:
{
lean_object* v_max_x3f_2880_; lean_object* v___y_2881_; lean_object* v___y_2882_; lean_object* v___y_2883_; lean_object* v___y_2884_; lean_object* v___y_2885_; lean_object* v___y_2886_; lean_object* v___y_2910_; lean_object* v___y_2911_; lean_object* v___y_2912_; lean_object* v___y_2913_; lean_object* v___y_2914_; lean_object* v___y_2915_; 
if (lean_obj_tag(v_expectedType_x3f_2871_) == 0)
{
v___y_2910_ = v_a_2872_;
v___y_2911_ = v_a_2873_;
v___y_2912_ = v_a_2874_;
v___y_2913_ = v_a_2875_;
v___y_2914_ = v_a_2876_;
v___y_2915_ = v_a_2877_;
goto v___jp_2909_;
}
else
{
lean_object* v_val_2917_; lean_object* v___x_2919_; uint8_t v_isShared_2920_; uint8_t v_isSharedCheck_2928_; 
v_val_2917_ = lean_ctor_get(v_expectedType_x3f_2871_, 0);
v_isSharedCheck_2928_ = !lean_is_exclusive(v_expectedType_x3f_2871_);
if (v_isSharedCheck_2928_ == 0)
{
v___x_2919_ = v_expectedType_x3f_2871_;
v_isShared_2920_ = v_isSharedCheck_2928_;
goto v_resetjp_2918_;
}
else
{
lean_inc(v_val_2917_);
lean_dec(v_expectedType_x3f_2871_);
v___x_2919_ = lean_box(0);
v_isShared_2920_ = v_isSharedCheck_2928_;
goto v_resetjp_2918_;
}
v_resetjp_2918_:
{
lean_object* v___x_2921_; lean_object* v_a_2922_; lean_object* v___x_2923_; uint8_t v___x_2924_; 
v___x_2921_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__1___redArg(v_val_2917_, v_a_2875_);
v_a_2922_ = lean_ctor_get(v___x_2921_, 0);
lean_inc(v_a_2922_);
lean_dec_ref(v___x_2921_);
v___x_2923_ = l_Lean_Expr_cleanupAnnotations(v_a_2922_);
lean_dec(v_a_2922_);
v___x_2924_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_isUnknown(v___x_2923_);
if (v___x_2924_ == 0)
{
lean_object* v___x_2926_; 
if (v_isShared_2920_ == 0)
{
lean_ctor_set(v___x_2919_, 0, v___x_2923_);
v___x_2926_ = v___x_2919_;
goto v_reusejp_2925_;
}
else
{
lean_object* v_reuseFailAlloc_2927_; 
v_reuseFailAlloc_2927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2927_, 0, v___x_2923_);
v___x_2926_ = v_reuseFailAlloc_2927_;
goto v_reusejp_2925_;
}
v_reusejp_2925_:
{
v_max_x3f_2880_ = v___x_2926_;
v___y_2881_ = v_a_2872_;
v___y_2882_ = v_a_2873_;
v___y_2883_ = v_a_2874_;
v___y_2884_ = v_a_2875_;
v___y_2885_ = v_a_2876_;
v___y_2886_ = v_a_2877_;
goto v___jp_2879_;
}
}
else
{
lean_dec_ref(v___x_2923_);
lean_del_object(v___x_2919_);
v___y_2910_ = v_a_2872_;
v___y_2911_ = v_a_2873_;
v___y_2912_ = v_a_2874_;
v___y_2913_ = v_a_2875_;
v___y_2914_ = v_a_2876_;
v___y_2915_ = v_a_2877_;
goto v___jp_2909_;
}
}
}
v___jp_2879_:
{
uint8_t v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; 
v___x_2887_ = 0;
v___x_2888_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2888_, 0, v_max_x3f_2880_);
lean_ctor_set_uint8(v___x_2888_, sizeof(void*)*1, v___x_2887_);
lean_ctor_set_uint8(v___x_2888_, sizeof(void*)*1 + 1, v___x_2887_);
v___x_2889_ = lean_st_mk_ref(v___x_2888_);
v___x_2890_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go(v_t_2870_, v___x_2889_, v___y_2881_, v___y_2882_, v___y_2883_, v___y_2884_, v___y_2885_, v___y_2886_);
if (lean_obj_tag(v___x_2890_) == 0)
{
lean_object* v___x_2892_; uint8_t v_isShared_2893_; uint8_t v_isSharedCheck_2899_; 
v_isSharedCheck_2899_ = !lean_is_exclusive(v___x_2890_);
if (v_isSharedCheck_2899_ == 0)
{
lean_object* v_unused_2900_; 
v_unused_2900_ = lean_ctor_get(v___x_2890_, 0);
lean_dec(v_unused_2900_);
v___x_2892_ = v___x_2890_;
v_isShared_2893_ = v_isSharedCheck_2899_;
goto v_resetjp_2891_;
}
else
{
lean_dec(v___x_2890_);
v___x_2892_ = lean_box(0);
v_isShared_2893_ = v_isSharedCheck_2899_;
goto v_resetjp_2891_;
}
v_resetjp_2891_:
{
lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2897_; 
v___x_2894_ = lean_st_ref_get(v___x_2889_);
v___x_2895_ = lean_st_ref_get(v___x_2889_);
lean_dec(v___x_2889_);
lean_dec(v___x_2895_);
if (v_isShared_2893_ == 0)
{
lean_ctor_set(v___x_2892_, 0, v___x_2894_);
v___x_2897_ = v___x_2892_;
goto v_reusejp_2896_;
}
else
{
lean_object* v_reuseFailAlloc_2898_; 
v_reuseFailAlloc_2898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2898_, 0, v___x_2894_);
v___x_2897_ = v_reuseFailAlloc_2898_;
goto v_reusejp_2896_;
}
v_reusejp_2896_:
{
return v___x_2897_;
}
}
}
else
{
lean_object* v_a_2901_; lean_object* v___x_2903_; uint8_t v_isShared_2904_; uint8_t v_isSharedCheck_2908_; 
lean_dec(v___x_2889_);
v_a_2901_ = lean_ctor_get(v___x_2890_, 0);
v_isSharedCheck_2908_ = !lean_is_exclusive(v___x_2890_);
if (v_isSharedCheck_2908_ == 0)
{
v___x_2903_ = v___x_2890_;
v_isShared_2904_ = v_isSharedCheck_2908_;
goto v_resetjp_2902_;
}
else
{
lean_inc(v_a_2901_);
lean_dec(v___x_2890_);
v___x_2903_ = lean_box(0);
v_isShared_2904_ = v_isSharedCheck_2908_;
goto v_resetjp_2902_;
}
v_resetjp_2902_:
{
lean_object* v___x_2906_; 
if (v_isShared_2904_ == 0)
{
v___x_2906_ = v___x_2903_;
goto v_reusejp_2905_;
}
else
{
lean_object* v_reuseFailAlloc_2907_; 
v_reuseFailAlloc_2907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2907_, 0, v_a_2901_);
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
v___jp_2909_:
{
lean_object* v___x_2916_; 
v___x_2916_ = lean_box(0);
v_max_x3f_2880_ = v___x_2916_;
v___y_2881_ = v___y_2910_;
v___y_2882_ = v___y_2911_;
v___y_2883_ = v___y_2912_;
v___y_2884_ = v___y_2913_;
v___y_2885_ = v___y_2914_;
v___y_2886_ = v___y_2915_;
goto v___jp_2879_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze___boxed(lean_object* v_t_2929_, lean_object* v_expectedType_x3f_2930_, lean_object* v_a_2931_, lean_object* v_a_2932_, lean_object* v_a_2933_, lean_object* v_a_2934_, lean_object* v_a_2935_, lean_object* v_a_2936_, lean_object* v_a_2937_){
_start:
{
lean_object* v_res_2938_; 
v_res_2938_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze(v_t_2929_, v_expectedType_x3f_2930_, v_a_2931_, v_a_2932_, v_a_2933_, v_a_2934_, v_a_2935_, v_a_2936_);
lean_dec(v_a_2936_);
lean_dec_ref(v_a_2935_);
lean_dec(v_a_2934_);
lean_dec_ref(v_a_2933_);
lean_dec(v_a_2932_);
lean_dec_ref(v_a_2931_);
return v_res_2938_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_mkBinOp(uint8_t v_lazy_2941_, lean_object* v_f_2942_, lean_object* v_lhs_2943_, lean_object* v_rhs_2944_, lean_object* v_a_2945_, lean_object* v_a_2946_, lean_object* v_a_2947_, lean_object* v_a_2948_, lean_object* v_a_2949_, lean_object* v_a_2950_){
_start:
{
lean_object* v_rhs_2953_; lean_object* v___y_2954_; lean_object* v___y_2955_; lean_object* v___y_2956_; lean_object* v___y_2957_; lean_object* v___y_2958_; lean_object* v___y_2959_; 
if (v_lazy_2941_ == 0)
{
v_rhs_2953_ = v_rhs_2944_;
v___y_2954_ = v_a_2945_;
v___y_2955_ = v_a_2946_;
v___y_2956_ = v_a_2947_;
v___y_2957_ = v_a_2948_;
v___y_2958_ = v_a_2949_;
v___y_2959_ = v_a_2950_;
goto v___jp_2952_;
}
else
{
lean_object* v___x_2970_; 
v___x_2970_ = l_Lean_Meta_mkFunUnit___redArg(v_rhs_2944_, v_a_2949_, v_a_2950_);
if (lean_obj_tag(v___x_2970_) == 0)
{
lean_object* v_a_2971_; 
v_a_2971_ = lean_ctor_get(v___x_2970_, 0);
lean_inc(v_a_2971_);
lean_dec_ref_known(v___x_2970_, 1);
v_rhs_2953_ = v_a_2971_;
v___y_2954_ = v_a_2945_;
v___y_2955_ = v_a_2946_;
v___y_2956_ = v_a_2947_;
v___y_2957_ = v_a_2948_;
v___y_2958_ = v_a_2949_;
v___y_2959_ = v_a_2950_;
goto v___jp_2952_;
}
else
{
lean_dec_ref(v_lhs_2943_);
lean_dec_ref(v_f_2942_);
return v___x_2970_;
}
}
v___jp_2952_:
{
lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; uint8_t v___x_2968_; lean_object* v___x_2969_; 
v___x_2960_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_mkBinOp___closed__0));
v___x_2961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2961_, 0, v_lhs_2943_);
v___x_2962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2962_, 0, v_rhs_2953_);
v___x_2963_ = lean_unsigned_to_nat(2u);
v___x_2964_ = lean_mk_empty_array_with_capacity(v___x_2963_);
v___x_2965_ = lean_array_push(v___x_2964_, v___x_2961_);
v___x_2966_ = lean_array_push(v___x_2965_, v___x_2962_);
v___x_2967_ = lean_box(0);
v___x_2968_ = 0;
v___x_2969_ = l_Lean_Elab_Term_elabAppArgs(v_f_2942_, v___x_2960_, v___x_2966_, v___x_2967_, v___x_2968_, v___x_2968_, v___x_2968_, v___y_2954_, v___y_2955_, v___y_2956_, v___y_2957_, v___y_2958_, v___y_2959_);
return v___x_2969_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_mkBinOp___boxed(lean_object* v_lazy_2972_, lean_object* v_f_2973_, lean_object* v_lhs_2974_, lean_object* v_rhs_2975_, lean_object* v_a_2976_, lean_object* v_a_2977_, lean_object* v_a_2978_, lean_object* v_a_2979_, lean_object* v_a_2980_, lean_object* v_a_2981_, lean_object* v_a_2982_){
_start:
{
uint8_t v_lazy_boxed_2983_; lean_object* v_res_2984_; 
v_lazy_boxed_2983_ = lean_unbox(v_lazy_2972_);
v_res_2984_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_mkBinOp(v_lazy_boxed_2983_, v_f_2973_, v_lhs_2974_, v_rhs_2975_, v_a_2976_, v_a_2977_, v_a_2978_, v_a_2979_, v_a_2980_, v_a_2981_);
lean_dec(v_a_2981_);
lean_dec_ref(v_a_2980_);
lean_dec(v_a_2979_);
lean_dec_ref(v_a_2978_);
lean_dec(v_a_2977_);
lean_dec_ref(v_a_2976_);
return v_res_2984_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_mkUnOp(lean_object* v_f_2985_, lean_object* v_arg_2986_, lean_object* v_a_2987_, lean_object* v_a_2988_, lean_object* v_a_2989_, lean_object* v_a_2990_, lean_object* v_a_2991_, lean_object* v_a_2992_){
_start:
{
lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; uint8_t v___x_3000_; lean_object* v___x_3001_; 
v___x_2994_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_mkBinOp___closed__0));
v___x_2995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2995_, 0, v_arg_2986_);
v___x_2996_ = lean_unsigned_to_nat(1u);
v___x_2997_ = lean_mk_empty_array_with_capacity(v___x_2996_);
v___x_2998_ = lean_array_push(v___x_2997_, v___x_2995_);
v___x_2999_ = lean_box(0);
v___x_3000_ = 0;
v___x_3001_ = l_Lean_Elab_Term_elabAppArgs(v_f_2985_, v___x_2994_, v___x_2998_, v___x_2999_, v___x_3000_, v___x_3000_, v___x_3000_, v_a_2987_, v_a_2988_, v_a_2989_, v_a_2990_, v_a_2991_, v_a_2992_);
return v___x_3001_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_mkUnOp___boxed(lean_object* v_f_3002_, lean_object* v_arg_3003_, lean_object* v_a_3004_, lean_object* v_a_3005_, lean_object* v_a_3006_, lean_object* v_a_3007_, lean_object* v_a_3008_, lean_object* v_a_3009_, lean_object* v_a_3010_){
_start:
{
lean_object* v_res_3011_; 
v_res_3011_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_mkUnOp(v_f_3002_, v_arg_3003_, v_a_3004_, v_a_3005_, v_a_3006_, v_a_3007_, v_a_3008_, v_a_3009_);
lean_dec(v_a_3009_);
lean_dec_ref(v_a_3008_);
lean_dec(v_a_3007_);
lean_dec_ref(v_a_3006_);
lean_dec(v_a_3005_);
lean_dec_ref(v_a_3004_);
return v_res_3011_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0_spec__1___redArg___lam__0(lean_object* v___y_3012_, lean_object* v_mkInfoTree_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_, lean_object* v_a_3019_, lean_object* v_a_x3f_3020_){
_start:
{
lean_object* v___x_3022_; lean_object* v_infoState_3023_; lean_object* v_trees_3024_; lean_object* v___x_3025_; 
v___x_3022_ = lean_st_ref_get(v___y_3012_);
v_infoState_3023_ = lean_ctor_get(v___x_3022_, 8);
lean_inc_ref(v_infoState_3023_);
lean_dec(v___x_3022_);
v_trees_3024_ = lean_ctor_get(v_infoState_3023_, 2);
lean_inc_ref(v_trees_3024_);
lean_dec_ref(v_infoState_3023_);
lean_inc(v___y_3012_);
lean_inc_ref(v___y_3018_);
lean_inc(v___y_3017_);
lean_inc_ref(v___y_3016_);
lean_inc(v___y_3015_);
lean_inc_ref(v___y_3014_);
v___x_3025_ = lean_apply_8(v_mkInfoTree_3013_, v_trees_3024_, v___y_3014_, v___y_3015_, v___y_3016_, v___y_3017_, v___y_3018_, v___y_3012_, lean_box(0));
if (lean_obj_tag(v___x_3025_) == 0)
{
lean_object* v_a_3026_; lean_object* v___x_3028_; uint8_t v_isShared_3029_; uint8_t v_isSharedCheck_3065_; 
v_a_3026_ = lean_ctor_get(v___x_3025_, 0);
v_isSharedCheck_3065_ = !lean_is_exclusive(v___x_3025_);
if (v_isSharedCheck_3065_ == 0)
{
v___x_3028_ = v___x_3025_;
v_isShared_3029_ = v_isSharedCheck_3065_;
goto v_resetjp_3027_;
}
else
{
lean_inc(v_a_3026_);
lean_dec(v___x_3025_);
v___x_3028_ = lean_box(0);
v_isShared_3029_ = v_isSharedCheck_3065_;
goto v_resetjp_3027_;
}
v_resetjp_3027_:
{
lean_object* v___x_3030_; lean_object* v_infoState_3031_; lean_object* v_env_3032_; lean_object* v_nextMacroScope_3033_; lean_object* v_ngen_3034_; lean_object* v_auxDeclNGen_3035_; lean_object* v_traceState_3036_; lean_object* v_cache_3037_; lean_object* v_recordedDeps_3038_; lean_object* v_messages_3039_; lean_object* v_snapshotTasks_3040_; lean_object* v___x_3042_; uint8_t v_isShared_3043_; uint8_t v_isSharedCheck_3064_; 
v___x_3030_ = lean_st_ref_take(v___y_3012_);
v_infoState_3031_ = lean_ctor_get(v___x_3030_, 8);
v_env_3032_ = lean_ctor_get(v___x_3030_, 0);
v_nextMacroScope_3033_ = lean_ctor_get(v___x_3030_, 1);
v_ngen_3034_ = lean_ctor_get(v___x_3030_, 2);
v_auxDeclNGen_3035_ = lean_ctor_get(v___x_3030_, 3);
v_traceState_3036_ = lean_ctor_get(v___x_3030_, 4);
v_cache_3037_ = lean_ctor_get(v___x_3030_, 5);
v_recordedDeps_3038_ = lean_ctor_get(v___x_3030_, 6);
v_messages_3039_ = lean_ctor_get(v___x_3030_, 7);
v_snapshotTasks_3040_ = lean_ctor_get(v___x_3030_, 9);
v_isSharedCheck_3064_ = !lean_is_exclusive(v___x_3030_);
if (v_isSharedCheck_3064_ == 0)
{
v___x_3042_ = v___x_3030_;
v_isShared_3043_ = v_isSharedCheck_3064_;
goto v_resetjp_3041_;
}
else
{
lean_inc(v_snapshotTasks_3040_);
lean_inc(v_infoState_3031_);
lean_inc(v_messages_3039_);
lean_inc(v_recordedDeps_3038_);
lean_inc(v_cache_3037_);
lean_inc(v_traceState_3036_);
lean_inc(v_auxDeclNGen_3035_);
lean_inc(v_ngen_3034_);
lean_inc(v_nextMacroScope_3033_);
lean_inc(v_env_3032_);
lean_dec(v___x_3030_);
v___x_3042_ = lean_box(0);
v_isShared_3043_ = v_isSharedCheck_3064_;
goto v_resetjp_3041_;
}
v_resetjp_3041_:
{
uint8_t v_enabled_3044_; lean_object* v_assignment_3045_; lean_object* v_lazyAssignment_3046_; lean_object* v___x_3048_; uint8_t v_isShared_3049_; uint8_t v_isSharedCheck_3062_; 
v_enabled_3044_ = lean_ctor_get_uint8(v_infoState_3031_, sizeof(void*)*3);
v_assignment_3045_ = lean_ctor_get(v_infoState_3031_, 0);
v_lazyAssignment_3046_ = lean_ctor_get(v_infoState_3031_, 1);
v_isSharedCheck_3062_ = !lean_is_exclusive(v_infoState_3031_);
if (v_isSharedCheck_3062_ == 0)
{
lean_object* v_unused_3063_; 
v_unused_3063_ = lean_ctor_get(v_infoState_3031_, 2);
lean_dec(v_unused_3063_);
v___x_3048_ = v_infoState_3031_;
v_isShared_3049_ = v_isSharedCheck_3062_;
goto v_resetjp_3047_;
}
else
{
lean_inc(v_lazyAssignment_3046_);
lean_inc(v_assignment_3045_);
lean_dec(v_infoState_3031_);
v___x_3048_ = lean_box(0);
v_isShared_3049_ = v_isSharedCheck_3062_;
goto v_resetjp_3047_;
}
v_resetjp_3047_:
{
lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3053_; 
v___x_3050_ = lean_box(0);
v___x_3051_ = l_Lean_PersistentArray_push___redArg(v_a_3019_, v_a_3026_);
if (v_isShared_3049_ == 0)
{
lean_ctor_set(v___x_3048_, 2, v___x_3051_);
v___x_3053_ = v___x_3048_;
goto v_reusejp_3052_;
}
else
{
lean_object* v_reuseFailAlloc_3061_; 
v_reuseFailAlloc_3061_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3061_, 0, v_assignment_3045_);
lean_ctor_set(v_reuseFailAlloc_3061_, 1, v_lazyAssignment_3046_);
lean_ctor_set(v_reuseFailAlloc_3061_, 2, v___x_3051_);
lean_ctor_set_uint8(v_reuseFailAlloc_3061_, sizeof(void*)*3, v_enabled_3044_);
v___x_3053_ = v_reuseFailAlloc_3061_;
goto v_reusejp_3052_;
}
v_reusejp_3052_:
{
lean_object* v___x_3055_; 
if (v_isShared_3043_ == 0)
{
lean_ctor_set(v___x_3042_, 8, v___x_3053_);
v___x_3055_ = v___x_3042_;
goto v_reusejp_3054_;
}
else
{
lean_object* v_reuseFailAlloc_3060_; 
v_reuseFailAlloc_3060_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3060_, 0, v_env_3032_);
lean_ctor_set(v_reuseFailAlloc_3060_, 1, v_nextMacroScope_3033_);
lean_ctor_set(v_reuseFailAlloc_3060_, 2, v_ngen_3034_);
lean_ctor_set(v_reuseFailAlloc_3060_, 3, v_auxDeclNGen_3035_);
lean_ctor_set(v_reuseFailAlloc_3060_, 4, v_traceState_3036_);
lean_ctor_set(v_reuseFailAlloc_3060_, 5, v_cache_3037_);
lean_ctor_set(v_reuseFailAlloc_3060_, 6, v_recordedDeps_3038_);
lean_ctor_set(v_reuseFailAlloc_3060_, 7, v_messages_3039_);
lean_ctor_set(v_reuseFailAlloc_3060_, 8, v___x_3053_);
lean_ctor_set(v_reuseFailAlloc_3060_, 9, v_snapshotTasks_3040_);
v___x_3055_ = v_reuseFailAlloc_3060_;
goto v_reusejp_3054_;
}
v_reusejp_3054_:
{
lean_object* v___x_3056_; lean_object* v___x_3058_; 
v___x_3056_ = lean_st_ref_put(v___y_3012_, v___x_3055_);
if (v_isShared_3029_ == 0)
{
lean_ctor_set(v___x_3028_, 0, v___x_3050_);
v___x_3058_ = v___x_3028_;
goto v_reusejp_3057_;
}
else
{
lean_object* v_reuseFailAlloc_3059_; 
v_reuseFailAlloc_3059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3059_, 0, v___x_3050_);
v___x_3058_ = v_reuseFailAlloc_3059_;
goto v_reusejp_3057_;
}
v_reusejp_3057_:
{
return v___x_3058_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3066_; lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3073_; 
lean_dec_ref(v_a_3019_);
v_a_3066_ = lean_ctor_get(v___x_3025_, 0);
v_isSharedCheck_3073_ = !lean_is_exclusive(v___x_3025_);
if (v_isSharedCheck_3073_ == 0)
{
v___x_3068_ = v___x_3025_;
v_isShared_3069_ = v_isSharedCheck_3073_;
goto v_resetjp_3067_;
}
else
{
lean_inc(v_a_3066_);
lean_dec(v___x_3025_);
v___x_3068_ = lean_box(0);
v_isShared_3069_ = v_isSharedCheck_3073_;
goto v_resetjp_3067_;
}
v_resetjp_3067_:
{
lean_object* v___x_3071_; 
if (v_isShared_3069_ == 0)
{
v___x_3071_ = v___x_3068_;
goto v_reusejp_3070_;
}
else
{
lean_object* v_reuseFailAlloc_3072_; 
v_reuseFailAlloc_3072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3072_, 0, v_a_3066_);
v___x_3071_ = v_reuseFailAlloc_3072_;
goto v_reusejp_3070_;
}
v_reusejp_3070_:
{
return v___x_3071_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0_spec__1___redArg___lam__0___boxed(lean_object* v___y_3074_, lean_object* v_mkInfoTree_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_, lean_object* v___y_3080_, lean_object* v_a_3081_, lean_object* v_a_x3f_3082_, lean_object* v___y_3083_){
_start:
{
lean_object* v_res_3084_; 
v_res_3084_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0_spec__1___redArg___lam__0(v___y_3074_, v_mkInfoTree_3075_, v___y_3076_, v___y_3077_, v___y_3078_, v___y_3079_, v___y_3080_, v_a_3081_, v_a_x3f_3082_);
lean_dec(v_a_x3f_3082_);
lean_dec_ref(v___y_3080_);
lean_dec(v___y_3079_);
lean_dec_ref(v___y_3078_);
lean_dec(v___y_3077_);
lean_dec_ref(v___y_3076_);
lean_dec(v___y_3074_);
return v_res_3084_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0_spec__1___redArg(lean_object* v_x_3085_, lean_object* v_mkInfoTree_3086_, lean_object* v___y_3087_, lean_object* v___y_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_, lean_object* v___y_3092_){
_start:
{
lean_object* v___x_3094_; lean_object* v_infoState_3095_; uint8_t v_enabled_3096_; 
v___x_3094_ = lean_st_ref_get(v___y_3092_);
v_infoState_3095_ = lean_ctor_get(v___x_3094_, 8);
lean_inc_ref(v_infoState_3095_);
lean_dec(v___x_3094_);
v_enabled_3096_ = lean_ctor_get_uint8(v_infoState_3095_, sizeof(void*)*3);
lean_dec_ref(v_infoState_3095_);
if (v_enabled_3096_ == 0)
{
lean_object* v___x_3097_; 
lean_dec_ref(v_mkInfoTree_3086_);
lean_inc(v___y_3092_);
lean_inc_ref(v___y_3091_);
lean_inc(v___y_3090_);
lean_inc_ref(v___y_3089_);
lean_inc(v___y_3088_);
lean_inc_ref(v___y_3087_);
v___x_3097_ = lean_apply_7(v_x_3085_, v___y_3087_, v___y_3088_, v___y_3089_, v___y_3090_, v___y_3091_, v___y_3092_, lean_box(0));
return v___x_3097_;
}
else
{
lean_object* v___x_3098_; lean_object* v_a_3099_; lean_object* v_r_3100_; 
v___x_3098_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf_spec__0___redArg(v___y_3092_);
v_a_3099_ = lean_ctor_get(v___x_3098_, 0);
lean_inc(v_a_3099_);
lean_dec_ref(v___x_3098_);
lean_inc(v___y_3092_);
lean_inc_ref(v___y_3091_);
lean_inc(v___y_3090_);
lean_inc_ref(v___y_3089_);
lean_inc(v___y_3088_);
lean_inc_ref(v___y_3087_);
v_r_3100_ = lean_apply_7(v_x_3085_, v___y_3087_, v___y_3088_, v___y_3089_, v___y_3090_, v___y_3091_, v___y_3092_, lean_box(0));
if (lean_obj_tag(v_r_3100_) == 0)
{
lean_object* v_a_3101_; lean_object* v___x_3103_; uint8_t v_isShared_3104_; uint8_t v_isSharedCheck_3125_; 
v_a_3101_ = lean_ctor_get(v_r_3100_, 0);
v_isSharedCheck_3125_ = !lean_is_exclusive(v_r_3100_);
if (v_isSharedCheck_3125_ == 0)
{
v___x_3103_ = v_r_3100_;
v_isShared_3104_ = v_isSharedCheck_3125_;
goto v_resetjp_3102_;
}
else
{
lean_inc(v_a_3101_);
lean_dec(v_r_3100_);
v___x_3103_ = lean_box(0);
v_isShared_3104_ = v_isSharedCheck_3125_;
goto v_resetjp_3102_;
}
v_resetjp_3102_:
{
lean_object* v___x_3106_; 
lean_inc(v_a_3101_);
if (v_isShared_3104_ == 0)
{
lean_ctor_set_tag(v___x_3103_, 1);
v___x_3106_ = v___x_3103_;
goto v_reusejp_3105_;
}
else
{
lean_object* v_reuseFailAlloc_3124_; 
v_reuseFailAlloc_3124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3124_, 0, v_a_3101_);
v___x_3106_ = v_reuseFailAlloc_3124_;
goto v_reusejp_3105_;
}
v_reusejp_3105_:
{
lean_object* v___x_3107_; 
v___x_3107_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0_spec__1___redArg___lam__0(v___y_3092_, v_mkInfoTree_3086_, v___y_3087_, v___y_3088_, v___y_3089_, v___y_3090_, v___y_3091_, v_a_3099_, v___x_3106_);
lean_dec_ref(v___x_3106_);
if (lean_obj_tag(v___x_3107_) == 0)
{
lean_object* v___x_3109_; uint8_t v_isShared_3110_; uint8_t v_isSharedCheck_3114_; 
v_isSharedCheck_3114_ = !lean_is_exclusive(v___x_3107_);
if (v_isSharedCheck_3114_ == 0)
{
lean_object* v_unused_3115_; 
v_unused_3115_ = lean_ctor_get(v___x_3107_, 0);
lean_dec(v_unused_3115_);
v___x_3109_ = v___x_3107_;
v_isShared_3110_ = v_isSharedCheck_3114_;
goto v_resetjp_3108_;
}
else
{
lean_dec(v___x_3107_);
v___x_3109_ = lean_box(0);
v_isShared_3110_ = v_isSharedCheck_3114_;
goto v_resetjp_3108_;
}
v_resetjp_3108_:
{
lean_object* v___x_3112_; 
if (v_isShared_3110_ == 0)
{
lean_ctor_set(v___x_3109_, 0, v_a_3101_);
v___x_3112_ = v___x_3109_;
goto v_reusejp_3111_;
}
else
{
lean_object* v_reuseFailAlloc_3113_; 
v_reuseFailAlloc_3113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3113_, 0, v_a_3101_);
v___x_3112_ = v_reuseFailAlloc_3113_;
goto v_reusejp_3111_;
}
v_reusejp_3111_:
{
return v___x_3112_;
}
}
}
else
{
lean_object* v_a_3116_; lean_object* v___x_3118_; uint8_t v_isShared_3119_; uint8_t v_isSharedCheck_3123_; 
lean_dec(v_a_3101_);
v_a_3116_ = lean_ctor_get(v___x_3107_, 0);
v_isSharedCheck_3123_ = !lean_is_exclusive(v___x_3107_);
if (v_isSharedCheck_3123_ == 0)
{
v___x_3118_ = v___x_3107_;
v_isShared_3119_ = v_isSharedCheck_3123_;
goto v_resetjp_3117_;
}
else
{
lean_inc(v_a_3116_);
lean_dec(v___x_3107_);
v___x_3118_ = lean_box(0);
v_isShared_3119_ = v_isSharedCheck_3123_;
goto v_resetjp_3117_;
}
v_resetjp_3117_:
{
lean_object* v___x_3121_; 
if (v_isShared_3119_ == 0)
{
v___x_3121_ = v___x_3118_;
goto v_reusejp_3120_;
}
else
{
lean_object* v_reuseFailAlloc_3122_; 
v_reuseFailAlloc_3122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3122_, 0, v_a_3116_);
v___x_3121_ = v_reuseFailAlloc_3122_;
goto v_reusejp_3120_;
}
v_reusejp_3120_:
{
return v___x_3121_;
}
}
}
}
}
}
else
{
lean_object* v_a_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; 
v_a_3126_ = lean_ctor_get(v_r_3100_, 0);
lean_inc(v_a_3126_);
lean_dec_ref_known(v_r_3100_, 1);
v___x_3127_ = lean_box(0);
v___x_3128_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0_spec__1___redArg___lam__0(v___y_3092_, v_mkInfoTree_3086_, v___y_3087_, v___y_3088_, v___y_3089_, v___y_3090_, v___y_3091_, v_a_3099_, v___x_3127_);
if (lean_obj_tag(v___x_3128_) == 0)
{
lean_object* v___x_3130_; uint8_t v_isShared_3131_; uint8_t v_isSharedCheck_3135_; 
v_isSharedCheck_3135_ = !lean_is_exclusive(v___x_3128_);
if (v_isSharedCheck_3135_ == 0)
{
lean_object* v_unused_3136_; 
v_unused_3136_ = lean_ctor_get(v___x_3128_, 0);
lean_dec(v_unused_3136_);
v___x_3130_ = v___x_3128_;
v_isShared_3131_ = v_isSharedCheck_3135_;
goto v_resetjp_3129_;
}
else
{
lean_dec(v___x_3128_);
v___x_3130_ = lean_box(0);
v_isShared_3131_ = v_isSharedCheck_3135_;
goto v_resetjp_3129_;
}
v_resetjp_3129_:
{
lean_object* v___x_3133_; 
if (v_isShared_3131_ == 0)
{
lean_ctor_set_tag(v___x_3130_, 1);
lean_ctor_set(v___x_3130_, 0, v_a_3126_);
v___x_3133_ = v___x_3130_;
goto v_reusejp_3132_;
}
else
{
lean_object* v_reuseFailAlloc_3134_; 
v_reuseFailAlloc_3134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3134_, 0, v_a_3126_);
v___x_3133_ = v_reuseFailAlloc_3134_;
goto v_reusejp_3132_;
}
v_reusejp_3132_:
{
return v___x_3133_;
}
}
}
else
{
lean_object* v_a_3137_; lean_object* v___x_3139_; uint8_t v_isShared_3140_; uint8_t v_isSharedCheck_3144_; 
lean_dec(v_a_3126_);
v_a_3137_ = lean_ctor_get(v___x_3128_, 0);
v_isSharedCheck_3144_ = !lean_is_exclusive(v___x_3128_);
if (v_isSharedCheck_3144_ == 0)
{
v___x_3139_ = v___x_3128_;
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
else
{
lean_inc(v_a_3137_);
lean_dec(v___x_3128_);
v___x_3139_ = lean_box(0);
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
v_resetjp_3138_:
{
lean_object* v___x_3142_; 
if (v_isShared_3140_ == 0)
{
v___x_3142_ = v___x_3139_;
goto v_reusejp_3141_;
}
else
{
lean_object* v_reuseFailAlloc_3143_; 
v_reuseFailAlloc_3143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3143_, 0, v_a_3137_);
v___x_3142_ = v_reuseFailAlloc_3143_;
goto v_reusejp_3141_;
}
v_reusejp_3141_:
{
return v___x_3142_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_3145_, lean_object* v_mkInfoTree_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_){
_start:
{
lean_object* v_res_3154_; 
v_res_3154_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0_spec__1___redArg(v_x_3145_, v_mkInfoTree_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_, v___y_3152_);
lean_dec(v___y_3152_);
lean_dec_ref(v___y_3151_);
lean_dec(v___y_3150_);
lean_dec_ref(v___y_3149_);
lean_dec(v___y_3148_);
lean_dec_ref(v___y_3147_);
return v_res_3154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0___redArg___lam__0(lean_object* v_stx_3155_, lean_object* v_output_3156_, lean_object* v_trees_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_){
_start:
{
lean_object* v_lctx_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; 
v_lctx_3165_ = lean_ctor_get(v___y_3160_, 2);
lean_inc_ref(v_lctx_3165_);
v___x_3166_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3166_, 0, v_lctx_3165_);
lean_ctor_set(v___x_3166_, 1, v_stx_3155_);
lean_ctor_set(v___x_3166_, 2, v_output_3156_);
v___x_3167_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3167_, 0, v___x_3166_);
v___x_3168_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3168_, 0, v___x_3167_);
lean_ctor_set(v___x_3168_, 1, v_trees_3157_);
v___x_3169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3169_, 0, v___x_3168_);
return v___x_3169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_stx_3170_, lean_object* v_output_3171_, lean_object* v_trees_3172_, lean_object* v___y_3173_, lean_object* v___y_3174_, lean_object* v___y_3175_, lean_object* v___y_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_, lean_object* v___y_3179_){
_start:
{
lean_object* v_res_3180_; 
v_res_3180_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0___redArg___lam__0(v_stx_3170_, v_output_3171_, v_trees_3172_, v___y_3173_, v___y_3174_, v___y_3175_, v___y_3176_, v___y_3177_, v___y_3178_);
lean_dec(v___y_3178_);
lean_dec_ref(v___y_3177_);
lean_dec(v___y_3176_);
lean_dec_ref(v___y_3175_);
lean_dec(v___y_3174_);
lean_dec_ref(v___y_3173_);
return v_res_3180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0___redArg(lean_object* v_stx_3181_, lean_object* v_output_3182_, lean_object* v_x_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_){
_start:
{
lean_object* v___f_3191_; lean_object* v___x_3192_; 
v___f_3191_ = lean_alloc_closure((void*)(l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0___redArg___lam__0___boxed), 10, 2);
lean_closure_set(v___f_3191_, 0, v_stx_3181_);
lean_closure_set(v___f_3191_, 1, v_output_3182_);
v___x_3192_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0_spec__1___redArg(v_x_3183_, v___f_3191_, v___y_3184_, v___y_3185_, v___y_3186_, v___y_3187_, v___y_3188_, v___y_3189_);
return v___x_3192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0___redArg___boxed(lean_object* v_stx_3193_, lean_object* v_output_3194_, lean_object* v_x_3195_, lean_object* v___y_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_, lean_object* v___y_3202_){
_start:
{
lean_object* v_res_3203_; 
v_res_3203_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0___redArg(v_stx_3193_, v_output_3194_, v_x_3195_, v___y_3196_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_);
lean_dec(v___y_3201_);
lean_dec_ref(v___y_3200_);
lean_dec(v___y_3199_);
lean_dec_ref(v___y_3198_);
lean_dec(v___y_3197_);
lean_dec_ref(v___y_3196_);
return v_res_3203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0___redArg(lean_object* v_beforeStx_3204_, lean_object* v_afterStx_3205_, lean_object* v_x_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_){
_start:
{
lean_object* v___x_3214_; lean_object* v___x_3215_; 
lean_inc(v_afterStx_3205_);
lean_inc(v_beforeStx_3204_);
v___x_3214_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withPushMacroExpansionStack___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go_spec__0___boxed), 11, 4);
lean_closure_set(v___x_3214_, 0, lean_box(0));
lean_closure_set(v___x_3214_, 1, v_beforeStx_3204_);
lean_closure_set(v___x_3214_, 2, v_afterStx_3205_);
lean_closure_set(v___x_3214_, 3, v_x_3206_);
v___x_3215_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0___redArg(v_beforeStx_3204_, v_afterStx_3205_, v___x_3214_, v___y_3207_, v___y_3208_, v___y_3209_, v___y_3210_, v___y_3211_, v___y_3212_);
if (lean_obj_tag(v___x_3215_) == 0)
{
lean_object* v_a_3216_; lean_object* v___x_3218_; uint8_t v_isShared_3219_; uint8_t v_isSharedCheck_3223_; 
v_a_3216_ = lean_ctor_get(v___x_3215_, 0);
v_isSharedCheck_3223_ = !lean_is_exclusive(v___x_3215_);
if (v_isSharedCheck_3223_ == 0)
{
v___x_3218_ = v___x_3215_;
v_isShared_3219_ = v_isSharedCheck_3223_;
goto v_resetjp_3217_;
}
else
{
lean_inc(v_a_3216_);
lean_dec(v___x_3215_);
v___x_3218_ = lean_box(0);
v_isShared_3219_ = v_isSharedCheck_3223_;
goto v_resetjp_3217_;
}
v_resetjp_3217_:
{
lean_object* v___x_3221_; 
if (v_isShared_3219_ == 0)
{
v___x_3221_ = v___x_3218_;
goto v_reusejp_3220_;
}
else
{
lean_object* v_reuseFailAlloc_3222_; 
v_reuseFailAlloc_3222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3222_, 0, v_a_3216_);
v___x_3221_ = v_reuseFailAlloc_3222_;
goto v_reusejp_3220_;
}
v_reusejp_3220_:
{
return v___x_3221_;
}
}
}
else
{
lean_object* v_a_3224_; lean_object* v___x_3226_; uint8_t v_isShared_3227_; uint8_t v_isSharedCheck_3231_; 
v_a_3224_ = lean_ctor_get(v___x_3215_, 0);
v_isSharedCheck_3231_ = !lean_is_exclusive(v___x_3215_);
if (v_isSharedCheck_3231_ == 0)
{
v___x_3226_ = v___x_3215_;
v_isShared_3227_ = v_isSharedCheck_3231_;
goto v_resetjp_3225_;
}
else
{
lean_inc(v_a_3224_);
lean_dec(v___x_3215_);
v___x_3226_ = lean_box(0);
v_isShared_3227_ = v_isSharedCheck_3231_;
goto v_resetjp_3225_;
}
v_resetjp_3225_:
{
lean_object* v___x_3229_; 
if (v_isShared_3227_ == 0)
{
v___x_3229_ = v___x_3226_;
goto v_reusejp_3228_;
}
else
{
lean_object* v_reuseFailAlloc_3230_; 
v_reuseFailAlloc_3230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3230_, 0, v_a_3224_);
v___x_3229_ = v_reuseFailAlloc_3230_;
goto v_reusejp_3228_;
}
v_reusejp_3228_:
{
return v___x_3229_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0___redArg___boxed(lean_object* v_beforeStx_3232_, lean_object* v_afterStx_3233_, lean_object* v_x_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_){
_start:
{
lean_object* v_res_3242_; 
v_res_3242_ = l_Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0___redArg(v_beforeStx_3232_, v_afterStx_3233_, v_x_3234_, v___y_3235_, v___y_3236_, v___y_3237_, v___y_3238_, v___y_3239_, v___y_3240_);
lean_dec(v___y_3240_);
lean_dec_ref(v___y_3239_);
lean_dec(v___y_3238_);
lean_dec_ref(v___y_3237_);
lean_dec(v___y_3236_);
lean_dec_ref(v___y_3235_);
return v_res_3242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0(lean_object* v_00_u03b1_3243_, lean_object* v_beforeStx_3244_, lean_object* v_afterStx_3245_, lean_object* v_x_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_, lean_object* v___y_3250_, lean_object* v___y_3251_, lean_object* v___y_3252_){
_start:
{
lean_object* v___x_3254_; 
v___x_3254_ = l_Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0___redArg(v_beforeStx_3244_, v_afterStx_3245_, v_x_3246_, v___y_3247_, v___y_3248_, v___y_3249_, v___y_3250_, v___y_3251_, v___y_3252_);
return v___x_3254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0___boxed(lean_object* v_00_u03b1_3255_, lean_object* v_beforeStx_3256_, lean_object* v_afterStx_3257_, lean_object* v_x_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_){
_start:
{
lean_object* v_res_3266_; 
v_res_3266_ = l_Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0(v_00_u03b1_3255_, v_beforeStx_3256_, v_afterStx_3257_, v_x_3258_, v___y_3259_, v___y_3260_, v___y_3261_, v___y_3262_, v___y_3263_, v___y_3264_);
lean_dec(v___y_3264_);
lean_dec_ref(v___y_3263_);
lean_dec(v___y_3262_);
lean_dec_ref(v___y_3261_);
lean_dec(v___y_3260_);
lean_dec_ref(v___y_3259_);
return v_res_3266_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore___lam__0(lean_object* v_lhs_3267_, lean_object* v_rhs_3268_, uint8_t v_kind_3269_, lean_object* v_f_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_){
_start:
{
lean_object* v___x_3278_; 
v___x_3278_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore(v_lhs_3267_, v___y_3271_, v___y_3272_, v___y_3273_, v___y_3274_, v___y_3275_, v___y_3276_);
if (lean_obj_tag(v___x_3278_) == 0)
{
lean_object* v_a_3279_; lean_object* v___x_3280_; 
v_a_3279_ = lean_ctor_get(v___x_3278_, 0);
lean_inc(v_a_3279_);
lean_dec_ref_known(v___x_3278_, 1);
v___x_3280_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore(v_rhs_3268_, v___y_3271_, v___y_3272_, v___y_3273_, v___y_3274_, v___y_3275_, v___y_3276_);
if (lean_obj_tag(v___x_3280_) == 0)
{
lean_object* v_a_3281_; uint8_t v___x_3282_; uint8_t v___x_3283_; lean_object* v___x_3284_; 
v_a_3281_ = lean_ctor_get(v___x_3280_, 0);
lean_inc(v_a_3281_);
lean_dec_ref_known(v___x_3280_, 1);
v___x_3282_ = 1;
v___x_3283_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_instBEqBinOpKind_beq(v_kind_3269_, v___x_3282_);
v___x_3284_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_mkBinOp(v___x_3283_, v_f_3270_, v_a_3279_, v_a_3281_, v___y_3271_, v___y_3272_, v___y_3273_, v___y_3274_, v___y_3275_, v___y_3276_);
return v___x_3284_;
}
else
{
lean_dec(v_a_3279_);
lean_dec_ref(v_f_3270_);
return v___x_3280_;
}
}
else
{
lean_dec_ref(v_f_3270_);
lean_dec_ref(v_rhs_3268_);
return v___x_3278_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore___lam__0___boxed(lean_object* v_lhs_3285_, lean_object* v_rhs_3286_, lean_object* v_kind_3287_, lean_object* v_f_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_, lean_object* v___y_3295_){
_start:
{
uint8_t v_kind_7882__boxed_3296_; lean_object* v_res_3297_; 
v_kind_7882__boxed_3296_ = lean_unbox(v_kind_3287_);
v_res_3297_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore___lam__0(v_lhs_3285_, v_rhs_3286_, v_kind_7882__boxed_3296_, v_f_3288_, v___y_3289_, v___y_3290_, v___y_3291_, v___y_3292_, v___y_3293_, v___y_3294_);
lean_dec(v___y_3294_);
lean_dec_ref(v___y_3293_);
lean_dec(v___y_3292_);
lean_dec_ref(v___y_3291_);
lean_dec(v___y_3290_);
lean_dec_ref(v___y_3289_);
return v_res_3297_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore___lam__1___boxed(lean_object* v_arg_3298_, lean_object* v_f_3299_, lean_object* v___y_3300_, lean_object* v___y_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_){
_start:
{
lean_object* v_res_3307_; 
v_res_3307_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore___lam__1(v_arg_3298_, v_f_3299_, v___y_3300_, v___y_3301_, v___y_3302_, v___y_3303_, v___y_3304_, v___y_3305_);
lean_dec(v___y_3305_);
lean_dec_ref(v___y_3304_);
lean_dec(v___y_3303_);
lean_dec_ref(v___y_3302_);
lean_dec(v___y_3301_);
lean_dec_ref(v___y_3300_);
return v_res_3307_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore___boxed(lean_object* v_t_3308_, lean_object* v_a_3309_, lean_object* v_a_3310_, lean_object* v_a_3311_, lean_object* v_a_3312_, lean_object* v_a_3313_, lean_object* v_a_3314_, lean_object* v_a_3315_){
_start:
{
lean_object* v_res_3316_; 
v_res_3316_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore(v_t_3308_, v_a_3309_, v_a_3310_, v_a_3311_, v_a_3312_, v_a_3313_, v_a_3314_);
lean_dec(v_a_3314_);
lean_dec_ref(v_a_3313_);
lean_dec(v_a_3312_);
lean_dec_ref(v_a_3311_);
lean_dec(v_a_3310_);
lean_dec_ref(v_a_3309_);
return v_res_3316_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore(lean_object* v_t_3317_, lean_object* v_a_3318_, lean_object* v_a_3319_, lean_object* v_a_3320_, lean_object* v_a_3321_, lean_object* v_a_3322_, lean_object* v_a_3323_){
_start:
{
switch(lean_obj_tag(v_t_3317_))
{
case 0:
{
lean_object* v_infoTrees_3325_; lean_object* v_val_3326_; lean_object* v___x_3327_; lean_object* v_infoState_3328_; lean_object* v_env_3329_; lean_object* v_nextMacroScope_3330_; lean_object* v_ngen_3331_; lean_object* v_auxDeclNGen_3332_; lean_object* v_traceState_3333_; lean_object* v_cache_3334_; lean_object* v_recordedDeps_3335_; lean_object* v_messages_3336_; lean_object* v_snapshotTasks_3337_; lean_object* v___x_3339_; uint8_t v_isShared_3340_; uint8_t v_isSharedCheck_3358_; 
v_infoTrees_3325_ = lean_ctor_get(v_t_3317_, 1);
lean_inc_ref(v_infoTrees_3325_);
v_val_3326_ = lean_ctor_get(v_t_3317_, 2);
lean_inc_ref(v_val_3326_);
lean_dec_ref_known(v_t_3317_, 3);
v___x_3327_ = lean_st_ref_take(v_a_3323_);
v_infoState_3328_ = lean_ctor_get(v___x_3327_, 8);
v_env_3329_ = lean_ctor_get(v___x_3327_, 0);
v_nextMacroScope_3330_ = lean_ctor_get(v___x_3327_, 1);
v_ngen_3331_ = lean_ctor_get(v___x_3327_, 2);
v_auxDeclNGen_3332_ = lean_ctor_get(v___x_3327_, 3);
v_traceState_3333_ = lean_ctor_get(v___x_3327_, 4);
v_cache_3334_ = lean_ctor_get(v___x_3327_, 5);
v_recordedDeps_3335_ = lean_ctor_get(v___x_3327_, 6);
v_messages_3336_ = lean_ctor_get(v___x_3327_, 7);
v_snapshotTasks_3337_ = lean_ctor_get(v___x_3327_, 9);
v_isSharedCheck_3358_ = !lean_is_exclusive(v___x_3327_);
if (v_isSharedCheck_3358_ == 0)
{
v___x_3339_ = v___x_3327_;
v_isShared_3340_ = v_isSharedCheck_3358_;
goto v_resetjp_3338_;
}
else
{
lean_inc(v_snapshotTasks_3337_);
lean_inc(v_infoState_3328_);
lean_inc(v_messages_3336_);
lean_inc(v_recordedDeps_3335_);
lean_inc(v_cache_3334_);
lean_inc(v_traceState_3333_);
lean_inc(v_auxDeclNGen_3332_);
lean_inc(v_ngen_3331_);
lean_inc(v_nextMacroScope_3330_);
lean_inc(v_env_3329_);
lean_dec(v___x_3327_);
v___x_3339_ = lean_box(0);
v_isShared_3340_ = v_isSharedCheck_3358_;
goto v_resetjp_3338_;
}
v_resetjp_3338_:
{
uint8_t v_enabled_3341_; lean_object* v_assignment_3342_; lean_object* v_lazyAssignment_3343_; lean_object* v_trees_3344_; lean_object* v___x_3346_; uint8_t v_isShared_3347_; uint8_t v_isSharedCheck_3357_; 
v_enabled_3341_ = lean_ctor_get_uint8(v_infoState_3328_, sizeof(void*)*3);
v_assignment_3342_ = lean_ctor_get(v_infoState_3328_, 0);
v_lazyAssignment_3343_ = lean_ctor_get(v_infoState_3328_, 1);
v_trees_3344_ = lean_ctor_get(v_infoState_3328_, 2);
v_isSharedCheck_3357_ = !lean_is_exclusive(v_infoState_3328_);
if (v_isSharedCheck_3357_ == 0)
{
v___x_3346_ = v_infoState_3328_;
v_isShared_3347_ = v_isSharedCheck_3357_;
goto v_resetjp_3345_;
}
else
{
lean_inc(v_trees_3344_);
lean_inc(v_lazyAssignment_3343_);
lean_inc(v_assignment_3342_);
lean_dec(v_infoState_3328_);
v___x_3346_ = lean_box(0);
v_isShared_3347_ = v_isSharedCheck_3357_;
goto v_resetjp_3345_;
}
v_resetjp_3345_:
{
lean_object* v___x_3348_; lean_object* v___x_3350_; 
v___x_3348_ = l_Lean_PersistentArray_append___redArg(v_trees_3344_, v_infoTrees_3325_);
lean_dec_ref(v_infoTrees_3325_);
if (v_isShared_3347_ == 0)
{
lean_ctor_set(v___x_3346_, 2, v___x_3348_);
v___x_3350_ = v___x_3346_;
goto v_reusejp_3349_;
}
else
{
lean_object* v_reuseFailAlloc_3356_; 
v_reuseFailAlloc_3356_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3356_, 0, v_assignment_3342_);
lean_ctor_set(v_reuseFailAlloc_3356_, 1, v_lazyAssignment_3343_);
lean_ctor_set(v_reuseFailAlloc_3356_, 2, v___x_3348_);
lean_ctor_set_uint8(v_reuseFailAlloc_3356_, sizeof(void*)*3, v_enabled_3341_);
v___x_3350_ = v_reuseFailAlloc_3356_;
goto v_reusejp_3349_;
}
v_reusejp_3349_:
{
lean_object* v___x_3352_; 
if (v_isShared_3340_ == 0)
{
lean_ctor_set(v___x_3339_, 8, v___x_3350_);
v___x_3352_ = v___x_3339_;
goto v_reusejp_3351_;
}
else
{
lean_object* v_reuseFailAlloc_3355_; 
v_reuseFailAlloc_3355_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3355_, 0, v_env_3329_);
lean_ctor_set(v_reuseFailAlloc_3355_, 1, v_nextMacroScope_3330_);
lean_ctor_set(v_reuseFailAlloc_3355_, 2, v_ngen_3331_);
lean_ctor_set(v_reuseFailAlloc_3355_, 3, v_auxDeclNGen_3332_);
lean_ctor_set(v_reuseFailAlloc_3355_, 4, v_traceState_3333_);
lean_ctor_set(v_reuseFailAlloc_3355_, 5, v_cache_3334_);
lean_ctor_set(v_reuseFailAlloc_3355_, 6, v_recordedDeps_3335_);
lean_ctor_set(v_reuseFailAlloc_3355_, 7, v_messages_3336_);
lean_ctor_set(v_reuseFailAlloc_3355_, 8, v___x_3350_);
lean_ctor_set(v_reuseFailAlloc_3355_, 9, v_snapshotTasks_3337_);
v___x_3352_ = v_reuseFailAlloc_3355_;
goto v_reusejp_3351_;
}
v_reusejp_3351_:
{
lean_object* v___x_3353_; lean_object* v___x_3354_; 
v___x_3353_ = lean_st_ref_put(v_a_3323_, v___x_3352_);
v___x_3354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3354_, 0, v_val_3326_);
return v___x_3354_;
}
}
}
}
}
case 1:
{
lean_object* v_ref_3359_; uint8_t v_kind_3360_; lean_object* v_f_3361_; lean_object* v_lhs_3362_; lean_object* v_rhs_3363_; lean_object* v_toCold_3364_; lean_object* v_currRecDepth_3365_; lean_object* v_ref_3366_; uint16_t v_optionFlags_3367_; uint8_t v_suppressElabErrors_3368_; uint8_t v_checkDeprecated_3369_; uint8_t v_isRecordingDeps_3370_; lean_object* v___x_3371_; lean_object* v___f_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; uint8_t v___x_3375_; lean_object* v_ref_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; 
v_ref_3359_ = lean_ctor_get(v_t_3317_, 0);
lean_inc(v_ref_3359_);
v_kind_3360_ = lean_ctor_get_uint8(v_t_3317_, sizeof(void*)*4);
v_f_3361_ = lean_ctor_get(v_t_3317_, 1);
lean_inc_ref(v_f_3361_);
v_lhs_3362_ = lean_ctor_get(v_t_3317_, 2);
lean_inc_ref(v_lhs_3362_);
v_rhs_3363_ = lean_ctor_get(v_t_3317_, 3);
lean_inc_ref(v_rhs_3363_);
lean_dec_ref_known(v_t_3317_, 4);
v_toCold_3364_ = lean_ctor_get(v_a_3322_, 0);
v_currRecDepth_3365_ = lean_ctor_get(v_a_3322_, 1);
v_ref_3366_ = lean_ctor_get(v_a_3322_, 2);
v_optionFlags_3367_ = lean_ctor_get_uint16(v_a_3322_, sizeof(void*)*3);
v_suppressElabErrors_3368_ = lean_ctor_get_uint8(v_a_3322_, sizeof(void*)*3 + 2);
v_checkDeprecated_3369_ = lean_ctor_get_uint8(v_a_3322_, sizeof(void*)*3 + 3);
v_isRecordingDeps_3370_ = lean_ctor_get_uint8(v_a_3322_, sizeof(void*)*3 + 4);
v___x_3371_ = lean_box(v_kind_3360_);
v___f_3372_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore___lam__0___boxed), 11, 4);
lean_closure_set(v___f_3372_, 0, v_lhs_3362_);
lean_closure_set(v___f_3372_, 1, v_rhs_3363_);
lean_closure_set(v___f_3372_, 2, v___x_3371_);
lean_closure_set(v___f_3372_, 3, v_f_3361_);
v___x_3373_ = lean_box(0);
v___x_3374_ = lean_box(0);
v___x_3375_ = 0;
v_ref_3376_ = l_Lean_replaceRef(v_ref_3359_, v_ref_3366_);
lean_inc(v_currRecDepth_3365_);
lean_inc_ref(v_toCold_3364_);
v___x_3377_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_3377_, 0, v_toCold_3364_);
lean_ctor_set(v___x_3377_, 1, v_currRecDepth_3365_);
lean_ctor_set(v___x_3377_, 2, v_ref_3376_);
lean_ctor_set_uint16(v___x_3377_, sizeof(void*)*3, v_optionFlags_3367_);
lean_ctor_set_uint8(v___x_3377_, sizeof(void*)*3 + 2, v_suppressElabErrors_3368_);
lean_ctor_set_uint8(v___x_3377_, sizeof(void*)*3 + 3, v_checkDeprecated_3369_);
lean_ctor_set_uint8(v___x_3377_, sizeof(void*)*3 + 4, v_isRecordingDeps_3370_);
v___x_3378_ = l_Lean_Elab_Term_withTermInfoContext_x27(v___x_3373_, v_ref_3359_, v___f_3372_, v___x_3374_, v___x_3374_, v___x_3375_, v___x_3375_, v_a_3318_, v_a_3319_, v_a_3320_, v_a_3321_, v___x_3377_, v_a_3323_);
lean_dec_ref_known(v___x_3377_, 3);
return v___x_3378_;
}
case 2:
{
lean_object* v_ref_3379_; lean_object* v_f_3380_; lean_object* v_arg_3381_; lean_object* v_toCold_3382_; lean_object* v_currRecDepth_3383_; lean_object* v_ref_3384_; uint16_t v_optionFlags_3385_; uint8_t v_suppressElabErrors_3386_; uint8_t v_checkDeprecated_3387_; uint8_t v_isRecordingDeps_3388_; lean_object* v___f_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; uint8_t v___x_3392_; lean_object* v_ref_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; 
v_ref_3379_ = lean_ctor_get(v_t_3317_, 0);
lean_inc(v_ref_3379_);
v_f_3380_ = lean_ctor_get(v_t_3317_, 1);
lean_inc_ref(v_f_3380_);
v_arg_3381_ = lean_ctor_get(v_t_3317_, 2);
lean_inc_ref(v_arg_3381_);
lean_dec_ref_known(v_t_3317_, 3);
v_toCold_3382_ = lean_ctor_get(v_a_3322_, 0);
v_currRecDepth_3383_ = lean_ctor_get(v_a_3322_, 1);
v_ref_3384_ = lean_ctor_get(v_a_3322_, 2);
v_optionFlags_3385_ = lean_ctor_get_uint16(v_a_3322_, sizeof(void*)*3);
v_suppressElabErrors_3386_ = lean_ctor_get_uint8(v_a_3322_, sizeof(void*)*3 + 2);
v_checkDeprecated_3387_ = lean_ctor_get_uint8(v_a_3322_, sizeof(void*)*3 + 3);
v_isRecordingDeps_3388_ = lean_ctor_get_uint8(v_a_3322_, sizeof(void*)*3 + 4);
v___f_3389_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore___lam__1___boxed), 9, 2);
lean_closure_set(v___f_3389_, 0, v_arg_3381_);
lean_closure_set(v___f_3389_, 1, v_f_3380_);
v___x_3390_ = lean_box(0);
v___x_3391_ = lean_box(0);
v___x_3392_ = 0;
v_ref_3393_ = l_Lean_replaceRef(v_ref_3379_, v_ref_3384_);
lean_inc(v_currRecDepth_3383_);
lean_inc_ref(v_toCold_3382_);
v___x_3394_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_3394_, 0, v_toCold_3382_);
lean_ctor_set(v___x_3394_, 1, v_currRecDepth_3383_);
lean_ctor_set(v___x_3394_, 2, v_ref_3393_);
lean_ctor_set_uint16(v___x_3394_, sizeof(void*)*3, v_optionFlags_3385_);
lean_ctor_set_uint8(v___x_3394_, sizeof(void*)*3 + 2, v_suppressElabErrors_3386_);
lean_ctor_set_uint8(v___x_3394_, sizeof(void*)*3 + 3, v_checkDeprecated_3387_);
lean_ctor_set_uint8(v___x_3394_, sizeof(void*)*3 + 4, v_isRecordingDeps_3388_);
v___x_3395_ = l_Lean_Elab_Term_withTermInfoContext_x27(v___x_3390_, v_ref_3379_, v___f_3389_, v___x_3391_, v___x_3391_, v___x_3392_, v___x_3392_, v_a_3318_, v_a_3319_, v_a_3320_, v_a_3321_, v___x_3394_, v_a_3323_);
lean_dec_ref_known(v___x_3394_, 3);
return v___x_3395_;
}
default: 
{
lean_object* v_macroName_3396_; lean_object* v_stx_3397_; lean_object* v_stx_x27_3398_; lean_object* v_nested_3399_; lean_object* v_toCold_3400_; lean_object* v_currRecDepth_3401_; lean_object* v_ref_3402_; uint16_t v_optionFlags_3403_; uint8_t v_suppressElabErrors_3404_; uint8_t v_checkDeprecated_3405_; uint8_t v_isRecordingDeps_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; uint8_t v___x_3410_; lean_object* v_ref_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; 
v_macroName_3396_ = lean_ctor_get(v_t_3317_, 0);
lean_inc(v_macroName_3396_);
v_stx_3397_ = lean_ctor_get(v_t_3317_, 1);
lean_inc_n(v_stx_3397_, 2);
v_stx_x27_3398_ = lean_ctor_get(v_t_3317_, 2);
lean_inc(v_stx_x27_3398_);
v_nested_3399_ = lean_ctor_get(v_t_3317_, 3);
lean_inc_ref(v_nested_3399_);
lean_dec_ref_known(v_t_3317_, 4);
v_toCold_3400_ = lean_ctor_get(v_a_3322_, 0);
v_currRecDepth_3401_ = lean_ctor_get(v_a_3322_, 1);
v_ref_3402_ = lean_ctor_get(v_a_3322_, 2);
v_optionFlags_3403_ = lean_ctor_get_uint16(v_a_3322_, sizeof(void*)*3);
v_suppressElabErrors_3404_ = lean_ctor_get_uint8(v_a_3322_, sizeof(void*)*3 + 2);
v_checkDeprecated_3405_ = lean_ctor_get_uint8(v_a_3322_, sizeof(void*)*3 + 3);
v_isRecordingDeps_3406_ = lean_ctor_get_uint8(v_a_3322_, sizeof(void*)*3 + 4);
v___x_3407_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore___boxed), 8, 1);
lean_closure_set(v___x_3407_, 0, v_nested_3399_);
v___x_3408_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0___boxed), 11, 4);
lean_closure_set(v___x_3408_, 0, lean_box(0));
lean_closure_set(v___x_3408_, 1, v_stx_3397_);
lean_closure_set(v___x_3408_, 2, v_stx_x27_3398_);
lean_closure_set(v___x_3408_, 3, v___x_3407_);
v___x_3409_ = lean_box(0);
v___x_3410_ = 0;
v_ref_3411_ = l_Lean_replaceRef(v_stx_3397_, v_ref_3402_);
lean_inc(v_currRecDepth_3401_);
lean_inc_ref(v_toCold_3400_);
v___x_3412_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_3412_, 0, v_toCold_3400_);
lean_ctor_set(v___x_3412_, 1, v_currRecDepth_3401_);
lean_ctor_set(v___x_3412_, 2, v_ref_3411_);
lean_ctor_set_uint16(v___x_3412_, sizeof(void*)*3, v_optionFlags_3403_);
lean_ctor_set_uint8(v___x_3412_, sizeof(void*)*3 + 2, v_suppressElabErrors_3404_);
lean_ctor_set_uint8(v___x_3412_, sizeof(void*)*3 + 3, v_checkDeprecated_3405_);
lean_ctor_set_uint8(v___x_3412_, sizeof(void*)*3 + 4, v_isRecordingDeps_3406_);
v___x_3413_ = l_Lean_Elab_Term_withTermInfoContext_x27(v_macroName_3396_, v_stx_3397_, v___x_3408_, v___x_3409_, v___x_3409_, v___x_3410_, v___x_3410_, v_a_3318_, v_a_3319_, v_a_3320_, v_a_3321_, v___x_3412_, v_a_3323_);
lean_dec_ref_known(v___x_3412_, 3);
return v___x_3413_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore___lam__1(lean_object* v_arg_3414_, lean_object* v_f_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_){
_start:
{
lean_object* v___x_3423_; 
v___x_3423_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore(v_arg_3414_, v___y_3416_, v___y_3417_, v___y_3418_, v___y_3419_, v___y_3420_, v___y_3421_);
if (lean_obj_tag(v___x_3423_) == 0)
{
lean_object* v_a_3424_; lean_object* v___x_3425_; 
v_a_3424_ = lean_ctor_get(v___x_3423_, 0);
lean_inc(v_a_3424_);
lean_dec_ref_known(v___x_3423_, 1);
v___x_3425_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_mkUnOp(v_f_3415_, v_a_3424_, v___y_3416_, v___y_3417_, v___y_3418_, v___y_3419_, v___y_3420_, v___y_3421_);
return v___x_3425_;
}
else
{
lean_dec_ref(v_f_3415_);
return v___x_3423_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0(lean_object* v_00_u03b1_3426_, lean_object* v_stx_3427_, lean_object* v_output_3428_, lean_object* v_x_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_){
_start:
{
lean_object* v___x_3437_; 
v___x_3437_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0___redArg(v_stx_3427_, v_output_3428_, v_x_3429_, v___y_3430_, v___y_3431_, v___y_3432_, v___y_3433_, v___y_3434_, v___y_3435_);
return v___x_3437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0___boxed(lean_object* v_00_u03b1_3438_, lean_object* v_stx_3439_, lean_object* v_output_3440_, lean_object* v_x_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_){
_start:
{
lean_object* v_res_3449_; 
v_res_3449_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0(v_00_u03b1_3438_, v_stx_3439_, v_output_3440_, v_x_3441_, v___y_3442_, v___y_3443_, v___y_3444_, v___y_3445_, v___y_3446_, v___y_3447_);
lean_dec(v___y_3447_);
lean_dec_ref(v___y_3446_);
lean_dec(v___y_3445_);
lean_dec_ref(v___y_3444_);
lean_dec(v___y_3443_);
lean_dec_ref(v___y_3442_);
return v_res_3449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_3450_, lean_object* v_x_3451_, lean_object* v_mkInfoTree_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_, lean_object* v___y_3455_, lean_object* v___y_3456_, lean_object* v___y_3457_, lean_object* v___y_3458_){
_start:
{
lean_object* v___x_3460_; 
v___x_3460_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0_spec__1___redArg(v_x_3451_, v_mkInfoTree_3452_, v___y_3453_, v___y_3454_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_);
return v___x_3460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_3461_, lean_object* v_x_3462_, lean_object* v_mkInfoTree_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_){
_start:
{
lean_object* v_res_3471_; 
v_res_3471_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore_spec__0_spec__0_spec__1(v_00_u03b1_3461_, v_x_3462_, v_mkInfoTree_3463_, v___y_3464_, v___y_3465_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_);
lean_dec(v___y_3469_);
lean_dec_ref(v___y_3468_);
lean_dec(v___y_3467_);
lean_dec_ref(v___y_3466_);
lean_dec(v___y_3465_);
lean_dec_ref(v___y_3464_);
return v_res_3471_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Meta_getDefaultInstances___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__0_spec__0(lean_object* v___x_3472_, uint8_t v___x_3473_, lean_object* v_a_3474_, lean_object* v_a_3475_){
_start:
{
if (lean_obj_tag(v_a_3474_) == 0)
{
lean_object* v___x_3476_; 
lean_dec_ref(v___x_3472_);
v___x_3476_ = l_List_reverse___redArg(v_a_3475_);
return v___x_3476_;
}
else
{
lean_object* v_head_3477_; lean_object* v_tail_3478_; lean_object* v___x_3480_; uint8_t v_isShared_3481_; uint8_t v_isSharedCheck_3489_; 
v_head_3477_ = lean_ctor_get(v_a_3474_, 0);
v_tail_3478_ = lean_ctor_get(v_a_3474_, 1);
v_isSharedCheck_3489_ = !lean_is_exclusive(v_a_3474_);
if (v_isSharedCheck_3489_ == 0)
{
v___x_3480_ = v_a_3474_;
v_isShared_3481_ = v_isSharedCheck_3489_;
goto v_resetjp_3479_;
}
else
{
lean_inc(v_tail_3478_);
lean_inc(v_head_3477_);
lean_dec(v_a_3474_);
v___x_3480_ = lean_box(0);
v_isShared_3481_ = v_isSharedCheck_3489_;
goto v_resetjp_3479_;
}
v_resetjp_3479_:
{
lean_object* v_fst_3482_; uint8_t v___x_3483_; 
v_fst_3482_ = lean_ctor_get(v_head_3477_, 0);
lean_inc(v_fst_3482_);
lean_inc_ref(v___x_3472_);
v___x_3483_ = l_Lean_Environment_contains(v___x_3472_, v_fst_3482_, v___x_3473_);
if (v___x_3483_ == 0)
{
lean_del_object(v___x_3480_);
lean_dec(v_head_3477_);
v_a_3474_ = v_tail_3478_;
goto _start;
}
else
{
lean_object* v___x_3486_; 
if (v_isShared_3481_ == 0)
{
lean_ctor_set(v___x_3480_, 1, v_a_3475_);
v___x_3486_ = v___x_3480_;
goto v_reusejp_3485_;
}
else
{
lean_object* v_reuseFailAlloc_3488_; 
v_reuseFailAlloc_3488_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3488_, 0, v_head_3477_);
lean_ctor_set(v_reuseFailAlloc_3488_, 1, v_a_3475_);
v___x_3486_ = v_reuseFailAlloc_3488_;
goto v_reusejp_3485_;
}
v_reusejp_3485_:
{
v_a_3474_ = v_tail_3478_;
v_a_3475_ = v___x_3486_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Meta_getDefaultInstances___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__0_spec__0___boxed(lean_object* v___x_3490_, lean_object* v___x_3491_, lean_object* v_a_3492_, lean_object* v_a_3493_){
_start:
{
uint8_t v___x_5498__boxed_3494_; lean_object* v_res_3495_; 
v___x_5498__boxed_3494_ = lean_unbox(v___x_3491_);
v_res_3495_ = l_List_filterTR_loop___at___00Lean_Meta_getDefaultInstances___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__0_spec__0(v___x_3490_, v___x_5498__boxed_3494_, v_a_3492_, v_a_3493_);
return v_res_3495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__0___redArg(lean_object* v_className_3496_, lean_object* v___y_3497_){
_start:
{
lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v_env_3501_; lean_object* v___y_3503_; lean_object* v___x_3509_; lean_object* v_toEnvExtension_3510_; lean_object* v_asyncMode_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v_defaultInstances_3514_; lean_object* v___x_3515_; 
v___x_3499_ = l_Lean_Meta_instInhabitedDefaultInstances_default;
v___x_3500_ = lean_st_ref_get(v___y_3497_);
v_env_3501_ = lean_ctor_get(v___x_3500_, 0);
lean_inc_ref_n(v_env_3501_, 2);
lean_dec(v___x_3500_);
v___x_3509_ = l_Lean_Meta_defaultInstanceExtension;
v_toEnvExtension_3510_ = lean_ctor_get(v___x_3509_, 0);
v_asyncMode_3511_ = lean_ctor_get(v_toEnvExtension_3510_, 2);
v___x_3512_ = lean_box(0);
v___x_3513_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3499_, v___x_3509_, v_env_3501_, v_asyncMode_3511_, v___x_3512_);
v_defaultInstances_3514_ = lean_ctor_get(v___x_3513_, 0);
lean_inc(v_defaultInstances_3514_);
lean_dec(v___x_3513_);
v___x_3515_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_defaultInstances_3514_, v_className_3496_);
lean_dec(v_defaultInstances_3514_);
if (lean_obj_tag(v___x_3515_) == 0)
{
lean_object* v___x_3516_; 
v___x_3516_ = lean_box(0);
v___y_3503_ = v___x_3516_;
goto v___jp_3502_;
}
else
{
lean_object* v_val_3517_; 
v_val_3517_ = lean_ctor_get(v___x_3515_, 0);
lean_inc(v_val_3517_);
lean_dec_ref_known(v___x_3515_, 1);
v___y_3503_ = v_val_3517_;
goto v___jp_3502_;
}
v___jp_3502_:
{
uint8_t v_isExporting_3504_; 
v_isExporting_3504_ = lean_ctor_get_uint8(v_env_3501_, sizeof(void*)*13);
if (v_isExporting_3504_ == 0)
{
lean_object* v___x_3505_; 
lean_dec_ref(v_env_3501_);
v___x_3505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3505_, 0, v___y_3503_);
return v___x_3505_;
}
else
{
lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; 
v___x_3506_ = lean_box(0);
v___x_3507_ = l_List_filterTR_loop___at___00Lean_Meta_getDefaultInstances___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__0_spec__0(v_env_3501_, v_isExporting_3504_, v___y_3503_, v___x_3506_);
v___x_3508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3508_, 0, v___x_3507_);
return v___x_3508_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__0___redArg___boxed(lean_object* v_className_3518_, lean_object* v___y_3519_, lean_object* v___y_3520_){
_start:
{
lean_object* v_res_3521_; 
v_res_3521_ = l_Lean_Meta_getDefaultInstances___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__0___redArg(v_className_3518_, v___y_3519_);
lean_dec(v___y_3519_);
lean_dec(v_className_3518_);
return v_res_3521_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__6_spec__7___redArg(lean_object* v_msg_3522_, lean_object* v_declHint_3523_, lean_object* v___y_3524_){
_start:
{
lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v_env_3528_; uint8_t v___x_3529_; 
v___x_3526_ = lean_box(0);
v___x_3527_ = lean_st_ref_get(v___y_3524_);
v_env_3528_ = lean_ctor_get(v___x_3527_, 0);
lean_inc_ref(v_env_3528_);
lean_dec(v___x_3527_);
v___x_3529_ = l_Lean_Name_isAnonymous(v_declHint_3523_);
if (v___x_3529_ == 0)
{
uint8_t v_isExporting_3530_; 
v_isExporting_3530_ = lean_ctor_get_uint8(v_env_3528_, sizeof(void*)*13);
if (v_isExporting_3530_ == 0)
{
lean_object* v___x_3531_; 
lean_dec_ref(v_env_3528_);
lean_dec(v_declHint_3523_);
v___x_3531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3531_, 0, v_msg_3522_);
return v___x_3531_;
}
else
{
lean_object* v___x_3532_; uint8_t v___x_3533_; 
lean_inc_ref(v_env_3528_);
v___x_3532_ = l_Lean_Environment_setExporting(v_env_3528_, v___x_3529_);
lean_inc(v_declHint_3523_);
lean_inc_ref(v___x_3532_);
v___x_3533_ = l_Lean_Environment_contains(v___x_3532_, v_declHint_3523_, v_isExporting_3530_);
if (v___x_3533_ == 0)
{
lean_object* v___x_3534_; 
lean_dec_ref(v___x_3532_);
lean_dec_ref(v_env_3528_);
lean_dec(v_declHint_3523_);
v___x_3534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3534_, 0, v_msg_3522_);
return v___x_3534_;
}
else
{
lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v_c_3542_; lean_object* v___x_3543_; 
v___x_3535_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__2);
v___x_3536_ = lean_unsigned_to_nat(32u);
v___x_3537_ = lean_mk_empty_array_with_capacity(v___x_3536_);
lean_dec_ref(v___x_3537_);
v___x_3538_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__5);
v___x_3539_ = l_Lean_Options_empty;
lean_inc_ref(v___x_3532_);
v___x_3540_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3540_, 0, v___x_3532_);
lean_ctor_set(v___x_3540_, 1, v___x_3535_);
lean_ctor_set(v___x_3540_, 2, v___x_3538_);
lean_ctor_set(v___x_3540_, 3, v___x_3539_);
lean_inc(v_declHint_3523_);
v___x_3541_ = l_Lean_MessageData_ofConstName(v_declHint_3523_, v___x_3529_);
v_c_3542_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_3542_, 0, v___x_3540_);
lean_ctor_set(v_c_3542_, 1, v___x_3541_);
v___x_3543_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_3532_, v_declHint_3523_);
lean_dec_ref(v___x_3532_);
if (lean_obj_tag(v___x_3543_) == 0)
{
lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; 
lean_dec_ref(v_env_3528_);
lean_dec(v_declHint_3523_);
v___x_3544_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__7);
v___x_3545_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3545_, 0, v___x_3544_);
lean_ctor_set(v___x_3545_, 1, v_c_3542_);
v___x_3546_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__9);
v___x_3547_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3547_, 0, v___x_3545_);
lean_ctor_set(v___x_3547_, 1, v___x_3546_);
v___x_3548_ = l_Lean_MessageData_note(v___x_3547_);
v___x_3549_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3549_, 0, v_msg_3522_);
lean_ctor_set(v___x_3549_, 1, v___x_3548_);
v___x_3550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3550_, 0, v___x_3549_);
return v___x_3550_;
}
else
{
lean_object* v_val_3551_; lean_object* v___x_3553_; uint8_t v_isShared_3554_; uint8_t v_isSharedCheck_3585_; 
v_val_3551_ = lean_ctor_get(v___x_3543_, 0);
v_isSharedCheck_3585_ = !lean_is_exclusive(v___x_3543_);
if (v_isSharedCheck_3585_ == 0)
{
v___x_3553_ = v___x_3543_;
v_isShared_3554_ = v_isSharedCheck_3585_;
goto v_resetjp_3552_;
}
else
{
lean_inc(v_val_3551_);
lean_dec(v___x_3543_);
v___x_3553_ = lean_box(0);
v_isShared_3554_ = v_isSharedCheck_3585_;
goto v_resetjp_3552_;
}
v_resetjp_3552_:
{
lean_object* v___x_3555_; lean_object* v_moduleNames_3556_; lean_object* v_mod_3557_; uint8_t v___x_3558_; 
v___x_3555_ = l_Lean_Environment_header(v_env_3528_);
lean_dec_ref(v_env_3528_);
v_moduleNames_3556_ = lean_ctor_get(v___x_3555_, 4);
lean_inc_ref(v_moduleNames_3556_);
lean_dec_ref(v___x_3555_);
v_mod_3557_ = lean_array_get(v___x_3526_, v_moduleNames_3556_, v_val_3551_);
lean_dec(v_val_3551_);
lean_dec_ref(v_moduleNames_3556_);
v___x_3558_ = l_Lean_isPrivateName(v_declHint_3523_);
lean_dec(v_declHint_3523_);
if (v___x_3558_ == 0)
{
lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3570_; 
v___x_3559_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__11);
v___x_3560_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3560_, 0, v___x_3559_);
lean_ctor_set(v___x_3560_, 1, v_c_3542_);
v___x_3561_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__13);
v___x_3562_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3562_, 0, v___x_3560_);
lean_ctor_set(v___x_3562_, 1, v___x_3561_);
v___x_3563_ = l_Lean_MessageData_ofName(v_mod_3557_);
v___x_3564_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3564_, 0, v___x_3562_);
lean_ctor_set(v___x_3564_, 1, v___x_3563_);
v___x_3565_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__15);
v___x_3566_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3566_, 0, v___x_3564_);
lean_ctor_set(v___x_3566_, 1, v___x_3565_);
v___x_3567_ = l_Lean_MessageData_note(v___x_3566_);
v___x_3568_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3568_, 0, v_msg_3522_);
lean_ctor_set(v___x_3568_, 1, v___x_3567_);
if (v_isShared_3554_ == 0)
{
lean_ctor_set_tag(v___x_3553_, 0);
lean_ctor_set(v___x_3553_, 0, v___x_3568_);
v___x_3570_ = v___x_3553_;
goto v_reusejp_3569_;
}
else
{
lean_object* v_reuseFailAlloc_3571_; 
v_reuseFailAlloc_3571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3571_, 0, v___x_3568_);
v___x_3570_ = v_reuseFailAlloc_3571_;
goto v_reusejp_3569_;
}
v_reusejp_3569_:
{
return v___x_3570_;
}
}
else
{
lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3583_; 
v___x_3572_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__7);
v___x_3573_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3573_, 0, v___x_3572_);
lean_ctor_set(v___x_3573_, 1, v_c_3542_);
v___x_3574_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__17);
v___x_3575_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3575_, 0, v___x_3573_);
lean_ctor_set(v___x_3575_, 1, v___x_3574_);
v___x_3576_ = l_Lean_MessageData_ofName(v_mod_3557_);
v___x_3577_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3577_, 0, v___x_3575_);
lean_ctor_set(v___x_3577_, 1, v___x_3576_);
v___x_3578_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2_spec__2_spec__4_spec__5___redArg___closed__19);
v___x_3579_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3579_, 0, v___x_3577_);
lean_ctor_set(v___x_3579_, 1, v___x_3578_);
v___x_3580_ = l_Lean_MessageData_note(v___x_3579_);
v___x_3581_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3581_, 0, v_msg_3522_);
lean_ctor_set(v___x_3581_, 1, v___x_3580_);
if (v_isShared_3554_ == 0)
{
lean_ctor_set_tag(v___x_3553_, 0);
lean_ctor_set(v___x_3553_, 0, v___x_3581_);
v___x_3583_ = v___x_3553_;
goto v_reusejp_3582_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v___x_3581_);
v___x_3583_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3582_;
}
v_reusejp_3582_:
{
return v___x_3583_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3586_; 
lean_dec_ref(v_env_3528_);
lean_dec(v_declHint_3523_);
v___x_3586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3586_, 0, v_msg_3522_);
return v___x_3586_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__6_spec__7___redArg___boxed(lean_object* v_msg_3587_, lean_object* v_declHint_3588_, lean_object* v___y_3589_, lean_object* v___y_3590_){
_start:
{
lean_object* v_res_3591_; 
v_res_3591_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__6_spec__7___redArg(v_msg_3587_, v_declHint_3588_, v___y_3589_);
lean_dec(v___y_3589_);
return v_res_3591_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__6(lean_object* v_msg_3592_, lean_object* v_declHint_3593_, lean_object* v___y_3594_, lean_object* v___y_3595_, lean_object* v___y_3596_, lean_object* v___y_3597_){
_start:
{
lean_object* v___x_3599_; lean_object* v_a_3600_; lean_object* v___x_3602_; uint8_t v_isShared_3603_; uint8_t v_isSharedCheck_3609_; 
v___x_3599_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__6_spec__7___redArg(v_msg_3592_, v_declHint_3593_, v___y_3597_);
v_a_3600_ = lean_ctor_get(v___x_3599_, 0);
v_isSharedCheck_3609_ = !lean_is_exclusive(v___x_3599_);
if (v_isSharedCheck_3609_ == 0)
{
v___x_3602_ = v___x_3599_;
v_isShared_3603_ = v_isSharedCheck_3609_;
goto v_resetjp_3601_;
}
else
{
lean_inc(v_a_3600_);
lean_dec(v___x_3599_);
v___x_3602_ = lean_box(0);
v_isShared_3603_ = v_isSharedCheck_3609_;
goto v_resetjp_3601_;
}
v_resetjp_3601_:
{
lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3607_; 
v___x_3604_ = l_Lean_unknownIdentifierMessageTag;
v___x_3605_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3605_, 0, v___x_3604_);
lean_ctor_set(v___x_3605_, 1, v_a_3600_);
if (v_isShared_3603_ == 0)
{
lean_ctor_set(v___x_3602_, 0, v___x_3605_);
v___x_3607_ = v___x_3602_;
goto v_reusejp_3606_;
}
else
{
lean_object* v_reuseFailAlloc_3608_; 
v_reuseFailAlloc_3608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3608_, 0, v___x_3605_);
v___x_3607_ = v_reuseFailAlloc_3608_;
goto v_reusejp_3606_;
}
v_reusejp_3606_:
{
return v___x_3607_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__6___boxed(lean_object* v_msg_3610_, lean_object* v_declHint_3611_, lean_object* v___y_3612_, lean_object* v___y_3613_, lean_object* v___y_3614_, lean_object* v___y_3615_, lean_object* v___y_3616_){
_start:
{
lean_object* v_res_3617_; 
v_res_3617_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__6(v_msg_3610_, v_declHint_3611_, v___y_3612_, v___y_3613_, v___y_3614_, v___y_3615_);
lean_dec(v___y_3615_);
lean_dec_ref(v___y_3614_);
lean_dec(v___y_3613_);
lean_dec_ref(v___y_3612_);
return v_res_3617_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__7_spec__9___redArg(lean_object* v_msg_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_, lean_object* v___y_3622_){
_start:
{
lean_object* v_ref_3624_; lean_object* v___x_3625_; lean_object* v_a_3626_; lean_object* v___x_3628_; uint8_t v_isShared_3629_; uint8_t v_isSharedCheck_3634_; 
v_ref_3624_ = lean_ctor_get(v___y_3621_, 2);
v___x_3625_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__0(v_msg_3618_, v___y_3619_, v___y_3620_, v___y_3621_, v___y_3622_);
v_a_3626_ = lean_ctor_get(v___x_3625_, 0);
v_isSharedCheck_3634_ = !lean_is_exclusive(v___x_3625_);
if (v_isSharedCheck_3634_ == 0)
{
v___x_3628_ = v___x_3625_;
v_isShared_3629_ = v_isSharedCheck_3634_;
goto v_resetjp_3627_;
}
else
{
lean_inc(v_a_3626_);
lean_dec(v___x_3625_);
v___x_3628_ = lean_box(0);
v_isShared_3629_ = v_isSharedCheck_3634_;
goto v_resetjp_3627_;
}
v_resetjp_3627_:
{
lean_object* v___x_3630_; lean_object* v___x_3632_; 
lean_inc(v_ref_3624_);
v___x_3630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3630_, 0, v_ref_3624_);
lean_ctor_set(v___x_3630_, 1, v_a_3626_);
if (v_isShared_3629_ == 0)
{
lean_ctor_set_tag(v___x_3628_, 1);
lean_ctor_set(v___x_3628_, 0, v___x_3630_);
v___x_3632_ = v___x_3628_;
goto v_reusejp_3631_;
}
else
{
lean_object* v_reuseFailAlloc_3633_; 
v_reuseFailAlloc_3633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3633_, 0, v___x_3630_);
v___x_3632_ = v_reuseFailAlloc_3633_;
goto v_reusejp_3631_;
}
v_reusejp_3631_:
{
return v___x_3632_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__7_spec__9___redArg___boxed(lean_object* v_msg_3635_, lean_object* v___y_3636_, lean_object* v___y_3637_, lean_object* v___y_3638_, lean_object* v___y_3639_, lean_object* v___y_3640_){
_start:
{
lean_object* v_res_3641_; 
v_res_3641_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__7_spec__9___redArg(v_msg_3635_, v___y_3636_, v___y_3637_, v___y_3638_, v___y_3639_);
lean_dec(v___y_3639_);
lean_dec_ref(v___y_3638_);
lean_dec(v___y_3637_);
lean_dec_ref(v___y_3636_);
return v_res_3641_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__7___redArg(lean_object* v_ref_3642_, lean_object* v_msg_3643_, lean_object* v___y_3644_, lean_object* v___y_3645_, lean_object* v___y_3646_, lean_object* v___y_3647_){
_start:
{
lean_object* v_toCold_3649_; lean_object* v_currRecDepth_3650_; lean_object* v_ref_3651_; uint16_t v_optionFlags_3652_; uint8_t v_suppressElabErrors_3653_; uint8_t v_checkDeprecated_3654_; uint8_t v_isRecordingDeps_3655_; lean_object* v_ref_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; 
v_toCold_3649_ = lean_ctor_get(v___y_3646_, 0);
v_currRecDepth_3650_ = lean_ctor_get(v___y_3646_, 1);
v_ref_3651_ = lean_ctor_get(v___y_3646_, 2);
v_optionFlags_3652_ = lean_ctor_get_uint16(v___y_3646_, sizeof(void*)*3);
v_suppressElabErrors_3653_ = lean_ctor_get_uint8(v___y_3646_, sizeof(void*)*3 + 2);
v_checkDeprecated_3654_ = lean_ctor_get_uint8(v___y_3646_, sizeof(void*)*3 + 3);
v_isRecordingDeps_3655_ = lean_ctor_get_uint8(v___y_3646_, sizeof(void*)*3 + 4);
v_ref_3656_ = l_Lean_replaceRef(v_ref_3642_, v_ref_3651_);
lean_inc(v_currRecDepth_3650_);
lean_inc_ref(v_toCold_3649_);
v___x_3657_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_3657_, 0, v_toCold_3649_);
lean_ctor_set(v___x_3657_, 1, v_currRecDepth_3650_);
lean_ctor_set(v___x_3657_, 2, v_ref_3656_);
lean_ctor_set_uint16(v___x_3657_, sizeof(void*)*3, v_optionFlags_3652_);
lean_ctor_set_uint8(v___x_3657_, sizeof(void*)*3 + 2, v_suppressElabErrors_3653_);
lean_ctor_set_uint8(v___x_3657_, sizeof(void*)*3 + 3, v_checkDeprecated_3654_);
lean_ctor_set_uint8(v___x_3657_, sizeof(void*)*3 + 4, v_isRecordingDeps_3655_);
v___x_3658_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__7_spec__9___redArg(v_msg_3643_, v___y_3644_, v___y_3645_, v___x_3657_, v___y_3647_);
lean_dec_ref_known(v___x_3657_, 3);
return v___x_3658_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__7___redArg___boxed(lean_object* v_ref_3659_, lean_object* v_msg_3660_, lean_object* v___y_3661_, lean_object* v___y_3662_, lean_object* v___y_3663_, lean_object* v___y_3664_, lean_object* v___y_3665_){
_start:
{
lean_object* v_res_3666_; 
v_res_3666_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__7___redArg(v_ref_3659_, v_msg_3660_, v___y_3661_, v___y_3662_, v___y_3663_, v___y_3664_);
lean_dec(v___y_3664_);
lean_dec_ref(v___y_3663_);
lean_dec(v___y_3662_);
lean_dec_ref(v___y_3661_);
lean_dec(v_ref_3659_);
return v_res_3666_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5___redArg(lean_object* v_ref_3667_, lean_object* v_msg_3668_, lean_object* v_declHint_3669_, lean_object* v___y_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_){
_start:
{
lean_object* v___x_3675_; lean_object* v_a_3676_; lean_object* v___x_3677_; 
v___x_3675_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__6(v_msg_3668_, v_declHint_3669_, v___y_3670_, v___y_3671_, v___y_3672_, v___y_3673_);
v_a_3676_ = lean_ctor_get(v___x_3675_, 0);
lean_inc(v_a_3676_);
lean_dec_ref(v___x_3675_);
v___x_3677_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__7___redArg(v_ref_3667_, v_a_3676_, v___y_3670_, v___y_3671_, v___y_3672_, v___y_3673_);
return v___x_3677_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5___redArg___boxed(lean_object* v_ref_3678_, lean_object* v_msg_3679_, lean_object* v_declHint_3680_, lean_object* v___y_3681_, lean_object* v___y_3682_, lean_object* v___y_3683_, lean_object* v___y_3684_, lean_object* v___y_3685_){
_start:
{
lean_object* v_res_3686_; 
v_res_3686_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5___redArg(v_ref_3678_, v_msg_3679_, v_declHint_3680_, v___y_3681_, v___y_3682_, v___y_3683_, v___y_3684_);
lean_dec(v___y_3684_);
lean_dec_ref(v___y_3683_);
lean_dec(v___y_3682_);
lean_dec_ref(v___y_3681_);
lean_dec(v_ref_3678_);
return v_res_3686_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3___redArg(lean_object* v_ref_3687_, lean_object* v_constName_3688_, lean_object* v___y_3689_, lean_object* v___y_3690_, lean_object* v___y_3691_, lean_object* v___y_3692_){
_start:
{
lean_object* v___x_3694_; uint8_t v___x_3695_; lean_object* v___x_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; 
v___x_3694_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___closed__1);
v___x_3695_ = 0;
lean_inc(v_constName_3688_);
v___x_3696_ = l_Lean_MessageData_ofConstName(v_constName_3688_, v___x_3695_);
v___x_3697_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3697_, 0, v___x_3694_);
lean_ctor_set(v___x_3697_, 1, v___x_3696_);
v___x_3698_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg___closed__3);
v___x_3699_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3699_, 0, v___x_3697_);
lean_ctor_set(v___x_3699_, 1, v___x_3698_);
v___x_3700_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5___redArg(v_ref_3687_, v___x_3699_, v_constName_3688_, v___y_3689_, v___y_3690_, v___y_3691_, v___y_3692_);
return v___x_3700_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_ref_3701_, lean_object* v_constName_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_, lean_object* v___y_3707_){
_start:
{
lean_object* v_res_3708_; 
v_res_3708_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3___redArg(v_ref_3701_, v_constName_3702_, v___y_3703_, v___y_3704_, v___y_3705_, v___y_3706_);
lean_dec(v___y_3706_);
lean_dec_ref(v___y_3705_);
lean_dec(v___y_3704_);
lean_dec_ref(v___y_3703_);
lean_dec(v_ref_3701_);
return v_res_3708_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2___redArg(lean_object* v_constName_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_){
_start:
{
lean_object* v_ref_3715_; lean_object* v___x_3716_; 
v_ref_3715_ = lean_ctor_get(v___y_3712_, 2);
v___x_3716_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3___redArg(v_ref_3715_, v_constName_3709_, v___y_3710_, v___y_3711_, v___y_3712_, v___y_3713_);
return v___x_3716_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2___redArg___boxed(lean_object* v_constName_3717_, lean_object* v___y_3718_, lean_object* v___y_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_, lean_object* v___y_3722_){
_start:
{
lean_object* v_res_3723_; 
v_res_3723_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2___redArg(v_constName_3717_, v___y_3718_, v___y_3719_, v___y_3720_, v___y_3721_);
lean_dec(v___y_3721_);
lean_dec_ref(v___y_3720_);
lean_dec(v___y_3719_);
lean_dec_ref(v___y_3718_);
return v_res_3723_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1(lean_object* v_constName_3724_, lean_object* v___y_3725_, lean_object* v___y_3726_, lean_object* v___y_3727_, lean_object* v___y_3728_){
_start:
{
lean_object* v___x_3730_; lean_object* v_env_3731_; uint8_t v___x_3732_; lean_object* v___x_3733_; 
v___x_3730_ = lean_st_ref_get(v___y_3728_);
v_env_3731_ = lean_ctor_get(v___x_3730_, 0);
lean_inc_ref(v_env_3731_);
lean_dec(v___x_3730_);
v___x_3732_ = 0;
lean_inc(v_constName_3724_);
v___x_3733_ = l_Lean_Environment_find_x3f(v_env_3731_, v_constName_3724_, v___x_3732_);
if (lean_obj_tag(v___x_3733_) == 0)
{
lean_object* v___x_3734_; 
v___x_3734_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2___redArg(v_constName_3724_, v___y_3725_, v___y_3726_, v___y_3727_, v___y_3728_);
return v___x_3734_;
}
else
{
lean_object* v_val_3735_; lean_object* v___x_3737_; uint8_t v_isShared_3738_; uint8_t v_isSharedCheck_3742_; 
lean_dec(v_constName_3724_);
v_val_3735_ = lean_ctor_get(v___x_3733_, 0);
v_isSharedCheck_3742_ = !lean_is_exclusive(v___x_3733_);
if (v_isSharedCheck_3742_ == 0)
{
v___x_3737_ = v___x_3733_;
v_isShared_3738_ = v_isSharedCheck_3742_;
goto v_resetjp_3736_;
}
else
{
lean_inc(v_val_3735_);
lean_dec(v___x_3733_);
v___x_3737_ = lean_box(0);
v_isShared_3738_ = v_isSharedCheck_3742_;
goto v_resetjp_3736_;
}
v_resetjp_3736_:
{
lean_object* v___x_3740_; 
if (v_isShared_3738_ == 0)
{
lean_ctor_set_tag(v___x_3737_, 0);
v___x_3740_ = v___x_3737_;
goto v_reusejp_3739_;
}
else
{
lean_object* v_reuseFailAlloc_3741_; 
v_reuseFailAlloc_3741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3741_, 0, v_val_3735_);
v___x_3740_ = v_reuseFailAlloc_3741_;
goto v_reusejp_3739_;
}
v_reusejp_3739_:
{
return v___x_3740_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1___boxed(lean_object* v_constName_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_, lean_object* v___y_3748_){
_start:
{
lean_object* v_res_3749_; 
v_res_3749_ = l_Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1(v_constName_3743_, v___y_3744_, v___y_3745_, v___y_3746_, v___y_3747_);
lean_dec(v___y_3747_);
lean_dec_ref(v___y_3746_);
lean_dec(v___y_3745_);
lean_dec_ref(v___y_3744_);
return v_res_3749_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__2___redArg(lean_object* v_declName_3759_, uint8_t v_lhs_3760_, lean_object* v_as_x27_3761_, lean_object* v_b_3762_, lean_object* v___y_3763_, lean_object* v___y_3764_, lean_object* v___y_3765_, lean_object* v___y_3766_){
_start:
{
if (lean_obj_tag(v_as_x27_3761_) == 0)
{
lean_object* v___x_3768_; 
v___x_3768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3768_, 0, v_b_3762_);
return v___x_3768_;
}
else
{
lean_object* v_head_3769_; lean_object* v_tail_3770_; lean_object* v_fst_3771_; lean_object* v___x_3775_; lean_object* v___x_3776_; 
lean_dec_ref(v_b_3762_);
v_head_3769_ = lean_ctor_get(v_as_x27_3761_, 0);
v_tail_3770_ = lean_ctor_get(v_as_x27_3761_, 1);
v_fst_3771_ = lean_ctor_get(v_head_3769_, 0);
v___x_3775_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__2___redArg___closed__2));
lean_inc(v_fst_3771_);
v___x_3776_ = l_Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1(v_fst_3771_, v___y_3763_, v___y_3764_, v___y_3765_, v___y_3766_);
if (lean_obj_tag(v___x_3776_) == 0)
{
lean_object* v_a_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; 
v_a_3777_ = lean_ctor_get(v___x_3776_, 0);
lean_inc(v_a_3777_);
lean_dec_ref_known(v___x_3776_, 1);
v___x_3778_ = l_Lean_ConstantInfo_type(v_a_3777_);
lean_dec(v_a_3777_);
v___x_3779_ = l_Lean_Expr_getForallBody(v___x_3778_);
lean_dec_ref(v___x_3778_);
if (lean_obj_tag(v___x_3779_) == 5)
{
lean_object* v_fn_3780_; 
v_fn_3780_ = lean_ctor_get(v___x_3779_, 0);
lean_inc_ref(v_fn_3780_);
lean_dec_ref_known(v___x_3779_, 2);
if (lean_obj_tag(v_fn_3780_) == 5)
{
lean_object* v_fn_3781_; 
v_fn_3781_ = lean_ctor_get(v_fn_3780_, 0);
lean_inc_ref(v_fn_3781_);
if (lean_obj_tag(v_fn_3781_) == 5)
{
lean_object* v_arg_3782_; lean_object* v_arg_3783_; uint8_t v___y_3788_; 
v_arg_3782_ = lean_ctor_get(v_fn_3780_, 1);
lean_inc_ref(v_arg_3782_);
lean_dec_ref_known(v_fn_3780_, 2);
v_arg_3783_ = lean_ctor_get(v_fn_3781_, 1);
lean_inc_ref(v_arg_3783_);
lean_dec_ref_known(v_fn_3781_, 2);
if (v_lhs_3760_ == 0)
{
lean_dec_ref(v_arg_3782_);
v___y_3788_ = v_lhs_3760_;
goto v___jp_3787_;
}
else
{
uint8_t v___x_3790_; 
v___x_3790_ = l_Lean_Expr_isAppOf(v_arg_3782_, v_declName_3759_);
lean_dec_ref(v_arg_3782_);
if (v___x_3790_ == 0)
{
v___y_3788_ = v___x_3790_;
goto v___jp_3787_;
}
else
{
lean_dec_ref(v_arg_3783_);
goto v___jp_3772_;
}
}
v___jp_3784_:
{
uint8_t v___x_3785_; 
v___x_3785_ = l_Lean_Expr_isAppOf(v_arg_3783_, v_declName_3759_);
lean_dec_ref(v_arg_3783_);
if (v___x_3785_ == 0)
{
v_as_x27_3761_ = v_tail_3770_;
v_b_3762_ = v___x_3775_;
goto _start;
}
else
{
goto v___jp_3772_;
}
}
v___jp_3787_:
{
if (v_lhs_3760_ == 0)
{
goto v___jp_3784_;
}
else
{
if (v___y_3788_ == 0)
{
lean_dec_ref(v_arg_3783_);
v_as_x27_3761_ = v_tail_3770_;
v_b_3762_ = v___x_3775_;
goto _start;
}
else
{
goto v___jp_3784_;
}
}
}
}
else
{
lean_dec_ref(v_fn_3781_);
lean_dec_ref_known(v_fn_3780_, 2);
v_as_x27_3761_ = v_tail_3770_;
v_b_3762_ = v___x_3775_;
goto _start;
}
}
else
{
lean_dec_ref(v_fn_3780_);
v_as_x27_3761_ = v_tail_3770_;
v_b_3762_ = v___x_3775_;
goto _start;
}
}
else
{
lean_dec_ref(v___x_3779_);
v_as_x27_3761_ = v_tail_3770_;
v_b_3762_ = v___x_3775_;
goto _start;
}
}
else
{
lean_object* v_a_3794_; lean_object* v___x_3796_; uint8_t v_isShared_3797_; uint8_t v_isSharedCheck_3801_; 
v_a_3794_ = lean_ctor_get(v___x_3776_, 0);
v_isSharedCheck_3801_ = !lean_is_exclusive(v___x_3776_);
if (v_isSharedCheck_3801_ == 0)
{
v___x_3796_ = v___x_3776_;
v_isShared_3797_ = v_isSharedCheck_3801_;
goto v_resetjp_3795_;
}
else
{
lean_inc(v_a_3794_);
lean_dec(v___x_3776_);
v___x_3796_ = lean_box(0);
v_isShared_3797_ = v_isSharedCheck_3801_;
goto v_resetjp_3795_;
}
v_resetjp_3795_:
{
lean_object* v___x_3799_; 
if (v_isShared_3797_ == 0)
{
v___x_3799_ = v___x_3796_;
goto v_reusejp_3798_;
}
else
{
lean_object* v_reuseFailAlloc_3800_; 
v_reuseFailAlloc_3800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3800_, 0, v_a_3794_);
v___x_3799_ = v_reuseFailAlloc_3800_;
goto v_reusejp_3798_;
}
v_reusejp_3798_:
{
return v___x_3799_;
}
}
}
v___jp_3772_:
{
lean_object* v___x_3773_; lean_object* v___x_3774_; 
v___x_3773_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__2___redArg___closed__1));
v___x_3774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3774_, 0, v___x_3773_);
return v___x_3774_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__2___redArg___boxed(lean_object* v_declName_3802_, lean_object* v_lhs_3803_, lean_object* v_as_x27_3804_, lean_object* v_b_3805_, lean_object* v___y_3806_, lean_object* v___y_3807_, lean_object* v___y_3808_, lean_object* v___y_3809_, lean_object* v___y_3810_){
_start:
{
uint8_t v_lhs_boxed_3811_; lean_object* v_res_3812_; 
v_lhs_boxed_3811_ = lean_unbox(v_lhs_3803_);
v_res_3812_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__2___redArg(v_declName_3802_, v_lhs_boxed_3811_, v_as_x27_3804_, v_b_3805_, v___y_3806_, v___y_3807_, v___y_3808_, v___y_3809_);
lean_dec(v___y_3809_);
lean_dec_ref(v___y_3808_);
lean_dec(v___y_3807_);
lean_dec_ref(v___y_3806_);
lean_dec(v_as_x27_3804_);
lean_dec(v_declName_3802_);
return v_res_3812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances(lean_object* v_f_3813_, lean_object* v_maxType_3814_, uint8_t v_lhs_3815_, lean_object* v_a_3816_, lean_object* v_a_3817_, lean_object* v_a_3818_, lean_object* v_a_3819_){
_start:
{
if (lean_obj_tag(v_f_3813_) == 4)
{
lean_object* v_declName_3825_; lean_object* v___x_3826_; 
v_declName_3825_ = lean_ctor_get(v_f_3813_, 0);
v___x_3826_ = l_Lean_Expr_getAppFn(v_maxType_3814_);
if (lean_obj_tag(v___x_3826_) == 4)
{
lean_object* v_declName_3827_; lean_object* v_className_3828_; lean_object* v___x_3829_; lean_object* v_a_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; uint8_t v___x_3833_; 
v_declName_3827_ = lean_ctor_get(v___x_3826_, 0);
lean_inc(v_declName_3827_);
lean_dec_ref_known(v___x_3826_, 2);
v_className_3828_ = l_Lean_Name_getPrefix(v_declName_3825_);
v___x_3829_ = l_Lean_Meta_getDefaultInstances___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__0___redArg(v_className_3828_, v_a_3819_);
lean_dec(v_className_3828_);
v_a_3830_ = lean_ctor_get(v___x_3829_, 0);
lean_inc(v_a_3830_);
lean_dec_ref(v___x_3829_);
v___x_3831_ = l_List_lengthTR___redArg(v_a_3830_);
v___x_3832_ = lean_unsigned_to_nat(1u);
v___x_3833_ = lean_nat_dec_le(v___x_3831_, v___x_3832_);
lean_dec(v___x_3831_);
if (v___x_3833_ == 0)
{
lean_object* v___x_3834_; lean_object* v___x_3835_; 
v___x_3834_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__2___redArg___closed__2));
v___x_3835_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__2___redArg(v_declName_3827_, v_lhs_3815_, v_a_3830_, v___x_3834_, v_a_3816_, v_a_3817_, v_a_3818_, v_a_3819_);
lean_dec(v_a_3830_);
lean_dec(v_declName_3827_);
if (lean_obj_tag(v___x_3835_) == 0)
{
lean_object* v_a_3836_; lean_object* v___x_3838_; uint8_t v_isShared_3839_; uint8_t v_isSharedCheck_3845_; 
v_a_3836_ = lean_ctor_get(v___x_3835_, 0);
v_isSharedCheck_3845_ = !lean_is_exclusive(v___x_3835_);
if (v_isSharedCheck_3845_ == 0)
{
v___x_3838_ = v___x_3835_;
v_isShared_3839_ = v_isSharedCheck_3845_;
goto v_resetjp_3837_;
}
else
{
lean_inc(v_a_3836_);
lean_dec(v___x_3835_);
v___x_3838_ = lean_box(0);
v_isShared_3839_ = v_isSharedCheck_3845_;
goto v_resetjp_3837_;
}
v_resetjp_3837_:
{
lean_object* v_fst_3840_; 
v_fst_3840_ = lean_ctor_get(v_a_3836_, 0);
lean_inc(v_fst_3840_);
lean_dec(v_a_3836_);
if (lean_obj_tag(v_fst_3840_) == 0)
{
lean_del_object(v___x_3838_);
goto v___jp_3821_;
}
else
{
lean_object* v_val_3841_; lean_object* v___x_3843_; 
v_val_3841_ = lean_ctor_get(v_fst_3840_, 0);
lean_inc(v_val_3841_);
lean_dec_ref_known(v_fst_3840_, 1);
if (v_isShared_3839_ == 0)
{
lean_ctor_set(v___x_3838_, 0, v_val_3841_);
v___x_3843_ = v___x_3838_;
goto v_reusejp_3842_;
}
else
{
lean_object* v_reuseFailAlloc_3844_; 
v_reuseFailAlloc_3844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3844_, 0, v_val_3841_);
v___x_3843_ = v_reuseFailAlloc_3844_;
goto v_reusejp_3842_;
}
v_reusejp_3842_:
{
return v___x_3843_;
}
}
}
}
else
{
lean_object* v_a_3846_; lean_object* v___x_3848_; uint8_t v_isShared_3849_; uint8_t v_isSharedCheck_3853_; 
v_a_3846_ = lean_ctor_get(v___x_3835_, 0);
v_isSharedCheck_3853_ = !lean_is_exclusive(v___x_3835_);
if (v_isSharedCheck_3853_ == 0)
{
v___x_3848_ = v___x_3835_;
v_isShared_3849_ = v_isSharedCheck_3853_;
goto v_resetjp_3847_;
}
else
{
lean_inc(v_a_3846_);
lean_dec(v___x_3835_);
v___x_3848_ = lean_box(0);
v_isShared_3849_ = v_isSharedCheck_3853_;
goto v_resetjp_3847_;
}
v_resetjp_3847_:
{
lean_object* v___x_3851_; 
if (v_isShared_3849_ == 0)
{
v___x_3851_ = v___x_3848_;
goto v_reusejp_3850_;
}
else
{
lean_object* v_reuseFailAlloc_3852_; 
v_reuseFailAlloc_3852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3852_, 0, v_a_3846_);
v___x_3851_ = v_reuseFailAlloc_3852_;
goto v_reusejp_3850_;
}
v_reusejp_3850_:
{
return v___x_3851_;
}
}
}
}
else
{
lean_dec(v_a_3830_);
lean_dec(v_declName_3827_);
goto v___jp_3821_;
}
}
else
{
uint8_t v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; 
lean_dec_ref(v___x_3826_);
v___x_3854_ = 0;
v___x_3855_ = lean_box(v___x_3854_);
v___x_3856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3856_, 0, v___x_3855_);
return v___x_3856_;
}
}
else
{
uint8_t v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; 
v___x_3857_ = 0;
v___x_3858_ = lean_box(v___x_3857_);
v___x_3859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3859_, 0, v___x_3858_);
return v___x_3859_;
}
v___jp_3821_:
{
uint8_t v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; 
v___x_3822_ = 0;
v___x_3823_ = lean_box(v___x_3822_);
v___x_3824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3824_, 0, v___x_3823_);
return v___x_3824_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances___boxed(lean_object* v_f_3860_, lean_object* v_maxType_3861_, lean_object* v_lhs_3862_, lean_object* v_a_3863_, lean_object* v_a_3864_, lean_object* v_a_3865_, lean_object* v_a_3866_, lean_object* v_a_3867_){
_start:
{
uint8_t v_lhs_boxed_3868_; lean_object* v_res_3869_; 
v_lhs_boxed_3868_ = lean_unbox(v_lhs_3862_);
v_res_3869_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances(v_f_3860_, v_maxType_3861_, v_lhs_boxed_3868_, v_a_3863_, v_a_3864_, v_a_3865_, v_a_3866_);
lean_dec(v_a_3866_);
lean_dec_ref(v_a_3865_);
lean_dec(v_a_3864_);
lean_dec_ref(v_a_3863_);
lean_dec_ref(v_maxType_3861_);
lean_dec_ref(v_f_3860_);
return v_res_3869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__0(lean_object* v_className_3870_, lean_object* v___y_3871_, lean_object* v___y_3872_, lean_object* v___y_3873_, lean_object* v___y_3874_){
_start:
{
lean_object* v___x_3876_; 
v___x_3876_ = l_Lean_Meta_getDefaultInstances___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__0___redArg(v_className_3870_, v___y_3874_);
return v___x_3876_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__0___boxed(lean_object* v_className_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_, lean_object* v___y_3881_, lean_object* v___y_3882_){
_start:
{
lean_object* v_res_3883_; 
v_res_3883_ = l_Lean_Meta_getDefaultInstances___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__0(v_className_3877_, v___y_3878_, v___y_3879_, v___y_3880_, v___y_3881_);
lean_dec(v___y_3881_);
lean_dec_ref(v___y_3880_);
lean_dec(v___y_3879_);
lean_dec_ref(v___y_3878_);
lean_dec(v_className_3877_);
return v_res_3883_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__2(lean_object* v_declName_3884_, uint8_t v_lhs_3885_, lean_object* v_as_3886_, lean_object* v_as_x27_3887_, lean_object* v_b_3888_, lean_object* v_a_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_){
_start:
{
lean_object* v___x_3895_; 
v___x_3895_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__2___redArg(v_declName_3884_, v_lhs_3885_, v_as_x27_3887_, v_b_3888_, v___y_3890_, v___y_3891_, v___y_3892_, v___y_3893_);
return v___x_3895_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__2___boxed(lean_object* v_declName_3896_, lean_object* v_lhs_3897_, lean_object* v_as_3898_, lean_object* v_as_x27_3899_, lean_object* v_b_3900_, lean_object* v_a_3901_, lean_object* v___y_3902_, lean_object* v___y_3903_, lean_object* v___y_3904_, lean_object* v___y_3905_, lean_object* v___y_3906_){
_start:
{
uint8_t v_lhs_boxed_3907_; lean_object* v_res_3908_; 
v_lhs_boxed_3907_ = lean_unbox(v_lhs_3897_);
v_res_3908_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__2(v_declName_3896_, v_lhs_boxed_3907_, v_as_3898_, v_as_x27_3899_, v_b_3900_, v_a_3901_, v___y_3902_, v___y_3903_, v___y_3904_, v___y_3905_);
lean_dec(v___y_3905_);
lean_dec_ref(v___y_3904_);
lean_dec(v___y_3903_);
lean_dec_ref(v___y_3902_);
lean_dec(v_as_x27_3899_);
lean_dec(v_as_3898_);
lean_dec(v_declName_3896_);
return v_res_3908_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2(lean_object* v_00_u03b1_3909_, lean_object* v_constName_3910_, lean_object* v___y_3911_, lean_object* v___y_3912_, lean_object* v___y_3913_, lean_object* v___y_3914_){
_start:
{
lean_object* v___x_3916_; 
v___x_3916_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2___redArg(v_constName_3910_, v___y_3911_, v___y_3912_, v___y_3913_, v___y_3914_);
return v___x_3916_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2___boxed(lean_object* v_00_u03b1_3917_, lean_object* v_constName_3918_, lean_object* v___y_3919_, lean_object* v___y_3920_, lean_object* v___y_3921_, lean_object* v___y_3922_, lean_object* v___y_3923_){
_start:
{
lean_object* v_res_3924_; 
v_res_3924_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2(v_00_u03b1_3917_, v_constName_3918_, v___y_3919_, v___y_3920_, v___y_3921_, v___y_3922_);
lean_dec(v___y_3922_);
lean_dec_ref(v___y_3921_);
lean_dec(v___y_3920_);
lean_dec_ref(v___y_3919_);
return v_res_3924_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3(lean_object* v_00_u03b1_3925_, lean_object* v_ref_3926_, lean_object* v_constName_3927_, lean_object* v___y_3928_, lean_object* v___y_3929_, lean_object* v___y_3930_, lean_object* v___y_3931_){
_start:
{
lean_object* v___x_3933_; 
v___x_3933_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3___redArg(v_ref_3926_, v_constName_3927_, v___y_3928_, v___y_3929_, v___y_3930_, v___y_3931_);
return v___x_3933_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3___boxed(lean_object* v_00_u03b1_3934_, lean_object* v_ref_3935_, lean_object* v_constName_3936_, lean_object* v___y_3937_, lean_object* v___y_3938_, lean_object* v___y_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_){
_start:
{
lean_object* v_res_3942_; 
v_res_3942_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3(v_00_u03b1_3934_, v_ref_3935_, v_constName_3936_, v___y_3937_, v___y_3938_, v___y_3939_, v___y_3940_);
lean_dec(v___y_3940_);
lean_dec_ref(v___y_3939_);
lean_dec(v___y_3938_);
lean_dec_ref(v___y_3937_);
lean_dec(v_ref_3935_);
return v_res_3942_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5(lean_object* v_00_u03b1_3943_, lean_object* v_ref_3944_, lean_object* v_msg_3945_, lean_object* v_declHint_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_){
_start:
{
lean_object* v___x_3952_; 
v___x_3952_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5___redArg(v_ref_3944_, v_msg_3945_, v_declHint_3946_, v___y_3947_, v___y_3948_, v___y_3949_, v___y_3950_);
return v___x_3952_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5___boxed(lean_object* v_00_u03b1_3953_, lean_object* v_ref_3954_, lean_object* v_msg_3955_, lean_object* v_declHint_3956_, lean_object* v___y_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_){
_start:
{
lean_object* v_res_3962_; 
v_res_3962_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5(v_00_u03b1_3953_, v_ref_3954_, v_msg_3955_, v_declHint_3956_, v___y_3957_, v___y_3958_, v___y_3959_, v___y_3960_);
lean_dec(v___y_3960_);
lean_dec_ref(v___y_3959_);
lean_dec(v___y_3958_);
lean_dec_ref(v___y_3957_);
lean_dec(v_ref_3954_);
return v_res_3962_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__6_spec__7(lean_object* v_msg_3963_, lean_object* v_declHint_3964_, lean_object* v___y_3965_, lean_object* v___y_3966_, lean_object* v___y_3967_, lean_object* v___y_3968_){
_start:
{
lean_object* v___x_3970_; 
v___x_3970_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__6_spec__7___redArg(v_msg_3963_, v_declHint_3964_, v___y_3968_);
return v___x_3970_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__6_spec__7___boxed(lean_object* v_msg_3971_, lean_object* v_declHint_3972_, lean_object* v___y_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_){
_start:
{
lean_object* v_res_3978_; 
v_res_3978_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__6_spec__7(v_msg_3971_, v_declHint_3972_, v___y_3973_, v___y_3974_, v___y_3975_, v___y_3976_);
lean_dec(v___y_3976_);
lean_dec_ref(v___y_3975_);
lean_dec(v___y_3974_);
lean_dec_ref(v___y_3973_);
return v_res_3978_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__7(lean_object* v_00_u03b1_3979_, lean_object* v_ref_3980_, lean_object* v_msg_3981_, lean_object* v___y_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_, lean_object* v___y_3985_){
_start:
{
lean_object* v___x_3987_; 
v___x_3987_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__7___redArg(v_ref_3980_, v_msg_3981_, v___y_3982_, v___y_3983_, v___y_3984_, v___y_3985_);
return v___x_3987_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__7___boxed(lean_object* v_00_u03b1_3988_, lean_object* v_ref_3989_, lean_object* v_msg_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_){
_start:
{
lean_object* v_res_3996_; 
v_res_3996_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__7(v_00_u03b1_3988_, v_ref_3989_, v_msg_3990_, v___y_3991_, v___y_3992_, v___y_3993_, v___y_3994_);
lean_dec(v___y_3994_);
lean_dec_ref(v___y_3993_);
lean_dec(v___y_3992_);
lean_dec_ref(v___y_3991_);
lean_dec(v_ref_3989_);
return v_res_3996_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__7_spec__9(lean_object* v_00_u03b1_3997_, lean_object* v_msg_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_){
_start:
{
lean_object* v___x_4004_; 
v___x_4004_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__7_spec__9___redArg(v_msg_3998_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_);
return v___x_4004_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__7_spec__9___boxed(lean_object* v_00_u03b1_4005_, lean_object* v_msg_4006_, lean_object* v___y_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_, lean_object* v___y_4010_, lean_object* v___y_4011_){
_start:
{
lean_object* v_res_4012_; 
v_res_4012_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances_spec__1_spec__2_spec__3_spec__5_spec__7_spec__9(v_00_u03b1_4005_, v_msg_4006_, v___y_4007_, v___y_4008_, v___y_4009_, v___y_4010_);
lean_dec(v___y_4010_);
lean_dec_ref(v___y_4009_);
lean_dec(v___y_4008_);
lean_dec_ref(v___y_4007_);
return v_res_4012_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHomogeneousInstance(lean_object* v_f_4013_, lean_object* v_maxType_4014_, lean_object* v_a_4015_, lean_object* v_a_4016_, lean_object* v_a_4017_, lean_object* v_a_4018_){
_start:
{
lean_object* v_a_4021_; 
if (lean_obj_tag(v_f_4013_) == 4)
{
lean_object* v_declName_4028_; lean_object* v_className_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; 
v_declName_4028_ = lean_ctor_get(v_f_4013_, 0);
v_className_4029_ = l_Lean_Name_getPrefix(v_declName_4028_);
v___x_4030_ = lean_unsigned_to_nat(3u);
v___x_4031_ = lean_mk_empty_array_with_capacity(v___x_4030_);
lean_inc_ref_n(v_maxType_4014_, 2);
v___x_4032_ = lean_array_push(v___x_4031_, v_maxType_4014_);
v___x_4033_ = lean_array_push(v___x_4032_, v_maxType_4014_);
v___x_4034_ = lean_array_push(v___x_4033_, v_maxType_4014_);
v___x_4035_ = l_Lean_Meta_mkAppM(v_className_4029_, v___x_4034_, v_a_4015_, v_a_4016_, v_a_4017_, v_a_4018_);
if (lean_obj_tag(v___x_4035_) == 0)
{
lean_object* v_a_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; 
v_a_4036_ = lean_ctor_get(v___x_4035_, 0);
lean_inc(v_a_4036_);
lean_dec_ref_known(v___x_4035_, 1);
v___x_4037_ = lean_box(0);
v___x_4038_ = l_Lean_Meta_trySynthInstance(v_a_4036_, v___x_4037_, v_a_4015_, v_a_4016_, v_a_4017_, v_a_4018_);
if (lean_obj_tag(v___x_4038_) == 0)
{
lean_object* v_a_4039_; lean_object* v___x_4041_; uint8_t v_isShared_4042_; uint8_t v_isSharedCheck_4053_; 
v_a_4039_ = lean_ctor_get(v___x_4038_, 0);
v_isSharedCheck_4053_ = !lean_is_exclusive(v___x_4038_);
if (v_isSharedCheck_4053_ == 0)
{
v___x_4041_ = v___x_4038_;
v_isShared_4042_ = v_isSharedCheck_4053_;
goto v_resetjp_4040_;
}
else
{
lean_inc(v_a_4039_);
lean_dec(v___x_4038_);
v___x_4041_ = lean_box(0);
v_isShared_4042_ = v_isSharedCheck_4053_;
goto v_resetjp_4040_;
}
v_resetjp_4040_:
{
if (lean_obj_tag(v_a_4039_) == 1)
{
uint8_t v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4046_; 
lean_dec_ref_known(v_a_4039_, 1);
v___x_4043_ = 1;
v___x_4044_ = lean_box(v___x_4043_);
if (v_isShared_4042_ == 0)
{
lean_ctor_set(v___x_4041_, 0, v___x_4044_);
v___x_4046_ = v___x_4041_;
goto v_reusejp_4045_;
}
else
{
lean_object* v_reuseFailAlloc_4047_; 
v_reuseFailAlloc_4047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4047_, 0, v___x_4044_);
v___x_4046_ = v_reuseFailAlloc_4047_;
goto v_reusejp_4045_;
}
v_reusejp_4045_:
{
return v___x_4046_;
}
}
else
{
uint8_t v___x_4048_; lean_object* v___x_4049_; lean_object* v___x_4051_; 
lean_dec(v_a_4039_);
v___x_4048_ = 0;
v___x_4049_ = lean_box(v___x_4048_);
if (v_isShared_4042_ == 0)
{
lean_ctor_set(v___x_4041_, 0, v___x_4049_);
v___x_4051_ = v___x_4041_;
goto v_reusejp_4050_;
}
else
{
lean_object* v_reuseFailAlloc_4052_; 
v_reuseFailAlloc_4052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4052_, 0, v___x_4049_);
v___x_4051_ = v_reuseFailAlloc_4052_;
goto v_reusejp_4050_;
}
v_reusejp_4050_:
{
return v___x_4051_;
}
}
}
}
else
{
lean_object* v_a_4054_; 
v_a_4054_ = lean_ctor_get(v___x_4038_, 0);
lean_inc(v_a_4054_);
lean_dec_ref_known(v___x_4038_, 1);
v_a_4021_ = v_a_4054_;
goto v___jp_4020_;
}
}
else
{
lean_object* v_a_4055_; 
v_a_4055_ = lean_ctor_get(v___x_4035_, 0);
lean_inc(v_a_4055_);
lean_dec_ref_known(v___x_4035_, 1);
v_a_4021_ = v_a_4055_;
goto v___jp_4020_;
}
}
else
{
uint8_t v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; 
lean_dec_ref(v_maxType_4014_);
v___x_4056_ = 0;
v___x_4057_ = lean_box(v___x_4056_);
v___x_4058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4058_, 0, v___x_4057_);
return v___x_4058_;
}
v___jp_4020_:
{
uint8_t v___x_4022_; 
v___x_4022_ = l_Lean_Exception_isInterrupt(v_a_4021_);
if (v___x_4022_ == 0)
{
uint8_t v___x_4023_; 
lean_inc_ref(v_a_4021_);
v___x_4023_ = l_Lean_Exception_isRuntime(v_a_4021_);
if (v___x_4023_ == 0)
{
lean_object* v___x_4024_; lean_object* v___x_4025_; 
lean_dec_ref(v_a_4021_);
v___x_4024_ = lean_box(v___x_4023_);
v___x_4025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4025_, 0, v___x_4024_);
return v___x_4025_;
}
else
{
lean_object* v___x_4026_; 
v___x_4026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4026_, 0, v_a_4021_);
return v___x_4026_;
}
}
else
{
lean_object* v___x_4027_; 
v___x_4027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4027_, 0, v_a_4021_);
return v___x_4027_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHomogeneousInstance___boxed(lean_object* v_f_4059_, lean_object* v_maxType_4060_, lean_object* v_a_4061_, lean_object* v_a_4062_, lean_object* v_a_4063_, lean_object* v_a_4064_, lean_object* v_a_4065_){
_start:
{
lean_object* v_res_4066_; 
v_res_4066_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHomogeneousInstance(v_f_4059_, v_maxType_4060_, v_a_4061_, v_a_4062_, v_a_4063_, v_a_4064_);
lean_dec(v_a_4064_);
lean_dec_ref(v_a_4063_);
lean_dec(v_a_4062_);
lean_dec_ref(v_a_4061_);
lean_dec_ref(v_f_4059_);
return v_res_4066_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go_spec__0___redArg(lean_object* v_cls_4067_, lean_object* v_msg_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_){
_start:
{
lean_object* v_ref_4074_; lean_object* v___x_4075_; lean_object* v_a_4076_; lean_object* v___x_4078_; uint8_t v_isShared_4079_; uint8_t v_isSharedCheck_4121_; 
v_ref_4074_ = lean_ctor_get(v___y_4071_, 2);
v___x_4075_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0_spec__0(v_msg_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
v_a_4076_ = lean_ctor_get(v___x_4075_, 0);
v_isSharedCheck_4121_ = !lean_is_exclusive(v___x_4075_);
if (v_isSharedCheck_4121_ == 0)
{
v___x_4078_ = v___x_4075_;
v_isShared_4079_ = v_isSharedCheck_4121_;
goto v_resetjp_4077_;
}
else
{
lean_inc(v_a_4076_);
lean_dec(v___x_4075_);
v___x_4078_ = lean_box(0);
v_isShared_4079_ = v_isSharedCheck_4121_;
goto v_resetjp_4077_;
}
v_resetjp_4077_:
{
lean_object* v___x_4080_; lean_object* v_traceState_4081_; lean_object* v_env_4082_; lean_object* v_nextMacroScope_4083_; lean_object* v_ngen_4084_; lean_object* v_auxDeclNGen_4085_; lean_object* v_cache_4086_; lean_object* v_recordedDeps_4087_; lean_object* v_messages_4088_; lean_object* v_infoState_4089_; lean_object* v_snapshotTasks_4090_; lean_object* v___x_4092_; uint8_t v_isShared_4093_; uint8_t v_isSharedCheck_4120_; 
v___x_4080_ = lean_st_ref_take(v___y_4072_);
v_traceState_4081_ = lean_ctor_get(v___x_4080_, 4);
v_env_4082_ = lean_ctor_get(v___x_4080_, 0);
v_nextMacroScope_4083_ = lean_ctor_get(v___x_4080_, 1);
v_ngen_4084_ = lean_ctor_get(v___x_4080_, 2);
v_auxDeclNGen_4085_ = lean_ctor_get(v___x_4080_, 3);
v_cache_4086_ = lean_ctor_get(v___x_4080_, 5);
v_recordedDeps_4087_ = lean_ctor_get(v___x_4080_, 6);
v_messages_4088_ = lean_ctor_get(v___x_4080_, 7);
v_infoState_4089_ = lean_ctor_get(v___x_4080_, 8);
v_snapshotTasks_4090_ = lean_ctor_get(v___x_4080_, 9);
v_isSharedCheck_4120_ = !lean_is_exclusive(v___x_4080_);
if (v_isSharedCheck_4120_ == 0)
{
v___x_4092_ = v___x_4080_;
v_isShared_4093_ = v_isSharedCheck_4120_;
goto v_resetjp_4091_;
}
else
{
lean_inc(v_snapshotTasks_4090_);
lean_inc(v_infoState_4089_);
lean_inc(v_messages_4088_);
lean_inc(v_recordedDeps_4087_);
lean_inc(v_cache_4086_);
lean_inc(v_traceState_4081_);
lean_inc(v_auxDeclNGen_4085_);
lean_inc(v_ngen_4084_);
lean_inc(v_nextMacroScope_4083_);
lean_inc(v_env_4082_);
lean_dec(v___x_4080_);
v___x_4092_ = lean_box(0);
v_isShared_4093_ = v_isSharedCheck_4120_;
goto v_resetjp_4091_;
}
v_resetjp_4091_:
{
uint64_t v_tid_4094_; lean_object* v_traces_4095_; lean_object* v___x_4097_; uint8_t v_isShared_4098_; uint8_t v_isSharedCheck_4119_; 
v_tid_4094_ = lean_ctor_get_uint64(v_traceState_4081_, sizeof(void*)*1);
v_traces_4095_ = lean_ctor_get(v_traceState_4081_, 0);
v_isSharedCheck_4119_ = !lean_is_exclusive(v_traceState_4081_);
if (v_isSharedCheck_4119_ == 0)
{
v___x_4097_ = v_traceState_4081_;
v_isShared_4098_ = v_isSharedCheck_4119_;
goto v_resetjp_4096_;
}
else
{
lean_inc(v_traces_4095_);
lean_dec(v_traceState_4081_);
v___x_4097_ = lean_box(0);
v_isShared_4098_ = v_isSharedCheck_4119_;
goto v_resetjp_4096_;
}
v_resetjp_4096_:
{
lean_object* v___x_4099_; lean_object* v___x_4100_; double v___x_4101_; uint8_t v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4110_; 
v___x_4099_ = lean_box(0);
v___x_4100_ = lean_box(0);
v___x_4101_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___redArg___closed__0);
v___x_4102_ = 0;
v___x_4103_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___redArg___closed__1));
v___x_4104_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_4104_, 0, v_cls_4067_);
lean_ctor_set(v___x_4104_, 1, v___x_4100_);
lean_ctor_set(v___x_4104_, 2, v___x_4103_);
lean_ctor_set_float(v___x_4104_, sizeof(void*)*3, v___x_4101_);
lean_ctor_set_float(v___x_4104_, sizeof(void*)*3 + 8, v___x_4101_);
lean_ctor_set_uint8(v___x_4104_, sizeof(void*)*3 + 16, v___x_4102_);
v___x_4105_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go_spec__2___redArg___closed__2));
v___x_4106_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_4106_, 0, v___x_4104_);
lean_ctor_set(v___x_4106_, 1, v_a_4076_);
lean_ctor_set(v___x_4106_, 2, v___x_4105_);
lean_inc(v_ref_4074_);
v___x_4107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4107_, 0, v_ref_4074_);
lean_ctor_set(v___x_4107_, 1, v___x_4106_);
v___x_4108_ = l_Lean_PersistentArray_push___redArg(v_traces_4095_, v___x_4107_);
if (v_isShared_4098_ == 0)
{
lean_ctor_set(v___x_4097_, 0, v___x_4108_);
v___x_4110_ = v___x_4097_;
goto v_reusejp_4109_;
}
else
{
lean_object* v_reuseFailAlloc_4118_; 
v_reuseFailAlloc_4118_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4118_, 0, v___x_4108_);
lean_ctor_set_uint64(v_reuseFailAlloc_4118_, sizeof(void*)*1, v_tid_4094_);
v___x_4110_ = v_reuseFailAlloc_4118_;
goto v_reusejp_4109_;
}
v_reusejp_4109_:
{
lean_object* v___x_4112_; 
if (v_isShared_4093_ == 0)
{
lean_ctor_set(v___x_4092_, 4, v___x_4110_);
v___x_4112_ = v___x_4092_;
goto v_reusejp_4111_;
}
else
{
lean_object* v_reuseFailAlloc_4117_; 
v_reuseFailAlloc_4117_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4117_, 0, v_env_4082_);
lean_ctor_set(v_reuseFailAlloc_4117_, 1, v_nextMacroScope_4083_);
lean_ctor_set(v_reuseFailAlloc_4117_, 2, v_ngen_4084_);
lean_ctor_set(v_reuseFailAlloc_4117_, 3, v_auxDeclNGen_4085_);
lean_ctor_set(v_reuseFailAlloc_4117_, 4, v___x_4110_);
lean_ctor_set(v_reuseFailAlloc_4117_, 5, v_cache_4086_);
lean_ctor_set(v_reuseFailAlloc_4117_, 6, v_recordedDeps_4087_);
lean_ctor_set(v_reuseFailAlloc_4117_, 7, v_messages_4088_);
lean_ctor_set(v_reuseFailAlloc_4117_, 8, v_infoState_4089_);
lean_ctor_set(v_reuseFailAlloc_4117_, 9, v_snapshotTasks_4090_);
v___x_4112_ = v_reuseFailAlloc_4117_;
goto v_reusejp_4111_;
}
v_reusejp_4111_:
{
lean_object* v___x_4113_; lean_object* v___x_4115_; 
v___x_4113_ = lean_st_ref_put(v___y_4072_, v___x_4112_);
if (v_isShared_4079_ == 0)
{
lean_ctor_set(v___x_4078_, 0, v___x_4099_);
v___x_4115_ = v___x_4078_;
goto v_reusejp_4114_;
}
else
{
lean_object* v_reuseFailAlloc_4116_; 
v_reuseFailAlloc_4116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4116_, 0, v___x_4099_);
v___x_4115_ = v_reuseFailAlloc_4116_;
goto v_reusejp_4114_;
}
v_reusejp_4114_:
{
return v___x_4115_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go_spec__0___redArg___boxed(lean_object* v_cls_4122_, lean_object* v_msg_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_, lean_object* v___y_4126_, lean_object* v___y_4127_, lean_object* v___y_4128_){
_start:
{
lean_object* v_res_4129_; 
v_res_4129_ = l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go_spec__0___redArg(v_cls_4122_, v_msg_4123_, v___y_4124_, v___y_4125_, v___y_4126_, v___y_4127_);
lean_dec(v___y_4127_);
lean_dec_ref(v___y_4126_);
lean_dec(v___y_4125_);
lean_dec_ref(v___y_4124_);
return v_res_4129_;
}
}
static lean_object* _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__1(void){
_start:
{
lean_object* v___x_4131_; lean_object* v___x_4132_; 
v___x_4131_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__0));
v___x_4132_ = l_Lean_stringToMessageData(v___x_4131_);
return v___x_4132_;
}
}
static lean_object* _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__3(void){
_start:
{
lean_object* v___x_4134_; lean_object* v___x_4135_; 
v___x_4134_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__2));
v___x_4135_ = l_Lean_stringToMessageData(v___x_4134_);
return v___x_4135_;
}
}
static lean_object* _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__5(void){
_start:
{
lean_object* v___x_4137_; lean_object* v___x_4138_; 
v___x_4137_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__4));
v___x_4138_ = l_Lean_stringToMessageData(v___x_4137_);
return v___x_4138_;
}
}
static lean_object* _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__7(void){
_start:
{
lean_object* v___x_4140_; lean_object* v___x_4141_; 
v___x_4140_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__6));
v___x_4141_ = l_Lean_stringToMessageData(v___x_4140_);
return v___x_4141_;
}
}
static lean_object* _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__9(void){
_start:
{
lean_object* v___x_4143_; lean_object* v___x_4144_; 
v___x_4143_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__8));
v___x_4144_ = l_Lean_stringToMessageData(v___x_4143_);
return v___x_4144_;
}
}
static lean_object* _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__1(void){
_start:
{
lean_object* v___x_4146_; lean_object* v___x_4147_; 
v___x_4146_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__0));
v___x_4147_ = l_Lean_stringToMessageData(v___x_4146_);
return v___x_4147_;
}
}
static lean_object* _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__3(void){
_start:
{
lean_object* v___x_4149_; lean_object* v___x_4150_; 
v___x_4149_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__2));
v___x_4150_ = l_Lean_stringToMessageData(v___x_4149_);
return v___x_4150_;
}
}
static lean_object* _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__6(void){
_start:
{
lean_object* v___x_4154_; lean_object* v___x_4155_; 
v___x_4154_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__5));
v___x_4155_ = l_Lean_MessageData_ofFormat(v___x_4154_);
return v___x_4155_;
}
}
static lean_object* _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__8(void){
_start:
{
lean_object* v___x_4157_; lean_object* v___x_4158_; 
v___x_4157_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__7));
v___x_4158_ = l_Lean_stringToMessageData(v___x_4157_);
return v___x_4158_;
}
}
static lean_object* _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__10(void){
_start:
{
lean_object* v___x_4160_; lean_object* v___x_4161_; 
v___x_4160_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__9));
v___x_4161_ = l_Lean_stringToMessageData(v___x_4160_);
return v___x_4161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr(lean_object* v_tree_4164_, lean_object* v_expectedType_x3f_4165_, lean_object* v_a_4166_, lean_object* v_a_4167_, lean_object* v_a_4168_, lean_object* v_a_4169_, lean_object* v_a_4170_, lean_object* v_a_4171_){
_start:
{
lean_object* v___y_4174_; lean_object* v___y_4175_; lean_object* v___y_4176_; lean_object* v___y_4177_; lean_object* v___y_4178_; lean_object* v___y_4179_; lean_object* v___y_4185_; lean_object* v___y_4186_; lean_object* v___y_4187_; lean_object* v___y_4188_; lean_object* v___y_4189_; lean_object* v___y_4190_; lean_object* v___y_4191_; lean_object* v___x_4194_; 
lean_inc(v_expectedType_x3f_4165_);
lean_inc_ref(v_tree_4164_);
v___x_4194_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze(v_tree_4164_, v_expectedType_x3f_4165_, v_a_4166_, v_a_4167_, v_a_4168_, v_a_4169_, v_a_4170_, v_a_4171_);
if (lean_obj_tag(v___x_4194_) == 0)
{
lean_object* v_toCold_4195_; lean_object* v_options_4196_; lean_object* v_a_4197_; lean_object* v_inheritedTraceOptions_4198_; uint8_t v_hasTrace_4199_; lean_object* v___x_4200_; lean_object* v___y_4202_; lean_object* v___y_4203_; lean_object* v___y_4204_; lean_object* v___y_4205_; lean_object* v___y_4206_; lean_object* v___y_4207_; lean_object* v___y_4208_; lean_object* v___y_4228_; lean_object* v___y_4229_; lean_object* v___y_4230_; lean_object* v___y_4231_; lean_object* v___y_4232_; lean_object* v___y_4233_; lean_object* v___y_4263_; lean_object* v___y_4264_; 
v_toCold_4195_ = lean_ctor_get(v_a_4170_, 0);
v_options_4196_ = lean_ctor_get(v_toCold_4195_, 2);
v_a_4197_ = lean_ctor_get(v___x_4194_, 0);
lean_inc(v_a_4197_);
lean_dec_ref_known(v___x_4194_, 1);
v_inheritedTraceOptions_4198_ = lean_ctor_get(v_toCold_4195_, 11);
v_hasTrace_4199_ = lean_ctor_get_uint8(v_options_4196_, sizeof(void*)*1);
v___x_4200_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__0));
if (v_hasTrace_4199_ == 0)
{
v___y_4228_ = v_a_4166_;
v___y_4229_ = v_a_4167_;
v___y_4230_ = v_a_4168_;
v___y_4231_ = v_a_4169_;
v___y_4232_ = v_a_4170_;
v___y_4233_ = v_a_4171_;
goto v___jp_4227_;
}
else
{
lean_object* v___x_4275_; uint8_t v___x_4276_; 
v___x_4275_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__3, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__3_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__3);
v___x_4276_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4198_, v_options_4196_, v___x_4275_);
if (v___x_4276_ == 0)
{
v___y_4228_ = v_a_4166_;
v___y_4229_ = v_a_4167_;
v___y_4230_ = v_a_4168_;
v___y_4231_ = v_a_4169_;
v___y_4232_ = v_a_4170_;
v___y_4233_ = v_a_4171_;
goto v___jp_4227_;
}
else
{
lean_object* v_max_x3f_4277_; uint8_t v_hasUncomparable_4278_; uint8_t v_hasUnknown_4279_; lean_object* v___y_4281_; lean_object* v___y_4282_; lean_object* v___x_4291_; lean_object* v___y_4293_; 
v_max_x3f_4277_ = lean_ctor_get(v_a_4197_, 0);
v_hasUncomparable_4278_ = lean_ctor_get_uint8(v_a_4197_, sizeof(void*)*1);
v_hasUnknown_4279_ = lean_ctor_get_uint8(v_a_4197_, sizeof(void*)*1 + 1);
v___x_4291_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__8, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__8_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__8);
if (v_hasUncomparable_4278_ == 0)
{
lean_object* v___x_4301_; 
v___x_4301_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__11));
v___y_4293_ = v___x_4301_;
goto v___jp_4292_;
}
else
{
lean_object* v___x_4302_; 
v___x_4302_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__12));
v___y_4293_ = v___x_4302_;
goto v___jp_4292_;
}
v___jp_4280_:
{
lean_object* v___x_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; 
lean_inc_ref(v___y_4282_);
v___x_4283_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4283_, 0, v___y_4282_);
v___x_4284_ = l_Lean_MessageData_ofFormat(v___x_4283_);
v___x_4285_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4285_, 0, v___y_4281_);
lean_ctor_set(v___x_4285_, 1, v___x_4284_);
v___x_4286_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__3, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__3_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__3);
v___x_4287_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4287_, 0, v___x_4285_);
lean_ctor_set(v___x_4287_, 1, v___x_4286_);
if (lean_obj_tag(v_max_x3f_4277_) == 0)
{
lean_object* v___x_4288_; 
v___x_4288_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__6, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__6_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__6);
v___y_4263_ = v___x_4287_;
v___y_4264_ = v___x_4288_;
goto v___jp_4262_;
}
else
{
lean_object* v_val_4289_; lean_object* v___x_4290_; 
v_val_4289_ = lean_ctor_get(v_max_x3f_4277_, 0);
lean_inc(v_val_4289_);
v___x_4290_ = l_Lean_MessageData_ofExpr(v_val_4289_);
v___y_4263_ = v___x_4287_;
v___y_4264_ = v___x_4290_;
goto v___jp_4262_;
}
}
v___jp_4292_:
{
lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; 
lean_inc_ref(v___y_4293_);
v___x_4294_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4294_, 0, v___y_4293_);
v___x_4295_ = l_Lean_MessageData_ofFormat(v___x_4294_);
v___x_4296_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4296_, 0, v___x_4291_);
lean_ctor_set(v___x_4296_, 1, v___x_4295_);
v___x_4297_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__10, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__10_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__10);
v___x_4298_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4298_, 0, v___x_4296_);
lean_ctor_set(v___x_4298_, 1, v___x_4297_);
if (v_hasUnknown_4279_ == 0)
{
lean_object* v___x_4299_; 
v___x_4299_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__11));
v___y_4281_ = v___x_4298_;
v___y_4282_ = v___x_4299_;
goto v___jp_4280_;
}
else
{
lean_object* v___x_4300_; 
v___x_4300_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__12));
v___y_4281_ = v___x_4298_;
v___y_4282_ = v___x_4300_;
goto v___jp_4280_;
}
}
}
}
v___jp_4201_:
{
lean_object* v_toCold_4209_; lean_object* v_options_4210_; uint8_t v_hasTrace_4211_; 
v_toCold_4209_ = lean_ctor_get(v___y_4207_, 0);
v_options_4210_ = lean_ctor_get(v_toCold_4209_, 2);
v_hasTrace_4211_ = lean_ctor_get_uint8(v_options_4210_, sizeof(void*)*1);
if (v_hasTrace_4211_ == 0)
{
v___y_4185_ = v___y_4202_;
v___y_4186_ = v___y_4203_;
v___y_4187_ = v___y_4204_;
v___y_4188_ = v___y_4205_;
v___y_4189_ = v___y_4206_;
v___y_4190_ = v___y_4207_;
v___y_4191_ = v___y_4208_;
goto v___jp_4184_;
}
else
{
lean_object* v_inheritedTraceOptions_4212_; lean_object* v___x_4213_; uint8_t v___x_4214_; 
v_inheritedTraceOptions_4212_ = lean_ctor_get(v_toCold_4209_, 11);
v___x_4213_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__3, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__3_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__3);
v___x_4214_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4212_, v_options_4210_, v___x_4213_);
if (v___x_4214_ == 0)
{
v___y_4185_ = v___y_4202_;
v___y_4186_ = v___y_4203_;
v___y_4187_ = v___y_4204_;
v___y_4188_ = v___y_4205_;
v___y_4189_ = v___y_4206_;
v___y_4190_ = v___y_4207_;
v___y_4191_ = v___y_4208_;
goto v___jp_4184_;
}
else
{
lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; 
v___x_4215_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__1, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__1_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__1);
lean_inc_ref(v___y_4202_);
v___x_4216_ = l_Lean_MessageData_ofExpr(v___y_4202_);
v___x_4217_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4217_, 0, v___x_4215_);
lean_ctor_set(v___x_4217_, 1, v___x_4216_);
v___x_4218_ = l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go_spec__0___redArg(v___x_4200_, v___x_4217_, v___y_4205_, v___y_4206_, v___y_4207_, v___y_4208_);
if (lean_obj_tag(v___x_4218_) == 0)
{
lean_dec_ref_known(v___x_4218_, 1);
v___y_4185_ = v___y_4202_;
v___y_4186_ = v___y_4203_;
v___y_4187_ = v___y_4204_;
v___y_4188_ = v___y_4205_;
v___y_4189_ = v___y_4206_;
v___y_4190_ = v___y_4207_;
v___y_4191_ = v___y_4208_;
goto v___jp_4184_;
}
else
{
lean_object* v_a_4219_; lean_object* v___x_4221_; uint8_t v_isShared_4222_; uint8_t v_isSharedCheck_4226_; 
lean_dec_ref(v___y_4202_);
lean_dec(v_expectedType_x3f_4165_);
v_a_4219_ = lean_ctor_get(v___x_4218_, 0);
v_isSharedCheck_4226_ = !lean_is_exclusive(v___x_4218_);
if (v_isSharedCheck_4226_ == 0)
{
v___x_4221_ = v___x_4218_;
v_isShared_4222_ = v_isSharedCheck_4226_;
goto v_resetjp_4220_;
}
else
{
lean_inc(v_a_4219_);
lean_dec(v___x_4218_);
v___x_4221_ = lean_box(0);
v_isShared_4222_ = v_isSharedCheck_4226_;
goto v_resetjp_4220_;
}
v_resetjp_4220_:
{
lean_object* v___x_4224_; 
if (v_isShared_4222_ == 0)
{
v___x_4224_ = v___x_4221_;
goto v_reusejp_4223_;
}
else
{
lean_object* v_reuseFailAlloc_4225_; 
v_reuseFailAlloc_4225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4225_, 0, v_a_4219_);
v___x_4224_ = v_reuseFailAlloc_4225_;
goto v_reusejp_4223_;
}
v_reusejp_4223_:
{
return v___x_4224_;
}
}
}
}
}
}
v___jp_4227_:
{
uint8_t v_hasUncomparable_4234_; 
v_hasUncomparable_4234_ = lean_ctor_get_uint8(v_a_4197_, sizeof(void*)*1);
if (v_hasUncomparable_4234_ == 0)
{
lean_object* v_max_x3f_4235_; 
v_max_x3f_4235_ = lean_ctor_get(v_a_4197_, 0);
lean_inc(v_max_x3f_4235_);
if (lean_obj_tag(v_max_x3f_4235_) == 0)
{
lean_dec(v_a_4197_);
v___y_4174_ = v___y_4232_;
v___y_4175_ = v___y_4231_;
v___y_4176_ = v___y_4230_;
v___y_4177_ = v___y_4229_;
v___y_4178_ = v___y_4228_;
v___y_4179_ = v___y_4233_;
goto v___jp_4173_;
}
else
{
uint8_t v_hasUnknown_4236_; lean_object* v_val_4237_; lean_object* v___x_4238_; 
v_hasUnknown_4236_ = lean_ctor_get_uint8(v_a_4197_, sizeof(void*)*1 + 1);
lean_dec(v_a_4197_);
v_val_4237_ = lean_ctor_get(v_max_x3f_4235_, 0);
lean_inc_n(v_val_4237_, 2);
lean_dec_ref_known(v_max_x3f_4235_, 1);
v___x_4238_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe(v_tree_4164_, v_val_4237_, v_hasUncomparable_4234_, v___y_4228_, v___y_4229_, v___y_4230_, v___y_4231_, v___y_4232_, v___y_4233_);
if (lean_obj_tag(v___x_4238_) == 0)
{
lean_object* v_a_4239_; lean_object* v___x_4240_; 
v_a_4239_ = lean_ctor_get(v___x_4238_, 0);
lean_inc(v_a_4239_);
lean_dec_ref_known(v___x_4238_, 1);
v___x_4240_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore(v_a_4239_, v___y_4228_, v___y_4229_, v___y_4230_, v___y_4231_, v___y_4232_, v___y_4233_);
if (lean_obj_tag(v___x_4240_) == 0)
{
if (v_hasUnknown_4236_ == 0)
{
lean_object* v_a_4241_; lean_object* v___x_4242_; 
v_a_4241_ = lean_ctor_get(v___x_4240_, 0);
lean_inc_n(v_a_4241_, 2);
lean_dec_ref_known(v___x_4240_, 1);
lean_inc(v___y_4233_);
lean_inc_ref(v___y_4232_);
lean_inc(v___y_4231_);
lean_inc_ref(v___y_4230_);
v___x_4242_ = lean_infer_type(v_a_4241_, v___y_4230_, v___y_4231_, v___y_4232_, v___y_4233_);
if (lean_obj_tag(v___x_4242_) == 0)
{
lean_object* v_a_4243_; lean_object* v___x_4244_; 
v_a_4243_ = lean_ctor_get(v___x_4242_, 0);
lean_inc(v_a_4243_);
lean_dec_ref_known(v___x_4242_, 1);
v___x_4244_ = l_Lean_Meta_isExprDefEqGuarded(v_a_4243_, v_val_4237_, v___y_4230_, v___y_4231_, v___y_4232_, v___y_4233_);
if (lean_obj_tag(v___x_4244_) == 0)
{
lean_dec_ref_known(v___x_4244_, 1);
v___y_4202_ = v_a_4241_;
v___y_4203_ = v___y_4228_;
v___y_4204_ = v___y_4229_;
v___y_4205_ = v___y_4230_;
v___y_4206_ = v___y_4231_;
v___y_4207_ = v___y_4232_;
v___y_4208_ = v___y_4233_;
goto v___jp_4201_;
}
else
{
lean_object* v_a_4245_; lean_object* v___x_4247_; uint8_t v_isShared_4248_; uint8_t v_isSharedCheck_4252_; 
lean_dec(v_a_4241_);
lean_dec(v_expectedType_x3f_4165_);
v_a_4245_ = lean_ctor_get(v___x_4244_, 0);
v_isSharedCheck_4252_ = !lean_is_exclusive(v___x_4244_);
if (v_isSharedCheck_4252_ == 0)
{
v___x_4247_ = v___x_4244_;
v_isShared_4248_ = v_isSharedCheck_4252_;
goto v_resetjp_4246_;
}
else
{
lean_inc(v_a_4245_);
lean_dec(v___x_4244_);
v___x_4247_ = lean_box(0);
v_isShared_4248_ = v_isSharedCheck_4252_;
goto v_resetjp_4246_;
}
v_resetjp_4246_:
{
lean_object* v___x_4250_; 
if (v_isShared_4248_ == 0)
{
v___x_4250_ = v___x_4247_;
goto v_reusejp_4249_;
}
else
{
lean_object* v_reuseFailAlloc_4251_; 
v_reuseFailAlloc_4251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4251_, 0, v_a_4245_);
v___x_4250_ = v_reuseFailAlloc_4251_;
goto v_reusejp_4249_;
}
v_reusejp_4249_:
{
return v___x_4250_;
}
}
}
}
else
{
lean_dec(v_a_4241_);
lean_dec(v_val_4237_);
lean_dec(v_expectedType_x3f_4165_);
return v___x_4242_;
}
}
else
{
lean_object* v_a_4253_; 
lean_dec(v_val_4237_);
v_a_4253_ = lean_ctor_get(v___x_4240_, 0);
lean_inc(v_a_4253_);
lean_dec_ref_known(v___x_4240_, 1);
v___y_4202_ = v_a_4253_;
v___y_4203_ = v___y_4228_;
v___y_4204_ = v___y_4229_;
v___y_4205_ = v___y_4230_;
v___y_4206_ = v___y_4231_;
v___y_4207_ = v___y_4232_;
v___y_4208_ = v___y_4233_;
goto v___jp_4201_;
}
}
else
{
lean_dec(v_val_4237_);
lean_dec(v_expectedType_x3f_4165_);
return v___x_4240_;
}
}
else
{
lean_object* v_a_4254_; lean_object* v___x_4256_; uint8_t v_isShared_4257_; uint8_t v_isSharedCheck_4261_; 
lean_dec(v_val_4237_);
lean_dec(v_expectedType_x3f_4165_);
v_a_4254_ = lean_ctor_get(v___x_4238_, 0);
v_isSharedCheck_4261_ = !lean_is_exclusive(v___x_4238_);
if (v_isSharedCheck_4261_ == 0)
{
v___x_4256_ = v___x_4238_;
v_isShared_4257_ = v_isSharedCheck_4261_;
goto v_resetjp_4255_;
}
else
{
lean_inc(v_a_4254_);
lean_dec(v___x_4238_);
v___x_4256_ = lean_box(0);
v_isShared_4257_ = v_isSharedCheck_4261_;
goto v_resetjp_4255_;
}
v_resetjp_4255_:
{
lean_object* v___x_4259_; 
if (v_isShared_4257_ == 0)
{
v___x_4259_ = v___x_4256_;
goto v_reusejp_4258_;
}
else
{
lean_object* v_reuseFailAlloc_4260_; 
v_reuseFailAlloc_4260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4260_, 0, v_a_4254_);
v___x_4259_ = v_reuseFailAlloc_4260_;
goto v_reusejp_4258_;
}
v_reusejp_4258_:
{
return v___x_4259_;
}
}
}
}
}
else
{
lean_dec(v_a_4197_);
v___y_4174_ = v___y_4232_;
v___y_4175_ = v___y_4231_;
v___y_4176_ = v___y_4230_;
v___y_4177_ = v___y_4229_;
v___y_4178_ = v___y_4228_;
v___y_4179_ = v___y_4233_;
goto v___jp_4173_;
}
}
v___jp_4262_:
{
lean_object* v___x_4265_; lean_object* v___x_4266_; 
v___x_4265_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4265_, 0, v___y_4263_);
lean_ctor_set(v___x_4265_, 1, v___y_4264_);
v___x_4266_ = l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go_spec__0___redArg(v___x_4200_, v___x_4265_, v_a_4168_, v_a_4169_, v_a_4170_, v_a_4171_);
if (lean_obj_tag(v___x_4266_) == 0)
{
lean_dec_ref_known(v___x_4266_, 1);
v___y_4228_ = v_a_4166_;
v___y_4229_ = v_a_4167_;
v___y_4230_ = v_a_4168_;
v___y_4231_ = v_a_4169_;
v___y_4232_ = v_a_4170_;
v___y_4233_ = v_a_4171_;
goto v___jp_4227_;
}
else
{
lean_object* v_a_4267_; lean_object* v___x_4269_; uint8_t v_isShared_4270_; uint8_t v_isSharedCheck_4274_; 
lean_dec(v_a_4197_);
lean_dec(v_expectedType_x3f_4165_);
lean_dec_ref(v_tree_4164_);
v_a_4267_ = lean_ctor_get(v___x_4266_, 0);
v_isSharedCheck_4274_ = !lean_is_exclusive(v___x_4266_);
if (v_isSharedCheck_4274_ == 0)
{
v___x_4269_ = v___x_4266_;
v_isShared_4270_ = v_isSharedCheck_4274_;
goto v_resetjp_4268_;
}
else
{
lean_inc(v_a_4267_);
lean_dec(v___x_4266_);
v___x_4269_ = lean_box(0);
v_isShared_4270_ = v_isSharedCheck_4274_;
goto v_resetjp_4268_;
}
v_resetjp_4268_:
{
lean_object* v___x_4272_; 
if (v_isShared_4270_ == 0)
{
v___x_4272_ = v___x_4269_;
goto v_reusejp_4271_;
}
else
{
lean_object* v_reuseFailAlloc_4273_; 
v_reuseFailAlloc_4273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4273_, 0, v_a_4267_);
v___x_4272_ = v_reuseFailAlloc_4273_;
goto v_reusejp_4271_;
}
v_reusejp_4271_:
{
return v___x_4272_;
}
}
}
}
}
else
{
lean_object* v_a_4303_; lean_object* v___x_4305_; uint8_t v_isShared_4306_; uint8_t v_isSharedCheck_4310_; 
lean_dec(v_expectedType_x3f_4165_);
lean_dec_ref(v_tree_4164_);
v_a_4303_ = lean_ctor_get(v___x_4194_, 0);
v_isSharedCheck_4310_ = !lean_is_exclusive(v___x_4194_);
if (v_isSharedCheck_4310_ == 0)
{
v___x_4305_ = v___x_4194_;
v_isShared_4306_ = v_isSharedCheck_4310_;
goto v_resetjp_4304_;
}
else
{
lean_inc(v_a_4303_);
lean_dec(v___x_4194_);
v___x_4305_ = lean_box(0);
v_isShared_4306_ = v_isSharedCheck_4310_;
goto v_resetjp_4304_;
}
v_resetjp_4304_:
{
lean_object* v___x_4308_; 
if (v_isShared_4306_ == 0)
{
v___x_4308_ = v___x_4305_;
goto v_reusejp_4307_;
}
else
{
lean_object* v_reuseFailAlloc_4309_; 
v_reuseFailAlloc_4309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4309_, 0, v_a_4303_);
v___x_4308_ = v_reuseFailAlloc_4309_;
goto v_reusejp_4307_;
}
v_reusejp_4307_:
{
return v___x_4308_;
}
}
}
v___jp_4173_:
{
lean_object* v___x_4180_; 
v___x_4180_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore(v_tree_4164_, v___y_4178_, v___y_4177_, v___y_4176_, v___y_4175_, v___y_4174_, v___y_4179_);
if (lean_obj_tag(v___x_4180_) == 0)
{
lean_object* v_a_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; 
v_a_4181_ = lean_ctor_get(v___x_4180_, 0);
lean_inc(v_a_4181_);
lean_dec_ref_known(v___x_4180_, 1);
v___x_4182_ = lean_box(0);
v___x_4183_ = l_Lean_Elab_Term_ensureHasType(v_expectedType_x3f_4165_, v_a_4181_, v___x_4182_, v___x_4182_, v___y_4178_, v___y_4177_, v___y_4176_, v___y_4175_, v___y_4174_, v___y_4179_);
return v___x_4183_;
}
else
{
lean_dec(v_expectedType_x3f_4165_);
return v___x_4180_;
}
}
v___jp_4184_:
{
lean_object* v___x_4192_; lean_object* v___x_4193_; 
v___x_4192_ = lean_box(0);
v___x_4193_ = l_Lean_Elab_Term_ensureHasType(v_expectedType_x3f_4165_, v___y_4185_, v___x_4192_, v___x_4192_, v___y_4186_, v___y_4187_, v___y_4188_, v___y_4189_, v___y_4190_, v___y_4191_);
return v___x_4193_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___lam__0(lean_object* v_maxType_4311_, lean_object* v_nested_4312_, lean_object* v_f_x3f_4313_, uint8_t v_lhs_4314_, uint8_t v_isPred_4315_, lean_object* v_macroName_4316_, lean_object* v_stx_4317_, lean_object* v_stx_x27_4318_, lean_object* v___y_4319_, lean_object* v___y_4320_, lean_object* v___y_4321_, lean_object* v___y_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_){
_start:
{
lean_object* v___x_4326_; 
v___x_4326_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go(v_maxType_4311_, v_nested_4312_, v_f_x3f_4313_, v_lhs_4314_, v_isPred_4315_, v___y_4319_, v___y_4320_, v___y_4321_, v___y_4322_, v___y_4323_, v___y_4324_);
if (lean_obj_tag(v___x_4326_) == 0)
{
lean_object* v_a_4327_; lean_object* v___x_4329_; uint8_t v_isShared_4330_; uint8_t v_isSharedCheck_4335_; 
v_a_4327_ = lean_ctor_get(v___x_4326_, 0);
v_isSharedCheck_4335_ = !lean_is_exclusive(v___x_4326_);
if (v_isSharedCheck_4335_ == 0)
{
v___x_4329_ = v___x_4326_;
v_isShared_4330_ = v_isSharedCheck_4335_;
goto v_resetjp_4328_;
}
else
{
lean_inc(v_a_4327_);
lean_dec(v___x_4326_);
v___x_4329_ = lean_box(0);
v_isShared_4330_ = v_isSharedCheck_4335_;
goto v_resetjp_4328_;
}
v_resetjp_4328_:
{
lean_object* v___x_4331_; lean_object* v___x_4333_; 
v___x_4331_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4331_, 0, v_macroName_4316_);
lean_ctor_set(v___x_4331_, 1, v_stx_4317_);
lean_ctor_set(v___x_4331_, 2, v_stx_x27_4318_);
lean_ctor_set(v___x_4331_, 3, v_a_4327_);
if (v_isShared_4330_ == 0)
{
lean_ctor_set(v___x_4329_, 0, v___x_4331_);
v___x_4333_ = v___x_4329_;
goto v_reusejp_4332_;
}
else
{
lean_object* v_reuseFailAlloc_4334_; 
v_reuseFailAlloc_4334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4334_, 0, v___x_4331_);
v___x_4333_ = v_reuseFailAlloc_4334_;
goto v_reusejp_4332_;
}
v_reusejp_4332_:
{
return v___x_4333_;
}
}
}
else
{
lean_dec(v_stx_x27_4318_);
lean_dec(v_stx_4317_);
lean_dec(v_macroName_4316_);
return v___x_4326_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___lam__0___boxed(lean_object* v_maxType_4336_, lean_object* v_nested_4337_, lean_object* v_f_x3f_4338_, lean_object* v_lhs_4339_, lean_object* v_isPred_4340_, lean_object* v_macroName_4341_, lean_object* v_stx_4342_, lean_object* v_stx_x27_4343_, lean_object* v___y_4344_, lean_object* v___y_4345_, lean_object* v___y_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_, lean_object* v___y_4349_, lean_object* v___y_4350_){
_start:
{
uint8_t v_lhs_boxed_4351_; uint8_t v_isPred_boxed_4352_; lean_object* v_res_4353_; 
v_lhs_boxed_4351_ = lean_unbox(v_lhs_4339_);
v_isPred_boxed_4352_ = lean_unbox(v_isPred_4340_);
v_res_4353_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___lam__0(v_maxType_4336_, v_nested_4337_, v_f_x3f_4338_, v_lhs_boxed_4351_, v_isPred_boxed_4352_, v_macroName_4341_, v_stx_4342_, v_stx_x27_4343_, v___y_4344_, v___y_4345_, v___y_4346_, v___y_4347_, v___y_4348_, v___y_4349_);
lean_dec(v___y_4349_);
lean_dec_ref(v___y_4348_);
lean_dec(v___y_4347_);
lean_dec_ref(v___y_4346_);
lean_dec(v___y_4345_);
lean_dec_ref(v___y_4344_);
return v_res_4353_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go(lean_object* v_maxType_4354_, lean_object* v_t_4355_, lean_object* v_f_x3f_4356_, uint8_t v_lhs_4357_, uint8_t v_isPred_4358_, lean_object* v_a_4359_, lean_object* v_a_4360_, lean_object* v_a_4361_, lean_object* v_a_4362_, lean_object* v_a_4363_, lean_object* v_a_4364_){
_start:
{
switch(lean_obj_tag(v_t_4355_))
{
case 0:
{
lean_object* v_ref_4366_; lean_object* v_infoTrees_4367_; lean_object* v_val_4368_; lean_object* v___y_4370_; lean_object* v___y_4371_; lean_object* v___y_4372_; lean_object* v___y_4373_; lean_object* v_toCold_4374_; lean_object* v_currRecDepth_4375_; lean_object* v_ref_4376_; uint16_t v_optionFlags_4377_; uint8_t v_suppressElabErrors_4378_; uint8_t v_checkDeprecated_4379_; uint8_t v_isRecordingDeps_4380_; lean_object* v___y_4381_; lean_object* v___x_4403_; 
v_ref_4366_ = lean_ctor_get(v_t_4355_, 0);
v_infoTrees_4367_ = lean_ctor_get(v_t_4355_, 1);
v_val_4368_ = lean_ctor_get(v_t_4355_, 2);
lean_inc(v_a_4364_);
lean_inc_ref(v_a_4363_);
lean_inc(v_a_4362_);
lean_inc_ref(v_a_4361_);
lean_inc_ref(v_val_4368_);
v___x_4403_ = lean_infer_type(v_val_4368_, v_a_4361_, v_a_4362_, v_a_4363_, v_a_4364_);
if (lean_obj_tag(v___x_4403_) == 0)
{
lean_object* v_a_4404_; lean_object* v___x_4405_; 
v_a_4404_ = lean_ctor_get(v___x_4403_, 0);
lean_inc(v_a_4404_);
lean_dec_ref_known(v___x_4403_, 1);
v___x_4405_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux_getListInfo_spec__1___redArg(v_a_4404_, v_a_4362_);
if (lean_obj_tag(v___x_4405_) == 0)
{
lean_object* v_toCold_4406_; lean_object* v_options_4407_; lean_object* v_a_4408_; lean_object* v_inheritedTraceOptions_4409_; uint8_t v_hasTrace_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; lean_object* v___y_4414_; lean_object* v___y_4415_; lean_object* v___y_4416_; lean_object* v___y_4417_; lean_object* v___y_4418_; lean_object* v___y_4419_; lean_object* v___y_4477_; lean_object* v___y_4478_; lean_object* v___y_4479_; lean_object* v___y_4480_; lean_object* v___y_4481_; lean_object* v___y_4482_; 
v_toCold_4406_ = lean_ctor_get(v_a_4363_, 0);
v_options_4407_ = lean_ctor_get(v_toCold_4406_, 2);
v_a_4408_ = lean_ctor_get(v___x_4405_, 0);
lean_inc(v_a_4408_);
lean_dec_ref_known(v___x_4405_, 1);
v_inheritedTraceOptions_4409_ = lean_ctor_get(v_toCold_4406_, 11);
v_hasTrace_4410_ = lean_ctor_get_uint8(v_options_4407_, sizeof(void*)*1);
v___x_4411_ = l_Lean_Expr_cleanupAnnotations(v_a_4408_);
lean_dec(v_a_4408_);
v___x_4412_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__0));
if (v_hasTrace_4410_ == 0)
{
v___y_4477_ = v_a_4359_;
v___y_4478_ = v_a_4360_;
v___y_4479_ = v_a_4361_;
v___y_4480_ = v_a_4362_;
v___y_4481_ = v_a_4363_;
v___y_4482_ = v_a_4364_;
goto v___jp_4476_;
}
else
{
lean_object* v___x_4503_; uint8_t v___x_4504_; 
v___x_4503_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__3, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__3_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__3);
v___x_4504_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4409_, v_options_4407_, v___x_4503_);
if (v___x_4504_ == 0)
{
v___y_4477_ = v_a_4359_;
v___y_4478_ = v_a_4360_;
v___y_4479_ = v_a_4361_;
v___y_4480_ = v_a_4362_;
v___y_4481_ = v_a_4363_;
v___y_4482_ = v_a_4364_;
goto v___jp_4476_;
}
else
{
lean_object* v___x_4505_; lean_object* v___x_4506_; lean_object* v___x_4507_; lean_object* v___x_4508_; lean_object* v___x_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; 
v___x_4505_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__7, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__7_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__7);
lean_inc_ref(v_val_4368_);
v___x_4506_ = l_Lean_MessageData_ofExpr(v_val_4368_);
v___x_4507_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4507_, 0, v___x_4505_);
lean_ctor_set(v___x_4507_, 1, v___x_4506_);
v___x_4508_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__3, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__3_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__3);
v___x_4509_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4509_, 0, v___x_4507_);
lean_ctor_set(v___x_4509_, 1, v___x_4508_);
lean_inc_ref(v___x_4411_);
v___x_4510_ = l_Lean_MessageData_ofExpr(v___x_4411_);
v___x_4511_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4511_, 0, v___x_4509_);
lean_ctor_set(v___x_4511_, 1, v___x_4510_);
v___x_4512_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__9, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__9_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__9);
v___x_4513_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4513_, 0, v___x_4511_);
lean_ctor_set(v___x_4513_, 1, v___x_4512_);
lean_inc_ref(v_maxType_4354_);
v___x_4514_ = l_Lean_MessageData_ofExpr(v_maxType_4354_);
v___x_4515_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4515_, 0, v___x_4513_);
lean_ctor_set(v___x_4515_, 1, v___x_4514_);
v___x_4516_ = l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go_spec__0___redArg(v___x_4412_, v___x_4515_, v_a_4361_, v_a_4362_, v_a_4363_, v_a_4364_);
if (lean_obj_tag(v___x_4516_) == 0)
{
lean_dec_ref_known(v___x_4516_, 1);
v___y_4477_ = v_a_4359_;
v___y_4478_ = v_a_4360_;
v___y_4479_ = v_a_4361_;
v___y_4480_ = v_a_4362_;
v___y_4481_ = v_a_4363_;
v___y_4482_ = v_a_4364_;
goto v___jp_4476_;
}
else
{
lean_object* v_a_4517_; lean_object* v___x_4519_; uint8_t v_isShared_4520_; uint8_t v_isSharedCheck_4524_; 
lean_dec_ref(v___x_4411_);
lean_dec_ref_known(v_t_4355_, 3);
lean_dec(v_f_x3f_4356_);
lean_dec_ref(v_maxType_4354_);
v_a_4517_ = lean_ctor_get(v___x_4516_, 0);
v_isSharedCheck_4524_ = !lean_is_exclusive(v___x_4516_);
if (v_isSharedCheck_4524_ == 0)
{
v___x_4519_ = v___x_4516_;
v_isShared_4520_ = v_isSharedCheck_4524_;
goto v_resetjp_4518_;
}
else
{
lean_inc(v_a_4517_);
lean_dec(v___x_4516_);
v___x_4519_ = lean_box(0);
v_isShared_4520_ = v_isSharedCheck_4524_;
goto v_resetjp_4518_;
}
v_resetjp_4518_:
{
lean_object* v___x_4522_; 
if (v_isShared_4520_ == 0)
{
v___x_4522_ = v___x_4519_;
goto v_reusejp_4521_;
}
else
{
lean_object* v_reuseFailAlloc_4523_; 
v_reuseFailAlloc_4523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4523_, 0, v_a_4517_);
v___x_4522_ = v_reuseFailAlloc_4523_;
goto v_reusejp_4521_;
}
v_reusejp_4521_:
{
return v___x_4522_;
}
}
}
}
}
v___jp_4413_:
{
lean_object* v___x_4420_; 
lean_inc_ref(v___x_4411_);
lean_inc_ref(v_maxType_4354_);
v___x_4420_ = l_Lean_Meta_isExprDefEqGuarded(v_maxType_4354_, v___x_4411_, v___y_4416_, v___y_4417_, v___y_4418_, v___y_4419_);
if (lean_obj_tag(v___x_4420_) == 0)
{
lean_object* v_a_4421_; lean_object* v___x_4423_; uint8_t v_isShared_4424_; uint8_t v_isSharedCheck_4467_; 
v_a_4421_ = lean_ctor_get(v___x_4420_, 0);
v_isSharedCheck_4467_ = !lean_is_exclusive(v___x_4420_);
if (v_isSharedCheck_4467_ == 0)
{
v___x_4423_ = v___x_4420_;
v_isShared_4424_ = v_isSharedCheck_4467_;
goto v_resetjp_4422_;
}
else
{
lean_inc(v_a_4421_);
lean_dec(v___x_4420_);
v___x_4423_ = lean_box(0);
v_isShared_4424_ = v_isSharedCheck_4467_;
goto v_resetjp_4422_;
}
v_resetjp_4422_:
{
uint8_t v___x_4425_; 
v___x_4425_ = lean_unbox(v_a_4421_);
lean_dec(v_a_4421_);
if (v___x_4425_ == 0)
{
lean_object* v_toCold_4426_; lean_object* v_options_4427_; uint8_t v_hasTrace_4428_; 
lean_inc_ref(v_val_4368_);
lean_inc_ref(v_infoTrees_4367_);
lean_inc(v_ref_4366_);
lean_del_object(v___x_4423_);
lean_dec_ref_known(v_t_4355_, 3);
v_toCold_4426_ = lean_ctor_get(v___y_4418_, 0);
v_options_4427_ = lean_ctor_get(v_toCold_4426_, 2);
v_hasTrace_4428_ = lean_ctor_get_uint8(v_options_4427_, sizeof(void*)*1);
if (v_hasTrace_4428_ == 0)
{
lean_object* v_currRecDepth_4429_; lean_object* v_ref_4430_; uint16_t v_optionFlags_4431_; uint8_t v_suppressElabErrors_4432_; uint8_t v_checkDeprecated_4433_; uint8_t v_isRecordingDeps_4434_; 
lean_dec_ref(v___x_4411_);
v_currRecDepth_4429_ = lean_ctor_get(v___y_4418_, 1);
v_ref_4430_ = lean_ctor_get(v___y_4418_, 2);
v_optionFlags_4431_ = lean_ctor_get_uint16(v___y_4418_, sizeof(void*)*3);
v_suppressElabErrors_4432_ = lean_ctor_get_uint8(v___y_4418_, sizeof(void*)*3 + 2);
v_checkDeprecated_4433_ = lean_ctor_get_uint8(v___y_4418_, sizeof(void*)*3 + 3);
v_isRecordingDeps_4434_ = lean_ctor_get_uint8(v___y_4418_, sizeof(void*)*3 + 4);
v___y_4370_ = v___y_4414_;
v___y_4371_ = v___y_4415_;
v___y_4372_ = v___y_4416_;
v___y_4373_ = v___y_4417_;
v_toCold_4374_ = v_toCold_4426_;
v_currRecDepth_4375_ = v_currRecDepth_4429_;
v_ref_4376_ = v_ref_4430_;
v_optionFlags_4377_ = v_optionFlags_4431_;
v_suppressElabErrors_4378_ = v_suppressElabErrors_4432_;
v_checkDeprecated_4379_ = v_checkDeprecated_4433_;
v_isRecordingDeps_4380_ = v_isRecordingDeps_4434_;
v___y_4381_ = v___y_4419_;
goto v___jp_4369_;
}
else
{
lean_object* v_currRecDepth_4435_; lean_object* v_ref_4436_; uint16_t v_optionFlags_4437_; uint8_t v_suppressElabErrors_4438_; uint8_t v_checkDeprecated_4439_; uint8_t v_isRecordingDeps_4440_; lean_object* v_inheritedTraceOptions_4441_; lean_object* v___x_4442_; uint8_t v___x_4443_; 
v_currRecDepth_4435_ = lean_ctor_get(v___y_4418_, 1);
v_ref_4436_ = lean_ctor_get(v___y_4418_, 2);
v_optionFlags_4437_ = lean_ctor_get_uint16(v___y_4418_, sizeof(void*)*3);
v_suppressElabErrors_4438_ = lean_ctor_get_uint8(v___y_4418_, sizeof(void*)*3 + 2);
v_checkDeprecated_4439_ = lean_ctor_get_uint8(v___y_4418_, sizeof(void*)*3 + 3);
v_isRecordingDeps_4440_ = lean_ctor_get_uint8(v___y_4418_, sizeof(void*)*3 + 4);
v_inheritedTraceOptions_4441_ = lean_ctor_get(v_toCold_4426_, 11);
v___x_4442_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__3, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__3_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__3);
v___x_4443_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4441_, v_options_4427_, v___x_4442_);
if (v___x_4443_ == 0)
{
lean_dec_ref(v___x_4411_);
v___y_4370_ = v___y_4414_;
v___y_4371_ = v___y_4415_;
v___y_4372_ = v___y_4416_;
v___y_4373_ = v___y_4417_;
v_toCold_4374_ = v_toCold_4426_;
v_currRecDepth_4375_ = v_currRecDepth_4435_;
v_ref_4376_ = v_ref_4436_;
v_optionFlags_4377_ = v_optionFlags_4437_;
v_suppressElabErrors_4378_ = v_suppressElabErrors_4438_;
v_checkDeprecated_4379_ = v_checkDeprecated_4439_;
v_isRecordingDeps_4380_ = v_isRecordingDeps_4440_;
v___y_4381_ = v___y_4419_;
goto v___jp_4369_;
}
else
{
lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; lean_object* v___x_4451_; lean_object* v___x_4452_; lean_object* v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; 
v___x_4444_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__1, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__1_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__1);
lean_inc_ref(v_val_4368_);
v___x_4445_ = l_Lean_MessageData_ofExpr(v_val_4368_);
v___x_4446_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4446_, 0, v___x_4444_);
lean_ctor_set(v___x_4446_, 1, v___x_4445_);
v___x_4447_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__3, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__3_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__3);
v___x_4448_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4448_, 0, v___x_4446_);
lean_ctor_set(v___x_4448_, 1, v___x_4447_);
v___x_4449_ = l_Lean_MessageData_ofExpr(v___x_4411_);
v___x_4450_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4450_, 0, v___x_4448_);
lean_ctor_set(v___x_4450_, 1, v___x_4449_);
v___x_4451_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__5, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__5_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___closed__5);
v___x_4452_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4452_, 0, v___x_4450_);
lean_ctor_set(v___x_4452_, 1, v___x_4451_);
lean_inc_ref(v_maxType_4354_);
v___x_4453_ = l_Lean_MessageData_ofExpr(v_maxType_4354_);
v___x_4454_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4454_, 0, v___x_4452_);
lean_ctor_set(v___x_4454_, 1, v___x_4453_);
v___x_4455_ = l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go_spec__0___redArg(v___x_4412_, v___x_4454_, v___y_4416_, v___y_4417_, v___y_4418_, v___y_4419_);
if (lean_obj_tag(v___x_4455_) == 0)
{
lean_dec_ref_known(v___x_4455_, 1);
v___y_4370_ = v___y_4414_;
v___y_4371_ = v___y_4415_;
v___y_4372_ = v___y_4416_;
v___y_4373_ = v___y_4417_;
v_toCold_4374_ = v_toCold_4426_;
v_currRecDepth_4375_ = v_currRecDepth_4435_;
v_ref_4376_ = v_ref_4436_;
v_optionFlags_4377_ = v_optionFlags_4437_;
v_suppressElabErrors_4378_ = v_suppressElabErrors_4438_;
v_checkDeprecated_4379_ = v_checkDeprecated_4439_;
v_isRecordingDeps_4380_ = v_isRecordingDeps_4440_;
v___y_4381_ = v___y_4419_;
goto v___jp_4369_;
}
else
{
lean_object* v_a_4456_; lean_object* v___x_4458_; uint8_t v_isShared_4459_; uint8_t v_isSharedCheck_4463_; 
lean_dec_ref(v_val_4368_);
lean_dec_ref(v_infoTrees_4367_);
lean_dec(v_ref_4366_);
lean_dec_ref(v_maxType_4354_);
v_a_4456_ = lean_ctor_get(v___x_4455_, 0);
v_isSharedCheck_4463_ = !lean_is_exclusive(v___x_4455_);
if (v_isSharedCheck_4463_ == 0)
{
v___x_4458_ = v___x_4455_;
v_isShared_4459_ = v_isSharedCheck_4463_;
goto v_resetjp_4457_;
}
else
{
lean_inc(v_a_4456_);
lean_dec(v___x_4455_);
v___x_4458_ = lean_box(0);
v_isShared_4459_ = v_isSharedCheck_4463_;
goto v_resetjp_4457_;
}
v_resetjp_4457_:
{
lean_object* v___x_4461_; 
if (v_isShared_4459_ == 0)
{
v___x_4461_ = v___x_4458_;
goto v_reusejp_4460_;
}
else
{
lean_object* v_reuseFailAlloc_4462_; 
v_reuseFailAlloc_4462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4462_, 0, v_a_4456_);
v___x_4461_ = v_reuseFailAlloc_4462_;
goto v_reusejp_4460_;
}
v_reusejp_4460_:
{
return v___x_4461_;
}
}
}
}
}
}
else
{
lean_object* v___x_4465_; 
lean_dec_ref(v___x_4411_);
lean_dec_ref(v_maxType_4354_);
if (v_isShared_4424_ == 0)
{
lean_ctor_set(v___x_4423_, 0, v_t_4355_);
v___x_4465_ = v___x_4423_;
goto v_reusejp_4464_;
}
else
{
lean_object* v_reuseFailAlloc_4466_; 
v_reuseFailAlloc_4466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4466_, 0, v_t_4355_);
v___x_4465_ = v_reuseFailAlloc_4466_;
goto v_reusejp_4464_;
}
v_reusejp_4464_:
{
return v___x_4465_;
}
}
}
}
else
{
lean_object* v_a_4468_; lean_object* v___x_4470_; uint8_t v_isShared_4471_; uint8_t v_isSharedCheck_4475_; 
lean_dec_ref(v___x_4411_);
lean_dec_ref_known(v_t_4355_, 3);
lean_dec_ref(v_maxType_4354_);
v_a_4468_ = lean_ctor_get(v___x_4420_, 0);
v_isSharedCheck_4475_ = !lean_is_exclusive(v___x_4420_);
if (v_isSharedCheck_4475_ == 0)
{
v___x_4470_ = v___x_4420_;
v_isShared_4471_ = v_isSharedCheck_4475_;
goto v_resetjp_4469_;
}
else
{
lean_inc(v_a_4468_);
lean_dec(v___x_4420_);
v___x_4470_ = lean_box(0);
v_isShared_4471_ = v_isSharedCheck_4475_;
goto v_resetjp_4469_;
}
v_resetjp_4469_:
{
lean_object* v___x_4473_; 
if (v_isShared_4471_ == 0)
{
v___x_4473_ = v___x_4470_;
goto v_reusejp_4472_;
}
else
{
lean_object* v_reuseFailAlloc_4474_; 
v_reuseFailAlloc_4474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4474_, 0, v_a_4468_);
v___x_4473_ = v_reuseFailAlloc_4474_;
goto v_reusejp_4472_;
}
v_reusejp_4472_:
{
return v___x_4473_;
}
}
}
}
v___jp_4476_:
{
uint8_t v___x_4483_; 
v___x_4483_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_isUnknown(v___x_4411_);
if (v___x_4483_ == 0)
{
lean_dec(v_f_x3f_4356_);
v___y_4414_ = v___y_4477_;
v___y_4415_ = v___y_4478_;
v___y_4416_ = v___y_4479_;
v___y_4417_ = v___y_4480_;
v___y_4418_ = v___y_4481_;
v___y_4419_ = v___y_4482_;
goto v___jp_4413_;
}
else
{
if (lean_obj_tag(v_f_x3f_4356_) == 1)
{
lean_object* v_val_4484_; lean_object* v___x_4485_; 
v_val_4484_ = lean_ctor_get(v_f_x3f_4356_, 0);
lean_inc(v_val_4484_);
lean_dec_ref_known(v_f_x3f_4356_, 1);
v___x_4485_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHeterogeneousDefaultInstances(v_val_4484_, v_maxType_4354_, v_lhs_4357_, v___y_4479_, v___y_4480_, v___y_4481_, v___y_4482_);
lean_dec(v_val_4484_);
if (lean_obj_tag(v___x_4485_) == 0)
{
lean_object* v_a_4486_; lean_object* v___x_4488_; uint8_t v_isShared_4489_; uint8_t v_isSharedCheck_4494_; 
v_a_4486_ = lean_ctor_get(v___x_4485_, 0);
v_isSharedCheck_4494_ = !lean_is_exclusive(v___x_4485_);
if (v_isSharedCheck_4494_ == 0)
{
v___x_4488_ = v___x_4485_;
v_isShared_4489_ = v_isSharedCheck_4494_;
goto v_resetjp_4487_;
}
else
{
lean_inc(v_a_4486_);
lean_dec(v___x_4485_);
v___x_4488_ = lean_box(0);
v_isShared_4489_ = v_isSharedCheck_4494_;
goto v_resetjp_4487_;
}
v_resetjp_4487_:
{
uint8_t v___x_4490_; 
v___x_4490_ = lean_unbox(v_a_4486_);
lean_dec(v_a_4486_);
if (v___x_4490_ == 0)
{
lean_del_object(v___x_4488_);
v___y_4414_ = v___y_4477_;
v___y_4415_ = v___y_4478_;
v___y_4416_ = v___y_4479_;
v___y_4417_ = v___y_4480_;
v___y_4418_ = v___y_4481_;
v___y_4419_ = v___y_4482_;
goto v___jp_4413_;
}
else
{
lean_object* v___x_4492_; 
lean_dec_ref(v___x_4411_);
lean_dec_ref(v_maxType_4354_);
if (v_isShared_4489_ == 0)
{
lean_ctor_set(v___x_4488_, 0, v_t_4355_);
v___x_4492_ = v___x_4488_;
goto v_reusejp_4491_;
}
else
{
lean_object* v_reuseFailAlloc_4493_; 
v_reuseFailAlloc_4493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4493_, 0, v_t_4355_);
v___x_4492_ = v_reuseFailAlloc_4493_;
goto v_reusejp_4491_;
}
v_reusejp_4491_:
{
return v___x_4492_;
}
}
}
}
else
{
lean_object* v_a_4495_; lean_object* v___x_4497_; uint8_t v_isShared_4498_; uint8_t v_isSharedCheck_4502_; 
lean_dec_ref(v___x_4411_);
lean_dec_ref_known(v_t_4355_, 3);
lean_dec_ref(v_maxType_4354_);
v_a_4495_ = lean_ctor_get(v___x_4485_, 0);
v_isSharedCheck_4502_ = !lean_is_exclusive(v___x_4485_);
if (v_isSharedCheck_4502_ == 0)
{
v___x_4497_ = v___x_4485_;
v_isShared_4498_ = v_isSharedCheck_4502_;
goto v_resetjp_4496_;
}
else
{
lean_inc(v_a_4495_);
lean_dec(v___x_4485_);
v___x_4497_ = lean_box(0);
v_isShared_4498_ = v_isSharedCheck_4502_;
goto v_resetjp_4496_;
}
v_resetjp_4496_:
{
lean_object* v___x_4500_; 
if (v_isShared_4498_ == 0)
{
v___x_4500_ = v___x_4497_;
goto v_reusejp_4499_;
}
else
{
lean_object* v_reuseFailAlloc_4501_; 
v_reuseFailAlloc_4501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4501_, 0, v_a_4495_);
v___x_4500_ = v_reuseFailAlloc_4501_;
goto v_reusejp_4499_;
}
v_reusejp_4499_:
{
return v___x_4500_;
}
}
}
}
else
{
lean_dec(v_f_x3f_4356_);
v___y_4414_ = v___y_4477_;
v___y_4415_ = v___y_4478_;
v___y_4416_ = v___y_4479_;
v___y_4417_ = v___y_4480_;
v___y_4418_ = v___y_4481_;
v___y_4419_ = v___y_4482_;
goto v___jp_4413_;
}
}
}
}
else
{
lean_object* v_a_4525_; lean_object* v___x_4527_; uint8_t v_isShared_4528_; uint8_t v_isSharedCheck_4532_; 
lean_dec_ref_known(v_t_4355_, 3);
lean_dec(v_f_x3f_4356_);
lean_dec_ref(v_maxType_4354_);
v_a_4525_ = lean_ctor_get(v___x_4405_, 0);
v_isSharedCheck_4532_ = !lean_is_exclusive(v___x_4405_);
if (v_isSharedCheck_4532_ == 0)
{
v___x_4527_ = v___x_4405_;
v_isShared_4528_ = v_isSharedCheck_4532_;
goto v_resetjp_4526_;
}
else
{
lean_inc(v_a_4525_);
lean_dec(v___x_4405_);
v___x_4527_ = lean_box(0);
v_isShared_4528_ = v_isSharedCheck_4532_;
goto v_resetjp_4526_;
}
v_resetjp_4526_:
{
lean_object* v___x_4530_; 
if (v_isShared_4528_ == 0)
{
v___x_4530_ = v___x_4527_;
goto v_reusejp_4529_;
}
else
{
lean_object* v_reuseFailAlloc_4531_; 
v_reuseFailAlloc_4531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4531_, 0, v_a_4525_);
v___x_4530_ = v_reuseFailAlloc_4531_;
goto v_reusejp_4529_;
}
v_reusejp_4529_:
{
return v___x_4530_;
}
}
}
}
else
{
lean_object* v_a_4533_; lean_object* v___x_4535_; uint8_t v_isShared_4536_; uint8_t v_isSharedCheck_4540_; 
lean_dec_ref_known(v_t_4355_, 3);
lean_dec(v_f_x3f_4356_);
lean_dec_ref(v_maxType_4354_);
v_a_4533_ = lean_ctor_get(v___x_4403_, 0);
v_isSharedCheck_4540_ = !lean_is_exclusive(v___x_4403_);
if (v_isSharedCheck_4540_ == 0)
{
v___x_4535_ = v___x_4403_;
v_isShared_4536_ = v_isSharedCheck_4540_;
goto v_resetjp_4534_;
}
else
{
lean_inc(v_a_4533_);
lean_dec(v___x_4403_);
v___x_4535_ = lean_box(0);
v_isShared_4536_ = v_isSharedCheck_4540_;
goto v_resetjp_4534_;
}
v_resetjp_4534_:
{
lean_object* v___x_4538_; 
if (v_isShared_4536_ == 0)
{
v___x_4538_ = v___x_4535_;
goto v_reusejp_4537_;
}
else
{
lean_object* v_reuseFailAlloc_4539_; 
v_reuseFailAlloc_4539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4539_, 0, v_a_4533_);
v___x_4538_ = v_reuseFailAlloc_4539_;
goto v_reusejp_4537_;
}
v_reusejp_4537_:
{
return v___x_4538_;
}
}
}
v___jp_4369_:
{
lean_object* v___x_4382_; lean_object* v_ref_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; 
v___x_4382_ = lean_box(0);
v_ref_4383_ = l_Lean_replaceRef(v_ref_4366_, v_ref_4376_);
lean_inc(v_currRecDepth_4375_);
lean_inc_ref(v_toCold_4374_);
v___x_4384_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_4384_, 0, v_toCold_4374_);
lean_ctor_set(v___x_4384_, 1, v_currRecDepth_4375_);
lean_ctor_set(v___x_4384_, 2, v_ref_4383_);
lean_ctor_set_uint16(v___x_4384_, sizeof(void*)*3, v_optionFlags_4377_);
lean_ctor_set_uint8(v___x_4384_, sizeof(void*)*3 + 2, v_suppressElabErrors_4378_);
lean_ctor_set_uint8(v___x_4384_, sizeof(void*)*3 + 3, v_checkDeprecated_4379_);
lean_ctor_set_uint8(v___x_4384_, sizeof(void*)*3 + 4, v_isRecordingDeps_4380_);
v___x_4385_ = l_Lean_Elab_Term_mkCoe(v_maxType_4354_, v_val_4368_, v___x_4382_, v___x_4382_, v___x_4382_, v___x_4382_, v___y_4370_, v___y_4371_, v___y_4372_, v___y_4373_, v___x_4384_, v___y_4381_);
lean_dec_ref_known(v___x_4384_, 3);
if (lean_obj_tag(v___x_4385_) == 0)
{
lean_object* v_a_4386_; lean_object* v___x_4388_; uint8_t v_isShared_4389_; uint8_t v_isSharedCheck_4394_; 
v_a_4386_ = lean_ctor_get(v___x_4385_, 0);
v_isSharedCheck_4394_ = !lean_is_exclusive(v___x_4385_);
if (v_isSharedCheck_4394_ == 0)
{
v___x_4388_ = v___x_4385_;
v_isShared_4389_ = v_isSharedCheck_4394_;
goto v_resetjp_4387_;
}
else
{
lean_inc(v_a_4386_);
lean_dec(v___x_4385_);
v___x_4388_ = lean_box(0);
v_isShared_4389_ = v_isSharedCheck_4394_;
goto v_resetjp_4387_;
}
v_resetjp_4387_:
{
lean_object* v___x_4390_; lean_object* v___x_4392_; 
v___x_4390_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4390_, 0, v_ref_4366_);
lean_ctor_set(v___x_4390_, 1, v_infoTrees_4367_);
lean_ctor_set(v___x_4390_, 2, v_a_4386_);
if (v_isShared_4389_ == 0)
{
lean_ctor_set(v___x_4388_, 0, v___x_4390_);
v___x_4392_ = v___x_4388_;
goto v_reusejp_4391_;
}
else
{
lean_object* v_reuseFailAlloc_4393_; 
v_reuseFailAlloc_4393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4393_, 0, v___x_4390_);
v___x_4392_ = v_reuseFailAlloc_4393_;
goto v_reusejp_4391_;
}
v_reusejp_4391_:
{
return v___x_4392_;
}
}
}
else
{
lean_object* v_a_4395_; lean_object* v___x_4397_; uint8_t v_isShared_4398_; uint8_t v_isSharedCheck_4402_; 
lean_dec_ref(v_infoTrees_4367_);
lean_dec(v_ref_4366_);
v_a_4395_ = lean_ctor_get(v___x_4385_, 0);
v_isSharedCheck_4402_ = !lean_is_exclusive(v___x_4385_);
if (v_isSharedCheck_4402_ == 0)
{
v___x_4397_ = v___x_4385_;
v_isShared_4398_ = v_isSharedCheck_4402_;
goto v_resetjp_4396_;
}
else
{
lean_inc(v_a_4395_);
lean_dec(v___x_4385_);
v___x_4397_ = lean_box(0);
v_isShared_4398_ = v_isSharedCheck_4402_;
goto v_resetjp_4396_;
}
v_resetjp_4396_:
{
lean_object* v___x_4400_; 
if (v_isShared_4398_ == 0)
{
v___x_4400_ = v___x_4397_;
goto v_reusejp_4399_;
}
else
{
lean_object* v_reuseFailAlloc_4401_; 
v_reuseFailAlloc_4401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4401_, 0, v_a_4395_);
v___x_4400_ = v_reuseFailAlloc_4401_;
goto v_reusejp_4399_;
}
v_reusejp_4399_:
{
return v___x_4400_;
}
}
}
}
}
case 1:
{
lean_object* v_ref_4541_; uint8_t v_kind_4542_; lean_object* v_f_4543_; lean_object* v_lhs_4544_; lean_object* v_rhs_4545_; lean_object* v___x_4547_; uint8_t v_isShared_4548_; uint8_t v_isSharedCheck_4663_; 
lean_dec(v_f_x3f_4356_);
v_ref_4541_ = lean_ctor_get(v_t_4355_, 0);
v_kind_4542_ = lean_ctor_get_uint8(v_t_4355_, sizeof(void*)*4);
v_f_4543_ = lean_ctor_get(v_t_4355_, 1);
v_lhs_4544_ = lean_ctor_get(v_t_4355_, 2);
v_rhs_4545_ = lean_ctor_get(v_t_4355_, 3);
v_isSharedCheck_4663_ = !lean_is_exclusive(v_t_4355_);
if (v_isSharedCheck_4663_ == 0)
{
v___x_4547_ = v_t_4355_;
v_isShared_4548_ = v_isSharedCheck_4663_;
goto v_resetjp_4546_;
}
else
{
lean_inc(v_rhs_4545_);
lean_inc(v_lhs_4544_);
lean_inc(v_f_4543_);
lean_inc(v_ref_4541_);
lean_dec(v_t_4355_);
v___x_4547_ = lean_box(0);
v_isShared_4548_ = v_isSharedCheck_4663_;
goto v_resetjp_4546_;
}
v_resetjp_4546_:
{
uint8_t v_a_4550_; 
switch(v_kind_4542_)
{
case 2:
{
lean_object* v___x_4567_; uint8_t v___x_4568_; lean_object* v___x_4569_; 
lean_del_object(v___x_4547_);
v___x_4567_ = lean_box(0);
v___x_4568_ = 0;
v___x_4569_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go(v_maxType_4354_, v_rhs_4545_, v___x_4567_, v___x_4568_, v___x_4568_, v_a_4359_, v_a_4360_, v_a_4361_, v_a_4362_, v_a_4363_, v_a_4364_);
if (lean_obj_tag(v___x_4569_) == 0)
{
lean_object* v_a_4570_; lean_object* v___x_4572_; uint8_t v_isShared_4573_; uint8_t v_isSharedCheck_4578_; 
v_a_4570_ = lean_ctor_get(v___x_4569_, 0);
v_isSharedCheck_4578_ = !lean_is_exclusive(v___x_4569_);
if (v_isSharedCheck_4578_ == 0)
{
v___x_4572_ = v___x_4569_;
v_isShared_4573_ = v_isSharedCheck_4578_;
goto v_resetjp_4571_;
}
else
{
lean_inc(v_a_4570_);
lean_dec(v___x_4569_);
v___x_4572_ = lean_box(0);
v_isShared_4573_ = v_isSharedCheck_4578_;
goto v_resetjp_4571_;
}
v_resetjp_4571_:
{
lean_object* v___x_4574_; lean_object* v___x_4576_; 
v___x_4574_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_4574_, 0, v_ref_4541_);
lean_ctor_set(v___x_4574_, 1, v_f_4543_);
lean_ctor_set(v___x_4574_, 2, v_lhs_4544_);
lean_ctor_set(v___x_4574_, 3, v_a_4570_);
lean_ctor_set_uint8(v___x_4574_, sizeof(void*)*4, v_kind_4542_);
if (v_isShared_4573_ == 0)
{
lean_ctor_set(v___x_4572_, 0, v___x_4574_);
v___x_4576_ = v___x_4572_;
goto v_reusejp_4575_;
}
else
{
lean_object* v_reuseFailAlloc_4577_; 
v_reuseFailAlloc_4577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4577_, 0, v___x_4574_);
v___x_4576_ = v_reuseFailAlloc_4577_;
goto v_reusejp_4575_;
}
v_reusejp_4575_:
{
return v___x_4576_;
}
}
}
else
{
lean_dec_ref(v_lhs_4544_);
lean_dec_ref(v_f_4543_);
lean_dec(v_ref_4541_);
return v___x_4569_;
}
}
case 3:
{
lean_object* v___x_4579_; uint8_t v___x_4580_; lean_object* v___x_4581_; 
lean_del_object(v___x_4547_);
v___x_4579_ = lean_box(0);
v___x_4580_ = 0;
v___x_4581_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go(v_maxType_4354_, v_lhs_4544_, v___x_4579_, v___x_4580_, v___x_4580_, v_a_4359_, v_a_4360_, v_a_4361_, v_a_4362_, v_a_4363_, v_a_4364_);
if (lean_obj_tag(v___x_4581_) == 0)
{
lean_object* v_a_4582_; lean_object* v___x_4584_; uint8_t v_isShared_4585_; uint8_t v_isSharedCheck_4590_; 
v_a_4582_ = lean_ctor_get(v___x_4581_, 0);
v_isSharedCheck_4590_ = !lean_is_exclusive(v___x_4581_);
if (v_isSharedCheck_4590_ == 0)
{
v___x_4584_ = v___x_4581_;
v_isShared_4585_ = v_isSharedCheck_4590_;
goto v_resetjp_4583_;
}
else
{
lean_inc(v_a_4582_);
lean_dec(v___x_4581_);
v___x_4584_ = lean_box(0);
v_isShared_4585_ = v_isSharedCheck_4590_;
goto v_resetjp_4583_;
}
v_resetjp_4583_:
{
lean_object* v___x_4586_; lean_object* v___x_4588_; 
v___x_4586_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_4586_, 0, v_ref_4541_);
lean_ctor_set(v___x_4586_, 1, v_f_4543_);
lean_ctor_set(v___x_4586_, 2, v_a_4582_);
lean_ctor_set(v___x_4586_, 3, v_rhs_4545_);
lean_ctor_set_uint8(v___x_4586_, sizeof(void*)*4, v_kind_4542_);
if (v_isShared_4585_ == 0)
{
lean_ctor_set(v___x_4584_, 0, v___x_4586_);
v___x_4588_ = v___x_4584_;
goto v_reusejp_4587_;
}
else
{
lean_object* v_reuseFailAlloc_4589_; 
v_reuseFailAlloc_4589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4589_, 0, v___x_4586_);
v___x_4588_ = v_reuseFailAlloc_4589_;
goto v_reusejp_4587_;
}
v_reusejp_4587_:
{
return v___x_4588_;
}
}
}
else
{
lean_dec_ref(v_rhs_4545_);
lean_dec_ref(v_f_4543_);
lean_dec(v_ref_4541_);
return v___x_4581_;
}
}
default: 
{
if (v_isPred_4358_ == 0)
{
lean_object* v___x_4591_; 
lean_inc_ref(v_maxType_4354_);
v___x_4591_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_hasHomogeneousInstance(v_f_4543_, v_maxType_4354_, v_a_4361_, v_a_4362_, v_a_4363_, v_a_4364_);
if (lean_obj_tag(v___x_4591_) == 0)
{
lean_object* v_a_4592_; uint8_t v___x_4593_; 
v_a_4592_ = lean_ctor_get(v___x_4591_, 0);
lean_inc(v_a_4592_);
lean_dec_ref_known(v___x_4591_, 1);
v___x_4593_ = lean_unbox(v_a_4592_);
if (v___x_4593_ == 0)
{
lean_object* v_toCold_4594_; lean_object* v_currRecDepth_4595_; lean_object* v_ref_4596_; uint16_t v_optionFlags_4597_; uint8_t v_suppressElabErrors_4598_; uint8_t v_checkDeprecated_4599_; uint8_t v_isRecordingDeps_4600_; lean_object* v___x_4601_; lean_object* v_ref_4602_; lean_object* v___x_4603_; lean_object* v___x_4604_; 
lean_dec(v_a_4592_);
lean_del_object(v___x_4547_);
lean_dec_ref(v_maxType_4354_);
v_toCold_4594_ = lean_ctor_get(v_a_4363_, 0);
v_currRecDepth_4595_ = lean_ctor_get(v_a_4363_, 1);
v_ref_4596_ = lean_ctor_get(v_a_4363_, 2);
v_optionFlags_4597_ = lean_ctor_get_uint16(v_a_4363_, sizeof(void*)*3);
v_suppressElabErrors_4598_ = lean_ctor_get_uint8(v_a_4363_, sizeof(void*)*3 + 2);
v_checkDeprecated_4599_ = lean_ctor_get_uint8(v_a_4363_, sizeof(void*)*3 + 3);
v_isRecordingDeps_4600_ = lean_ctor_get_uint8(v_a_4363_, sizeof(void*)*3 + 4);
v___x_4601_ = lean_box(0);
v_ref_4602_ = l_Lean_replaceRef(v_ref_4541_, v_ref_4596_);
lean_inc(v_currRecDepth_4595_);
lean_inc_ref(v_toCold_4594_);
v___x_4603_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_4603_, 0, v_toCold_4594_);
lean_ctor_set(v___x_4603_, 1, v_currRecDepth_4595_);
lean_ctor_set(v___x_4603_, 2, v_ref_4602_);
lean_ctor_set_uint16(v___x_4603_, sizeof(void*)*3, v_optionFlags_4597_);
lean_ctor_set_uint8(v___x_4603_, sizeof(void*)*3 + 2, v_suppressElabErrors_4598_);
lean_ctor_set_uint8(v___x_4603_, sizeof(void*)*3 + 3, v_checkDeprecated_4599_);
lean_ctor_set_uint8(v___x_4603_, sizeof(void*)*3 + 4, v_isRecordingDeps_4600_);
v___x_4604_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr(v_lhs_4544_, v___x_4601_, v_a_4359_, v_a_4360_, v_a_4361_, v_a_4362_, v___x_4603_, v_a_4364_);
if (lean_obj_tag(v___x_4604_) == 0)
{
lean_object* v_a_4605_; lean_object* v___x_4606_; 
v_a_4605_ = lean_ctor_get(v___x_4604_, 0);
lean_inc(v_a_4605_);
lean_dec_ref_known(v___x_4604_, 1);
v___x_4606_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr(v_rhs_4545_, v___x_4601_, v_a_4359_, v_a_4360_, v_a_4361_, v_a_4362_, v___x_4603_, v_a_4364_);
if (lean_obj_tag(v___x_4606_) == 0)
{
lean_object* v_a_4607_; uint8_t v___x_4608_; uint8_t v___x_4609_; lean_object* v___x_4610_; 
v_a_4607_ = lean_ctor_get(v___x_4606_, 0);
lean_inc(v_a_4607_);
lean_dec_ref_known(v___x_4606_, 1);
v___x_4608_ = 1;
v___x_4609_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_instBEqBinOpKind_beq(v_kind_4542_, v___x_4608_);
v___x_4610_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_mkBinOp(v___x_4609_, v_f_4543_, v_a_4605_, v_a_4607_, v_a_4359_, v_a_4360_, v_a_4361_, v_a_4362_, v___x_4603_, v_a_4364_);
lean_dec_ref_known(v___x_4603_, 3);
if (lean_obj_tag(v___x_4610_) == 0)
{
lean_object* v_a_4611_; lean_object* v___x_4612_; 
v_a_4611_ = lean_ctor_get(v___x_4610_, 0);
lean_inc(v_a_4611_);
lean_dec_ref_known(v___x_4610_, 1);
v___x_4612_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processLeaf_spec__0___redArg(v_a_4364_);
if (lean_obj_tag(v___x_4612_) == 0)
{
lean_object* v_a_4613_; lean_object* v___x_4615_; uint8_t v_isShared_4616_; uint8_t v_isSharedCheck_4621_; 
v_a_4613_ = lean_ctor_get(v___x_4612_, 0);
v_isSharedCheck_4621_ = !lean_is_exclusive(v___x_4612_);
if (v_isSharedCheck_4621_ == 0)
{
v___x_4615_ = v___x_4612_;
v_isShared_4616_ = v_isSharedCheck_4621_;
goto v_resetjp_4614_;
}
else
{
lean_inc(v_a_4613_);
lean_dec(v___x_4612_);
v___x_4615_ = lean_box(0);
v_isShared_4616_ = v_isSharedCheck_4621_;
goto v_resetjp_4614_;
}
v_resetjp_4614_:
{
lean_object* v___x_4617_; lean_object* v___x_4619_; 
v___x_4617_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4617_, 0, v_ref_4541_);
lean_ctor_set(v___x_4617_, 1, v_a_4613_);
lean_ctor_set(v___x_4617_, 2, v_a_4611_);
if (v_isShared_4616_ == 0)
{
lean_ctor_set(v___x_4615_, 0, v___x_4617_);
v___x_4619_ = v___x_4615_;
goto v_reusejp_4618_;
}
else
{
lean_object* v_reuseFailAlloc_4620_; 
v_reuseFailAlloc_4620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4620_, 0, v___x_4617_);
v___x_4619_ = v_reuseFailAlloc_4620_;
goto v_reusejp_4618_;
}
v_reusejp_4618_:
{
return v___x_4619_;
}
}
}
else
{
lean_object* v_a_4622_; lean_object* v___x_4624_; uint8_t v_isShared_4625_; uint8_t v_isSharedCheck_4629_; 
lean_dec(v_a_4611_);
lean_dec(v_ref_4541_);
v_a_4622_ = lean_ctor_get(v___x_4612_, 0);
v_isSharedCheck_4629_ = !lean_is_exclusive(v___x_4612_);
if (v_isSharedCheck_4629_ == 0)
{
v___x_4624_ = v___x_4612_;
v_isShared_4625_ = v_isSharedCheck_4629_;
goto v_resetjp_4623_;
}
else
{
lean_inc(v_a_4622_);
lean_dec(v___x_4612_);
v___x_4624_ = lean_box(0);
v_isShared_4625_ = v_isSharedCheck_4629_;
goto v_resetjp_4623_;
}
v_resetjp_4623_:
{
lean_object* v___x_4627_; 
if (v_isShared_4625_ == 0)
{
v___x_4627_ = v___x_4624_;
goto v_reusejp_4626_;
}
else
{
lean_object* v_reuseFailAlloc_4628_; 
v_reuseFailAlloc_4628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4628_, 0, v_a_4622_);
v___x_4627_ = v_reuseFailAlloc_4628_;
goto v_reusejp_4626_;
}
v_reusejp_4626_:
{
return v___x_4627_;
}
}
}
}
else
{
lean_object* v_a_4630_; lean_object* v___x_4632_; uint8_t v_isShared_4633_; uint8_t v_isSharedCheck_4637_; 
lean_dec(v_ref_4541_);
v_a_4630_ = lean_ctor_get(v___x_4610_, 0);
v_isSharedCheck_4637_ = !lean_is_exclusive(v___x_4610_);
if (v_isSharedCheck_4637_ == 0)
{
v___x_4632_ = v___x_4610_;
v_isShared_4633_ = v_isSharedCheck_4637_;
goto v_resetjp_4631_;
}
else
{
lean_inc(v_a_4630_);
lean_dec(v___x_4610_);
v___x_4632_ = lean_box(0);
v_isShared_4633_ = v_isSharedCheck_4637_;
goto v_resetjp_4631_;
}
v_resetjp_4631_:
{
lean_object* v___x_4635_; 
if (v_isShared_4633_ == 0)
{
v___x_4635_ = v___x_4632_;
goto v_reusejp_4634_;
}
else
{
lean_object* v_reuseFailAlloc_4636_; 
v_reuseFailAlloc_4636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4636_, 0, v_a_4630_);
v___x_4635_ = v_reuseFailAlloc_4636_;
goto v_reusejp_4634_;
}
v_reusejp_4634_:
{
return v___x_4635_;
}
}
}
}
else
{
lean_object* v_a_4638_; lean_object* v___x_4640_; uint8_t v_isShared_4641_; uint8_t v_isSharedCheck_4645_; 
lean_dec(v_a_4605_);
lean_dec_ref_known(v___x_4603_, 3);
lean_dec_ref(v_f_4543_);
lean_dec(v_ref_4541_);
v_a_4638_ = lean_ctor_get(v___x_4606_, 0);
v_isSharedCheck_4645_ = !lean_is_exclusive(v___x_4606_);
if (v_isSharedCheck_4645_ == 0)
{
v___x_4640_ = v___x_4606_;
v_isShared_4641_ = v_isSharedCheck_4645_;
goto v_resetjp_4639_;
}
else
{
lean_inc(v_a_4638_);
lean_dec(v___x_4606_);
v___x_4640_ = lean_box(0);
v_isShared_4641_ = v_isSharedCheck_4645_;
goto v_resetjp_4639_;
}
v_resetjp_4639_:
{
lean_object* v___x_4643_; 
if (v_isShared_4641_ == 0)
{
v___x_4643_ = v___x_4640_;
goto v_reusejp_4642_;
}
else
{
lean_object* v_reuseFailAlloc_4644_; 
v_reuseFailAlloc_4644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4644_, 0, v_a_4638_);
v___x_4643_ = v_reuseFailAlloc_4644_;
goto v_reusejp_4642_;
}
v_reusejp_4642_:
{
return v___x_4643_;
}
}
}
}
else
{
lean_object* v_a_4646_; lean_object* v___x_4648_; uint8_t v_isShared_4649_; uint8_t v_isSharedCheck_4653_; 
lean_dec_ref_known(v___x_4603_, 3);
lean_dec_ref(v_rhs_4545_);
lean_dec_ref(v_f_4543_);
lean_dec(v_ref_4541_);
v_a_4646_ = lean_ctor_get(v___x_4604_, 0);
v_isSharedCheck_4653_ = !lean_is_exclusive(v___x_4604_);
if (v_isSharedCheck_4653_ == 0)
{
v___x_4648_ = v___x_4604_;
v_isShared_4649_ = v_isSharedCheck_4653_;
goto v_resetjp_4647_;
}
else
{
lean_inc(v_a_4646_);
lean_dec(v___x_4604_);
v___x_4648_ = lean_box(0);
v_isShared_4649_ = v_isSharedCheck_4653_;
goto v_resetjp_4647_;
}
v_resetjp_4647_:
{
lean_object* v___x_4651_; 
if (v_isShared_4649_ == 0)
{
v___x_4651_ = v___x_4648_;
goto v_reusejp_4650_;
}
else
{
lean_object* v_reuseFailAlloc_4652_; 
v_reuseFailAlloc_4652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4652_, 0, v_a_4646_);
v___x_4651_ = v_reuseFailAlloc_4652_;
goto v_reusejp_4650_;
}
v_reusejp_4650_:
{
return v___x_4651_;
}
}
}
}
else
{
uint8_t v___x_4654_; 
v___x_4654_ = lean_unbox(v_a_4592_);
lean_dec(v_a_4592_);
v_a_4550_ = v___x_4654_;
goto v___jp_4549_;
}
}
else
{
lean_object* v_a_4655_; lean_object* v___x_4657_; uint8_t v_isShared_4658_; uint8_t v_isSharedCheck_4662_; 
lean_del_object(v___x_4547_);
lean_dec_ref(v_rhs_4545_);
lean_dec_ref(v_lhs_4544_);
lean_dec_ref(v_f_4543_);
lean_dec(v_ref_4541_);
lean_dec_ref(v_maxType_4354_);
v_a_4655_ = lean_ctor_get(v___x_4591_, 0);
v_isSharedCheck_4662_ = !lean_is_exclusive(v___x_4591_);
if (v_isSharedCheck_4662_ == 0)
{
v___x_4657_ = v___x_4591_;
v_isShared_4658_ = v_isSharedCheck_4662_;
goto v_resetjp_4656_;
}
else
{
lean_inc(v_a_4655_);
lean_dec(v___x_4591_);
v___x_4657_ = lean_box(0);
v_isShared_4658_ = v_isSharedCheck_4662_;
goto v_resetjp_4656_;
}
v_resetjp_4656_:
{
lean_object* v___x_4660_; 
if (v_isShared_4658_ == 0)
{
v___x_4660_ = v___x_4657_;
goto v_reusejp_4659_;
}
else
{
lean_object* v_reuseFailAlloc_4661_; 
v_reuseFailAlloc_4661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4661_, 0, v_a_4655_);
v___x_4660_ = v_reuseFailAlloc_4661_;
goto v_reusejp_4659_;
}
v_reusejp_4659_:
{
return v___x_4660_;
}
}
}
}
else
{
v_a_4550_ = v_isPred_4358_;
goto v___jp_4549_;
}
}
}
v___jp_4549_:
{
lean_object* v___x_4551_; uint8_t v___x_4552_; lean_object* v___x_4553_; 
lean_inc_ref(v_f_4543_);
v___x_4551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4551_, 0, v_f_4543_);
v___x_4552_ = 0;
lean_inc_ref(v___x_4551_);
lean_inc_ref(v_maxType_4354_);
v___x_4553_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go(v_maxType_4354_, v_lhs_4544_, v___x_4551_, v_a_4550_, v___x_4552_, v_a_4359_, v_a_4360_, v_a_4361_, v_a_4362_, v_a_4363_, v_a_4364_);
if (lean_obj_tag(v___x_4553_) == 0)
{
lean_object* v_a_4554_; lean_object* v___x_4555_; 
v_a_4554_ = lean_ctor_get(v___x_4553_, 0);
lean_inc(v_a_4554_);
lean_dec_ref_known(v___x_4553_, 1);
v___x_4555_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go(v_maxType_4354_, v_rhs_4545_, v___x_4551_, v___x_4552_, v___x_4552_, v_a_4359_, v_a_4360_, v_a_4361_, v_a_4362_, v_a_4363_, v_a_4364_);
if (lean_obj_tag(v___x_4555_) == 0)
{
lean_object* v_a_4556_; lean_object* v___x_4558_; uint8_t v_isShared_4559_; uint8_t v_isSharedCheck_4566_; 
v_a_4556_ = lean_ctor_get(v___x_4555_, 0);
v_isSharedCheck_4566_ = !lean_is_exclusive(v___x_4555_);
if (v_isSharedCheck_4566_ == 0)
{
v___x_4558_ = v___x_4555_;
v_isShared_4559_ = v_isSharedCheck_4566_;
goto v_resetjp_4557_;
}
else
{
lean_inc(v_a_4556_);
lean_dec(v___x_4555_);
v___x_4558_ = lean_box(0);
v_isShared_4559_ = v_isSharedCheck_4566_;
goto v_resetjp_4557_;
}
v_resetjp_4557_:
{
lean_object* v___x_4561_; 
if (v_isShared_4548_ == 0)
{
lean_ctor_set(v___x_4547_, 3, v_a_4556_);
lean_ctor_set(v___x_4547_, 2, v_a_4554_);
v___x_4561_ = v___x_4547_;
goto v_reusejp_4560_;
}
else
{
lean_object* v_reuseFailAlloc_4565_; 
v_reuseFailAlloc_4565_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4565_, 0, v_ref_4541_);
lean_ctor_set(v_reuseFailAlloc_4565_, 1, v_f_4543_);
lean_ctor_set(v_reuseFailAlloc_4565_, 2, v_a_4554_);
lean_ctor_set(v_reuseFailAlloc_4565_, 3, v_a_4556_);
lean_ctor_set_uint8(v_reuseFailAlloc_4565_, sizeof(void*)*4, v_kind_4542_);
v___x_4561_ = v_reuseFailAlloc_4565_;
goto v_reusejp_4560_;
}
v_reusejp_4560_:
{
lean_object* v___x_4563_; 
if (v_isShared_4559_ == 0)
{
lean_ctor_set(v___x_4558_, 0, v___x_4561_);
v___x_4563_ = v___x_4558_;
goto v_reusejp_4562_;
}
else
{
lean_object* v_reuseFailAlloc_4564_; 
v_reuseFailAlloc_4564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4564_, 0, v___x_4561_);
v___x_4563_ = v_reuseFailAlloc_4564_;
goto v_reusejp_4562_;
}
v_reusejp_4562_:
{
return v___x_4563_;
}
}
}
}
else
{
lean_dec(v_a_4554_);
lean_del_object(v___x_4547_);
lean_dec_ref(v_f_4543_);
lean_dec(v_ref_4541_);
return v___x_4555_;
}
}
else
{
lean_dec_ref_known(v___x_4551_, 1);
lean_del_object(v___x_4547_);
lean_dec_ref(v_rhs_4545_);
lean_dec_ref(v_f_4543_);
lean_dec(v_ref_4541_);
lean_dec_ref(v_maxType_4354_);
return v___x_4553_;
}
}
}
}
case 2:
{
lean_object* v_ref_4664_; lean_object* v_f_4665_; lean_object* v_arg_4666_; lean_object* v___x_4668_; uint8_t v_isShared_4669_; uint8_t v_isSharedCheck_4684_; 
lean_dec(v_f_x3f_4356_);
v_ref_4664_ = lean_ctor_get(v_t_4355_, 0);
v_f_4665_ = lean_ctor_get(v_t_4355_, 1);
v_arg_4666_ = lean_ctor_get(v_t_4355_, 2);
v_isSharedCheck_4684_ = !lean_is_exclusive(v_t_4355_);
if (v_isSharedCheck_4684_ == 0)
{
v___x_4668_ = v_t_4355_;
v_isShared_4669_ = v_isSharedCheck_4684_;
goto v_resetjp_4667_;
}
else
{
lean_inc(v_arg_4666_);
lean_inc(v_f_4665_);
lean_inc(v_ref_4664_);
lean_dec(v_t_4355_);
v___x_4668_ = lean_box(0);
v_isShared_4669_ = v_isSharedCheck_4684_;
goto v_resetjp_4667_;
}
v_resetjp_4667_:
{
lean_object* v___x_4670_; uint8_t v___x_4671_; lean_object* v___x_4672_; 
v___x_4670_ = lean_box(0);
v___x_4671_ = 0;
v___x_4672_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go(v_maxType_4354_, v_arg_4666_, v___x_4670_, v___x_4671_, v___x_4671_, v_a_4359_, v_a_4360_, v_a_4361_, v_a_4362_, v_a_4363_, v_a_4364_);
if (lean_obj_tag(v___x_4672_) == 0)
{
lean_object* v_a_4673_; lean_object* v___x_4675_; uint8_t v_isShared_4676_; uint8_t v_isSharedCheck_4683_; 
v_a_4673_ = lean_ctor_get(v___x_4672_, 0);
v_isSharedCheck_4683_ = !lean_is_exclusive(v___x_4672_);
if (v_isSharedCheck_4683_ == 0)
{
v___x_4675_ = v___x_4672_;
v_isShared_4676_ = v_isSharedCheck_4683_;
goto v_resetjp_4674_;
}
else
{
lean_inc(v_a_4673_);
lean_dec(v___x_4672_);
v___x_4675_ = lean_box(0);
v_isShared_4676_ = v_isSharedCheck_4683_;
goto v_resetjp_4674_;
}
v_resetjp_4674_:
{
lean_object* v___x_4678_; 
if (v_isShared_4669_ == 0)
{
lean_ctor_set(v___x_4668_, 2, v_a_4673_);
v___x_4678_ = v___x_4668_;
goto v_reusejp_4677_;
}
else
{
lean_object* v_reuseFailAlloc_4682_; 
v_reuseFailAlloc_4682_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4682_, 0, v_ref_4664_);
lean_ctor_set(v_reuseFailAlloc_4682_, 1, v_f_4665_);
lean_ctor_set(v_reuseFailAlloc_4682_, 2, v_a_4673_);
v___x_4678_ = v_reuseFailAlloc_4682_;
goto v_reusejp_4677_;
}
v_reusejp_4677_:
{
lean_object* v___x_4680_; 
if (v_isShared_4676_ == 0)
{
lean_ctor_set(v___x_4675_, 0, v___x_4678_);
v___x_4680_ = v___x_4675_;
goto v_reusejp_4679_;
}
else
{
lean_object* v_reuseFailAlloc_4681_; 
v_reuseFailAlloc_4681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4681_, 0, v___x_4678_);
v___x_4680_ = v_reuseFailAlloc_4681_;
goto v_reusejp_4679_;
}
v_reusejp_4679_:
{
return v___x_4680_;
}
}
}
}
else
{
lean_del_object(v___x_4668_);
lean_dec_ref(v_f_4665_);
lean_dec(v_ref_4664_);
return v___x_4672_;
}
}
}
default: 
{
lean_object* v_macroName_4685_; lean_object* v_stx_4686_; lean_object* v_stx_x27_4687_; lean_object* v_nested_4688_; lean_object* v_toCold_4689_; lean_object* v_currRecDepth_4690_; lean_object* v_ref_4691_; uint16_t v_optionFlags_4692_; uint8_t v_suppressElabErrors_4693_; uint8_t v_checkDeprecated_4694_; uint8_t v_isRecordingDeps_4695_; lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v___f_4698_; lean_object* v_ref_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; 
v_macroName_4685_ = lean_ctor_get(v_t_4355_, 0);
lean_inc(v_macroName_4685_);
v_stx_4686_ = lean_ctor_get(v_t_4355_, 1);
lean_inc_n(v_stx_4686_, 2);
v_stx_x27_4687_ = lean_ctor_get(v_t_4355_, 2);
lean_inc_n(v_stx_x27_4687_, 2);
v_nested_4688_ = lean_ctor_get(v_t_4355_, 3);
lean_inc_ref(v_nested_4688_);
lean_dec_ref_known(v_t_4355_, 4);
v_toCold_4689_ = lean_ctor_get(v_a_4363_, 0);
v_currRecDepth_4690_ = lean_ctor_get(v_a_4363_, 1);
v_ref_4691_ = lean_ctor_get(v_a_4363_, 2);
v_optionFlags_4692_ = lean_ctor_get_uint16(v_a_4363_, sizeof(void*)*3);
v_suppressElabErrors_4693_ = lean_ctor_get_uint8(v_a_4363_, sizeof(void*)*3 + 2);
v_checkDeprecated_4694_ = lean_ctor_get_uint8(v_a_4363_, sizeof(void*)*3 + 3);
v_isRecordingDeps_4695_ = lean_ctor_get_uint8(v_a_4363_, sizeof(void*)*3 + 4);
v___x_4696_ = lean_box(v_lhs_4357_);
v___x_4697_ = lean_box(v_isPred_4358_);
v___f_4698_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___lam__0___boxed), 15, 8);
lean_closure_set(v___f_4698_, 0, v_maxType_4354_);
lean_closure_set(v___f_4698_, 1, v_nested_4688_);
lean_closure_set(v___f_4698_, 2, v_f_x3f_4356_);
lean_closure_set(v___f_4698_, 3, v___x_4696_);
lean_closure_set(v___f_4698_, 4, v___x_4697_);
lean_closure_set(v___f_4698_, 5, v_macroName_4685_);
lean_closure_set(v___f_4698_, 6, v_stx_4686_);
lean_closure_set(v___f_4698_, 7, v_stx_x27_4687_);
v_ref_4699_ = l_Lean_replaceRef(v_stx_4686_, v_ref_4691_);
lean_inc(v_currRecDepth_4690_);
lean_inc_ref(v_toCold_4689_);
v___x_4700_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_4700_, 0, v_toCold_4689_);
lean_ctor_set(v___x_4700_, 1, v_currRecDepth_4690_);
lean_ctor_set(v___x_4700_, 2, v_ref_4699_);
lean_ctor_set_uint16(v___x_4700_, sizeof(void*)*3, v_optionFlags_4692_);
lean_ctor_set_uint8(v___x_4700_, sizeof(void*)*3 + 2, v_suppressElabErrors_4693_);
lean_ctor_set_uint8(v___x_4700_, sizeof(void*)*3 + 3, v_checkDeprecated_4694_);
lean_ctor_set_uint8(v___x_4700_, sizeof(void*)*3 + 4, v_isRecordingDeps_4695_);
v___x_4701_ = l_Lean_Elab_Term_withPushMacroExpansionStack___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go_spec__0___redArg(v_stx_4686_, v_stx_x27_4687_, v___f_4698_, v_a_4359_, v_a_4360_, v_a_4361_, v_a_4362_, v___x_4700_, v_a_4364_);
lean_dec_ref_known(v___x_4700_, 3);
return v___x_4701_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe(lean_object* v_t_4702_, lean_object* v_maxType_4703_, uint8_t v_isPred_4704_, lean_object* v_a_4705_, lean_object* v_a_4706_, lean_object* v_a_4707_, lean_object* v_a_4708_, lean_object* v_a_4709_, lean_object* v_a_4710_){
_start:
{
lean_object* v___x_4712_; uint8_t v___x_4713_; lean_object* v___x_4714_; 
v___x_4712_ = lean_box(0);
v___x_4713_ = 0;
v___x_4714_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go(v_maxType_4703_, v_t_4702_, v___x_4712_, v___x_4713_, v_isPred_4704_, v_a_4705_, v_a_4706_, v_a_4707_, v_a_4708_, v_a_4709_, v_a_4710_);
return v___x_4714_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe___boxed(lean_object* v_t_4715_, lean_object* v_maxType_4716_, lean_object* v_isPred_4717_, lean_object* v_a_4718_, lean_object* v_a_4719_, lean_object* v_a_4720_, lean_object* v_a_4721_, lean_object* v_a_4722_, lean_object* v_a_4723_, lean_object* v_a_4724_){
_start:
{
uint8_t v_isPred_boxed_4725_; lean_object* v_res_4726_; 
v_isPred_boxed_4725_ = lean_unbox(v_isPred_4717_);
v_res_4726_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe(v_t_4715_, v_maxType_4716_, v_isPred_boxed_4725_, v_a_4718_, v_a_4719_, v_a_4720_, v_a_4721_, v_a_4722_, v_a_4723_);
lean_dec(v_a_4723_);
lean_dec_ref(v_a_4722_);
lean_dec(v_a_4721_);
lean_dec_ref(v_a_4720_);
lean_dec(v_a_4719_);
lean_dec_ref(v_a_4718_);
return v_res_4726_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___boxed(lean_object* v_tree_4727_, lean_object* v_expectedType_x3f_4728_, lean_object* v_a_4729_, lean_object* v_a_4730_, lean_object* v_a_4731_, lean_object* v_a_4732_, lean_object* v_a_4733_, lean_object* v_a_4734_, lean_object* v_a_4735_){
_start:
{
lean_object* v_res_4736_; 
v_res_4736_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr(v_tree_4727_, v_expectedType_x3f_4728_, v_a_4729_, v_a_4730_, v_a_4731_, v_a_4732_, v_a_4733_, v_a_4734_);
lean_dec(v_a_4734_);
lean_dec_ref(v_a_4733_);
lean_dec(v_a_4732_);
lean_dec_ref(v_a_4731_);
lean_dec(v_a_4730_);
lean_dec_ref(v_a_4729_);
return v_res_4736_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go___boxed(lean_object* v_maxType_4737_, lean_object* v_t_4738_, lean_object* v_f_x3f_4739_, lean_object* v_lhs_4740_, lean_object* v_isPred_4741_, lean_object* v_a_4742_, lean_object* v_a_4743_, lean_object* v_a_4744_, lean_object* v_a_4745_, lean_object* v_a_4746_, lean_object* v_a_4747_, lean_object* v_a_4748_){
_start:
{
uint8_t v_lhs_boxed_4749_; uint8_t v_isPred_boxed_4750_; lean_object* v_res_4751_; 
v_lhs_boxed_4749_ = lean_unbox(v_lhs_4740_);
v_isPred_boxed_4750_ = lean_unbox(v_isPred_4741_);
v_res_4751_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go(v_maxType_4737_, v_t_4738_, v_f_x3f_4739_, v_lhs_boxed_4749_, v_isPred_boxed_4750_, v_a_4742_, v_a_4743_, v_a_4744_, v_a_4745_, v_a_4746_, v_a_4747_);
lean_dec(v_a_4747_);
lean_dec_ref(v_a_4746_);
lean_dec(v_a_4745_);
lean_dec_ref(v_a_4744_);
lean_dec(v_a_4743_);
lean_dec_ref(v_a_4742_);
return v_res_4751_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr_spec__2(lean_object* v_msg_4752_){
_start:
{
lean_object* v___x_4753_; lean_object* v___x_4754_; 
v___x_4753_ = l_Lean_instInhabitedExpr;
v___x_4754_ = lean_panic_fn_borrowed(v___x_4753_, v_msg_4752_);
return v___x_4754_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go_spec__0(lean_object* v_cls_4755_, lean_object* v_msg_4756_, lean_object* v___y_4757_, lean_object* v___y_4758_, lean_object* v___y_4759_, lean_object* v___y_4760_, lean_object* v___y_4761_, lean_object* v___y_4762_){
_start:
{
lean_object* v___x_4764_; 
v___x_4764_ = l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go_spec__0___redArg(v_cls_4755_, v_msg_4756_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_);
return v___x_4764_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go_spec__0___boxed(lean_object* v_cls_4765_, lean_object* v_msg_4766_, lean_object* v___y_4767_, lean_object* v___y_4768_, lean_object* v___y_4769_, lean_object* v___y_4770_, lean_object* v___y_4771_, lean_object* v___y_4772_, lean_object* v___y_4773_){
_start:
{
lean_object* v_res_4774_; 
v_res_4774_ = l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go_spec__0(v_cls_4765_, v_msg_4766_, v___y_4767_, v___y_4768_, v___y_4769_, v___y_4770_, v___y_4771_, v___y_4772_);
lean_dec(v___y_4772_);
lean_dec_ref(v___y_4771_);
lean_dec(v___y_4770_);
lean_dec_ref(v___y_4769_);
lean_dec(v___y_4768_);
lean_dec_ref(v___y_4767_);
return v_res_4774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabOp(lean_object* v_stx_4775_, lean_object* v_expectedType_x3f_4776_, lean_object* v_a_4777_, lean_object* v_a_4778_, lean_object* v_a_4779_, lean_object* v_a_4780_, lean_object* v_a_4781_, lean_object* v_a_4782_){
_start:
{
lean_object* v___x_4784_; 
v___x_4784_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree(v_stx_4775_, v_a_4777_, v_a_4778_, v_a_4779_, v_a_4780_, v_a_4781_, v_a_4782_);
if (lean_obj_tag(v___x_4784_) == 0)
{
lean_object* v_a_4785_; lean_object* v___x_4786_; 
v_a_4785_ = lean_ctor_get(v___x_4784_, 0);
lean_inc(v_a_4785_);
lean_dec_ref_known(v___x_4784_, 1);
v___x_4786_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr(v_a_4785_, v_expectedType_x3f_4776_, v_a_4777_, v_a_4778_, v_a_4779_, v_a_4780_, v_a_4781_, v_a_4782_);
return v___x_4786_;
}
else
{
lean_object* v_a_4787_; lean_object* v___x_4789_; uint8_t v_isShared_4790_; uint8_t v_isSharedCheck_4794_; 
lean_dec(v_expectedType_x3f_4776_);
v_a_4787_ = lean_ctor_get(v___x_4784_, 0);
v_isSharedCheck_4794_ = !lean_is_exclusive(v___x_4784_);
if (v_isSharedCheck_4794_ == 0)
{
v___x_4789_ = v___x_4784_;
v_isShared_4790_ = v_isSharedCheck_4794_;
goto v_resetjp_4788_;
}
else
{
lean_inc(v_a_4787_);
lean_dec(v___x_4784_);
v___x_4789_ = lean_box(0);
v_isShared_4790_ = v_isSharedCheck_4794_;
goto v_resetjp_4788_;
}
v_resetjp_4788_:
{
lean_object* v___x_4792_; 
if (v_isShared_4790_ == 0)
{
v___x_4792_ = v___x_4789_;
goto v_reusejp_4791_;
}
else
{
lean_object* v_reuseFailAlloc_4793_; 
v_reuseFailAlloc_4793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4793_, 0, v_a_4787_);
v___x_4792_ = v_reuseFailAlloc_4793_;
goto v_reusejp_4791_;
}
v_reusejp_4791_:
{
return v___x_4792_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabOp___boxed(lean_object* v_stx_4795_, lean_object* v_expectedType_x3f_4796_, lean_object* v_a_4797_, lean_object* v_a_4798_, lean_object* v_a_4799_, lean_object* v_a_4800_, lean_object* v_a_4801_, lean_object* v_a_4802_, lean_object* v_a_4803_){
_start:
{
lean_object* v_res_4804_; 
v_res_4804_ = l_Lean_Elab_Term_Op_elabOp(v_stx_4795_, v_expectedType_x3f_4796_, v_a_4797_, v_a_4798_, v_a_4799_, v_a_4800_, v_a_4801_, v_a_4802_);
lean_dec(v_a_4802_);
lean_dec_ref(v_a_4801_);
lean_dec(v_a_4800_);
lean_dec_ref(v_a_4799_);
lean_dec(v_a_4798_);
lean_dec_ref(v_a_4797_);
return v_res_4804_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinOp(lean_object* v_a_4805_, lean_object* v_a_4806_, lean_object* v_a_4807_, lean_object* v_a_4808_, lean_object* v_a_4809_, lean_object* v_a_4810_, lean_object* v_a_4811_, lean_object* v_a_4812_){
_start:
{
lean_object* v___x_4814_; 
v___x_4814_ = l_Lean_Elab_Term_Op_elabOp(v_a_4805_, v_a_4806_, v_a_4807_, v_a_4808_, v_a_4809_, v_a_4810_, v_a_4811_, v_a_4812_);
return v___x_4814_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinOp___boxed(lean_object* v_a_4815_, lean_object* v_a_4816_, lean_object* v_a_4817_, lean_object* v_a_4818_, lean_object* v_a_4819_, lean_object* v_a_4820_, lean_object* v_a_4821_, lean_object* v_a_4822_, lean_object* v_a_4823_){
_start:
{
lean_object* v_res_4824_; 
v_res_4824_ = l_Lean_Elab_Term_Op_elabBinOp(v_a_4815_, v_a_4816_, v_a_4817_, v_a_4818_, v_a_4819_, v_a_4820_, v_a_4821_, v_a_4822_);
lean_dec(v_a_4822_);
lean_dec_ref(v_a_4821_);
lean_dec(v_a_4820_);
lean_dec_ref(v_a_4819_);
lean_dec(v_a_4818_);
lean_dec_ref(v_a_4817_);
return v_res_4824_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1(){
_start:
{
lean_object* v___f_4834_; lean_object* v___x_4835_; lean_object* v___x_4836_; lean_object* v___x_4837_; lean_object* v___x_4838_; 
v___f_4834_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_Op_elabOp___boxed), 9, 0);
v___x_4835_ = l_Lean_Elab_Term_termElabAttribute;
v___x_4836_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__1));
v___x_4837_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__2));
v___x_4838_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4835_, v___x_4836_, v___x_4837_, v___f_4834_);
return v___x_4838_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___boxed(lean_object* v_a_4839_){
_start:
{
lean_object* v_res_4840_; 
v_res_4840_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1();
return v_res_4840_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3(){
_start:
{
lean_object* v___x_4867_; lean_object* v___x_4868_; lean_object* v___x_4869_; 
v___x_4867_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1___closed__2));
v___x_4868_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___closed__6));
v___x_4869_ = l_Lean_addBuiltinDeclarationRanges(v___x_4867_, v___x_4868_);
return v___x_4869_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3___boxed(lean_object* v_a_4870_){
_start:
{
lean_object* v_res_4871_; 
v_res_4871_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3();
return v_res_4871_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinOpLazy(lean_object* v_a_4872_, lean_object* v_a_4873_, lean_object* v_a_4874_, lean_object* v_a_4875_, lean_object* v_a_4876_, lean_object* v_a_4877_, lean_object* v_a_4878_, lean_object* v_a_4879_){
_start:
{
lean_object* v___x_4881_; 
v___x_4881_ = l_Lean_Elab_Term_Op_elabOp(v_a_4872_, v_a_4873_, v_a_4874_, v_a_4875_, v_a_4876_, v_a_4877_, v_a_4878_, v_a_4879_);
return v___x_4881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinOpLazy___boxed(lean_object* v_a_4882_, lean_object* v_a_4883_, lean_object* v_a_4884_, lean_object* v_a_4885_, lean_object* v_a_4886_, lean_object* v_a_4887_, lean_object* v_a_4888_, lean_object* v_a_4889_, lean_object* v_a_4890_){
_start:
{
lean_object* v_res_4891_; 
v_res_4891_ = l_Lean_Elab_Term_Op_elabBinOpLazy(v_a_4882_, v_a_4883_, v_a_4884_, v_a_4885_, v_a_4886_, v_a_4887_, v_a_4888_, v_a_4889_);
lean_dec(v_a_4889_);
lean_dec_ref(v_a_4888_);
lean_dec(v_a_4887_);
lean_dec_ref(v_a_4886_);
lean_dec(v_a_4885_);
lean_dec_ref(v_a_4884_);
return v_res_4891_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy__1(){
_start:
{
lean_object* v___f_4900_; lean_object* v___x_4901_; lean_object* v___x_4902_; lean_object* v___x_4903_; lean_object* v___x_4904_; 
v___f_4900_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_Op_elabOp___boxed), 9, 0);
v___x_4901_ = l_Lean_Elab_Term_termElabAttribute;
v___x_4902_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__3));
v___x_4903_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy__1___closed__1));
v___x_4904_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4901_, v___x_4902_, v___x_4903_, v___f_4900_);
return v___x_4904_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy__1___boxed(lean_object* v_a_4905_){
_start:
{
lean_object* v_res_4906_; 
v_res_4906_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy__1();
return v_res_4906_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3(){
_start:
{
lean_object* v___x_4933_; lean_object* v___x_4934_; lean_object* v___x_4935_; 
v___x_4933_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy__1___closed__1));
v___x_4934_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___closed__6));
v___x_4935_ = l_Lean_addBuiltinDeclarationRanges(v___x_4933_, v___x_4934_);
return v___x_4935_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3___boxed(lean_object* v_a_4936_){
_start:
{
lean_object* v_res_4937_; 
v_res_4937_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3();
return v_res_4937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabLeftact(lean_object* v_a_4938_, lean_object* v_a_4939_, lean_object* v_a_4940_, lean_object* v_a_4941_, lean_object* v_a_4942_, lean_object* v_a_4943_, lean_object* v_a_4944_, lean_object* v_a_4945_){
_start:
{
lean_object* v___x_4947_; 
v___x_4947_ = l_Lean_Elab_Term_Op_elabOp(v_a_4938_, v_a_4939_, v_a_4940_, v_a_4941_, v_a_4942_, v_a_4943_, v_a_4944_, v_a_4945_);
return v___x_4947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabLeftact___boxed(lean_object* v_a_4948_, lean_object* v_a_4949_, lean_object* v_a_4950_, lean_object* v_a_4951_, lean_object* v_a_4952_, lean_object* v_a_4953_, lean_object* v_a_4954_, lean_object* v_a_4955_, lean_object* v_a_4956_){
_start:
{
lean_object* v_res_4957_; 
v_res_4957_ = l_Lean_Elab_Term_Op_elabLeftact(v_a_4948_, v_a_4949_, v_a_4950_, v_a_4951_, v_a_4952_, v_a_4953_, v_a_4954_, v_a_4955_);
lean_dec(v_a_4955_);
lean_dec_ref(v_a_4954_);
lean_dec(v_a_4953_);
lean_dec_ref(v_a_4952_);
lean_dec(v_a_4951_);
lean_dec_ref(v_a_4950_);
return v_res_4957_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact__1(){
_start:
{
lean_object* v___f_4966_; lean_object* v___x_4967_; lean_object* v___x_4968_; lean_object* v___x_4969_; lean_object* v___x_4970_; 
v___f_4966_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_Op_elabOp___boxed), 9, 0);
v___x_4967_ = l_Lean_Elab_Term_termElabAttribute;
v___x_4968_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__7));
v___x_4969_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact__1___closed__1));
v___x_4970_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4967_, v___x_4968_, v___x_4969_, v___f_4966_);
return v___x_4970_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact__1___boxed(lean_object* v_a_4971_){
_start:
{
lean_object* v_res_4972_; 
v_res_4972_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact__1();
return v_res_4972_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3(){
_start:
{
lean_object* v___x_4999_; lean_object* v___x_5000_; lean_object* v___x_5001_; 
v___x_4999_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact__1___closed__1));
v___x_5000_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___closed__6));
v___x_5001_ = l_Lean_addBuiltinDeclarationRanges(v___x_4999_, v___x_5000_);
return v___x_5001_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3___boxed(lean_object* v_a_5002_){
_start:
{
lean_object* v_res_5003_; 
v_res_5003_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3();
return v_res_5003_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabRightact(lean_object* v_a_5004_, lean_object* v_a_5005_, lean_object* v_a_5006_, lean_object* v_a_5007_, lean_object* v_a_5008_, lean_object* v_a_5009_, lean_object* v_a_5010_, lean_object* v_a_5011_){
_start:
{
lean_object* v___x_5013_; 
v___x_5013_ = l_Lean_Elab_Term_Op_elabOp(v_a_5004_, v_a_5005_, v_a_5006_, v_a_5007_, v_a_5008_, v_a_5009_, v_a_5010_, v_a_5011_);
return v___x_5013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabRightact___boxed(lean_object* v_a_5014_, lean_object* v_a_5015_, lean_object* v_a_5016_, lean_object* v_a_5017_, lean_object* v_a_5018_, lean_object* v_a_5019_, lean_object* v_a_5020_, lean_object* v_a_5021_, lean_object* v_a_5022_){
_start:
{
lean_object* v_res_5023_; 
v_res_5023_ = l_Lean_Elab_Term_Op_elabRightact(v_a_5014_, v_a_5015_, v_a_5016_, v_a_5017_, v_a_5018_, v_a_5019_, v_a_5020_, v_a_5021_);
lean_dec(v_a_5021_);
lean_dec_ref(v_a_5020_);
lean_dec(v_a_5019_);
lean_dec_ref(v_a_5018_);
lean_dec(v_a_5017_);
lean_dec_ref(v_a_5016_);
return v_res_5023_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact__1(){
_start:
{
lean_object* v___f_5032_; lean_object* v___x_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; 
v___f_5032_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_Op_elabOp___boxed), 9, 0);
v___x_5033_ = l_Lean_Elab_Term_termElabAttribute;
v___x_5034_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__9));
v___x_5035_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact__1___closed__1));
v___x_5036_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5033_, v___x_5034_, v___x_5035_, v___f_5032_);
return v___x_5036_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact__1___boxed(lean_object* v_a_5037_){
_start:
{
lean_object* v_res_5038_; 
v_res_5038_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact__1();
return v_res_5038_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3(){
_start:
{
lean_object* v___x_5065_; lean_object* v___x_5066_; lean_object* v___x_5067_; 
v___x_5065_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact__1___closed__1));
v___x_5066_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___closed__6));
v___x_5067_ = l_Lean_addBuiltinDeclarationRanges(v___x_5065_, v___x_5066_);
return v___x_5067_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3___boxed(lean_object* v_a_5068_){
_start:
{
lean_object* v_res_5069_; 
v_res_5069_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3();
return v_res_5069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabUnOp(lean_object* v_a_5070_, lean_object* v_a_5071_, lean_object* v_a_5072_, lean_object* v_a_5073_, lean_object* v_a_5074_, lean_object* v_a_5075_, lean_object* v_a_5076_, lean_object* v_a_5077_){
_start:
{
lean_object* v___x_5079_; 
v___x_5079_ = l_Lean_Elab_Term_Op_elabOp(v_a_5070_, v_a_5071_, v_a_5072_, v_a_5073_, v_a_5074_, v_a_5075_, v_a_5076_, v_a_5077_);
return v___x_5079_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabUnOp___boxed(lean_object* v_a_5080_, lean_object* v_a_5081_, lean_object* v_a_5082_, lean_object* v_a_5083_, lean_object* v_a_5084_, lean_object* v_a_5085_, lean_object* v_a_5086_, lean_object* v_a_5087_, lean_object* v_a_5088_){
_start:
{
lean_object* v_res_5089_; 
v_res_5089_ = l_Lean_Elab_Term_Op_elabUnOp(v_a_5080_, v_a_5081_, v_a_5082_, v_a_5083_, v_a_5084_, v_a_5085_, v_a_5086_, v_a_5087_);
lean_dec(v_a_5087_);
lean_dec_ref(v_a_5086_);
lean_dec(v_a_5085_);
lean_dec_ref(v_a_5084_);
lean_dec(v_a_5083_);
lean_dec_ref(v_a_5082_);
return v_res_5089_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp__1(){
_start:
{
lean_object* v___f_5098_; lean_object* v___x_5099_; lean_object* v___x_5100_; lean_object* v___x_5101_; lean_object* v___x_5102_; 
v___f_5098_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_Op_elabOp___boxed), 9, 0);
v___x_5099_ = l_Lean_Elab_Term_termElabAttribute;
v___x_5100_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_go___closed__5));
v___x_5101_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp__1___closed__1));
v___x_5102_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5099_, v___x_5100_, v___x_5101_, v___f_5098_);
return v___x_5102_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp__1___boxed(lean_object* v_a_5103_){
_start:
{
lean_object* v_res_5104_; 
v_res_5104_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp__1();
return v_res_5104_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3(){
_start:
{
lean_object* v___x_5131_; lean_object* v___x_5132_; lean_object* v___x_5133_; 
v___x_5131_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp__1___closed__1));
v___x_5132_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___closed__6));
v___x_5133_ = l_Lean_addBuiltinDeclarationRanges(v___x_5131_, v___x_5132_);
return v___x_5133_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3___boxed(lean_object* v_a_5134_){
_start:
{
lean_object* v_res_5135_; 
v_res_5135_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3();
return v_res_5135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary_spec__0___redArg___lam__0(lean_object* v_k_5136_, lean_object* v___y_5137_, lean_object* v___y_5138_, lean_object* v___y_5139_, lean_object* v___y_5140_, lean_object* v___y_5141_, lean_object* v___y_5142_){
_start:
{
lean_object* v___x_5144_; 
lean_inc(v___y_5138_);
lean_inc_ref(v___y_5137_);
v___x_5144_ = lean_apply_7(v_k_5136_, v___y_5137_, v___y_5138_, v___y_5139_, v___y_5140_, v___y_5141_, v___y_5142_, lean_box(0));
return v___x_5144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary_spec__0___redArg___lam__0___boxed(lean_object* v_k_5145_, lean_object* v___y_5146_, lean_object* v___y_5147_, lean_object* v___y_5148_, lean_object* v___y_5149_, lean_object* v___y_5150_, lean_object* v___y_5151_, lean_object* v___y_5152_){
_start:
{
lean_object* v_res_5153_; 
v_res_5153_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary_spec__0___redArg___lam__0(v_k_5145_, v___y_5146_, v___y_5147_, v___y_5148_, v___y_5149_, v___y_5150_, v___y_5151_);
lean_dec(v___y_5147_);
lean_dec_ref(v___y_5146_);
return v_res_5153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary_spec__0___redArg(lean_object* v_k_5154_, uint8_t v_allowLevelAssignments_5155_, lean_object* v___y_5156_, lean_object* v___y_5157_, lean_object* v___y_5158_, lean_object* v___y_5159_, lean_object* v___y_5160_, lean_object* v___y_5161_){
_start:
{
lean_object* v___f_5163_; lean_object* v___x_5164_; 
lean_inc(v___y_5157_);
lean_inc_ref(v___y_5156_);
v___f_5163_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary_spec__0___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_5163_, 0, v_k_5154_);
lean_closure_set(v___f_5163_, 1, v___y_5156_);
lean_closure_set(v___f_5163_, 2, v___y_5157_);
v___x_5164_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_5155_, v___f_5163_, v___y_5158_, v___y_5159_, v___y_5160_, v___y_5161_);
if (lean_obj_tag(v___x_5164_) == 0)
{
return v___x_5164_;
}
else
{
lean_object* v_a_5165_; lean_object* v___x_5167_; uint8_t v_isShared_5168_; uint8_t v_isSharedCheck_5172_; 
v_a_5165_ = lean_ctor_get(v___x_5164_, 0);
v_isSharedCheck_5172_ = !lean_is_exclusive(v___x_5164_);
if (v_isSharedCheck_5172_ == 0)
{
v___x_5167_ = v___x_5164_;
v_isShared_5168_ = v_isSharedCheck_5172_;
goto v_resetjp_5166_;
}
else
{
lean_inc(v_a_5165_);
lean_dec(v___x_5164_);
v___x_5167_ = lean_box(0);
v_isShared_5168_ = v_isSharedCheck_5172_;
goto v_resetjp_5166_;
}
v_resetjp_5166_:
{
lean_object* v___x_5170_; 
if (v_isShared_5168_ == 0)
{
v___x_5170_ = v___x_5167_;
goto v_reusejp_5169_;
}
else
{
lean_object* v_reuseFailAlloc_5171_; 
v_reuseFailAlloc_5171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5171_, 0, v_a_5165_);
v___x_5170_ = v_reuseFailAlloc_5171_;
goto v_reusejp_5169_;
}
v_reusejp_5169_:
{
return v___x_5170_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary_spec__0___redArg___boxed(lean_object* v_k_5173_, lean_object* v_allowLevelAssignments_5174_, lean_object* v___y_5175_, lean_object* v___y_5176_, lean_object* v___y_5177_, lean_object* v___y_5178_, lean_object* v___y_5179_, lean_object* v___y_5180_, lean_object* v___y_5181_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_5182_; lean_object* v_res_5183_; 
v_allowLevelAssignments_boxed_5182_ = lean_unbox(v_allowLevelAssignments_5174_);
v_res_5183_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary_spec__0___redArg(v_k_5173_, v_allowLevelAssignments_boxed_5182_, v___y_5175_, v___y_5176_, v___y_5177_, v___y_5178_, v___y_5179_, v___y_5180_);
lean_dec(v___y_5180_);
lean_dec_ref(v___y_5179_);
lean_dec(v___y_5178_);
lean_dec_ref(v___y_5177_);
lean_dec(v___y_5176_);
lean_dec_ref(v___y_5175_);
return v_res_5183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary_spec__0(lean_object* v_00_u03b1_5184_, lean_object* v_k_5185_, uint8_t v_allowLevelAssignments_5186_, lean_object* v___y_5187_, lean_object* v___y_5188_, lean_object* v___y_5189_, lean_object* v___y_5190_, lean_object* v___y_5191_, lean_object* v___y_5192_){
_start:
{
lean_object* v___x_5194_; 
v___x_5194_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary_spec__0___redArg(v_k_5185_, v_allowLevelAssignments_5186_, v___y_5187_, v___y_5188_, v___y_5189_, v___y_5190_, v___y_5191_, v___y_5192_);
return v___x_5194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary_spec__0___boxed(lean_object* v_00_u03b1_5195_, lean_object* v_k_5196_, lean_object* v_allowLevelAssignments_5197_, lean_object* v___y_5198_, lean_object* v___y_5199_, lean_object* v___y_5200_, lean_object* v___y_5201_, lean_object* v___y_5202_, lean_object* v___y_5203_, lean_object* v___y_5204_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_5205_; lean_object* v_res_5206_; 
v_allowLevelAssignments_boxed_5205_ = lean_unbox(v_allowLevelAssignments_5197_);
v_res_5206_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary_spec__0(v_00_u03b1_5195_, v_k_5196_, v_allowLevelAssignments_boxed_5205_, v___y_5198_, v___y_5199_, v___y_5200_, v___y_5201_, v___y_5202_, v___y_5203_);
lean_dec(v___y_5203_);
lean_dec_ref(v___y_5202_);
lean_dec(v___y_5201_);
lean_dec_ref(v___y_5200_);
lean_dec(v___y_5199_);
lean_dec_ref(v___y_5198_);
return v_res_5206_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___lam__0(lean_object* v_a_5207_, lean_object* v___x_5208_, lean_object* v___y_5209_, lean_object* v___y_5210_, lean_object* v___y_5211_, lean_object* v___y_5212_, lean_object* v___y_5213_, lean_object* v___y_5214_){
_start:
{
lean_object* v___x_5216_; 
v___x_5216_ = l_Lean_Meta_isExprDefEq(v_a_5207_, v___x_5208_, v___y_5211_, v___y_5212_, v___y_5213_, v___y_5214_);
return v___x_5216_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___lam__0___boxed(lean_object* v_a_5217_, lean_object* v___x_5218_, lean_object* v___y_5219_, lean_object* v___y_5220_, lean_object* v___y_5221_, lean_object* v___y_5222_, lean_object* v___y_5223_, lean_object* v___y_5224_, lean_object* v___y_5225_){
_start:
{
lean_object* v_res_5226_; 
v_res_5226_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___lam__0(v_a_5217_, v___x_5218_, v___y_5219_, v___y_5220_, v___y_5221_, v___y_5222_, v___y_5223_, v___y_5224_);
lean_dec(v___y_5224_);
lean_dec_ref(v___y_5223_);
lean_dec(v___y_5222_);
lean_dec_ref(v___y_5221_);
lean_dec(v___y_5220_);
lean_dec_ref(v___y_5219_);
return v_res_5226_;
}
}
static lean_object* _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__0(void){
_start:
{
lean_object* v___x_5227_; lean_object* v___x_5228_; 
v___x_5227_ = lean_box(0);
v___x_5228_ = l_Lean_mkSort(v___x_5227_);
return v___x_5228_;
}
}
static lean_object* _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__3(void){
_start:
{
lean_object* v___x_5232_; lean_object* v___x_5233_; lean_object* v___x_5234_; 
v___x_5232_ = lean_box(0);
v___x_5233_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__2));
v___x_5234_ = l_Lean_mkConst(v___x_5233_, v___x_5232_);
return v___x_5234_;
}
}
static lean_object* _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__4(void){
_start:
{
lean_object* v___x_5235_; lean_object* v___x_5236_; 
v___x_5235_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__3, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__3_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__3);
v___x_5236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5236_, 0, v___x_5235_);
return v___x_5236_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary(uint8_t v_noProp_5237_, lean_object* v_e_5238_, lean_object* v_a_5239_, lean_object* v_a_5240_, lean_object* v_a_5241_, lean_object* v_a_5242_, lean_object* v_a_5243_, lean_object* v_a_5244_){
_start:
{
if (v_noProp_5237_ == 0)
{
lean_object* v___x_5246_; 
v___x_5246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5246_, 0, v_e_5238_);
return v___x_5246_;
}
else
{
lean_object* v___x_5247_; 
lean_inc(v_a_5244_);
lean_inc_ref(v_a_5243_);
lean_inc(v_a_5242_);
lean_inc_ref(v_a_5241_);
lean_inc_ref(v_e_5238_);
v___x_5247_ = lean_infer_type(v_e_5238_, v_a_5241_, v_a_5242_, v_a_5243_, v_a_5244_);
if (lean_obj_tag(v___x_5247_) == 0)
{
lean_object* v_a_5248_; lean_object* v___x_5249_; lean_object* v___f_5250_; uint8_t v___x_5251_; lean_object* v___x_5252_; 
v_a_5248_ = lean_ctor_get(v___x_5247_, 0);
lean_inc(v_a_5248_);
lean_dec_ref_known(v___x_5247_, 1);
v___x_5249_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__0, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__0_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__0);
v___f_5250_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___lam__0___boxed), 9, 2);
lean_closure_set(v___f_5250_, 0, v_a_5248_);
lean_closure_set(v___f_5250_, 1, v___x_5249_);
v___x_5251_ = 0;
v___x_5252_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary_spec__0___redArg(v___f_5250_, v___x_5251_, v_a_5239_, v_a_5240_, v_a_5241_, v_a_5242_, v_a_5243_, v_a_5244_);
if (lean_obj_tag(v___x_5252_) == 0)
{
lean_object* v_a_5253_; lean_object* v___x_5255_; uint8_t v_isShared_5256_; uint8_t v_isSharedCheck_5264_; 
v_a_5253_ = lean_ctor_get(v___x_5252_, 0);
v_isSharedCheck_5264_ = !lean_is_exclusive(v___x_5252_);
if (v_isSharedCheck_5264_ == 0)
{
v___x_5255_ = v___x_5252_;
v_isShared_5256_ = v_isSharedCheck_5264_;
goto v_resetjp_5254_;
}
else
{
lean_inc(v_a_5253_);
lean_dec(v___x_5252_);
v___x_5255_ = lean_box(0);
v_isShared_5256_ = v_isSharedCheck_5264_;
goto v_resetjp_5254_;
}
v_resetjp_5254_:
{
uint8_t v___x_5257_; 
v___x_5257_ = lean_unbox(v_a_5253_);
lean_dec(v_a_5253_);
if (v___x_5257_ == 0)
{
lean_object* v___x_5259_; 
if (v_isShared_5256_ == 0)
{
lean_ctor_set(v___x_5255_, 0, v_e_5238_);
v___x_5259_ = v___x_5255_;
goto v_reusejp_5258_;
}
else
{
lean_object* v_reuseFailAlloc_5260_; 
v_reuseFailAlloc_5260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5260_, 0, v_e_5238_);
v___x_5259_ = v_reuseFailAlloc_5260_;
goto v_reusejp_5258_;
}
v_reusejp_5258_:
{
return v___x_5259_;
}
}
else
{
lean_object* v___x_5261_; lean_object* v___x_5262_; lean_object* v___x_5263_; 
lean_del_object(v___x_5255_);
v___x_5261_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__4, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__4_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__4);
v___x_5262_ = lean_box(0);
v___x_5263_ = l_Lean_Elab_Term_ensureHasType(v___x_5261_, v_e_5238_, v___x_5262_, v___x_5262_, v_a_5239_, v_a_5240_, v_a_5241_, v_a_5242_, v_a_5243_, v_a_5244_);
return v___x_5263_;
}
}
}
else
{
lean_object* v_a_5265_; lean_object* v___x_5267_; uint8_t v_isShared_5268_; uint8_t v_isSharedCheck_5272_; 
lean_dec_ref(v_e_5238_);
v_a_5265_ = lean_ctor_get(v___x_5252_, 0);
v_isSharedCheck_5272_ = !lean_is_exclusive(v___x_5252_);
if (v_isSharedCheck_5272_ == 0)
{
v___x_5267_ = v___x_5252_;
v_isShared_5268_ = v_isSharedCheck_5272_;
goto v_resetjp_5266_;
}
else
{
lean_inc(v_a_5265_);
lean_dec(v___x_5252_);
v___x_5267_ = lean_box(0);
v_isShared_5268_ = v_isSharedCheck_5272_;
goto v_resetjp_5266_;
}
v_resetjp_5266_:
{
lean_object* v___x_5270_; 
if (v_isShared_5268_ == 0)
{
v___x_5270_ = v___x_5267_;
goto v_reusejp_5269_;
}
else
{
lean_object* v_reuseFailAlloc_5271_; 
v_reuseFailAlloc_5271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5271_, 0, v_a_5265_);
v___x_5270_ = v_reuseFailAlloc_5271_;
goto v_reusejp_5269_;
}
v_reusejp_5269_:
{
return v___x_5270_;
}
}
}
}
else
{
lean_dec_ref(v_e_5238_);
return v___x_5247_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___boxed(lean_object* v_noProp_5273_, lean_object* v_e_5274_, lean_object* v_a_5275_, lean_object* v_a_5276_, lean_object* v_a_5277_, lean_object* v_a_5278_, lean_object* v_a_5279_, lean_object* v_a_5280_, lean_object* v_a_5281_){
_start:
{
uint8_t v_noProp_boxed_5282_; lean_object* v_res_5283_; 
v_noProp_boxed_5282_ = lean_unbox(v_noProp_5273_);
v_res_5283_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary(v_noProp_boxed_5282_, v_e_5274_, v_a_5275_, v_a_5276_, v_a_5277_, v_a_5278_, v_a_5279_, v_a_5280_);
lean_dec(v_a_5280_);
lean_dec_ref(v_a_5279_);
lean_dec(v_a_5278_);
lean_dec_ref(v_a_5277_);
lean_dec(v_a_5276_);
lean_dec_ref(v_a_5275_);
return v_res_5283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinRelCore___lam__0(lean_object* v_val_5284_, lean_object* v___x_5285_, lean_object* v___y_5286_, lean_object* v___y_5287_, lean_object* v___y_5288_, lean_object* v___y_5289_, lean_object* v___y_5290_, lean_object* v___y_5291_){
_start:
{
lean_object* v___x_5293_; 
v___x_5293_ = l_Lean_Meta_isExprDefEq(v_val_5284_, v___x_5285_, v___y_5288_, v___y_5289_, v___y_5290_, v___y_5291_);
return v___x_5293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinRelCore___lam__0___boxed(lean_object* v_val_5294_, lean_object* v___x_5295_, lean_object* v___y_5296_, lean_object* v___y_5297_, lean_object* v___y_5298_, lean_object* v___y_5299_, lean_object* v___y_5300_, lean_object* v___y_5301_, lean_object* v___y_5302_){
_start:
{
lean_object* v_res_5303_; 
v_res_5303_ = l_Lean_Elab_Term_Op_elabBinRelCore___lam__0(v_val_5294_, v___x_5295_, v___y_5296_, v___y_5297_, v___y_5298_, v___y_5299_, v___y_5300_, v___y_5301_);
lean_dec(v___y_5301_);
lean_dec_ref(v___y_5300_);
lean_dec(v___y_5299_);
lean_dec_ref(v___y_5298_);
lean_dec(v___y_5297_);
lean_dec_ref(v___y_5296_);
return v_res_5303_;
}
}
static lean_object* _init_l_Lean_Elab_Term_Op_elabBinRelCore___lam__1___closed__2(void){
_start:
{
lean_object* v___x_5308_; lean_object* v___x_5309_; lean_object* v___x_5310_; 
v___x_5308_ = ((lean_object*)(l_Lean_Elab_Term_Op_elabBinRelCore___lam__1___closed__1));
v___x_5309_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__2));
v___x_5310_ = l_Lean_Name_append(v___x_5309_, v___x_5308_);
return v___x_5310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinRelCore___lam__1(lean_object* v___x_5311_, lean_object* v___x_5312_, lean_object* v_stx_5313_, lean_object* v_val_5314_, uint8_t v_noProp_5315_, lean_object* v___x_5316_, lean_object* v_expectedType_x3f_5317_, uint8_t v___x_5318_, lean_object* v___y_5319_, lean_object* v___y_5320_, lean_object* v___y_5321_, lean_object* v___y_5322_, lean_object* v___y_5323_, lean_object* v___y_5324_){
_start:
{
lean_object* v_toCold_5326_; lean_object* v_currRecDepth_5327_; lean_object* v_ref_5328_; uint16_t v_optionFlags_5329_; uint8_t v_suppressElabErrors_5330_; uint8_t v_checkDeprecated_5331_; uint8_t v_isRecordingDeps_5332_; lean_object* v_ref_5333_; lean_object* v___x_5334_; lean_object* v___x_5335_; 
v_toCold_5326_ = lean_ctor_get(v___y_5323_, 0);
v_currRecDepth_5327_ = lean_ctor_get(v___y_5323_, 1);
v_ref_5328_ = lean_ctor_get(v___y_5323_, 2);
v_optionFlags_5329_ = lean_ctor_get_uint16(v___y_5323_, sizeof(void*)*3);
v_suppressElabErrors_5330_ = lean_ctor_get_uint8(v___y_5323_, sizeof(void*)*3 + 2);
v_checkDeprecated_5331_ = lean_ctor_get_uint8(v___y_5323_, sizeof(void*)*3 + 3);
v_isRecordingDeps_5332_ = lean_ctor_get_uint8(v___y_5323_, sizeof(void*)*3 + 4);
v_ref_5333_ = l_Lean_replaceRef(v___x_5311_, v_ref_5328_);
lean_inc(v_currRecDepth_5327_);
lean_inc_ref(v_toCold_5326_);
v___x_5334_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_5334_, 0, v_toCold_5326_);
lean_ctor_set(v___x_5334_, 1, v_currRecDepth_5327_);
lean_ctor_set(v___x_5334_, 2, v_ref_5333_);
lean_ctor_set_uint16(v___x_5334_, sizeof(void*)*3, v_optionFlags_5329_);
lean_ctor_set_uint8(v___x_5334_, sizeof(void*)*3 + 2, v_suppressElabErrors_5330_);
lean_ctor_set_uint8(v___x_5334_, sizeof(void*)*3 + 3, v_checkDeprecated_5331_);
lean_ctor_set_uint8(v___x_5334_, sizeof(void*)*3 + 4, v_isRecordingDeps_5332_);
lean_inc(v___x_5311_);
v___x_5335_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree(v___x_5311_, v___y_5319_, v___y_5320_, v___y_5321_, v___y_5322_, v___x_5334_, v___y_5324_);
lean_dec_ref_known(v___x_5334_, 3);
if (lean_obj_tag(v___x_5335_) == 0)
{
lean_object* v_a_5336_; lean_object* v_ref_5337_; lean_object* v___x_5338_; lean_object* v___x_5339_; 
v_a_5336_ = lean_ctor_get(v___x_5335_, 0);
lean_inc(v_a_5336_);
lean_dec_ref_known(v___x_5335_, 1);
v_ref_5337_ = l_Lean_replaceRef(v___x_5312_, v_ref_5328_);
lean_inc(v_currRecDepth_5327_);
lean_inc_ref(v_toCold_5326_);
v___x_5338_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_5338_, 0, v_toCold_5326_);
lean_ctor_set(v___x_5338_, 1, v_currRecDepth_5327_);
lean_ctor_set(v___x_5338_, 2, v_ref_5337_);
lean_ctor_set_uint16(v___x_5338_, sizeof(void*)*3, v_optionFlags_5329_);
lean_ctor_set_uint8(v___x_5338_, sizeof(void*)*3 + 2, v_suppressElabErrors_5330_);
lean_ctor_set_uint8(v___x_5338_, sizeof(void*)*3 + 3, v_checkDeprecated_5331_);
lean_ctor_set_uint8(v___x_5338_, sizeof(void*)*3 + 4, v_isRecordingDeps_5332_);
lean_inc(v___x_5312_);
v___x_5339_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree(v___x_5312_, v___y_5319_, v___y_5320_, v___y_5321_, v___y_5322_, v___x_5338_, v___y_5324_);
lean_dec_ref_known(v___x_5338_, 3);
if (lean_obj_tag(v___x_5339_) == 0)
{
lean_object* v_a_5340_; uint8_t v___x_5341_; lean_object* v___x_5342_; lean_object* v___x_5343_; lean_object* v___y_5345_; lean_object* v___y_5346_; lean_object* v___y_5347_; lean_object* v___y_5348_; lean_object* v___y_5349_; lean_object* v___y_5350_; lean_object* v___x_5400_; 
v_a_5340_ = lean_ctor_get(v___x_5339_, 0);
lean_inc_n(v_a_5340_, 2);
lean_dec_ref_known(v___x_5339_, 1);
v___x_5341_ = 0;
lean_inc(v_a_5336_);
lean_inc_ref(v_val_5314_);
v___x_5342_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_5342_, 0, v_stx_5313_);
lean_ctor_set(v___x_5342_, 1, v_val_5314_);
lean_ctor_set(v___x_5342_, 2, v_a_5336_);
lean_ctor_set(v___x_5342_, 3, v_a_5340_);
lean_ctor_set_uint8(v___x_5342_, sizeof(void*)*4, v___x_5341_);
v___x_5343_ = lean_box(0);
lean_inc_ref(v___x_5342_);
v___x_5400_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze(v___x_5342_, v___x_5343_, v___y_5319_, v___y_5320_, v___y_5321_, v___y_5322_, v___y_5323_, v___y_5324_);
if (lean_obj_tag(v___x_5400_) == 0)
{
lean_object* v_options_5401_; lean_object* v_a_5402_; lean_object* v_inheritedTraceOptions_5403_; uint8_t v_hasTrace_5404_; lean_object* v___x_5405_; lean_object* v_maxType_5407_; lean_object* v___y_5408_; lean_object* v___y_5409_; lean_object* v___y_5410_; lean_object* v___y_5411_; lean_object* v___y_5412_; lean_object* v___y_5413_; lean_object* v___y_5454_; lean_object* v___y_5455_; lean_object* v___y_5456_; lean_object* v___y_5457_; lean_object* v___y_5458_; lean_object* v___y_5459_; lean_object* v___y_5479_; lean_object* v___y_5480_; 
v_options_5401_ = lean_ctor_get(v_toCold_5326_, 2);
v_a_5402_ = lean_ctor_get(v___x_5400_, 0);
lean_inc(v_a_5402_);
lean_dec_ref_known(v___x_5400_, 1);
v_inheritedTraceOptions_5403_ = lean_ctor_get(v_toCold_5326_, 11);
v_hasTrace_5404_ = lean_ctor_get_uint8(v_options_5401_, sizeof(void*)*1);
v___x_5405_ = ((lean_object*)(l_Lean_Elab_Term_Op_elabBinRelCore___lam__1___closed__1));
if (v_hasTrace_5404_ == 0)
{
v___y_5454_ = v___y_5319_;
v___y_5455_ = v___y_5320_;
v___y_5456_ = v___y_5321_;
v___y_5457_ = v___y_5322_;
v___y_5458_ = v___y_5323_;
v___y_5459_ = v___y_5324_;
goto v___jp_5453_;
}
else
{
lean_object* v___x_5491_; uint8_t v___x_5492_; 
v___x_5491_ = lean_obj_once(&l_Lean_Elab_Term_Op_elabBinRelCore___lam__1___closed__2, &l_Lean_Elab_Term_Op_elabBinRelCore___lam__1___closed__2_once, _init_l_Lean_Elab_Term_Op_elabBinRelCore___lam__1___closed__2);
v___x_5492_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5403_, v_options_5401_, v___x_5491_);
if (v___x_5492_ == 0)
{
v___y_5454_ = v___y_5319_;
v___y_5455_ = v___y_5320_;
v___y_5456_ = v___y_5321_;
v___y_5457_ = v___y_5322_;
v___y_5458_ = v___y_5323_;
v___y_5459_ = v___y_5324_;
goto v___jp_5453_;
}
else
{
lean_object* v_max_x3f_5493_; uint8_t v_hasUncomparable_5494_; uint8_t v_hasUnknown_5495_; lean_object* v___y_5497_; lean_object* v___y_5498_; lean_object* v___x_5507_; lean_object* v___y_5509_; 
v_max_x3f_5493_ = lean_ctor_get(v_a_5402_, 0);
v_hasUncomparable_5494_ = lean_ctor_get_uint8(v_a_5402_, sizeof(void*)*1);
v_hasUnknown_5495_ = lean_ctor_get_uint8(v_a_5402_, sizeof(void*)*1 + 1);
v___x_5507_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__8, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__8_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__8);
if (v_hasUncomparable_5494_ == 0)
{
lean_object* v___x_5517_; 
v___x_5517_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__11));
v___y_5509_ = v___x_5517_;
goto v___jp_5508_;
}
else
{
lean_object* v___x_5518_; 
v___x_5518_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__12));
v___y_5509_ = v___x_5518_;
goto v___jp_5508_;
}
v___jp_5496_:
{
lean_object* v___x_5499_; lean_object* v___x_5500_; lean_object* v___x_5501_; lean_object* v___x_5502_; lean_object* v___x_5503_; 
lean_inc_ref(v___y_5498_);
v___x_5499_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5499_, 0, v___y_5498_);
v___x_5500_ = l_Lean_MessageData_ofFormat(v___x_5499_);
v___x_5501_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5501_, 0, v___y_5497_);
lean_ctor_set(v___x_5501_, 1, v___x_5500_);
v___x_5502_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__3, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__3_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__3);
v___x_5503_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5503_, 0, v___x_5501_);
lean_ctor_set(v___x_5503_, 1, v___x_5502_);
if (lean_obj_tag(v_max_x3f_5493_) == 0)
{
lean_object* v___x_5504_; 
v___x_5504_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__6, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__6_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__6);
v___y_5479_ = v___x_5503_;
v___y_5480_ = v___x_5504_;
goto v___jp_5478_;
}
else
{
lean_object* v_val_5505_; lean_object* v___x_5506_; 
v_val_5505_ = lean_ctor_get(v_max_x3f_5493_, 0);
lean_inc(v_val_5505_);
v___x_5506_ = l_Lean_MessageData_ofExpr(v_val_5505_);
v___y_5479_ = v___x_5503_;
v___y_5480_ = v___x_5506_;
goto v___jp_5478_;
}
}
v___jp_5508_:
{
lean_object* v___x_5510_; lean_object* v___x_5511_; lean_object* v___x_5512_; lean_object* v___x_5513_; lean_object* v___x_5514_; 
lean_inc_ref(v___y_5509_);
v___x_5510_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5510_, 0, v___y_5509_);
v___x_5511_ = l_Lean_MessageData_ofFormat(v___x_5510_);
v___x_5512_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5512_, 0, v___x_5507_);
lean_ctor_set(v___x_5512_, 1, v___x_5511_);
v___x_5513_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__10, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__10_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__10);
v___x_5514_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5514_, 0, v___x_5512_);
lean_ctor_set(v___x_5514_, 1, v___x_5513_);
if (v_hasUnknown_5495_ == 0)
{
lean_object* v___x_5515_; 
v___x_5515_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__11));
v___y_5497_ = v___x_5514_;
v___y_5498_ = v___x_5515_;
goto v___jp_5496_;
}
else
{
lean_object* v___x_5516_; 
v___x_5516_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__12));
v___y_5497_ = v___x_5514_;
v___y_5498_ = v___x_5516_;
goto v___jp_5496_;
}
}
}
}
v___jp_5406_:
{
uint8_t v___x_5414_; lean_object* v___x_5415_; 
v___x_5414_ = 1;
v___x_5415_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe(v___x_5342_, v_maxType_5407_, v___x_5414_, v___y_5408_, v___y_5409_, v___y_5410_, v___y_5411_, v___y_5412_, v___y_5413_);
if (lean_obj_tag(v___x_5415_) == 0)
{
lean_object* v_a_5416_; lean_object* v___x_5417_; 
v_a_5416_ = lean_ctor_get(v___x_5415_, 0);
lean_inc(v_a_5416_);
lean_dec_ref_known(v___x_5415_, 1);
v___x_5417_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore(v_a_5416_, v___y_5408_, v___y_5409_, v___y_5410_, v___y_5411_, v___y_5412_, v___y_5413_);
if (lean_obj_tag(v___x_5417_) == 0)
{
lean_object* v_toCold_5418_; lean_object* v_options_5419_; uint8_t v_hasTrace_5420_; 
v_toCold_5418_ = lean_ctor_get(v___y_5412_, 0);
v_options_5419_ = lean_ctor_get(v_toCold_5418_, 2);
v_hasTrace_5420_ = lean_ctor_get_uint8(v_options_5419_, sizeof(void*)*1);
if (v_hasTrace_5420_ == 0)
{
lean_dec(v___y_5413_);
lean_dec_ref(v___y_5412_);
lean_dec(v___y_5411_);
lean_dec_ref(v___y_5410_);
return v___x_5417_;
}
else
{
lean_object* v_a_5421_; lean_object* v_inheritedTraceOptions_5422_; lean_object* v___x_5423_; uint8_t v___x_5424_; 
v_a_5421_ = lean_ctor_get(v___x_5417_, 0);
v_inheritedTraceOptions_5422_ = lean_ctor_get(v_toCold_5418_, 11);
v___x_5423_ = lean_obj_once(&l_Lean_Elab_Term_Op_elabBinRelCore___lam__1___closed__2, &l_Lean_Elab_Term_Op_elabBinRelCore___lam__1___closed__2_once, _init_l_Lean_Elab_Term_Op_elabBinRelCore___lam__1___closed__2);
v___x_5424_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5422_, v_options_5419_, v___x_5423_);
if (v___x_5424_ == 0)
{
lean_dec(v___y_5413_);
lean_dec_ref(v___y_5412_);
lean_dec(v___y_5411_);
lean_dec_ref(v___y_5410_);
return v___x_5417_;
}
else
{
lean_object* v___x_5425_; lean_object* v___x_5426_; lean_object* v___x_5427_; lean_object* v___x_5428_; 
lean_inc_n(v_a_5421_, 2);
lean_dec_ref_known(v___x_5417_, 1);
v___x_5425_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__1, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__1_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExpr___closed__1);
v___x_5426_ = l_Lean_MessageData_ofExpr(v_a_5421_);
v___x_5427_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5427_, 0, v___x_5425_);
lean_ctor_set(v___x_5427_, 1, v___x_5426_);
v___x_5428_ = l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go_spec__0___redArg(v___x_5405_, v___x_5427_, v___y_5410_, v___y_5411_, v___y_5412_, v___y_5413_);
lean_dec(v___y_5413_);
lean_dec_ref(v___y_5412_);
lean_dec(v___y_5411_);
lean_dec_ref(v___y_5410_);
if (lean_obj_tag(v___x_5428_) == 0)
{
lean_object* v___x_5430_; uint8_t v_isShared_5431_; uint8_t v_isSharedCheck_5435_; 
v_isSharedCheck_5435_ = !lean_is_exclusive(v___x_5428_);
if (v_isSharedCheck_5435_ == 0)
{
lean_object* v_unused_5436_; 
v_unused_5436_ = lean_ctor_get(v___x_5428_, 0);
lean_dec(v_unused_5436_);
v___x_5430_ = v___x_5428_;
v_isShared_5431_ = v_isSharedCheck_5435_;
goto v_resetjp_5429_;
}
else
{
lean_dec(v___x_5428_);
v___x_5430_ = lean_box(0);
v_isShared_5431_ = v_isSharedCheck_5435_;
goto v_resetjp_5429_;
}
v_resetjp_5429_:
{
lean_object* v___x_5433_; 
if (v_isShared_5431_ == 0)
{
lean_ctor_set(v___x_5430_, 0, v_a_5421_);
v___x_5433_ = v___x_5430_;
goto v_reusejp_5432_;
}
else
{
lean_object* v_reuseFailAlloc_5434_; 
v_reuseFailAlloc_5434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5434_, 0, v_a_5421_);
v___x_5433_ = v_reuseFailAlloc_5434_;
goto v_reusejp_5432_;
}
v_reusejp_5432_:
{
return v___x_5433_;
}
}
}
else
{
lean_object* v_a_5437_; lean_object* v___x_5439_; uint8_t v_isShared_5440_; uint8_t v_isSharedCheck_5444_; 
lean_dec(v_a_5421_);
v_a_5437_ = lean_ctor_get(v___x_5428_, 0);
v_isSharedCheck_5444_ = !lean_is_exclusive(v___x_5428_);
if (v_isSharedCheck_5444_ == 0)
{
v___x_5439_ = v___x_5428_;
v_isShared_5440_ = v_isSharedCheck_5444_;
goto v_resetjp_5438_;
}
else
{
lean_inc(v_a_5437_);
lean_dec(v___x_5428_);
v___x_5439_ = lean_box(0);
v_isShared_5440_ = v_isSharedCheck_5444_;
goto v_resetjp_5438_;
}
v_resetjp_5438_:
{
lean_object* v___x_5442_; 
if (v_isShared_5440_ == 0)
{
v___x_5442_ = v___x_5439_;
goto v_reusejp_5441_;
}
else
{
lean_object* v_reuseFailAlloc_5443_; 
v_reuseFailAlloc_5443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5443_, 0, v_a_5437_);
v___x_5442_ = v_reuseFailAlloc_5443_;
goto v_reusejp_5441_;
}
v_reusejp_5441_:
{
return v___x_5442_;
}
}
}
}
}
}
else
{
lean_dec(v___y_5413_);
lean_dec_ref(v___y_5412_);
lean_dec(v___y_5411_);
lean_dec_ref(v___y_5410_);
return v___x_5417_;
}
}
else
{
lean_object* v_a_5445_; lean_object* v___x_5447_; uint8_t v_isShared_5448_; uint8_t v_isSharedCheck_5452_; 
lean_dec(v___y_5413_);
lean_dec_ref(v___y_5412_);
lean_dec(v___y_5411_);
lean_dec_ref(v___y_5410_);
v_a_5445_ = lean_ctor_get(v___x_5415_, 0);
v_isSharedCheck_5452_ = !lean_is_exclusive(v___x_5415_);
if (v_isSharedCheck_5452_ == 0)
{
v___x_5447_ = v___x_5415_;
v_isShared_5448_ = v_isSharedCheck_5452_;
goto v_resetjp_5446_;
}
else
{
lean_inc(v_a_5445_);
lean_dec(v___x_5415_);
v___x_5447_ = lean_box(0);
v_isShared_5448_ = v_isSharedCheck_5452_;
goto v_resetjp_5446_;
}
v_resetjp_5446_:
{
lean_object* v___x_5450_; 
if (v_isShared_5448_ == 0)
{
v___x_5450_ = v___x_5447_;
goto v_reusejp_5449_;
}
else
{
lean_object* v_reuseFailAlloc_5451_; 
v_reuseFailAlloc_5451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5451_, 0, v_a_5445_);
v___x_5450_ = v_reuseFailAlloc_5451_;
goto v_reusejp_5449_;
}
v_reusejp_5449_:
{
return v___x_5450_;
}
}
}
}
v___jp_5453_:
{
uint8_t v_hasUncomparable_5460_; 
v_hasUncomparable_5460_ = lean_ctor_get_uint8(v_a_5402_, sizeof(void*)*1);
if (v_hasUncomparable_5460_ == 0)
{
lean_object* v_max_x3f_5461_; 
v_max_x3f_5461_ = lean_ctor_get(v_a_5402_, 0);
lean_inc(v_max_x3f_5461_);
lean_dec(v_a_5402_);
if (lean_obj_tag(v_max_x3f_5461_) == 0)
{
lean_dec_ref_known(v___x_5342_, 4);
v___y_5345_ = v___y_5456_;
v___y_5346_ = v___y_5457_;
v___y_5347_ = v___y_5458_;
v___y_5348_ = v___y_5454_;
v___y_5349_ = v___y_5455_;
v___y_5350_ = v___y_5459_;
goto v___jp_5344_;
}
else
{
lean_dec(v_a_5340_);
lean_dec(v_a_5336_);
lean_dec(v_expectedType_x3f_5317_);
lean_dec_ref(v_val_5314_);
lean_dec(v___x_5312_);
lean_dec(v___x_5311_);
if (v_noProp_5315_ == 0)
{
lean_object* v_val_5462_; 
v_val_5462_ = lean_ctor_get(v_max_x3f_5461_, 0);
lean_inc(v_val_5462_);
lean_dec_ref_known(v_max_x3f_5461_, 1);
v_maxType_5407_ = v_val_5462_;
v___y_5408_ = v___y_5454_;
v___y_5409_ = v___y_5455_;
v___y_5410_ = v___y_5456_;
v___y_5411_ = v___y_5457_;
v___y_5412_ = v___y_5458_;
v___y_5413_ = v___y_5459_;
goto v___jp_5406_;
}
else
{
lean_object* v_val_5463_; lean_object* v___x_5464_; lean_object* v___f_5465_; lean_object* v___x_5466_; 
v_val_5463_ = lean_ctor_get(v_max_x3f_5461_, 0);
lean_inc_n(v_val_5463_, 2);
lean_dec_ref_known(v_max_x3f_5461_, 1);
v___x_5464_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__0, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__0_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__0);
v___f_5465_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_Op_elabBinRelCore___lam__0___boxed), 9, 2);
lean_closure_set(v___f_5465_, 0, v_val_5463_);
lean_closure_set(v___f_5465_, 1, v___x_5464_);
v___x_5466_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary_spec__0___redArg(v___f_5465_, v___x_5318_, v___y_5454_, v___y_5455_, v___y_5456_, v___y_5457_, v___y_5458_, v___y_5459_);
if (lean_obj_tag(v___x_5466_) == 0)
{
lean_object* v_a_5467_; uint8_t v___x_5468_; 
v_a_5467_ = lean_ctor_get(v___x_5466_, 0);
lean_inc(v_a_5467_);
lean_dec_ref_known(v___x_5466_, 1);
v___x_5468_ = lean_unbox(v_a_5467_);
lean_dec(v_a_5467_);
if (v___x_5468_ == 0)
{
v_maxType_5407_ = v_val_5463_;
v___y_5408_ = v___y_5454_;
v___y_5409_ = v___y_5455_;
v___y_5410_ = v___y_5456_;
v___y_5411_ = v___y_5457_;
v___y_5412_ = v___y_5458_;
v___y_5413_ = v___y_5459_;
goto v___jp_5406_;
}
else
{
lean_object* v___x_5469_; 
lean_dec(v_val_5463_);
v___x_5469_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__3, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__3_once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary___closed__3);
v_maxType_5407_ = v___x_5469_;
v___y_5408_ = v___y_5454_;
v___y_5409_ = v___y_5455_;
v___y_5410_ = v___y_5456_;
v___y_5411_ = v___y_5457_;
v___y_5412_ = v___y_5458_;
v___y_5413_ = v___y_5459_;
goto v___jp_5406_;
}
}
else
{
lean_object* v_a_5470_; lean_object* v___x_5472_; uint8_t v_isShared_5473_; uint8_t v_isSharedCheck_5477_; 
lean_dec(v_val_5463_);
lean_dec(v___y_5459_);
lean_dec_ref(v___y_5458_);
lean_dec(v___y_5457_);
lean_dec_ref(v___y_5456_);
lean_dec_ref_known(v___x_5342_, 4);
v_a_5470_ = lean_ctor_get(v___x_5466_, 0);
v_isSharedCheck_5477_ = !lean_is_exclusive(v___x_5466_);
if (v_isSharedCheck_5477_ == 0)
{
v___x_5472_ = v___x_5466_;
v_isShared_5473_ = v_isSharedCheck_5477_;
goto v_resetjp_5471_;
}
else
{
lean_inc(v_a_5470_);
lean_dec(v___x_5466_);
v___x_5472_ = lean_box(0);
v_isShared_5473_ = v_isSharedCheck_5477_;
goto v_resetjp_5471_;
}
v_resetjp_5471_:
{
lean_object* v___x_5475_; 
if (v_isShared_5473_ == 0)
{
v___x_5475_ = v___x_5472_;
goto v_reusejp_5474_;
}
else
{
lean_object* v_reuseFailAlloc_5476_; 
v_reuseFailAlloc_5476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5476_, 0, v_a_5470_);
v___x_5475_ = v_reuseFailAlloc_5476_;
goto v_reusejp_5474_;
}
v_reusejp_5474_:
{
return v___x_5475_;
}
}
}
}
}
}
else
{
lean_dec(v_a_5402_);
lean_dec_ref_known(v___x_5342_, 4);
v___y_5345_ = v___y_5456_;
v___y_5346_ = v___y_5457_;
v___y_5347_ = v___y_5458_;
v___y_5348_ = v___y_5454_;
v___y_5349_ = v___y_5455_;
v___y_5350_ = v___y_5459_;
goto v___jp_5344_;
}
}
v___jp_5478_:
{
lean_object* v___x_5481_; lean_object* v___x_5482_; 
v___x_5481_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5481_, 0, v___y_5479_);
lean_ctor_set(v___x_5481_, 1, v___y_5480_);
v___x_5482_ = l_Lean_addTrace___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_applyCoe_go_spec__0___redArg(v___x_5405_, v___x_5481_, v___y_5321_, v___y_5322_, v___y_5323_, v___y_5324_);
if (lean_obj_tag(v___x_5482_) == 0)
{
lean_dec_ref_known(v___x_5482_, 1);
v___y_5454_ = v___y_5319_;
v___y_5455_ = v___y_5320_;
v___y_5456_ = v___y_5321_;
v___y_5457_ = v___y_5322_;
v___y_5458_ = v___y_5323_;
v___y_5459_ = v___y_5324_;
goto v___jp_5453_;
}
else
{
lean_object* v_a_5483_; lean_object* v___x_5485_; uint8_t v_isShared_5486_; uint8_t v_isSharedCheck_5490_; 
lean_dec(v_a_5402_);
lean_dec_ref_known(v___x_5342_, 4);
lean_dec(v_a_5340_);
lean_dec(v_a_5336_);
lean_dec(v___y_5324_);
lean_dec_ref(v___y_5323_);
lean_dec(v___y_5322_);
lean_dec_ref(v___y_5321_);
lean_dec(v_expectedType_x3f_5317_);
lean_dec_ref(v_val_5314_);
lean_dec(v___x_5312_);
lean_dec(v___x_5311_);
v_a_5483_ = lean_ctor_get(v___x_5482_, 0);
v_isSharedCheck_5490_ = !lean_is_exclusive(v___x_5482_);
if (v_isSharedCheck_5490_ == 0)
{
v___x_5485_ = v___x_5482_;
v_isShared_5486_ = v_isSharedCheck_5490_;
goto v_resetjp_5484_;
}
else
{
lean_inc(v_a_5483_);
lean_dec(v___x_5482_);
v___x_5485_ = lean_box(0);
v_isShared_5486_ = v_isSharedCheck_5490_;
goto v_resetjp_5484_;
}
v_resetjp_5484_:
{
lean_object* v___x_5488_; 
if (v_isShared_5486_ == 0)
{
v___x_5488_ = v___x_5485_;
goto v_reusejp_5487_;
}
else
{
lean_object* v_reuseFailAlloc_5489_; 
v_reuseFailAlloc_5489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5489_, 0, v_a_5483_);
v___x_5488_ = v_reuseFailAlloc_5489_;
goto v_reusejp_5487_;
}
v_reusejp_5487_:
{
return v___x_5488_;
}
}
}
}
}
else
{
lean_object* v_a_5519_; lean_object* v___x_5521_; uint8_t v_isShared_5522_; uint8_t v_isSharedCheck_5526_; 
lean_dec_ref_known(v___x_5342_, 4);
lean_dec(v_a_5340_);
lean_dec(v_a_5336_);
lean_dec(v___y_5324_);
lean_dec_ref(v___y_5323_);
lean_dec(v___y_5322_);
lean_dec_ref(v___y_5321_);
lean_dec(v_expectedType_x3f_5317_);
lean_dec_ref(v_val_5314_);
lean_dec(v___x_5312_);
lean_dec(v___x_5311_);
v_a_5519_ = lean_ctor_get(v___x_5400_, 0);
v_isSharedCheck_5526_ = !lean_is_exclusive(v___x_5400_);
if (v_isSharedCheck_5526_ == 0)
{
v___x_5521_ = v___x_5400_;
v_isShared_5522_ = v_isSharedCheck_5526_;
goto v_resetjp_5520_;
}
else
{
lean_inc(v_a_5519_);
lean_dec(v___x_5400_);
v___x_5521_ = lean_box(0);
v_isShared_5522_ = v_isSharedCheck_5526_;
goto v_resetjp_5520_;
}
v_resetjp_5520_:
{
lean_object* v___x_5524_; 
if (v_isShared_5522_ == 0)
{
v___x_5524_ = v___x_5521_;
goto v_reusejp_5523_;
}
else
{
lean_object* v_reuseFailAlloc_5525_; 
v_reuseFailAlloc_5525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5525_, 0, v_a_5519_);
v___x_5524_ = v_reuseFailAlloc_5525_;
goto v_reusejp_5523_;
}
v_reusejp_5523_:
{
return v___x_5524_;
}
}
}
v___jp_5344_:
{
lean_object* v___x_5351_; 
v___x_5351_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore(v_a_5336_, v___y_5348_, v___y_5349_, v___y_5345_, v___y_5346_, v___y_5347_, v___y_5350_);
if (lean_obj_tag(v___x_5351_) == 0)
{
lean_object* v_a_5352_; lean_object* v___x_5353_; 
v_a_5352_ = lean_ctor_get(v___x_5351_, 0);
lean_inc(v_a_5352_);
lean_dec_ref_known(v___x_5351_, 1);
v___x_5353_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toExprCore(v_a_5340_, v___y_5348_, v___y_5349_, v___y_5345_, v___y_5346_, v___y_5347_, v___y_5350_);
if (lean_obj_tag(v___x_5353_) == 0)
{
lean_object* v_a_5354_; lean_object* v_toCold_5355_; lean_object* v_currRecDepth_5356_; lean_object* v_ref_5357_; uint16_t v_optionFlags_5358_; uint8_t v_suppressElabErrors_5359_; uint8_t v_checkDeprecated_5360_; uint8_t v_isRecordingDeps_5361_; lean_object* v_ref_5362_; lean_object* v___x_5363_; lean_object* v___x_5364_; 
v_a_5354_ = lean_ctor_get(v___x_5353_, 0);
lean_inc(v_a_5354_);
lean_dec_ref_known(v___x_5353_, 1);
v_toCold_5355_ = lean_ctor_get(v___y_5347_, 0);
v_currRecDepth_5356_ = lean_ctor_get(v___y_5347_, 1);
v_ref_5357_ = lean_ctor_get(v___y_5347_, 2);
v_optionFlags_5358_ = lean_ctor_get_uint16(v___y_5347_, sizeof(void*)*3);
v_suppressElabErrors_5359_ = lean_ctor_get_uint8(v___y_5347_, sizeof(void*)*3 + 2);
v_checkDeprecated_5360_ = lean_ctor_get_uint8(v___y_5347_, sizeof(void*)*3 + 3);
v_isRecordingDeps_5361_ = lean_ctor_get_uint8(v___y_5347_, sizeof(void*)*3 + 4);
v_ref_5362_ = l_Lean_replaceRef(v___x_5311_, v_ref_5357_);
lean_dec(v___x_5311_);
lean_inc(v_currRecDepth_5356_);
lean_inc_ref(v_toCold_5355_);
v___x_5363_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_5363_, 0, v_toCold_5355_);
lean_ctor_set(v___x_5363_, 1, v_currRecDepth_5356_);
lean_ctor_set(v___x_5363_, 2, v_ref_5362_);
lean_ctor_set_uint16(v___x_5363_, sizeof(void*)*3, v_optionFlags_5358_);
lean_ctor_set_uint8(v___x_5363_, sizeof(void*)*3 + 2, v_suppressElabErrors_5359_);
lean_ctor_set_uint8(v___x_5363_, sizeof(void*)*3 + 3, v_checkDeprecated_5360_);
lean_ctor_set_uint8(v___x_5363_, sizeof(void*)*3 + 4, v_isRecordingDeps_5361_);
v___x_5364_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary(v_noProp_5315_, v_a_5352_, v___y_5348_, v___y_5349_, v___y_5345_, v___y_5346_, v___x_5363_, v___y_5350_);
lean_dec_ref_known(v___x_5363_, 3);
if (lean_obj_tag(v___x_5364_) == 0)
{
lean_object* v_a_5365_; lean_object* v_ref_5366_; lean_object* v___x_5367_; lean_object* v___x_5368_; 
v_a_5365_ = lean_ctor_get(v___x_5364_, 0);
lean_inc(v_a_5365_);
lean_dec_ref_known(v___x_5364_, 1);
v_ref_5366_ = l_Lean_replaceRef(v___x_5312_, v_ref_5357_);
lean_dec(v___x_5312_);
lean_inc(v_currRecDepth_5356_);
lean_inc_ref(v_toCold_5355_);
v___x_5367_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_5367_, 0, v_toCold_5355_);
lean_ctor_set(v___x_5367_, 1, v_currRecDepth_5356_);
lean_ctor_set(v___x_5367_, 2, v_ref_5366_);
lean_ctor_set_uint16(v___x_5367_, sizeof(void*)*3, v_optionFlags_5358_);
lean_ctor_set_uint8(v___x_5367_, sizeof(void*)*3 + 2, v_suppressElabErrors_5359_);
lean_ctor_set_uint8(v___x_5367_, sizeof(void*)*3 + 3, v_checkDeprecated_5360_);
lean_ctor_set_uint8(v___x_5367_, sizeof(void*)*3 + 4, v_isRecordingDeps_5361_);
v___x_5368_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelCore_toBoolIfNecessary(v_noProp_5315_, v_a_5354_, v___y_5348_, v___y_5349_, v___y_5345_, v___y_5346_, v___x_5367_, v___y_5350_);
if (lean_obj_tag(v___x_5368_) == 0)
{
lean_object* v_a_5369_; lean_object* v___x_5371_; uint8_t v_isShared_5372_; uint8_t v_isSharedCheck_5399_; 
v_a_5369_ = lean_ctor_get(v___x_5368_, 0);
v_isSharedCheck_5399_ = !lean_is_exclusive(v___x_5368_);
if (v_isSharedCheck_5399_ == 0)
{
v___x_5371_ = v___x_5368_;
v_isShared_5372_ = v_isSharedCheck_5399_;
goto v_resetjp_5370_;
}
else
{
lean_inc(v_a_5369_);
lean_dec(v___x_5368_);
v___x_5371_ = lean_box(0);
v_isShared_5372_ = v_isSharedCheck_5399_;
goto v_resetjp_5370_;
}
v_resetjp_5370_:
{
lean_object* v___x_5373_; 
lean_inc(v___y_5350_);
lean_inc_ref(v___y_5347_);
lean_inc(v___y_5346_);
lean_inc_ref(v___y_5345_);
lean_inc(v_a_5365_);
v___x_5373_ = lean_infer_type(v_a_5365_, v___y_5345_, v___y_5346_, v___y_5347_, v___y_5350_);
if (lean_obj_tag(v___x_5373_) == 0)
{
lean_object* v_a_5374_; lean_object* v___x_5376_; uint8_t v_isShared_5377_; uint8_t v_isSharedCheck_5398_; 
v_a_5374_ = lean_ctor_get(v___x_5373_, 0);
v_isSharedCheck_5398_ = !lean_is_exclusive(v___x_5373_);
if (v_isSharedCheck_5398_ == 0)
{
v___x_5376_ = v___x_5373_;
v_isShared_5377_ = v_isSharedCheck_5398_;
goto v_resetjp_5375_;
}
else
{
lean_inc(v_a_5374_);
lean_dec(v___x_5373_);
v___x_5376_ = lean_box(0);
v_isShared_5377_ = v_isSharedCheck_5398_;
goto v_resetjp_5375_;
}
v_resetjp_5375_:
{
lean_object* v___x_5379_; 
if (v_isShared_5377_ == 0)
{
lean_ctor_set_tag(v___x_5376_, 1);
v___x_5379_ = v___x_5376_;
goto v_reusejp_5378_;
}
else
{
lean_object* v_reuseFailAlloc_5397_; 
v_reuseFailAlloc_5397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5397_, 0, v_a_5374_);
v___x_5379_ = v_reuseFailAlloc_5397_;
goto v_reusejp_5378_;
}
v_reusejp_5378_:
{
lean_object* v___x_5380_; 
v___x_5380_ = l_Lean_Elab_Term_ensureHasType(v___x_5379_, v_a_5369_, v___x_5343_, v___x_5343_, v___y_5348_, v___y_5349_, v___y_5345_, v___y_5346_, v___x_5367_, v___y_5350_);
lean_dec_ref_known(v___x_5367_, 3);
if (lean_obj_tag(v___x_5380_) == 0)
{
lean_object* v_a_5381_; lean_object* v___x_5383_; uint8_t v_isShared_5384_; uint8_t v_isSharedCheck_5396_; 
v_a_5381_ = lean_ctor_get(v___x_5380_, 0);
v_isSharedCheck_5396_ = !lean_is_exclusive(v___x_5380_);
if (v_isSharedCheck_5396_ == 0)
{
v___x_5383_ = v___x_5380_;
v_isShared_5384_ = v_isSharedCheck_5396_;
goto v_resetjp_5382_;
}
else
{
lean_inc(v_a_5381_);
lean_dec(v___x_5380_);
v___x_5383_ = lean_box(0);
v_isShared_5384_ = v_isSharedCheck_5396_;
goto v_resetjp_5382_;
}
v_resetjp_5382_:
{
lean_object* v___x_5385_; lean_object* v___x_5387_; 
v___x_5385_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_mkBinOp___closed__0));
if (v_isShared_5384_ == 0)
{
lean_ctor_set_tag(v___x_5383_, 1);
lean_ctor_set(v___x_5383_, 0, v_a_5365_);
v___x_5387_ = v___x_5383_;
goto v_reusejp_5386_;
}
else
{
lean_object* v_reuseFailAlloc_5395_; 
v_reuseFailAlloc_5395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5395_, 0, v_a_5365_);
v___x_5387_ = v_reuseFailAlloc_5395_;
goto v_reusejp_5386_;
}
v_reusejp_5386_:
{
lean_object* v___x_5389_; 
if (v_isShared_5372_ == 0)
{
lean_ctor_set_tag(v___x_5371_, 1);
lean_ctor_set(v___x_5371_, 0, v_a_5381_);
v___x_5389_ = v___x_5371_;
goto v_reusejp_5388_;
}
else
{
lean_object* v_reuseFailAlloc_5394_; 
v_reuseFailAlloc_5394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5394_, 0, v_a_5381_);
v___x_5389_ = v_reuseFailAlloc_5394_;
goto v_reusejp_5388_;
}
v_reusejp_5388_:
{
lean_object* v___x_5390_; lean_object* v___x_5391_; lean_object* v___x_5392_; lean_object* v___x_5393_; 
v___x_5390_ = lean_mk_empty_array_with_capacity(v___x_5316_);
v___x_5391_ = lean_array_push(v___x_5390_, v___x_5387_);
v___x_5392_ = lean_array_push(v___x_5391_, v___x_5389_);
v___x_5393_ = l_Lean_Elab_Term_elabAppArgs(v_val_5314_, v___x_5385_, v___x_5392_, v_expectedType_x3f_5317_, v___x_5318_, v___x_5318_, v___x_5318_, v___y_5348_, v___y_5349_, v___y_5345_, v___y_5346_, v___y_5347_, v___y_5350_);
lean_dec(v___y_5350_);
lean_dec_ref(v___y_5347_);
lean_dec(v___y_5346_);
lean_dec_ref(v___y_5345_);
return v___x_5393_;
}
}
}
}
else
{
lean_del_object(v___x_5371_);
lean_dec(v_a_5365_);
lean_dec(v___y_5350_);
lean_dec_ref(v___y_5347_);
lean_dec(v___y_5346_);
lean_dec_ref(v___y_5345_);
lean_dec(v_expectedType_x3f_5317_);
lean_dec_ref(v_val_5314_);
return v___x_5380_;
}
}
}
}
else
{
lean_del_object(v___x_5371_);
lean_dec(v_a_5369_);
lean_dec_ref_known(v___x_5367_, 3);
lean_dec(v_a_5365_);
lean_dec(v___y_5350_);
lean_dec_ref(v___y_5347_);
lean_dec(v___y_5346_);
lean_dec_ref(v___y_5345_);
lean_dec(v_expectedType_x3f_5317_);
lean_dec_ref(v_val_5314_);
return v___x_5373_;
}
}
}
else
{
lean_dec_ref_known(v___x_5367_, 3);
lean_dec(v_a_5365_);
lean_dec(v___y_5350_);
lean_dec_ref(v___y_5347_);
lean_dec(v___y_5346_);
lean_dec_ref(v___y_5345_);
lean_dec(v_expectedType_x3f_5317_);
lean_dec_ref(v_val_5314_);
return v___x_5368_;
}
}
else
{
lean_dec(v_a_5354_);
lean_dec(v___y_5350_);
lean_dec_ref(v___y_5347_);
lean_dec(v___y_5346_);
lean_dec_ref(v___y_5345_);
lean_dec(v_expectedType_x3f_5317_);
lean_dec_ref(v_val_5314_);
lean_dec(v___x_5312_);
return v___x_5364_;
}
}
else
{
lean_dec(v_a_5352_);
lean_dec(v___y_5350_);
lean_dec_ref(v___y_5347_);
lean_dec(v___y_5346_);
lean_dec_ref(v___y_5345_);
lean_dec(v_expectedType_x3f_5317_);
lean_dec_ref(v_val_5314_);
lean_dec(v___x_5312_);
lean_dec(v___x_5311_);
return v___x_5353_;
}
}
else
{
lean_dec(v___y_5350_);
lean_dec_ref(v___y_5347_);
lean_dec(v___y_5346_);
lean_dec_ref(v___y_5345_);
lean_dec(v_a_5340_);
lean_dec(v_expectedType_x3f_5317_);
lean_dec_ref(v_val_5314_);
lean_dec(v___x_5312_);
lean_dec(v___x_5311_);
return v___x_5351_;
}
}
}
else
{
lean_object* v_a_5527_; lean_object* v___x_5529_; uint8_t v_isShared_5530_; uint8_t v_isSharedCheck_5534_; 
lean_dec(v_a_5336_);
lean_dec(v___y_5324_);
lean_dec_ref(v___y_5323_);
lean_dec(v___y_5322_);
lean_dec_ref(v___y_5321_);
lean_dec(v_expectedType_x3f_5317_);
lean_dec_ref(v_val_5314_);
lean_dec(v_stx_5313_);
lean_dec(v___x_5312_);
lean_dec(v___x_5311_);
v_a_5527_ = lean_ctor_get(v___x_5339_, 0);
v_isSharedCheck_5534_ = !lean_is_exclusive(v___x_5339_);
if (v_isSharedCheck_5534_ == 0)
{
v___x_5529_ = v___x_5339_;
v_isShared_5530_ = v_isSharedCheck_5534_;
goto v_resetjp_5528_;
}
else
{
lean_inc(v_a_5527_);
lean_dec(v___x_5339_);
v___x_5529_ = lean_box(0);
v_isShared_5530_ = v_isSharedCheck_5534_;
goto v_resetjp_5528_;
}
v_resetjp_5528_:
{
lean_object* v___x_5532_; 
if (v_isShared_5530_ == 0)
{
v___x_5532_ = v___x_5529_;
goto v_reusejp_5531_;
}
else
{
lean_object* v_reuseFailAlloc_5533_; 
v_reuseFailAlloc_5533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5533_, 0, v_a_5527_);
v___x_5532_ = v_reuseFailAlloc_5533_;
goto v_reusejp_5531_;
}
v_reusejp_5531_:
{
return v___x_5532_;
}
}
}
}
else
{
lean_object* v_a_5535_; lean_object* v___x_5537_; uint8_t v_isShared_5538_; uint8_t v_isSharedCheck_5542_; 
lean_dec(v___y_5324_);
lean_dec_ref(v___y_5323_);
lean_dec(v___y_5322_);
lean_dec_ref(v___y_5321_);
lean_dec(v_expectedType_x3f_5317_);
lean_dec_ref(v_val_5314_);
lean_dec(v_stx_5313_);
lean_dec(v___x_5312_);
lean_dec(v___x_5311_);
v_a_5535_ = lean_ctor_get(v___x_5335_, 0);
v_isSharedCheck_5542_ = !lean_is_exclusive(v___x_5335_);
if (v_isSharedCheck_5542_ == 0)
{
v___x_5537_ = v___x_5335_;
v_isShared_5538_ = v_isSharedCheck_5542_;
goto v_resetjp_5536_;
}
else
{
lean_inc(v_a_5535_);
lean_dec(v___x_5335_);
v___x_5537_ = lean_box(0);
v_isShared_5538_ = v_isSharedCheck_5542_;
goto v_resetjp_5536_;
}
v_resetjp_5536_:
{
lean_object* v___x_5540_; 
if (v_isShared_5538_ == 0)
{
v___x_5540_ = v___x_5537_;
goto v_reusejp_5539_;
}
else
{
lean_object* v_reuseFailAlloc_5541_; 
v_reuseFailAlloc_5541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5541_, 0, v_a_5535_);
v___x_5540_ = v_reuseFailAlloc_5541_;
goto v_reusejp_5539_;
}
v_reusejp_5539_:
{
return v___x_5540_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinRelCore___lam__1___boxed(lean_object* v___x_5543_, lean_object* v___x_5544_, lean_object* v_stx_5545_, lean_object* v_val_5546_, lean_object* v_noProp_5547_, lean_object* v___x_5548_, lean_object* v_expectedType_x3f_5549_, lean_object* v___x_5550_, lean_object* v___y_5551_, lean_object* v___y_5552_, lean_object* v___y_5553_, lean_object* v___y_5554_, lean_object* v___y_5555_, lean_object* v___y_5556_, lean_object* v___y_5557_){
_start:
{
uint8_t v_noProp_boxed_5558_; uint8_t v___x_12052__boxed_5559_; lean_object* v_res_5560_; 
v_noProp_boxed_5558_ = lean_unbox(v_noProp_5547_);
v___x_12052__boxed_5559_ = lean_unbox(v___x_5550_);
v_res_5560_ = l_Lean_Elab_Term_Op_elabBinRelCore___lam__1(v___x_5543_, v___x_5544_, v_stx_5545_, v_val_5546_, v_noProp_boxed_5558_, v___x_5548_, v_expectedType_x3f_5549_, v___x_12052__boxed_5559_, v___y_5551_, v___y_5552_, v___y_5553_, v___y_5554_, v___y_5555_, v___y_5556_);
lean_dec(v___y_5552_);
lean_dec_ref(v___y_5551_);
lean_dec(v___x_5548_);
return v_res_5560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinRelCore(uint8_t v_noProp_5561_, lean_object* v_stx_5562_, lean_object* v_expectedType_x3f_5563_, lean_object* v_a_5564_, lean_object* v_a_5565_, lean_object* v_a_5566_, lean_object* v_a_5567_, lean_object* v_a_5568_, lean_object* v_a_5569_){
_start:
{
lean_object* v___x_5571_; lean_object* v___x_5572_; lean_object* v___x_5573_; uint8_t v___x_5574_; lean_object* v___x_5575_; 
v___x_5571_ = lean_unsigned_to_nat(1u);
v___x_5572_ = l_Lean_Syntax_getArg(v_stx_5562_, v___x_5571_);
v___x_5573_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp___closed__0));
v___x_5574_ = 0;
lean_inc(v___x_5572_);
v___x_5575_ = l_Lean_Elab_Term_resolveId_x3f(v___x_5572_, v___x_5573_, v___x_5574_, v_a_5564_, v_a_5565_, v_a_5566_, v_a_5567_, v_a_5568_, v_a_5569_);
if (lean_obj_tag(v___x_5575_) == 0)
{
lean_object* v_a_5576_; 
v_a_5576_ = lean_ctor_get(v___x_5575_, 0);
lean_inc(v_a_5576_);
lean_dec_ref_known(v___x_5575_, 1);
if (lean_obj_tag(v_a_5576_) == 0)
{
lean_object* v___x_5577_; lean_object* v___x_5578_; 
lean_dec(v_expectedType_x3f_5563_);
lean_dec(v_stx_5562_);
v___x_5577_ = l_Lean_Syntax_getId(v___x_5572_);
v___x_5578_ = l_Lean_throwUnknownConstantAt___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_toTree_processUnOp_spec__2___redArg(v___x_5572_, v___x_5577_, v_a_5564_, v_a_5565_, v_a_5566_, v_a_5567_, v_a_5568_, v_a_5569_);
lean_dec(v___x_5572_);
return v___x_5578_;
}
else
{
lean_object* v_val_5579_; lean_object* v___x_5580_; lean_object* v___x_5581_; lean_object* v___x_5582_; lean_object* v___x_5583_; lean_object* v___x_5584_; lean_object* v___x_5585_; lean_object* v___f_5586_; lean_object* v___x_5587_; 
lean_dec(v___x_5572_);
v_val_5579_ = lean_ctor_get(v_a_5576_, 0);
lean_inc(v_val_5579_);
lean_dec_ref_known(v_a_5576_, 1);
v___x_5580_ = lean_unsigned_to_nat(2u);
v___x_5581_ = l_Lean_Syntax_getArg(v_stx_5562_, v___x_5580_);
v___x_5582_ = lean_unsigned_to_nat(3u);
v___x_5583_ = l_Lean_Syntax_getArg(v_stx_5562_, v___x_5582_);
v___x_5584_ = lean_box(v_noProp_5561_);
v___x_5585_ = lean_box(v___x_5574_);
v___f_5586_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_Op_elabBinRelCore___lam__1___boxed), 15, 8);
lean_closure_set(v___f_5586_, 0, v___x_5581_);
lean_closure_set(v___f_5586_, 1, v___x_5583_);
lean_closure_set(v___f_5586_, 2, v_stx_5562_);
lean_closure_set(v___f_5586_, 3, v_val_5579_);
lean_closure_set(v___f_5586_, 4, v___x_5584_);
lean_closure_set(v___f_5586_, 5, v___x_5580_);
lean_closure_set(v___f_5586_, 6, v_expectedType_x3f_5563_);
lean_closure_set(v___f_5586_, 7, v___x_5585_);
v___x_5587_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeLightImp(lean_box(0), v___f_5586_, v_a_5564_, v_a_5565_, v_a_5566_, v_a_5567_, v_a_5568_, v_a_5569_);
return v___x_5587_;
}
}
else
{
lean_object* v_a_5588_; lean_object* v___x_5590_; uint8_t v_isShared_5591_; uint8_t v_isSharedCheck_5595_; 
lean_dec(v___x_5572_);
lean_dec(v_expectedType_x3f_5563_);
lean_dec(v_stx_5562_);
v_a_5588_ = lean_ctor_get(v___x_5575_, 0);
v_isSharedCheck_5595_ = !lean_is_exclusive(v___x_5575_);
if (v_isSharedCheck_5595_ == 0)
{
v___x_5590_ = v___x_5575_;
v_isShared_5591_ = v_isSharedCheck_5595_;
goto v_resetjp_5589_;
}
else
{
lean_inc(v_a_5588_);
lean_dec(v___x_5575_);
v___x_5590_ = lean_box(0);
v_isShared_5591_ = v_isSharedCheck_5595_;
goto v_resetjp_5589_;
}
v_resetjp_5589_:
{
lean_object* v___x_5593_; 
if (v_isShared_5591_ == 0)
{
v___x_5593_ = v___x_5590_;
goto v_reusejp_5592_;
}
else
{
lean_object* v_reuseFailAlloc_5594_; 
v_reuseFailAlloc_5594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5594_, 0, v_a_5588_);
v___x_5593_ = v_reuseFailAlloc_5594_;
goto v_reusejp_5592_;
}
v_reusejp_5592_:
{
return v___x_5593_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinRelCore___boxed(lean_object* v_noProp_5596_, lean_object* v_stx_5597_, lean_object* v_expectedType_x3f_5598_, lean_object* v_a_5599_, lean_object* v_a_5600_, lean_object* v_a_5601_, lean_object* v_a_5602_, lean_object* v_a_5603_, lean_object* v_a_5604_, lean_object* v_a_5605_){
_start:
{
uint8_t v_noProp_boxed_5606_; lean_object* v_res_5607_; 
v_noProp_boxed_5606_ = lean_unbox(v_noProp_5596_);
v_res_5607_ = l_Lean_Elab_Term_Op_elabBinRelCore(v_noProp_boxed_5606_, v_stx_5597_, v_expectedType_x3f_5598_, v_a_5599_, v_a_5600_, v_a_5601_, v_a_5602_, v_a_5603_, v_a_5604_);
lean_dec(v_a_5604_);
lean_dec_ref(v_a_5603_);
lean_dec(v_a_5602_);
lean_dec_ref(v_a_5601_);
lean_dec(v_a_5600_);
lean_dec_ref(v_a_5599_);
return v_res_5607_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinRel(lean_object* v_stx_5608_, lean_object* v_expectedType_x3f_5609_, lean_object* v_a_5610_, lean_object* v_a_5611_, lean_object* v_a_5612_, lean_object* v_a_5613_, lean_object* v_a_5614_, lean_object* v_a_5615_){
_start:
{
uint8_t v___x_5617_; lean_object* v___x_5618_; 
v___x_5617_ = 0;
v___x_5618_ = l_Lean_Elab_Term_Op_elabBinRelCore(v___x_5617_, v_stx_5608_, v_expectedType_x3f_5609_, v_a_5610_, v_a_5611_, v_a_5612_, v_a_5613_, v_a_5614_, v_a_5615_);
return v___x_5618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinRel___boxed(lean_object* v_stx_5619_, lean_object* v_expectedType_x3f_5620_, lean_object* v_a_5621_, lean_object* v_a_5622_, lean_object* v_a_5623_, lean_object* v_a_5624_, lean_object* v_a_5625_, lean_object* v_a_5626_, lean_object* v_a_5627_){
_start:
{
lean_object* v_res_5628_; 
v_res_5628_ = l_Lean_Elab_Term_Op_elabBinRel(v_stx_5619_, v_expectedType_x3f_5620_, v_a_5621_, v_a_5622_, v_a_5623_, v_a_5624_, v_a_5625_, v_a_5626_);
lean_dec(v_a_5626_);
lean_dec_ref(v_a_5625_);
lean_dec(v_a_5624_);
lean_dec_ref(v_a_5623_);
lean_dec(v_a_5622_);
lean_dec_ref(v_a_5621_);
return v_res_5628_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1(){
_start:
{
lean_object* v___x_5642_; lean_object* v___x_5643_; lean_object* v___x_5644_; lean_object* v___x_5645_; lean_object* v___x_5646_; 
v___x_5642_ = l_Lean_Elab_Term_termElabAttribute;
v___x_5643_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__0));
v___x_5644_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__2));
v___x_5645_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_Op_elabBinRel___boxed), 9, 0);
v___x_5646_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5642_, v___x_5643_, v___x_5644_, v___x_5645_);
return v___x_5646_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___boxed(lean_object* v_a_5647_){
_start:
{
lean_object* v_res_5648_; 
v_res_5648_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1();
return v_res_5648_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3(){
_start:
{
lean_object* v___x_5675_; lean_object* v___x_5676_; lean_object* v___x_5677_; 
v___x_5675_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1___closed__2));
v___x_5676_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___closed__6));
v___x_5677_ = l_Lean_addBuiltinDeclarationRanges(v___x_5675_, v___x_5676_);
return v___x_5677_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3___boxed(lean_object* v_a_5678_){
_start:
{
lean_object* v_res_5679_; 
v_res_5679_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3();
return v_res_5679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinRelNoProp(lean_object* v_stx_5680_, lean_object* v_expectedType_x3f_5681_, lean_object* v_a_5682_, lean_object* v_a_5683_, lean_object* v_a_5684_, lean_object* v_a_5685_, lean_object* v_a_5686_, lean_object* v_a_5687_){
_start:
{
uint8_t v___x_5689_; lean_object* v___x_5690_; 
v___x_5689_ = 1;
v___x_5690_ = l_Lean_Elab_Term_Op_elabBinRelCore(v___x_5689_, v_stx_5680_, v_expectedType_x3f_5681_, v_a_5682_, v_a_5683_, v_a_5684_, v_a_5685_, v_a_5686_, v_a_5687_);
return v___x_5690_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabBinRelNoProp___boxed(lean_object* v_stx_5691_, lean_object* v_expectedType_x3f_5692_, lean_object* v_a_5693_, lean_object* v_a_5694_, lean_object* v_a_5695_, lean_object* v_a_5696_, lean_object* v_a_5697_, lean_object* v_a_5698_, lean_object* v_a_5699_){
_start:
{
lean_object* v_res_5700_; 
v_res_5700_ = l_Lean_Elab_Term_Op_elabBinRelNoProp(v_stx_5691_, v_expectedType_x3f_5692_, v_a_5693_, v_a_5694_, v_a_5695_, v_a_5696_, v_a_5697_, v_a_5698_);
lean_dec(v_a_5698_);
lean_dec_ref(v_a_5697_);
lean_dec(v_a_5696_);
lean_dec_ref(v_a_5695_);
lean_dec(v_a_5694_);
lean_dec_ref(v_a_5693_);
return v_res_5700_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1(){
_start:
{
lean_object* v___x_5715_; lean_object* v___x_5716_; lean_object* v___x_5717_; lean_object* v___x_5718_; lean_object* v___x_5719_; 
v___x_5715_ = l_Lean_Elab_Term_termElabAttribute;
v___x_5716_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__1));
v___x_5717_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__3));
v___x_5718_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_Op_elabBinRelNoProp___boxed), 9, 0);
v___x_5719_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5715_, v___x_5716_, v___x_5717_, v___x_5718_);
return v___x_5719_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___boxed(lean_object* v_a_5720_){
_start:
{
lean_object* v_res_5721_; 
v_res_5721_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1();
return v_res_5721_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3(){
_start:
{
lean_object* v___x_5748_; lean_object* v___x_5749_; lean_object* v___x_5750_; 
v___x_5748_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1___closed__3));
v___x_5749_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___closed__6));
v___x_5750_ = l_Lean_addBuiltinDeclarationRanges(v___x_5748_, v___x_5749_);
return v___x_5750_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3___boxed(lean_object* v_a_5751_){
_start:
{
lean_object* v_res_5752_; 
v_res_5752_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3();
return v_res_5752_;
}
}
static lean_object* _init_l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__1(void){
_start:
{
lean_object* v___x_5754_; lean_object* v___x_5755_; 
v___x_5754_ = ((lean_object*)(l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__0));
v___x_5755_ = l_Lean_stringToMessageData(v___x_5754_);
return v___x_5755_;
}
}
static lean_object* _init_l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__3(void){
_start:
{
lean_object* v___x_5757_; lean_object* v___x_5758_; 
v___x_5757_ = ((lean_object*)(l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__2));
v___x_5758_ = l_Lean_stringToMessageData(v___x_5757_);
return v___x_5758_;
}
}
static lean_object* _init_l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__7(void){
_start:
{
lean_object* v___x_5763_; lean_object* v___x_5764_; 
v___x_5763_ = ((lean_object*)(l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__6));
v___x_5764_ = l_Lean_stringToMessageData(v___x_5763_);
return v___x_5764_;
}
}
static lean_object* _init_l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__11(void){
_start:
{
lean_object* v___x_5769_; lean_object* v___x_5770_; 
v___x_5769_ = ((lean_object*)(l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__10));
v___x_5770_ = l_Lean_stringToMessageData(v___x_5769_);
return v___x_5770_;
}
}
static lean_object* _init_l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__13(void){
_start:
{
lean_object* v___x_5772_; lean_object* v___x_5773_; 
v___x_5772_ = ((lean_object*)(l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__12));
v___x_5773_ = l_Lean_stringToMessageData(v___x_5772_);
return v___x_5773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabDefaultOrNonempty(lean_object* v_stx_5774_, lean_object* v_expectedType_x3f_5775_, lean_object* v_a_5776_, lean_object* v_a_5777_, lean_object* v_a_5778_, lean_object* v_a_5779_, lean_object* v_a_5780_, lean_object* v_a_5781_){
_start:
{
lean_object* v___x_5783_; 
lean_inc(v_expectedType_x3f_5775_);
v___x_5783_ = l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(v_expectedType_x3f_5775_, v_a_5776_, v_a_5777_, v_a_5778_, v_a_5779_, v_a_5780_, v_a_5781_);
if (lean_obj_tag(v___x_5783_) == 0)
{
lean_dec_ref_known(v___x_5783_, 1);
if (lean_obj_tag(v_expectedType_x3f_5775_) == 0)
{
lean_object* v___x_5784_; lean_object* v___x_5785_; 
v___x_5784_ = lean_obj_once(&l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__1, &l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__1_once, _init_l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__1);
v___x_5785_ = l_Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0___redArg(v___x_5784_, v_a_5776_, v_a_5777_, v_a_5778_, v_a_5779_, v_a_5780_, v_a_5781_);
return v___x_5785_;
}
else
{
lean_object* v_val_5786_; lean_object* v___x_5787_; 
v_val_5786_ = lean_ctor_get(v_expectedType_x3f_5775_, 0);
lean_inc_n(v_val_5786_, 2);
lean_dec_ref_known(v_expectedType_x3f_5775_, 1);
v___x_5787_ = l_Lean_Meta_mkDefault(v_val_5786_, v_a_5778_, v_a_5779_, v_a_5780_, v_a_5781_);
if (lean_obj_tag(v___x_5787_) == 0)
{
lean_dec(v_val_5786_);
return v___x_5787_;
}
else
{
lean_object* v_a_5788_; uint8_t v___x_5789_; 
v_a_5788_ = lean_ctor_get(v___x_5787_, 0);
v___x_5789_ = l_Lean_Exception_isInterrupt(v_a_5788_);
if (v___x_5789_ == 0)
{
uint8_t v___x_5790_; 
lean_inc(v_a_5788_);
v___x_5790_ = l_Lean_Exception_isRuntime(v_a_5788_);
if (v___x_5790_ == 0)
{
lean_object* v___x_5791_; 
lean_dec_ref_known(v___x_5787_, 1);
lean_inc(v_val_5786_);
v___x_5791_ = l_Lean_Meta_mkOfNonempty(v_val_5786_, v_a_5778_, v_a_5779_, v_a_5780_, v_a_5781_);
if (lean_obj_tag(v___x_5791_) == 0)
{
lean_dec(v_val_5786_);
return v___x_5791_;
}
else
{
lean_object* v_a_5792_; uint8_t v___x_5793_; 
v_a_5792_ = lean_ctor_get(v___x_5791_, 0);
v___x_5793_ = l_Lean_Exception_isInterrupt(v_a_5792_);
if (v___x_5793_ == 0)
{
uint8_t v___x_5794_; 
lean_inc(v_a_5792_);
v___x_5794_ = l_Lean_Exception_isRuntime(v_a_5792_);
if (v___x_5794_ == 0)
{
lean_object* v___x_5795_; lean_object* v___x_5796_; uint8_t v___x_5797_; 
lean_dec_ref_known(v___x_5791_, 1);
v___x_5795_ = lean_unsigned_to_nat(1u);
v___x_5796_ = l_Lean_Syntax_getArg(v_stx_5774_, v___x_5795_);
v___x_5797_ = l_Lean_Syntax_isNone(v___x_5796_);
lean_dec(v___x_5796_);
if (v___x_5797_ == 0)
{
uint8_t v___x_5798_; lean_object* v___x_5799_; 
v___x_5798_ = 1;
v___x_5799_ = l_Lean_Meta_mkLabeledSorry(v_val_5786_, v___x_5797_, v___x_5798_, v_a_5778_, v_a_5779_, v_a_5780_, v_a_5781_);
return v___x_5799_;
}
else
{
lean_object* v___x_5800_; lean_object* v___x_5801_; lean_object* v___x_5802_; lean_object* v___x_5803_; lean_object* v___x_5804_; lean_object* v___x_5805_; lean_object* v___x_5806_; lean_object* v___x_5807_; lean_object* v___x_5808_; lean_object* v___x_5809_; lean_object* v___x_5810_; lean_object* v___x_5811_; lean_object* v___x_5812_; lean_object* v___x_5813_; lean_object* v___x_5814_; lean_object* v___x_5815_; 
v___x_5800_ = lean_obj_once(&l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__3, &l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__3_once, _init_l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__3);
v___x_5801_ = ((lean_object*)(l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__5));
v___x_5802_ = l_Lean_MessageData_ofConstName(v___x_5801_, v___x_5794_);
v___x_5803_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5803_, 0, v___x_5800_);
lean_ctor_set(v___x_5803_, 1, v___x_5802_);
v___x_5804_ = lean_obj_once(&l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__7, &l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__7_once, _init_l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__7);
v___x_5805_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5805_, 0, v___x_5803_);
lean_ctor_set(v___x_5805_, 1, v___x_5804_);
v___x_5806_ = ((lean_object*)(l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__9));
v___x_5807_ = l_Lean_MessageData_ofConstName(v___x_5806_, v___x_5794_);
v___x_5808_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5808_, 0, v___x_5805_);
lean_ctor_set(v___x_5808_, 1, v___x_5807_);
v___x_5809_ = lean_obj_once(&l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__11, &l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__11_once, _init_l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__11);
v___x_5810_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5810_, 0, v___x_5808_);
lean_ctor_set(v___x_5810_, 1, v___x_5809_);
v___x_5811_ = l_Lean_indentExpr(v_val_5786_);
v___x_5812_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5812_, 0, v___x_5810_);
lean_ctor_set(v___x_5812_, 1, v___x_5811_);
v___x_5813_ = lean_obj_once(&l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__13, &l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__13_once, _init_l_Lean_Elab_Term_Op_elabDefaultOrNonempty___closed__13);
v___x_5814_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5814_, 0, v___x_5812_);
lean_ctor_set(v___x_5814_, 1, v___x_5813_);
v___x_5815_ = l_Lean_throwError___at___00__private_Lean_Elab_Extra_0__Lean_Elab_Term_getMonadForIn_spec__0___redArg(v___x_5814_, v_a_5776_, v_a_5777_, v_a_5778_, v_a_5779_, v_a_5780_, v_a_5781_);
return v___x_5815_;
}
}
else
{
lean_dec(v_val_5786_);
return v___x_5791_;
}
}
else
{
lean_dec(v_val_5786_);
return v___x_5791_;
}
}
}
else
{
lean_dec(v_val_5786_);
return v___x_5787_;
}
}
else
{
lean_dec(v_val_5786_);
return v___x_5787_;
}
}
}
}
else
{
lean_object* v_a_5816_; lean_object* v___x_5818_; uint8_t v_isShared_5819_; uint8_t v_isSharedCheck_5823_; 
lean_dec(v_expectedType_x3f_5775_);
v_a_5816_ = lean_ctor_get(v___x_5783_, 0);
v_isSharedCheck_5823_ = !lean_is_exclusive(v___x_5783_);
if (v_isSharedCheck_5823_ == 0)
{
v___x_5818_ = v___x_5783_;
v_isShared_5819_ = v_isSharedCheck_5823_;
goto v_resetjp_5817_;
}
else
{
lean_inc(v_a_5816_);
lean_dec(v___x_5783_);
v___x_5818_ = lean_box(0);
v_isShared_5819_ = v_isSharedCheck_5823_;
goto v_resetjp_5817_;
}
v_resetjp_5817_:
{
lean_object* v___x_5821_; 
if (v_isShared_5819_ == 0)
{
v___x_5821_ = v___x_5818_;
goto v_reusejp_5820_;
}
else
{
lean_object* v_reuseFailAlloc_5822_; 
v_reuseFailAlloc_5822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5822_, 0, v_a_5816_);
v___x_5821_ = v_reuseFailAlloc_5822_;
goto v_reusejp_5820_;
}
v_reusejp_5820_:
{
return v___x_5821_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Op_elabDefaultOrNonempty___boxed(lean_object* v_stx_5824_, lean_object* v_expectedType_x3f_5825_, lean_object* v_a_5826_, lean_object* v_a_5827_, lean_object* v_a_5828_, lean_object* v_a_5829_, lean_object* v_a_5830_, lean_object* v_a_5831_, lean_object* v_a_5832_){
_start:
{
lean_object* v_res_5833_; 
v_res_5833_ = l_Lean_Elab_Term_Op_elabDefaultOrNonempty(v_stx_5824_, v_expectedType_x3f_5825_, v_a_5826_, v_a_5827_, v_a_5828_, v_a_5829_, v_a_5830_, v_a_5831_);
lean_dec(v_a_5831_);
lean_dec_ref(v_a_5830_);
lean_dec(v_a_5829_);
lean_dec_ref(v_a_5828_);
lean_dec(v_a_5827_);
lean_dec_ref(v_a_5826_);
lean_dec(v_stx_5824_);
return v_res_5833_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1(){
_start:
{
lean_object* v___x_5848_; lean_object* v___x_5849_; lean_object* v___x_5850_; lean_object* v___x_5851_; lean_object* v___x_5852_; 
v___x_5848_ = l_Lean_Elab_Term_termElabAttribute;
v___x_5849_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__1));
v___x_5850_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__3));
v___x_5851_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_Op_elabDefaultOrNonempty___boxed), 9, 0);
v___x_5852_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5848_, v___x_5849_, v___x_5850_, v___x_5851_);
return v___x_5852_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___boxed(lean_object* v_a_5853_){
_start:
{
lean_object* v_res_5854_; 
v_res_5854_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1();
return v_res_5854_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3(){
_start:
{
lean_object* v___x_5881_; lean_object* v___x_5882_; lean_object* v___x_5883_; 
v___x_5881_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1___closed__3));
v___x_5882_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___closed__6));
v___x_5883_ = l_Lean_addBuiltinDeclarationRanges(v___x_5881_, v___x_5882_);
return v___x_5883_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3___boxed(lean_object* v_a_5884_){
_start:
{
lean_object* v_res_5885_; 
v_res_5885_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3();
return v_res_5885_;
}
}
static lean_object* _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__18_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5932_; lean_object* v___x_5933_; lean_object* v___x_5934_; 
v___x_5932_ = lean_unsigned_to_nat(2859506122u);
v___x_5933_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__17_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_));
v___x_5934_ = l_Lean_Name_num___override(v___x_5933_, v___x_5932_);
return v___x_5934_;
}
}
static lean_object* _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__20_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5936_; lean_object* v___x_5937_; lean_object* v___x_5938_; 
v___x_5936_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__19_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_));
v___x_5937_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__18_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__18_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__18_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_);
v___x_5938_ = l_Lean_Name_str___override(v___x_5937_, v___x_5936_);
return v___x_5938_;
}
}
static lean_object* _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__22_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5940_; lean_object* v___x_5941_; lean_object* v___x_5942_; 
v___x_5940_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__21_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_));
v___x_5941_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__20_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__20_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__20_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_);
v___x_5942_ = l_Lean_Name_str___override(v___x_5941_, v___x_5940_);
return v___x_5942_;
}
}
static lean_object* _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__23_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5943_; lean_object* v___x_5944_; lean_object* v___x_5945_; 
v___x_5943_ = lean_unsigned_to_nat(2u);
v___x_5944_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__22_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__22_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__22_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_);
v___x_5945_ = l_Lean_Name_num___override(v___x_5944_, v___x_5943_);
return v___x_5945_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5947_; uint8_t v___x_5948_; lean_object* v___x_5949_; lean_object* v___x_5950_; 
v___x_5947_ = ((lean_object*)(l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_analyze_go___closed__0));
v___x_5948_ = 0;
v___x_5949_ = lean_obj_once(&l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__23_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_, &l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__23_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn___closed__23_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_);
v___x_5950_ = l_Lean_registerTraceClass(v___x_5947_, v___x_5948_, v___x_5949_);
if (lean_obj_tag(v___x_5950_) == 0)
{
lean_object* v___x_5951_; lean_object* v___x_5952_; 
lean_dec_ref_known(v___x_5950_, 1);
v___x_5951_ = ((lean_object*)(l_Lean_Elab_Term_Op_elabBinRelCore___lam__1___closed__1));
v___x_5952_ = l_Lean_registerTraceClass(v___x_5951_, v___x_5948_, v___x_5949_);
return v___x_5952_;
}
else
{
return v___x_5950_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2____boxed(lean_object* v_a_5953_){
_start:
{
lean_object* v_res_5954_; 
v_res_5954_ = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_();
return v_res_5954_;
}
}
lean_object* runtime_initialize_Lean_Elab_App(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_BuiltinNotation(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Extra(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinNotation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn___regBuiltin_Lean_Elab_Term_elabForIn_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabForIn_x27___regBuiltin_Lean_Elab_Term_elabForIn_x27_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_elabListLitAux___regBuiltin_Lean_Elab_Term_elabListLitAux__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOp___regBuiltin_Lean_Elab_Term_Op_elabBinOp_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinOpLazy___regBuiltin_Lean_Elab_Term_Op_elabBinOpLazy_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabLeftact___regBuiltin_Lean_Elab_Term_Op_elabLeftact_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabRightact___regBuiltin_Lean_Elab_Term_Op_elabRightact_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabUnOp___regBuiltin_Lean_Elab_Term_Op_elabUnOp_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRel___regBuiltin_Lean_Elab_Term_Op_elabBinRel_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabBinRelNoProp___regBuiltin_Lean_Elab_Term_Op_elabBinRelNoProp_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_elabDefaultOrNonempty___regBuiltin_Lean_Elab_Term_Op_elabDefaultOrNonempty_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_Op_initFn_00___x40_Lean_Elab_Extra_2859506122____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Extra(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_App(uint8_t builtin);
lean_object* initialize_Lean_Elab_BuiltinNotation(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Extra(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_BuiltinNotation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Extra(builtin);
}
#ifdef __cplusplus
}
#endif
