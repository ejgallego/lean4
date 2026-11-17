// Lean compiler output
// Module: Lean.Elab.PreDefinition.WF.Main
// Imports: public import Lean.Elab.PreDefinition.WF.PackMutual public import Lean.Elab.PreDefinition.WF.FloatRecApp public import Lean.Elab.PreDefinition.WF.Rel public import Lean.Elab.PreDefinition.WF.Fix public import Lean.Elab.PreDefinition.WF.Unfold public import Lean.Elab.PreDefinition.WF.Preprocess public import Lean.Elab.PreDefinition.WF.GuessLex
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
lean_object* lean_array_uget(lean_object*, size_t);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Meta_unfoldIfArgIsAppOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_floatRecApp(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_guessLex(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAsAxiom___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getFixedParamPerms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_Elab_WF_varyingVarNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_packMutual(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Elab_WF_mkFix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDeclsFrom(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_copyExtraModUses(lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_isNatLtWF(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_DefKind_isTheorem(uint8_t);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Mutual_cleanPreDef(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedPreDefinition_default;
lean_object* l_Lean_enableRealizationsForConst(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Mutual_addPreDefAttributes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_unlockAsync(lean_object*);
lean_object* l_Lean_Elab_WF_preDefsFromUnaryNonRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAndCompilePartialRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_registerEqnsInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_markAsRecursive___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_mkUnfoldEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l_Lean_Elab_WF_elabWFRel___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__16___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__16___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__16___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "well-founded recursion cannot be used, `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__7___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__7___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__7___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__7___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "` does not take any (non-fixed) arguments"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__7___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__7___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__7___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__7___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__9___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_wfRecursion___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Elab_wfRecursion___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_wfRecursion___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Elab_wfRecursion___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_wfRecursion___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Elab_wfRecursion___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_wfRecursion___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13_spec__16___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13_spec__16___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13_spec__16___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13_spec__16___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13_spec__16___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13_spec__16___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__2;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__3;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__4;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "marking functions defined by well-founded recursion as `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "` is not effective"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reducible"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(29, 67, 225, 118, 155, 2, 197, 97)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "semireducible"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2___closed__4_value),LEAN_SCALAR_PTR_LITERAL(106, 254, 211, 230, 8, 182, 79, 36)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2___closed__5_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__14(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__12(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__12___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_wfRecursion___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "wfRel: "};
static const lean_object* l_Lean_Elab_wfRecursion___lam__3___closed__0 = (const lean_object*)&l_Lean_Elab_wfRecursion___lam__3___closed__0_value;
static lean_once_cell_t l_Lean_Elab_wfRecursion___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___lam__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__3___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_wfRecursion___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "wfRecursion: expected unary function type: "};
static const lean_object* l_Lean_Elab_wfRecursion___lam__4___closed__0 = (const lean_object*)&l_Lean_Elab_wfRecursion___lam__4___closed__0_value;
static lean_once_cell_t l_Lean_Elab_wfRecursion___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___lam__4___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__4(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19_spec__23___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19_spec__23___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19_spec__23___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__18___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__17___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_wfRecursion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean_Elab_wfRecursion___closed__0 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__0_value;
static const lean_string_object l_Lean_Elab_wfRecursion___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "wf"};
static const lean_object* l_Lean_Elab_wfRecursion___closed__1 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__1_value;
static const lean_ctor_object l_Lean_Elab_wfRecursion___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l_Lean_Elab_wfRecursion___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_wfRecursion___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_wfRecursion___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l_Lean_Elab_wfRecursion___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_wfRecursion___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_wfRecursion___closed__1_value),LEAN_SCALAR_PTR_LITERAL(235, 76, 232, 241, 91, 21, 77, 227)}};
static const lean_object* l_Lean_Elab_wfRecursion___closed__2 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__2_value;
static const lean_string_object l_Lean_Elab_wfRecursion___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = ">> "};
static const lean_object* l_Lean_Elab_wfRecursion___closed__3 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__3_value;
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__4;
static const lean_string_object l_Lean_Elab_wfRecursion___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " :=\n"};
static const lean_object* l_Lean_Elab_wfRecursion___closed__5 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__5_value;
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__6;
static const lean_string_object l_Lean_Elab_wfRecursion___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unaryPreDefProcessed:"};
static const lean_object* l_Lean_Elab_wfRecursion___closed__7 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__7_value;
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__8;
static const lean_string_object l_Lean_Elab_wfRecursion___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "unaryPreDef:"};
static const lean_object* l_Lean_Elab_wfRecursion___closed__9 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__9_value;
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__10;
static const lean_ctor_object l_Lean_Elab_wfRecursion___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Elab_wfRecursion___boxed__const__1 = (const lean_object*)&l_Lean_Elab_wfRecursion___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__9(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13_spec__16(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__17(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__18(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19_spec__23(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PreDefinition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 172, 242, 185, 134, 214, 81, 182)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "WF"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(231, 60, 146, 67, 170, 35, 9, 50)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Main"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(142, 191, 24, 173, 99, 110, 250, 159)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(183, 176, 152, 199, 88, 244, 126, 231)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(74, 192, 220, 42, 201, 36, 231, 139)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(136, 8, 70, 241, 95, 177, 39, 230)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(165, 164, 65, 123, 204, 166, 116, 237)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(24, 212, 71, 249, 113, 26, 236, 1)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(145, 192, 221, 228, 155, 175, 93, 246)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 119, 48, 4, 113, 111, 251, 171)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(12, 104, 40, 162, 247, 89, 56, 248)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(128, 159, 143, 175, 93, 190, 135, 30)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(5, 178, 65, 214, 219, 44, 29, 26)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1197449596) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(114, 70, 68, 25, 255, 132, 81, 38)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 173, 23, 241, 152, 14, 79, 23)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(93, 207, 166, 163, 30, 74, 122, 49)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(48, 76, 225, 120, 116, 96, 87, 123)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__16___redArg___lam__0(lean_object* v_k_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v_b_4_, lean_object* v_c_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_){
_start:
{
lean_object* v___x_11_; 
lean_inc(v___y_9_);
lean_inc_ref(v___y_8_);
lean_inc(v___y_7_);
lean_inc_ref(v___y_6_);
lean_inc(v___y_3_);
lean_inc_ref(v___y_2_);
v___x_11_ = lean_apply_9(v_k_1_, v_b_4_, v_c_5_, v___y_2_, v___y_3_, v___y_6_, v___y_7_, v___y_8_, v___y_9_, lean_box(0));
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__16___redArg___lam__0___boxed(lean_object* v_k_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v_b_15_, lean_object* v_c_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__16___redArg___lam__0(v_k_12_, v___y_13_, v___y_14_, v_b_15_, v_c_16_, v___y_17_, v___y_18_, v___y_19_, v___y_20_);
lean_dec(v___y_20_);
lean_dec_ref(v___y_19_);
lean_dec(v___y_18_);
lean_dec_ref(v___y_17_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__16___redArg(lean_object* v_type_23_, lean_object* v_maxFVars_x3f_24_, lean_object* v_k_25_, uint8_t v_cleanupAnnotations_26_, uint8_t v_whnfType_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_){
_start:
{
lean_object* v___f_35_; lean_object* v___x_36_; 
lean_inc(v___y_29_);
lean_inc_ref(v___y_28_);
v___f_35_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__16___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_35_, 0, v_k_25_);
lean_closure_set(v___f_35_, 1, v___y_28_);
lean_closure_set(v___f_35_, 2, v___y_29_);
v___x_36_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_23_, v_maxFVars_x3f_24_, v___f_35_, v_cleanupAnnotations_26_, v_whnfType_27_, v___y_30_, v___y_31_, v___y_32_, v___y_33_);
if (lean_obj_tag(v___x_36_) == 0)
{
return v___x_36_;
}
else
{
lean_object* v_a_37_; lean_object* v___x_39_; uint8_t v_isShared_40_; uint8_t v_isSharedCheck_44_; 
v_a_37_ = lean_ctor_get(v___x_36_, 0);
v_isSharedCheck_44_ = !lean_is_exclusive(v___x_36_);
if (v_isSharedCheck_44_ == 0)
{
v___x_39_ = v___x_36_;
v_isShared_40_ = v_isSharedCheck_44_;
goto v_resetjp_38_;
}
else
{
lean_inc(v_a_37_);
lean_dec(v___x_36_);
v___x_39_ = lean_box(0);
v_isShared_40_ = v_isSharedCheck_44_;
goto v_resetjp_38_;
}
v_resetjp_38_:
{
lean_object* v___x_42_; 
if (v_isShared_40_ == 0)
{
v___x_42_ = v___x_39_;
goto v_reusejp_41_;
}
else
{
lean_object* v_reuseFailAlloc_43_; 
v_reuseFailAlloc_43_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_43_, 0, v_a_37_);
v___x_42_ = v_reuseFailAlloc_43_;
goto v_reusejp_41_;
}
v_reusejp_41_:
{
return v___x_42_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__16___redArg___boxed(lean_object* v_type_45_, lean_object* v_maxFVars_x3f_46_, lean_object* v_k_47_, lean_object* v_cleanupAnnotations_48_, lean_object* v_whnfType_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_57_; uint8_t v_whnfType_boxed_58_; lean_object* v_res_59_; 
v_cleanupAnnotations_boxed_57_ = lean_unbox(v_cleanupAnnotations_48_);
v_whnfType_boxed_58_ = lean_unbox(v_whnfType_49_);
v_res_59_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__16___redArg(v_type_45_, v_maxFVars_x3f_46_, v_k_47_, v_cleanupAnnotations_boxed_57_, v_whnfType_boxed_58_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_);
lean_dec(v___y_55_);
lean_dec_ref(v___y_54_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__16(lean_object* v_00_u03b1_60_, lean_object* v_type_61_, lean_object* v_maxFVars_x3f_62_, lean_object* v_k_63_, uint8_t v_cleanupAnnotations_64_, uint8_t v_whnfType_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__16___redArg(v_type_61_, v_maxFVars_x3f_62_, v_k_63_, v_cleanupAnnotations_64_, v_whnfType_65_, v___y_66_, v___y_67_, v___y_68_, v___y_69_, v___y_70_, v___y_71_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__16___boxed(lean_object* v_00_u03b1_74_, lean_object* v_type_75_, lean_object* v_maxFVars_x3f_76_, lean_object* v_k_77_, lean_object* v_cleanupAnnotations_78_, lean_object* v_whnfType_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_87_; uint8_t v_whnfType_boxed_88_; lean_object* v_res_89_; 
v_cleanupAnnotations_boxed_87_ = lean_unbox(v_cleanupAnnotations_78_);
v_whnfType_boxed_88_ = lean_unbox(v_whnfType_79_);
v_res_89_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__16(v_00_u03b1_74_, v_type_75_, v_maxFVars_x3f_76_, v_k_77_, v_cleanupAnnotations_boxed_87_, v_whnfType_boxed_88_, v___y_80_, v___y_81_, v___y_82_, v___y_83_, v___y_84_, v___y_85_);
lean_dec(v___y_85_);
lean_dec_ref(v___y_84_);
lean_dec(v___y_83_);
lean_dec_ref(v___y_82_);
lean_dec(v___y_81_);
lean_dec_ref(v___y_80_);
return v_res_89_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___closed__0(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = lean_box(1);
v___x_91_ = l_Lean_MessageData_ofFormat(v___x_90_);
return v___x_91_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___closed__3(void){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_95_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___closed__2));
v___x_96_ = l_Lean_MessageData_ofFormat(v___x_95_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4(lean_object* v_x_97_, lean_object* v_x_98_){
_start:
{
if (lean_obj_tag(v_x_98_) == 0)
{
return v_x_97_;
}
else
{
lean_object* v_head_99_; lean_object* v_tail_100_; lean_object* v___x_102_; uint8_t v_isShared_103_; uint8_t v_isSharedCheck_122_; 
v_head_99_ = lean_ctor_get(v_x_98_, 0);
v_tail_100_ = lean_ctor_get(v_x_98_, 1);
v_isSharedCheck_122_ = !lean_is_exclusive(v_x_98_);
if (v_isSharedCheck_122_ == 0)
{
v___x_102_ = v_x_98_;
v_isShared_103_ = v_isSharedCheck_122_;
goto v_resetjp_101_;
}
else
{
lean_inc(v_tail_100_);
lean_inc(v_head_99_);
lean_dec(v_x_98_);
v___x_102_ = lean_box(0);
v_isShared_103_ = v_isSharedCheck_122_;
goto v_resetjp_101_;
}
v_resetjp_101_:
{
lean_object* v_before_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_120_; 
v_before_104_ = lean_ctor_get(v_head_99_, 0);
v_isSharedCheck_120_ = !lean_is_exclusive(v_head_99_);
if (v_isSharedCheck_120_ == 0)
{
lean_object* v_unused_121_; 
v_unused_121_ = lean_ctor_get(v_head_99_, 1);
lean_dec(v_unused_121_);
v___x_106_ = v_head_99_;
v_isShared_107_ = v_isSharedCheck_120_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_before_104_);
lean_dec(v_head_99_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_120_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
lean_object* v___x_108_; lean_object* v___x_110_; 
v___x_108_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___closed__0);
if (v_isShared_107_ == 0)
{
lean_ctor_set_tag(v___x_106_, 7);
lean_ctor_set(v___x_106_, 1, v___x_108_);
lean_ctor_set(v___x_106_, 0, v_x_97_);
v___x_110_ = v___x_106_;
goto v_reusejp_109_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v_x_97_);
lean_ctor_set(v_reuseFailAlloc_119_, 1, v___x_108_);
v___x_110_ = v_reuseFailAlloc_119_;
goto v_reusejp_109_;
}
v_reusejp_109_:
{
lean_object* v___x_111_; lean_object* v___x_113_; 
v___x_111_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___closed__3);
if (v_isShared_103_ == 0)
{
lean_ctor_set_tag(v___x_102_, 7);
lean_ctor_set(v___x_102_, 1, v___x_111_);
lean_ctor_set(v___x_102_, 0, v___x_110_);
v___x_113_ = v___x_102_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v___x_110_);
lean_ctor_set(v_reuseFailAlloc_118_, 1, v___x_111_);
v___x_113_ = v_reuseFailAlloc_118_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_114_ = l_Lean_MessageData_ofSyntax(v_before_104_);
v___x_115_ = l_Lean_indentD(v___x_114_);
v___x_116_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_116_, 0, v___x_113_);
lean_ctor_set(v___x_116_, 1, v___x_115_);
v_x_97_ = v___x_116_;
v_x_98_ = v_tail_100_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__3(lean_object* v_opts_123_, lean_object* v_opt_124_){
_start:
{
lean_object* v_name_125_; lean_object* v_defValue_126_; lean_object* v_map_127_; lean_object* v___x_128_; 
v_name_125_ = lean_ctor_get(v_opt_124_, 0);
v_defValue_126_ = lean_ctor_get(v_opt_124_, 1);
v_map_127_ = lean_ctor_get(v_opts_123_, 0);
v___x_128_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_127_, v_name_125_);
if (lean_obj_tag(v___x_128_) == 0)
{
uint8_t v___x_129_; 
v___x_129_ = lean_unbox(v_defValue_126_);
return v___x_129_;
}
else
{
lean_object* v_val_130_; 
v_val_130_ = lean_ctor_get(v___x_128_, 0);
lean_inc(v_val_130_);
lean_dec_ref_known(v___x_128_, 1);
if (lean_obj_tag(v_val_130_) == 1)
{
uint8_t v_v_131_; 
v_v_131_ = lean_ctor_get_uint8(v_val_130_, 0);
lean_dec_ref_known(v_val_130_, 0);
return v_v_131_;
}
else
{
uint8_t v___x_132_; 
lean_dec(v_val_130_);
v___x_132_ = lean_unbox(v_defValue_126_);
return v___x_132_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__3___boxed(lean_object* v_opts_133_, lean_object* v_opt_134_){
_start:
{
uint8_t v_res_135_; lean_object* v_r_136_; 
v_res_135_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__3(v_opts_133_, v_opt_134_);
lean_dec_ref(v_opt_134_);
lean_dec_ref(v_opts_133_);
v_r_136_ = lean_box(v_res_135_);
return v_r_136_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_140_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__1));
v___x_141_ = l_Lean_MessageData_ofFormat(v___x_140_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg(lean_object* v_msgData_142_, lean_object* v_macroStack_143_, lean_object* v___y_144_){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; uint8_t v___x_148_; 
v___x_146_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_144_);
v___x_147_ = l_Lean_Elab_pp_macroStack;
v___x_148_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__3(v___x_146_, v___x_147_);
lean_dec_ref(v___x_146_);
if (v___x_148_ == 0)
{
lean_object* v___x_149_; 
lean_dec(v_macroStack_143_);
v___x_149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_149_, 0, v_msgData_142_);
return v___x_149_;
}
else
{
if (lean_obj_tag(v_macroStack_143_) == 0)
{
lean_object* v___x_150_; 
v___x_150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_150_, 0, v_msgData_142_);
return v___x_150_;
}
else
{
lean_object* v_head_151_; lean_object* v_after_152_; lean_object* v___x_154_; uint8_t v_isShared_155_; uint8_t v_isSharedCheck_167_; 
v_head_151_ = lean_ctor_get(v_macroStack_143_, 0);
lean_inc(v_head_151_);
v_after_152_ = lean_ctor_get(v_head_151_, 1);
v_isSharedCheck_167_ = !lean_is_exclusive(v_head_151_);
if (v_isSharedCheck_167_ == 0)
{
lean_object* v_unused_168_; 
v_unused_168_ = lean_ctor_get(v_head_151_, 0);
lean_dec(v_unused_168_);
v___x_154_ = v_head_151_;
v_isShared_155_ = v_isSharedCheck_167_;
goto v_resetjp_153_;
}
else
{
lean_inc(v_after_152_);
lean_dec(v_head_151_);
v___x_154_ = lean_box(0);
v_isShared_155_ = v_isSharedCheck_167_;
goto v_resetjp_153_;
}
v_resetjp_153_:
{
lean_object* v___x_156_; lean_object* v___x_158_; 
v___x_156_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___closed__0);
if (v_isShared_155_ == 0)
{
lean_ctor_set_tag(v___x_154_, 7);
lean_ctor_set(v___x_154_, 1, v___x_156_);
lean_ctor_set(v___x_154_, 0, v_msgData_142_);
v___x_158_ = v___x_154_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_msgData_142_);
lean_ctor_set(v_reuseFailAlloc_166_, 1, v___x_156_);
v___x_158_ = v_reuseFailAlloc_166_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v_msgData_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_159_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2);
v___x_160_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_160_, 0, v___x_158_);
lean_ctor_set(v___x_160_, 1, v___x_159_);
v___x_161_ = l_Lean_MessageData_ofSyntax(v_after_152_);
v___x_162_ = l_Lean_indentD(v___x_161_);
v_msgData_163_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_163_, 0, v___x_160_);
lean_ctor_set(v_msgData_163_, 1, v___x_162_);
v___x_164_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4(v_msgData_163_, v_macroStack_143_);
v___x_165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
return v___x_165_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___boxed(lean_object* v_msgData_169_, lean_object* v_macroStack_170_, lean_object* v___y_171_, lean_object* v___y_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg(v_msgData_169_, v_macroStack_170_, v___y_171_);
lean_dec_ref(v___y_171_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(lean_object* v_msgData_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
lean_object* v___x_180_; lean_object* v_env_181_; uint8_t v___x_182_; lean_object* v_env_183_; lean_object* v___x_184_; lean_object* v_toCold_185_; lean_object* v_mctx_186_; lean_object* v_lctx_187_; lean_object* v_options_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_180_ = lean_st_ref_get(v___y_178_);
v_env_181_ = lean_ctor_get(v___x_180_, 0);
lean_inc_ref(v_env_181_);
lean_dec(v___x_180_);
v___x_182_ = 0;
v_env_183_ = l_Lean_Environment_setRecordingDeps(v_env_181_, v___x_182_);
v___x_184_ = lean_st_ref_get(v___y_176_);
v_toCold_185_ = lean_ctor_get(v___y_177_, 0);
v_mctx_186_ = lean_ctor_get(v___x_184_, 0);
lean_inc_ref(v_mctx_186_);
lean_dec(v___x_184_);
v_lctx_187_ = lean_ctor_get(v___y_175_, 2);
v_options_188_ = lean_ctor_get(v_toCold_185_, 2);
lean_inc_ref(v_options_188_);
lean_inc_ref(v_lctx_187_);
v___x_189_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_189_, 0, v_env_183_);
lean_ctor_set(v___x_189_, 1, v_mctx_186_);
lean_ctor_set(v___x_189_, 2, v_lctx_187_);
lean_ctor_set(v___x_189_, 3, v_options_188_);
v___x_190_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_190_, 0, v___x_189_);
lean_ctor_set(v___x_190_, 1, v_msgData_174_);
v___x_191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_191_, 0, v___x_190_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0___boxed(lean_object* v_msgData_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_){
_start:
{
lean_object* v_res_198_; 
v_res_198_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(v_msgData_192_, v___y_193_, v___y_194_, v___y_195_, v___y_196_);
lean_dec(v___y_196_);
lean_dec_ref(v___y_195_);
lean_dec(v___y_194_);
lean_dec_ref(v___y_193_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(lean_object* v_msg_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_){
_start:
{
lean_object* v_ref_207_; lean_object* v_macroStack_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v_a_211_; lean_object* v___x_212_; lean_object* v_a_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_221_; 
v_ref_207_ = lean_ctor_get(v___y_204_, 2);
v_macroStack_208_ = lean_ctor_get(v___y_200_, 1);
v___x_209_ = l_Lean_Elab_getBetterRef(v_ref_207_, v_macroStack_208_);
v___x_210_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(v_msg_199_, v___y_202_, v___y_203_, v___y_204_, v___y_205_);
v_a_211_ = lean_ctor_get(v___x_210_, 0);
lean_inc(v_a_211_);
lean_dec_ref(v___x_210_);
lean_inc(v_macroStack_208_);
v___x_212_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg(v_a_211_, v_macroStack_208_, v___y_204_);
v_a_213_ = lean_ctor_get(v___x_212_, 0);
v_isSharedCheck_221_ = !lean_is_exclusive(v___x_212_);
if (v_isSharedCheck_221_ == 0)
{
v___x_215_ = v___x_212_;
v_isShared_216_ = v_isSharedCheck_221_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_a_213_);
lean_dec(v___x_212_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_221_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___x_217_; lean_object* v___x_219_; 
v___x_217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_217_, 0, v___x_209_);
lean_ctor_set(v___x_217_, 1, v_a_213_);
if (v_isShared_216_ == 0)
{
lean_ctor_set_tag(v___x_215_, 1);
lean_ctor_set(v___x_215_, 0, v___x_217_);
v___x_219_ = v___x_215_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v___x_217_);
v___x_219_ = v_reuseFailAlloc_220_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
return v___x_219_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg___boxed(lean_object* v_msg_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(v_msg_222_, v___y_223_, v___y_224_, v___y_225_, v___y_226_, v___y_227_, v___y_228_);
lean_dec(v___y_228_);
lean_dec_ref(v___y_227_);
lean_dec(v___y_226_);
lean_dec_ref(v___y_225_);
lean_dec(v___y_224_);
lean_dec_ref(v___y_223_);
return v_res_230_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__7___closed__1(void){
_start:
{
lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_232_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__7___closed__0));
v___x_233_ = l_Lean_stringToMessageData(v___x_232_);
return v___x_233_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__7___closed__3(void){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_235_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__7___closed__2));
v___x_236_ = l_Lean_stringToMessageData(v___x_235_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__7(lean_object* v_as_237_, size_t v_sz_238_, size_t v_i_239_, lean_object* v_b_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_){
_start:
{
lean_object* v_a_249_; uint8_t v___x_253_; 
v___x_253_ = lean_usize_dec_lt(v_i_239_, v_sz_238_);
if (v___x_253_ == 0)
{
lean_object* v___x_254_; 
v___x_254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_254_, 0, v_b_240_);
return v___x_254_;
}
else
{
lean_object* v_array_255_; lean_object* v_start_256_; lean_object* v_stop_257_; uint8_t v___x_258_; 
v_array_255_ = lean_ctor_get(v_b_240_, 0);
v_start_256_ = lean_ctor_get(v_b_240_, 1);
v_stop_257_ = lean_ctor_get(v_b_240_, 2);
v___x_258_ = lean_nat_dec_lt(v_start_256_, v_stop_257_);
if (v___x_258_ == 0)
{
lean_object* v___x_259_; 
v___x_259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_259_, 0, v_b_240_);
return v___x_259_;
}
else
{
lean_object* v___x_261_; uint8_t v_isShared_262_; uint8_t v_isSharedCheck_288_; 
lean_inc(v_stop_257_);
lean_inc(v_start_256_);
lean_inc_ref(v_array_255_);
v_isSharedCheck_288_ = !lean_is_exclusive(v_b_240_);
if (v_isSharedCheck_288_ == 0)
{
lean_object* v_unused_289_; lean_object* v_unused_290_; lean_object* v_unused_291_; 
v_unused_289_ = lean_ctor_get(v_b_240_, 2);
lean_dec(v_unused_289_);
v_unused_290_ = lean_ctor_get(v_b_240_, 1);
lean_dec(v_unused_290_);
v_unused_291_ = lean_ctor_get(v_b_240_, 0);
lean_dec(v_unused_291_);
v___x_261_ = v_b_240_;
v_isShared_262_ = v_isSharedCheck_288_;
goto v_resetjp_260_;
}
else
{
lean_dec(v_b_240_);
v___x_261_ = lean_box(0);
v_isShared_262_ = v_isSharedCheck_288_;
goto v_resetjp_260_;
}
v_resetjp_260_:
{
lean_object* v_a_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_268_; 
v_a_263_ = lean_array_uget_borrowed(v_as_237_, v_i_239_);
v___x_264_ = lean_array_fget(v_array_255_, v_start_256_);
v___x_265_ = lean_unsigned_to_nat(1u);
v___x_266_ = lean_nat_add(v_start_256_, v___x_265_);
lean_dec(v_start_256_);
if (v_isShared_262_ == 0)
{
lean_ctor_set(v___x_261_, 1, v___x_266_);
v___x_268_ = v___x_261_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_array_255_);
lean_ctor_set(v_reuseFailAlloc_287_, 1, v___x_266_);
lean_ctor_set(v_reuseFailAlloc_287_, 2, v_stop_257_);
v___x_268_ = v_reuseFailAlloc_287_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
lean_object* v___x_269_; lean_object* v___x_270_; uint8_t v___x_271_; 
v___x_269_ = lean_array_get_size(v_a_263_);
v___x_270_ = lean_unsigned_to_nat(0u);
v___x_271_ = lean_nat_dec_eq(v___x_269_, v___x_270_);
if (v___x_271_ == 0)
{
lean_dec(v___x_264_);
v_a_249_ = v___x_268_;
goto v___jp_248_;
}
else
{
lean_object* v_declName_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v_declName_272_ = lean_ctor_get(v___x_264_, 3);
lean_inc(v_declName_272_);
lean_dec(v___x_264_);
v___x_273_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__7___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__7___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__7___closed__1);
v___x_274_ = l_Lean_MessageData_ofName(v_declName_272_);
v___x_275_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_275_, 0, v___x_273_);
lean_ctor_set(v___x_275_, 1, v___x_274_);
v___x_276_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__7___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__7___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__7___closed__3);
v___x_277_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_277_, 0, v___x_275_);
lean_ctor_set(v___x_277_, 1, v___x_276_);
v___x_278_ = l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(v___x_277_, v___y_241_, v___y_242_, v___y_243_, v___y_244_, v___y_245_, v___y_246_);
if (lean_obj_tag(v___x_278_) == 0)
{
lean_dec_ref_known(v___x_278_, 1);
v_a_249_ = v___x_268_;
goto v___jp_248_;
}
else
{
lean_object* v_a_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_286_; 
lean_dec_ref(v___x_268_);
v_a_279_ = lean_ctor_get(v___x_278_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_286_ == 0)
{
v___x_281_ = v___x_278_;
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_a_279_);
lean_dec(v___x_278_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_284_; 
if (v_isShared_282_ == 0)
{
v___x_284_ = v___x_281_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v_a_279_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
}
}
}
}
}
v___jp_248_:
{
size_t v___x_250_; size_t v___x_251_; 
v___x_250_ = ((size_t)1ULL);
v___x_251_ = lean_usize_add(v_i_239_, v___x_250_);
v_i_239_ = v___x_251_;
v_b_240_ = v_a_249_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__7___boxed(lean_object* v_as_292_, lean_object* v_sz_293_, lean_object* v_i_294_, lean_object* v_b_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_){
_start:
{
size_t v_sz_boxed_303_; size_t v_i_boxed_304_; lean_object* v_res_305_; 
v_sz_boxed_303_ = lean_unbox_usize(v_sz_293_);
lean_dec(v_sz_293_);
v_i_boxed_304_ = lean_unbox_usize(v_i_294_);
lean_dec(v_i_294_);
v_res_305_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__7(v_as_292_, v_sz_boxed_303_, v_i_boxed_304_, v_b_295_, v___y_296_, v___y_297_, v___y_298_, v___y_299_, v___y_300_, v___y_301_);
lean_dec(v___y_301_);
lean_dec_ref(v___y_300_);
lean_dec(v___y_299_);
lean_dec_ref(v___y_298_);
lean_dec(v___y_297_);
lean_dec_ref(v___y_296_);
lean_dec_ref(v_as_292_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___redArg(lean_object* v_as_306_, size_t v_sz_307_, size_t v_i_308_, lean_object* v_b_309_, lean_object* v___y_310_, lean_object* v___y_311_){
_start:
{
uint8_t v___x_313_; 
v___x_313_ = lean_usize_dec_lt(v_i_308_, v_sz_307_);
if (v___x_313_ == 0)
{
lean_object* v___x_314_; 
v___x_314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_314_, 0, v_b_309_);
return v___x_314_;
}
else
{
lean_object* v___x_315_; lean_object* v_a_316_; lean_object* v___x_317_; 
v___x_315_ = lean_box(0);
v_a_316_ = lean_array_uget_borrowed(v_as_306_, v_i_308_);
lean_inc(v_a_316_);
v___x_317_ = l_Lean_Elab_addAsAxiom___redArg(v_a_316_, v___y_310_, v___y_311_);
if (lean_obj_tag(v___x_317_) == 0)
{
size_t v___x_318_; size_t v___x_319_; 
lean_dec_ref_known(v___x_317_, 1);
v___x_318_ = ((size_t)1ULL);
v___x_319_ = lean_usize_add(v_i_308_, v___x_318_);
v_i_308_ = v___x_319_;
v_b_309_ = v___x_315_;
goto _start;
}
else
{
return v___x_317_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___redArg___boxed(lean_object* v_as_321_, lean_object* v_sz_322_, lean_object* v_i_323_, lean_object* v_b_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_){
_start:
{
size_t v_sz_boxed_328_; size_t v_i_boxed_329_; lean_object* v_res_330_; 
v_sz_boxed_328_ = lean_unbox_usize(v_sz_322_);
lean_dec(v_sz_322_);
v_i_boxed_329_ = lean_unbox_usize(v_i_323_);
lean_dec(v_i_323_);
v_res_330_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___redArg(v_as_321_, v_sz_boxed_328_, v_i_boxed_329_, v_b_324_, v___y_325_, v___y_326_);
lean_dec(v___y_326_);
lean_dec_ref(v___y_325_);
lean_dec_ref(v_as_321_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6___redArg(lean_object* v_a_331_, size_t v_sz_332_, size_t v_i_333_, lean_object* v_bs_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_){
_start:
{
uint8_t v___x_340_; 
v___x_340_ = lean_usize_dec_lt(v_i_333_, v_sz_332_);
if (v___x_340_ == 0)
{
lean_object* v___x_341_; 
lean_dec_ref(v_a_331_);
v___x_341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_341_, 0, v_bs_334_);
return v___x_341_;
}
else
{
lean_object* v_v_342_; lean_object* v___x_343_; lean_object* v_bs_x27_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v_v_342_ = lean_array_uget(v_bs_334_, v_i_333_);
v___x_343_ = lean_unsigned_to_nat(0u);
v_bs_x27_344_ = lean_array_uset(v_bs_334_, v_i_333_, v___x_343_);
v___x_345_ = lean_usize_to_nat(v_i_333_);
lean_inc_ref(v_a_331_);
v___x_346_ = l_Lean_Elab_WF_varyingVarNames(v_a_331_, v___x_345_, v_v_342_, v___y_335_, v___y_336_, v___y_337_, v___y_338_);
if (lean_obj_tag(v___x_346_) == 0)
{
lean_object* v_a_347_; size_t v___x_348_; size_t v___x_349_; lean_object* v___x_350_; 
v_a_347_ = lean_ctor_get(v___x_346_, 0);
lean_inc(v_a_347_);
lean_dec_ref_known(v___x_346_, 1);
v___x_348_ = ((size_t)1ULL);
v___x_349_ = lean_usize_add(v_i_333_, v___x_348_);
v___x_350_ = lean_array_uset(v_bs_x27_344_, v_i_333_, v_a_347_);
v_i_333_ = v___x_349_;
v_bs_334_ = v___x_350_;
goto _start;
}
else
{
lean_object* v_a_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_359_; 
lean_dec_ref(v_bs_x27_344_);
lean_dec_ref(v_a_331_);
v_a_352_ = lean_ctor_get(v___x_346_, 0);
v_isSharedCheck_359_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_359_ == 0)
{
v___x_354_ = v___x_346_;
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_a_352_);
lean_dec(v___x_346_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_357_; 
if (v_isShared_355_ == 0)
{
v___x_357_ = v___x_354_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_a_352_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
return v___x_357_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6___redArg___boxed(lean_object* v_a_360_, lean_object* v_sz_361_, lean_object* v_i_362_, lean_object* v_bs_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_){
_start:
{
size_t v_sz_boxed_369_; size_t v_i_boxed_370_; lean_object* v_res_371_; 
v_sz_boxed_369_ = lean_unbox_usize(v_sz_361_);
lean_dec(v_sz_361_);
v_i_boxed_370_ = lean_unbox_usize(v_i_362_);
lean_dec(v_i_362_);
v_res_371_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6___redArg(v_a_360_, v_sz_boxed_369_, v_i_boxed_370_, v_bs_363_, v___y_364_, v___y_365_, v___y_366_, v___y_367_);
lean_dec(v___y_367_);
lean_dec_ref(v___y_366_);
lean_dec(v___y_365_);
lean_dec_ref(v___y_364_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__8(size_t v_sz_372_, size_t v_i_373_, lean_object* v_bs_374_){
_start:
{
uint8_t v___x_375_; 
v___x_375_ = lean_usize_dec_lt(v_i_373_, v_sz_372_);
if (v___x_375_ == 0)
{
return v_bs_374_;
}
else
{
lean_object* v_v_376_; lean_object* v_declName_377_; lean_object* v___x_378_; lean_object* v_bs_x27_379_; size_t v___x_380_; size_t v___x_381_; lean_object* v___x_382_; 
v_v_376_ = lean_array_uget_borrowed(v_bs_374_, v_i_373_);
v_declName_377_ = lean_ctor_get(v_v_376_, 3);
lean_inc(v_declName_377_);
v___x_378_ = lean_unsigned_to_nat(0u);
v_bs_x27_379_ = lean_array_uset(v_bs_374_, v_i_373_, v___x_378_);
v___x_380_ = ((size_t)1ULL);
v___x_381_ = lean_usize_add(v_i_373_, v___x_380_);
v___x_382_ = lean_array_uset(v_bs_x27_379_, v_i_373_, v_declName_377_);
v_i_373_ = v___x_381_;
v_bs_374_ = v___x_382_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__8___boxed(lean_object* v_sz_384_, lean_object* v_i_385_, lean_object* v_bs_386_){
_start:
{
size_t v_sz_boxed_387_; size_t v_i_boxed_388_; lean_object* v_res_389_; 
v_sz_boxed_387_ = lean_unbox_usize(v_sz_384_);
lean_dec(v_sz_384_);
v_i_boxed_388_ = lean_unbox_usize(v_i_385_);
lean_dec(v_i_385_);
v_res_389_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__8(v_sz_boxed_387_, v_i_boxed_388_, v_bs_386_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__9___redArg(lean_object* v_a_390_, lean_object* v___x_391_, size_t v_sz_392_, size_t v_i_393_, lean_object* v_bs_394_, lean_object* v___y_395_, lean_object* v___y_396_){
_start:
{
uint8_t v___x_398_; 
v___x_398_ = lean_usize_dec_lt(v_i_393_, v_sz_392_);
if (v___x_398_ == 0)
{
lean_object* v___x_399_; 
lean_dec(v___x_391_);
lean_dec_ref(v_a_390_);
v___x_399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_399_, 0, v_bs_394_);
return v___x_399_;
}
else
{
lean_object* v_v_400_; lean_object* v_ref_401_; uint8_t v_kind_402_; lean_object* v_levelParams_403_; lean_object* v_modifiers_404_; lean_object* v_declName_405_; lean_object* v_binders_406_; lean_object* v_numSectionVars_407_; lean_object* v_type_408_; lean_object* v_value_409_; lean_object* v_termination_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_436_; 
v_v_400_ = lean_array_uget(v_bs_394_, v_i_393_);
v_ref_401_ = lean_ctor_get(v_v_400_, 0);
v_kind_402_ = lean_ctor_get_uint8(v_v_400_, sizeof(void*)*9);
v_levelParams_403_ = lean_ctor_get(v_v_400_, 1);
v_modifiers_404_ = lean_ctor_get(v_v_400_, 2);
v_declName_405_ = lean_ctor_get(v_v_400_, 3);
v_binders_406_ = lean_ctor_get(v_v_400_, 4);
v_numSectionVars_407_ = lean_ctor_get(v_v_400_, 5);
v_type_408_ = lean_ctor_get(v_v_400_, 6);
v_value_409_ = lean_ctor_get(v_v_400_, 7);
v_termination_410_ = lean_ctor_get(v_v_400_, 8);
v_isSharedCheck_436_ = !lean_is_exclusive(v_v_400_);
if (v_isSharedCheck_436_ == 0)
{
v___x_412_ = v_v_400_;
v_isShared_413_ = v_isSharedCheck_436_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_termination_410_);
lean_inc(v_value_409_);
lean_inc(v_type_408_);
lean_inc(v_numSectionVars_407_);
lean_inc(v_binders_406_);
lean_inc(v_declName_405_);
lean_inc(v_modifiers_404_);
lean_inc(v_levelParams_403_);
lean_inc(v_ref_401_);
lean_dec(v_v_400_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_436_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
size_t v_sz_414_; lean_object* v___x_415_; lean_object* v_bs_x27_416_; size_t v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
v_sz_414_ = lean_array_size(v_a_390_);
v___x_415_ = lean_unsigned_to_nat(0u);
v_bs_x27_416_ = lean_array_uset(v_bs_394_, v_i_393_, v___x_415_);
v___x_417_ = ((size_t)0ULL);
lean_inc_ref(v_a_390_);
v___x_418_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__8(v_sz_414_, v___x_417_, v_a_390_);
lean_inc(v___x_391_);
v___x_419_ = l_Lean_Meta_unfoldIfArgIsAppOf(v___x_418_, v___x_391_, v_value_409_, v___y_395_, v___y_396_);
if (lean_obj_tag(v___x_419_) == 0)
{
lean_object* v_a_420_; lean_object* v___x_422_; 
v_a_420_ = lean_ctor_get(v___x_419_, 0);
lean_inc(v_a_420_);
lean_dec_ref_known(v___x_419_, 1);
if (v_isShared_413_ == 0)
{
lean_ctor_set(v___x_412_, 7, v_a_420_);
v___x_422_ = v___x_412_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_ref_401_);
lean_ctor_set(v_reuseFailAlloc_427_, 1, v_levelParams_403_);
lean_ctor_set(v_reuseFailAlloc_427_, 2, v_modifiers_404_);
lean_ctor_set(v_reuseFailAlloc_427_, 3, v_declName_405_);
lean_ctor_set(v_reuseFailAlloc_427_, 4, v_binders_406_);
lean_ctor_set(v_reuseFailAlloc_427_, 5, v_numSectionVars_407_);
lean_ctor_set(v_reuseFailAlloc_427_, 6, v_type_408_);
lean_ctor_set(v_reuseFailAlloc_427_, 7, v_a_420_);
lean_ctor_set(v_reuseFailAlloc_427_, 8, v_termination_410_);
lean_ctor_set_uint8(v_reuseFailAlloc_427_, sizeof(void*)*9, v_kind_402_);
v___x_422_ = v_reuseFailAlloc_427_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
size_t v___x_423_; size_t v___x_424_; lean_object* v___x_425_; 
v___x_423_ = ((size_t)1ULL);
v___x_424_ = lean_usize_add(v_i_393_, v___x_423_);
v___x_425_ = lean_array_uset(v_bs_x27_416_, v_i_393_, v___x_422_);
v_i_393_ = v___x_424_;
v_bs_394_ = v___x_425_;
goto _start;
}
}
else
{
lean_object* v_a_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_435_; 
lean_dec_ref(v_bs_x27_416_);
lean_del_object(v___x_412_);
lean_dec_ref(v_termination_410_);
lean_dec_ref(v_type_408_);
lean_dec(v_numSectionVars_407_);
lean_dec(v_binders_406_);
lean_dec(v_declName_405_);
lean_dec_ref(v_modifiers_404_);
lean_dec(v_levelParams_403_);
lean_dec(v_ref_401_);
lean_dec(v___x_391_);
lean_dec_ref(v_a_390_);
v_a_428_ = lean_ctor_get(v___x_419_, 0);
v_isSharedCheck_435_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_435_ == 0)
{
v___x_430_ = v___x_419_;
v_isShared_431_ = v_isSharedCheck_435_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_a_428_);
lean_dec(v___x_419_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_435_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
lean_object* v___x_433_; 
if (v_isShared_431_ == 0)
{
v___x_433_ = v___x_430_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v_a_428_);
v___x_433_ = v_reuseFailAlloc_434_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
return v___x_433_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__9___redArg___boxed(lean_object* v_a_437_, lean_object* v___x_438_, lean_object* v_sz_439_, lean_object* v_i_440_, lean_object* v_bs_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_){
_start:
{
size_t v_sz_boxed_445_; size_t v_i_boxed_446_; lean_object* v_res_447_; 
v_sz_boxed_445_ = lean_unbox_usize(v_sz_439_);
lean_dec(v_sz_439_);
v_i_boxed_446_ = lean_unbox_usize(v_i_440_);
lean_dec(v_i_440_);
v_res_447_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__9___redArg(v_a_437_, v___x_438_, v_sz_boxed_445_, v_i_boxed_446_, v_bs_441_, v___y_442_, v___y_443_);
lean_dec(v___y_443_);
lean_dec_ref(v___y_442_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__0(lean_object* v_a_448_, size_t v_sz_449_, size_t v___x_450_, lean_object* v___x_451_, lean_object* v___x_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_){
_start:
{
lean_object* v___x_460_; 
v___x_460_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___redArg(v_a_448_, v_sz_449_, v___x_450_, v___x_451_, v___y_457_, v___y_458_);
if (lean_obj_tag(v___x_460_) == 0)
{
lean_object* v___x_461_; 
lean_dec_ref_known(v___x_460_, 1);
lean_inc_ref(v_a_448_);
v___x_461_ = l_Lean_Elab_getFixedParamPerms(v_a_448_, v___y_455_, v___y_456_, v___y_457_, v___y_458_);
if (lean_obj_tag(v___x_461_) == 0)
{
lean_object* v_a_462_; lean_object* v___x_463_; 
v_a_462_ = lean_ctor_get(v___x_461_, 0);
lean_inc_n(v_a_462_, 2);
lean_dec_ref_known(v___x_461_, 1);
lean_inc_ref(v_a_448_);
v___x_463_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6___redArg(v_a_462_, v_sz_449_, v___x_450_, v_a_448_, v___y_455_, v___y_456_, v___y_457_, v___y_458_);
if (lean_obj_tag(v___x_463_) == 0)
{
lean_object* v_a_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; size_t v_sz_468_; lean_object* v___x_469_; 
v_a_464_ = lean_ctor_get(v___x_463_, 0);
lean_inc(v_a_464_);
lean_dec_ref_known(v___x_463_, 1);
v___x_465_ = lean_unsigned_to_nat(0u);
v___x_466_ = lean_array_get_size(v_a_448_);
lean_inc_ref(v_a_448_);
v___x_467_ = l_Array_toSubarray___redArg(v_a_448_, v___x_465_, v___x_466_);
v_sz_468_ = lean_array_size(v_a_464_);
v___x_469_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__7(v_a_464_, v_sz_468_, v___x_450_, v___x_467_, v___y_453_, v___y_454_, v___y_455_, v___y_456_, v___y_457_, v___y_458_);
if (lean_obj_tag(v___x_469_) == 0)
{
lean_object* v___x_470_; lean_object* v_numSectionVars_471_; lean_object* v___x_472_; 
lean_dec_ref_known(v___x_469_, 1);
v___x_470_ = lean_array_get_borrowed(v___x_452_, v_a_448_, v___x_465_);
v_numSectionVars_471_ = lean_ctor_get(v___x_470_, 5);
lean_inc(v_numSectionVars_471_);
lean_inc_ref(v_a_448_);
v___x_472_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__9___redArg(v_a_448_, v_numSectionVars_471_, v_sz_449_, v___x_450_, v_a_448_, v___y_457_, v___y_458_);
if (lean_obj_tag(v___x_472_) == 0)
{
lean_object* v_a_473_; lean_object* v___x_474_; 
v_a_473_ = lean_ctor_get(v___x_472_, 0);
lean_inc(v_a_473_);
lean_dec_ref_known(v___x_472_, 1);
lean_inc(v_a_464_);
lean_inc(v_a_462_);
v___x_474_ = l_Lean_Elab_WF_packMutual(v_a_462_, v_a_464_, v_a_473_, v___y_455_, v___y_456_, v___y_457_, v___y_458_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v_a_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_484_; 
v_a_475_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_484_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_484_ == 0)
{
v___x_477_ = v___x_474_;
v_isShared_478_ = v_isSharedCheck_484_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_a_475_);
lean_dec(v___x_474_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_484_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_482_; 
v___x_479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_479_, 0, v_a_464_);
lean_ctor_set(v___x_479_, 1, v_a_475_);
v___x_480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_480_, 0, v_a_462_);
lean_ctor_set(v___x_480_, 1, v___x_479_);
if (v_isShared_478_ == 0)
{
lean_ctor_set(v___x_477_, 0, v___x_480_);
v___x_482_ = v___x_477_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v___x_480_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
}
else
{
lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_492_; 
lean_dec(v_a_464_);
lean_dec(v_a_462_);
v_a_485_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_492_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_492_ == 0)
{
v___x_487_ = v___x_474_;
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_dec(v___x_474_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_490_; 
if (v_isShared_488_ == 0)
{
v___x_490_ = v___x_487_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v_a_485_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
return v___x_490_;
}
}
}
}
else
{
lean_object* v_a_493_; lean_object* v___x_495_; uint8_t v_isShared_496_; uint8_t v_isSharedCheck_500_; 
lean_dec(v_a_464_);
lean_dec(v_a_462_);
v_a_493_ = lean_ctor_get(v___x_472_, 0);
v_isSharedCheck_500_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_500_ == 0)
{
v___x_495_ = v___x_472_;
v_isShared_496_ = v_isSharedCheck_500_;
goto v_resetjp_494_;
}
else
{
lean_inc(v_a_493_);
lean_dec(v___x_472_);
v___x_495_ = lean_box(0);
v_isShared_496_ = v_isSharedCheck_500_;
goto v_resetjp_494_;
}
v_resetjp_494_:
{
lean_object* v___x_498_; 
if (v_isShared_496_ == 0)
{
v___x_498_ = v___x_495_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v_a_493_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
}
}
else
{
lean_object* v_a_501_; lean_object* v___x_503_; uint8_t v_isShared_504_; uint8_t v_isSharedCheck_508_; 
lean_dec(v_a_464_);
lean_dec(v_a_462_);
lean_dec_ref(v_a_448_);
v_a_501_ = lean_ctor_get(v___x_469_, 0);
v_isSharedCheck_508_ = !lean_is_exclusive(v___x_469_);
if (v_isSharedCheck_508_ == 0)
{
v___x_503_ = v___x_469_;
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
else
{
lean_inc(v_a_501_);
lean_dec(v___x_469_);
v___x_503_ = lean_box(0);
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
v_resetjp_502_:
{
lean_object* v___x_506_; 
if (v_isShared_504_ == 0)
{
v___x_506_ = v___x_503_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v_a_501_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
}
}
else
{
lean_object* v_a_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_516_; 
lean_dec(v_a_462_);
lean_dec_ref(v_a_448_);
v_a_509_ = lean_ctor_get(v___x_463_, 0);
v_isSharedCheck_516_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_516_ == 0)
{
v___x_511_ = v___x_463_;
v_isShared_512_ = v_isSharedCheck_516_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_a_509_);
lean_dec(v___x_463_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_516_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v___x_514_; 
if (v_isShared_512_ == 0)
{
v___x_514_ = v___x_511_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v_a_509_);
v___x_514_ = v_reuseFailAlloc_515_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
return v___x_514_;
}
}
}
}
else
{
lean_object* v_a_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_524_; 
lean_dec_ref(v_a_448_);
v_a_517_ = lean_ctor_get(v___x_461_, 0);
v_isSharedCheck_524_ = !lean_is_exclusive(v___x_461_);
if (v_isSharedCheck_524_ == 0)
{
v___x_519_ = v___x_461_;
v_isShared_520_ = v_isSharedCheck_524_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_a_517_);
lean_dec(v___x_461_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_524_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___x_522_; 
if (v_isShared_520_ == 0)
{
v___x_522_ = v___x_519_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v_a_517_);
v___x_522_ = v_reuseFailAlloc_523_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
return v___x_522_;
}
}
}
}
else
{
lean_object* v_a_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_532_; 
lean_dec_ref(v_a_448_);
v_a_525_ = lean_ctor_get(v___x_460_, 0);
v_isSharedCheck_532_ = !lean_is_exclusive(v___x_460_);
if (v_isSharedCheck_532_ == 0)
{
v___x_527_ = v___x_460_;
v_isShared_528_ = v_isSharedCheck_532_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_a_525_);
lean_dec(v___x_460_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_532_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v___x_530_; 
if (v_isShared_528_ == 0)
{
v___x_530_ = v___x_527_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v_a_525_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
return v___x_530_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__0___boxed(lean_object* v_a_533_, lean_object* v_sz_534_, lean_object* v___x_535_, lean_object* v___x_536_, lean_object* v___x_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_){
_start:
{
size_t v_sz_boxed_545_; size_t v___x_46107__boxed_546_; lean_object* v_res_547_; 
v_sz_boxed_545_ = lean_unbox_usize(v_sz_534_);
lean_dec(v_sz_534_);
v___x_46107__boxed_546_ = lean_unbox_usize(v___x_535_);
lean_dec(v___x_535_);
v_res_547_ = l_Lean_Elab_wfRecursion___lam__0(v_a_533_, v_sz_boxed_545_, v___x_46107__boxed_546_, v___x_536_, v___x_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_);
lean_dec(v___y_543_);
lean_dec_ref(v___y_542_);
lean_dec(v___y_541_);
lean_dec_ref(v___y_540_);
lean_dec(v___y_539_);
lean_dec_ref(v___y_538_);
lean_dec_ref(v___x_537_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__1(lean_object* v_snd_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_){
_start:
{
lean_object* v___x_556_; 
lean_inc_ref(v_snd_548_);
v___x_556_ = l_Lean_Elab_addAsAxiom___redArg(v_snd_548_, v___y_553_, v___y_554_);
if (lean_obj_tag(v___x_556_) == 0)
{
lean_object* v_ref_557_; uint8_t v_kind_558_; lean_object* v_levelParams_559_; lean_object* v_modifiers_560_; lean_object* v_declName_561_; lean_object* v_binders_562_; lean_object* v_numSectionVars_563_; lean_object* v_type_564_; lean_object* v_value_565_; lean_object* v_termination_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_592_; 
lean_dec_ref_known(v___x_556_, 1);
v_ref_557_ = lean_ctor_get(v_snd_548_, 0);
v_kind_558_ = lean_ctor_get_uint8(v_snd_548_, sizeof(void*)*9);
v_levelParams_559_ = lean_ctor_get(v_snd_548_, 1);
v_modifiers_560_ = lean_ctor_get(v_snd_548_, 2);
v_declName_561_ = lean_ctor_get(v_snd_548_, 3);
v_binders_562_ = lean_ctor_get(v_snd_548_, 4);
v_numSectionVars_563_ = lean_ctor_get(v_snd_548_, 5);
v_type_564_ = lean_ctor_get(v_snd_548_, 6);
v_value_565_ = lean_ctor_get(v_snd_548_, 7);
v_termination_566_ = lean_ctor_get(v_snd_548_, 8);
v_isSharedCheck_592_ = !lean_is_exclusive(v_snd_548_);
if (v_isSharedCheck_592_ == 0)
{
v___x_568_ = v_snd_548_;
v_isShared_569_ = v_isSharedCheck_592_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_termination_566_);
lean_inc(v_value_565_);
lean_inc(v_type_564_);
lean_inc(v_numSectionVars_563_);
lean_inc(v_binders_562_);
lean_inc(v_declName_561_);
lean_inc(v_modifiers_560_);
lean_inc(v_levelParams_559_);
lean_inc(v_ref_557_);
lean_dec(v_snd_548_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_592_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___x_570_; 
v___x_570_ = l_Lean_Elab_WF_preprocess(v_value_565_, v___y_551_, v___y_552_, v___y_553_, v___y_554_);
if (lean_obj_tag(v___x_570_) == 0)
{
lean_object* v_a_571_; lean_object* v___x_573_; uint8_t v_isShared_574_; uint8_t v_isSharedCheck_583_; 
v_a_571_ = lean_ctor_get(v___x_570_, 0);
v_isSharedCheck_583_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_583_ == 0)
{
v___x_573_ = v___x_570_;
v_isShared_574_ = v_isSharedCheck_583_;
goto v_resetjp_572_;
}
else
{
lean_inc(v_a_571_);
lean_dec(v___x_570_);
v___x_573_ = lean_box(0);
v_isShared_574_ = v_isSharedCheck_583_;
goto v_resetjp_572_;
}
v_resetjp_572_:
{
lean_object* v_expr_575_; lean_object* v___x_577_; 
v_expr_575_ = lean_ctor_get(v_a_571_, 0);
lean_inc_ref(v_expr_575_);
if (v_isShared_569_ == 0)
{
lean_ctor_set(v___x_568_, 7, v_expr_575_);
v___x_577_ = v___x_568_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_ref_557_);
lean_ctor_set(v_reuseFailAlloc_582_, 1, v_levelParams_559_);
lean_ctor_set(v_reuseFailAlloc_582_, 2, v_modifiers_560_);
lean_ctor_set(v_reuseFailAlloc_582_, 3, v_declName_561_);
lean_ctor_set(v_reuseFailAlloc_582_, 4, v_binders_562_);
lean_ctor_set(v_reuseFailAlloc_582_, 5, v_numSectionVars_563_);
lean_ctor_set(v_reuseFailAlloc_582_, 6, v_type_564_);
lean_ctor_set(v_reuseFailAlloc_582_, 7, v_expr_575_);
lean_ctor_set(v_reuseFailAlloc_582_, 8, v_termination_566_);
lean_ctor_set_uint8(v_reuseFailAlloc_582_, sizeof(void*)*9, v_kind_558_);
v___x_577_ = v_reuseFailAlloc_582_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
lean_object* v___x_578_; lean_object* v___x_580_; 
v___x_578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_578_, 0, v___x_577_);
lean_ctor_set(v___x_578_, 1, v_a_571_);
if (v_isShared_574_ == 0)
{
lean_ctor_set(v___x_573_, 0, v___x_578_);
v___x_580_ = v___x_573_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v___x_578_);
v___x_580_ = v_reuseFailAlloc_581_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
return v___x_580_;
}
}
}
}
else
{
lean_object* v_a_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_591_; 
lean_del_object(v___x_568_);
lean_dec_ref(v_termination_566_);
lean_dec_ref(v_type_564_);
lean_dec(v_numSectionVars_563_);
lean_dec(v_binders_562_);
lean_dec(v_declName_561_);
lean_dec_ref(v_modifiers_560_);
lean_dec(v_levelParams_559_);
lean_dec(v_ref_557_);
v_a_584_ = lean_ctor_get(v___x_570_, 0);
v_isSharedCheck_591_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_591_ == 0)
{
v___x_586_ = v___x_570_;
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_a_584_);
lean_dec(v___x_570_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_589_; 
if (v_isShared_587_ == 0)
{
v___x_589_ = v___x_586_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v_a_584_);
v___x_589_ = v_reuseFailAlloc_590_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
return v___x_589_;
}
}
}
}
}
else
{
lean_object* v_a_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_600_; 
lean_dec_ref(v_snd_548_);
v_a_593_ = lean_ctor_get(v___x_556_, 0);
v_isSharedCheck_600_ = !lean_is_exclusive(v___x_556_);
if (v_isSharedCheck_600_ == 0)
{
v___x_595_ = v___x_556_;
v_isShared_596_ = v_isSharedCheck_600_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_a_593_);
lean_dec(v___x_556_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_600_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v___x_598_; 
if (v_isShared_596_ == 0)
{
v___x_598_ = v___x_595_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_a_593_);
v___x_598_ = v_reuseFailAlloc_599_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
return v___x_598_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__1___boxed(lean_object* v_snd_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l_Lean_Elab_wfRecursion___lam__1(v_snd_601_, v___y_602_, v___y_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_);
lean_dec(v___y_607_);
lean_dec_ref(v___y_606_);
lean_dec(v___y_605_);
lean_dec_ref(v___y_604_);
lean_dec(v___y_603_);
lean_dec_ref(v___y_602_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__2(lean_object* v___x_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_){
_start:
{
lean_object* v_toCold_621_; lean_object* v_options_622_; uint8_t v_hasTrace_623_; 
v_toCold_621_ = lean_ctor_get(v___y_618_, 0);
v_options_622_ = lean_ctor_get(v_toCold_621_, 2);
v_hasTrace_623_ = lean_ctor_get_uint8(v_options_622_, sizeof(void*)*1);
if (v_hasTrace_623_ == 0)
{
lean_object* v___x_624_; lean_object* v___x_625_; 
lean_dec(v___x_613_);
v___x_624_ = lean_box(v_hasTrace_623_);
v___x_625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_625_, 0, v___x_624_);
return v___x_625_;
}
else
{
lean_object* v_inheritedTraceOptions_626_; lean_object* v___x_627_; lean_object* v___x_628_; uint8_t v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; 
v_inheritedTraceOptions_626_ = lean_ctor_get(v_toCold_621_, 11);
v___x_627_ = ((lean_object*)(l_Lean_Elab_wfRecursion___lam__2___closed__1));
v___x_628_ = l_Lean_Name_append(v___x_627_, v___x_613_);
v___x_629_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_626_, v_options_622_, v___x_628_);
lean_dec(v___x_628_);
v___x_630_ = lean_box(v___x_629_);
v___x_631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_631_, 0, v___x_630_);
return v___x_631_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__2___boxed(lean_object* v___x_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_){
_start:
{
lean_object* v_res_640_; 
v_res_640_ = l_Lean_Elab_wfRecursion___lam__2(v___x_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_, v___y_637_, v___y_638_);
lean_dec(v___y_638_);
lean_dec_ref(v___y_637_);
lean_dec(v___y_636_);
lean_dec_ref(v___y_635_);
lean_dec(v___y_634_);
lean_dec_ref(v___y_633_);
return v_res_640_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13_spec__16___redArg___closed__0(void){
_start:
{
lean_object* v___x_641_; 
v___x_641_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_641_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13_spec__16___redArg___closed__1(void){
_start:
{
lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_642_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13_spec__16___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13_spec__16___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13_spec__16___redArg___closed__0);
v___x_643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_643_, 0, v___x_642_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13_spec__16___redArg(){
_start:
{
lean_object* v___x_645_; 
v___x_645_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13_spec__16___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13_spec__16___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13_spec__16___redArg___closed__1);
return v___x_645_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13_spec__16___redArg___boxed(lean_object* v___dummy_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13_spec__16___redArg();
return v_res_647_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__0(void){
_start:
{
lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_648_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13_spec__16___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13_spec__16___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13_spec__16___redArg___closed__0);
v___x_649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_649_, 0, v___x_648_);
return v___x_649_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__1(void){
_start:
{
lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_650_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__0, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__0);
v___x_651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_651_, 0, v___x_650_);
lean_ctor_set(v___x_651_, 1, v___x_650_);
return v___x_651_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__2(void){
_start:
{
lean_object* v___x_652_; 
v___x_652_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13_spec__16___redArg();
return v___x_652_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__3(void){
_start:
{
lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_653_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__0, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__0);
v___x_654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_654_, 0, v___x_653_);
lean_ctor_set(v___x_654_, 1, v___x_653_);
return v___x_654_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__4(void){
_start:
{
lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; 
v___x_655_ = lean_unsigned_to_nat(0u);
v___x_656_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__0, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__0);
v___x_657_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_657_, 0, v___x_656_);
lean_ctor_set(v___x_657_, 1, v___x_656_);
lean_ctor_set(v___x_657_, 2, v___x_655_);
return v___x_657_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__5(void){
_start:
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
v___x_658_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__4, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__4_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__4);
v___x_659_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__3, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__3);
v___x_660_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__0, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__0);
v___x_661_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__2);
v___x_662_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_662_, 0, v___x_661_);
lean_ctor_set(v___x_662_, 1, v___x_660_);
lean_ctor_set(v___x_662_, 2, v___x_659_);
lean_ctor_set(v___x_662_, 3, v___x_660_);
lean_ctor_set(v___x_662_, 4, v___x_660_);
lean_ctor_set(v___x_662_, 5, v___x_660_);
lean_ctor_set(v___x_662_, 6, v___x_660_);
lean_ctor_set(v___x_662_, 7, v___x_658_);
return v___x_662_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg(lean_object* v_env_663_, lean_object* v___y_664_, lean_object* v___y_665_){
_start:
{
lean_object* v___x_667_; lean_object* v_nextMacroScope_668_; lean_object* v_ngen_669_; lean_object* v_auxDeclNGen_670_; lean_object* v_traceState_671_; lean_object* v_recordedDeps_672_; lean_object* v_messages_673_; lean_object* v_infoState_674_; lean_object* v_snapshotTasks_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_701_; 
v___x_667_ = lean_st_ref_take(v___y_665_);
v_nextMacroScope_668_ = lean_ctor_get(v___x_667_, 1);
v_ngen_669_ = lean_ctor_get(v___x_667_, 2);
v_auxDeclNGen_670_ = lean_ctor_get(v___x_667_, 3);
v_traceState_671_ = lean_ctor_get(v___x_667_, 4);
v_recordedDeps_672_ = lean_ctor_get(v___x_667_, 6);
v_messages_673_ = lean_ctor_get(v___x_667_, 7);
v_infoState_674_ = lean_ctor_get(v___x_667_, 8);
v_snapshotTasks_675_ = lean_ctor_get(v___x_667_, 9);
v_isSharedCheck_701_ = !lean_is_exclusive(v___x_667_);
if (v_isSharedCheck_701_ == 0)
{
lean_object* v_unused_702_; lean_object* v_unused_703_; 
v_unused_702_ = lean_ctor_get(v___x_667_, 5);
lean_dec(v_unused_702_);
v_unused_703_ = lean_ctor_get(v___x_667_, 0);
lean_dec(v_unused_703_);
v___x_677_ = v___x_667_;
v_isShared_678_ = v_isSharedCheck_701_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_snapshotTasks_675_);
lean_inc(v_infoState_674_);
lean_inc(v_messages_673_);
lean_inc(v_recordedDeps_672_);
lean_inc(v_traceState_671_);
lean_inc(v_auxDeclNGen_670_);
lean_inc(v_ngen_669_);
lean_inc(v_nextMacroScope_668_);
lean_dec(v___x_667_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_701_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v___x_679_; lean_object* v___x_681_; 
v___x_679_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__1, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__1);
if (v_isShared_678_ == 0)
{
lean_ctor_set(v___x_677_, 5, v___x_679_);
lean_ctor_set(v___x_677_, 0, v_env_663_);
v___x_681_ = v___x_677_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v_env_663_);
lean_ctor_set(v_reuseFailAlloc_700_, 1, v_nextMacroScope_668_);
lean_ctor_set(v_reuseFailAlloc_700_, 2, v_ngen_669_);
lean_ctor_set(v_reuseFailAlloc_700_, 3, v_auxDeclNGen_670_);
lean_ctor_set(v_reuseFailAlloc_700_, 4, v_traceState_671_);
lean_ctor_set(v_reuseFailAlloc_700_, 5, v___x_679_);
lean_ctor_set(v_reuseFailAlloc_700_, 6, v_recordedDeps_672_);
lean_ctor_set(v_reuseFailAlloc_700_, 7, v_messages_673_);
lean_ctor_set(v_reuseFailAlloc_700_, 8, v_infoState_674_);
lean_ctor_set(v_reuseFailAlloc_700_, 9, v_snapshotTasks_675_);
v___x_681_ = v_reuseFailAlloc_700_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v_mctx_684_; lean_object* v_zetaDeltaFVarIds_685_; lean_object* v_postponed_686_; lean_object* v_diag_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_698_; 
v___x_682_ = lean_st_ref_put(v___y_665_, v___x_681_);
v___x_683_ = lean_st_ref_take(v___y_664_);
v_mctx_684_ = lean_ctor_get(v___x_683_, 0);
v_zetaDeltaFVarIds_685_ = lean_ctor_get(v___x_683_, 2);
v_postponed_686_ = lean_ctor_get(v___x_683_, 3);
v_diag_687_ = lean_ctor_get(v___x_683_, 4);
v_isSharedCheck_698_ = !lean_is_exclusive(v___x_683_);
if (v_isSharedCheck_698_ == 0)
{
lean_object* v_unused_699_; 
v_unused_699_ = lean_ctor_get(v___x_683_, 1);
lean_dec(v_unused_699_);
v___x_689_ = v___x_683_;
v_isShared_690_ = v_isSharedCheck_698_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_diag_687_);
lean_inc(v_postponed_686_);
lean_inc(v_zetaDeltaFVarIds_685_);
lean_inc(v_mctx_684_);
lean_dec(v___x_683_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_698_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_694_; 
v___x_691_ = lean_box(0);
v___x_692_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__5, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__5_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__5);
if (v_isShared_690_ == 0)
{
lean_ctor_set(v___x_689_, 1, v___x_692_);
v___x_694_ = v___x_689_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v_mctx_684_);
lean_ctor_set(v_reuseFailAlloc_697_, 1, v___x_692_);
lean_ctor_set(v_reuseFailAlloc_697_, 2, v_zetaDeltaFVarIds_685_);
lean_ctor_set(v_reuseFailAlloc_697_, 3, v_postponed_686_);
lean_ctor_set(v_reuseFailAlloc_697_, 4, v_diag_687_);
v___x_694_ = v_reuseFailAlloc_697_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_695_ = lean_st_ref_put(v___y_664_, v___x_694_);
v___x_696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_696_, 0, v___x_691_);
return v___x_696_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___boxed(lean_object* v_env_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_){
_start:
{
lean_object* v_res_708_; 
v_res_708_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg(v_env_704_, v___y_705_, v___y_706_);
lean_dec(v___y_706_);
lean_dec(v___y_705_);
return v_res_708_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___redArg___closed__0(void){
_start:
{
lean_object* v___x_709_; double v___x_710_; 
v___x_709_ = lean_unsigned_to_nat(0u);
v___x_710_ = lean_float_of_nat(v___x_709_);
return v___x_710_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___redArg(lean_object* v_cls_714_, lean_object* v_msg_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_){
_start:
{
lean_object* v_ref_721_; lean_object* v___x_722_; lean_object* v_a_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_768_; 
v_ref_721_ = lean_ctor_get(v___y_718_, 2);
v___x_722_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(v_msg_715_, v___y_716_, v___y_717_, v___y_718_, v___y_719_);
v_a_723_ = lean_ctor_get(v___x_722_, 0);
v_isSharedCheck_768_ = !lean_is_exclusive(v___x_722_);
if (v_isSharedCheck_768_ == 0)
{
v___x_725_ = v___x_722_;
v_isShared_726_ = v_isSharedCheck_768_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_a_723_);
lean_dec(v___x_722_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_768_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v___x_727_; lean_object* v_traceState_728_; lean_object* v_env_729_; lean_object* v_nextMacroScope_730_; lean_object* v_ngen_731_; lean_object* v_auxDeclNGen_732_; lean_object* v_cache_733_; lean_object* v_recordedDeps_734_; lean_object* v_messages_735_; lean_object* v_infoState_736_; lean_object* v_snapshotTasks_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_767_; 
v___x_727_ = lean_st_ref_take(v___y_719_);
v_traceState_728_ = lean_ctor_get(v___x_727_, 4);
v_env_729_ = lean_ctor_get(v___x_727_, 0);
v_nextMacroScope_730_ = lean_ctor_get(v___x_727_, 1);
v_ngen_731_ = lean_ctor_get(v___x_727_, 2);
v_auxDeclNGen_732_ = lean_ctor_get(v___x_727_, 3);
v_cache_733_ = lean_ctor_get(v___x_727_, 5);
v_recordedDeps_734_ = lean_ctor_get(v___x_727_, 6);
v_messages_735_ = lean_ctor_get(v___x_727_, 7);
v_infoState_736_ = lean_ctor_get(v___x_727_, 8);
v_snapshotTasks_737_ = lean_ctor_get(v___x_727_, 9);
v_isSharedCheck_767_ = !lean_is_exclusive(v___x_727_);
if (v_isSharedCheck_767_ == 0)
{
v___x_739_ = v___x_727_;
v_isShared_740_ = v_isSharedCheck_767_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_snapshotTasks_737_);
lean_inc(v_infoState_736_);
lean_inc(v_messages_735_);
lean_inc(v_recordedDeps_734_);
lean_inc(v_cache_733_);
lean_inc(v_traceState_728_);
lean_inc(v_auxDeclNGen_732_);
lean_inc(v_ngen_731_);
lean_inc(v_nextMacroScope_730_);
lean_inc(v_env_729_);
lean_dec(v___x_727_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_767_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
uint64_t v_tid_741_; lean_object* v_traces_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_766_; 
v_tid_741_ = lean_ctor_get_uint64(v_traceState_728_, sizeof(void*)*1);
v_traces_742_ = lean_ctor_get(v_traceState_728_, 0);
v_isSharedCheck_766_ = !lean_is_exclusive(v_traceState_728_);
if (v_isSharedCheck_766_ == 0)
{
v___x_744_ = v_traceState_728_;
v_isShared_745_ = v_isSharedCheck_766_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_traces_742_);
lean_dec(v_traceState_728_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_766_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_746_; lean_object* v___x_747_; double v___x_748_; uint8_t v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_757_; 
v___x_746_ = lean_box(0);
v___x_747_ = lean_box(0);
v___x_748_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___redArg___closed__0);
v___x_749_ = 0;
v___x_750_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___redArg___closed__1));
v___x_751_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_751_, 0, v_cls_714_);
lean_ctor_set(v___x_751_, 1, v___x_747_);
lean_ctor_set(v___x_751_, 2, v___x_750_);
lean_ctor_set_float(v___x_751_, sizeof(void*)*3, v___x_748_);
lean_ctor_set_float(v___x_751_, sizeof(void*)*3 + 8, v___x_748_);
lean_ctor_set_uint8(v___x_751_, sizeof(void*)*3 + 16, v___x_749_);
v___x_752_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___redArg___closed__2));
v___x_753_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_753_, 0, v___x_751_);
lean_ctor_set(v___x_753_, 1, v_a_723_);
lean_ctor_set(v___x_753_, 2, v___x_752_);
lean_inc(v_ref_721_);
v___x_754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_754_, 0, v_ref_721_);
lean_ctor_set(v___x_754_, 1, v___x_753_);
v___x_755_ = l_Lean_PersistentArray_push___redArg(v_traces_742_, v___x_754_);
if (v_isShared_745_ == 0)
{
lean_ctor_set(v___x_744_, 0, v___x_755_);
v___x_757_ = v___x_744_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v___x_755_);
lean_ctor_set_uint64(v_reuseFailAlloc_765_, sizeof(void*)*1, v_tid_741_);
v___x_757_ = v_reuseFailAlloc_765_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
lean_object* v___x_759_; 
if (v_isShared_740_ == 0)
{
lean_ctor_set(v___x_739_, 4, v___x_757_);
v___x_759_ = v___x_739_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v_env_729_);
lean_ctor_set(v_reuseFailAlloc_764_, 1, v_nextMacroScope_730_);
lean_ctor_set(v_reuseFailAlloc_764_, 2, v_ngen_731_);
lean_ctor_set(v_reuseFailAlloc_764_, 3, v_auxDeclNGen_732_);
lean_ctor_set(v_reuseFailAlloc_764_, 4, v___x_757_);
lean_ctor_set(v_reuseFailAlloc_764_, 5, v_cache_733_);
lean_ctor_set(v_reuseFailAlloc_764_, 6, v_recordedDeps_734_);
lean_ctor_set(v_reuseFailAlloc_764_, 7, v_messages_735_);
lean_ctor_set(v_reuseFailAlloc_764_, 8, v_infoState_736_);
lean_ctor_set(v_reuseFailAlloc_764_, 9, v_snapshotTasks_737_);
v___x_759_ = v_reuseFailAlloc_764_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
lean_object* v___x_760_; lean_object* v___x_762_; 
v___x_760_ = lean_st_ref_put(v___y_719_, v___x_759_);
if (v_isShared_726_ == 0)
{
lean_ctor_set(v___x_725_, 0, v___x_746_);
v___x_762_ = v___x_725_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v___x_746_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___redArg___boxed(lean_object* v_cls_769_, lean_object* v_msg_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_){
_start:
{
lean_object* v_res_776_; 
v_res_776_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___redArg(v_cls_769_, v_msg_770_, v___y_771_, v___y_772_, v___y_773_, v___y_774_);
lean_dec(v___y_774_);
lean_dec_ref(v___y_773_);
lean_dec(v___y_772_);
lean_dec_ref(v___y_771_);
return v_res_776_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0(uint8_t v___x_784_, lean_object* v_x_785_){
_start:
{
if (lean_obj_tag(v_x_785_) == 1)
{
lean_object* v_pre_786_; 
v_pre_786_ = lean_ctor_get(v_x_785_, 0);
switch(lean_obj_tag(v_pre_786_))
{
case 1:
{
lean_object* v_pre_787_; 
v_pre_787_ = lean_ctor_get(v_pre_786_, 0);
switch(lean_obj_tag(v_pre_787_))
{
case 0:
{
lean_object* v_str_788_; lean_object* v_str_789_; lean_object* v___x_790_; uint8_t v___x_791_; 
v_str_788_ = lean_ctor_get(v_x_785_, 1);
v_str_789_ = lean_ctor_get(v_pre_786_, 1);
v___x_790_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__0));
v___x_791_ = lean_string_dec_eq(v_str_789_, v___x_790_);
if (v___x_791_ == 0)
{
lean_object* v___x_792_; uint8_t v___x_793_; 
v___x_792_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__1));
v___x_793_ = lean_string_dec_eq(v_str_789_, v___x_792_);
if (v___x_793_ == 0)
{
return v___x_793_;
}
else
{
lean_object* v___x_794_; uint8_t v___x_795_; 
v___x_794_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__2));
v___x_795_ = lean_string_dec_eq(v_str_788_, v___x_794_);
return v___x_795_;
}
}
else
{
lean_object* v___x_796_; uint8_t v___x_797_; 
v___x_796_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__3));
v___x_797_ = lean_string_dec_eq(v_str_788_, v___x_796_);
return v___x_797_;
}
}
case 1:
{
lean_object* v_pre_798_; 
v_pre_798_ = lean_ctor_get(v_pre_787_, 0);
if (lean_obj_tag(v_pre_798_) == 0)
{
lean_object* v_str_799_; lean_object* v_str_800_; lean_object* v_str_801_; lean_object* v___x_802_; uint8_t v___x_803_; 
v_str_799_ = lean_ctor_get(v_x_785_, 1);
v_str_800_ = lean_ctor_get(v_pre_786_, 1);
v_str_801_ = lean_ctor_get(v_pre_787_, 1);
v___x_802_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__4));
v___x_803_ = lean_string_dec_eq(v_str_801_, v___x_802_);
if (v___x_803_ == 0)
{
return v___x_803_;
}
else
{
lean_object* v___x_804_; uint8_t v___x_805_; 
v___x_804_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__5));
v___x_805_ = lean_string_dec_eq(v_str_800_, v___x_804_);
if (v___x_805_ == 0)
{
return v___x_805_;
}
else
{
lean_object* v___x_806_; uint8_t v___x_807_; 
v___x_806_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___closed__6));
v___x_807_ = lean_string_dec_eq(v_str_799_, v___x_806_);
return v___x_807_;
}
}
}
else
{
return v___x_784_;
}
}
default: 
{
return v___x_784_;
}
}
}
case 0:
{
lean_object* v_str_808_; lean_object* v___x_809_; uint8_t v___x_810_; 
v_str_808_ = lean_ctor_get(v_x_785_, 1);
v___x_809_ = ((lean_object*)(l_Lean_Elab_wfRecursion___lam__2___closed__0));
v___x_810_ = lean_string_dec_eq(v_str_808_, v___x_809_);
return v___x_810_;
}
default: 
{
return v___x_784_;
}
}
}
else
{
return v___x_784_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0___boxed(lean_object* v___x_811_, lean_object* v_x_812_){
_start:
{
uint8_t v___x_46668__boxed_813_; uint8_t v_res_814_; lean_object* v_r_815_; 
v___x_46668__boxed_813_ = lean_unbox(v___x_811_);
v_res_814_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___lam__0(v___x_46668__boxed_813_, v_x_812_);
lean_dec(v_x_812_);
v_r_815_ = lean_box(v_res_814_);
return v_r_815_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg(lean_object* v_ref_819_, lean_object* v_msgData_820_, uint8_t v_severity_821_, uint8_t v_isSilent_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_){
_start:
{
uint8_t v___y_829_; lean_object* v___y_830_; uint8_t v___y_831_; lean_object* v___y_832_; lean_object* v___y_833_; lean_object* v___y_834_; lean_object* v___y_835_; lean_object* v_toCold_836_; lean_object* v___y_837_; lean_object* v___y_866_; lean_object* v___y_867_; uint8_t v___y_868_; uint8_t v___y_869_; uint8_t v___y_870_; lean_object* v___y_871_; lean_object* v___y_872_; lean_object* v___y_873_; lean_object* v___y_893_; uint8_t v___y_894_; uint8_t v___y_895_; lean_object* v___y_896_; lean_object* v___y_897_; uint8_t v___y_898_; lean_object* v___y_899_; uint8_t v___y_903_; uint8_t v___x_920_; uint8_t v___x_921_; 
v___x_920_ = 2;
v___x_921_ = l_Lean_instBEqMessageSeverity_beq(v_severity_821_, v___x_920_);
if (v___x_921_ == 0)
{
goto v___jp_913_;
}
else
{
uint8_t v___x_922_; 
lean_inc_ref(v_msgData_820_);
v___x_922_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_820_);
if (v___x_922_ == 0)
{
goto v___jp_913_;
}
else
{
lean_object* v___x_923_; lean_object* v___x_924_; 
lean_dec_ref(v_msgData_820_);
v___x_923_ = lean_box(0);
v___x_924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_924_, 0, v___x_923_);
return v___x_924_;
}
}
v___jp_828_:
{
lean_object* v_currNamespace_838_; lean_object* v_openDecls_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v_env_844_; lean_object* v_nextMacroScope_845_; lean_object* v_ngen_846_; lean_object* v_auxDeclNGen_847_; lean_object* v_traceState_848_; lean_object* v_cache_849_; lean_object* v_recordedDeps_850_; lean_object* v_messages_851_; lean_object* v_infoState_852_; lean_object* v_snapshotTasks_853_; lean_object* v___x_855_; uint8_t v_isShared_856_; uint8_t v_isSharedCheck_864_; 
v_currNamespace_838_ = lean_ctor_get(v_toCold_836_, 4);
v_openDecls_839_ = lean_ctor_get(v_toCold_836_, 5);
lean_inc(v_openDecls_839_);
lean_inc(v_currNamespace_838_);
v___x_840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_840_, 0, v_currNamespace_838_);
lean_ctor_set(v___x_840_, 1, v_openDecls_839_);
v___x_841_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_841_, 0, v___x_840_);
lean_ctor_set(v___x_841_, 1, v___y_835_);
lean_inc_ref(v___y_833_);
lean_inc_ref(v___y_830_);
v___x_842_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_842_, 0, v___y_830_);
lean_ctor_set(v___x_842_, 1, v___y_832_);
lean_ctor_set(v___x_842_, 2, v___y_834_);
lean_ctor_set(v___x_842_, 3, v___y_833_);
lean_ctor_set(v___x_842_, 4, v___x_841_);
lean_ctor_set_uint8(v___x_842_, sizeof(void*)*5, v___y_829_);
lean_ctor_set_uint8(v___x_842_, sizeof(void*)*5 + 1, v___y_831_);
lean_ctor_set_uint8(v___x_842_, sizeof(void*)*5 + 2, v_isSilent_822_);
v___x_843_ = lean_st_ref_take(v___y_837_);
v_env_844_ = lean_ctor_get(v___x_843_, 0);
v_nextMacroScope_845_ = lean_ctor_get(v___x_843_, 1);
v_ngen_846_ = lean_ctor_get(v___x_843_, 2);
v_auxDeclNGen_847_ = lean_ctor_get(v___x_843_, 3);
v_traceState_848_ = lean_ctor_get(v___x_843_, 4);
v_cache_849_ = lean_ctor_get(v___x_843_, 5);
v_recordedDeps_850_ = lean_ctor_get(v___x_843_, 6);
v_messages_851_ = lean_ctor_get(v___x_843_, 7);
v_infoState_852_ = lean_ctor_get(v___x_843_, 8);
v_snapshotTasks_853_ = lean_ctor_get(v___x_843_, 9);
v_isSharedCheck_864_ = !lean_is_exclusive(v___x_843_);
if (v_isSharedCheck_864_ == 0)
{
v___x_855_ = v___x_843_;
v_isShared_856_ = v_isSharedCheck_864_;
goto v_resetjp_854_;
}
else
{
lean_inc(v_snapshotTasks_853_);
lean_inc(v_infoState_852_);
lean_inc(v_messages_851_);
lean_inc(v_recordedDeps_850_);
lean_inc(v_cache_849_);
lean_inc(v_traceState_848_);
lean_inc(v_auxDeclNGen_847_);
lean_inc(v_ngen_846_);
lean_inc(v_nextMacroScope_845_);
lean_inc(v_env_844_);
lean_dec(v___x_843_);
v___x_855_ = lean_box(0);
v_isShared_856_ = v_isSharedCheck_864_;
goto v_resetjp_854_;
}
v_resetjp_854_:
{
lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_860_; 
v___x_857_ = lean_box(0);
v___x_858_ = l_Lean_MessageLog_add(v___x_842_, v_messages_851_);
if (v_isShared_856_ == 0)
{
lean_ctor_set(v___x_855_, 7, v___x_858_);
v___x_860_ = v___x_855_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v_env_844_);
lean_ctor_set(v_reuseFailAlloc_863_, 1, v_nextMacroScope_845_);
lean_ctor_set(v_reuseFailAlloc_863_, 2, v_ngen_846_);
lean_ctor_set(v_reuseFailAlloc_863_, 3, v_auxDeclNGen_847_);
lean_ctor_set(v_reuseFailAlloc_863_, 4, v_traceState_848_);
lean_ctor_set(v_reuseFailAlloc_863_, 5, v_cache_849_);
lean_ctor_set(v_reuseFailAlloc_863_, 6, v_recordedDeps_850_);
lean_ctor_set(v_reuseFailAlloc_863_, 7, v___x_858_);
lean_ctor_set(v_reuseFailAlloc_863_, 8, v_infoState_852_);
lean_ctor_set(v_reuseFailAlloc_863_, 9, v_snapshotTasks_853_);
v___x_860_ = v_reuseFailAlloc_863_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
lean_object* v___x_861_; lean_object* v___x_862_; 
v___x_861_ = lean_st_ref_put(v___y_837_, v___x_860_);
v___x_862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_862_, 0, v___x_857_);
return v___x_862_;
}
}
}
v___jp_865_:
{
lean_object* v_fileName_874_; lean_object* v_fileMap_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v_a_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_891_; 
v_fileName_874_ = lean_ctor_get(v___y_871_, 0);
v_fileMap_875_ = lean_ctor_get(v___y_871_, 1);
v___x_876_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_820_);
v___x_877_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(v___x_876_, v___y_823_, v___y_824_, v___y_825_, v___y_826_);
v_a_878_ = lean_ctor_get(v___x_877_, 0);
v_isSharedCheck_891_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_891_ == 0)
{
v___x_880_ = v___x_877_;
v_isShared_881_ = v_isSharedCheck_891_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_a_878_);
lean_dec(v___x_877_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_891_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
lean_inc_ref_n(v_fileMap_875_, 2);
v___x_882_ = l_Lean_FileMap_toPosition(v_fileMap_875_, v___y_872_);
lean_dec(v___y_872_);
v___x_883_ = l_Lean_FileMap_toPosition(v_fileMap_875_, v___y_873_);
lean_dec(v___y_873_);
v___x_884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_884_, 0, v___x_883_);
v___x_885_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___redArg___closed__1));
if (v___y_869_ == 0)
{
lean_del_object(v___x_880_);
v___y_829_ = v___y_868_;
v___y_830_ = v_fileName_874_;
v___y_831_ = v___y_870_;
v___y_832_ = v___x_882_;
v___y_833_ = v___x_885_;
v___y_834_ = v___x_884_;
v___y_835_ = v_a_878_;
v_toCold_836_ = v___y_867_;
v___y_837_ = v___y_826_;
goto v___jp_828_;
}
else
{
uint8_t v___x_886_; 
lean_inc(v_a_878_);
lean_inc_ref(v___y_866_);
v___x_886_ = l_Lean_MessageData_hasTag(v___y_866_, v_a_878_);
if (v___x_886_ == 0)
{
lean_object* v___x_887_; lean_object* v___x_889_; 
lean_dec_ref_known(v___x_884_, 1);
lean_dec_ref(v___x_882_);
lean_dec(v_a_878_);
v___x_887_ = lean_box(0);
if (v_isShared_881_ == 0)
{
lean_ctor_set(v___x_880_, 0, v___x_887_);
v___x_889_ = v___x_880_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v___x_887_);
v___x_889_ = v_reuseFailAlloc_890_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
return v___x_889_;
}
}
else
{
lean_del_object(v___x_880_);
v___y_829_ = v___y_868_;
v___y_830_ = v_fileName_874_;
v___y_831_ = v___y_870_;
v___y_832_ = v___x_882_;
v___y_833_ = v___x_885_;
v___y_834_ = v___x_884_;
v___y_835_ = v_a_878_;
v_toCold_836_ = v___y_867_;
v___y_837_ = v___y_826_;
goto v___jp_828_;
}
}
}
}
v___jp_892_:
{
lean_object* v___x_900_; 
v___x_900_ = l_Lean_Syntax_getTailPos_x3f(v___y_897_, v___y_894_);
lean_dec(v___y_897_);
if (lean_obj_tag(v___x_900_) == 0)
{
lean_inc(v___y_899_);
v___y_866_ = v___y_893_;
v___y_867_ = v___y_896_;
v___y_868_ = v___y_894_;
v___y_869_ = v___y_895_;
v___y_870_ = v___y_898_;
v___y_871_ = v___y_896_;
v___y_872_ = v___y_899_;
v___y_873_ = v___y_899_;
goto v___jp_865_;
}
else
{
lean_object* v_val_901_; 
v_val_901_ = lean_ctor_get(v___x_900_, 0);
lean_inc(v_val_901_);
lean_dec_ref_known(v___x_900_, 1);
v___y_866_ = v___y_893_;
v___y_867_ = v___y_896_;
v___y_868_ = v___y_894_;
v___y_869_ = v___y_895_;
v___y_870_ = v___y_898_;
v___y_871_ = v___y_896_;
v___y_872_ = v___y_899_;
v___y_873_ = v_val_901_;
goto v___jp_865_;
}
}
v___jp_902_:
{
lean_object* v_toCold_904_; lean_object* v_ref_905_; uint8_t v_suppressElabErrors_906_; lean_object* v_ref_907_; uint8_t v___x_908_; lean_object* v___f_909_; lean_object* v___x_910_; 
v_toCold_904_ = lean_ctor_get(v___y_825_, 0);
v_ref_905_ = lean_ctor_get(v___y_825_, 2);
v_suppressElabErrors_906_ = lean_ctor_get_uint8(v___y_825_, sizeof(void*)*3 + 2);
v_ref_907_ = l_Lean_replaceRef(v_ref_819_, v_ref_905_);
v___x_908_ = 0;
v___f_909_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___closed__0));
v___x_910_ = l_Lean_Syntax_getPos_x3f(v_ref_907_, v___x_908_);
if (lean_obj_tag(v___x_910_) == 0)
{
lean_object* v___x_911_; 
v___x_911_ = lean_unsigned_to_nat(0u);
v___y_893_ = v___f_909_;
v___y_894_ = v___x_908_;
v___y_895_ = v_suppressElabErrors_906_;
v___y_896_ = v_toCold_904_;
v___y_897_ = v_ref_907_;
v___y_898_ = v___y_903_;
v___y_899_ = v___x_911_;
goto v___jp_892_;
}
else
{
lean_object* v_val_912_; 
v_val_912_ = lean_ctor_get(v___x_910_, 0);
lean_inc(v_val_912_);
lean_dec_ref_known(v___x_910_, 1);
v___y_893_ = v___f_909_;
v___y_894_ = v___x_908_;
v___y_895_ = v_suppressElabErrors_906_;
v___y_896_ = v_toCold_904_;
v___y_897_ = v_ref_907_;
v___y_898_ = v___y_903_;
v___y_899_ = v_val_912_;
goto v___jp_892_;
}
}
v___jp_913_:
{
uint8_t v___x_914_; uint8_t v___x_915_; 
v___x_914_ = 1;
v___x_915_ = l_Lean_instBEqMessageSeverity_beq(v_severity_821_, v___x_914_);
if (v___x_915_ == 0)
{
v___y_903_ = v_severity_821_;
goto v___jp_902_;
}
else
{
lean_object* v___x_916_; lean_object* v___x_917_; uint8_t v___x_918_; 
v___x_916_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_825_);
v___x_917_ = l_Lean_warningAsError;
v___x_918_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__3(v___x_916_, v___x_917_);
lean_dec_ref(v___x_916_);
if (v___x_918_ == 0)
{
v___y_903_ = v_severity_821_;
goto v___jp_902_;
}
else
{
uint8_t v___x_919_; 
v___x_919_ = 2;
v___y_903_ = v___x_919_;
goto v___jp_902_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg___boxed(lean_object* v_ref_925_, lean_object* v_msgData_926_, lean_object* v_severity_927_, lean_object* v_isSilent_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_){
_start:
{
uint8_t v_severity_boxed_934_; uint8_t v_isSilent_boxed_935_; lean_object* v_res_936_; 
v_severity_boxed_934_ = lean_unbox(v_severity_927_);
v_isSilent_boxed_935_ = lean_unbox(v_isSilent_928_);
v_res_936_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg(v_ref_925_, v_msgData_926_, v_severity_boxed_934_, v_isSilent_boxed_935_, v___y_929_, v___y_930_, v___y_931_, v___y_932_);
lean_dec(v___y_932_);
lean_dec_ref(v___y_931_);
lean_dec(v___y_930_);
lean_dec_ref(v___y_929_);
lean_dec(v_ref_925_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1(lean_object* v_ref_937_, lean_object* v_msgData_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_){
_start:
{
uint8_t v___x_946_; uint8_t v___x_947_; lean_object* v___x_948_; 
v___x_946_ = 1;
v___x_947_ = 0;
v___x_948_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg(v_ref_937_, v_msgData_938_, v___x_946_, v___x_947_, v___y_941_, v___y_942_, v___y_943_, v___y_944_);
return v___x_948_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1___boxed(lean_object* v_ref_949_, lean_object* v_msgData_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_){
_start:
{
lean_object* v_res_958_; 
v_res_958_ = l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1(v_ref_949_, v_msgData_950_, v___y_951_, v___y_952_, v___y_953_, v___y_954_, v___y_955_, v___y_956_);
lean_dec(v___y_956_);
lean_dec_ref(v___y_955_);
lean_dec(v___y_954_);
lean_dec_ref(v___y_953_);
lean_dec(v___y_952_);
lean_dec_ref(v___y_951_);
lean_dec(v_ref_949_);
return v_res_958_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2(lean_object* v_as_967_, size_t v_i_968_, size_t v_stop_969_, lean_object* v_b_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_){
_start:
{
lean_object* v_a_979_; uint8_t v___x_983_; 
v___x_983_ = lean_usize_dec_eq(v_i_968_, v_stop_969_);
if (v___x_983_ == 0)
{
lean_object* v___x_984_; lean_object* v_name_985_; lean_object* v_stx_986_; uint8_t v___y_988_; lean_object* v___x_998_; uint8_t v___x_999_; 
v___x_984_ = lean_array_uget_borrowed(v_as_967_, v_i_968_);
v_name_985_ = lean_ctor_get(v___x_984_, 0);
v_stx_986_ = lean_ctor_get(v___x_984_, 1);
v___x_998_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2___closed__3));
v___x_999_ = lean_name_eq(v_name_985_, v___x_998_);
if (v___x_999_ == 0)
{
lean_object* v___x_1000_; uint8_t v___x_1001_; 
v___x_1000_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2___closed__5));
v___x_1001_ = lean_name_eq(v_name_985_, v___x_1000_);
if (v___x_1001_ == 0)
{
lean_object* v___x_1002_; 
v___x_1002_ = lean_box(0);
v_a_979_ = v___x_1002_;
goto v___jp_978_;
}
else
{
v___y_988_ = v___x_1001_;
goto v___jp_987_;
}
}
else
{
v___y_988_ = v___x_999_;
goto v___jp_987_;
}
v___jp_987_:
{
lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_989_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2___closed__0));
lean_inc(v_name_985_);
v___x_990_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_985_, v___y_988_);
v___x_991_ = lean_string_append(v___x_989_, v___x_990_);
lean_dec_ref(v___x_990_);
v___x_992_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2___closed__1));
v___x_993_ = lean_string_append(v___x_991_, v___x_992_);
v___x_994_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_994_, 0, v___x_993_);
v___x_995_ = l_Lean_MessageData_ofFormat(v___x_994_);
v___x_996_ = l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1(v_stx_986_, v___x_995_, v___y_971_, v___y_972_, v___y_973_, v___y_974_, v___y_975_, v___y_976_);
if (lean_obj_tag(v___x_996_) == 0)
{
lean_object* v_a_997_; 
v_a_997_ = lean_ctor_get(v___x_996_, 0);
lean_inc(v_a_997_);
lean_dec_ref_known(v___x_996_, 1);
v_a_979_ = v_a_997_;
goto v___jp_978_;
}
else
{
return v___x_996_;
}
}
}
else
{
lean_object* v___x_1003_; 
v___x_1003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1003_, 0, v_b_970_);
return v___x_1003_;
}
v___jp_978_:
{
size_t v___x_980_; size_t v___x_981_; 
v___x_980_ = ((size_t)1ULL);
v___x_981_ = lean_usize_add(v_i_968_, v___x_980_);
v_i_968_ = v___x_981_;
v_b_970_ = v_a_979_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2___boxed(lean_object* v_as_1004_, lean_object* v_i_1005_, lean_object* v_stop_1006_, lean_object* v_b_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_){
_start:
{
size_t v_i_boxed_1015_; size_t v_stop_boxed_1016_; lean_object* v_res_1017_; 
v_i_boxed_1015_ = lean_unbox_usize(v_i_1005_);
lean_dec(v_i_1005_);
v_stop_boxed_1016_ = lean_unbox_usize(v_stop_1006_);
lean_dec(v_stop_1006_);
v_res_1017_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2(v_as_1004_, v_i_boxed_1015_, v_stop_boxed_1016_, v_b_1007_, v___y_1008_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_);
lean_dec(v___y_1013_);
lean_dec_ref(v___y_1012_);
lean_dec(v___y_1011_);
lean_dec_ref(v___y_1010_);
lean_dec(v___y_1009_);
lean_dec_ref(v___y_1008_);
lean_dec_ref(v_as_1004_);
return v_res_1017_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__14(lean_object* v_as_1018_, size_t v_i_1019_, size_t v_stop_1020_, lean_object* v_b_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_){
_start:
{
lean_object* v_a_1030_; uint8_t v___x_1034_; 
v___x_1034_ = lean_usize_dec_eq(v_i_1019_, v_stop_1020_);
if (v___x_1034_ == 0)
{
lean_object* v___x_1035_; lean_object* v_modifiers_1036_; lean_object* v_attrs_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; uint8_t v___x_1041_; 
v___x_1035_ = lean_array_uget_borrowed(v_as_1018_, v_i_1019_);
v_modifiers_1036_ = lean_ctor_get(v___x_1035_, 2);
v_attrs_1037_ = lean_ctor_get(v_modifiers_1036_, 2);
v___x_1038_ = lean_unsigned_to_nat(0u);
v___x_1039_ = lean_array_get_size(v_attrs_1037_);
v___x_1040_ = lean_box(0);
v___x_1041_ = lean_nat_dec_lt(v___x_1038_, v___x_1039_);
if (v___x_1041_ == 0)
{
v_a_1030_ = v___x_1040_;
goto v___jp_1029_;
}
else
{
size_t v___x_1042_; size_t v___x_1043_; lean_object* v___x_1044_; 
v___x_1042_ = ((size_t)0ULL);
v___x_1043_ = lean_usize_of_nat(v___x_1039_);
v___x_1044_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__2(v_attrs_1037_, v___x_1042_, v___x_1043_, v___x_1040_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_);
if (lean_obj_tag(v___x_1044_) == 0)
{
lean_object* v_a_1045_; 
v_a_1045_ = lean_ctor_get(v___x_1044_, 0);
lean_inc(v_a_1045_);
lean_dec_ref_known(v___x_1044_, 1);
v_a_1030_ = v_a_1045_;
goto v___jp_1029_;
}
else
{
return v___x_1044_;
}
}
}
else
{
lean_object* v___x_1046_; 
v___x_1046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1046_, 0, v_b_1021_);
return v___x_1046_;
}
v___jp_1029_:
{
size_t v___x_1031_; size_t v___x_1032_; 
v___x_1031_ = ((size_t)1ULL);
v___x_1032_ = lean_usize_add(v_i_1019_, v___x_1031_);
v_i_1019_ = v___x_1032_;
v_b_1021_ = v_a_1030_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__14___boxed(lean_object* v_as_1047_, lean_object* v_i_1048_, lean_object* v_stop_1049_, lean_object* v_b_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_){
_start:
{
size_t v_i_boxed_1058_; size_t v_stop_boxed_1059_; lean_object* v_res_1060_; 
v_i_boxed_1058_ = lean_unbox_usize(v_i_1048_);
lean_dec(v_i_1048_);
v_stop_boxed_1059_ = lean_unbox_usize(v_stop_1049_);
lean_dec(v_stop_1049_);
v_res_1060_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__14(v_as_1047_, v_i_boxed_1058_, v_stop_boxed_1059_, v_b_1050_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_);
lean_dec(v___y_1056_);
lean_dec_ref(v___y_1055_);
lean_dec(v___y_1054_);
lean_dec_ref(v___y_1053_);
lean_dec(v___y_1052_);
lean_dec_ref(v___y_1051_);
lean_dec_ref(v_as_1047_);
return v_res_1060_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__12(size_t v_sz_1061_, size_t v_i_1062_, lean_object* v_bs_1063_){
_start:
{
uint8_t v___x_1064_; 
v___x_1064_ = lean_usize_dec_lt(v_i_1062_, v_sz_1061_);
if (v___x_1064_ == 0)
{
return v_bs_1063_;
}
else
{
lean_object* v_v_1065_; lean_object* v_termination_1066_; lean_object* v_decreasingBy_x3f_1067_; lean_object* v___x_1068_; lean_object* v_bs_x27_1069_; size_t v___x_1070_; size_t v___x_1071_; lean_object* v___x_1072_; 
v_v_1065_ = lean_array_uget_borrowed(v_bs_1063_, v_i_1062_);
v_termination_1066_ = lean_ctor_get(v_v_1065_, 8);
v_decreasingBy_x3f_1067_ = lean_ctor_get(v_termination_1066_, 4);
lean_inc(v_decreasingBy_x3f_1067_);
v___x_1068_ = lean_unsigned_to_nat(0u);
v_bs_x27_1069_ = lean_array_uset(v_bs_1063_, v_i_1062_, v___x_1068_);
v___x_1070_ = ((size_t)1ULL);
v___x_1071_ = lean_usize_add(v_i_1062_, v___x_1070_);
v___x_1072_ = lean_array_uset(v_bs_x27_1069_, v_i_1062_, v_decreasingBy_x3f_1067_);
v_i_1062_ = v___x_1071_;
v_bs_1063_ = v___x_1072_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__12___boxed(lean_object* v_sz_1074_, lean_object* v_i_1075_, lean_object* v_bs_1076_){
_start:
{
size_t v_sz_boxed_1077_; size_t v_i_boxed_1078_; lean_object* v_res_1079_; 
v_sz_boxed_1077_ = lean_unbox_usize(v_sz_1074_);
lean_dec(v_sz_1074_);
v_i_boxed_1078_ = lean_unbox_usize(v_i_1075_);
lean_dec(v_i_1075_);
v_res_1079_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__12(v_sz_boxed_1077_, v_i_boxed_1078_, v_bs_1076_);
return v_res_1079_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___lam__3___closed__1(void){
_start:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; 
v___x_1081_ = ((lean_object*)(l_Lean_Elab_wfRecursion___lam__3___closed__0));
v___x_1082_ = l_Lean_stringToMessageData(v___x_1081_);
return v___x_1082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__3(lean_object* v_snd_1083_, size_t v_sz_1084_, size_t v___x_1085_, lean_object* v_a_1086_, lean_object* v_fst_1087_, lean_object* v_fixedArgs_1088_, lean_object* v_fst_1089_, lean_object* v___x_1090_, lean_object* v___x_1091_, lean_object* v___x_1092_, lean_object* v_wfRel_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_){
_start:
{
lean_object* v___y_1102_; lean_object* v___y_1103_; lean_object* v___y_1104_; lean_object* v___y_1105_; lean_object* v___y_1106_; lean_object* v___y_1107_; lean_object* v___y_1108_; lean_object* v_a_1109_; lean_object* v___y_1120_; lean_object* v___y_1121_; lean_object* v___y_1122_; lean_object* v___y_1123_; lean_object* v___y_1124_; lean_object* v___y_1125_; lean_object* v___y_1211_; lean_object* v___y_1212_; lean_object* v___y_1213_; lean_object* v___y_1214_; lean_object* v___y_1215_; lean_object* v___y_1216_; lean_object* v_toCold_1240_; lean_object* v_options_1241_; uint8_t v_hasTrace_1242_; 
v_toCold_1240_ = lean_ctor_get(v___y_1098_, 0);
v_options_1241_ = lean_ctor_get(v_toCold_1240_, 2);
v_hasTrace_1242_ = lean_ctor_get_uint8(v_options_1241_, sizeof(void*)*1);
if (v_hasTrace_1242_ == 0)
{
lean_dec(v___x_1092_);
v___y_1211_ = v___y_1094_;
v___y_1212_ = v___y_1095_;
v___y_1213_ = v___y_1096_;
v___y_1214_ = v___y_1097_;
v___y_1215_ = v___y_1098_;
v___y_1216_ = v___y_1099_;
goto v___jp_1210_;
}
else
{
lean_object* v_inheritedTraceOptions_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; uint8_t v___x_1246_; 
v_inheritedTraceOptions_1243_ = lean_ctor_get(v_toCold_1240_, 11);
v___x_1244_ = ((lean_object*)(l_Lean_Elab_wfRecursion___lam__2___closed__1));
lean_inc(v___x_1092_);
v___x_1245_ = l_Lean_Name_append(v___x_1244_, v___x_1092_);
v___x_1246_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1243_, v_options_1241_, v___x_1245_);
lean_dec(v___x_1245_);
if (v___x_1246_ == 0)
{
lean_dec(v___x_1092_);
v___y_1211_ = v___y_1094_;
v___y_1212_ = v___y_1095_;
v___y_1213_ = v___y_1096_;
v___y_1214_ = v___y_1097_;
v___y_1215_ = v___y_1098_;
v___y_1216_ = v___y_1099_;
goto v___jp_1210_;
}
else
{
lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; 
v___x_1247_ = lean_obj_once(&l_Lean_Elab_wfRecursion___lam__3___closed__1, &l_Lean_Elab_wfRecursion___lam__3___closed__1_once, _init_l_Lean_Elab_wfRecursion___lam__3___closed__1);
lean_inc_ref(v_wfRel_1093_);
v___x_1248_ = l_Lean_MessageData_ofExpr(v_wfRel_1093_);
v___x_1249_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1249_, 0, v___x_1247_);
lean_ctor_set(v___x_1249_, 1, v___x_1248_);
v___x_1250_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___redArg(v___x_1092_, v___x_1249_, v___y_1096_, v___y_1097_, v___y_1098_, v___y_1099_);
if (lean_obj_tag(v___x_1250_) == 0)
{
lean_dec_ref_known(v___x_1250_, 1);
v___y_1211_ = v___y_1094_;
v___y_1212_ = v___y_1095_;
v___y_1213_ = v___y_1096_;
v___y_1214_ = v___y_1097_;
v___y_1215_ = v___y_1098_;
v___y_1216_ = v___y_1099_;
goto v___jp_1210_;
}
else
{
lean_object* v_a_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1258_; 
lean_dec_ref(v_wfRel_1093_);
lean_dec_ref(v___x_1090_);
lean_dec_ref(v_fst_1089_);
lean_dec_ref(v_fixedArgs_1088_);
lean_dec_ref(v_fst_1087_);
lean_dec_ref(v_a_1086_);
lean_dec_ref(v_snd_1083_);
v_a_1251_ = lean_ctor_get(v___x_1250_, 0);
v_isSharedCheck_1258_ = !lean_is_exclusive(v___x_1250_);
if (v_isSharedCheck_1258_ == 0)
{
v___x_1253_ = v___x_1250_;
v_isShared_1254_ = v_isSharedCheck_1258_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_a_1251_);
lean_dec(v___x_1250_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1258_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
lean_object* v___x_1256_; 
if (v_isShared_1254_ == 0)
{
v___x_1256_ = v___x_1253_;
goto v_reusejp_1255_;
}
else
{
lean_object* v_reuseFailAlloc_1257_; 
v_reuseFailAlloc_1257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1257_, 0, v_a_1251_);
v___x_1256_ = v_reuseFailAlloc_1257_;
goto v_reusejp_1255_;
}
v_reusejp_1255_:
{
return v___x_1256_;
}
}
}
}
}
v___jp_1101_:
{
lean_object* v___x_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1117_; 
v___x_1110_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg(v___y_1105_, v___y_1104_, v___y_1107_);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1110_);
if (v_isSharedCheck_1117_ == 0)
{
lean_object* v_unused_1118_; 
v_unused_1118_ = lean_ctor_get(v___x_1110_, 0);
lean_dec(v_unused_1118_);
v___x_1112_ = v___x_1110_;
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
else
{
lean_dec(v___x_1110_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v___x_1115_; 
if (v_isShared_1113_ == 0)
{
lean_ctor_set_tag(v___x_1112_, 1);
lean_ctor_set(v___x_1112_, 0, v_a_1109_);
v___x_1115_ = v___x_1112_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v_a_1109_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
return v___x_1115_;
}
}
}
v___jp_1119_:
{
lean_object* v___x_1126_; lean_object* v_env_1127_; lean_object* v___x_1128_; 
v___x_1126_ = lean_st_ref_get(v___y_1125_);
v_env_1127_ = lean_ctor_get(v___x_1126_, 0);
lean_inc_ref(v_env_1127_);
lean_dec(v___x_1126_);
v___x_1128_ = l_Lean_Elab_addAsAxiom___redArg(v_snd_1083_, v___y_1124_, v___y_1125_);
if (lean_obj_tag(v___x_1128_) == 0)
{
lean_object* v___x_1129_; lean_object* v___x_1130_; 
lean_dec_ref_known(v___x_1128_, 1);
v___x_1129_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__12(v_sz_1084_, v___x_1085_, v_a_1086_);
lean_inc_ref(v_fst_1087_);
v___x_1130_ = l_Lean_Elab_WF_mkFix(v_fst_1087_, v_fixedArgs_1088_, v_fst_1089_, v_wfRel_1093_, v___x_1090_, v___x_1129_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_);
if (lean_obj_tag(v___x_1130_) == 0)
{
lean_object* v_a_1131_; lean_object* v___x_1132_; 
v_a_1131_ = lean_ctor_get(v___x_1130_, 0);
lean_inc(v_a_1131_);
lean_dec_ref_known(v___x_1130_, 1);
v___x_1132_ = l_Lean_Elab_eraseRecAppSyntaxExpr(v_a_1131_, v___y_1124_, v___y_1125_);
if (lean_obj_tag(v___x_1132_) == 0)
{
lean_object* v_a_1133_; lean_object* v___x_1134_; lean_object* v_env_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; 
v_a_1133_ = lean_ctor_get(v___x_1132_, 0);
lean_inc(v_a_1133_);
lean_dec_ref_known(v___x_1132_, 1);
v___x_1134_ = lean_st_ref_get(v___y_1125_);
v_env_1135_ = lean_ctor_get(v___x_1134_, 0);
lean_inc_ref_n(v_env_1135_, 2);
lean_dec(v___x_1134_);
v___x_1136_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg(v_env_1127_, v___y_1123_, v___y_1125_);
lean_dec_ref(v___x_1136_);
v___x_1137_ = l_Lean_Meta_unfoldDeclsFrom(v_env_1135_, v_a_1133_, v___y_1124_, v___y_1125_);
if (lean_obj_tag(v___x_1137_) == 0)
{
lean_object* v_a_1138_; lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1198_; 
v_a_1138_ = lean_ctor_get(v___x_1137_, 0);
v_isSharedCheck_1198_ = !lean_is_exclusive(v___x_1137_);
if (v_isSharedCheck_1198_ == 0)
{
v___x_1140_ = v___x_1137_;
v_isShared_1141_ = v_isSharedCheck_1198_;
goto v_resetjp_1139_;
}
else
{
lean_inc(v_a_1138_);
lean_dec(v___x_1137_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1198_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
lean_object* v___x_1142_; lean_object* v_env_1143_; lean_object* v_nextMacroScope_1144_; lean_object* v_ngen_1145_; lean_object* v_auxDeclNGen_1146_; lean_object* v_traceState_1147_; lean_object* v_recordedDeps_1148_; lean_object* v_messages_1149_; lean_object* v_infoState_1150_; lean_object* v_snapshotTasks_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1196_; 
v___x_1142_ = lean_st_ref_take(v___y_1125_);
v_env_1143_ = lean_ctor_get(v___x_1142_, 0);
v_nextMacroScope_1144_ = lean_ctor_get(v___x_1142_, 1);
v_ngen_1145_ = lean_ctor_get(v___x_1142_, 2);
v_auxDeclNGen_1146_ = lean_ctor_get(v___x_1142_, 3);
v_traceState_1147_ = lean_ctor_get(v___x_1142_, 4);
v_recordedDeps_1148_ = lean_ctor_get(v___x_1142_, 6);
v_messages_1149_ = lean_ctor_get(v___x_1142_, 7);
v_infoState_1150_ = lean_ctor_get(v___x_1142_, 8);
v_snapshotTasks_1151_ = lean_ctor_get(v___x_1142_, 9);
v_isSharedCheck_1196_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1196_ == 0)
{
lean_object* v_unused_1197_; 
v_unused_1197_ = lean_ctor_get(v___x_1142_, 5);
lean_dec(v_unused_1197_);
v___x_1153_ = v___x_1142_;
v_isShared_1154_ = v_isSharedCheck_1196_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_snapshotTasks_1151_);
lean_inc(v_infoState_1150_);
lean_inc(v_messages_1149_);
lean_inc(v_recordedDeps_1148_);
lean_inc(v_traceState_1147_);
lean_inc(v_auxDeclNGen_1146_);
lean_inc(v_ngen_1145_);
lean_inc(v_nextMacroScope_1144_);
lean_inc(v_env_1143_);
lean_dec(v___x_1142_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1196_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1158_; 
v___x_1155_ = l_Lean_copyExtraModUses(v_env_1135_, v_env_1143_);
v___x_1156_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__1, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__1);
if (v_isShared_1154_ == 0)
{
lean_ctor_set(v___x_1153_, 5, v___x_1156_);
lean_ctor_set(v___x_1153_, 0, v___x_1155_);
v___x_1158_ = v___x_1153_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v___x_1155_);
lean_ctor_set(v_reuseFailAlloc_1195_, 1, v_nextMacroScope_1144_);
lean_ctor_set(v_reuseFailAlloc_1195_, 2, v_ngen_1145_);
lean_ctor_set(v_reuseFailAlloc_1195_, 3, v_auxDeclNGen_1146_);
lean_ctor_set(v_reuseFailAlloc_1195_, 4, v_traceState_1147_);
lean_ctor_set(v_reuseFailAlloc_1195_, 5, v___x_1156_);
lean_ctor_set(v_reuseFailAlloc_1195_, 6, v_recordedDeps_1148_);
lean_ctor_set(v_reuseFailAlloc_1195_, 7, v_messages_1149_);
lean_ctor_set(v_reuseFailAlloc_1195_, 8, v_infoState_1150_);
lean_ctor_set(v_reuseFailAlloc_1195_, 9, v_snapshotTasks_1151_);
v___x_1158_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v_mctx_1161_; lean_object* v_zetaDeltaFVarIds_1162_; lean_object* v_postponed_1163_; lean_object* v_diag_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1193_; 
v___x_1159_ = lean_st_ref_put(v___y_1125_, v___x_1158_);
v___x_1160_ = lean_st_ref_take(v___y_1123_);
v_mctx_1161_ = lean_ctor_get(v___x_1160_, 0);
v_zetaDeltaFVarIds_1162_ = lean_ctor_get(v___x_1160_, 2);
v_postponed_1163_ = lean_ctor_get(v___x_1160_, 3);
v_diag_1164_ = lean_ctor_get(v___x_1160_, 4);
v_isSharedCheck_1193_ = !lean_is_exclusive(v___x_1160_);
if (v_isSharedCheck_1193_ == 0)
{
lean_object* v_unused_1194_; 
v_unused_1194_ = lean_ctor_get(v___x_1160_, 1);
lean_dec(v_unused_1194_);
v___x_1166_ = v___x_1160_;
v_isShared_1167_ = v_isSharedCheck_1193_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_diag_1164_);
lean_inc(v_postponed_1163_);
lean_inc(v_zetaDeltaFVarIds_1162_);
lean_inc(v_mctx_1161_);
lean_dec(v___x_1160_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1193_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v___x_1168_; lean_object* v___x_1170_; 
v___x_1168_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__5, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__5_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__5);
if (v_isShared_1167_ == 0)
{
lean_ctor_set(v___x_1166_, 1, v___x_1168_);
v___x_1170_ = v___x_1166_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v_mctx_1161_);
lean_ctor_set(v_reuseFailAlloc_1192_, 1, v___x_1168_);
lean_ctor_set(v_reuseFailAlloc_1192_, 2, v_zetaDeltaFVarIds_1162_);
lean_ctor_set(v_reuseFailAlloc_1192_, 3, v_postponed_1163_);
lean_ctor_set(v_reuseFailAlloc_1192_, 4, v_diag_1164_);
v___x_1170_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
lean_object* v___x_1171_; lean_object* v_ref_1172_; uint8_t v_kind_1173_; lean_object* v_levelParams_1174_; lean_object* v_modifiers_1175_; lean_object* v_declName_1176_; lean_object* v_binders_1177_; lean_object* v_numSectionVars_1178_; lean_object* v_type_1179_; lean_object* v_termination_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1190_; 
v___x_1171_ = lean_st_ref_put(v___y_1123_, v___x_1170_);
v_ref_1172_ = lean_ctor_get(v_fst_1087_, 0);
v_kind_1173_ = lean_ctor_get_uint8(v_fst_1087_, sizeof(void*)*9);
v_levelParams_1174_ = lean_ctor_get(v_fst_1087_, 1);
v_modifiers_1175_ = lean_ctor_get(v_fst_1087_, 2);
v_declName_1176_ = lean_ctor_get(v_fst_1087_, 3);
v_binders_1177_ = lean_ctor_get(v_fst_1087_, 4);
v_numSectionVars_1178_ = lean_ctor_get(v_fst_1087_, 5);
v_type_1179_ = lean_ctor_get(v_fst_1087_, 6);
v_termination_1180_ = lean_ctor_get(v_fst_1087_, 8);
v_isSharedCheck_1190_ = !lean_is_exclusive(v_fst_1087_);
if (v_isSharedCheck_1190_ == 0)
{
lean_object* v_unused_1191_; 
v_unused_1191_ = lean_ctor_get(v_fst_1087_, 7);
lean_dec(v_unused_1191_);
v___x_1182_ = v_fst_1087_;
v_isShared_1183_ = v_isSharedCheck_1190_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_termination_1180_);
lean_inc(v_type_1179_);
lean_inc(v_numSectionVars_1178_);
lean_inc(v_binders_1177_);
lean_inc(v_declName_1176_);
lean_inc(v_modifiers_1175_);
lean_inc(v_levelParams_1174_);
lean_inc(v_ref_1172_);
lean_dec(v_fst_1087_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1190_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v___x_1185_; 
if (v_isShared_1183_ == 0)
{
lean_ctor_set(v___x_1182_, 7, v_a_1138_);
v___x_1185_ = v___x_1182_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v_ref_1172_);
lean_ctor_set(v_reuseFailAlloc_1189_, 1, v_levelParams_1174_);
lean_ctor_set(v_reuseFailAlloc_1189_, 2, v_modifiers_1175_);
lean_ctor_set(v_reuseFailAlloc_1189_, 3, v_declName_1176_);
lean_ctor_set(v_reuseFailAlloc_1189_, 4, v_binders_1177_);
lean_ctor_set(v_reuseFailAlloc_1189_, 5, v_numSectionVars_1178_);
lean_ctor_set(v_reuseFailAlloc_1189_, 6, v_type_1179_);
lean_ctor_set(v_reuseFailAlloc_1189_, 7, v_a_1138_);
lean_ctor_set(v_reuseFailAlloc_1189_, 8, v_termination_1180_);
lean_ctor_set_uint8(v_reuseFailAlloc_1189_, sizeof(void*)*9, v_kind_1173_);
v___x_1185_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1184_;
}
v_reusejp_1184_:
{
lean_object* v___x_1187_; 
if (v_isShared_1141_ == 0)
{
lean_ctor_set(v___x_1140_, 0, v___x_1185_);
v___x_1187_ = v___x_1140_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v___x_1185_);
v___x_1187_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
return v___x_1187_;
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
lean_object* v_a_1199_; lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1206_; 
lean_dec_ref(v_env_1135_);
lean_dec_ref(v_fst_1087_);
v_a_1199_ = lean_ctor_get(v___x_1137_, 0);
v_isSharedCheck_1206_ = !lean_is_exclusive(v___x_1137_);
if (v_isSharedCheck_1206_ == 0)
{
v___x_1201_ = v___x_1137_;
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
else
{
lean_inc(v_a_1199_);
lean_dec(v___x_1137_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
lean_object* v___x_1204_; 
if (v_isShared_1202_ == 0)
{
v___x_1204_ = v___x_1201_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v_a_1199_);
v___x_1204_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
return v___x_1204_;
}
}
}
}
else
{
lean_object* v_a_1207_; 
lean_dec_ref(v_fst_1087_);
v_a_1207_ = lean_ctor_get(v___x_1132_, 0);
lean_inc(v_a_1207_);
lean_dec_ref_known(v___x_1132_, 1);
v___y_1102_ = v___y_1122_;
v___y_1103_ = v___y_1120_;
v___y_1104_ = v___y_1123_;
v___y_1105_ = v_env_1127_;
v___y_1106_ = v___y_1121_;
v___y_1107_ = v___y_1125_;
v___y_1108_ = v___y_1124_;
v_a_1109_ = v_a_1207_;
goto v___jp_1101_;
}
}
else
{
lean_object* v_a_1208_; 
lean_dec_ref(v_fst_1087_);
v_a_1208_ = lean_ctor_get(v___x_1130_, 0);
lean_inc(v_a_1208_);
lean_dec_ref_known(v___x_1130_, 1);
v___y_1102_ = v___y_1122_;
v___y_1103_ = v___y_1120_;
v___y_1104_ = v___y_1123_;
v___y_1105_ = v_env_1127_;
v___y_1106_ = v___y_1121_;
v___y_1107_ = v___y_1125_;
v___y_1108_ = v___y_1124_;
v_a_1109_ = v_a_1208_;
goto v___jp_1101_;
}
}
else
{
lean_object* v_a_1209_; 
lean_dec_ref(v_wfRel_1093_);
lean_dec_ref(v___x_1090_);
lean_dec_ref(v_fst_1089_);
lean_dec_ref(v_fixedArgs_1088_);
lean_dec_ref(v_fst_1087_);
lean_dec_ref(v_a_1086_);
v_a_1209_ = lean_ctor_get(v___x_1128_, 0);
lean_inc(v_a_1209_);
lean_dec_ref_known(v___x_1128_, 1);
v___y_1102_ = v___y_1122_;
v___y_1103_ = v___y_1120_;
v___y_1104_ = v___y_1123_;
v___y_1105_ = v_env_1127_;
v___y_1106_ = v___y_1121_;
v___y_1107_ = v___y_1125_;
v___y_1108_ = v___y_1124_;
v_a_1109_ = v_a_1209_;
goto v___jp_1101_;
}
}
v___jp_1210_:
{
lean_object* v___x_1217_; 
lean_inc_ref(v_wfRel_1093_);
v___x_1217_ = l_Lean_Elab_WF_isNatLtWF(v_wfRel_1093_, v___y_1213_, v___y_1214_, v___y_1215_, v___y_1216_);
if (lean_obj_tag(v___x_1217_) == 0)
{
lean_object* v_a_1218_; 
v_a_1218_ = lean_ctor_get(v___x_1217_, 0);
lean_inc(v_a_1218_);
lean_dec_ref_known(v___x_1217_, 1);
if (lean_obj_tag(v_a_1218_) == 0)
{
lean_object* v___x_1219_; lean_object* v___x_1220_; uint8_t v___x_1221_; 
v___x_1219_ = lean_unsigned_to_nat(0u);
v___x_1220_ = lean_array_get_size(v_a_1086_);
v___x_1221_ = lean_nat_dec_lt(v___x_1219_, v___x_1220_);
if (v___x_1221_ == 0)
{
v___y_1120_ = v___y_1211_;
v___y_1121_ = v___y_1212_;
v___y_1122_ = v___y_1213_;
v___y_1123_ = v___y_1214_;
v___y_1124_ = v___y_1215_;
v___y_1125_ = v___y_1216_;
goto v___jp_1119_;
}
else
{
size_t v___x_1222_; lean_object* v___x_1223_; 
v___x_1222_ = lean_usize_of_nat(v___x_1220_);
v___x_1223_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__14(v_a_1086_, v___x_1085_, v___x_1222_, v___x_1091_, v___y_1211_, v___y_1212_, v___y_1213_, v___y_1214_, v___y_1215_, v___y_1216_);
if (lean_obj_tag(v___x_1223_) == 0)
{
lean_dec_ref_known(v___x_1223_, 1);
v___y_1120_ = v___y_1211_;
v___y_1121_ = v___y_1212_;
v___y_1122_ = v___y_1213_;
v___y_1123_ = v___y_1214_;
v___y_1124_ = v___y_1215_;
v___y_1125_ = v___y_1216_;
goto v___jp_1119_;
}
else
{
lean_object* v_a_1224_; lean_object* v___x_1226_; uint8_t v_isShared_1227_; uint8_t v_isSharedCheck_1231_; 
lean_dec_ref(v_wfRel_1093_);
lean_dec_ref(v___x_1090_);
lean_dec_ref(v_fst_1089_);
lean_dec_ref(v_fixedArgs_1088_);
lean_dec_ref(v_fst_1087_);
lean_dec_ref(v_a_1086_);
lean_dec_ref(v_snd_1083_);
v_a_1224_ = lean_ctor_get(v___x_1223_, 0);
v_isSharedCheck_1231_ = !lean_is_exclusive(v___x_1223_);
if (v_isSharedCheck_1231_ == 0)
{
v___x_1226_ = v___x_1223_;
v_isShared_1227_ = v_isSharedCheck_1231_;
goto v_resetjp_1225_;
}
else
{
lean_inc(v_a_1224_);
lean_dec(v___x_1223_);
v___x_1226_ = lean_box(0);
v_isShared_1227_ = v_isSharedCheck_1231_;
goto v_resetjp_1225_;
}
v_resetjp_1225_:
{
lean_object* v___x_1229_; 
if (v_isShared_1227_ == 0)
{
v___x_1229_ = v___x_1226_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v_a_1224_);
v___x_1229_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
return v___x_1229_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_a_1218_, 1);
v___y_1120_ = v___y_1211_;
v___y_1121_ = v___y_1212_;
v___y_1122_ = v___y_1213_;
v___y_1123_ = v___y_1214_;
v___y_1124_ = v___y_1215_;
v___y_1125_ = v___y_1216_;
goto v___jp_1119_;
}
}
else
{
lean_object* v_a_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1239_; 
lean_dec_ref(v_wfRel_1093_);
lean_dec_ref(v___x_1090_);
lean_dec_ref(v_fst_1089_);
lean_dec_ref(v_fixedArgs_1088_);
lean_dec_ref(v_fst_1087_);
lean_dec_ref(v_a_1086_);
lean_dec_ref(v_snd_1083_);
v_a_1232_ = lean_ctor_get(v___x_1217_, 0);
v_isSharedCheck_1239_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1239_ == 0)
{
v___x_1234_ = v___x_1217_;
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_a_1232_);
lean_dec(v___x_1217_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
lean_object* v___x_1237_; 
if (v_isShared_1235_ == 0)
{
v___x_1237_ = v___x_1234_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v_a_1232_);
v___x_1237_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
return v___x_1237_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__3___boxed(lean_object** _args){
lean_object* v_snd_1259_ = _args[0];
lean_object* v_sz_1260_ = _args[1];
lean_object* v___x_1261_ = _args[2];
lean_object* v_a_1262_ = _args[3];
lean_object* v_fst_1263_ = _args[4];
lean_object* v_fixedArgs_1264_ = _args[5];
lean_object* v_fst_1265_ = _args[6];
lean_object* v___x_1266_ = _args[7];
lean_object* v___x_1267_ = _args[8];
lean_object* v___x_1268_ = _args[9];
lean_object* v_wfRel_1269_ = _args[10];
lean_object* v___y_1270_ = _args[11];
lean_object* v___y_1271_ = _args[12];
lean_object* v___y_1272_ = _args[13];
lean_object* v___y_1273_ = _args[14];
lean_object* v___y_1274_ = _args[15];
lean_object* v___y_1275_ = _args[16];
lean_object* v___y_1276_ = _args[17];
_start:
{
size_t v_sz_boxed_1277_; size_t v___x_47139__boxed_1278_; lean_object* v_res_1279_; 
v_sz_boxed_1277_ = lean_unbox_usize(v_sz_1260_);
lean_dec(v_sz_1260_);
v___x_47139__boxed_1278_ = lean_unbox_usize(v___x_1261_);
lean_dec(v___x_1261_);
v_res_1279_ = l_Lean_Elab_wfRecursion___lam__3(v_snd_1259_, v_sz_boxed_1277_, v___x_47139__boxed_1278_, v_a_1262_, v_fst_1263_, v_fixedArgs_1264_, v_fst_1265_, v___x_1266_, v___x_1267_, v___x_1268_, v_wfRel_1269_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_, v___y_1274_, v___y_1275_);
lean_dec(v___y_1275_);
lean_dec_ref(v___y_1274_);
lean_dec(v___y_1273_);
lean_dec_ref(v___y_1272_);
lean_dec(v___y_1271_);
lean_dec_ref(v___y_1270_);
return v_res_1279_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___lam__4___closed__1(void){
_start:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; 
v___x_1281_ = ((lean_object*)(l_Lean_Elab_wfRecursion___lam__4___closed__0));
v___x_1282_ = l_Lean_stringToMessageData(v___x_1281_);
return v___x_1282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__4(size_t v_sz_1283_, size_t v___x_1284_, lean_object* v_a_1285_, lean_object* v_snd_1286_, lean_object* v_fst_1287_, lean_object* v_fst_1288_, lean_object* v___x_1289_, lean_object* v___x_1290_, lean_object* v_declName_1291_, lean_object* v_fst_1292_, lean_object* v_wf_1293_, lean_object* v_fixedArgs_1294_, lean_object* v_type_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_){
_start:
{
lean_object* v___x_1303_; 
v___x_1303_ = l_Lean_Meta_whnfForall(v_type_1295_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_);
if (lean_obj_tag(v___x_1303_) == 0)
{
lean_object* v_a_1304_; lean_object* v___y_1306_; lean_object* v___y_1307_; lean_object* v___y_1308_; lean_object* v___y_1309_; lean_object* v___y_1310_; lean_object* v___y_1311_; uint8_t v___x_1318_; 
v_a_1304_ = lean_ctor_get(v___x_1303_, 0);
lean_inc(v_a_1304_);
lean_dec_ref_known(v___x_1303_, 1);
v___x_1318_ = l_Lean_Expr_isForall(v_a_1304_);
if (v___x_1318_ == 0)
{
lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v_a_1323_; lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1330_; 
lean_dec_ref(v_fixedArgs_1294_);
lean_dec_ref(v_wf_1293_);
lean_dec_ref(v_fst_1292_);
lean_dec(v_declName_1291_);
lean_dec(v___x_1290_);
lean_dec_ref(v_fst_1288_);
lean_dec_ref(v_fst_1287_);
lean_dec_ref(v_snd_1286_);
lean_dec_ref(v_a_1285_);
v___x_1319_ = lean_obj_once(&l_Lean_Elab_wfRecursion___lam__4___closed__1, &l_Lean_Elab_wfRecursion___lam__4___closed__1_once, _init_l_Lean_Elab_wfRecursion___lam__4___closed__1);
v___x_1320_ = l_Lean_MessageData_ofExpr(v_a_1304_);
v___x_1321_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1319_);
lean_ctor_set(v___x_1321_, 1, v___x_1320_);
v___x_1322_ = l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(v___x_1321_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_);
v_a_1323_ = lean_ctor_get(v___x_1322_, 0);
v_isSharedCheck_1330_ = !lean_is_exclusive(v___x_1322_);
if (v_isSharedCheck_1330_ == 0)
{
v___x_1325_ = v___x_1322_;
v_isShared_1326_ = v_isSharedCheck_1330_;
goto v_resetjp_1324_;
}
else
{
lean_inc(v_a_1323_);
lean_dec(v___x_1322_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1330_;
goto v_resetjp_1324_;
}
v_resetjp_1324_:
{
lean_object* v___x_1328_; 
if (v_isShared_1326_ == 0)
{
v___x_1328_ = v___x_1325_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v_a_1323_);
v___x_1328_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
return v___x_1328_;
}
}
}
else
{
v___y_1306_ = v___y_1296_;
v___y_1307_ = v___y_1297_;
v___y_1308_ = v___y_1298_;
v___y_1309_ = v___y_1299_;
v___y_1310_ = v___y_1300_;
v___y_1311_ = v___y_1301_;
goto v___jp_1305_;
}
v___jp_1305_:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___f_1316_; lean_object* v___x_1317_; 
v___x_1312_ = l_Lean_Expr_bindingDomain_x21(v_a_1304_);
lean_dec(v_a_1304_);
lean_inc_ref(v_a_1285_);
v___x_1313_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__8(v_sz_1283_, v___x_1284_, v_a_1285_);
v___x_1314_ = lean_box_usize(v_sz_1283_);
v___x_1315_ = lean_box_usize(v___x_1284_);
lean_inc_ref(v___x_1313_);
lean_inc_ref(v_fst_1288_);
lean_inc_ref(v_fixedArgs_1294_);
v___f_1316_ = lean_alloc_closure((void*)(l_Lean_Elab_wfRecursion___lam__3___boxed), 18, 10);
lean_closure_set(v___f_1316_, 0, v_snd_1286_);
lean_closure_set(v___f_1316_, 1, v___x_1314_);
lean_closure_set(v___f_1316_, 2, v___x_1315_);
lean_closure_set(v___f_1316_, 3, v_a_1285_);
lean_closure_set(v___f_1316_, 4, v_fst_1287_);
lean_closure_set(v___f_1316_, 5, v_fixedArgs_1294_);
lean_closure_set(v___f_1316_, 6, v_fst_1288_);
lean_closure_set(v___f_1316_, 7, v___x_1313_);
lean_closure_set(v___f_1316_, 8, v___x_1289_);
lean_closure_set(v___f_1316_, 9, v___x_1290_);
v___x_1317_ = l_Lean_Elab_WF_elabWFRel___redArg(v___x_1313_, v_declName_1291_, v_fst_1292_, v_fixedArgs_1294_, v_fst_1288_, v___x_1312_, v_wf_1293_, v___f_1316_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_);
return v___x_1317_;
}
}
else
{
lean_object* v_a_1331_; lean_object* v___x_1333_; uint8_t v_isShared_1334_; uint8_t v_isSharedCheck_1338_; 
lean_dec_ref(v_fixedArgs_1294_);
lean_dec_ref(v_wf_1293_);
lean_dec_ref(v_fst_1292_);
lean_dec(v_declName_1291_);
lean_dec(v___x_1290_);
lean_dec_ref(v_fst_1288_);
lean_dec_ref(v_fst_1287_);
lean_dec_ref(v_snd_1286_);
lean_dec_ref(v_a_1285_);
v_a_1331_ = lean_ctor_get(v___x_1303_, 0);
v_isSharedCheck_1338_ = !lean_is_exclusive(v___x_1303_);
if (v_isSharedCheck_1338_ == 0)
{
v___x_1333_ = v___x_1303_;
v_isShared_1334_ = v_isSharedCheck_1338_;
goto v_resetjp_1332_;
}
else
{
lean_inc(v_a_1331_);
lean_dec(v___x_1303_);
v___x_1333_ = lean_box(0);
v_isShared_1334_ = v_isSharedCheck_1338_;
goto v_resetjp_1332_;
}
v_resetjp_1332_:
{
lean_object* v___x_1336_; 
if (v_isShared_1334_ == 0)
{
v___x_1336_ = v___x_1333_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1337_; 
v_reuseFailAlloc_1337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1337_, 0, v_a_1331_);
v___x_1336_ = v_reuseFailAlloc_1337_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
return v___x_1336_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__4___boxed(lean_object** _args){
lean_object* v_sz_1339_ = _args[0];
lean_object* v___x_1340_ = _args[1];
lean_object* v_a_1341_ = _args[2];
lean_object* v_snd_1342_ = _args[3];
lean_object* v_fst_1343_ = _args[4];
lean_object* v_fst_1344_ = _args[5];
lean_object* v___x_1345_ = _args[6];
lean_object* v___x_1346_ = _args[7];
lean_object* v_declName_1347_ = _args[8];
lean_object* v_fst_1348_ = _args[9];
lean_object* v_wf_1349_ = _args[10];
lean_object* v_fixedArgs_1350_ = _args[11];
lean_object* v_type_1351_ = _args[12];
lean_object* v___y_1352_ = _args[13];
lean_object* v___y_1353_ = _args[14];
lean_object* v___y_1354_ = _args[15];
lean_object* v___y_1355_ = _args[16];
lean_object* v___y_1356_ = _args[17];
lean_object* v___y_1357_ = _args[18];
lean_object* v___y_1358_ = _args[19];
_start:
{
size_t v_sz_boxed_1359_; size_t v___x_47460__boxed_1360_; lean_object* v_res_1361_; 
v_sz_boxed_1359_ = lean_unbox_usize(v_sz_1339_);
lean_dec(v_sz_1339_);
v___x_47460__boxed_1360_ = lean_unbox_usize(v___x_1340_);
lean_dec(v___x_1340_);
v_res_1361_ = l_Lean_Elab_wfRecursion___lam__4(v_sz_boxed_1359_, v___x_47460__boxed_1360_, v_a_1341_, v_snd_1342_, v_fst_1343_, v_fst_1344_, v___x_1345_, v___x_1346_, v_declName_1347_, v_fst_1348_, v_wf_1349_, v_fixedArgs_1350_, v_type_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_);
lean_dec(v___y_1357_);
lean_dec_ref(v___y_1356_);
lean_dec(v___y_1355_);
lean_dec_ref(v___y_1354_);
lean_dec(v___y_1353_);
lean_dec_ref(v___y_1352_);
return v_res_1361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__5(lean_object* v_a_1362_, lean_object* v_fst_1363_, lean_object* v_fst_1364_, lean_object* v_fst_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_){
_start:
{
lean_object* v___x_1373_; 
v___x_1373_ = l_Lean_Elab_WF_guessLex(v_a_1362_, v_fst_1363_, v_fst_1364_, v_fst_1365_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_);
return v___x_1373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__5___boxed(lean_object* v_a_1374_, lean_object* v_fst_1375_, lean_object* v_fst_1376_, lean_object* v_fst_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_){
_start:
{
lean_object* v_res_1385_; 
v_res_1385_ = l_Lean_Elab_wfRecursion___lam__5(v_a_1374_, v_fst_1375_, v_fst_1376_, v_fst_1377_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_);
lean_dec(v___y_1383_);
lean_dec_ref(v___y_1382_);
lean_dec(v___y_1381_);
lean_dec_ref(v___y_1380_);
lean_dec(v___y_1379_);
lean_dec_ref(v___y_1378_);
return v_res_1385_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19_spec__23___redArg___lam__0(lean_object* v___y_1386_, uint8_t v_isExporting_1387_, lean_object* v___x_1388_, lean_object* v___y_1389_, lean_object* v___x_1390_, lean_object* v_a_x3f_1391_){
_start:
{
lean_object* v___x_1393_; lean_object* v_env_1394_; lean_object* v_nextMacroScope_1395_; lean_object* v_ngen_1396_; lean_object* v_auxDeclNGen_1397_; lean_object* v_traceState_1398_; lean_object* v_recordedDeps_1399_; lean_object* v_messages_1400_; lean_object* v_infoState_1401_; lean_object* v_snapshotTasks_1402_; lean_object* v___x_1404_; uint8_t v_isShared_1405_; uint8_t v_isSharedCheck_1427_; 
v___x_1393_ = lean_st_ref_take(v___y_1386_);
v_env_1394_ = lean_ctor_get(v___x_1393_, 0);
v_nextMacroScope_1395_ = lean_ctor_get(v___x_1393_, 1);
v_ngen_1396_ = lean_ctor_get(v___x_1393_, 2);
v_auxDeclNGen_1397_ = lean_ctor_get(v___x_1393_, 3);
v_traceState_1398_ = lean_ctor_get(v___x_1393_, 4);
v_recordedDeps_1399_ = lean_ctor_get(v___x_1393_, 6);
v_messages_1400_ = lean_ctor_get(v___x_1393_, 7);
v_infoState_1401_ = lean_ctor_get(v___x_1393_, 8);
v_snapshotTasks_1402_ = lean_ctor_get(v___x_1393_, 9);
v_isSharedCheck_1427_ = !lean_is_exclusive(v___x_1393_);
if (v_isSharedCheck_1427_ == 0)
{
lean_object* v_unused_1428_; 
v_unused_1428_ = lean_ctor_get(v___x_1393_, 5);
lean_dec(v_unused_1428_);
v___x_1404_ = v___x_1393_;
v_isShared_1405_ = v_isSharedCheck_1427_;
goto v_resetjp_1403_;
}
else
{
lean_inc(v_snapshotTasks_1402_);
lean_inc(v_infoState_1401_);
lean_inc(v_messages_1400_);
lean_inc(v_recordedDeps_1399_);
lean_inc(v_traceState_1398_);
lean_inc(v_auxDeclNGen_1397_);
lean_inc(v_ngen_1396_);
lean_inc(v_nextMacroScope_1395_);
lean_inc(v_env_1394_);
lean_dec(v___x_1393_);
v___x_1404_ = lean_box(0);
v_isShared_1405_ = v_isSharedCheck_1427_;
goto v_resetjp_1403_;
}
v_resetjp_1403_:
{
lean_object* v___x_1406_; lean_object* v___x_1408_; 
v___x_1406_ = l_Lean_Environment_setExporting(v_env_1394_, v_isExporting_1387_);
if (v_isShared_1405_ == 0)
{
lean_ctor_set(v___x_1404_, 5, v___x_1388_);
lean_ctor_set(v___x_1404_, 0, v___x_1406_);
v___x_1408_ = v___x_1404_;
goto v_reusejp_1407_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v___x_1406_);
lean_ctor_set(v_reuseFailAlloc_1426_, 1, v_nextMacroScope_1395_);
lean_ctor_set(v_reuseFailAlloc_1426_, 2, v_ngen_1396_);
lean_ctor_set(v_reuseFailAlloc_1426_, 3, v_auxDeclNGen_1397_);
lean_ctor_set(v_reuseFailAlloc_1426_, 4, v_traceState_1398_);
lean_ctor_set(v_reuseFailAlloc_1426_, 5, v___x_1388_);
lean_ctor_set(v_reuseFailAlloc_1426_, 6, v_recordedDeps_1399_);
lean_ctor_set(v_reuseFailAlloc_1426_, 7, v_messages_1400_);
lean_ctor_set(v_reuseFailAlloc_1426_, 8, v_infoState_1401_);
lean_ctor_set(v_reuseFailAlloc_1426_, 9, v_snapshotTasks_1402_);
v___x_1408_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1407_;
}
v_reusejp_1407_:
{
lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v_mctx_1411_; lean_object* v_zetaDeltaFVarIds_1412_; lean_object* v_postponed_1413_; lean_object* v_diag_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1424_; 
v___x_1409_ = lean_st_ref_put(v___y_1386_, v___x_1408_);
v___x_1410_ = lean_st_ref_take(v___y_1389_);
v_mctx_1411_ = lean_ctor_get(v___x_1410_, 0);
v_zetaDeltaFVarIds_1412_ = lean_ctor_get(v___x_1410_, 2);
v_postponed_1413_ = lean_ctor_get(v___x_1410_, 3);
v_diag_1414_ = lean_ctor_get(v___x_1410_, 4);
v_isSharedCheck_1424_ = !lean_is_exclusive(v___x_1410_);
if (v_isSharedCheck_1424_ == 0)
{
lean_object* v_unused_1425_; 
v_unused_1425_ = lean_ctor_get(v___x_1410_, 1);
lean_dec(v_unused_1425_);
v___x_1416_ = v___x_1410_;
v_isShared_1417_ = v_isSharedCheck_1424_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_diag_1414_);
lean_inc(v_postponed_1413_);
lean_inc(v_zetaDeltaFVarIds_1412_);
lean_inc(v_mctx_1411_);
lean_dec(v___x_1410_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1424_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1418_; lean_object* v___x_1420_; 
v___x_1418_ = lean_box(0);
if (v_isShared_1417_ == 0)
{
lean_ctor_set(v___x_1416_, 1, v___x_1390_);
v___x_1420_ = v___x_1416_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1423_; 
v_reuseFailAlloc_1423_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1423_, 0, v_mctx_1411_);
lean_ctor_set(v_reuseFailAlloc_1423_, 1, v___x_1390_);
lean_ctor_set(v_reuseFailAlloc_1423_, 2, v_zetaDeltaFVarIds_1412_);
lean_ctor_set(v_reuseFailAlloc_1423_, 3, v_postponed_1413_);
lean_ctor_set(v_reuseFailAlloc_1423_, 4, v_diag_1414_);
v___x_1420_ = v_reuseFailAlloc_1423_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
lean_object* v___x_1421_; lean_object* v___x_1422_; 
v___x_1421_ = lean_st_ref_put(v___y_1389_, v___x_1420_);
v___x_1422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1418_);
return v___x_1422_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19_spec__23___redArg___lam__0___boxed(lean_object* v___y_1429_, lean_object* v_isExporting_1430_, lean_object* v___x_1431_, lean_object* v___y_1432_, lean_object* v___x_1433_, lean_object* v_a_x3f_1434_, lean_object* v___y_1435_){
_start:
{
uint8_t v_isExporting_boxed_1436_; lean_object* v_res_1437_; 
v_isExporting_boxed_1436_ = lean_unbox(v_isExporting_1430_);
v_res_1437_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19_spec__23___redArg___lam__0(v___y_1429_, v_isExporting_boxed_1436_, v___x_1431_, v___y_1432_, v___x_1433_, v_a_x3f_1434_);
lean_dec(v_a_x3f_1434_);
lean_dec(v___y_1432_);
lean_dec(v___y_1429_);
return v_res_1437_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19_spec__23___redArg(lean_object* v_x_1438_, uint8_t v_isExporting_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_){
_start:
{
lean_object* v___x_1447_; lean_object* v_env_1448_; lean_object* v___x_1449_; uint8_t v_isModule_1450_; 
v___x_1447_ = lean_st_ref_get(v___y_1445_);
v_env_1448_ = lean_ctor_get(v___x_1447_, 0);
lean_inc_ref(v_env_1448_);
lean_dec(v___x_1447_);
v___x_1449_ = l_Lean_Environment_header(v_env_1448_);
v_isModule_1450_ = lean_ctor_get_uint8(v___x_1449_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_1449_);
if (v_isModule_1450_ == 0)
{
lean_object* v___x_1451_; 
lean_dec_ref(v_env_1448_);
lean_inc(v___y_1445_);
lean_inc_ref(v___y_1444_);
lean_inc(v___y_1443_);
lean_inc_ref(v___y_1442_);
lean_inc(v___y_1441_);
lean_inc_ref(v___y_1440_);
v___x_1451_ = lean_apply_7(v_x_1438_, v___y_1440_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_, lean_box(0));
return v___x_1451_;
}
else
{
uint8_t v_isExporting_1452_; 
v_isExporting_1452_ = lean_ctor_get_uint8(v_env_1448_, sizeof(void*)*13);
lean_dec_ref(v_env_1448_);
if (v_isExporting_1439_ == 0)
{
if (v_isExporting_1452_ == 0)
{
lean_object* v___x_1519_; 
lean_inc(v___y_1445_);
lean_inc_ref(v___y_1444_);
lean_inc(v___y_1443_);
lean_inc_ref(v___y_1442_);
lean_inc(v___y_1441_);
lean_inc_ref(v___y_1440_);
v___x_1519_ = lean_apply_7(v_x_1438_, v___y_1440_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_, lean_box(0));
return v___x_1519_;
}
else
{
goto v___jp_1453_;
}
}
else
{
if (v_isExporting_1452_ == 0)
{
goto v___jp_1453_;
}
else
{
lean_object* v___x_1520_; 
lean_inc(v___y_1445_);
lean_inc_ref(v___y_1444_);
lean_inc(v___y_1443_);
lean_inc_ref(v___y_1442_);
lean_inc(v___y_1441_);
lean_inc_ref(v___y_1440_);
v___x_1520_ = lean_apply_7(v_x_1438_, v___y_1440_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_, lean_box(0));
return v___x_1520_;
}
}
v___jp_1453_:
{
lean_object* v___x_1454_; lean_object* v_env_1455_; lean_object* v_nextMacroScope_1456_; lean_object* v_ngen_1457_; lean_object* v_auxDeclNGen_1458_; lean_object* v_traceState_1459_; lean_object* v_recordedDeps_1460_; lean_object* v_messages_1461_; lean_object* v_infoState_1462_; lean_object* v_snapshotTasks_1463_; lean_object* v___x_1465_; uint8_t v_isShared_1466_; uint8_t v_isSharedCheck_1517_; 
v___x_1454_ = lean_st_ref_take(v___y_1445_);
v_env_1455_ = lean_ctor_get(v___x_1454_, 0);
v_nextMacroScope_1456_ = lean_ctor_get(v___x_1454_, 1);
v_ngen_1457_ = lean_ctor_get(v___x_1454_, 2);
v_auxDeclNGen_1458_ = lean_ctor_get(v___x_1454_, 3);
v_traceState_1459_ = lean_ctor_get(v___x_1454_, 4);
v_recordedDeps_1460_ = lean_ctor_get(v___x_1454_, 6);
v_messages_1461_ = lean_ctor_get(v___x_1454_, 7);
v_infoState_1462_ = lean_ctor_get(v___x_1454_, 8);
v_snapshotTasks_1463_ = lean_ctor_get(v___x_1454_, 9);
v_isSharedCheck_1517_ = !lean_is_exclusive(v___x_1454_);
if (v_isSharedCheck_1517_ == 0)
{
lean_object* v_unused_1518_; 
v_unused_1518_ = lean_ctor_get(v___x_1454_, 5);
lean_dec(v_unused_1518_);
v___x_1465_ = v___x_1454_;
v_isShared_1466_ = v_isSharedCheck_1517_;
goto v_resetjp_1464_;
}
else
{
lean_inc(v_snapshotTasks_1463_);
lean_inc(v_infoState_1462_);
lean_inc(v_messages_1461_);
lean_inc(v_recordedDeps_1460_);
lean_inc(v_traceState_1459_);
lean_inc(v_auxDeclNGen_1458_);
lean_inc(v_ngen_1457_);
lean_inc(v_nextMacroScope_1456_);
lean_inc(v_env_1455_);
lean_dec(v___x_1454_);
v___x_1465_ = lean_box(0);
v_isShared_1466_ = v_isSharedCheck_1517_;
goto v_resetjp_1464_;
}
v_resetjp_1464_:
{
lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1470_; 
v___x_1467_ = l_Lean_Environment_setExporting(v_env_1455_, v_isExporting_1439_);
v___x_1468_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__1, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__1);
if (v_isShared_1466_ == 0)
{
lean_ctor_set(v___x_1465_, 5, v___x_1468_);
lean_ctor_set(v___x_1465_, 0, v___x_1467_);
v___x_1470_ = v___x_1465_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1516_; 
v_reuseFailAlloc_1516_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1516_, 0, v___x_1467_);
lean_ctor_set(v_reuseFailAlloc_1516_, 1, v_nextMacroScope_1456_);
lean_ctor_set(v_reuseFailAlloc_1516_, 2, v_ngen_1457_);
lean_ctor_set(v_reuseFailAlloc_1516_, 3, v_auxDeclNGen_1458_);
lean_ctor_set(v_reuseFailAlloc_1516_, 4, v_traceState_1459_);
lean_ctor_set(v_reuseFailAlloc_1516_, 5, v___x_1468_);
lean_ctor_set(v_reuseFailAlloc_1516_, 6, v_recordedDeps_1460_);
lean_ctor_set(v_reuseFailAlloc_1516_, 7, v_messages_1461_);
lean_ctor_set(v_reuseFailAlloc_1516_, 8, v_infoState_1462_);
lean_ctor_set(v_reuseFailAlloc_1516_, 9, v_snapshotTasks_1463_);
v___x_1470_ = v_reuseFailAlloc_1516_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v_mctx_1473_; lean_object* v_zetaDeltaFVarIds_1474_; lean_object* v_postponed_1475_; lean_object* v_diag_1476_; lean_object* v___x_1478_; uint8_t v_isShared_1479_; uint8_t v_isSharedCheck_1514_; 
v___x_1471_ = lean_st_ref_put(v___y_1445_, v___x_1470_);
v___x_1472_ = lean_st_ref_take(v___y_1443_);
v_mctx_1473_ = lean_ctor_get(v___x_1472_, 0);
v_zetaDeltaFVarIds_1474_ = lean_ctor_get(v___x_1472_, 2);
v_postponed_1475_ = lean_ctor_get(v___x_1472_, 3);
v_diag_1476_ = lean_ctor_get(v___x_1472_, 4);
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1472_);
if (v_isSharedCheck_1514_ == 0)
{
lean_object* v_unused_1515_; 
v_unused_1515_ = lean_ctor_get(v___x_1472_, 1);
lean_dec(v_unused_1515_);
v___x_1478_ = v___x_1472_;
v_isShared_1479_ = v_isSharedCheck_1514_;
goto v_resetjp_1477_;
}
else
{
lean_inc(v_diag_1476_);
lean_inc(v_postponed_1475_);
lean_inc(v_zetaDeltaFVarIds_1474_);
lean_inc(v_mctx_1473_);
lean_dec(v___x_1472_);
v___x_1478_ = lean_box(0);
v_isShared_1479_ = v_isSharedCheck_1514_;
goto v_resetjp_1477_;
}
v_resetjp_1477_:
{
lean_object* v___x_1480_; lean_object* v___x_1482_; 
v___x_1480_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__5, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__5_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__5);
if (v_isShared_1479_ == 0)
{
lean_ctor_set(v___x_1478_, 1, v___x_1480_);
v___x_1482_ = v___x_1478_;
goto v_reusejp_1481_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v_mctx_1473_);
lean_ctor_set(v_reuseFailAlloc_1513_, 1, v___x_1480_);
lean_ctor_set(v_reuseFailAlloc_1513_, 2, v_zetaDeltaFVarIds_1474_);
lean_ctor_set(v_reuseFailAlloc_1513_, 3, v_postponed_1475_);
lean_ctor_set(v_reuseFailAlloc_1513_, 4, v_diag_1476_);
v___x_1482_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1481_;
}
v_reusejp_1481_:
{
lean_object* v___x_1483_; lean_object* v_r_1484_; 
v___x_1483_ = lean_st_ref_put(v___y_1443_, v___x_1482_);
lean_inc(v___y_1445_);
lean_inc_ref(v___y_1444_);
lean_inc(v___y_1443_);
lean_inc_ref(v___y_1442_);
lean_inc(v___y_1441_);
lean_inc_ref(v___y_1440_);
v_r_1484_ = lean_apply_7(v_x_1438_, v___y_1440_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_, lean_box(0));
if (lean_obj_tag(v_r_1484_) == 0)
{
lean_object* v_a_1485_; lean_object* v___x_1487_; uint8_t v_isShared_1488_; uint8_t v_isSharedCheck_1501_; 
v_a_1485_ = lean_ctor_get(v_r_1484_, 0);
v_isSharedCheck_1501_ = !lean_is_exclusive(v_r_1484_);
if (v_isSharedCheck_1501_ == 0)
{
v___x_1487_ = v_r_1484_;
v_isShared_1488_ = v_isSharedCheck_1501_;
goto v_resetjp_1486_;
}
else
{
lean_inc(v_a_1485_);
lean_dec(v_r_1484_);
v___x_1487_ = lean_box(0);
v_isShared_1488_ = v_isSharedCheck_1501_;
goto v_resetjp_1486_;
}
v_resetjp_1486_:
{
lean_object* v___x_1490_; 
lean_inc(v_a_1485_);
if (v_isShared_1488_ == 0)
{
lean_ctor_set_tag(v___x_1487_, 1);
v___x_1490_ = v___x_1487_;
goto v_reusejp_1489_;
}
else
{
lean_object* v_reuseFailAlloc_1500_; 
v_reuseFailAlloc_1500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1500_, 0, v_a_1485_);
v___x_1490_ = v_reuseFailAlloc_1500_;
goto v_reusejp_1489_;
}
v_reusejp_1489_:
{
lean_object* v___x_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1498_; 
v___x_1491_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19_spec__23___redArg___lam__0(v___y_1445_, v_isExporting_1452_, v___x_1468_, v___y_1443_, v___x_1480_, v___x_1490_);
lean_dec_ref(v___x_1490_);
v_isSharedCheck_1498_ = !lean_is_exclusive(v___x_1491_);
if (v_isSharedCheck_1498_ == 0)
{
lean_object* v_unused_1499_; 
v_unused_1499_ = lean_ctor_get(v___x_1491_, 0);
lean_dec(v_unused_1499_);
v___x_1493_ = v___x_1491_;
v_isShared_1494_ = v_isSharedCheck_1498_;
goto v_resetjp_1492_;
}
else
{
lean_dec(v___x_1491_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1498_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
lean_object* v___x_1496_; 
if (v_isShared_1494_ == 0)
{
lean_ctor_set(v___x_1493_, 0, v_a_1485_);
v___x_1496_ = v___x_1493_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v_a_1485_);
v___x_1496_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
return v___x_1496_;
}
}
}
}
}
else
{
lean_object* v_a_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1506_; uint8_t v_isShared_1507_; uint8_t v_isSharedCheck_1511_; 
v_a_1502_ = lean_ctor_get(v_r_1484_, 0);
lean_inc(v_a_1502_);
lean_dec_ref_known(v_r_1484_, 1);
v___x_1503_ = lean_box(0);
v___x_1504_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19_spec__23___redArg___lam__0(v___y_1445_, v_isExporting_1452_, v___x_1468_, v___y_1443_, v___x_1480_, v___x_1503_);
v_isSharedCheck_1511_ = !lean_is_exclusive(v___x_1504_);
if (v_isSharedCheck_1511_ == 0)
{
lean_object* v_unused_1512_; 
v_unused_1512_ = lean_ctor_get(v___x_1504_, 0);
lean_dec(v_unused_1512_);
v___x_1506_ = v___x_1504_;
v_isShared_1507_ = v_isSharedCheck_1511_;
goto v_resetjp_1505_;
}
else
{
lean_dec(v___x_1504_);
v___x_1506_ = lean_box(0);
v_isShared_1507_ = v_isSharedCheck_1511_;
goto v_resetjp_1505_;
}
v_resetjp_1505_:
{
lean_object* v___x_1509_; 
if (v_isShared_1507_ == 0)
{
lean_ctor_set_tag(v___x_1506_, 1);
lean_ctor_set(v___x_1506_, 0, v_a_1502_);
v___x_1509_ = v___x_1506_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v_a_1502_);
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
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19_spec__23___redArg___boxed(lean_object* v_x_1521_, lean_object* v_isExporting_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_){
_start:
{
uint8_t v_isExporting_boxed_1530_; lean_object* v_res_1531_; 
v_isExporting_boxed_1530_ = lean_unbox(v_isExporting_1522_);
v_res_1531_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19_spec__23___redArg(v_x_1521_, v_isExporting_boxed_1530_, v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_, v___y_1528_);
lean_dec(v___y_1528_);
lean_dec_ref(v___y_1527_);
lean_dec(v___y_1526_);
lean_dec_ref(v___y_1525_);
lean_dec(v___y_1524_);
lean_dec_ref(v___y_1523_);
return v_res_1531_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19___redArg(lean_object* v_x_1532_, uint8_t v_when_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_){
_start:
{
if (v_when_1533_ == 0)
{
lean_object* v___x_1541_; 
lean_inc(v___y_1539_);
lean_inc_ref(v___y_1538_);
lean_inc(v___y_1537_);
lean_inc_ref(v___y_1536_);
lean_inc(v___y_1535_);
lean_inc_ref(v___y_1534_);
v___x_1541_ = lean_apply_7(v_x_1532_, v___y_1534_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_, v___y_1539_, lean_box(0));
return v___x_1541_;
}
else
{
uint8_t v___x_1542_; lean_object* v___x_1543_; 
v___x_1542_ = 0;
v___x_1543_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19_spec__23___redArg(v_x_1532_, v___x_1542_, v___y_1534_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_, v___y_1539_);
return v___x_1543_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19___redArg___boxed(lean_object* v_x_1544_, lean_object* v_when_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_){
_start:
{
uint8_t v_when_boxed_1553_; lean_object* v_res_1554_; 
v_when_boxed_1553_ = lean_unbox(v_when_1545_);
v_res_1554_ = l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19___redArg(v_x_1544_, v_when_boxed_1553_, v___y_1546_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_);
lean_dec(v___y_1551_);
lean_dec_ref(v___y_1550_);
lean_dec(v___y_1549_);
lean_dec_ref(v___y_1548_);
lean_dec(v___y_1547_);
lean_dec_ref(v___y_1546_);
return v_res_1554_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__18___redArg(lean_object* v___x_1555_, lean_object* v_as_1556_, size_t v_sz_1557_, size_t v_i_1558_, lean_object* v_b_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_){
_start:
{
lean_object* v_a_1566_; uint8_t v___x_1570_; 
v___x_1570_ = lean_usize_dec_lt(v_i_1558_, v_sz_1557_);
if (v___x_1570_ == 0)
{
lean_object* v___x_1571_; 
lean_dec(v___x_1555_);
v___x_1571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1571_, 0, v_b_1559_);
return v___x_1571_;
}
else
{
lean_object* v_a_1572_; uint8_t v_kind_1573_; lean_object* v_declName_1574_; lean_object* v_type_1575_; lean_object* v___x_1576_; uint8_t v___x_1577_; 
v_a_1572_ = lean_array_uget_borrowed(v_as_1556_, v_i_1558_);
v_kind_1573_ = lean_ctor_get_uint8(v_a_1572_, sizeof(void*)*9);
v_declName_1574_ = lean_ctor_get(v_a_1572_, 3);
v_type_1575_ = lean_ctor_get(v_a_1572_, 6);
v___x_1576_ = lean_box(0);
v___x_1577_ = lean_name_eq(v_declName_1574_, v___x_1555_);
if (v___x_1577_ == 0)
{
uint8_t v___x_1578_; 
v___x_1578_ = l_Lean_Elab_DefKind_isTheorem(v_kind_1573_);
if (v___x_1578_ == 0)
{
lean_object* v___x_1579_; 
lean_inc_ref(v_type_1575_);
v___x_1579_ = l_Lean_Meta_isProp(v_type_1575_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_);
if (lean_obj_tag(v___x_1579_) == 0)
{
lean_object* v_a_1580_; uint8_t v___x_1581_; 
v_a_1580_ = lean_ctor_get(v___x_1579_, 0);
lean_inc(v_a_1580_);
lean_dec_ref_known(v___x_1579_, 1);
v___x_1581_ = lean_unbox(v_a_1580_);
lean_dec(v_a_1580_);
if (v___x_1581_ == 0)
{
lean_object* v___x_1582_; 
lean_inc(v___x_1555_);
lean_inc(v_a_1572_);
v___x_1582_ = l_Lean_Elab_WF_mkBinaryUnfoldEq(v_a_1572_, v___x_1555_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_);
if (lean_obj_tag(v___x_1582_) == 0)
{
lean_dec_ref_known(v___x_1582_, 1);
v_a_1566_ = v___x_1576_;
goto v___jp_1565_;
}
else
{
lean_dec(v___x_1555_);
return v___x_1582_;
}
}
else
{
v_a_1566_ = v___x_1576_;
goto v___jp_1565_;
}
}
else
{
lean_object* v_a_1583_; lean_object* v___x_1585_; uint8_t v_isShared_1586_; uint8_t v_isSharedCheck_1590_; 
lean_dec(v___x_1555_);
v_a_1583_ = lean_ctor_get(v___x_1579_, 0);
v_isSharedCheck_1590_ = !lean_is_exclusive(v___x_1579_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1585_ = v___x_1579_;
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
else
{
lean_inc(v_a_1583_);
lean_dec(v___x_1579_);
v___x_1585_ = lean_box(0);
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
v_resetjp_1584_:
{
lean_object* v___x_1588_; 
if (v_isShared_1586_ == 0)
{
v___x_1588_ = v___x_1585_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v_a_1583_);
v___x_1588_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
return v___x_1588_;
}
}
}
}
else
{
v_a_1566_ = v___x_1576_;
goto v___jp_1565_;
}
}
else
{
v_a_1566_ = v___x_1576_;
goto v___jp_1565_;
}
}
v___jp_1565_:
{
size_t v___x_1567_; size_t v___x_1568_; 
v___x_1567_ = ((size_t)1ULL);
v___x_1568_ = lean_usize_add(v_i_1558_, v___x_1567_);
v_i_1558_ = v___x_1568_;
v_b_1559_ = v_a_1566_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__18___redArg___boxed(lean_object* v___x_1591_, lean_object* v_as_1592_, lean_object* v_sz_1593_, lean_object* v_i_1594_, lean_object* v_b_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_){
_start:
{
size_t v_sz_boxed_1601_; size_t v_i_boxed_1602_; lean_object* v_res_1603_; 
v_sz_boxed_1601_ = lean_unbox_usize(v_sz_1593_);
lean_dec(v_sz_1593_);
v_i_boxed_1602_ = lean_unbox_usize(v_i_1594_);
lean_dec(v_i_1594_);
v_res_1603_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__18___redArg(v___x_1591_, v_as_1592_, v_sz_boxed_1601_, v_i_boxed_1602_, v_b_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_);
lean_dec(v___y_1599_);
lean_dec_ref(v___y_1598_);
lean_dec(v___y_1597_);
lean_dec_ref(v___y_1596_);
lean_dec_ref(v_as_1592_);
return v_res_1603_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg(size_t v_sz_1604_, size_t v_i_1605_, lean_object* v_bs_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_){
_start:
{
uint8_t v___x_1610_; 
v___x_1610_ = lean_usize_dec_lt(v_i_1605_, v_sz_1604_);
if (v___x_1610_ == 0)
{
lean_object* v___x_1611_; 
v___x_1611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1611_, 0, v_bs_1606_);
return v___x_1611_;
}
else
{
lean_object* v_v_1612_; lean_object* v_ref_1613_; uint8_t v_kind_1614_; lean_object* v_levelParams_1615_; lean_object* v_modifiers_1616_; lean_object* v_declName_1617_; lean_object* v_binders_1618_; lean_object* v_numSectionVars_1619_; lean_object* v_type_1620_; lean_object* v_value_1621_; lean_object* v_termination_1622_; lean_object* v___x_1624_; uint8_t v_isShared_1625_; uint8_t v_isSharedCheck_1645_; 
v_v_1612_ = lean_array_uget(v_bs_1606_, v_i_1605_);
v_ref_1613_ = lean_ctor_get(v_v_1612_, 0);
v_kind_1614_ = lean_ctor_get_uint8(v_v_1612_, sizeof(void*)*9);
v_levelParams_1615_ = lean_ctor_get(v_v_1612_, 1);
v_modifiers_1616_ = lean_ctor_get(v_v_1612_, 2);
v_declName_1617_ = lean_ctor_get(v_v_1612_, 3);
v_binders_1618_ = lean_ctor_get(v_v_1612_, 4);
v_numSectionVars_1619_ = lean_ctor_get(v_v_1612_, 5);
v_type_1620_ = lean_ctor_get(v_v_1612_, 6);
v_value_1621_ = lean_ctor_get(v_v_1612_, 7);
v_termination_1622_ = lean_ctor_get(v_v_1612_, 8);
v_isSharedCheck_1645_ = !lean_is_exclusive(v_v_1612_);
if (v_isSharedCheck_1645_ == 0)
{
v___x_1624_ = v_v_1612_;
v_isShared_1625_ = v_isSharedCheck_1645_;
goto v_resetjp_1623_;
}
else
{
lean_inc(v_termination_1622_);
lean_inc(v_value_1621_);
lean_inc(v_type_1620_);
lean_inc(v_numSectionVars_1619_);
lean_inc(v_binders_1618_);
lean_inc(v_declName_1617_);
lean_inc(v_modifiers_1616_);
lean_inc(v_levelParams_1615_);
lean_inc(v_ref_1613_);
lean_dec(v_v_1612_);
v___x_1624_ = lean_box(0);
v_isShared_1625_ = v_isSharedCheck_1645_;
goto v_resetjp_1623_;
}
v_resetjp_1623_:
{
lean_object* v___x_1626_; lean_object* v_bs_x27_1627_; lean_object* v___x_1628_; 
v___x_1626_ = lean_unsigned_to_nat(0u);
v_bs_x27_1627_ = lean_array_uset(v_bs_1606_, v_i_1605_, v___x_1626_);
v___x_1628_ = l_Lean_Elab_WF_floatRecApp(v_value_1621_, v___y_1607_, v___y_1608_);
if (lean_obj_tag(v___x_1628_) == 0)
{
lean_object* v_a_1629_; lean_object* v___x_1631_; 
v_a_1629_ = lean_ctor_get(v___x_1628_, 0);
lean_inc(v_a_1629_);
lean_dec_ref_known(v___x_1628_, 1);
if (v_isShared_1625_ == 0)
{
lean_ctor_set(v___x_1624_, 7, v_a_1629_);
v___x_1631_ = v___x_1624_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1636_; 
v_reuseFailAlloc_1636_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_1636_, 0, v_ref_1613_);
lean_ctor_set(v_reuseFailAlloc_1636_, 1, v_levelParams_1615_);
lean_ctor_set(v_reuseFailAlloc_1636_, 2, v_modifiers_1616_);
lean_ctor_set(v_reuseFailAlloc_1636_, 3, v_declName_1617_);
lean_ctor_set(v_reuseFailAlloc_1636_, 4, v_binders_1618_);
lean_ctor_set(v_reuseFailAlloc_1636_, 5, v_numSectionVars_1619_);
lean_ctor_set(v_reuseFailAlloc_1636_, 6, v_type_1620_);
lean_ctor_set(v_reuseFailAlloc_1636_, 7, v_a_1629_);
lean_ctor_set(v_reuseFailAlloc_1636_, 8, v_termination_1622_);
lean_ctor_set_uint8(v_reuseFailAlloc_1636_, sizeof(void*)*9, v_kind_1614_);
v___x_1631_ = v_reuseFailAlloc_1636_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
size_t v___x_1632_; size_t v___x_1633_; lean_object* v___x_1634_; 
v___x_1632_ = ((size_t)1ULL);
v___x_1633_ = lean_usize_add(v_i_1605_, v___x_1632_);
v___x_1634_ = lean_array_uset(v_bs_x27_1627_, v_i_1605_, v___x_1631_);
v_i_1605_ = v___x_1633_;
v_bs_1606_ = v___x_1634_;
goto _start;
}
}
else
{
lean_object* v_a_1637_; lean_object* v___x_1639_; uint8_t v_isShared_1640_; uint8_t v_isSharedCheck_1644_; 
lean_dec_ref(v_bs_x27_1627_);
lean_del_object(v___x_1624_);
lean_dec_ref(v_termination_1622_);
lean_dec_ref(v_type_1620_);
lean_dec(v_numSectionVars_1619_);
lean_dec(v_binders_1618_);
lean_dec(v_declName_1617_);
lean_dec_ref(v_modifiers_1616_);
lean_dec(v_levelParams_1615_);
lean_dec(v_ref_1613_);
v_a_1637_ = lean_ctor_get(v___x_1628_, 0);
v_isSharedCheck_1644_ = !lean_is_exclusive(v___x_1628_);
if (v_isSharedCheck_1644_ == 0)
{
v___x_1639_ = v___x_1628_;
v_isShared_1640_ = v_isSharedCheck_1644_;
goto v_resetjp_1638_;
}
else
{
lean_inc(v_a_1637_);
lean_dec(v___x_1628_);
v___x_1639_ = lean_box(0);
v_isShared_1640_ = v_isSharedCheck_1644_;
goto v_resetjp_1638_;
}
v_resetjp_1638_:
{
lean_object* v___x_1642_; 
if (v_isShared_1640_ == 0)
{
v___x_1642_ = v___x_1639_;
goto v_reusejp_1641_;
}
else
{
lean_object* v_reuseFailAlloc_1643_; 
v_reuseFailAlloc_1643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1643_, 0, v_a_1637_);
v___x_1642_ = v_reuseFailAlloc_1643_;
goto v_reusejp_1641_;
}
v_reusejp_1641_:
{
return v___x_1642_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg___boxed(lean_object* v_sz_1646_, lean_object* v_i_1647_, lean_object* v_bs_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_){
_start:
{
size_t v_sz_boxed_1652_; size_t v_i_boxed_1653_; lean_object* v_res_1654_; 
v_sz_boxed_1652_ = lean_unbox_usize(v_sz_1646_);
lean_dec(v_sz_1646_);
v_i_boxed_1653_ = lean_unbox_usize(v_i_1647_);
lean_dec(v_i_1647_);
v_res_1654_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg(v_sz_boxed_1652_, v_i_boxed_1653_, v_bs_1648_, v___y_1649_, v___y_1650_);
lean_dec(v___y_1650_);
lean_dec_ref(v___y_1649_);
return v_res_1654_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__17___redArg(size_t v_sz_1655_, size_t v_i_1656_, lean_object* v_bs_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_){
_start:
{
uint8_t v___x_1663_; 
v___x_1663_ = lean_usize_dec_lt(v_i_1656_, v_sz_1655_);
if (v___x_1663_ == 0)
{
lean_object* v___x_1664_; 
v___x_1664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1664_, 0, v_bs_1657_);
return v___x_1664_;
}
else
{
uint8_t v___x_1665_; lean_object* v_v_1666_; lean_object* v___x_1667_; lean_object* v_bs_x27_1668_; lean_object* v___x_1669_; 
v___x_1665_ = 0;
v_v_1666_ = lean_array_uget(v_bs_1657_, v_i_1656_);
v___x_1667_ = lean_unsigned_to_nat(0u);
v_bs_x27_1668_ = lean_array_uset(v_bs_1657_, v_i_1656_, v___x_1667_);
v___x_1669_ = l_Lean_Elab_Mutual_cleanPreDef(v_v_1666_, v___x_1665_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_);
if (lean_obj_tag(v___x_1669_) == 0)
{
lean_object* v_a_1670_; size_t v___x_1671_; size_t v___x_1672_; lean_object* v___x_1673_; 
v_a_1670_ = lean_ctor_get(v___x_1669_, 0);
lean_inc(v_a_1670_);
lean_dec_ref_known(v___x_1669_, 1);
v___x_1671_ = ((size_t)1ULL);
v___x_1672_ = lean_usize_add(v_i_1656_, v___x_1671_);
v___x_1673_ = lean_array_uset(v_bs_x27_1668_, v_i_1656_, v_a_1670_);
v_i_1656_ = v___x_1672_;
v_bs_1657_ = v___x_1673_;
goto _start;
}
else
{
lean_object* v_a_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1682_; 
lean_dec_ref(v_bs_x27_1668_);
v_a_1675_ = lean_ctor_get(v___x_1669_, 0);
v_isSharedCheck_1682_ = !lean_is_exclusive(v___x_1669_);
if (v_isSharedCheck_1682_ == 0)
{
v___x_1677_ = v___x_1669_;
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_a_1675_);
lean_dec(v___x_1669_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v___x_1680_; 
if (v_isShared_1678_ == 0)
{
v___x_1680_ = v___x_1677_;
goto v_reusejp_1679_;
}
else
{
lean_object* v_reuseFailAlloc_1681_; 
v_reuseFailAlloc_1681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1681_, 0, v_a_1675_);
v___x_1680_ = v_reuseFailAlloc_1681_;
goto v_reusejp_1679_;
}
v_reusejp_1679_:
{
return v___x_1680_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__17___redArg___boxed(lean_object* v_sz_1683_, lean_object* v_i_1684_, lean_object* v_bs_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_){
_start:
{
size_t v_sz_boxed_1691_; size_t v_i_boxed_1692_; lean_object* v_res_1693_; 
v_sz_boxed_1691_ = lean_unbox_usize(v_sz_1683_);
lean_dec(v_sz_1683_);
v_i_boxed_1692_ = lean_unbox_usize(v_i_1684_);
lean_dec(v_i_1684_);
v_res_1693_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__17___redArg(v_sz_boxed_1691_, v_i_boxed_1692_, v_bs_1685_, v___y_1686_, v___y_1687_, v___y_1688_, v___y_1689_);
lean_dec(v___y_1689_);
lean_dec_ref(v___y_1688_);
lean_dec(v___y_1687_);
lean_dec_ref(v___y_1686_);
return v_res_1693_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__3(size_t v_sz_1694_, size_t v_i_1695_, lean_object* v_bs_1696_){
_start:
{
uint8_t v___x_1697_; 
v___x_1697_ = lean_usize_dec_lt(v_i_1695_, v_sz_1694_);
if (v___x_1697_ == 0)
{
lean_object* v___x_1698_; 
v___x_1698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1698_, 0, v_bs_1696_);
return v___x_1698_;
}
else
{
lean_object* v_v_1699_; 
v_v_1699_ = lean_array_uget_borrowed(v_bs_1696_, v_i_1695_);
if (lean_obj_tag(v_v_1699_) == 0)
{
lean_object* v___x_1700_; 
lean_dec_ref(v_bs_1696_);
v___x_1700_ = lean_box(0);
return v___x_1700_;
}
else
{
lean_object* v_val_1701_; lean_object* v___x_1702_; lean_object* v_bs_x27_1703_; size_t v___x_1704_; size_t v___x_1705_; lean_object* v___x_1706_; 
v_val_1701_ = lean_ctor_get(v_v_1699_, 0);
lean_inc(v_val_1701_);
v___x_1702_ = lean_unsigned_to_nat(0u);
v_bs_x27_1703_ = lean_array_uset(v_bs_1696_, v_i_1695_, v___x_1702_);
v___x_1704_ = ((size_t)1ULL);
v___x_1705_ = lean_usize_add(v_i_1695_, v___x_1704_);
v___x_1706_ = lean_array_uset(v_bs_x27_1703_, v_i_1695_, v_val_1701_);
v_i_1695_ = v___x_1705_;
v_bs_1696_ = v___x_1706_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__3___boxed(lean_object* v_sz_1708_, lean_object* v_i_1709_, lean_object* v_bs_1710_){
_start:
{
size_t v_sz_boxed_1711_; size_t v_i_boxed_1712_; lean_object* v_res_1713_; 
v_sz_boxed_1711_ = lean_unbox_usize(v_sz_1708_);
lean_dec(v_sz_1708_);
v_i_boxed_1712_ = lean_unbox_usize(v_i_1709_);
lean_dec(v_i_1709_);
v_res_1713_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__3(v_sz_boxed_1711_, v_i_boxed_1712_, v_bs_1710_);
return v_res_1713_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__10___redArg(lean_object* v_env_1714_, lean_object* v_x_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_){
_start:
{
lean_object* v___x_1723_; lean_object* v_env_1724_; lean_object* v_a_1726_; lean_object* v___x_1736_; lean_object* v___x_1737_; 
v___x_1723_ = lean_st_ref_get(v___y_1721_);
v_env_1724_ = lean_ctor_get(v___x_1723_, 0);
lean_inc_ref(v_env_1724_);
lean_dec(v___x_1723_);
v___x_1736_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg(v_env_1714_, v___y_1719_, v___y_1721_);
lean_dec_ref(v___x_1736_);
lean_inc(v___y_1721_);
lean_inc_ref(v___y_1720_);
lean_inc(v___y_1719_);
lean_inc_ref(v___y_1718_);
lean_inc(v___y_1717_);
lean_inc_ref(v___y_1716_);
v___x_1737_ = lean_apply_7(v_x_1715_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_, v___y_1721_, lean_box(0));
if (lean_obj_tag(v___x_1737_) == 0)
{
lean_object* v_a_1738_; lean_object* v___x_1739_; lean_object* v___x_1741_; uint8_t v_isShared_1742_; uint8_t v_isSharedCheck_1746_; 
v_a_1738_ = lean_ctor_get(v___x_1737_, 0);
lean_inc(v_a_1738_);
lean_dec_ref_known(v___x_1737_, 1);
v___x_1739_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg(v_env_1724_, v___y_1719_, v___y_1721_);
v_isSharedCheck_1746_ = !lean_is_exclusive(v___x_1739_);
if (v_isSharedCheck_1746_ == 0)
{
lean_object* v_unused_1747_; 
v_unused_1747_ = lean_ctor_get(v___x_1739_, 0);
lean_dec(v_unused_1747_);
v___x_1741_ = v___x_1739_;
v_isShared_1742_ = v_isSharedCheck_1746_;
goto v_resetjp_1740_;
}
else
{
lean_dec(v___x_1739_);
v___x_1741_ = lean_box(0);
v_isShared_1742_ = v_isSharedCheck_1746_;
goto v_resetjp_1740_;
}
v_resetjp_1740_:
{
lean_object* v___x_1744_; 
if (v_isShared_1742_ == 0)
{
lean_ctor_set(v___x_1741_, 0, v_a_1738_);
v___x_1744_ = v___x_1741_;
goto v_reusejp_1743_;
}
else
{
lean_object* v_reuseFailAlloc_1745_; 
v_reuseFailAlloc_1745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1745_, 0, v_a_1738_);
v___x_1744_ = v_reuseFailAlloc_1745_;
goto v_reusejp_1743_;
}
v_reusejp_1743_:
{
return v___x_1744_;
}
}
}
else
{
lean_object* v_a_1748_; 
v_a_1748_ = lean_ctor_get(v___x_1737_, 0);
lean_inc(v_a_1748_);
lean_dec_ref_known(v___x_1737_, 1);
v_a_1726_ = v_a_1748_;
goto v___jp_1725_;
}
v___jp_1725_:
{
lean_object* v___x_1727_; lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1734_; 
v___x_1727_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg(v_env_1724_, v___y_1719_, v___y_1721_);
v_isSharedCheck_1734_ = !lean_is_exclusive(v___x_1727_);
if (v_isSharedCheck_1734_ == 0)
{
lean_object* v_unused_1735_; 
v_unused_1735_ = lean_ctor_get(v___x_1727_, 0);
lean_dec(v_unused_1735_);
v___x_1729_ = v___x_1727_;
v_isShared_1730_ = v_isSharedCheck_1734_;
goto v_resetjp_1728_;
}
else
{
lean_dec(v___x_1727_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1734_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
lean_object* v___x_1732_; 
if (v_isShared_1730_ == 0)
{
lean_ctor_set_tag(v___x_1729_, 1);
lean_ctor_set(v___x_1729_, 0, v_a_1726_);
v___x_1732_ = v___x_1729_;
goto v_reusejp_1731_;
}
else
{
lean_object* v_reuseFailAlloc_1733_; 
v_reuseFailAlloc_1733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1733_, 0, v_a_1726_);
v___x_1732_ = v_reuseFailAlloc_1733_;
goto v_reusejp_1731_;
}
v_reusejp_1731_:
{
return v___x_1732_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__10___redArg___boxed(lean_object* v_env_1749_, lean_object* v_x_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_){
_start:
{
lean_object* v_res_1758_; 
v_res_1758_ = l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__10___redArg(v_env_1749_, v_x_1750_, v___y_1751_, v___y_1752_, v___y_1753_, v___y_1754_, v___y_1755_, v___y_1756_);
lean_dec(v___y_1756_);
lean_dec_ref(v___y_1755_);
lean_dec(v___y_1754_);
lean_dec_ref(v___y_1753_);
lean_dec(v___y_1752_);
lean_dec_ref(v___y_1751_);
return v_res_1758_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__4(void){
_start:
{
lean_object* v___x_1766_; lean_object* v___x_1767_; 
v___x_1766_ = ((lean_object*)(l_Lean_Elab_wfRecursion___closed__3));
v___x_1767_ = l_Lean_stringToMessageData(v___x_1766_);
return v___x_1767_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__6(void){
_start:
{
lean_object* v___x_1769_; lean_object* v___x_1770_; 
v___x_1769_ = ((lean_object*)(l_Lean_Elab_wfRecursion___closed__5));
v___x_1770_ = l_Lean_stringToMessageData(v___x_1769_);
return v___x_1770_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__8(void){
_start:
{
lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1772_ = ((lean_object*)(l_Lean_Elab_wfRecursion___closed__7));
v___x_1773_ = l_Lean_stringToMessageData(v___x_1772_);
return v___x_1773_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__10(void){
_start:
{
lean_object* v___x_1775_; lean_object* v___x_1776_; 
v___x_1775_ = ((lean_object*)(l_Lean_Elab_wfRecursion___closed__9));
v___x_1776_ = l_Lean_stringToMessageData(v___x_1775_);
return v___x_1776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion(lean_object* v_docCtx_1779_, lean_object* v_preDefs_1780_, lean_object* v_termMeasure_x3fs_1781_, lean_object* v_a_1782_, lean_object* v_a_1783_, lean_object* v_a_1784_, lean_object* v_a_1785_, lean_object* v_a_1786_, lean_object* v_a_1787_){
_start:
{
lean_object* v___x_1789_; size_t v_sz_1790_; size_t v___x_1791_; lean_object* v_termMeasures_x3f_1792_; size_t v_sz_1793_; lean_object* v___x_1794_; 
v___x_1789_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v_sz_1790_ = lean_array_size(v_termMeasure_x3fs_1781_);
v___x_1791_ = ((size_t)0ULL);
v_termMeasures_x3f_1792_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__3(v_sz_1790_, v___x_1791_, v_termMeasure_x3fs_1781_);
v_sz_1793_ = lean_array_size(v_preDefs_1780_);
v___x_1794_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg(v_sz_1793_, v___x_1791_, v_preDefs_1780_, v_a_1786_, v_a_1787_);
if (lean_obj_tag(v___x_1794_) == 0)
{
lean_object* v_a_1795_; lean_object* v___x_1796_; lean_object* v___y_1798_; lean_object* v___y_1799_; lean_object* v___y_1800_; lean_object* v___y_1801_; lean_object* v___y_1802_; lean_object* v___y_1803_; lean_object* v___y_1804_; lean_object* v___y_1805_; size_t v_sz_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___f_1813_; lean_object* v___x_1814_; lean_object* v_env_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; 
v_a_1795_ = lean_ctor_get(v___x_1794_, 0);
lean_inc_n(v_a_1795_, 2);
lean_dec_ref_known(v___x_1794_, 1);
v___x_1796_ = lean_box(0);
v_sz_1810_ = lean_array_size(v_a_1795_);
v___x_1811_ = lean_box_usize(v_sz_1810_);
v___x_1812_ = ((lean_object*)(l_Lean_Elab_wfRecursion___boxed__const__1));
v___f_1813_ = lean_alloc_closure((void*)(l_Lean_Elab_wfRecursion___lam__0___boxed), 12, 5);
lean_closure_set(v___f_1813_, 0, v_a_1795_);
lean_closure_set(v___f_1813_, 1, v___x_1811_);
lean_closure_set(v___f_1813_, 2, v___x_1812_);
lean_closure_set(v___f_1813_, 3, v___x_1796_);
lean_closure_set(v___f_1813_, 4, v___x_1789_);
v___x_1814_ = lean_st_ref_get(v_a_1787_);
v_env_1815_ = lean_ctor_get(v___x_1814_, 0);
lean_inc_ref(v_env_1815_);
lean_dec(v___x_1814_);
v___x_1816_ = l_Lean_Environment_unlockAsync(v_env_1815_);
v___x_1817_ = l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__10___redArg(v___x_1816_, v___f_1813_, v_a_1782_, v_a_1783_, v_a_1784_, v_a_1785_, v_a_1786_, v_a_1787_);
if (lean_obj_tag(v___x_1817_) == 0)
{
lean_object* v_a_1818_; lean_object* v_snd_1819_; lean_object* v_fst_1820_; lean_object* v___x_1822_; uint8_t v_isShared_1823_; uint8_t v_isSharedCheck_2005_; 
v_a_1818_ = lean_ctor_get(v___x_1817_, 0);
lean_inc(v_a_1818_);
lean_dec_ref_known(v___x_1817_, 1);
v_snd_1819_ = lean_ctor_get(v_a_1818_, 1);
v_fst_1820_ = lean_ctor_get(v_a_1818_, 0);
v_isSharedCheck_2005_ = !lean_is_exclusive(v_a_1818_);
if (v_isSharedCheck_2005_ == 0)
{
v___x_1822_ = v_a_1818_;
v_isShared_1823_ = v_isSharedCheck_2005_;
goto v_resetjp_1821_;
}
else
{
lean_inc(v_snd_1819_);
lean_inc(v_fst_1820_);
lean_dec(v_a_1818_);
v___x_1822_ = lean_box(0);
v_isShared_1823_ = v_isSharedCheck_2005_;
goto v_resetjp_1821_;
}
v_resetjp_1821_:
{
lean_object* v_fst_1824_; lean_object* v_snd_1825_; lean_object* v___x_1827_; uint8_t v_isShared_1828_; uint8_t v_isSharedCheck_2004_; 
v_fst_1824_ = lean_ctor_get(v_snd_1819_, 0);
v_snd_1825_ = lean_ctor_get(v_snd_1819_, 1);
v_isSharedCheck_2004_ = !lean_is_exclusive(v_snd_1819_);
if (v_isSharedCheck_2004_ == 0)
{
v___x_1827_ = v_snd_1819_;
v_isShared_1828_ = v_isSharedCheck_2004_;
goto v_resetjp_1826_;
}
else
{
lean_inc(v_snd_1825_);
lean_inc(v_fst_1824_);
lean_dec(v_snd_1819_);
v___x_1827_ = lean_box(0);
v_isShared_1828_ = v_isSharedCheck_2004_;
goto v_resetjp_1826_;
}
v_resetjp_1826_:
{
lean_object* v___y_1830_; uint8_t v___y_1831_; lean_object* v___y_1832_; lean_object* v___y_1833_; lean_object* v___y_1834_; lean_object* v___y_1835_; lean_object* v___y_1836_; lean_object* v___y_1837_; lean_object* v___y_1838_; lean_object* v___f_1888_; lean_object* v___x_1889_; lean_object* v___y_1891_; lean_object* v___y_1892_; lean_object* v_wf_1893_; lean_object* v___y_1894_; lean_object* v___y_1895_; lean_object* v___y_1896_; lean_object* v___y_1897_; lean_object* v___y_1898_; lean_object* v___y_1899_; lean_object* v___y_1936_; lean_object* v___y_1937_; lean_object* v___y_1938_; lean_object* v___y_1939_; lean_object* v___y_1940_; lean_object* v___y_1941_; lean_object* v___y_1942_; lean_object* v___y_1943_; lean_object* v___y_1944_; lean_object* v___y_1958_; lean_object* v___y_1959_; lean_object* v___y_1960_; lean_object* v___y_1961_; lean_object* v___y_1962_; lean_object* v___y_1963_; lean_object* v___x_1995_; lean_object* v_a_1996_; uint8_t v___x_1997_; 
lean_inc(v_snd_1825_);
v___f_1888_ = lean_alloc_closure((void*)(l_Lean_Elab_wfRecursion___lam__1___boxed), 8, 1);
lean_closure_set(v___f_1888_, 0, v_snd_1825_);
v___x_1889_ = ((lean_object*)(l_Lean_Elab_wfRecursion___closed__2));
v___x_1995_ = l_Lean_Elab_wfRecursion___lam__2(v___x_1889_, v_a_1782_, v_a_1783_, v_a_1784_, v_a_1785_, v_a_1786_, v_a_1787_);
v_a_1996_ = lean_ctor_get(v___x_1995_, 0);
lean_inc(v_a_1996_);
lean_dec_ref(v___x_1995_);
v___x_1997_ = lean_unbox(v_a_1996_);
lean_dec(v_a_1996_);
if (v___x_1997_ == 0)
{
v___y_1958_ = v_a_1782_;
v___y_1959_ = v_a_1783_;
v___y_1960_ = v_a_1784_;
v___y_1961_ = v_a_1785_;
v___y_1962_ = v_a_1786_;
v___y_1963_ = v_a_1787_;
goto v___jp_1957_;
}
else
{
lean_object* v_value_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; 
v_value_1998_ = lean_ctor_get(v_snd_1825_, 7);
v___x_1999_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__10, &l_Lean_Elab_wfRecursion___closed__10_once, _init_l_Lean_Elab_wfRecursion___closed__10);
lean_inc_ref(v_value_1998_);
v___x_2000_ = l_Lean_MessageData_ofExpr(v_value_1998_);
v___x_2001_ = l_Lean_indentD(v___x_2000_);
v___x_2002_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2002_, 0, v___x_1999_);
lean_ctor_set(v___x_2002_, 1, v___x_2001_);
v___x_2003_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___redArg(v___x_1889_, v___x_2002_, v_a_1784_, v_a_1785_, v_a_1786_, v_a_1787_);
if (lean_obj_tag(v___x_2003_) == 0)
{
lean_dec_ref_known(v___x_2003_, 1);
v___y_1958_ = v_a_1782_;
v___y_1959_ = v_a_1783_;
v___y_1960_ = v_a_1784_;
v___y_1961_ = v_a_1785_;
v___y_1962_ = v_a_1786_;
v___y_1963_ = v_a_1787_;
goto v___jp_1957_;
}
else
{
lean_dec_ref(v___f_1888_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_fst_1824_);
lean_del_object(v___x_1822_);
lean_dec(v_fst_1820_);
lean_dec(v_a_1795_);
lean_dec(v_termMeasures_x3f_1792_);
lean_dec_ref(v_docCtx_1779_);
return v___x_2003_;
}
}
v___jp_1829_:
{
lean_object* v___x_1839_; 
lean_inc_ref(v___y_1832_);
lean_inc(v_a_1795_);
lean_inc(v_fst_1824_);
lean_inc(v_fst_1820_);
v___x_1839_ = l_Lean_Elab_WF_preDefsFromUnaryNonRec(v_fst_1820_, v_fst_1824_, v_a_1795_, v___y_1832_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_);
if (lean_obj_tag(v___x_1839_) == 0)
{
lean_object* v_a_1840_; lean_object* v___x_1841_; 
v_a_1840_ = lean_ctor_get(v___x_1839_, 0);
lean_inc(v_a_1840_);
lean_dec_ref_known(v___x_1839_, 1);
lean_inc_ref(v___y_1832_);
lean_inc(v_a_1795_);
lean_inc_ref(v_docCtx_1779_);
v___x_1841_ = l_Lean_Elab_Mutual_addPreDefsFromUnary(v_docCtx_1779_, v_a_1795_, v_a_1840_, v___y_1832_, v___y_1831_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_);
lean_dec(v_a_1840_);
if (lean_obj_tag(v___x_1841_) == 0)
{
lean_object* v___x_1842_; 
lean_dec_ref_known(v___x_1841_, 1);
lean_inc(v_a_1795_);
v___x_1842_ = l_Lean_Elab_addAndCompilePartialRec(v_docCtx_1779_, v_a_1795_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_);
if (lean_obj_tag(v___x_1842_) == 0)
{
lean_object* v___x_1843_; 
lean_dec_ref_known(v___x_1842_, 1);
v___x_1843_ = l_Lean_Elab_Mutual_cleanPreDef(v_snd_1825_, v___y_1831_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_);
if (lean_obj_tag(v___x_1843_) == 0)
{
lean_object* v_a_1844_; lean_object* v___x_1845_; 
v_a_1844_ = lean_ctor_get(v___x_1843_, 0);
lean_inc(v_a_1844_);
lean_dec_ref_known(v___x_1843_, 1);
v___x_1845_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__17___redArg(v_sz_1810_, v___x_1791_, v_a_1795_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_);
if (lean_obj_tag(v___x_1845_) == 0)
{
lean_object* v_a_1846_; lean_object* v_declName_1847_; lean_object* v___x_1848_; 
v_a_1846_ = lean_ctor_get(v___x_1845_, 0);
lean_inc_n(v_a_1846_, 2);
lean_dec_ref_known(v___x_1845_, 1);
v_declName_1847_ = lean_ctor_get(v___y_1832_, 3);
lean_inc_n(v_declName_1847_, 2);
lean_dec_ref(v___y_1832_);
v___x_1848_ = l_Lean_Elab_WF_registerEqnsInfo(v_a_1846_, v_declName_1847_, v_fst_1820_, v_fst_1824_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_);
if (lean_obj_tag(v___x_1848_) == 0)
{
lean_object* v_declName_1849_; lean_object* v_type_1850_; lean_object* v___x_1851_; 
lean_dec_ref_known(v___x_1848_, 1);
v_declName_1849_ = lean_ctor_get(v_a_1844_, 3);
v_type_1850_ = lean_ctor_get(v_a_1844_, 6);
lean_inc(v_declName_1849_);
v___x_1851_ = l_Lean_Meta_markAsRecursive___redArg(v_declName_1849_, v___y_1838_);
if (lean_obj_tag(v___x_1851_) == 0)
{
lean_object* v___x_1852_; 
lean_dec_ref_known(v___x_1851_, 1);
lean_inc_ref(v_type_1850_);
v___x_1852_ = l_Lean_Meta_isProp(v_type_1850_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_);
if (lean_obj_tag(v___x_1852_) == 0)
{
lean_object* v_a_1853_; uint8_t v___x_1854_; 
v_a_1853_ = lean_ctor_get(v___x_1852_, 0);
lean_inc(v_a_1853_);
lean_dec_ref_known(v___x_1852_, 1);
v___x_1854_ = lean_unbox(v_a_1853_);
lean_dec(v_a_1853_);
if (v___x_1854_ == 0)
{
lean_object* v___x_1855_; 
lean_inc(v_declName_1847_);
v___x_1855_ = l_Lean_Elab_WF_mkUnfoldEq(v_a_1844_, v_declName_1847_, v___y_1830_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_);
if (lean_obj_tag(v___x_1855_) == 0)
{
lean_dec_ref_known(v___x_1855_, 1);
v___y_1798_ = v_a_1846_;
v___y_1799_ = v_declName_1847_;
v___y_1800_ = v___y_1833_;
v___y_1801_ = v___y_1834_;
v___y_1802_ = v___y_1835_;
v___y_1803_ = v___y_1836_;
v___y_1804_ = v___y_1837_;
v___y_1805_ = v___y_1838_;
goto v___jp_1797_;
}
else
{
lean_dec(v_declName_1847_);
lean_dec(v_a_1846_);
return v___x_1855_;
}
}
else
{
lean_dec(v_a_1844_);
lean_dec_ref(v___y_1830_);
v___y_1798_ = v_a_1846_;
v___y_1799_ = v_declName_1847_;
v___y_1800_ = v___y_1833_;
v___y_1801_ = v___y_1834_;
v___y_1802_ = v___y_1835_;
v___y_1803_ = v___y_1836_;
v___y_1804_ = v___y_1837_;
v___y_1805_ = v___y_1838_;
goto v___jp_1797_;
}
}
else
{
lean_object* v_a_1856_; lean_object* v___x_1858_; uint8_t v_isShared_1859_; uint8_t v_isSharedCheck_1863_; 
lean_dec(v_declName_1847_);
lean_dec(v_a_1846_);
lean_dec(v_a_1844_);
lean_dec_ref(v___y_1830_);
v_a_1856_ = lean_ctor_get(v___x_1852_, 0);
v_isSharedCheck_1863_ = !lean_is_exclusive(v___x_1852_);
if (v_isSharedCheck_1863_ == 0)
{
v___x_1858_ = v___x_1852_;
v_isShared_1859_ = v_isSharedCheck_1863_;
goto v_resetjp_1857_;
}
else
{
lean_inc(v_a_1856_);
lean_dec(v___x_1852_);
v___x_1858_ = lean_box(0);
v_isShared_1859_ = v_isSharedCheck_1863_;
goto v_resetjp_1857_;
}
v_resetjp_1857_:
{
lean_object* v___x_1861_; 
if (v_isShared_1859_ == 0)
{
v___x_1861_ = v___x_1858_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v_a_1856_);
v___x_1861_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
return v___x_1861_;
}
}
}
}
else
{
lean_dec(v_declName_1847_);
lean_dec(v_a_1846_);
lean_dec(v_a_1844_);
lean_dec_ref(v___y_1830_);
return v___x_1851_;
}
}
else
{
lean_dec(v_declName_1847_);
lean_dec(v_a_1846_);
lean_dec(v_a_1844_);
lean_dec_ref(v___y_1830_);
return v___x_1848_;
}
}
else
{
lean_object* v_a_1864_; lean_object* v___x_1866_; uint8_t v_isShared_1867_; uint8_t v_isSharedCheck_1871_; 
lean_dec(v_a_1844_);
lean_dec_ref(v___y_1832_);
lean_dec_ref(v___y_1830_);
lean_dec(v_fst_1824_);
lean_dec(v_fst_1820_);
v_a_1864_ = lean_ctor_get(v___x_1845_, 0);
v_isSharedCheck_1871_ = !lean_is_exclusive(v___x_1845_);
if (v_isSharedCheck_1871_ == 0)
{
v___x_1866_ = v___x_1845_;
v_isShared_1867_ = v_isSharedCheck_1871_;
goto v_resetjp_1865_;
}
else
{
lean_inc(v_a_1864_);
lean_dec(v___x_1845_);
v___x_1866_ = lean_box(0);
v_isShared_1867_ = v_isSharedCheck_1871_;
goto v_resetjp_1865_;
}
v_resetjp_1865_:
{
lean_object* v___x_1869_; 
if (v_isShared_1867_ == 0)
{
v___x_1869_ = v___x_1866_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v_a_1864_);
v___x_1869_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
return v___x_1869_;
}
}
}
}
else
{
lean_object* v_a_1872_; lean_object* v___x_1874_; uint8_t v_isShared_1875_; uint8_t v_isSharedCheck_1879_; 
lean_dec_ref(v___y_1832_);
lean_dec_ref(v___y_1830_);
lean_dec(v_fst_1824_);
lean_dec(v_fst_1820_);
lean_dec(v_a_1795_);
v_a_1872_ = lean_ctor_get(v___x_1843_, 0);
v_isSharedCheck_1879_ = !lean_is_exclusive(v___x_1843_);
if (v_isSharedCheck_1879_ == 0)
{
v___x_1874_ = v___x_1843_;
v_isShared_1875_ = v_isSharedCheck_1879_;
goto v_resetjp_1873_;
}
else
{
lean_inc(v_a_1872_);
lean_dec(v___x_1843_);
v___x_1874_ = lean_box(0);
v_isShared_1875_ = v_isSharedCheck_1879_;
goto v_resetjp_1873_;
}
v_resetjp_1873_:
{
lean_object* v___x_1877_; 
if (v_isShared_1875_ == 0)
{
v___x_1877_ = v___x_1874_;
goto v_reusejp_1876_;
}
else
{
lean_object* v_reuseFailAlloc_1878_; 
v_reuseFailAlloc_1878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1878_, 0, v_a_1872_);
v___x_1877_ = v_reuseFailAlloc_1878_;
goto v_reusejp_1876_;
}
v_reusejp_1876_:
{
return v___x_1877_;
}
}
}
}
else
{
lean_dec_ref(v___y_1832_);
lean_dec_ref(v___y_1830_);
lean_dec(v_snd_1825_);
lean_dec(v_fst_1824_);
lean_dec(v_fst_1820_);
lean_dec(v_a_1795_);
return v___x_1842_;
}
}
else
{
lean_dec_ref(v___y_1832_);
lean_dec_ref(v___y_1830_);
lean_dec(v_snd_1825_);
lean_dec(v_fst_1824_);
lean_dec(v_fst_1820_);
lean_dec(v_a_1795_);
lean_dec_ref(v_docCtx_1779_);
return v___x_1841_;
}
}
else
{
lean_object* v_a_1880_; lean_object* v___x_1882_; uint8_t v_isShared_1883_; uint8_t v_isSharedCheck_1887_; 
lean_dec_ref(v___y_1832_);
lean_dec_ref(v___y_1830_);
lean_dec(v_snd_1825_);
lean_dec(v_fst_1824_);
lean_dec(v_fst_1820_);
lean_dec(v_a_1795_);
lean_dec_ref(v_docCtx_1779_);
v_a_1880_ = lean_ctor_get(v___x_1839_, 0);
v_isSharedCheck_1887_ = !lean_is_exclusive(v___x_1839_);
if (v_isSharedCheck_1887_ == 0)
{
v___x_1882_ = v___x_1839_;
v_isShared_1883_ = v_isSharedCheck_1887_;
goto v_resetjp_1881_;
}
else
{
lean_inc(v_a_1880_);
lean_dec(v___x_1839_);
v___x_1882_ = lean_box(0);
v_isShared_1883_ = v_isSharedCheck_1887_;
goto v_resetjp_1881_;
}
v_resetjp_1881_:
{
lean_object* v___x_1885_; 
if (v_isShared_1883_ == 0)
{
v___x_1885_ = v___x_1882_;
goto v_reusejp_1884_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v_a_1880_);
v___x_1885_ = v_reuseFailAlloc_1886_;
goto v_reusejp_1884_;
}
v_reusejp_1884_:
{
return v___x_1885_;
}
}
}
}
v___jp_1890_:
{
lean_object* v_declName_1900_; lean_object* v_type_1901_; lean_object* v_numFixed_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___f_1905_; lean_object* v___x_1906_; uint8_t v___x_1907_; lean_object* v___x_1908_; 
v_declName_1900_ = lean_ctor_get(v_snd_1825_, 3);
v_type_1901_ = lean_ctor_get(v_snd_1825_, 6);
v_numFixed_1902_ = lean_ctor_get(v_fst_1820_, 0);
v___x_1903_ = lean_box_usize(v_sz_1810_);
v___x_1904_ = ((lean_object*)(l_Lean_Elab_wfRecursion___boxed__const__1));
lean_inc(v_fst_1820_);
lean_inc(v_declName_1900_);
lean_inc(v_fst_1824_);
lean_inc(v_snd_1825_);
lean_inc(v_a_1795_);
v___f_1905_ = lean_alloc_closure((void*)(l_Lean_Elab_wfRecursion___lam__4___boxed), 20, 11);
lean_closure_set(v___f_1905_, 0, v___x_1903_);
lean_closure_set(v___f_1905_, 1, v___x_1904_);
lean_closure_set(v___f_1905_, 2, v_a_1795_);
lean_closure_set(v___f_1905_, 3, v_snd_1825_);
lean_closure_set(v___f_1905_, 4, v___y_1891_);
lean_closure_set(v___f_1905_, 5, v_fst_1824_);
lean_closure_set(v___f_1905_, 6, v___x_1796_);
lean_closure_set(v___f_1905_, 7, v___x_1889_);
lean_closure_set(v___f_1905_, 8, v_declName_1900_);
lean_closure_set(v___f_1905_, 9, v_fst_1820_);
lean_closure_set(v___f_1905_, 10, v_wf_1893_);
lean_inc(v_numFixed_1902_);
v___x_1906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1906_, 0, v_numFixed_1902_);
v___x_1907_ = 0;
lean_inc_ref(v_type_1901_);
v___x_1908_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__16___redArg(v_type_1901_, v___x_1906_, v___f_1905_, v___x_1907_, v___x_1907_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_);
if (lean_obj_tag(v___x_1908_) == 0)
{
lean_object* v_a_1909_; lean_object* v___x_1910_; lean_object* v_a_1911_; uint8_t v___x_1912_; 
v_a_1909_ = lean_ctor_get(v___x_1908_, 0);
lean_inc(v_a_1909_);
lean_dec_ref_known(v___x_1908_, 1);
v___x_1910_ = l_Lean_Elab_wfRecursion___lam__2(v___x_1889_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_);
v_a_1911_ = lean_ctor_get(v___x_1910_, 0);
lean_inc(v_a_1911_);
lean_dec_ref(v___x_1910_);
v___x_1912_ = lean_unbox(v_a_1911_);
lean_dec(v_a_1911_);
if (v___x_1912_ == 0)
{
lean_del_object(v___x_1827_);
lean_del_object(v___x_1822_);
v___y_1830_ = v___y_1892_;
v___y_1831_ = v___x_1907_;
v___y_1832_ = v_a_1909_;
v___y_1833_ = v___y_1894_;
v___y_1834_ = v___y_1895_;
v___y_1835_ = v___y_1896_;
v___y_1836_ = v___y_1897_;
v___y_1837_ = v___y_1898_;
v___y_1838_ = v___y_1899_;
goto v___jp_1829_;
}
else
{
lean_object* v_declName_1913_; lean_object* v_value_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1918_; 
v_declName_1913_ = lean_ctor_get(v_a_1909_, 3);
v_value_1914_ = lean_ctor_get(v_a_1909_, 7);
v___x_1915_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__4, &l_Lean_Elab_wfRecursion___closed__4_once, _init_l_Lean_Elab_wfRecursion___closed__4);
lean_inc(v_declName_1913_);
v___x_1916_ = l_Lean_MessageData_ofName(v_declName_1913_);
if (v_isShared_1828_ == 0)
{
lean_ctor_set_tag(v___x_1827_, 7);
lean_ctor_set(v___x_1827_, 1, v___x_1916_);
lean_ctor_set(v___x_1827_, 0, v___x_1915_);
v___x_1918_ = v___x_1827_;
goto v_reusejp_1917_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v___x_1915_);
lean_ctor_set(v_reuseFailAlloc_1926_, 1, v___x_1916_);
v___x_1918_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1917_;
}
v_reusejp_1917_:
{
lean_object* v___x_1919_; lean_object* v___x_1921_; 
v___x_1919_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__6, &l_Lean_Elab_wfRecursion___closed__6_once, _init_l_Lean_Elab_wfRecursion___closed__6);
if (v_isShared_1823_ == 0)
{
lean_ctor_set_tag(v___x_1822_, 7);
lean_ctor_set(v___x_1822_, 1, v___x_1919_);
lean_ctor_set(v___x_1822_, 0, v___x_1918_);
v___x_1921_ = v___x_1822_;
goto v_reusejp_1920_;
}
else
{
lean_object* v_reuseFailAlloc_1925_; 
v_reuseFailAlloc_1925_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1925_, 0, v___x_1918_);
lean_ctor_set(v_reuseFailAlloc_1925_, 1, v___x_1919_);
v___x_1921_ = v_reuseFailAlloc_1925_;
goto v_reusejp_1920_;
}
v_reusejp_1920_:
{
lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; 
lean_inc_ref(v_value_1914_);
v___x_1922_ = l_Lean_MessageData_ofExpr(v_value_1914_);
v___x_1923_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1923_, 0, v___x_1921_);
lean_ctor_set(v___x_1923_, 1, v___x_1922_);
v___x_1924_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___redArg(v___x_1889_, v___x_1923_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_);
if (lean_obj_tag(v___x_1924_) == 0)
{
lean_dec_ref_known(v___x_1924_, 1);
v___y_1830_ = v___y_1892_;
v___y_1831_ = v___x_1907_;
v___y_1832_ = v_a_1909_;
v___y_1833_ = v___y_1894_;
v___y_1834_ = v___y_1895_;
v___y_1835_ = v___y_1896_;
v___y_1836_ = v___y_1897_;
v___y_1837_ = v___y_1898_;
v___y_1838_ = v___y_1899_;
goto v___jp_1829_;
}
else
{
lean_dec(v_a_1909_);
lean_dec_ref(v___y_1892_);
lean_dec(v_snd_1825_);
lean_dec(v_fst_1824_);
lean_dec(v_fst_1820_);
lean_dec(v_a_1795_);
lean_dec_ref(v_docCtx_1779_);
return v___x_1924_;
}
}
}
}
}
else
{
lean_object* v_a_1927_; lean_object* v___x_1929_; uint8_t v_isShared_1930_; uint8_t v_isSharedCheck_1934_; 
lean_dec_ref(v___y_1892_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_fst_1824_);
lean_del_object(v___x_1822_);
lean_dec(v_fst_1820_);
lean_dec(v_a_1795_);
lean_dec_ref(v_docCtx_1779_);
v_a_1927_ = lean_ctor_get(v___x_1908_, 0);
v_isSharedCheck_1934_ = !lean_is_exclusive(v___x_1908_);
if (v_isSharedCheck_1934_ == 0)
{
v___x_1929_ = v___x_1908_;
v_isShared_1930_ = v_isSharedCheck_1934_;
goto v_resetjp_1928_;
}
else
{
lean_inc(v_a_1927_);
lean_dec(v___x_1908_);
v___x_1929_ = lean_box(0);
v_isShared_1930_ = v_isSharedCheck_1934_;
goto v_resetjp_1928_;
}
v_resetjp_1928_:
{
lean_object* v___x_1932_; 
if (v_isShared_1930_ == 0)
{
v___x_1932_ = v___x_1929_;
goto v_reusejp_1931_;
}
else
{
lean_object* v_reuseFailAlloc_1933_; 
v_reuseFailAlloc_1933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1933_, 0, v_a_1927_);
v___x_1932_ = v_reuseFailAlloc_1933_;
goto v_reusejp_1931_;
}
v_reusejp_1931_:
{
return v___x_1932_;
}
}
}
}
v___jp_1935_:
{
if (lean_obj_tag(v_termMeasures_x3f_1792_) == 1)
{
lean_object* v_val_1945_; 
lean_dec_ref(v___y_1938_);
v_val_1945_ = lean_ctor_get(v_termMeasures_x3f_1792_, 0);
lean_inc(v_val_1945_);
lean_dec_ref_known(v_termMeasures_x3f_1792_, 1);
v___y_1891_ = v___y_1937_;
v___y_1892_ = v___y_1936_;
v_wf_1893_ = v_val_1945_;
v___y_1894_ = v___y_1939_;
v___y_1895_ = v___y_1940_;
v___y_1896_ = v___y_1941_;
v___y_1897_ = v___y_1942_;
v___y_1898_ = v___y_1943_;
v___y_1899_ = v___y_1944_;
goto v___jp_1890_;
}
else
{
uint8_t v___x_1946_; lean_object* v___x_1947_; 
lean_dec(v_termMeasures_x3f_1792_);
v___x_1946_ = 1;
v___x_1947_ = l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19___redArg(v___y_1938_, v___x_1946_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
if (lean_obj_tag(v___x_1947_) == 0)
{
lean_object* v_a_1948_; 
v_a_1948_ = lean_ctor_get(v___x_1947_, 0);
lean_inc(v_a_1948_);
lean_dec_ref_known(v___x_1947_, 1);
v___y_1891_ = v___y_1937_;
v___y_1892_ = v___y_1936_;
v_wf_1893_ = v_a_1948_;
v___y_1894_ = v___y_1939_;
v___y_1895_ = v___y_1940_;
v___y_1896_ = v___y_1941_;
v___y_1897_ = v___y_1942_;
v___y_1898_ = v___y_1943_;
v___y_1899_ = v___y_1944_;
goto v___jp_1890_;
}
else
{
lean_object* v_a_1949_; lean_object* v___x_1951_; uint8_t v_isShared_1952_; uint8_t v_isSharedCheck_1956_; 
lean_dec_ref(v___y_1937_);
lean_dec_ref(v___y_1936_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_fst_1824_);
lean_del_object(v___x_1822_);
lean_dec(v_fst_1820_);
lean_dec(v_a_1795_);
lean_dec_ref(v_docCtx_1779_);
v_a_1949_ = lean_ctor_get(v___x_1947_, 0);
v_isSharedCheck_1956_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_1956_ == 0)
{
v___x_1951_ = v___x_1947_;
v_isShared_1952_ = v_isSharedCheck_1956_;
goto v_resetjp_1950_;
}
else
{
lean_inc(v_a_1949_);
lean_dec(v___x_1947_);
v___x_1951_ = lean_box(0);
v_isShared_1952_ = v_isSharedCheck_1956_;
goto v_resetjp_1950_;
}
v_resetjp_1950_:
{
lean_object* v___x_1954_; 
if (v_isShared_1952_ == 0)
{
v___x_1954_ = v___x_1951_;
goto v_reusejp_1953_;
}
else
{
lean_object* v_reuseFailAlloc_1955_; 
v_reuseFailAlloc_1955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1955_, 0, v_a_1949_);
v___x_1954_ = v_reuseFailAlloc_1955_;
goto v_reusejp_1953_;
}
v_reusejp_1953_:
{
return v___x_1954_;
}
}
}
}
}
v___jp_1957_:
{
lean_object* v___x_1964_; lean_object* v_env_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; 
v___x_1964_ = lean_st_ref_get(v___y_1963_);
v_env_1965_ = lean_ctor_get(v___x_1964_, 0);
lean_inc_ref(v_env_1965_);
lean_dec(v___x_1964_);
v___x_1966_ = l_Lean_Environment_unlockAsync(v_env_1965_);
v___x_1967_ = l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__10___redArg(v___x_1966_, v___f_1888_, v___y_1958_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_);
if (lean_obj_tag(v___x_1967_) == 0)
{
lean_object* v_a_1968_; lean_object* v_fst_1969_; lean_object* v_snd_1970_; lean_object* v___x_1972_; uint8_t v_isShared_1973_; uint8_t v_isSharedCheck_1986_; 
v_a_1968_ = lean_ctor_get(v___x_1967_, 0);
lean_inc(v_a_1968_);
lean_dec_ref_known(v___x_1967_, 1);
v_fst_1969_ = lean_ctor_get(v_a_1968_, 0);
v_snd_1970_ = lean_ctor_get(v_a_1968_, 1);
v_isSharedCheck_1986_ = !lean_is_exclusive(v_a_1968_);
if (v_isSharedCheck_1986_ == 0)
{
v___x_1972_ = v_a_1968_;
v_isShared_1973_ = v_isSharedCheck_1986_;
goto v_resetjp_1971_;
}
else
{
lean_inc(v_snd_1970_);
lean_inc(v_fst_1969_);
lean_dec(v_a_1968_);
v___x_1972_ = lean_box(0);
v_isShared_1973_ = v_isSharedCheck_1986_;
goto v_resetjp_1971_;
}
v_resetjp_1971_:
{
lean_object* v___f_1974_; lean_object* v___x_1975_; lean_object* v_a_1976_; uint8_t v___x_1977_; 
lean_inc(v_fst_1824_);
lean_inc(v_fst_1820_);
lean_inc(v_fst_1969_);
lean_inc(v_a_1795_);
v___f_1974_ = lean_alloc_closure((void*)(l_Lean_Elab_wfRecursion___lam__5___boxed), 11, 4);
lean_closure_set(v___f_1974_, 0, v_a_1795_);
lean_closure_set(v___f_1974_, 1, v_fst_1969_);
lean_closure_set(v___f_1974_, 2, v_fst_1820_);
lean_closure_set(v___f_1974_, 3, v_fst_1824_);
v___x_1975_ = l_Lean_Elab_wfRecursion___lam__2(v___x_1889_, v___y_1958_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_);
v_a_1976_ = lean_ctor_get(v___x_1975_, 0);
lean_inc(v_a_1976_);
lean_dec_ref(v___x_1975_);
v___x_1977_ = lean_unbox(v_a_1976_);
lean_dec(v_a_1976_);
if (v___x_1977_ == 0)
{
lean_del_object(v___x_1972_);
v___y_1936_ = v_snd_1970_;
v___y_1937_ = v_fst_1969_;
v___y_1938_ = v___f_1974_;
v___y_1939_ = v___y_1958_;
v___y_1940_ = v___y_1959_;
v___y_1941_ = v___y_1960_;
v___y_1942_ = v___y_1961_;
v___y_1943_ = v___y_1962_;
v___y_1944_ = v___y_1963_;
goto v___jp_1935_;
}
else
{
lean_object* v_value_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1983_; 
v_value_1978_ = lean_ctor_get(v_snd_1825_, 7);
v___x_1979_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__8, &l_Lean_Elab_wfRecursion___closed__8_once, _init_l_Lean_Elab_wfRecursion___closed__8);
lean_inc_ref(v_value_1978_);
v___x_1980_ = l_Lean_MessageData_ofExpr(v_value_1978_);
v___x_1981_ = l_Lean_indentD(v___x_1980_);
if (v_isShared_1973_ == 0)
{
lean_ctor_set_tag(v___x_1972_, 7);
lean_ctor_set(v___x_1972_, 1, v___x_1981_);
lean_ctor_set(v___x_1972_, 0, v___x_1979_);
v___x_1983_ = v___x_1972_;
goto v_reusejp_1982_;
}
else
{
lean_object* v_reuseFailAlloc_1985_; 
v_reuseFailAlloc_1985_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1985_, 0, v___x_1979_);
lean_ctor_set(v_reuseFailAlloc_1985_, 1, v___x_1981_);
v___x_1983_ = v_reuseFailAlloc_1985_;
goto v_reusejp_1982_;
}
v_reusejp_1982_:
{
lean_object* v___x_1984_; 
v___x_1984_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___redArg(v___x_1889_, v___x_1983_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_);
if (lean_obj_tag(v___x_1984_) == 0)
{
lean_dec_ref_known(v___x_1984_, 1);
v___y_1936_ = v_snd_1970_;
v___y_1937_ = v_fst_1969_;
v___y_1938_ = v___f_1974_;
v___y_1939_ = v___y_1958_;
v___y_1940_ = v___y_1959_;
v___y_1941_ = v___y_1960_;
v___y_1942_ = v___y_1961_;
v___y_1943_ = v___y_1962_;
v___y_1944_ = v___y_1963_;
goto v___jp_1935_;
}
else
{
lean_dec_ref(v___f_1974_);
lean_dec(v_snd_1970_);
lean_dec(v_fst_1969_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_fst_1824_);
lean_del_object(v___x_1822_);
lean_dec(v_fst_1820_);
lean_dec(v_a_1795_);
lean_dec(v_termMeasures_x3f_1792_);
lean_dec_ref(v_docCtx_1779_);
return v___x_1984_;
}
}
}
}
}
else
{
lean_object* v_a_1987_; lean_object* v___x_1989_; uint8_t v_isShared_1990_; uint8_t v_isSharedCheck_1994_; 
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_fst_1824_);
lean_del_object(v___x_1822_);
lean_dec(v_fst_1820_);
lean_dec(v_a_1795_);
lean_dec(v_termMeasures_x3f_1792_);
lean_dec_ref(v_docCtx_1779_);
v_a_1987_ = lean_ctor_get(v___x_1967_, 0);
v_isSharedCheck_1994_ = !lean_is_exclusive(v___x_1967_);
if (v_isSharedCheck_1994_ == 0)
{
v___x_1989_ = v___x_1967_;
v_isShared_1990_ = v_isSharedCheck_1994_;
goto v_resetjp_1988_;
}
else
{
lean_inc(v_a_1987_);
lean_dec(v___x_1967_);
v___x_1989_ = lean_box(0);
v_isShared_1990_ = v_isSharedCheck_1994_;
goto v_resetjp_1988_;
}
v_resetjp_1988_:
{
lean_object* v___x_1992_; 
if (v_isShared_1990_ == 0)
{
v___x_1992_ = v___x_1989_;
goto v_reusejp_1991_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v_a_1987_);
v___x_1992_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1991_;
}
v_reusejp_1991_:
{
return v___x_1992_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2006_; lean_object* v___x_2008_; uint8_t v_isShared_2009_; uint8_t v_isSharedCheck_2013_; 
lean_dec(v_a_1795_);
lean_dec(v_termMeasures_x3f_1792_);
lean_dec_ref(v_docCtx_1779_);
v_a_2006_ = lean_ctor_get(v___x_1817_, 0);
v_isSharedCheck_2013_ = !lean_is_exclusive(v___x_1817_);
if (v_isSharedCheck_2013_ == 0)
{
v___x_2008_ = v___x_1817_;
v_isShared_2009_ = v_isSharedCheck_2013_;
goto v_resetjp_2007_;
}
else
{
lean_inc(v_a_2006_);
lean_dec(v___x_1817_);
v___x_2008_ = lean_box(0);
v_isShared_2009_ = v_isSharedCheck_2013_;
goto v_resetjp_2007_;
}
v_resetjp_2007_:
{
lean_object* v___x_2011_; 
if (v_isShared_2009_ == 0)
{
v___x_2011_ = v___x_2008_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v_a_2006_);
v___x_2011_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
return v___x_2011_;
}
}
}
v___jp_1797_:
{
size_t v_sz_1806_; lean_object* v___x_1807_; 
v_sz_1806_ = lean_array_size(v___y_1798_);
lean_inc(v___y_1799_);
v___x_1807_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__18___redArg(v___y_1799_, v___y_1798_, v_sz_1806_, v___x_1791_, v___x_1796_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_);
if (lean_obj_tag(v___x_1807_) == 0)
{
lean_object* v___x_1808_; 
lean_dec_ref_known(v___x_1807_, 1);
v___x_1808_ = l_Lean_enableRealizationsForConst(v___y_1799_, v___y_1804_, v___y_1805_);
if (lean_obj_tag(v___x_1808_) == 0)
{
lean_object* v___x_1809_; 
lean_dec_ref_known(v___x_1808_, 1);
v___x_1809_ = l_Lean_Elab_Mutual_addPreDefAttributes(v___y_1798_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_);
return v___x_1809_;
}
else
{
lean_dec_ref(v___y_1798_);
return v___x_1808_;
}
}
else
{
lean_dec(v___y_1799_);
lean_dec_ref(v___y_1798_);
return v___x_1807_;
}
}
}
else
{
lean_object* v_a_2014_; lean_object* v___x_2016_; uint8_t v_isShared_2017_; uint8_t v_isSharedCheck_2021_; 
lean_dec(v_termMeasures_x3f_1792_);
lean_dec_ref(v_docCtx_1779_);
v_a_2014_ = lean_ctor_get(v___x_1794_, 0);
v_isSharedCheck_2021_ = !lean_is_exclusive(v___x_1794_);
if (v_isSharedCheck_2021_ == 0)
{
v___x_2016_ = v___x_1794_;
v_isShared_2017_ = v_isSharedCheck_2021_;
goto v_resetjp_2015_;
}
else
{
lean_inc(v_a_2014_);
lean_dec(v___x_1794_);
v___x_2016_ = lean_box(0);
v_isShared_2017_ = v_isSharedCheck_2021_;
goto v_resetjp_2015_;
}
v_resetjp_2015_:
{
lean_object* v___x_2019_; 
if (v_isShared_2017_ == 0)
{
v___x_2019_ = v___x_2016_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v_a_2014_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___boxed(lean_object* v_docCtx_2022_, lean_object* v_preDefs_2023_, lean_object* v_termMeasure_x3fs_2024_, lean_object* v_a_2025_, lean_object* v_a_2026_, lean_object* v_a_2027_, lean_object* v_a_2028_, lean_object* v_a_2029_, lean_object* v_a_2030_, lean_object* v_a_2031_){
_start:
{
lean_object* v_res_2032_; 
v_res_2032_ = l_Lean_Elab_wfRecursion(v_docCtx_2022_, v_preDefs_2023_, v_termMeasure_x3fs_2024_, v_a_2025_, v_a_2026_, v_a_2027_, v_a_2028_, v_a_2029_, v_a_2030_);
lean_dec(v_a_2030_);
lean_dec_ref(v_a_2029_);
lean_dec(v_a_2028_);
lean_dec_ref(v_a_2027_);
lean_dec(v_a_2026_);
lean_dec_ref(v_a_2025_);
return v_res_2032_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0(lean_object* v_00_u03b1_2033_, lean_object* v_msg_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_){
_start:
{
lean_object* v___x_2042_; 
v___x_2042_ = l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(v_msg_2034_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_);
return v___x_2042_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___boxed(lean_object* v_00_u03b1_2043_, lean_object* v_msg_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_){
_start:
{
lean_object* v_res_2052_; 
v_res_2052_ = l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0(v_00_u03b1_2043_, v_msg_2044_, v___y_2045_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_);
lean_dec(v___y_2050_);
lean_dec_ref(v___y_2049_);
lean_dec(v___y_2048_);
lean_dec_ref(v___y_2047_);
lean_dec(v___y_2046_);
lean_dec_ref(v___y_2045_);
return v_res_2052_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4(size_t v_sz_2053_, size_t v_i_2054_, lean_object* v_bs_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_){
_start:
{
lean_object* v___x_2063_; 
v___x_2063_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg(v_sz_2053_, v_i_2054_, v_bs_2055_, v___y_2060_, v___y_2061_);
return v___x_2063_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___boxed(lean_object* v_sz_2064_, lean_object* v_i_2065_, lean_object* v_bs_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_){
_start:
{
size_t v_sz_boxed_2074_; size_t v_i_boxed_2075_; lean_object* v_res_2076_; 
v_sz_boxed_2074_ = lean_unbox_usize(v_sz_2064_);
lean_dec(v_sz_2064_);
v_i_boxed_2075_ = lean_unbox_usize(v_i_2065_);
lean_dec(v_i_2065_);
v_res_2076_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4(v_sz_boxed_2074_, v_i_boxed_2075_, v_bs_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_);
lean_dec(v___y_2072_);
lean_dec_ref(v___y_2071_);
lean_dec(v___y_2070_);
lean_dec_ref(v___y_2069_);
lean_dec(v___y_2068_);
lean_dec_ref(v___y_2067_);
return v_res_2076_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5(lean_object* v_as_2077_, size_t v_sz_2078_, size_t v_i_2079_, lean_object* v_b_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_){
_start:
{
lean_object* v___x_2088_; 
v___x_2088_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___redArg(v_as_2077_, v_sz_2078_, v_i_2079_, v_b_2080_, v___y_2085_, v___y_2086_);
return v___x_2088_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___boxed(lean_object* v_as_2089_, lean_object* v_sz_2090_, lean_object* v_i_2091_, lean_object* v_b_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_){
_start:
{
size_t v_sz_boxed_2100_; size_t v_i_boxed_2101_; lean_object* v_res_2102_; 
v_sz_boxed_2100_ = lean_unbox_usize(v_sz_2090_);
lean_dec(v_sz_2090_);
v_i_boxed_2101_ = lean_unbox_usize(v_i_2091_);
lean_dec(v_i_2091_);
v_res_2102_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5(v_as_2089_, v_sz_boxed_2100_, v_i_boxed_2101_, v_b_2092_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_, v___y_2097_, v___y_2098_);
lean_dec(v___y_2098_);
lean_dec_ref(v___y_2097_);
lean_dec(v___y_2096_);
lean_dec_ref(v___y_2095_);
lean_dec(v___y_2094_);
lean_dec_ref(v___y_2093_);
lean_dec_ref(v_as_2089_);
return v_res_2102_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6(lean_object* v_a_2103_, lean_object* v_as_2104_, size_t v_sz_2105_, size_t v_i_2106_, lean_object* v_bs_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_){
_start:
{
lean_object* v___x_2115_; 
v___x_2115_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6___redArg(v_a_2103_, v_sz_2105_, v_i_2106_, v_bs_2107_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_);
return v___x_2115_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6___boxed(lean_object* v_a_2116_, lean_object* v_as_2117_, lean_object* v_sz_2118_, lean_object* v_i_2119_, lean_object* v_bs_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_){
_start:
{
size_t v_sz_boxed_2128_; size_t v_i_boxed_2129_; lean_object* v_res_2130_; 
v_sz_boxed_2128_ = lean_unbox_usize(v_sz_2118_);
lean_dec(v_sz_2118_);
v_i_boxed_2129_ = lean_unbox_usize(v_i_2119_);
lean_dec(v_i_2119_);
v_res_2130_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6(v_a_2116_, v_as_2117_, v_sz_boxed_2128_, v_i_boxed_2129_, v_bs_2120_, v___y_2121_, v___y_2122_, v___y_2123_, v___y_2124_, v___y_2125_, v___y_2126_);
lean_dec(v___y_2126_);
lean_dec_ref(v___y_2125_);
lean_dec(v___y_2124_);
lean_dec_ref(v___y_2123_);
lean_dec(v___y_2122_);
lean_dec_ref(v___y_2121_);
lean_dec_ref(v_as_2117_);
return v_res_2130_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__9(lean_object* v_a_2131_, lean_object* v___x_2132_, size_t v_sz_2133_, size_t v_i_2134_, lean_object* v_bs_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_){
_start:
{
lean_object* v___x_2143_; 
v___x_2143_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__9___redArg(v_a_2131_, v___x_2132_, v_sz_2133_, v_i_2134_, v_bs_2135_, v___y_2140_, v___y_2141_);
return v___x_2143_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__9___boxed(lean_object* v_a_2144_, lean_object* v___x_2145_, lean_object* v_sz_2146_, lean_object* v_i_2147_, lean_object* v_bs_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_){
_start:
{
size_t v_sz_boxed_2156_; size_t v_i_boxed_2157_; lean_object* v_res_2158_; 
v_sz_boxed_2156_ = lean_unbox_usize(v_sz_2146_);
lean_dec(v_sz_2146_);
v_i_boxed_2157_ = lean_unbox_usize(v_i_2147_);
lean_dec(v_i_2147_);
v_res_2158_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__9(v_a_2144_, v___x_2145_, v_sz_boxed_2156_, v_i_boxed_2157_, v_bs_2148_, v___y_2149_, v___y_2150_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_);
lean_dec(v___y_2154_);
lean_dec_ref(v___y_2153_);
lean_dec(v___y_2152_);
lean_dec_ref(v___y_2151_);
lean_dec(v___y_2150_);
lean_dec_ref(v___y_2149_);
return v_res_2158_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__10(lean_object* v_00_u03b1_2159_, lean_object* v_env_2160_, lean_object* v_x_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_){
_start:
{
lean_object* v___x_2169_; 
v___x_2169_ = l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__10___redArg(v_env_2160_, v_x_2161_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_);
return v___x_2169_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__10___boxed(lean_object* v_00_u03b1_2170_, lean_object* v_env_2171_, lean_object* v_x_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_){
_start:
{
lean_object* v_res_2180_; 
v_res_2180_ = l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__10(v_00_u03b1_2170_, v_env_2171_, v_x_2172_, v___y_2173_, v___y_2174_, v___y_2175_, v___y_2176_, v___y_2177_, v___y_2178_);
lean_dec(v___y_2178_);
lean_dec_ref(v___y_2177_);
lean_dec(v___y_2176_);
lean_dec_ref(v___y_2175_);
lean_dec(v___y_2174_);
lean_dec_ref(v___y_2173_);
return v_res_2180_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11(lean_object* v_env_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_){
_start:
{
lean_object* v___x_2189_; 
v___x_2189_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg(v_env_2181_, v___y_2185_, v___y_2187_);
return v___x_2189_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___boxed(lean_object* v_env_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_){
_start:
{
lean_object* v_res_2198_; 
v_res_2198_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11(v_env_2190_, v___y_2191_, v___y_2192_, v___y_2193_, v___y_2194_, v___y_2195_, v___y_2196_);
lean_dec(v___y_2196_);
lean_dec_ref(v___y_2195_);
lean_dec(v___y_2194_);
lean_dec_ref(v___y_2193_);
lean_dec(v___y_2192_);
lean_dec_ref(v___y_2191_);
return v_res_2198_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13_spec__16(lean_object* v_00_u03b2_2199_){
_start:
{
lean_object* v___x_2200_; 
v___x_2200_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__2);
return v___x_2200_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13___redArg(){
_start:
{
lean_object* v___x_2202_; 
v___x_2202_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__2);
return v___x_2202_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13___redArg___boxed(lean_object* v___dummy_2203_){
_start:
{
lean_object* v_res_2204_; 
v_res_2204_ = l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13___redArg();
return v_res_2204_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_wfRecursion_spec__13(lean_object* v_00_u03b2_2205_){
_start:
{
lean_object* v___x_2206_; 
v___x_2206_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__11___redArg___closed__2);
return v___x_2206_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15(lean_object* v_cls_2207_, lean_object* v_msg_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_){
_start:
{
lean_object* v___x_2216_; 
v___x_2216_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___redArg(v_cls_2207_, v_msg_2208_, v___y_2211_, v___y_2212_, v___y_2213_, v___y_2214_);
return v___x_2216_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15___boxed(lean_object* v_cls_2217_, lean_object* v_msg_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_){
_start:
{
lean_object* v_res_2226_; 
v_res_2226_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__15(v_cls_2217_, v_msg_2218_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_);
lean_dec(v___y_2224_);
lean_dec_ref(v___y_2223_);
lean_dec(v___y_2222_);
lean_dec_ref(v___y_2221_);
lean_dec(v___y_2220_);
lean_dec_ref(v___y_2219_);
return v_res_2226_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__17(size_t v_sz_2227_, size_t v_i_2228_, lean_object* v_bs_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_){
_start:
{
lean_object* v___x_2237_; 
v___x_2237_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__17___redArg(v_sz_2227_, v_i_2228_, v_bs_2229_, v___y_2232_, v___y_2233_, v___y_2234_, v___y_2235_);
return v___x_2237_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__17___boxed(lean_object* v_sz_2238_, lean_object* v_i_2239_, lean_object* v_bs_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_){
_start:
{
size_t v_sz_boxed_2248_; size_t v_i_boxed_2249_; lean_object* v_res_2250_; 
v_sz_boxed_2248_ = lean_unbox_usize(v_sz_2238_);
lean_dec(v_sz_2238_);
v_i_boxed_2249_ = lean_unbox_usize(v_i_2239_);
lean_dec(v_i_2239_);
v_res_2250_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__17(v_sz_boxed_2248_, v_i_boxed_2249_, v_bs_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_, v___y_2245_, v___y_2246_);
lean_dec(v___y_2246_);
lean_dec_ref(v___y_2245_);
lean_dec(v___y_2244_);
lean_dec_ref(v___y_2243_);
lean_dec(v___y_2242_);
lean_dec_ref(v___y_2241_);
return v_res_2250_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__18(lean_object* v___x_2251_, lean_object* v_as_2252_, size_t v_sz_2253_, size_t v_i_2254_, lean_object* v_b_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_){
_start:
{
lean_object* v___x_2263_; 
v___x_2263_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__18___redArg(v___x_2251_, v_as_2252_, v_sz_2253_, v_i_2254_, v_b_2255_, v___y_2258_, v___y_2259_, v___y_2260_, v___y_2261_);
return v___x_2263_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__18___boxed(lean_object* v___x_2264_, lean_object* v_as_2265_, lean_object* v_sz_2266_, lean_object* v_i_2267_, lean_object* v_b_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_){
_start:
{
size_t v_sz_boxed_2276_; size_t v_i_boxed_2277_; lean_object* v_res_2278_; 
v_sz_boxed_2276_ = lean_unbox_usize(v_sz_2266_);
lean_dec(v_sz_2266_);
v_i_boxed_2277_ = lean_unbox_usize(v_i_2267_);
lean_dec(v_i_2267_);
v_res_2278_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__18(v___x_2264_, v_as_2265_, v_sz_boxed_2276_, v_i_boxed_2277_, v_b_2268_, v___y_2269_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_);
lean_dec(v___y_2274_);
lean_dec_ref(v___y_2273_);
lean_dec(v___y_2272_);
lean_dec_ref(v___y_2271_);
lean_dec(v___y_2270_);
lean_dec_ref(v___y_2269_);
lean_dec_ref(v_as_2265_);
return v_res_2278_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19(lean_object* v_00_u03b1_2279_, lean_object* v_x_2280_, uint8_t v_when_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_){
_start:
{
lean_object* v___x_2289_; 
v___x_2289_ = l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19___redArg(v_x_2280_, v_when_2281_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_, v___y_2286_, v___y_2287_);
return v___x_2289_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19___boxed(lean_object* v_00_u03b1_2290_, lean_object* v_x_2291_, lean_object* v_when_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_){
_start:
{
uint8_t v_when_boxed_2300_; lean_object* v_res_2301_; 
v_when_boxed_2300_ = lean_unbox(v_when_2292_);
v_res_2301_ = l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19(v_00_u03b1_2290_, v_x_2291_, v_when_boxed_2300_, v___y_2293_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_);
lean_dec(v___y_2298_);
lean_dec_ref(v___y_2297_);
lean_dec(v___y_2296_);
lean_dec_ref(v___y_2295_);
lean_dec(v___y_2294_);
lean_dec_ref(v___y_2293_);
return v_res_2301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1(lean_object* v_msgData_2302_, lean_object* v_macroStack_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_){
_start:
{
lean_object* v___x_2311_; 
v___x_2311_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg(v_msgData_2302_, v_macroStack_2303_, v___y_2308_);
return v___x_2311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___boxed(lean_object* v_msgData_2312_, lean_object* v_macroStack_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_){
_start:
{
lean_object* v_res_2321_; 
v_res_2321_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1(v_msgData_2312_, v_macroStack_2313_, v___y_2314_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_);
lean_dec(v___y_2319_);
lean_dec_ref(v___y_2318_);
lean_dec(v___y_2317_);
lean_dec_ref(v___y_2316_);
lean_dec(v___y_2315_);
lean_dec_ref(v___y_2314_);
return v_res_2321_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3(lean_object* v_ref_2322_, lean_object* v_msgData_2323_, uint8_t v_severity_2324_, uint8_t v_isSilent_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_){
_start:
{
lean_object* v___x_2333_; 
v___x_2333_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___redArg(v_ref_2322_, v_msgData_2323_, v_severity_2324_, v_isSilent_2325_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
return v___x_2333_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3___boxed(lean_object* v_ref_2334_, lean_object* v_msgData_2335_, lean_object* v_severity_2336_, lean_object* v_isSilent_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_){
_start:
{
uint8_t v_severity_boxed_2345_; uint8_t v_isSilent_boxed_2346_; lean_object* v_res_2347_; 
v_severity_boxed_2345_ = lean_unbox(v_severity_2336_);
v_isSilent_boxed_2346_ = lean_unbox(v_isSilent_2337_);
v_res_2347_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__1_spec__3(v_ref_2334_, v_msgData_2335_, v_severity_boxed_2345_, v_isSilent_boxed_2346_, v___y_2338_, v___y_2339_, v___y_2340_, v___y_2341_, v___y_2342_, v___y_2343_);
lean_dec(v___y_2343_);
lean_dec_ref(v___y_2342_);
lean_dec(v___y_2341_);
lean_dec_ref(v___y_2340_);
lean_dec(v___y_2339_);
lean_dec_ref(v___y_2338_);
lean_dec(v_ref_2334_);
return v_res_2347_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19_spec__23(lean_object* v_00_u03b1_2348_, lean_object* v_x_2349_, uint8_t v_isExporting_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_){
_start:
{
lean_object* v___x_2358_; 
v___x_2358_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19_spec__23___redArg(v_x_2349_, v_isExporting_2350_, v___y_2351_, v___y_2352_, v___y_2353_, v___y_2354_, v___y_2355_, v___y_2356_);
return v___x_2358_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19_spec__23___boxed(lean_object* v_00_u03b1_2359_, lean_object* v_x_2360_, lean_object* v_isExporting_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_){
_start:
{
uint8_t v_isExporting_boxed_2369_; lean_object* v_res_2370_; 
v_isExporting_boxed_2369_ = lean_unbox(v_isExporting_2361_);
v_res_2370_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__19_spec__23(v_00_u03b1_2359_, v_x_2360_, v_isExporting_boxed_2369_, v___y_2362_, v___y_2363_, v___y_2364_, v___y_2365_, v___y_2366_, v___y_2367_);
lean_dec(v___y_2367_);
lean_dec_ref(v___y_2366_);
lean_dec(v___y_2365_);
lean_dec_ref(v___y_2364_);
lean_dec(v___y_2363_);
lean_dec_ref(v___y_2362_);
return v_res_2370_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2441_; uint8_t v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; 
v___x_2441_ = ((lean_object*)(l_Lean_Elab_wfRecursion___closed__2));
v___x_2442_ = 0;
v___x_2443_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_));
v___x_2444_ = l_Lean_registerTraceClass(v___x_2441_, v___x_2442_, v___x_2443_);
return v___x_2444_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2____boxed(lean_object* v_a_2445_){
_start:
{
lean_object* v_res_2446_; 
v_res_2446_ = l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_();
return v_res_2446_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_PackMutual(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_FloatRecApp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Rel(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Fix(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Unfold(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Preprocess(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_GuessLex(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Main(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_PreDefinition_WF_PackMutual(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_FloatRecApp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Rel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Fix(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Unfold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Preprocess(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_GuessLex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_WF_Main(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_WF_PackMutual(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_FloatRecApp(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Rel(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Fix(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Unfold(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Preprocess(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_GuessLex(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_WF_Main(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_WF_PackMutual(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_FloatRecApp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Rel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Fix(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Unfold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Preprocess(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_GuessLex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_WF_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_WF_Main(builtin);
}
#ifdef __cplusplus
}
#endif
