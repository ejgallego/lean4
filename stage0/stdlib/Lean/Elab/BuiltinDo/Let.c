// Lean compiler output
// Module: Lean.Elab.BuiltinDo.Let
// Imports: meta import Init.Data.Erased public import Lean.Elab.Do.Basic meta import Lean.Parser.Do import Lean.Elab.BuiltinDo.Basic import Lean.Elab.Do.PatternVar
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
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_macroAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwUnsupported___redArg(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Array_mkArray0___redArg();
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_withErasedProj(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Elab_Do_elabDoElem(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Elab_Term_addLocalVarInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Elab_Do_registerMutVarAlias(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_findMutVar_x3f___redArg(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Elab_Do_declareMutVars_x3f___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_abstractM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_withFreshMacroScope___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Do_doElemElabAttribute;
lean_object* l_Lean_Elab_Do_getLetDeclVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_throwUnlessMutVarsDeclared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_checkMutVarsForShadowing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_ensureUnitAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_exprToSyntax(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_doElabToSyntax___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_Term_elabType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_registerCustomErrorIfMVar___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_registerLevelMVarErrorExprInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
lean_object* l_Lean_LocalDecl_setType(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_set___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBindersEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
uint8_t l_Lean_LocalDeclKind_ofBinderName(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Elab_Do_mkMonadApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Elab_Term_mkLetIdDeclView(lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* l_Lean_Elab_Term_expandLetEqnsDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_Elab_Term_elabTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutErrToSorryImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDeclFromUserName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkLetConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Lean_Elab_Do_getLetRecDeclsVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoIdDecl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_Elab_Do_declareMutVar_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_getPatternVarsEx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoElem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_throwUnlessMutVarDeclared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_let_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_let_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_have_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_have_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_reassign_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_reassign_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_getLetMutTk_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_getLetMutTk_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Do_LetOrReassign_isErasedDecl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_isErasedDecl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_isErased___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_isErased___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_isErased(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_isErased___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "an erased variable takes a plain reassignment, as in `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " := e`"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_checkMutVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_checkMutVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letDecl"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3_value),LEAN_SCALAR_PTR_LITERAL(61, 47, 121, 206, 37, 68, 134, 111)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "Impossible case in elabDoLetOrReassign. This is an elaborator bug.\n"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__5 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letIdDecl"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__7 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__7_value),LEAN_SCALAR_PTR_LITERAL(82, 96, 243, 36, 251, 209, 136, 237)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "letPatDecl"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9_value),LEAN_SCALAR_PTR_LITERAL(9, 25, 156, 50, 29, 105, 147, 239)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__11 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__11_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__15 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__15_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__17 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__17_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__17_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__20 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__20_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__20_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__27 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__27_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__28 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__28_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__29_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__28_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__29 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__29_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__29_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__30 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__30_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__32 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__32_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__32_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__33 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__33_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__30_value),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__33_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__34 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__34_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__27_value),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__34_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__35 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__35_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__38 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__38_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__38_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "letId"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40_value),LEAN_SCALAR_PTR_LITERAL(67, 92, 92, 51, 38, 250, 60, 190)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "`+generalize` is not supported in `do` blocks"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__1;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "`+postponeValue` is not supported in `do` blocks"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Erased.mk"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Erased"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__4 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__4_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__5 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__4_value),LEAN_SCALAR_PTR_LITERAL(186, 40, 6, 0, 4, 37, 246, 41)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__5_value),LEAN_SCALAR_PTR_LITERAL(74, 35, 74, 233, 12, 85, 169, 163)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__6 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__7 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__8 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__9;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__4_value),LEAN_SCALAR_PTR_LITERAL(186, 40, 6, 0, 4, 37, 246, 41)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__10 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__11 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__10_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__12 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__12_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__13 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__11_value),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__13_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__14 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__14_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__32_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__15 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__30_value),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__15_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__16 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__16_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__27_value),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__16_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__17 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__17_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "failed to infer `"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__1;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "` declaration type"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__3;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "failed to infer universe levels in `"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__5;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "let"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "have"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__7 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13_spec__18___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13_spec__18___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13_spec__18___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13_spec__18___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13_spec__18___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13_spec__18___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__0_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "m"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__2;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(165, 239, 73, 172, 230, 126, 139, 134)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__3_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "syntheticHole"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__4_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letMVar"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__5 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__5_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "let_mvar%"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__6 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__6_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "waitIfTypeMVar"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__8 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__8_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "wait_if_type_mvar%"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__9 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__9_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "match"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__10 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__10_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "matchDiscr"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__11 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__11_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "with"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__12 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__12_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__13 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__13_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchAlt"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__14 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__14_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__16 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__16_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "motive"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__17 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__17_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "forall"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__18 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__18_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "∀"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__19 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__19_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__20 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__20_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__21 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__21_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__22 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__22_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___boxed(lean_object**);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__0;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___closed__0 = (const lean_object*)&l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___closed__0_value;
static const lean_ctor_object l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___closed__1 = (const lean_object*)&l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___closed__1_value;
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21_spec__24___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21_spec__24___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21_spec__24___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21_spec__24___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21_spec__24___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21_spec__24___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22_spec__26_spec__29___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22_spec__26_spec__29___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22_spec__26___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22_spec__26___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__1;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__2;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__3;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__4;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__5;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__6;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__7_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__7_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__8 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__8_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__10;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__11 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__11_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__12;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__13;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__14;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__15_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__16;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__17_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__18;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__19 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__19_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__20 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__20_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__21 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__21_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__22 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__22_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__18(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__19_spec__25___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__19_spec__25___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__19___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__19___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information"};
static const lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__1_value;
static const lean_closure_object l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___lam__0___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__1_value)} };
static const lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "let body of "};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__1;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "decl"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(221, 9, 221, 202, 9, 173, 58, 127)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__2_value),LEAN_SCALAR_PTR_LITERAL(132, 25, 49, 206, 109, 94, 77, 137)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__4;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__5 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__6;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__7 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__7_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__8;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "letEqnsDecl"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__9 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__10_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__10_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__9_value),LEAN_SCALAR_PTR_LITERAL(82, 210, 72, 51, 179, 245, 26, 94)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__10 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__19(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__19___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21_spec__24(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__19_spec__25(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__19_spec__25___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22_spec__26(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22_spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22_spec__26_spec__29(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22_spec__26_spec__29___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "configuration options are not allowed with `let mut`"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoLet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doLet"};
static const lean_object* l_Lean_Elab_Do_elabDoLet___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__0_value),LEAN_SCALAR_PTR_LITERAL(60, 171, 222, 145, 87, 124, 9, 205)}};
static const lean_object* l_Lean_Elab_Do_elabDoLet___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLet___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letConfig"};
static const lean_object* l_Lean_Elab_Do_elabDoLet___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__2_value),LEAN_SCALAR_PTR_LITERAL(5, 186, 227, 151, 19, 40, 136, 241)}};
static const lean_object* l_Lean_Elab_Do_elabDoLet___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_Do_elabDoLet___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "elabDoLet"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 0, 15, 120, 200, 84, 91, 220)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoErased___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doErased"};
static const lean_object* l_Lean_Elab_Do_elabDoErased___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoErased___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoErased___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoErased___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoErased___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 69, 120, 16, 133, 86, 56, 26)}};
static const lean_object* l_Lean_Elab_Do_elabDoErased___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__1_value;
static const lean_array_object l_Lean_Elab_Do_elabDoErased___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Do_elabDoErased___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__2_value;
static const lean_string_object l_Lean_Elab_Do_elabDoErased___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "letIdDeclNoBinders"};
static const lean_object* l_Lean_Elab_Do_elabDoErased___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoErased___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoErased___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoErased___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoErased___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__3_value),LEAN_SCALAR_PTR_LITERAL(205, 0, 127, 82, 201, 96, 42, 5)}};
static const lean_object* l_Lean_Elab_Do_elabDoErased___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoErased(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoErased___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "elabDoErased"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 19, 50, 139, 19, 74, 58, 104)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoErasedArrow___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoErasedArrow___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doNested"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__0 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(220, 154, 41, 109, 103, 76, 110, 63)}};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__1 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "do"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__2 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__2_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doSeqIndent"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__3 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__3_value),LEAN_SCALAR_PTR_LITERAL(93, 115, 138, 230, 225, 195, 43, 46)}};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__4 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__4_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doSeqItem"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__5 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__6_value_aux_2),((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__5_value),LEAN_SCALAR_PTR_LITERAL(10, 94, 50, 120, 46, 251, 13, 13)}};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__6 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__6_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "doErasedArrow"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__7 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__7_value),LEAN_SCALAR_PTR_LITERAL(176, 216, 203, 158, 108, 103, 134, 112)}};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__8 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__8_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "←"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__9 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__9_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "erased"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__10 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__10_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mut"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__11 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__11_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "__x"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__12 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__12_value),LEAN_SCALAR_PTR_LITERAL(238, 215, 60, 46, 39, 217, 189, 106)}};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__13 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__13_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doLetArrow"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__14 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__15_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__15_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__15_value_aux_2),((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__14_value),LEAN_SCALAR_PTR_LITERAL(155, 105, 77, 168, 26, 188, 17, 34)}};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__15 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__15_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doIdDecl"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__16 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__16_value;
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__17_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__17_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__17_value_aux_2),((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__16_value),LEAN_SCALAR_PTR_LITERAL(41, 95, 84, 160, 28, 70, 78, 179)}};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__17 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__17_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoErasedArrow(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoErasedArrow___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "expandDoErasedArrow"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(230, 145, 84, 137, 209, 6, 18, 127)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoHave___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doHave"};
static const lean_object* l_Lean_Elab_Do_elabDoHave___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoHave___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoHave___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoHave___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoHave___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoHave___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoHave___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoHave___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoHave___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoHave___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 74, 100, 51, 242, 214, 142, 115)}};
static const lean_object* l_Lean_Elab_Do_elabDoHave___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoHave___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoHave___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "elabDoHave"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 115, 123, 116, 44, 216, 133, 101)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "letrec"};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rec"};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoLetRec_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoLetRec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doLetRec"};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__0_value),LEAN_SCALAR_PTR_LITERAL(82, 47, 84, 182, 64, 225, 123, 219)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetRec___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__2_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__3_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetRec___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "letRecDecls"};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 117, 148, 85, 88, 242, 214, 126)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__5 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__5_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetRec___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "let rec body of group "};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__6 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetRec___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "elabDoLetRec"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 245, 136, 148, 64, 2, 202, 185)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoReassign___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doReassign"};
static const lean_object* l_Lean_Elab_Do_elabDoReassign___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoReassign___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoReassign___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoReassign___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoReassign___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoReassign___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoReassign___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoReassign___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoReassign___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoReassign___closed__0_value),LEAN_SCALAR_PTR_LITERAL(31, 163, 103, 78, 29, 183, 93, 39)}};
static const lean_object* l_Lean_Elab_Do_elabDoReassign___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoReassign___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassign(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassign___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "elabDoReassign"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(57, 53, 237, 208, 54, 227, 67, 171)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoLetElse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doLetElse"};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(175, 153, 29, 134, 242, 228, 141, 99)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetElse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doMatch"};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__2_value),LEAN_SCALAR_PTR_LITERAL(29, 50, 175, 23, 122, 111, 148, 60)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__11_value),LEAN_SCALAR_PTR_LITERAL(99, 51, 127, 238, 206, 239, 57, 130)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__13_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__5 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__6_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__14_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__6 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__20_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__7 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__7_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetElse___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__8 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__8_value),LEAN_SCALAR_PTR_LITERAL(130, 168, 60, 255, 153, 218, 88, 77)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__9 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__9_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetElse___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "pure"};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__10 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__10_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__11;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__10_value),LEAN_SCALAR_PTR_LITERAL(182, 237, 62, 79, 212, 57, 236, 253)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__12 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__12_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetElse___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Pure"};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__13 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__13_value),LEAN_SCALAR_PTR_LITERAL(121, 135, 27, 238, 232, 181, 75, 85)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__14_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__10_value),LEAN_SCALAR_PTR_LITERAL(204, 106, 105, 165, 210, 13, 14, 1)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__14 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__15 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__15_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__15_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__16 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__16_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetElse___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "PUnit.unit"};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__17 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__17_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__18;
static const lean_string_object l_Lean_Elab_Do_elabDoLetElse___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "PUnit"};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__19 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__19_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetElse___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "unit"};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__20 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__20_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__19_value),LEAN_SCALAR_PTR_LITERAL(23, 153, 158, 141, 176, 162, 235, 153)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__21_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__20_value),LEAN_SCALAR_PTR_LITERAL(146, 91, 82, 196, 249, 72, 203, 194)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__21 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__21_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__21_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__22 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__22_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__21_value)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__23 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__23_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__23_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__24 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__24_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__22_value),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__24_value)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__25 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__25_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "elabDoLetElse"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(94, 42, 180, 235, 57, 50, 131, 26)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___lam__1___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Do_elabDoLetArrow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 48, .m_data = "configuration options are not supported with `←`"};
static const lean_object* l_Lean_Elab_Do_elabDoLetArrow___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetArrow___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetArrow___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetArrow___closed__1;
static const lean_string_object l_Lean_Elab_Do_elabDoLetArrow___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doPatDecl"};
static const lean_object* l_Lean_Elab_Do_elabDoLetArrow___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetArrow___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetArrow___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetArrow___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetArrow___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetArrow___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetArrow___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetArrow___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetArrow___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetArrow___closed__2_value),LEAN_SCALAR_PTR_LITERAL(205, 158, 71, 138, 110, 159, 158, 208)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetArrow___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetArrow___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "elabDoLetArrow"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(88, 6, 18, 178, 201, 235, 246, 214)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoReassignArrow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "doReassignArrow"};
static const lean_object* l_Lean_Elab_Do_elabDoReassignArrow___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoReassignArrow___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoReassignArrow___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoReassignArrow___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoReassignArrow___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoReassignArrow___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoReassignArrow___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoReassignArrow___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoReassignArrow___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoReassignArrow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 63, 28, 32, 90, 193, 231, 114)}};
static const lean_object* l_Lean_Elab_Do_elabDoReassignArrow___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoReassignArrow___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_elabDoReassignArrow___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "reassignment with `|` (i.e., \"else clause\") is not supported"};
static const lean_object* l_Lean_Elab_Do_elabDoReassignArrow___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoReassignArrow___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoReassignArrow___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoReassignArrow___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassignArrow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassignArrow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "elabDoReassignArrow"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 247, 22, 101, 121, 153, 219, 18)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_Elab_Do_LetOrReassign_ctorIdx___impl(v_x_3_);
lean_dec(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
if (lean_obj_tag(v_t_5_) == 0)
{
lean_object* v_mutTk_x3f_7_; uint8_t v_erased_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v_mutTk_x3f_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_mutTk_x3f_7_);
v_erased_8_ = lean_ctor_get_uint8(v_t_5_, sizeof(void*)*1);
lean_dec_ref_known(v_t_5_, 1);
v___x_9_ = lean_box(v_erased_8_);
v___x_10_ = lean_apply_2(v_k_6_, v_mutTk_x3f_7_, v___x_9_);
return v___x_10_;
}
else
{
lean_dec(v_t_5_);
return v_k_6_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, lean_object* v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_13_, v_k_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorElim___boxed(lean_object* v_motive_17_, lean_object* v_ctorIdx_18_, lean_object* v_t_19_, lean_object* v_h_20_, lean_object* v_k_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lean_Elab_Do_LetOrReassign_ctorElim(v_motive_17_, v_ctorIdx_18_, v_t_19_, v_h_20_, v_k_21_);
lean_dec(v_ctorIdx_18_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_let_elim___redArg(lean_object* v_t_23_, lean_object* v_let_24_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_23_, v_let_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_let_elim(lean_object* v_motive_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_let_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_27_, v_let_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_have_elim___redArg(lean_object* v_t_31_, lean_object* v_have_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_31_, v_have_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_have_elim(lean_object* v_motive_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_have_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_35_, v_have_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_reassign_elim___redArg(lean_object* v_t_39_, lean_object* v_reassign_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_39_, v_reassign_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_reassign_elim(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_reassign_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_43_, v_reassign_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_getLetMutTk_x3f(lean_object* v_letOrReassign_47_){
_start:
{
if (lean_obj_tag(v_letOrReassign_47_) == 0)
{
lean_object* v_mutTk_x3f_48_; 
v_mutTk_x3f_48_ = lean_ctor_get(v_letOrReassign_47_, 0);
lean_inc(v_mutTk_x3f_48_);
return v_mutTk_x3f_48_;
}
else
{
lean_object* v___x_49_; 
v___x_49_ = lean_box(0);
return v___x_49_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_getLetMutTk_x3f___boxed(lean_object* v_letOrReassign_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lean_Elab_Do_LetOrReassign_getLetMutTk_x3f(v_letOrReassign_50_);
lean_dec(v_letOrReassign_50_);
return v_res_51_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Do_LetOrReassign_isErasedDecl(lean_object* v_letOrReassign_52_){
_start:
{
if (lean_obj_tag(v_letOrReassign_52_) == 0)
{
uint8_t v_erased_53_; 
v_erased_53_ = lean_ctor_get_uint8(v_letOrReassign_52_, sizeof(void*)*1);
return v_erased_53_;
}
else
{
uint8_t v___x_54_; 
v___x_54_ = 0;
return v___x_54_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_isErasedDecl___boxed(lean_object* v_letOrReassign_55_){
_start:
{
uint8_t v_res_56_; lean_object* v_r_57_; 
v_res_56_ = l_Lean_Elab_Do_LetOrReassign_isErasedDecl(v_letOrReassign_55_);
lean_dec(v_letOrReassign_55_);
v_r_57_ = lean_box(v_res_56_);
return v_r_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_isErased___redArg(lean_object* v_letOrReassign_58_, lean_object* v_vars_59_, lean_object* v_a_60_){
_start:
{
switch(lean_obj_tag(v_letOrReassign_58_))
{
case 0:
{
uint8_t v_erased_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v_erased_62_ = lean_ctor_get_uint8(v_letOrReassign_58_, sizeof(void*)*1);
v___x_63_ = lean_box(v_erased_62_);
v___x_64_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
return v___x_64_;
}
case 2:
{
lean_object* v___x_65_; lean_object* v___x_66_; uint8_t v___x_67_; 
v___x_65_ = lean_unsigned_to_nat(0u);
v___x_66_ = lean_array_get_size(v_vars_59_);
v___x_67_ = lean_nat_dec_lt(v___x_65_, v___x_66_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = lean_box(v___x_67_);
v___x_69_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
return v___x_69_;
}
else
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_70_ = lean_array_fget_borrowed(v_vars_59_, v___x_65_);
v___x_71_ = l_Lean_TSyntax_getId(v___x_70_);
v___x_72_ = l_Lean_Elab_Do_findMutVar_x3f___redArg(v___x_71_, v_a_60_);
lean_dec(v___x_71_);
if (lean_obj_tag(v___x_72_) == 0)
{
lean_object* v_a_73_; lean_object* v___x_75_; uint8_t v_isShared_76_; uint8_t v_isSharedCheck_88_; 
v_a_73_ = lean_ctor_get(v___x_72_, 0);
v_isSharedCheck_88_ = !lean_is_exclusive(v___x_72_);
if (v_isSharedCheck_88_ == 0)
{
v___x_75_ = v___x_72_;
v_isShared_76_ = v_isSharedCheck_88_;
goto v_resetjp_74_;
}
else
{
lean_inc(v_a_73_);
lean_dec(v___x_72_);
v___x_75_ = lean_box(0);
v_isShared_76_ = v_isSharedCheck_88_;
goto v_resetjp_74_;
}
v_resetjp_74_:
{
if (lean_obj_tag(v_a_73_) == 1)
{
lean_object* v_val_77_; uint8_t v_erased_78_; lean_object* v___x_79_; lean_object* v___x_81_; 
v_val_77_ = lean_ctor_get(v_a_73_, 0);
lean_inc(v_val_77_);
lean_dec_ref_known(v_a_73_, 1);
v_erased_78_ = lean_ctor_get_uint8(v_val_77_, sizeof(void*)*2);
lean_dec(v_val_77_);
v___x_79_ = lean_box(v_erased_78_);
if (v_isShared_76_ == 0)
{
lean_ctor_set(v___x_75_, 0, v___x_79_);
v___x_81_ = v___x_75_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_82_; 
v_reuseFailAlloc_82_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_82_, 0, v___x_79_);
v___x_81_ = v_reuseFailAlloc_82_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
return v___x_81_;
}
}
else
{
uint8_t v___x_83_; lean_object* v___x_84_; lean_object* v___x_86_; 
lean_dec(v_a_73_);
v___x_83_ = 0;
v___x_84_ = lean_box(v___x_83_);
if (v_isShared_76_ == 0)
{
lean_ctor_set(v___x_75_, 0, v___x_84_);
v___x_86_ = v___x_75_;
goto v_reusejp_85_;
}
else
{
lean_object* v_reuseFailAlloc_87_; 
v_reuseFailAlloc_87_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_87_, 0, v___x_84_);
v___x_86_ = v_reuseFailAlloc_87_;
goto v_reusejp_85_;
}
v_reusejp_85_:
{
return v___x_86_;
}
}
}
}
else
{
lean_object* v_a_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_96_; 
v_a_89_ = lean_ctor_get(v___x_72_, 0);
v_isSharedCheck_96_ = !lean_is_exclusive(v___x_72_);
if (v_isSharedCheck_96_ == 0)
{
v___x_91_ = v___x_72_;
v_isShared_92_ = v_isSharedCheck_96_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_a_89_);
lean_dec(v___x_72_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_96_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v___x_94_; 
if (v_isShared_92_ == 0)
{
v___x_94_ = v___x_91_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v_a_89_);
v___x_94_ = v_reuseFailAlloc_95_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
return v___x_94_;
}
}
}
}
}
default: 
{
uint8_t v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = 0;
v___x_98_ = lean_box(v___x_97_);
v___x_99_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
return v___x_99_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_isErased___redArg___boxed(lean_object* v_letOrReassign_100_, lean_object* v_vars_101_, lean_object* v_a_102_, lean_object* v_a_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = l_Lean_Elab_Do_isErased___redArg(v_letOrReassign_100_, v_vars_101_, v_a_102_);
lean_dec_ref(v_a_102_);
lean_dec_ref(v_vars_101_);
lean_dec(v_letOrReassign_100_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_isErased(lean_object* v_letOrReassign_105_, lean_object* v_vars_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = l_Lean_Elab_Do_isErased___redArg(v_letOrReassign_105_, v_vars_106_, v_a_107_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_isErased___boxed(lean_object* v_letOrReassign_116_, lean_object* v_vars_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l_Lean_Elab_Do_isErased(v_letOrReassign_116_, v_vars_117_, v_a_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_, v_a_123_, v_a_124_);
lean_dec(v_a_124_);
lean_dec_ref(v_a_123_);
lean_dec(v_a_122_);
lean_dec_ref(v_a_121_);
lean_dec(v_a_120_);
lean_dec_ref(v_a_119_);
lean_dec_ref(v_a_118_);
lean_dec_ref(v_vars_117_);
lean_dec(v_letOrReassign_116_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0_spec__1(lean_object* v_msgData_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_){
_start:
{
lean_object* v___x_133_; lean_object* v_env_134_; uint8_t v___x_135_; lean_object* v_env_136_; lean_object* v___x_137_; lean_object* v_toCold_138_; lean_object* v_mctx_139_; lean_object* v_lctx_140_; lean_object* v_options_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_133_ = lean_st_ref_get(v___y_131_);
v_env_134_ = lean_ctor_get(v___x_133_, 0);
lean_inc_ref(v_env_134_);
lean_dec(v___x_133_);
v___x_135_ = 0;
v_env_136_ = l_Lean_Environment_setRecordingDeps(v_env_134_, v___x_135_);
v___x_137_ = lean_st_ref_get(v___y_129_);
v_toCold_138_ = lean_ctor_get(v___y_130_, 0);
v_mctx_139_ = lean_ctor_get(v___x_137_, 0);
lean_inc_ref(v_mctx_139_);
lean_dec(v___x_137_);
v_lctx_140_ = lean_ctor_get(v___y_128_, 2);
v_options_141_ = lean_ctor_get(v_toCold_138_, 2);
lean_inc_ref(v_options_141_);
lean_inc_ref(v_lctx_140_);
v___x_142_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_142_, 0, v_env_136_);
lean_ctor_set(v___x_142_, 1, v_mctx_139_);
lean_ctor_set(v___x_142_, 2, v_lctx_140_);
lean_ctor_set(v___x_142_, 3, v_options_141_);
v___x_143_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_143_, 0, v___x_142_);
lean_ctor_set(v___x_143_, 1, v_msgData_127_);
v___x_144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0_spec__1___boxed(lean_object* v_msgData_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_){
_start:
{
lean_object* v_res_151_; 
v_res_151_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0_spec__1(v_msgData_145_, v___y_146_, v___y_147_, v___y_148_, v___y_149_);
lean_dec(v___y_149_);
lean_dec_ref(v___y_148_);
lean_dec(v___y_147_);
lean_dec_ref(v___y_146_);
return v_res_151_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg(lean_object* v_msg_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_){
_start:
{
lean_object* v_ref_158_; lean_object* v___x_159_; lean_object* v_a_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_168_; 
v_ref_158_ = lean_ctor_get(v___y_155_, 2);
v___x_159_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0_spec__1(v_msg_152_, v___y_153_, v___y_154_, v___y_155_, v___y_156_);
v_a_160_ = lean_ctor_get(v___x_159_, 0);
v_isSharedCheck_168_ = !lean_is_exclusive(v___x_159_);
if (v_isSharedCheck_168_ == 0)
{
v___x_162_ = v___x_159_;
v_isShared_163_ = v_isSharedCheck_168_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_a_160_);
lean_dec(v___x_159_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_168_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_164_; lean_object* v___x_166_; 
lean_inc(v_ref_158_);
v___x_164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_164_, 0, v_ref_158_);
lean_ctor_set(v___x_164_, 1, v_a_160_);
if (v_isShared_163_ == 0)
{
lean_ctor_set_tag(v___x_162_, 1);
lean_ctor_set(v___x_162_, 0, v___x_164_);
v___x_166_ = v___x_162_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v___x_164_);
v___x_166_ = v_reuseFailAlloc_167_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
return v___x_166_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg___boxed(lean_object* v_msg_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_){
_start:
{
lean_object* v_res_175_; 
v_res_175_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg(v_msg_169_, v___y_170_, v___y_171_, v___y_172_, v___y_173_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
lean_dec(v___y_171_);
lean_dec_ref(v___y_170_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg(lean_object* v_ref_176_, lean_object* v_msg_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_){
_start:
{
lean_object* v_toCold_186_; lean_object* v_currRecDepth_187_; lean_object* v_ref_188_; uint16_t v_optionFlags_189_; uint8_t v_suppressElabErrors_190_; uint8_t v_checkDeprecated_191_; uint8_t v_isRecordingDeps_192_; lean_object* v_ref_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v_toCold_186_ = lean_ctor_get(v___y_183_, 0);
v_currRecDepth_187_ = lean_ctor_get(v___y_183_, 1);
v_ref_188_ = lean_ctor_get(v___y_183_, 2);
v_optionFlags_189_ = lean_ctor_get_uint16(v___y_183_, sizeof(void*)*3);
v_suppressElabErrors_190_ = lean_ctor_get_uint8(v___y_183_, sizeof(void*)*3 + 2);
v_checkDeprecated_191_ = lean_ctor_get_uint8(v___y_183_, sizeof(void*)*3 + 3);
v_isRecordingDeps_192_ = lean_ctor_get_uint8(v___y_183_, sizeof(void*)*3 + 4);
v_ref_193_ = l_Lean_replaceRef(v_ref_176_, v_ref_188_);
lean_inc(v_currRecDepth_187_);
lean_inc_ref(v_toCold_186_);
v___x_194_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_194_, 0, v_toCold_186_);
lean_ctor_set(v___x_194_, 1, v_currRecDepth_187_);
lean_ctor_set(v___x_194_, 2, v_ref_193_);
lean_ctor_set_uint16(v___x_194_, sizeof(void*)*3, v_optionFlags_189_);
lean_ctor_set_uint8(v___x_194_, sizeof(void*)*3 + 2, v_suppressElabErrors_190_);
lean_ctor_set_uint8(v___x_194_, sizeof(void*)*3 + 3, v_checkDeprecated_191_);
lean_ctor_set_uint8(v___x_194_, sizeof(void*)*3 + 4, v_isRecordingDeps_192_);
v___x_195_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg(v_msg_177_, v___y_181_, v___y_182_, v___x_194_, v___y_184_);
lean_dec_ref_known(v___x_194_, 3);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg___boxed(lean_object* v_ref_196_, lean_object* v_msg_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg(v_ref_196_, v_msg_197_, v___y_198_, v___y_199_, v___y_200_, v___y_201_, v___y_202_, v___y_203_, v___y_204_);
lean_dec(v___y_204_);
lean_dec_ref(v___y_203_);
lean_dec(v___y_202_);
lean_dec_ref(v___y_201_);
lean_dec(v___y_200_);
lean_dec_ref(v___y_199_);
lean_dec_ref(v___y_198_);
lean_dec(v_ref_196_);
return v_res_206_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__1(void){
_start:
{
lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_208_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__0));
v___x_209_ = l_Lean_stringToMessageData(v___x_208_);
return v___x_209_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__3(void){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_211_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__2));
v___x_212_ = l_Lean_stringToMessageData(v___x_211_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1(lean_object* v_as_213_, size_t v_sz_214_, size_t v_i_215_, lean_object* v_b_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_){
_start:
{
lean_object* v_a_226_; uint8_t v___x_230_; 
v___x_230_ = lean_usize_dec_lt(v_i_215_, v_sz_214_);
if (v___x_230_ == 0)
{
lean_object* v___x_231_; 
v___x_231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_231_, 0, v_b_216_);
return v___x_231_;
}
else
{
lean_object* v___x_232_; lean_object* v_a_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_232_ = lean_box(0);
v_a_233_ = lean_array_uget_borrowed(v_as_213_, v_i_215_);
v___x_234_ = l_Lean_TSyntax_getId(v_a_233_);
v___x_235_ = l_Lean_Elab_Do_findMutVar_x3f___redArg(v___x_234_, v___y_217_);
if (lean_obj_tag(v___x_235_) == 0)
{
lean_object* v_a_236_; 
v_a_236_ = lean_ctor_get(v___x_235_, 0);
lean_inc(v_a_236_);
lean_dec_ref_known(v___x_235_, 1);
if (lean_obj_tag(v_a_236_) == 0)
{
lean_dec(v___x_234_);
v_a_226_ = v___x_232_;
goto v___jp_225_;
}
else
{
lean_object* v_val_237_; uint8_t v_erased_238_; 
v_val_237_ = lean_ctor_get(v_a_236_, 0);
lean_inc(v_val_237_);
lean_dec_ref_known(v_a_236_, 1);
v_erased_238_ = lean_ctor_get_uint8(v_val_237_, sizeof(void*)*2);
lean_dec(v_val_237_);
if (v_erased_238_ == 0)
{
lean_dec(v___x_234_);
v_a_226_ = v___x_232_;
goto v___jp_225_;
}
else
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_239_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__1);
v___x_240_ = l_Lean_MessageData_ofName(v___x_234_);
v___x_241_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_239_);
lean_ctor_set(v___x_241_, 1, v___x_240_);
v___x_242_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__3);
v___x_243_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_241_);
lean_ctor_set(v___x_243_, 1, v___x_242_);
v___x_244_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg(v_a_233_, v___x_243_, v___y_217_, v___y_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
if (lean_obj_tag(v___x_244_) == 0)
{
lean_dec_ref_known(v___x_244_, 1);
v_a_226_ = v___x_232_;
goto v___jp_225_;
}
else
{
return v___x_244_;
}
}
}
}
else
{
lean_object* v_a_245_; lean_object* v___x_247_; uint8_t v_isShared_248_; uint8_t v_isSharedCheck_252_; 
lean_dec(v___x_234_);
v_a_245_ = lean_ctor_get(v___x_235_, 0);
v_isSharedCheck_252_ = !lean_is_exclusive(v___x_235_);
if (v_isSharedCheck_252_ == 0)
{
v___x_247_ = v___x_235_;
v_isShared_248_ = v_isSharedCheck_252_;
goto v_resetjp_246_;
}
else
{
lean_inc(v_a_245_);
lean_dec(v___x_235_);
v___x_247_ = lean_box(0);
v_isShared_248_ = v_isSharedCheck_252_;
goto v_resetjp_246_;
}
v_resetjp_246_:
{
lean_object* v___x_250_; 
if (v_isShared_248_ == 0)
{
v___x_250_ = v___x_247_;
goto v_reusejp_249_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v_a_245_);
v___x_250_ = v_reuseFailAlloc_251_;
goto v_reusejp_249_;
}
v_reusejp_249_:
{
return v___x_250_;
}
}
}
}
v___jp_225_:
{
size_t v___x_227_; size_t v___x_228_; 
v___x_227_ = ((size_t)1ULL);
v___x_228_ = lean_usize_add(v_i_215_, v___x_227_);
v_i_215_ = v___x_228_;
v_b_216_ = v_a_226_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___boxed(lean_object* v_as_253_, lean_object* v_sz_254_, lean_object* v_i_255_, lean_object* v_b_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_){
_start:
{
size_t v_sz_boxed_265_; size_t v_i_boxed_266_; lean_object* v_res_267_; 
v_sz_boxed_265_ = lean_unbox_usize(v_sz_254_);
lean_dec(v_sz_254_);
v_i_boxed_266_ = lean_unbox_usize(v_i_255_);
lean_dec(v_i_255_);
v_res_267_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1(v_as_253_, v_sz_boxed_265_, v_i_boxed_266_, v_b_256_, v___y_257_, v___y_258_, v___y_259_, v___y_260_, v___y_261_, v___y_262_, v___y_263_);
lean_dec(v___y_263_);
lean_dec_ref(v___y_262_);
lean_dec(v___y_261_);
lean_dec_ref(v___y_260_);
lean_dec(v___y_259_);
lean_dec_ref(v___y_258_);
lean_dec_ref(v___y_257_);
lean_dec_ref(v_as_253_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_checkMutVars(lean_object* v_letOrReassign_268_, lean_object* v_vars_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_, lean_object* v_a_274_, lean_object* v_a_275_, lean_object* v_a_276_){
_start:
{
if (lean_obj_tag(v_letOrReassign_268_) == 2)
{
lean_object* v___x_278_; 
v___x_278_ = l_Lean_Elab_Do_throwUnlessMutVarsDeclared(v_vars_269_, v_a_270_, v_a_271_, v_a_272_, v_a_273_, v_a_274_, v_a_275_, v_a_276_);
if (lean_obj_tag(v___x_278_) == 0)
{
lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_301_; 
v_isSharedCheck_301_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_301_ == 0)
{
lean_object* v_unused_302_; 
v_unused_302_ = lean_ctor_get(v___x_278_, 0);
lean_dec(v_unused_302_);
v___x_280_ = v___x_278_;
v_isShared_281_ = v_isSharedCheck_301_;
goto v_resetjp_279_;
}
else
{
lean_dec(v___x_278_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_301_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v___x_282_; lean_object* v___x_283_; uint8_t v___x_284_; 
v___x_282_ = lean_array_get_size(v_vars_269_);
v___x_283_ = lean_unsigned_to_nat(1u);
v___x_284_ = lean_nat_dec_eq(v___x_282_, v___x_283_);
if (v___x_284_ == 0)
{
lean_object* v___x_285_; size_t v_sz_286_; size_t v___x_287_; lean_object* v___x_288_; 
lean_del_object(v___x_280_);
v___x_285_ = lean_box(0);
v_sz_286_ = lean_array_size(v_vars_269_);
v___x_287_ = ((size_t)0ULL);
v___x_288_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1(v_vars_269_, v_sz_286_, v___x_287_, v___x_285_, v_a_270_, v_a_271_, v_a_272_, v_a_273_, v_a_274_, v_a_275_, v_a_276_);
if (lean_obj_tag(v___x_288_) == 0)
{
lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_295_; 
v_isSharedCheck_295_ = !lean_is_exclusive(v___x_288_);
if (v_isSharedCheck_295_ == 0)
{
lean_object* v_unused_296_; 
v_unused_296_ = lean_ctor_get(v___x_288_, 0);
lean_dec(v_unused_296_);
v___x_290_ = v___x_288_;
v_isShared_291_ = v_isSharedCheck_295_;
goto v_resetjp_289_;
}
else
{
lean_dec(v___x_288_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_295_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_293_; 
if (v_isShared_291_ == 0)
{
lean_ctor_set(v___x_290_, 0, v___x_285_);
v___x_293_ = v___x_290_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v___x_285_);
v___x_293_ = v_reuseFailAlloc_294_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
return v___x_293_;
}
}
}
else
{
return v___x_288_;
}
}
else
{
lean_object* v___x_297_; lean_object* v___x_299_; 
v___x_297_ = lean_box(0);
if (v_isShared_281_ == 0)
{
lean_ctor_set(v___x_280_, 0, v___x_297_);
v___x_299_ = v___x_280_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v___x_297_);
v___x_299_ = v_reuseFailAlloc_300_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
return v___x_299_;
}
}
}
}
else
{
return v___x_278_;
}
}
else
{
lean_object* v___x_303_; 
v___x_303_ = l_Lean_Elab_Do_checkMutVarsForShadowing(v_vars_269_, v_a_270_, v_a_271_, v_a_272_, v_a_273_, v_a_274_, v_a_275_, v_a_276_);
return v___x_303_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_checkMutVars___boxed(lean_object* v_letOrReassign_304_, lean_object* v_vars_305_, lean_object* v_a_306_, lean_object* v_a_307_, lean_object* v_a_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l_Lean_Elab_Do_LetOrReassign_checkMutVars(v_letOrReassign_304_, v_vars_305_, v_a_306_, v_a_307_, v_a_308_, v_a_309_, v_a_310_, v_a_311_, v_a_312_);
lean_dec(v_a_312_);
lean_dec_ref(v_a_311_);
lean_dec(v_a_310_);
lean_dec_ref(v_a_309_);
lean_dec(v_a_308_);
lean_dec_ref(v_a_307_);
lean_dec_ref(v_a_306_);
lean_dec_ref(v_vars_305_);
lean_dec(v_letOrReassign_304_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0(lean_object* v_00_u03b1_315_, lean_object* v_ref_316_, lean_object* v_msg_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_){
_start:
{
lean_object* v___x_326_; 
v___x_326_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg(v_ref_316_, v_msg_317_, v___y_318_, v___y_319_, v___y_320_, v___y_321_, v___y_322_, v___y_323_, v___y_324_);
return v___x_326_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___boxed(lean_object* v_00_u03b1_327_, lean_object* v_ref_328_, lean_object* v_msg_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0(v_00_u03b1_327_, v_ref_328_, v_msg_329_, v___y_330_, v___y_331_, v___y_332_, v___y_333_, v___y_334_, v___y_335_, v___y_336_);
lean_dec(v___y_336_);
lean_dec_ref(v___y_335_);
lean_dec(v___y_334_);
lean_dec_ref(v___y_333_);
lean_dec(v___y_332_);
lean_dec_ref(v___y_331_);
lean_dec_ref(v___y_330_);
lean_dec(v_ref_328_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0(lean_object* v_00_u03b1_339_, lean_object* v_msg_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg(v_msg_340_, v___y_344_, v___y_345_, v___y_346_, v___y_347_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___boxed(lean_object* v_00_u03b1_350_, lean_object* v_msg_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_){
_start:
{
lean_object* v_res_360_; 
v_res_360_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0(v_00_u03b1_350_, v_msg_351_, v___y_352_, v___y_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_, v___y_358_);
lean_dec(v___y_358_);
lean_dec_ref(v___y_357_);
lean_dec(v___y_356_);
lean_dec_ref(v___y_355_);
lean_dec(v___y_354_);
lean_dec_ref(v___y_353_);
lean_dec_ref(v___y_352_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0(lean_object* v_as_361_, size_t v_sz_362_, size_t v_i_363_, lean_object* v_b_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_){
_start:
{
uint8_t v___x_373_; 
v___x_373_ = lean_usize_dec_lt(v_i_363_, v_sz_362_);
if (v___x_373_ == 0)
{
lean_object* v___x_374_; 
v___x_374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_374_, 0, v_b_364_);
return v___x_374_;
}
else
{
lean_object* v___x_375_; lean_object* v_a_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_375_ = lean_box(0);
v_a_376_ = lean_array_uget_borrowed(v_as_361_, v_i_363_);
v___x_377_ = l_Lean_TSyntax_getId(v_a_376_);
v___x_378_ = l_Lean_Elab_Do_registerMutVarAlias(v___x_377_, v___y_365_, v___y_366_, v___y_367_, v___y_368_, v___y_369_, v___y_370_, v___y_371_);
if (lean_obj_tag(v___x_378_) == 0)
{
size_t v___x_379_; size_t v___x_380_; 
lean_dec_ref_known(v___x_378_, 1);
v___x_379_ = ((size_t)1ULL);
v___x_380_ = lean_usize_add(v_i_363_, v___x_379_);
v_i_363_ = v___x_380_;
v_b_364_ = v___x_375_;
goto _start;
}
else
{
return v___x_378_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0___boxed(lean_object* v_as_382_, lean_object* v_sz_383_, lean_object* v_i_384_, lean_object* v_b_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_){
_start:
{
size_t v_sz_boxed_394_; size_t v_i_boxed_395_; lean_object* v_res_396_; 
v_sz_boxed_394_ = lean_unbox_usize(v_sz_383_);
lean_dec(v_sz_383_);
v_i_boxed_395_ = lean_unbox_usize(v_i_384_);
lean_dec(v_i_384_);
v_res_396_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0(v_as_382_, v_sz_boxed_394_, v_i_boxed_395_, v_b_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_, v___y_392_);
lean_dec(v___y_392_);
lean_dec_ref(v___y_391_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
lean_dec_ref(v___y_386_);
lean_dec_ref(v_as_382_);
return v_res_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo(lean_object* v_letOrReassign_397_, lean_object* v_vars_398_, lean_object* v_a_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_){
_start:
{
if (lean_obj_tag(v_letOrReassign_397_) == 2)
{
lean_object* v___x_407_; size_t v_sz_408_; size_t v___x_409_; lean_object* v___x_410_; 
v___x_407_ = lean_box(0);
v_sz_408_ = lean_array_size(v_vars_398_);
v___x_409_ = ((size_t)0ULL);
v___x_410_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0(v_vars_398_, v_sz_408_, v___x_409_, v___x_407_, v_a_399_, v_a_400_, v_a_401_, v_a_402_, v_a_403_, v_a_404_, v_a_405_);
if (lean_obj_tag(v___x_410_) == 0)
{
lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_417_; 
v_isSharedCheck_417_ = !lean_is_exclusive(v___x_410_);
if (v_isSharedCheck_417_ == 0)
{
lean_object* v_unused_418_; 
v_unused_418_ = lean_ctor_get(v___x_410_, 0);
lean_dec(v_unused_418_);
v___x_412_ = v___x_410_;
v_isShared_413_ = v_isSharedCheck_417_;
goto v_resetjp_411_;
}
else
{
lean_dec(v___x_410_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_417_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_415_; 
if (v_isShared_413_ == 0)
{
lean_ctor_set(v___x_412_, 0, v___x_407_);
v___x_415_ = v___x_412_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v___x_407_);
v___x_415_ = v_reuseFailAlloc_416_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
return v___x_415_;
}
}
}
else
{
return v___x_410_;
}
}
else
{
lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_419_ = lean_box(0);
v___x_420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_420_, 0, v___x_419_);
return v___x_420_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo___boxed(lean_object* v_letOrReassign_421_, lean_object* v_vars_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l_Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo(v_letOrReassign_421_, v_vars_422_, v_a_423_, v_a_424_, v_a_425_, v_a_426_, v_a_427_, v_a_428_, v_a_429_);
lean_dec(v_a_429_);
lean_dec_ref(v_a_428_);
lean_dec(v_a_427_);
lean_dec_ref(v_a_426_);
lean_dec(v_a_425_);
lean_dec_ref(v_a_424_);
lean_dec_ref(v_a_423_);
lean_dec_ref(v_vars_422_);
lean_dec(v_letOrReassign_421_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0___lam__0(lean_object* v___x_432_, lean_object* v_b_433_, uint8_t v_a_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_){
_start:
{
lean_object* v___x_443_; 
v___x_443_ = l_Lean_Elab_Do_withErasedProj(v___x_432_, v_b_433_, v_a_434_, v___y_435_, v___y_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0___lam__0___boxed(lean_object* v___x_444_, lean_object* v_b_445_, lean_object* v_a_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_){
_start:
{
uint8_t v_a_837__boxed_455_; lean_object* v_res_456_; 
v_a_837__boxed_455_ = lean_unbox(v_a_446_);
v_res_456_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0___lam__0(v___x_444_, v_b_445_, v_a_837__boxed_455_, v___y_447_, v___y_448_, v___y_449_, v___y_450_, v___y_451_, v___y_452_, v___y_453_);
lean_dec(v___y_453_);
lean_dec_ref(v___y_452_);
lean_dec(v___y_451_);
lean_dec_ref(v___y_450_);
lean_dec(v___y_449_);
lean_dec_ref(v___y_448_);
lean_dec_ref(v___y_447_);
return v_res_456_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0(uint8_t v_a_457_, lean_object* v_as_458_, size_t v_i_459_, size_t v_stop_460_, lean_object* v_b_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_){
_start:
{
uint8_t v___x_470_; 
v___x_470_ = lean_usize_dec_eq(v_i_459_, v_stop_460_);
if (v___x_470_ == 0)
{
size_t v___x_471_; size_t v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___f_475_; 
v___x_471_ = ((size_t)1ULL);
v___x_472_ = lean_usize_sub(v_i_459_, v___x_471_);
v___x_473_ = lean_array_uget_borrowed(v_as_458_, v___x_472_);
v___x_474_ = lean_box(v_a_457_);
lean_inc(v___x_473_);
v___f_475_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0___lam__0___boxed), 11, 3);
lean_closure_set(v___f_475_, 0, v___x_473_);
lean_closure_set(v___f_475_, 1, v_b_461_);
lean_closure_set(v___f_475_, 2, v___x_474_);
v_i_459_ = v___x_472_;
v_b_461_ = v___f_475_;
goto _start;
}
else
{
lean_object* v___x_477_; 
lean_inc(v___y_468_);
lean_inc_ref(v___y_467_);
lean_inc(v___y_466_);
lean_inc_ref(v___y_465_);
lean_inc(v___y_464_);
lean_inc_ref(v___y_463_);
lean_inc_ref(v___y_462_);
v___x_477_ = lean_apply_8(v_b_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_, lean_box(0));
return v___x_477_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0___boxed(lean_object* v_a_478_, lean_object* v_as_479_, lean_object* v_i_480_, lean_object* v_stop_481_, lean_object* v_b_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_){
_start:
{
uint8_t v_a_868__boxed_491_; size_t v_i_boxed_492_; size_t v_stop_boxed_493_; lean_object* v_res_494_; 
v_a_868__boxed_491_ = lean_unbox(v_a_478_);
v_i_boxed_492_ = lean_unbox_usize(v_i_480_);
lean_dec(v_i_480_);
v_stop_boxed_493_ = lean_unbox_usize(v_stop_481_);
lean_dec(v_stop_481_);
v_res_494_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0(v_a_868__boxed_491_, v_as_479_, v_i_boxed_492_, v_stop_boxed_493_, v_b_482_, v___y_483_, v___y_484_, v___y_485_, v___y_486_, v___y_487_, v___y_488_, v___y_489_);
lean_dec(v___y_489_);
lean_dec_ref(v___y_488_);
lean_dec(v___y_487_);
lean_dec_ref(v___y_486_);
lean_dec(v___y_485_);
lean_dec_ref(v___y_484_);
lean_dec_ref(v___y_483_);
lean_dec_ref(v_as_479_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments___lam__0(lean_object* v_letOrReassign_495_, lean_object* v_vars_496_, lean_object* v_k_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_){
_start:
{
lean_object* v___x_506_; 
v___x_506_ = l_Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo(v_letOrReassign_495_, v_vars_496_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
if (lean_obj_tag(v___x_506_) == 0)
{
lean_object* v___x_507_; 
lean_dec_ref_known(v___x_506_, 1);
v___x_507_ = l_Lean_Elab_Do_isErased___redArg(v_letOrReassign_495_, v_vars_496_, v___y_498_);
if (lean_obj_tag(v___x_507_) == 0)
{
lean_object* v_a_508_; uint8_t v___x_509_; 
v_a_508_ = lean_ctor_get(v___x_507_, 0);
lean_inc(v_a_508_);
lean_dec_ref_known(v___x_507_, 1);
v___x_509_ = lean_unbox(v_a_508_);
if (v___x_509_ == 0)
{
lean_object* v___x_510_; 
lean_dec(v_a_508_);
lean_inc(v___y_504_);
lean_inc_ref(v___y_503_);
lean_inc(v___y_502_);
lean_inc_ref(v___y_501_);
lean_inc(v___y_500_);
lean_inc_ref(v___y_499_);
lean_inc_ref(v___y_498_);
v___x_510_ = lean_apply_8(v_k_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_, lean_box(0));
return v___x_510_;
}
else
{
lean_object* v___x_511_; lean_object* v___x_512_; uint8_t v___x_513_; 
v___x_511_ = lean_array_get_size(v_vars_496_);
v___x_512_ = lean_unsigned_to_nat(0u);
v___x_513_ = lean_nat_dec_lt(v___x_512_, v___x_511_);
if (v___x_513_ == 0)
{
lean_object* v___x_514_; 
lean_dec(v_a_508_);
lean_inc(v___y_504_);
lean_inc_ref(v___y_503_);
lean_inc(v___y_502_);
lean_inc_ref(v___y_501_);
lean_inc(v___y_500_);
lean_inc_ref(v___y_499_);
lean_inc_ref(v___y_498_);
v___x_514_ = lean_apply_8(v_k_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_, lean_box(0));
return v___x_514_;
}
else
{
size_t v___x_515_; size_t v___x_516_; uint8_t v___x_517_; lean_object* v___x_518_; 
v___x_515_ = lean_usize_of_nat(v___x_511_);
v___x_516_ = ((size_t)0ULL);
v___x_517_ = lean_unbox(v_a_508_);
lean_dec(v_a_508_);
v___x_518_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0(v___x_517_, v_vars_496_, v___x_515_, v___x_516_, v_k_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
return v___x_518_;
}
}
}
else
{
lean_object* v_a_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_526_; 
lean_dec_ref(v_k_497_);
v_a_519_ = lean_ctor_get(v___x_507_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_507_);
if (v_isSharedCheck_526_ == 0)
{
v___x_521_ = v___x_507_;
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_a_519_);
lean_dec(v___x_507_);
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
else
{
lean_object* v_a_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_534_; 
lean_dec_ref(v_k_497_);
v_a_527_ = lean_ctor_get(v___x_506_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_506_);
if (v_isSharedCheck_534_ == 0)
{
v___x_529_ = v___x_506_;
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_a_527_);
lean_dec(v___x_506_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_532_; 
if (v_isShared_530_ == 0)
{
v___x_532_ = v___x_529_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_a_527_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments___lam__0___boxed(lean_object* v_letOrReassign_535_, lean_object* v_vars_536_, lean_object* v_k_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Lean_Elab_Do_elabWithReassignments___lam__0(v_letOrReassign_535_, v_vars_536_, v_k_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_);
lean_dec(v___y_544_);
lean_dec_ref(v___y_543_);
lean_dec(v___y_542_);
lean_dec_ref(v___y_541_);
lean_dec(v___y_540_);
lean_dec_ref(v___y_539_);
lean_dec_ref(v___y_538_);
lean_dec_ref(v_vars_536_);
lean_dec(v_letOrReassign_535_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments(lean_object* v_letOrReassign_547_, lean_object* v_vars_548_, lean_object* v_k_549_, lean_object* v_a_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_){
_start:
{
lean_object* v___f_558_; lean_object* v___x_559_; uint8_t v___x_560_; lean_object* v___x_561_; 
lean_inc_ref(v_vars_548_);
lean_inc(v_letOrReassign_547_);
v___f_558_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabWithReassignments___lam__0___boxed), 11, 3);
lean_closure_set(v___f_558_, 0, v_letOrReassign_547_);
lean_closure_set(v___f_558_, 1, v_vars_548_);
lean_closure_set(v___f_558_, 2, v_k_549_);
v___x_559_ = l_Lean_Elab_Do_LetOrReassign_getLetMutTk_x3f(v_letOrReassign_547_);
v___x_560_ = l_Lean_Elab_Do_LetOrReassign_isErasedDecl(v_letOrReassign_547_);
lean_dec(v_letOrReassign_547_);
v___x_561_ = l_Lean_Elab_Do_declareMutVars_x3f___redArg(v___x_559_, v_vars_548_, v___x_560_, v___f_558_, v_a_550_, v_a_551_, v_a_552_, v_a_553_, v_a_554_, v_a_555_, v_a_556_);
lean_dec(v___x_559_);
return v___x_561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments___boxed(lean_object* v_letOrReassign_562_, lean_object* v_vars_563_, lean_object* v_k_564_, lean_object* v_a_565_, lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_, lean_object* v_a_570_, lean_object* v_a_571_, lean_object* v_a_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Lean_Elab_Do_elabWithReassignments(v_letOrReassign_562_, v_vars_563_, v_k_564_, v_a_565_, v_a_566_, v_a_567_, v_a_568_, v_a_569_, v_a_570_, v_a_571_);
lean_dec(v_a_571_);
lean_dec_ref(v_a_570_);
lean_dec(v_a_569_);
lean_dec_ref(v_a_568_);
lean_dec(v_a_567_);
lean_dec_ref(v_a_566_);
lean_dec_ref(v_a_565_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___redArg(lean_object* v_a_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_){
_start:
{
lean_object* v___x_582_; 
v___x_582_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_574_, v___y_575_, v___y_576_, v___y_577_, v___y_578_, v___y_579_, v___y_580_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___redArg___boxed(lean_object* v_a_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_){
_start:
{
lean_object* v_res_591_; 
v_res_591_ = l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___redArg(v_a_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_);
lean_dec(v___y_589_);
lean_dec_ref(v___y_588_);
lean_dec(v___y_587_);
lean_dec_ref(v___y_586_);
lean_dec(v___y_585_);
lean_dec_ref(v___y_584_);
return v_res_591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1(lean_object* v_00_u03b1_592_, lean_object* v_a_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_){
_start:
{
lean_object* v___x_601_; 
v___x_601_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_593_, v___y_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_, v___y_599_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___boxed(lean_object* v_00_u03b1_602_, lean_object* v_a_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_){
_start:
{
lean_object* v_res_611_; 
v_res_611_ = l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1(v_00_u03b1_602_, v_a_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_);
lean_dec(v___y_609_);
lean_dec_ref(v___y_608_);
lean_dec(v___y_607_);
lean_dec_ref(v___y_606_);
lean_dec(v___y_605_);
lean_dec_ref(v___y_604_);
return v_res_611_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0(void){
_start:
{
lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_612_ = lean_box(1);
v___x_613_ = l_Lean_MessageData_ofFormat(v___x_612_);
return v___x_613_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__3(void){
_start:
{
lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_617_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__2));
v___x_618_ = l_Lean_MessageData_ofFormat(v___x_617_);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3(lean_object* v_x_619_, lean_object* v_x_620_){
_start:
{
if (lean_obj_tag(v_x_620_) == 0)
{
return v_x_619_;
}
else
{
lean_object* v_head_621_; lean_object* v_tail_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_644_; 
v_head_621_ = lean_ctor_get(v_x_620_, 0);
v_tail_622_ = lean_ctor_get(v_x_620_, 1);
v_isSharedCheck_644_ = !lean_is_exclusive(v_x_620_);
if (v_isSharedCheck_644_ == 0)
{
v___x_624_ = v_x_620_;
v_isShared_625_ = v_isSharedCheck_644_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_tail_622_);
lean_inc(v_head_621_);
lean_dec(v_x_620_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_644_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
lean_object* v_before_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_642_; 
v_before_626_ = lean_ctor_get(v_head_621_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v_head_621_);
if (v_isSharedCheck_642_ == 0)
{
lean_object* v_unused_643_; 
v_unused_643_ = lean_ctor_get(v_head_621_, 1);
lean_dec(v_unused_643_);
v___x_628_ = v_head_621_;
v_isShared_629_ = v_isSharedCheck_642_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_before_626_);
lean_dec(v_head_621_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_642_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_630_; lean_object* v___x_632_; 
v___x_630_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0);
if (v_isShared_629_ == 0)
{
lean_ctor_set_tag(v___x_628_, 7);
lean_ctor_set(v___x_628_, 1, v___x_630_);
lean_ctor_set(v___x_628_, 0, v_x_619_);
v___x_632_ = v___x_628_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_x_619_);
lean_ctor_set(v_reuseFailAlloc_641_, 1, v___x_630_);
v___x_632_ = v_reuseFailAlloc_641_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
lean_object* v___x_633_; lean_object* v___x_635_; 
v___x_633_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__3);
if (v_isShared_625_ == 0)
{
lean_ctor_set_tag(v___x_624_, 7);
lean_ctor_set(v___x_624_, 1, v___x_633_);
lean_ctor_set(v___x_624_, 0, v___x_632_);
v___x_635_ = v___x_624_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v___x_632_);
lean_ctor_set(v_reuseFailAlloc_640_, 1, v___x_633_);
v___x_635_ = v_reuseFailAlloc_640_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_636_ = l_Lean_MessageData_ofSyntax(v_before_626_);
v___x_637_ = l_Lean_indentD(v___x_636_);
v___x_638_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_638_, 0, v___x_635_);
lean_ctor_set(v___x_638_, 1, v___x_637_);
v_x_619_ = v___x_638_;
v_x_620_ = v_tail_622_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__2(lean_object* v_opts_645_, lean_object* v_opt_646_){
_start:
{
lean_object* v_name_647_; lean_object* v_defValue_648_; lean_object* v_map_649_; lean_object* v___x_650_; 
v_name_647_ = lean_ctor_get(v_opt_646_, 0);
v_defValue_648_ = lean_ctor_get(v_opt_646_, 1);
v_map_649_ = lean_ctor_get(v_opts_645_, 0);
v___x_650_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_649_, v_name_647_);
if (lean_obj_tag(v___x_650_) == 0)
{
uint8_t v___x_651_; 
v___x_651_ = lean_unbox(v_defValue_648_);
return v___x_651_;
}
else
{
lean_object* v_val_652_; 
v_val_652_ = lean_ctor_get(v___x_650_, 0);
lean_inc(v_val_652_);
lean_dec_ref_known(v___x_650_, 1);
if (lean_obj_tag(v_val_652_) == 1)
{
uint8_t v_v_653_; 
v_v_653_ = lean_ctor_get_uint8(v_val_652_, 0);
lean_dec_ref_known(v_val_652_, 0);
return v_v_653_;
}
else
{
uint8_t v___x_654_; 
lean_dec(v_val_652_);
v___x_654_ = lean_unbox(v_defValue_648_);
return v___x_654_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__2___boxed(lean_object* v_opts_655_, lean_object* v_opt_656_){
_start:
{
uint8_t v_res_657_; lean_object* v_r_658_; 
v_res_657_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__2(v_opts_655_, v_opt_656_);
lean_dec_ref(v_opt_656_);
lean_dec_ref(v_opts_655_);
v_r_658_ = lean_box(v_res_657_);
return v_r_658_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_662_; lean_object* v___x_663_; 
v___x_662_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__1));
v___x_663_ = l_Lean_MessageData_ofFormat(v___x_662_);
return v___x_663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg(lean_object* v_msgData_664_, lean_object* v_macroStack_665_, lean_object* v___y_666_){
_start:
{
lean_object* v___x_668_; lean_object* v___x_669_; uint8_t v___x_670_; 
v___x_668_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_666_);
v___x_669_ = l_Lean_Elab_pp_macroStack;
v___x_670_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__2(v___x_668_, v___x_669_);
lean_dec_ref(v___x_668_);
if (v___x_670_ == 0)
{
lean_object* v___x_671_; 
lean_dec(v_macroStack_665_);
v___x_671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_671_, 0, v_msgData_664_);
return v___x_671_;
}
else
{
if (lean_obj_tag(v_macroStack_665_) == 0)
{
lean_object* v___x_672_; 
v___x_672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_672_, 0, v_msgData_664_);
return v___x_672_;
}
else
{
lean_object* v_head_673_; lean_object* v_after_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_689_; 
v_head_673_ = lean_ctor_get(v_macroStack_665_, 0);
lean_inc(v_head_673_);
v_after_674_ = lean_ctor_get(v_head_673_, 1);
v_isSharedCheck_689_ = !lean_is_exclusive(v_head_673_);
if (v_isSharedCheck_689_ == 0)
{
lean_object* v_unused_690_; 
v_unused_690_ = lean_ctor_get(v_head_673_, 0);
lean_dec(v_unused_690_);
v___x_676_ = v_head_673_;
v_isShared_677_ = v_isSharedCheck_689_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_after_674_);
lean_dec(v_head_673_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_689_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_678_; lean_object* v___x_680_; 
v___x_678_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0);
if (v_isShared_677_ == 0)
{
lean_ctor_set_tag(v___x_676_, 7);
lean_ctor_set(v___x_676_, 1, v___x_678_);
lean_ctor_set(v___x_676_, 0, v_msgData_664_);
v___x_680_ = v___x_676_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_msgData_664_);
lean_ctor_set(v_reuseFailAlloc_688_, 1, v___x_678_);
v___x_680_ = v_reuseFailAlloc_688_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v_msgData_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_681_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__2);
v___x_682_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_682_, 0, v___x_680_);
lean_ctor_set(v___x_682_, 1, v___x_681_);
v___x_683_ = l_Lean_MessageData_ofSyntax(v_after_674_);
v___x_684_ = l_Lean_indentD(v___x_683_);
v_msgData_685_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_685_, 0, v___x_682_);
lean_ctor_set(v_msgData_685_, 1, v___x_684_);
v___x_686_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3(v_msgData_685_, v_macroStack_665_);
v___x_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_687_, 0, v___x_686_);
return v___x_687_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___boxed(lean_object* v_msgData_691_, lean_object* v_macroStack_692_, lean_object* v___y_693_, lean_object* v___y_694_){
_start:
{
lean_object* v_res_695_; 
v_res_695_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg(v_msgData_691_, v_macroStack_692_, v___y_693_);
lean_dec_ref(v___y_693_);
return v_res_695_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(lean_object* v_msg_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_){
_start:
{
lean_object* v_ref_704_; lean_object* v_macroStack_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v_a_708_; lean_object* v___x_709_; lean_object* v_a_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_718_; 
v_ref_704_ = lean_ctor_get(v___y_701_, 2);
v_macroStack_705_ = lean_ctor_get(v___y_697_, 1);
v___x_706_ = l_Lean_Elab_getBetterRef(v_ref_704_, v_macroStack_705_);
v___x_707_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0_spec__1(v_msg_696_, v___y_699_, v___y_700_, v___y_701_, v___y_702_);
v_a_708_ = lean_ctor_get(v___x_707_, 0);
lean_inc(v_a_708_);
lean_dec_ref(v___x_707_);
lean_inc(v_macroStack_705_);
v___x_709_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg(v_a_708_, v_macroStack_705_, v___y_701_);
v_a_710_ = lean_ctor_get(v___x_709_, 0);
v_isSharedCheck_718_ = !lean_is_exclusive(v___x_709_);
if (v_isSharedCheck_718_ == 0)
{
v___x_712_ = v___x_709_;
v_isShared_713_ = v_isSharedCheck_718_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_a_710_);
lean_dec(v___x_709_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_718_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v___x_714_; lean_object* v___x_716_; 
v___x_714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_714_, 0, v___x_706_);
lean_ctor_set(v___x_714_, 1, v_a_710_);
if (v_isShared_713_ == 0)
{
lean_ctor_set_tag(v___x_712_, 1);
lean_ctor_set(v___x_712_, 0, v___x_714_);
v___x_716_ = v___x_712_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v___x_714_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg___boxed(lean_object* v_msg_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_){
_start:
{
lean_object* v_res_727_; 
v_res_727_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v_msg_719_, v___y_720_, v___y_721_, v___y_722_, v___y_723_, v___y_724_, v___y_725_);
lean_dec(v___y_725_);
lean_dec_ref(v___y_724_);
lean_dec(v___y_723_);
lean_dec_ref(v___y_722_);
lean_dec(v___y_721_);
lean_dec_ref(v___y_720_);
return v_res_727_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6(void){
_start:
{
lean_object* v___x_738_; lean_object* v___x_739_; 
v___x_738_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__5));
v___x_739_ = l_Lean_stringToMessageData(v___x_738_);
return v___x_739_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13(void){
_start:
{
lean_object* v___x_755_; 
v___x_755_ = l_Array_mkArray0___redArg();
return v___x_755_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23(void){
_start:
{
lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_774_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22));
v___x_775_ = l_String_toRawSubstring_x27(v___x_774_);
return v___x_775_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment(lean_object* v_letOrReassign_822_, lean_object* v_decl_823_, lean_object* v_a_824_, lean_object* v_a_825_, lean_object* v_a_826_, lean_object* v_a_827_, lean_object* v_a_828_, lean_object* v_a_829_){
_start:
{
if (lean_obj_tag(v_letOrReassign_822_) == 2)
{
lean_object* v___x_831_; uint8_t v___x_832_; 
v___x_831_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
lean_inc(v_decl_823_);
v___x_832_ = l_Lean_Syntax_isOfKind(v_decl_823_, v___x_831_);
if (v___x_832_ == 0)
{
lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_833_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_834_ = l_Lean_MessageData_ofSyntax(v_decl_823_);
v___x_835_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_835_, 0, v___x_833_);
lean_ctor_set(v___x_835_, 1, v___x_834_);
v___x_836_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_835_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_);
return v___x_836_;
}
else
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; uint8_t v___x_840_; 
v___x_837_ = lean_unsigned_to_nat(0u);
v___x_838_ = l_Lean_Syntax_getArg(v_decl_823_, v___x_837_);
v___x_839_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8));
lean_inc(v___x_838_);
v___x_840_ = l_Lean_Syntax_isOfKind(v___x_838_, v___x_839_);
if (v___x_840_ == 0)
{
lean_object* v___x_841_; uint8_t v___x_842_; 
v___x_841_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10));
lean_inc(v___x_838_);
v___x_842_ = l_Lean_Syntax_isOfKind(v___x_838_, v___x_841_);
if (v___x_842_ == 0)
{
lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; 
lean_dec(v___x_838_);
v___x_843_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_844_ = l_Lean_MessageData_ofSyntax(v_decl_823_);
v___x_845_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_845_, 0, v___x_843_);
lean_ctor_set(v___x_845_, 1, v___x_844_);
v___x_846_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_845_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_);
return v___x_846_;
}
else
{
lean_object* v___x_847_; lean_object* v___x_848_; uint8_t v___x_849_; lean_object* v___y_851_; lean_object* v_pattern_852_; lean_object* v___y_853_; lean_object* v___y_854_; lean_object* v___y_855_; lean_object* v___y_856_; lean_object* v___y_857_; lean_object* v___y_858_; 
v___x_847_ = lean_unsigned_to_nat(1u);
v___x_848_ = l_Lean_Syntax_getArg(v___x_838_, v___x_847_);
v___x_849_ = l_Lean_Syntax_matchesNull(v___x_848_, v___x_837_);
if (v___x_849_ == 0)
{
lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
lean_dec(v___x_838_);
v___x_922_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_923_ = l_Lean_MessageData_ofSyntax(v_decl_823_);
v___x_924_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_924_, 0, v___x_922_);
lean_ctor_set(v___x_924_, 1, v___x_923_);
v___x_925_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_924_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_);
return v___x_925_;
}
else
{
lean_object* v_pattern_926_; lean_object* v_xType_x3f_928_; lean_object* v___y_929_; lean_object* v___y_930_; lean_object* v___y_931_; lean_object* v___y_932_; lean_object* v___y_933_; lean_object* v___y_934_; lean_object* v___x_962_; lean_object* v___x_963_; uint8_t v___x_964_; 
v_pattern_926_ = l_Lean_Syntax_getArg(v___x_838_, v___x_837_);
v___x_962_ = lean_unsigned_to_nat(2u);
v___x_963_ = l_Lean_Syntax_getArg(v___x_838_, v___x_962_);
v___x_964_ = l_Lean_Syntax_isNone(v___x_963_);
if (v___x_964_ == 0)
{
uint8_t v___x_965_; 
lean_inc(v___x_963_);
v___x_965_ = l_Lean_Syntax_matchesNull(v___x_963_, v___x_847_);
if (v___x_965_ == 0)
{
lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; 
lean_dec(v___x_963_);
lean_dec(v_pattern_926_);
lean_dec(v___x_838_);
v___x_966_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_967_ = l_Lean_MessageData_ofSyntax(v_decl_823_);
v___x_968_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_968_, 0, v___x_966_);
lean_ctor_set(v___x_968_, 1, v___x_967_);
v___x_969_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_968_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_);
return v___x_969_;
}
else
{
lean_object* v___x_970_; lean_object* v___x_971_; uint8_t v___x_972_; 
v___x_970_ = l_Lean_Syntax_getArg(v___x_963_, v___x_837_);
lean_dec(v___x_963_);
v___x_971_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
lean_inc(v___x_970_);
v___x_972_ = l_Lean_Syntax_isOfKind(v___x_970_, v___x_971_);
if (v___x_972_ == 0)
{
lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; 
lean_dec(v___x_970_);
lean_dec(v_pattern_926_);
lean_dec(v___x_838_);
v___x_973_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_974_ = l_Lean_MessageData_ofSyntax(v_decl_823_);
v___x_975_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_975_, 0, v___x_973_);
lean_ctor_set(v___x_975_, 1, v___x_974_);
v___x_976_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_975_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_);
return v___x_976_;
}
else
{
lean_object* v_xType_x3f_977_; lean_object* v___x_978_; 
lean_dec(v_decl_823_);
v_xType_x3f_977_ = l_Lean_Syntax_getArg(v___x_970_, v___x_847_);
lean_dec(v___x_970_);
v___x_978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_978_, 0, v_xType_x3f_977_);
v_xType_x3f_928_ = v___x_978_;
v___y_929_ = v_a_824_;
v___y_930_ = v_a_825_;
v___y_931_ = v_a_826_;
v___y_932_ = v_a_827_;
v___y_933_ = v_a_828_;
v___y_934_ = v_a_829_;
goto v___jp_927_;
}
}
}
else
{
lean_object* v___x_979_; 
lean_dec(v___x_963_);
lean_dec(v_decl_823_);
v___x_979_ = lean_box(0);
v_xType_x3f_928_ = v___x_979_;
v___y_929_ = v_a_824_;
v___y_930_ = v_a_825_;
v___y_931_ = v_a_826_;
v___y_932_ = v_a_827_;
v___y_933_ = v_a_828_;
v___y_934_ = v_a_829_;
goto v___jp_927_;
}
v___jp_927_:
{
lean_object* v___x_935_; lean_object* v___x_936_; 
v___x_935_ = lean_unsigned_to_nat(4u);
v___x_936_ = l_Lean_Syntax_getArg(v___x_838_, v___x_935_);
lean_dec(v___x_838_);
if (lean_obj_tag(v_xType_x3f_928_) == 0)
{
v___y_851_ = v___x_936_;
v_pattern_852_ = v_pattern_926_;
v___y_853_ = v___y_929_;
v___y_854_ = v___y_930_;
v___y_855_ = v___y_931_;
v___y_856_ = v___y_932_;
v___y_857_ = v___y_933_;
v___y_858_ = v___y_934_;
goto v___jp_850_;
}
else
{
lean_object* v_toCold_937_; lean_object* v_val_938_; lean_object* v_ref_939_; lean_object* v_quotContext_940_; lean_object* v_currMacroScope_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; 
v_toCold_937_ = lean_ctor_get(v___y_933_, 0);
v_val_938_ = lean_ctor_get(v_xType_x3f_928_, 0);
lean_inc(v_val_938_);
lean_dec_ref_known(v_xType_x3f_928_, 1);
v_ref_939_ = lean_ctor_get(v___y_933_, 2);
v_quotContext_940_ = lean_ctor_get(v_toCold_937_, 8);
v_currMacroScope_941_ = lean_ctor_get(v_toCold_937_, 9);
v___x_942_ = l_Lean_SourceInfo_fromRef(v_ref_939_, v___x_840_);
v___x_943_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16));
v___x_944_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18));
v___x_945_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19));
lean_inc_n(v___x_942_, 7);
v___x_946_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_946_, 0, v___x_942_);
lean_ctor_set(v___x_946_, 1, v___x_945_);
v___x_947_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21));
v___x_948_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23);
v___x_949_ = lean_box(0);
lean_inc(v_currMacroScope_941_);
lean_inc(v_quotContext_940_);
v___x_950_ = l_Lean_addMacroScope(v_quotContext_940_, v___x_949_, v_currMacroScope_941_);
v___x_951_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__35));
v___x_952_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_952_, 0, v___x_942_);
lean_ctor_set(v___x_952_, 1, v___x_948_);
lean_ctor_set(v___x_952_, 2, v___x_950_);
lean_ctor_set(v___x_952_, 3, v___x_951_);
v___x_953_ = l_Lean_Syntax_node1(v___x_942_, v___x_947_, v___x_952_);
v___x_954_ = l_Lean_Syntax_node2(v___x_942_, v___x_944_, v___x_946_, v___x_953_);
v___x_955_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36));
v___x_956_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_956_, 0, v___x_942_);
lean_ctor_set(v___x_956_, 1, v___x_955_);
v___x_957_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_958_ = l_Lean_Syntax_node1(v___x_942_, v___x_957_, v_val_938_);
v___x_959_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37));
v___x_960_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_960_, 0, v___x_942_);
lean_ctor_set(v___x_960_, 1, v___x_959_);
v___x_961_ = l_Lean_Syntax_node5(v___x_942_, v___x_943_, v___x_954_, v_pattern_926_, v___x_956_, v___x_958_, v___x_960_);
v___y_851_ = v___x_936_;
v_pattern_852_ = v___x_961_;
v___y_853_ = v___y_929_;
v___y_854_ = v___y_930_;
v___y_855_ = v___y_931_;
v___y_856_ = v___y_932_;
v___y_857_ = v___y_933_;
v___y_858_ = v___y_934_;
goto v___jp_850_;
}
}
}
v___jp_850_:
{
lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; 
v___x_859_ = lean_box(0);
v___x_860_ = lean_box(v___x_849_);
v___x_861_ = lean_box(v___x_849_);
lean_inc(v_pattern_852_);
v___x_862_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTerm___boxed), 11, 4);
lean_closure_set(v___x_862_, 0, v_pattern_852_);
lean_closure_set(v___x_862_, 1, v___x_859_);
lean_closure_set(v___x_862_, 2, v___x_860_);
lean_closure_set(v___x_862_, 3, v___x_861_);
v___x_863_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v___x_862_, v___y_853_, v___y_854_, v___y_855_, v___y_856_, v___y_857_, v___y_858_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v_a_864_; lean_object* v___x_865_; 
v_a_864_ = lean_ctor_get(v___x_863_, 0);
lean_inc(v_a_864_);
lean_dec_ref_known(v___x_863_, 1);
lean_inc(v___y_858_);
lean_inc_ref(v___y_857_);
lean_inc(v___y_856_);
lean_inc_ref(v___y_855_);
v___x_865_ = lean_infer_type(v_a_864_, v___y_855_, v___y_856_, v___y_857_, v___y_858_);
if (lean_obj_tag(v___x_865_) == 0)
{
lean_object* v_a_866_; lean_object* v___x_867_; 
v_a_866_ = lean_ctor_get(v___x_865_, 0);
lean_inc(v_a_866_);
lean_dec_ref_known(v___x_865_, 1);
v___x_867_ = l_Lean_Elab_Term_exprToSyntax(v_a_866_, v___y_853_, v___y_854_, v___y_855_, v___y_856_, v___y_857_, v___y_858_);
if (lean_obj_tag(v___x_867_) == 0)
{
lean_object* v_toCold_868_; lean_object* v_a_869_; lean_object* v___x_871_; uint8_t v_isShared_872_; uint8_t v_isSharedCheck_905_; 
v_toCold_868_ = lean_ctor_get(v___y_857_, 0);
v_a_869_ = lean_ctor_get(v___x_867_, 0);
v_isSharedCheck_905_ = !lean_is_exclusive(v___x_867_);
if (v_isSharedCheck_905_ == 0)
{
v___x_871_ = v___x_867_;
v_isShared_872_ = v_isSharedCheck_905_;
goto v_resetjp_870_;
}
else
{
lean_inc(v_a_869_);
lean_dec(v___x_867_);
v___x_871_ = lean_box(0);
v_isShared_872_ = v_isSharedCheck_905_;
goto v_resetjp_870_;
}
v_resetjp_870_:
{
lean_object* v_ref_873_; lean_object* v_quotContext_874_; lean_object* v_currMacroScope_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_903_; 
v_ref_873_ = lean_ctor_get(v___y_857_, 2);
v_quotContext_874_ = lean_ctor_get(v_toCold_868_, 8);
v_currMacroScope_875_ = lean_ctor_get(v_toCold_868_, 9);
v___x_876_ = l_Lean_SourceInfo_fromRef(v_ref_873_, v___x_840_);
v___x_877_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_878_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
lean_inc_n(v___x_876_, 11);
v___x_879_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_879_, 0, v___x_876_);
lean_ctor_set(v___x_879_, 1, v___x_877_);
lean_ctor_set(v___x_879_, 2, v___x_878_);
v___x_880_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_881_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_881_, 0, v___x_876_);
lean_ctor_set(v___x_881_, 1, v___x_880_);
v___x_882_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16));
v___x_883_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18));
v___x_884_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19));
v___x_885_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_885_, 0, v___x_876_);
lean_ctor_set(v___x_885_, 1, v___x_884_);
v___x_886_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21));
v___x_887_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23);
v___x_888_ = lean_box(0);
lean_inc(v_currMacroScope_875_);
lean_inc(v_quotContext_874_);
v___x_889_ = l_Lean_addMacroScope(v_quotContext_874_, v___x_888_, v_currMacroScope_875_);
v___x_890_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__35));
v___x_891_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_891_, 0, v___x_876_);
lean_ctor_set(v___x_891_, 1, v___x_887_);
lean_ctor_set(v___x_891_, 2, v___x_889_);
lean_ctor_set(v___x_891_, 3, v___x_890_);
v___x_892_ = l_Lean_Syntax_node1(v___x_876_, v___x_886_, v___x_891_);
v___x_893_ = l_Lean_Syntax_node2(v___x_876_, v___x_883_, v___x_885_, v___x_892_);
v___x_894_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36));
v___x_895_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_895_, 0, v___x_876_);
lean_ctor_set(v___x_895_, 1, v___x_894_);
v___x_896_ = l_Lean_Syntax_node1(v___x_876_, v___x_877_, v_a_869_);
v___x_897_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37));
v___x_898_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_898_, 0, v___x_876_);
lean_ctor_set(v___x_898_, 1, v___x_897_);
v___x_899_ = l_Lean_Syntax_node5(v___x_876_, v___x_882_, v___x_893_, v___y_851_, v___x_895_, v___x_896_, v___x_898_);
lean_inc_ref(v___x_879_);
v___x_900_ = l_Lean_Syntax_node5(v___x_876_, v___x_841_, v_pattern_852_, v___x_879_, v___x_879_, v___x_881_, v___x_899_);
v___x_901_ = l_Lean_Syntax_node1(v___x_876_, v___x_831_, v___x_900_);
if (v_isShared_872_ == 0)
{
lean_ctor_set(v___x_871_, 0, v___x_901_);
v___x_903_ = v___x_871_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v___x_901_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
}
else
{
lean_dec(v_pattern_852_);
lean_dec(v___y_851_);
return v___x_867_;
}
}
else
{
lean_object* v_a_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_913_; 
lean_dec(v_pattern_852_);
lean_dec(v___y_851_);
v_a_906_ = lean_ctor_get(v___x_865_, 0);
v_isSharedCheck_913_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_913_ == 0)
{
v___x_908_ = v___x_865_;
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_a_906_);
lean_dec(v___x_865_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v___x_911_; 
if (v_isShared_909_ == 0)
{
v___x_911_ = v___x_908_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v_a_906_);
v___x_911_ = v_reuseFailAlloc_912_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
return v___x_911_;
}
}
}
}
else
{
lean_object* v_a_914_; lean_object* v___x_916_; uint8_t v_isShared_917_; uint8_t v_isSharedCheck_921_; 
lean_dec(v_pattern_852_);
lean_dec(v___y_851_);
v_a_914_ = lean_ctor_get(v___x_863_, 0);
v_isSharedCheck_921_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_921_ == 0)
{
v___x_916_ = v___x_863_;
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
else
{
lean_inc(v_a_914_);
lean_dec(v___x_863_);
v___x_916_ = lean_box(0);
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
v_resetjp_915_:
{
lean_object* v___x_919_; 
if (v_isShared_917_ == 0)
{
v___x_919_ = v___x_916_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v_a_914_);
v___x_919_ = v_reuseFailAlloc_920_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
return v___x_919_;
}
}
}
}
}
}
else
{
lean_object* v___x_980_; lean_object* v___x_981_; uint8_t v___x_982_; 
v___x_980_ = l_Lean_Syntax_getArg(v___x_838_, v___x_837_);
v___x_981_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41));
lean_inc(v___x_980_);
v___x_982_ = l_Lean_Syntax_isOfKind(v___x_980_, v___x_981_);
if (v___x_982_ == 0)
{
lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; 
lean_dec(v___x_980_);
lean_dec(v___x_838_);
v___x_983_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_984_ = l_Lean_MessageData_ofSyntax(v_decl_823_);
v___x_985_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_985_, 0, v___x_983_);
lean_ctor_set(v___x_985_, 1, v___x_984_);
v___x_986_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_985_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_);
return v___x_986_;
}
else
{
lean_object* v_x_987_; lean_object* v___x_988_; uint8_t v___x_989_; 
v_x_987_ = l_Lean_Syntax_getArg(v___x_980_, v___x_837_);
lean_dec(v___x_980_);
v___x_988_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43));
lean_inc(v_x_987_);
v___x_989_ = l_Lean_Syntax_isOfKind(v_x_987_, v___x_988_);
if (v___x_989_ == 0)
{
lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; 
lean_dec(v_x_987_);
lean_dec(v___x_838_);
v___x_990_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_991_ = l_Lean_MessageData_ofSyntax(v_decl_823_);
v___x_992_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_992_, 0, v___x_990_);
lean_ctor_set(v___x_992_, 1, v___x_991_);
v___x_993_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_992_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_);
return v___x_993_;
}
else
{
lean_object* v___x_994_; lean_object* v___x_995_; uint8_t v___x_996_; lean_object* v___y_998_; lean_object* v___y_999_; lean_object* v___y_1000_; lean_object* v___y_1001_; lean_object* v___y_1002_; lean_object* v___y_1003_; lean_object* v___y_1004_; lean_object* v_a_1005_; lean_object* v_xType_x3f_1054_; lean_object* v___y_1055_; lean_object* v___y_1056_; lean_object* v___y_1057_; lean_object* v___y_1058_; lean_object* v___y_1059_; lean_object* v___y_1060_; 
v___x_994_ = lean_unsigned_to_nat(1u);
v___x_995_ = l_Lean_Syntax_getArg(v___x_838_, v___x_994_);
v___x_996_ = l_Lean_Syntax_matchesNull(v___x_995_, v___x_837_);
if (v___x_996_ == 0)
{
lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; 
lean_dec(v_x_987_);
lean_dec(v___x_838_);
v___x_1082_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_1083_ = l_Lean_MessageData_ofSyntax(v_decl_823_);
v___x_1084_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1084_, 0, v___x_1082_);
lean_ctor_set(v___x_1084_, 1, v___x_1083_);
v___x_1085_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_1084_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_);
return v___x_1085_;
}
else
{
lean_object* v___x_1086_; lean_object* v___x_1087_; uint8_t v___x_1088_; 
v___x_1086_ = lean_unsigned_to_nat(2u);
v___x_1087_ = l_Lean_Syntax_getArg(v___x_838_, v___x_1086_);
v___x_1088_ = l_Lean_Syntax_isNone(v___x_1087_);
if (v___x_1088_ == 0)
{
uint8_t v___x_1089_; 
lean_inc(v___x_1087_);
v___x_1089_ = l_Lean_Syntax_matchesNull(v___x_1087_, v___x_994_);
if (v___x_1089_ == 0)
{
lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; 
lean_dec(v___x_1087_);
lean_dec(v_x_987_);
lean_dec(v___x_838_);
v___x_1090_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_1091_ = l_Lean_MessageData_ofSyntax(v_decl_823_);
v___x_1092_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1090_);
lean_ctor_set(v___x_1092_, 1, v___x_1091_);
v___x_1093_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_1092_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_);
return v___x_1093_;
}
else
{
lean_object* v___x_1094_; lean_object* v___x_1095_; uint8_t v___x_1096_; 
v___x_1094_ = l_Lean_Syntax_getArg(v___x_1087_, v___x_837_);
lean_dec(v___x_1087_);
v___x_1095_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
lean_inc(v___x_1094_);
v___x_1096_ = l_Lean_Syntax_isOfKind(v___x_1094_, v___x_1095_);
if (v___x_1096_ == 0)
{
lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; 
lean_dec(v___x_1094_);
lean_dec(v_x_987_);
lean_dec(v___x_838_);
v___x_1097_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_1098_ = l_Lean_MessageData_ofSyntax(v_decl_823_);
v___x_1099_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1099_, 0, v___x_1097_);
lean_ctor_set(v___x_1099_, 1, v___x_1098_);
v___x_1100_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_1099_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_);
return v___x_1100_;
}
else
{
lean_object* v_xType_x3f_1101_; lean_object* v___x_1102_; 
lean_dec(v_decl_823_);
v_xType_x3f_1101_ = l_Lean_Syntax_getArg(v___x_1094_, v___x_994_);
lean_dec(v___x_1094_);
v___x_1102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1102_, 0, v_xType_x3f_1101_);
v_xType_x3f_1054_ = v___x_1102_;
v___y_1055_ = v_a_824_;
v___y_1056_ = v_a_825_;
v___y_1057_ = v_a_826_;
v___y_1058_ = v_a_827_;
v___y_1059_ = v_a_828_;
v___y_1060_ = v_a_829_;
goto v___jp_1053_;
}
}
}
else
{
lean_object* v___x_1103_; 
lean_dec(v___x_1087_);
lean_dec(v_decl_823_);
v___x_1103_ = lean_box(0);
v_xType_x3f_1054_ = v___x_1103_;
v___y_1055_ = v_a_824_;
v___y_1056_ = v_a_825_;
v___y_1057_ = v_a_826_;
v___y_1058_ = v_a_827_;
v___y_1059_ = v_a_828_;
v___y_1060_ = v_a_829_;
goto v___jp_1053_;
}
}
v___jp_997_:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; 
v___x_1006_ = lean_box(0);
lean_inc(v_x_987_);
v___x_1007_ = l_Lean_Elab_Term_elabTermEnsuringType(v_x_987_, v_a_1005_, v___x_996_, v___x_996_, v___x_1006_, v___y_1000_, v___y_999_, v___y_1004_, v___y_1002_, v___y_1001_, v___y_1003_);
if (lean_obj_tag(v___x_1007_) == 0)
{
lean_object* v___x_1008_; lean_object* v___x_1009_; 
lean_dec_ref_known(v___x_1007_, 1);
v___x_1008_ = l_Lean_TSyntax_getId(v_x_987_);
v___x_1009_ = l_Lean_Meta_getLocalDeclFromUserName(v___x_1008_, v___y_1004_, v___y_1002_, v___y_1001_, v___y_1003_);
if (lean_obj_tag(v___x_1009_) == 0)
{
lean_object* v_a_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; 
v_a_1010_ = lean_ctor_get(v___x_1009_, 0);
lean_inc(v_a_1010_);
lean_dec_ref_known(v___x_1009_, 1);
v___x_1011_ = l_Lean_LocalDecl_type(v_a_1010_);
lean_dec(v_a_1010_);
v___x_1012_ = l_Lean_Elab_Term_exprToSyntax(v___x_1011_, v___y_1000_, v___y_999_, v___y_1004_, v___y_1002_, v___y_1001_, v___y_1003_);
if (lean_obj_tag(v___x_1012_) == 0)
{
lean_object* v_a_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1036_; 
v_a_1013_ = lean_ctor_get(v___x_1012_, 0);
v_isSharedCheck_1036_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1036_ == 0)
{
v___x_1015_ = v___x_1012_;
v_isShared_1016_ = v_isSharedCheck_1036_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_a_1013_);
lean_dec(v___x_1012_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1036_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
lean_object* v_ref_1017_; uint8_t v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1034_; 
v_ref_1017_ = lean_ctor_get(v___y_1001_, 2);
v___x_1018_ = 0;
v___x_1019_ = l_Lean_SourceInfo_fromRef(v_ref_1017_, v___x_1018_);
lean_inc_n(v___x_1019_, 7);
v___x_1020_ = l_Lean_Syntax_node1(v___x_1019_, v___x_981_, v_x_987_);
v___x_1021_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_1022_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_1023_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1023_, 0, v___x_1019_);
lean_ctor_set(v___x_1023_, 1, v___x_1021_);
lean_ctor_set(v___x_1023_, 2, v___x_1022_);
v___x_1024_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
v___x_1025_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36));
v___x_1026_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1019_);
lean_ctor_set(v___x_1026_, 1, v___x_1025_);
v___x_1027_ = l_Lean_Syntax_node2(v___x_1019_, v___x_1024_, v___x_1026_, v_a_1013_);
v___x_1028_ = l_Lean_Syntax_node1(v___x_1019_, v___x_1021_, v___x_1027_);
v___x_1029_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_1030_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1030_, 0, v___x_1019_);
lean_ctor_set(v___x_1030_, 1, v___x_1029_);
v___x_1031_ = l_Lean_Syntax_node5(v___x_1019_, v___x_839_, v___x_1020_, v___x_1023_, v___x_1028_, v___x_1030_, v___y_998_);
v___x_1032_ = l_Lean_Syntax_node1(v___x_1019_, v___x_831_, v___x_1031_);
if (v_isShared_1016_ == 0)
{
lean_ctor_set(v___x_1015_, 0, v___x_1032_);
v___x_1034_ = v___x_1015_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1035_; 
v_reuseFailAlloc_1035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1035_, 0, v___x_1032_);
v___x_1034_ = v_reuseFailAlloc_1035_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
return v___x_1034_;
}
}
}
else
{
lean_dec(v___y_998_);
lean_dec(v_x_987_);
return v___x_1012_;
}
}
else
{
lean_object* v_a_1037_; lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1044_; 
lean_dec(v___y_998_);
lean_dec(v_x_987_);
v_a_1037_ = lean_ctor_get(v___x_1009_, 0);
v_isSharedCheck_1044_ = !lean_is_exclusive(v___x_1009_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_1039_ = v___x_1009_;
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
else
{
lean_inc(v_a_1037_);
lean_dec(v___x_1009_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
lean_object* v___x_1042_; 
if (v_isShared_1040_ == 0)
{
v___x_1042_ = v___x_1039_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v_a_1037_);
v___x_1042_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
return v___x_1042_;
}
}
}
}
else
{
lean_object* v_a_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1052_; 
lean_dec(v___y_998_);
lean_dec(v_x_987_);
v_a_1045_ = lean_ctor_get(v___x_1007_, 0);
v_isSharedCheck_1052_ = !lean_is_exclusive(v___x_1007_);
if (v_isSharedCheck_1052_ == 0)
{
v___x_1047_ = v___x_1007_;
v_isShared_1048_ = v_isSharedCheck_1052_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_a_1045_);
lean_dec(v___x_1007_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1052_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v___x_1050_; 
if (v_isShared_1048_ == 0)
{
v___x_1050_ = v___x_1047_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v_a_1045_);
v___x_1050_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
return v___x_1050_;
}
}
}
}
v___jp_1053_:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; 
v___x_1061_ = lean_unsigned_to_nat(4u);
v___x_1062_ = l_Lean_Syntax_getArg(v___x_838_, v___x_1061_);
lean_dec(v___x_838_);
if (lean_obj_tag(v_xType_x3f_1054_) == 0)
{
lean_object* v___x_1063_; 
v___x_1063_ = lean_box(0);
v___y_998_ = v___x_1062_;
v___y_999_ = v___y_1056_;
v___y_1000_ = v___y_1055_;
v___y_1001_ = v___y_1059_;
v___y_1002_ = v___y_1058_;
v___y_1003_ = v___y_1060_;
v___y_1004_ = v___y_1057_;
v_a_1005_ = v___x_1063_;
goto v___jp_997_;
}
else
{
lean_object* v_val_1064_; lean_object* v___x_1066_; uint8_t v_isShared_1067_; uint8_t v_isSharedCheck_1081_; 
v_val_1064_ = lean_ctor_get(v_xType_x3f_1054_, 0);
v_isSharedCheck_1081_ = !lean_is_exclusive(v_xType_x3f_1054_);
if (v_isSharedCheck_1081_ == 0)
{
v___x_1066_ = v_xType_x3f_1054_;
v_isShared_1067_ = v_isSharedCheck_1081_;
goto v_resetjp_1065_;
}
else
{
lean_inc(v_val_1064_);
lean_dec(v_xType_x3f_1054_);
v___x_1066_ = lean_box(0);
v_isShared_1067_ = v_isSharedCheck_1081_;
goto v_resetjp_1065_;
}
v_resetjp_1065_:
{
lean_object* v___x_1068_; 
v___x_1068_ = l_Lean_Elab_Term_elabType(v_val_1064_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_);
if (lean_obj_tag(v___x_1068_) == 0)
{
lean_object* v_a_1069_; lean_object* v___x_1071_; 
v_a_1069_ = lean_ctor_get(v___x_1068_, 0);
lean_inc(v_a_1069_);
lean_dec_ref_known(v___x_1068_, 1);
if (v_isShared_1067_ == 0)
{
lean_ctor_set(v___x_1066_, 0, v_a_1069_);
v___x_1071_ = v___x_1066_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v_a_1069_);
v___x_1071_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
v___y_998_ = v___x_1062_;
v___y_999_ = v___y_1056_;
v___y_1000_ = v___y_1055_;
v___y_1001_ = v___y_1059_;
v___y_1002_ = v___y_1058_;
v___y_1003_ = v___y_1060_;
v___y_1004_ = v___y_1057_;
v_a_1005_ = v___x_1071_;
goto v___jp_997_;
}
}
else
{
lean_object* v_a_1073_; lean_object* v___x_1075_; uint8_t v_isShared_1076_; uint8_t v_isSharedCheck_1080_; 
lean_del_object(v___x_1066_);
lean_dec(v___x_1062_);
lean_dec(v_x_987_);
v_a_1073_ = lean_ctor_get(v___x_1068_, 0);
v_isSharedCheck_1080_ = !lean_is_exclusive(v___x_1068_);
if (v_isSharedCheck_1080_ == 0)
{
v___x_1075_ = v___x_1068_;
v_isShared_1076_ = v_isSharedCheck_1080_;
goto v_resetjp_1074_;
}
else
{
lean_inc(v_a_1073_);
lean_dec(v___x_1068_);
v___x_1075_ = lean_box(0);
v_isShared_1076_ = v_isSharedCheck_1080_;
goto v_resetjp_1074_;
}
v_resetjp_1074_:
{
lean_object* v___x_1078_; 
if (v_isShared_1076_ == 0)
{
v___x_1078_ = v___x_1075_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v_a_1073_);
v___x_1078_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
return v___x_1078_;
}
}
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
lean_object* v___x_1104_; 
v___x_1104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1104_, 0, v_decl_823_);
return v___x_1104_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___boxed(lean_object* v_letOrReassign_1105_, lean_object* v_decl_1106_, lean_object* v_a_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_){
_start:
{
lean_object* v_res_1114_; 
v_res_1114_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment(v_letOrReassign_1105_, v_decl_1106_, v_a_1107_, v_a_1108_, v_a_1109_, v_a_1110_, v_a_1111_, v_a_1112_);
lean_dec(v_a_1112_);
lean_dec_ref(v_a_1111_);
lean_dec(v_a_1110_);
lean_dec_ref(v_a_1109_);
lean_dec(v_a_1108_);
lean_dec_ref(v_a_1107_);
lean_dec(v_letOrReassign_1105_);
return v_res_1114_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0(lean_object* v_00_u03b1_1115_, lean_object* v_msg_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_){
_start:
{
lean_object* v___x_1124_; 
v___x_1124_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v_msg_1116_, v___y_1117_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_);
return v___x_1124_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___boxed(lean_object* v_00_u03b1_1125_, lean_object* v_msg_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_){
_start:
{
lean_object* v_res_1134_; 
v_res_1134_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0(v_00_u03b1_1125_, v_msg_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_);
lean_dec(v___y_1132_);
lean_dec_ref(v___y_1131_);
lean_dec(v___y_1130_);
lean_dec_ref(v___y_1129_);
lean_dec(v___y_1128_);
lean_dec_ref(v___y_1127_);
return v_res_1134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0(lean_object* v_msgData_1135_, lean_object* v_macroStack_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_){
_start:
{
lean_object* v___x_1144_; 
v___x_1144_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg(v_msgData_1135_, v_macroStack_1136_, v___y_1141_);
return v___x_1144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___boxed(lean_object* v_msgData_1145_, lean_object* v_macroStack_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_){
_start:
{
lean_object* v_res_1154_; 
v_res_1154_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0(v_msgData_1145_, v_macroStack_1146_, v___y_1147_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_, v___y_1152_);
lean_dec(v___y_1152_);
lean_dec_ref(v___y_1151_);
lean_dec(v___y_1150_);
lean_dec_ref(v___y_1149_);
lean_dec(v___y_1148_);
lean_dec_ref(v___y_1147_);
return v_res_1154_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__1(void){
_start:
{
lean_object* v___x_1156_; lean_object* v___x_1157_; 
v___x_1156_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__0));
v___x_1157_ = l_Lean_stringToMessageData(v___x_1156_);
return v___x_1157_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__3(void){
_start:
{
lean_object* v___x_1159_; lean_object* v___x_1160_; 
v___x_1159_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__2));
v___x_1160_ = l_Lean_stringToMessageData(v___x_1159_);
return v___x_1160_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg(lean_object* v_config_1161_, lean_object* v_a_1162_, lean_object* v_a_1163_, lean_object* v_a_1164_, lean_object* v_a_1165_){
_start:
{
uint8_t v_postponeValue_1167_; uint8_t v_generalize_1168_; lean_object* v___y_1170_; lean_object* v___y_1171_; lean_object* v___y_1172_; lean_object* v___y_1173_; 
v_postponeValue_1167_ = lean_ctor_get_uint8(v_config_1161_, sizeof(void*)*1 + 3);
v_generalize_1168_ = lean_ctor_get_uint8(v_config_1161_, sizeof(void*)*1 + 4);
if (v_postponeValue_1167_ == 0)
{
v___y_1170_ = v_a_1162_;
v___y_1171_ = v_a_1163_;
v___y_1172_ = v_a_1164_;
v___y_1173_ = v_a_1165_;
goto v___jp_1169_;
}
else
{
lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1178_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__3, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__3_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__3);
v___x_1179_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg(v___x_1178_, v_a_1162_, v_a_1163_, v_a_1164_, v_a_1165_);
return v___x_1179_;
}
v___jp_1169_:
{
if (v_generalize_1168_ == 0)
{
lean_object* v___x_1174_; lean_object* v___x_1175_; 
v___x_1174_ = lean_box(0);
v___x_1175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1175_, 0, v___x_1174_);
return v___x_1175_;
}
else
{
lean_object* v___x_1176_; lean_object* v___x_1177_; 
v___x_1176_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__1);
v___x_1177_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg(v___x_1176_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
return v___x_1177_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___boxed(lean_object* v_config_1180_, lean_object* v_a_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_){
_start:
{
lean_object* v_res_1186_; 
v_res_1186_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg(v_config_1180_, v_a_1181_, v_a_1182_, v_a_1183_, v_a_1184_);
lean_dec(v_a_1184_);
lean_dec_ref(v_a_1183_);
lean_dec(v_a_1182_);
lean_dec_ref(v_a_1181_);
lean_dec_ref(v_config_1180_);
return v_res_1186_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo(lean_object* v_config_1187_, lean_object* v_a_1188_, lean_object* v_a_1189_, lean_object* v_a_1190_, lean_object* v_a_1191_, lean_object* v_a_1192_, lean_object* v_a_1193_, lean_object* v_a_1194_){
_start:
{
lean_object* v___x_1196_; 
v___x_1196_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg(v_config_1187_, v_a_1191_, v_a_1192_, v_a_1193_, v_a_1194_);
return v___x_1196_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___boxed(lean_object* v_config_1197_, lean_object* v_a_1198_, lean_object* v_a_1199_, lean_object* v_a_1200_, lean_object* v_a_1201_, lean_object* v_a_1202_, lean_object* v_a_1203_, lean_object* v_a_1204_, lean_object* v_a_1205_){
_start:
{
lean_object* v_res_1206_; 
v_res_1206_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo(v_config_1197_, v_a_1198_, v_a_1199_, v_a_1200_, v_a_1201_, v_a_1202_, v_a_1203_, v_a_1204_);
lean_dec(v_a_1204_);
lean_dec_ref(v_a_1203_);
lean_dec(v_a_1202_);
lean_dec_ref(v_a_1201_);
lean_dec(v_a_1200_);
lean_dec_ref(v_a_1199_);
lean_dec_ref(v_a_1198_);
lean_dec_ref(v_config_1197_);
return v_res_1206_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; 
v___x_1207_ = lean_box(0);
v___x_1208_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_1209_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1208_);
lean_ctor_set(v___x_1209_, 1, v___x_1207_);
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg(){
_start:
{
lean_object* v___x_1211_; lean_object* v___x_1212_; 
v___x_1211_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg___closed__0);
v___x_1212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1212_, 0, v___x_1211_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg___boxed(lean_object* v___y_1213_){
_start:
{
lean_object* v_res_1214_; 
v_res_1214_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v_res_1214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0(lean_object* v_00_u03b1_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_){
_start:
{
lean_object* v___x_1224_; 
v___x_1224_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_1224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___boxed(lean_object* v_00_u03b1_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_){
_start:
{
lean_object* v_res_1234_; 
v_res_1234_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0(v_00_u03b1_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_);
lean_dec(v___y_1232_);
lean_dec_ref(v___y_1231_);
lean_dec(v___y_1230_);
lean_dec_ref(v___y_1229_);
lean_dec(v___y_1228_);
lean_dec_ref(v___y_1227_);
lean_dec_ref(v___y_1226_);
return v_res_1234_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3(void){
_start:
{
lean_object* v___x_1242_; lean_object* v___x_1243_; 
v___x_1242_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__2));
v___x_1243_ = l_String_toRawSubstring_x27(v___x_1242_);
return v___x_1243_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__9(void){
_start:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; 
v___x_1255_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__4));
v___x_1256_ = l_String_toRawSubstring_x27(v___x_1255_);
return v___x_1256_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl(lean_object* v_decl_1279_, lean_object* v_a_1280_, lean_object* v_a_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_, lean_object* v_a_1284_, lean_object* v_a_1285_, lean_object* v_a_1286_){
_start:
{
lean_object* v___x_1288_; uint8_t v___x_1289_; 
v___x_1288_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
lean_inc(v_decl_1279_);
v___x_1289_ = l_Lean_Syntax_isOfKind(v_decl_1279_, v___x_1288_);
if (v___x_1289_ == 0)
{
lean_object* v___x_1290_; 
lean_dec(v_decl_1279_);
v___x_1290_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_1290_;
}
else
{
lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; uint8_t v___x_1294_; 
v___x_1291_ = lean_unsigned_to_nat(0u);
v___x_1292_ = l_Lean_Syntax_getArg(v_decl_1279_, v___x_1291_);
lean_dec(v_decl_1279_);
v___x_1293_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8));
lean_inc(v___x_1292_);
v___x_1294_ = l_Lean_Syntax_isOfKind(v___x_1292_, v___x_1293_);
if (v___x_1294_ == 0)
{
lean_object* v___x_1295_; 
lean_dec(v___x_1292_);
v___x_1295_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_1295_;
}
else
{
lean_object* v___x_1296_; lean_object* v___x_1297_; uint8_t v___x_1298_; 
v___x_1296_ = l_Lean_Syntax_getArg(v___x_1292_, v___x_1291_);
v___x_1297_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41));
lean_inc(v___x_1296_);
v___x_1298_ = l_Lean_Syntax_isOfKind(v___x_1296_, v___x_1297_);
if (v___x_1298_ == 0)
{
lean_object* v___x_1299_; 
lean_dec(v___x_1296_);
lean_dec(v___x_1292_);
v___x_1299_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_1299_;
}
else
{
lean_object* v___x_1300_; lean_object* v_t_x3f_1302_; lean_object* v___y_1303_; lean_object* v___x_1386_; uint8_t v___x_1387_; 
v___x_1300_ = l_Lean_Syntax_getArg(v___x_1296_, v___x_1291_);
lean_dec(v___x_1296_);
v___x_1386_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43));
lean_inc(v___x_1300_);
v___x_1387_ = l_Lean_Syntax_isOfKind(v___x_1300_, v___x_1386_);
if (v___x_1387_ == 0)
{
lean_object* v___x_1388_; 
lean_dec(v___x_1300_);
lean_dec(v___x_1292_);
v___x_1388_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_1388_;
}
else
{
lean_object* v___x_1389_; lean_object* v___x_1390_; uint8_t v___x_1391_; 
v___x_1389_ = lean_unsigned_to_nat(1u);
v___x_1390_ = l_Lean_Syntax_getArg(v___x_1292_, v___x_1389_);
v___x_1391_ = l_Lean_Syntax_matchesNull(v___x_1390_, v___x_1291_);
if (v___x_1391_ == 0)
{
lean_object* v___x_1392_; 
lean_dec(v___x_1300_);
lean_dec(v___x_1292_);
v___x_1392_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_1392_;
}
else
{
lean_object* v___x_1393_; lean_object* v___x_1394_; uint8_t v___x_1395_; 
v___x_1393_ = lean_unsigned_to_nat(2u);
v___x_1394_ = l_Lean_Syntax_getArg(v___x_1292_, v___x_1393_);
v___x_1395_ = l_Lean_Syntax_isNone(v___x_1394_);
if (v___x_1395_ == 0)
{
uint8_t v___x_1396_; 
lean_inc(v___x_1394_);
v___x_1396_ = l_Lean_Syntax_matchesNull(v___x_1394_, v___x_1389_);
if (v___x_1396_ == 0)
{
lean_object* v___x_1397_; 
lean_dec(v___x_1394_);
lean_dec(v___x_1300_);
lean_dec(v___x_1292_);
v___x_1397_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_1397_;
}
else
{
lean_object* v___x_1398_; lean_object* v___x_1399_; uint8_t v___x_1400_; 
v___x_1398_ = l_Lean_Syntax_getArg(v___x_1394_, v___x_1291_);
lean_dec(v___x_1394_);
v___x_1399_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
lean_inc(v___x_1398_);
v___x_1400_ = l_Lean_Syntax_isOfKind(v___x_1398_, v___x_1399_);
if (v___x_1400_ == 0)
{
lean_object* v___x_1401_; 
lean_dec(v___x_1398_);
lean_dec(v___x_1300_);
lean_dec(v___x_1292_);
v___x_1401_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_1401_;
}
else
{
lean_object* v_t_x3f_1402_; lean_object* v___x_1403_; 
v_t_x3f_1402_ = l_Lean_Syntax_getArg(v___x_1398_, v___x_1389_);
lean_dec(v___x_1398_);
v___x_1403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1403_, 0, v_t_x3f_1402_);
v_t_x3f_1302_ = v___x_1403_;
v___y_1303_ = v_a_1285_;
goto v___jp_1301_;
}
}
}
else
{
lean_object* v___x_1404_; 
lean_dec(v___x_1394_);
v___x_1404_ = lean_box(0);
v_t_x3f_1302_ = v___x_1404_;
v___y_1303_ = v_a_1285_;
goto v___jp_1301_;
}
}
}
v___jp_1301_:
{
lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___x_1304_ = lean_unsigned_to_nat(4u);
v___x_1305_ = l_Lean_Syntax_getArg(v___x_1292_, v___x_1304_);
lean_dec(v___x_1292_);
if (lean_obj_tag(v_t_x3f_1302_) == 0)
{
lean_object* v_toCold_1306_; lean_object* v_ref_1307_; lean_object* v_quotContext_1308_; lean_object* v_currMacroScope_1309_; uint8_t v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; 
v_toCold_1306_ = lean_ctor_get(v___y_1303_, 0);
v_ref_1307_ = lean_ctor_get(v___y_1303_, 2);
v_quotContext_1308_ = lean_ctor_get(v_toCold_1306_, 8);
v_currMacroScope_1309_ = lean_ctor_get(v_toCold_1306_, 9);
v___x_1310_ = 0;
v___x_1311_ = l_Lean_SourceInfo_fromRef(v_ref_1307_, v___x_1310_);
lean_inc_n(v___x_1311_, 7);
v___x_1312_ = l_Lean_Syntax_node1(v___x_1311_, v___x_1297_, v___x_1300_);
v___x_1313_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_1314_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_1315_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1311_);
lean_ctor_set(v___x_1315_, 1, v___x_1313_);
lean_ctor_set(v___x_1315_, 2, v___x_1314_);
v___x_1316_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_1317_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1311_);
lean_ctor_set(v___x_1317_, 1, v___x_1316_);
v___x_1318_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1));
v___x_1319_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3);
v___x_1320_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__6));
lean_inc(v_currMacroScope_1309_);
lean_inc(v_quotContext_1308_);
v___x_1321_ = l_Lean_addMacroScope(v_quotContext_1308_, v___x_1320_, v_currMacroScope_1309_);
v___x_1322_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__8));
v___x_1323_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1311_);
lean_ctor_set(v___x_1323_, 1, v___x_1319_);
lean_ctor_set(v___x_1323_, 2, v___x_1321_);
lean_ctor_set(v___x_1323_, 3, v___x_1322_);
v___x_1324_ = l_Lean_Syntax_node1(v___x_1311_, v___x_1313_, v___x_1305_);
v___x_1325_ = l_Lean_Syntax_node2(v___x_1311_, v___x_1318_, v___x_1323_, v___x_1324_);
lean_inc_ref(v___x_1315_);
v___x_1326_ = l_Lean_Syntax_node5(v___x_1311_, v___x_1293_, v___x_1312_, v___x_1315_, v___x_1315_, v___x_1317_, v___x_1325_);
v___x_1327_ = l_Lean_Syntax_node1(v___x_1311_, v___x_1288_, v___x_1326_);
v___x_1328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1327_);
return v___x_1328_;
}
else
{
lean_object* v_toCold_1329_; lean_object* v_val_1330_; lean_object* v___x_1332_; uint8_t v_isShared_1333_; uint8_t v_isSharedCheck_1385_; 
v_toCold_1329_ = lean_ctor_get(v___y_1303_, 0);
v_val_1330_ = lean_ctor_get(v_t_x3f_1302_, 0);
v_isSharedCheck_1385_ = !lean_is_exclusive(v_t_x3f_1302_);
if (v_isSharedCheck_1385_ == 0)
{
v___x_1332_ = v_t_x3f_1302_;
v_isShared_1333_ = v_isSharedCheck_1385_;
goto v_resetjp_1331_;
}
else
{
lean_inc(v_val_1330_);
lean_dec(v_t_x3f_1302_);
v___x_1332_ = lean_box(0);
v_isShared_1333_ = v_isSharedCheck_1385_;
goto v_resetjp_1331_;
}
v_resetjp_1331_:
{
lean_object* v_ref_1334_; lean_object* v_quotContext_1335_; lean_object* v_currMacroScope_1336_; uint8_t v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1383_; 
v_ref_1334_ = lean_ctor_get(v___y_1303_, 2);
v_quotContext_1335_ = lean_ctor_get(v_toCold_1329_, 8);
v_currMacroScope_1336_ = lean_ctor_get(v_toCold_1329_, 9);
v___x_1337_ = 0;
v___x_1338_ = l_Lean_SourceInfo_fromRef(v_ref_1334_, v___x_1337_);
lean_inc_n(v___x_1338_, 19);
v___x_1339_ = l_Lean_Syntax_node1(v___x_1338_, v___x_1297_, v___x_1300_);
v___x_1340_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_1341_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_1342_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1342_, 0, v___x_1338_);
lean_ctor_set(v___x_1342_, 1, v___x_1340_);
lean_ctor_set(v___x_1342_, 2, v___x_1341_);
v___x_1343_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
v___x_1344_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36));
v___x_1345_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1345_, 0, v___x_1338_);
lean_ctor_set(v___x_1345_, 1, v___x_1344_);
v___x_1346_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1));
v___x_1347_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__9, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__9_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__9);
v___x_1348_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__10));
lean_inc_n(v_currMacroScope_1336_, 3);
lean_inc_n(v_quotContext_1335_, 3);
v___x_1349_ = l_Lean_addMacroScope(v_quotContext_1335_, v___x_1348_, v_currMacroScope_1336_);
v___x_1350_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__14));
v___x_1351_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1351_, 0, v___x_1338_);
lean_ctor_set(v___x_1351_, 1, v___x_1347_);
lean_ctor_set(v___x_1351_, 2, v___x_1349_);
lean_ctor_set(v___x_1351_, 3, v___x_1350_);
v___x_1352_ = l_Lean_Syntax_node1(v___x_1338_, v___x_1340_, v_val_1330_);
lean_inc(v___x_1352_);
v___x_1353_ = l_Lean_Syntax_node2(v___x_1338_, v___x_1346_, v___x_1351_, v___x_1352_);
lean_inc_ref(v___x_1345_);
v___x_1354_ = l_Lean_Syntax_node2(v___x_1338_, v___x_1343_, v___x_1345_, v___x_1353_);
v___x_1355_ = l_Lean_Syntax_node1(v___x_1338_, v___x_1340_, v___x_1354_);
v___x_1356_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_1357_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1357_, 0, v___x_1338_);
lean_ctor_set(v___x_1357_, 1, v___x_1356_);
v___x_1358_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3);
v___x_1359_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__6));
v___x_1360_ = l_Lean_addMacroScope(v_quotContext_1335_, v___x_1359_, v_currMacroScope_1336_);
v___x_1361_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__8));
v___x_1362_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1338_);
lean_ctor_set(v___x_1362_, 1, v___x_1358_);
lean_ctor_set(v___x_1362_, 2, v___x_1360_);
lean_ctor_set(v___x_1362_, 3, v___x_1361_);
v___x_1363_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16));
v___x_1364_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18));
v___x_1365_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19));
v___x_1366_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1366_, 0, v___x_1338_);
lean_ctor_set(v___x_1366_, 1, v___x_1365_);
v___x_1367_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21));
v___x_1368_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23);
v___x_1369_ = lean_box(0);
v___x_1370_ = l_Lean_addMacroScope(v_quotContext_1335_, v___x_1369_, v_currMacroScope_1336_);
v___x_1371_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__17));
v___x_1372_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1372_, 0, v___x_1338_);
lean_ctor_set(v___x_1372_, 1, v___x_1368_);
lean_ctor_set(v___x_1372_, 2, v___x_1370_);
lean_ctor_set(v___x_1372_, 3, v___x_1371_);
v___x_1373_ = l_Lean_Syntax_node1(v___x_1338_, v___x_1367_, v___x_1372_);
v___x_1374_ = l_Lean_Syntax_node2(v___x_1338_, v___x_1364_, v___x_1366_, v___x_1373_);
v___x_1375_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37));
v___x_1376_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1376_, 0, v___x_1338_);
lean_ctor_set(v___x_1376_, 1, v___x_1375_);
v___x_1377_ = l_Lean_Syntax_node5(v___x_1338_, v___x_1363_, v___x_1374_, v___x_1305_, v___x_1345_, v___x_1352_, v___x_1376_);
v___x_1378_ = l_Lean_Syntax_node1(v___x_1338_, v___x_1340_, v___x_1377_);
v___x_1379_ = l_Lean_Syntax_node2(v___x_1338_, v___x_1346_, v___x_1362_, v___x_1378_);
v___x_1380_ = l_Lean_Syntax_node5(v___x_1338_, v___x_1293_, v___x_1339_, v___x_1342_, v___x_1355_, v___x_1357_, v___x_1379_);
v___x_1381_ = l_Lean_Syntax_node1(v___x_1338_, v___x_1288_, v___x_1380_);
if (v_isShared_1333_ == 0)
{
lean_ctor_set_tag(v___x_1332_, 0);
lean_ctor_set(v___x_1332_, 0, v___x_1381_);
v___x_1383_ = v___x_1332_;
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
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___boxed(lean_object* v_decl_1405_, lean_object* v_a_1406_, lean_object* v_a_1407_, lean_object* v_a_1408_, lean_object* v_a_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_, lean_object* v_a_1412_, lean_object* v_a_1413_){
_start:
{
lean_object* v_res_1414_; 
v_res_1414_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl(v_decl_1405_, v_a_1406_, v_a_1407_, v_a_1408_, v_a_1409_, v_a_1410_, v_a_1411_, v_a_1412_);
lean_dec(v_a_1412_);
lean_dec_ref(v_a_1411_);
lean_dec(v_a_1410_);
lean_dec_ref(v_a_1409_);
lean_dec(v_a_1408_);
lean_dec_ref(v_a_1407_);
lean_dec_ref(v_a_1406_);
return v_res_1414_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___redArg(lean_object* v_lctx_1415_, lean_object* v_x_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_){
_start:
{
lean_object* v_keyedConfig_1424_; uint8_t v_trackZetaDelta_1425_; lean_object* v_zetaDeltaSet_1426_; lean_object* v_localInstances_1427_; lean_object* v_defEqCtx_x3f_1428_; lean_object* v_synthPendingDepth_1429_; lean_object* v_customCanUnfoldPredicate_x3f_1430_; uint8_t v_univApprox_1431_; uint8_t v_inTypeClassResolution_1432_; uint8_t v_cacheInferType_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; 
v_keyedConfig_1424_ = lean_ctor_get(v___y_1419_, 0);
v_trackZetaDelta_1425_ = lean_ctor_get_uint8(v___y_1419_, sizeof(void*)*7);
v_zetaDeltaSet_1426_ = lean_ctor_get(v___y_1419_, 1);
v_localInstances_1427_ = lean_ctor_get(v___y_1419_, 3);
v_defEqCtx_x3f_1428_ = lean_ctor_get(v___y_1419_, 4);
v_synthPendingDepth_1429_ = lean_ctor_get(v___y_1419_, 5);
v_customCanUnfoldPredicate_x3f_1430_ = lean_ctor_get(v___y_1419_, 6);
v_univApprox_1431_ = lean_ctor_get_uint8(v___y_1419_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1432_ = lean_ctor_get_uint8(v___y_1419_, sizeof(void*)*7 + 2);
v_cacheInferType_1433_ = lean_ctor_get_uint8(v___y_1419_, sizeof(void*)*7 + 3);
lean_inc(v_customCanUnfoldPredicate_x3f_1430_);
lean_inc(v_synthPendingDepth_1429_);
lean_inc(v_defEqCtx_x3f_1428_);
lean_inc_ref(v_localInstances_1427_);
lean_inc(v_zetaDeltaSet_1426_);
lean_inc_ref(v_keyedConfig_1424_);
v___x_1434_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1434_, 0, v_keyedConfig_1424_);
lean_ctor_set(v___x_1434_, 1, v_zetaDeltaSet_1426_);
lean_ctor_set(v___x_1434_, 2, v_lctx_1415_);
lean_ctor_set(v___x_1434_, 3, v_localInstances_1427_);
lean_ctor_set(v___x_1434_, 4, v_defEqCtx_x3f_1428_);
lean_ctor_set(v___x_1434_, 5, v_synthPendingDepth_1429_);
lean_ctor_set(v___x_1434_, 6, v_customCanUnfoldPredicate_x3f_1430_);
lean_ctor_set_uint8(v___x_1434_, sizeof(void*)*7, v_trackZetaDelta_1425_);
lean_ctor_set_uint8(v___x_1434_, sizeof(void*)*7 + 1, v_univApprox_1431_);
lean_ctor_set_uint8(v___x_1434_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1432_);
lean_ctor_set_uint8(v___x_1434_, sizeof(void*)*7 + 3, v_cacheInferType_1433_);
lean_inc(v___y_1422_);
lean_inc_ref(v___y_1421_);
lean_inc(v___y_1420_);
lean_inc(v___y_1418_);
lean_inc_ref(v___y_1417_);
v___x_1435_ = lean_apply_7(v_x_1416_, v___y_1417_, v___y_1418_, v___x_1434_, v___y_1420_, v___y_1421_, v___y_1422_, lean_box(0));
if (lean_obj_tag(v___x_1435_) == 0)
{
lean_object* v_a_1436_; lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1443_; 
v_a_1436_ = lean_ctor_get(v___x_1435_, 0);
v_isSharedCheck_1443_ = !lean_is_exclusive(v___x_1435_);
if (v_isSharedCheck_1443_ == 0)
{
v___x_1438_ = v___x_1435_;
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
else
{
lean_inc(v_a_1436_);
lean_dec(v___x_1435_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
lean_object* v___x_1441_; 
if (v_isShared_1439_ == 0)
{
v___x_1441_ = v___x_1438_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v_a_1436_);
v___x_1441_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
return v___x_1441_;
}
}
}
else
{
return v___x_1435_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___redArg___boxed(lean_object* v_lctx_1444_, lean_object* v_x_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_){
_start:
{
lean_object* v_res_1453_; 
v_res_1453_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___redArg(v_lctx_1444_, v_x_1445_, v___y_1446_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_, v___y_1451_);
lean_dec(v___y_1451_);
lean_dec_ref(v___y_1450_);
lean_dec(v___y_1449_);
lean_dec_ref(v___y_1448_);
lean_dec(v___y_1447_);
lean_dec_ref(v___y_1446_);
return v_res_1453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2(lean_object* v_00_u03b1_1454_, lean_object* v_lctx_1455_, lean_object* v_x_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_){
_start:
{
lean_object* v___x_1464_; 
v___x_1464_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___redArg(v_lctx_1455_, v_x_1456_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_);
return v___x_1464_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___boxed(lean_object* v_00_u03b1_1465_, lean_object* v_lctx_1466_, lean_object* v_x_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_){
_start:
{
lean_object* v_res_1475_; 
v_res_1475_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2(v_00_u03b1_1465_, v_lctx_1466_, v_x_1467_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_);
lean_dec(v___y_1473_);
lean_dec_ref(v___y_1472_);
lean_dec(v___y_1471_);
lean_dec_ref(v___y_1470_);
lean_dec(v___y_1469_);
lean_dec_ref(v___y_1468_);
return v_res_1475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg___lam__0(lean_object* v_k_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v_b_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_){
_start:
{
lean_object* v___x_1486_; 
lean_inc(v___y_1484_);
lean_inc_ref(v___y_1483_);
lean_inc(v___y_1482_);
lean_inc_ref(v___y_1481_);
lean_inc(v___y_1479_);
lean_inc_ref(v___y_1478_);
lean_inc_ref(v___y_1477_);
v___x_1486_ = lean_apply_9(v_k_1476_, v_b_1480_, v___y_1477_, v___y_1478_, v___y_1479_, v___y_1481_, v___y_1482_, v___y_1483_, v___y_1484_, lean_box(0));
return v___x_1486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg___lam__0___boxed(lean_object* v_k_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v_b_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_){
_start:
{
lean_object* v_res_1497_; 
v_res_1497_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg___lam__0(v_k_1487_, v___y_1488_, v___y_1489_, v___y_1490_, v_b_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_);
lean_dec(v___y_1495_);
lean_dec_ref(v___y_1494_);
lean_dec(v___y_1493_);
lean_dec_ref(v___y_1492_);
lean_dec(v___y_1490_);
lean_dec_ref(v___y_1489_);
lean_dec_ref(v___y_1488_);
return v_res_1497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg(lean_object* v_name_1498_, lean_object* v_type_1499_, lean_object* v_val_1500_, lean_object* v_k_1501_, uint8_t v_nondep_1502_, uint8_t v_kind_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_){
_start:
{
lean_object* v___f_1512_; lean_object* v___x_1513_; 
lean_inc(v___y_1506_);
lean_inc_ref(v___y_1505_);
lean_inc_ref(v___y_1504_);
v___f_1512_ = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1512_, 0, v_k_1501_);
lean_closure_set(v___f_1512_, 1, v___y_1504_);
lean_closure_set(v___f_1512_, 2, v___y_1505_);
lean_closure_set(v___f_1512_, 3, v___y_1506_);
v___x_1513_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1498_, v_type_1499_, v_val_1500_, v___f_1512_, v_nondep_1502_, v_kind_1503_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_);
if (lean_obj_tag(v___x_1513_) == 0)
{
return v___x_1513_;
}
else
{
lean_object* v_a_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1521_; 
v_a_1514_ = lean_ctor_get(v___x_1513_, 0);
v_isSharedCheck_1521_ = !lean_is_exclusive(v___x_1513_);
if (v_isSharedCheck_1521_ == 0)
{
v___x_1516_ = v___x_1513_;
v_isShared_1517_ = v_isSharedCheck_1521_;
goto v_resetjp_1515_;
}
else
{
lean_inc(v_a_1514_);
lean_dec(v___x_1513_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1521_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
lean_object* v___x_1519_; 
if (v_isShared_1517_ == 0)
{
v___x_1519_ = v___x_1516_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v_a_1514_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg___boxed(lean_object* v_name_1522_, lean_object* v_type_1523_, lean_object* v_val_1524_, lean_object* v_k_1525_, lean_object* v_nondep_1526_, lean_object* v_kind_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_){
_start:
{
uint8_t v_nondep_boxed_1536_; uint8_t v_kind_boxed_1537_; lean_object* v_res_1538_; 
v_nondep_boxed_1536_ = lean_unbox(v_nondep_1526_);
v_kind_boxed_1537_ = lean_unbox(v_kind_1527_);
v_res_1538_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg(v_name_1522_, v_type_1523_, v_val_1524_, v_k_1525_, v_nondep_boxed_1536_, v_kind_boxed_1537_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_, v___y_1534_);
lean_dec(v___y_1534_);
lean_dec_ref(v___y_1533_);
lean_dec(v___y_1532_);
lean_dec_ref(v___y_1531_);
lean_dec(v___y_1530_);
lean_dec_ref(v___y_1529_);
lean_dec_ref(v___y_1528_);
return v_res_1538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4(lean_object* v_00_u03b1_1539_, lean_object* v_name_1540_, lean_object* v_type_1541_, lean_object* v_val_1542_, lean_object* v_k_1543_, uint8_t v_nondep_1544_, uint8_t v_kind_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_){
_start:
{
lean_object* v___x_1554_; 
v___x_1554_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg(v_name_1540_, v_type_1541_, v_val_1542_, v_k_1543_, v_nondep_1544_, v_kind_1545_, v___y_1546_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
return v___x_1554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___boxed(lean_object* v_00_u03b1_1555_, lean_object* v_name_1556_, lean_object* v_type_1557_, lean_object* v_val_1558_, lean_object* v_k_1559_, lean_object* v_nondep_1560_, lean_object* v_kind_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_){
_start:
{
uint8_t v_nondep_boxed_1570_; uint8_t v_kind_boxed_1571_; lean_object* v_res_1572_; 
v_nondep_boxed_1570_ = lean_unbox(v_nondep_1560_);
v_kind_boxed_1571_ = lean_unbox(v_kind_1561_);
v_res_1572_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4(v_00_u03b1_1555_, v_name_1556_, v_type_1557_, v_val_1558_, v_k_1559_, v_nondep_boxed_1570_, v_kind_boxed_1571_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_);
lean_dec(v___y_1568_);
lean_dec_ref(v___y_1567_);
lean_dec(v___y_1566_);
lean_dec_ref(v___y_1565_);
lean_dec(v___y_1564_);
lean_dec_ref(v___y_1563_);
lean_dec_ref(v___y_1562_);
return v_res_1572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__0(lean_object* v_value_1573_, lean_object* v___x_1574_, uint8_t v___x_1575_, lean_object* v___x_1576_, lean_object* v___x_1577_, uint8_t v___x_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_){
_start:
{
lean_object* v___x_1586_; 
v___x_1586_ = l_Lean_Elab_Term_elabTermEnsuringType(v_value_1573_, v___x_1574_, v___x_1575_, v___x_1575_, v___x_1576_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_);
if (lean_obj_tag(v___x_1586_) == 0)
{
lean_object* v_a_1587_; uint8_t v___x_1588_; lean_object* v___x_1589_; 
v_a_1587_ = lean_ctor_get(v___x_1586_, 0);
lean_inc(v_a_1587_);
lean_dec_ref_known(v___x_1586_, 1);
v___x_1588_ = 1;
v___x_1589_ = l_Lean_Meta_mkLambdaFVars(v___x_1577_, v_a_1587_, v___x_1578_, v___x_1578_, v___x_1578_, v___x_1575_, v___x_1588_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_);
return v___x_1589_;
}
else
{
return v___x_1586_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__0___boxed(lean_object* v_value_1590_, lean_object* v___x_1591_, lean_object* v___x_1592_, lean_object* v___x_1593_, lean_object* v___x_1594_, lean_object* v___x_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_){
_start:
{
uint8_t v___x_95240__boxed_1603_; uint8_t v___x_95243__boxed_1604_; lean_object* v_res_1605_; 
v___x_95240__boxed_1603_ = lean_unbox(v___x_1592_);
v___x_95243__boxed_1604_ = lean_unbox(v___x_1595_);
v_res_1605_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__0(v_value_1590_, v___x_1591_, v___x_95240__boxed_1603_, v___x_1593_, v___x_1594_, v___x_95243__boxed_1604_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_);
lean_dec(v___y_1601_);
lean_dec_ref(v___y_1600_);
lean_dec(v___y_1599_);
lean_dec_ref(v___y_1598_);
lean_dec(v___y_1597_);
lean_dec_ref(v___y_1596_);
lean_dec_ref(v___x_1594_);
return v_res_1605_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1(size_t v_sz_1606_, size_t v_i_1607_, lean_object* v_bs_1608_){
_start:
{
uint8_t v___x_1609_; 
v___x_1609_ = lean_usize_dec_lt(v_i_1607_, v_sz_1606_);
if (v___x_1609_ == 0)
{
return v_bs_1608_;
}
else
{
lean_object* v_v_1610_; lean_object* v_snd_1611_; lean_object* v___x_1612_; lean_object* v_bs_x27_1613_; size_t v___x_1614_; size_t v___x_1615_; lean_object* v___x_1616_; 
v_v_1610_ = lean_array_uget_borrowed(v_bs_1608_, v_i_1607_);
v_snd_1611_ = lean_ctor_get(v_v_1610_, 1);
lean_inc(v_snd_1611_);
v___x_1612_ = lean_unsigned_to_nat(0u);
v_bs_x27_1613_ = lean_array_uset(v_bs_1608_, v_i_1607_, v___x_1612_);
v___x_1614_ = ((size_t)1ULL);
v___x_1615_ = lean_usize_add(v_i_1607_, v___x_1614_);
v___x_1616_ = lean_array_uset(v_bs_x27_1613_, v_i_1607_, v_snd_1611_);
v_i_1607_ = v___x_1615_;
v_bs_1608_ = v___x_1616_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___boxed(lean_object* v_sz_1618_, lean_object* v_i_1619_, lean_object* v_bs_1620_){
_start:
{
size_t v_sz_boxed_1621_; size_t v_i_boxed_1622_; lean_object* v_res_1623_; 
v_sz_boxed_1621_ = lean_unbox_usize(v_sz_1618_);
lean_dec(v_sz_1618_);
v_i_boxed_1622_ = lean_unbox_usize(v_i_1619_);
lean_dec(v_i_1619_);
v_res_1623_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1(v_sz_boxed_1621_, v_i_boxed_1622_, v_bs_1620_);
return v_res_1623_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3_spec__14___redArg(lean_object* v_x_1624_, lean_object* v_x_1625_, lean_object* v_x_1626_, lean_object* v_x_1627_){
_start:
{
lean_object* v_ks_1628_; lean_object* v_vs_1629_; lean_object* v___x_1631_; uint8_t v_isShared_1632_; uint8_t v_isSharedCheck_1653_; 
v_ks_1628_ = lean_ctor_get(v_x_1624_, 0);
v_vs_1629_ = lean_ctor_get(v_x_1624_, 1);
v_isSharedCheck_1653_ = !lean_is_exclusive(v_x_1624_);
if (v_isSharedCheck_1653_ == 0)
{
v___x_1631_ = v_x_1624_;
v_isShared_1632_ = v_isSharedCheck_1653_;
goto v_resetjp_1630_;
}
else
{
lean_inc(v_vs_1629_);
lean_inc(v_ks_1628_);
lean_dec(v_x_1624_);
v___x_1631_ = lean_box(0);
v_isShared_1632_ = v_isSharedCheck_1653_;
goto v_resetjp_1630_;
}
v_resetjp_1630_:
{
lean_object* v___x_1633_; uint8_t v___x_1634_; 
v___x_1633_ = lean_array_get_size(v_ks_1628_);
v___x_1634_ = lean_nat_dec_lt(v_x_1625_, v___x_1633_);
if (v___x_1634_ == 0)
{
lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1638_; 
lean_dec(v_x_1625_);
v___x_1635_ = lean_array_push(v_ks_1628_, v_x_1626_);
v___x_1636_ = lean_array_push(v_vs_1629_, v_x_1627_);
if (v_isShared_1632_ == 0)
{
lean_ctor_set(v___x_1631_, 1, v___x_1636_);
lean_ctor_set(v___x_1631_, 0, v___x_1635_);
v___x_1638_ = v___x_1631_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1639_; 
v_reuseFailAlloc_1639_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1639_, 0, v___x_1635_);
lean_ctor_set(v_reuseFailAlloc_1639_, 1, v___x_1636_);
v___x_1638_ = v_reuseFailAlloc_1639_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
return v___x_1638_;
}
}
else
{
lean_object* v_k_x27_1640_; uint8_t v___x_1641_; 
v_k_x27_1640_ = lean_array_fget_borrowed(v_ks_1628_, v_x_1625_);
v___x_1641_ = l_Lean_instBEqFVarId_beq(v_x_1626_, v_k_x27_1640_);
if (v___x_1641_ == 0)
{
lean_object* v___x_1643_; 
if (v_isShared_1632_ == 0)
{
v___x_1643_ = v___x_1631_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v_ks_1628_);
lean_ctor_set(v_reuseFailAlloc_1647_, 1, v_vs_1629_);
v___x_1643_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
lean_object* v___x_1644_; lean_object* v___x_1645_; 
v___x_1644_ = lean_unsigned_to_nat(1u);
v___x_1645_ = lean_nat_add(v_x_1625_, v___x_1644_);
lean_dec(v_x_1625_);
v_x_1624_ = v___x_1643_;
v_x_1625_ = v___x_1645_;
goto _start;
}
}
else
{
lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1651_; 
v___x_1648_ = lean_array_fset(v_ks_1628_, v_x_1625_, v_x_1626_);
v___x_1649_ = lean_array_fset(v_vs_1629_, v_x_1625_, v_x_1627_);
lean_dec(v_x_1625_);
if (v_isShared_1632_ == 0)
{
lean_ctor_set(v___x_1631_, 1, v___x_1649_);
lean_ctor_set(v___x_1631_, 0, v___x_1648_);
v___x_1651_ = v___x_1631_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1652_; 
v_reuseFailAlloc_1652_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1652_, 0, v___x_1648_);
lean_ctor_set(v_reuseFailAlloc_1652_, 1, v___x_1649_);
v___x_1651_ = v_reuseFailAlloc_1652_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
return v___x_1651_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3___redArg(lean_object* v_n_1654_, lean_object* v_k_1655_, lean_object* v_v_1656_){
_start:
{
lean_object* v___x_1657_; lean_object* v___x_1658_; 
v___x_1657_ = lean_unsigned_to_nat(0u);
v___x_1658_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3_spec__14___redArg(v_n_1654_, v___x_1657_, v_k_1655_, v_v_1656_);
return v___x_1658_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1659_; 
v___x_1659_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1659_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(lean_object* v_x_1660_, size_t v_x_1661_, size_t v_x_1662_, lean_object* v_x_1663_, lean_object* v_x_1664_){
_start:
{
if (lean_obj_tag(v_x_1660_) == 0)
{
lean_object* v_es_1665_; size_t v___x_1666_; size_t v___x_1667_; lean_object* v_j_1668_; lean_object* v___x_1669_; uint8_t v___x_1670_; 
v_es_1665_ = lean_ctor_get(v_x_1660_, 0);
v___x_1666_ = ((size_t)31ULL);
v___x_1667_ = lean_usize_land(v_x_1661_, v___x_1666_);
v_j_1668_ = lean_usize_to_nat(v___x_1667_);
v___x_1669_ = lean_array_get_size(v_es_1665_);
v___x_1670_ = lean_nat_dec_lt(v_j_1668_, v___x_1669_);
if (v___x_1670_ == 0)
{
lean_dec(v_j_1668_);
lean_dec(v_x_1664_);
lean_dec(v_x_1663_);
return v_x_1660_;
}
else
{
lean_object* v___x_1672_; uint8_t v_isShared_1673_; uint8_t v_isSharedCheck_1709_; 
lean_inc_ref(v_es_1665_);
v_isSharedCheck_1709_ = !lean_is_exclusive(v_x_1660_);
if (v_isSharedCheck_1709_ == 0)
{
lean_object* v_unused_1710_; 
v_unused_1710_ = lean_ctor_get(v_x_1660_, 0);
lean_dec(v_unused_1710_);
v___x_1672_ = v_x_1660_;
v_isShared_1673_ = v_isSharedCheck_1709_;
goto v_resetjp_1671_;
}
else
{
lean_dec(v_x_1660_);
v___x_1672_ = lean_box(0);
v_isShared_1673_ = v_isSharedCheck_1709_;
goto v_resetjp_1671_;
}
v_resetjp_1671_:
{
lean_object* v_v_1674_; lean_object* v___x_1675_; lean_object* v_xs_x27_1676_; lean_object* v___y_1678_; 
v_v_1674_ = lean_array_fget(v_es_1665_, v_j_1668_);
v___x_1675_ = lean_box(0);
v_xs_x27_1676_ = lean_array_fset(v_es_1665_, v_j_1668_, v___x_1675_);
switch(lean_obj_tag(v_v_1674_))
{
case 0:
{
lean_object* v_key_1683_; lean_object* v_val_1684_; lean_object* v___x_1686_; uint8_t v_isShared_1687_; uint8_t v_isSharedCheck_1694_; 
v_key_1683_ = lean_ctor_get(v_v_1674_, 0);
v_val_1684_ = lean_ctor_get(v_v_1674_, 1);
v_isSharedCheck_1694_ = !lean_is_exclusive(v_v_1674_);
if (v_isSharedCheck_1694_ == 0)
{
v___x_1686_ = v_v_1674_;
v_isShared_1687_ = v_isSharedCheck_1694_;
goto v_resetjp_1685_;
}
else
{
lean_inc(v_val_1684_);
lean_inc(v_key_1683_);
lean_dec(v_v_1674_);
v___x_1686_ = lean_box(0);
v_isShared_1687_ = v_isSharedCheck_1694_;
goto v_resetjp_1685_;
}
v_resetjp_1685_:
{
uint8_t v___x_1688_; 
v___x_1688_ = l_Lean_instBEqFVarId_beq(v_x_1663_, v_key_1683_);
if (v___x_1688_ == 0)
{
lean_object* v___x_1689_; lean_object* v___x_1690_; 
lean_del_object(v___x_1686_);
v___x_1689_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1683_, v_val_1684_, v_x_1663_, v_x_1664_);
v___x_1690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1690_, 0, v___x_1689_);
v___y_1678_ = v___x_1690_;
goto v___jp_1677_;
}
else
{
lean_object* v___x_1692_; 
lean_dec(v_val_1684_);
lean_dec(v_key_1683_);
if (v_isShared_1687_ == 0)
{
lean_ctor_set(v___x_1686_, 1, v_x_1664_);
lean_ctor_set(v___x_1686_, 0, v_x_1663_);
v___x_1692_ = v___x_1686_;
goto v_reusejp_1691_;
}
else
{
lean_object* v_reuseFailAlloc_1693_; 
v_reuseFailAlloc_1693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1693_, 0, v_x_1663_);
lean_ctor_set(v_reuseFailAlloc_1693_, 1, v_x_1664_);
v___x_1692_ = v_reuseFailAlloc_1693_;
goto v_reusejp_1691_;
}
v_reusejp_1691_:
{
v___y_1678_ = v___x_1692_;
goto v___jp_1677_;
}
}
}
}
case 1:
{
lean_object* v_node_1695_; lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1707_; 
v_node_1695_ = lean_ctor_get(v_v_1674_, 0);
v_isSharedCheck_1707_ = !lean_is_exclusive(v_v_1674_);
if (v_isSharedCheck_1707_ == 0)
{
v___x_1697_ = v_v_1674_;
v_isShared_1698_ = v_isSharedCheck_1707_;
goto v_resetjp_1696_;
}
else
{
lean_inc(v_node_1695_);
lean_dec(v_v_1674_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1707_;
goto v_resetjp_1696_;
}
v_resetjp_1696_:
{
size_t v___x_1699_; size_t v___x_1700_; size_t v___x_1701_; size_t v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1705_; 
v___x_1699_ = ((size_t)5ULL);
v___x_1700_ = lean_usize_shift_right(v_x_1661_, v___x_1699_);
v___x_1701_ = ((size_t)1ULL);
v___x_1702_ = lean_usize_add(v_x_1662_, v___x_1701_);
v___x_1703_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(v_node_1695_, v___x_1700_, v___x_1702_, v_x_1663_, v_x_1664_);
if (v_isShared_1698_ == 0)
{
lean_ctor_set(v___x_1697_, 0, v___x_1703_);
v___x_1705_ = v___x_1697_;
goto v_reusejp_1704_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v___x_1703_);
v___x_1705_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1704_;
}
v_reusejp_1704_:
{
v___y_1678_ = v___x_1705_;
goto v___jp_1677_;
}
}
}
default: 
{
lean_object* v___x_1708_; 
v___x_1708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1708_, 0, v_x_1663_);
lean_ctor_set(v___x_1708_, 1, v_x_1664_);
v___y_1678_ = v___x_1708_;
goto v___jp_1677_;
}
}
v___jp_1677_:
{
lean_object* v___x_1679_; lean_object* v___x_1681_; 
v___x_1679_ = lean_array_fset(v_xs_x27_1676_, v_j_1668_, v___y_1678_);
lean_dec(v_j_1668_);
if (v_isShared_1673_ == 0)
{
lean_ctor_set(v___x_1672_, 0, v___x_1679_);
v___x_1681_ = v___x_1672_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v___x_1679_);
v___x_1681_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
return v___x_1681_;
}
}
}
}
}
else
{
lean_object* v_ks_1711_; lean_object* v_vs_1712_; lean_object* v___x_1714_; uint8_t v_isShared_1715_; uint8_t v_isSharedCheck_1730_; 
v_ks_1711_ = lean_ctor_get(v_x_1660_, 0);
v_vs_1712_ = lean_ctor_get(v_x_1660_, 1);
v_isSharedCheck_1730_ = !lean_is_exclusive(v_x_1660_);
if (v_isSharedCheck_1730_ == 0)
{
v___x_1714_ = v_x_1660_;
v_isShared_1715_ = v_isSharedCheck_1730_;
goto v_resetjp_1713_;
}
else
{
lean_inc(v_vs_1712_);
lean_inc(v_ks_1711_);
lean_dec(v_x_1660_);
v___x_1714_ = lean_box(0);
v_isShared_1715_ = v_isSharedCheck_1730_;
goto v_resetjp_1713_;
}
v_resetjp_1713_:
{
lean_object* v___x_1717_; 
if (v_isShared_1715_ == 0)
{
v___x_1717_ = v___x_1714_;
goto v_reusejp_1716_;
}
else
{
lean_object* v_reuseFailAlloc_1729_; 
v_reuseFailAlloc_1729_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1729_, 0, v_ks_1711_);
lean_ctor_set(v_reuseFailAlloc_1729_, 1, v_vs_1712_);
v___x_1717_ = v_reuseFailAlloc_1729_;
goto v_reusejp_1716_;
}
v_reusejp_1716_:
{
lean_object* v_newNode_1718_; size_t v___x_1719_; uint8_t v___x_1720_; 
v_newNode_1718_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3___redArg(v___x_1717_, v_x_1663_, v_x_1664_);
v___x_1719_ = ((size_t)7ULL);
v___x_1720_ = lean_usize_dec_le(v___x_1719_, v_x_1662_);
if (v___x_1720_ == 0)
{
lean_object* v___x_1721_; lean_object* v___x_1722_; uint8_t v___x_1723_; 
v___x_1721_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1718_);
v___x_1722_ = lean_unsigned_to_nat(4u);
v___x_1723_ = lean_nat_dec_lt(v___x_1721_, v___x_1722_);
lean_dec(v___x_1721_);
if (v___x_1723_ == 0)
{
lean_object* v_ks_1724_; lean_object* v_vs_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; 
v_ks_1724_ = lean_ctor_get(v_newNode_1718_, 0);
lean_inc_ref(v_ks_1724_);
v_vs_1725_ = lean_ctor_get(v_newNode_1718_, 1);
lean_inc_ref(v_vs_1725_);
lean_dec_ref(v_newNode_1718_);
v___x_1726_ = lean_unsigned_to_nat(0u);
v___x_1727_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__0);
v___x_1728_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___redArg(v_x_1662_, v_ks_1724_, v_vs_1725_, v___x_1726_, v___x_1727_);
lean_dec_ref(v_vs_1725_);
lean_dec_ref(v_ks_1724_);
return v___x_1728_;
}
else
{
return v_newNode_1718_;
}
}
else
{
return v_newNode_1718_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___redArg(size_t v_depth_1731_, lean_object* v_keys_1732_, lean_object* v_vals_1733_, lean_object* v_i_1734_, lean_object* v_entries_1735_){
_start:
{
lean_object* v___x_1736_; uint8_t v___x_1737_; 
v___x_1736_ = lean_array_get_size(v_keys_1732_);
v___x_1737_ = lean_nat_dec_lt(v_i_1734_, v___x_1736_);
if (v___x_1737_ == 0)
{
lean_dec(v_i_1734_);
return v_entries_1735_;
}
else
{
lean_object* v_k_1738_; lean_object* v_v_1739_; uint64_t v___x_1740_; size_t v_h_1741_; size_t v___x_1742_; lean_object* v___x_1743_; size_t v___x_1744_; size_t v___x_1745_; size_t v___x_1746_; size_t v_h_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; 
v_k_1738_ = lean_array_fget_borrowed(v_keys_1732_, v_i_1734_);
v_v_1739_ = lean_array_fget_borrowed(v_vals_1733_, v_i_1734_);
v___x_1740_ = l_Lean_instHashableFVarId_hash(v_k_1738_);
v_h_1741_ = lean_uint64_to_usize(v___x_1740_);
v___x_1742_ = ((size_t)5ULL);
v___x_1743_ = lean_unsigned_to_nat(1u);
v___x_1744_ = ((size_t)1ULL);
v___x_1745_ = lean_usize_sub(v_depth_1731_, v___x_1744_);
v___x_1746_ = lean_usize_mul(v___x_1742_, v___x_1745_);
v_h_1747_ = lean_usize_shift_right(v_h_1741_, v___x_1746_);
v___x_1748_ = lean_nat_add(v_i_1734_, v___x_1743_);
lean_dec(v_i_1734_);
lean_inc(v_v_1739_);
lean_inc(v_k_1738_);
v___x_1749_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(v_entries_1735_, v_h_1747_, v_depth_1731_, v_k_1738_, v_v_1739_);
v_i_1734_ = v___x_1748_;
v_entries_1735_ = v___x_1749_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___redArg___boxed(lean_object* v_depth_1751_, lean_object* v_keys_1752_, lean_object* v_vals_1753_, lean_object* v_i_1754_, lean_object* v_entries_1755_){
_start:
{
size_t v_depth_boxed_1756_; lean_object* v_res_1757_; 
v_depth_boxed_1756_ = lean_unbox_usize(v_depth_1751_);
lean_dec(v_depth_1751_);
v_res_1757_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___redArg(v_depth_boxed_1756_, v_keys_1752_, v_vals_1753_, v_i_1754_, v_entries_1755_);
lean_dec_ref(v_vals_1753_);
lean_dec_ref(v_keys_1752_);
return v_res_1757_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___boxed(lean_object* v_x_1758_, lean_object* v_x_1759_, lean_object* v_x_1760_, lean_object* v_x_1761_, lean_object* v_x_1762_){
_start:
{
size_t v_x_95375__boxed_1763_; size_t v_x_95376__boxed_1764_; lean_object* v_res_1765_; 
v_x_95375__boxed_1763_ = lean_unbox_usize(v_x_1759_);
lean_dec(v_x_1759_);
v_x_95376__boxed_1764_ = lean_unbox_usize(v_x_1760_);
lean_dec(v_x_1760_);
v_res_1765_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(v_x_1758_, v_x_95375__boxed_1763_, v_x_95376__boxed_1764_, v_x_1761_, v_x_1762_);
return v_res_1765_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0___redArg(lean_object* v_x_1766_, lean_object* v_x_1767_, lean_object* v_x_1768_){
_start:
{
uint64_t v___x_1769_; size_t v___x_1770_; size_t v___x_1771_; lean_object* v___x_1772_; 
v___x_1769_ = l_Lean_instHashableFVarId_hash(v_x_1767_);
v___x_1770_ = lean_uint64_to_usize(v___x_1769_);
v___x_1771_ = ((size_t)1ULL);
v___x_1772_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(v_x_1766_, v___x_1770_, v___x_1771_, v_x_1767_, v_x_1768_);
return v___x_1772_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3(lean_object* v_as_1773_, size_t v_i_1774_, size_t v_stop_1775_, lean_object* v_b_1776_){
_start:
{
lean_object* v___y_1778_; uint8_t v___x_1782_; 
v___x_1782_ = lean_usize_dec_eq(v_i_1774_, v_stop_1775_);
if (v___x_1782_ == 0)
{
lean_object* v_fvarIdToDecl_1783_; lean_object* v_decls_1784_; lean_object* v_auxDeclToFullName_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; 
v_fvarIdToDecl_1783_ = lean_ctor_get(v_b_1776_, 0);
v_decls_1784_ = lean_ctor_get(v_b_1776_, 1);
v_auxDeclToFullName_1785_ = lean_ctor_get(v_b_1776_, 2);
v___x_1786_ = lean_array_uget_borrowed(v_as_1773_, v_i_1774_);
v___x_1787_ = l_Lean_Expr_fvarId_x21(v___x_1786_);
lean_inc_ref(v_b_1776_);
v___x_1788_ = lean_local_ctx_find(v_b_1776_, v___x_1787_);
if (lean_obj_tag(v___x_1788_) == 0)
{
v___y_1778_ = v_b_1776_;
goto v___jp_1777_;
}
else
{
lean_object* v___x_1790_; uint8_t v_isShared_1791_; uint8_t v_isSharedCheck_1815_; 
lean_inc(v_auxDeclToFullName_1785_);
lean_inc_ref(v_decls_1784_);
lean_inc_ref(v_fvarIdToDecl_1783_);
v_isSharedCheck_1815_ = !lean_is_exclusive(v_b_1776_);
if (v_isSharedCheck_1815_ == 0)
{
lean_object* v_unused_1816_; lean_object* v_unused_1817_; lean_object* v_unused_1818_; 
v_unused_1816_ = lean_ctor_get(v_b_1776_, 2);
lean_dec(v_unused_1816_);
v_unused_1817_ = lean_ctor_get(v_b_1776_, 1);
lean_dec(v_unused_1817_);
v_unused_1818_ = lean_ctor_get(v_b_1776_, 0);
lean_dec(v_unused_1818_);
v___x_1790_ = v_b_1776_;
v_isShared_1791_ = v_isSharedCheck_1815_;
goto v_resetjp_1789_;
}
else
{
lean_dec(v_b_1776_);
v___x_1790_ = lean_box(0);
v_isShared_1791_ = v_isSharedCheck_1815_;
goto v_resetjp_1789_;
}
v_resetjp_1789_:
{
lean_object* v_val_1792_; lean_object* v___x_1794_; uint8_t v_isShared_1795_; uint8_t v_isSharedCheck_1814_; 
v_val_1792_ = lean_ctor_get(v___x_1788_, 0);
v_isSharedCheck_1814_ = !lean_is_exclusive(v___x_1788_);
if (v_isSharedCheck_1814_ == 0)
{
v___x_1794_ = v___x_1788_;
v_isShared_1795_ = v_isSharedCheck_1814_;
goto v_resetjp_1793_;
}
else
{
lean_inc(v_val_1792_);
lean_dec(v___x_1788_);
v___x_1794_ = lean_box(0);
v_isShared_1795_ = v_isSharedCheck_1814_;
goto v_resetjp_1793_;
}
v_resetjp_1793_:
{
lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___y_1800_; lean_object* v___y_1801_; lean_object* v___y_1810_; lean_object* v_fvarId_1813_; 
v___x_1796_ = l_Lean_LocalDecl_type(v_val_1792_);
v___x_1797_ = l_Lean_Expr_cleanupAnnotations(v___x_1796_);
lean_dec_ref(v___x_1796_);
v___x_1798_ = l_Lean_LocalDecl_setType(v_val_1792_, v___x_1797_);
v_fvarId_1813_ = lean_ctor_get(v___x_1798_, 1);
lean_inc(v_fvarId_1813_);
v___y_1810_ = v_fvarId_1813_;
goto v___jp_1809_;
v___jp_1799_:
{
lean_object* v___x_1803_; 
if (v_isShared_1795_ == 0)
{
lean_ctor_set(v___x_1794_, 0, v___x_1798_);
v___x_1803_ = v___x_1794_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1808_; 
v_reuseFailAlloc_1808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1808_, 0, v___x_1798_);
v___x_1803_ = v_reuseFailAlloc_1808_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
lean_object* v___x_1804_; lean_object* v___x_1806_; 
v___x_1804_ = l_Lean_PersistentArray_set___redArg(v_decls_1784_, v___y_1801_, v___x_1803_);
lean_dec(v___y_1801_);
if (v_isShared_1791_ == 0)
{
lean_ctor_set(v___x_1790_, 1, v___x_1804_);
lean_ctor_set(v___x_1790_, 0, v___y_1800_);
v___x_1806_ = v___x_1790_;
goto v_reusejp_1805_;
}
else
{
lean_object* v_reuseFailAlloc_1807_; 
v_reuseFailAlloc_1807_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1807_, 0, v___y_1800_);
lean_ctor_set(v_reuseFailAlloc_1807_, 1, v___x_1804_);
lean_ctor_set(v_reuseFailAlloc_1807_, 2, v_auxDeclToFullName_1785_);
v___x_1806_ = v_reuseFailAlloc_1807_;
goto v_reusejp_1805_;
}
v_reusejp_1805_:
{
v___y_1778_ = v___x_1806_;
goto v___jp_1777_;
}
}
}
v___jp_1809_:
{
lean_object* v___x_1811_; lean_object* v_index_1812_; 
lean_inc_ref(v___x_1798_);
v___x_1811_ = l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0___redArg(v_fvarIdToDecl_1783_, v___y_1810_, v___x_1798_);
v_index_1812_ = lean_ctor_get(v___x_1798_, 0);
lean_inc(v_index_1812_);
v___y_1800_ = v___x_1811_;
v___y_1801_ = v_index_1812_;
goto v___jp_1799_;
}
}
}
}
}
else
{
return v_b_1776_;
}
v___jp_1777_:
{
size_t v___x_1779_; size_t v___x_1780_; 
v___x_1779_ = ((size_t)1ULL);
v___x_1780_ = lean_usize_add(v_i_1774_, v___x_1779_);
v_i_1774_ = v___x_1780_;
v_b_1776_ = v___y_1778_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3___boxed(lean_object* v_as_1819_, lean_object* v_i_1820_, lean_object* v_stop_1821_, lean_object* v_b_1822_){
_start:
{
size_t v_i_boxed_1823_; size_t v_stop_boxed_1824_; lean_object* v_res_1825_; 
v_i_boxed_1823_ = lean_unbox_usize(v_i_1820_);
lean_dec(v_i_1820_);
v_stop_boxed_1824_ = lean_unbox_usize(v_stop_1821_);
lean_dec(v_stop_1821_);
v_res_1825_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3(v_as_1819_, v_i_boxed_1823_, v_stop_boxed_1824_, v_b_1822_);
lean_dec_ref(v_as_1819_);
return v_res_1825_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1827_; lean_object* v___x_1828_; 
v___x_1827_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__0));
v___x_1828_ = l_Lean_stringToMessageData(v___x_1827_);
return v___x_1828_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1830_; lean_object* v___x_1831_; 
v___x_1830_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__2));
v___x_1831_ = l_Lean_stringToMessageData(v___x_1830_);
return v___x_1831_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__5(void){
_start:
{
lean_object* v___x_1833_; lean_object* v___x_1834_; 
v___x_1833_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__4));
v___x_1834_ = l_Lean_stringToMessageData(v___x_1833_);
return v___x_1834_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1(lean_object* v_type_1837_, lean_object* v_value_1838_, uint8_t v___x_1839_, uint8_t v___x_1840_, lean_object* v___x_1841_, uint8_t v___y_1842_, lean_object* v_xs_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_){
_start:
{
size_t v_sz_1851_; size_t v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; uint8_t v___x_1855_; lean_object* v___x_1856_; 
v_sz_1851_ = lean_array_size(v_xs_1843_);
v___x_1852_ = ((size_t)0ULL);
v___x_1853_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1(v_sz_1851_, v___x_1852_, v_xs_1843_);
lean_inc(v_type_1837_);
v___x_1854_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabType___boxed), 8, 1);
lean_closure_set(v___x_1854_, 0, v_type_1837_);
v___x_1855_ = 2;
v___x_1856_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___x_1854_, v___x_1855_, v___y_1844_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_, v___y_1849_);
if (lean_obj_tag(v___x_1856_) == 0)
{
lean_object* v_a_1857_; lean_object* v___y_1859_; lean_object* v___y_1895_; 
v_a_1857_ = lean_ctor_get(v___x_1856_, 0);
lean_inc(v_a_1857_);
lean_dec_ref_known(v___x_1856_, 1);
if (v___y_1842_ == 0)
{
lean_object* v___x_1928_; 
v___x_1928_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
v___y_1895_ = v___x_1928_;
goto v___jp_1894_;
}
else
{
lean_object* v___x_1929_; 
v___x_1929_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__7));
v___y_1895_ = v___x_1929_;
goto v___jp_1894_;
}
v___jp_1858_:
{
lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___f_1864_; lean_object* v___x_1865_; 
lean_inc(v_a_1857_);
v___x_1860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1860_, 0, v_a_1857_);
v___x_1861_ = lean_box(0);
v___x_1862_ = lean_box(v___x_1839_);
v___x_1863_ = lean_box(v___x_1840_);
lean_inc_ref(v___x_1853_);
v___f_1864_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__0___boxed), 13, 6);
lean_closure_set(v___f_1864_, 0, v_value_1838_);
lean_closure_set(v___f_1864_, 1, v___x_1860_);
lean_closure_set(v___f_1864_, 2, v___x_1862_);
lean_closure_set(v___f_1864_, 3, v___x_1861_);
lean_closure_set(v___f_1864_, 4, v___x_1853_);
lean_closure_set(v___f_1864_, 5, v___x_1863_);
v___x_1865_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___redArg(v___y_1859_, v___f_1864_, v___y_1844_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_, v___y_1849_);
if (lean_obj_tag(v___x_1865_) == 0)
{
lean_object* v_a_1866_; uint8_t v___x_1867_; lean_object* v___x_1868_; 
v_a_1866_ = lean_ctor_get(v___x_1865_, 0);
lean_inc(v_a_1866_);
lean_dec_ref_known(v___x_1865_, 1);
v___x_1867_ = 1;
v___x_1868_ = l_Lean_Meta_mkForallFVars(v___x_1853_, v_a_1857_, v___x_1840_, v___x_1839_, v___x_1839_, v___x_1867_, v___y_1846_, v___y_1847_, v___y_1848_, v___y_1849_);
lean_dec_ref(v___x_1853_);
if (lean_obj_tag(v___x_1868_) == 0)
{
lean_object* v_a_1869_; lean_object* v___x_1871_; uint8_t v_isShared_1872_; uint8_t v_isSharedCheck_1877_; 
v_a_1869_ = lean_ctor_get(v___x_1868_, 0);
v_isSharedCheck_1877_ = !lean_is_exclusive(v___x_1868_);
if (v_isSharedCheck_1877_ == 0)
{
v___x_1871_ = v___x_1868_;
v_isShared_1872_ = v_isSharedCheck_1877_;
goto v_resetjp_1870_;
}
else
{
lean_inc(v_a_1869_);
lean_dec(v___x_1868_);
v___x_1871_ = lean_box(0);
v_isShared_1872_ = v_isSharedCheck_1877_;
goto v_resetjp_1870_;
}
v_resetjp_1870_:
{
lean_object* v___x_1873_; lean_object* v___x_1875_; 
v___x_1873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1873_, 0, v_a_1869_);
lean_ctor_set(v___x_1873_, 1, v_a_1866_);
if (v_isShared_1872_ == 0)
{
lean_ctor_set(v___x_1871_, 0, v___x_1873_);
v___x_1875_ = v___x_1871_;
goto v_reusejp_1874_;
}
else
{
lean_object* v_reuseFailAlloc_1876_; 
v_reuseFailAlloc_1876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1876_, 0, v___x_1873_);
v___x_1875_ = v_reuseFailAlloc_1876_;
goto v_reusejp_1874_;
}
v_reusejp_1874_:
{
return v___x_1875_;
}
}
}
else
{
lean_object* v_a_1878_; lean_object* v___x_1880_; uint8_t v_isShared_1881_; uint8_t v_isSharedCheck_1885_; 
lean_dec(v_a_1866_);
v_a_1878_ = lean_ctor_get(v___x_1868_, 0);
v_isSharedCheck_1885_ = !lean_is_exclusive(v___x_1868_);
if (v_isSharedCheck_1885_ == 0)
{
v___x_1880_ = v___x_1868_;
v_isShared_1881_ = v_isSharedCheck_1885_;
goto v_resetjp_1879_;
}
else
{
lean_inc(v_a_1878_);
lean_dec(v___x_1868_);
v___x_1880_ = lean_box(0);
v_isShared_1881_ = v_isSharedCheck_1885_;
goto v_resetjp_1879_;
}
v_resetjp_1879_:
{
lean_object* v___x_1883_; 
if (v_isShared_1881_ == 0)
{
v___x_1883_ = v___x_1880_;
goto v_reusejp_1882_;
}
else
{
lean_object* v_reuseFailAlloc_1884_; 
v_reuseFailAlloc_1884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1884_, 0, v_a_1878_);
v___x_1883_ = v_reuseFailAlloc_1884_;
goto v_reusejp_1882_;
}
v_reusejp_1882_:
{
return v___x_1883_;
}
}
}
}
else
{
lean_object* v_a_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1893_; 
lean_dec(v_a_1857_);
lean_dec_ref(v___x_1853_);
v_a_1886_ = lean_ctor_get(v___x_1865_, 0);
v_isSharedCheck_1893_ = !lean_is_exclusive(v___x_1865_);
if (v_isSharedCheck_1893_ == 0)
{
v___x_1888_ = v___x_1865_;
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_a_1886_);
lean_dec(v___x_1865_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v___x_1891_; 
if (v_isShared_1889_ == 0)
{
v___x_1891_ = v___x_1888_;
goto v_reusejp_1890_;
}
else
{
lean_object* v_reuseFailAlloc_1892_; 
v_reuseFailAlloc_1892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1892_, 0, v_a_1886_);
v___x_1891_ = v_reuseFailAlloc_1892_;
goto v_reusejp_1890_;
}
v_reusejp_1890_:
{
return v___x_1891_;
}
}
}
}
v___jp_1894_:
{
lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; 
v___x_1896_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__1, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__1_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__1);
lean_inc_ref(v___y_1895_);
v___x_1897_ = l_Lean_stringToMessageData(v___y_1895_);
lean_inc_ref(v___x_1897_);
v___x_1898_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1898_, 0, v___x_1896_);
lean_ctor_set(v___x_1898_, 1, v___x_1897_);
v___x_1899_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__3, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__3_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__3);
v___x_1900_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1900_, 0, v___x_1898_);
lean_ctor_set(v___x_1900_, 1, v___x_1899_);
lean_inc(v_type_1837_);
v___x_1901_ = l_Lean_Elab_Term_registerCustomErrorIfMVar___redArg(v_a_1857_, v_type_1837_, v___x_1900_, v___y_1845_);
if (lean_obj_tag(v___x_1901_) == 0)
{
lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; 
lean_dec_ref_known(v___x_1901_, 1);
v___x_1902_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__5, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__5_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__5);
v___x_1903_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1903_, 0, v___x_1902_);
lean_ctor_set(v___x_1903_, 1, v___x_1897_);
v___x_1904_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1904_, 0, v___x_1903_);
lean_ctor_set(v___x_1904_, 1, v___x_1899_);
v___x_1905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1905_, 0, v___x_1904_);
lean_inc(v_a_1857_);
v___x_1906_ = l_Lean_Elab_Term_registerLevelMVarErrorExprInfo___redArg(v_a_1857_, v_type_1837_, v___x_1905_, v___y_1845_, v___y_1846_);
if (lean_obj_tag(v___x_1906_) == 0)
{
lean_object* v_lctx_1907_; lean_object* v___x_1908_; uint8_t v___x_1909_; 
lean_dec_ref_known(v___x_1906_, 1);
v_lctx_1907_ = lean_ctor_get(v___y_1846_, 2);
v___x_1908_ = lean_array_get_size(v___x_1853_);
v___x_1909_ = lean_nat_dec_lt(v___x_1841_, v___x_1908_);
if (v___x_1909_ == 0)
{
lean_inc_ref(v_lctx_1907_);
v___y_1859_ = v_lctx_1907_;
goto v___jp_1858_;
}
else
{
size_t v___x_1910_; lean_object* v___x_1911_; 
v___x_1910_ = lean_usize_of_nat(v___x_1908_);
lean_inc_ref(v_lctx_1907_);
v___x_1911_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3(v___x_1853_, v___x_1852_, v___x_1910_, v_lctx_1907_);
v___y_1859_ = v___x_1911_;
goto v___jp_1858_;
}
}
else
{
lean_object* v_a_1912_; lean_object* v___x_1914_; uint8_t v_isShared_1915_; uint8_t v_isSharedCheck_1919_; 
lean_dec(v_a_1857_);
lean_dec_ref(v___x_1853_);
lean_dec(v_value_1838_);
v_a_1912_ = lean_ctor_get(v___x_1906_, 0);
v_isSharedCheck_1919_ = !lean_is_exclusive(v___x_1906_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1914_ = v___x_1906_;
v_isShared_1915_ = v_isSharedCheck_1919_;
goto v_resetjp_1913_;
}
else
{
lean_inc(v_a_1912_);
lean_dec(v___x_1906_);
v___x_1914_ = lean_box(0);
v_isShared_1915_ = v_isSharedCheck_1919_;
goto v_resetjp_1913_;
}
v_resetjp_1913_:
{
lean_object* v___x_1917_; 
if (v_isShared_1915_ == 0)
{
v___x_1917_ = v___x_1914_;
goto v_reusejp_1916_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v_a_1912_);
v___x_1917_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1916_;
}
v_reusejp_1916_:
{
return v___x_1917_;
}
}
}
}
else
{
lean_object* v_a_1920_; lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1927_; 
lean_dec_ref(v___x_1897_);
lean_dec(v_a_1857_);
lean_dec_ref(v___x_1853_);
lean_dec(v_value_1838_);
lean_dec(v_type_1837_);
v_a_1920_ = lean_ctor_get(v___x_1901_, 0);
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1901_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1922_ = v___x_1901_;
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
else
{
lean_inc(v_a_1920_);
lean_dec(v___x_1901_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
lean_object* v___x_1925_; 
if (v_isShared_1923_ == 0)
{
v___x_1925_ = v___x_1922_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v_a_1920_);
v___x_1925_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
return v___x_1925_;
}
}
}
}
}
else
{
lean_object* v_a_1930_; lean_object* v___x_1932_; uint8_t v_isShared_1933_; uint8_t v_isSharedCheck_1937_; 
lean_dec_ref(v___x_1853_);
lean_dec(v_value_1838_);
lean_dec(v_type_1837_);
v_a_1930_ = lean_ctor_get(v___x_1856_, 0);
v_isSharedCheck_1937_ = !lean_is_exclusive(v___x_1856_);
if (v_isSharedCheck_1937_ == 0)
{
v___x_1932_ = v___x_1856_;
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
else
{
lean_inc(v_a_1930_);
lean_dec(v___x_1856_);
v___x_1932_ = lean_box(0);
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
v_resetjp_1931_:
{
lean_object* v___x_1935_; 
if (v_isShared_1933_ == 0)
{
v___x_1935_ = v___x_1932_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v_a_1930_);
v___x_1935_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
return v___x_1935_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___boxed(lean_object* v_type_1938_, lean_object* v_value_1939_, lean_object* v___x_1940_, lean_object* v___x_1941_, lean_object* v___x_1942_, lean_object* v___y_1943_, lean_object* v_xs_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_){
_start:
{
uint8_t v___x_95672__boxed_1952_; uint8_t v___x_95673__boxed_1953_; uint8_t v___y_95675__boxed_1954_; lean_object* v_res_1955_; 
v___x_95672__boxed_1952_ = lean_unbox(v___x_1940_);
v___x_95673__boxed_1953_ = lean_unbox(v___x_1941_);
v___y_95675__boxed_1954_ = lean_unbox(v___y_1943_);
v_res_1955_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__1(v_type_1938_, v_value_1939_, v___x_95672__boxed_1952_, v___x_95673__boxed_1953_, v___x_1942_, v___y_95675__boxed_1954_, v_xs_1944_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_, v___y_1949_, v___y_1950_);
lean_dec(v___y_1950_);
lean_dec_ref(v___y_1949_);
lean_dec(v___y_1948_);
lean_dec_ref(v___y_1947_);
lean_dec(v___y_1946_);
lean_dec_ref(v___y_1945_);
lean_dec(v___x_1942_);
return v_res_1955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__2(lean_object* v_val_1956_, lean_object* v_a_1957_, lean_object* v_letOrReassign_1958_, lean_object* v_a_1959_, uint8_t v_zeta_1960_, uint8_t v___y_1961_, lean_object* v_x_1962_, uint8_t v_usedOnly_1963_, lean_object* v_snd_1964_, lean_object* v_h_x27_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_){
_start:
{
lean_object* v___x_1974_; 
lean_inc_ref(v_h_x27_1965_);
v___x_1974_ = l_Lean_Elab_Term_addLocalVarInfo(v_val_1956_, v_h_x27_1965_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
if (lean_obj_tag(v___x_1974_) == 0)
{
lean_object* v___x_1975_; lean_object* v___x_1976_; 
lean_dec_ref_known(v___x_1974_, 1);
v___x_1975_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_1975_, 0, v_a_1957_);
v___x_1976_ = l_Lean_Elab_Do_elabWithReassignments(v_letOrReassign_1958_, v_a_1959_, v___x_1975_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
if (lean_obj_tag(v___x_1976_) == 0)
{
if (v_zeta_1960_ == 0)
{
if (v___y_1961_ == 0)
{
lean_object* v_a_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; uint8_t v___x_1982_; lean_object* v___x_1983_; 
lean_dec_ref(v_snd_1964_);
v_a_1977_ = lean_ctor_get(v___x_1976_, 0);
lean_inc(v_a_1977_);
lean_dec_ref_known(v___x_1976_, 1);
v___x_1978_ = lean_unsigned_to_nat(2u);
v___x_1979_ = lean_mk_empty_array_with_capacity(v___x_1978_);
v___x_1980_ = lean_array_push(v___x_1979_, v_x_1962_);
v___x_1981_ = lean_array_push(v___x_1980_, v_h_x27_1965_);
v___x_1982_ = 1;
v___x_1983_ = l_Lean_Meta_mkLetFVars(v___x_1981_, v_a_1977_, v_usedOnly_1963_, v___y_1961_, v___x_1982_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
lean_dec_ref(v___x_1981_);
return v___x_1983_;
}
else
{
lean_object* v_a_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; uint8_t v___x_1989_; lean_object* v___x_1990_; 
v_a_1984_ = lean_ctor_get(v___x_1976_, 0);
lean_inc(v_a_1984_);
lean_dec_ref_known(v___x_1976_, 1);
v___x_1985_ = lean_unsigned_to_nat(2u);
v___x_1986_ = lean_mk_empty_array_with_capacity(v___x_1985_);
v___x_1987_ = lean_array_push(v___x_1986_, v_x_1962_);
v___x_1988_ = lean_array_push(v___x_1987_, v_h_x27_1965_);
v___x_1989_ = 1;
v___x_1990_ = l_Lean_Meta_mkLambdaFVars(v___x_1988_, v_a_1984_, v_zeta_1960_, v___y_1961_, v_zeta_1960_, v___y_1961_, v___x_1989_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
lean_dec_ref(v___x_1988_);
if (lean_obj_tag(v___x_1990_) == 0)
{
lean_object* v_a_1991_; lean_object* v___x_1992_; 
v_a_1991_ = lean_ctor_get(v___x_1990_, 0);
lean_inc(v_a_1991_);
lean_dec_ref_known(v___x_1990_, 1);
lean_inc_ref(v_snd_1964_);
v___x_1992_ = l_Lean_Meta_mkEqRefl(v_snd_1964_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
if (lean_obj_tag(v___x_1992_) == 0)
{
lean_object* v_a_1993_; lean_object* v___x_1995_; uint8_t v_isShared_1996_; uint8_t v_isSharedCheck_2001_; 
v_a_1993_ = lean_ctor_get(v___x_1992_, 0);
v_isSharedCheck_2001_ = !lean_is_exclusive(v___x_1992_);
if (v_isSharedCheck_2001_ == 0)
{
v___x_1995_ = v___x_1992_;
v_isShared_1996_ = v_isSharedCheck_2001_;
goto v_resetjp_1994_;
}
else
{
lean_inc(v_a_1993_);
lean_dec(v___x_1992_);
v___x_1995_ = lean_box(0);
v_isShared_1996_ = v_isSharedCheck_2001_;
goto v_resetjp_1994_;
}
v_resetjp_1994_:
{
lean_object* v___x_1997_; lean_object* v___x_1999_; 
v___x_1997_ = l_Lean_mkAppB(v_a_1991_, v_snd_1964_, v_a_1993_);
if (v_isShared_1996_ == 0)
{
lean_ctor_set(v___x_1995_, 0, v___x_1997_);
v___x_1999_ = v___x_1995_;
goto v_reusejp_1998_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v___x_1997_);
v___x_1999_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1998_;
}
v_reusejp_1998_:
{
return v___x_1999_;
}
}
}
else
{
lean_dec(v_a_1991_);
lean_dec_ref(v_snd_1964_);
return v___x_1992_;
}
}
else
{
lean_dec_ref(v_snd_1964_);
return v___x_1990_;
}
}
}
else
{
lean_object* v_a_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; 
v_a_2002_ = lean_ctor_get(v___x_1976_, 0);
lean_inc(v_a_2002_);
lean_dec_ref_known(v___x_1976_, 1);
v___x_2003_ = lean_unsigned_to_nat(2u);
v___x_2004_ = lean_mk_empty_array_with_capacity(v___x_2003_);
lean_inc_ref(v___x_2004_);
v___x_2005_ = lean_array_push(v___x_2004_, v_x_1962_);
v___x_2006_ = lean_array_push(v___x_2005_, v_h_x27_1965_);
v___x_2007_ = l_Lean_Expr_abstractM(v_a_2002_, v___x_2006_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
lean_dec_ref(v___x_2006_);
if (lean_obj_tag(v___x_2007_) == 0)
{
lean_object* v_a_2008_; lean_object* v___x_2009_; 
v_a_2008_ = lean_ctor_get(v___x_2007_, 0);
lean_inc(v_a_2008_);
lean_dec_ref_known(v___x_2007_, 1);
lean_inc_ref(v_snd_1964_);
v___x_2009_ = l_Lean_Meta_mkEqRefl(v_snd_1964_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
if (lean_obj_tag(v___x_2009_) == 0)
{
lean_object* v_a_2010_; lean_object* v___x_2012_; uint8_t v_isShared_2013_; uint8_t v_isSharedCheck_2020_; 
v_a_2010_ = lean_ctor_get(v___x_2009_, 0);
v_isSharedCheck_2020_ = !lean_is_exclusive(v___x_2009_);
if (v_isSharedCheck_2020_ == 0)
{
v___x_2012_ = v___x_2009_;
v_isShared_2013_ = v_isSharedCheck_2020_;
goto v_resetjp_2011_;
}
else
{
lean_inc(v_a_2010_);
lean_dec(v___x_2009_);
v___x_2012_ = lean_box(0);
v_isShared_2013_ = v_isSharedCheck_2020_;
goto v_resetjp_2011_;
}
v_resetjp_2011_:
{
lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2018_; 
v___x_2014_ = lean_array_push(v___x_2004_, v_snd_1964_);
v___x_2015_ = lean_array_push(v___x_2014_, v_a_2010_);
v___x_2016_ = lean_expr_instantiate_rev(v_a_2008_, v___x_2015_);
lean_dec_ref(v___x_2015_);
lean_dec(v_a_2008_);
if (v_isShared_2013_ == 0)
{
lean_ctor_set(v___x_2012_, 0, v___x_2016_);
v___x_2018_ = v___x_2012_;
goto v_reusejp_2017_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v___x_2016_);
v___x_2018_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2017_;
}
v_reusejp_2017_:
{
return v___x_2018_;
}
}
}
else
{
lean_dec(v_a_2008_);
lean_dec_ref(v___x_2004_);
lean_dec_ref(v_snd_1964_);
return v___x_2009_;
}
}
else
{
lean_dec_ref(v___x_2004_);
lean_dec_ref(v_snd_1964_);
return v___x_2007_;
}
}
}
else
{
lean_dec_ref(v_h_x27_1965_);
lean_dec_ref(v_snd_1964_);
lean_dec_ref(v_x_1962_);
return v___x_1976_;
}
}
else
{
lean_object* v_a_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2028_; 
lean_dec_ref(v_h_x27_1965_);
lean_dec_ref(v_snd_1964_);
lean_dec_ref(v_x_1962_);
lean_dec_ref(v_a_1959_);
lean_dec(v_letOrReassign_1958_);
lean_dec_ref(v_a_1957_);
v_a_2021_ = lean_ctor_get(v___x_1974_, 0);
v_isSharedCheck_2028_ = !lean_is_exclusive(v___x_1974_);
if (v_isSharedCheck_2028_ == 0)
{
v___x_2023_ = v___x_1974_;
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_a_2021_);
lean_dec(v___x_1974_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__2___boxed(lean_object** _args){
lean_object* v_val_2029_ = _args[0];
lean_object* v_a_2030_ = _args[1];
lean_object* v_letOrReassign_2031_ = _args[2];
lean_object* v_a_2032_ = _args[3];
lean_object* v_zeta_2033_ = _args[4];
lean_object* v___y_2034_ = _args[5];
lean_object* v_x_2035_ = _args[6];
lean_object* v_usedOnly_2036_ = _args[7];
lean_object* v_snd_2037_ = _args[8];
lean_object* v_h_x27_2038_ = _args[9];
lean_object* v___y_2039_ = _args[10];
lean_object* v___y_2040_ = _args[11];
lean_object* v___y_2041_ = _args[12];
lean_object* v___y_2042_ = _args[13];
lean_object* v___y_2043_ = _args[14];
lean_object* v___y_2044_ = _args[15];
lean_object* v___y_2045_ = _args[16];
lean_object* v___y_2046_ = _args[17];
_start:
{
uint8_t v_zeta_boxed_2047_; uint8_t v___y_95894__boxed_2048_; uint8_t v_usedOnly_boxed_2049_; lean_object* v_res_2050_; 
v_zeta_boxed_2047_ = lean_unbox(v_zeta_2033_);
v___y_95894__boxed_2048_ = lean_unbox(v___y_2034_);
v_usedOnly_boxed_2049_ = lean_unbox(v_usedOnly_2036_);
v_res_2050_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__2(v_val_2029_, v_a_2030_, v_letOrReassign_2031_, v_a_2032_, v_zeta_boxed_2047_, v___y_95894__boxed_2048_, v_x_2035_, v_usedOnly_boxed_2049_, v_snd_2037_, v_h_x27_2038_, v___y_2039_, v___y_2040_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_);
lean_dec(v___y_2045_);
lean_dec_ref(v___y_2044_);
lean_dec(v___y_2043_);
lean_dec_ref(v___y_2042_);
lean_dec(v___y_2041_);
lean_dec_ref(v___y_2040_);
lean_dec_ref(v___y_2039_);
return v_res_2050_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__3(lean_object* v_id_2051_, lean_object* v_eq_x3f_2052_, lean_object* v_a_2053_, lean_object* v_letOrReassign_2054_, lean_object* v_a_2055_, uint8_t v_zeta_2056_, uint8_t v_usedOnly_2057_, lean_object* v_snd_2058_, uint8_t v___y_2059_, uint8_t v___x_2060_, lean_object* v_x_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_){
_start:
{
lean_object* v___x_2070_; 
lean_inc_ref(v_x_2061_);
v___x_2070_ = l_Lean_Elab_Term_addLocalVarInfo(v_id_2051_, v_x_2061_, v___y_2063_, v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_);
if (lean_obj_tag(v___x_2070_) == 0)
{
lean_dec_ref_known(v___x_2070_, 1);
if (lean_obj_tag(v_eq_x3f_2052_) == 0)
{
lean_object* v___x_2071_; lean_object* v___x_2072_; 
v___x_2071_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_2071_, 0, v_a_2053_);
v___x_2072_ = l_Lean_Elab_Do_elabWithReassignments(v_letOrReassign_2054_, v_a_2055_, v___x_2071_, v___y_2062_, v___y_2063_, v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_);
if (lean_obj_tag(v___x_2072_) == 0)
{
if (v_zeta_2056_ == 0)
{
lean_object* v_a_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; uint8_t v___x_2077_; lean_object* v___x_2078_; 
lean_dec_ref(v_snd_2058_);
v_a_2073_ = lean_ctor_get(v___x_2072_, 0);
lean_inc(v_a_2073_);
lean_dec_ref_known(v___x_2072_, 1);
v___x_2074_ = lean_unsigned_to_nat(1u);
v___x_2075_ = lean_mk_empty_array_with_capacity(v___x_2074_);
v___x_2076_ = lean_array_push(v___x_2075_, v_x_2061_);
v___x_2077_ = 1;
v___x_2078_ = l_Lean_Meta_mkLetFVars(v___x_2076_, v_a_2073_, v_usedOnly_2057_, v_zeta_2056_, v___x_2077_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_);
lean_dec_ref(v___x_2076_);
return v___x_2078_;
}
else
{
lean_object* v_a_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; 
v_a_2079_ = lean_ctor_get(v___x_2072_, 0);
lean_inc(v_a_2079_);
lean_dec_ref_known(v___x_2072_, 1);
v___x_2080_ = lean_unsigned_to_nat(1u);
v___x_2081_ = lean_mk_empty_array_with_capacity(v___x_2080_);
v___x_2082_ = lean_array_push(v___x_2081_, v_x_2061_);
v___x_2083_ = l_Lean_Expr_abstractM(v_a_2079_, v___x_2082_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_);
lean_dec_ref(v___x_2082_);
if (lean_obj_tag(v___x_2083_) == 0)
{
lean_object* v_a_2084_; lean_object* v___x_2086_; uint8_t v_isShared_2087_; uint8_t v_isSharedCheck_2092_; 
v_a_2084_ = lean_ctor_get(v___x_2083_, 0);
v_isSharedCheck_2092_ = !lean_is_exclusive(v___x_2083_);
if (v_isSharedCheck_2092_ == 0)
{
v___x_2086_ = v___x_2083_;
v_isShared_2087_ = v_isSharedCheck_2092_;
goto v_resetjp_2085_;
}
else
{
lean_inc(v_a_2084_);
lean_dec(v___x_2083_);
v___x_2086_ = lean_box(0);
v_isShared_2087_ = v_isSharedCheck_2092_;
goto v_resetjp_2085_;
}
v_resetjp_2085_:
{
lean_object* v___x_2088_; lean_object* v___x_2090_; 
v___x_2088_ = lean_expr_instantiate1(v_a_2084_, v_snd_2058_);
lean_dec_ref(v_snd_2058_);
lean_dec(v_a_2084_);
if (v_isShared_2087_ == 0)
{
lean_ctor_set(v___x_2086_, 0, v___x_2088_);
v___x_2090_ = v___x_2086_;
goto v_reusejp_2089_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v___x_2088_);
v___x_2090_ = v_reuseFailAlloc_2091_;
goto v_reusejp_2089_;
}
v_reusejp_2089_:
{
return v___x_2090_;
}
}
}
else
{
lean_dec_ref(v_snd_2058_);
return v___x_2083_;
}
}
}
else
{
lean_dec_ref(v_x_2061_);
lean_dec_ref(v_snd_2058_);
return v___x_2072_;
}
}
else
{
lean_object* v_val_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___f_2097_; lean_object* v___x_2098_; 
v_val_2093_ = lean_ctor_get(v_eq_x3f_2052_, 0);
lean_inc_n(v_val_2093_, 2);
lean_dec_ref_known(v_eq_x3f_2052_, 1);
v___x_2094_ = lean_box(v_zeta_2056_);
v___x_2095_ = lean_box(v___y_2059_);
v___x_2096_ = lean_box(v_usedOnly_2057_);
lean_inc_ref(v_snd_2058_);
lean_inc_ref_n(v_x_2061_, 2);
v___f_2097_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__2___boxed), 18, 9);
lean_closure_set(v___f_2097_, 0, v_val_2093_);
lean_closure_set(v___f_2097_, 1, v_a_2053_);
lean_closure_set(v___f_2097_, 2, v_letOrReassign_2054_);
lean_closure_set(v___f_2097_, 3, v_a_2055_);
lean_closure_set(v___f_2097_, 4, v___x_2094_);
lean_closure_set(v___f_2097_, 5, v___x_2095_);
lean_closure_set(v___f_2097_, 6, v_x_2061_);
lean_closure_set(v___f_2097_, 7, v___x_2096_);
lean_closure_set(v___f_2097_, 8, v_snd_2058_);
v___x_2098_ = l_Lean_Meta_mkEq(v_x_2061_, v_snd_2058_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_);
if (lean_obj_tag(v___x_2098_) == 0)
{
lean_object* v_a_2099_; lean_object* v___x_2100_; 
v_a_2099_ = lean_ctor_get(v___x_2098_, 0);
lean_inc(v_a_2099_);
lean_dec_ref_known(v___x_2098_, 1);
v___x_2100_ = l_Lean_Meta_mkEqRefl(v_x_2061_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_);
if (lean_obj_tag(v___x_2100_) == 0)
{
lean_object* v_a_2101_; lean_object* v___x_2102_; uint8_t v___x_2103_; lean_object* v___x_2104_; 
v_a_2101_ = lean_ctor_get(v___x_2100_, 0);
lean_inc(v_a_2101_);
lean_dec_ref_known(v___x_2100_, 1);
v___x_2102_ = l_Lean_TSyntax_getId(v_val_2093_);
lean_dec(v_val_2093_);
v___x_2103_ = 0;
v___x_2104_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg(v___x_2102_, v_a_2099_, v_a_2101_, v___f_2097_, v___x_2060_, v___x_2103_, v___y_2062_, v___y_2063_, v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_);
return v___x_2104_;
}
else
{
lean_dec(v_a_2099_);
lean_dec_ref(v___f_2097_);
lean_dec(v_val_2093_);
return v___x_2100_;
}
}
else
{
lean_dec_ref(v___f_2097_);
lean_dec(v_val_2093_);
lean_dec_ref(v_x_2061_);
return v___x_2098_;
}
}
}
else
{
lean_object* v_a_2105_; lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2112_; 
lean_dec_ref(v_x_2061_);
lean_dec_ref(v_snd_2058_);
lean_dec_ref(v_a_2055_);
lean_dec(v_letOrReassign_2054_);
lean_dec_ref(v_a_2053_);
lean_dec(v_eq_x3f_2052_);
v_a_2105_ = lean_ctor_get(v___x_2070_, 0);
v_isSharedCheck_2112_ = !lean_is_exclusive(v___x_2070_);
if (v_isSharedCheck_2112_ == 0)
{
v___x_2107_ = v___x_2070_;
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
else
{
lean_inc(v_a_2105_);
lean_dec(v___x_2070_);
v___x_2107_ = lean_box(0);
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
v_resetjp_2106_:
{
lean_object* v___x_2110_; 
if (v_isShared_2108_ == 0)
{
v___x_2110_ = v___x_2107_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v_a_2105_);
v___x_2110_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
return v___x_2110_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__3___boxed(lean_object** _args){
lean_object* v_id_2113_ = _args[0];
lean_object* v_eq_x3f_2114_ = _args[1];
lean_object* v_a_2115_ = _args[2];
lean_object* v_letOrReassign_2116_ = _args[3];
lean_object* v_a_2117_ = _args[4];
lean_object* v_zeta_2118_ = _args[5];
lean_object* v_usedOnly_2119_ = _args[6];
lean_object* v_snd_2120_ = _args[7];
lean_object* v___y_2121_ = _args[8];
lean_object* v___x_2122_ = _args[9];
lean_object* v_x_2123_ = _args[10];
lean_object* v___y_2124_ = _args[11];
lean_object* v___y_2125_ = _args[12];
lean_object* v___y_2126_ = _args[13];
lean_object* v___y_2127_ = _args[14];
lean_object* v___y_2128_ = _args[15];
lean_object* v___y_2129_ = _args[16];
lean_object* v___y_2130_ = _args[17];
lean_object* v___y_2131_ = _args[18];
_start:
{
uint8_t v_zeta_boxed_2132_; uint8_t v_usedOnly_boxed_2133_; uint8_t v___y_96049__boxed_2134_; uint8_t v___x_96050__boxed_2135_; lean_object* v_res_2136_; 
v_zeta_boxed_2132_ = lean_unbox(v_zeta_2118_);
v_usedOnly_boxed_2133_ = lean_unbox(v_usedOnly_2119_);
v___y_96049__boxed_2134_ = lean_unbox(v___y_2121_);
v___x_96050__boxed_2135_ = lean_unbox(v___x_2122_);
v_res_2136_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__3(v_id_2113_, v_eq_x3f_2114_, v_a_2115_, v_letOrReassign_2116_, v_a_2117_, v_zeta_boxed_2132_, v_usedOnly_boxed_2133_, v_snd_2120_, v___y_96049__boxed_2134_, v___x_96050__boxed_2135_, v_x_2123_, v___y_2124_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_, v___y_2129_, v___y_2130_);
lean_dec(v___y_2130_);
lean_dec_ref(v___y_2129_);
lean_dec(v___y_2128_);
lean_dec_ref(v___y_2127_);
lean_dec(v___y_2126_);
lean_dec_ref(v___y_2125_);
lean_dec_ref(v___y_2124_);
return v_res_2136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__4(uint8_t v___x_2137_, lean_object* v_____do__lift_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_){
_start:
{
lean_object* v___x_2147_; lean_object* v___x_2148_; 
v___x_2147_ = l_Lean_SourceInfo_fromRef(v_____do__lift_2138_, v___x_2137_);
v___x_2148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2148_, 0, v___x_2147_);
return v___x_2148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__4___boxed(lean_object* v___x_2149_, lean_object* v_____do__lift_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_){
_start:
{
uint8_t v___x_96175__boxed_2159_; lean_object* v_res_2160_; 
v___x_96175__boxed_2159_ = lean_unbox(v___x_2149_);
v_res_2160_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__4(v___x_96175__boxed_2159_, v_____do__lift_2150_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_);
lean_dec(v___y_2157_);
lean_dec_ref(v___y_2156_);
lean_dec(v___y_2155_);
lean_dec_ref(v___y_2154_);
lean_dec(v___y_2153_);
lean_dec_ref(v___y_2152_);
lean_dec_ref(v___y_2151_);
lean_dec(v_____do__lift_2150_);
return v_res_2160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__5(lean_object* v_term_2161_, lean_object* v___x_2162_, uint8_t v___x_2163_, lean_object* v___x_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_){
_start:
{
lean_object* v___x_2173_; 
v___x_2173_ = l_Lean_Elab_Term_elabTermEnsuringType(v_term_2161_, v___x_2162_, v___x_2163_, v___x_2163_, v___x_2164_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_);
return v___x_2173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__5___boxed(lean_object* v_term_2174_, lean_object* v___x_2175_, lean_object* v___x_2176_, lean_object* v___x_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_){
_start:
{
uint8_t v___x_96210__boxed_2186_; lean_object* v_res_2187_; 
v___x_96210__boxed_2186_ = lean_unbox(v___x_2176_);
v_res_2187_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__5(v_term_2174_, v___x_2175_, v___x_96210__boxed_2186_, v___x_2177_, v___y_2178_, v___y_2179_, v___y_2180_, v___y_2181_, v___y_2182_, v___y_2183_, v___y_2184_);
lean_dec(v___y_2184_);
lean_dec_ref(v___y_2183_);
lean_dec(v___y_2182_);
lean_dec_ref(v___y_2181_);
lean_dec(v___y_2180_);
lean_dec_ref(v___y_2179_);
lean_dec_ref(v___y_2178_);
return v_res_2187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10___redArg___lam__0(lean_object* v_stx_2188_, lean_object* v_output_2189_, lean_object* v_trees_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_){
_start:
{
lean_object* v_lctx_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; 
v_lctx_2198_ = lean_ctor_get(v___y_2193_, 2);
lean_inc_ref(v_lctx_2198_);
v___x_2199_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2199_, 0, v_lctx_2198_);
lean_ctor_set(v___x_2199_, 1, v_stx_2188_);
lean_ctor_set(v___x_2199_, 2, v_output_2189_);
v___x_2200_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2200_, 0, v___x_2199_);
v___x_2201_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2201_, 0, v___x_2200_);
lean_ctor_set(v___x_2201_, 1, v_trees_2190_);
v___x_2202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2202_, 0, v___x_2201_);
return v___x_2202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10___redArg___lam__0___boxed(lean_object* v_stx_2203_, lean_object* v_output_2204_, lean_object* v_trees_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_){
_start:
{
lean_object* v_res_2213_; 
v_res_2213_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10___redArg___lam__0(v_stx_2203_, v_output_2204_, v_trees_2205_, v___y_2206_, v___y_2207_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_);
lean_dec(v___y_2211_);
lean_dec_ref(v___y_2210_);
lean_dec(v___y_2209_);
lean_dec_ref(v___y_2208_);
lean_dec(v___y_2207_);
lean_dec_ref(v___y_2206_);
return v_res_2213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13___redArg___lam__0(lean_object* v___y_2214_, lean_object* v_mkInfoTree_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v_a_2221_, lean_object* v_a_x3f_2222_){
_start:
{
lean_object* v___x_2224_; lean_object* v_infoState_2225_; lean_object* v_trees_2226_; lean_object* v___x_2227_; 
v___x_2224_ = lean_st_ref_get(v___y_2214_);
v_infoState_2225_ = lean_ctor_get(v___x_2224_, 8);
lean_inc_ref(v_infoState_2225_);
lean_dec(v___x_2224_);
v_trees_2226_ = lean_ctor_get(v_infoState_2225_, 2);
lean_inc_ref(v_trees_2226_);
lean_dec_ref(v_infoState_2225_);
lean_inc(v___y_2214_);
lean_inc_ref(v___y_2220_);
lean_inc(v___y_2219_);
lean_inc_ref(v___y_2218_);
lean_inc(v___y_2217_);
lean_inc_ref(v___y_2216_);
v___x_2227_ = lean_apply_8(v_mkInfoTree_2215_, v_trees_2226_, v___y_2216_, v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2214_, lean_box(0));
if (lean_obj_tag(v___x_2227_) == 0)
{
lean_object* v_a_2228_; lean_object* v___x_2230_; uint8_t v_isShared_2231_; uint8_t v_isSharedCheck_2267_; 
v_a_2228_ = lean_ctor_get(v___x_2227_, 0);
v_isSharedCheck_2267_ = !lean_is_exclusive(v___x_2227_);
if (v_isSharedCheck_2267_ == 0)
{
v___x_2230_ = v___x_2227_;
v_isShared_2231_ = v_isSharedCheck_2267_;
goto v_resetjp_2229_;
}
else
{
lean_inc(v_a_2228_);
lean_dec(v___x_2227_);
v___x_2230_ = lean_box(0);
v_isShared_2231_ = v_isSharedCheck_2267_;
goto v_resetjp_2229_;
}
v_resetjp_2229_:
{
lean_object* v___x_2232_; lean_object* v_infoState_2233_; lean_object* v_env_2234_; lean_object* v_nextMacroScope_2235_; lean_object* v_ngen_2236_; lean_object* v_auxDeclNGen_2237_; lean_object* v_traceState_2238_; lean_object* v_cache_2239_; lean_object* v_recordedDeps_2240_; lean_object* v_messages_2241_; lean_object* v_snapshotTasks_2242_; lean_object* v___x_2244_; uint8_t v_isShared_2245_; uint8_t v_isSharedCheck_2266_; 
v___x_2232_ = lean_st_ref_take(v___y_2214_);
v_infoState_2233_ = lean_ctor_get(v___x_2232_, 8);
v_env_2234_ = lean_ctor_get(v___x_2232_, 0);
v_nextMacroScope_2235_ = lean_ctor_get(v___x_2232_, 1);
v_ngen_2236_ = lean_ctor_get(v___x_2232_, 2);
v_auxDeclNGen_2237_ = lean_ctor_get(v___x_2232_, 3);
v_traceState_2238_ = lean_ctor_get(v___x_2232_, 4);
v_cache_2239_ = lean_ctor_get(v___x_2232_, 5);
v_recordedDeps_2240_ = lean_ctor_get(v___x_2232_, 6);
v_messages_2241_ = lean_ctor_get(v___x_2232_, 7);
v_snapshotTasks_2242_ = lean_ctor_get(v___x_2232_, 9);
v_isSharedCheck_2266_ = !lean_is_exclusive(v___x_2232_);
if (v_isSharedCheck_2266_ == 0)
{
v___x_2244_ = v___x_2232_;
v_isShared_2245_ = v_isSharedCheck_2266_;
goto v_resetjp_2243_;
}
else
{
lean_inc(v_snapshotTasks_2242_);
lean_inc(v_infoState_2233_);
lean_inc(v_messages_2241_);
lean_inc(v_recordedDeps_2240_);
lean_inc(v_cache_2239_);
lean_inc(v_traceState_2238_);
lean_inc(v_auxDeclNGen_2237_);
lean_inc(v_ngen_2236_);
lean_inc(v_nextMacroScope_2235_);
lean_inc(v_env_2234_);
lean_dec(v___x_2232_);
v___x_2244_ = lean_box(0);
v_isShared_2245_ = v_isSharedCheck_2266_;
goto v_resetjp_2243_;
}
v_resetjp_2243_:
{
uint8_t v_enabled_2246_; lean_object* v_assignment_2247_; lean_object* v_lazyAssignment_2248_; lean_object* v___x_2250_; uint8_t v_isShared_2251_; uint8_t v_isSharedCheck_2264_; 
v_enabled_2246_ = lean_ctor_get_uint8(v_infoState_2233_, sizeof(void*)*3);
v_assignment_2247_ = lean_ctor_get(v_infoState_2233_, 0);
v_lazyAssignment_2248_ = lean_ctor_get(v_infoState_2233_, 1);
v_isSharedCheck_2264_ = !lean_is_exclusive(v_infoState_2233_);
if (v_isSharedCheck_2264_ == 0)
{
lean_object* v_unused_2265_; 
v_unused_2265_ = lean_ctor_get(v_infoState_2233_, 2);
lean_dec(v_unused_2265_);
v___x_2250_ = v_infoState_2233_;
v_isShared_2251_ = v_isSharedCheck_2264_;
goto v_resetjp_2249_;
}
else
{
lean_inc(v_lazyAssignment_2248_);
lean_inc(v_assignment_2247_);
lean_dec(v_infoState_2233_);
v___x_2250_ = lean_box(0);
v_isShared_2251_ = v_isSharedCheck_2264_;
goto v_resetjp_2249_;
}
v_resetjp_2249_:
{
lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2255_; 
v___x_2252_ = lean_box(0);
v___x_2253_ = l_Lean_PersistentArray_push___redArg(v_a_2221_, v_a_2228_);
if (v_isShared_2251_ == 0)
{
lean_ctor_set(v___x_2250_, 2, v___x_2253_);
v___x_2255_ = v___x_2250_;
goto v_reusejp_2254_;
}
else
{
lean_object* v_reuseFailAlloc_2263_; 
v_reuseFailAlloc_2263_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2263_, 0, v_assignment_2247_);
lean_ctor_set(v_reuseFailAlloc_2263_, 1, v_lazyAssignment_2248_);
lean_ctor_set(v_reuseFailAlloc_2263_, 2, v___x_2253_);
lean_ctor_set_uint8(v_reuseFailAlloc_2263_, sizeof(void*)*3, v_enabled_2246_);
v___x_2255_ = v_reuseFailAlloc_2263_;
goto v_reusejp_2254_;
}
v_reusejp_2254_:
{
lean_object* v___x_2257_; 
if (v_isShared_2245_ == 0)
{
lean_ctor_set(v___x_2244_, 8, v___x_2255_);
v___x_2257_ = v___x_2244_;
goto v_reusejp_2256_;
}
else
{
lean_object* v_reuseFailAlloc_2262_; 
v_reuseFailAlloc_2262_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2262_, 0, v_env_2234_);
lean_ctor_set(v_reuseFailAlloc_2262_, 1, v_nextMacroScope_2235_);
lean_ctor_set(v_reuseFailAlloc_2262_, 2, v_ngen_2236_);
lean_ctor_set(v_reuseFailAlloc_2262_, 3, v_auxDeclNGen_2237_);
lean_ctor_set(v_reuseFailAlloc_2262_, 4, v_traceState_2238_);
lean_ctor_set(v_reuseFailAlloc_2262_, 5, v_cache_2239_);
lean_ctor_set(v_reuseFailAlloc_2262_, 6, v_recordedDeps_2240_);
lean_ctor_set(v_reuseFailAlloc_2262_, 7, v_messages_2241_);
lean_ctor_set(v_reuseFailAlloc_2262_, 8, v___x_2255_);
lean_ctor_set(v_reuseFailAlloc_2262_, 9, v_snapshotTasks_2242_);
v___x_2257_ = v_reuseFailAlloc_2262_;
goto v_reusejp_2256_;
}
v_reusejp_2256_:
{
lean_object* v___x_2258_; lean_object* v___x_2260_; 
v___x_2258_ = lean_st_ref_put(v___y_2214_, v___x_2257_);
if (v_isShared_2231_ == 0)
{
lean_ctor_set(v___x_2230_, 0, v___x_2252_);
v___x_2260_ = v___x_2230_;
goto v_reusejp_2259_;
}
else
{
lean_object* v_reuseFailAlloc_2261_; 
v_reuseFailAlloc_2261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2261_, 0, v___x_2252_);
v___x_2260_ = v_reuseFailAlloc_2261_;
goto v_reusejp_2259_;
}
v_reusejp_2259_:
{
return v___x_2260_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2268_; lean_object* v___x_2270_; uint8_t v_isShared_2271_; uint8_t v_isSharedCheck_2275_; 
lean_dec_ref(v_a_2221_);
v_a_2268_ = lean_ctor_get(v___x_2227_, 0);
v_isSharedCheck_2275_ = !lean_is_exclusive(v___x_2227_);
if (v_isSharedCheck_2275_ == 0)
{
v___x_2270_ = v___x_2227_;
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
else
{
lean_inc(v_a_2268_);
lean_dec(v___x_2227_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13___redArg___lam__0___boxed(lean_object* v___y_2276_, lean_object* v_mkInfoTree_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v_a_2283_, lean_object* v_a_x3f_2284_, lean_object* v___y_2285_){
_start:
{
lean_object* v_res_2286_; 
v_res_2286_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13___redArg___lam__0(v___y_2276_, v_mkInfoTree_2277_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_2282_, v_a_2283_, v_a_x3f_2284_);
lean_dec(v_a_x3f_2284_);
lean_dec_ref(v___y_2282_);
lean_dec(v___y_2281_);
lean_dec_ref(v___y_2280_);
lean_dec(v___y_2279_);
lean_dec_ref(v___y_2278_);
lean_dec(v___y_2276_);
return v_res_2286_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13_spec__18___redArg___closed__0(void){
_start:
{
lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; 
v___x_2287_ = lean_unsigned_to_nat(32u);
v___x_2288_ = lean_mk_empty_array_with_capacity(v___x_2287_);
v___x_2289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2289_, 0, v___x_2288_);
return v___x_2289_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13_spec__18___redArg___closed__1(void){
_start:
{
size_t v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; 
v___x_2290_ = ((size_t)5ULL);
v___x_2291_ = lean_unsigned_to_nat(0u);
v___x_2292_ = lean_unsigned_to_nat(32u);
v___x_2293_ = lean_mk_empty_array_with_capacity(v___x_2292_);
v___x_2294_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13_spec__18___redArg___closed__0, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13_spec__18___redArg___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13_spec__18___redArg___closed__0);
v___x_2295_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2295_, 0, v___x_2294_);
lean_ctor_set(v___x_2295_, 1, v___x_2293_);
lean_ctor_set(v___x_2295_, 2, v___x_2291_);
lean_ctor_set(v___x_2295_, 3, v___x_2291_);
lean_ctor_set_usize(v___x_2295_, 4, v___x_2290_);
return v___x_2295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13_spec__18___redArg(lean_object* v___y_2296_){
_start:
{
lean_object* v___x_2298_; lean_object* v_infoState_2299_; lean_object* v_trees_2300_; lean_object* v___x_2301_; lean_object* v_infoState_2302_; lean_object* v_env_2303_; lean_object* v_nextMacroScope_2304_; lean_object* v_ngen_2305_; lean_object* v_auxDeclNGen_2306_; lean_object* v_traceState_2307_; lean_object* v_cache_2308_; lean_object* v_recordedDeps_2309_; lean_object* v_messages_2310_; lean_object* v_snapshotTasks_2311_; lean_object* v___x_2313_; uint8_t v_isShared_2314_; uint8_t v_isSharedCheck_2332_; 
v___x_2298_ = lean_st_ref_get(v___y_2296_);
v_infoState_2299_ = lean_ctor_get(v___x_2298_, 8);
lean_inc_ref(v_infoState_2299_);
lean_dec(v___x_2298_);
v_trees_2300_ = lean_ctor_get(v_infoState_2299_, 2);
lean_inc_ref(v_trees_2300_);
lean_dec_ref(v_infoState_2299_);
v___x_2301_ = lean_st_ref_take(v___y_2296_);
v_infoState_2302_ = lean_ctor_get(v___x_2301_, 8);
v_env_2303_ = lean_ctor_get(v___x_2301_, 0);
v_nextMacroScope_2304_ = lean_ctor_get(v___x_2301_, 1);
v_ngen_2305_ = lean_ctor_get(v___x_2301_, 2);
v_auxDeclNGen_2306_ = lean_ctor_get(v___x_2301_, 3);
v_traceState_2307_ = lean_ctor_get(v___x_2301_, 4);
v_cache_2308_ = lean_ctor_get(v___x_2301_, 5);
v_recordedDeps_2309_ = lean_ctor_get(v___x_2301_, 6);
v_messages_2310_ = lean_ctor_get(v___x_2301_, 7);
v_snapshotTasks_2311_ = lean_ctor_get(v___x_2301_, 9);
v_isSharedCheck_2332_ = !lean_is_exclusive(v___x_2301_);
if (v_isSharedCheck_2332_ == 0)
{
v___x_2313_ = v___x_2301_;
v_isShared_2314_ = v_isSharedCheck_2332_;
goto v_resetjp_2312_;
}
else
{
lean_inc(v_snapshotTasks_2311_);
lean_inc(v_infoState_2302_);
lean_inc(v_messages_2310_);
lean_inc(v_recordedDeps_2309_);
lean_inc(v_cache_2308_);
lean_inc(v_traceState_2307_);
lean_inc(v_auxDeclNGen_2306_);
lean_inc(v_ngen_2305_);
lean_inc(v_nextMacroScope_2304_);
lean_inc(v_env_2303_);
lean_dec(v___x_2301_);
v___x_2313_ = lean_box(0);
v_isShared_2314_ = v_isSharedCheck_2332_;
goto v_resetjp_2312_;
}
v_resetjp_2312_:
{
uint8_t v_enabled_2315_; lean_object* v_assignment_2316_; lean_object* v_lazyAssignment_2317_; lean_object* v___x_2319_; uint8_t v_isShared_2320_; uint8_t v_isSharedCheck_2330_; 
v_enabled_2315_ = lean_ctor_get_uint8(v_infoState_2302_, sizeof(void*)*3);
v_assignment_2316_ = lean_ctor_get(v_infoState_2302_, 0);
v_lazyAssignment_2317_ = lean_ctor_get(v_infoState_2302_, 1);
v_isSharedCheck_2330_ = !lean_is_exclusive(v_infoState_2302_);
if (v_isSharedCheck_2330_ == 0)
{
lean_object* v_unused_2331_; 
v_unused_2331_ = lean_ctor_get(v_infoState_2302_, 2);
lean_dec(v_unused_2331_);
v___x_2319_ = v_infoState_2302_;
v_isShared_2320_ = v_isSharedCheck_2330_;
goto v_resetjp_2318_;
}
else
{
lean_inc(v_lazyAssignment_2317_);
lean_inc(v_assignment_2316_);
lean_dec(v_infoState_2302_);
v___x_2319_ = lean_box(0);
v_isShared_2320_ = v_isSharedCheck_2330_;
goto v_resetjp_2318_;
}
v_resetjp_2318_:
{
lean_object* v___x_2321_; lean_object* v___x_2323_; 
v___x_2321_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13_spec__18___redArg___closed__1, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13_spec__18___redArg___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13_spec__18___redArg___closed__1);
if (v_isShared_2320_ == 0)
{
lean_ctor_set(v___x_2319_, 2, v___x_2321_);
v___x_2323_ = v___x_2319_;
goto v_reusejp_2322_;
}
else
{
lean_object* v_reuseFailAlloc_2329_; 
v_reuseFailAlloc_2329_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2329_, 0, v_assignment_2316_);
lean_ctor_set(v_reuseFailAlloc_2329_, 1, v_lazyAssignment_2317_);
lean_ctor_set(v_reuseFailAlloc_2329_, 2, v___x_2321_);
lean_ctor_set_uint8(v_reuseFailAlloc_2329_, sizeof(void*)*3, v_enabled_2315_);
v___x_2323_ = v_reuseFailAlloc_2329_;
goto v_reusejp_2322_;
}
v_reusejp_2322_:
{
lean_object* v___x_2325_; 
if (v_isShared_2314_ == 0)
{
lean_ctor_set(v___x_2313_, 8, v___x_2323_);
v___x_2325_ = v___x_2313_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2328_; 
v_reuseFailAlloc_2328_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2328_, 0, v_env_2303_);
lean_ctor_set(v_reuseFailAlloc_2328_, 1, v_nextMacroScope_2304_);
lean_ctor_set(v_reuseFailAlloc_2328_, 2, v_ngen_2305_);
lean_ctor_set(v_reuseFailAlloc_2328_, 3, v_auxDeclNGen_2306_);
lean_ctor_set(v_reuseFailAlloc_2328_, 4, v_traceState_2307_);
lean_ctor_set(v_reuseFailAlloc_2328_, 5, v_cache_2308_);
lean_ctor_set(v_reuseFailAlloc_2328_, 6, v_recordedDeps_2309_);
lean_ctor_set(v_reuseFailAlloc_2328_, 7, v_messages_2310_);
lean_ctor_set(v_reuseFailAlloc_2328_, 8, v___x_2323_);
lean_ctor_set(v_reuseFailAlloc_2328_, 9, v_snapshotTasks_2311_);
v___x_2325_ = v_reuseFailAlloc_2328_;
goto v_reusejp_2324_;
}
v_reusejp_2324_:
{
lean_object* v___x_2326_; lean_object* v___x_2327_; 
v___x_2326_ = lean_st_ref_put(v___y_2296_, v___x_2325_);
v___x_2327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2327_, 0, v_trees_2300_);
return v___x_2327_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13_spec__18___redArg___boxed(lean_object* v___y_2333_, lean_object* v___y_2334_){
_start:
{
lean_object* v_res_2335_; 
v_res_2335_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13_spec__18___redArg(v___y_2333_);
lean_dec(v___y_2333_);
return v_res_2335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13___redArg(lean_object* v_x_2336_, lean_object* v_mkInfoTree_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_){
_start:
{
lean_object* v___x_2345_; lean_object* v_infoState_2346_; uint8_t v_enabled_2347_; 
v___x_2345_ = lean_st_ref_get(v___y_2343_);
v_infoState_2346_ = lean_ctor_get(v___x_2345_, 8);
lean_inc_ref(v_infoState_2346_);
lean_dec(v___x_2345_);
v_enabled_2347_ = lean_ctor_get_uint8(v_infoState_2346_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2346_);
if (v_enabled_2347_ == 0)
{
lean_object* v___x_2348_; 
lean_dec_ref(v_mkInfoTree_2337_);
lean_inc(v___y_2343_);
lean_inc_ref(v___y_2342_);
lean_inc(v___y_2341_);
lean_inc_ref(v___y_2340_);
lean_inc(v___y_2339_);
lean_inc_ref(v___y_2338_);
v___x_2348_ = lean_apply_7(v_x_2336_, v___y_2338_, v___y_2339_, v___y_2340_, v___y_2341_, v___y_2342_, v___y_2343_, lean_box(0));
return v___x_2348_;
}
else
{
lean_object* v___x_2349_; lean_object* v_a_2350_; lean_object* v_r_2351_; 
v___x_2349_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13_spec__18___redArg(v___y_2343_);
v_a_2350_ = lean_ctor_get(v___x_2349_, 0);
lean_inc(v_a_2350_);
lean_dec_ref(v___x_2349_);
lean_inc(v___y_2343_);
lean_inc_ref(v___y_2342_);
lean_inc(v___y_2341_);
lean_inc_ref(v___y_2340_);
lean_inc(v___y_2339_);
lean_inc_ref(v___y_2338_);
v_r_2351_ = lean_apply_7(v_x_2336_, v___y_2338_, v___y_2339_, v___y_2340_, v___y_2341_, v___y_2342_, v___y_2343_, lean_box(0));
if (lean_obj_tag(v_r_2351_) == 0)
{
lean_object* v_a_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2376_; 
v_a_2352_ = lean_ctor_get(v_r_2351_, 0);
v_isSharedCheck_2376_ = !lean_is_exclusive(v_r_2351_);
if (v_isSharedCheck_2376_ == 0)
{
v___x_2354_ = v_r_2351_;
v_isShared_2355_ = v_isSharedCheck_2376_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_a_2352_);
lean_dec(v_r_2351_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2376_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
lean_object* v___x_2357_; 
lean_inc(v_a_2352_);
if (v_isShared_2355_ == 0)
{
lean_ctor_set_tag(v___x_2354_, 1);
v___x_2357_ = v___x_2354_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2375_; 
v_reuseFailAlloc_2375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2375_, 0, v_a_2352_);
v___x_2357_ = v_reuseFailAlloc_2375_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
lean_object* v___x_2358_; 
v___x_2358_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13___redArg___lam__0(v___y_2343_, v_mkInfoTree_2337_, v___y_2338_, v___y_2339_, v___y_2340_, v___y_2341_, v___y_2342_, v_a_2350_, v___x_2357_);
lean_dec_ref(v___x_2357_);
if (lean_obj_tag(v___x_2358_) == 0)
{
lean_object* v___x_2360_; uint8_t v_isShared_2361_; uint8_t v_isSharedCheck_2365_; 
v_isSharedCheck_2365_ = !lean_is_exclusive(v___x_2358_);
if (v_isSharedCheck_2365_ == 0)
{
lean_object* v_unused_2366_; 
v_unused_2366_ = lean_ctor_get(v___x_2358_, 0);
lean_dec(v_unused_2366_);
v___x_2360_ = v___x_2358_;
v_isShared_2361_ = v_isSharedCheck_2365_;
goto v_resetjp_2359_;
}
else
{
lean_dec(v___x_2358_);
v___x_2360_ = lean_box(0);
v_isShared_2361_ = v_isSharedCheck_2365_;
goto v_resetjp_2359_;
}
v_resetjp_2359_:
{
lean_object* v___x_2363_; 
if (v_isShared_2361_ == 0)
{
lean_ctor_set(v___x_2360_, 0, v_a_2352_);
v___x_2363_ = v___x_2360_;
goto v_reusejp_2362_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v_a_2352_);
v___x_2363_ = v_reuseFailAlloc_2364_;
goto v_reusejp_2362_;
}
v_reusejp_2362_:
{
return v___x_2363_;
}
}
}
else
{
lean_object* v_a_2367_; lean_object* v___x_2369_; uint8_t v_isShared_2370_; uint8_t v_isSharedCheck_2374_; 
lean_dec(v_a_2352_);
v_a_2367_ = lean_ctor_get(v___x_2358_, 0);
v_isSharedCheck_2374_ = !lean_is_exclusive(v___x_2358_);
if (v_isSharedCheck_2374_ == 0)
{
v___x_2369_ = v___x_2358_;
v_isShared_2370_ = v_isSharedCheck_2374_;
goto v_resetjp_2368_;
}
else
{
lean_inc(v_a_2367_);
lean_dec(v___x_2358_);
v___x_2369_ = lean_box(0);
v_isShared_2370_ = v_isSharedCheck_2374_;
goto v_resetjp_2368_;
}
v_resetjp_2368_:
{
lean_object* v___x_2372_; 
if (v_isShared_2370_ == 0)
{
v___x_2372_ = v___x_2369_;
goto v_reusejp_2371_;
}
else
{
lean_object* v_reuseFailAlloc_2373_; 
v_reuseFailAlloc_2373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2373_, 0, v_a_2367_);
v___x_2372_ = v_reuseFailAlloc_2373_;
goto v_reusejp_2371_;
}
v_reusejp_2371_:
{
return v___x_2372_;
}
}
}
}
}
}
else
{
lean_object* v_a_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; 
v_a_2377_ = lean_ctor_get(v_r_2351_, 0);
lean_inc(v_a_2377_);
lean_dec_ref_known(v_r_2351_, 1);
v___x_2378_ = lean_box(0);
v___x_2379_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13___redArg___lam__0(v___y_2343_, v_mkInfoTree_2337_, v___y_2338_, v___y_2339_, v___y_2340_, v___y_2341_, v___y_2342_, v_a_2350_, v___x_2378_);
if (lean_obj_tag(v___x_2379_) == 0)
{
lean_object* v___x_2381_; uint8_t v_isShared_2382_; uint8_t v_isSharedCheck_2386_; 
v_isSharedCheck_2386_ = !lean_is_exclusive(v___x_2379_);
if (v_isSharedCheck_2386_ == 0)
{
lean_object* v_unused_2387_; 
v_unused_2387_ = lean_ctor_get(v___x_2379_, 0);
lean_dec(v_unused_2387_);
v___x_2381_ = v___x_2379_;
v_isShared_2382_ = v_isSharedCheck_2386_;
goto v_resetjp_2380_;
}
else
{
lean_dec(v___x_2379_);
v___x_2381_ = lean_box(0);
v_isShared_2382_ = v_isSharedCheck_2386_;
goto v_resetjp_2380_;
}
v_resetjp_2380_:
{
lean_object* v___x_2384_; 
if (v_isShared_2382_ == 0)
{
lean_ctor_set_tag(v___x_2381_, 1);
lean_ctor_set(v___x_2381_, 0, v_a_2377_);
v___x_2384_ = v___x_2381_;
goto v_reusejp_2383_;
}
else
{
lean_object* v_reuseFailAlloc_2385_; 
v_reuseFailAlloc_2385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2385_, 0, v_a_2377_);
v___x_2384_ = v_reuseFailAlloc_2385_;
goto v_reusejp_2383_;
}
v_reusejp_2383_:
{
return v___x_2384_;
}
}
}
else
{
lean_object* v_a_2388_; lean_object* v___x_2390_; uint8_t v_isShared_2391_; uint8_t v_isSharedCheck_2395_; 
lean_dec(v_a_2377_);
v_a_2388_ = lean_ctor_get(v___x_2379_, 0);
v_isSharedCheck_2395_ = !lean_is_exclusive(v___x_2379_);
if (v_isSharedCheck_2395_ == 0)
{
v___x_2390_ = v___x_2379_;
v_isShared_2391_ = v_isSharedCheck_2395_;
goto v_resetjp_2389_;
}
else
{
lean_inc(v_a_2388_);
lean_dec(v___x_2379_);
v___x_2390_ = lean_box(0);
v_isShared_2391_ = v_isSharedCheck_2395_;
goto v_resetjp_2389_;
}
v_resetjp_2389_:
{
lean_object* v___x_2393_; 
if (v_isShared_2391_ == 0)
{
v___x_2393_ = v___x_2390_;
goto v_reusejp_2392_;
}
else
{
lean_object* v_reuseFailAlloc_2394_; 
v_reuseFailAlloc_2394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2394_, 0, v_a_2388_);
v___x_2393_ = v_reuseFailAlloc_2394_;
goto v_reusejp_2392_;
}
v_reusejp_2392_:
{
return v___x_2393_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13___redArg___boxed(lean_object* v_x_2396_, lean_object* v_mkInfoTree_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_){
_start:
{
lean_object* v_res_2405_; 
v_res_2405_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13___redArg(v_x_2396_, v_mkInfoTree_2397_, v___y_2398_, v___y_2399_, v___y_2400_, v___y_2401_, v___y_2402_, v___y_2403_);
lean_dec(v___y_2403_);
lean_dec_ref(v___y_2402_);
lean_dec(v___y_2401_);
lean_dec_ref(v___y_2400_);
lean_dec(v___y_2399_);
lean_dec_ref(v___y_2398_);
return v_res_2405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10___redArg(lean_object* v_stx_2406_, lean_object* v_output_2407_, lean_object* v_x_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_){
_start:
{
lean_object* v___f_2416_; lean_object* v___x_2417_; 
v___f_2416_ = lean_alloc_closure((void*)(l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10___redArg___lam__0___boxed), 10, 2);
lean_closure_set(v___f_2416_, 0, v_stx_2406_);
lean_closure_set(v___f_2416_, 1, v_output_2407_);
v___x_2417_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13___redArg(v_x_2408_, v___f_2416_, v___y_2409_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_, v___y_2414_);
return v___x_2417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10___redArg___boxed(lean_object* v_stx_2418_, lean_object* v_output_2419_, lean_object* v_x_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_){
_start:
{
lean_object* v_res_2428_; 
v_res_2428_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10___redArg(v_stx_2418_, v_output_2419_, v_x_2420_, v___y_2421_, v___y_2422_, v___y_2423_, v___y_2424_, v___y_2425_, v___y_2426_);
lean_dec(v___y_2426_);
lean_dec_ref(v___y_2425_);
lean_dec(v___y_2424_);
lean_dec_ref(v___y_2423_);
lean_dec(v___y_2422_);
lean_dec_ref(v___y_2421_);
return v_res_2428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg___lam__0(lean_object* v_x_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_){
_start:
{
lean_object* v___x_2438_; 
lean_inc_ref(v___y_2430_);
v___x_2438_ = lean_apply_8(v_x_2429_, v___y_2430_, v___y_2431_, v___y_2432_, v___y_2433_, v___y_2434_, v___y_2435_, v___y_2436_, lean_box(0));
return v___x_2438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg___lam__0___boxed(lean_object* v_x_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_){
_start:
{
lean_object* v_res_2448_; 
v_res_2448_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg___lam__0(v_x_2439_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_);
lean_dec_ref(v___y_2440_);
return v_res_2448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg(lean_object* v_beforeStx_2449_, lean_object* v_afterStx_2450_, lean_object* v_x_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_){
_start:
{
lean_object* v_declName_x3f_2459_; lean_object* v_macroStack_2460_; uint8_t v_mayPostpone_2461_; uint8_t v_errToSorry_2462_; lean_object* v_autoBoundImplicitContext_2463_; lean_object* v_autoBoundImplicitForbidden_2464_; lean_object* v_sectionVars_2465_; lean_object* v_sectionFVars_2466_; uint8_t v_implicitLambda_2467_; uint8_t v_heedElabAsElim_2468_; uint8_t v_isNoncomputableSection_2469_; uint8_t v_isMetaSection_2470_; uint8_t v_ignoreTCFailures_2471_; uint8_t v_inPattern_2472_; lean_object* v_tacSnap_x3f_2473_; uint8_t v_saveRecAppSyntax_2474_; uint8_t v_holesAsSyntheticOpaque_2475_; lean_object* v_fixedTermElabs_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; 
v_declName_x3f_2459_ = lean_ctor_get(v___y_2452_, 0);
v_macroStack_2460_ = lean_ctor_get(v___y_2452_, 1);
v_mayPostpone_2461_ = lean_ctor_get_uint8(v___y_2452_, sizeof(void*)*8);
v_errToSorry_2462_ = lean_ctor_get_uint8(v___y_2452_, sizeof(void*)*8 + 1);
v_autoBoundImplicitContext_2463_ = lean_ctor_get(v___y_2452_, 2);
v_autoBoundImplicitForbidden_2464_ = lean_ctor_get(v___y_2452_, 3);
v_sectionVars_2465_ = lean_ctor_get(v___y_2452_, 4);
v_sectionFVars_2466_ = lean_ctor_get(v___y_2452_, 5);
v_implicitLambda_2467_ = lean_ctor_get_uint8(v___y_2452_, sizeof(void*)*8 + 2);
v_heedElabAsElim_2468_ = lean_ctor_get_uint8(v___y_2452_, sizeof(void*)*8 + 3);
v_isNoncomputableSection_2469_ = lean_ctor_get_uint8(v___y_2452_, sizeof(void*)*8 + 4);
v_isMetaSection_2470_ = lean_ctor_get_uint8(v___y_2452_, sizeof(void*)*8 + 5);
v_ignoreTCFailures_2471_ = lean_ctor_get_uint8(v___y_2452_, sizeof(void*)*8 + 6);
v_inPattern_2472_ = lean_ctor_get_uint8(v___y_2452_, sizeof(void*)*8 + 7);
v_tacSnap_x3f_2473_ = lean_ctor_get(v___y_2452_, 6);
v_saveRecAppSyntax_2474_ = lean_ctor_get_uint8(v___y_2452_, sizeof(void*)*8 + 8);
v_holesAsSyntheticOpaque_2475_ = lean_ctor_get_uint8(v___y_2452_, sizeof(void*)*8 + 9);
v_fixedTermElabs_2476_ = lean_ctor_get(v___y_2452_, 7);
v___x_2477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2477_, 0, v_beforeStx_2449_);
lean_ctor_set(v___x_2477_, 1, v_afterStx_2450_);
lean_inc(v_macroStack_2460_);
v___x_2478_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2478_, 0, v___x_2477_);
lean_ctor_set(v___x_2478_, 1, v_macroStack_2460_);
lean_inc_ref(v_fixedTermElabs_2476_);
lean_inc(v_tacSnap_x3f_2473_);
lean_inc(v_sectionFVars_2466_);
lean_inc(v_sectionVars_2465_);
lean_inc_ref(v_autoBoundImplicitForbidden_2464_);
lean_inc(v_autoBoundImplicitContext_2463_);
lean_inc(v_declName_x3f_2459_);
v___x_2479_ = lean_alloc_ctor(0, 8, 10);
lean_ctor_set(v___x_2479_, 0, v_declName_x3f_2459_);
lean_ctor_set(v___x_2479_, 1, v___x_2478_);
lean_ctor_set(v___x_2479_, 2, v_autoBoundImplicitContext_2463_);
lean_ctor_set(v___x_2479_, 3, v_autoBoundImplicitForbidden_2464_);
lean_ctor_set(v___x_2479_, 4, v_sectionVars_2465_);
lean_ctor_set(v___x_2479_, 5, v_sectionFVars_2466_);
lean_ctor_set(v___x_2479_, 6, v_tacSnap_x3f_2473_);
lean_ctor_set(v___x_2479_, 7, v_fixedTermElabs_2476_);
lean_ctor_set_uint8(v___x_2479_, sizeof(void*)*8, v_mayPostpone_2461_);
lean_ctor_set_uint8(v___x_2479_, sizeof(void*)*8 + 1, v_errToSorry_2462_);
lean_ctor_set_uint8(v___x_2479_, sizeof(void*)*8 + 2, v_implicitLambda_2467_);
lean_ctor_set_uint8(v___x_2479_, sizeof(void*)*8 + 3, v_heedElabAsElim_2468_);
lean_ctor_set_uint8(v___x_2479_, sizeof(void*)*8 + 4, v_isNoncomputableSection_2469_);
lean_ctor_set_uint8(v___x_2479_, sizeof(void*)*8 + 5, v_isMetaSection_2470_);
lean_ctor_set_uint8(v___x_2479_, sizeof(void*)*8 + 6, v_ignoreTCFailures_2471_);
lean_ctor_set_uint8(v___x_2479_, sizeof(void*)*8 + 7, v_inPattern_2472_);
lean_ctor_set_uint8(v___x_2479_, sizeof(void*)*8 + 8, v_saveRecAppSyntax_2474_);
lean_ctor_set_uint8(v___x_2479_, sizeof(void*)*8 + 9, v_holesAsSyntheticOpaque_2475_);
lean_inc(v___y_2457_);
lean_inc_ref(v___y_2456_);
lean_inc(v___y_2455_);
lean_inc_ref(v___y_2454_);
lean_inc(v___y_2453_);
v___x_2480_ = lean_apply_7(v_x_2451_, v___x_2479_, v___y_2453_, v___y_2454_, v___y_2455_, v___y_2456_, v___y_2457_, lean_box(0));
return v___x_2480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg___boxed(lean_object* v_beforeStx_2481_, lean_object* v_afterStx_2482_, lean_object* v_x_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_){
_start:
{
lean_object* v_res_2491_; 
v_res_2491_ = l_Lean_Elab_Term_withPushMacroExpansionStack___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg(v_beforeStx_2481_, v_afterStx_2482_, v_x_2483_, v___y_2484_, v___y_2485_, v___y_2486_, v___y_2487_, v___y_2488_, v___y_2489_);
lean_dec(v___y_2489_);
lean_dec_ref(v___y_2488_);
lean_dec(v___y_2487_);
lean_dec_ref(v___y_2486_);
lean_dec(v___y_2485_);
lean_dec_ref(v___y_2484_);
return v_res_2491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9(lean_object* v_00_u03b1_2492_, lean_object* v_beforeStx_2493_, lean_object* v_afterStx_2494_, lean_object* v_x_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_){
_start:
{
lean_object* v___x_2503_; 
v___x_2503_ = l_Lean_Elab_Term_withPushMacroExpansionStack___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg(v_beforeStx_2493_, v_afterStx_2494_, v_x_2495_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_, v___y_2501_);
return v___x_2503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___boxed(lean_object* v_00_u03b1_2504_, lean_object* v_beforeStx_2505_, lean_object* v_afterStx_2506_, lean_object* v_x_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_){
_start:
{
lean_object* v_res_2515_; 
v_res_2515_ = l_Lean_Elab_Term_withPushMacroExpansionStack___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9(v_00_u03b1_2504_, v_beforeStx_2505_, v_afterStx_2506_, v_x_2507_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_);
lean_dec(v___y_2513_);
lean_dec_ref(v___y_2512_);
lean_dec(v___y_2511_);
lean_dec_ref(v___y_2510_);
lean_dec(v___y_2509_);
lean_dec_ref(v___y_2508_);
return v_res_2515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg(lean_object* v_beforeStx_2516_, lean_object* v_afterStx_2517_, lean_object* v_x_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_){
_start:
{
lean_object* v___f_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; 
lean_inc_ref(v___y_2519_);
v___f_2527_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2527_, 0, v_x_2518_);
lean_closure_set(v___f_2527_, 1, v___y_2519_);
lean_inc(v_afterStx_2517_);
lean_inc(v_beforeStx_2516_);
v___x_2528_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withPushMacroExpansionStack___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___boxed), 11, 4);
lean_closure_set(v___x_2528_, 0, lean_box(0));
lean_closure_set(v___x_2528_, 1, v_beforeStx_2516_);
lean_closure_set(v___x_2528_, 2, v_afterStx_2517_);
lean_closure_set(v___x_2528_, 3, v___f_2527_);
v___x_2529_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10___redArg(v_beforeStx_2516_, v_afterStx_2517_, v___x_2528_, v___y_2520_, v___y_2521_, v___y_2522_, v___y_2523_, v___y_2524_, v___y_2525_);
if (lean_obj_tag(v___x_2529_) == 0)
{
return v___x_2529_;
}
else
{
lean_object* v_a_2530_; lean_object* v___x_2532_; uint8_t v_isShared_2533_; uint8_t v_isSharedCheck_2537_; 
v_a_2530_ = lean_ctor_get(v___x_2529_, 0);
v_isSharedCheck_2537_ = !lean_is_exclusive(v___x_2529_);
if (v_isSharedCheck_2537_ == 0)
{
v___x_2532_ = v___x_2529_;
v_isShared_2533_ = v_isSharedCheck_2537_;
goto v_resetjp_2531_;
}
else
{
lean_inc(v_a_2530_);
lean_dec(v___x_2529_);
v___x_2532_ = lean_box(0);
v_isShared_2533_ = v_isSharedCheck_2537_;
goto v_resetjp_2531_;
}
v_resetjp_2531_:
{
lean_object* v___x_2535_; 
if (v_isShared_2533_ == 0)
{
v___x_2535_ = v___x_2532_;
goto v_reusejp_2534_;
}
else
{
lean_object* v_reuseFailAlloc_2536_; 
v_reuseFailAlloc_2536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2536_, 0, v_a_2530_);
v___x_2535_ = v_reuseFailAlloc_2536_;
goto v_reusejp_2534_;
}
v_reusejp_2534_:
{
return v___x_2535_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg___boxed(lean_object* v_beforeStx_2538_, lean_object* v_afterStx_2539_, lean_object* v_x_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_){
_start:
{
lean_object* v_res_2549_; 
v_res_2549_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg(v_beforeStx_2538_, v_afterStx_2539_, v_x_2540_, v___y_2541_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_, v___y_2547_);
lean_dec(v___y_2547_);
lean_dec_ref(v___y_2546_);
lean_dec(v___y_2545_);
lean_dec_ref(v___y_2544_);
lean_dec(v___y_2543_);
lean_dec_ref(v___y_2542_);
lean_dec_ref(v___y_2541_);
return v_res_2549_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__2(void){
_start:
{
lean_object* v___x_2552_; lean_object* v___x_2553_; 
v___x_2552_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__1));
v___x_2553_ = l_String_toRawSubstring_x27(v___x_2552_);
return v___x_2553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6(lean_object* v_rhs_2575_, uint8_t v___x_2576_, lean_object* v_config_2577_, lean_object* v_a_2578_, uint8_t v___x_2579_, lean_object* v___x_2580_, lean_object* v___x_2581_, lean_object* v___x_2582_, lean_object* v___f_2583_, lean_object* v___x_2584_, lean_object* v_body_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_){
_start:
{
lean_object* v_term_2595_; lean_object* v___y_2596_; lean_object* v___y_2597_; lean_object* v___y_2598_; lean_object* v___y_2599_; lean_object* v___y_2600_; lean_object* v___y_2601_; lean_object* v_ref_2602_; lean_object* v___y_2603_; lean_object* v_toCold_2609_; lean_object* v_ref_2610_; lean_object* v_quotContext_2611_; lean_object* v_currMacroScope_2612_; lean_object* v_ref_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v_eq_x3f_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; 
v_toCold_2609_ = lean_ctor_get(v___y_2591_, 0);
v_ref_2610_ = lean_ctor_get(v___y_2591_, 2);
v_quotContext_2611_ = lean_ctor_get(v_toCold_2609_, 8);
v_currMacroScope_2612_ = lean_ctor_get(v_toCold_2609_, 9);
v_ref_2613_ = l_Lean_replaceRef(v_rhs_2575_, v_ref_2610_);
v___x_2614_ = l_Lean_SourceInfo_fromRef(v_ref_2613_, v___x_2576_);
lean_dec(v_ref_2613_);
v___x_2615_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__0));
lean_inc_n(v___x_2614_, 2);
v___x_2616_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2616_, 0, v___x_2614_);
lean_ctor_set(v___x_2616_, 1, v___x_2615_);
v___x_2617_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__2, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__2_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__2);
v_eq_x3f_2618_ = lean_ctor_get(v_config_2577_, 0);
lean_inc(v_eq_x3f_2618_);
lean_dec_ref(v_config_2577_);
v___x_2619_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__3));
lean_inc(v_currMacroScope_2612_);
lean_inc(v_quotContext_2611_);
v___x_2620_ = l_Lean_addMacroScope(v_quotContext_2611_, v___x_2619_, v_currMacroScope_2612_);
v___x_2621_ = lean_box(0);
lean_inc(v___x_2620_);
v___x_2622_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2622_, 0, v___x_2614_);
lean_ctor_set(v___x_2622_, 1, v___x_2617_);
lean_ctor_set(v___x_2622_, 2, v___x_2620_);
lean_ctor_set(v___x_2622_, 3, v___x_2621_);
v___x_2623_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__4));
lean_inc_ref(v___x_2582_);
lean_inc_ref(v___x_2581_);
lean_inc_ref(v___x_2580_);
v___x_2624_ = l_Lean_Name_mkStr4(v___x_2580_, v___x_2581_, v___x_2582_, v___x_2623_);
v___x_2625_ = l_Lean_Syntax_node2(v___x_2614_, v___x_2624_, v___x_2616_, v___x_2622_);
if (lean_obj_tag(v_eq_x3f_2618_) == 1)
{
lean_object* v_val_2626_; lean_object* v___x_2627_; 
v_val_2626_ = lean_ctor_get(v_eq_x3f_2618_, 0);
lean_inc(v_val_2626_);
lean_dec_ref_known(v_eq_x3f_2618_, 1);
lean_inc(v___y_2592_);
lean_inc_ref(v___y_2591_);
lean_inc(v___y_2590_);
lean_inc_ref(v___y_2589_);
lean_inc(v___y_2588_);
lean_inc_ref(v___y_2587_);
lean_inc_ref(v___y_2586_);
lean_inc(v_ref_2610_);
v___x_2627_ = lean_apply_9(v___f_2583_, v_ref_2610_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_, v___y_2592_, lean_box(0));
if (lean_obj_tag(v___x_2627_) == 0)
{
lean_object* v_a_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; 
v_a_2628_ = lean_ctor_get(v___x_2627_, 0);
lean_inc_n(v_a_2628_, 23);
lean_dec_ref_known(v___x_2627_, 1);
v___x_2629_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__5));
lean_inc_ref_n(v___x_2582_, 5);
lean_inc_ref_n(v___x_2581_, 5);
lean_inc_ref_n(v___x_2580_, 5);
v___x_2630_ = l_Lean_Name_mkStr4(v___x_2580_, v___x_2581_, v___x_2582_, v___x_2629_);
v___x_2631_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__6));
v___x_2632_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2632_, 0, v_a_2628_);
lean_ctor_set(v___x_2632_, 1, v___x_2631_);
v___x_2633_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2633_, 0, v_a_2628_);
lean_ctor_set(v___x_2633_, 1, v___x_2615_);
v___x_2634_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2634_, 0, v_a_2628_);
lean_ctor_set(v___x_2634_, 1, v___x_2617_);
lean_ctor_set(v___x_2634_, 2, v___x_2620_);
lean_ctor_set(v___x_2634_, 3, v___x_2621_);
v___x_2635_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_2636_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2636_, 0, v_a_2628_);
lean_ctor_set(v___x_2636_, 1, v___x_2635_);
v___x_2637_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7));
v___x_2638_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2638_, 0, v_a_2628_);
lean_ctor_set(v___x_2638_, 1, v___x_2637_);
v___x_2639_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__8));
v___x_2640_ = l_Lean_Name_mkStr4(v___x_2580_, v___x_2581_, v___x_2582_, v___x_2639_);
v___x_2641_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__9));
v___x_2642_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2642_, 0, v_a_2628_);
lean_ctor_set(v___x_2642_, 1, v___x_2641_);
v___x_2643_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__10));
v___x_2644_ = l_Lean_Name_mkStr4(v___x_2580_, v___x_2581_, v___x_2582_, v___x_2643_);
v___x_2645_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2645_, 0, v_a_2628_);
lean_ctor_set(v___x_2645_, 1, v___x_2643_);
v___x_2646_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_2647_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_2648_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2648_, 0, v_a_2628_);
lean_ctor_set(v___x_2648_, 1, v___x_2646_);
lean_ctor_set(v___x_2648_, 2, v___x_2647_);
v___x_2649_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__11));
v___x_2650_ = l_Lean_Name_mkStr4(v___x_2580_, v___x_2581_, v___x_2582_, v___x_2649_);
v___x_2651_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36));
v___x_2652_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2652_, 0, v_a_2628_);
lean_ctor_set(v___x_2652_, 1, v___x_2651_);
v___x_2653_ = l_Lean_Syntax_node2(v_a_2628_, v___x_2646_, v_val_2626_, v___x_2652_);
v___x_2654_ = l_Lean_Syntax_node2(v_a_2628_, v___x_2650_, v___x_2653_, v___x_2625_);
v___x_2655_ = l_Lean_Syntax_node1(v_a_2628_, v___x_2646_, v___x_2654_);
v___x_2656_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__12));
v___x_2657_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2657_, 0, v_a_2628_);
lean_ctor_set(v___x_2657_, 1, v___x_2656_);
v___x_2658_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__13));
v___x_2659_ = l_Lean_Name_mkStr4(v___x_2580_, v___x_2581_, v___x_2582_, v___x_2658_);
v___x_2660_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__14));
v___x_2661_ = l_Lean_Name_mkStr4(v___x_2580_, v___x_2581_, v___x_2582_, v___x_2660_);
v___x_2662_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15));
v___x_2663_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2663_, 0, v_a_2628_);
lean_ctor_set(v___x_2663_, 1, v___x_2662_);
v___x_2664_ = l_Lean_Syntax_node1(v_a_2628_, v___x_2646_, v___x_2584_);
v___x_2665_ = l_Lean_Syntax_node1(v_a_2628_, v___x_2646_, v___x_2664_);
v___x_2666_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__16));
v___x_2667_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2667_, 0, v_a_2628_);
lean_ctor_set(v___x_2667_, 1, v___x_2666_);
v___x_2668_ = l_Lean_Syntax_node4(v_a_2628_, v___x_2661_, v___x_2663_, v___x_2665_, v___x_2667_, v_body_2585_);
v___x_2669_ = l_Lean_Syntax_node1(v_a_2628_, v___x_2646_, v___x_2668_);
v___x_2670_ = l_Lean_Syntax_node1(v_a_2628_, v___x_2659_, v___x_2669_);
lean_inc_ref(v___x_2648_);
v___x_2671_ = l_Lean_Syntax_node6(v_a_2628_, v___x_2644_, v___x_2645_, v___x_2648_, v___x_2648_, v___x_2655_, v___x_2657_, v___x_2670_);
lean_inc_ref(v___x_2638_);
lean_inc_ref(v___x_2634_);
lean_inc_ref(v___x_2633_);
v___x_2672_ = l_Lean_Syntax_node5(v_a_2628_, v___x_2640_, v___x_2642_, v___x_2633_, v___x_2634_, v___x_2638_, v___x_2671_);
v___x_2673_ = l_Lean_Syntax_node7(v_a_2628_, v___x_2630_, v___x_2632_, v___x_2633_, v___x_2634_, v___x_2636_, v_rhs_2575_, v___x_2638_, v___x_2672_);
lean_inc(v_ref_2610_);
v_term_2595_ = v___x_2673_;
v___y_2596_ = v___y_2586_;
v___y_2597_ = v___y_2587_;
v___y_2598_ = v___y_2588_;
v___y_2599_ = v___y_2589_;
v___y_2600_ = v___y_2590_;
v___y_2601_ = v___y_2591_;
v_ref_2602_ = v_ref_2610_;
v___y_2603_ = v___y_2592_;
goto v___jp_2594_;
}
else
{
lean_object* v_a_2674_; lean_object* v___x_2676_; uint8_t v_isShared_2677_; uint8_t v_isSharedCheck_2681_; 
lean_dec(v_val_2626_);
lean_dec(v___x_2625_);
lean_dec(v___x_2620_);
lean_dec(v_body_2585_);
lean_dec(v___x_2584_);
lean_dec_ref(v___x_2582_);
lean_dec_ref(v___x_2581_);
lean_dec_ref(v___x_2580_);
lean_dec_ref(v_a_2578_);
lean_dec(v_rhs_2575_);
v_a_2674_ = lean_ctor_get(v___x_2627_, 0);
v_isSharedCheck_2681_ = !lean_is_exclusive(v___x_2627_);
if (v_isSharedCheck_2681_ == 0)
{
v___x_2676_ = v___x_2627_;
v_isShared_2677_ = v_isSharedCheck_2681_;
goto v_resetjp_2675_;
}
else
{
lean_inc(v_a_2674_);
lean_dec(v___x_2627_);
v___x_2676_ = lean_box(0);
v_isShared_2677_ = v_isSharedCheck_2681_;
goto v_resetjp_2675_;
}
v_resetjp_2675_:
{
lean_object* v___x_2679_; 
if (v_isShared_2677_ == 0)
{
v___x_2679_ = v___x_2676_;
goto v_reusejp_2678_;
}
else
{
lean_object* v_reuseFailAlloc_2680_; 
v_reuseFailAlloc_2680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2680_, 0, v_a_2674_);
v___x_2679_ = v_reuseFailAlloc_2680_;
goto v_reusejp_2678_;
}
v_reusejp_2678_:
{
return v___x_2679_;
}
}
}
}
else
{
lean_object* v___x_2682_; 
lean_dec(v_eq_x3f_2618_);
lean_inc_ref(v_a_2578_);
v___x_2682_ = l_Lean_Elab_Term_exprToSyntax(v_a_2578_, v___y_2587_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_, v___y_2592_);
if (lean_obj_tag(v___x_2682_) == 0)
{
lean_object* v_a_2683_; lean_object* v___x_2684_; 
v_a_2683_ = lean_ctor_get(v___x_2682_, 0);
lean_inc(v_a_2683_);
lean_dec_ref_known(v___x_2682_, 1);
lean_inc(v___y_2592_);
lean_inc_ref(v___y_2591_);
lean_inc(v___y_2590_);
lean_inc_ref(v___y_2589_);
lean_inc(v___y_2588_);
lean_inc_ref(v___y_2587_);
lean_inc_ref(v___y_2586_);
lean_inc(v_ref_2610_);
v___x_2684_ = lean_apply_9(v___f_2583_, v_ref_2610_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_, v___y_2592_, lean_box(0));
if (lean_obj_tag(v___x_2684_) == 0)
{
lean_object* v_a_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; 
v_a_2685_ = lean_ctor_get(v___x_2684_, 0);
lean_inc_n(v_a_2685_, 32);
lean_dec_ref_known(v___x_2684_, 1);
v___x_2686_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__5));
lean_inc_ref_n(v___x_2582_, 8);
lean_inc_ref_n(v___x_2581_, 8);
lean_inc_ref_n(v___x_2580_, 8);
v___x_2687_ = l_Lean_Name_mkStr4(v___x_2580_, v___x_2581_, v___x_2582_, v___x_2686_);
v___x_2688_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__6));
v___x_2689_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2689_, 0, v_a_2685_);
lean_ctor_set(v___x_2689_, 1, v___x_2688_);
v___x_2690_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2690_, 0, v_a_2685_);
lean_ctor_set(v___x_2690_, 1, v___x_2615_);
v___x_2691_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2691_, 0, v_a_2685_);
lean_ctor_set(v___x_2691_, 1, v___x_2617_);
lean_ctor_set(v___x_2691_, 2, v___x_2620_);
lean_ctor_set(v___x_2691_, 3, v___x_2621_);
v___x_2692_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_2693_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2693_, 0, v_a_2685_);
lean_ctor_set(v___x_2693_, 1, v___x_2692_);
v___x_2694_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7));
v___x_2695_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2695_, 0, v_a_2685_);
lean_ctor_set(v___x_2695_, 1, v___x_2694_);
v___x_2696_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__8));
v___x_2697_ = l_Lean_Name_mkStr4(v___x_2580_, v___x_2581_, v___x_2582_, v___x_2696_);
v___x_2698_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__9));
v___x_2699_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2699_, 0, v_a_2685_);
lean_ctor_set(v___x_2699_, 1, v___x_2698_);
v___x_2700_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__10));
v___x_2701_ = l_Lean_Name_mkStr4(v___x_2580_, v___x_2581_, v___x_2582_, v___x_2700_);
v___x_2702_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2702_, 0, v_a_2685_);
lean_ctor_set(v___x_2702_, 1, v___x_2700_);
v___x_2703_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_2704_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_2705_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2705_, 0, v_a_2685_);
lean_ctor_set(v___x_2705_, 1, v___x_2703_);
lean_ctor_set(v___x_2705_, 2, v___x_2704_);
v___x_2706_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__17));
v___x_2707_ = l_Lean_Name_mkStr4(v___x_2580_, v___x_2581_, v___x_2582_, v___x_2706_);
v___x_2708_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19));
v___x_2709_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2709_, 0, v_a_2685_);
lean_ctor_set(v___x_2709_, 1, v___x_2708_);
v___x_2710_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2710_, 0, v_a_2685_);
lean_ctor_set(v___x_2710_, 1, v___x_2706_);
v___x_2711_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__18));
v___x_2712_ = l_Lean_Name_mkStr4(v___x_2580_, v___x_2581_, v___x_2582_, v___x_2711_);
v___x_2713_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__19));
v___x_2714_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2714_, 0, v_a_2685_);
lean_ctor_set(v___x_2714_, 1, v___x_2713_);
v___x_2715_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__20));
v___x_2716_ = l_Lean_Name_mkStr4(v___x_2580_, v___x_2581_, v___x_2582_, v___x_2715_);
v___x_2717_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__21));
v___x_2718_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2718_, 0, v_a_2685_);
lean_ctor_set(v___x_2718_, 1, v___x_2717_);
v___x_2719_ = l_Lean_Syntax_node1(v_a_2685_, v___x_2716_, v___x_2718_);
v___x_2720_ = l_Lean_Syntax_node1(v_a_2685_, v___x_2703_, v___x_2719_);
v___x_2721_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__22));
v___x_2722_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2722_, 0, v_a_2685_);
lean_ctor_set(v___x_2722_, 1, v___x_2721_);
lean_inc_ref_n(v___x_2705_, 2);
v___x_2723_ = l_Lean_Syntax_node5(v_a_2685_, v___x_2712_, v___x_2714_, v___x_2720_, v___x_2705_, v___x_2722_, v_a_2683_);
v___x_2724_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37));
v___x_2725_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2725_, 0, v_a_2685_);
lean_ctor_set(v___x_2725_, 1, v___x_2724_);
lean_inc_ref(v___x_2693_);
v___x_2726_ = l_Lean_Syntax_node5(v_a_2685_, v___x_2707_, v___x_2709_, v___x_2710_, v___x_2693_, v___x_2723_, v___x_2725_);
v___x_2727_ = l_Lean_Syntax_node1(v_a_2685_, v___x_2703_, v___x_2726_);
v___x_2728_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__11));
v___x_2729_ = l_Lean_Name_mkStr4(v___x_2580_, v___x_2581_, v___x_2582_, v___x_2728_);
v___x_2730_ = l_Lean_Syntax_node2(v_a_2685_, v___x_2729_, v___x_2705_, v___x_2625_);
v___x_2731_ = l_Lean_Syntax_node1(v_a_2685_, v___x_2703_, v___x_2730_);
v___x_2732_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__12));
v___x_2733_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2733_, 0, v_a_2685_);
lean_ctor_set(v___x_2733_, 1, v___x_2732_);
v___x_2734_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__13));
v___x_2735_ = l_Lean_Name_mkStr4(v___x_2580_, v___x_2581_, v___x_2582_, v___x_2734_);
v___x_2736_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__14));
v___x_2737_ = l_Lean_Name_mkStr4(v___x_2580_, v___x_2581_, v___x_2582_, v___x_2736_);
v___x_2738_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15));
v___x_2739_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2739_, 0, v_a_2685_);
lean_ctor_set(v___x_2739_, 1, v___x_2738_);
v___x_2740_ = l_Lean_Syntax_node1(v_a_2685_, v___x_2703_, v___x_2584_);
v___x_2741_ = l_Lean_Syntax_node1(v_a_2685_, v___x_2703_, v___x_2740_);
v___x_2742_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__16));
v___x_2743_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2743_, 0, v_a_2685_);
lean_ctor_set(v___x_2743_, 1, v___x_2742_);
v___x_2744_ = l_Lean_Syntax_node4(v_a_2685_, v___x_2737_, v___x_2739_, v___x_2741_, v___x_2743_, v_body_2585_);
v___x_2745_ = l_Lean_Syntax_node1(v_a_2685_, v___x_2703_, v___x_2744_);
v___x_2746_ = l_Lean_Syntax_node1(v_a_2685_, v___x_2735_, v___x_2745_);
v___x_2747_ = l_Lean_Syntax_node6(v_a_2685_, v___x_2701_, v___x_2702_, v___x_2705_, v___x_2727_, v___x_2731_, v___x_2733_, v___x_2746_);
lean_inc_ref(v___x_2695_);
lean_inc_ref(v___x_2691_);
lean_inc_ref(v___x_2690_);
v___x_2748_ = l_Lean_Syntax_node5(v_a_2685_, v___x_2697_, v___x_2699_, v___x_2690_, v___x_2691_, v___x_2695_, v___x_2747_);
v___x_2749_ = l_Lean_Syntax_node7(v_a_2685_, v___x_2687_, v___x_2689_, v___x_2690_, v___x_2691_, v___x_2693_, v_rhs_2575_, v___x_2695_, v___x_2748_);
lean_inc(v_ref_2610_);
v_term_2595_ = v___x_2749_;
v___y_2596_ = v___y_2586_;
v___y_2597_ = v___y_2587_;
v___y_2598_ = v___y_2588_;
v___y_2599_ = v___y_2589_;
v___y_2600_ = v___y_2590_;
v___y_2601_ = v___y_2591_;
v_ref_2602_ = v_ref_2610_;
v___y_2603_ = v___y_2592_;
goto v___jp_2594_;
}
else
{
lean_object* v_a_2750_; lean_object* v___x_2752_; uint8_t v_isShared_2753_; uint8_t v_isSharedCheck_2757_; 
lean_dec(v_a_2683_);
lean_dec(v___x_2625_);
lean_dec(v___x_2620_);
lean_dec(v_body_2585_);
lean_dec(v___x_2584_);
lean_dec_ref(v___x_2582_);
lean_dec_ref(v___x_2581_);
lean_dec_ref(v___x_2580_);
lean_dec_ref(v_a_2578_);
lean_dec(v_rhs_2575_);
v_a_2750_ = lean_ctor_get(v___x_2684_, 0);
v_isSharedCheck_2757_ = !lean_is_exclusive(v___x_2684_);
if (v_isSharedCheck_2757_ == 0)
{
v___x_2752_ = v___x_2684_;
v_isShared_2753_ = v_isSharedCheck_2757_;
goto v_resetjp_2751_;
}
else
{
lean_inc(v_a_2750_);
lean_dec(v___x_2684_);
v___x_2752_ = lean_box(0);
v_isShared_2753_ = v_isSharedCheck_2757_;
goto v_resetjp_2751_;
}
v_resetjp_2751_:
{
lean_object* v___x_2755_; 
if (v_isShared_2753_ == 0)
{
v___x_2755_ = v___x_2752_;
goto v_reusejp_2754_;
}
else
{
lean_object* v_reuseFailAlloc_2756_; 
v_reuseFailAlloc_2756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2756_, 0, v_a_2750_);
v___x_2755_ = v_reuseFailAlloc_2756_;
goto v_reusejp_2754_;
}
v_reusejp_2754_:
{
return v___x_2755_;
}
}
}
}
else
{
lean_object* v_a_2758_; lean_object* v___x_2760_; uint8_t v_isShared_2761_; uint8_t v_isSharedCheck_2765_; 
lean_dec(v___x_2625_);
lean_dec(v___x_2620_);
lean_dec(v_body_2585_);
lean_dec(v___x_2584_);
lean_dec_ref(v___f_2583_);
lean_dec_ref(v___x_2582_);
lean_dec_ref(v___x_2581_);
lean_dec_ref(v___x_2580_);
lean_dec_ref(v_a_2578_);
lean_dec(v_rhs_2575_);
v_a_2758_ = lean_ctor_get(v___x_2682_, 0);
v_isSharedCheck_2765_ = !lean_is_exclusive(v___x_2682_);
if (v_isSharedCheck_2765_ == 0)
{
v___x_2760_ = v___x_2682_;
v_isShared_2761_ = v_isSharedCheck_2765_;
goto v_resetjp_2759_;
}
else
{
lean_inc(v_a_2758_);
lean_dec(v___x_2682_);
v___x_2760_ = lean_box(0);
v_isShared_2761_ = v_isSharedCheck_2765_;
goto v_resetjp_2759_;
}
v_resetjp_2759_:
{
lean_object* v___x_2763_; 
if (v_isShared_2761_ == 0)
{
v___x_2763_ = v___x_2760_;
goto v_reusejp_2762_;
}
else
{
lean_object* v_reuseFailAlloc_2764_; 
v_reuseFailAlloc_2764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2764_, 0, v_a_2758_);
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
v___jp_2594_:
{
lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___f_2607_; lean_object* v___x_2608_; 
v___x_2604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2604_, 0, v_a_2578_);
v___x_2605_ = lean_box(0);
v___x_2606_ = lean_box(v___x_2579_);
lean_inc(v_term_2595_);
v___f_2607_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__5___boxed), 12, 4);
lean_closure_set(v___f_2607_, 0, v_term_2595_);
lean_closure_set(v___f_2607_, 1, v___x_2604_);
lean_closure_set(v___f_2607_, 2, v___x_2606_);
lean_closure_set(v___f_2607_, 3, v___x_2605_);
v___x_2608_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg(v_ref_2602_, v_term_2595_, v___f_2607_, v___y_2596_, v___y_2597_, v___y_2598_, v___y_2599_, v___y_2600_, v___y_2601_, v___y_2603_);
return v___x_2608_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___boxed(lean_object** _args){
lean_object* v_rhs_2766_ = _args[0];
lean_object* v___x_2767_ = _args[1];
lean_object* v_config_2768_ = _args[2];
lean_object* v_a_2769_ = _args[3];
lean_object* v___x_2770_ = _args[4];
lean_object* v___x_2771_ = _args[5];
lean_object* v___x_2772_ = _args[6];
lean_object* v___x_2773_ = _args[7];
lean_object* v___f_2774_ = _args[8];
lean_object* v___x_2775_ = _args[9];
lean_object* v_body_2776_ = _args[10];
lean_object* v___y_2777_ = _args[11];
lean_object* v___y_2778_ = _args[12];
lean_object* v___y_2779_ = _args[13];
lean_object* v___y_2780_ = _args[14];
lean_object* v___y_2781_ = _args[15];
lean_object* v___y_2782_ = _args[16];
lean_object* v___y_2783_ = _args[17];
lean_object* v___y_2784_ = _args[18];
_start:
{
uint8_t v___x_96791__boxed_2785_; uint8_t v___x_96793__boxed_2786_; lean_object* v_res_2787_; 
v___x_96791__boxed_2785_ = lean_unbox(v___x_2767_);
v___x_96793__boxed_2786_ = lean_unbox(v___x_2770_);
v_res_2787_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__6(v_rhs_2766_, v___x_96791__boxed_2785_, v_config_2768_, v_a_2769_, v___x_96793__boxed_2786_, v___x_2771_, v___x_2772_, v___x_2773_, v___f_2774_, v___x_2775_, v_body_2776_, v___y_2777_, v___y_2778_, v___y_2779_, v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_);
lean_dec(v___y_2783_);
lean_dec_ref(v___y_2782_);
lean_dec(v___y_2781_);
lean_dec_ref(v___y_2780_);
lean_dec(v___y_2779_);
lean_dec_ref(v___y_2778_);
lean_dec_ref(v___y_2777_);
return v_res_2787_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_2788_; double v___x_2789_; 
v___x_2788_ = lean_unsigned_to_nat(0u);
v___x_2789_ = lean_float_of_nat(v___x_2788_);
return v___x_2789_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(lean_object* v_cls_2792_, lean_object* v_msg_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_){
_start:
{
lean_object* v_ref_2799_; lean_object* v___x_2800_; lean_object* v_a_2801_; lean_object* v___x_2803_; uint8_t v_isShared_2804_; uint8_t v_isSharedCheck_2846_; 
v_ref_2799_ = lean_ctor_get(v___y_2796_, 2);
v___x_2800_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0_spec__1(v_msg_2793_, v___y_2794_, v___y_2795_, v___y_2796_, v___y_2797_);
v_a_2801_ = lean_ctor_get(v___x_2800_, 0);
v_isSharedCheck_2846_ = !lean_is_exclusive(v___x_2800_);
if (v_isSharedCheck_2846_ == 0)
{
v___x_2803_ = v___x_2800_;
v_isShared_2804_ = v_isSharedCheck_2846_;
goto v_resetjp_2802_;
}
else
{
lean_inc(v_a_2801_);
lean_dec(v___x_2800_);
v___x_2803_ = lean_box(0);
v_isShared_2804_ = v_isSharedCheck_2846_;
goto v_resetjp_2802_;
}
v_resetjp_2802_:
{
lean_object* v___x_2805_; lean_object* v_traceState_2806_; lean_object* v_env_2807_; lean_object* v_nextMacroScope_2808_; lean_object* v_ngen_2809_; lean_object* v_auxDeclNGen_2810_; lean_object* v_cache_2811_; lean_object* v_recordedDeps_2812_; lean_object* v_messages_2813_; lean_object* v_infoState_2814_; lean_object* v_snapshotTasks_2815_; lean_object* v___x_2817_; uint8_t v_isShared_2818_; uint8_t v_isSharedCheck_2845_; 
v___x_2805_ = lean_st_ref_take(v___y_2797_);
v_traceState_2806_ = lean_ctor_get(v___x_2805_, 4);
v_env_2807_ = lean_ctor_get(v___x_2805_, 0);
v_nextMacroScope_2808_ = lean_ctor_get(v___x_2805_, 1);
v_ngen_2809_ = lean_ctor_get(v___x_2805_, 2);
v_auxDeclNGen_2810_ = lean_ctor_get(v___x_2805_, 3);
v_cache_2811_ = lean_ctor_get(v___x_2805_, 5);
v_recordedDeps_2812_ = lean_ctor_get(v___x_2805_, 6);
v_messages_2813_ = lean_ctor_get(v___x_2805_, 7);
v_infoState_2814_ = lean_ctor_get(v___x_2805_, 8);
v_snapshotTasks_2815_ = lean_ctor_get(v___x_2805_, 9);
v_isSharedCheck_2845_ = !lean_is_exclusive(v___x_2805_);
if (v_isSharedCheck_2845_ == 0)
{
v___x_2817_ = v___x_2805_;
v_isShared_2818_ = v_isSharedCheck_2845_;
goto v_resetjp_2816_;
}
else
{
lean_inc(v_snapshotTasks_2815_);
lean_inc(v_infoState_2814_);
lean_inc(v_messages_2813_);
lean_inc(v_recordedDeps_2812_);
lean_inc(v_cache_2811_);
lean_inc(v_traceState_2806_);
lean_inc(v_auxDeclNGen_2810_);
lean_inc(v_ngen_2809_);
lean_inc(v_nextMacroScope_2808_);
lean_inc(v_env_2807_);
lean_dec(v___x_2805_);
v___x_2817_ = lean_box(0);
v_isShared_2818_ = v_isSharedCheck_2845_;
goto v_resetjp_2816_;
}
v_resetjp_2816_:
{
uint64_t v_tid_2819_; lean_object* v_traces_2820_; lean_object* v___x_2822_; uint8_t v_isShared_2823_; uint8_t v_isSharedCheck_2844_; 
v_tid_2819_ = lean_ctor_get_uint64(v_traceState_2806_, sizeof(void*)*1);
v_traces_2820_ = lean_ctor_get(v_traceState_2806_, 0);
v_isSharedCheck_2844_ = !lean_is_exclusive(v_traceState_2806_);
if (v_isSharedCheck_2844_ == 0)
{
v___x_2822_ = v_traceState_2806_;
v_isShared_2823_ = v_isSharedCheck_2844_;
goto v_resetjp_2821_;
}
else
{
lean_inc(v_traces_2820_);
lean_dec(v_traceState_2806_);
v___x_2822_ = lean_box(0);
v_isShared_2823_ = v_isSharedCheck_2844_;
goto v_resetjp_2821_;
}
v_resetjp_2821_:
{
lean_object* v___x_2824_; lean_object* v___x_2825_; double v___x_2826_; uint8_t v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2835_; 
v___x_2824_ = lean_box(0);
v___x_2825_ = lean_box(0);
v___x_2826_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__0);
v___x_2827_ = 0;
v___x_2828_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22));
v___x_2829_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2829_, 0, v_cls_2792_);
lean_ctor_set(v___x_2829_, 1, v___x_2825_);
lean_ctor_set(v___x_2829_, 2, v___x_2828_);
lean_ctor_set_float(v___x_2829_, sizeof(void*)*3, v___x_2826_);
lean_ctor_set_float(v___x_2829_, sizeof(void*)*3 + 8, v___x_2826_);
lean_ctor_set_uint8(v___x_2829_, sizeof(void*)*3 + 16, v___x_2827_);
v___x_2830_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__1));
v___x_2831_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2831_, 0, v___x_2829_);
lean_ctor_set(v___x_2831_, 1, v_a_2801_);
lean_ctor_set(v___x_2831_, 2, v___x_2830_);
lean_inc(v_ref_2799_);
v___x_2832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2832_, 0, v_ref_2799_);
lean_ctor_set(v___x_2832_, 1, v___x_2831_);
v___x_2833_ = l_Lean_PersistentArray_push___redArg(v_traces_2820_, v___x_2832_);
if (v_isShared_2823_ == 0)
{
lean_ctor_set(v___x_2822_, 0, v___x_2833_);
v___x_2835_ = v___x_2822_;
goto v_reusejp_2834_;
}
else
{
lean_object* v_reuseFailAlloc_2843_; 
v_reuseFailAlloc_2843_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2843_, 0, v___x_2833_);
lean_ctor_set_uint64(v_reuseFailAlloc_2843_, sizeof(void*)*1, v_tid_2819_);
v___x_2835_ = v_reuseFailAlloc_2843_;
goto v_reusejp_2834_;
}
v_reusejp_2834_:
{
lean_object* v___x_2837_; 
if (v_isShared_2818_ == 0)
{
lean_ctor_set(v___x_2817_, 4, v___x_2835_);
v___x_2837_ = v___x_2817_;
goto v_reusejp_2836_;
}
else
{
lean_object* v_reuseFailAlloc_2842_; 
v_reuseFailAlloc_2842_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2842_, 0, v_env_2807_);
lean_ctor_set(v_reuseFailAlloc_2842_, 1, v_nextMacroScope_2808_);
lean_ctor_set(v_reuseFailAlloc_2842_, 2, v_ngen_2809_);
lean_ctor_set(v_reuseFailAlloc_2842_, 3, v_auxDeclNGen_2810_);
lean_ctor_set(v_reuseFailAlloc_2842_, 4, v___x_2835_);
lean_ctor_set(v_reuseFailAlloc_2842_, 5, v_cache_2811_);
lean_ctor_set(v_reuseFailAlloc_2842_, 6, v_recordedDeps_2812_);
lean_ctor_set(v_reuseFailAlloc_2842_, 7, v_messages_2813_);
lean_ctor_set(v_reuseFailAlloc_2842_, 8, v_infoState_2814_);
lean_ctor_set(v_reuseFailAlloc_2842_, 9, v_snapshotTasks_2815_);
v___x_2837_ = v_reuseFailAlloc_2842_;
goto v_reusejp_2836_;
}
v_reusejp_2836_:
{
lean_object* v___x_2838_; lean_object* v___x_2840_; 
v___x_2838_ = lean_st_ref_put(v___y_2797_, v___x_2837_);
if (v_isShared_2804_ == 0)
{
lean_ctor_set(v___x_2803_, 0, v___x_2824_);
v___x_2840_ = v___x_2803_;
goto v_reusejp_2839_;
}
else
{
lean_object* v_reuseFailAlloc_2841_; 
v_reuseFailAlloc_2841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2841_, 0, v___x_2824_);
v___x_2840_ = v_reuseFailAlloc_2841_;
goto v_reusejp_2839_;
}
v_reusejp_2839_:
{
return v___x_2840_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___boxed(lean_object* v_cls_2847_, lean_object* v_msg_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_){
_start:
{
lean_object* v_res_2854_; 
v_res_2854_ = l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(v_cls_2847_, v_msg_2848_, v___y_2849_, v___y_2850_, v___y_2851_, v___y_2852_);
lean_dec(v___y_2852_);
lean_dec_ref(v___y_2851_);
lean_dec(v___y_2850_);
lean_dec_ref(v___y_2849_);
return v_res_2854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__4(lean_object* v_env_2855_, lean_object* v_currNamespace_2856_, lean_object* v_openDecls_2857_, lean_object* v_n_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_){
_start:
{
lean_object* v___x_2861_; lean_object* v___x_2862_; 
v___x_2861_ = l_Lean_ResolveName_resolveNamespace(v_env_2855_, v_currNamespace_2856_, v_openDecls_2857_, v_n_2858_);
v___x_2862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2862_, 0, v___x_2861_);
lean_ctor_set(v___x_2862_, 1, v___y_2860_);
return v___x_2862_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__4___boxed(lean_object* v_env_2863_, lean_object* v_currNamespace_2864_, lean_object* v_openDecls_2865_, lean_object* v_n_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_){
_start:
{
lean_object* v_res_2869_; 
v_res_2869_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__4(v_env_2863_, v_currNamespace_2864_, v_openDecls_2865_, v_n_2866_, v___y_2867_, v___y_2868_);
lean_dec_ref(v___y_2867_);
return v_res_2869_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__3(void){
_start:
{
lean_object* v___x_2875_; lean_object* v___x_2876_; 
v___x_2875_ = l_Lean_maxRecDepthErrorMessage;
v___x_2876_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2876_, 0, v___x_2875_);
return v___x_2876_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__4(void){
_start:
{
lean_object* v___x_2877_; lean_object* v___x_2878_; 
v___x_2877_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__3);
v___x_2878_ = l_Lean_MessageData_ofFormat(v___x_2877_);
return v___x_2878_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__5(void){
_start:
{
lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; 
v___x_2879_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__4);
v___x_2880_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__2));
v___x_2881_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2881_, 0, v___x_2880_);
lean_ctor_set(v___x_2881_, 1, v___x_2879_);
return v___x_2881_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg(lean_object* v_ref_2882_){
_start:
{
lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; 
v___x_2884_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___closed__5);
v___x_2885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2885_, 0, v_ref_2882_);
lean_ctor_set(v___x_2885_, 1, v___x_2884_);
v___x_2886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2886_, 0, v___x_2885_);
return v___x_2886_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg___boxed(lean_object* v_ref_2887_, lean_object* v___y_2888_){
_start:
{
lean_object* v_res_2889_; 
v_res_2889_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg(v_ref_2887_);
return v_res_2889_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__2(lean_object* v_currNamespace_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_){
_start:
{
lean_object* v___x_2893_; 
v___x_2893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2893_, 0, v_currNamespace_2890_);
lean_ctor_set(v___x_2893_, 1, v___y_2892_);
return v___x_2893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__2___boxed(lean_object* v_currNamespace_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_){
_start:
{
lean_object* v_res_2897_; 
v_res_2897_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__2(v_currNamespace_2894_, v___y_2895_, v___y_2896_);
lean_dec_ref(v___y_2895_);
return v_res_2897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__0(lean_object* v_env_2898_, lean_object* v_declName_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_){
_start:
{
uint8_t v___x_2902_; lean_object* v_env_2903_; lean_object* v___x_2904_; uint8_t v___x_2905_; uint8_t v___x_2906_; 
v___x_2902_ = 0;
v_env_2903_ = l_Lean_Environment_setExporting(v_env_2898_, v___x_2902_);
lean_inc(v_declName_2899_);
v___x_2904_ = l_Lean_mkPrivateName(v_env_2903_, v_declName_2899_);
v___x_2905_ = 1;
lean_inc_ref(v_env_2903_);
v___x_2906_ = l_Lean_Environment_contains(v_env_2903_, v___x_2904_, v___x_2905_);
if (v___x_2906_ == 0)
{
lean_object* v___x_2907_; uint8_t v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; 
v___x_2907_ = l_Lean_privateToUserName(v_declName_2899_);
v___x_2908_ = l_Lean_Environment_contains(v_env_2903_, v___x_2907_, v___x_2905_);
v___x_2909_ = lean_box(v___x_2908_);
v___x_2910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2910_, 0, v___x_2909_);
lean_ctor_set(v___x_2910_, 1, v___y_2901_);
return v___x_2910_;
}
else
{
lean_object* v___x_2911_; lean_object* v___x_2912_; 
lean_dec_ref(v_env_2903_);
lean_dec(v_declName_2899_);
v___x_2911_ = lean_box(v___x_2906_);
v___x_2912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2912_, 0, v___x_2911_);
lean_ctor_set(v___x_2912_, 1, v___y_2901_);
return v___x_2912_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__0___boxed(lean_object* v_env_2913_, lean_object* v_declName_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_){
_start:
{
lean_object* v_res_2917_; 
v_res_2917_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__0(v_env_2913_, v_declName_2914_, v___y_2915_, v___y_2916_);
lean_dec_ref(v___y_2915_);
return v_res_2917_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15(lean_object* v_as_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_){
_start:
{
if (lean_obj_tag(v_as_2921_) == 0)
{
lean_object* v___x_2930_; lean_object* v___x_2931_; 
v___x_2930_ = lean_box(0);
v___x_2931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2931_, 0, v___x_2930_);
return v___x_2931_;
}
else
{
lean_object* v_toCold_2932_; lean_object* v_options_2933_; uint8_t v_hasTrace_2934_; 
v_toCold_2932_ = lean_ctor_get(v___y_2927_, 0);
v_options_2933_ = lean_ctor_get(v_toCold_2932_, 2);
v_hasTrace_2934_ = lean_ctor_get_uint8(v_options_2933_, sizeof(void*)*1);
if (v_hasTrace_2934_ == 0)
{
lean_object* v_tail_2935_; 
v_tail_2935_ = lean_ctor_get(v_as_2921_, 1);
lean_inc(v_tail_2935_);
lean_dec_ref_known(v_as_2921_, 2);
v_as_2921_ = v_tail_2935_;
goto _start;
}
else
{
lean_object* v_head_2937_; lean_object* v_tail_2938_; lean_object* v_fst_2939_; lean_object* v_snd_2940_; lean_object* v_inheritedTraceOptions_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; uint8_t v___x_2944_; 
v_head_2937_ = lean_ctor_get(v_as_2921_, 0);
lean_inc(v_head_2937_);
v_tail_2938_ = lean_ctor_get(v_as_2921_, 1);
lean_inc(v_tail_2938_);
lean_dec_ref_known(v_as_2921_, 2);
v_fst_2939_ = lean_ctor_get(v_head_2937_, 0);
lean_inc_n(v_fst_2939_, 2);
v_snd_2940_ = lean_ctor_get(v_head_2937_, 1);
lean_inc(v_snd_2940_);
lean_dec(v_head_2937_);
v_inheritedTraceOptions_2941_ = lean_ctor_get(v_toCold_2932_, 11);
v___x_2942_ = ((lean_object*)(l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___closed__1));
v___x_2943_ = l_Lean_Name_append(v___x_2942_, v_fst_2939_);
v___x_2944_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2941_, v_options_2933_, v___x_2943_);
lean_dec(v___x_2943_);
if (v___x_2944_ == 0)
{
lean_dec(v_snd_2940_);
lean_dec(v_fst_2939_);
v_as_2921_ = v_tail_2938_;
goto _start;
}
else
{
lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; 
v___x_2946_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2946_, 0, v_snd_2940_);
v___x_2947_ = l_Lean_MessageData_ofFormat(v___x_2946_);
v___x_2948_ = l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(v_fst_2939_, v___x_2947_, v___y_2925_, v___y_2926_, v___y_2927_, v___y_2928_);
if (lean_obj_tag(v___x_2948_) == 0)
{
lean_dec_ref_known(v___x_2948_, 1);
v_as_2921_ = v_tail_2938_;
goto _start;
}
else
{
lean_dec(v_tail_2938_);
return v___x_2948_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___boxed(lean_object* v_as_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_){
_start:
{
lean_object* v_res_2959_; 
v_res_2959_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15(v_as_2950_, v___y_2951_, v___y_2952_, v___y_2953_, v___y_2954_, v___y_2955_, v___y_2956_, v___y_2957_);
lean_dec(v___y_2957_);
lean_dec_ref(v___y_2956_);
lean_dec(v___y_2955_);
lean_dec_ref(v___y_2954_);
lean_dec(v___y_2953_);
lean_dec_ref(v___y_2952_);
lean_dec_ref(v___y_2951_);
return v_res_2959_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___lam__0(lean_object* v_addEntryFn_2960_, lean_object* v_entry_2961_, lean_object* v_s_2962_){
_start:
{
lean_object* v_importedEntries_2963_; lean_object* v_state_2964_; lean_object* v___x_2966_; uint8_t v_isShared_2967_; uint8_t v_isSharedCheck_2972_; 
v_importedEntries_2963_ = lean_ctor_get(v_s_2962_, 0);
v_state_2964_ = lean_ctor_get(v_s_2962_, 1);
v_isSharedCheck_2972_ = !lean_is_exclusive(v_s_2962_);
if (v_isSharedCheck_2972_ == 0)
{
v___x_2966_ = v_s_2962_;
v_isShared_2967_ = v_isSharedCheck_2972_;
goto v_resetjp_2965_;
}
else
{
lean_inc(v_state_2964_);
lean_inc(v_importedEntries_2963_);
lean_dec(v_s_2962_);
v___x_2966_ = lean_box(0);
v_isShared_2967_ = v_isSharedCheck_2972_;
goto v_resetjp_2965_;
}
v_resetjp_2965_:
{
lean_object* v_state_2968_; lean_object* v___x_2970_; 
v_state_2968_ = lean_apply_2(v_addEntryFn_2960_, v_state_2964_, v_entry_2961_);
if (v_isShared_2967_ == 0)
{
lean_ctor_set(v___x_2966_, 1, v_state_2968_);
v___x_2970_ = v___x_2966_;
goto v_reusejp_2969_;
}
else
{
lean_object* v_reuseFailAlloc_2971_; 
v_reuseFailAlloc_2971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2971_, 0, v_importedEntries_2963_);
lean_ctor_set(v_reuseFailAlloc_2971_, 1, v_state_2968_);
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
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21_spec__24___redArg___closed__0(void){
_start:
{
lean_object* v___x_2973_; 
v___x_2973_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2973_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21_spec__24___redArg___closed__1(void){
_start:
{
lean_object* v___x_2974_; lean_object* v___x_2975_; 
v___x_2974_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21_spec__24___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21_spec__24___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21_spec__24___redArg___closed__0);
v___x_2975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2975_, 0, v___x_2974_);
return v___x_2975_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21_spec__24___redArg(){
_start:
{
lean_object* v___x_2977_; 
v___x_2977_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21_spec__24___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21_spec__24___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21_spec__24___redArg___closed__1);
return v___x_2977_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21_spec__24___redArg___boxed(lean_object* v___dummy_2978_){
_start:
{
lean_object* v_res_2979_; 
v_res_2979_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21_spec__24___redArg();
return v_res_2979_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22_spec__26_spec__29___redArg(lean_object* v_keys_2980_, lean_object* v_i_2981_, lean_object* v_k_2982_){
_start:
{
lean_object* v___x_2983_; uint8_t v___x_2984_; 
v___x_2983_ = lean_array_get_size(v_keys_2980_);
v___x_2984_ = lean_nat_dec_lt(v_i_2981_, v___x_2983_);
if (v___x_2984_ == 0)
{
lean_dec(v_i_2981_);
return v___x_2984_;
}
else
{
lean_object* v_k_x27_2985_; uint8_t v___x_2986_; 
v_k_x27_2985_ = lean_array_fget_borrowed(v_keys_2980_, v_i_2981_);
v___x_2986_ = l_Lean_instBEqExtraModUse_beq(v_k_2982_, v_k_x27_2985_);
if (v___x_2986_ == 0)
{
lean_object* v___x_2987_; lean_object* v___x_2988_; 
v___x_2987_ = lean_unsigned_to_nat(1u);
v___x_2988_ = lean_nat_add(v_i_2981_, v___x_2987_);
lean_dec(v_i_2981_);
v_i_2981_ = v___x_2988_;
goto _start;
}
else
{
lean_dec(v_i_2981_);
return v___x_2984_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22_spec__26_spec__29___redArg___boxed(lean_object* v_keys_2990_, lean_object* v_i_2991_, lean_object* v_k_2992_){
_start:
{
uint8_t v_res_2993_; lean_object* v_r_2994_; 
v_res_2993_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22_spec__26_spec__29___redArg(v_keys_2990_, v_i_2991_, v_k_2992_);
lean_dec_ref(v_k_2992_);
lean_dec_ref(v_keys_2990_);
v_r_2994_ = lean_box(v_res_2993_);
return v_r_2994_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22_spec__26___redArg(lean_object* v_x_2995_, size_t v_x_2996_, lean_object* v_x_2997_){
_start:
{
if (lean_obj_tag(v_x_2995_) == 0)
{
lean_object* v_es_2998_; lean_object* v___x_2999_; size_t v___x_3000_; size_t v___x_3001_; lean_object* v_j_3002_; lean_object* v___x_3003_; 
v_es_2998_ = lean_ctor_get(v_x_2995_, 0);
v___x_2999_ = lean_box(2);
v___x_3000_ = ((size_t)31ULL);
v___x_3001_ = lean_usize_land(v_x_2996_, v___x_3000_);
v_j_3002_ = lean_usize_to_nat(v___x_3001_);
v___x_3003_ = lean_array_get_borrowed(v___x_2999_, v_es_2998_, v_j_3002_);
lean_dec(v_j_3002_);
switch(lean_obj_tag(v___x_3003_))
{
case 0:
{
lean_object* v_key_3004_; uint8_t v___x_3005_; 
v_key_3004_ = lean_ctor_get(v___x_3003_, 0);
v___x_3005_ = l_Lean_instBEqExtraModUse_beq(v_x_2997_, v_key_3004_);
return v___x_3005_;
}
case 1:
{
lean_object* v_node_3006_; size_t v___x_3007_; size_t v___x_3008_; 
v_node_3006_ = lean_ctor_get(v___x_3003_, 0);
v___x_3007_ = ((size_t)5ULL);
v___x_3008_ = lean_usize_shift_right(v_x_2996_, v___x_3007_);
v_x_2995_ = v_node_3006_;
v_x_2996_ = v___x_3008_;
goto _start;
}
default: 
{
uint8_t v___x_3010_; 
v___x_3010_ = 0;
return v___x_3010_;
}
}
}
else
{
lean_object* v_ks_3011_; lean_object* v___x_3012_; uint8_t v___x_3013_; 
v_ks_3011_ = lean_ctor_get(v_x_2995_, 0);
v___x_3012_ = lean_unsigned_to_nat(0u);
v___x_3013_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22_spec__26_spec__29___redArg(v_ks_3011_, v___x_3012_, v_x_2997_);
return v___x_3013_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22_spec__26___redArg___boxed(lean_object* v_x_3014_, lean_object* v_x_3015_, lean_object* v_x_3016_){
_start:
{
size_t v_x_97485__boxed_3017_; uint8_t v_res_3018_; lean_object* v_r_3019_; 
v_x_97485__boxed_3017_ = lean_unbox_usize(v_x_3015_);
lean_dec(v_x_3015_);
v_res_3018_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22_spec__26___redArg(v_x_3014_, v_x_97485__boxed_3017_, v_x_3016_);
lean_dec_ref(v_x_3016_);
lean_dec_ref(v_x_3014_);
v_r_3019_ = lean_box(v_res_3018_);
return v_r_3019_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22___redArg(lean_object* v_x_3020_, lean_object* v_x_3021_){
_start:
{
uint64_t v___x_3022_; size_t v___x_3023_; uint8_t v___x_3024_; 
v___x_3022_ = l_Lean_instHashableExtraModUse_hash(v_x_3021_);
v___x_3023_ = lean_uint64_to_usize(v___x_3022_);
v___x_3024_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22_spec__26___redArg(v_x_3020_, v___x_3023_, v_x_3021_);
return v___x_3024_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22___redArg___boxed(lean_object* v_x_3025_, lean_object* v_x_3026_){
_start:
{
uint8_t v_res_3027_; lean_object* v_r_3028_; 
v_res_3027_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22___redArg(v_x_3025_, v_x_3026_);
lean_dec_ref(v_x_3026_);
lean_dec_ref(v_x_3025_);
v_r_3028_ = lean_box(v_res_3027_);
return v_r_3028_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__0(void){
_start:
{
lean_object* v___x_3029_; lean_object* v___x_3030_; 
v___x_3029_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21_spec__24___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21_spec__24___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21_spec__24___redArg___closed__0);
v___x_3030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3030_, 0, v___x_3029_);
return v___x_3030_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__1(void){
_start:
{
lean_object* v___x_3031_; lean_object* v___x_3032_; 
v___x_3031_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__0);
v___x_3032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3032_, 0, v___x_3031_);
lean_ctor_set(v___x_3032_, 1, v___x_3031_);
return v___x_3032_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__2(void){
_start:
{
lean_object* v___x_3033_; 
v___x_3033_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21_spec__24___redArg();
return v___x_3033_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__3(void){
_start:
{
lean_object* v___x_3034_; lean_object* v___x_3035_; 
v___x_3034_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__0);
v___x_3035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3035_, 0, v___x_3034_);
lean_ctor_set(v___x_3035_, 1, v___x_3034_);
return v___x_3035_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__4(void){
_start:
{
lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; 
v___x_3036_ = lean_unsigned_to_nat(0u);
v___x_3037_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__0);
v___x_3038_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3038_, 0, v___x_3037_);
lean_ctor_set(v___x_3038_, 1, v___x_3037_);
lean_ctor_set(v___x_3038_, 2, v___x_3036_);
return v___x_3038_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__5(void){
_start:
{
lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; 
v___x_3039_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__4);
v___x_3040_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__3);
v___x_3041_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__0);
v___x_3042_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__2);
v___x_3043_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_3043_, 0, v___x_3042_);
lean_ctor_set(v___x_3043_, 1, v___x_3041_);
lean_ctor_set(v___x_3043_, 2, v___x_3040_);
lean_ctor_set(v___x_3043_, 3, v___x_3041_);
lean_ctor_set(v___x_3043_, 4, v___x_3041_);
lean_ctor_set(v___x_3043_, 5, v___x_3041_);
lean_ctor_set(v___x_3043_, 6, v___x_3041_);
lean_ctor_set(v___x_3043_, 7, v___x_3039_);
return v___x_3043_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__6(void){
_start:
{
lean_object* v___x_3044_; 
v___x_3044_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_3044_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__10(void){
_start:
{
lean_object* v___x_3049_; lean_object* v___x_3050_; 
v___x_3049_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__9));
v___x_3050_ = l_Lean_stringToMessageData(v___x_3049_);
return v___x_3050_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__12(void){
_start:
{
lean_object* v___x_3052_; lean_object* v___x_3053_; 
v___x_3052_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__11));
v___x_3053_ = l_Lean_stringToMessageData(v___x_3052_);
return v___x_3053_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__13(void){
_start:
{
lean_object* v___x_3054_; lean_object* v___x_3055_; 
v___x_3054_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22));
v___x_3055_ = l_Lean_stringToMessageData(v___x_3054_);
return v___x_3055_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__14(void){
_start:
{
lean_object* v_cls_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; 
v_cls_3056_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__8));
v___x_3057_ = ((lean_object*)(l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___closed__1));
v___x_3058_ = l_Lean_Name_append(v___x_3057_, v_cls_3056_);
return v___x_3058_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__16(void){
_start:
{
lean_object* v___x_3060_; lean_object* v___x_3061_; 
v___x_3060_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__15));
v___x_3061_ = l_Lean_stringToMessageData(v___x_3060_);
return v___x_3061_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__18(void){
_start:
{
lean_object* v___x_3063_; lean_object* v___x_3064_; 
v___x_3063_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__17));
v___x_3064_ = l_Lean_stringToMessageData(v___x_3063_);
return v___x_3064_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17(lean_object* v_mod_3069_, uint8_t v_isMeta_3070_, lean_object* v_hint_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_){
_start:
{
lean_object* v___y_3081_; lean_object* v___y_3082_; lean_object* v___y_3083_; lean_object* v___y_3084_; lean_object* v___y_3085_; lean_object* v___y_3086_; lean_object* v___y_3087_; lean_object* v___y_3088_; lean_object* v___y_3089_; lean_object* v___y_3090_; lean_object* v___y_3091_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v_env_3114_; uint8_t v_isExporting_3115_; lean_object* v_entry_3116_; lean_object* v___y_3118_; lean_object* v___y_3119_; lean_object* v___x_3141_; lean_object* v_env_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; uint8_t v___x_3147_; 
v___x_3112_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__6);
v___x_3113_ = lean_st_ref_get(v___y_3078_);
v_env_3114_ = lean_ctor_get(v___x_3113_, 0);
lean_inc_ref(v_env_3114_);
lean_dec(v___x_3113_);
v_isExporting_3115_ = lean_ctor_get_uint8(v_env_3114_, sizeof(void*)*13);
lean_dec_ref(v_env_3114_);
lean_inc(v_mod_3069_);
v_entry_3116_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_3116_, 0, v_mod_3069_);
lean_ctor_set_uint8(v_entry_3116_, sizeof(void*)*1, v_isExporting_3115_);
lean_ctor_set_uint8(v_entry_3116_, sizeof(void*)*1 + 1, v_isMeta_3070_);
v___x_3141_ = lean_st_ref_get(v___y_3078_);
v_env_3142_ = lean_ctor_get(v___x_3141_, 0);
lean_inc_ref(v_env_3142_);
lean_dec(v___x_3141_);
v___x_3143_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_3144_ = lean_box(1);
v___x_3145_ = lean_box(0);
v___x_3146_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3112_, v___x_3143_, v_env_3142_, v___x_3144_, v___x_3145_);
v___x_3147_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22___redArg(v___x_3146_, v_entry_3116_);
lean_dec(v___x_3146_);
if (v___x_3147_ == 0)
{
lean_object* v_toCold_3148_; lean_object* v_options_3149_; uint8_t v_hasTrace_3150_; 
v_toCold_3148_ = lean_ctor_get(v___y_3077_, 0);
v_options_3149_ = lean_ctor_get(v_toCold_3148_, 2);
v_hasTrace_3150_ = lean_ctor_get_uint8(v_options_3149_, sizeof(void*)*1);
if (v_hasTrace_3150_ == 0)
{
lean_dec(v_hint_3071_);
lean_dec(v_mod_3069_);
v___y_3118_ = v___y_3076_;
v___y_3119_ = v___y_3078_;
goto v___jp_3117_;
}
else
{
lean_object* v_inheritedTraceOptions_3151_; lean_object* v_cls_3152_; lean_object* v___y_3154_; lean_object* v___y_3155_; lean_object* v___y_3159_; lean_object* v___y_3160_; lean_object* v___x_3172_; uint8_t v___x_3173_; 
v_inheritedTraceOptions_3151_ = lean_ctor_get(v_toCold_3148_, 11);
v_cls_3152_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__8));
v___x_3172_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__14);
v___x_3173_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3151_, v_options_3149_, v___x_3172_);
if (v___x_3173_ == 0)
{
lean_dec(v_hint_3071_);
lean_dec(v_mod_3069_);
v___y_3118_ = v___y_3076_;
v___y_3119_ = v___y_3078_;
goto v___jp_3117_;
}
else
{
lean_object* v___x_3174_; lean_object* v___y_3176_; 
v___x_3174_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__16);
if (v_isExporting_3115_ == 0)
{
lean_object* v___x_3183_; 
v___x_3183_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__21));
v___y_3176_ = v___x_3183_;
goto v___jp_3175_;
}
else
{
lean_object* v___x_3184_; 
v___x_3184_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__22));
v___y_3176_ = v___x_3184_;
goto v___jp_3175_;
}
v___jp_3175_:
{
lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; 
lean_inc_ref(v___y_3176_);
v___x_3177_ = l_Lean_stringToMessageData(v___y_3176_);
v___x_3178_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3178_, 0, v___x_3174_);
lean_ctor_set(v___x_3178_, 1, v___x_3177_);
v___x_3179_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__18, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__18_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__18);
v___x_3180_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3180_, 0, v___x_3178_);
lean_ctor_set(v___x_3180_, 1, v___x_3179_);
if (v_isMeta_3070_ == 0)
{
lean_object* v___x_3181_; 
v___x_3181_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__19));
v___y_3159_ = v___x_3180_;
v___y_3160_ = v___x_3181_;
goto v___jp_3158_;
}
else
{
lean_object* v___x_3182_; 
v___x_3182_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__20));
v___y_3159_ = v___x_3180_;
v___y_3160_ = v___x_3182_;
goto v___jp_3158_;
}
}
}
v___jp_3153_:
{
lean_object* v___x_3156_; lean_object* v___x_3157_; 
v___x_3156_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3156_, 0, v___y_3154_);
lean_ctor_set(v___x_3156_, 1, v___y_3155_);
v___x_3157_ = l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(v_cls_3152_, v___x_3156_, v___y_3075_, v___y_3076_, v___y_3077_, v___y_3078_);
if (lean_obj_tag(v___x_3157_) == 0)
{
lean_dec_ref_known(v___x_3157_, 1);
v___y_3118_ = v___y_3076_;
v___y_3119_ = v___y_3078_;
goto v___jp_3117_;
}
else
{
lean_dec_ref_known(v_entry_3116_, 1);
return v___x_3157_;
}
}
v___jp_3158_:
{
lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; uint8_t v___x_3167_; 
lean_inc_ref(v___y_3160_);
v___x_3161_ = l_Lean_stringToMessageData(v___y_3160_);
v___x_3162_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3162_, 0, v___y_3159_);
lean_ctor_set(v___x_3162_, 1, v___x_3161_);
v___x_3163_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__10);
v___x_3164_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3164_, 0, v___x_3162_);
lean_ctor_set(v___x_3164_, 1, v___x_3163_);
v___x_3165_ = l_Lean_MessageData_ofName(v_mod_3069_);
v___x_3166_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3166_, 0, v___x_3164_);
lean_ctor_set(v___x_3166_, 1, v___x_3165_);
v___x_3167_ = l_Lean_Name_isAnonymous(v_hint_3071_);
if (v___x_3167_ == 0)
{
lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; 
v___x_3168_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__12);
v___x_3169_ = l_Lean_MessageData_ofName(v_hint_3071_);
v___x_3170_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3170_, 0, v___x_3168_);
lean_ctor_set(v___x_3170_, 1, v___x_3169_);
v___y_3154_ = v___x_3166_;
v___y_3155_ = v___x_3170_;
goto v___jp_3153_;
}
else
{
lean_object* v___x_3171_; 
lean_dec(v_hint_3071_);
v___x_3171_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__13);
v___y_3154_ = v___x_3166_;
v___y_3155_ = v___x_3171_;
goto v___jp_3153_;
}
}
}
}
else
{
lean_object* v___x_3185_; lean_object* v___x_3186_; 
lean_dec_ref_known(v_entry_3116_, 1);
lean_dec(v_hint_3071_);
lean_dec(v_mod_3069_);
v___x_3185_ = lean_box(0);
v___x_3186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3186_, 0, v___x_3185_);
return v___x_3186_;
}
v___jp_3080_:
{
lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v_mctx_3096_; lean_object* v_zetaDeltaFVarIds_3097_; lean_object* v_postponed_3098_; lean_object* v_diag_3099_; lean_object* v___x_3101_; uint8_t v_isShared_3102_; uint8_t v_isSharedCheck_3110_; 
v___x_3092_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__1);
v___x_3093_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_3093_, 0, v___y_3091_);
lean_ctor_set(v___x_3093_, 1, v___y_3085_);
lean_ctor_set(v___x_3093_, 2, v___y_3081_);
lean_ctor_set(v___x_3093_, 3, v___y_3087_);
lean_ctor_set(v___x_3093_, 4, v___y_3083_);
lean_ctor_set(v___x_3093_, 5, v___x_3092_);
lean_ctor_set(v___x_3093_, 6, v___y_3082_);
lean_ctor_set(v___x_3093_, 7, v___y_3090_);
lean_ctor_set(v___x_3093_, 8, v___y_3086_);
lean_ctor_set(v___x_3093_, 9, v___y_3084_);
v___x_3094_ = lean_st_ref_put(v___y_3089_, v___x_3093_);
v___x_3095_ = lean_st_ref_take(v___y_3088_);
v_mctx_3096_ = lean_ctor_get(v___x_3095_, 0);
v_zetaDeltaFVarIds_3097_ = lean_ctor_get(v___x_3095_, 2);
v_postponed_3098_ = lean_ctor_get(v___x_3095_, 3);
v_diag_3099_ = lean_ctor_get(v___x_3095_, 4);
v_isSharedCheck_3110_ = !lean_is_exclusive(v___x_3095_);
if (v_isSharedCheck_3110_ == 0)
{
lean_object* v_unused_3111_; 
v_unused_3111_ = lean_ctor_get(v___x_3095_, 1);
lean_dec(v_unused_3111_);
v___x_3101_ = v___x_3095_;
v_isShared_3102_ = v_isSharedCheck_3110_;
goto v_resetjp_3100_;
}
else
{
lean_inc(v_diag_3099_);
lean_inc(v_postponed_3098_);
lean_inc(v_zetaDeltaFVarIds_3097_);
lean_inc(v_mctx_3096_);
lean_dec(v___x_3095_);
v___x_3101_ = lean_box(0);
v_isShared_3102_ = v_isSharedCheck_3110_;
goto v_resetjp_3100_;
}
v_resetjp_3100_:
{
lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3106_; 
v___x_3103_ = lean_box(0);
v___x_3104_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__5);
if (v_isShared_3102_ == 0)
{
lean_ctor_set(v___x_3101_, 1, v___x_3104_);
v___x_3106_ = v___x_3101_;
goto v_reusejp_3105_;
}
else
{
lean_object* v_reuseFailAlloc_3109_; 
v_reuseFailAlloc_3109_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3109_, 0, v_mctx_3096_);
lean_ctor_set(v_reuseFailAlloc_3109_, 1, v___x_3104_);
lean_ctor_set(v_reuseFailAlloc_3109_, 2, v_zetaDeltaFVarIds_3097_);
lean_ctor_set(v_reuseFailAlloc_3109_, 3, v_postponed_3098_);
lean_ctor_set(v_reuseFailAlloc_3109_, 4, v_diag_3099_);
v___x_3106_ = v_reuseFailAlloc_3109_;
goto v_reusejp_3105_;
}
v_reusejp_3105_:
{
lean_object* v___x_3107_; lean_object* v___x_3108_; 
v___x_3107_ = lean_st_ref_put(v___y_3088_, v___x_3106_);
v___x_3108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3108_, 0, v___x_3103_);
return v___x_3108_;
}
}
}
v___jp_3117_:
{
lean_object* v___x_3120_; lean_object* v_env_3121_; lean_object* v_nextMacroScope_3122_; lean_object* v_ngen_3123_; lean_object* v_auxDeclNGen_3124_; lean_object* v_traceState_3125_; lean_object* v_recordedDeps_3126_; lean_object* v_messages_3127_; lean_object* v_infoState_3128_; lean_object* v_snapshotTasks_3129_; lean_object* v___x_3130_; lean_object* v_toEnvExtension_3131_; lean_object* v_addEntryFn_3132_; lean_object* v_asyncMode_3133_; uint8_t v_logWrites_3134_; lean_object* v___f_3135_; lean_object* v___x_3136_; uint8_t v___x_3137_; 
v___x_3120_ = lean_st_ref_take(v___y_3119_);
v_env_3121_ = lean_ctor_get(v___x_3120_, 0);
lean_inc_ref(v_env_3121_);
v_nextMacroScope_3122_ = lean_ctor_get(v___x_3120_, 1);
lean_inc(v_nextMacroScope_3122_);
v_ngen_3123_ = lean_ctor_get(v___x_3120_, 2);
lean_inc_ref(v_ngen_3123_);
v_auxDeclNGen_3124_ = lean_ctor_get(v___x_3120_, 3);
lean_inc_ref(v_auxDeclNGen_3124_);
v_traceState_3125_ = lean_ctor_get(v___x_3120_, 4);
lean_inc_ref(v_traceState_3125_);
v_recordedDeps_3126_ = lean_ctor_get(v___x_3120_, 6);
lean_inc_ref(v_recordedDeps_3126_);
v_messages_3127_ = lean_ctor_get(v___x_3120_, 7);
lean_inc_ref(v_messages_3127_);
v_infoState_3128_ = lean_ctor_get(v___x_3120_, 8);
lean_inc_ref(v_infoState_3128_);
v_snapshotTasks_3129_ = lean_ctor_get(v___x_3120_, 9);
lean_inc_ref(v_snapshotTasks_3129_);
lean_dec(v___x_3120_);
v___x_3130_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v_toEnvExtension_3131_ = lean_ctor_get(v___x_3130_, 0);
v_addEntryFn_3132_ = lean_ctor_get(v___x_3130_, 3);
v_asyncMode_3133_ = lean_ctor_get(v_toEnvExtension_3131_, 2);
v_logWrites_3134_ = lean_ctor_get_uint8(v_toEnvExtension_3131_, sizeof(void*)*6);
lean_inc(v_addEntryFn_3132_);
v___f_3135_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___lam__0), 3, 2);
lean_closure_set(v___f_3135_, 0, v_addEntryFn_3132_);
lean_closure_set(v___f_3135_, 1, v_entry_3116_);
v___x_3136_ = lean_box(0);
v___x_3137_ = 1;
if (v_logWrites_3134_ == 0)
{
lean_object* v___x_3138_; 
lean_inc_ref(v_toEnvExtension_3131_);
v___x_3138_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3131_, v_env_3121_, v___f_3135_, v_asyncMode_3133_, v___x_3136_, v___x_3137_);
v___y_3081_ = v_ngen_3123_;
v___y_3082_ = v_recordedDeps_3126_;
v___y_3083_ = v_traceState_3125_;
v___y_3084_ = v_snapshotTasks_3129_;
v___y_3085_ = v_nextMacroScope_3122_;
v___y_3086_ = v_infoState_3128_;
v___y_3087_ = v_auxDeclNGen_3124_;
v___y_3088_ = v___y_3118_;
v___y_3089_ = v___y_3119_;
v___y_3090_ = v_messages_3127_;
v___y_3091_ = v___x_3138_;
goto v___jp_3080_;
}
else
{
lean_object* v___x_3139_; lean_object* v___x_3140_; 
lean_inc_ref_n(v_toEnvExtension_3131_, 2);
v___x_3139_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_3131_, v_env_3121_);
lean_dec_ref(v_env_3121_);
v___x_3140_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3131_, v___x_3139_, v___f_3135_, v_asyncMode_3133_, v___x_3136_, v___x_3137_);
v___y_3081_ = v_ngen_3123_;
v___y_3082_ = v_recordedDeps_3126_;
v___y_3083_ = v_traceState_3125_;
v___y_3084_ = v_snapshotTasks_3129_;
v___y_3085_ = v_nextMacroScope_3122_;
v___y_3086_ = v_infoState_3128_;
v___y_3087_ = v_auxDeclNGen_3124_;
v___y_3088_ = v___y_3118_;
v___y_3089_ = v___y_3119_;
v___y_3090_ = v_messages_3127_;
v___y_3091_ = v___x_3140_;
goto v___jp_3080_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___boxed(lean_object* v_mod_3187_, lean_object* v_isMeta_3188_, lean_object* v_hint_3189_, lean_object* v___y_3190_, lean_object* v___y_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_, lean_object* v___y_3196_, lean_object* v___y_3197_){
_start:
{
uint8_t v_isMeta_boxed_3198_; lean_object* v_res_3199_; 
v_isMeta_boxed_3198_ = lean_unbox(v_isMeta_3188_);
v_res_3199_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17(v_mod_3187_, v_isMeta_boxed_3198_, v_hint_3189_, v___y_3190_, v___y_3191_, v___y_3192_, v___y_3193_, v___y_3194_, v___y_3195_, v___y_3196_);
lean_dec(v___y_3196_);
lean_dec_ref(v___y_3195_);
lean_dec(v___y_3194_);
lean_dec_ref(v___y_3193_);
lean_dec(v___y_3192_);
lean_dec_ref(v___y_3191_);
lean_dec_ref(v___y_3190_);
return v_res_3199_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__18(lean_object* v___x_3200_, lean_object* v_declName_3201_, lean_object* v_as_3202_, size_t v_sz_3203_, size_t v_i_3204_, lean_object* v_b_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_){
_start:
{
uint8_t v___x_3214_; 
v___x_3214_ = lean_usize_dec_lt(v_i_3204_, v_sz_3203_);
if (v___x_3214_ == 0)
{
lean_object* v___x_3215_; 
lean_dec(v_declName_3201_);
v___x_3215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3215_, 0, v_b_3205_);
return v___x_3215_;
}
else
{
lean_object* v___x_3216_; lean_object* v_modules_3217_; lean_object* v___x_3218_; lean_object* v_a_3219_; lean_object* v___x_3220_; lean_object* v_toImport_3221_; lean_object* v_module_3222_; lean_object* v___x_3223_; uint8_t v___x_3224_; lean_object* v___x_3225_; 
v___x_3216_ = l_Lean_Environment_header(v___x_3200_);
v_modules_3217_ = lean_ctor_get(v___x_3216_, 3);
lean_inc_ref(v_modules_3217_);
lean_dec_ref(v___x_3216_);
v___x_3218_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_3219_ = lean_array_uget_borrowed(v_as_3202_, v_i_3204_);
v___x_3220_ = lean_array_get(v___x_3218_, v_modules_3217_, v_a_3219_);
lean_dec_ref(v_modules_3217_);
v_toImport_3221_ = lean_ctor_get(v___x_3220_, 0);
lean_inc_ref(v_toImport_3221_);
lean_dec(v___x_3220_);
v_module_3222_ = lean_ctor_get(v_toImport_3221_, 0);
lean_inc(v_module_3222_);
lean_dec_ref(v_toImport_3221_);
v___x_3223_ = lean_box(0);
v___x_3224_ = 0;
lean_inc(v_declName_3201_);
v___x_3225_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17(v_module_3222_, v___x_3224_, v_declName_3201_, v___y_3206_, v___y_3207_, v___y_3208_, v___y_3209_, v___y_3210_, v___y_3211_, v___y_3212_);
if (lean_obj_tag(v___x_3225_) == 0)
{
size_t v___x_3226_; size_t v___x_3227_; 
lean_dec_ref_known(v___x_3225_, 1);
v___x_3226_ = ((size_t)1ULL);
v___x_3227_ = lean_usize_add(v_i_3204_, v___x_3226_);
v_i_3204_ = v___x_3227_;
v_b_3205_ = v___x_3223_;
goto _start;
}
else
{
lean_dec(v_declName_3201_);
return v___x_3225_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__18___boxed(lean_object* v___x_3229_, lean_object* v_declName_3230_, lean_object* v_as_3231_, lean_object* v_sz_3232_, lean_object* v_i_3233_, lean_object* v_b_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_){
_start:
{
size_t v_sz_boxed_3243_; size_t v_i_boxed_3244_; lean_object* v_res_3245_; 
v_sz_boxed_3243_ = lean_unbox_usize(v_sz_3232_);
lean_dec(v_sz_3232_);
v_i_boxed_3244_ = lean_unbox_usize(v_i_3233_);
lean_dec(v_i_3233_);
v_res_3245_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__18(v___x_3229_, v_declName_3230_, v_as_3231_, v_sz_boxed_3243_, v_i_boxed_3244_, v_b_3234_, v___y_3235_, v___y_3236_, v___y_3237_, v___y_3238_, v___y_3239_, v___y_3240_, v___y_3241_);
lean_dec(v___y_3241_);
lean_dec_ref(v___y_3240_);
lean_dec(v___y_3239_);
lean_dec_ref(v___y_3238_);
lean_dec(v___y_3237_);
lean_dec_ref(v___y_3236_);
lean_dec_ref(v___y_3235_);
lean_dec_ref(v_as_3231_);
lean_dec_ref(v___x_3229_);
return v_res_3245_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__19_spec__25___redArg(lean_object* v_a_3246_, lean_object* v_x_3247_){
_start:
{
if (lean_obj_tag(v_x_3247_) == 0)
{
lean_object* v___x_3248_; 
v___x_3248_ = lean_box(0);
return v___x_3248_;
}
else
{
lean_object* v_key_3249_; lean_object* v_value_3250_; lean_object* v_tail_3251_; uint8_t v___x_3252_; 
v_key_3249_ = lean_ctor_get(v_x_3247_, 0);
v_value_3250_ = lean_ctor_get(v_x_3247_, 1);
v_tail_3251_ = lean_ctor_get(v_x_3247_, 2);
v___x_3252_ = lean_name_eq(v_key_3249_, v_a_3246_);
if (v___x_3252_ == 0)
{
v_x_3247_ = v_tail_3251_;
goto _start;
}
else
{
lean_object* v___x_3254_; 
lean_inc(v_value_3250_);
v___x_3254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3254_, 0, v_value_3250_);
return v___x_3254_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__19_spec__25___redArg___boxed(lean_object* v_a_3255_, lean_object* v_x_3256_){
_start:
{
lean_object* v_res_3257_; 
v_res_3257_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__19_spec__25___redArg(v_a_3255_, v_x_3256_);
lean_dec(v_x_3256_);
lean_dec(v_a_3255_);
return v_res_3257_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__19___redArg(lean_object* v_m_3258_, lean_object* v_a_3259_){
_start:
{
lean_object* v_buckets_3260_; lean_object* v___x_3261_; uint64_t v___y_3263_; 
v_buckets_3260_ = lean_ctor_get(v_m_3258_, 1);
v___x_3261_ = lean_array_get_size(v_buckets_3260_);
if (lean_obj_tag(v_a_3259_) == 0)
{
uint64_t v___x_3277_; 
v___x_3277_ = 1723ULL;
v___y_3263_ = v___x_3277_;
goto v___jp_3262_;
}
else
{
uint64_t v_hash_3278_; 
v_hash_3278_ = lean_ctor_get_uint64(v_a_3259_, sizeof(void*)*2);
v___y_3263_ = v_hash_3278_;
goto v___jp_3262_;
}
v___jp_3262_:
{
uint64_t v___x_3264_; uint64_t v___x_3265_; uint64_t v_fold_3266_; uint64_t v___x_3267_; uint64_t v___x_3268_; uint64_t v___x_3269_; size_t v___x_3270_; size_t v___x_3271_; size_t v___x_3272_; size_t v___x_3273_; size_t v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; 
v___x_3264_ = 32ULL;
v___x_3265_ = lean_uint64_shift_right(v___y_3263_, v___x_3264_);
v_fold_3266_ = lean_uint64_xor(v___y_3263_, v___x_3265_);
v___x_3267_ = 16ULL;
v___x_3268_ = lean_uint64_shift_right(v_fold_3266_, v___x_3267_);
v___x_3269_ = lean_uint64_xor(v_fold_3266_, v___x_3268_);
v___x_3270_ = lean_uint64_to_usize(v___x_3269_);
v___x_3271_ = lean_usize_of_nat(v___x_3261_);
v___x_3272_ = ((size_t)1ULL);
v___x_3273_ = lean_usize_sub(v___x_3271_, v___x_3272_);
v___x_3274_ = lean_usize_land(v___x_3270_, v___x_3273_);
v___x_3275_ = lean_array_uget_borrowed(v_buckets_3260_, v___x_3274_);
v___x_3276_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__19_spec__25___redArg(v_a_3259_, v___x_3275_);
return v___x_3276_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__19___redArg___boxed(lean_object* v_m_3279_, lean_object* v_a_3280_){
_start:
{
lean_object* v_res_3281_; 
v_res_3281_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__19___redArg(v_m_3279_, v_a_3280_);
lean_dec(v_a_3280_);
lean_dec_ref(v_m_3279_);
return v_res_3281_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___closed__0(void){
_start:
{
lean_object* v___x_3282_; 
v___x_3282_ = l_Std_HashMap_instInhabited___redArg();
return v___x_3282_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13(lean_object* v_declName_3285_, uint8_t v_isMeta_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_){
_start:
{
lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v_env_3300_; lean_object* v___y_3302_; lean_object* v___x_3315_; 
v___x_3295_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___closed__0);
v___x_3296_ = lean_st_ref_get(v___y_3293_);
v_env_3300_ = lean_ctor_get(v___x_3296_, 0);
lean_inc_ref(v_env_3300_);
lean_dec(v___x_3296_);
v___x_3315_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3300_, v_declName_3285_);
if (lean_obj_tag(v___x_3315_) == 0)
{
lean_dec_ref(v_env_3300_);
lean_dec(v_declName_3285_);
goto v___jp_3297_;
}
else
{
lean_object* v_val_3316_; lean_object* v___x_3317_; lean_object* v_modules_3318_; lean_object* v___x_3319_; uint8_t v___x_3320_; 
v_val_3316_ = lean_ctor_get(v___x_3315_, 0);
lean_inc(v_val_3316_);
lean_dec_ref_known(v___x_3315_, 1);
v___x_3317_ = l_Lean_Environment_header(v_env_3300_);
v_modules_3318_ = lean_ctor_get(v___x_3317_, 3);
lean_inc_ref(v_modules_3318_);
lean_dec_ref(v___x_3317_);
v___x_3319_ = lean_array_get_size(v_modules_3318_);
v___x_3320_ = lean_nat_dec_lt(v_val_3316_, v___x_3319_);
if (v___x_3320_ == 0)
{
lean_dec_ref(v_modules_3318_);
lean_dec(v_val_3316_);
lean_dec_ref(v_env_3300_);
lean_dec(v_declName_3285_);
goto v___jp_3297_;
}
else
{
lean_object* v___x_3321_; lean_object* v___x_3322_; uint8_t v___y_3324_; 
v___x_3321_ = lean_array_fget(v_modules_3318_, v_val_3316_);
lean_dec(v_val_3316_);
lean_dec_ref(v_modules_3318_);
v___x_3322_ = lean_st_ref_get(v___y_3293_);
if (v_isMeta_3286_ == 0)
{
lean_dec(v___x_3322_);
v___y_3324_ = v_isMeta_3286_;
goto v___jp_3323_;
}
else
{
lean_object* v_env_3335_; uint8_t v___x_3336_; 
v_env_3335_ = lean_ctor_get(v___x_3322_, 0);
lean_inc_ref(v_env_3335_);
lean_dec(v___x_3322_);
lean_inc(v_declName_3285_);
v___x_3336_ = l_Lean_isMarkedMeta(v_env_3335_, v_declName_3285_);
if (v___x_3336_ == 0)
{
v___y_3324_ = v_isMeta_3286_;
goto v___jp_3323_;
}
else
{
uint8_t v___x_3337_; 
v___x_3337_ = 0;
v___y_3324_ = v___x_3337_;
goto v___jp_3323_;
}
}
v___jp_3323_:
{
lean_object* v_toImport_3325_; lean_object* v_module_3326_; lean_object* v___x_3327_; 
v_toImport_3325_ = lean_ctor_get(v___x_3321_, 0);
lean_inc_ref(v_toImport_3325_);
lean_dec(v___x_3321_);
v_module_3326_ = lean_ctor_get(v_toImport_3325_, 0);
lean_inc(v_module_3326_);
lean_dec_ref(v_toImport_3325_);
lean_inc(v_declName_3285_);
v___x_3327_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17(v_module_3326_, v___y_3324_, v_declName_3285_, v___y_3287_, v___y_3288_, v___y_3289_, v___y_3290_, v___y_3291_, v___y_3292_, v___y_3293_);
if (lean_obj_tag(v___x_3327_) == 0)
{
lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; 
lean_dec_ref_known(v___x_3327_, 1);
v___x_3328_ = l_Lean_indirectModUseExt;
v___x_3329_ = lean_box(1);
v___x_3330_ = lean_box(0);
lean_inc_ref(v_env_3300_);
v___x_3331_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3295_, v___x_3328_, v_env_3300_, v___x_3329_, v___x_3330_);
v___x_3332_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__19___redArg(v___x_3331_, v_declName_3285_);
lean_dec(v___x_3331_);
if (lean_obj_tag(v___x_3332_) == 0)
{
lean_object* v___x_3333_; 
v___x_3333_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___closed__1));
v___y_3302_ = v___x_3333_;
goto v___jp_3301_;
}
else
{
lean_object* v_val_3334_; 
v_val_3334_ = lean_ctor_get(v___x_3332_, 0);
lean_inc(v_val_3334_);
lean_dec_ref_known(v___x_3332_, 1);
v___y_3302_ = v_val_3334_;
goto v___jp_3301_;
}
}
else
{
lean_dec_ref(v_env_3300_);
lean_dec(v_declName_3285_);
return v___x_3327_;
}
}
}
}
v___jp_3297_:
{
lean_object* v___x_3298_; lean_object* v___x_3299_; 
v___x_3298_ = lean_box(0);
v___x_3299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3299_, 0, v___x_3298_);
return v___x_3299_;
}
v___jp_3301_:
{
lean_object* v___x_3303_; size_t v_sz_3304_; size_t v___x_3305_; lean_object* v___x_3306_; 
v___x_3303_ = lean_box(0);
v_sz_3304_ = lean_array_size(v___y_3302_);
v___x_3305_ = ((size_t)0ULL);
v___x_3306_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__18(v_env_3300_, v_declName_3285_, v___y_3302_, v_sz_3304_, v___x_3305_, v___x_3303_, v___y_3287_, v___y_3288_, v___y_3289_, v___y_3290_, v___y_3291_, v___y_3292_, v___y_3293_);
lean_dec_ref(v___y_3302_);
lean_dec_ref(v_env_3300_);
if (lean_obj_tag(v___x_3306_) == 0)
{
lean_object* v___x_3308_; uint8_t v_isShared_3309_; uint8_t v_isSharedCheck_3313_; 
v_isSharedCheck_3313_ = !lean_is_exclusive(v___x_3306_);
if (v_isSharedCheck_3313_ == 0)
{
lean_object* v_unused_3314_; 
v_unused_3314_ = lean_ctor_get(v___x_3306_, 0);
lean_dec(v_unused_3314_);
v___x_3308_ = v___x_3306_;
v_isShared_3309_ = v_isSharedCheck_3313_;
goto v_resetjp_3307_;
}
else
{
lean_dec(v___x_3306_);
v___x_3308_ = lean_box(0);
v_isShared_3309_ = v_isSharedCheck_3313_;
goto v_resetjp_3307_;
}
v_resetjp_3307_:
{
lean_object* v___x_3311_; 
if (v_isShared_3309_ == 0)
{
lean_ctor_set(v___x_3308_, 0, v___x_3303_);
v___x_3311_ = v___x_3308_;
goto v_reusejp_3310_;
}
else
{
lean_object* v_reuseFailAlloc_3312_; 
v_reuseFailAlloc_3312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3312_, 0, v___x_3303_);
v___x_3311_ = v_reuseFailAlloc_3312_;
goto v_reusejp_3310_;
}
v_reusejp_3310_:
{
return v___x_3311_;
}
}
}
else
{
return v___x_3306_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___boxed(lean_object* v_declName_3338_, lean_object* v_isMeta_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_){
_start:
{
uint8_t v_isMeta_boxed_3348_; lean_object* v_res_3349_; 
v_isMeta_boxed_3348_ = lean_unbox(v_isMeta_3339_);
v_res_3349_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13(v_declName_3338_, v_isMeta_boxed_3348_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_, v___y_3345_, v___y_3346_);
lean_dec(v___y_3346_);
lean_dec_ref(v___y_3345_);
lean_dec(v___y_3344_);
lean_dec_ref(v___y_3343_);
lean_dec(v___y_3342_);
lean_dec_ref(v___y_3341_);
lean_dec_ref(v___y_3340_);
return v_res_3349_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__14___redArg(lean_object* v_as_x27_3350_, lean_object* v_b_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_){
_start:
{
if (lean_obj_tag(v_as_x27_3350_) == 0)
{
lean_object* v___x_3360_; 
v___x_3360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3360_, 0, v_b_3351_);
return v___x_3360_;
}
else
{
lean_object* v_head_3361_; lean_object* v_tail_3362_; lean_object* v___x_3363_; uint8_t v___x_3364_; lean_object* v___x_3365_; 
v_head_3361_ = lean_ctor_get(v_as_x27_3350_, 0);
v_tail_3362_ = lean_ctor_get(v_as_x27_3350_, 1);
v___x_3363_ = lean_box(0);
v___x_3364_ = 1;
lean_inc(v_head_3361_);
v___x_3365_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13(v_head_3361_, v___x_3364_, v___y_3352_, v___y_3353_, v___y_3354_, v___y_3355_, v___y_3356_, v___y_3357_, v___y_3358_);
if (lean_obj_tag(v___x_3365_) == 0)
{
lean_dec_ref_known(v___x_3365_, 1);
v_as_x27_3350_ = v_tail_3362_;
v_b_3351_ = v___x_3363_;
goto _start;
}
else
{
return v___x_3365_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__14___redArg___boxed(lean_object* v_as_x27_3367_, lean_object* v_b_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_){
_start:
{
lean_object* v_res_3377_; 
v_res_3377_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__14___redArg(v_as_x27_3367_, v_b_3368_, v___y_3369_, v___y_3370_, v___y_3371_, v___y_3372_, v___y_3373_, v___y_3374_, v___y_3375_);
lean_dec(v___y_3375_);
lean_dec_ref(v___y_3374_);
lean_dec(v___y_3373_);
lean_dec_ref(v___y_3372_);
lean_dec(v___y_3371_);
lean_dec_ref(v___y_3370_);
lean_dec_ref(v___y_3369_);
lean_dec(v_as_x27_3367_);
return v_res_3377_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__3(lean_object* v_env_3378_, lean_object* v___x_3379_, lean_object* v_currNamespace_3380_, lean_object* v_openDecls_3381_, lean_object* v_n_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_){
_start:
{
lean_object* v___x_3385_; lean_object* v___x_3386_; 
v___x_3385_ = l_Lean_ResolveName_resolveGlobalName(v_env_3378_, v___x_3379_, v_currNamespace_3380_, v_openDecls_3381_, v_n_3382_);
v___x_3386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3386_, 0, v___x_3385_);
lean_ctor_set(v___x_3386_, 1, v___y_3384_);
return v___x_3386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__3___boxed(lean_object* v_env_3387_, lean_object* v___x_3388_, lean_object* v_currNamespace_3389_, lean_object* v_openDecls_3390_, lean_object* v_n_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_){
_start:
{
lean_object* v_res_3394_; 
v_res_3394_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__3(v_env_3387_, v___x_3388_, v_currNamespace_3389_, v_openDecls_3390_, v_n_3391_, v___y_3392_, v___y_3393_);
lean_dec_ref(v___y_3392_);
lean_dec_ref(v___x_3388_);
return v_res_3394_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___redArg(lean_object* v_x_3395_, lean_object* v___y_3396_){
_start:
{
if (lean_obj_tag(v_x_3395_) == 0)
{
lean_object* v_a_3397_; lean_object* v___x_3398_; 
v_a_3397_ = lean_ctor_get(v_x_3395_, 0);
lean_inc(v_a_3397_);
v___x_3398_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3398_, 0, v_a_3397_);
lean_ctor_set(v___x_3398_, 1, v___y_3396_);
return v___x_3398_;
}
else
{
lean_object* v_a_3399_; lean_object* v___x_3400_; 
v_a_3399_ = lean_ctor_get(v_x_3395_, 0);
lean_inc(v_a_3399_);
v___x_3400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3400_, 0, v_a_3399_);
lean_ctor_set(v___x_3400_, 1, v___y_3396_);
return v___x_3400_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___redArg___boxed(lean_object* v_x_3401_, lean_object* v___y_3402_){
_start:
{
lean_object* v_res_3403_; 
v_res_3403_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___redArg(v_x_3401_, v___y_3402_);
lean_dec_ref(v_x_3401_);
return v_res_3403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__1(lean_object* v_env_3404_, lean_object* v_stx_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_){
_start:
{
lean_object* v___x_3408_; 
v___x_3408_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_3404_, v_stx_3405_, v___y_3406_, v___y_3407_);
if (lean_obj_tag(v___x_3408_) == 0)
{
lean_object* v_a_3409_; 
v_a_3409_ = lean_ctor_get(v___x_3408_, 0);
lean_inc(v_a_3409_);
if (lean_obj_tag(v_a_3409_) == 0)
{
lean_object* v_a_3410_; lean_object* v___x_3412_; uint8_t v_isShared_3413_; uint8_t v_isSharedCheck_3418_; 
v_a_3410_ = lean_ctor_get(v___x_3408_, 1);
v_isSharedCheck_3418_ = !lean_is_exclusive(v___x_3408_);
if (v_isSharedCheck_3418_ == 0)
{
lean_object* v_unused_3419_; 
v_unused_3419_ = lean_ctor_get(v___x_3408_, 0);
lean_dec(v_unused_3419_);
v___x_3412_ = v___x_3408_;
v_isShared_3413_ = v_isSharedCheck_3418_;
goto v_resetjp_3411_;
}
else
{
lean_inc(v_a_3410_);
lean_dec(v___x_3408_);
v___x_3412_ = lean_box(0);
v_isShared_3413_ = v_isSharedCheck_3418_;
goto v_resetjp_3411_;
}
v_resetjp_3411_:
{
lean_object* v___x_3414_; lean_object* v___x_3416_; 
v___x_3414_ = lean_box(0);
if (v_isShared_3413_ == 0)
{
lean_ctor_set(v___x_3412_, 0, v___x_3414_);
v___x_3416_ = v___x_3412_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3417_; 
v_reuseFailAlloc_3417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3417_, 0, v___x_3414_);
lean_ctor_set(v_reuseFailAlloc_3417_, 1, v_a_3410_);
v___x_3416_ = v_reuseFailAlloc_3417_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
return v___x_3416_;
}
}
}
else
{
lean_object* v_val_3420_; lean_object* v___x_3422_; uint8_t v_isShared_3423_; uint8_t v_isSharedCheck_3448_; 
v_val_3420_ = lean_ctor_get(v_a_3409_, 0);
v_isSharedCheck_3448_ = !lean_is_exclusive(v_a_3409_);
if (v_isSharedCheck_3448_ == 0)
{
v___x_3422_ = v_a_3409_;
v_isShared_3423_ = v_isSharedCheck_3448_;
goto v_resetjp_3421_;
}
else
{
lean_inc(v_val_3420_);
lean_dec(v_a_3409_);
v___x_3422_ = lean_box(0);
v_isShared_3423_ = v_isSharedCheck_3448_;
goto v_resetjp_3421_;
}
v_resetjp_3421_:
{
lean_object* v_snd_3424_; 
v_snd_3424_ = lean_ctor_get(v_val_3420_, 1);
lean_inc(v_snd_3424_);
lean_dec(v_val_3420_);
if (lean_obj_tag(v_snd_3424_) == 0)
{
lean_object* v_a_3425_; lean_object* v_a_3426_; lean_object* v___x_3428_; uint8_t v_isShared_3429_; uint8_t v_isSharedCheck_3434_; 
lean_del_object(v___x_3422_);
v_a_3425_ = lean_ctor_get(v___x_3408_, 1);
lean_inc(v_a_3425_);
lean_dec_ref_known(v___x_3408_, 2);
v_a_3426_ = lean_ctor_get(v_snd_3424_, 0);
v_isSharedCheck_3434_ = !lean_is_exclusive(v_snd_3424_);
if (v_isSharedCheck_3434_ == 0)
{
v___x_3428_ = v_snd_3424_;
v_isShared_3429_ = v_isSharedCheck_3434_;
goto v_resetjp_3427_;
}
else
{
lean_inc(v_a_3426_);
lean_dec(v_snd_3424_);
v___x_3428_ = lean_box(0);
v_isShared_3429_ = v_isSharedCheck_3434_;
goto v_resetjp_3427_;
}
v_resetjp_3427_:
{
lean_object* v___x_3431_; 
if (v_isShared_3429_ == 0)
{
v___x_3431_ = v___x_3428_;
goto v_reusejp_3430_;
}
else
{
lean_object* v_reuseFailAlloc_3433_; 
v_reuseFailAlloc_3433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3433_, 0, v_a_3426_);
v___x_3431_ = v_reuseFailAlloc_3433_;
goto v_reusejp_3430_;
}
v_reusejp_3430_:
{
lean_object* v___x_3432_; 
v___x_3432_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___redArg(v___x_3431_, v_a_3425_);
lean_dec_ref(v___x_3431_);
return v___x_3432_;
}
}
}
else
{
lean_object* v_a_3435_; lean_object* v_a_3436_; lean_object* v___x_3438_; uint8_t v_isShared_3439_; uint8_t v_isSharedCheck_3447_; 
v_a_3435_ = lean_ctor_get(v___x_3408_, 1);
lean_inc(v_a_3435_);
lean_dec_ref_known(v___x_3408_, 2);
v_a_3436_ = lean_ctor_get(v_snd_3424_, 0);
v_isSharedCheck_3447_ = !lean_is_exclusive(v_snd_3424_);
if (v_isSharedCheck_3447_ == 0)
{
v___x_3438_ = v_snd_3424_;
v_isShared_3439_ = v_isSharedCheck_3447_;
goto v_resetjp_3437_;
}
else
{
lean_inc(v_a_3436_);
lean_dec(v_snd_3424_);
v___x_3438_ = lean_box(0);
v_isShared_3439_ = v_isSharedCheck_3447_;
goto v_resetjp_3437_;
}
v_resetjp_3437_:
{
lean_object* v___x_3441_; 
if (v_isShared_3423_ == 0)
{
lean_ctor_set(v___x_3422_, 0, v_a_3436_);
v___x_3441_ = v___x_3422_;
goto v_reusejp_3440_;
}
else
{
lean_object* v_reuseFailAlloc_3446_; 
v_reuseFailAlloc_3446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3446_, 0, v_a_3436_);
v___x_3441_ = v_reuseFailAlloc_3446_;
goto v_reusejp_3440_;
}
v_reusejp_3440_:
{
lean_object* v___x_3443_; 
if (v_isShared_3439_ == 0)
{
lean_ctor_set(v___x_3438_, 0, v___x_3441_);
v___x_3443_ = v___x_3438_;
goto v_reusejp_3442_;
}
else
{
lean_object* v_reuseFailAlloc_3445_; 
v_reuseFailAlloc_3445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3445_, 0, v___x_3441_);
v___x_3443_ = v_reuseFailAlloc_3445_;
goto v_reusejp_3442_;
}
v_reusejp_3442_:
{
lean_object* v___x_3444_; 
v___x_3444_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___redArg(v___x_3443_, v_a_3435_);
lean_dec_ref(v___x_3443_);
return v___x_3444_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3449_; lean_object* v_a_3450_; lean_object* v___x_3452_; uint8_t v_isShared_3453_; uint8_t v_isSharedCheck_3457_; 
v_a_3449_ = lean_ctor_get(v___x_3408_, 0);
v_a_3450_ = lean_ctor_get(v___x_3408_, 1);
v_isSharedCheck_3457_ = !lean_is_exclusive(v___x_3408_);
if (v_isSharedCheck_3457_ == 0)
{
v___x_3452_ = v___x_3408_;
v_isShared_3453_ = v_isSharedCheck_3457_;
goto v_resetjp_3451_;
}
else
{
lean_inc(v_a_3450_);
lean_inc(v_a_3449_);
lean_dec(v___x_3408_);
v___x_3452_ = lean_box(0);
v_isShared_3453_ = v_isSharedCheck_3457_;
goto v_resetjp_3451_;
}
v_resetjp_3451_:
{
lean_object* v___x_3455_; 
if (v_isShared_3453_ == 0)
{
v___x_3455_ = v___x_3452_;
goto v_reusejp_3454_;
}
else
{
lean_object* v_reuseFailAlloc_3456_; 
v_reuseFailAlloc_3456_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3456_, 0, v_a_3449_);
lean_ctor_set(v_reuseFailAlloc_3456_, 1, v_a_3450_);
v___x_3455_ = v_reuseFailAlloc_3456_;
goto v_reusejp_3454_;
}
v_reusejp_3454_:
{
return v___x_3455_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__1___boxed(lean_object* v_env_3458_, lean_object* v_stx_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_){
_start:
{
lean_object* v_res_3462_; 
v_res_3462_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__1(v_env_3458_, v_stx_3459_, v___y_3460_, v___y_3461_);
lean_dec_ref(v___y_3460_);
return v_res_3462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg(lean_object* v_x_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_, lean_object* v___y_3471_){
_start:
{
lean_object* v___x_3473_; lean_object* v_toCold_3474_; lean_object* v_env_3475_; lean_object* v_currRecDepth_3476_; lean_object* v_ref_3477_; lean_object* v_maxRecDepth_3478_; lean_object* v_currNamespace_3479_; lean_object* v_openDecls_3480_; lean_object* v_quotContext_3481_; lean_object* v_currMacroScope_3482_; lean_object* v___f_3483_; lean_object* v___f_3484_; lean_object* v___x_3485_; lean_object* v___f_3486_; lean_object* v___f_3487_; lean_object* v___f_3488_; lean_object* v_methods_3489_; lean_object* v___x_3490_; lean_object* v_nextMacroScope_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; 
v___x_3473_ = lean_st_ref_get(v___y_3471_);
v_toCold_3474_ = lean_ctor_get(v___y_3470_, 0);
v_env_3475_ = lean_ctor_get(v___x_3473_, 0);
lean_inc_ref_n(v_env_3475_, 4);
lean_dec(v___x_3473_);
v_currRecDepth_3476_ = lean_ctor_get(v___y_3470_, 1);
v_ref_3477_ = lean_ctor_get(v___y_3470_, 2);
v_maxRecDepth_3478_ = lean_ctor_get(v_toCold_3474_, 3);
v_currNamespace_3479_ = lean_ctor_get(v_toCold_3474_, 4);
v_openDecls_3480_ = lean_ctor_get(v_toCold_3474_, 5);
v_quotContext_3481_ = lean_ctor_get(v_toCold_3474_, 8);
v_currMacroScope_3482_ = lean_ctor_get(v_toCold_3474_, 9);
v___f_3483_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_3483_, 0, v_env_3475_);
v___f_3484_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_3484_, 0, v_env_3475_);
v___x_3485_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3470_);
lean_inc_n(v_currNamespace_3479_, 3);
v___f_3486_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3486_, 0, v_currNamespace_3479_);
lean_inc_n(v_openDecls_3480_, 2);
v___f_3487_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__3___boxed), 7, 4);
lean_closure_set(v___f_3487_, 0, v_env_3475_);
lean_closure_set(v___f_3487_, 1, v___x_3485_);
lean_closure_set(v___f_3487_, 2, v_currNamespace_3479_);
lean_closure_set(v___f_3487_, 3, v_openDecls_3480_);
v___f_3488_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__4___boxed), 6, 3);
lean_closure_set(v___f_3488_, 0, v_env_3475_);
lean_closure_set(v___f_3488_, 1, v_currNamespace_3479_);
lean_closure_set(v___f_3488_, 2, v_openDecls_3480_);
v_methods_3489_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_methods_3489_, 0, v___f_3484_);
lean_ctor_set(v_methods_3489_, 1, v___f_3486_);
lean_ctor_set(v_methods_3489_, 2, v___f_3483_);
lean_ctor_set(v_methods_3489_, 3, v___f_3488_);
lean_ctor_set(v_methods_3489_, 4, v___f_3487_);
v___x_3490_ = lean_st_ref_get(v___y_3471_);
v_nextMacroScope_3491_ = lean_ctor_get(v___x_3490_, 1);
lean_inc(v_nextMacroScope_3491_);
lean_dec(v___x_3490_);
lean_inc(v_ref_3477_);
lean_inc(v_maxRecDepth_3478_);
lean_inc(v_currRecDepth_3476_);
lean_inc(v_currMacroScope_3482_);
lean_inc(v_quotContext_3481_);
v___x_3492_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3492_, 0, v_methods_3489_);
lean_ctor_set(v___x_3492_, 1, v_quotContext_3481_);
lean_ctor_set(v___x_3492_, 2, v_currMacroScope_3482_);
lean_ctor_set(v___x_3492_, 3, v_currRecDepth_3476_);
lean_ctor_set(v___x_3492_, 4, v_maxRecDepth_3478_);
lean_ctor_set(v___x_3492_, 5, v_ref_3477_);
v___x_3493_ = lean_box(0);
v___x_3494_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3494_, 0, v_nextMacroScope_3491_);
lean_ctor_set(v___x_3494_, 1, v___x_3493_);
lean_ctor_set(v___x_3494_, 2, v___x_3493_);
v___x_3495_ = lean_apply_2(v_x_3464_, v___x_3492_, v___x_3494_);
if (lean_obj_tag(v___x_3495_) == 0)
{
lean_object* v_a_3496_; lean_object* v_a_3497_; lean_object* v_macroScope_3498_; lean_object* v_traceMsgs_3499_; lean_object* v_expandedMacroDecls_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; 
v_a_3496_ = lean_ctor_get(v___x_3495_, 1);
lean_inc(v_a_3496_);
v_a_3497_ = lean_ctor_get(v___x_3495_, 0);
lean_inc(v_a_3497_);
lean_dec_ref_known(v___x_3495_, 2);
v_macroScope_3498_ = lean_ctor_get(v_a_3496_, 0);
lean_inc(v_macroScope_3498_);
v_traceMsgs_3499_ = lean_ctor_get(v_a_3496_, 1);
lean_inc(v_traceMsgs_3499_);
v_expandedMacroDecls_3500_ = lean_ctor_get(v_a_3496_, 2);
lean_inc(v_expandedMacroDecls_3500_);
lean_dec(v_a_3496_);
v___x_3501_ = lean_box(0);
v___x_3502_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__14___redArg(v_expandedMacroDecls_3500_, v___x_3501_, v___y_3465_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_, v___y_3470_, v___y_3471_);
lean_dec(v_expandedMacroDecls_3500_);
if (lean_obj_tag(v___x_3502_) == 0)
{
lean_object* v___x_3503_; lean_object* v_env_3504_; lean_object* v_ngen_3505_; lean_object* v_auxDeclNGen_3506_; lean_object* v_traceState_3507_; lean_object* v_cache_3508_; lean_object* v_recordedDeps_3509_; lean_object* v_messages_3510_; lean_object* v_infoState_3511_; lean_object* v_snapshotTasks_3512_; lean_object* v___x_3514_; uint8_t v_isShared_3515_; uint8_t v_isSharedCheck_3538_; 
lean_dec_ref_known(v___x_3502_, 1);
v___x_3503_ = lean_st_ref_take(v___y_3471_);
v_env_3504_ = lean_ctor_get(v___x_3503_, 0);
v_ngen_3505_ = lean_ctor_get(v___x_3503_, 2);
v_auxDeclNGen_3506_ = lean_ctor_get(v___x_3503_, 3);
v_traceState_3507_ = lean_ctor_get(v___x_3503_, 4);
v_cache_3508_ = lean_ctor_get(v___x_3503_, 5);
v_recordedDeps_3509_ = lean_ctor_get(v___x_3503_, 6);
v_messages_3510_ = lean_ctor_get(v___x_3503_, 7);
v_infoState_3511_ = lean_ctor_get(v___x_3503_, 8);
v_snapshotTasks_3512_ = lean_ctor_get(v___x_3503_, 9);
v_isSharedCheck_3538_ = !lean_is_exclusive(v___x_3503_);
if (v_isSharedCheck_3538_ == 0)
{
lean_object* v_unused_3539_; 
v_unused_3539_ = lean_ctor_get(v___x_3503_, 1);
lean_dec(v_unused_3539_);
v___x_3514_ = v___x_3503_;
v_isShared_3515_ = v_isSharedCheck_3538_;
goto v_resetjp_3513_;
}
else
{
lean_inc(v_snapshotTasks_3512_);
lean_inc(v_infoState_3511_);
lean_inc(v_messages_3510_);
lean_inc(v_recordedDeps_3509_);
lean_inc(v_cache_3508_);
lean_inc(v_traceState_3507_);
lean_inc(v_auxDeclNGen_3506_);
lean_inc(v_ngen_3505_);
lean_inc(v_env_3504_);
lean_dec(v___x_3503_);
v___x_3514_ = lean_box(0);
v_isShared_3515_ = v_isSharedCheck_3538_;
goto v_resetjp_3513_;
}
v_resetjp_3513_:
{
lean_object* v___x_3517_; 
if (v_isShared_3515_ == 0)
{
lean_ctor_set(v___x_3514_, 1, v_macroScope_3498_);
v___x_3517_ = v___x_3514_;
goto v_reusejp_3516_;
}
else
{
lean_object* v_reuseFailAlloc_3537_; 
v_reuseFailAlloc_3537_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3537_, 0, v_env_3504_);
lean_ctor_set(v_reuseFailAlloc_3537_, 1, v_macroScope_3498_);
lean_ctor_set(v_reuseFailAlloc_3537_, 2, v_ngen_3505_);
lean_ctor_set(v_reuseFailAlloc_3537_, 3, v_auxDeclNGen_3506_);
lean_ctor_set(v_reuseFailAlloc_3537_, 4, v_traceState_3507_);
lean_ctor_set(v_reuseFailAlloc_3537_, 5, v_cache_3508_);
lean_ctor_set(v_reuseFailAlloc_3537_, 6, v_recordedDeps_3509_);
lean_ctor_set(v_reuseFailAlloc_3537_, 7, v_messages_3510_);
lean_ctor_set(v_reuseFailAlloc_3537_, 8, v_infoState_3511_);
lean_ctor_set(v_reuseFailAlloc_3537_, 9, v_snapshotTasks_3512_);
v___x_3517_ = v_reuseFailAlloc_3537_;
goto v_reusejp_3516_;
}
v_reusejp_3516_:
{
lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; 
v___x_3518_ = lean_st_ref_put(v___y_3471_, v___x_3517_);
v___x_3519_ = l_List_reverse___redArg(v_traceMsgs_3499_);
v___x_3520_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15(v___x_3519_, v___y_3465_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_, v___y_3470_, v___y_3471_);
if (lean_obj_tag(v___x_3520_) == 0)
{
lean_object* v___x_3522_; uint8_t v_isShared_3523_; uint8_t v_isSharedCheck_3527_; 
v_isSharedCheck_3527_ = !lean_is_exclusive(v___x_3520_);
if (v_isSharedCheck_3527_ == 0)
{
lean_object* v_unused_3528_; 
v_unused_3528_ = lean_ctor_get(v___x_3520_, 0);
lean_dec(v_unused_3528_);
v___x_3522_ = v___x_3520_;
v_isShared_3523_ = v_isSharedCheck_3527_;
goto v_resetjp_3521_;
}
else
{
lean_dec(v___x_3520_);
v___x_3522_ = lean_box(0);
v_isShared_3523_ = v_isSharedCheck_3527_;
goto v_resetjp_3521_;
}
v_resetjp_3521_:
{
lean_object* v___x_3525_; 
if (v_isShared_3523_ == 0)
{
lean_ctor_set(v___x_3522_, 0, v_a_3497_);
v___x_3525_ = v___x_3522_;
goto v_reusejp_3524_;
}
else
{
lean_object* v_reuseFailAlloc_3526_; 
v_reuseFailAlloc_3526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3526_, 0, v_a_3497_);
v___x_3525_ = v_reuseFailAlloc_3526_;
goto v_reusejp_3524_;
}
v_reusejp_3524_:
{
return v___x_3525_;
}
}
}
else
{
lean_object* v_a_3529_; lean_object* v___x_3531_; uint8_t v_isShared_3532_; uint8_t v_isSharedCheck_3536_; 
lean_dec(v_a_3497_);
v_a_3529_ = lean_ctor_get(v___x_3520_, 0);
v_isSharedCheck_3536_ = !lean_is_exclusive(v___x_3520_);
if (v_isSharedCheck_3536_ == 0)
{
v___x_3531_ = v___x_3520_;
v_isShared_3532_ = v_isSharedCheck_3536_;
goto v_resetjp_3530_;
}
else
{
lean_inc(v_a_3529_);
lean_dec(v___x_3520_);
v___x_3531_ = lean_box(0);
v_isShared_3532_ = v_isSharedCheck_3536_;
goto v_resetjp_3530_;
}
v_resetjp_3530_:
{
lean_object* v___x_3534_; 
if (v_isShared_3532_ == 0)
{
v___x_3534_ = v___x_3531_;
goto v_reusejp_3533_;
}
else
{
lean_object* v_reuseFailAlloc_3535_; 
v_reuseFailAlloc_3535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3535_, 0, v_a_3529_);
v___x_3534_ = v_reuseFailAlloc_3535_;
goto v_reusejp_3533_;
}
v_reusejp_3533_:
{
return v___x_3534_;
}
}
}
}
}
}
else
{
lean_object* v_a_3540_; lean_object* v___x_3542_; uint8_t v_isShared_3543_; uint8_t v_isSharedCheck_3547_; 
lean_dec(v_traceMsgs_3499_);
lean_dec(v_macroScope_3498_);
lean_dec(v_a_3497_);
v_a_3540_ = lean_ctor_get(v___x_3502_, 0);
v_isSharedCheck_3547_ = !lean_is_exclusive(v___x_3502_);
if (v_isSharedCheck_3547_ == 0)
{
v___x_3542_ = v___x_3502_;
v_isShared_3543_ = v_isSharedCheck_3547_;
goto v_resetjp_3541_;
}
else
{
lean_inc(v_a_3540_);
lean_dec(v___x_3502_);
v___x_3542_ = lean_box(0);
v_isShared_3543_ = v_isSharedCheck_3547_;
goto v_resetjp_3541_;
}
v_resetjp_3541_:
{
lean_object* v___x_3545_; 
if (v_isShared_3543_ == 0)
{
v___x_3545_ = v___x_3542_;
goto v_reusejp_3544_;
}
else
{
lean_object* v_reuseFailAlloc_3546_; 
v_reuseFailAlloc_3546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3546_, 0, v_a_3540_);
v___x_3545_ = v_reuseFailAlloc_3546_;
goto v_reusejp_3544_;
}
v_reusejp_3544_:
{
return v___x_3545_;
}
}
}
}
else
{
lean_object* v_a_3548_; 
v_a_3548_ = lean_ctor_get(v___x_3495_, 0);
lean_inc(v_a_3548_);
lean_dec_ref_known(v___x_3495_, 2);
if (lean_obj_tag(v_a_3548_) == 0)
{
lean_object* v_a_3549_; lean_object* v_a_3550_; lean_object* v___x_3551_; uint8_t v___x_3552_; 
v_a_3549_ = lean_ctor_get(v_a_3548_, 0);
lean_inc(v_a_3549_);
v_a_3550_ = lean_ctor_get(v_a_3548_, 1);
lean_inc_ref(v_a_3550_);
lean_dec_ref_known(v_a_3548_, 2);
v___x_3551_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___closed__0));
v___x_3552_ = lean_string_dec_eq(v_a_3550_, v___x_3551_);
if (v___x_3552_ == 0)
{
lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; 
v___x_3553_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3553_, 0, v_a_3550_);
v___x_3554_ = l_Lean_MessageData_ofFormat(v___x_3553_);
v___x_3555_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg(v_a_3549_, v___x_3554_, v___y_3465_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_, v___y_3470_, v___y_3471_);
lean_dec(v_a_3549_);
return v___x_3555_;
}
else
{
lean_object* v___x_3556_; 
lean_dec_ref(v_a_3550_);
v___x_3556_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg(v_a_3549_);
return v___x_3556_;
}
}
else
{
lean_object* v___x_3557_; 
v___x_3557_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_3557_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___boxed(lean_object* v_x_3558_, lean_object* v___y_3559_, lean_object* v___y_3560_, lean_object* v___y_3561_, lean_object* v___y_3562_, lean_object* v___y_3563_, lean_object* v___y_3564_, lean_object* v___y_3565_, lean_object* v___y_3566_){
_start:
{
lean_object* v_res_3567_; 
v_res_3567_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg(v_x_3558_, v___y_3559_, v___y_3560_, v___y_3561_, v___y_3562_, v___y_3563_, v___y_3564_, v___y_3565_);
lean_dec(v___y_3565_);
lean_dec_ref(v___y_3564_);
lean_dec(v___y_3563_);
lean_dec_ref(v___y_3562_);
lean_dec(v___y_3561_);
lean_dec_ref(v___y_3560_);
lean_dec_ref(v___y_3559_);
return v_res_3567_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___lam__0(lean_object* v___x_3568_, lean_object* v___y_3569_, lean_object* v___y_3570_){
_start:
{
lean_object* v_toCold_3572_; lean_object* v_quotContext_3573_; lean_object* v_currMacroScope_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; 
v_toCold_3572_ = lean_ctor_get(v___y_3569_, 0);
lean_inc_ref(v_toCold_3572_);
lean_dec_ref(v___y_3569_);
v_quotContext_3573_ = lean_ctor_get(v_toCold_3572_, 8);
lean_inc(v_quotContext_3573_);
v_currMacroScope_3574_ = lean_ctor_get(v_toCold_3572_, 9);
lean_inc(v_currMacroScope_3574_);
lean_dec_ref(v_toCold_3572_);
v___x_3575_ = l_Lean_addMacroScope(v_quotContext_3573_, v___x_3568_, v_currMacroScope_3574_);
v___x_3576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3576_, 0, v___x_3575_);
return v___x_3576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___lam__0___boxed(lean_object* v___x_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_){
_start:
{
lean_object* v_res_3581_; 
v_res_3581_ = l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___lam__0(v___x_3577_, v___y_3578_, v___y_3579_);
lean_dec(v___y_3579_);
return v_res_3581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg(lean_object* v___y_3587_, lean_object* v___y_3588_){
_start:
{
lean_object* v___f_3590_; lean_object* v___x_3591_; 
v___f_3590_ = ((lean_object*)(l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__2));
v___x_3591_ = l_Lean_Core_withFreshMacroScope___redArg(v___f_3590_, v___y_3587_, v___y_3588_);
return v___x_3591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___boxed(lean_object* v___y_3592_, lean_object* v___y_3593_, lean_object* v___y_3594_){
_start:
{
lean_object* v_res_3595_; 
v_res_3595_ = l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg(v___y_3592_, v___y_3593_);
lean_dec(v___y_3593_);
lean_dec_ref(v___y_3592_);
return v_res_3595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6(lean_object* v_ref_3596_, uint8_t v_canonical_3597_, lean_object* v___y_3598_, lean_object* v___y_3599_, lean_object* v___y_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_){
_start:
{
lean_object* v___x_3606_; 
v___x_3606_ = l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg(v___y_3603_, v___y_3604_);
if (lean_obj_tag(v___x_3606_) == 0)
{
lean_object* v_a_3607_; lean_object* v___x_3609_; uint8_t v_isShared_3610_; uint8_t v_isSharedCheck_3615_; 
v_a_3607_ = lean_ctor_get(v___x_3606_, 0);
v_isSharedCheck_3615_ = !lean_is_exclusive(v___x_3606_);
if (v_isSharedCheck_3615_ == 0)
{
v___x_3609_ = v___x_3606_;
v_isShared_3610_ = v_isSharedCheck_3615_;
goto v_resetjp_3608_;
}
else
{
lean_inc(v_a_3607_);
lean_dec(v___x_3606_);
v___x_3609_ = lean_box(0);
v_isShared_3610_ = v_isSharedCheck_3615_;
goto v_resetjp_3608_;
}
v_resetjp_3608_:
{
lean_object* v___x_3611_; lean_object* v___x_3613_; 
v___x_3611_ = l_Lean_mkIdentFrom(v_ref_3596_, v_a_3607_, v_canonical_3597_);
if (v_isShared_3610_ == 0)
{
lean_ctor_set(v___x_3609_, 0, v___x_3611_);
v___x_3613_ = v___x_3609_;
goto v_reusejp_3612_;
}
else
{
lean_object* v_reuseFailAlloc_3614_; 
v_reuseFailAlloc_3614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3614_, 0, v___x_3611_);
v___x_3613_ = v_reuseFailAlloc_3614_;
goto v_reusejp_3612_;
}
v_reusejp_3612_:
{
return v___x_3613_;
}
}
}
else
{
lean_object* v_a_3616_; lean_object* v___x_3618_; uint8_t v_isShared_3619_; uint8_t v_isSharedCheck_3623_; 
v_a_3616_ = lean_ctor_get(v___x_3606_, 0);
v_isSharedCheck_3623_ = !lean_is_exclusive(v___x_3606_);
if (v_isSharedCheck_3623_ == 0)
{
v___x_3618_ = v___x_3606_;
v_isShared_3619_ = v_isSharedCheck_3623_;
goto v_resetjp_3617_;
}
else
{
lean_inc(v_a_3616_);
lean_dec(v___x_3606_);
v___x_3618_ = lean_box(0);
v_isShared_3619_ = v_isSharedCheck_3623_;
goto v_resetjp_3617_;
}
v_resetjp_3617_:
{
lean_object* v___x_3621_; 
if (v_isShared_3619_ == 0)
{
v___x_3621_ = v___x_3618_;
goto v_reusejp_3620_;
}
else
{
lean_object* v_reuseFailAlloc_3622_; 
v_reuseFailAlloc_3622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3622_, 0, v_a_3616_);
v___x_3621_ = v_reuseFailAlloc_3622_;
goto v_reusejp_3620_;
}
v_reusejp_3620_:
{
return v___x_3621_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___boxed(lean_object* v_ref_3624_, lean_object* v_canonical_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_, lean_object* v___y_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_){
_start:
{
uint8_t v_canonical_boxed_3634_; lean_object* v_res_3635_; 
v_canonical_boxed_3634_ = lean_unbox(v_canonical_3625_);
v_res_3635_ = l_Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6(v_ref_3624_, v_canonical_boxed_3634_, v___y_3626_, v___y_3627_, v___y_3628_, v___y_3629_, v___y_3630_, v___y_3631_, v___y_3632_);
lean_dec(v___y_3632_);
lean_dec_ref(v___y_3631_);
lean_dec(v___y_3630_);
lean_dec_ref(v___y_3629_);
lean_dec(v___y_3628_);
lean_dec_ref(v___y_3627_);
lean_dec_ref(v___y_3626_);
lean_dec(v_ref_3624_);
return v_res_3635_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__1(void){
_start:
{
lean_object* v___x_3637_; lean_object* v___x_3638_; 
v___x_3637_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___closed__0));
v___x_3638_ = l_Lean_stringToMessageData(v___x_3637_);
return v___x_3638_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__4(void){
_start:
{
lean_object* v___x_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; 
v___x_3644_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___closed__3));
v___x_3645_ = ((lean_object*)(l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___closed__1));
v___x_3646_ = l_Lean_Name_append(v___x_3645_, v___x_3644_);
return v___x_3646_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__6(void){
_start:
{
lean_object* v___x_3648_; lean_object* v___x_3649_; 
v___x_3648_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___closed__5));
v___x_3649_ = l_Lean_stringToMessageData(v___x_3648_);
return v___x_3649_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__8(void){
_start:
{
lean_object* v___x_3651_; lean_object* v___x_3652_; 
v___x_3651_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___closed__7));
v___x_3652_ = l_Lean_stringToMessageData(v___x_3651_);
return v___x_3652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___boxed(lean_object* v_config_3659_, lean_object* v_letOrReassign_3660_, lean_object* v_decl_3661_, lean_object* v_tk_3662_, lean_object* v_dec_3663_, lean_object* v_a_3664_, lean_object* v_a_3665_, lean_object* v_a_3666_, lean_object* v_a_3667_, lean_object* v_a_3668_, lean_object* v_a_3669_, lean_object* v_a_3670_, lean_object* v_a_3671_){
_start:
{
lean_object* v_res_3672_; 
v_res_3672_ = l_Lean_Elab_Do_elabDoLetOrReassign(v_config_3659_, v_letOrReassign_3660_, v_decl_3661_, v_tk_3662_, v_dec_3663_, v_a_3664_, v_a_3665_, v_a_3666_, v_a_3667_, v_a_3668_, v_a_3669_, v_a_3670_);
lean_dec(v_a_3670_);
lean_dec_ref(v_a_3669_);
lean_dec(v_a_3668_);
lean_dec_ref(v_a_3667_);
lean_dec(v_a_3666_);
lean_dec_ref(v_a_3665_);
lean_dec_ref(v_a_3664_);
return v_res_3672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign(lean_object* v_config_3673_, lean_object* v_letOrReassign_3674_, lean_object* v_decl_3675_, lean_object* v_tk_3676_, lean_object* v_dec_3677_, lean_object* v_a_3678_, lean_object* v_a_3679_, lean_object* v_a_3680_, lean_object* v_a_3681_, lean_object* v_a_3682_, lean_object* v_a_3683_, lean_object* v_a_3684_){
_start:
{
lean_object* v___x_3686_; 
v___x_3686_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg(v_config_3673_, v_a_3681_, v_a_3682_, v_a_3683_, v_a_3684_);
if (lean_obj_tag(v___x_3686_) == 0)
{
lean_object* v___x_3687_; 
lean_dec_ref_known(v___x_3686_, 1);
lean_inc(v_decl_3675_);
v___x_3687_ = l_Lean_Elab_Do_getLetDeclVars(v_decl_3675_, v_a_3679_, v_a_3680_, v_a_3681_, v_a_3682_, v_a_3683_, v_a_3684_);
if (lean_obj_tag(v___x_3687_) == 0)
{
lean_object* v_a_3688_; lean_object* v___x_3689_; 
v_a_3688_ = lean_ctor_get(v___x_3687_, 0);
lean_inc(v_a_3688_);
lean_dec_ref_known(v___x_3687_, 1);
v___x_3689_ = l_Lean_Elab_Do_LetOrReassign_checkMutVars(v_letOrReassign_3674_, v_a_3688_, v_a_3678_, v_a_3679_, v_a_3680_, v_a_3681_, v_a_3682_, v_a_3683_, v_a_3684_);
if (lean_obj_tag(v___x_3689_) == 0)
{
lean_object* v___x_3690_; 
lean_dec_ref_known(v___x_3689_, 1);
v___x_3690_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_3677_, v_tk_3676_, v_a_3678_, v_a_3679_, v_a_3680_, v_a_3681_, v_a_3682_, v_a_3683_, v_a_3684_);
if (lean_obj_tag(v___x_3690_) == 0)
{
lean_object* v_a_3691_; lean_object* v___y_3693_; uint8_t v___y_3694_; lean_object* v___y_3695_; uint8_t v___y_3696_; lean_object* v___y_3697_; lean_object* v___y_3698_; lean_object* v___y_3699_; lean_object* v___y_3700_; lean_object* v___y_3701_; lean_object* v_rhs_3702_; lean_object* v___y_3703_; lean_object* v___y_3704_; lean_object* v___y_3705_; lean_object* v___y_3706_; lean_object* v___y_3707_; lean_object* v___y_3708_; lean_object* v___y_3709_; uint8_t v___y_3721_; lean_object* v___y_3722_; lean_object* v___y_3723_; uint8_t v___y_3724_; lean_object* v___y_3725_; lean_object* v___y_3726_; lean_object* v___y_3727_; lean_object* v___y_3728_; uint8_t v___y_3729_; lean_object* v___y_3730_; lean_object* v___y_3731_; lean_object* v___y_3732_; lean_object* v___y_3733_; lean_object* v_xType_x3f_3734_; lean_object* v___y_3735_; lean_object* v___y_3736_; lean_object* v___y_3737_; lean_object* v___y_3738_; lean_object* v___y_3739_; lean_object* v___y_3740_; lean_object* v___y_3741_; uint8_t v___y_3790_; lean_object* v___y_3791_; lean_object* v___y_3792_; uint8_t v___y_3793_; lean_object* v___y_3794_; lean_object* v___y_3795_; uint8_t v___y_3796_; uint8_t v___y_3797_; lean_object* v___y_3798_; lean_object* v___y_3799_; lean_object* v___y_3800_; lean_object* v___y_3801_; lean_object* v___y_3802_; lean_object* v___y_3803_; lean_object* v___y_3804_; lean_object* v___y_3805_; lean_object* v___y_3806_; lean_object* v___y_3807_; uint8_t v___y_3808_; lean_object* v___y_3867_; lean_object* v___y_3868_; uint8_t v___y_3869_; lean_object* v___y_3870_; uint8_t v___y_3871_; lean_object* v___y_3872_; uint8_t v___y_3873_; lean_object* v_id_3874_; lean_object* v___y_3875_; lean_object* v___y_3876_; lean_object* v___y_3877_; lean_object* v___y_3878_; lean_object* v___y_3879_; lean_object* v___y_3880_; lean_object* v___y_3881_; lean_object* v_decl_3893_; lean_object* v___y_3894_; lean_object* v___y_3895_; lean_object* v___y_3896_; lean_object* v___y_3897_; lean_object* v___y_3898_; lean_object* v___y_3899_; lean_object* v___y_3900_; lean_object* v___x_3978_; 
v_a_3691_ = lean_ctor_get(v___x_3690_, 0);
lean_inc(v_a_3691_);
lean_dec_ref_known(v___x_3690_, 1);
v___x_3978_ = l_Lean_Elab_Do_isErased___redArg(v_letOrReassign_3674_, v_a_3688_, v_a_3678_);
if (lean_obj_tag(v___x_3978_) == 0)
{
lean_object* v_a_3979_; lean_object* v___x_3980_; 
v_a_3979_ = lean_ctor_get(v___x_3978_, 0);
lean_inc(v_a_3979_);
lean_dec_ref_known(v___x_3978_, 1);
v___x_3980_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment(v_letOrReassign_3674_, v_decl_3675_, v_a_3679_, v_a_3680_, v_a_3681_, v_a_3682_, v_a_3683_, v_a_3684_);
if (lean_obj_tag(v___x_3980_) == 0)
{
uint8_t v___x_3981_; 
v___x_3981_ = lean_unbox(v_a_3979_);
lean_dec(v_a_3979_);
if (v___x_3981_ == 0)
{
lean_object* v_a_3982_; 
v_a_3982_ = lean_ctor_get(v___x_3980_, 0);
lean_inc(v_a_3982_);
lean_dec_ref_known(v___x_3980_, 1);
v_decl_3893_ = v_a_3982_;
v___y_3894_ = v_a_3678_;
v___y_3895_ = v_a_3679_;
v___y_3896_ = v_a_3680_;
v___y_3897_ = v_a_3681_;
v___y_3898_ = v_a_3682_;
v___y_3899_ = v_a_3683_;
v___y_3900_ = v_a_3684_;
goto v___jp_3892_;
}
else
{
lean_object* v_a_3983_; lean_object* v___x_3984_; 
v_a_3983_ = lean_ctor_get(v___x_3980_, 0);
lean_inc(v_a_3983_);
lean_dec_ref_known(v___x_3980_, 1);
v___x_3984_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl(v_a_3983_, v_a_3678_, v_a_3679_, v_a_3680_, v_a_3681_, v_a_3682_, v_a_3683_, v_a_3684_);
if (lean_obj_tag(v___x_3984_) == 0)
{
lean_object* v_a_3985_; 
v_a_3985_ = lean_ctor_get(v___x_3984_, 0);
lean_inc(v_a_3985_);
lean_dec_ref_known(v___x_3984_, 1);
v_decl_3893_ = v_a_3985_;
v___y_3894_ = v_a_3678_;
v___y_3895_ = v_a_3679_;
v___y_3896_ = v_a_3680_;
v___y_3897_ = v_a_3681_;
v___y_3898_ = v_a_3682_;
v___y_3899_ = v_a_3683_;
v___y_3900_ = v_a_3684_;
goto v___jp_3892_;
}
else
{
lean_object* v_a_3986_; lean_object* v___x_3988_; uint8_t v_isShared_3989_; uint8_t v_isSharedCheck_3993_; 
lean_dec(v_a_3691_);
lean_dec(v_a_3688_);
lean_dec(v_tk_3676_);
lean_dec(v_letOrReassign_3674_);
lean_dec_ref(v_config_3673_);
v_a_3986_ = lean_ctor_get(v___x_3984_, 0);
v_isSharedCheck_3993_ = !lean_is_exclusive(v___x_3984_);
if (v_isSharedCheck_3993_ == 0)
{
v___x_3988_ = v___x_3984_;
v_isShared_3989_ = v_isSharedCheck_3993_;
goto v_resetjp_3987_;
}
else
{
lean_inc(v_a_3986_);
lean_dec(v___x_3984_);
v___x_3988_ = lean_box(0);
v_isShared_3989_ = v_isSharedCheck_3993_;
goto v_resetjp_3987_;
}
v_resetjp_3987_:
{
lean_object* v___x_3991_; 
if (v_isShared_3989_ == 0)
{
v___x_3991_ = v___x_3988_;
goto v_reusejp_3990_;
}
else
{
lean_object* v_reuseFailAlloc_3992_; 
v_reuseFailAlloc_3992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3992_, 0, v_a_3986_);
v___x_3991_ = v_reuseFailAlloc_3992_;
goto v_reusejp_3990_;
}
v_reusejp_3990_:
{
return v___x_3991_;
}
}
}
}
}
else
{
lean_object* v_a_3994_; lean_object* v___x_3996_; uint8_t v_isShared_3997_; uint8_t v_isSharedCheck_4001_; 
lean_dec(v_a_3979_);
lean_dec(v_a_3691_);
lean_dec(v_a_3688_);
lean_dec(v_tk_3676_);
lean_dec(v_letOrReassign_3674_);
lean_dec_ref(v_config_3673_);
v_a_3994_ = lean_ctor_get(v___x_3980_, 0);
v_isSharedCheck_4001_ = !lean_is_exclusive(v___x_3980_);
if (v_isSharedCheck_4001_ == 0)
{
v___x_3996_ = v___x_3980_;
v_isShared_3997_ = v_isSharedCheck_4001_;
goto v_resetjp_3995_;
}
else
{
lean_inc(v_a_3994_);
lean_dec(v___x_3980_);
v___x_3996_ = lean_box(0);
v_isShared_3997_ = v_isSharedCheck_4001_;
goto v_resetjp_3995_;
}
v_resetjp_3995_:
{
lean_object* v___x_3999_; 
if (v_isShared_3997_ == 0)
{
v___x_3999_ = v___x_3996_;
goto v_reusejp_3998_;
}
else
{
lean_object* v_reuseFailAlloc_4000_; 
v_reuseFailAlloc_4000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4000_, 0, v_a_3994_);
v___x_3999_ = v_reuseFailAlloc_4000_;
goto v_reusejp_3998_;
}
v_reusejp_3998_:
{
return v___x_3999_;
}
}
}
}
else
{
lean_object* v_a_4002_; lean_object* v___x_4004_; uint8_t v_isShared_4005_; uint8_t v_isSharedCheck_4009_; 
lean_dec(v_a_3691_);
lean_dec(v_a_3688_);
lean_dec(v_tk_3676_);
lean_dec(v_decl_3675_);
lean_dec(v_letOrReassign_3674_);
lean_dec_ref(v_config_3673_);
v_a_4002_ = lean_ctor_get(v___x_3978_, 0);
v_isSharedCheck_4009_ = !lean_is_exclusive(v___x_3978_);
if (v_isSharedCheck_4009_ == 0)
{
v___x_4004_ = v___x_3978_;
v_isShared_4005_ = v_isSharedCheck_4009_;
goto v_resetjp_4003_;
}
else
{
lean_inc(v_a_4002_);
lean_dec(v___x_3978_);
v___x_4004_ = lean_box(0);
v_isShared_4005_ = v_isSharedCheck_4009_;
goto v_resetjp_4003_;
}
v_resetjp_4003_:
{
lean_object* v___x_4007_; 
if (v_isShared_4005_ == 0)
{
v___x_4007_ = v___x_4004_;
goto v_reusejp_4006_;
}
else
{
lean_object* v_reuseFailAlloc_4008_; 
v_reuseFailAlloc_4008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4008_, 0, v_a_4002_);
v___x_4007_ = v_reuseFailAlloc_4008_;
goto v_reusejp_4006_;
}
v_reusejp_4006_:
{
return v___x_4007_;
}
}
}
v___jp_3692_:
{
lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___f_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; 
v___x_3710_ = lean_box(v___y_3694_);
v___x_3711_ = lean_box(v___y_3696_);
lean_inc_ref(v___y_3695_);
lean_inc_ref(v___y_3697_);
lean_inc_ref(v___y_3699_);
v___f_3712_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___boxed), 19, 10);
lean_closure_set(v___f_3712_, 0, v_rhs_3702_);
lean_closure_set(v___f_3712_, 1, v___x_3710_);
lean_closure_set(v___f_3712_, 2, v_config_3673_);
lean_closure_set(v___f_3712_, 3, v___y_3698_);
lean_closure_set(v___f_3712_, 4, v___x_3711_);
lean_closure_set(v___f_3712_, 5, v___y_3699_);
lean_closure_set(v___f_3712_, 6, v___y_3697_);
lean_closure_set(v___f_3712_, 7, v___y_3695_);
lean_closure_set(v___f_3712_, 8, v___y_3700_);
lean_closure_set(v___f_3712_, 9, v___y_3693_);
v___x_3713_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_3713_, 0, v_a_3691_);
v___x_3714_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabWithReassignments___boxed), 11, 3);
lean_closure_set(v___x_3714_, 0, v_letOrReassign_3674_);
lean_closure_set(v___x_3714_, 1, v_a_3688_);
lean_closure_set(v___x_3714_, 2, v___x_3713_);
v___x_3715_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___closed__1, &l_Lean_Elab_Do_elabDoLetOrReassign___closed__1_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__1);
v___x_3716_ = l_Lean_MessageData_ofSyntax(v___y_3701_);
v___x_3717_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3717_, 0, v___x_3715_);
lean_ctor_set(v___x_3717_, 1, v___x_3716_);
v___x_3718_ = lean_box(0);
v___x_3719_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_3717_, v___x_3714_, v___f_3712_, v___x_3718_, v___y_3703_, v___y_3704_, v___y_3705_, v___y_3706_, v___y_3707_, v___y_3708_, v___y_3709_);
return v___x_3719_;
}
v___jp_3720_:
{
lean_object* v___x_3742_; lean_object* v___x_3743_; 
v___x_3742_ = lean_unsigned_to_nat(4u);
v___x_3743_ = l_Lean_Syntax_getArg(v___y_3732_, v___x_3742_);
lean_dec(v___y_3732_);
if (lean_obj_tag(v_xType_x3f_3734_) == 0)
{
lean_inc(v___y_3722_);
v___y_3693_ = v___y_3722_;
v___y_3694_ = v___y_3721_;
v___y_3695_ = v___y_3723_;
v___y_3696_ = v___y_3724_;
v___y_3697_ = v___y_3725_;
v___y_3698_ = v___y_3726_;
v___y_3699_ = v___y_3727_;
v___y_3700_ = v___y_3728_;
v___y_3701_ = v___y_3722_;
v_rhs_3702_ = v___x_3743_;
v___y_3703_ = v___y_3735_;
v___y_3704_ = v___y_3736_;
v___y_3705_ = v___y_3737_;
v___y_3706_ = v___y_3738_;
v___y_3707_ = v___y_3739_;
v___y_3708_ = v___y_3740_;
v___y_3709_ = v___y_3741_;
goto v___jp_3692_;
}
else
{
lean_object* v_toCold_3744_; lean_object* v_val_3745_; lean_object* v___x_3747_; uint8_t v_isShared_3748_; uint8_t v_isSharedCheck_3788_; 
v_toCold_3744_ = lean_ctor_get(v___y_3740_, 0);
v_val_3745_ = lean_ctor_get(v_xType_x3f_3734_, 0);
v_isSharedCheck_3788_ = !lean_is_exclusive(v_xType_x3f_3734_);
if (v_isSharedCheck_3788_ == 0)
{
v___x_3747_ = v_xType_x3f_3734_;
v_isShared_3748_ = v_isSharedCheck_3788_;
goto v_resetjp_3746_;
}
else
{
lean_inc(v_val_3745_);
lean_dec(v_xType_x3f_3734_);
v___x_3747_ = lean_box(0);
v_isShared_3748_ = v_isSharedCheck_3788_;
goto v_resetjp_3746_;
}
v_resetjp_3746_:
{
lean_object* v_ref_3749_; lean_object* v_quotContext_3750_; lean_object* v_currMacroScope_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3767_; 
v_ref_3749_ = lean_ctor_get(v___y_3740_, 2);
v_quotContext_3750_ = lean_ctor_get(v_toCold_3744_, 8);
v_currMacroScope_3751_ = lean_ctor_get(v_toCold_3744_, 9);
v___x_3752_ = l_Lean_SourceInfo_fromRef(v_ref_3749_, v___y_3729_);
v___x_3753_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__15));
lean_inc_ref_n(v___y_3730_, 2);
lean_inc_ref_n(v___y_3731_, 2);
lean_inc_ref_n(v___y_3733_, 3);
v___x_3754_ = l_Lean_Name_mkStr4(v___y_3733_, v___y_3731_, v___y_3730_, v___x_3753_);
v___x_3755_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__17));
v___x_3756_ = l_Lean_Name_mkStr4(v___y_3733_, v___y_3731_, v___y_3730_, v___x_3755_);
v___x_3757_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19));
lean_inc(v___x_3752_);
v___x_3758_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3758_, 0, v___x_3752_);
lean_ctor_set(v___x_3758_, 1, v___x_3757_);
v___x_3759_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21));
v___x_3760_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23);
v___x_3761_ = lean_box(0);
lean_inc(v_currMacroScope_3751_);
lean_inc(v_quotContext_3750_);
v___x_3762_ = l_Lean_addMacroScope(v_quotContext_3750_, v___x_3761_, v_currMacroScope_3751_);
v___x_3763_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24));
v___x_3764_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25));
v___x_3765_ = l_Lean_Name_mkStr3(v___y_3733_, v___x_3763_, v___x_3764_);
if (v_isShared_3748_ == 0)
{
lean_ctor_set_tag(v___x_3747_, 0);
lean_ctor_set(v___x_3747_, 0, v___x_3765_);
v___x_3767_ = v___x_3747_;
goto v_reusejp_3766_;
}
else
{
lean_object* v_reuseFailAlloc_3787_; 
v_reuseFailAlloc_3787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3787_, 0, v___x_3765_);
v___x_3767_ = v_reuseFailAlloc_3787_;
goto v_reusejp_3766_;
}
v_reusejp_3766_:
{
lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; 
v___x_3768_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__28));
lean_inc_ref_n(v___y_3733_, 2);
v___x_3769_ = l_Lean_Name_mkStr2(v___y_3733_, v___x_3768_);
v___x_3770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3770_, 0, v___x_3769_);
lean_inc_ref(v___y_3730_);
lean_inc_ref(v___y_3731_);
v___x_3771_ = l_Lean_Name_mkStr3(v___y_3733_, v___y_3731_, v___y_3730_);
v___x_3772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3772_, 0, v___x_3771_);
v___x_3773_ = lean_box(0);
v___x_3774_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3774_, 0, v___x_3772_);
lean_ctor_set(v___x_3774_, 1, v___x_3773_);
v___x_3775_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3775_, 0, v___x_3770_);
lean_ctor_set(v___x_3775_, 1, v___x_3774_);
v___x_3776_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3776_, 0, v___x_3767_);
lean_ctor_set(v___x_3776_, 1, v___x_3775_);
lean_inc_n(v___x_3752_, 6);
v___x_3777_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3777_, 0, v___x_3752_);
lean_ctor_set(v___x_3777_, 1, v___x_3760_);
lean_ctor_set(v___x_3777_, 2, v___x_3762_);
lean_ctor_set(v___x_3777_, 3, v___x_3776_);
v___x_3778_ = l_Lean_Syntax_node1(v___x_3752_, v___x_3759_, v___x_3777_);
v___x_3779_ = l_Lean_Syntax_node2(v___x_3752_, v___x_3756_, v___x_3758_, v___x_3778_);
v___x_3780_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36));
v___x_3781_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3781_, 0, v___x_3752_);
lean_ctor_set(v___x_3781_, 1, v___x_3780_);
v___x_3782_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_3783_ = l_Lean_Syntax_node1(v___x_3752_, v___x_3782_, v_val_3745_);
v___x_3784_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37));
v___x_3785_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3785_, 0, v___x_3752_);
lean_ctor_set(v___x_3785_, 1, v___x_3784_);
v___x_3786_ = l_Lean_Syntax_node5(v___x_3752_, v___x_3754_, v___x_3779_, v___x_3743_, v___x_3781_, v___x_3783_, v___x_3785_);
lean_inc(v___y_3722_);
v___y_3693_ = v___y_3722_;
v___y_3694_ = v___y_3721_;
v___y_3695_ = v___y_3723_;
v___y_3696_ = v___y_3724_;
v___y_3697_ = v___y_3725_;
v___y_3698_ = v___y_3726_;
v___y_3699_ = v___y_3727_;
v___y_3700_ = v___y_3728_;
v___y_3701_ = v___y_3722_;
v_rhs_3702_ = v___x_3786_;
v___y_3703_ = v___y_3735_;
v___y_3704_ = v___y_3736_;
v___y_3705_ = v___y_3737_;
v___y_3706_ = v___y_3738_;
v___y_3707_ = v___y_3739_;
v___y_3708_ = v___y_3740_;
v___y_3709_ = v___y_3741_;
goto v___jp_3692_;
}
}
}
}
v___jp_3789_:
{
lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___f_3812_; lean_object* v___x_3813_; 
v___x_3809_ = lean_box(v___y_3793_);
v___x_3810_ = lean_box(v___y_3797_);
v___x_3811_ = lean_box(v___y_3808_);
v___f_3812_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___boxed), 14, 6);
lean_closure_set(v___f_3812_, 0, v___y_3795_);
lean_closure_set(v___f_3812_, 1, v___y_3794_);
lean_closure_set(v___f_3812_, 2, v___x_3809_);
lean_closure_set(v___f_3812_, 3, v___x_3810_);
lean_closure_set(v___f_3812_, 4, v___y_3792_);
lean_closure_set(v___f_3812_, 5, v___x_3811_);
v___x_3813_ = l_Lean_Elab_Term_elabBindersEx___redArg(v___y_3806_, v___f_3812_, v___y_3805_, v___y_3807_, v___y_3804_, v___y_3803_, v___y_3802_, v___y_3800_);
if (lean_obj_tag(v___x_3813_) == 0)
{
lean_object* v_a_3814_; lean_object* v_toCold_3815_; lean_object* v_options_3816_; lean_object* v_fst_3817_; lean_object* v_snd_3818_; lean_object* v___x_3820_; uint8_t v_isShared_3821_; uint8_t v_isSharedCheck_3857_; 
v_a_3814_ = lean_ctor_get(v___x_3813_, 0);
lean_inc(v_a_3814_);
lean_dec_ref_known(v___x_3813_, 1);
v_toCold_3815_ = lean_ctor_get(v___y_3802_, 0);
v_options_3816_ = lean_ctor_get(v_toCold_3815_, 2);
v_fst_3817_ = lean_ctor_get(v_a_3814_, 0);
v_snd_3818_ = lean_ctor_get(v_a_3814_, 1);
v_isSharedCheck_3857_ = !lean_is_exclusive(v_a_3814_);
if (v_isSharedCheck_3857_ == 0)
{
v___x_3820_ = v_a_3814_;
v_isShared_3821_ = v_isSharedCheck_3857_;
goto v_resetjp_3819_;
}
else
{
lean_inc(v_snd_3818_);
lean_inc(v_fst_3817_);
lean_dec(v_a_3814_);
v___x_3820_ = lean_box(0);
v_isShared_3821_ = v_isSharedCheck_3857_;
goto v_resetjp_3819_;
}
v_resetjp_3819_:
{
lean_object* v_inheritedTraceOptions_3822_; uint8_t v_hasTrace_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; lean_object* v___f_3828_; lean_object* v___x_3829_; uint8_t v___x_3830_; 
v_inheritedTraceOptions_3822_ = lean_ctor_get(v_toCold_3815_, 11);
v_hasTrace_3823_ = lean_ctor_get_uint8(v_options_3816_, sizeof(void*)*1);
v___x_3824_ = lean_box(v___y_3796_);
v___x_3825_ = lean_box(v___y_3790_);
v___x_3826_ = lean_box(v___y_3808_);
v___x_3827_ = lean_box(v___y_3793_);
lean_inc(v_snd_3818_);
v___f_3828_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__3___boxed), 19, 10);
lean_closure_set(v___f_3828_, 0, v___y_3791_);
lean_closure_set(v___f_3828_, 1, v___y_3798_);
lean_closure_set(v___f_3828_, 2, v_a_3691_);
lean_closure_set(v___f_3828_, 3, v_letOrReassign_3674_);
lean_closure_set(v___f_3828_, 4, v_a_3688_);
lean_closure_set(v___f_3828_, 5, v___x_3824_);
lean_closure_set(v___f_3828_, 6, v___x_3825_);
lean_closure_set(v___f_3828_, 7, v_snd_3818_);
lean_closure_set(v___f_3828_, 8, v___x_3826_);
lean_closure_set(v___f_3828_, 9, v___x_3827_);
v___x_3829_ = l_Lean_Syntax_getId(v___y_3799_);
lean_dec(v___y_3799_);
v___x_3830_ = l_Lean_LocalDeclKind_ofBinderName(v___x_3829_);
if (v_hasTrace_3823_ == 0)
{
lean_object* v___x_3831_; 
lean_del_object(v___x_3820_);
v___x_3831_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg(v___x_3829_, v_fst_3817_, v_snd_3818_, v___f_3828_, v___y_3808_, v___x_3830_, v___y_3801_, v___y_3805_, v___y_3807_, v___y_3804_, v___y_3803_, v___y_3802_, v___y_3800_);
return v___x_3831_;
}
else
{
lean_object* v___x_3832_; lean_object* v___x_3833_; uint8_t v___x_3834_; 
v___x_3832_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___closed__3));
v___x_3833_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___closed__4, &l_Lean_Elab_Do_elabDoLetOrReassign___closed__4_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__4);
v___x_3834_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3822_, v_options_3816_, v___x_3833_);
if (v___x_3834_ == 0)
{
lean_object* v___x_3835_; 
lean_del_object(v___x_3820_);
v___x_3835_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg(v___x_3829_, v_fst_3817_, v_snd_3818_, v___f_3828_, v___y_3808_, v___x_3830_, v___y_3801_, v___y_3805_, v___y_3807_, v___y_3804_, v___y_3803_, v___y_3802_, v___y_3800_);
return v___x_3835_;
}
else
{
lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3839_; 
lean_inc(v___x_3829_);
v___x_3836_ = l_Lean_MessageData_ofName(v___x_3829_);
v___x_3837_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___closed__6, &l_Lean_Elab_Do_elabDoLetOrReassign___closed__6_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__6);
if (v_isShared_3821_ == 0)
{
lean_ctor_set_tag(v___x_3820_, 7);
lean_ctor_set(v___x_3820_, 1, v___x_3837_);
lean_ctor_set(v___x_3820_, 0, v___x_3836_);
v___x_3839_ = v___x_3820_;
goto v_reusejp_3838_;
}
else
{
lean_object* v_reuseFailAlloc_3856_; 
v_reuseFailAlloc_3856_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3856_, 0, v___x_3836_);
lean_ctor_set(v_reuseFailAlloc_3856_, 1, v___x_3837_);
v___x_3839_ = v_reuseFailAlloc_3856_;
goto v_reusejp_3838_;
}
v_reusejp_3838_:
{
lean_object* v___x_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; 
lean_inc(v_fst_3817_);
v___x_3840_ = l_Lean_MessageData_ofExpr(v_fst_3817_);
v___x_3841_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3841_, 0, v___x_3839_);
lean_ctor_set(v___x_3841_, 1, v___x_3840_);
v___x_3842_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___closed__8, &l_Lean_Elab_Do_elabDoLetOrReassign___closed__8_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__8);
v___x_3843_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3843_, 0, v___x_3841_);
lean_ctor_set(v___x_3843_, 1, v___x_3842_);
lean_inc(v_snd_3818_);
v___x_3844_ = l_Lean_MessageData_ofExpr(v_snd_3818_);
v___x_3845_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3845_, 0, v___x_3843_);
lean_ctor_set(v___x_3845_, 1, v___x_3844_);
v___x_3846_ = l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(v___x_3832_, v___x_3845_, v___y_3804_, v___y_3803_, v___y_3802_, v___y_3800_);
if (lean_obj_tag(v___x_3846_) == 0)
{
lean_object* v___x_3847_; 
lean_dec_ref_known(v___x_3846_, 1);
v___x_3847_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg(v___x_3829_, v_fst_3817_, v_snd_3818_, v___f_3828_, v___y_3808_, v___x_3830_, v___y_3801_, v___y_3805_, v___y_3807_, v___y_3804_, v___y_3803_, v___y_3802_, v___y_3800_);
return v___x_3847_;
}
else
{
lean_object* v_a_3848_; lean_object* v___x_3850_; uint8_t v_isShared_3851_; uint8_t v_isSharedCheck_3855_; 
lean_dec(v___x_3829_);
lean_dec_ref(v___f_3828_);
lean_dec(v_snd_3818_);
lean_dec(v_fst_3817_);
v_a_3848_ = lean_ctor_get(v___x_3846_, 0);
v_isSharedCheck_3855_ = !lean_is_exclusive(v___x_3846_);
if (v_isSharedCheck_3855_ == 0)
{
v___x_3850_ = v___x_3846_;
v_isShared_3851_ = v_isSharedCheck_3855_;
goto v_resetjp_3849_;
}
else
{
lean_inc(v_a_3848_);
lean_dec(v___x_3846_);
v___x_3850_ = lean_box(0);
v_isShared_3851_ = v_isSharedCheck_3855_;
goto v_resetjp_3849_;
}
v_resetjp_3849_:
{
lean_object* v___x_3853_; 
if (v_isShared_3851_ == 0)
{
v___x_3853_ = v___x_3850_;
goto v_reusejp_3852_;
}
else
{
lean_object* v_reuseFailAlloc_3854_; 
v_reuseFailAlloc_3854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3854_, 0, v_a_3848_);
v___x_3853_ = v_reuseFailAlloc_3854_;
goto v_reusejp_3852_;
}
v_reusejp_3852_:
{
return v___x_3853_;
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
lean_object* v_a_3858_; lean_object* v___x_3860_; uint8_t v_isShared_3861_; uint8_t v_isSharedCheck_3865_; 
lean_dec(v___y_3799_);
lean_dec(v___y_3798_);
lean_dec(v___y_3791_);
lean_dec(v_a_3691_);
lean_dec(v_a_3688_);
lean_dec(v_letOrReassign_3674_);
v_a_3858_ = lean_ctor_get(v___x_3813_, 0);
v_isSharedCheck_3865_ = !lean_is_exclusive(v___x_3813_);
if (v_isSharedCheck_3865_ == 0)
{
v___x_3860_ = v___x_3813_;
v_isShared_3861_ = v_isSharedCheck_3865_;
goto v_resetjp_3859_;
}
else
{
lean_inc(v_a_3858_);
lean_dec(v___x_3813_);
v___x_3860_ = lean_box(0);
v_isShared_3861_ = v_isSharedCheck_3865_;
goto v_resetjp_3859_;
}
v_resetjp_3859_:
{
lean_object* v___x_3863_; 
if (v_isShared_3861_ == 0)
{
v___x_3863_ = v___x_3860_;
goto v_reusejp_3862_;
}
else
{
lean_object* v_reuseFailAlloc_3864_; 
v_reuseFailAlloc_3864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3864_, 0, v_a_3858_);
v___x_3863_ = v_reuseFailAlloc_3864_;
goto v_reusejp_3862_;
}
v_reusejp_3862_:
{
return v___x_3863_;
}
}
}
}
v___jp_3866_:
{
uint8_t v_nondep_3882_; 
v_nondep_3882_ = lean_ctor_get_uint8(v_config_3673_, sizeof(void*)*1);
if (v_nondep_3882_ == 0)
{
if (lean_obj_tag(v_letOrReassign_3674_) == 1)
{
uint8_t v_usedOnly_3883_; uint8_t v_zeta_3884_; lean_object* v_eq_x3f_3885_; 
v_usedOnly_3883_ = lean_ctor_get_uint8(v_config_3673_, sizeof(void*)*1 + 1);
v_zeta_3884_ = lean_ctor_get_uint8(v_config_3673_, sizeof(void*)*1 + 2);
v_eq_x3f_3885_ = lean_ctor_get(v_config_3673_, 0);
lean_inc(v_eq_x3f_3885_);
lean_dec_ref(v_config_3673_);
lean_inc(v_id_3874_);
v___y_3790_ = v_usedOnly_3883_;
v___y_3791_ = v_id_3874_;
v___y_3792_ = v___y_3867_;
v___y_3793_ = v___y_3869_;
v___y_3794_ = v___y_3868_;
v___y_3795_ = v___y_3870_;
v___y_3796_ = v_zeta_3884_;
v___y_3797_ = v___y_3871_;
v___y_3798_ = v_eq_x3f_3885_;
v___y_3799_ = v_id_3874_;
v___y_3800_ = v___y_3881_;
v___y_3801_ = v___y_3875_;
v___y_3802_ = v___y_3880_;
v___y_3803_ = v___y_3879_;
v___y_3804_ = v___y_3878_;
v___y_3805_ = v___y_3876_;
v___y_3806_ = v___y_3872_;
v___y_3807_ = v___y_3877_;
v___y_3808_ = v___y_3873_;
goto v___jp_3789_;
}
else
{
uint8_t v_usedOnly_3886_; uint8_t v_zeta_3887_; lean_object* v_eq_x3f_3888_; 
v_usedOnly_3886_ = lean_ctor_get_uint8(v_config_3673_, sizeof(void*)*1 + 1);
v_zeta_3887_ = lean_ctor_get_uint8(v_config_3673_, sizeof(void*)*1 + 2);
v_eq_x3f_3888_ = lean_ctor_get(v_config_3673_, 0);
lean_inc(v_eq_x3f_3888_);
lean_dec_ref(v_config_3673_);
lean_inc(v_id_3874_);
v___y_3790_ = v_usedOnly_3886_;
v___y_3791_ = v_id_3874_;
v___y_3792_ = v___y_3867_;
v___y_3793_ = v___y_3869_;
v___y_3794_ = v___y_3868_;
v___y_3795_ = v___y_3870_;
v___y_3796_ = v_zeta_3887_;
v___y_3797_ = v___y_3871_;
v___y_3798_ = v_eq_x3f_3888_;
v___y_3799_ = v_id_3874_;
v___y_3800_ = v___y_3881_;
v___y_3801_ = v___y_3875_;
v___y_3802_ = v___y_3880_;
v___y_3803_ = v___y_3879_;
v___y_3804_ = v___y_3878_;
v___y_3805_ = v___y_3876_;
v___y_3806_ = v___y_3872_;
v___y_3807_ = v___y_3877_;
v___y_3808_ = v_nondep_3882_;
goto v___jp_3789_;
}
}
else
{
uint8_t v_usedOnly_3889_; uint8_t v_zeta_3890_; lean_object* v_eq_x3f_3891_; 
v_usedOnly_3889_ = lean_ctor_get_uint8(v_config_3673_, sizeof(void*)*1 + 1);
v_zeta_3890_ = lean_ctor_get_uint8(v_config_3673_, sizeof(void*)*1 + 2);
v_eq_x3f_3891_ = lean_ctor_get(v_config_3673_, 0);
lean_inc(v_eq_x3f_3891_);
lean_dec_ref(v_config_3673_);
lean_inc(v_id_3874_);
v___y_3790_ = v_usedOnly_3889_;
v___y_3791_ = v_id_3874_;
v___y_3792_ = v___y_3867_;
v___y_3793_ = v___y_3869_;
v___y_3794_ = v___y_3868_;
v___y_3795_ = v___y_3870_;
v___y_3796_ = v_zeta_3890_;
v___y_3797_ = v___y_3871_;
v___y_3798_ = v_eq_x3f_3891_;
v___y_3799_ = v_id_3874_;
v___y_3800_ = v___y_3881_;
v___y_3801_ = v___y_3875_;
v___y_3802_ = v___y_3880_;
v___y_3803_ = v___y_3879_;
v___y_3804_ = v___y_3878_;
v___y_3805_ = v___y_3876_;
v___y_3806_ = v___y_3872_;
v___y_3807_ = v___y_3877_;
v___y_3808_ = v_nondep_3882_;
goto v___jp_3789_;
}
}
v___jp_3892_:
{
lean_object* v_doBlockResultType_3901_; lean_object* v___x_3902_; 
v_doBlockResultType_3901_ = lean_ctor_get(v___y_3894_, 3);
lean_inc_ref(v_doBlockResultType_3901_);
v___x_3902_ = l_Lean_Elab_Do_mkMonadApp(v_doBlockResultType_3901_, v___y_3894_, v___y_3895_, v___y_3896_, v___y_3897_, v___y_3898_, v___y_3899_, v___y_3900_);
if (lean_obj_tag(v___x_3902_) == 0)
{
lean_object* v_a_3903_; lean_object* v___x_3905_; uint8_t v_isShared_3906_; uint8_t v_isSharedCheck_3977_; 
v_a_3903_ = lean_ctor_get(v___x_3902_, 0);
v_isSharedCheck_3977_ = !lean_is_exclusive(v___x_3902_);
if (v_isSharedCheck_3977_ == 0)
{
v___x_3905_ = v___x_3902_;
v_isShared_3906_ = v_isSharedCheck_3977_;
goto v_resetjp_3904_;
}
else
{
lean_inc(v_a_3903_);
lean_dec(v___x_3902_);
v___x_3905_ = lean_box(0);
v_isShared_3906_ = v_isSharedCheck_3977_;
goto v_resetjp_3904_;
}
v_resetjp_3904_:
{
lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; uint8_t v___x_3911_; 
v___x_3907_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0));
v___x_3908_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1));
v___x_3909_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2));
v___x_3910_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
lean_inc(v_decl_3893_);
v___x_3911_ = l_Lean_Syntax_isOfKind(v_decl_3893_, v___x_3910_);
if (v___x_3911_ == 0)
{
lean_object* v___x_3912_; 
lean_del_object(v___x_3905_);
lean_dec(v_a_3903_);
lean_dec(v_decl_3893_);
lean_dec(v_a_3691_);
lean_dec(v_a_3688_);
lean_dec(v_tk_3676_);
lean_dec(v_letOrReassign_3674_);
lean_dec_ref(v_config_3673_);
v___x_3912_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_3912_;
}
else
{
lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; uint8_t v___x_3916_; 
v___x_3913_ = lean_unsigned_to_nat(0u);
v___x_3914_ = l_Lean_Syntax_getArg(v_decl_3893_, v___x_3913_);
lean_dec(v_decl_3893_);
v___x_3915_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___closed__10));
lean_inc(v___x_3914_);
v___x_3916_ = l_Lean_Syntax_isOfKind(v___x_3914_, v___x_3915_);
if (v___x_3916_ == 0)
{
lean_object* v___x_3917_; uint8_t v___x_3918_; 
lean_dec(v_tk_3676_);
v___x_3917_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10));
lean_inc(v___x_3914_);
v___x_3918_ = l_Lean_Syntax_isOfKind(v___x_3914_, v___x_3917_);
if (v___x_3918_ == 0)
{
lean_object* v___x_3919_; uint8_t v___x_3920_; 
lean_del_object(v___x_3905_);
lean_dec(v_a_3903_);
v___x_3919_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8));
lean_inc(v___x_3914_);
v___x_3920_ = l_Lean_Syntax_isOfKind(v___x_3914_, v___x_3919_);
if (v___x_3920_ == 0)
{
lean_object* v___x_3921_; 
lean_dec(v___x_3914_);
lean_dec(v_a_3691_);
lean_dec(v_a_3688_);
lean_dec(v_letOrReassign_3674_);
lean_dec_ref(v_config_3673_);
v___x_3921_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_3921_;
}
else
{
lean_object* v___x_3922_; lean_object* v_id_3923_; lean_object* v_binders_3924_; lean_object* v_type_3925_; lean_object* v_value_3926_; uint8_t v___x_3927_; 
v___x_3922_ = l_Lean_Elab_Term_mkLetIdDeclView(v___x_3914_);
lean_dec(v___x_3914_);
v_id_3923_ = lean_ctor_get(v___x_3922_, 0);
lean_inc(v_id_3923_);
v_binders_3924_ = lean_ctor_get(v___x_3922_, 1);
lean_inc_ref(v_binders_3924_);
v_type_3925_ = lean_ctor_get(v___x_3922_, 2);
lean_inc(v_type_3925_);
v_value_3926_ = lean_ctor_get(v___x_3922_, 3);
lean_inc(v_value_3926_);
lean_dec_ref(v___x_3922_);
v___x_3927_ = l_Lean_Syntax_isIdent(v_id_3923_);
if (v___x_3927_ == 0)
{
lean_object* v___x_3928_; 
v___x_3928_ = l_Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6(v_id_3923_, v___x_3920_, v___y_3894_, v___y_3895_, v___y_3896_, v___y_3897_, v___y_3898_, v___y_3899_, v___y_3900_);
lean_dec(v_id_3923_);
if (lean_obj_tag(v___x_3928_) == 0)
{
lean_object* v_a_3929_; 
v_a_3929_ = lean_ctor_get(v___x_3928_, 0);
lean_inc(v_a_3929_);
lean_dec_ref_known(v___x_3928_, 1);
v___y_3867_ = v___x_3913_;
v___y_3868_ = v_value_3926_;
v___y_3869_ = v___x_3920_;
v___y_3870_ = v_type_3925_;
v___y_3871_ = v___x_3918_;
v___y_3872_ = v_binders_3924_;
v___y_3873_ = v___x_3920_;
v_id_3874_ = v_a_3929_;
v___y_3875_ = v___y_3894_;
v___y_3876_ = v___y_3895_;
v___y_3877_ = v___y_3896_;
v___y_3878_ = v___y_3897_;
v___y_3879_ = v___y_3898_;
v___y_3880_ = v___y_3899_;
v___y_3881_ = v___y_3900_;
goto v___jp_3866_;
}
else
{
lean_object* v_a_3930_; lean_object* v___x_3932_; uint8_t v_isShared_3933_; uint8_t v_isSharedCheck_3937_; 
lean_dec(v_value_3926_);
lean_dec(v_type_3925_);
lean_dec_ref(v_binders_3924_);
lean_dec(v_a_3691_);
lean_dec(v_a_3688_);
lean_dec(v_letOrReassign_3674_);
lean_dec_ref(v_config_3673_);
v_a_3930_ = lean_ctor_get(v___x_3928_, 0);
v_isSharedCheck_3937_ = !lean_is_exclusive(v___x_3928_);
if (v_isSharedCheck_3937_ == 0)
{
v___x_3932_ = v___x_3928_;
v_isShared_3933_ = v_isSharedCheck_3937_;
goto v_resetjp_3931_;
}
else
{
lean_inc(v_a_3930_);
lean_dec(v___x_3928_);
v___x_3932_ = lean_box(0);
v_isShared_3933_ = v_isSharedCheck_3937_;
goto v_resetjp_3931_;
}
v_resetjp_3931_:
{
lean_object* v___x_3935_; 
if (v_isShared_3933_ == 0)
{
v___x_3935_ = v___x_3932_;
goto v_reusejp_3934_;
}
else
{
lean_object* v_reuseFailAlloc_3936_; 
v_reuseFailAlloc_3936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3936_, 0, v_a_3930_);
v___x_3935_ = v_reuseFailAlloc_3936_;
goto v_reusejp_3934_;
}
v_reusejp_3934_:
{
return v___x_3935_;
}
}
}
}
else
{
v___y_3867_ = v___x_3913_;
v___y_3868_ = v_value_3926_;
v___y_3869_ = v___x_3920_;
v___y_3870_ = v_type_3925_;
v___y_3871_ = v___x_3918_;
v___y_3872_ = v_binders_3924_;
v___y_3873_ = v___x_3920_;
v_id_3874_ = v_id_3923_;
v___y_3875_ = v___y_3894_;
v___y_3876_ = v___y_3895_;
v___y_3877_ = v___y_3896_;
v___y_3878_ = v___y_3897_;
v___y_3879_ = v___y_3898_;
v___y_3880_ = v___y_3899_;
v___y_3881_ = v___y_3900_;
goto v___jp_3866_;
}
}
}
else
{
lean_object* v___x_3938_; lean_object* v___x_3939_; uint8_t v___x_3940_; 
v___x_3938_ = lean_unsigned_to_nat(1u);
v___x_3939_ = l_Lean_Syntax_getArg(v___x_3914_, v___x_3938_);
v___x_3940_ = l_Lean_Syntax_matchesNull(v___x_3939_, v___x_3913_);
if (v___x_3940_ == 0)
{
lean_object* v___x_3941_; 
lean_dec(v___x_3914_);
lean_del_object(v___x_3905_);
lean_dec(v_a_3903_);
lean_dec(v_a_3691_);
lean_dec(v_a_3688_);
lean_dec(v_letOrReassign_3674_);
lean_dec_ref(v_config_3673_);
v___x_3941_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_3941_;
}
else
{
lean_object* v___x_3942_; lean_object* v___f_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; uint8_t v___x_3947_; 
v___x_3942_ = lean_box(v___x_3916_);
v___f_3943_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__4___boxed), 10, 1);
lean_closure_set(v___f_3943_, 0, v___x_3942_);
v___x_3944_ = l_Lean_Syntax_getArg(v___x_3914_, v___x_3913_);
v___x_3945_ = lean_unsigned_to_nat(2u);
v___x_3946_ = l_Lean_Syntax_getArg(v___x_3914_, v___x_3945_);
v___x_3947_ = l_Lean_Syntax_isNone(v___x_3946_);
if (v___x_3947_ == 0)
{
uint8_t v___x_3948_; 
lean_inc(v___x_3946_);
v___x_3948_ = l_Lean_Syntax_matchesNull(v___x_3946_, v___x_3938_);
if (v___x_3948_ == 0)
{
lean_object* v___x_3949_; 
lean_dec(v___x_3946_);
lean_dec(v___x_3944_);
lean_dec_ref(v___f_3943_);
lean_dec(v___x_3914_);
lean_del_object(v___x_3905_);
lean_dec(v_a_3903_);
lean_dec(v_a_3691_);
lean_dec(v_a_3688_);
lean_dec(v_letOrReassign_3674_);
lean_dec_ref(v_config_3673_);
v___x_3949_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_3949_;
}
else
{
lean_object* v___x_3950_; lean_object* v___x_3951_; uint8_t v___x_3952_; 
v___x_3950_ = l_Lean_Syntax_getArg(v___x_3946_, v___x_3913_);
lean_dec(v___x_3946_);
v___x_3951_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
lean_inc(v___x_3950_);
v___x_3952_ = l_Lean_Syntax_isOfKind(v___x_3950_, v___x_3951_);
if (v___x_3952_ == 0)
{
lean_object* v___x_3953_; 
lean_dec(v___x_3950_);
lean_dec(v___x_3944_);
lean_dec_ref(v___f_3943_);
lean_dec(v___x_3914_);
lean_del_object(v___x_3905_);
lean_dec(v_a_3903_);
lean_dec(v_a_3691_);
lean_dec(v_a_3688_);
lean_dec(v_letOrReassign_3674_);
lean_dec_ref(v_config_3673_);
v___x_3953_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_3953_;
}
else
{
lean_object* v___x_3954_; lean_object* v___x_3956_; 
v___x_3954_ = l_Lean_Syntax_getArg(v___x_3950_, v___x_3938_);
lean_dec(v___x_3950_);
if (v_isShared_3906_ == 0)
{
lean_ctor_set_tag(v___x_3905_, 1);
lean_ctor_set(v___x_3905_, 0, v___x_3954_);
v___x_3956_ = v___x_3905_;
goto v_reusejp_3955_;
}
else
{
lean_object* v_reuseFailAlloc_3957_; 
v_reuseFailAlloc_3957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3957_, 0, v___x_3954_);
v___x_3956_ = v_reuseFailAlloc_3957_;
goto v_reusejp_3955_;
}
v_reusejp_3955_:
{
v___y_3721_ = v___x_3916_;
v___y_3722_ = v___x_3944_;
v___y_3723_ = v___x_3909_;
v___y_3724_ = v___x_3940_;
v___y_3725_ = v___x_3908_;
v___y_3726_ = v_a_3903_;
v___y_3727_ = v___x_3907_;
v___y_3728_ = v___f_3943_;
v___y_3729_ = v___x_3916_;
v___y_3730_ = v___x_3909_;
v___y_3731_ = v___x_3908_;
v___y_3732_ = v___x_3914_;
v___y_3733_ = v___x_3907_;
v_xType_x3f_3734_ = v___x_3956_;
v___y_3735_ = v___y_3894_;
v___y_3736_ = v___y_3895_;
v___y_3737_ = v___y_3896_;
v___y_3738_ = v___y_3897_;
v___y_3739_ = v___y_3898_;
v___y_3740_ = v___y_3899_;
v___y_3741_ = v___y_3900_;
goto v___jp_3720_;
}
}
}
}
else
{
lean_object* v___x_3958_; 
lean_dec(v___x_3946_);
lean_del_object(v___x_3905_);
v___x_3958_ = lean_box(0);
v___y_3721_ = v___x_3916_;
v___y_3722_ = v___x_3944_;
v___y_3723_ = v___x_3909_;
v___y_3724_ = v___x_3940_;
v___y_3725_ = v___x_3908_;
v___y_3726_ = v_a_3903_;
v___y_3727_ = v___x_3907_;
v___y_3728_ = v___f_3943_;
v___y_3729_ = v___x_3916_;
v___y_3730_ = v___x_3909_;
v___y_3731_ = v___x_3908_;
v___y_3732_ = v___x_3914_;
v___y_3733_ = v___x_3907_;
v_xType_x3f_3734_ = v___x_3958_;
v___y_3735_ = v___y_3894_;
v___y_3736_ = v___y_3895_;
v___y_3737_ = v___y_3896_;
v___y_3738_ = v___y_3897_;
v___y_3739_ = v___y_3898_;
v___y_3740_ = v___y_3899_;
v___y_3741_ = v___y_3900_;
goto v___jp_3720_;
}
}
}
}
else
{
lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; 
lean_del_object(v___x_3905_);
lean_dec(v_a_3903_);
lean_dec(v_a_3688_);
v___x_3959_ = lean_box(v___x_3916_);
lean_inc(v___x_3914_);
v___x_3960_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandLetEqnsDecl___boxed), 4, 2);
lean_closure_set(v___x_3960_, 0, v___x_3914_);
lean_closure_set(v___x_3960_, 1, v___x_3959_);
v___x_3961_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg(v___x_3960_, v___y_3894_, v___y_3895_, v___y_3896_, v___y_3897_, v___y_3898_, v___y_3899_, v___y_3900_);
if (lean_obj_tag(v___x_3961_) == 0)
{
lean_object* v_a_3962_; lean_object* v_ref_3963_; uint8_t v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; 
v_a_3962_ = lean_ctor_get(v___x_3961_, 0);
lean_inc(v_a_3962_);
lean_dec_ref_known(v___x_3961_, 1);
v_ref_3963_ = lean_ctor_get(v___y_3899_, 2);
v___x_3964_ = 0;
v___x_3965_ = l_Lean_SourceInfo_fromRef(v_ref_3963_, v___x_3964_);
v___x_3966_ = l_Lean_Syntax_node1(v___x_3965_, v___x_3910_, v_a_3962_);
lean_inc(v___x_3966_);
v___x_3967_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___boxed), 13, 5);
lean_closure_set(v___x_3967_, 0, v_config_3673_);
lean_closure_set(v___x_3967_, 1, v_letOrReassign_3674_);
lean_closure_set(v___x_3967_, 2, v___x_3966_);
lean_closure_set(v___x_3967_, 3, v_tk_3676_);
lean_closure_set(v___x_3967_, 4, v_a_3691_);
v___x_3968_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg(v___x_3914_, v___x_3966_, v___x_3967_, v___y_3894_, v___y_3895_, v___y_3896_, v___y_3897_, v___y_3898_, v___y_3899_, v___y_3900_);
return v___x_3968_;
}
else
{
lean_object* v_a_3969_; lean_object* v___x_3971_; uint8_t v_isShared_3972_; uint8_t v_isSharedCheck_3976_; 
lean_dec(v___x_3914_);
lean_dec(v_a_3691_);
lean_dec(v_tk_3676_);
lean_dec(v_letOrReassign_3674_);
lean_dec_ref(v_config_3673_);
v_a_3969_ = lean_ctor_get(v___x_3961_, 0);
v_isSharedCheck_3976_ = !lean_is_exclusive(v___x_3961_);
if (v_isSharedCheck_3976_ == 0)
{
v___x_3971_ = v___x_3961_;
v_isShared_3972_ = v_isSharedCheck_3976_;
goto v_resetjp_3970_;
}
else
{
lean_inc(v_a_3969_);
lean_dec(v___x_3961_);
v___x_3971_ = lean_box(0);
v_isShared_3972_ = v_isSharedCheck_3976_;
goto v_resetjp_3970_;
}
v_resetjp_3970_:
{
lean_object* v___x_3974_; 
if (v_isShared_3972_ == 0)
{
v___x_3974_ = v___x_3971_;
goto v_reusejp_3973_;
}
else
{
lean_object* v_reuseFailAlloc_3975_; 
v_reuseFailAlloc_3975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3975_, 0, v_a_3969_);
v___x_3974_ = v_reuseFailAlloc_3975_;
goto v_reusejp_3973_;
}
v_reusejp_3973_:
{
return v___x_3974_;
}
}
}
}
}
}
}
else
{
lean_dec(v_decl_3893_);
lean_dec(v_a_3691_);
lean_dec(v_a_3688_);
lean_dec(v_tk_3676_);
lean_dec(v_letOrReassign_3674_);
lean_dec_ref(v_config_3673_);
return v___x_3902_;
}
}
}
else
{
lean_object* v_a_4010_; lean_object* v___x_4012_; uint8_t v_isShared_4013_; uint8_t v_isSharedCheck_4017_; 
lean_dec(v_a_3688_);
lean_dec(v_tk_3676_);
lean_dec(v_decl_3675_);
lean_dec(v_letOrReassign_3674_);
lean_dec_ref(v_config_3673_);
v_a_4010_ = lean_ctor_get(v___x_3690_, 0);
v_isSharedCheck_4017_ = !lean_is_exclusive(v___x_3690_);
if (v_isSharedCheck_4017_ == 0)
{
v___x_4012_ = v___x_3690_;
v_isShared_4013_ = v_isSharedCheck_4017_;
goto v_resetjp_4011_;
}
else
{
lean_inc(v_a_4010_);
lean_dec(v___x_3690_);
v___x_4012_ = lean_box(0);
v_isShared_4013_ = v_isSharedCheck_4017_;
goto v_resetjp_4011_;
}
v_resetjp_4011_:
{
lean_object* v___x_4015_; 
if (v_isShared_4013_ == 0)
{
v___x_4015_ = v___x_4012_;
goto v_reusejp_4014_;
}
else
{
lean_object* v_reuseFailAlloc_4016_; 
v_reuseFailAlloc_4016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4016_, 0, v_a_4010_);
v___x_4015_ = v_reuseFailAlloc_4016_;
goto v_reusejp_4014_;
}
v_reusejp_4014_:
{
return v___x_4015_;
}
}
}
}
else
{
lean_object* v_a_4018_; lean_object* v___x_4020_; uint8_t v_isShared_4021_; uint8_t v_isSharedCheck_4025_; 
lean_dec(v_a_3688_);
lean_dec_ref(v_dec_3677_);
lean_dec(v_tk_3676_);
lean_dec(v_decl_3675_);
lean_dec(v_letOrReassign_3674_);
lean_dec_ref(v_config_3673_);
v_a_4018_ = lean_ctor_get(v___x_3689_, 0);
v_isSharedCheck_4025_ = !lean_is_exclusive(v___x_3689_);
if (v_isSharedCheck_4025_ == 0)
{
v___x_4020_ = v___x_3689_;
v_isShared_4021_ = v_isSharedCheck_4025_;
goto v_resetjp_4019_;
}
else
{
lean_inc(v_a_4018_);
lean_dec(v___x_3689_);
v___x_4020_ = lean_box(0);
v_isShared_4021_ = v_isSharedCheck_4025_;
goto v_resetjp_4019_;
}
v_resetjp_4019_:
{
lean_object* v___x_4023_; 
if (v_isShared_4021_ == 0)
{
v___x_4023_ = v___x_4020_;
goto v_reusejp_4022_;
}
else
{
lean_object* v_reuseFailAlloc_4024_; 
v_reuseFailAlloc_4024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4024_, 0, v_a_4018_);
v___x_4023_ = v_reuseFailAlloc_4024_;
goto v_reusejp_4022_;
}
v_reusejp_4022_:
{
return v___x_4023_;
}
}
}
}
else
{
lean_object* v_a_4026_; lean_object* v___x_4028_; uint8_t v_isShared_4029_; uint8_t v_isSharedCheck_4033_; 
lean_dec_ref(v_dec_3677_);
lean_dec(v_tk_3676_);
lean_dec(v_decl_3675_);
lean_dec(v_letOrReassign_3674_);
lean_dec_ref(v_config_3673_);
v_a_4026_ = lean_ctor_get(v___x_3687_, 0);
v_isSharedCheck_4033_ = !lean_is_exclusive(v___x_3687_);
if (v_isSharedCheck_4033_ == 0)
{
v___x_4028_ = v___x_3687_;
v_isShared_4029_ = v_isSharedCheck_4033_;
goto v_resetjp_4027_;
}
else
{
lean_inc(v_a_4026_);
lean_dec(v___x_3687_);
v___x_4028_ = lean_box(0);
v_isShared_4029_ = v_isSharedCheck_4033_;
goto v_resetjp_4027_;
}
v_resetjp_4027_:
{
lean_object* v___x_4031_; 
if (v_isShared_4029_ == 0)
{
v___x_4031_ = v___x_4028_;
goto v_reusejp_4030_;
}
else
{
lean_object* v_reuseFailAlloc_4032_; 
v_reuseFailAlloc_4032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4032_, 0, v_a_4026_);
v___x_4031_ = v_reuseFailAlloc_4032_;
goto v_reusejp_4030_;
}
v_reusejp_4030_:
{
return v___x_4031_;
}
}
}
}
else
{
lean_object* v_a_4034_; lean_object* v___x_4036_; uint8_t v_isShared_4037_; uint8_t v_isSharedCheck_4041_; 
lean_dec_ref(v_dec_3677_);
lean_dec(v_tk_3676_);
lean_dec(v_decl_3675_);
lean_dec(v_letOrReassign_3674_);
lean_dec_ref(v_config_3673_);
v_a_4034_ = lean_ctor_get(v___x_3686_, 0);
v_isSharedCheck_4041_ = !lean_is_exclusive(v___x_3686_);
if (v_isSharedCheck_4041_ == 0)
{
v___x_4036_ = v___x_3686_;
v_isShared_4037_ = v_isSharedCheck_4041_;
goto v_resetjp_4035_;
}
else
{
lean_inc(v_a_4034_);
lean_dec(v___x_3686_);
v___x_4036_ = lean_box(0);
v_isShared_4037_ = v_isSharedCheck_4041_;
goto v_resetjp_4035_;
}
v_resetjp_4035_:
{
lean_object* v___x_4039_; 
if (v_isShared_4037_ == 0)
{
v___x_4039_ = v___x_4036_;
goto v_reusejp_4038_;
}
else
{
lean_object* v_reuseFailAlloc_4040_; 
v_reuseFailAlloc_4040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4040_, 0, v_a_4034_);
v___x_4039_ = v_reuseFailAlloc_4040_;
goto v_reusejp_4038_;
}
v_reusejp_4038_:
{
return v___x_4039_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0(lean_object* v_00_u03b2_4042_, lean_object* v_x_4043_, lean_object* v_x_4044_, lean_object* v_x_4045_){
_start:
{
lean_object* v___x_4046_; 
v___x_4046_ = l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0___redArg(v_x_4043_, v_x_4044_, v_x_4045_);
return v___x_4046_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5(lean_object* v_cls_4047_, lean_object* v_msg_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_, lean_object* v___y_4052_, lean_object* v___y_4053_, lean_object* v___y_4054_, lean_object* v___y_4055_){
_start:
{
lean_object* v___x_4057_; 
v___x_4057_ = l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(v_cls_4047_, v_msg_4048_, v___y_4052_, v___y_4053_, v___y_4054_, v___y_4055_);
return v___x_4057_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___boxed(lean_object* v_cls_4058_, lean_object* v_msg_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_, lean_object* v___y_4062_, lean_object* v___y_4063_, lean_object* v___y_4064_, lean_object* v___y_4065_, lean_object* v___y_4066_, lean_object* v___y_4067_){
_start:
{
lean_object* v_res_4068_; 
v_res_4068_ = l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5(v_cls_4058_, v_msg_4059_, v___y_4060_, v___y_4061_, v___y_4062_, v___y_4063_, v___y_4064_, v___y_4065_, v___y_4066_);
lean_dec(v___y_4066_);
lean_dec_ref(v___y_4065_);
lean_dec(v___y_4064_);
lean_dec_ref(v___y_4063_);
lean_dec(v___y_4062_);
lean_dec_ref(v___y_4061_);
lean_dec_ref(v___y_4060_);
return v_res_4068_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7(lean_object* v___y_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_){
_start:
{
lean_object* v___x_4077_; 
v___x_4077_ = l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg(v___y_4074_, v___y_4075_);
return v___x_4077_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___boxed(lean_object* v___y_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_){
_start:
{
lean_object* v_res_4086_; 
v_res_4086_ = l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7(v___y_4078_, v___y_4079_, v___y_4080_, v___y_4081_, v___y_4082_, v___y_4083_, v___y_4084_);
lean_dec(v___y_4084_);
lean_dec_ref(v___y_4083_);
lean_dec(v___y_4082_);
lean_dec_ref(v___y_4081_);
lean_dec(v___y_4080_);
lean_dec_ref(v___y_4079_);
lean_dec_ref(v___y_4078_);
return v_res_4086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7(lean_object* v_00_u03b1_4087_, lean_object* v_beforeStx_4088_, lean_object* v_afterStx_4089_, lean_object* v_x_4090_, lean_object* v___y_4091_, lean_object* v___y_4092_, lean_object* v___y_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_){
_start:
{
lean_object* v___x_4099_; 
v___x_4099_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg(v_beforeStx_4088_, v_afterStx_4089_, v_x_4090_, v___y_4091_, v___y_4092_, v___y_4093_, v___y_4094_, v___y_4095_, v___y_4096_, v___y_4097_);
return v___x_4099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___boxed(lean_object* v_00_u03b1_4100_, lean_object* v_beforeStx_4101_, lean_object* v_afterStx_4102_, lean_object* v_x_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_, lean_object* v___y_4111_){
_start:
{
lean_object* v_res_4112_; 
v_res_4112_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7(v_00_u03b1_4100_, v_beforeStx_4101_, v_afterStx_4102_, v_x_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_);
lean_dec(v___y_4110_);
lean_dec_ref(v___y_4109_);
lean_dec(v___y_4108_);
lean_dec_ref(v___y_4107_);
lean_dec(v___y_4106_);
lean_dec_ref(v___y_4105_);
lean_dec_ref(v___y_4104_);
return v_res_4112_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12(lean_object* v_00_u03b1_4113_, lean_object* v_x_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_){
_start:
{
lean_object* v___x_4117_; 
v___x_4117_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___redArg(v_x_4114_, v___y_4116_);
return v___x_4117_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___boxed(lean_object* v_00_u03b1_4118_, lean_object* v_x_4119_, lean_object* v___y_4120_, lean_object* v___y_4121_){
_start:
{
lean_object* v_res_4122_; 
v_res_4122_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12(v_00_u03b1_4118_, v_x_4119_, v___y_4120_, v___y_4121_);
lean_dec_ref(v___y_4120_);
lean_dec_ref(v_x_4119_);
return v_res_4122_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16(lean_object* v_00_u03b1_4123_, lean_object* v_ref_4124_, lean_object* v___y_4125_, lean_object* v___y_4126_, lean_object* v___y_4127_, lean_object* v___y_4128_, lean_object* v___y_4129_, lean_object* v___y_4130_, lean_object* v___y_4131_){
_start:
{
lean_object* v___x_4133_; 
v___x_4133_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___redArg(v_ref_4124_);
return v___x_4133_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16___boxed(lean_object* v_00_u03b1_4134_, lean_object* v_ref_4135_, lean_object* v___y_4136_, lean_object* v___y_4137_, lean_object* v___y_4138_, lean_object* v___y_4139_, lean_object* v___y_4140_, lean_object* v___y_4141_, lean_object* v___y_4142_, lean_object* v___y_4143_){
_start:
{
lean_object* v_res_4144_; 
v_res_4144_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__16(v_00_u03b1_4134_, v_ref_4135_, v___y_4136_, v___y_4137_, v___y_4138_, v___y_4139_, v___y_4140_, v___y_4141_, v___y_4142_);
lean_dec(v___y_4142_);
lean_dec_ref(v___y_4141_);
lean_dec(v___y_4140_);
lean_dec_ref(v___y_4139_);
lean_dec(v___y_4138_);
lean_dec_ref(v___y_4137_);
lean_dec_ref(v___y_4136_);
return v_res_4144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8(lean_object* v_00_u03b1_4145_, lean_object* v_x_4146_, lean_object* v___y_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_){
_start:
{
lean_object* v___x_4155_; 
v___x_4155_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg(v_x_4146_, v___y_4147_, v___y_4148_, v___y_4149_, v___y_4150_, v___y_4151_, v___y_4152_, v___y_4153_);
return v___x_4155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___boxed(lean_object* v_00_u03b1_4156_, lean_object* v_x_4157_, lean_object* v___y_4158_, lean_object* v___y_4159_, lean_object* v___y_4160_, lean_object* v___y_4161_, lean_object* v___y_4162_, lean_object* v___y_4163_, lean_object* v___y_4164_, lean_object* v___y_4165_){
_start:
{
lean_object* v_res_4166_; 
v_res_4166_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8(v_00_u03b1_4156_, v_x_4157_, v___y_4158_, v___y_4159_, v___y_4160_, v___y_4161_, v___y_4162_, v___y_4163_, v___y_4164_);
lean_dec(v___y_4164_);
lean_dec_ref(v___y_4163_);
lean_dec(v___y_4162_);
lean_dec_ref(v___y_4161_);
lean_dec(v___y_4160_);
lean_dec_ref(v___y_4159_);
lean_dec_ref(v___y_4158_);
return v_res_4166_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0(lean_object* v_00_u03b2_4167_, lean_object* v_x_4168_, size_t v_x_4169_, size_t v_x_4170_, lean_object* v_x_4171_, lean_object* v_x_4172_){
_start:
{
lean_object* v___x_4173_; 
v___x_4173_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(v_x_4168_, v_x_4169_, v_x_4170_, v_x_4171_, v_x_4172_);
return v___x_4173_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___boxed(lean_object* v_00_u03b2_4174_, lean_object* v_x_4175_, lean_object* v_x_4176_, lean_object* v_x_4177_, lean_object* v_x_4178_, lean_object* v_x_4179_){
_start:
{
size_t v_x_99480__boxed_4180_; size_t v_x_99481__boxed_4181_; lean_object* v_res_4182_; 
v_x_99480__boxed_4180_ = lean_unbox_usize(v_x_4176_);
lean_dec(v_x_4176_);
v_x_99481__boxed_4181_ = lean_unbox_usize(v_x_4177_);
lean_dec(v_x_4177_);
v_res_4182_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0(v_00_u03b2_4174_, v_x_4175_, v_x_99480__boxed_4180_, v_x_99481__boxed_4181_, v_x_4178_, v_x_4179_);
return v_res_4182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10(lean_object* v_00_u03b1_4183_, lean_object* v_stx_4184_, lean_object* v_output_4185_, lean_object* v_x_4186_, lean_object* v___y_4187_, lean_object* v___y_4188_, lean_object* v___y_4189_, lean_object* v___y_4190_, lean_object* v___y_4191_, lean_object* v___y_4192_){
_start:
{
lean_object* v___x_4194_; 
v___x_4194_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10___redArg(v_stx_4184_, v_output_4185_, v_x_4186_, v___y_4187_, v___y_4188_, v___y_4189_, v___y_4190_, v___y_4191_, v___y_4192_);
return v___x_4194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10___boxed(lean_object* v_00_u03b1_4195_, lean_object* v_stx_4196_, lean_object* v_output_4197_, lean_object* v_x_4198_, lean_object* v___y_4199_, lean_object* v___y_4200_, lean_object* v___y_4201_, lean_object* v___y_4202_, lean_object* v___y_4203_, lean_object* v___y_4204_, lean_object* v___y_4205_){
_start:
{
lean_object* v_res_4206_; 
v_res_4206_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10(v_00_u03b1_4195_, v_stx_4196_, v_output_4197_, v_x_4198_, v___y_4199_, v___y_4200_, v___y_4201_, v___y_4202_, v___y_4203_, v___y_4204_);
lean_dec(v___y_4204_);
lean_dec_ref(v___y_4203_);
lean_dec(v___y_4202_);
lean_dec_ref(v___y_4201_);
lean_dec(v___y_4200_);
lean_dec_ref(v___y_4199_);
return v_res_4206_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__14(lean_object* v_as_4207_, lean_object* v_as_x27_4208_, lean_object* v_b_4209_, lean_object* v_a_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_, lean_object* v___y_4214_, lean_object* v___y_4215_, lean_object* v___y_4216_, lean_object* v___y_4217_){
_start:
{
lean_object* v___x_4219_; 
v___x_4219_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__14___redArg(v_as_x27_4208_, v_b_4209_, v___y_4211_, v___y_4212_, v___y_4213_, v___y_4214_, v___y_4215_, v___y_4216_, v___y_4217_);
return v___x_4219_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__14___boxed(lean_object* v_as_4220_, lean_object* v_as_x27_4221_, lean_object* v_b_4222_, lean_object* v_a_4223_, lean_object* v___y_4224_, lean_object* v___y_4225_, lean_object* v___y_4226_, lean_object* v___y_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_, lean_object* v___y_4230_, lean_object* v___y_4231_){
_start:
{
lean_object* v_res_4232_; 
v_res_4232_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__14(v_as_4220_, v_as_x27_4221_, v_b_4222_, v_a_4223_, v___y_4224_, v___y_4225_, v___y_4226_, v___y_4227_, v___y_4228_, v___y_4229_, v___y_4230_);
lean_dec(v___y_4230_);
lean_dec_ref(v___y_4229_);
lean_dec(v___y_4228_);
lean_dec_ref(v___y_4227_);
lean_dec(v___y_4226_);
lean_dec_ref(v___y_4225_);
lean_dec_ref(v___y_4224_);
lean_dec(v_as_x27_4221_);
lean_dec(v_as_4220_);
return v_res_4232_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_4233_, lean_object* v_n_4234_, lean_object* v_k_4235_, lean_object* v_v_4236_){
_start:
{
lean_object* v___x_4237_; 
v___x_4237_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3___redArg(v_n_4234_, v_k_4235_, v_v_4236_);
return v___x_4237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4(lean_object* v_00_u03b2_4238_, size_t v_depth_4239_, lean_object* v_keys_4240_, lean_object* v_vals_4241_, lean_object* v_heq_4242_, lean_object* v_i_4243_, lean_object* v_entries_4244_){
_start:
{
lean_object* v___x_4245_; 
v___x_4245_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___redArg(v_depth_4239_, v_keys_4240_, v_vals_4241_, v_i_4243_, v_entries_4244_);
return v___x_4245_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___boxed(lean_object* v_00_u03b2_4246_, lean_object* v_depth_4247_, lean_object* v_keys_4248_, lean_object* v_vals_4249_, lean_object* v_heq_4250_, lean_object* v_i_4251_, lean_object* v_entries_4252_){
_start:
{
size_t v_depth_boxed_4253_; lean_object* v_res_4254_; 
v_depth_boxed_4253_ = lean_unbox_usize(v_depth_4247_);
lean_dec(v_depth_4247_);
v_res_4254_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4(v_00_u03b2_4246_, v_depth_boxed_4253_, v_keys_4248_, v_vals_4249_, v_heq_4250_, v_i_4251_, v_entries_4252_);
lean_dec_ref(v_vals_4249_);
lean_dec_ref(v_keys_4248_);
return v_res_4254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13_spec__18(lean_object* v___y_4255_, lean_object* v___y_4256_, lean_object* v___y_4257_, lean_object* v___y_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_){
_start:
{
lean_object* v___x_4262_; 
v___x_4262_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13_spec__18___redArg(v___y_4260_);
return v___x_4262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13_spec__18___boxed(lean_object* v___y_4263_, lean_object* v___y_4264_, lean_object* v___y_4265_, lean_object* v___y_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_, lean_object* v___y_4269_){
_start:
{
lean_object* v_res_4270_; 
v_res_4270_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13_spec__18(v___y_4263_, v___y_4264_, v___y_4265_, v___y_4266_, v___y_4267_, v___y_4268_);
lean_dec(v___y_4268_);
lean_dec_ref(v___y_4267_);
lean_dec(v___y_4266_);
lean_dec_ref(v___y_4265_);
lean_dec(v___y_4264_);
lean_dec_ref(v___y_4263_);
return v_res_4270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13(lean_object* v_00_u03b1_4271_, lean_object* v_x_4272_, lean_object* v_mkInfoTree_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_, lean_object* v___y_4276_, lean_object* v___y_4277_, lean_object* v___y_4278_, lean_object* v___y_4279_){
_start:
{
lean_object* v___x_4281_; 
v___x_4281_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13___redArg(v_x_4272_, v_mkInfoTree_4273_, v___y_4274_, v___y_4275_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_);
return v___x_4281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13___boxed(lean_object* v_00_u03b1_4282_, lean_object* v_x_4283_, lean_object* v_mkInfoTree_4284_, lean_object* v___y_4285_, lean_object* v___y_4286_, lean_object* v___y_4287_, lean_object* v___y_4288_, lean_object* v___y_4289_, lean_object* v___y_4290_, lean_object* v___y_4291_){
_start:
{
lean_object* v_res_4292_; 
v_res_4292_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__10_spec__13(v_00_u03b1_4282_, v_x_4283_, v_mkInfoTree_4284_, v___y_4285_, v___y_4286_, v___y_4287_, v___y_4288_, v___y_4289_, v___y_4290_);
lean_dec(v___y_4290_);
lean_dec_ref(v___y_4289_);
lean_dec(v___y_4288_);
lean_dec_ref(v___y_4287_);
lean_dec(v___y_4286_);
lean_dec_ref(v___y_4285_);
return v_res_4292_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__19(lean_object* v_00_u03b2_4293_, lean_object* v_m_4294_, lean_object* v_a_4295_){
_start:
{
lean_object* v___x_4296_; 
v___x_4296_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__19___redArg(v_m_4294_, v_a_4295_);
return v___x_4296_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__19___boxed(lean_object* v_00_u03b2_4297_, lean_object* v_m_4298_, lean_object* v_a_4299_){
_start:
{
lean_object* v_res_4300_; 
v_res_4300_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__19(v_00_u03b2_4297_, v_m_4298_, v_a_4299_);
lean_dec(v_a_4299_);
lean_dec_ref(v_m_4298_);
return v_res_4300_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3_spec__14(lean_object* v_00_u03b2_4301_, lean_object* v_x_4302_, lean_object* v_x_4303_, lean_object* v_x_4304_, lean_object* v_x_4305_){
_start:
{
lean_object* v___x_4306_; 
v___x_4306_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3_spec__14___redArg(v_x_4302_, v_x_4303_, v_x_4304_, v_x_4305_);
return v___x_4306_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21_spec__24(lean_object* v_00_u03b2_4307_){
_start:
{
lean_object* v___x_4308_; 
v___x_4308_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__2);
return v___x_4308_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21___redArg(){
_start:
{
lean_object* v___x_4310_; 
v___x_4310_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__2);
return v___x_4310_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21___redArg___boxed(lean_object* v___dummy_4311_){
_start:
{
lean_object* v_res_4312_; 
v_res_4312_ = l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21___redArg();
return v_res_4312_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__21(lean_object* v_00_u03b2_4313_){
_start:
{
lean_object* v___x_4314_; 
v___x_4314_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17___closed__2);
return v___x_4314_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22(lean_object* v_00_u03b2_4315_, lean_object* v_x_4316_, lean_object* v_x_4317_){
_start:
{
uint8_t v___x_4318_; 
v___x_4318_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22___redArg(v_x_4316_, v_x_4317_);
return v___x_4318_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22___boxed(lean_object* v_00_u03b2_4319_, lean_object* v_x_4320_, lean_object* v_x_4321_){
_start:
{
uint8_t v_res_4322_; lean_object* v_r_4323_; 
v_res_4322_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22(v_00_u03b2_4319_, v_x_4320_, v_x_4321_);
lean_dec_ref(v_x_4321_);
lean_dec_ref(v_x_4320_);
v_r_4323_ = lean_box(v_res_4322_);
return v_r_4323_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__19_spec__25(lean_object* v_00_u03b2_4324_, lean_object* v_a_4325_, lean_object* v_x_4326_){
_start:
{
lean_object* v___x_4327_; 
v___x_4327_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__19_spec__25___redArg(v_a_4325_, v_x_4326_);
return v___x_4327_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__19_spec__25___boxed(lean_object* v_00_u03b2_4328_, lean_object* v_a_4329_, lean_object* v_x_4330_){
_start:
{
lean_object* v_res_4331_; 
v_res_4331_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__19_spec__25(v_00_u03b2_4328_, v_a_4329_, v_x_4330_);
lean_dec(v_x_4330_);
lean_dec(v_a_4329_);
return v_res_4331_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22_spec__26(lean_object* v_00_u03b2_4332_, lean_object* v_x_4333_, size_t v_x_4334_, lean_object* v_x_4335_){
_start:
{
uint8_t v___x_4336_; 
v___x_4336_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22_spec__26___redArg(v_x_4333_, v_x_4334_, v_x_4335_);
return v___x_4336_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22_spec__26___boxed(lean_object* v_00_u03b2_4337_, lean_object* v_x_4338_, lean_object* v_x_4339_, lean_object* v_x_4340_){
_start:
{
size_t v_x_99633__boxed_4341_; uint8_t v_res_4342_; lean_object* v_r_4343_; 
v_x_99633__boxed_4341_ = lean_unbox_usize(v_x_4339_);
lean_dec(v_x_4339_);
v_res_4342_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22_spec__26(v_00_u03b2_4337_, v_x_4338_, v_x_99633__boxed_4341_, v_x_4340_);
lean_dec_ref(v_x_4340_);
lean_dec_ref(v_x_4338_);
v_r_4343_ = lean_box(v_res_4342_);
return v_r_4343_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22_spec__26_spec__29(lean_object* v_00_u03b2_4344_, lean_object* v_keys_4345_, lean_object* v_vals_4346_, lean_object* v_heq_4347_, lean_object* v_i_4348_, lean_object* v_k_4349_){
_start:
{
uint8_t v___x_4350_; 
v___x_4350_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22_spec__26_spec__29___redArg(v_keys_4345_, v_i_4348_, v_k_4349_);
return v___x_4350_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22_spec__26_spec__29___boxed(lean_object* v_00_u03b2_4351_, lean_object* v_keys_4352_, lean_object* v_vals_4353_, lean_object* v_heq_4354_, lean_object* v_i_4355_, lean_object* v_k_4356_){
_start:
{
uint8_t v_res_4357_; lean_object* v_r_4358_; 
v_res_4357_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13_spec__17_spec__22_spec__26_spec__29(v_00_u03b2_4351_, v_keys_4352_, v_vals_4353_, v_heq_4354_, v_i_4355_, v_k_4356_);
lean_dec_ref(v_k_4356_);
lean_dec_ref(v_vals_4353_);
lean_dec_ref(v_keys_4352_);
v_r_4358_ = lean_box(v_res_4357_);
return v_r_4358_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__1(void){
_start:
{
lean_object* v___x_4360_; lean_object* v___x_4361_; 
v___x_4360_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__0));
v___x_4361_ = l_Lean_stringToMessageData(v___x_4360_);
return v___x_4361_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut(lean_object* v_letConfigStx_4362_, lean_object* v_mutTk_x3f_4363_, lean_object* v_initConfig_4364_, lean_object* v_a_4365_, lean_object* v_a_4366_, lean_object* v_a_4367_, lean_object* v_a_4368_, lean_object* v_a_4369_, lean_object* v_a_4370_, lean_object* v_a_4371_){
_start:
{
if (lean_obj_tag(v_mutTk_x3f_4363_) == 0)
{
lean_object* v___x_4373_; 
v___x_4373_ = l_Lean_Elab_Term_mkLetConfig(v_letConfigStx_4362_, v_initConfig_4364_, v_a_4366_, v_a_4367_, v_a_4368_, v_a_4369_, v_a_4370_, v_a_4371_);
return v___x_4373_;
}
else
{
lean_object* v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; uint8_t v___x_4378_; 
v___x_4374_ = lean_unsigned_to_nat(0u);
v___x_4375_ = l_Lean_Syntax_getArg(v_letConfigStx_4362_, v___x_4374_);
v___x_4376_ = l_Lean_Syntax_getArgs(v___x_4375_);
lean_dec(v___x_4375_);
v___x_4377_ = lean_array_get_size(v___x_4376_);
lean_dec_ref(v___x_4376_);
v___x_4378_ = lean_nat_dec_eq(v___x_4377_, v___x_4374_);
if (v___x_4378_ == 0)
{
lean_object* v___x_4379_; lean_object* v___x_4380_; lean_object* v_a_4381_; lean_object* v___x_4383_; uint8_t v_isShared_4384_; uint8_t v_isSharedCheck_4388_; 
lean_dec_ref(v_initConfig_4364_);
v___x_4379_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__1);
v___x_4380_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg(v_letConfigStx_4362_, v___x_4379_, v_a_4365_, v_a_4366_, v_a_4367_, v_a_4368_, v_a_4369_, v_a_4370_, v_a_4371_);
lean_dec(v_letConfigStx_4362_);
v_a_4381_ = lean_ctor_get(v___x_4380_, 0);
v_isSharedCheck_4388_ = !lean_is_exclusive(v___x_4380_);
if (v_isSharedCheck_4388_ == 0)
{
v___x_4383_ = v___x_4380_;
v_isShared_4384_ = v_isSharedCheck_4388_;
goto v_resetjp_4382_;
}
else
{
lean_inc(v_a_4381_);
lean_dec(v___x_4380_);
v___x_4383_ = lean_box(0);
v_isShared_4384_ = v_isSharedCheck_4388_;
goto v_resetjp_4382_;
}
v_resetjp_4382_:
{
lean_object* v___x_4386_; 
if (v_isShared_4384_ == 0)
{
v___x_4386_ = v___x_4383_;
goto v_reusejp_4385_;
}
else
{
lean_object* v_reuseFailAlloc_4387_; 
v_reuseFailAlloc_4387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4387_, 0, v_a_4381_);
v___x_4386_ = v_reuseFailAlloc_4387_;
goto v_reusejp_4385_;
}
v_reusejp_4385_:
{
return v___x_4386_;
}
}
}
else
{
lean_object* v___x_4389_; 
v___x_4389_ = l_Lean_Elab_Term_mkLetConfig(v_letConfigStx_4362_, v_initConfig_4364_, v_a_4366_, v_a_4367_, v_a_4368_, v_a_4369_, v_a_4370_, v_a_4371_);
return v___x_4389_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___boxed(lean_object* v_letConfigStx_4390_, lean_object* v_mutTk_x3f_4391_, lean_object* v_initConfig_4392_, lean_object* v_a_4393_, lean_object* v_a_4394_, lean_object* v_a_4395_, lean_object* v_a_4396_, lean_object* v_a_4397_, lean_object* v_a_4398_, lean_object* v_a_4399_, lean_object* v_a_4400_){
_start:
{
lean_object* v_res_4401_; 
v_res_4401_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut(v_letConfigStx_4390_, v_mutTk_x3f_4391_, v_initConfig_4392_, v_a_4393_, v_a_4394_, v_a_4395_, v_a_4396_, v_a_4397_, v_a_4398_, v_a_4399_);
lean_dec(v_a_4399_);
lean_dec_ref(v_a_4398_);
lean_dec(v_a_4397_);
lean_dec_ref(v_a_4396_);
lean_dec(v_a_4395_);
lean_dec_ref(v_a_4394_);
lean_dec_ref(v_a_4393_);
lean_dec(v_mutTk_x3f_4391_);
return v_res_4401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLet(lean_object* v_stx_4417_, lean_object* v_dec_4418_, lean_object* v_a_4419_, lean_object* v_a_4420_, lean_object* v_a_4421_, lean_object* v_a_4422_, lean_object* v_a_4423_, lean_object* v_a_4424_, lean_object* v_a_4425_){
_start:
{
lean_object* v___x_4427_; uint8_t v___x_4428_; 
v___x_4427_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__1));
lean_inc(v_stx_4417_);
v___x_4428_ = l_Lean_Syntax_isOfKind(v_stx_4417_, v___x_4427_);
if (v___x_4428_ == 0)
{
lean_object* v___x_4429_; 
lean_dec_ref(v_dec_4418_);
lean_dec(v_stx_4417_);
v___x_4429_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4429_;
}
else
{
lean_object* v___x_4430_; lean_object* v_tk_4431_; lean_object* v_mutTk_x3f_4433_; lean_object* v___y_4434_; lean_object* v___y_4435_; lean_object* v___y_4436_; lean_object* v___y_4437_; lean_object* v___y_4438_; lean_object* v___y_4439_; lean_object* v___y_4440_; lean_object* v___x_4465_; lean_object* v___x_4466_; uint8_t v___x_4467_; 
v___x_4430_ = lean_unsigned_to_nat(0u);
v_tk_4431_ = l_Lean_Syntax_getArg(v_stx_4417_, v___x_4430_);
v___x_4465_ = lean_unsigned_to_nat(1u);
v___x_4466_ = l_Lean_Syntax_getArg(v_stx_4417_, v___x_4465_);
v___x_4467_ = l_Lean_Syntax_isNone(v___x_4466_);
if (v___x_4467_ == 0)
{
uint8_t v___x_4468_; 
lean_inc(v___x_4466_);
v___x_4468_ = l_Lean_Syntax_matchesNull(v___x_4466_, v___x_4465_);
if (v___x_4468_ == 0)
{
lean_object* v___x_4469_; 
lean_dec(v___x_4466_);
lean_dec(v_tk_4431_);
lean_dec_ref(v_dec_4418_);
lean_dec(v_stx_4417_);
v___x_4469_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4469_;
}
else
{
lean_object* v_mutTk_x3f_4470_; lean_object* v___x_4471_; 
v_mutTk_x3f_4470_ = l_Lean_Syntax_getArg(v___x_4466_, v___x_4430_);
lean_dec(v___x_4466_);
v___x_4471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4471_, 0, v_mutTk_x3f_4470_);
v_mutTk_x3f_4433_ = v___x_4471_;
v___y_4434_ = v_a_4419_;
v___y_4435_ = v_a_4420_;
v___y_4436_ = v_a_4421_;
v___y_4437_ = v_a_4422_;
v___y_4438_ = v_a_4423_;
v___y_4439_ = v_a_4424_;
v___y_4440_ = v_a_4425_;
goto v___jp_4432_;
}
}
else
{
lean_object* v___x_4472_; 
lean_dec(v___x_4466_);
v___x_4472_ = lean_box(0);
v_mutTk_x3f_4433_ = v___x_4472_;
v___y_4434_ = v_a_4419_;
v___y_4435_ = v_a_4420_;
v___y_4436_ = v_a_4421_;
v___y_4437_ = v_a_4422_;
v___y_4438_ = v_a_4423_;
v___y_4439_ = v_a_4424_;
v___y_4440_ = v_a_4425_;
goto v___jp_4432_;
}
v___jp_4432_:
{
lean_object* v___x_4441_; lean_object* v_config_4442_; lean_object* v___x_4443_; uint8_t v___x_4444_; 
v___x_4441_ = lean_unsigned_to_nat(2u);
v_config_4442_ = l_Lean_Syntax_getArg(v_stx_4417_, v___x_4441_);
v___x_4443_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__3));
lean_inc(v_config_4442_);
v___x_4444_ = l_Lean_Syntax_isOfKind(v_config_4442_, v___x_4443_);
if (v___x_4444_ == 0)
{
lean_object* v___x_4445_; 
lean_dec(v_config_4442_);
lean_dec(v_mutTk_x3f_4433_);
lean_dec(v_tk_4431_);
lean_dec_ref(v_dec_4418_);
lean_dec(v_stx_4417_);
v___x_4445_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4445_;
}
else
{
lean_object* v___x_4446_; lean_object* v_decl_4447_; lean_object* v___x_4448_; uint8_t v___x_4449_; 
v___x_4446_ = lean_unsigned_to_nat(3u);
v_decl_4447_ = l_Lean_Syntax_getArg(v_stx_4417_, v___x_4446_);
lean_dec(v_stx_4417_);
v___x_4448_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
lean_inc(v_decl_4447_);
v___x_4449_ = l_Lean_Syntax_isOfKind(v_decl_4447_, v___x_4448_);
if (v___x_4449_ == 0)
{
lean_object* v___x_4450_; 
lean_dec(v_decl_4447_);
lean_dec(v_config_4442_);
lean_dec(v_mutTk_x3f_4433_);
lean_dec(v_tk_4431_);
lean_dec_ref(v_dec_4418_);
v___x_4450_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4450_;
}
else
{
uint8_t v___x_4451_; lean_object* v___x_4452_; lean_object* v___x_4453_; 
v___x_4451_ = 0;
v___x_4452_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__4));
v___x_4453_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut(v_config_4442_, v_mutTk_x3f_4433_, v___x_4452_, v___y_4434_, v___y_4435_, v___y_4436_, v___y_4437_, v___y_4438_, v___y_4439_, v___y_4440_);
if (lean_obj_tag(v___x_4453_) == 0)
{
lean_object* v_a_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; 
v_a_4454_ = lean_ctor_get(v___x_4453_, 0);
lean_inc(v_a_4454_);
lean_dec_ref_known(v___x_4453_, 1);
v___x_4455_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4455_, 0, v_mutTk_x3f_4433_);
lean_ctor_set_uint8(v___x_4455_, sizeof(void*)*1, v___x_4451_);
v___x_4456_ = l_Lean_Elab_Do_elabDoLetOrReassign(v_a_4454_, v___x_4455_, v_decl_4447_, v_tk_4431_, v_dec_4418_, v___y_4434_, v___y_4435_, v___y_4436_, v___y_4437_, v___y_4438_, v___y_4439_, v___y_4440_);
return v___x_4456_;
}
else
{
lean_object* v_a_4457_; lean_object* v___x_4459_; uint8_t v_isShared_4460_; uint8_t v_isSharedCheck_4464_; 
lean_dec(v_decl_4447_);
lean_dec(v_mutTk_x3f_4433_);
lean_dec(v_tk_4431_);
lean_dec_ref(v_dec_4418_);
v_a_4457_ = lean_ctor_get(v___x_4453_, 0);
v_isSharedCheck_4464_ = !lean_is_exclusive(v___x_4453_);
if (v_isSharedCheck_4464_ == 0)
{
v___x_4459_ = v___x_4453_;
v_isShared_4460_ = v_isSharedCheck_4464_;
goto v_resetjp_4458_;
}
else
{
lean_inc(v_a_4457_);
lean_dec(v___x_4453_);
v___x_4459_ = lean_box(0);
v_isShared_4460_ = v_isSharedCheck_4464_;
goto v_resetjp_4458_;
}
v_resetjp_4458_:
{
lean_object* v___x_4462_; 
if (v_isShared_4460_ == 0)
{
v___x_4462_ = v___x_4459_;
goto v_reusejp_4461_;
}
else
{
lean_object* v_reuseFailAlloc_4463_; 
v_reuseFailAlloc_4463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4463_, 0, v_a_4457_);
v___x_4462_ = v_reuseFailAlloc_4463_;
goto v_reusejp_4461_;
}
v_reusejp_4461_:
{
return v___x_4462_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLet___boxed(lean_object* v_stx_4473_, lean_object* v_dec_4474_, lean_object* v_a_4475_, lean_object* v_a_4476_, lean_object* v_a_4477_, lean_object* v_a_4478_, lean_object* v_a_4479_, lean_object* v_a_4480_, lean_object* v_a_4481_, lean_object* v_a_4482_){
_start:
{
lean_object* v_res_4483_; 
v_res_4483_ = l_Lean_Elab_Do_elabDoLet(v_stx_4473_, v_dec_4474_, v_a_4475_, v_a_4476_, v_a_4477_, v_a_4478_, v_a_4479_, v_a_4480_, v_a_4481_);
lean_dec(v_a_4481_);
lean_dec_ref(v_a_4480_);
lean_dec(v_a_4479_);
lean_dec_ref(v_a_4478_);
lean_dec(v_a_4477_);
lean_dec_ref(v_a_4476_);
lean_dec_ref(v_a_4475_);
return v_res_4483_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1(){
_start:
{
lean_object* v___x_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; 
v___x_4491_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_4492_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__1));
v___x_4493_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1));
v___x_4494_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLet___boxed), 10, 0);
v___x_4495_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4491_, v___x_4492_, v___x_4493_, v___x_4494_);
return v___x_4495_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___boxed(lean_object* v_a_4496_){
_start:
{
lean_object* v_res_4497_; 
v_res_4497_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1();
return v_res_4497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoErased(lean_object* v_stx_4512_, lean_object* v_dec_4513_, lean_object* v_a_4514_, lean_object* v_a_4515_, lean_object* v_a_4516_, lean_object* v_a_4517_, lean_object* v_a_4518_, lean_object* v_a_4519_, lean_object* v_a_4520_){
_start:
{
lean_object* v___x_4522_; uint8_t v___x_4523_; 
v___x_4522_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__1));
lean_inc(v_stx_4512_);
v___x_4523_ = l_Lean_Syntax_isOfKind(v_stx_4512_, v___x_4522_);
if (v___x_4523_ == 0)
{
lean_object* v___x_4524_; 
lean_dec_ref(v_dec_4513_);
lean_dec(v_stx_4512_);
v___x_4524_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4524_;
}
else
{
lean_object* v___x_4525_; lean_object* v_tk_4526_; lean_object* v___y_4528_; lean_object* v___y_4529_; lean_object* v___y_4530_; lean_object* v___y_4531_; lean_object* v___y_4532_; lean_object* v___y_4533_; lean_object* v___y_4534_; lean_object* v___y_4535_; lean_object* v___y_4536_; lean_object* v___y_4537_; lean_object* v___y_4538_; lean_object* v___y_4539_; lean_object* v___y_4540_; lean_object* v___y_4541_; uint8_t v___y_4542_; lean_object* v___y_4543_; uint8_t v___y_4544_; lean_object* v___y_4545_; lean_object* v___y_4546_; lean_object* v___y_4558_; lean_object* v___y_4559_; lean_object* v___y_4560_; uint8_t v___y_4561_; lean_object* v___y_4562_; lean_object* v_t_x3f_4563_; lean_object* v___y_4564_; lean_object* v___y_4565_; lean_object* v___y_4566_; lean_object* v___y_4567_; lean_object* v___y_4568_; lean_object* v___y_4569_; lean_object* v___y_4570_; lean_object* v___x_4589_; lean_object* v_mutTk_x3f_4591_; lean_object* v___y_4592_; lean_object* v___y_4593_; lean_object* v___y_4594_; lean_object* v___y_4595_; lean_object* v___y_4596_; lean_object* v___y_4597_; lean_object* v___y_4598_; lean_object* v___x_4626_; uint8_t v___x_4627_; 
v___x_4525_ = lean_unsigned_to_nat(0u);
v_tk_4526_ = l_Lean_Syntax_getArg(v_stx_4512_, v___x_4525_);
v___x_4589_ = lean_unsigned_to_nat(1u);
v___x_4626_ = l_Lean_Syntax_getArg(v_stx_4512_, v___x_4589_);
v___x_4627_ = l_Lean_Syntax_isNone(v___x_4626_);
if (v___x_4627_ == 0)
{
uint8_t v___x_4628_; 
lean_inc(v___x_4626_);
v___x_4628_ = l_Lean_Syntax_matchesNull(v___x_4626_, v___x_4589_);
if (v___x_4628_ == 0)
{
lean_object* v___x_4629_; 
lean_dec(v___x_4626_);
lean_dec(v_tk_4526_);
lean_dec_ref(v_dec_4513_);
lean_dec(v_stx_4512_);
v___x_4629_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4629_;
}
else
{
lean_object* v_mutTk_x3f_4630_; lean_object* v___x_4631_; 
v_mutTk_x3f_4630_ = l_Lean_Syntax_getArg(v___x_4626_, v___x_4525_);
lean_dec(v___x_4626_);
v___x_4631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4631_, 0, v_mutTk_x3f_4630_);
v_mutTk_x3f_4591_ = v___x_4631_;
v___y_4592_ = v_a_4514_;
v___y_4593_ = v_a_4515_;
v___y_4594_ = v_a_4516_;
v___y_4595_ = v_a_4517_;
v___y_4596_ = v_a_4518_;
v___y_4597_ = v_a_4519_;
v___y_4598_ = v_a_4520_;
goto v___jp_4590_;
}
}
else
{
lean_object* v___x_4632_; 
lean_dec(v___x_4626_);
v___x_4632_ = lean_box(0);
v_mutTk_x3f_4591_ = v___x_4632_;
v___y_4592_ = v_a_4514_;
v___y_4593_ = v_a_4515_;
v___y_4594_ = v_a_4516_;
v___y_4595_ = v_a_4517_;
v___y_4596_ = v_a_4518_;
v___y_4597_ = v_a_4519_;
v___y_4598_ = v_a_4520_;
goto v___jp_4590_;
}
v___jp_4527_:
{
lean_object* v___x_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; lean_object* v___x_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; 
lean_inc_ref(v___y_4528_);
v___x_4547_ = l_Array_append___redArg(v___y_4528_, v___y_4546_);
lean_dec_ref(v___y_4546_);
lean_inc(v___y_4530_);
lean_inc_n(v___y_4529_, 3);
v___x_4548_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4548_, 0, v___y_4529_);
lean_ctor_set(v___x_4548_, 1, v___y_4530_);
lean_ctor_set(v___x_4548_, 2, v___x_4547_);
v___x_4549_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_4550_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4550_, 0, v___y_4529_);
lean_ctor_set(v___x_4550_, 1, v___x_4549_);
lean_inc(v___y_4534_);
v___x_4551_ = l_Lean_Syntax_node5(v___y_4529_, v___y_4534_, v___y_4537_, v___y_4532_, v___x_4548_, v___x_4550_, v___y_4531_);
lean_inc(v___y_4541_);
v___x_4552_ = l_Lean_Syntax_node1(v___y_4529_, v___y_4541_, v___x_4551_);
v___x_4553_ = lean_box(0);
v___x_4554_ = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(v___x_4554_, 0, v___x_4553_);
lean_ctor_set_uint8(v___x_4554_, sizeof(void*)*1, v___y_4544_);
lean_ctor_set_uint8(v___x_4554_, sizeof(void*)*1 + 1, v___y_4544_);
lean_ctor_set_uint8(v___x_4554_, sizeof(void*)*1 + 2, v___y_4544_);
lean_ctor_set_uint8(v___x_4554_, sizeof(void*)*1 + 3, v___y_4544_);
lean_ctor_set_uint8(v___x_4554_, sizeof(void*)*1 + 4, v___y_4544_);
v___x_4555_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4555_, 0, v___y_4538_);
lean_ctor_set_uint8(v___x_4555_, sizeof(void*)*1, v___y_4542_);
v___x_4556_ = l_Lean_Elab_Do_elabDoLetOrReassign(v___x_4554_, v___x_4555_, v___x_4552_, v_tk_4526_, v_dec_4513_, v___y_4543_, v___y_4545_, v___y_4540_, v___y_4535_, v___y_4536_, v___y_4539_, v___y_4533_);
return v___x_4556_;
}
v___jp_4557_:
{
lean_object* v_ref_4571_; lean_object* v___x_4572_; lean_object* v___x_4573_; uint8_t v___x_4574_; lean_object* v___x_4575_; lean_object* v___x_4576_; lean_object* v___x_4577_; lean_object* v___x_4578_; lean_object* v___x_4579_; lean_object* v___x_4580_; lean_object* v___x_4581_; 
v_ref_4571_ = lean_ctor_get(v___y_4569_, 2);
v___x_4572_ = lean_unsigned_to_nat(4u);
v___x_4573_ = l_Lean_Syntax_getArg(v___y_4559_, v___x_4572_);
lean_dec(v___y_4559_);
v___x_4574_ = 0;
v___x_4575_ = l_Lean_SourceInfo_fromRef(v_ref_4571_, v___x_4574_);
v___x_4576_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
v___x_4577_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8));
lean_inc(v___y_4562_);
lean_inc_n(v___x_4575_, 2);
v___x_4578_ = l_Lean_Syntax_node1(v___x_4575_, v___y_4562_, v___y_4560_);
v___x_4579_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_4580_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_4581_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4581_, 0, v___x_4575_);
lean_ctor_set(v___x_4581_, 1, v___x_4579_);
lean_ctor_set(v___x_4581_, 2, v___x_4580_);
if (lean_obj_tag(v_t_x3f_4563_) == 1)
{
lean_object* v_val_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; lean_object* v___x_4585_; lean_object* v___x_4586_; lean_object* v___x_4587_; 
v_val_4582_ = lean_ctor_get(v_t_x3f_4563_, 0);
lean_inc(v_val_4582_);
lean_dec_ref_known(v_t_x3f_4563_, 1);
v___x_4583_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
v___x_4584_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36));
lean_inc_n(v___x_4575_, 2);
v___x_4585_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4585_, 0, v___x_4575_);
lean_ctor_set(v___x_4585_, 1, v___x_4584_);
v___x_4586_ = l_Lean_Syntax_node2(v___x_4575_, v___x_4583_, v___x_4585_, v_val_4582_);
v___x_4587_ = l_Array_mkArray1___redArg(v___x_4586_);
v___y_4528_ = v___x_4580_;
v___y_4529_ = v___x_4575_;
v___y_4530_ = v___x_4579_;
v___y_4531_ = v___x_4573_;
v___y_4532_ = v___x_4581_;
v___y_4533_ = v___y_4570_;
v___y_4534_ = v___x_4577_;
v___y_4535_ = v___y_4567_;
v___y_4536_ = v___y_4568_;
v___y_4537_ = v___x_4578_;
v___y_4538_ = v___y_4558_;
v___y_4539_ = v___y_4569_;
v___y_4540_ = v___y_4566_;
v___y_4541_ = v___x_4576_;
v___y_4542_ = v___y_4561_;
v___y_4543_ = v___y_4564_;
v___y_4544_ = v___x_4574_;
v___y_4545_ = v___y_4565_;
v___y_4546_ = v___x_4587_;
goto v___jp_4527_;
}
else
{
lean_object* v___x_4588_; 
lean_dec(v_t_x3f_4563_);
v___x_4588_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__2));
v___y_4528_ = v___x_4580_;
v___y_4529_ = v___x_4575_;
v___y_4530_ = v___x_4579_;
v___y_4531_ = v___x_4573_;
v___y_4532_ = v___x_4581_;
v___y_4533_ = v___y_4570_;
v___y_4534_ = v___x_4577_;
v___y_4535_ = v___y_4567_;
v___y_4536_ = v___y_4568_;
v___y_4537_ = v___x_4578_;
v___y_4538_ = v___y_4558_;
v___y_4539_ = v___y_4569_;
v___y_4540_ = v___y_4566_;
v___y_4541_ = v___x_4576_;
v___y_4542_ = v___y_4561_;
v___y_4543_ = v___y_4564_;
v___y_4544_ = v___x_4574_;
v___y_4545_ = v___y_4565_;
v___y_4546_ = v___x_4588_;
goto v___jp_4527_;
}
}
v___jp_4590_:
{
lean_object* v___x_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; uint8_t v___x_4602_; 
v___x_4599_ = lean_unsigned_to_nat(2u);
v___x_4600_ = l_Lean_Syntax_getArg(v_stx_4512_, v___x_4599_);
lean_dec(v_stx_4512_);
v___x_4601_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__4));
lean_inc(v___x_4600_);
v___x_4602_ = l_Lean_Syntax_isOfKind(v___x_4600_, v___x_4601_);
if (v___x_4602_ == 0)
{
lean_object* v___x_4603_; 
lean_dec(v___x_4600_);
lean_dec(v_mutTk_x3f_4591_);
lean_dec(v_tk_4526_);
lean_dec_ref(v_dec_4513_);
v___x_4603_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4603_;
}
else
{
lean_object* v___x_4604_; lean_object* v___x_4605_; uint8_t v___x_4606_; 
v___x_4604_ = l_Lean_Syntax_getArg(v___x_4600_, v___x_4525_);
v___x_4605_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41));
lean_inc(v___x_4604_);
v___x_4606_ = l_Lean_Syntax_isOfKind(v___x_4604_, v___x_4605_);
if (v___x_4606_ == 0)
{
lean_object* v___x_4607_; 
lean_dec(v___x_4604_);
lean_dec(v___x_4600_);
lean_dec(v_mutTk_x3f_4591_);
lean_dec(v_tk_4526_);
lean_dec_ref(v_dec_4513_);
v___x_4607_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4607_;
}
else
{
lean_object* v___x_4608_; lean_object* v___x_4609_; uint8_t v___x_4610_; 
v___x_4608_ = l_Lean_Syntax_getArg(v___x_4604_, v___x_4525_);
lean_dec(v___x_4604_);
v___x_4609_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43));
lean_inc(v___x_4608_);
v___x_4610_ = l_Lean_Syntax_isOfKind(v___x_4608_, v___x_4609_);
if (v___x_4610_ == 0)
{
lean_object* v___x_4611_; 
lean_dec(v___x_4608_);
lean_dec(v___x_4600_);
lean_dec(v_mutTk_x3f_4591_);
lean_dec(v_tk_4526_);
lean_dec_ref(v_dec_4513_);
v___x_4611_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4611_;
}
else
{
lean_object* v___x_4612_; uint8_t v___x_4613_; 
v___x_4612_ = l_Lean_Syntax_getArg(v___x_4600_, v___x_4589_);
v___x_4613_ = l_Lean_Syntax_matchesNull(v___x_4612_, v___x_4525_);
if (v___x_4613_ == 0)
{
lean_object* v___x_4614_; 
lean_dec(v___x_4608_);
lean_dec(v___x_4600_);
lean_dec(v_mutTk_x3f_4591_);
lean_dec(v_tk_4526_);
lean_dec_ref(v_dec_4513_);
v___x_4614_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4614_;
}
else
{
lean_object* v___x_4615_; uint8_t v___x_4616_; 
v___x_4615_ = l_Lean_Syntax_getArg(v___x_4600_, v___x_4599_);
v___x_4616_ = l_Lean_Syntax_isNone(v___x_4615_);
if (v___x_4616_ == 0)
{
uint8_t v___x_4617_; 
lean_inc(v___x_4615_);
v___x_4617_ = l_Lean_Syntax_matchesNull(v___x_4615_, v___x_4589_);
if (v___x_4617_ == 0)
{
lean_object* v___x_4618_; 
lean_dec(v___x_4615_);
lean_dec(v___x_4608_);
lean_dec(v___x_4600_);
lean_dec(v_mutTk_x3f_4591_);
lean_dec(v_tk_4526_);
lean_dec_ref(v_dec_4513_);
v___x_4618_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4618_;
}
else
{
lean_object* v___x_4619_; lean_object* v___x_4620_; uint8_t v___x_4621_; 
v___x_4619_ = l_Lean_Syntax_getArg(v___x_4615_, v___x_4525_);
lean_dec(v___x_4615_);
v___x_4620_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
lean_inc(v___x_4619_);
v___x_4621_ = l_Lean_Syntax_isOfKind(v___x_4619_, v___x_4620_);
if (v___x_4621_ == 0)
{
lean_object* v___x_4622_; 
lean_dec(v___x_4619_);
lean_dec(v___x_4608_);
lean_dec(v___x_4600_);
lean_dec(v_mutTk_x3f_4591_);
lean_dec(v_tk_4526_);
lean_dec_ref(v_dec_4513_);
v___x_4622_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4622_;
}
else
{
lean_object* v_t_x3f_4623_; lean_object* v___x_4624_; 
v_t_x3f_4623_ = l_Lean_Syntax_getArg(v___x_4619_, v___x_4589_);
lean_dec(v___x_4619_);
v___x_4624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4624_, 0, v_t_x3f_4623_);
v___y_4558_ = v_mutTk_x3f_4591_;
v___y_4559_ = v___x_4600_;
v___y_4560_ = v___x_4608_;
v___y_4561_ = v___x_4613_;
v___y_4562_ = v___x_4605_;
v_t_x3f_4563_ = v___x_4624_;
v___y_4564_ = v___y_4592_;
v___y_4565_ = v___y_4593_;
v___y_4566_ = v___y_4594_;
v___y_4567_ = v___y_4595_;
v___y_4568_ = v___y_4596_;
v___y_4569_ = v___y_4597_;
v___y_4570_ = v___y_4598_;
goto v___jp_4557_;
}
}
}
else
{
lean_object* v___x_4625_; 
lean_dec(v___x_4615_);
v___x_4625_ = lean_box(0);
v___y_4558_ = v_mutTk_x3f_4591_;
v___y_4559_ = v___x_4600_;
v___y_4560_ = v___x_4608_;
v___y_4561_ = v___x_4613_;
v___y_4562_ = v___x_4605_;
v_t_x3f_4563_ = v___x_4625_;
v___y_4564_ = v___y_4592_;
v___y_4565_ = v___y_4593_;
v___y_4566_ = v___y_4594_;
v___y_4567_ = v___y_4595_;
v___y_4568_ = v___y_4596_;
v___y_4569_ = v___y_4597_;
v___y_4570_ = v___y_4598_;
goto v___jp_4557_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoErased___boxed(lean_object* v_stx_4633_, lean_object* v_dec_4634_, lean_object* v_a_4635_, lean_object* v_a_4636_, lean_object* v_a_4637_, lean_object* v_a_4638_, lean_object* v_a_4639_, lean_object* v_a_4640_, lean_object* v_a_4641_, lean_object* v_a_4642_){
_start:
{
lean_object* v_res_4643_; 
v_res_4643_ = l_Lean_Elab_Do_elabDoErased(v_stx_4633_, v_dec_4634_, v_a_4635_, v_a_4636_, v_a_4637_, v_a_4638_, v_a_4639_, v_a_4640_, v_a_4641_);
lean_dec(v_a_4641_);
lean_dec_ref(v_a_4640_);
lean_dec(v_a_4639_);
lean_dec_ref(v_a_4638_);
lean_dec(v_a_4637_);
lean_dec_ref(v_a_4636_);
lean_dec_ref(v_a_4635_);
return v_res_4643_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1(){
_start:
{
lean_object* v___x_4651_; lean_object* v___x_4652_; lean_object* v___x_4653_; lean_object* v___x_4654_; lean_object* v___x_4655_; 
v___x_4651_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_4652_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__1));
v___x_4653_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1));
v___x_4654_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoErased___boxed), 10, 0);
v___x_4655_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4651_, v___x_4652_, v___x_4653_, v___x_4654_);
return v___x_4655_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___boxed(lean_object* v_a_4656_){
_start:
{
lean_object* v_res_4657_; 
v_res_4657_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1();
return v_res_4657_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoErasedArrow___lam__0(lean_object* v_____do__lift_4658_, lean_object* v___y_4659_, lean_object* v___y_4660_){
_start:
{
uint8_t v___x_4661_; lean_object* v___x_4662_; lean_object* v___x_4663_; 
v___x_4661_ = 0;
v___x_4662_ = l_Lean_SourceInfo_fromRef(v_____do__lift_4658_, v___x_4661_);
v___x_4663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4663_, 0, v___x_4662_);
lean_ctor_set(v___x_4663_, 1, v___y_4660_);
return v___x_4663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoErasedArrow___lam__0___boxed(lean_object* v_____do__lift_4664_, lean_object* v___y_4665_, lean_object* v___y_4666_){
_start:
{
lean_object* v_res_4667_; 
v_res_4667_ = l_Lean_Elab_Do_expandDoErasedArrow___lam__0(v_____do__lift_4664_, v___y_4665_, v___y_4666_);
lean_dec_ref(v___y_4665_);
lean_dec(v_____do__lift_4664_);
return v_res_4667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoErasedArrow(lean_object* v_stx_4711_, lean_object* v_a_4712_, lean_object* v_a_4713_){
_start:
{
lean_object* v___y_4715_; lean_object* v___y_4716_; lean_object* v___y_4717_; lean_object* v___y_4718_; lean_object* v___y_4719_; uint8_t v___y_4720_; lean_object* v___y_4721_; lean_object* v___y_4722_; lean_object* v___y_4723_; lean_object* v___y_4724_; lean_object* v___y_4725_; lean_object* v___y_4726_; lean_object* v___x_4753_; uint8_t v___x_4754_; 
v___x_4753_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__8));
lean_inc(v_stx_4711_);
v___x_4754_ = l_Lean_Syntax_isOfKind(v_stx_4711_, v___x_4753_);
if (v___x_4754_ == 0)
{
lean_object* v___x_4755_; 
lean_dec(v_stx_4711_);
v___x_4755_ = l_Lean_Macro_throwUnsupported___redArg(v_a_4713_);
return v___x_4755_;
}
else
{
lean_object* v___x_4756_; lean_object* v_tk_4757_; lean_object* v___y_4759_; lean_object* v___y_4760_; lean_object* v___y_4761_; lean_object* v___y_4762_; uint8_t v___y_4763_; lean_object* v___y_4764_; lean_object* v___y_4765_; lean_object* v___y_4766_; lean_object* v___y_4767_; lean_object* v___y_4768_; lean_object* v___y_4769_; lean_object* v___y_4770_; uint8_t v___y_4771_; lean_object* v___y_4772_; lean_object* v___y_4773_; lean_object* v___y_4774_; lean_object* v___y_4775_; lean_object* v___y_4776_; lean_object* v___y_4803_; uint8_t v___y_4804_; lean_object* v___y_4805_; lean_object* v___y_4806_; lean_object* v___y_4807_; lean_object* v_t_x3f_4808_; lean_object* v___y_4809_; lean_object* v___y_4810_; lean_object* v___x_4844_; lean_object* v_mutTk_x3f_4846_; lean_object* v___y_4847_; lean_object* v___y_4848_; lean_object* v___x_4869_; uint8_t v___x_4870_; 
v___x_4756_ = lean_unsigned_to_nat(0u);
v_tk_4757_ = l_Lean_Syntax_getArg(v_stx_4711_, v___x_4756_);
v___x_4844_ = lean_unsigned_to_nat(1u);
v___x_4869_ = l_Lean_Syntax_getArg(v_stx_4711_, v___x_4844_);
v___x_4870_ = l_Lean_Syntax_isNone(v___x_4869_);
if (v___x_4870_ == 0)
{
uint8_t v___x_4871_; 
lean_inc(v___x_4869_);
v___x_4871_ = l_Lean_Syntax_matchesNull(v___x_4869_, v___x_4844_);
if (v___x_4871_ == 0)
{
lean_object* v___x_4872_; 
lean_dec(v___x_4869_);
lean_dec(v_tk_4757_);
lean_dec(v_stx_4711_);
v___x_4872_ = l_Lean_Macro_throwUnsupported___redArg(v_a_4713_);
return v___x_4872_;
}
else
{
lean_object* v_mutTk_x3f_4873_; lean_object* v___x_4874_; 
v_mutTk_x3f_4873_ = l_Lean_Syntax_getArg(v___x_4869_, v___x_4756_);
lean_dec(v___x_4869_);
v___x_4874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4874_, 0, v_mutTk_x3f_4873_);
v_mutTk_x3f_4846_ = v___x_4874_;
v___y_4847_ = v_a_4712_;
v___y_4848_ = v_a_4713_;
goto v___jp_4845_;
}
}
else
{
lean_object* v___x_4875_; 
lean_dec(v___x_4869_);
v___x_4875_ = lean_box(0);
v_mutTk_x3f_4846_ = v___x_4875_;
v___y_4847_ = v_a_4712_;
v___y_4848_ = v_a_4713_;
goto v___jp_4845_;
}
v___jp_4758_:
{
lean_object* v___x_4777_; lean_object* v___x_4778_; lean_object* v___x_4779_; lean_object* v_a_4780_; lean_object* v_a_4781_; lean_object* v___x_4783_; uint8_t v_isShared_4784_; uint8_t v_isSharedCheck_4801_; 
lean_inc_ref(v___y_4764_);
v___x_4777_ = l_Array_append___redArg(v___y_4764_, v___y_4776_);
lean_dec_ref(v___y_4776_);
lean_inc(v___y_4769_);
lean_inc(v___y_4768_);
v___x_4778_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4778_, 0, v___y_4768_);
lean_ctor_set(v___x_4778_, 1, v___y_4769_);
lean_ctor_set(v___x_4778_, 2, v___x_4777_);
v___x_4779_ = l_Lean_Elab_Do_expandDoErasedArrow___lam__0(v___y_4774_, v___y_4773_, v___y_4760_);
v_a_4780_ = lean_ctor_get(v___x_4779_, 0);
v_a_4781_ = lean_ctor_get(v___x_4779_, 1);
v_isSharedCheck_4801_ = !lean_is_exclusive(v___x_4779_);
if (v_isSharedCheck_4801_ == 0)
{
v___x_4783_ = v___x_4779_;
v_isShared_4784_ = v_isSharedCheck_4801_;
goto v_resetjp_4782_;
}
else
{
lean_inc(v_a_4781_);
lean_inc(v_a_4780_);
lean_dec(v___x_4779_);
v___x_4783_ = lean_box(0);
v_isShared_4784_ = v_isSharedCheck_4801_;
goto v_resetjp_4782_;
}
v_resetjp_4782_:
{
lean_object* v___x_4785_; lean_object* v___x_4787_; 
v___x_4785_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__9));
lean_inc(v___y_4768_);
if (v_isShared_4784_ == 0)
{
lean_ctor_set_tag(v___x_4783_, 2);
lean_ctor_set(v___x_4783_, 1, v___x_4785_);
lean_ctor_set(v___x_4783_, 0, v___y_4768_);
v___x_4787_ = v___x_4783_;
goto v_reusejp_4786_;
}
else
{
lean_object* v_reuseFailAlloc_4800_; 
v_reuseFailAlloc_4800_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4800_, 0, v___y_4768_);
lean_ctor_set(v_reuseFailAlloc_4800_, 1, v___x_4785_);
v___x_4787_ = v_reuseFailAlloc_4800_;
goto v_reusejp_4786_;
}
v_reusejp_4786_:
{
lean_object* v___x_4788_; lean_object* v___x_4789_; lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; 
lean_inc(v___y_4765_);
lean_inc(v___y_4770_);
lean_inc(v___y_4768_);
v___x_4788_ = l_Lean_Syntax_node4(v___y_4768_, v___y_4770_, v___y_4765_, v___x_4778_, v___x_4787_, v___y_4762_);
lean_inc(v___y_4772_);
v___x_4789_ = l_Lean_Syntax_node4(v___y_4768_, v___y_4772_, v___y_4759_, v___y_4766_, v___y_4775_, v___x_4788_);
v___x_4790_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__1));
v___x_4791_ = l_Lean_SourceInfo_fromRef(v_tk_4757_, v___y_4763_);
lean_dec(v_tk_4757_);
v___x_4792_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__10));
v___x_4793_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4793_, 0, v___x_4791_);
lean_ctor_set(v___x_4793_, 1, v___x_4792_);
if (lean_obj_tag(v___y_4761_) == 1)
{
lean_object* v_val_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; 
v_val_4794_ = lean_ctor_get(v___y_4761_, 0);
lean_inc(v_val_4794_);
lean_dec_ref_known(v___y_4761_, 1);
v___x_4795_ = l_Lean_SourceInfo_fromRef(v_val_4794_, v___y_4763_);
lean_dec(v_val_4794_);
v___x_4796_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__11));
v___x_4797_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4797_, 0, v___x_4795_);
lean_ctor_set(v___x_4797_, 1, v___x_4796_);
v___x_4798_ = l_Array_mkArray1___redArg(v___x_4797_);
v___y_4715_ = v_a_4780_;
v___y_4716_ = v___x_4793_;
v___y_4717_ = v___y_4765_;
v___y_4718_ = v___y_4764_;
v___y_4719_ = v___x_4789_;
v___y_4720_ = v___y_4771_;
v___y_4721_ = v___y_4767_;
v___y_4722_ = v_a_4781_;
v___y_4723_ = v___y_4774_;
v___y_4724_ = v___x_4790_;
v___y_4725_ = v___y_4769_;
v___y_4726_ = v___x_4798_;
goto v___jp_4714_;
}
else
{
lean_object* v___x_4799_; 
lean_dec(v___y_4761_);
v___x_4799_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__2));
v___y_4715_ = v_a_4780_;
v___y_4716_ = v___x_4793_;
v___y_4717_ = v___y_4765_;
v___y_4718_ = v___y_4764_;
v___y_4719_ = v___x_4789_;
v___y_4720_ = v___y_4771_;
v___y_4721_ = v___y_4767_;
v___y_4722_ = v_a_4781_;
v___y_4723_ = v___y_4774_;
v___y_4724_ = v___x_4790_;
v___y_4725_ = v___y_4769_;
v___y_4726_ = v___x_4799_;
goto v___jp_4714_;
}
}
}
}
v___jp_4802_:
{
lean_object* v_quotContext_4811_; lean_object* v_currMacroScope_4812_; lean_object* v_ref_4813_; lean_object* v___x_4814_; lean_object* v_a_4815_; lean_object* v_a_4816_; lean_object* v___x_4818_; uint8_t v_isShared_4819_; uint8_t v_isSharedCheck_4843_; 
v_quotContext_4811_ = lean_ctor_get(v___y_4809_, 1);
v_currMacroScope_4812_ = lean_ctor_get(v___y_4809_, 2);
v_ref_4813_ = lean_ctor_get(v___y_4809_, 5);
v___x_4814_ = l_Lean_Elab_Do_expandDoErasedArrow___lam__0(v_ref_4813_, v___y_4809_, v___y_4810_);
v_a_4815_ = lean_ctor_get(v___x_4814_, 0);
v_a_4816_ = lean_ctor_get(v___x_4814_, 1);
v_isSharedCheck_4843_ = !lean_is_exclusive(v___x_4814_);
if (v_isSharedCheck_4843_ == 0)
{
v___x_4818_ = v___x_4814_;
v_isShared_4819_ = v_isSharedCheck_4843_;
goto v_resetjp_4817_;
}
else
{
lean_inc(v_a_4816_);
lean_inc(v_a_4815_);
lean_dec(v___x_4814_);
v___x_4818_ = lean_box(0);
v_isShared_4819_ = v_isSharedCheck_4843_;
goto v_resetjp_4817_;
}
v_resetjp_4817_:
{
lean_object* v___x_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; lean_object* v___x_4823_; uint8_t v___x_4824_; lean_object* v___x_4825_; lean_object* v___x_4826_; lean_object* v___x_4827_; lean_object* v___x_4829_; 
v___x_4820_ = lean_unsigned_to_nat(3u);
v___x_4821_ = l_Lean_Syntax_getArg(v___y_4805_, v___x_4820_);
lean_dec(v___y_4805_);
v___x_4822_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__13));
lean_inc(v_currMacroScope_4812_);
lean_inc(v_quotContext_4811_);
v___x_4823_ = l_Lean_addMacroScope(v_quotContext_4811_, v___x_4822_, v_currMacroScope_4812_);
v___x_4824_ = 0;
v___x_4825_ = l_Lean_mkIdentFrom(v___y_4806_, v___x_4823_, v___x_4824_);
v___x_4826_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__15));
v___x_4827_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
lean_inc(v_a_4815_);
if (v_isShared_4819_ == 0)
{
lean_ctor_set_tag(v___x_4818_, 2);
lean_ctor_set(v___x_4818_, 1, v___x_4827_);
v___x_4829_ = v___x_4818_;
goto v_reusejp_4828_;
}
else
{
lean_object* v_reuseFailAlloc_4842_; 
v_reuseFailAlloc_4842_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4842_, 0, v_a_4815_);
lean_ctor_set(v_reuseFailAlloc_4842_, 1, v___x_4827_);
v___x_4829_ = v_reuseFailAlloc_4842_;
goto v_reusejp_4828_;
}
v_reusejp_4828_:
{
lean_object* v___x_4830_; lean_object* v___x_4831_; lean_object* v___x_4832_; lean_object* v___x_4833_; lean_object* v___x_4834_; 
v___x_4830_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_4831_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
lean_inc_n(v_a_4815_, 2);
v___x_4832_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4832_, 0, v_a_4815_);
lean_ctor_set(v___x_4832_, 1, v___x_4830_);
lean_ctor_set(v___x_4832_, 2, v___x_4831_);
v___x_4833_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__3));
lean_inc_ref(v___x_4832_);
v___x_4834_ = l_Lean_Syntax_node1(v_a_4815_, v___x_4833_, v___x_4832_);
if (lean_obj_tag(v_t_x3f_4808_) == 1)
{
lean_object* v_val_4835_; lean_object* v___x_4836_; lean_object* v___x_4837_; lean_object* v___x_4838_; lean_object* v___x_4839_; lean_object* v___x_4840_; 
v_val_4835_ = lean_ctor_get(v_t_x3f_4808_, 0);
lean_inc(v_val_4835_);
lean_dec_ref_known(v_t_x3f_4808_, 1);
v___x_4836_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
v___x_4837_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36));
lean_inc_n(v_a_4815_, 2);
v___x_4838_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4838_, 0, v_a_4815_);
lean_ctor_set(v___x_4838_, 1, v___x_4837_);
v___x_4839_ = l_Lean_Syntax_node2(v_a_4815_, v___x_4836_, v___x_4838_, v_val_4835_);
v___x_4840_ = l_Array_mkArray1___redArg(v___x_4839_);
v___y_4759_ = v___x_4829_;
v___y_4760_ = v_a_4816_;
v___y_4761_ = v___y_4803_;
v___y_4762_ = v___x_4821_;
v___y_4763_ = v___y_4804_;
v___y_4764_ = v___x_4831_;
v___y_4765_ = v___x_4825_;
v___y_4766_ = v___x_4832_;
v___y_4767_ = v___y_4806_;
v___y_4768_ = v_a_4815_;
v___y_4769_ = v___x_4830_;
v___y_4770_ = v___y_4807_;
v___y_4771_ = v___x_4824_;
v___y_4772_ = v___x_4826_;
v___y_4773_ = v___y_4809_;
v___y_4774_ = v_ref_4813_;
v___y_4775_ = v___x_4834_;
v___y_4776_ = v___x_4840_;
goto v___jp_4758_;
}
else
{
lean_object* v___x_4841_; 
lean_dec(v_t_x3f_4808_);
v___x_4841_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__2));
v___y_4759_ = v___x_4829_;
v___y_4760_ = v_a_4816_;
v___y_4761_ = v___y_4803_;
v___y_4762_ = v___x_4821_;
v___y_4763_ = v___y_4804_;
v___y_4764_ = v___x_4831_;
v___y_4765_ = v___x_4825_;
v___y_4766_ = v___x_4832_;
v___y_4767_ = v___y_4806_;
v___y_4768_ = v_a_4815_;
v___y_4769_ = v___x_4830_;
v___y_4770_ = v___y_4807_;
v___y_4771_ = v___x_4824_;
v___y_4772_ = v___x_4826_;
v___y_4773_ = v___y_4809_;
v___y_4774_ = v_ref_4813_;
v___y_4775_ = v___x_4834_;
v___y_4776_ = v___x_4841_;
goto v___jp_4758_;
}
}
}
}
v___jp_4845_:
{
lean_object* v___x_4849_; lean_object* v___x_4850_; lean_object* v___x_4851_; uint8_t v___x_4852_; 
v___x_4849_ = lean_unsigned_to_nat(2u);
v___x_4850_ = l_Lean_Syntax_getArg(v_stx_4711_, v___x_4849_);
lean_dec(v_stx_4711_);
v___x_4851_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__17));
lean_inc(v___x_4850_);
v___x_4852_ = l_Lean_Syntax_isOfKind(v___x_4850_, v___x_4851_);
if (v___x_4852_ == 0)
{
lean_object* v___x_4853_; 
lean_dec(v___x_4850_);
lean_dec(v_mutTk_x3f_4846_);
lean_dec(v_tk_4757_);
v___x_4853_ = l_Lean_Macro_throwUnsupported___redArg(v___y_4848_);
return v___x_4853_;
}
else
{
lean_object* v___x_4854_; lean_object* v___x_4855_; uint8_t v___x_4856_; 
v___x_4854_ = l_Lean_Syntax_getArg(v___x_4850_, v___x_4756_);
v___x_4855_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43));
lean_inc(v___x_4854_);
v___x_4856_ = l_Lean_Syntax_isOfKind(v___x_4854_, v___x_4855_);
if (v___x_4856_ == 0)
{
lean_object* v___x_4857_; 
lean_dec(v___x_4854_);
lean_dec(v___x_4850_);
lean_dec(v_mutTk_x3f_4846_);
lean_dec(v_tk_4757_);
v___x_4857_ = l_Lean_Macro_throwUnsupported___redArg(v___y_4848_);
return v___x_4857_;
}
else
{
lean_object* v___x_4858_; uint8_t v___x_4859_; 
v___x_4858_ = l_Lean_Syntax_getArg(v___x_4850_, v___x_4844_);
v___x_4859_ = l_Lean_Syntax_isNone(v___x_4858_);
if (v___x_4859_ == 0)
{
uint8_t v___x_4860_; 
lean_inc(v___x_4858_);
v___x_4860_ = l_Lean_Syntax_matchesNull(v___x_4858_, v___x_4844_);
if (v___x_4860_ == 0)
{
lean_object* v___x_4861_; 
lean_dec(v___x_4858_);
lean_dec(v___x_4854_);
lean_dec(v___x_4850_);
lean_dec(v_mutTk_x3f_4846_);
lean_dec(v_tk_4757_);
v___x_4861_ = l_Lean_Macro_throwUnsupported___redArg(v___y_4848_);
return v___x_4861_;
}
else
{
lean_object* v___x_4862_; lean_object* v___x_4863_; uint8_t v___x_4864_; 
v___x_4862_ = l_Lean_Syntax_getArg(v___x_4858_, v___x_4756_);
lean_dec(v___x_4858_);
v___x_4863_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
lean_inc(v___x_4862_);
v___x_4864_ = l_Lean_Syntax_isOfKind(v___x_4862_, v___x_4863_);
if (v___x_4864_ == 0)
{
lean_object* v___x_4865_; 
lean_dec(v___x_4862_);
lean_dec(v___x_4854_);
lean_dec(v___x_4850_);
lean_dec(v_mutTk_x3f_4846_);
lean_dec(v_tk_4757_);
v___x_4865_ = l_Lean_Macro_throwUnsupported___redArg(v___y_4848_);
return v___x_4865_;
}
else
{
lean_object* v_t_x3f_4866_; lean_object* v___x_4867_; 
v_t_x3f_4866_ = l_Lean_Syntax_getArg(v___x_4862_, v___x_4844_);
lean_dec(v___x_4862_);
v___x_4867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4867_, 0, v_t_x3f_4866_);
v___y_4803_ = v_mutTk_x3f_4846_;
v___y_4804_ = v___x_4856_;
v___y_4805_ = v___x_4850_;
v___y_4806_ = v___x_4854_;
v___y_4807_ = v___x_4851_;
v_t_x3f_4808_ = v___x_4867_;
v___y_4809_ = v___y_4847_;
v___y_4810_ = v___y_4848_;
goto v___jp_4802_;
}
}
}
else
{
lean_object* v___x_4868_; 
lean_dec(v___x_4858_);
v___x_4868_ = lean_box(0);
v___y_4803_ = v_mutTk_x3f_4846_;
v___y_4804_ = v___x_4856_;
v___y_4805_ = v___x_4850_;
v___y_4806_ = v___x_4854_;
v___y_4807_ = v___x_4851_;
v_t_x3f_4808_ = v___x_4868_;
v___y_4809_ = v___y_4847_;
v___y_4810_ = v___y_4848_;
goto v___jp_4802_;
}
}
}
}
}
v___jp_4714_:
{
lean_object* v___x_4727_; lean_object* v___x_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; lean_object* v___x_4732_; lean_object* v___x_4733_; lean_object* v___x_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; lean_object* v___x_4743_; lean_object* v___x_4744_; lean_object* v___x_4745_; lean_object* v___x_4746_; lean_object* v___x_4747_; lean_object* v___x_4748_; lean_object* v___x_4749_; lean_object* v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; 
lean_inc_ref_n(v___y_4718_, 3);
v___x_4727_ = l_Array_append___redArg(v___y_4718_, v___y_4726_);
lean_dec_ref(v___y_4726_);
lean_inc_n(v___y_4725_, 5);
lean_inc_n(v___y_4715_, 5);
v___x_4728_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4728_, 0, v___y_4715_);
lean_ctor_set(v___x_4728_, 1, v___y_4725_);
lean_ctor_set(v___x_4728_, 2, v___x_4727_);
v___x_4729_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__4));
v___x_4730_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41));
v___x_4731_ = l_Lean_Syntax_node1(v___y_4715_, v___x_4730_, v___y_4721_);
v___x_4732_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4732_, 0, v___y_4715_);
lean_ctor_set(v___x_4732_, 1, v___y_4725_);
lean_ctor_set(v___x_4732_, 2, v___y_4718_);
v___x_4733_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_4734_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4734_, 0, v___y_4715_);
lean_ctor_set(v___x_4734_, 1, v___x_4733_);
lean_inc_ref(v___x_4732_);
v___x_4735_ = l_Lean_Syntax_node5(v___y_4715_, v___x_4729_, v___x_4731_, v___x_4732_, v___x_4732_, v___x_4734_, v___y_4717_);
lean_inc(v___y_4724_);
v___x_4736_ = l_Lean_Syntax_node3(v___y_4715_, v___y_4724_, v___y_4716_, v___x_4728_, v___x_4735_);
v___x_4737_ = l_Lean_SourceInfo_fromRef(v___y_4723_, v___y_4720_);
v___x_4738_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__1));
v___x_4739_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__2));
lean_inc_n(v___x_4737_, 8);
v___x_4740_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4740_, 0, v___x_4737_);
lean_ctor_set(v___x_4740_, 1, v___x_4739_);
v___x_4741_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__4));
v___x_4742_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__6));
v___x_4743_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7));
v___x_4744_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4744_, 0, v___x_4737_);
lean_ctor_set(v___x_4744_, 1, v___x_4743_);
v___x_4745_ = l_Lean_Syntax_node1(v___x_4737_, v___y_4725_, v___x_4744_);
v___x_4746_ = l_Lean_Syntax_node2(v___x_4737_, v___x_4742_, v___y_4719_, v___x_4745_);
v___x_4747_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4747_, 0, v___x_4737_);
lean_ctor_set(v___x_4747_, 1, v___y_4725_);
lean_ctor_set(v___x_4747_, 2, v___y_4718_);
v___x_4748_ = l_Lean_Syntax_node2(v___x_4737_, v___x_4742_, v___x_4736_, v___x_4747_);
v___x_4749_ = l_Lean_Syntax_node2(v___x_4737_, v___y_4725_, v___x_4746_, v___x_4748_);
v___x_4750_ = l_Lean_Syntax_node1(v___x_4737_, v___x_4741_, v___x_4749_);
v___x_4751_ = l_Lean_Syntax_node2(v___x_4737_, v___x_4738_, v___x_4740_, v___x_4750_);
v___x_4752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4752_, 0, v___x_4751_);
lean_ctor_set(v___x_4752_, 1, v___y_4722_);
return v___x_4752_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoErasedArrow___boxed(lean_object* v_stx_4876_, lean_object* v_a_4877_, lean_object* v_a_4878_){
_start:
{
lean_object* v_res_4879_; 
v_res_4879_ = l_Lean_Elab_Do_expandDoErasedArrow(v_stx_4876_, v_a_4877_, v_a_4878_);
lean_dec_ref(v_a_4877_);
return v_res_4879_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1(){
_start:
{
lean_object* v___x_4887_; lean_object* v___x_4888_; lean_object* v___x_4889_; lean_object* v___x_4890_; lean_object* v___x_4891_; 
v___x_4887_ = l_Lean_Elab_macroAttribute;
v___x_4888_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__8));
v___x_4889_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1));
v___x_4890_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_expandDoErasedArrow___boxed), 3, 0);
v___x_4891_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4887_, v___x_4888_, v___x_4889_, v___x_4890_);
return v___x_4891_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___boxed(lean_object* v_a_4892_){
_start:
{
lean_object* v_res_4893_; 
v_res_4893_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1();
return v_res_4893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoHave(lean_object* v_stx_4900_, lean_object* v_dec_4901_, lean_object* v_a_4902_, lean_object* v_a_4903_, lean_object* v_a_4904_, lean_object* v_a_4905_, lean_object* v_a_4906_, lean_object* v_a_4907_, lean_object* v_a_4908_){
_start:
{
lean_object* v___x_4910_; uint8_t v___x_4911_; 
v___x_4910_ = ((lean_object*)(l_Lean_Elab_Do_elabDoHave___closed__1));
lean_inc(v_stx_4900_);
v___x_4911_ = l_Lean_Syntax_isOfKind(v_stx_4900_, v___x_4910_);
if (v___x_4911_ == 0)
{
lean_object* v___x_4912_; 
lean_dec_ref(v_dec_4901_);
lean_dec(v_stx_4900_);
v___x_4912_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4912_;
}
else
{
lean_object* v___x_4913_; lean_object* v___x_4914_; lean_object* v___x_4915_; uint8_t v___x_4916_; 
v___x_4913_ = lean_unsigned_to_nat(1u);
v___x_4914_ = l_Lean_Syntax_getArg(v_stx_4900_, v___x_4913_);
v___x_4915_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__3));
lean_inc(v___x_4914_);
v___x_4916_ = l_Lean_Syntax_isOfKind(v___x_4914_, v___x_4915_);
if (v___x_4916_ == 0)
{
lean_object* v___x_4917_; 
lean_dec(v___x_4914_);
lean_dec_ref(v_dec_4901_);
lean_dec(v_stx_4900_);
v___x_4917_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4917_;
}
else
{
lean_object* v___x_4918_; lean_object* v_decl_4919_; lean_object* v___x_4920_; uint8_t v___x_4921_; 
v___x_4918_ = lean_unsigned_to_nat(2u);
v_decl_4919_ = l_Lean_Syntax_getArg(v_stx_4900_, v___x_4918_);
v___x_4920_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
lean_inc(v_decl_4919_);
v___x_4921_ = l_Lean_Syntax_isOfKind(v_decl_4919_, v___x_4920_);
if (v___x_4921_ == 0)
{
lean_object* v___x_4922_; 
lean_dec(v_decl_4919_);
lean_dec(v___x_4914_);
lean_dec_ref(v_dec_4901_);
lean_dec(v_stx_4900_);
v___x_4922_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4922_;
}
else
{
lean_object* v___x_4923_; lean_object* v_tk_4924_; uint8_t v___x_4925_; lean_object* v___x_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; 
v___x_4923_ = lean_unsigned_to_nat(0u);
v_tk_4924_ = l_Lean_Syntax_getArg(v_stx_4900_, v___x_4923_);
lean_dec(v_stx_4900_);
v___x_4925_ = 0;
v___x_4926_ = lean_box(0);
v___x_4927_ = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(v___x_4927_, 0, v___x_4926_);
lean_ctor_set_uint8(v___x_4927_, sizeof(void*)*1, v___x_4921_);
lean_ctor_set_uint8(v___x_4927_, sizeof(void*)*1 + 1, v___x_4925_);
lean_ctor_set_uint8(v___x_4927_, sizeof(void*)*1 + 2, v___x_4925_);
lean_ctor_set_uint8(v___x_4927_, sizeof(void*)*1 + 3, v___x_4925_);
lean_ctor_set_uint8(v___x_4927_, sizeof(void*)*1 + 4, v___x_4925_);
v___x_4928_ = l_Lean_Elab_Term_mkLetConfig(v___x_4914_, v___x_4927_, v_a_4903_, v_a_4904_, v_a_4905_, v_a_4906_, v_a_4907_, v_a_4908_);
if (lean_obj_tag(v___x_4928_) == 0)
{
lean_object* v_a_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; 
v_a_4929_ = lean_ctor_get(v___x_4928_, 0);
lean_inc(v_a_4929_);
lean_dec_ref_known(v___x_4928_, 1);
v___x_4930_ = lean_box(1);
v___x_4931_ = l_Lean_Elab_Do_elabDoLetOrReassign(v_a_4929_, v___x_4930_, v_decl_4919_, v_tk_4924_, v_dec_4901_, v_a_4902_, v_a_4903_, v_a_4904_, v_a_4905_, v_a_4906_, v_a_4907_, v_a_4908_);
return v___x_4931_;
}
else
{
lean_object* v_a_4932_; lean_object* v___x_4934_; uint8_t v_isShared_4935_; uint8_t v_isSharedCheck_4939_; 
lean_dec(v_tk_4924_);
lean_dec(v_decl_4919_);
lean_dec_ref(v_dec_4901_);
v_a_4932_ = lean_ctor_get(v___x_4928_, 0);
v_isSharedCheck_4939_ = !lean_is_exclusive(v___x_4928_);
if (v_isSharedCheck_4939_ == 0)
{
v___x_4934_ = v___x_4928_;
v_isShared_4935_ = v_isSharedCheck_4939_;
goto v_resetjp_4933_;
}
else
{
lean_inc(v_a_4932_);
lean_dec(v___x_4928_);
v___x_4934_ = lean_box(0);
v_isShared_4935_ = v_isSharedCheck_4939_;
goto v_resetjp_4933_;
}
v_resetjp_4933_:
{
lean_object* v___x_4937_; 
if (v_isShared_4935_ == 0)
{
v___x_4937_ = v___x_4934_;
goto v_reusejp_4936_;
}
else
{
lean_object* v_reuseFailAlloc_4938_; 
v_reuseFailAlloc_4938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4938_, 0, v_a_4932_);
v___x_4937_ = v_reuseFailAlloc_4938_;
goto v_reusejp_4936_;
}
v_reusejp_4936_:
{
return v___x_4937_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoHave___boxed(lean_object* v_stx_4940_, lean_object* v_dec_4941_, lean_object* v_a_4942_, lean_object* v_a_4943_, lean_object* v_a_4944_, lean_object* v_a_4945_, lean_object* v_a_4946_, lean_object* v_a_4947_, lean_object* v_a_4948_, lean_object* v_a_4949_){
_start:
{
lean_object* v_res_4950_; 
v_res_4950_ = l_Lean_Elab_Do_elabDoHave(v_stx_4940_, v_dec_4941_, v_a_4942_, v_a_4943_, v_a_4944_, v_a_4945_, v_a_4946_, v_a_4947_, v_a_4948_);
lean_dec(v_a_4948_);
lean_dec_ref(v_a_4947_);
lean_dec(v_a_4946_);
lean_dec_ref(v_a_4945_);
lean_dec(v_a_4944_);
lean_dec_ref(v_a_4943_);
lean_dec_ref(v_a_4942_);
return v_res_4950_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1(){
_start:
{
lean_object* v___x_4958_; lean_object* v___x_4959_; lean_object* v___x_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; 
v___x_4958_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_4959_ = ((lean_object*)(l_Lean_Elab_Do_elabDoHave___closed__1));
v___x_4960_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1));
v___x_4961_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoHave___boxed), 10, 0);
v___x_4962_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4958_, v___x_4959_, v___x_4960_, v___x_4961_);
return v___x_4962_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___boxed(lean_object* v_a_4963_){
_start:
{
lean_object* v_res_4964_; 
v_res_4964_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1();
return v_res_4964_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec___lam__0(lean_object* v___x_4967_, lean_object* v___x_4968_, lean_object* v___x_4969_, lean_object* v___x_4970_, lean_object* v_decls_4971_, lean_object* v_a_4972_, uint8_t v___x_4973_, lean_object* v_body_4974_, lean_object* v___y_4975_, lean_object* v___y_4976_, lean_object* v___y_4977_, lean_object* v___y_4978_, lean_object* v___y_4979_, lean_object* v___y_4980_, lean_object* v___y_4981_){
_start:
{
lean_object* v_ref_4983_; uint8_t v___x_4984_; lean_object* v___x_4985_; lean_object* v___x_4986_; lean_object* v___x_4987_; lean_object* v___x_4988_; lean_object* v___x_4989_; lean_object* v___x_4990_; lean_object* v___x_4991_; lean_object* v___x_4992_; lean_object* v___x_4993_; lean_object* v___x_4994_; lean_object* v___x_4995_; lean_object* v___x_4996_; lean_object* v___x_4997_; 
v_ref_4983_ = lean_ctor_get(v___y_4980_, 2);
v___x_4984_ = 0;
v___x_4985_ = l_Lean_SourceInfo_fromRef(v_ref_4983_, v___x_4984_);
v___x_4986_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__0));
v___x_4987_ = l_Lean_Name_mkStr4(v___x_4967_, v___x_4968_, v___x_4969_, v___x_4986_);
v___x_4988_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
lean_inc_n(v___x_4985_, 4);
v___x_4989_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4989_, 0, v___x_4985_);
lean_ctor_set(v___x_4989_, 1, v___x_4988_);
v___x_4990_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__1));
v___x_4991_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4991_, 0, v___x_4985_);
lean_ctor_set(v___x_4991_, 1, v___x_4990_);
v___x_4992_ = l_Lean_Syntax_node2(v___x_4985_, v___x_4970_, v___x_4989_, v___x_4991_);
v___x_4993_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7));
v___x_4994_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4994_, 0, v___x_4985_);
lean_ctor_set(v___x_4994_, 1, v___x_4993_);
v___x_4995_ = l_Lean_Syntax_node4(v___x_4985_, v___x_4987_, v___x_4992_, v_decls_4971_, v___x_4994_, v_body_4974_);
v___x_4996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4996_, 0, v_a_4972_);
v___x_4997_ = l_Lean_Elab_Term_elabTerm(v___x_4995_, v___x_4996_, v___x_4973_, v___x_4973_, v___y_4976_, v___y_4977_, v___y_4978_, v___y_4979_, v___y_4980_, v___y_4981_);
return v___x_4997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec___lam__0___boxed(lean_object* v___x_4998_, lean_object* v___x_4999_, lean_object* v___x_5000_, lean_object* v___x_5001_, lean_object* v_decls_5002_, lean_object* v_a_5003_, lean_object* v___x_5004_, lean_object* v_body_5005_, lean_object* v___y_5006_, lean_object* v___y_5007_, lean_object* v___y_5008_, lean_object* v___y_5009_, lean_object* v___y_5010_, lean_object* v___y_5011_, lean_object* v___y_5012_, lean_object* v___y_5013_){
_start:
{
uint8_t v___x_4685__boxed_5014_; lean_object* v_res_5015_; 
v___x_4685__boxed_5014_ = lean_unbox(v___x_5004_);
v_res_5015_ = l_Lean_Elab_Do_elabDoLetRec___lam__0(v___x_4998_, v___x_4999_, v___x_5000_, v___x_5001_, v_decls_5002_, v_a_5003_, v___x_4685__boxed_5014_, v_body_5005_, v___y_5006_, v___y_5007_, v___y_5008_, v___y_5009_, v___y_5010_, v___y_5011_, v___y_5012_);
lean_dec(v___y_5012_);
lean_dec_ref(v___y_5011_);
lean_dec(v___y_5010_);
lean_dec_ref(v___y_5009_);
lean_dec(v___y_5008_);
lean_dec_ref(v___y_5007_);
lean_dec_ref(v___y_5006_);
return v_res_5015_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoLetRec_spec__0(lean_object* v_a_5016_, lean_object* v_a_5017_){
_start:
{
if (lean_obj_tag(v_a_5016_) == 0)
{
lean_object* v___x_5018_; 
v___x_5018_ = l_List_reverse___redArg(v_a_5017_);
return v___x_5018_;
}
else
{
lean_object* v_head_5019_; lean_object* v_tail_5020_; lean_object* v___x_5022_; uint8_t v_isShared_5023_; uint8_t v_isSharedCheck_5029_; 
v_head_5019_ = lean_ctor_get(v_a_5016_, 0);
v_tail_5020_ = lean_ctor_get(v_a_5016_, 1);
v_isSharedCheck_5029_ = !lean_is_exclusive(v_a_5016_);
if (v_isSharedCheck_5029_ == 0)
{
v___x_5022_ = v_a_5016_;
v_isShared_5023_ = v_isSharedCheck_5029_;
goto v_resetjp_5021_;
}
else
{
lean_inc(v_tail_5020_);
lean_inc(v_head_5019_);
lean_dec(v_a_5016_);
v___x_5022_ = lean_box(0);
v_isShared_5023_ = v_isSharedCheck_5029_;
goto v_resetjp_5021_;
}
v_resetjp_5021_:
{
lean_object* v___x_5024_; lean_object* v___x_5026_; 
v___x_5024_ = l_Lean_MessageData_ofSyntax(v_head_5019_);
if (v_isShared_5023_ == 0)
{
lean_ctor_set(v___x_5022_, 1, v_a_5017_);
lean_ctor_set(v___x_5022_, 0, v___x_5024_);
v___x_5026_ = v___x_5022_;
goto v_reusejp_5025_;
}
else
{
lean_object* v_reuseFailAlloc_5028_; 
v_reuseFailAlloc_5028_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5028_, 0, v___x_5024_);
lean_ctor_set(v_reuseFailAlloc_5028_, 1, v_a_5017_);
v___x_5026_ = v_reuseFailAlloc_5028_;
goto v_reusejp_5025_;
}
v_reusejp_5025_:
{
v_a_5016_ = v_tail_5020_;
v_a_5017_ = v___x_5026_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetRec___closed__7(void){
_start:
{
lean_object* v___x_5046_; lean_object* v___x_5047_; 
v___x_5046_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetRec___closed__6));
v___x_5047_ = l_Lean_stringToMessageData(v___x_5046_);
return v___x_5047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec(lean_object* v_stx_5048_, lean_object* v_dec_5049_, lean_object* v_a_5050_, lean_object* v_a_5051_, lean_object* v_a_5052_, lean_object* v_a_5053_, lean_object* v_a_5054_, lean_object* v_a_5055_, lean_object* v_a_5056_){
_start:
{
lean_object* v___x_5058_; lean_object* v___x_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; uint8_t v___x_5062_; 
v___x_5058_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0));
v___x_5059_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1));
v___x_5060_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2));
v___x_5061_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetRec___closed__1));
lean_inc(v_stx_5048_);
v___x_5062_ = l_Lean_Syntax_isOfKind(v_stx_5048_, v___x_5061_);
if (v___x_5062_ == 0)
{
lean_object* v___x_5063_; 
lean_dec_ref(v_dec_5049_);
lean_dec(v_stx_5048_);
v___x_5063_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5063_;
}
else
{
lean_object* v___x_5064_; lean_object* v___x_5065_; lean_object* v___x_5066_; uint8_t v___x_5067_; 
v___x_5064_ = lean_unsigned_to_nat(0u);
v___x_5065_ = l_Lean_Syntax_getArg(v_stx_5048_, v___x_5064_);
v___x_5066_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetRec___closed__3));
lean_inc(v___x_5065_);
v___x_5067_ = l_Lean_Syntax_isOfKind(v___x_5065_, v___x_5066_);
if (v___x_5067_ == 0)
{
lean_object* v___x_5068_; 
lean_dec(v___x_5065_);
lean_dec_ref(v_dec_5049_);
lean_dec(v_stx_5048_);
v___x_5068_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5068_;
}
else
{
lean_object* v___x_5069_; lean_object* v_decls_5070_; lean_object* v___x_5071_; uint8_t v___x_5072_; 
v___x_5069_ = lean_unsigned_to_nat(1u);
v_decls_5070_ = l_Lean_Syntax_getArg(v_stx_5048_, v___x_5069_);
lean_dec(v_stx_5048_);
v___x_5071_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetRec___closed__5));
lean_inc(v_decls_5070_);
v___x_5072_ = l_Lean_Syntax_isOfKind(v_decls_5070_, v___x_5071_);
if (v___x_5072_ == 0)
{
lean_object* v___x_5073_; 
lean_dec(v_decls_5070_);
lean_dec(v___x_5065_);
lean_dec_ref(v_dec_5049_);
v___x_5073_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5073_;
}
else
{
lean_object* v_tk_5074_; lean_object* v___x_5075_; 
v_tk_5074_ = l_Lean_Syntax_getArg(v___x_5065_, v___x_5064_);
lean_dec(v___x_5065_);
v___x_5075_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_5049_, v_tk_5074_, v_a_5050_, v_a_5051_, v_a_5052_, v_a_5053_, v_a_5054_, v_a_5055_, v_a_5056_);
lean_dec(v_tk_5074_);
if (lean_obj_tag(v___x_5075_) == 0)
{
lean_object* v_a_5076_; lean_object* v___x_5077_; 
v_a_5076_ = lean_ctor_get(v___x_5075_, 0);
lean_inc(v_a_5076_);
lean_dec_ref_known(v___x_5075_, 1);
lean_inc(v_decls_5070_);
v___x_5077_ = l_Lean_Elab_Do_getLetRecDeclsVars(v_decls_5070_, v_a_5051_, v_a_5052_, v_a_5053_, v_a_5054_, v_a_5055_, v_a_5056_);
if (lean_obj_tag(v___x_5077_) == 0)
{
lean_object* v_a_5078_; lean_object* v_doBlockResultType_5079_; lean_object* v___x_5080_; 
v_a_5078_ = lean_ctor_get(v___x_5077_, 0);
lean_inc(v_a_5078_);
lean_dec_ref_known(v___x_5077_, 1);
v_doBlockResultType_5079_ = lean_ctor_get(v_a_5050_, 3);
lean_inc_ref(v_doBlockResultType_5079_);
v___x_5080_ = l_Lean_Elab_Do_mkMonadApp(v_doBlockResultType_5079_, v_a_5050_, v_a_5051_, v_a_5052_, v_a_5053_, v_a_5054_, v_a_5055_, v_a_5056_);
if (lean_obj_tag(v___x_5080_) == 0)
{
lean_object* v_a_5081_; lean_object* v___x_5082_; lean_object* v___f_5083_; lean_object* v___x_5084_; lean_object* v___x_5085_; lean_object* v___x_5086_; lean_object* v___x_5087_; lean_object* v___x_5088_; lean_object* v___x_5089_; lean_object* v___x_5090_; lean_object* v___x_5091_; lean_object* v___x_5092_; 
v_a_5081_ = lean_ctor_get(v___x_5080_, 0);
lean_inc(v_a_5081_);
lean_dec_ref_known(v___x_5080_, 1);
v___x_5082_ = lean_box(v___x_5072_);
v___f_5083_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetRec___lam__0___boxed), 16, 7);
lean_closure_set(v___f_5083_, 0, v___x_5058_);
lean_closure_set(v___f_5083_, 1, v___x_5059_);
lean_closure_set(v___f_5083_, 2, v___x_5060_);
lean_closure_set(v___f_5083_, 3, v___x_5066_);
lean_closure_set(v___f_5083_, 4, v_decls_5070_);
lean_closure_set(v___f_5083_, 5, v_a_5081_);
lean_closure_set(v___f_5083_, 6, v___x_5082_);
v___x_5084_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetRec___closed__7, &l_Lean_Elab_Do_elabDoLetRec___closed__7_once, _init_l_Lean_Elab_Do_elabDoLetRec___closed__7);
v___x_5085_ = lean_array_to_list(v_a_5078_);
v___x_5086_ = lean_box(0);
v___x_5087_ = l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoLetRec_spec__0(v___x_5085_, v___x_5086_);
v___x_5088_ = l_Lean_MessageData_ofList(v___x_5087_);
v___x_5089_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5089_, 0, v___x_5084_);
lean_ctor_set(v___x_5089_, 1, v___x_5088_);
v___x_5090_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_5090_, 0, v_a_5076_);
v___x_5091_ = lean_box(0);
v___x_5092_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_5089_, v___x_5090_, v___f_5083_, v___x_5091_, v_a_5050_, v_a_5051_, v_a_5052_, v_a_5053_, v_a_5054_, v_a_5055_, v_a_5056_);
return v___x_5092_;
}
else
{
lean_dec(v_a_5078_);
lean_dec(v_a_5076_);
lean_dec(v_decls_5070_);
return v___x_5080_;
}
}
else
{
lean_object* v_a_5093_; lean_object* v___x_5095_; uint8_t v_isShared_5096_; uint8_t v_isSharedCheck_5100_; 
lean_dec(v_a_5076_);
lean_dec(v_decls_5070_);
v_a_5093_ = lean_ctor_get(v___x_5077_, 0);
v_isSharedCheck_5100_ = !lean_is_exclusive(v___x_5077_);
if (v_isSharedCheck_5100_ == 0)
{
v___x_5095_ = v___x_5077_;
v_isShared_5096_ = v_isSharedCheck_5100_;
goto v_resetjp_5094_;
}
else
{
lean_inc(v_a_5093_);
lean_dec(v___x_5077_);
v___x_5095_ = lean_box(0);
v_isShared_5096_ = v_isSharedCheck_5100_;
goto v_resetjp_5094_;
}
v_resetjp_5094_:
{
lean_object* v___x_5098_; 
if (v_isShared_5096_ == 0)
{
v___x_5098_ = v___x_5095_;
goto v_reusejp_5097_;
}
else
{
lean_object* v_reuseFailAlloc_5099_; 
v_reuseFailAlloc_5099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5099_, 0, v_a_5093_);
v___x_5098_ = v_reuseFailAlloc_5099_;
goto v_reusejp_5097_;
}
v_reusejp_5097_:
{
return v___x_5098_;
}
}
}
}
else
{
lean_object* v_a_5101_; lean_object* v___x_5103_; uint8_t v_isShared_5104_; uint8_t v_isSharedCheck_5108_; 
lean_dec(v_decls_5070_);
v_a_5101_ = lean_ctor_get(v___x_5075_, 0);
v_isSharedCheck_5108_ = !lean_is_exclusive(v___x_5075_);
if (v_isSharedCheck_5108_ == 0)
{
v___x_5103_ = v___x_5075_;
v_isShared_5104_ = v_isSharedCheck_5108_;
goto v_resetjp_5102_;
}
else
{
lean_inc(v_a_5101_);
lean_dec(v___x_5075_);
v___x_5103_ = lean_box(0);
v_isShared_5104_ = v_isSharedCheck_5108_;
goto v_resetjp_5102_;
}
v_resetjp_5102_:
{
lean_object* v___x_5106_; 
if (v_isShared_5104_ == 0)
{
v___x_5106_ = v___x_5103_;
goto v_reusejp_5105_;
}
else
{
lean_object* v_reuseFailAlloc_5107_; 
v_reuseFailAlloc_5107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5107_, 0, v_a_5101_);
v___x_5106_ = v_reuseFailAlloc_5107_;
goto v_reusejp_5105_;
}
v_reusejp_5105_:
{
return v___x_5106_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec___boxed(lean_object* v_stx_5109_, lean_object* v_dec_5110_, lean_object* v_a_5111_, lean_object* v_a_5112_, lean_object* v_a_5113_, lean_object* v_a_5114_, lean_object* v_a_5115_, lean_object* v_a_5116_, lean_object* v_a_5117_, lean_object* v_a_5118_){
_start:
{
lean_object* v_res_5119_; 
v_res_5119_ = l_Lean_Elab_Do_elabDoLetRec(v_stx_5109_, v_dec_5110_, v_a_5111_, v_a_5112_, v_a_5113_, v_a_5114_, v_a_5115_, v_a_5116_, v_a_5117_);
lean_dec(v_a_5117_);
lean_dec_ref(v_a_5116_);
lean_dec(v_a_5115_);
lean_dec_ref(v_a_5114_);
lean_dec(v_a_5113_);
lean_dec_ref(v_a_5112_);
lean_dec_ref(v_a_5111_);
return v_res_5119_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1(){
_start:
{
lean_object* v___x_5127_; lean_object* v___x_5128_; lean_object* v___x_5129_; lean_object* v___x_5130_; lean_object* v___x_5131_; 
v___x_5127_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_5128_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetRec___closed__1));
v___x_5129_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1));
v___x_5130_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetRec___boxed), 10, 0);
v___x_5131_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5127_, v___x_5128_, v___x_5129_, v___x_5130_);
return v___x_5131_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___boxed(lean_object* v_a_5132_){
_start:
{
lean_object* v_res_5133_; 
v_res_5133_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1();
return v_res_5133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassign(lean_object* v_stx_5140_, lean_object* v_dec_5141_, lean_object* v_a_5142_, lean_object* v_a_5143_, lean_object* v_a_5144_, lean_object* v_a_5145_, lean_object* v_a_5146_, lean_object* v_a_5147_, lean_object* v_a_5148_){
_start:
{
lean_object* v___y_5151_; lean_object* v___y_5152_; lean_object* v___y_5153_; lean_object* v___y_5154_; lean_object* v___y_5155_; lean_object* v___y_5156_; uint8_t v___y_5157_; lean_object* v___y_5158_; lean_object* v___y_5159_; lean_object* v___y_5160_; lean_object* v___y_5161_; lean_object* v___y_5162_; lean_object* v___y_5163_; lean_object* v___y_5164_; lean_object* v___y_5165_; lean_object* v___y_5166_; lean_object* v___y_5167_; lean_object* v___x_5183_; uint8_t v___x_5184_; 
v___x_5183_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReassign___closed__1));
lean_inc(v_stx_5140_);
v___x_5184_ = l_Lean_Syntax_isOfKind(v_stx_5140_, v___x_5183_);
if (v___x_5184_ == 0)
{
lean_object* v___x_5185_; 
lean_dec_ref(v_dec_5141_);
lean_dec(v_stx_5140_);
v___x_5185_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5185_;
}
else
{
lean_object* v___x_5186_; lean_object* v___x_5187_; lean_object* v___x_5188_; uint8_t v___x_5189_; 
v___x_5186_ = lean_unsigned_to_nat(0u);
v___x_5187_ = l_Lean_Syntax_getArg(v_stx_5140_, v___x_5186_);
lean_dec(v_stx_5140_);
v___x_5188_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__4));
lean_inc(v___x_5187_);
v___x_5189_ = l_Lean_Syntax_isOfKind(v___x_5187_, v___x_5188_);
if (v___x_5189_ == 0)
{
lean_object* v___x_5190_; uint8_t v___x_5191_; 
v___x_5190_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10));
lean_inc(v___x_5187_);
v___x_5191_ = l_Lean_Syntax_isOfKind(v___x_5187_, v___x_5190_);
if (v___x_5191_ == 0)
{
lean_object* v___x_5192_; 
lean_dec(v___x_5187_);
lean_dec_ref(v_dec_5141_);
v___x_5192_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5192_;
}
else
{
lean_object* v___x_5193_; lean_object* v___x_5194_; lean_object* v___x_5195_; lean_object* v___x_5196_; lean_object* v___x_5197_; lean_object* v_decl_5198_; lean_object* v___x_5199_; lean_object* v___x_5200_; lean_object* v___x_5201_; lean_object* v___x_5202_; 
v___x_5193_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
v___x_5194_ = lean_unsigned_to_nat(1u);
v___x_5195_ = lean_mk_empty_array_with_capacity(v___x_5194_);
v___x_5196_ = lean_array_push(v___x_5195_, v___x_5187_);
v___x_5197_ = lean_box(2);
v_decl_5198_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_decl_5198_, 0, v___x_5197_);
lean_ctor_set(v_decl_5198_, 1, v___x_5193_);
lean_ctor_set(v_decl_5198_, 2, v___x_5196_);
v___x_5199_ = lean_box(0);
v___x_5200_ = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(v___x_5200_, 0, v___x_5199_);
lean_ctor_set_uint8(v___x_5200_, sizeof(void*)*1, v___x_5189_);
lean_ctor_set_uint8(v___x_5200_, sizeof(void*)*1 + 1, v___x_5189_);
lean_ctor_set_uint8(v___x_5200_, sizeof(void*)*1 + 2, v___x_5189_);
lean_ctor_set_uint8(v___x_5200_, sizeof(void*)*1 + 3, v___x_5189_);
lean_ctor_set_uint8(v___x_5200_, sizeof(void*)*1 + 4, v___x_5189_);
v___x_5201_ = lean_box(2);
lean_inc_ref(v_decl_5198_);
v___x_5202_ = l_Lean_Elab_Do_elabDoLetOrReassign(v___x_5200_, v___x_5201_, v_decl_5198_, v_decl_5198_, v_dec_5141_, v_a_5142_, v_a_5143_, v_a_5144_, v_a_5145_, v_a_5146_, v_a_5147_, v_a_5148_);
return v___x_5202_;
}
}
else
{
lean_object* v___x_5203_; lean_object* v___x_5204_; uint8_t v___x_5205_; 
v___x_5203_ = l_Lean_Syntax_getArg(v___x_5187_, v___x_5186_);
v___x_5204_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41));
lean_inc(v___x_5203_);
v___x_5205_ = l_Lean_Syntax_isOfKind(v___x_5203_, v___x_5204_);
if (v___x_5205_ == 0)
{
lean_object* v___x_5206_; 
lean_dec(v___x_5203_);
lean_dec(v___x_5187_);
lean_dec_ref(v_dec_5141_);
v___x_5206_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5206_;
}
else
{
lean_object* v___x_5207_; lean_object* v_xType_x3f_5209_; lean_object* v___y_5210_; lean_object* v___y_5211_; lean_object* v___y_5212_; lean_object* v___y_5213_; lean_object* v___y_5214_; lean_object* v___y_5215_; lean_object* v___y_5216_; lean_object* v___x_5236_; uint8_t v___x_5237_; 
v___x_5207_ = l_Lean_Syntax_getArg(v___x_5203_, v___x_5186_);
lean_dec(v___x_5203_);
v___x_5236_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43));
lean_inc(v___x_5207_);
v___x_5237_ = l_Lean_Syntax_isOfKind(v___x_5207_, v___x_5236_);
if (v___x_5237_ == 0)
{
lean_object* v___x_5238_; 
lean_dec(v___x_5207_);
lean_dec(v___x_5187_);
lean_dec_ref(v_dec_5141_);
v___x_5238_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5238_;
}
else
{
lean_object* v___x_5239_; lean_object* v___x_5240_; uint8_t v___x_5241_; 
v___x_5239_ = lean_unsigned_to_nat(1u);
v___x_5240_ = l_Lean_Syntax_getArg(v___x_5187_, v___x_5239_);
v___x_5241_ = l_Lean_Syntax_matchesNull(v___x_5240_, v___x_5186_);
if (v___x_5241_ == 0)
{
lean_object* v___x_5242_; 
lean_dec(v___x_5207_);
lean_dec(v___x_5187_);
lean_dec_ref(v_dec_5141_);
v___x_5242_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5242_;
}
else
{
lean_object* v___x_5243_; lean_object* v___x_5244_; uint8_t v___x_5245_; 
v___x_5243_ = lean_unsigned_to_nat(2u);
v___x_5244_ = l_Lean_Syntax_getArg(v___x_5187_, v___x_5243_);
v___x_5245_ = l_Lean_Syntax_isNone(v___x_5244_);
if (v___x_5245_ == 0)
{
uint8_t v___x_5246_; 
lean_inc(v___x_5244_);
v___x_5246_ = l_Lean_Syntax_matchesNull(v___x_5244_, v___x_5239_);
if (v___x_5246_ == 0)
{
lean_object* v___x_5247_; 
lean_dec(v___x_5244_);
lean_dec(v___x_5207_);
lean_dec(v___x_5187_);
lean_dec_ref(v_dec_5141_);
v___x_5247_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5247_;
}
else
{
lean_object* v___x_5248_; lean_object* v___x_5249_; uint8_t v___x_5250_; 
v___x_5248_ = l_Lean_Syntax_getArg(v___x_5244_, v___x_5186_);
lean_dec(v___x_5244_);
v___x_5249_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
lean_inc(v___x_5248_);
v___x_5250_ = l_Lean_Syntax_isOfKind(v___x_5248_, v___x_5249_);
if (v___x_5250_ == 0)
{
lean_object* v___x_5251_; 
lean_dec(v___x_5248_);
lean_dec(v___x_5207_);
lean_dec(v___x_5187_);
lean_dec_ref(v_dec_5141_);
v___x_5251_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5251_;
}
else
{
lean_object* v_xType_x3f_5252_; lean_object* v___x_5253_; 
v_xType_x3f_5252_ = l_Lean_Syntax_getArg(v___x_5248_, v___x_5239_);
lean_dec(v___x_5248_);
v___x_5253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5253_, 0, v_xType_x3f_5252_);
v_xType_x3f_5209_ = v___x_5253_;
v___y_5210_ = v_a_5142_;
v___y_5211_ = v_a_5143_;
v___y_5212_ = v_a_5144_;
v___y_5213_ = v_a_5145_;
v___y_5214_ = v_a_5146_;
v___y_5215_ = v_a_5147_;
v___y_5216_ = v_a_5148_;
goto v___jp_5208_;
}
}
}
else
{
lean_object* v___x_5254_; 
lean_dec(v___x_5244_);
v___x_5254_ = lean_box(0);
v_xType_x3f_5209_ = v___x_5254_;
v___y_5210_ = v_a_5142_;
v___y_5211_ = v_a_5143_;
v___y_5212_ = v_a_5144_;
v___y_5213_ = v_a_5145_;
v___y_5214_ = v_a_5146_;
v___y_5215_ = v_a_5147_;
v___y_5216_ = v_a_5148_;
goto v___jp_5208_;
}
}
}
v___jp_5208_:
{
lean_object* v_ref_5217_; lean_object* v___x_5218_; lean_object* v_tk_5219_; lean_object* v___x_5220_; lean_object* v___x_5221_; uint8_t v___x_5222_; lean_object* v___x_5223_; lean_object* v___x_5224_; lean_object* v___x_5225_; lean_object* v___x_5226_; lean_object* v___x_5227_; lean_object* v___x_5228_; 
v_ref_5217_ = lean_ctor_get(v___y_5215_, 2);
v___x_5218_ = lean_unsigned_to_nat(3u);
v_tk_5219_ = l_Lean_Syntax_getArg(v___x_5187_, v___x_5218_);
v___x_5220_ = lean_unsigned_to_nat(4u);
v___x_5221_ = l_Lean_Syntax_getArg(v___x_5187_, v___x_5220_);
lean_dec(v___x_5187_);
v___x_5222_ = 0;
v___x_5223_ = l_Lean_SourceInfo_fromRef(v_ref_5217_, v___x_5222_);
v___x_5224_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8));
lean_inc_n(v___x_5223_, 2);
v___x_5225_ = l_Lean_Syntax_node1(v___x_5223_, v___x_5204_, v___x_5207_);
v___x_5226_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5227_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_5228_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5228_, 0, v___x_5223_);
lean_ctor_set(v___x_5228_, 1, v___x_5226_);
lean_ctor_set(v___x_5228_, 2, v___x_5227_);
if (lean_obj_tag(v_xType_x3f_5209_) == 1)
{
lean_object* v_val_5229_; lean_object* v___x_5230_; lean_object* v___x_5231_; lean_object* v___x_5232_; lean_object* v___x_5233_; lean_object* v___x_5234_; 
v_val_5229_ = lean_ctor_get(v_xType_x3f_5209_, 0);
lean_inc(v_val_5229_);
lean_dec_ref_known(v_xType_x3f_5209_, 1);
v___x_5230_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
v___x_5231_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36));
lean_inc_n(v___x_5223_, 2);
v___x_5232_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5232_, 0, v___x_5223_);
lean_ctor_set(v___x_5232_, 1, v___x_5231_);
v___x_5233_ = l_Lean_Syntax_node2(v___x_5223_, v___x_5230_, v___x_5232_, v_val_5229_);
v___x_5234_ = l_Array_mkArray1___redArg(v___x_5233_);
v___y_5151_ = v___y_5211_;
v___y_5152_ = v___y_5213_;
v___y_5153_ = v___x_5225_;
v___y_5154_ = v___x_5227_;
v___y_5155_ = v___x_5223_;
v___y_5156_ = v___x_5221_;
v___y_5157_ = v___x_5222_;
v___y_5158_ = v___y_5216_;
v___y_5159_ = v___y_5210_;
v___y_5160_ = v___x_5224_;
v___y_5161_ = v___x_5228_;
v___y_5162_ = v___x_5226_;
v___y_5163_ = v___y_5214_;
v___y_5164_ = v_tk_5219_;
v___y_5165_ = v___y_5212_;
v___y_5166_ = v___y_5215_;
v___y_5167_ = v___x_5234_;
goto v___jp_5150_;
}
else
{
lean_object* v___x_5235_; 
lean_dec(v_xType_x3f_5209_);
v___x_5235_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__2));
v___y_5151_ = v___y_5211_;
v___y_5152_ = v___y_5213_;
v___y_5153_ = v___x_5225_;
v___y_5154_ = v___x_5227_;
v___y_5155_ = v___x_5223_;
v___y_5156_ = v___x_5221_;
v___y_5157_ = v___x_5222_;
v___y_5158_ = v___y_5216_;
v___y_5159_ = v___y_5210_;
v___y_5160_ = v___x_5224_;
v___y_5161_ = v___x_5228_;
v___y_5162_ = v___x_5226_;
v___y_5163_ = v___y_5214_;
v___y_5164_ = v_tk_5219_;
v___y_5165_ = v___y_5212_;
v___y_5166_ = v___y_5215_;
v___y_5167_ = v___x_5235_;
goto v___jp_5150_;
}
}
}
}
}
v___jp_5150_:
{
lean_object* v___x_5168_; lean_object* v___x_5169_; lean_object* v___x_5170_; lean_object* v___x_5171_; lean_object* v___x_5172_; lean_object* v___x_5173_; lean_object* v___x_5174_; lean_object* v___x_5175_; lean_object* v___x_5176_; lean_object* v___x_5177_; lean_object* v___x_5178_; lean_object* v___x_5179_; lean_object* v___x_5180_; lean_object* v___x_5181_; lean_object* v___x_5182_; 
lean_inc_ref(v___y_5154_);
v___x_5168_ = l_Array_append___redArg(v___y_5154_, v___y_5167_);
lean_dec_ref(v___y_5167_);
lean_inc(v___y_5162_);
lean_inc_n(v___y_5155_, 2);
v___x_5169_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5169_, 0, v___y_5155_);
lean_ctor_set(v___x_5169_, 1, v___y_5162_);
lean_ctor_set(v___x_5169_, 2, v___x_5168_);
v___x_5170_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_5171_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5171_, 0, v___y_5155_);
lean_ctor_set(v___x_5171_, 1, v___x_5170_);
lean_inc(v___y_5160_);
v___x_5172_ = l_Lean_Syntax_node5(v___y_5155_, v___y_5160_, v___y_5153_, v___y_5161_, v___x_5169_, v___x_5171_, v___y_5156_);
v___x_5173_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
v___x_5174_ = lean_unsigned_to_nat(1u);
v___x_5175_ = lean_mk_empty_array_with_capacity(v___x_5174_);
v___x_5176_ = lean_array_push(v___x_5175_, v___x_5172_);
v___x_5177_ = lean_box(2);
v___x_5178_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5178_, 0, v___x_5177_);
lean_ctor_set(v___x_5178_, 1, v___x_5173_);
lean_ctor_set(v___x_5178_, 2, v___x_5176_);
v___x_5179_ = lean_box(0);
v___x_5180_ = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(v___x_5180_, 0, v___x_5179_);
lean_ctor_set_uint8(v___x_5180_, sizeof(void*)*1, v___y_5157_);
lean_ctor_set_uint8(v___x_5180_, sizeof(void*)*1 + 1, v___y_5157_);
lean_ctor_set_uint8(v___x_5180_, sizeof(void*)*1 + 2, v___y_5157_);
lean_ctor_set_uint8(v___x_5180_, sizeof(void*)*1 + 3, v___y_5157_);
lean_ctor_set_uint8(v___x_5180_, sizeof(void*)*1 + 4, v___y_5157_);
v___x_5181_ = lean_box(2);
v___x_5182_ = l_Lean_Elab_Do_elabDoLetOrReassign(v___x_5180_, v___x_5181_, v___x_5178_, v___y_5164_, v_dec_5141_, v___y_5159_, v___y_5151_, v___y_5165_, v___y_5152_, v___y_5163_, v___y_5166_, v___y_5158_);
return v___x_5182_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassign___boxed(lean_object* v_stx_5255_, lean_object* v_dec_5256_, lean_object* v_a_5257_, lean_object* v_a_5258_, lean_object* v_a_5259_, lean_object* v_a_5260_, lean_object* v_a_5261_, lean_object* v_a_5262_, lean_object* v_a_5263_, lean_object* v_a_5264_){
_start:
{
lean_object* v_res_5265_; 
v_res_5265_ = l_Lean_Elab_Do_elabDoReassign(v_stx_5255_, v_dec_5256_, v_a_5257_, v_a_5258_, v_a_5259_, v_a_5260_, v_a_5261_, v_a_5262_, v_a_5263_);
lean_dec(v_a_5263_);
lean_dec_ref(v_a_5262_);
lean_dec(v_a_5261_);
lean_dec_ref(v_a_5260_);
lean_dec(v_a_5259_);
lean_dec_ref(v_a_5258_);
lean_dec_ref(v_a_5257_);
return v_res_5265_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1(){
_start:
{
lean_object* v___x_5273_; lean_object* v___x_5274_; lean_object* v___x_5275_; lean_object* v___x_5276_; lean_object* v___x_5277_; 
v___x_5273_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_5274_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReassign___closed__1));
v___x_5275_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1));
v___x_5276_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoReassign___boxed), 10, 0);
v___x_5277_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5273_, v___x_5274_, v___x_5275_, v___x_5276_);
return v___x_5277_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___boxed(lean_object* v_a_5278_){
_start:
{
lean_object* v_res_5279_; 
v_res_5279_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1();
return v_res_5279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse___lam__0(lean_object* v_____do__lift_5280_, lean_object* v___y_5281_, lean_object* v___y_5282_, lean_object* v___y_5283_, lean_object* v___y_5284_, lean_object* v___y_5285_, lean_object* v___y_5286_, lean_object* v___y_5287_){
_start:
{
uint8_t v___x_5289_; lean_object* v___x_5290_; lean_object* v___x_5291_; 
v___x_5289_ = 0;
v___x_5290_ = l_Lean_SourceInfo_fromRef(v_____do__lift_5280_, v___x_5289_);
v___x_5291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5291_, 0, v___x_5290_);
return v___x_5291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse___lam__0___boxed(lean_object* v_____do__lift_5292_, lean_object* v___y_5293_, lean_object* v___y_5294_, lean_object* v___y_5295_, lean_object* v___y_5296_, lean_object* v___y_5297_, lean_object* v___y_5298_, lean_object* v___y_5299_, lean_object* v___y_5300_){
_start:
{
lean_object* v_res_5301_; 
v_res_5301_ = l_Lean_Elab_Do_elabDoLetElse___lam__0(v_____do__lift_5292_, v___y_5293_, v___y_5294_, v___y_5295_, v___y_5296_, v___y_5297_, v___y_5298_, v___y_5299_);
lean_dec(v___y_5299_);
lean_dec_ref(v___y_5298_);
lean_dec(v___y_5297_);
lean_dec_ref(v___y_5296_);
lean_dec(v___y_5295_);
lean_dec_ref(v___y_5294_);
lean_dec_ref(v___y_5293_);
lean_dec(v_____do__lift_5292_);
return v_res_5301_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg(lean_object* v_as_5302_, size_t v_sz_5303_, size_t v_i_5304_, lean_object* v_b_5305_, lean_object* v___y_5306_){
_start:
{
uint8_t v___x_5308_; 
v___x_5308_ = lean_usize_dec_lt(v_i_5304_, v_sz_5303_);
if (v___x_5308_ == 0)
{
lean_object* v___x_5309_; 
v___x_5309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5309_, 0, v_b_5305_);
return v___x_5309_;
}
else
{
lean_object* v_ref_5310_; lean_object* v___x_5311_; lean_object* v___x_5312_; lean_object* v_a_5313_; uint8_t v___x_5314_; lean_object* v___x_5315_; lean_object* v___x_5316_; lean_object* v___x_5317_; lean_object* v___x_5318_; lean_object* v___x_5319_; lean_object* v___x_5320_; lean_object* v___x_5321_; lean_object* v___x_5322_; lean_object* v___x_5323_; lean_object* v___x_5324_; lean_object* v___x_5325_; lean_object* v___x_5326_; lean_object* v___x_5327_; lean_object* v___x_5328_; lean_object* v___x_5329_; lean_object* v___x_5330_; lean_object* v___x_5331_; lean_object* v___x_5332_; lean_object* v___x_5333_; lean_object* v___x_5334_; lean_object* v___x_5335_; lean_object* v___x_5336_; lean_object* v___x_5337_; lean_object* v___x_5338_; lean_object* v___x_5339_; lean_object* v___x_5340_; lean_object* v___x_5341_; lean_object* v___x_5342_; lean_object* v___x_5343_; lean_object* v___x_5344_; lean_object* v___x_5345_; lean_object* v___x_5346_; size_t v___x_5347_; size_t v___x_5348_; 
v_ref_5310_ = lean_ctor_get(v___y_5306_, 2);
v___x_5311_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__3));
v___x_5312_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__4));
v_a_5313_ = lean_array_uget_borrowed(v_as_5302_, v_i_5304_);
v___x_5314_ = 0;
v___x_5315_ = l_Lean_SourceInfo_fromRef(v_ref_5310_, v___x_5314_);
v___x_5316_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5317_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__6));
v___x_5318_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__1));
v___x_5319_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
lean_inc_n(v___x_5315_, 17);
v___x_5320_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5320_, 0, v___x_5315_);
lean_ctor_set(v___x_5320_, 1, v___x_5319_);
v___x_5321_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__11));
v___x_5322_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5322_, 0, v___x_5315_);
lean_ctor_set(v___x_5322_, 1, v___x_5321_);
v___x_5323_ = l_Lean_Syntax_node1(v___x_5315_, v___x_5316_, v___x_5322_);
v___x_5324_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_5325_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5325_, 0, v___x_5315_);
lean_ctor_set(v___x_5325_, 1, v___x_5316_);
lean_ctor_set(v___x_5325_, 2, v___x_5324_);
lean_inc_ref_n(v___x_5325_, 3);
v___x_5326_ = l_Lean_Syntax_node1(v___x_5315_, v___x_5311_, v___x_5325_);
v___x_5327_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
v___x_5328_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8));
v___x_5329_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41));
lean_inc_n(v_a_5313_, 2);
v___x_5330_ = l_Lean_Syntax_node1(v___x_5315_, v___x_5329_, v_a_5313_);
v___x_5331_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_5332_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5332_, 0, v___x_5315_);
lean_ctor_set(v___x_5332_, 1, v___x_5331_);
v___x_5333_ = l_Lean_Syntax_node5(v___x_5315_, v___x_5328_, v___x_5330_, v___x_5325_, v___x_5325_, v___x_5332_, v_a_5313_);
v___x_5334_ = l_Lean_Syntax_node1(v___x_5315_, v___x_5327_, v___x_5333_);
v___x_5335_ = l_Lean_Syntax_node4(v___x_5315_, v___x_5318_, v___x_5320_, v___x_5323_, v___x_5326_, v___x_5334_);
v___x_5336_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7));
v___x_5337_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5337_, 0, v___x_5315_);
lean_ctor_set(v___x_5337_, 1, v___x_5336_);
v___x_5338_ = l_Lean_Syntax_node1(v___x_5315_, v___x_5316_, v___x_5337_);
v___x_5339_ = l_Lean_Syntax_node2(v___x_5315_, v___x_5317_, v___x_5335_, v___x_5338_);
v___x_5340_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__1));
v___x_5341_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__2));
v___x_5342_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5342_, 0, v___x_5315_);
lean_ctor_set(v___x_5342_, 1, v___x_5341_);
v___x_5343_ = l_Lean_Syntax_node2(v___x_5315_, v___x_5340_, v___x_5342_, v_b_5305_);
v___x_5344_ = l_Lean_Syntax_node2(v___x_5315_, v___x_5317_, v___x_5343_, v___x_5325_);
v___x_5345_ = l_Lean_Syntax_node2(v___x_5315_, v___x_5316_, v___x_5339_, v___x_5344_);
v___x_5346_ = l_Lean_Syntax_node1(v___x_5315_, v___x_5312_, v___x_5345_);
v___x_5347_ = ((size_t)1ULL);
v___x_5348_ = lean_usize_add(v_i_5304_, v___x_5347_);
v_i_5304_ = v___x_5348_;
v_b_5305_ = v___x_5346_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___boxed(lean_object* v_as_5350_, lean_object* v_sz_5351_, lean_object* v_i_5352_, lean_object* v_b_5353_, lean_object* v___y_5354_, lean_object* v___y_5355_){
_start:
{
size_t v_sz_boxed_5356_; size_t v_i_boxed_5357_; lean_object* v_res_5358_; 
v_sz_boxed_5356_ = lean_unbox_usize(v_sz_5351_);
lean_dec(v_sz_5351_);
v_i_boxed_5357_ = lean_unbox_usize(v_i_5352_);
lean_dec(v_i_5352_);
v_res_5358_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg(v_as_5350_, v_sz_boxed_5356_, v_i_boxed_5357_, v_b_5353_, v___y_5354_);
lean_dec_ref(v___y_5354_);
lean_dec_ref(v_as_5350_);
return v_res_5358_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0(lean_object* v_as_5359_, size_t v_sz_5360_, size_t v_i_5361_, lean_object* v_b_5362_, lean_object* v___y_5363_, lean_object* v___y_5364_, lean_object* v___y_5365_, lean_object* v___y_5366_, lean_object* v___y_5367_, lean_object* v___y_5368_, lean_object* v___y_5369_){
_start:
{
uint8_t v___x_5371_; 
v___x_5371_ = lean_usize_dec_lt(v_i_5361_, v_sz_5360_);
if (v___x_5371_ == 0)
{
lean_object* v___x_5372_; 
v___x_5372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5372_, 0, v_b_5362_);
return v___x_5372_;
}
else
{
lean_object* v_ref_5373_; lean_object* v___x_5374_; lean_object* v___x_5375_; lean_object* v_a_5376_; uint8_t v___x_5377_; lean_object* v___x_5378_; lean_object* v___x_5379_; lean_object* v___x_5380_; lean_object* v___x_5381_; lean_object* v___x_5382_; lean_object* v___x_5383_; lean_object* v___x_5384_; lean_object* v___x_5385_; lean_object* v___x_5386_; lean_object* v___x_5387_; lean_object* v___x_5388_; lean_object* v___x_5389_; lean_object* v___x_5390_; lean_object* v___x_5391_; lean_object* v___x_5392_; lean_object* v___x_5393_; lean_object* v___x_5394_; lean_object* v___x_5395_; lean_object* v___x_5396_; lean_object* v___x_5397_; lean_object* v___x_5398_; lean_object* v___x_5399_; lean_object* v___x_5400_; lean_object* v___x_5401_; lean_object* v___x_5402_; lean_object* v___x_5403_; lean_object* v___x_5404_; lean_object* v___x_5405_; lean_object* v___x_5406_; lean_object* v___x_5407_; lean_object* v___x_5408_; lean_object* v___x_5409_; size_t v___x_5410_; size_t v___x_5411_; lean_object* v___x_5412_; 
v_ref_5373_ = lean_ctor_get(v___y_5368_, 2);
v___x_5374_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__3));
v___x_5375_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__4));
v_a_5376_ = lean_array_uget_borrowed(v_as_5359_, v_i_5361_);
v___x_5377_ = 0;
v___x_5378_ = l_Lean_SourceInfo_fromRef(v_ref_5373_, v___x_5377_);
v___x_5379_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5380_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__6));
v___x_5381_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__1));
v___x_5382_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
lean_inc_n(v___x_5378_, 17);
v___x_5383_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5383_, 0, v___x_5378_);
lean_ctor_set(v___x_5383_, 1, v___x_5382_);
v___x_5384_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__11));
v___x_5385_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5385_, 0, v___x_5378_);
lean_ctor_set(v___x_5385_, 1, v___x_5384_);
v___x_5386_ = l_Lean_Syntax_node1(v___x_5378_, v___x_5379_, v___x_5385_);
v___x_5387_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_5388_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5388_, 0, v___x_5378_);
lean_ctor_set(v___x_5388_, 1, v___x_5379_);
lean_ctor_set(v___x_5388_, 2, v___x_5387_);
lean_inc_ref_n(v___x_5388_, 3);
v___x_5389_ = l_Lean_Syntax_node1(v___x_5378_, v___x_5374_, v___x_5388_);
v___x_5390_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
v___x_5391_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8));
v___x_5392_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41));
lean_inc_n(v_a_5376_, 2);
v___x_5393_ = l_Lean_Syntax_node1(v___x_5378_, v___x_5392_, v_a_5376_);
v___x_5394_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_5395_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5395_, 0, v___x_5378_);
lean_ctor_set(v___x_5395_, 1, v___x_5394_);
v___x_5396_ = l_Lean_Syntax_node5(v___x_5378_, v___x_5391_, v___x_5393_, v___x_5388_, v___x_5388_, v___x_5395_, v_a_5376_);
v___x_5397_ = l_Lean_Syntax_node1(v___x_5378_, v___x_5390_, v___x_5396_);
v___x_5398_ = l_Lean_Syntax_node4(v___x_5378_, v___x_5381_, v___x_5383_, v___x_5386_, v___x_5389_, v___x_5397_);
v___x_5399_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7));
v___x_5400_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5400_, 0, v___x_5378_);
lean_ctor_set(v___x_5400_, 1, v___x_5399_);
v___x_5401_ = l_Lean_Syntax_node1(v___x_5378_, v___x_5379_, v___x_5400_);
v___x_5402_ = l_Lean_Syntax_node2(v___x_5378_, v___x_5380_, v___x_5398_, v___x_5401_);
v___x_5403_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__1));
v___x_5404_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__2));
v___x_5405_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5405_, 0, v___x_5378_);
lean_ctor_set(v___x_5405_, 1, v___x_5404_);
v___x_5406_ = l_Lean_Syntax_node2(v___x_5378_, v___x_5403_, v___x_5405_, v_b_5362_);
v___x_5407_ = l_Lean_Syntax_node2(v___x_5378_, v___x_5380_, v___x_5406_, v___x_5388_);
v___x_5408_ = l_Lean_Syntax_node2(v___x_5378_, v___x_5379_, v___x_5402_, v___x_5407_);
v___x_5409_ = l_Lean_Syntax_node1(v___x_5378_, v___x_5375_, v___x_5408_);
v___x_5410_ = ((size_t)1ULL);
v___x_5411_ = lean_usize_add(v_i_5361_, v___x_5410_);
v___x_5412_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg(v_as_5359_, v_sz_5360_, v___x_5411_, v___x_5409_, v___y_5368_);
return v___x_5412_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0___boxed(lean_object* v_as_5413_, lean_object* v_sz_5414_, lean_object* v_i_5415_, lean_object* v_b_5416_, lean_object* v___y_5417_, lean_object* v___y_5418_, lean_object* v___y_5419_, lean_object* v___y_5420_, lean_object* v___y_5421_, lean_object* v___y_5422_, lean_object* v___y_5423_, lean_object* v___y_5424_){
_start:
{
size_t v_sz_boxed_5425_; size_t v_i_boxed_5426_; lean_object* v_res_5427_; 
v_sz_boxed_5425_ = lean_unbox_usize(v_sz_5414_);
lean_dec(v_sz_5414_);
v_i_boxed_5426_ = lean_unbox_usize(v_i_5415_);
lean_dec(v_i_5415_);
v_res_5427_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0(v_as_5413_, v_sz_boxed_5425_, v_i_boxed_5426_, v_b_5416_, v___y_5417_, v___y_5418_, v___y_5419_, v___y_5420_, v___y_5421_, v___y_5422_, v___y_5423_);
lean_dec(v___y_5423_);
lean_dec_ref(v___y_5422_);
lean_dec(v___y_5421_);
lean_dec_ref(v___y_5420_);
lean_dec(v___y_5419_);
lean_dec_ref(v___y_5418_);
lean_dec_ref(v___y_5417_);
lean_dec_ref(v_as_5413_);
return v_res_5427_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__11(void){
_start:
{
lean_object* v___x_5467_; lean_object* v___x_5468_; 
v___x_5467_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__10));
v___x_5468_ = l_String_toRawSubstring_x27(v___x_5467_);
return v___x_5468_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__18(void){
_start:
{
lean_object* v___x_5482_; lean_object* v___x_5483_; 
v___x_5482_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__17));
v___x_5483_ = l_String_toRawSubstring_x27(v___x_5482_);
return v___x_5483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse(lean_object* v_stx_5500_, lean_object* v_dec_5501_, lean_object* v_a_5502_, lean_object* v_a_5503_, lean_object* v_a_5504_, lean_object* v_a_5505_, lean_object* v_a_5506_, lean_object* v_a_5507_, lean_object* v_a_5508_){
_start:
{
lean_object* v___x_5510_; uint8_t v___x_5511_; 
v___x_5510_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__1));
lean_inc(v_stx_5500_);
v___x_5511_ = l_Lean_Syntax_isOfKind(v_stx_5500_, v___x_5510_);
if (v___x_5511_ == 0)
{
lean_object* v___x_5512_; 
lean_dec_ref(v_dec_5501_);
lean_dec(v_stx_5500_);
v___x_5512_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5512_;
}
else
{
uint8_t v___y_5514_; lean_object* v___y_5515_; lean_object* v___y_5516_; lean_object* v___y_5517_; uint8_t v___y_5518_; lean_object* v___y_5519_; lean_object* v_body_5520_; lean_object* v___y_5521_; lean_object* v___y_5522_; lean_object* v___y_5523_; lean_object* v___y_5524_; lean_object* v___y_5525_; lean_object* v___y_5526_; lean_object* v___y_5527_; lean_object* v___y_5601_; lean_object* v___y_5602_; lean_object* v___y_5603_; lean_object* v___y_5604_; lean_object* v___y_5605_; lean_object* v___y_5606_; uint8_t v___y_5607_; lean_object* v___y_5608_; uint8_t v___y_5609_; lean_object* v___y_5610_; lean_object* v___y_5611_; lean_object* v___y_5612_; lean_object* v___y_5613_; lean_object* v___y_5614_; lean_object* v___y_5615_; lean_object* v_a_5616_; lean_object* v___y_5630_; lean_object* v___y_5631_; lean_object* v___y_5632_; lean_object* v___y_5633_; lean_object* v___y_5634_; lean_object* v___y_5635_; uint8_t v___y_5636_; lean_object* v___y_5637_; lean_object* v___y_5638_; lean_object* v___y_5639_; lean_object* v___y_5640_; lean_object* v___y_5641_; lean_object* v___y_5642_; lean_object* v___y_5643_; lean_object* v_mutTk_x3f_5716_; lean_object* v___y_5717_; lean_object* v___y_5718_; lean_object* v___y_5719_; lean_object* v___y_5720_; lean_object* v___y_5721_; lean_object* v___y_5722_; lean_object* v___y_5723_; lean_object* v___x_5747_; lean_object* v___x_5748_; uint8_t v___x_5749_; 
v___x_5747_ = lean_unsigned_to_nat(1u);
v___x_5748_ = l_Lean_Syntax_getArg(v_stx_5500_, v___x_5747_);
v___x_5749_ = l_Lean_Syntax_isNone(v___x_5748_);
if (v___x_5749_ == 0)
{
uint8_t v___x_5750_; 
lean_inc(v___x_5748_);
v___x_5750_ = l_Lean_Syntax_matchesNull(v___x_5748_, v___x_5747_);
if (v___x_5750_ == 0)
{
lean_object* v___x_5751_; 
lean_dec(v___x_5748_);
lean_dec_ref(v_dec_5501_);
lean_dec(v_stx_5500_);
v___x_5751_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5751_;
}
else
{
lean_object* v___x_5752_; lean_object* v_mutTk_x3f_5753_; lean_object* v___x_5754_; 
v___x_5752_ = lean_unsigned_to_nat(0u);
v_mutTk_x3f_5753_ = l_Lean_Syntax_getArg(v___x_5748_, v___x_5752_);
lean_dec(v___x_5748_);
v___x_5754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5754_, 0, v_mutTk_x3f_5753_);
v_mutTk_x3f_5716_ = v___x_5754_;
v___y_5717_ = v_a_5502_;
v___y_5718_ = v_a_5503_;
v___y_5719_ = v_a_5504_;
v___y_5720_ = v_a_5505_;
v___y_5721_ = v_a_5506_;
v___y_5722_ = v_a_5507_;
v___y_5723_ = v_a_5508_;
goto v___jp_5715_;
}
}
else
{
lean_object* v___x_5755_; 
lean_dec(v___x_5748_);
v___x_5755_ = lean_box(0);
v_mutTk_x3f_5716_ = v___x_5755_;
v___y_5717_ = v_a_5502_;
v___y_5718_ = v_a_5503_;
v___y_5719_ = v_a_5504_;
v___y_5720_ = v_a_5505_;
v___y_5721_ = v_a_5506_;
v___y_5722_ = v_a_5507_;
v___y_5723_ = v_a_5508_;
goto v___jp_5715_;
}
v___jp_5513_:
{
lean_object* v_eq_x3f_5528_; 
v_eq_x3f_5528_ = lean_ctor_get(v___y_5515_, 0);
lean_inc(v_eq_x3f_5528_);
lean_dec_ref(v___y_5515_);
if (lean_obj_tag(v_eq_x3f_5528_) == 1)
{
lean_object* v_val_5529_; lean_object* v_ref_5530_; lean_object* v___x_5531_; lean_object* v___x_5532_; lean_object* v___x_5533_; lean_object* v___x_5534_; lean_object* v___x_5535_; lean_object* v___x_5536_; lean_object* v___x_5537_; lean_object* v___x_5538_; lean_object* v___x_5539_; lean_object* v___x_5540_; lean_object* v___x_5541_; lean_object* v___x_5542_; lean_object* v___x_5543_; lean_object* v___x_5544_; lean_object* v___x_5545_; lean_object* v___x_5546_; lean_object* v___x_5547_; lean_object* v___x_5548_; lean_object* v___x_5549_; lean_object* v___x_5550_; lean_object* v___x_5551_; lean_object* v___x_5552_; lean_object* v___x_5553_; lean_object* v___x_5554_; lean_object* v___x_5555_; lean_object* v___x_5556_; lean_object* v___x_5557_; lean_object* v___x_5558_; lean_object* v___x_5559_; lean_object* v___x_5560_; lean_object* v___x_5561_; lean_object* v___x_5562_; lean_object* v___x_5563_; lean_object* v___x_5564_; lean_object* v___x_5565_; 
v_val_5529_ = lean_ctor_get(v_eq_x3f_5528_, 0);
lean_inc(v_val_5529_);
lean_dec_ref_known(v_eq_x3f_5528_, 1);
v_ref_5530_ = lean_ctor_get(v___y_5526_, 2);
v___x_5531_ = l_Lean_SourceInfo_fromRef(v_ref_5530_, v___y_5514_);
v___x_5532_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__3));
v___x_5533_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__10));
lean_inc_n(v___x_5531_, 19);
v___x_5534_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5534_, 0, v___x_5531_);
lean_ctor_set(v___x_5534_, 1, v___x_5533_);
v___x_5535_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5536_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_5537_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5537_, 0, v___x_5531_);
lean_ctor_set(v___x_5537_, 1, v___x_5535_);
lean_ctor_set(v___x_5537_, 2, v___x_5536_);
v___x_5538_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__4));
v___x_5539_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36));
v___x_5540_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5540_, 0, v___x_5531_);
lean_ctor_set(v___x_5540_, 1, v___x_5539_);
v___x_5541_ = l_Lean_Syntax_node2(v___x_5531_, v___x_5535_, v_val_5529_, v___x_5540_);
v___x_5542_ = l_Lean_Syntax_node2(v___x_5531_, v___x_5538_, v___x_5541_, v___y_5519_);
v___x_5543_ = l_Lean_Syntax_node1(v___x_5531_, v___x_5535_, v___x_5542_);
v___x_5544_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__12));
v___x_5545_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5545_, 0, v___x_5531_);
lean_ctor_set(v___x_5545_, 1, v___x_5544_);
v___x_5546_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__5));
v___x_5547_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__6));
v___x_5548_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15));
v___x_5549_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5549_, 0, v___x_5531_);
lean_ctor_set(v___x_5549_, 1, v___x_5548_);
v___x_5550_ = l_Lean_Syntax_node1(v___x_5531_, v___x_5535_, v___y_5516_);
v___x_5551_ = l_Lean_Syntax_node1(v___x_5531_, v___x_5535_, v___x_5550_);
v___x_5552_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__16));
v___x_5553_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5553_, 0, v___x_5531_);
lean_ctor_set(v___x_5553_, 1, v___x_5552_);
lean_inc_ref(v___x_5553_);
lean_inc_ref(v___x_5549_);
v___x_5554_ = l_Lean_Syntax_node4(v___x_5531_, v___x_5547_, v___x_5549_, v___x_5551_, v___x_5553_, v_body_5520_);
v___x_5555_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__7));
v___x_5556_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__21));
v___x_5557_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5557_, 0, v___x_5531_);
lean_ctor_set(v___x_5557_, 1, v___x_5556_);
v___x_5558_ = l_Lean_Syntax_node1(v___x_5531_, v___x_5555_, v___x_5557_);
v___x_5559_ = l_Lean_Syntax_node1(v___x_5531_, v___x_5535_, v___x_5558_);
v___x_5560_ = l_Lean_Syntax_node1(v___x_5531_, v___x_5535_, v___x_5559_);
v___x_5561_ = l_Lean_Syntax_node4(v___x_5531_, v___x_5547_, v___x_5549_, v___x_5560_, v___x_5553_, v___y_5517_);
v___x_5562_ = l_Lean_Syntax_node2(v___x_5531_, v___x_5535_, v___x_5554_, v___x_5561_);
v___x_5563_ = l_Lean_Syntax_node1(v___x_5531_, v___x_5546_, v___x_5562_);
lean_inc_ref_n(v___x_5537_, 2);
v___x_5564_ = l_Lean_Syntax_node7(v___x_5531_, v___x_5532_, v___x_5534_, v___x_5537_, v___x_5537_, v___x_5537_, v___x_5543_, v___x_5545_, v___x_5563_);
v___x_5565_ = l_Lean_Elab_Do_elabDoElem(v___x_5564_, v_dec_5501_, v___y_5518_, v___y_5521_, v___y_5522_, v___y_5523_, v___y_5524_, v___y_5525_, v___y_5526_, v___y_5527_);
return v___x_5565_;
}
else
{
lean_object* v_ref_5566_; lean_object* v___x_5567_; lean_object* v_a_5568_; lean_object* v___x_5569_; lean_object* v___x_5570_; lean_object* v___x_5571_; lean_object* v___x_5572_; lean_object* v___x_5573_; lean_object* v___x_5574_; lean_object* v___x_5575_; lean_object* v___x_5576_; lean_object* v___x_5577_; lean_object* v___x_5578_; lean_object* v___x_5579_; lean_object* v___x_5580_; lean_object* v___x_5581_; lean_object* v___x_5582_; lean_object* v___x_5583_; lean_object* v___x_5584_; lean_object* v___x_5585_; lean_object* v___x_5586_; lean_object* v___x_5587_; lean_object* v___x_5588_; lean_object* v___x_5589_; lean_object* v___x_5590_; lean_object* v___x_5591_; lean_object* v___x_5592_; lean_object* v___x_5593_; lean_object* v___x_5594_; lean_object* v___x_5595_; lean_object* v___x_5596_; lean_object* v___x_5597_; lean_object* v___x_5598_; lean_object* v___x_5599_; 
lean_dec(v_eq_x3f_5528_);
v_ref_5566_ = lean_ctor_get(v___y_5526_, 2);
v___x_5567_ = l_Lean_Elab_Do_elabDoLetElse___lam__0(v_ref_5566_, v___y_5521_, v___y_5522_, v___y_5523_, v___y_5524_, v___y_5525_, v___y_5526_, v___y_5527_);
v_a_5568_ = lean_ctor_get(v___x_5567_, 0);
lean_inc_n(v_a_5568_, 18);
lean_dec_ref(v___x_5567_);
v___x_5569_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__3));
v___x_5570_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__10));
v___x_5571_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5571_, 0, v_a_5568_);
lean_ctor_set(v___x_5571_, 1, v___x_5570_);
v___x_5572_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5573_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_5574_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5574_, 0, v_a_5568_);
lean_ctor_set(v___x_5574_, 1, v___x_5572_);
lean_ctor_set(v___x_5574_, 2, v___x_5573_);
v___x_5575_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__4));
lean_inc_ref_n(v___x_5574_, 3);
v___x_5576_ = l_Lean_Syntax_node2(v_a_5568_, v___x_5575_, v___x_5574_, v___y_5519_);
v___x_5577_ = l_Lean_Syntax_node1(v_a_5568_, v___x_5572_, v___x_5576_);
v___x_5578_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__12));
v___x_5579_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5579_, 0, v_a_5568_);
lean_ctor_set(v___x_5579_, 1, v___x_5578_);
v___x_5580_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__5));
v___x_5581_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__6));
v___x_5582_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15));
v___x_5583_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5583_, 0, v_a_5568_);
lean_ctor_set(v___x_5583_, 1, v___x_5582_);
v___x_5584_ = l_Lean_Syntax_node1(v_a_5568_, v___x_5572_, v___y_5516_);
v___x_5585_ = l_Lean_Syntax_node1(v_a_5568_, v___x_5572_, v___x_5584_);
v___x_5586_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__16));
v___x_5587_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5587_, 0, v_a_5568_);
lean_ctor_set(v___x_5587_, 1, v___x_5586_);
lean_inc_ref(v___x_5587_);
lean_inc_ref(v___x_5583_);
v___x_5588_ = l_Lean_Syntax_node4(v_a_5568_, v___x_5581_, v___x_5583_, v___x_5585_, v___x_5587_, v_body_5520_);
v___x_5589_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__7));
v___x_5590_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__21));
v___x_5591_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5591_, 0, v_a_5568_);
lean_ctor_set(v___x_5591_, 1, v___x_5590_);
v___x_5592_ = l_Lean_Syntax_node1(v_a_5568_, v___x_5589_, v___x_5591_);
v___x_5593_ = l_Lean_Syntax_node1(v_a_5568_, v___x_5572_, v___x_5592_);
v___x_5594_ = l_Lean_Syntax_node1(v_a_5568_, v___x_5572_, v___x_5593_);
v___x_5595_ = l_Lean_Syntax_node4(v_a_5568_, v___x_5581_, v___x_5583_, v___x_5594_, v___x_5587_, v___y_5517_);
v___x_5596_ = l_Lean_Syntax_node2(v_a_5568_, v___x_5572_, v___x_5588_, v___x_5595_);
v___x_5597_ = l_Lean_Syntax_node1(v_a_5568_, v___x_5580_, v___x_5596_);
v___x_5598_ = l_Lean_Syntax_node7(v_a_5568_, v___x_5569_, v___x_5571_, v___x_5574_, v___x_5574_, v___x_5574_, v___x_5577_, v___x_5579_, v___x_5597_);
v___x_5599_ = l_Lean_Elab_Do_elabDoElem(v___x_5598_, v_dec_5501_, v___y_5518_, v___y_5521_, v___y_5522_, v___y_5523_, v___y_5524_, v___y_5525_, v___y_5526_, v___y_5527_);
return v___x_5599_;
}
}
v___jp_5600_:
{
if (lean_obj_tag(v___y_5613_) == 0)
{
lean_dec_ref(v___y_5604_);
v___y_5514_ = v___y_5609_;
v___y_5515_ = v___y_5610_;
v___y_5516_ = v___y_5605_;
v___y_5517_ = v___y_5615_;
v___y_5518_ = v___y_5607_;
v___y_5519_ = v___y_5606_;
v_body_5520_ = v_a_5616_;
v___y_5521_ = v___y_5601_;
v___y_5522_ = v___y_5603_;
v___y_5523_ = v___y_5611_;
v___y_5524_ = v___y_5612_;
v___y_5525_ = v___y_5608_;
v___y_5526_ = v___y_5602_;
v___y_5527_ = v___y_5614_;
goto v___jp_5513_;
}
else
{
size_t v_sz_5617_; size_t v___x_5618_; lean_object* v___x_5619_; 
lean_dec_ref_known(v___y_5613_, 1);
v_sz_5617_ = lean_array_size(v___y_5604_);
v___x_5618_ = ((size_t)0ULL);
v___x_5619_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0(v___y_5604_, v_sz_5617_, v___x_5618_, v_a_5616_, v___y_5601_, v___y_5603_, v___y_5611_, v___y_5612_, v___y_5608_, v___y_5602_, v___y_5614_);
lean_dec_ref(v___y_5604_);
if (lean_obj_tag(v___x_5619_) == 0)
{
lean_object* v_a_5620_; 
v_a_5620_ = lean_ctor_get(v___x_5619_, 0);
lean_inc(v_a_5620_);
lean_dec_ref_known(v___x_5619_, 1);
v___y_5514_ = v___y_5609_;
v___y_5515_ = v___y_5610_;
v___y_5516_ = v___y_5605_;
v___y_5517_ = v___y_5615_;
v___y_5518_ = v___y_5607_;
v___y_5519_ = v___y_5606_;
v_body_5520_ = v_a_5620_;
v___y_5521_ = v___y_5601_;
v___y_5522_ = v___y_5603_;
v___y_5523_ = v___y_5611_;
v___y_5524_ = v___y_5612_;
v___y_5525_ = v___y_5608_;
v___y_5526_ = v___y_5602_;
v___y_5527_ = v___y_5614_;
goto v___jp_5513_;
}
else
{
lean_object* v_a_5621_; lean_object* v___x_5623_; uint8_t v_isShared_5624_; uint8_t v_isSharedCheck_5628_; 
lean_dec(v___y_5615_);
lean_dec_ref(v___y_5610_);
lean_dec(v___y_5606_);
lean_dec(v___y_5605_);
lean_dec_ref(v_dec_5501_);
v_a_5621_ = lean_ctor_get(v___x_5619_, 0);
v_isSharedCheck_5628_ = !lean_is_exclusive(v___x_5619_);
if (v_isSharedCheck_5628_ == 0)
{
v___x_5623_ = v___x_5619_;
v_isShared_5624_ = v_isSharedCheck_5628_;
goto v_resetjp_5622_;
}
else
{
lean_inc(v_a_5621_);
lean_dec(v___x_5619_);
v___x_5623_ = lean_box(0);
v_isShared_5624_ = v_isSharedCheck_5628_;
goto v_resetjp_5622_;
}
v_resetjp_5622_:
{
lean_object* v___x_5626_; 
if (v_isShared_5624_ == 0)
{
v___x_5626_ = v___x_5623_;
goto v_reusejp_5625_;
}
else
{
lean_object* v_reuseFailAlloc_5627_; 
v_reuseFailAlloc_5627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5627_, 0, v_a_5621_);
v___x_5626_ = v_reuseFailAlloc_5627_;
goto v_reusejp_5625_;
}
v_reusejp_5625_:
{
return v___x_5626_;
}
}
}
}
}
v___jp_5629_:
{
lean_object* v___x_5644_; uint8_t v___x_5645_; lean_object* v___x_5646_; lean_object* v___x_5647_; 
v___x_5644_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__4));
v___x_5645_ = 0;
v___x_5646_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__4));
v___x_5647_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut(v___y_5633_, v___y_5640_, v___x_5646_, v___y_5630_, v___y_5632_, v___y_5638_, v___y_5639_, v___y_5637_, v___y_5631_, v___y_5641_);
if (lean_obj_tag(v___x_5647_) == 0)
{
lean_object* v_a_5648_; lean_object* v___x_5649_; 
v_a_5648_ = lean_ctor_get(v___x_5647_, 0);
lean_inc(v_a_5648_);
lean_dec_ref_known(v___x_5647_, 1);
v___x_5649_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg(v_a_5648_, v___y_5639_, v___y_5637_, v___y_5631_, v___y_5641_);
if (lean_obj_tag(v___x_5649_) == 0)
{
lean_object* v___x_5650_; lean_object* v___x_5651_; 
lean_dec_ref_known(v___x_5649_, 1);
lean_inc(v___y_5640_);
v___x_5650_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5650_, 0, v___y_5640_);
lean_ctor_set_uint8(v___x_5650_, sizeof(void*)*1, v___x_5645_);
lean_inc(v___y_5634_);
v___x_5651_ = l_Lean_Elab_Do_getPatternVarsEx(v___y_5634_, v___y_5632_, v___y_5638_, v___y_5639_, v___y_5637_, v___y_5631_, v___y_5641_);
if (lean_obj_tag(v___x_5651_) == 0)
{
lean_object* v_a_5652_; lean_object* v___x_5653_; 
v_a_5652_ = lean_ctor_get(v___x_5651_, 0);
lean_inc(v_a_5652_);
lean_dec_ref_known(v___x_5651_, 1);
v___x_5653_ = l_Lean_Elab_Do_LetOrReassign_checkMutVars(v___x_5650_, v_a_5652_, v___y_5630_, v___y_5632_, v___y_5638_, v___y_5639_, v___y_5637_, v___y_5631_, v___y_5641_);
lean_dec_ref_known(v___x_5650_, 1);
if (lean_obj_tag(v___x_5653_) == 0)
{
lean_dec_ref_known(v___x_5653_, 1);
if (lean_obj_tag(v___y_5643_) == 0)
{
lean_object* v_toCold_5654_; lean_object* v_ref_5655_; lean_object* v___x_5656_; lean_object* v_a_5657_; lean_object* v_quotContext_5658_; lean_object* v_currMacroScope_5659_; lean_object* v___x_5660_; lean_object* v___x_5661_; lean_object* v___x_5662_; lean_object* v___x_5663_; lean_object* v___x_5664_; lean_object* v___x_5665_; lean_object* v___x_5666_; lean_object* v___x_5667_; lean_object* v___x_5668_; lean_object* v___x_5669_; lean_object* v___x_5670_; lean_object* v___x_5671_; lean_object* v___x_5672_; lean_object* v___x_5673_; lean_object* v___x_5674_; lean_object* v___x_5675_; lean_object* v___x_5676_; lean_object* v___x_5677_; lean_object* v___x_5678_; lean_object* v___x_5679_; lean_object* v___x_5680_; lean_object* v___x_5681_; 
v_toCold_5654_ = lean_ctor_get(v___y_5631_, 0);
v_ref_5655_ = lean_ctor_get(v___y_5631_, 2);
v___x_5656_ = l_Lean_Elab_Do_elabDoLetElse___lam__0(v_ref_5655_, v___y_5630_, v___y_5632_, v___y_5638_, v___y_5639_, v___y_5637_, v___y_5631_, v___y_5641_);
v_a_5657_ = lean_ctor_get(v___x_5656_, 0);
lean_inc_n(v_a_5657_, 9);
lean_dec_ref(v___x_5656_);
v_quotContext_5658_ = lean_ctor_get(v_toCold_5654_, 8);
v_currMacroScope_5659_ = lean_ctor_get(v_toCold_5654_, 9);
v___x_5660_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5661_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__6));
v___x_5662_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__9));
v___x_5663_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1));
v___x_5664_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__11, &l_Lean_Elab_Do_elabDoLetElse___closed__11_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__11);
v___x_5665_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__12));
lean_inc_n(v_currMacroScope_5659_, 2);
lean_inc_n(v_quotContext_5658_, 2);
v___x_5666_ = l_Lean_addMacroScope(v_quotContext_5658_, v___x_5665_, v_currMacroScope_5659_);
v___x_5667_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__16));
v___x_5668_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5668_, 0, v_a_5657_);
lean_ctor_set(v___x_5668_, 1, v___x_5664_);
lean_ctor_set(v___x_5668_, 2, v___x_5666_);
lean_ctor_set(v___x_5668_, 3, v___x_5667_);
v___x_5669_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__18, &l_Lean_Elab_Do_elabDoLetElse___closed__18_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__18);
v___x_5670_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__21));
v___x_5671_ = l_Lean_addMacroScope(v_quotContext_5658_, v___x_5670_, v_currMacroScope_5659_);
v___x_5672_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__25));
v___x_5673_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5673_, 0, v_a_5657_);
lean_ctor_set(v___x_5673_, 1, v___x_5669_);
lean_ctor_set(v___x_5673_, 2, v___x_5671_);
lean_ctor_set(v___x_5673_, 3, v___x_5672_);
v___x_5674_ = l_Lean_Syntax_node1(v_a_5657_, v___x_5660_, v___x_5673_);
v___x_5675_ = l_Lean_Syntax_node2(v_a_5657_, v___x_5663_, v___x_5668_, v___x_5674_);
v___x_5676_ = l_Lean_Syntax_node1(v_a_5657_, v___x_5662_, v___x_5675_);
v___x_5677_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_5678_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5678_, 0, v_a_5657_);
lean_ctor_set(v___x_5678_, 1, v___x_5660_);
lean_ctor_set(v___x_5678_, 2, v___x_5677_);
v___x_5679_ = l_Lean_Syntax_node2(v_a_5657_, v___x_5661_, v___x_5676_, v___x_5678_);
v___x_5680_ = l_Lean_Syntax_node1(v_a_5657_, v___x_5660_, v___x_5679_);
v___x_5681_ = l_Lean_Syntax_node1(v_a_5657_, v___x_5644_, v___x_5680_);
v___y_5601_ = v___y_5630_;
v___y_5602_ = v___y_5631_;
v___y_5603_ = v___y_5632_;
v___y_5604_ = v_a_5652_;
v___y_5605_ = v___y_5634_;
v___y_5606_ = v___y_5635_;
v___y_5607_ = v___y_5636_;
v___y_5608_ = v___y_5637_;
v___y_5609_ = v___x_5645_;
v___y_5610_ = v_a_5648_;
v___y_5611_ = v___y_5638_;
v___y_5612_ = v___y_5639_;
v___y_5613_ = v___y_5640_;
v___y_5614_ = v___y_5641_;
v___y_5615_ = v___y_5642_;
v_a_5616_ = v___x_5681_;
goto v___jp_5600_;
}
else
{
lean_object* v_val_5682_; 
v_val_5682_ = lean_ctor_get(v___y_5643_, 0);
lean_inc(v_val_5682_);
lean_dec_ref_known(v___y_5643_, 1);
v___y_5601_ = v___y_5630_;
v___y_5602_ = v___y_5631_;
v___y_5603_ = v___y_5632_;
v___y_5604_ = v_a_5652_;
v___y_5605_ = v___y_5634_;
v___y_5606_ = v___y_5635_;
v___y_5607_ = v___y_5636_;
v___y_5608_ = v___y_5637_;
v___y_5609_ = v___x_5645_;
v___y_5610_ = v_a_5648_;
v___y_5611_ = v___y_5638_;
v___y_5612_ = v___y_5639_;
v___y_5613_ = v___y_5640_;
v___y_5614_ = v___y_5641_;
v___y_5615_ = v___y_5642_;
v_a_5616_ = v_val_5682_;
goto v___jp_5600_;
}
}
else
{
lean_object* v_a_5683_; lean_object* v___x_5685_; uint8_t v_isShared_5686_; uint8_t v_isSharedCheck_5690_; 
lean_dec(v_a_5652_);
lean_dec(v_a_5648_);
lean_dec(v___y_5643_);
lean_dec(v___y_5642_);
lean_dec(v___y_5640_);
lean_dec(v___y_5635_);
lean_dec(v___y_5634_);
lean_dec_ref(v_dec_5501_);
v_a_5683_ = lean_ctor_get(v___x_5653_, 0);
v_isSharedCheck_5690_ = !lean_is_exclusive(v___x_5653_);
if (v_isSharedCheck_5690_ == 0)
{
v___x_5685_ = v___x_5653_;
v_isShared_5686_ = v_isSharedCheck_5690_;
goto v_resetjp_5684_;
}
else
{
lean_inc(v_a_5683_);
lean_dec(v___x_5653_);
v___x_5685_ = lean_box(0);
v_isShared_5686_ = v_isSharedCheck_5690_;
goto v_resetjp_5684_;
}
v_resetjp_5684_:
{
lean_object* v___x_5688_; 
if (v_isShared_5686_ == 0)
{
v___x_5688_ = v___x_5685_;
goto v_reusejp_5687_;
}
else
{
lean_object* v_reuseFailAlloc_5689_; 
v_reuseFailAlloc_5689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5689_, 0, v_a_5683_);
v___x_5688_ = v_reuseFailAlloc_5689_;
goto v_reusejp_5687_;
}
v_reusejp_5687_:
{
return v___x_5688_;
}
}
}
}
else
{
lean_object* v_a_5691_; lean_object* v___x_5693_; uint8_t v_isShared_5694_; uint8_t v_isSharedCheck_5698_; 
lean_dec_ref_known(v___x_5650_, 1);
lean_dec(v_a_5648_);
lean_dec(v___y_5643_);
lean_dec(v___y_5642_);
lean_dec(v___y_5640_);
lean_dec(v___y_5635_);
lean_dec(v___y_5634_);
lean_dec_ref(v_dec_5501_);
v_a_5691_ = lean_ctor_get(v___x_5651_, 0);
v_isSharedCheck_5698_ = !lean_is_exclusive(v___x_5651_);
if (v_isSharedCheck_5698_ == 0)
{
v___x_5693_ = v___x_5651_;
v_isShared_5694_ = v_isSharedCheck_5698_;
goto v_resetjp_5692_;
}
else
{
lean_inc(v_a_5691_);
lean_dec(v___x_5651_);
v___x_5693_ = lean_box(0);
v_isShared_5694_ = v_isSharedCheck_5698_;
goto v_resetjp_5692_;
}
v_resetjp_5692_:
{
lean_object* v___x_5696_; 
if (v_isShared_5694_ == 0)
{
v___x_5696_ = v___x_5693_;
goto v_reusejp_5695_;
}
else
{
lean_object* v_reuseFailAlloc_5697_; 
v_reuseFailAlloc_5697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5697_, 0, v_a_5691_);
v___x_5696_ = v_reuseFailAlloc_5697_;
goto v_reusejp_5695_;
}
v_reusejp_5695_:
{
return v___x_5696_;
}
}
}
}
else
{
lean_object* v_a_5699_; lean_object* v___x_5701_; uint8_t v_isShared_5702_; uint8_t v_isSharedCheck_5706_; 
lean_dec(v_a_5648_);
lean_dec(v___y_5643_);
lean_dec(v___y_5642_);
lean_dec(v___y_5640_);
lean_dec(v___y_5635_);
lean_dec(v___y_5634_);
lean_dec_ref(v_dec_5501_);
v_a_5699_ = lean_ctor_get(v___x_5649_, 0);
v_isSharedCheck_5706_ = !lean_is_exclusive(v___x_5649_);
if (v_isSharedCheck_5706_ == 0)
{
v___x_5701_ = v___x_5649_;
v_isShared_5702_ = v_isSharedCheck_5706_;
goto v_resetjp_5700_;
}
else
{
lean_inc(v_a_5699_);
lean_dec(v___x_5649_);
v___x_5701_ = lean_box(0);
v_isShared_5702_ = v_isSharedCheck_5706_;
goto v_resetjp_5700_;
}
v_resetjp_5700_:
{
lean_object* v___x_5704_; 
if (v_isShared_5702_ == 0)
{
v___x_5704_ = v___x_5701_;
goto v_reusejp_5703_;
}
else
{
lean_object* v_reuseFailAlloc_5705_; 
v_reuseFailAlloc_5705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5705_, 0, v_a_5699_);
v___x_5704_ = v_reuseFailAlloc_5705_;
goto v_reusejp_5703_;
}
v_reusejp_5703_:
{
return v___x_5704_;
}
}
}
}
else
{
lean_object* v_a_5707_; lean_object* v___x_5709_; uint8_t v_isShared_5710_; uint8_t v_isSharedCheck_5714_; 
lean_dec(v___y_5643_);
lean_dec(v___y_5642_);
lean_dec(v___y_5640_);
lean_dec(v___y_5635_);
lean_dec(v___y_5634_);
lean_dec_ref(v_dec_5501_);
v_a_5707_ = lean_ctor_get(v___x_5647_, 0);
v_isSharedCheck_5714_ = !lean_is_exclusive(v___x_5647_);
if (v_isSharedCheck_5714_ == 0)
{
v___x_5709_ = v___x_5647_;
v_isShared_5710_ = v_isSharedCheck_5714_;
goto v_resetjp_5708_;
}
else
{
lean_inc(v_a_5707_);
lean_dec(v___x_5647_);
v___x_5709_ = lean_box(0);
v_isShared_5710_ = v_isSharedCheck_5714_;
goto v_resetjp_5708_;
}
v_resetjp_5708_:
{
lean_object* v___x_5712_; 
if (v_isShared_5710_ == 0)
{
v___x_5712_ = v___x_5709_;
goto v_reusejp_5711_;
}
else
{
lean_object* v_reuseFailAlloc_5713_; 
v_reuseFailAlloc_5713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5713_, 0, v_a_5707_);
v___x_5712_ = v_reuseFailAlloc_5713_;
goto v_reusejp_5711_;
}
v_reusejp_5711_:
{
return v___x_5712_;
}
}
}
}
v___jp_5715_:
{
lean_object* v___x_5724_; lean_object* v_cfg_5725_; lean_object* v___x_5726_; uint8_t v___x_5727_; 
v___x_5724_ = lean_unsigned_to_nat(2u);
v_cfg_5725_ = l_Lean_Syntax_getArg(v_stx_5500_, v___x_5724_);
v___x_5726_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__3));
lean_inc(v_cfg_5725_);
v___x_5727_ = l_Lean_Syntax_isOfKind(v_cfg_5725_, v___x_5726_);
if (v___x_5727_ == 0)
{
lean_object* v___x_5728_; 
lean_dec(v_cfg_5725_);
lean_dec(v_mutTk_x3f_5716_);
lean_dec_ref(v_dec_5501_);
lean_dec(v_stx_5500_);
v___x_5728_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5728_;
}
else
{
lean_object* v___x_5729_; lean_object* v_pattern_5730_; lean_object* v___x_5731_; lean_object* v___x_5732_; lean_object* v___x_5733_; lean_object* v___x_5734_; lean_object* v___x_5735_; lean_object* v___x_5736_; lean_object* v___x_5737_; 
v___x_5729_ = lean_unsigned_to_nat(3u);
v_pattern_5730_ = l_Lean_Syntax_getArg(v_stx_5500_, v___x_5729_);
v___x_5731_ = lean_unsigned_to_nat(5u);
v___x_5732_ = l_Lean_Syntax_getArg(v_stx_5500_, v___x_5731_);
v___x_5733_ = lean_unsigned_to_nat(7u);
v___x_5734_ = l_Lean_Syntax_getArg(v_stx_5500_, v___x_5733_);
v___x_5735_ = lean_unsigned_to_nat(8u);
v___x_5736_ = l_Lean_Syntax_getArg(v_stx_5500_, v___x_5735_);
lean_dec(v_stx_5500_);
v___x_5737_ = l_Lean_Syntax_getOptional_x3f(v___x_5736_);
lean_dec(v___x_5736_);
if (lean_obj_tag(v___x_5737_) == 0)
{
lean_object* v___x_5738_; 
v___x_5738_ = lean_box(0);
v___y_5630_ = v___y_5717_;
v___y_5631_ = v___y_5722_;
v___y_5632_ = v___y_5718_;
v___y_5633_ = v_cfg_5725_;
v___y_5634_ = v_pattern_5730_;
v___y_5635_ = v___x_5732_;
v___y_5636_ = v___x_5727_;
v___y_5637_ = v___y_5721_;
v___y_5638_ = v___y_5719_;
v___y_5639_ = v___y_5720_;
v___y_5640_ = v_mutTk_x3f_5716_;
v___y_5641_ = v___y_5723_;
v___y_5642_ = v___x_5734_;
v___y_5643_ = v___x_5738_;
goto v___jp_5629_;
}
else
{
lean_object* v_val_5739_; lean_object* v___x_5741_; uint8_t v_isShared_5742_; uint8_t v_isSharedCheck_5746_; 
v_val_5739_ = lean_ctor_get(v___x_5737_, 0);
v_isSharedCheck_5746_ = !lean_is_exclusive(v___x_5737_);
if (v_isSharedCheck_5746_ == 0)
{
v___x_5741_ = v___x_5737_;
v_isShared_5742_ = v_isSharedCheck_5746_;
goto v_resetjp_5740_;
}
else
{
lean_inc(v_val_5739_);
lean_dec(v___x_5737_);
v___x_5741_ = lean_box(0);
v_isShared_5742_ = v_isSharedCheck_5746_;
goto v_resetjp_5740_;
}
v_resetjp_5740_:
{
lean_object* v___x_5744_; 
if (v_isShared_5742_ == 0)
{
v___x_5744_ = v___x_5741_;
goto v_reusejp_5743_;
}
else
{
lean_object* v_reuseFailAlloc_5745_; 
v_reuseFailAlloc_5745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5745_, 0, v_val_5739_);
v___x_5744_ = v_reuseFailAlloc_5745_;
goto v_reusejp_5743_;
}
v_reusejp_5743_:
{
v___y_5630_ = v___y_5717_;
v___y_5631_ = v___y_5722_;
v___y_5632_ = v___y_5718_;
v___y_5633_ = v_cfg_5725_;
v___y_5634_ = v_pattern_5730_;
v___y_5635_ = v___x_5732_;
v___y_5636_ = v___x_5727_;
v___y_5637_ = v___y_5721_;
v___y_5638_ = v___y_5719_;
v___y_5639_ = v___y_5720_;
v___y_5640_ = v_mutTk_x3f_5716_;
v___y_5641_ = v___y_5723_;
v___y_5642_ = v___x_5734_;
v___y_5643_ = v___x_5744_;
goto v___jp_5629_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse___boxed(lean_object* v_stx_5756_, lean_object* v_dec_5757_, lean_object* v_a_5758_, lean_object* v_a_5759_, lean_object* v_a_5760_, lean_object* v_a_5761_, lean_object* v_a_5762_, lean_object* v_a_5763_, lean_object* v_a_5764_, lean_object* v_a_5765_){
_start:
{
lean_object* v_res_5766_; 
v_res_5766_ = l_Lean_Elab_Do_elabDoLetElse(v_stx_5756_, v_dec_5757_, v_a_5758_, v_a_5759_, v_a_5760_, v_a_5761_, v_a_5762_, v_a_5763_, v_a_5764_);
lean_dec(v_a_5764_);
lean_dec_ref(v_a_5763_);
lean_dec(v_a_5762_);
lean_dec_ref(v_a_5761_);
lean_dec(v_a_5760_);
lean_dec_ref(v_a_5759_);
lean_dec_ref(v_a_5758_);
return v_res_5766_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0(lean_object* v_as_5767_, size_t v_sz_5768_, size_t v_i_5769_, lean_object* v_b_5770_, lean_object* v___y_5771_, lean_object* v___y_5772_, lean_object* v___y_5773_, lean_object* v___y_5774_, lean_object* v___y_5775_, lean_object* v___y_5776_, lean_object* v___y_5777_){
_start:
{
lean_object* v___x_5779_; 
v___x_5779_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg(v_as_5767_, v_sz_5768_, v_i_5769_, v_b_5770_, v___y_5776_);
return v___x_5779_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___boxed(lean_object* v_as_5780_, lean_object* v_sz_5781_, lean_object* v_i_5782_, lean_object* v_b_5783_, lean_object* v___y_5784_, lean_object* v___y_5785_, lean_object* v___y_5786_, lean_object* v___y_5787_, lean_object* v___y_5788_, lean_object* v___y_5789_, lean_object* v___y_5790_, lean_object* v___y_5791_){
_start:
{
size_t v_sz_boxed_5792_; size_t v_i_boxed_5793_; lean_object* v_res_5794_; 
v_sz_boxed_5792_ = lean_unbox_usize(v_sz_5781_);
lean_dec(v_sz_5781_);
v_i_boxed_5793_ = lean_unbox_usize(v_i_5782_);
lean_dec(v_i_5782_);
v_res_5794_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0(v_as_5780_, v_sz_boxed_5792_, v_i_boxed_5793_, v_b_5783_, v___y_5784_, v___y_5785_, v___y_5786_, v___y_5787_, v___y_5788_, v___y_5789_, v___y_5790_);
lean_dec(v___y_5790_);
lean_dec_ref(v___y_5789_);
lean_dec(v___y_5788_);
lean_dec_ref(v___y_5787_);
lean_dec(v___y_5786_);
lean_dec_ref(v___y_5785_);
lean_dec_ref(v___y_5784_);
lean_dec_ref(v_as_5780_);
return v_res_5794_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1(){
_start:
{
lean_object* v___x_5802_; lean_object* v___x_5803_; lean_object* v___x_5804_; lean_object* v___x_5805_; lean_object* v___x_5806_; 
v___x_5802_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_5803_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__1));
v___x_5804_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1));
v___x_5805_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetElse___boxed), 10, 0);
v___x_5806_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5802_, v___x_5803_, v___x_5804_, v___x_5805_);
return v___x_5806_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___boxed(lean_object* v_a_5807_){
_start:
{
lean_object* v_res_5808_; 
v_res_5808_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1();
return v_res_5808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___lam__0(lean_object* v_otherwise_x3f_5809_, uint8_t v___x_5810_, lean_object* v___x_5811_, lean_object* v___x_5812_, lean_object* v___x_5813_, lean_object* v___x_5814_, lean_object* v___x_5815_, lean_object* v___x_5816_, lean_object* v_dec_5817_, uint8_t v___x_5818_, lean_object* v_mutTk_x3f_5819_, lean_object* v___x_5820_, lean_object* v___y_5821_, lean_object* v___y_5822_, lean_object* v___y_5823_, lean_object* v___y_5824_, lean_object* v___y_5825_, lean_object* v___y_5826_, lean_object* v___y_5827_, lean_object* v___y_5828_){
_start:
{
if (lean_obj_tag(v_otherwise_x3f_5809_) == 0)
{
lean_object* v_ref_5830_; lean_object* v___x_5831_; lean_object* v___x_5832_; lean_object* v___x_5833_; lean_object* v___x_5834_; lean_object* v___x_5835_; lean_object* v___x_5836_; lean_object* v___x_5837_; lean_object* v___y_5839_; 
lean_dec(v___y_5821_);
v_ref_5830_ = lean_ctor_get(v___y_5827_, 2);
v___x_5831_ = l_Lean_SourceInfo_fromRef(v_ref_5830_, v___x_5810_);
v___x_5832_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__0));
lean_inc_ref(v___x_5813_);
lean_inc_ref(v___x_5812_);
lean_inc_ref(v___x_5811_);
v___x_5833_ = l_Lean_Name_mkStr4(v___x_5811_, v___x_5812_, v___x_5813_, v___x_5832_);
v___x_5834_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
lean_inc(v___x_5831_);
v___x_5835_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5835_, 0, v___x_5831_);
lean_ctor_set(v___x_5835_, 1, v___x_5834_);
v___x_5836_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5837_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
if (lean_obj_tag(v_mutTk_x3f_5819_) == 1)
{
lean_object* v_val_5854_; lean_object* v___x_5855_; lean_object* v___x_5856_; lean_object* v___x_5857_; lean_object* v___x_5858_; 
v_val_5854_ = lean_ctor_get(v_mutTk_x3f_5819_, 0);
v___x_5855_ = l_Lean_SourceInfo_fromRef(v_val_5854_, v___x_5818_);
v___x_5856_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__11));
v___x_5857_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5857_, 0, v___x_5855_);
lean_ctor_set(v___x_5857_, 1, v___x_5856_);
v___x_5858_ = l_Array_mkArray1___redArg(v___x_5857_);
v___y_5839_ = v___x_5858_;
goto v___jp_5838_;
}
else
{
lean_object* v___x_5859_; 
v___x_5859_ = lean_mk_empty_array_with_capacity(v___x_5820_);
v___y_5839_ = v___x_5859_;
goto v___jp_5838_;
}
v___jp_5838_:
{
lean_object* v___x_5840_; lean_object* v___x_5841_; lean_object* v___x_5842_; lean_object* v___x_5843_; lean_object* v___x_5844_; lean_object* v___x_5845_; lean_object* v___x_5846_; lean_object* v___x_5847_; lean_object* v___x_5848_; lean_object* v___x_5849_; lean_object* v___x_5850_; lean_object* v___x_5851_; lean_object* v___x_5852_; lean_object* v___x_5853_; 
v___x_5840_ = l_Array_append___redArg(v___x_5837_, v___y_5839_);
lean_dec_ref(v___y_5839_);
lean_inc_n(v___x_5831_, 6);
v___x_5841_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5841_, 0, v___x_5831_);
lean_ctor_set(v___x_5841_, 1, v___x_5836_);
lean_ctor_set(v___x_5841_, 2, v___x_5840_);
v___x_5842_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5842_, 0, v___x_5831_);
lean_ctor_set(v___x_5842_, 1, v___x_5836_);
lean_ctor_set(v___x_5842_, 2, v___x_5837_);
lean_inc_ref_n(v___x_5842_, 2);
v___x_5843_ = l_Lean_Syntax_node1(v___x_5831_, v___x_5814_, v___x_5842_);
v___x_5844_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3));
lean_inc_ref(v___x_5813_);
lean_inc_ref(v___x_5812_);
lean_inc_ref(v___x_5811_);
v___x_5845_ = l_Lean_Name_mkStr4(v___x_5811_, v___x_5812_, v___x_5813_, v___x_5844_);
v___x_5846_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9));
v___x_5847_ = l_Lean_Name_mkStr4(v___x_5811_, v___x_5812_, v___x_5813_, v___x_5846_);
v___x_5848_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_5849_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5849_, 0, v___x_5831_);
lean_ctor_set(v___x_5849_, 1, v___x_5848_);
v___x_5850_ = l_Lean_Syntax_node5(v___x_5831_, v___x_5847_, v___x_5815_, v___x_5842_, v___x_5842_, v___x_5849_, v___x_5816_);
v___x_5851_ = l_Lean_Syntax_node1(v___x_5831_, v___x_5845_, v___x_5850_);
v___x_5852_ = l_Lean_Syntax_node4(v___x_5831_, v___x_5833_, v___x_5835_, v___x_5841_, v___x_5843_, v___x_5851_);
v___x_5853_ = l_Lean_Elab_Do_elabDoElem(v___x_5852_, v_dec_5817_, v___x_5818_, v___y_5822_, v___y_5823_, v___y_5824_, v___y_5825_, v___y_5826_, v___y_5827_, v___y_5828_);
return v___x_5853_;
}
}
else
{
lean_object* v_val_5860_; lean_object* v_ref_5861_; lean_object* v___x_5862_; lean_object* v___x_5863_; lean_object* v___x_5864_; lean_object* v___x_5865_; lean_object* v___x_5866_; lean_object* v___x_5867_; lean_object* v___x_5868_; lean_object* v___y_5870_; lean_object* v___y_5871_; lean_object* v___y_5872_; lean_object* v___y_5873_; lean_object* v___y_5874_; lean_object* v___y_5891_; 
v_val_5860_ = lean_ctor_get(v_otherwise_x3f_5809_, 0);
lean_inc(v_val_5860_);
lean_dec_ref_known(v_otherwise_x3f_5809_, 1);
v_ref_5861_ = lean_ctor_get(v___y_5827_, 2);
v___x_5862_ = l_Lean_SourceInfo_fromRef(v_ref_5861_, v___x_5810_);
v___x_5863_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__0));
v___x_5864_ = l_Lean_Name_mkStr4(v___x_5811_, v___x_5812_, v___x_5813_, v___x_5863_);
v___x_5865_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
lean_inc(v___x_5862_);
v___x_5866_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5866_, 0, v___x_5862_);
lean_ctor_set(v___x_5866_, 1, v___x_5865_);
v___x_5867_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5868_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
if (lean_obj_tag(v_mutTk_x3f_5819_) == 1)
{
lean_object* v_val_5904_; lean_object* v___x_5905_; lean_object* v___x_5906_; lean_object* v___x_5907_; lean_object* v___x_5908_; 
v_val_5904_ = lean_ctor_get(v_mutTk_x3f_5819_, 0);
v___x_5905_ = l_Lean_SourceInfo_fromRef(v_val_5904_, v___x_5818_);
v___x_5906_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__11));
v___x_5907_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5907_, 0, v___x_5905_);
lean_ctor_set(v___x_5907_, 1, v___x_5906_);
v___x_5908_ = l_Array_mkArray1___redArg(v___x_5907_);
v___y_5891_ = v___x_5908_;
goto v___jp_5890_;
}
else
{
lean_object* v___x_5909_; 
v___x_5909_ = lean_mk_empty_array_with_capacity(v___x_5820_);
v___y_5891_ = v___x_5909_;
goto v___jp_5890_;
}
v___jp_5869_:
{
lean_object* v___x_5875_; lean_object* v___x_5876_; lean_object* v___x_5877_; lean_object* v___x_5878_; lean_object* v___x_5879_; lean_object* v___x_5880_; lean_object* v___x_5881_; lean_object* v___x_5882_; lean_object* v___x_5883_; lean_object* v___x_5884_; lean_object* v___x_5885_; lean_object* v___x_5886_; lean_object* v___x_5887_; lean_object* v___x_5888_; lean_object* v___x_5889_; 
v___x_5875_ = l_Array_append___redArg(v___x_5868_, v___y_5874_);
lean_dec_ref(v___y_5874_);
lean_inc(v___x_5862_);
v___x_5876_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5876_, 0, v___x_5862_);
lean_ctor_set(v___x_5876_, 1, v___x_5867_);
lean_ctor_set(v___x_5876_, 2, v___x_5875_);
v___x_5877_ = lean_unsigned_to_nat(9u);
v___x_5878_ = lean_mk_empty_array_with_capacity(v___x_5877_);
v___x_5879_ = lean_array_push(v___x_5878_, v___x_5866_);
v___x_5880_ = lean_array_push(v___x_5879_, v___y_5873_);
v___x_5881_ = lean_array_push(v___x_5880_, v___y_5871_);
v___x_5882_ = lean_array_push(v___x_5881_, v___x_5815_);
v___x_5883_ = lean_array_push(v___x_5882_, v___y_5872_);
v___x_5884_ = lean_array_push(v___x_5883_, v___x_5816_);
v___x_5885_ = lean_array_push(v___x_5884_, v___y_5870_);
v___x_5886_ = lean_array_push(v___x_5885_, v_val_5860_);
v___x_5887_ = lean_array_push(v___x_5886_, v___x_5876_);
v___x_5888_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5888_, 0, v___x_5862_);
lean_ctor_set(v___x_5888_, 1, v___x_5864_);
lean_ctor_set(v___x_5888_, 2, v___x_5887_);
v___x_5889_ = l_Lean_Elab_Do_elabDoElem(v___x_5888_, v_dec_5817_, v___x_5818_, v___y_5822_, v___y_5823_, v___y_5824_, v___y_5825_, v___y_5826_, v___y_5827_, v___y_5828_);
return v___x_5889_;
}
v___jp_5890_:
{
lean_object* v___x_5892_; lean_object* v___x_5893_; lean_object* v___x_5894_; lean_object* v___x_5895_; lean_object* v___x_5896_; lean_object* v___x_5897_; lean_object* v___x_5898_; lean_object* v___x_5899_; 
v___x_5892_ = l_Array_append___redArg(v___x_5868_, v___y_5891_);
lean_dec_ref(v___y_5891_);
lean_inc_n(v___x_5862_, 5);
v___x_5893_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5893_, 0, v___x_5862_);
lean_ctor_set(v___x_5893_, 1, v___x_5867_);
lean_ctor_set(v___x_5893_, 2, v___x_5892_);
v___x_5894_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5894_, 0, v___x_5862_);
lean_ctor_set(v___x_5894_, 1, v___x_5867_);
lean_ctor_set(v___x_5894_, 2, v___x_5868_);
v___x_5895_ = l_Lean_Syntax_node1(v___x_5862_, v___x_5814_, v___x_5894_);
v___x_5896_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_5897_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5897_, 0, v___x_5862_);
lean_ctor_set(v___x_5897_, 1, v___x_5896_);
v___x_5898_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15));
v___x_5899_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5899_, 0, v___x_5862_);
lean_ctor_set(v___x_5899_, 1, v___x_5898_);
if (lean_obj_tag(v___y_5821_) == 0)
{
lean_object* v___x_5900_; 
v___x_5900_ = lean_mk_empty_array_with_capacity(v___x_5820_);
v___y_5870_ = v___x_5899_;
v___y_5871_ = v___x_5895_;
v___y_5872_ = v___x_5897_;
v___y_5873_ = v___x_5893_;
v___y_5874_ = v___x_5900_;
goto v___jp_5869_;
}
else
{
lean_object* v_val_5901_; lean_object* v___x_5902_; lean_object* v___x_5903_; 
v_val_5901_ = lean_ctor_get(v___y_5821_, 0);
lean_inc(v_val_5901_);
lean_dec_ref_known(v___y_5821_, 1);
v___x_5902_ = lean_mk_empty_array_with_capacity(v___x_5820_);
v___x_5903_ = lean_array_push(v___x_5902_, v_val_5901_);
v___y_5870_ = v___x_5899_;
v___y_5871_ = v___x_5895_;
v___y_5872_ = v___x_5897_;
v___y_5873_ = v___x_5893_;
v___y_5874_ = v___x_5903_;
goto v___jp_5869_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___lam__0___boxed(lean_object** _args){
lean_object* v_otherwise_x3f_5910_ = _args[0];
lean_object* v___x_5911_ = _args[1];
lean_object* v___x_5912_ = _args[2];
lean_object* v___x_5913_ = _args[3];
lean_object* v___x_5914_ = _args[4];
lean_object* v___x_5915_ = _args[5];
lean_object* v___x_5916_ = _args[6];
lean_object* v___x_5917_ = _args[7];
lean_object* v_dec_5918_ = _args[8];
lean_object* v___x_5919_ = _args[9];
lean_object* v_mutTk_x3f_5920_ = _args[10];
lean_object* v___x_5921_ = _args[11];
lean_object* v___y_5922_ = _args[12];
lean_object* v___y_5923_ = _args[13];
lean_object* v___y_5924_ = _args[14];
lean_object* v___y_5925_ = _args[15];
lean_object* v___y_5926_ = _args[16];
lean_object* v___y_5927_ = _args[17];
lean_object* v___y_5928_ = _args[18];
lean_object* v___y_5929_ = _args[19];
lean_object* v___y_5930_ = _args[20];
_start:
{
uint8_t v___x_27024__boxed_5931_; uint8_t v___x_27031__boxed_5932_; lean_object* v_res_5933_; 
v___x_27024__boxed_5931_ = lean_unbox(v___x_5911_);
v___x_27031__boxed_5932_ = lean_unbox(v___x_5919_);
v_res_5933_ = l_Lean_Elab_Do_elabDoLetArrow___lam__0(v_otherwise_x3f_5910_, v___x_27024__boxed_5931_, v___x_5912_, v___x_5913_, v___x_5914_, v___x_5915_, v___x_5916_, v___x_5917_, v_dec_5918_, v___x_27031__boxed_5932_, v_mutTk_x3f_5920_, v___x_5921_, v___y_5922_, v___y_5923_, v___y_5924_, v___y_5925_, v___y_5926_, v___y_5927_, v___y_5928_, v___y_5929_);
lean_dec(v___y_5929_);
lean_dec_ref(v___y_5928_);
lean_dec(v___y_5927_);
lean_dec_ref(v___y_5926_);
lean_dec(v___y_5925_);
lean_dec_ref(v___y_5924_);
lean_dec_ref(v___y_5923_);
lean_dec(v___x_5921_);
lean_dec(v_mutTk_x3f_5920_);
return v_res_5933_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___lam__1(lean_object* v_otherwise_x3f_5934_, uint8_t v___x_5935_, lean_object* v___x_5936_, lean_object* v___x_5937_, lean_object* v___x_5938_, lean_object* v___x_5939_, lean_object* v___x_5940_, lean_object* v___x_5941_, lean_object* v_dec_5942_, uint8_t v___x_5943_, lean_object* v_mutTk_x3f_5944_, lean_object* v___x_5945_, lean_object* v___y_5946_, lean_object* v___y_5947_, lean_object* v___y_5948_, lean_object* v___y_5949_, lean_object* v___y_5950_, lean_object* v___y_5951_, lean_object* v___y_5952_, lean_object* v___y_5953_){
_start:
{
if (lean_obj_tag(v_otherwise_x3f_5934_) == 0)
{
lean_object* v_ref_5955_; lean_object* v___x_5956_; lean_object* v___x_5957_; lean_object* v___x_5958_; lean_object* v___x_5959_; lean_object* v___x_5960_; lean_object* v___x_5961_; lean_object* v___x_5962_; lean_object* v___y_5964_; 
lean_dec(v___y_5946_);
v_ref_5955_ = lean_ctor_get(v___y_5952_, 2);
v___x_5956_ = l_Lean_SourceInfo_fromRef(v_ref_5955_, v___x_5935_);
v___x_5957_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__0));
lean_inc_ref(v___x_5938_);
lean_inc_ref(v___x_5937_);
lean_inc_ref(v___x_5936_);
v___x_5958_ = l_Lean_Name_mkStr4(v___x_5936_, v___x_5937_, v___x_5938_, v___x_5957_);
v___x_5959_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
lean_inc(v___x_5956_);
v___x_5960_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5960_, 0, v___x_5956_);
lean_ctor_set(v___x_5960_, 1, v___x_5959_);
v___x_5961_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5962_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
if (lean_obj_tag(v_mutTk_x3f_5944_) == 1)
{
lean_object* v_val_5979_; lean_object* v___x_5980_; lean_object* v___x_5981_; lean_object* v___x_5982_; lean_object* v___x_5983_; 
v_val_5979_ = lean_ctor_get(v_mutTk_x3f_5944_, 0);
v___x_5980_ = l_Lean_SourceInfo_fromRef(v_val_5979_, v___x_5943_);
v___x_5981_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__11));
v___x_5982_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5982_, 0, v___x_5980_);
lean_ctor_set(v___x_5982_, 1, v___x_5981_);
v___x_5983_ = l_Array_mkArray1___redArg(v___x_5982_);
v___y_5964_ = v___x_5983_;
goto v___jp_5963_;
}
else
{
lean_object* v___x_5984_; 
v___x_5984_ = lean_mk_empty_array_with_capacity(v___x_5945_);
v___y_5964_ = v___x_5984_;
goto v___jp_5963_;
}
v___jp_5963_:
{
lean_object* v___x_5965_; lean_object* v___x_5966_; lean_object* v___x_5967_; lean_object* v___x_5968_; lean_object* v___x_5969_; lean_object* v___x_5970_; lean_object* v___x_5971_; lean_object* v___x_5972_; lean_object* v___x_5973_; lean_object* v___x_5974_; lean_object* v___x_5975_; lean_object* v___x_5976_; lean_object* v___x_5977_; lean_object* v___x_5978_; 
v___x_5965_ = l_Array_append___redArg(v___x_5962_, v___y_5964_);
lean_dec_ref(v___y_5964_);
lean_inc_n(v___x_5956_, 6);
v___x_5966_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5966_, 0, v___x_5956_);
lean_ctor_set(v___x_5966_, 1, v___x_5961_);
lean_ctor_set(v___x_5966_, 2, v___x_5965_);
v___x_5967_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5967_, 0, v___x_5956_);
lean_ctor_set(v___x_5967_, 1, v___x_5961_);
lean_ctor_set(v___x_5967_, 2, v___x_5962_);
lean_inc_ref_n(v___x_5967_, 2);
v___x_5968_ = l_Lean_Syntax_node1(v___x_5956_, v___x_5939_, v___x_5967_);
v___x_5969_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3));
lean_inc_ref(v___x_5938_);
lean_inc_ref(v___x_5937_);
lean_inc_ref(v___x_5936_);
v___x_5970_ = l_Lean_Name_mkStr4(v___x_5936_, v___x_5937_, v___x_5938_, v___x_5969_);
v___x_5971_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9));
v___x_5972_ = l_Lean_Name_mkStr4(v___x_5936_, v___x_5937_, v___x_5938_, v___x_5971_);
v___x_5973_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_5974_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5974_, 0, v___x_5956_);
lean_ctor_set(v___x_5974_, 1, v___x_5973_);
v___x_5975_ = l_Lean_Syntax_node5(v___x_5956_, v___x_5972_, v___x_5940_, v___x_5967_, v___x_5967_, v___x_5974_, v___x_5941_);
v___x_5976_ = l_Lean_Syntax_node1(v___x_5956_, v___x_5970_, v___x_5975_);
v___x_5977_ = l_Lean_Syntax_node4(v___x_5956_, v___x_5958_, v___x_5960_, v___x_5966_, v___x_5968_, v___x_5976_);
v___x_5978_ = l_Lean_Elab_Do_elabDoElem(v___x_5977_, v_dec_5942_, v___x_5943_, v___y_5947_, v___y_5948_, v___y_5949_, v___y_5950_, v___y_5951_, v___y_5952_, v___y_5953_);
return v___x_5978_;
}
}
else
{
lean_object* v_val_5985_; lean_object* v_ref_5986_; lean_object* v___x_5987_; lean_object* v___x_5988_; lean_object* v___x_5989_; lean_object* v___x_5990_; lean_object* v___x_5991_; lean_object* v___x_5992_; lean_object* v___x_5993_; lean_object* v___y_5995_; lean_object* v___y_5996_; lean_object* v___y_5997_; lean_object* v___y_5998_; lean_object* v___y_5999_; lean_object* v___y_6016_; 
v_val_5985_ = lean_ctor_get(v_otherwise_x3f_5934_, 0);
lean_inc(v_val_5985_);
lean_dec_ref_known(v_otherwise_x3f_5934_, 1);
v_ref_5986_ = lean_ctor_get(v___y_5952_, 2);
v___x_5987_ = l_Lean_SourceInfo_fromRef(v_ref_5986_, v___x_5935_);
v___x_5988_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__0));
v___x_5989_ = l_Lean_Name_mkStr4(v___x_5936_, v___x_5937_, v___x_5938_, v___x_5988_);
v___x_5990_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
lean_inc(v___x_5987_);
v___x_5991_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5991_, 0, v___x_5987_);
lean_ctor_set(v___x_5991_, 1, v___x_5990_);
v___x_5992_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5993_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
if (lean_obj_tag(v_mutTk_x3f_5944_) == 1)
{
lean_object* v_val_6029_; lean_object* v___x_6030_; lean_object* v___x_6031_; lean_object* v___x_6032_; lean_object* v___x_6033_; 
v_val_6029_ = lean_ctor_get(v_mutTk_x3f_5944_, 0);
v___x_6030_ = l_Lean_SourceInfo_fromRef(v_val_6029_, v___x_5943_);
v___x_6031_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__11));
v___x_6032_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_6032_, 0, v___x_6030_);
lean_ctor_set(v___x_6032_, 1, v___x_6031_);
v___x_6033_ = l_Array_mkArray1___redArg(v___x_6032_);
v___y_6016_ = v___x_6033_;
goto v___jp_6015_;
}
else
{
lean_object* v___x_6034_; 
v___x_6034_ = lean_mk_empty_array_with_capacity(v___x_5945_);
v___y_6016_ = v___x_6034_;
goto v___jp_6015_;
}
v___jp_5994_:
{
lean_object* v___x_6000_; lean_object* v___x_6001_; lean_object* v___x_6002_; lean_object* v___x_6003_; lean_object* v___x_6004_; lean_object* v___x_6005_; lean_object* v___x_6006_; lean_object* v___x_6007_; lean_object* v___x_6008_; lean_object* v___x_6009_; lean_object* v___x_6010_; lean_object* v___x_6011_; lean_object* v___x_6012_; lean_object* v___x_6013_; lean_object* v___x_6014_; 
v___x_6000_ = l_Array_append___redArg(v___x_5993_, v___y_5999_);
lean_dec_ref(v___y_5999_);
lean_inc(v___x_5987_);
v___x_6001_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_6001_, 0, v___x_5987_);
lean_ctor_set(v___x_6001_, 1, v___x_5992_);
lean_ctor_set(v___x_6001_, 2, v___x_6000_);
v___x_6002_ = lean_unsigned_to_nat(9u);
v___x_6003_ = lean_mk_empty_array_with_capacity(v___x_6002_);
v___x_6004_ = lean_array_push(v___x_6003_, v___x_5991_);
v___x_6005_ = lean_array_push(v___x_6004_, v___y_5998_);
v___x_6006_ = lean_array_push(v___x_6005_, v___y_5997_);
v___x_6007_ = lean_array_push(v___x_6006_, v___x_5940_);
v___x_6008_ = lean_array_push(v___x_6007_, v___y_5995_);
v___x_6009_ = lean_array_push(v___x_6008_, v___x_5941_);
v___x_6010_ = lean_array_push(v___x_6009_, v___y_5996_);
v___x_6011_ = lean_array_push(v___x_6010_, v_val_5985_);
v___x_6012_ = lean_array_push(v___x_6011_, v___x_6001_);
v___x_6013_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_6013_, 0, v___x_5987_);
lean_ctor_set(v___x_6013_, 1, v___x_5989_);
lean_ctor_set(v___x_6013_, 2, v___x_6012_);
v___x_6014_ = l_Lean_Elab_Do_elabDoElem(v___x_6013_, v_dec_5942_, v___x_5943_, v___y_5947_, v___y_5948_, v___y_5949_, v___y_5950_, v___y_5951_, v___y_5952_, v___y_5953_);
return v___x_6014_;
}
v___jp_6015_:
{
lean_object* v___x_6017_; lean_object* v___x_6018_; lean_object* v___x_6019_; lean_object* v___x_6020_; lean_object* v___x_6021_; lean_object* v___x_6022_; lean_object* v___x_6023_; lean_object* v___x_6024_; 
v___x_6017_ = l_Array_append___redArg(v___x_5993_, v___y_6016_);
lean_dec_ref(v___y_6016_);
lean_inc_n(v___x_5987_, 5);
v___x_6018_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_6018_, 0, v___x_5987_);
lean_ctor_set(v___x_6018_, 1, v___x_5992_);
lean_ctor_set(v___x_6018_, 2, v___x_6017_);
v___x_6019_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_6019_, 0, v___x_5987_);
lean_ctor_set(v___x_6019_, 1, v___x_5992_);
lean_ctor_set(v___x_6019_, 2, v___x_5993_);
v___x_6020_ = l_Lean_Syntax_node1(v___x_5987_, v___x_5939_, v___x_6019_);
v___x_6021_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_6022_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_6022_, 0, v___x_5987_);
lean_ctor_set(v___x_6022_, 1, v___x_6021_);
v___x_6023_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15));
v___x_6024_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_6024_, 0, v___x_5987_);
lean_ctor_set(v___x_6024_, 1, v___x_6023_);
if (lean_obj_tag(v___y_5946_) == 0)
{
lean_object* v___x_6025_; 
v___x_6025_ = lean_mk_empty_array_with_capacity(v___x_5945_);
v___y_5995_ = v___x_6022_;
v___y_5996_ = v___x_6024_;
v___y_5997_ = v___x_6020_;
v___y_5998_ = v___x_6018_;
v___y_5999_ = v___x_6025_;
goto v___jp_5994_;
}
else
{
lean_object* v_val_6026_; lean_object* v___x_6027_; lean_object* v___x_6028_; 
v_val_6026_ = lean_ctor_get(v___y_5946_, 0);
lean_inc(v_val_6026_);
lean_dec_ref_known(v___y_5946_, 1);
v___x_6027_ = lean_mk_empty_array_with_capacity(v___x_5945_);
v___x_6028_ = lean_array_push(v___x_6027_, v_val_6026_);
v___y_5995_ = v___x_6022_;
v___y_5996_ = v___x_6024_;
v___y_5997_ = v___x_6020_;
v___y_5998_ = v___x_6018_;
v___y_5999_ = v___x_6028_;
goto v___jp_5994_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___lam__1___boxed(lean_object** _args){
lean_object* v_otherwise_x3f_6035_ = _args[0];
lean_object* v___x_6036_ = _args[1];
lean_object* v___x_6037_ = _args[2];
lean_object* v___x_6038_ = _args[3];
lean_object* v___x_6039_ = _args[4];
lean_object* v___x_6040_ = _args[5];
lean_object* v___x_6041_ = _args[6];
lean_object* v___x_6042_ = _args[7];
lean_object* v_dec_6043_ = _args[8];
lean_object* v___x_6044_ = _args[9];
lean_object* v_mutTk_x3f_6045_ = _args[10];
lean_object* v___x_6046_ = _args[11];
lean_object* v___y_6047_ = _args[12];
lean_object* v___y_6048_ = _args[13];
lean_object* v___y_6049_ = _args[14];
lean_object* v___y_6050_ = _args[15];
lean_object* v___y_6051_ = _args[16];
lean_object* v___y_6052_ = _args[17];
lean_object* v___y_6053_ = _args[18];
lean_object* v___y_6054_ = _args[19];
lean_object* v___y_6055_ = _args[20];
_start:
{
uint8_t v___x_27255__boxed_6056_; uint8_t v___x_27262__boxed_6057_; lean_object* v_res_6058_; 
v___x_27255__boxed_6056_ = lean_unbox(v___x_6036_);
v___x_27262__boxed_6057_ = lean_unbox(v___x_6044_);
v_res_6058_ = l_Lean_Elab_Do_elabDoLetArrow___lam__1(v_otherwise_x3f_6035_, v___x_27255__boxed_6056_, v___x_6037_, v___x_6038_, v___x_6039_, v___x_6040_, v___x_6041_, v___x_6042_, v_dec_6043_, v___x_27262__boxed_6057_, v_mutTk_x3f_6045_, v___x_6046_, v___y_6047_, v___y_6048_, v___y_6049_, v___y_6050_, v___y_6051_, v___y_6052_, v___y_6053_, v___y_6054_);
lean_dec(v___y_6054_);
lean_dec_ref(v___y_6053_);
lean_dec(v___y_6052_);
lean_dec_ref(v___y_6051_);
lean_dec(v___y_6050_);
lean_dec_ref(v___y_6049_);
lean_dec_ref(v___y_6048_);
lean_dec(v___x_6046_);
lean_dec(v_mutTk_x3f_6045_);
return v_res_6058_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetArrow___closed__1(void){
_start:
{
lean_object* v___x_6060_; lean_object* v___x_6061_; 
v___x_6060_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetArrow___closed__0));
v___x_6061_ = l_Lean_stringToMessageData(v___x_6060_);
return v___x_6061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow(lean_object* v_stx_6068_, lean_object* v_dec_6069_, lean_object* v_a_6070_, lean_object* v_a_6071_, lean_object* v_a_6072_, lean_object* v_a_6073_, lean_object* v_a_6074_, lean_object* v_a_6075_, lean_object* v_a_6076_){
_start:
{
lean_object* v___x_6078_; lean_object* v___x_6079_; lean_object* v___x_6080_; lean_object* v___x_6081_; uint8_t v___x_6082_; 
v___x_6078_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0));
v___x_6079_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1));
v___x_6080_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2));
v___x_6081_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__15));
lean_inc(v_stx_6068_);
v___x_6082_ = l_Lean_Syntax_isOfKind(v_stx_6068_, v___x_6081_);
if (v___x_6082_ == 0)
{
lean_object* v___x_6083_; 
lean_dec_ref(v_dec_6069_);
lean_dec(v_stx_6068_);
v___x_6083_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6083_;
}
else
{
lean_object* v___x_6084_; lean_object* v___y_6086_; lean_object* v___y_6087_; lean_object* v___y_6088_; lean_object* v___y_6089_; lean_object* v___y_6090_; lean_object* v___y_6091_; lean_object* v___y_6092_; lean_object* v___y_6093_; uint8_t v___y_6094_; lean_object* v___y_6095_; lean_object* v___y_6096_; uint8_t v___y_6097_; uint8_t v___y_6098_; lean_object* v___y_6099_; lean_object* v___y_6100_; lean_object* v___y_6101_; lean_object* v___y_6102_; lean_object* v___y_6103_; lean_object* v___y_6122_; lean_object* v___y_6123_; uint8_t v___y_6124_; uint8_t v___y_6125_; lean_object* v___y_6126_; lean_object* v___y_6127_; lean_object* v___y_6128_; lean_object* v___y_6129_; lean_object* v___y_6130_; lean_object* v___y_6131_; lean_object* v___y_6132_; lean_object* v___y_6133_; uint8_t v___y_6134_; lean_object* v___y_6135_; lean_object* v___y_6136_; lean_object* v___y_6137_; lean_object* v___y_6138_; lean_object* v___y_6139_; lean_object* v___y_6142_; lean_object* v___y_6143_; uint8_t v___y_6144_; lean_object* v___y_6145_; lean_object* v___y_6146_; lean_object* v___y_6147_; uint8_t v___y_6148_; lean_object* v___y_6149_; lean_object* v___y_6150_; lean_object* v___y_6151_; lean_object* v___y_6152_; lean_object* v___y_6153_; lean_object* v___y_6154_; lean_object* v___y_6155_; uint8_t v___y_6156_; lean_object* v___y_6157_; lean_object* v___y_6158_; lean_object* v___y_6159_; uint8_t v___y_6178_; lean_object* v___y_6179_; lean_object* v___y_6180_; uint8_t v___y_6181_; lean_object* v___y_6182_; lean_object* v___y_6183_; lean_object* v___y_6184_; lean_object* v___y_6185_; lean_object* v___y_6186_; lean_object* v___y_6187_; lean_object* v___y_6188_; uint8_t v___y_6189_; lean_object* v___y_6190_; lean_object* v___y_6191_; lean_object* v___y_6192_; lean_object* v___y_6193_; lean_object* v___y_6194_; lean_object* v___y_6195_; lean_object* v_tk_6197_; lean_object* v___x_6198_; lean_object* v___y_6200_; lean_object* v___y_6201_; uint8_t v___y_6202_; uint8_t v___y_6203_; lean_object* v___y_6204_; uint8_t v___y_6205_; lean_object* v___y_6206_; lean_object* v___y_6207_; lean_object* v___y_6208_; lean_object* v___y_6209_; lean_object* v___y_6210_; lean_object* v___y_6211_; lean_object* v_patType_x3f_6212_; lean_object* v___y_6213_; lean_object* v___y_6214_; lean_object* v___y_6215_; lean_object* v___y_6216_; lean_object* v___y_6217_; lean_object* v___y_6218_; lean_object* v___y_6219_; uint8_t v___y_6264_; lean_object* v___y_6265_; lean_object* v___y_6266_; uint8_t v___y_6267_; lean_object* v___y_6268_; uint8_t v___y_6269_; lean_object* v___y_6270_; lean_object* v___y_6271_; lean_object* v___y_6272_; lean_object* v___y_6273_; lean_object* v___y_6274_; lean_object* v_patType_x3f_6275_; lean_object* v___y_6276_; lean_object* v___y_6277_; lean_object* v___y_6278_; lean_object* v___y_6279_; lean_object* v___y_6280_; lean_object* v___y_6281_; lean_object* v___y_6282_; uint8_t v___y_6301_; lean_object* v___y_6302_; lean_object* v___y_6303_; lean_object* v___y_6304_; lean_object* v___y_6305_; lean_object* v_xType_x3f_6306_; lean_object* v___y_6307_; lean_object* v___y_6308_; lean_object* v___y_6309_; lean_object* v___y_6310_; lean_object* v___y_6311_; lean_object* v___y_6312_; lean_object* v___y_6313_; lean_object* v___y_6342_; lean_object* v___y_6343_; uint8_t v___y_6344_; lean_object* v___y_6345_; lean_object* v___y_6346_; lean_object* v___y_6347_; lean_object* v___y_6348_; lean_object* v___y_6349_; lean_object* v___y_6350_; lean_object* v___y_6351_; lean_object* v___y_6352_; lean_object* v___y_6353_; lean_object* v___y_6354_; lean_object* v___y_6355_; lean_object* v___y_6356_; lean_object* v___y_6357_; lean_object* v___y_6358_; lean_object* v___y_6401_; lean_object* v___y_6402_; lean_object* v___y_6403_; lean_object* v___y_6404_; uint8_t v___y_6405_; lean_object* v___y_6406_; lean_object* v___y_6407_; lean_object* v___y_6408_; lean_object* v___y_6409_; lean_object* v___y_6410_; lean_object* v___y_6411_; lean_object* v___y_6412_; lean_object* v___y_6413_; lean_object* v___y_6414_; lean_object* v___y_6415_; lean_object* v___y_6416_; lean_object* v___y_6417_; lean_object* v___y_6418_; lean_object* v_mutTk_x3f_6430_; lean_object* v___y_6431_; lean_object* v___y_6432_; lean_object* v___y_6433_; lean_object* v___y_6434_; lean_object* v___y_6435_; lean_object* v___y_6436_; lean_object* v___y_6437_; lean_object* v___x_6473_; uint8_t v___x_6474_; 
v___x_6084_ = lean_unsigned_to_nat(0u);
v_tk_6197_ = l_Lean_Syntax_getArg(v_stx_6068_, v___x_6084_);
v___x_6198_ = lean_unsigned_to_nat(1u);
v___x_6473_ = l_Lean_Syntax_getArg(v_stx_6068_, v___x_6198_);
v___x_6474_ = l_Lean_Syntax_isNone(v___x_6473_);
if (v___x_6474_ == 0)
{
uint8_t v___x_6475_; 
lean_inc(v___x_6473_);
v___x_6475_ = l_Lean_Syntax_matchesNull(v___x_6473_, v___x_6198_);
if (v___x_6475_ == 0)
{
lean_object* v___x_6476_; 
lean_dec(v___x_6473_);
lean_dec(v_tk_6197_);
lean_dec_ref(v_dec_6069_);
lean_dec(v_stx_6068_);
v___x_6476_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6476_;
}
else
{
lean_object* v_mutTk_x3f_6477_; lean_object* v___x_6478_; 
v_mutTk_x3f_6477_ = l_Lean_Syntax_getArg(v___x_6473_, v___x_6084_);
lean_dec(v___x_6473_);
v___x_6478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6478_, 0, v_mutTk_x3f_6477_);
v_mutTk_x3f_6430_ = v___x_6478_;
v___y_6431_ = v_a_6070_;
v___y_6432_ = v_a_6071_;
v___y_6433_ = v_a_6072_;
v___y_6434_ = v_a_6073_;
v___y_6435_ = v_a_6074_;
v___y_6436_ = v_a_6075_;
v___y_6437_ = v_a_6076_;
goto v___jp_6429_;
}
}
else
{
lean_object* v___x_6479_; 
lean_dec(v___x_6473_);
v___x_6479_ = lean_box(0);
v_mutTk_x3f_6430_ = v___x_6479_;
v___y_6431_ = v_a_6070_;
v___y_6432_ = v_a_6071_;
v___y_6433_ = v_a_6072_;
v___y_6434_ = v_a_6073_;
v___y_6435_ = v_a_6074_;
v___y_6436_ = v_a_6075_;
v___y_6437_ = v_a_6076_;
goto v___jp_6429_;
}
v___jp_6085_:
{
lean_object* v___x_6104_; lean_object* v___x_6105_; 
v___x_6104_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__13));
v___x_6105_ = l_Lean_Core_mkFreshUserName(v___x_6104_, v___y_6088_, v___y_6095_);
if (lean_obj_tag(v___x_6105_) == 0)
{
lean_object* v_a_6106_; lean_object* v___x_6107_; lean_object* v___x_6108_; lean_object* v___x_6109_; lean_object* v___y_6110_; uint8_t v___x_6111_; lean_object* v___x_6112_; 
v_a_6106_ = lean_ctor_get(v___x_6105_, 0);
lean_inc(v_a_6106_);
lean_dec_ref_known(v___x_6105_, 1);
v___x_6107_ = l_Lean_mkIdentFrom(v___y_6100_, v_a_6106_, v___y_6094_);
lean_dec(v___y_6100_);
v___x_6108_ = lean_box(v___y_6097_);
v___x_6109_ = lean_box(v___y_6098_);
lean_inc(v___x_6107_);
lean_inc(v___y_6087_);
v___y_6110_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetArrow___lam__1___boxed), 21, 13);
lean_closure_set(v___y_6110_, 0, v___y_6093_);
lean_closure_set(v___y_6110_, 1, v___x_6108_);
lean_closure_set(v___y_6110_, 2, v___x_6078_);
lean_closure_set(v___y_6110_, 3, v___x_6079_);
lean_closure_set(v___y_6110_, 4, v___x_6080_);
lean_closure_set(v___y_6110_, 5, v___y_6087_);
lean_closure_set(v___y_6110_, 6, v___y_6092_);
lean_closure_set(v___y_6110_, 7, v___x_6107_);
lean_closure_set(v___y_6110_, 8, v_dec_6069_);
lean_closure_set(v___y_6110_, 9, v___x_6109_);
lean_closure_set(v___y_6110_, 10, v___y_6102_);
lean_closure_set(v___y_6110_, 11, v___x_6084_);
lean_closure_set(v___y_6110_, 12, v___y_6103_);
v___x_6111_ = 0;
v___x_6112_ = l_Lean_Elab_Do_elabDoIdDecl(v___x_6107_, v___y_6089_, v___y_6090_, v___y_6110_, v___x_6111_, v___y_6091_, v___y_6096_, v___y_6099_, v___y_6101_, v___y_6086_, v___y_6088_, v___y_6095_);
return v___x_6112_;
}
else
{
lean_object* v_a_6113_; lean_object* v___x_6115_; uint8_t v_isShared_6116_; uint8_t v_isSharedCheck_6120_; 
lean_dec(v___y_6103_);
lean_dec(v___y_6102_);
lean_dec(v___y_6100_);
lean_dec(v___y_6093_);
lean_dec(v___y_6092_);
lean_dec(v___y_6090_);
lean_dec(v___y_6089_);
lean_dec_ref(v_dec_6069_);
v_a_6113_ = lean_ctor_get(v___x_6105_, 0);
v_isSharedCheck_6120_ = !lean_is_exclusive(v___x_6105_);
if (v_isSharedCheck_6120_ == 0)
{
v___x_6115_ = v___x_6105_;
v_isShared_6116_ = v_isSharedCheck_6120_;
goto v_resetjp_6114_;
}
else
{
lean_inc(v_a_6113_);
lean_dec(v___x_6105_);
v___x_6115_ = lean_box(0);
v_isShared_6116_ = v_isSharedCheck_6120_;
goto v_resetjp_6114_;
}
v_resetjp_6114_:
{
lean_object* v___x_6118_; 
if (v_isShared_6116_ == 0)
{
v___x_6118_ = v___x_6115_;
goto v_reusejp_6117_;
}
else
{
lean_object* v_reuseFailAlloc_6119_; 
v_reuseFailAlloc_6119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6119_, 0, v_a_6113_);
v___x_6118_ = v_reuseFailAlloc_6119_;
goto v_reusejp_6117_;
}
v_reusejp_6117_:
{
return v___x_6118_;
}
}
}
}
v___jp_6121_:
{
lean_object* v___x_6140_; 
v___x_6140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6140_, 0, v___y_6129_);
v___y_6086_ = v___y_6138_;
v___y_6087_ = v___y_6123_;
v___y_6088_ = v___y_6132_;
v___y_6089_ = v___y_6131_;
v___y_6090_ = v___y_6130_;
v___y_6091_ = v___y_6136_;
v___y_6092_ = v___y_6122_;
v___y_6093_ = v___x_6140_;
v___y_6094_ = v___y_6134_;
v___y_6095_ = v___y_6128_;
v___y_6096_ = v___y_6127_;
v___y_6097_ = v___y_6124_;
v___y_6098_ = v___y_6125_;
v___y_6099_ = v___y_6137_;
v___y_6100_ = v___y_6135_;
v___y_6101_ = v___y_6133_;
v___y_6102_ = v___y_6126_;
v___y_6103_ = v___y_6139_;
goto v___jp_6085_;
}
v___jp_6141_:
{
lean_object* v___x_6160_; lean_object* v___x_6161_; 
v___x_6160_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__13));
v___x_6161_ = l_Lean_Core_mkFreshUserName(v___x_6160_, v___y_6155_, v___y_6142_);
if (lean_obj_tag(v___x_6161_) == 0)
{
lean_object* v_a_6162_; lean_object* v___x_6163_; lean_object* v___x_6164_; lean_object* v___x_6165_; lean_object* v___y_6166_; uint8_t v___x_6167_; lean_object* v___x_6168_; 
v_a_6162_ = lean_ctor_get(v___x_6161_, 0);
lean_inc(v_a_6162_);
lean_dec_ref_known(v___x_6161_, 1);
v___x_6163_ = l_Lean_mkIdentFrom(v___y_6152_, v_a_6162_, v___y_6144_);
lean_dec(v___y_6152_);
v___x_6164_ = lean_box(v___y_6156_);
v___x_6165_ = lean_box(v___y_6148_);
lean_inc(v___x_6163_);
lean_inc(v___y_6145_);
v___y_6166_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetArrow___lam__0___boxed), 21, 13);
lean_closure_set(v___y_6166_, 0, v___y_6153_);
lean_closure_set(v___y_6166_, 1, v___x_6164_);
lean_closure_set(v___y_6166_, 2, v___x_6078_);
lean_closure_set(v___y_6166_, 3, v___x_6079_);
lean_closure_set(v___y_6166_, 4, v___x_6080_);
lean_closure_set(v___y_6166_, 5, v___y_6145_);
lean_closure_set(v___y_6166_, 6, v___y_6150_);
lean_closure_set(v___y_6166_, 7, v___x_6163_);
lean_closure_set(v___y_6166_, 8, v_dec_6069_);
lean_closure_set(v___y_6166_, 9, v___x_6165_);
lean_closure_set(v___y_6166_, 10, v___y_6158_);
lean_closure_set(v___y_6166_, 11, v___x_6084_);
lean_closure_set(v___y_6166_, 12, v___y_6159_);
v___x_6167_ = 0;
v___x_6168_ = l_Lean_Elab_Do_elabDoIdDecl(v___x_6163_, v___y_6151_, v___y_6143_, v___y_6166_, v___x_6167_, v___y_6157_, v___y_6146_, v___y_6154_, v___y_6149_, v___y_6147_, v___y_6155_, v___y_6142_);
return v___x_6168_;
}
else
{
lean_object* v_a_6169_; lean_object* v___x_6171_; uint8_t v_isShared_6172_; uint8_t v_isSharedCheck_6176_; 
lean_dec(v___y_6159_);
lean_dec(v___y_6158_);
lean_dec(v___y_6153_);
lean_dec(v___y_6152_);
lean_dec(v___y_6151_);
lean_dec(v___y_6150_);
lean_dec(v___y_6143_);
lean_dec_ref(v_dec_6069_);
v_a_6169_ = lean_ctor_get(v___x_6161_, 0);
v_isSharedCheck_6176_ = !lean_is_exclusive(v___x_6161_);
if (v_isSharedCheck_6176_ == 0)
{
v___x_6171_ = v___x_6161_;
v_isShared_6172_ = v_isSharedCheck_6176_;
goto v_resetjp_6170_;
}
else
{
lean_inc(v_a_6169_);
lean_dec(v___x_6161_);
v___x_6171_ = lean_box(0);
v_isShared_6172_ = v_isSharedCheck_6176_;
goto v_resetjp_6170_;
}
v_resetjp_6170_:
{
lean_object* v___x_6174_; 
if (v_isShared_6172_ == 0)
{
v___x_6174_ = v___x_6171_;
goto v_reusejp_6173_;
}
else
{
lean_object* v_reuseFailAlloc_6175_; 
v_reuseFailAlloc_6175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6175_, 0, v_a_6169_);
v___x_6174_ = v_reuseFailAlloc_6175_;
goto v_reusejp_6173_;
}
v_reusejp_6173_:
{
return v___x_6174_;
}
}
}
}
v___jp_6177_:
{
lean_object* v___x_6196_; 
v___x_6196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6196_, 0, v___y_6190_);
v___y_6142_ = v___y_6186_;
v___y_6143_ = v___y_6192_;
v___y_6144_ = v___y_6189_;
v___y_6145_ = v___y_6180_;
v___y_6146_ = v___y_6183_;
v___y_6147_ = v___y_6185_;
v___y_6148_ = v___y_6178_;
v___y_6149_ = v___y_6194_;
v___y_6150_ = v___y_6179_;
v___y_6151_ = v___y_6184_;
v___y_6152_ = v___y_6191_;
v___y_6153_ = v___x_6196_;
v___y_6154_ = v___y_6188_;
v___y_6155_ = v___y_6193_;
v___y_6156_ = v___y_6181_;
v___y_6157_ = v___y_6187_;
v___y_6158_ = v___y_6182_;
v___y_6159_ = v___y_6195_;
goto v___jp_6141_;
}
v___jp_6199_:
{
lean_object* v___x_6220_; lean_object* v___x_6221_; lean_object* v___x_6222_; uint8_t v___x_6223_; 
v___x_6220_ = l_Lean_Syntax_getArg(v___y_6209_, v___y_6208_);
v___x_6221_ = lean_unsigned_to_nat(4u);
v___x_6222_ = l_Lean_Syntax_getArg(v___y_6209_, v___x_6221_);
lean_dec(v___y_6209_);
lean_inc(v___x_6222_);
v___x_6223_ = l_Lean_Syntax_matchesNull(v___x_6222_, v___x_6084_);
if (v___x_6223_ == 0)
{
uint8_t v___x_6224_; 
lean_dec(v___y_6207_);
lean_dec(v_tk_6197_);
v___x_6224_ = l_Lean_Syntax_isNone(v___x_6222_);
if (v___x_6224_ == 0)
{
uint8_t v___x_6225_; 
lean_inc(v___x_6222_);
v___x_6225_ = l_Lean_Syntax_matchesNull(v___x_6222_, v___y_6208_);
if (v___x_6225_ == 0)
{
lean_object* v___x_6226_; 
lean_dec(v___x_6222_);
lean_dec(v___x_6220_);
lean_dec(v_patType_x3f_6212_);
lean_dec(v___y_6206_);
lean_dec(v___y_6204_);
lean_dec(v___y_6200_);
lean_dec_ref(v_dec_6069_);
v___x_6226_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6226_;
}
else
{
lean_object* v___x_6227_; lean_object* v___x_6228_; lean_object* v___x_6229_; 
v___x_6227_ = l_Lean_Syntax_getArg(v___x_6222_, v___x_6198_);
v___x_6228_ = l_Lean_Syntax_getArg(v___x_6222_, v___y_6211_);
lean_dec(v___x_6222_);
v___x_6229_ = l_Lean_Syntax_getOptional_x3f(v___x_6228_);
lean_dec(v___x_6228_);
if (lean_obj_tag(v___x_6229_) == 0)
{
lean_inc(v___y_6210_);
v___y_6122_ = v___y_6200_;
v___y_6123_ = v___y_6201_;
v___y_6124_ = v___y_6202_;
v___y_6125_ = v___y_6203_;
v___y_6126_ = v___y_6204_;
v___y_6127_ = v___y_6214_;
v___y_6128_ = v___y_6219_;
v___y_6129_ = v___x_6227_;
v___y_6130_ = v___x_6220_;
v___y_6131_ = v_patType_x3f_6212_;
v___y_6132_ = v___y_6218_;
v___y_6133_ = v___y_6216_;
v___y_6134_ = v___y_6205_;
v___y_6135_ = v___y_6206_;
v___y_6136_ = v___y_6213_;
v___y_6137_ = v___y_6215_;
v___y_6138_ = v___y_6217_;
v___y_6139_ = v___y_6210_;
goto v___jp_6121_;
}
else
{
lean_object* v_val_6230_; lean_object* v___x_6232_; uint8_t v_isShared_6233_; uint8_t v_isSharedCheck_6237_; 
v_val_6230_ = lean_ctor_get(v___x_6229_, 0);
v_isSharedCheck_6237_ = !lean_is_exclusive(v___x_6229_);
if (v_isSharedCheck_6237_ == 0)
{
v___x_6232_ = v___x_6229_;
v_isShared_6233_ = v_isSharedCheck_6237_;
goto v_resetjp_6231_;
}
else
{
lean_inc(v_val_6230_);
lean_dec(v___x_6229_);
v___x_6232_ = lean_box(0);
v_isShared_6233_ = v_isSharedCheck_6237_;
goto v_resetjp_6231_;
}
v_resetjp_6231_:
{
lean_object* v___x_6235_; 
if (v_isShared_6233_ == 0)
{
v___x_6235_ = v___x_6232_;
goto v_reusejp_6234_;
}
else
{
lean_object* v_reuseFailAlloc_6236_; 
v_reuseFailAlloc_6236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6236_, 0, v_val_6230_);
v___x_6235_ = v_reuseFailAlloc_6236_;
goto v_reusejp_6234_;
}
v_reusejp_6234_:
{
v___y_6122_ = v___y_6200_;
v___y_6123_ = v___y_6201_;
v___y_6124_ = v___y_6202_;
v___y_6125_ = v___y_6203_;
v___y_6126_ = v___y_6204_;
v___y_6127_ = v___y_6214_;
v___y_6128_ = v___y_6219_;
v___y_6129_ = v___x_6227_;
v___y_6130_ = v___x_6220_;
v___y_6131_ = v_patType_x3f_6212_;
v___y_6132_ = v___y_6218_;
v___y_6133_ = v___y_6216_;
v___y_6134_ = v___y_6205_;
v___y_6135_ = v___y_6206_;
v___y_6136_ = v___y_6213_;
v___y_6137_ = v___y_6215_;
v___y_6138_ = v___y_6217_;
v___y_6139_ = v___x_6235_;
goto v___jp_6121_;
}
}
}
}
}
else
{
lean_dec(v___x_6222_);
lean_inc_n(v___y_6210_, 2);
v___y_6086_ = v___y_6217_;
v___y_6087_ = v___y_6201_;
v___y_6088_ = v___y_6218_;
v___y_6089_ = v_patType_x3f_6212_;
v___y_6090_ = v___x_6220_;
v___y_6091_ = v___y_6213_;
v___y_6092_ = v___y_6200_;
v___y_6093_ = v___y_6210_;
v___y_6094_ = v___y_6205_;
v___y_6095_ = v___y_6219_;
v___y_6096_ = v___y_6214_;
v___y_6097_ = v___y_6202_;
v___y_6098_ = v___y_6203_;
v___y_6099_ = v___y_6215_;
v___y_6100_ = v___y_6206_;
v___y_6101_ = v___y_6216_;
v___y_6102_ = v___y_6204_;
v___y_6103_ = v___y_6210_;
goto v___jp_6085_;
}
}
else
{
lean_object* v___x_6238_; lean_object* v___x_6239_; 
lean_dec(v___x_6222_);
lean_dec(v___y_6206_);
lean_dec(v___y_6204_);
lean_dec(v___y_6200_);
v___x_6238_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__13));
v___x_6239_ = l_Lean_Core_mkFreshUserName(v___x_6238_, v___y_6218_, v___y_6219_);
if (lean_obj_tag(v___x_6239_) == 0)
{
lean_object* v_a_6240_; lean_object* v___x_6241_; lean_object* v___x_6242_; 
v_a_6240_ = lean_ctor_get(v___x_6239_, 0);
lean_inc(v_a_6240_);
lean_dec_ref_known(v___x_6239_, 1);
v___x_6241_ = l_Lean_mkIdentFrom(v___y_6207_, v_a_6240_, v___y_6205_);
lean_dec(v___y_6207_);
v___x_6242_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_6069_, v_tk_6197_, v___y_6213_, v___y_6214_, v___y_6215_, v___y_6216_, v___y_6217_, v___y_6218_, v___y_6219_);
lean_dec(v_tk_6197_);
if (lean_obj_tag(v___x_6242_) == 0)
{
lean_object* v_a_6243_; uint8_t v_kind_6244_; lean_object* v___x_6245_; lean_object* v___x_6246_; 
v_a_6243_ = lean_ctor_get(v___x_6242_, 0);
lean_inc(v_a_6243_);
lean_dec_ref_known(v___x_6242_, 1);
v_kind_6244_ = lean_ctor_get_uint8(v_a_6243_, sizeof(void*)*3);
v___x_6245_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_6245_, 0, v_a_6243_);
v___x_6246_ = l_Lean_Elab_Do_elabDoIdDecl(v___x_6241_, v_patType_x3f_6212_, v___x_6220_, v___x_6245_, v_kind_6244_, v___y_6213_, v___y_6214_, v___y_6215_, v___y_6216_, v___y_6217_, v___y_6218_, v___y_6219_);
return v___x_6246_;
}
else
{
lean_object* v_a_6247_; lean_object* v___x_6249_; uint8_t v_isShared_6250_; uint8_t v_isSharedCheck_6254_; 
lean_dec(v___x_6241_);
lean_dec(v___x_6220_);
lean_dec(v_patType_x3f_6212_);
v_a_6247_ = lean_ctor_get(v___x_6242_, 0);
v_isSharedCheck_6254_ = !lean_is_exclusive(v___x_6242_);
if (v_isSharedCheck_6254_ == 0)
{
v___x_6249_ = v___x_6242_;
v_isShared_6250_ = v_isSharedCheck_6254_;
goto v_resetjp_6248_;
}
else
{
lean_inc(v_a_6247_);
lean_dec(v___x_6242_);
v___x_6249_ = lean_box(0);
v_isShared_6250_ = v_isSharedCheck_6254_;
goto v_resetjp_6248_;
}
v_resetjp_6248_:
{
lean_object* v___x_6252_; 
if (v_isShared_6250_ == 0)
{
v___x_6252_ = v___x_6249_;
goto v_reusejp_6251_;
}
else
{
lean_object* v_reuseFailAlloc_6253_; 
v_reuseFailAlloc_6253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6253_, 0, v_a_6247_);
v___x_6252_ = v_reuseFailAlloc_6253_;
goto v_reusejp_6251_;
}
v_reusejp_6251_:
{
return v___x_6252_;
}
}
}
}
else
{
lean_object* v_a_6255_; lean_object* v___x_6257_; uint8_t v_isShared_6258_; uint8_t v_isSharedCheck_6262_; 
lean_dec(v___x_6220_);
lean_dec(v_patType_x3f_6212_);
lean_dec(v___y_6207_);
lean_dec(v_tk_6197_);
lean_dec_ref(v_dec_6069_);
v_a_6255_ = lean_ctor_get(v___x_6239_, 0);
v_isSharedCheck_6262_ = !lean_is_exclusive(v___x_6239_);
if (v_isSharedCheck_6262_ == 0)
{
v___x_6257_ = v___x_6239_;
v_isShared_6258_ = v_isSharedCheck_6262_;
goto v_resetjp_6256_;
}
else
{
lean_inc(v_a_6255_);
lean_dec(v___x_6239_);
v___x_6257_ = lean_box(0);
v_isShared_6258_ = v_isSharedCheck_6262_;
goto v_resetjp_6256_;
}
v_resetjp_6256_:
{
lean_object* v___x_6260_; 
if (v_isShared_6258_ == 0)
{
v___x_6260_ = v___x_6257_;
goto v_reusejp_6259_;
}
else
{
lean_object* v_reuseFailAlloc_6261_; 
v_reuseFailAlloc_6261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6261_, 0, v_a_6255_);
v___x_6260_ = v_reuseFailAlloc_6261_;
goto v_reusejp_6259_;
}
v_reusejp_6259_:
{
return v___x_6260_;
}
}
}
}
}
v___jp_6263_:
{
lean_object* v___x_6283_; lean_object* v___x_6284_; lean_object* v___x_6285_; uint8_t v___x_6286_; 
v___x_6283_ = l_Lean_Syntax_getArg(v___y_6272_, v___y_6271_);
v___x_6284_ = lean_unsigned_to_nat(4u);
v___x_6285_ = l_Lean_Syntax_getArg(v___y_6272_, v___x_6284_);
lean_dec(v___y_6272_);
v___x_6286_ = l_Lean_Syntax_isNone(v___x_6285_);
if (v___x_6286_ == 0)
{
uint8_t v___x_6287_; 
lean_inc(v___x_6285_);
v___x_6287_ = l_Lean_Syntax_matchesNull(v___x_6285_, v___y_6271_);
if (v___x_6287_ == 0)
{
lean_object* v___x_6288_; 
lean_dec(v___x_6285_);
lean_dec(v___x_6283_);
lean_dec(v_patType_x3f_6275_);
lean_dec(v___y_6270_);
lean_dec(v___y_6268_);
lean_dec(v___y_6265_);
lean_dec_ref(v_dec_6069_);
v___x_6288_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6288_;
}
else
{
lean_object* v___x_6289_; lean_object* v___x_6290_; lean_object* v___x_6291_; 
v___x_6289_ = l_Lean_Syntax_getArg(v___x_6285_, v___x_6198_);
v___x_6290_ = l_Lean_Syntax_getArg(v___x_6285_, v___y_6274_);
lean_dec(v___x_6285_);
v___x_6291_ = l_Lean_Syntax_getOptional_x3f(v___x_6290_);
lean_dec(v___x_6290_);
if (lean_obj_tag(v___x_6291_) == 0)
{
lean_inc(v___y_6273_);
v___y_6178_ = v___y_6264_;
v___y_6179_ = v___y_6265_;
v___y_6180_ = v___y_6266_;
v___y_6181_ = v___y_6267_;
v___y_6182_ = v___y_6268_;
v___y_6183_ = v___y_6277_;
v___y_6184_ = v_patType_x3f_6275_;
v___y_6185_ = v___y_6280_;
v___y_6186_ = v___y_6282_;
v___y_6187_ = v___y_6276_;
v___y_6188_ = v___y_6278_;
v___y_6189_ = v___y_6269_;
v___y_6190_ = v___x_6289_;
v___y_6191_ = v___y_6270_;
v___y_6192_ = v___x_6283_;
v___y_6193_ = v___y_6281_;
v___y_6194_ = v___y_6279_;
v___y_6195_ = v___y_6273_;
goto v___jp_6177_;
}
else
{
lean_object* v_val_6292_; lean_object* v___x_6294_; uint8_t v_isShared_6295_; uint8_t v_isSharedCheck_6299_; 
v_val_6292_ = lean_ctor_get(v___x_6291_, 0);
v_isSharedCheck_6299_ = !lean_is_exclusive(v___x_6291_);
if (v_isSharedCheck_6299_ == 0)
{
v___x_6294_ = v___x_6291_;
v_isShared_6295_ = v_isSharedCheck_6299_;
goto v_resetjp_6293_;
}
else
{
lean_inc(v_val_6292_);
lean_dec(v___x_6291_);
v___x_6294_ = lean_box(0);
v_isShared_6295_ = v_isSharedCheck_6299_;
goto v_resetjp_6293_;
}
v_resetjp_6293_:
{
lean_object* v___x_6297_; 
if (v_isShared_6295_ == 0)
{
v___x_6297_ = v___x_6294_;
goto v_reusejp_6296_;
}
else
{
lean_object* v_reuseFailAlloc_6298_; 
v_reuseFailAlloc_6298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6298_, 0, v_val_6292_);
v___x_6297_ = v_reuseFailAlloc_6298_;
goto v_reusejp_6296_;
}
v_reusejp_6296_:
{
v___y_6178_ = v___y_6264_;
v___y_6179_ = v___y_6265_;
v___y_6180_ = v___y_6266_;
v___y_6181_ = v___y_6267_;
v___y_6182_ = v___y_6268_;
v___y_6183_ = v___y_6277_;
v___y_6184_ = v_patType_x3f_6275_;
v___y_6185_ = v___y_6280_;
v___y_6186_ = v___y_6282_;
v___y_6187_ = v___y_6276_;
v___y_6188_ = v___y_6278_;
v___y_6189_ = v___y_6269_;
v___y_6190_ = v___x_6289_;
v___y_6191_ = v___y_6270_;
v___y_6192_ = v___x_6283_;
v___y_6193_ = v___y_6281_;
v___y_6194_ = v___y_6279_;
v___y_6195_ = v___x_6297_;
goto v___jp_6177_;
}
}
}
}
}
else
{
lean_dec(v___x_6285_);
lean_inc_n(v___y_6273_, 2);
v___y_6142_ = v___y_6282_;
v___y_6143_ = v___x_6283_;
v___y_6144_ = v___y_6269_;
v___y_6145_ = v___y_6266_;
v___y_6146_ = v___y_6277_;
v___y_6147_ = v___y_6280_;
v___y_6148_ = v___y_6264_;
v___y_6149_ = v___y_6279_;
v___y_6150_ = v___y_6265_;
v___y_6151_ = v_patType_x3f_6275_;
v___y_6152_ = v___y_6270_;
v___y_6153_ = v___y_6273_;
v___y_6154_ = v___y_6278_;
v___y_6155_ = v___y_6281_;
v___y_6156_ = v___y_6267_;
v___y_6157_ = v___y_6276_;
v___y_6158_ = v___y_6268_;
v___y_6159_ = v___y_6273_;
goto v___jp_6141_;
}
}
v___jp_6300_:
{
lean_object* v___x_6314_; lean_object* v___x_6315_; lean_object* v___x_6316_; lean_object* v___x_6317_; 
v___x_6314_ = l_Lean_Syntax_getArg(v___y_6304_, v___y_6303_);
lean_dec(v___y_6304_);
v___x_6315_ = lean_mk_empty_array_with_capacity(v___x_6198_);
lean_inc(v___y_6302_);
v___x_6316_ = lean_array_push(v___x_6315_, v___y_6302_);
v___x_6317_ = l_Lean_Elab_Do_checkMutVarsForShadowing(v___x_6316_, v___y_6307_, v___y_6308_, v___y_6309_, v___y_6310_, v___y_6311_, v___y_6312_, v___y_6313_);
lean_dec_ref(v___x_6316_);
if (lean_obj_tag(v___x_6317_) == 0)
{
lean_object* v___x_6318_; 
lean_dec_ref_known(v___x_6317_, 1);
v___x_6318_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_6069_, v_tk_6197_, v___y_6307_, v___y_6308_, v___y_6309_, v___y_6310_, v___y_6311_, v___y_6312_, v___y_6313_);
lean_dec(v_tk_6197_);
if (lean_obj_tag(v___x_6318_) == 0)
{
lean_object* v_a_6319_; uint8_t v_kind_6320_; lean_object* v___x_6321_; lean_object* v___x_6322_; lean_object* v___x_6323_; lean_object* v___x_6324_; 
v_a_6319_ = lean_ctor_get(v___x_6318_, 0);
lean_inc(v_a_6319_);
lean_dec_ref_known(v___x_6318_, 1);
v_kind_6320_ = lean_ctor_get_uint8(v_a_6319_, sizeof(void*)*3);
v___x_6321_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_6321_, 0, v_a_6319_);
v___x_6322_ = lean_box(v___y_6301_);
lean_inc(v___y_6302_);
v___x_6323_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_declareMutVar_x3f___boxed), 13, 5);
lean_closure_set(v___x_6323_, 0, lean_box(0));
lean_closure_set(v___x_6323_, 1, v___y_6305_);
lean_closure_set(v___x_6323_, 2, v___y_6302_);
lean_closure_set(v___x_6323_, 3, v___x_6322_);
lean_closure_set(v___x_6323_, 4, v___x_6321_);
v___x_6324_ = l_Lean_Elab_Do_elabDoIdDecl(v___y_6302_, v_xType_x3f_6306_, v___x_6314_, v___x_6323_, v_kind_6320_, v___y_6307_, v___y_6308_, v___y_6309_, v___y_6310_, v___y_6311_, v___y_6312_, v___y_6313_);
return v___x_6324_;
}
else
{
lean_object* v_a_6325_; lean_object* v___x_6327_; uint8_t v_isShared_6328_; uint8_t v_isSharedCheck_6332_; 
lean_dec(v___x_6314_);
lean_dec(v_xType_x3f_6306_);
lean_dec(v___y_6305_);
lean_dec(v___y_6302_);
v_a_6325_ = lean_ctor_get(v___x_6318_, 0);
v_isSharedCheck_6332_ = !lean_is_exclusive(v___x_6318_);
if (v_isSharedCheck_6332_ == 0)
{
v___x_6327_ = v___x_6318_;
v_isShared_6328_ = v_isSharedCheck_6332_;
goto v_resetjp_6326_;
}
else
{
lean_inc(v_a_6325_);
lean_dec(v___x_6318_);
v___x_6327_ = lean_box(0);
v_isShared_6328_ = v_isSharedCheck_6332_;
goto v_resetjp_6326_;
}
v_resetjp_6326_:
{
lean_object* v___x_6330_; 
if (v_isShared_6328_ == 0)
{
v___x_6330_ = v___x_6327_;
goto v_reusejp_6329_;
}
else
{
lean_object* v_reuseFailAlloc_6331_; 
v_reuseFailAlloc_6331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6331_, 0, v_a_6325_);
v___x_6330_ = v_reuseFailAlloc_6331_;
goto v_reusejp_6329_;
}
v_reusejp_6329_:
{
return v___x_6330_;
}
}
}
}
else
{
lean_object* v_a_6333_; lean_object* v___x_6335_; uint8_t v_isShared_6336_; uint8_t v_isSharedCheck_6340_; 
lean_dec(v___x_6314_);
lean_dec(v_xType_x3f_6306_);
lean_dec(v___y_6305_);
lean_dec(v___y_6302_);
lean_dec(v_tk_6197_);
lean_dec_ref(v_dec_6069_);
v_a_6333_ = lean_ctor_get(v___x_6317_, 0);
v_isSharedCheck_6340_ = !lean_is_exclusive(v___x_6317_);
if (v_isSharedCheck_6340_ == 0)
{
v___x_6335_ = v___x_6317_;
v_isShared_6336_ = v_isSharedCheck_6340_;
goto v_resetjp_6334_;
}
else
{
lean_inc(v_a_6333_);
lean_dec(v___x_6317_);
v___x_6335_ = lean_box(0);
v_isShared_6336_ = v_isSharedCheck_6340_;
goto v_resetjp_6334_;
}
v_resetjp_6334_:
{
lean_object* v___x_6338_; 
if (v_isShared_6336_ == 0)
{
v___x_6338_ = v___x_6335_;
goto v_reusejp_6337_;
}
else
{
lean_object* v_reuseFailAlloc_6339_; 
v_reuseFailAlloc_6339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6339_, 0, v_a_6333_);
v___x_6338_ = v_reuseFailAlloc_6339_;
goto v_reusejp_6337_;
}
v_reusejp_6337_:
{
return v___x_6338_;
}
}
}
}
v___jp_6341_:
{
uint8_t v___x_6359_; 
lean_inc(v___y_6348_);
v___x_6359_ = l_Lean_Syntax_isOfKind(v___y_6348_, v___y_6345_);
if (v___x_6359_ == 0)
{
uint8_t v___x_6360_; 
lean_dec(v___y_6351_);
lean_inc(v___y_6348_);
v___x_6360_ = l_Lean_Syntax_isOfKind(v___y_6348_, v___y_6346_);
if (v___x_6360_ == 0)
{
lean_object* v___x_6361_; 
lean_dec(v___y_6348_);
lean_dec(v___y_6343_);
lean_dec(v_tk_6197_);
lean_dec_ref(v_dec_6069_);
v___x_6361_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6361_;
}
else
{
lean_object* v___x_6362_; lean_object* v___x_6363_; uint8_t v___x_6364_; 
v___x_6362_ = l_Lean_Syntax_getArg(v___y_6348_, v___x_6084_);
v___x_6363_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__7));
lean_inc(v___x_6362_);
v___x_6364_ = l_Lean_Syntax_isOfKind(v___x_6362_, v___x_6363_);
if (v___x_6364_ == 0)
{
lean_object* v___x_6365_; uint8_t v___x_6366_; 
lean_dec(v_tk_6197_);
v___x_6365_ = l_Lean_Syntax_getArg(v___y_6348_, v___x_6198_);
v___x_6366_ = l_Lean_Syntax_isNone(v___x_6365_);
if (v___x_6366_ == 0)
{
uint8_t v___x_6367_; 
lean_inc(v___x_6365_);
v___x_6367_ = l_Lean_Syntax_matchesNull(v___x_6365_, v___x_6198_);
if (v___x_6367_ == 0)
{
lean_object* v___x_6368_; 
lean_dec(v___x_6365_);
lean_dec(v___x_6362_);
lean_dec(v___y_6348_);
lean_dec(v___y_6343_);
lean_dec_ref(v_dec_6069_);
v___x_6368_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6368_;
}
else
{
lean_object* v___x_6369_; lean_object* v___x_6370_; uint8_t v___x_6371_; 
v___x_6369_ = l_Lean_Syntax_getArg(v___x_6365_, v___x_6084_);
lean_dec(v___x_6365_);
v___x_6370_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
lean_inc(v___x_6369_);
v___x_6371_ = l_Lean_Syntax_isOfKind(v___x_6369_, v___x_6370_);
if (v___x_6371_ == 0)
{
lean_object* v___x_6372_; 
lean_dec(v___x_6369_);
lean_dec(v___x_6362_);
lean_dec(v___y_6348_);
lean_dec(v___y_6343_);
lean_dec_ref(v_dec_6069_);
v___x_6372_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6372_;
}
else
{
lean_object* v___x_6373_; lean_object* v___x_6374_; 
v___x_6373_ = l_Lean_Syntax_getArg(v___x_6369_, v___x_6198_);
lean_dec(v___x_6369_);
v___x_6374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6374_, 0, v___x_6373_);
lean_inc(v___x_6362_);
v___y_6264_ = v___x_6360_;
v___y_6265_ = v___x_6362_;
v___y_6266_ = v___y_6342_;
v___y_6267_ = v___x_6364_;
v___y_6268_ = v___y_6343_;
v___y_6269_ = v___y_6344_;
v___y_6270_ = v___x_6362_;
v___y_6271_ = v___y_6347_;
v___y_6272_ = v___y_6348_;
v___y_6273_ = v___y_6349_;
v___y_6274_ = v___y_6350_;
v_patType_x3f_6275_ = v___x_6374_;
v___y_6276_ = v___y_6352_;
v___y_6277_ = v___y_6353_;
v___y_6278_ = v___y_6354_;
v___y_6279_ = v___y_6355_;
v___y_6280_ = v___y_6356_;
v___y_6281_ = v___y_6357_;
v___y_6282_ = v___y_6358_;
goto v___jp_6263_;
}
}
}
else
{
lean_dec(v___x_6365_);
lean_inc(v___y_6349_);
lean_inc(v___x_6362_);
v___y_6264_ = v___x_6360_;
v___y_6265_ = v___x_6362_;
v___y_6266_ = v___y_6342_;
v___y_6267_ = v___x_6364_;
v___y_6268_ = v___y_6343_;
v___y_6269_ = v___y_6344_;
v___y_6270_ = v___x_6362_;
v___y_6271_ = v___y_6347_;
v___y_6272_ = v___y_6348_;
v___y_6273_ = v___y_6349_;
v___y_6274_ = v___y_6350_;
v_patType_x3f_6275_ = v___y_6349_;
v___y_6276_ = v___y_6352_;
v___y_6277_ = v___y_6353_;
v___y_6278_ = v___y_6354_;
v___y_6279_ = v___y_6355_;
v___y_6280_ = v___y_6356_;
v___y_6281_ = v___y_6357_;
v___y_6282_ = v___y_6358_;
goto v___jp_6263_;
}
}
else
{
lean_object* v___x_6375_; lean_object* v___x_6376_; uint8_t v___x_6377_; 
v___x_6375_ = l_Lean_Syntax_getArg(v___x_6362_, v___x_6084_);
v___x_6376_ = l_Lean_Syntax_getArg(v___y_6348_, v___x_6198_);
v___x_6377_ = l_Lean_Syntax_isNone(v___x_6376_);
if (v___x_6377_ == 0)
{
uint8_t v___x_6378_; 
lean_inc(v___x_6376_);
v___x_6378_ = l_Lean_Syntax_matchesNull(v___x_6376_, v___x_6198_);
if (v___x_6378_ == 0)
{
lean_object* v___x_6379_; 
lean_dec(v___x_6376_);
lean_dec(v___x_6375_);
lean_dec(v___x_6362_);
lean_dec(v___y_6348_);
lean_dec(v___y_6343_);
lean_dec(v_tk_6197_);
lean_dec_ref(v_dec_6069_);
v___x_6379_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6379_;
}
else
{
lean_object* v___x_6380_; lean_object* v___x_6381_; uint8_t v___x_6382_; 
v___x_6380_ = l_Lean_Syntax_getArg(v___x_6376_, v___x_6084_);
lean_dec(v___x_6376_);
v___x_6381_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
lean_inc(v___x_6380_);
v___x_6382_ = l_Lean_Syntax_isOfKind(v___x_6380_, v___x_6381_);
if (v___x_6382_ == 0)
{
lean_object* v___x_6383_; 
lean_dec(v___x_6380_);
lean_dec(v___x_6375_);
lean_dec(v___x_6362_);
lean_dec(v___y_6348_);
lean_dec(v___y_6343_);
lean_dec(v_tk_6197_);
lean_dec_ref(v_dec_6069_);
v___x_6383_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6383_;
}
else
{
lean_object* v___x_6384_; lean_object* v___x_6385_; 
v___x_6384_ = l_Lean_Syntax_getArg(v___x_6380_, v___x_6198_);
lean_dec(v___x_6380_);
v___x_6385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6385_, 0, v___x_6384_);
lean_inc(v___x_6362_);
v___y_6200_ = v___x_6362_;
v___y_6201_ = v___y_6342_;
v___y_6202_ = v___x_6359_;
v___y_6203_ = v___x_6364_;
v___y_6204_ = v___y_6343_;
v___y_6205_ = v___y_6344_;
v___y_6206_ = v___x_6362_;
v___y_6207_ = v___x_6375_;
v___y_6208_ = v___y_6347_;
v___y_6209_ = v___y_6348_;
v___y_6210_ = v___y_6349_;
v___y_6211_ = v___y_6350_;
v_patType_x3f_6212_ = v___x_6385_;
v___y_6213_ = v___y_6352_;
v___y_6214_ = v___y_6353_;
v___y_6215_ = v___y_6354_;
v___y_6216_ = v___y_6355_;
v___y_6217_ = v___y_6356_;
v___y_6218_ = v___y_6357_;
v___y_6219_ = v___y_6358_;
goto v___jp_6199_;
}
}
}
else
{
lean_dec(v___x_6376_);
lean_inc(v___y_6349_);
lean_inc(v___x_6362_);
v___y_6200_ = v___x_6362_;
v___y_6201_ = v___y_6342_;
v___y_6202_ = v___x_6359_;
v___y_6203_ = v___x_6364_;
v___y_6204_ = v___y_6343_;
v___y_6205_ = v___y_6344_;
v___y_6206_ = v___x_6362_;
v___y_6207_ = v___x_6375_;
v___y_6208_ = v___y_6347_;
v___y_6209_ = v___y_6348_;
v___y_6210_ = v___y_6349_;
v___y_6211_ = v___y_6350_;
v_patType_x3f_6212_ = v___y_6349_;
v___y_6213_ = v___y_6352_;
v___y_6214_ = v___y_6353_;
v___y_6215_ = v___y_6354_;
v___y_6216_ = v___y_6355_;
v___y_6217_ = v___y_6356_;
v___y_6218_ = v___y_6357_;
v___y_6219_ = v___y_6358_;
goto v___jp_6199_;
}
}
}
}
else
{
lean_object* v___x_6386_; lean_object* v___x_6387_; uint8_t v___x_6388_; 
lean_dec(v___y_6343_);
v___x_6386_ = l_Lean_Syntax_getArg(v___y_6348_, v___x_6084_);
v___x_6387_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43));
lean_inc(v___x_6386_);
v___x_6388_ = l_Lean_Syntax_isOfKind(v___x_6386_, v___x_6387_);
if (v___x_6388_ == 0)
{
lean_object* v___x_6389_; 
lean_dec(v___x_6386_);
lean_dec(v___y_6351_);
lean_dec(v___y_6348_);
lean_dec(v_tk_6197_);
lean_dec_ref(v_dec_6069_);
v___x_6389_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6389_;
}
else
{
lean_object* v___x_6390_; uint8_t v___x_6391_; 
v___x_6390_ = l_Lean_Syntax_getArg(v___y_6348_, v___x_6198_);
v___x_6391_ = l_Lean_Syntax_isNone(v___x_6390_);
if (v___x_6391_ == 0)
{
uint8_t v___x_6392_; 
lean_inc(v___x_6390_);
v___x_6392_ = l_Lean_Syntax_matchesNull(v___x_6390_, v___x_6198_);
if (v___x_6392_ == 0)
{
lean_object* v___x_6393_; 
lean_dec(v___x_6390_);
lean_dec(v___x_6386_);
lean_dec(v___y_6351_);
lean_dec(v___y_6348_);
lean_dec(v_tk_6197_);
lean_dec_ref(v_dec_6069_);
v___x_6393_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6393_;
}
else
{
lean_object* v___x_6394_; lean_object* v___x_6395_; uint8_t v___x_6396_; 
v___x_6394_ = l_Lean_Syntax_getArg(v___x_6390_, v___x_6084_);
lean_dec(v___x_6390_);
v___x_6395_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
lean_inc(v___x_6394_);
v___x_6396_ = l_Lean_Syntax_isOfKind(v___x_6394_, v___x_6395_);
if (v___x_6396_ == 0)
{
lean_object* v___x_6397_; 
lean_dec(v___x_6394_);
lean_dec(v___x_6386_);
lean_dec(v___y_6351_);
lean_dec(v___y_6348_);
lean_dec(v_tk_6197_);
lean_dec_ref(v_dec_6069_);
v___x_6397_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6397_;
}
else
{
lean_object* v___x_6398_; lean_object* v___x_6399_; 
v___x_6398_ = l_Lean_Syntax_getArg(v___x_6394_, v___x_6198_);
lean_dec(v___x_6394_);
v___x_6399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6399_, 0, v___x_6398_);
v___y_6301_ = v___y_6344_;
v___y_6302_ = v___x_6386_;
v___y_6303_ = v___y_6347_;
v___y_6304_ = v___y_6348_;
v___y_6305_ = v___y_6351_;
v_xType_x3f_6306_ = v___x_6399_;
v___y_6307_ = v___y_6352_;
v___y_6308_ = v___y_6353_;
v___y_6309_ = v___y_6354_;
v___y_6310_ = v___y_6355_;
v___y_6311_ = v___y_6356_;
v___y_6312_ = v___y_6357_;
v___y_6313_ = v___y_6358_;
goto v___jp_6300_;
}
}
}
else
{
lean_dec(v___x_6390_);
lean_inc(v___y_6349_);
v___y_6301_ = v___y_6344_;
v___y_6302_ = v___x_6386_;
v___y_6303_ = v___y_6347_;
v___y_6304_ = v___y_6348_;
v___y_6305_ = v___y_6351_;
v_xType_x3f_6306_ = v___y_6349_;
v___y_6307_ = v___y_6352_;
v___y_6308_ = v___y_6353_;
v___y_6309_ = v___y_6354_;
v___y_6310_ = v___y_6355_;
v___y_6311_ = v___y_6356_;
v___y_6312_ = v___y_6357_;
v___y_6313_ = v___y_6358_;
goto v___jp_6300_;
}
}
}
}
v___jp_6400_:
{
lean_object* v___x_6419_; lean_object* v___x_6420_; lean_object* v_a_6421_; lean_object* v___x_6423_; uint8_t v_isShared_6424_; uint8_t v_isSharedCheck_6428_; 
lean_dec(v___y_6417_);
lean_dec(v___y_6410_);
lean_dec(v___y_6402_);
v___x_6419_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetArrow___closed__1, &l_Lean_Elab_Do_elabDoLetArrow___closed__1_once, _init_l_Lean_Elab_Do_elabDoLetArrow___closed__1);
v___x_6420_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg(v___y_6404_, v___x_6419_, v___y_6418_, v___y_6416_, v___y_6414_, v___y_6413_, v___y_6407_, v___y_6406_, v___y_6409_);
lean_dec(v___y_6404_);
v_a_6421_ = lean_ctor_get(v___x_6420_, 0);
v_isSharedCheck_6428_ = !lean_is_exclusive(v___x_6420_);
if (v_isSharedCheck_6428_ == 0)
{
v___x_6423_ = v___x_6420_;
v_isShared_6424_ = v_isSharedCheck_6428_;
goto v_resetjp_6422_;
}
else
{
lean_inc(v_a_6421_);
lean_dec(v___x_6420_);
v___x_6423_ = lean_box(0);
v_isShared_6424_ = v_isSharedCheck_6428_;
goto v_resetjp_6422_;
}
v_resetjp_6422_:
{
lean_object* v___x_6426_; 
if (v_isShared_6424_ == 0)
{
v___x_6426_ = v___x_6423_;
goto v_reusejp_6425_;
}
else
{
lean_object* v_reuseFailAlloc_6427_; 
v_reuseFailAlloc_6427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6427_, 0, v_a_6421_);
v___x_6426_ = v_reuseFailAlloc_6427_;
goto v_reusejp_6425_;
}
v_reusejp_6425_:
{
return v___x_6426_;
}
}
}
v___jp_6429_:
{
lean_object* v___x_6438_; lean_object* v_cfg_6439_; lean_object* v___x_6440_; uint8_t v___x_6441_; 
v___x_6438_ = lean_unsigned_to_nat(2u);
v_cfg_6439_ = l_Lean_Syntax_getArg(v_stx_6068_, v___x_6438_);
v___x_6440_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__3));
lean_inc(v_cfg_6439_);
v___x_6441_ = l_Lean_Syntax_isOfKind(v_cfg_6439_, v___x_6440_);
if (v___x_6441_ == 0)
{
lean_object* v___x_6442_; 
lean_dec(v_cfg_6439_);
lean_dec(v_mutTk_x3f_6430_);
lean_dec(v_tk_6197_);
lean_dec_ref(v_dec_6069_);
lean_dec(v_stx_6068_);
v___x_6442_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6442_;
}
else
{
lean_object* v___x_6443_; lean_object* v___x_6444_; lean_object* v___x_6445_; lean_object* v___x_6446_; uint8_t v___x_6447_; lean_object* v___x_6448_; lean_object* v___x_6449_; lean_object* v___x_6450_; 
v___x_6443_ = lean_unsigned_to_nat(3u);
v___x_6444_ = l_Lean_Syntax_getArg(v_stx_6068_, v___x_6443_);
lean_dec(v_stx_6068_);
v___x_6445_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__17));
v___x_6446_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetArrow___closed__3));
v___x_6447_ = 0;
v___x_6448_ = lean_box(0);
v___x_6449_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__4));
lean_inc(v_cfg_6439_);
v___x_6450_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut(v_cfg_6439_, v_mutTk_x3f_6430_, v___x_6449_, v___y_6431_, v___y_6432_, v___y_6433_, v___y_6434_, v___y_6435_, v___y_6436_, v___y_6437_);
if (lean_obj_tag(v___x_6450_) == 0)
{
lean_object* v_a_6451_; lean_object* v___x_6452_; 
v_a_6451_ = lean_ctor_get(v___x_6450_, 0);
lean_inc(v_a_6451_);
lean_dec_ref_known(v___x_6450_, 1);
v___x_6452_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg(v_a_6451_, v___y_6434_, v___y_6435_, v___y_6436_, v___y_6437_);
if (lean_obj_tag(v___x_6452_) == 0)
{
uint8_t v_nondep_6453_; 
lean_dec_ref_known(v___x_6452_, 1);
v_nondep_6453_ = lean_ctor_get_uint8(v_a_6451_, sizeof(void*)*1);
if (v_nondep_6453_ == 0)
{
uint8_t v_usedOnly_6454_; 
v_usedOnly_6454_ = lean_ctor_get_uint8(v_a_6451_, sizeof(void*)*1 + 1);
if (v_usedOnly_6454_ == 0)
{
uint8_t v_zeta_6455_; 
v_zeta_6455_ = lean_ctor_get_uint8(v_a_6451_, sizeof(void*)*1 + 2);
if (v_zeta_6455_ == 0)
{
lean_object* v_eq_x3f_6456_; 
v_eq_x3f_6456_ = lean_ctor_get(v_a_6451_, 0);
lean_inc(v_eq_x3f_6456_);
lean_dec(v_a_6451_);
if (lean_obj_tag(v_eq_x3f_6456_) == 0)
{
lean_dec(v_cfg_6439_);
lean_inc(v_mutTk_x3f_6430_);
v___y_6342_ = v___x_6440_;
v___y_6343_ = v_mutTk_x3f_6430_;
v___y_6344_ = v___x_6447_;
v___y_6345_ = v___x_6445_;
v___y_6346_ = v___x_6446_;
v___y_6347_ = v___x_6443_;
v___y_6348_ = v___x_6444_;
v___y_6349_ = v___x_6448_;
v___y_6350_ = v___x_6438_;
v___y_6351_ = v_mutTk_x3f_6430_;
v___y_6352_ = v___y_6431_;
v___y_6353_ = v___y_6432_;
v___y_6354_ = v___y_6433_;
v___y_6355_ = v___y_6434_;
v___y_6356_ = v___y_6435_;
v___y_6357_ = v___y_6436_;
v___y_6358_ = v___y_6437_;
goto v___jp_6341_;
}
else
{
lean_dec_ref_known(v_eq_x3f_6456_, 1);
lean_dec(v_tk_6197_);
lean_dec_ref(v_dec_6069_);
lean_inc(v_mutTk_x3f_6430_);
v___y_6401_ = v___x_6440_;
v___y_6402_ = v_mutTk_x3f_6430_;
v___y_6403_ = v___x_6445_;
v___y_6404_ = v_cfg_6439_;
v___y_6405_ = v___x_6447_;
v___y_6406_ = v___y_6436_;
v___y_6407_ = v___y_6435_;
v___y_6408_ = v___x_6446_;
v___y_6409_ = v___y_6437_;
v___y_6410_ = v___x_6444_;
v___y_6411_ = v___x_6443_;
v___y_6412_ = v___x_6448_;
v___y_6413_ = v___y_6434_;
v___y_6414_ = v___y_6433_;
v___y_6415_ = v___x_6438_;
v___y_6416_ = v___y_6432_;
v___y_6417_ = v_mutTk_x3f_6430_;
v___y_6418_ = v___y_6431_;
goto v___jp_6400_;
}
}
else
{
lean_dec(v_a_6451_);
lean_dec(v_tk_6197_);
lean_dec_ref(v_dec_6069_);
lean_inc(v_mutTk_x3f_6430_);
v___y_6401_ = v___x_6440_;
v___y_6402_ = v_mutTk_x3f_6430_;
v___y_6403_ = v___x_6445_;
v___y_6404_ = v_cfg_6439_;
v___y_6405_ = v___x_6447_;
v___y_6406_ = v___y_6436_;
v___y_6407_ = v___y_6435_;
v___y_6408_ = v___x_6446_;
v___y_6409_ = v___y_6437_;
v___y_6410_ = v___x_6444_;
v___y_6411_ = v___x_6443_;
v___y_6412_ = v___x_6448_;
v___y_6413_ = v___y_6434_;
v___y_6414_ = v___y_6433_;
v___y_6415_ = v___x_6438_;
v___y_6416_ = v___y_6432_;
v___y_6417_ = v_mutTk_x3f_6430_;
v___y_6418_ = v___y_6431_;
goto v___jp_6400_;
}
}
else
{
lean_dec(v_a_6451_);
lean_dec(v_tk_6197_);
lean_dec_ref(v_dec_6069_);
lean_inc(v_mutTk_x3f_6430_);
v___y_6401_ = v___x_6440_;
v___y_6402_ = v_mutTk_x3f_6430_;
v___y_6403_ = v___x_6445_;
v___y_6404_ = v_cfg_6439_;
v___y_6405_ = v___x_6447_;
v___y_6406_ = v___y_6436_;
v___y_6407_ = v___y_6435_;
v___y_6408_ = v___x_6446_;
v___y_6409_ = v___y_6437_;
v___y_6410_ = v___x_6444_;
v___y_6411_ = v___x_6443_;
v___y_6412_ = v___x_6448_;
v___y_6413_ = v___y_6434_;
v___y_6414_ = v___y_6433_;
v___y_6415_ = v___x_6438_;
v___y_6416_ = v___y_6432_;
v___y_6417_ = v_mutTk_x3f_6430_;
v___y_6418_ = v___y_6431_;
goto v___jp_6400_;
}
}
else
{
lean_dec(v_a_6451_);
lean_dec(v_tk_6197_);
lean_dec_ref(v_dec_6069_);
lean_inc(v_mutTk_x3f_6430_);
v___y_6401_ = v___x_6440_;
v___y_6402_ = v_mutTk_x3f_6430_;
v___y_6403_ = v___x_6445_;
v___y_6404_ = v_cfg_6439_;
v___y_6405_ = v___x_6447_;
v___y_6406_ = v___y_6436_;
v___y_6407_ = v___y_6435_;
v___y_6408_ = v___x_6446_;
v___y_6409_ = v___y_6437_;
v___y_6410_ = v___x_6444_;
v___y_6411_ = v___x_6443_;
v___y_6412_ = v___x_6448_;
v___y_6413_ = v___y_6434_;
v___y_6414_ = v___y_6433_;
v___y_6415_ = v___x_6438_;
v___y_6416_ = v___y_6432_;
v___y_6417_ = v_mutTk_x3f_6430_;
v___y_6418_ = v___y_6431_;
goto v___jp_6400_;
}
}
else
{
lean_object* v_a_6457_; lean_object* v___x_6459_; uint8_t v_isShared_6460_; uint8_t v_isSharedCheck_6464_; 
lean_dec(v_a_6451_);
lean_dec(v___x_6444_);
lean_dec(v_cfg_6439_);
lean_dec(v_mutTk_x3f_6430_);
lean_dec(v_tk_6197_);
lean_dec_ref(v_dec_6069_);
v_a_6457_ = lean_ctor_get(v___x_6452_, 0);
v_isSharedCheck_6464_ = !lean_is_exclusive(v___x_6452_);
if (v_isSharedCheck_6464_ == 0)
{
v___x_6459_ = v___x_6452_;
v_isShared_6460_ = v_isSharedCheck_6464_;
goto v_resetjp_6458_;
}
else
{
lean_inc(v_a_6457_);
lean_dec(v___x_6452_);
v___x_6459_ = lean_box(0);
v_isShared_6460_ = v_isSharedCheck_6464_;
goto v_resetjp_6458_;
}
v_resetjp_6458_:
{
lean_object* v___x_6462_; 
if (v_isShared_6460_ == 0)
{
v___x_6462_ = v___x_6459_;
goto v_reusejp_6461_;
}
else
{
lean_object* v_reuseFailAlloc_6463_; 
v_reuseFailAlloc_6463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6463_, 0, v_a_6457_);
v___x_6462_ = v_reuseFailAlloc_6463_;
goto v_reusejp_6461_;
}
v_reusejp_6461_:
{
return v___x_6462_;
}
}
}
}
else
{
lean_object* v_a_6465_; lean_object* v___x_6467_; uint8_t v_isShared_6468_; uint8_t v_isSharedCheck_6472_; 
lean_dec(v___x_6444_);
lean_dec(v_cfg_6439_);
lean_dec(v_mutTk_x3f_6430_);
lean_dec(v_tk_6197_);
lean_dec_ref(v_dec_6069_);
v_a_6465_ = lean_ctor_get(v___x_6450_, 0);
v_isSharedCheck_6472_ = !lean_is_exclusive(v___x_6450_);
if (v_isSharedCheck_6472_ == 0)
{
v___x_6467_ = v___x_6450_;
v_isShared_6468_ = v_isSharedCheck_6472_;
goto v_resetjp_6466_;
}
else
{
lean_inc(v_a_6465_);
lean_dec(v___x_6450_);
v___x_6467_ = lean_box(0);
v_isShared_6468_ = v_isSharedCheck_6472_;
goto v_resetjp_6466_;
}
v_resetjp_6466_:
{
lean_object* v___x_6470_; 
if (v_isShared_6468_ == 0)
{
v___x_6470_ = v___x_6467_;
goto v_reusejp_6469_;
}
else
{
lean_object* v_reuseFailAlloc_6471_; 
v_reuseFailAlloc_6471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6471_, 0, v_a_6465_);
v___x_6470_ = v_reuseFailAlloc_6471_;
goto v_reusejp_6469_;
}
v_reusejp_6469_:
{
return v___x_6470_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___boxed(lean_object* v_stx_6480_, lean_object* v_dec_6481_, lean_object* v_a_6482_, lean_object* v_a_6483_, lean_object* v_a_6484_, lean_object* v_a_6485_, lean_object* v_a_6486_, lean_object* v_a_6487_, lean_object* v_a_6488_, lean_object* v_a_6489_){
_start:
{
lean_object* v_res_6490_; 
v_res_6490_ = l_Lean_Elab_Do_elabDoLetArrow(v_stx_6480_, v_dec_6481_, v_a_6482_, v_a_6483_, v_a_6484_, v_a_6485_, v_a_6486_, v_a_6487_, v_a_6488_);
lean_dec(v_a_6488_);
lean_dec_ref(v_a_6487_);
lean_dec(v_a_6486_);
lean_dec_ref(v_a_6485_);
lean_dec(v_a_6484_);
lean_dec_ref(v_a_6483_);
lean_dec_ref(v_a_6482_);
return v_res_6490_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1(){
_start:
{
lean_object* v___x_6498_; lean_object* v___x_6499_; lean_object* v___x_6500_; lean_object* v___x_6501_; lean_object* v___x_6502_; 
v___x_6498_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_6499_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__15));
v___x_6500_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1));
v___x_6501_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetArrow___boxed), 10, 0);
v___x_6502_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_6498_, v___x_6499_, v___x_6500_, v___x_6501_);
return v___x_6502_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___boxed(lean_object* v_a_6503_){
_start:
{
lean_object* v_res_6504_; 
v_res_6504_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1();
return v_res_6504_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoReassignArrow___closed__3(void){
_start:
{
lean_object* v___x_6512_; lean_object* v___x_6513_; 
v___x_6512_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReassignArrow___closed__2));
v___x_6513_ = l_Lean_stringToMessageData(v___x_6512_);
return v___x_6513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassignArrow(lean_object* v_stx_6514_, lean_object* v_dec_6515_, lean_object* v_a_6516_, lean_object* v_a_6517_, lean_object* v_a_6518_, lean_object* v_a_6519_, lean_object* v_a_6520_, lean_object* v_a_6521_, lean_object* v_a_6522_){
_start:
{
lean_object* v___x_6524_; uint8_t v___x_6525_; 
v___x_6524_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReassignArrow___closed__1));
lean_inc(v_stx_6514_);
v___x_6525_ = l_Lean_Syntax_isOfKind(v_stx_6514_, v___x_6524_);
if (v___x_6525_ == 0)
{
lean_object* v___x_6526_; 
lean_dec_ref(v_dec_6515_);
lean_dec(v_stx_6514_);
v___x_6526_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6526_;
}
else
{
lean_object* v___x_6527_; lean_object* v___x_6528_; lean_object* v___x_6529_; uint8_t v___x_6530_; 
v___x_6527_ = lean_unsigned_to_nat(0u);
v___x_6528_ = l_Lean_Syntax_getArg(v_stx_6514_, v___x_6527_);
lean_dec(v_stx_6514_);
v___x_6529_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__17));
lean_inc(v___x_6528_);
v___x_6530_ = l_Lean_Syntax_isOfKind(v___x_6528_, v___x_6529_);
if (v___x_6530_ == 0)
{
lean_object* v___x_6531_; uint8_t v___x_6532_; 
v___x_6531_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetArrow___closed__3));
lean_inc(v___x_6528_);
v___x_6532_ = l_Lean_Syntax_isOfKind(v___x_6528_, v___x_6531_);
if (v___x_6532_ == 0)
{
lean_object* v___x_6533_; 
lean_dec(v___x_6528_);
lean_dec_ref(v_dec_6515_);
v___x_6533_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6533_;
}
else
{
lean_object* v___x_6534_; lean_object* v___y_6536_; lean_object* v___y_6537_; lean_object* v___y_6538_; lean_object* v___y_6539_; lean_object* v___y_6540_; lean_object* v___y_6541_; lean_object* v___y_6542_; lean_object* v___y_6543_; lean_object* v___y_6544_; lean_object* v_t_x3f_6573_; lean_object* v___y_6574_; lean_object* v___y_6575_; lean_object* v___y_6576_; lean_object* v___y_6577_; lean_object* v___y_6578_; lean_object* v___y_6579_; lean_object* v___y_6580_; lean_object* v___x_6598_; lean_object* v___x_6599_; uint8_t v___x_6600_; 
v___x_6534_ = l_Lean_Syntax_getArg(v___x_6528_, v___x_6527_);
v___x_6598_ = lean_unsigned_to_nat(1u);
v___x_6599_ = l_Lean_Syntax_getArg(v___x_6528_, v___x_6598_);
v___x_6600_ = l_Lean_Syntax_isNone(v___x_6599_);
if (v___x_6600_ == 0)
{
uint8_t v___x_6601_; 
lean_inc(v___x_6599_);
v___x_6601_ = l_Lean_Syntax_matchesNull(v___x_6599_, v___x_6598_);
if (v___x_6601_ == 0)
{
lean_object* v___x_6602_; 
lean_dec(v___x_6599_);
lean_dec(v___x_6534_);
lean_dec(v___x_6528_);
lean_dec_ref(v_dec_6515_);
v___x_6602_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6602_;
}
else
{
lean_object* v___x_6603_; lean_object* v___x_6604_; uint8_t v___x_6605_; 
v___x_6603_ = l_Lean_Syntax_getArg(v___x_6599_, v___x_6527_);
lean_dec(v___x_6599_);
v___x_6604_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
lean_inc(v___x_6603_);
v___x_6605_ = l_Lean_Syntax_isOfKind(v___x_6603_, v___x_6604_);
if (v___x_6605_ == 0)
{
lean_object* v___x_6606_; 
lean_dec(v___x_6603_);
lean_dec(v___x_6534_);
lean_dec(v___x_6528_);
lean_dec_ref(v_dec_6515_);
v___x_6606_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6606_;
}
else
{
lean_object* v_t_x3f_6607_; lean_object* v___x_6608_; 
v_t_x3f_6607_ = l_Lean_Syntax_getArg(v___x_6603_, v___x_6598_);
lean_dec(v___x_6603_);
v___x_6608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6608_, 0, v_t_x3f_6607_);
v_t_x3f_6573_ = v___x_6608_;
v___y_6574_ = v_a_6516_;
v___y_6575_ = v_a_6517_;
v___y_6576_ = v_a_6518_;
v___y_6577_ = v_a_6519_;
v___y_6578_ = v_a_6520_;
v___y_6579_ = v_a_6521_;
v___y_6580_ = v_a_6522_;
goto v___jp_6572_;
}
}
}
else
{
lean_object* v___x_6609_; 
lean_dec(v___x_6599_);
v___x_6609_ = lean_box(0);
v_t_x3f_6573_ = v___x_6609_;
v___y_6574_ = v_a_6516_;
v___y_6575_ = v_a_6517_;
v___y_6576_ = v_a_6518_;
v___y_6577_ = v_a_6519_;
v___y_6578_ = v_a_6520_;
v___y_6579_ = v_a_6521_;
v___y_6580_ = v_a_6522_;
goto v___jp_6572_;
}
v___jp_6535_:
{
lean_object* v___x_6545_; lean_object* v___x_6546_; 
v___x_6545_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__13));
v___x_6546_ = l_Lean_Core_mkFreshUserName(v___x_6545_, v___y_6543_, v___y_6544_);
if (lean_obj_tag(v___x_6546_) == 0)
{
lean_object* v_a_6547_; lean_object* v_ref_6548_; lean_object* v___x_6549_; lean_object* v___x_6550_; lean_object* v___x_6551_; lean_object* v___x_6552_; lean_object* v___x_6553_; lean_object* v___x_6554_; lean_object* v___x_6555_; lean_object* v___x_6556_; lean_object* v___x_6557_; lean_object* v___x_6558_; uint8_t v_kind_6559_; lean_object* v___x_6560_; lean_object* v___x_6561_; lean_object* v___x_6562_; lean_object* v___x_6563_; 
v_a_6547_ = lean_ctor_get(v___x_6546_, 0);
lean_inc(v_a_6547_);
lean_dec_ref_known(v___x_6546_, 1);
v_ref_6548_ = lean_ctor_get(v___y_6543_, 2);
v___x_6549_ = l_Lean_mkIdentFrom(v___x_6534_, v_a_6547_, v___x_6530_);
v___x_6550_ = l_Lean_SourceInfo_fromRef(v_ref_6548_, v___x_6530_);
v___x_6551_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReassign___closed__1));
v___x_6552_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10));
v___x_6553_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_6554_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
lean_inc_n(v___x_6550_, 3);
v___x_6555_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_6555_, 0, v___x_6550_);
lean_ctor_set(v___x_6555_, 1, v___x_6553_);
lean_ctor_set(v___x_6555_, 2, v___x_6554_);
v___x_6556_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_6557_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_6557_, 0, v___x_6550_);
lean_ctor_set(v___x_6557_, 1, v___x_6556_);
lean_inc(v___x_6549_);
lean_inc_ref(v___x_6555_);
v___x_6558_ = l_Lean_Syntax_node5(v___x_6550_, v___x_6552_, v___x_6534_, v___x_6555_, v___x_6555_, v___x_6557_, v___x_6549_);
v_kind_6559_ = lean_ctor_get_uint8(v_dec_6515_, sizeof(void*)*3);
v___x_6560_ = l_Lean_Syntax_node1(v___x_6550_, v___x_6551_, v___x_6558_);
v___x_6561_ = lean_box(v___x_6532_);
v___x_6562_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoElem___boxed), 11, 3);
lean_closure_set(v___x_6562_, 0, v___x_6560_);
lean_closure_set(v___x_6562_, 1, v_dec_6515_);
lean_closure_set(v___x_6562_, 2, v___x_6561_);
v___x_6563_ = l_Lean_Elab_Do_elabDoIdDecl(v___x_6549_, v___y_6536_, v___y_6537_, v___x_6562_, v_kind_6559_, v___y_6538_, v___y_6539_, v___y_6540_, v___y_6541_, v___y_6542_, v___y_6543_, v___y_6544_);
return v___x_6563_;
}
else
{
lean_object* v_a_6564_; lean_object* v___x_6566_; uint8_t v_isShared_6567_; uint8_t v_isSharedCheck_6571_; 
lean_dec(v___y_6537_);
lean_dec(v___y_6536_);
lean_dec(v___x_6534_);
lean_dec_ref(v_dec_6515_);
v_a_6564_ = lean_ctor_get(v___x_6546_, 0);
v_isSharedCheck_6571_ = !lean_is_exclusive(v___x_6546_);
if (v_isSharedCheck_6571_ == 0)
{
v___x_6566_ = v___x_6546_;
v_isShared_6567_ = v_isSharedCheck_6571_;
goto v_resetjp_6565_;
}
else
{
lean_inc(v_a_6564_);
lean_dec(v___x_6546_);
v___x_6566_ = lean_box(0);
v_isShared_6567_ = v_isSharedCheck_6571_;
goto v_resetjp_6565_;
}
v_resetjp_6565_:
{
lean_object* v___x_6569_; 
if (v_isShared_6567_ == 0)
{
v___x_6569_ = v___x_6566_;
goto v_reusejp_6568_;
}
else
{
lean_object* v_reuseFailAlloc_6570_; 
v_reuseFailAlloc_6570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6570_, 0, v_a_6564_);
v___x_6569_ = v_reuseFailAlloc_6570_;
goto v_reusejp_6568_;
}
v_reusejp_6568_:
{
return v___x_6569_;
}
}
}
}
v___jp_6572_:
{
lean_object* v___x_6581_; lean_object* v_rhs_6582_; lean_object* v___x_6583_; lean_object* v___x_6584_; uint8_t v___x_6585_; 
v___x_6581_ = lean_unsigned_to_nat(3u);
v_rhs_6582_ = l_Lean_Syntax_getArg(v___x_6528_, v___x_6581_);
v___x_6583_ = lean_unsigned_to_nat(4u);
v___x_6584_ = l_Lean_Syntax_getArg(v___x_6528_, v___x_6583_);
lean_dec(v___x_6528_);
v___x_6585_ = l_Lean_Syntax_isNone(v___x_6584_);
if (v___x_6585_ == 0)
{
uint8_t v___x_6586_; 
lean_dec(v_rhs_6582_);
lean_dec(v_t_x3f_6573_);
lean_dec(v___x_6534_);
lean_dec_ref(v_dec_6515_);
v___x_6586_ = l_Lean_Syntax_matchesNull(v___x_6584_, v___x_6581_);
if (v___x_6586_ == 0)
{
lean_object* v___x_6587_; 
v___x_6587_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6587_;
}
else
{
lean_object* v___x_6588_; lean_object* v___x_6589_; lean_object* v_a_6590_; lean_object* v___x_6592_; uint8_t v_isShared_6593_; uint8_t v_isSharedCheck_6597_; 
v___x_6588_ = lean_obj_once(&l_Lean_Elab_Do_elabDoReassignArrow___closed__3, &l_Lean_Elab_Do_elabDoReassignArrow___closed__3_once, _init_l_Lean_Elab_Do_elabDoReassignArrow___closed__3);
v___x_6589_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg(v___x_6588_, v___y_6577_, v___y_6578_, v___y_6579_, v___y_6580_);
v_a_6590_ = lean_ctor_get(v___x_6589_, 0);
v_isSharedCheck_6597_ = !lean_is_exclusive(v___x_6589_);
if (v_isSharedCheck_6597_ == 0)
{
v___x_6592_ = v___x_6589_;
v_isShared_6593_ = v_isSharedCheck_6597_;
goto v_resetjp_6591_;
}
else
{
lean_inc(v_a_6590_);
lean_dec(v___x_6589_);
v___x_6592_ = lean_box(0);
v_isShared_6593_ = v_isSharedCheck_6597_;
goto v_resetjp_6591_;
}
v_resetjp_6591_:
{
lean_object* v___x_6595_; 
if (v_isShared_6593_ == 0)
{
v___x_6595_ = v___x_6592_;
goto v_reusejp_6594_;
}
else
{
lean_object* v_reuseFailAlloc_6596_; 
v_reuseFailAlloc_6596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6596_, 0, v_a_6590_);
v___x_6595_ = v_reuseFailAlloc_6596_;
goto v_reusejp_6594_;
}
v_reusejp_6594_:
{
return v___x_6595_;
}
}
}
}
else
{
lean_dec(v___x_6584_);
v___y_6536_ = v_t_x3f_6573_;
v___y_6537_ = v_rhs_6582_;
v___y_6538_ = v___y_6574_;
v___y_6539_ = v___y_6575_;
v___y_6540_ = v___y_6576_;
v___y_6541_ = v___y_6577_;
v___y_6542_ = v___y_6578_;
v___y_6543_ = v___y_6579_;
v___y_6544_ = v___y_6580_;
goto v___jp_6535_;
}
}
}
}
else
{
lean_object* v_x_6610_; lean_object* v___x_6611_; uint8_t v___x_6612_; lean_object* v___y_6614_; lean_object* v_t_6615_; lean_object* v___y_6616_; lean_object* v___y_6617_; lean_object* v___y_6618_; lean_object* v___y_6619_; lean_object* v___y_6620_; lean_object* v___y_6621_; lean_object* v___y_6622_; lean_object* v_t_x3f_6655_; lean_object* v___y_6656_; lean_object* v___y_6657_; lean_object* v___y_6658_; lean_object* v___y_6659_; lean_object* v___y_6660_; lean_object* v___y_6661_; lean_object* v___y_6662_; 
v_x_6610_ = l_Lean_Syntax_getArg(v___x_6528_, v___x_6527_);
v___x_6611_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43));
lean_inc(v_x_6610_);
v___x_6612_ = l_Lean_Syntax_isOfKind(v_x_6610_, v___x_6611_);
if (v___x_6612_ == 0)
{
lean_object* v___x_6697_; 
lean_dec(v_x_6610_);
lean_dec(v___x_6528_);
lean_dec_ref(v_dec_6515_);
v___x_6697_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6697_;
}
else
{
lean_object* v___x_6698_; lean_object* v___x_6699_; uint8_t v___x_6700_; 
v___x_6698_ = lean_unsigned_to_nat(1u);
v___x_6699_ = l_Lean_Syntax_getArg(v___x_6528_, v___x_6698_);
v___x_6700_ = l_Lean_Syntax_isNone(v___x_6699_);
if (v___x_6700_ == 0)
{
uint8_t v___x_6701_; 
lean_inc(v___x_6699_);
v___x_6701_ = l_Lean_Syntax_matchesNull(v___x_6699_, v___x_6698_);
if (v___x_6701_ == 0)
{
lean_object* v___x_6702_; 
lean_dec(v___x_6699_);
lean_dec(v_x_6610_);
lean_dec(v___x_6528_);
lean_dec_ref(v_dec_6515_);
v___x_6702_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6702_;
}
else
{
lean_object* v___x_6703_; lean_object* v___x_6704_; uint8_t v___x_6705_; 
v___x_6703_ = l_Lean_Syntax_getArg(v___x_6699_, v___x_6527_);
lean_dec(v___x_6699_);
v___x_6704_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
lean_inc(v___x_6703_);
v___x_6705_ = l_Lean_Syntax_isOfKind(v___x_6703_, v___x_6704_);
if (v___x_6705_ == 0)
{
lean_object* v___x_6706_; 
lean_dec(v___x_6703_);
lean_dec(v_x_6610_);
lean_dec(v___x_6528_);
lean_dec_ref(v_dec_6515_);
v___x_6706_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6706_;
}
else
{
lean_object* v_t_x3f_6707_; lean_object* v___x_6708_; 
v_t_x3f_6707_ = l_Lean_Syntax_getArg(v___x_6703_, v___x_6698_);
lean_dec(v___x_6703_);
v___x_6708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6708_, 0, v_t_x3f_6707_);
v_t_x3f_6655_ = v___x_6708_;
v___y_6656_ = v_a_6516_;
v___y_6657_ = v_a_6517_;
v___y_6658_ = v_a_6518_;
v___y_6659_ = v_a_6519_;
v___y_6660_ = v_a_6520_;
v___y_6661_ = v_a_6521_;
v___y_6662_ = v_a_6522_;
goto v___jp_6654_;
}
}
}
else
{
lean_object* v___x_6709_; 
lean_dec(v___x_6699_);
v___x_6709_ = lean_box(0);
v_t_x3f_6655_ = v___x_6709_;
v___y_6656_ = v_a_6516_;
v___y_6657_ = v_a_6517_;
v___y_6658_ = v_a_6518_;
v___y_6659_ = v_a_6519_;
v___y_6660_ = v_a_6520_;
v___y_6661_ = v_a_6521_;
v___y_6662_ = v_a_6522_;
goto v___jp_6654_;
}
}
v___jp_6613_:
{
lean_object* v___x_6623_; lean_object* v___x_6624_; 
v___x_6623_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__13));
v___x_6624_ = l_Lean_Core_mkFreshUserName(v___x_6623_, v___y_6621_, v___y_6622_);
if (lean_obj_tag(v___x_6624_) == 0)
{
lean_object* v_a_6625_; lean_object* v_ref_6626_; uint8_t v___x_6627_; lean_object* v___x_6628_; lean_object* v___x_6629_; lean_object* v___x_6630_; lean_object* v___x_6631_; lean_object* v___x_6632_; lean_object* v___x_6633_; lean_object* v___x_6634_; lean_object* v___x_6635_; lean_object* v___x_6636_; lean_object* v___x_6637_; lean_object* v___x_6638_; lean_object* v___x_6639_; uint8_t v_kind_6640_; lean_object* v___x_6641_; lean_object* v___x_6642_; lean_object* v___x_6643_; lean_object* v___x_6644_; lean_object* v___x_6645_; 
v_a_6625_ = lean_ctor_get(v___x_6624_, 0);
lean_inc(v_a_6625_);
lean_dec_ref_known(v___x_6624_, 1);
v_ref_6626_ = lean_ctor_get(v___y_6621_, 2);
v___x_6627_ = 0;
v___x_6628_ = l_Lean_mkIdentFrom(v_x_6610_, v_a_6625_, v___x_6627_);
v___x_6629_ = l_Lean_SourceInfo_fromRef(v_ref_6626_, v___x_6627_);
v___x_6630_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReassign___closed__1));
v___x_6631_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__4));
v___x_6632_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41));
lean_inc_n(v___x_6629_, 4);
v___x_6633_ = l_Lean_Syntax_node1(v___x_6629_, v___x_6632_, v_x_6610_);
v___x_6634_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_6635_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_6636_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_6636_, 0, v___x_6629_);
lean_ctor_set(v___x_6636_, 1, v___x_6634_);
lean_ctor_set(v___x_6636_, 2, v___x_6635_);
v___x_6637_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_6638_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_6638_, 0, v___x_6629_);
lean_ctor_set(v___x_6638_, 1, v___x_6637_);
lean_inc(v___x_6628_);
lean_inc_ref(v___x_6636_);
v___x_6639_ = l_Lean_Syntax_node5(v___x_6629_, v___x_6631_, v___x_6633_, v___x_6636_, v___x_6636_, v___x_6638_, v___x_6628_);
v_kind_6640_ = lean_ctor_get_uint8(v_dec_6515_, sizeof(void*)*3);
v___x_6641_ = l_Lean_Syntax_node1(v___x_6629_, v___x_6630_, v___x_6639_);
v___x_6642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6642_, 0, v_t_6615_);
v___x_6643_ = lean_box(v___x_6612_);
v___x_6644_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoElem___boxed), 11, 3);
lean_closure_set(v___x_6644_, 0, v___x_6641_);
lean_closure_set(v___x_6644_, 1, v_dec_6515_);
lean_closure_set(v___x_6644_, 2, v___x_6643_);
v___x_6645_ = l_Lean_Elab_Do_elabDoIdDecl(v___x_6628_, v___x_6642_, v___y_6614_, v___x_6644_, v_kind_6640_, v___y_6616_, v___y_6617_, v___y_6618_, v___y_6619_, v___y_6620_, v___y_6621_, v___y_6622_);
return v___x_6645_;
}
else
{
lean_object* v_a_6646_; lean_object* v___x_6648_; uint8_t v_isShared_6649_; uint8_t v_isSharedCheck_6653_; 
lean_dec(v_t_6615_);
lean_dec(v___y_6614_);
lean_dec(v_x_6610_);
lean_dec_ref(v_dec_6515_);
v_a_6646_ = lean_ctor_get(v___x_6624_, 0);
v_isSharedCheck_6653_ = !lean_is_exclusive(v___x_6624_);
if (v_isSharedCheck_6653_ == 0)
{
v___x_6648_ = v___x_6624_;
v_isShared_6649_ = v_isSharedCheck_6653_;
goto v_resetjp_6647_;
}
else
{
lean_inc(v_a_6646_);
lean_dec(v___x_6624_);
v___x_6648_ = lean_box(0);
v_isShared_6649_ = v_isSharedCheck_6653_;
goto v_resetjp_6647_;
}
v_resetjp_6647_:
{
lean_object* v___x_6651_; 
if (v_isShared_6649_ == 0)
{
v___x_6651_ = v___x_6648_;
goto v_reusejp_6650_;
}
else
{
lean_object* v_reuseFailAlloc_6652_; 
v_reuseFailAlloc_6652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6652_, 0, v_a_6646_);
v___x_6651_ = v_reuseFailAlloc_6652_;
goto v_reusejp_6650_;
}
v_reusejp_6650_:
{
return v___x_6651_;
}
}
}
}
v___jp_6654_:
{
lean_object* v___x_6663_; lean_object* v_rhs_6664_; lean_object* v___x_6665_; 
v___x_6663_ = lean_unsigned_to_nat(3u);
v_rhs_6664_ = l_Lean_Syntax_getArg(v___x_6528_, v___x_6663_);
lean_dec(v___x_6528_);
v___x_6665_ = l_Lean_Elab_Do_throwUnlessMutVarDeclared(v_x_6610_, v___y_6656_, v___y_6657_, v___y_6658_, v___y_6659_, v___y_6660_, v___y_6661_, v___y_6662_);
if (lean_obj_tag(v___x_6665_) == 0)
{
lean_dec_ref_known(v___x_6665_, 1);
if (lean_obj_tag(v_t_x3f_6655_) == 0)
{
lean_object* v___x_6666_; lean_object* v___x_6667_; 
v___x_6666_ = l_Lean_TSyntax_getId(v_x_6610_);
v___x_6667_ = l_Lean_Meta_getLocalDeclFromUserName(v___x_6666_, v___y_6659_, v___y_6660_, v___y_6661_, v___y_6662_);
if (lean_obj_tag(v___x_6667_) == 0)
{
lean_object* v_a_6668_; lean_object* v___x_6669_; lean_object* v___x_6670_; 
v_a_6668_ = lean_ctor_get(v___x_6667_, 0);
lean_inc(v_a_6668_);
lean_dec_ref_known(v___x_6667_, 1);
v___x_6669_ = l_Lean_LocalDecl_type(v_a_6668_);
lean_dec(v_a_6668_);
v___x_6670_ = l_Lean_Elab_Term_exprToSyntax(v___x_6669_, v___y_6657_, v___y_6658_, v___y_6659_, v___y_6660_, v___y_6661_, v___y_6662_);
if (lean_obj_tag(v___x_6670_) == 0)
{
lean_object* v_a_6671_; 
v_a_6671_ = lean_ctor_get(v___x_6670_, 0);
lean_inc(v_a_6671_);
lean_dec_ref_known(v___x_6670_, 1);
v___y_6614_ = v_rhs_6664_;
v_t_6615_ = v_a_6671_;
v___y_6616_ = v___y_6656_;
v___y_6617_ = v___y_6657_;
v___y_6618_ = v___y_6658_;
v___y_6619_ = v___y_6659_;
v___y_6620_ = v___y_6660_;
v___y_6621_ = v___y_6661_;
v___y_6622_ = v___y_6662_;
goto v___jp_6613_;
}
else
{
lean_object* v_a_6672_; lean_object* v___x_6674_; uint8_t v_isShared_6675_; uint8_t v_isSharedCheck_6679_; 
lean_dec(v_rhs_6664_);
lean_dec(v_x_6610_);
lean_dec_ref(v_dec_6515_);
v_a_6672_ = lean_ctor_get(v___x_6670_, 0);
v_isSharedCheck_6679_ = !lean_is_exclusive(v___x_6670_);
if (v_isSharedCheck_6679_ == 0)
{
v___x_6674_ = v___x_6670_;
v_isShared_6675_ = v_isSharedCheck_6679_;
goto v_resetjp_6673_;
}
else
{
lean_inc(v_a_6672_);
lean_dec(v___x_6670_);
v___x_6674_ = lean_box(0);
v_isShared_6675_ = v_isSharedCheck_6679_;
goto v_resetjp_6673_;
}
v_resetjp_6673_:
{
lean_object* v___x_6677_; 
if (v_isShared_6675_ == 0)
{
v___x_6677_ = v___x_6674_;
goto v_reusejp_6676_;
}
else
{
lean_object* v_reuseFailAlloc_6678_; 
v_reuseFailAlloc_6678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6678_, 0, v_a_6672_);
v___x_6677_ = v_reuseFailAlloc_6678_;
goto v_reusejp_6676_;
}
v_reusejp_6676_:
{
return v___x_6677_;
}
}
}
}
else
{
lean_object* v_a_6680_; lean_object* v___x_6682_; uint8_t v_isShared_6683_; uint8_t v_isSharedCheck_6687_; 
lean_dec(v_rhs_6664_);
lean_dec(v_x_6610_);
lean_dec_ref(v_dec_6515_);
v_a_6680_ = lean_ctor_get(v___x_6667_, 0);
v_isSharedCheck_6687_ = !lean_is_exclusive(v___x_6667_);
if (v_isSharedCheck_6687_ == 0)
{
v___x_6682_ = v___x_6667_;
v_isShared_6683_ = v_isSharedCheck_6687_;
goto v_resetjp_6681_;
}
else
{
lean_inc(v_a_6680_);
lean_dec(v___x_6667_);
v___x_6682_ = lean_box(0);
v_isShared_6683_ = v_isSharedCheck_6687_;
goto v_resetjp_6681_;
}
v_resetjp_6681_:
{
lean_object* v___x_6685_; 
if (v_isShared_6683_ == 0)
{
v___x_6685_ = v___x_6682_;
goto v_reusejp_6684_;
}
else
{
lean_object* v_reuseFailAlloc_6686_; 
v_reuseFailAlloc_6686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6686_, 0, v_a_6680_);
v___x_6685_ = v_reuseFailAlloc_6686_;
goto v_reusejp_6684_;
}
v_reusejp_6684_:
{
return v___x_6685_;
}
}
}
}
else
{
lean_object* v_val_6688_; 
v_val_6688_ = lean_ctor_get(v_t_x3f_6655_, 0);
lean_inc(v_val_6688_);
lean_dec_ref_known(v_t_x3f_6655_, 1);
v___y_6614_ = v_rhs_6664_;
v_t_6615_ = v_val_6688_;
v___y_6616_ = v___y_6656_;
v___y_6617_ = v___y_6657_;
v___y_6618_ = v___y_6658_;
v___y_6619_ = v___y_6659_;
v___y_6620_ = v___y_6660_;
v___y_6621_ = v___y_6661_;
v___y_6622_ = v___y_6662_;
goto v___jp_6613_;
}
}
else
{
lean_object* v_a_6689_; lean_object* v___x_6691_; uint8_t v_isShared_6692_; uint8_t v_isSharedCheck_6696_; 
lean_dec(v_rhs_6664_);
lean_dec(v_t_x3f_6655_);
lean_dec(v_x_6610_);
lean_dec_ref(v_dec_6515_);
v_a_6689_ = lean_ctor_get(v___x_6665_, 0);
v_isSharedCheck_6696_ = !lean_is_exclusive(v___x_6665_);
if (v_isSharedCheck_6696_ == 0)
{
v___x_6691_ = v___x_6665_;
v_isShared_6692_ = v_isSharedCheck_6696_;
goto v_resetjp_6690_;
}
else
{
lean_inc(v_a_6689_);
lean_dec(v___x_6665_);
v___x_6691_ = lean_box(0);
v_isShared_6692_ = v_isSharedCheck_6696_;
goto v_resetjp_6690_;
}
v_resetjp_6690_:
{
lean_object* v___x_6694_; 
if (v_isShared_6692_ == 0)
{
v___x_6694_ = v___x_6691_;
goto v_reusejp_6693_;
}
else
{
lean_object* v_reuseFailAlloc_6695_; 
v_reuseFailAlloc_6695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6695_, 0, v_a_6689_);
v___x_6694_ = v_reuseFailAlloc_6695_;
goto v_reusejp_6693_;
}
v_reusejp_6693_:
{
return v___x_6694_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassignArrow___boxed(lean_object* v_stx_6710_, lean_object* v_dec_6711_, lean_object* v_a_6712_, lean_object* v_a_6713_, lean_object* v_a_6714_, lean_object* v_a_6715_, lean_object* v_a_6716_, lean_object* v_a_6717_, lean_object* v_a_6718_, lean_object* v_a_6719_){
_start:
{
lean_object* v_res_6720_; 
v_res_6720_ = l_Lean_Elab_Do_elabDoReassignArrow(v_stx_6710_, v_dec_6711_, v_a_6712_, v_a_6713_, v_a_6714_, v_a_6715_, v_a_6716_, v_a_6717_, v_a_6718_);
lean_dec(v_a_6718_);
lean_dec_ref(v_a_6717_);
lean_dec(v_a_6716_);
lean_dec_ref(v_a_6715_);
lean_dec(v_a_6714_);
lean_dec_ref(v_a_6713_);
lean_dec_ref(v_a_6712_);
return v_res_6720_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1(){
_start:
{
lean_object* v___x_6728_; lean_object* v___x_6729_; lean_object* v___x_6730_; lean_object* v___x_6731_; lean_object* v___x_6732_; 
v___x_6728_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_6729_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReassignArrow___closed__1));
v___x_6730_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1));
v___x_6731_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoReassignArrow___boxed), 10, 0);
v___x_6732_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_6728_, v___x_6729_, v___x_6730_, v___x_6731_);
return v___x_6732_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___boxed(lean_object* v_a_6733_){
_start:
{
lean_object* v_res_6734_; 
v_res_6734_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1();
return v_res_6734_;
}
}
lean_object* runtime_initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_BuiltinDo_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Do_PatternVar(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_BuiltinDo_Let(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinDo_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_PatternVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init_Data_Erased(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Do(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_BuiltinDo_Let(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init_Data_Erased(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Erased(uint8_t builtin);
lean_object* initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* initialize_Lean_Parser_Do(uint8_t builtin);
lean_object* initialize_Lean_Elab_BuiltinDo_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Do_PatternVar(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_BuiltinDo_Let(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Erased(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_BuiltinDo_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Do_PatternVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinDo_Let(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_BuiltinDo_Let(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_BuiltinDo_Let(builtin);
}
#ifdef __cplusplus
}
#endif
